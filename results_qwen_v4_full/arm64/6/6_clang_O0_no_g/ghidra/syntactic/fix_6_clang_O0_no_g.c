/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned int undefined;
typedef void (*code)(void);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <signal.h>
#include <sys/auxv.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/mman.h>
#include <fcntl.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Global variables */
typedef struct {
    int _0_4_;
    char _4_1_;
    char _5_1_;
    char _6_1_;
    char _7_1_;
} atomic_counter_t;
atomic_counter_t atomic_counter;
int signal_received;
int signal_number;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int data;
int ready;
int shared_counter;
int completed_0;
void *__dso_handle;
char *DAT_00103911;
char *DAT_00103915;
char *DAT_00103919;
char *DAT_0010391d;
char *DAT_00103921;
char *DAT_001039aa;
char *DAT_001039cf;
char *DAT_001039ea;
char *DAT_00103a05;
char *DAT_00103a21;
char *DAT_00103a3d;
char *DAT_00103a59;
char *DAT_00103a75;
char *DAT_00103a92;
char *DAT_00103aae;
char *DAT_00103aca;
char *DAT_00103ae6;
char *DAT_00103b01;
char *DAT_00103b50;
char *DAT_00103b6c;
char *DAT_00103b88;
char *DAT_00103ba4;
char *DAT_00103bc0;
char *DAT_00103bdc;
char *DAT_00103bf8;
char *DAT_00103c14;
char *DAT_00103c3a;
char *DAT_00103c59;
char *DAT_00103c75;
char *DAT_00103c92;
char *DAT_00103cae;
char *DAT_00103cca;
char *DAT_00103ce6;

/* External declarations */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern long tpidr_el0;
extern int ExclusiveMonitorPass(void *, long);
extern char ExclusiveMonitorsStatus(void);
extern void LOAcquire(void);
extern void LORelease(void);
extern int __isoc99_sscanf(const char *, const char *, ...);
extern int *__errno_location(void);
extern void signal_handler(int);
extern int __aarch64_ldadd4_acq_rel(int, int *);
extern int __aarch64_cas4_acq_rel(int, int, int *);
extern int pthread_join(pthread_t, void **);
int signal_received;
int signal_number;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int data;
int ready;
int shared_counter;
int completed_0;
void *__dso_handle;

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001012e0 @ 001012e0 */

void FUN_001012e0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00101700 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = getauxval(0x10);
 atomic_counter._4_1_ = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001017fc @ 001017fc */

void FUN_001017fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 00101854 */

undefined4 param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return 0;
}



/* Function: call_strcpy @ 00101888 */

undefined4 call_strcpy(void)

{
 undefined4 uVar1;
 undefined1 auStack_30 [32];
 
 uVar1 = param_strcpy(auStack_30,"HelloLib");
 return uVar1;
}



/* Function: param_strcmp @ 001018b8 */

undefined4 param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 undefined4 local_28;
 
 iVar1 = strcmp(param_1,param_2);
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



/* Function: call_strcmp @ 00101920 */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp(DAT_00103911,DAT_00103915);
 iVar2 = param_strcmp(DAT_00103919,DAT_0010391d);
 iVar3 = param_strcmp(DAT_00103921,DAT_00103921);
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101990 */

ulong param_strlen(char *param_1)

{
 size_t sVar1;
 
 sVar1 = strlen(param_1);
 return sVar1 & 0xffffffff;
}



/* Function: call_strlen @ 001019c0 */

void call_strlen(void)

{
 param_strlen("BinBench2025");
 return;
}



/* Function: param_memcpy @ 001019ec */

ulong param_memcpy(void *param_1,void *param_2,ulong param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00101a28 */

int call_memcpy(void)

{
 undefined8 local_48;
 undefined8 local_40;
 int local_38;
 undefined8 local_30;
 undefined8 uStack_28;
 undefined4 local_20;
 
 uStack_28 = 0x280000001e;
 local_30 = 0x140000000a;
 local_20 = 0x32;
 local_48 = 0;
 local_40 = 0;
 local_38 = 0;
 param_memcpy(&local_48,&local_30,0x14);
 return (int)local_48 + (int)local_40 + local_38;
}



/* Function: param_memcmp @ 00101a88 */

undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 undefined4 local_30;
 
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 local_30 = 0;
 if (iVar1 < 0) {
 local_30 = 0xffffffff;
 }
 }
 else {
 local_30 = 1;
 }
 return local_30;
}



/* Function: call_memcmp @ 00101af8 */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 undefined8 local_40;
 undefined4 local_38;
 undefined8 local_30;
 undefined4 local_28;
 undefined8 local_20;
 undefined4 local_18;
 
 local_20 = 0x200000001;
 local_18 = 3;
 local_30 = 0x200000001;
 local_28 = 4;
 local_40 = 0x200000001;
 local_38 = 3;
 iVar1 = param_memcmp(&local_20,&local_30,4);
 iVar2 = param_memcmp(&local_20,&local_40,0xc);
 return iVar1 + iVar2;
}



/* Function: param_printf @ 00101ba0 */

int param_printf(uint param_1,char *param_2)

{
 int iVar1;
 
 iVar1 = printf("Value: %d, Name: %s\n",(ulong)param_1,param_2);
 return iVar1;
}



/* Function: call_printf @ 00101bdc */

undefined4 call_printf(void)

{
 undefined4 uVar1;
 
 uVar1 = param_printf(0x2a,"Test");
 return uVar1;
}



/* Function: param_scanf @ 00101c0c */

int param_scanf(char *param_1)

{
 int iVar1;
 int local_28;
 int local_24;
 char *local_20;
 int local_14;
 
 local_20 = param_1;
 iVar1 = __isoc99_sscanf(local_20,"%d,%d",&local_24,&local_28);
 if (iVar1 == 2) {
 local_14 = local_24 + local_28;
 }
 else {
 local_14 = -1;
 }
 return local_14;
}



/* Function: call_scanf @ 00101c78 */

void call_scanf(void)

{
 param_scanf("123,456");
 return;
}



/* Function: param_fopen_fclose @ 00101c94 */

int param_fopen_fclose(char *param_1)

{
 FILE *__stream;
 int local_14;
 
 __stream = fopen(param_1,"r");
 if (__stream == (FILE *)0x0) {
 local_14 = -1;
 }
 else {
 local_14 = fileno(__stream);
 fclose(__stream);
 }
 return local_14;
}



/* Function: call_fopen_fclose @ 00101d00 */

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



/* Function: param_fread_fwrite @ 00101d38 */

undefined4 param_fread_fwrite(char *param_1)

{
 char *__ptr;
 bool bVar1;
 int iVar2;
 FILE *__s;
 size_t sVar3;
 size_t sVar4;
 char acStack_48 [32];
 char *local_28;
 char *local_20;
 undefined4 local_14;
 
 local_28 = "BinBench Test Data";
 local_20 = param_1;
 __s = fopen(param_1,"w+");
 __ptr = local_28;
 if (__s == (FILE *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 sVar3 = strlen(local_28);
 sVar3 = fwrite(__ptr,1,sVar3,__s);
 sVar4 = strlen(local_28);
 if (sVar3 == sVar4) {
 rewind(__s);
 sVar4 = fread(acStack_48,1,sVar3,__s);
 acStack_48[sVar4] = '\0';
 fclose(__s);
 unlink(local_20);
 bVar1 = false;
 if (sVar4 == sVar3) {
 iVar2 = strcmp(acStack_48,local_28);
 bVar1 = iVar2 == 0;
 }
 local_14 = 0x2a;
 if (!bVar1) {
 local_14 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 local_14 = 0xfffffffe;
 }
 }
 return local_14;
}



/* Function: call_fread_fwrite @ 00101e84 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00101ea0 */

int param_malloc_free(ulong param_1)

{
 int *__ptr;
 ulong local_30;
 int local_14;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 local_14 = -1;
 }
 else {
 for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
 __ptr[local_30] = (int)local_30 * 10;
 }
 local_14 = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return local_14;
}



/* Function: call_malloc_free @ 00101f68 */

undefined4 call_malloc_free(void)

{
 return param_malloc_free(10);
}



/* Function: param_memset @ 00101f80 */

int param_memset(void *param_1,ulong param_2)

{
 undefined8 local_38;
 undefined4 local_2c;
 
 memset(param_1,0,param_2);
 local_2c = 0;
 for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
 local_2c = local_2c + (uint)*(byte *)((long)param_1 + local_38);
 }
 return local_2c;
}



/* Function: call_memset @ 00102008 */

undefined4 call_memset(void)

{
 int local_3c;
 int local_38 [10];
 
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 local_38[local_3c] = 0xff;
 }
 return param_memset(local_38,0x28);
}



/* Function: param_strchr_strstr @ 00102074 */

int param_strchr_strstr(char *param_1,byte param_2,char *param_3)

{
 char *pcVar1;
 undefined4 local_58;
 undefined4 local_50;
 
 pcVar1 = strchr(param_1,(uint)param_2);
 if (pcVar1 == (char *)0x0) {
 local_50 = -1;
 }
 else {
 local_50 = (int)pcVar1 - (int)param_1;
 }
 pcVar1 = strstr(param_1,param_3);
 if (pcVar1 == (char *)0x0) {
 local_58 = -1;
 }
 else {
 local_58 = (int)pcVar1 - (int)param_1;
 }
 return local_50 + local_58;
}



/* Function: call_strchr_strstr @ 0010212c */

undefined4 call_strchr_strstr(void)

{
 undefined4 uVar1;
 
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}



/* Function: test_standard_library_functions @ 0010216c */

int test_standard_library_functions(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_001039aa);
 uVar2 = call_strcpy();
 iVar1 = printf(DAT_001039cf,uVar2 & 0xffffffff);
 uVar2 = call_strcmp();
 iVar1 = printf(DAT_001039ea,uVar2 & 0xffffffff);
 call_strlen();
 iVar1 = printf(DAT_00103a05,12);
 uVar2 = call_memcpy();
 iVar1 = printf(DAT_00103a21,uVar2 & 0xffffffff);
 uVar2 = call_memcmp();
 iVar1 = printf(DAT_00103a3d,uVar2 & 0xffffffff);
 uVar2 = call_printf();
 iVar1 = printf(DAT_00103a59,uVar2 & 0xffffffff);
 call_scanf();
 iVar1 = printf(DAT_00103a75,0);
 uVar2 = call_fopen_fclose();
 iVar1 = printf(DAT_00103a92,uVar2 & 0xffffffff);
 call_fread_fwrite();
 iVar1 = printf(DAT_00103aae,0);
 uVar2 = call_malloc_free();
 iVar1 = printf(DAT_00103aca,uVar2 & 0xffffffff);
 call_memset();
 iVar1 = printf(DAT_00103ae6,0);
 uVar2 = call_strchr_strstr();
 iVar1 = printf(DAT_00103b01,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: param_linux_syscall @ 00102278 */

int param_linux_syscall(char *param_1)

{
 ulong uVar1;
 int *piVar2;
 undefined4 local_14;
 
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 local_14 = (int)uVar1;
 if (local_14 < 0) {
 piVar2 = __errno_location();
 local_14 = -*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff,uVar1 & 0xffffffff);
 }
 return local_14;
}



/* Function: call_linux_syscall @ 001022f4 */

undefined4 call_linux_syscall(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_win32_api @ 0010232c */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 struct stat sStack_a0;
 
 iVar1 = stat(param_1,&sStack_a0);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 else {
 if (sStack_a0.st_size < 1) {
 return 0xfffffffe;
 }
 return 0x2a;
 }
}



/* Function: call_win32_api @ 0010238c */

void call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return;
}



/* Function: param_fork_exec @ 001023a8 */

int param_fork_exec(char *param_1,undefined8 param_2)

{
 __pid_t _Var1;
 uint local_30;
 __pid_t local_2c;
 undefined8 local_28;
 char *local_20;
 int local_14;
 
 local_28 = param_2;
 local_20 = param_1;
 local_2c = fork();
 if (local_2c < 0) {
 local_14 = -1;
 }
 else {
 if (local_2c == 0) {
 execl(local_20,local_20,local_28,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(local_2c,(int *)&local_30,0);
 if (_Var1 < 0) {
 local_14 = -2;
 }
 else if ((local_30 & 0x7f) == 0) {
 local_14 = (int)(local_30 & 0xff00) >> 8;
 }
 else {
 local_14 = -3;
 }
 }
 return local_14;
}



/* Function: call_fork_exec @ 00102478 */

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



/* Function: param_pipe_communication @ 001024b4 */

undefined4 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 undefined1 auStack_3c [32];
 int local_1c;
 int local_18;
 undefined4 local_14;
 
 iVar1 = pipe(&local_1c);
 if (iVar1 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 local_14 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_1c);
 iVar1 = local_18;
 __n = strlen("HelloPipe");
 write(iVar1,"HelloPipe",__n);
 close(local_18);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_18);
 sVar3 = read(local_1c,auStack_3c,0x1f);
 auStack_3c[sVar3] = 0;
 close(local_1c);
 wait((void *)0x0);
 local_14 = 0x2a;
 if (sVar3 < 1) {
 local_14 = 0xfffffffd;
 }
 }
 }
 return local_14;
}



/* Function: call_pipe_communication @ 001025c8 */

void call_pipe_communication(void)

{
 param_pipe_communication();
 return;
}



/* Function: param_socket_create @ 001025dc */

 undefined4 param_socket_create(void)

{
 uint16_t uVar1;
 int iVar2;
 struct sockaddr local_30;
 undefined4 local_1c;
 int local_18;
 undefined4 local_14;
 
 local_18 = socket(2,1,0);
 if (local_18 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 local_1c = 1;
 iVar2 = setsockopt(local_18,1,2,&local_1c,4);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffe;
 }
 else {
 local_30.sa_data[6] = '\0';
 local_30.sa_data[7] = '\0';
 local_30.sa_data[8] = '\0';
 local_30.sa_data[9] = '\0';
 local_30.sa_data[10] = '\0';
 local_30.sa_data[0xb] = '\0';
 local_30.sa_data[0xc] = '\0';
 local_30.sa_data[0xd] = '\0';
 local_30.sa_family = 2;
 local_30.sa_data[0] = '\0';
 local_30.sa_data[1] = '\0';
 local_30.sa_data[2] = '\0';
 local_30.sa_data[3] = '\0';
 local_30.sa_data[4] = '\0';
 local_30.sa_data[5] = '\0';
 uVar1 = htons(0);
 ((uint16_t *)local_30.sa_data)[0] = uVar1;
 ((uint32_t *)local_30.sa_data)[1] = 0;
 iVar2 = bind(local_18,&local_30,0x10);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffd;
 }
 else {
 iVar2 = listen(local_18,5);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffc;
 }
 else {
 close(local_18);
 local_14 = 0x2a;
 }
 }
 }
 }
 return local_14;
}



/* Function: call_socket_create @ 001026fc */

void call_socket_create(void)

{
 param_socket_create();
 return;
}



/* Function: param_shmget_shmat @ 00102710 */

undefined4 param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t sVar2;
 undefined4 local_14;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 local_14 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 local_14 = 0xfffffffe;
 }
 else {
 __dest = shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffffffffffff) {
 local_14 = 0xfffffffd;
 }
 else {
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 local_14 = (undefined4)sVar2;
 shmdt(__dest);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return local_14;
}



/* Function: call_shmget_shmat @ 00102844 */

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



/* Function: param_signal_handling @ 00102874 */

undefined4 param_signal_handling(void)

{
 int iVar1;
 __sighandler_t p_Var2;
 int local_18;
 undefined4 local_14;
 
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 local_14 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 local_14 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 local_18 = 1000;
 while( true ) {
 iVar1 = local_18;
 if (signal_received == 0) {
 local_18 = local_18 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if (signal_received == 0) {
 local_14 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_18 = 2000;
 while( true ) {
 iVar1 = local_18;
 if (signal_received == 0) {
 local_18 = local_18 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 local_14 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 local_14 = 0x2a;
 }
 }
 else {
 local_14 = 0xfffffffc;
 }
 }
 }
 return local_14;
}



/* Function: signal_handler @ 00102a44 */

void signal_handler(int param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: call_signal_handling @ 00102a6c */

void call_signal_handling(void)

{
 param_signal_handling();
 return;
}



/* Function: test_system_calls @ 00102a80 */

int test_system_calls(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00103b50);
 uVar2 = call_linux_syscall();
 iVar1 = printf(DAT_00103b6c,uVar2 & 0xffffffff);
 call_win32_api();
 iVar1 = printf(DAT_00103b88,0);
 uVar2 = call_fork_exec();
 iVar1 = printf(DAT_00103ba4,uVar2 & 0xffffffff);
 uVar2 = call_pipe_communication();
 iVar1 = printf(DAT_00103bc0,uVar2 & 0xffffffff);
 call_socket_create();
 iVar1 = printf(DAT_00103bdc,0);
 uVar2 = call_shmget_shmat();
 iVar1 = printf(DAT_00103bf8,uVar2 & 0xffffffff);
 uVar2 = call_signal_handling();
 iVar1 = printf(DAT_00103c14,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: thread_compute @ 00102b28 */

void * thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *(int *)param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 00102b84 */

undefined4 param_pthread_create(undefined4 param_1)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 *local_30;
 undefined4 local_24;
 pthread_t local_20;
 void *local_2c;
 undefined4 local_18;
 undefined4 local_14;
 
 local_24 = param_1;
 local_18 = param_1;
 iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar2 == 0) {
 pthread_join(local_20,&local_2c);
 local_30 = (undefined4 *)local_2c;
 uVar1 = *local_30;
 free(local_30);
 local_14 = uVar1;
 }
 else {
 local_14 = 0xffffffff;
 }
 return local_14;
}



/* Function: call_pthread_create @ 00102c0c */

void call_pthread_create(void)

{
 param_pthread_create(7);
 return;
}



/* Function: thread_sum @ 00102c24 */

void * thread_sum(void *param_1)

{
 int local_14;
 int *p = (int *)param_1;
 int *result;
 
 p[2] = 0;
 for (local_14 = p[0]; local_14 <= p[1]; local_14 = local_14 + 1) {
 p[2] = p[2] + local_14;
 }
 result = malloc(4);
 *result = p[2];
 return result;
}



/* Function: param_pthread_join @ 00102c98 */

int param_pthread_join(void)

{
 int iVar1;
 int local_60;
 int local_5c;
 int local_58;
 int local_54 [6];
 undefined4 local_3c;
 undefined4 local_38;
 pthread_t apStack_30 [4];
 void *local_10;
 void *thread_result;
 
 memset(local_54,0,0x24);
 local_54[0] = 1;
 local_54[1] = 10;
 local_54[2] = 0;
 local_54[3] = 0xb;
 local_54[4] = 0x14;
 local_54[5] = 0;
 local_3c = 0x15;
 local_38 = 0x1e;
 for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
 iVar1 = pthread_create(&apStack_30[local_58],(pthread_attr_t *)0x0,thread_sum,
 (void *)((long)local_54 + local_58 * 12));
 if (iVar1 != 0) {
 return -1;
 }
 }
 local_5c = 0;
 local_60 = 0;
 while( local_60 < 3 ) {
 (void)pthread_join(apStack_30[local_60],&thread_result);
 if (thread_result != (void *)0) {
  local_5c = local_5c + *(int *)thread_result;
  free(thread_result);
 }
 local_60 = local_60 + 1;
 }
 return local_5c;
}



/* Function: call_pthread_join @ 00102dec */

undefined4 call_pthread_join(void)

{
 return param_pthread_join();
}



/* Function: thread_increment @ 00102e00 */

void * thread_increment(void *param_1)

{
 int iVar1;
 int local_20;
 
 iVar1 = *(int *)param_1;
 for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return (void *)0;
}



/* Function: param_mutex_lock @ 00102e8c */

undefined4 param_mutex_lock(int param_1,int param_2)

{
 int iVar1;
 void *__ptr;
 int local_30;
 int local_2c;
 int local_1c;
 int local_18;
 undefined4 local_14;
 
 local_1c = param_2;
 local_18 = param_1;
 pthread_mutex_init(&counter_mutex, NULL);
 __ptr = malloc((long)param_1 << 3);
 if (__ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_2c = 0; local_2c < local_18; local_2c = local_2c + 1) {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + (long)local_2c * 8),(pthread_attr_t *)0x0,
 thread_increment,&local_1c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + (long)local_30 * 8),(void **)0x0);
 }
 free(__ptr);
 local_14 = 0x2a;
 if (shared_counter != local_18 * local_1c) {
 local_14 = 0xfffffffd;
 }
 }
 pthread_mutex_destroy(&counter_mutex);
 return local_14;
}



/* Function: call_mutex_lock @ 00102fcc */

undefined4 call_mutex_lock(void)

{
 return param_mutex_lock(4,1000);
}



/* Function: consumer_thread @ 00102fe8 */

void * consumer_thread(void *param_1)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock(&cond_mutex);
 while (ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 }
 uVar1 = data;
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}



/* Function: producer_thread @ 00103070 */

void * producer_thread(void *param_1)

{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}



/* Function: param_condition_variable @ 001030d8 */

undefined4 param_condition_variable(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 *local_30;
 pthread_t local_28;
 pthread_t local_20;
 void *local_24;
 undefined4 local_14;
 
 pthread_mutex_init(&cond_mutex, NULL);
 pthread_cond_init(&cond, NULL);
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar2 == 0) {
 iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_28,&local_24);
 pthread_join(local_20,(void **)0x0);
 local_30 = (undefined4 *)local_24;
 uVar1 = *(undefined4 *)local_30;
 free(local_30);
 local_14 = uVar1;
 }
 else {
 pthread_cancel(local_28);
 local_14 = 0xfffffffe;
 }
 }
 else {
 local_14 = 0xffffffff;
 }
 pthread_mutex_destroy(&cond_mutex);
 pthread_cond_destroy(&cond);
 return local_14;
}



/* Function: call_condition_variable @ 0010319c */

undefined4 call_condition_variable(void)

{
 return param_condition_variable();
}



/* Function: thread_atomic_increment @ 001031b0 */

void * thread_atomic_increment(void *param_1)

{
 int iVar1;
 int local_20;
 
 iVar1 = *(int *)param_1;
 for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter._0_4_);
 __aarch64_cas4_acq_rel(local_20,local_20 + 1000,&atomic_counter._0_4_);
 }
 return (void *)0;
}



/* Function: thread_atomic_load_store @ 00103298 */

void * thread_atomic_load_store(void *param_1)

{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return (void *)0;
}



/* Function: param_atomic_ops @ 001032d8 */

undefined4 param_atomic_ops(int param_1,undefined4 param_2)

{
 int iVar1;
 int local_3c;
 pthread_t local_38;
 int local_30;
 undefined4 local_2c;
 void *local_28;
 undefined4 local_1c;
 int local_18;
 undefined4 local_14;
 
 local_1c = param_2;
 local_18 = param_1;
 local_28 = malloc((long)param_1 << 3);
 if (local_28 == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 local_2c = 0;
 atomic_counter._0_4_ = 0;
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_28 + (long)local_30 * 8),
 (pthread_attr_t *)0x0,thread_atomic_increment,&local_1c);
 if (iVar1 != 0) {
 free(local_28);
 return 0xfffffffe;
 }
 }
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_38,(void **)0x0);
 }
 for (local_3c = 0; local_3c < local_18; local_3c = local_3c + 1) {
 pthread_join(*(pthread_t *)((long)local_28 + (long)local_3c * 8),(void **)0x0);
 }
 free(local_28);
 local_14 = 0x2a;
 if (atomic_counter._0_4_ < 1) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}



/* Function: call_atomic_ops @ 00103458 */

undefined4 call_atomic_ops(void)

{
 return param_atomic_ops(4,500);
}



/* Function: thread_tls_test @ 00103474 */

void * thread_tls_test(void *param_1)

{
 int *piVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 char *p = (char *)param_1;
 
 lVar3 = tpidr_el0;
 piVar1 = (int *)(lVar3 + 0x10);
 iVar2 = *piVar1;
 *piVar1 = *piVar1 + 0x32;
 strncpy((char *)(lVar3 + 0x14),p,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = *piVar1;
 return piVar4;
}



/* Function: param_thread_local_storage @ 00103504 */

undefined4 param_thread_local_storage(int param_1)

{
 int iVar1;
 void *pvVar2;
 int *local_48;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 uint local_2c;
 void *local_28;
 void *local_20;
 int *thread_result_join;
 int local_18;
 undefined4 local_14;
 
 local_18 = param_1;
 local_20 = malloc((long)param_1 << 3);
 local_28 = malloc((long)local_18 << 3);
 if ((local_20 == (void *)0x0) || (local_28 == (void *)0x0)) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_2c = 0; (int)local_2c < local_18; local_2c = local_2c + 1) {
 pvVar2 = malloc(0x10);
 *(void **)((long)local_28 + (long)(int)local_2c * 8) = pvVar2;
 snprintf(*(char **)((long)local_28 + (long)(int)local_2c * 8),0x10,"Thread-%d",(ulong)local_2c
 );
 }
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_20 + (long)local_30 * 8),
 (pthread_attr_t *)0x0,thread_tls_test,
 (void *)(*(void **)((long)local_28 + (long)local_30 * 8)));
 if (iVar1 != 0) {
 for (local_34 = 0; local_34 <= local_30; local_34 = local_34 + 1) {
 free(*(void **)((long)local_28 + (long)local_34 * 8));
 }
 free(local_28);
 free(local_20);
 return 0xfffffffe;
 }
 }
 local_38 = 0;
 local_3c = 0;
 for (local_40 = 0; local_40 < local_18; local_40 = local_40 + 1) {
 (void)pthread_join(*(pthread_t *)((long)local_20 + (long)local_40 * 8),(void **)0x0);
 local_48 = thread_result_join;
 if (local_48 != (int *)0) {
  local_38 = local_38 + *local_48;
  local_3c = local_3c + local_48[1];
  free(local_48);
 }
 free(*(void **)((long)local_28 + (long)local_40 * 8));
 }
 free(local_28);
 free(local_20);
 local_14 = 0x2a;
 if (local_38 != local_18 * 100 || local_3c != local_18 * 0x96) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}



/* Function: call_thread_local_storage @ 001037a0 */

undefined4 call_thread_local_storage(void)

{
 return param_thread_local_storage(4);
}



/* Function: test_thread_concurrency @ 001037b8 */

int test_thread_concurrency(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00103c3a);
 uVar2 = call_pthread_create();
 iVar1 = printf(DAT_00103c59,uVar2 & 0xffffffff);
 call_pthread_join();
 iVar1 = printf(DAT_00103c75,0);
 uVar2 = call_mutex_lock();
 iVar1 = printf(DAT_00103c92,uVar2 & 0xffffffff);
 uVar2 = call_condition_variable();
 iVar1 = printf(DAT_00103cae,uVar2 & 0xffffffff);
 uVar2 = call_atomic_ops();
 iVar1 = printf(DAT_00103cca,uVar2 & 0xffffffff);
 uVar2 = call_thread_local_storage();
 iVar1 = printf(DAT_00103ce6,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 0010384c */

undefined4 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 00103880 */

int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (atomic_counter._4_1_ != '\0') {
 iVar3 = *param_3;
 if (iVar3 == param_1) {
 *param_3 = param_2;
 }
 return iVar3;
 }
 do {
 iVar3 = *param_3;
 if (*param_3 != param_1) {
 return iVar3;
 }
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
 if (bVar2) {
 *param_3 = param_2;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
}



/* Function: __aarch64_ldadd4_acq_rel @ 001038c0 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (atomic_counter._4_1_ == '\0') {
 do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar2) {
 *param_2 = iVar3 + param_1;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
 }
 LOAcquire();
 iVar3 = *param_2;
 *param_2 = iVar3 + param_1;
 LORelease();
 return iVar3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 75 */
