/* Standard library includes - must come first for pthread types */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <sys/syscall.h>
#include <sys/shm.h>
#include <arpa/inet.h>
#include <netinet/in.h>

/* Auto-injected type definitions by preprocessor */
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

/* Additional type definitions for decompiled code */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned char undefined;  /* Added undefined type */
typedef unsigned int uint;
typedef int __pid_t;
typedef unsigned long pthread_t;

/* Function pointer type for code */
typedef void (*code)(void);

/* POSIX socket address type */
typedef struct sockaddr sockaddr;

/* POSIX shared memory structure */
typedef struct shmid_ds shmid_ds;

/* ARM64 TLS register access via syscall */
static inline long get_tpidr_el0(void) {
    long val;
    asm("mrs %0, tpidr_el0" : "=r"(val));
    return val;
}

/* Global variables for thread synchronization */
int shared_counter;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Global variables for signal handling */
int signal_received;
int signal_number;

/* CRT stub variables and functions - defined as stubs for decompiled code */
int completed_0 = 0;
void *__dso_handle = (void*)0;
void deregister_tm_clones(void) { }
void __cxa_finalize(void *handle) { }

/* Linux auxiliary vector function */
unsigned long __getauxval(unsigned long type) { return 0; }

/* Signal handler function declaration */
void signal_handler(int param_1);

/* Atomic operation function declarations */
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);

/* Exclusive monitor functions - stub implementations */
int ExclusiveMonitorPass(void *addr, int size) { return 0; }
char ExclusiveMonitorsStatus(void) { return 0; }
void LOAcquire(void) { }
void LORelease(void) { }

/* Global variables for thread communication */
int data;
int ready;

/* Data segment references from binary */
const char *DAT_00103911 = "libHello";
const char *DAT_00103915 = "HelloLib";
const char *DAT_00103919 = "Test";
const char *DAT_0010391d = "Benchmark";
const char *DAT_00103921 = "Bench";
const char *DAT_001039aa = "Testing standard library functions:\n";
const char *DAT_001039cf = "strcpy returned: %s\n";
const char *DAT_001039ea = "strcmp returned: %d\n";
const char *DAT_00103a05 = "strlen returned: %lu\n";
const char *DAT_00103a21 = "memcpy returned: %lu\n";
const char *DAT_00103a3d = "memcmp returned: %d\n";
const char *DAT_00103a59 = "printf returned: %d\n";
const char *DAT_00103a75 = "scanf returned: %d\n";
const char *DAT_00103a92 = "fopen/fclose returned: %d\n";
const char *DAT_00103aae = "fread/fwrite returned: %d\n";
const char *DAT_00103aca = "malloc/free returned: %d\n";
const char *DAT_00103ae6 = "memset returned: %d\n";
const char *DAT_00103b01 = "strchr/strstr returned: %d\n";
const char *DAT_00103b50 = "Testing system calls:\n";
const char *DAT_00103b6c = "linux_syscall returned: %d\n";
const char *DAT_00103b88 = "win32_api returned: %d\n";
const char *DAT_00103ba4 = "fork_exec returned: %d\n";
const char *DAT_00103bc0 = "pipe_communication returned: %d\n";
const char *DAT_00103bdc = "socket_create returned: %d\n";
const char *DAT_00103bf8 = "shmget_shmat returned: %d\n";
const char *DAT_00103c14 = "signal_handling returned: %d\n";
const char *DAT_00103c3a = "Testing thread concurrency:\n";
const char *DAT_00103c59 = "pthread_create returned: %d\n";
const char *DAT_00103c75 = "pthread_join returned: %d\n";
const char *DAT_00103c92 = "mutex_lock returned: %d\n";
const char *DAT_00103cae = "condition_variable returned: %d\n";
const char *DAT_00103cca = "atomic_ops returned: %d\n";
const char *DAT_00103ce6 = "thread_local_storage returned: %d\n";

/* Global atomic counter with byte access */
typedef struct {
    int _0_4_;        /* value at offset 0, size 4 */
    char padding[3]; /* padding to align flag to offset 4 */
    char _4_1_;       /* byte at offset 4 */
} atomic_counter_t;
atomic_counter_t atomic_counter;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


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
 
 __getauxval(0x10);
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

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 00101888 */

char* call_strcpy(void)

{
 static char buffer[32];
 
 param_strcpy(buffer,"HelloLib");
 return buffer;
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
 
 iVar1 = param_strcmp((char*)DAT_00103911,(char*)DAT_00103915);
 iVar2 = param_strcmp((char*)DAT_00103919,"Test");
 iVar3 = param_strcmp((char*)DAT_0010391d,(char*)DAT_00103921);
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
 iVar1 = param_memcmp(&local_20,&local_30);
 iVar2 = param_memcmp(&local_20,&local_40,0xc);
 return iVar1 + iVar2;
}



/* Function: param_printf @ 00101ba0 */

int param_printf(uint param_1,undefined8 param_2)

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

int param_scanf(undefined8 param_1)

{
 int iVar1;
 int local_28;
 int local_24;
 undefined8 local_20;
 int local_14;
 
 local_20 = param_1;
 iVar1 = sscanf(param_1,"%d,%d",&local_24,&local_28);
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

void call_malloc_free(void)

{
 param_malloc_free(10);
 return;
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

int call_memset(void)

{
 int local_3c;
 int local_38 [10];
 
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 local_38[local_3c] = 0xff;
 }
 param_memset(local_3c + -10,local_38,0x28);
 return local_38[0] + local_38[9];
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
 char *str_result;
 
 iVar1 = printf(DAT_001039aa);
 str_result = call_strcpy();
 iVar1 = printf(DAT_001039cf,str_result);
 iVar1 = call_strcmp();
 iVar1 = printf(DAT_001039ea,iVar1);
 iVar1 = call_strlen();
 iVar1 = printf(DAT_00103a05,(ulong)iVar1);
 iVar1 = call_memcpy();
 iVar1 = printf(DAT_00103a21,(ulong)iVar1);
 iVar1 = call_memcmp();
 iVar1 = printf(DAT_00103a3d,iVar1);
 iVar1 = call_printf();
 iVar1 = printf(DAT_00103a59,iVar1);
 iVar1 = call_scanf();
 iVar1 = printf(DAT_00103a75,iVar1);
 iVar1 = call_fopen_fclose();
 iVar1 = printf(DAT_00103a92,iVar1);
 iVar1 = call_fread_fwrite();
 iVar1 = printf(DAT_00103aae,iVar1);
 iVar1 = call_malloc_free();
 iVar1 = printf(DAT_00103aca,iVar1);
 iVar1 = call_memset();
 iVar1 = printf(DAT_00103ae6,iVar1);
 iVar1 = call_strchr_strstr();
 iVar1 = printf(DAT_00103b01,iVar1);
 return iVar1;
}



/* Function: param_linux_syscall @ 00102278 */

int param_linux_syscall(undefined8 param_1)

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

int call_linux_syscall(void)

{
 int iVar1;
 int uVar2;
 
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
 
 memset(&sStack_a0, 0, sizeof(sStack_a0));
 iVar1 = stat(param_1,&sStack_a0);
 if (iVar1 < 0) {
 sStack_a0.st_size = -1;
 }
 else {
 sStack_a0.st_size = 42;
 if (sStack_a0.st_size < 1) {
 sStack_a0.st_size = -2;
 }
 }
 return sStack_a0.st_size;
}



/* Function: call_win32_api @ 0010238c */

int call_win32_api(void)

{
 return param_win32_api("/etc/passwd");
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

int call_pipe_communication(void)

{
 return param_pipe_communication();
}



/* Function: param_socket_create @ 001025dc */

undefined4 param_socket_create(void)

{
 uint16_t uVar1;
 int iVar2;
 sockaddr local_30;
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
 local_30.sa_data._0_2_ = uVar1;
 local_30.sa_data._2_4_ = 0;
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

int call_socket_create(void)

{
 return param_socket_create();
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
 shmctl(iVar1,0,(shmid_ds *)0x0);
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

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: call_signal_handling @ 00102a6c */

int call_signal_handling(void)

{
 return param_signal_handling();
}



/* Function: test_system_calls @ 00102a80 */

int test_system_calls(void)

{
 int iVar1;
 int ret;
 
 iVar1 = printf(DAT_00103b50);
 ret = call_linux_syscall();
 iVar1 = printf(DAT_00103b6c,ret);
 ret = call_win32_api();
 iVar1 = printf(DAT_00103b88,ret);
 ret = call_fork_exec();
 iVar1 = printf(DAT_00103ba4,ret);
 ret = call_pipe_communication();
 iVar1 = printf(DAT_00103bc0,ret);
 call_socket_create();
 iVar1 = printf(DAT_00103bdc,0x2a);
 ret = call_shmget_shmat();
 iVar1 = printf(DAT_00103bf8,ret);
 call_signal_handling();
 iVar1 = printf(DAT_00103c14,0x2a);
 return iVar1;
}



/* Function: thread_compute @ 00102b28 */

void* thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 int *input = (int *)param_1;
 
 iVar1 = *input;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 00102b84 */

undefined4 param_pthread_create(undefined4 param_1)

{
 undefined4 uVar1;
 int iVar2;
 void *local_30;
 int local_24;
 pthread_t local_20;
 undefined4 local_18;
 undefined4 local_14;
 
 local_24 = param_1;
 local_18 = param_1;
 iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar2 == 0) {
 pthread_join(local_20,&local_30);
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

int call_pthread_create(void)

{
 return param_pthread_create(7);
}



/* Function: thread_sum @ 00102c24 */

undefined8 thread_sum(int *param_1)

{
 int local_14;
 
 param_1[2] = 0;
 for (local_14 = *param_1; local_14 <= param_1[1]; local_14 = local_14 + 1) {
 param_1[2] = param_1[2] + local_14;
 }
 return 0;
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
 
 memset(local_54,0,0x24);
 local_54[0] = 1;
 local_54[1] = 10;
 local_54[3] = 0xb;
 local_54[4] = 0x14;
 local_3c = 0x15;
 local_38 = 0x1e;
 for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
 iVar1 = pthread_create(apStack_30 + local_58,(pthread_attr_t *)0x0,thread_sum,
 local_54 + (long)local_58 * 3);
 if (iVar1 != 0) {
 return -1;
 }
 }
 local_5c = 0;
 local_60 = 0;
 while( true ) {
 if (2 < local_60) {
 return local_5c;
 }
 iVar1 = pthread_join(apStack_30[local_60],(void **)0x0);
 if (iVar1 != 0) break;
 local_5c = local_5c + local_54[(long)local_60 * 3 + 2];
 local_60 = local_60 + 1;
 }
 return -2;
}



/* Function: call_pthread_join @ 00102dec */

int call_pthread_join(void)

{
 return param_pthread_join();
}



/* Function: thread_increment @ 00102e00 */

undefined8 thread_increment(int *param_1)

{
 int iVar1;
 int local_20;
 
 iVar1 = *param_1;
 for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 }
 return 0;
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
 return local_14;
}



/* Function: call_mutex_lock @ 00102fcc */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: consumer_thread @ 00102fe8 */

undefined4 * consumer_thread(void)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 while (uVar1 = data, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}



/* Function: producer_thread @ 00103070 */

undefined8 producer_thread(void)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}



/* Function: param_condition_variable @ 001030d8 */

undefined4 param_condition_variable(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 *local_30;
 pthread_t local_28;
 pthread_t local_20;
 undefined4 local_14;
 
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar2 == 0) {
 iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_28,&local_30);
 pthread_join(local_20,(void **)0x0);
 uVar1 = *local_30;
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
 return local_14;
}



/* Function: call_condition_variable @ 0010319c */

void call_condition_variable(void)

{
 param_condition_variable();
 return;
}



/* Function: thread_atomic_increment @ 001031b0 */

undefined8 thread_atomic_increment(int *param_1)

{
 int iVar1;
 int local_20;
 
 iVar1 = *param_1;
 for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
 __aarch64_ldadd4_acq_rel(1);
 __aarch64_cas4_acq_rel(local_20,local_20 + 1000,&atomic_counter);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00103298 */

undefined8 thread_atomic_load_store(void)

{
 atomic_counter._0_4_ = (int)atomic_counter + 100;
 return 0;
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
 pthread_join(local_38,(void **)0x0);
 }
 for (local_3c = 0; iVar1 = (int)atomic_counter, local_3c < local_18; local_3c = local_3c + 1) {
 pthread_join(*(pthread_t *)((long)local_28 + (long)local_3c * 8),(void **)0x0);
 }
 free(local_28);
 local_14 = 0x2a;
 if (iVar1 < 1) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}



/* Function: call_atomic_ops @ 00103458 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: thread_tls_test @ 00103474 */

int * thread_tls_test(char *param_1)

{
 int *piVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 
 lVar3 = get_tpidr_el0();
 piVar1 = (int *)(lVar3 + 0x10);
 iVar2 = *piVar1;
 *piVar1 = *piVar1 + 0x32;
 strncpy((char *)(lVar3 + 0x14),param_1,0x1f);
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
 *(void **)((long)local_28 + (long)local_30 * 8));
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
 pthread_join(*(pthread_t *)((long)local_20 + (long)local_40 * 8),&local_48);
 local_38 = local_38 + *local_48;
 local_3c = local_3c + local_48[1];
 free(local_48);
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

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 001037b8 */

int test_thread_concurrency(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00103c3a);
 iVar1 = call_pthread_create();
 iVar1 = printf(DAT_00103c59,iVar1);
 iVar1 = call_pthread_join();
 iVar1 = printf(DAT_00103c75,iVar1);
 iVar1 = call_mutex_lock();
 iVar1 = printf(DAT_00103c92,iVar1);
 iVar1 = call_condition_variable();
 iVar1 = printf(DAT_00103cae,iVar1);
 iVar1 = call_atomic_ops();
 iVar1 = printf(DAT_00103cca,iVar1);
 iVar1 = call_thread_local_storage();
 iVar1 = printf(DAT_00103ce6,iVar1);
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
