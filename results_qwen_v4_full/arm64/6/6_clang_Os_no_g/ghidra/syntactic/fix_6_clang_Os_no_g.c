/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned char undefined1;
typedef unsigned short undefined3;
typedef unsigned long long undefined5;
typedef unsigned char byte;
typedef void (*code)(void);
typedef unsigned long undefined;

/* Ghidra CONCAT macros */
#define CONCAT53(x,y) (((unsigned long long)(x) << 24) | ((unsigned int)(y) & 0xffffff))
#define CONCAT35(x,y) (((unsigned int)(x) << 40) | ((unsigned long long)(y) & 0xffffffffff))

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <sys/auxv.h>

/* Global variables */
extern int *__errno_location(void);

/* Stub implementation for C++ runtime function */
void __cxa_finalize(void *param_1)
{
 (void)param_1;
 return;
}

/* Forward declarations */
void signal_handler(int);
void init_have_lse_atomics(void);

/* Stub implementations for ARM atomic operations */
int ExclusiveMonitorPass(void *param_1, unsigned long param_2)
{
    return 1;
}

char ExclusiveMonitorsStatus(void)
{
    return 0;
}

void LOAcquire(void)
{
    return;
}

void LORelease(void)
{
    return;
}

/* Stub implementations for ARM atomic operations */
void __aarch64_ldadd4_acq_rel(int param_1, int *param_2)
{
    *param_2 = *param_2 + param_1;
    return;
}

void __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3)
{
    (void)param_1;
    *param_3 = param_2;
    return;
}

/* Stub implementation for removed CRT function */
void deregister_tm_clones(void)
{
    return;
}

static char DAT_001031fc[] = "Testing standard library functions";
static char DAT_00102f04[] = "strlen result: %lu\n";
static char DAT_00102f1f[] = "strcmp result: %d\n";
static char DAT_00102f3a[] = "call_strlen result: %lu\n";
static char DAT_00102f56[] = "call_memcpy result: %lu\n";
static char DAT_00102f72[] = "call_memcmp result: %lu\n";
static char DAT_00102f8e[] = "call_printf result: %lu\n";
static char DAT_00102faa[] = "call_scanf result: %u\n";
static char DAT_00102fc7[] = "call_fopen_fclose result: %u\n";
static char DAT_00102fe3[] = "call_fread_fwrite result: %lu\n";
static char DAT_00102fff[] = "call_malloc_free result: %lu\n";
static char DAT_0010301b[] = "call_memset result: %d\n";
static char DAT_00103036[] = "call_strchr_strstr result: %d\n";
static char DAT_00103085[] = "Linux syscall result: %lu\n";
static char DAT_001030a1[] = "stat result: %lu\n";
static char DAT_001030bd[] = "fork_exec result: %lu\n";
static char DAT_001030d9[] = "pipe_communication result: %lu\n";
static char DAT_001030f5[] = "socket_create result: %lu\n";
static char DAT_00103111[] = "shmget_shmat result: %lu\n";
static char DAT_0010312d[] = "signal_handling result: %lu\n";
static char DAT_00103153[] = "pthread_create result: %lu\n";
static char DAT_0010316f[] = "pthread_join result: %lu\n";
static char DAT_0010318c[] = "mutex_lock result: %lu\n";
static char DAT_001031a8[] = "condition_variable result: %lu\n";
static char DAT_001031c4[] = "atomic_ops result: %lu\n";
static char DAT_001031e0[] = "thread_local_storage result: %lu\n";
static char DAT_00103220[] = "Testing system calls";
static char DAT_0010323b[] = "Testing thread concurrency";
static union {
    int _0_4_;
    char _4_1_;
    char _arr[8];
} atomic_counter;
static int ready;
static int data;
static int signal_received;
static int signal_number;
static int shared_counter;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static char DAT_00102eb6[] = "TestName";
static char completed_0;
void *__dso_handle = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_clang_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001012e0 @ 001012e0 */

void FUN_001012e0(void)

{
 return;
}



/* Function: init_have_lse_atomics @ 00101700 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 getauxval(0x10);
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
 char *__s;
 
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}



/* Function: call_strcpy @ 0010186c */

void call_strcpy(void)

{
 char local_30 [32];
 
 strncpy(local_30,"HelloLib",9);
 strlen(local_30);
 return;
}



/* Function: param_strcmp @ 001018a0 */

int param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 int iVar2;
 
 iVar2 = strcmp(param_1,param_2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_strcmp @ 001018c4 */

undefined8 call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 001018cc */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 001018e0 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 001018e8 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 0010190c */

undefined8 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00101914 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_memcmp @ 00101938 */

undefined8 call_memcmp(void)

{
 return 0xffffffff;
}



/* Function: param_printf @ 00101940 */

int param_printf(ulong param_1,undefined8 param_2)

{
 int iVar1;
 
 iVar1 = printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return iVar1;
}



/* Function: call_printf @ 00101954 */

int call_printf(void)

{
 int iVar1;
 
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00102eb6);
 return iVar1;
}



/* Function: param_scanf @ 0010196c */

int param_scanf(undefined8 param_1)

{
 int iVar1;
 int local_18;
 int local_14;
 
 iVar1 = sscanf((const char *)param_1,"%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}



/* Function: call_scanf @ 001019ac */

int call_scanf(void)

{
 int iVar1;
 int local_18;
 int local_14;
 
 iVar1 = sscanf("123,456","%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}



/* Function: param_fopen_fclose @ 001019f4 */

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



/* Function: call_fopen_fclose @ 00101a3c */

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



/* Function: param_fread_fwrite @ 00101a64 */

undefined4 param_fread_fwrite(char *param_1)

{
 undefined4 uVar1;
 FILE *__s;
 size_t sVar2;
 long local_50;
 undefined3 uStack_48;
 undefined5 local_45;
 undefined3 uStack_40;
 
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(&local_50,1,0x12,__s);
 *(undefined1 *)((long)&local_50 + sVar2) = 0;
 fclose(__s);
 unlink(param_1);
 uVar1 = 0xfffffffd;
 if ((sVar2 == 0x12) &&
 (uVar1 = 0x2a,
 (local_50 != 0x68636e65426e6942 || CONCAT53(local_45,uStack_48) != 0x6144207473655420) ||
 CONCAT35(uStack_40,local_45) != 0x61746144207473)) {
 uVar1 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 uVar1 = 0xfffffffe;
 }
 }
 return uVar1;
}



/* Function: call_fread_fwrite @ 00101b78 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00101b84 */

int param_malloc_free(long param_1)

{
 int *__ptr;
 int extraout_w8;
 int iVar1;
 ulong uVar2;
 int *piVar3;
 ulong uVar4;
 ulong uVar5;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = extraout_w8;
 if (param_1 != 0) {
 iVar1 = 0;
 uVar2 = param_1 + 1U & 0xfffffffffffffffe;
 uVar5 = 1;
 uVar4 = 0;
 piVar3 = __ptr + 1;
 do {
 if (uVar4 <= param_1 - 1U) {
 piVar3[-1] = iVar1;
 }
 if (uVar5 <= param_1 - 1U) {
 *piVar3 = iVar1 + 10;
 }
 uVar4 = uVar4 + 2;
 uVar5 = uVar5 + 2;
 piVar3 = piVar3 + 2;
 uVar2 = uVar2 - 2;
 iVar1 = iVar1 + 0x14;
 } while (uVar2 != 0);
 iVar1 = *__ptr;
 }
 iVar1 = __ptr[param_1 + -1] + iVar1;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00101c34 */

void call_malloc_free(void)

{
 param_malloc_free(10);
 return;
}



/* Function: param_memset @ 00101c3c */

int param_memset(byte *param_1,size_t param_2)

{
 int iVar1;
 
 memset(param_1,0,param_2);
 iVar1 = 0;
 for (; param_2 != 0; param_2 = param_2 - 1) {
 iVar1 = iVar1 + (uint)*param_1;
 param_1 = param_1 + 1;
 }
 return iVar1;
}



/* Function: call_memset @ 00101c80 */

undefined8 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00101c88 */

int param_strchr_strstr(char *param_1,uint param_2,char *param_3)

{
 int iVar1;
 int iVar2;
 char *pcVar3;
 
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar1;
}



/* Function: call_strchr_strstr @ 00101ce0 */

undefined8 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 00101ce8 */

int test_standard_library_functions(void)

{
 int iVar1;
 uint uVar2;
 size_t sVar3;
 ulong uVar4;
 int local_40 [2];
 undefined1 local_38;
 int local_4;
 
 puts(DAT_001031fc);
 local_38 = 0;
 local_40[0] = 0x6c6c6548;
 local_40[1] = 0x62694c6f;
 sVar3 = strlen((char *)local_40);
 printf(DAT_00102f04,sVar3);
 printf(DAT_00102f1f,0);
 printf(DAT_00102f3a,0xc);
 iVar1 = printf(DAT_00102f56,0x5a);
 uVar4 = call_memcmp();
 printf(DAT_00102f72,uVar4 & 0xffffffff);
 uVar2 = printf("Value: %d, Name: %s\n",0x2a,DAT_00102eb6);
 printf(DAT_00102f8e,(ulong)uVar2);
 iVar1 = sscanf("123,456","%d,%d",&local_40[0],&local_4);
 uVar2 = local_4 + local_40[0];
 if (iVar1 != 2) {
 uVar2 = 0xffffffff;
 }
 printf(DAT_00102faa,(ulong)uVar2);
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 printf(DAT_00102fc7,(ulong)uVar2);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_00102fe3,uVar4 & 0xffffffff);
 uVar4 = param_malloc_free(10);
 printf(DAT_00102fff,uVar4 & 0xffffffff);
 printf(DAT_0010301b,0);
 iVar1 = printf(DAT_00103036,0xf);
 return iVar1;
}



/* Function: param_linux_syscall @ 00101e60 */

ulong param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (ulong)(uint)-*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}



/* Function: call_linux_syscall @ 00101eb4 */

undefined4 call_linux_syscall(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_linux_syscall(0x38);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_win32_api @ 00101edc */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 long local_60;
 struct stat local_stat;
 
 iVar1 = stat(param_1,&local_stat);
 uVar2 = 0x2a;
 if (local_60 < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_win32_api @ 00101f18 */

undefined4 call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 long local_60;
 struct stat local_stat;
 
 iVar1 = stat("/etc/passwd",&local_stat);
 uVar2 = 0x2a;
 if (local_60 < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_fork_exec @ 00101f5c */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_24;
 
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
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else if ((local_24 & 0x7f) == 0) {
 uVar2 = local_24 >> 8 & 0xff;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00101fe4 */

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



/* Function: param_pipe_communication @ 00102010 */

undefined4 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined4 uVar4;
 undefined1 auStack_48 [32];
 int local_28;
 int local_24;
 
 iVar1 = pipe(&local_28);
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
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 return uVar4;
}



/* Function: param_socket_create @ 001020cc */

undefined4 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined4 uVar2;
 struct sockaddr local_38;
 undefined4 local_24;
 
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_38.sa_family = 2;
 local_38.sa_data[0] = '\0';
 local_38.sa_data[1] = '\0';
 local_38.sa_data[2] = '\0';
 local_38.sa_data[3] = '\0';
 local_38.sa_data[4] = '\0';
 local_38.sa_data[5] = '\0';
 local_38.sa_data[6] = '\0';
 local_38.sa_data[7] = '\0';
 local_38.sa_data[8] = '\0';
 local_38.sa_data[9] = '\0';
 local_38.sa_data[10] = '\0';
 local_38.sa_data[0xb] = '\0';
 local_38.sa_data[0xc] = '\0';
 local_38.sa_data[0xd] = '\0';
 iVar1 = bind(__fd,&local_38,0x10);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0xfffffffc;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 }
 }
 }
 return uVar2;
}



/* Function: param_shmget_shmat @ 00102194 */

ulong param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 sVar2 = 0xfffffffe;
 }
 else {
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffffffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 goto LAB_00102240;
 }
 }
 sVar2 = 0xffffffff;
LAB_00102240:
 return sVar2 & 0xffffffff;
}



/* Function: call_shmget_shmat @ 00102264 */

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



/* Function: param_signal_handling @ 00102284 */

undefined8 param_signal_handling(void)

{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 undefined8 uVar4;
 int iVar5;
 
 p_Var3 = signal(10,(void (*)(int))signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xffffffff;
 }
 else {
 p_Var3 = signal(0xe,(void (*)(int))signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar5 = 1000;
 do {
 usleep(1000);
 bVar1 = iVar5 != 0;
 bVar2 = iVar5 != 1;
 iVar5 = iVar5 + -1;
 } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
 }
 if (signal_received == 0) {
 uVar4 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar5 = 2000;
 do {
 usleep(1000);
 bVar1 = iVar5 != 0;
 bVar2 = iVar5 != 1;
 iVar5 = iVar5 + -1;
 } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar4 = 0xfffffffb;
 }
 else {
 signal(10,SIG_DFL);
 signal(0xe,SIG_DFL);
 uVar4 = 0x2a;
 }
 }
 else {
 uVar4 = 0xfffffffc;
 }
 }
 }
 return uVar4;
}



/* Function: signal_handler @ 001023b8 */

void signal_handler(int param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: test_system_calls @ 001023d4 */

int test_system_calls(void)

{
 int iVar1;
 ulong uVar2;
 uint uVar3;
 uint uVar4;
 long local_70;
 struct stat local_stat;
 
 puts(DAT_00103220);
 iVar1 = param_linux_syscall(0x38);
 uVar3 = 0x2a;
 uVar4 = uVar3;
 if (iVar1 < 0) {
 uVar4 = 0xffffffff;
 }
 printf(DAT_00103085,(ulong)uVar4);
 iVar1 = stat("/etc/passwd",&local_stat);
 if (local_70 < 1) {
 uVar3 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 printf(DAT_001030a1,(ulong)uVar3);
 iVar1 = param_fork_exec("/bin/true",0);
 uVar4 = 0x2a;
 uVar3 = uVar4;
 if (iVar1 != 0) {
 uVar3 = 0xffffffff;
 }
 iVar1 = printf(DAT_001030bd,(ulong)uVar3);
 uVar2 = param_pipe_communication();
 iVar1 = printf(DAT_001030d9,uVar2 & 0xffffffff);
 uVar2 = param_socket_create();
 iVar1 = printf(DAT_001030f5,uVar2 & 0xffffffff);
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar4 = 0xffffffff;
 }
 iVar1 = printf(DAT_00103111,(ulong)uVar4);
 uVar2 = param_signal_handling();
 iVar1 = printf(DAT_0010312d,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: thread_compute @ 001024cc */

void thread_compute(int *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}



/* Function: param_pthread_create @ 001024f8 */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *local_30;
 undefined4 local_24;
 pthread_t local_8;
 
 local_24 = param_1;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,(void **)&local_30);
 uVar2 = *local_30;
 free(local_30);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_pthread_create @ 0010255c */

void call_pthread_create(void)

{
 param_pthread_create(7);
 return;
}



/* Function: thread_sum @ 00102564 */

undefined8 thread_sum(uint *param_1)

{
 uint uVar1;
 uint uVar2;
 
 uVar1 = *param_1;
 uVar2 = param_1[1];
 param_1[2] = 0;
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = uVar2 + (uVar2 - uVar1) * uVar1 +
 (int)((ulong)(uVar2 + ~uVar1) * (ulong)(uVar2 - uVar1) >> 1);
 }
 return 0;
}



/* Function: param_pthread_join @ 00102598 */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 undefined8 *__arg;
 long lVar3;
 int *piVar4;
 undefined8 local_70;
 int local_68 [8];
 pthread_t local_48 [3];
 
 __arg = &local_70;
 lVar3 = 0;
 local_68[0] = 0;
 local_68[3] = 0;
 local_68[6] = 0;
 local_70 = 0xa00000001;
 local_68[1] = 0xb;
 local_68[2] = 0x14;
 local_68[4] = 0x15;
 local_68[5] = 0x1e;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar3),(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = (undefined8 *)((long)__arg + 0xc);
 lVar3 = lVar3 + 8;
 } while (lVar3 != 0x18);
 lVar3 = 0;
 iVar1 = 0;
 piVar4 = local_68;
 do {
 iVar2 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 lVar3 = lVar3 + 8;
 iVar1 = *piVar4 + iVar1;
 piVar4 = piVar4 + 3;
 } while (lVar3 != 0x18);
 return iVar1;
}



/* Function: thread_increment @ 00102678 */

undefined8 thread_increment(int *param_1)

{
 int iVar1;
 
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
 return 0;
}



/* Function: param_mutex_lock @ 001026e0 */

undefined4 param_mutex_lock(uint param_1,int param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined4 uVar2;
 pthread_t *ppVar3;
 ulong uVar4;
 long lVar5;
 int local_34;
 
 local_34 = param_2;
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 uVar4 = (ulong)param_1;
 lVar5 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_increment,&local_34);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (uVar4 * 8 - lVar5 != 0);
 ppVar3 = __ptr;
 if (0 < (int)param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 uVar4 = uVar4 - 1;
 ppVar3 = ppVar3 + 1;
 } while (uVar4 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != local_34 * param_1) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 001027cc */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: consumer_thread @ 001027d8 */

void consumer_thread(void)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
 pthread_mutex_lock(&cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == 0) {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = malloc(4);
 *puVar1 = uVar2;
 return;
}



/* Function: producer_thread @ 00102864 */

undefined8 producer_thread(void)

{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}



/* Function: param_condition_variable @ 001028c0 */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *local_30;
 pthread_t local_28;
 pthread_t local_8;
 
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,(void *(*)(void *))consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void *(*)(void *))producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_28,(void **)&local_30);
 pthread_join(local_8,(void **)0x0);
 uVar2 = *local_30;
 free(local_30);
 }
 else {
 pthread_cancel(local_28);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: thread_atomic_increment @ 0010296c */

undefined8 thread_atomic_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter._0_4_);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter._0_4_);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 001029d0 */

undefined8 thread_atomic_load_store(void)

{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return 0;
}



/* Function: param_atomic_ops @ 001029ec */

undefined4 param_atomic_ops(uint param_1,undefined4 param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined4 uVar2;
 ulong uVar3;
 pthread_t *ppVar4;
 long lVar5;
 pthread_t local_50;
 undefined4 local_44;
 
 local_44 = param_2;
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter._0_4_ = 0;
 if (0 < (int)param_1) {
 lVar5 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_atomic_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while ((ulong)param_1 * 8 - lVar5 != 0);
 }
 iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,(void *(*)(void *))thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_50,(void **)0x0);
 }
 if (0 < (int)param_1) {
 uVar3 = (ulong)param_1;
 ppVar4 = __ptr;
 do {
 pthread_join(*ppVar4,(void **)0x0);
 uVar3 = uVar3 - 1;
 ppVar4 = ppVar4 + 1;
 } while (uVar3 != 0);
 }
 iVar1 = atomic_counter._0_4_;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 00102b00 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: thread_tls_test @ 00102b0c */

void thread_tls_test(char *param_1)

{
 int *piVar4;
 
 piVar4 = malloc(8);
 *piVar4 = 0;
 piVar4[1] = 0x96;
 (void)param_1;
 return;
}



/* Function: param_thread_local_storage @ 00102b5c */

undefined4 param_thread_local_storage(uint param_1)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 char *__s;
 undefined4 uVar2;
 ulong uVar3;
 ulong uVar4;
 pthread_t *ppVar5;
 int iVar6;
 undefined8 *puVar7;
 int *local_58;
 
 uVar3 = (ulong)param_1;
 uVar4 = -(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3;
 __ptr = malloc(uVar4);
 __ptr_00 = malloc(uVar4);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (undefined8 *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 uVar4 = 0;
 do {
 __s = malloc(0x10);
 __ptr_00[uVar4] = (undefined8)__s;
 snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar3 != uVar4);
 if (0 < (int)param_1) {
 uVar4 = 0;
 ppVar5 = __ptr;
 do {
 iVar1 = pthread_create(ppVar5,(pthread_attr_t *)0x0,(void *(*)(void *))thread_tls_test,(void *)__ptr_00[uVar4])
 ;
 uVar4 = uVar4 + 1;
 if (iVar1 != 0) {
 uVar3 = 0;
 do {
 free((void *)__ptr_00[uVar3]);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar5 = ppVar5 + 1;
 } while (uVar3 != uVar4);
 if (0 < (int)param_1) {
 iVar6 = 0;
 iVar1 = 0;
 ppVar5 = __ptr;
 puVar7 = __ptr_00;
 do {
 pthread_join(*ppVar5,(void **)&local_58);
 iVar1 = *local_58 + iVar1;
 iVar6 = local_58[1] + iVar6;
 free(local_58);
 free((void *)*puVar7);
 uVar3 = uVar3 - 1;
 ppVar5 = ppVar5 + 1;
 puVar7 = puVar7 + 1;
 } while (uVar3 != 0);
 goto LAB_00102c78;
 }
 }
 }
 iVar1 = 0;
 iVar6 = 0;
LAB_00102c78:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar6 != param_1 * 0x96 || iVar1 != param_1 * 100) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}



/* Function: call_thread_local_storage @ 00102cf8 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 00102d00 */

int test_thread_concurrency(void)

{
 int iVar1;
 ulong uVar2;
 
 puts(DAT_0010323b);
 uVar2 = param_pthread_create(7);
 iVar1 = printf(DAT_00103153,uVar2 & 0xffffffff);
 uVar2 = param_pthread_join();
 printf(DAT_0010316f,uVar2 & 0xffffffff);
 uVar2 = param_mutex_lock(4,1000);
 iVar1 = printf(DAT_0010318c,uVar2 & 0xffffffff);
 uVar2 = param_condition_variable();
 printf(DAT_001031a8,uVar2 & 0xffffffff);
 uVar2 = param_atomic_ops(4,500);
 printf(DAT_001031c4,uVar2 & 0xffffffff);
 uVar2 = param_thread_local_storage(4);
 iVar1 = printf(DAT_001031e0,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00102da8 */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}












/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
