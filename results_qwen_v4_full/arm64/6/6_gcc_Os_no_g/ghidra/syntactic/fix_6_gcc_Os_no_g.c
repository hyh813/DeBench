/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <errno.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/auxv.h>
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned char undefined1;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*code)(void);
typedef undefined4 undefined;

/* Forward declarations for internal functions */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
extern int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);
extern int ExclusiveMonitorPass(void *param_1,int param_2);
extern char ExclusiveMonitorsStatus(void);
extern void LOAcquire(void);
extern void LORelease(void);
extern void *thread_increment(void *param_1);
extern void *thread_tls_test_wrapper(void *param_1);

/* Global variables */
extern byte __aarch64_have_lse_atomics;
extern int data;
extern int ready;
extern int atomic_counter;
extern int signal_received;
extern int signal_number;
extern int shared_counter;
extern pthread_mutex_t counter_mutex;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern long tpidr_el0;
extern byte completed_0;
extern void *__dso_handle;
extern byte DAT_00103185;
extern byte DAT_00103181;
extern byte DAT_00103189;
extern byte DAT_00103191;
extern byte DAT_0010318d;
extern void __stack_chk_fail(void *param_1, void *param_2, int param_3, long param_4);
extern int __isoc99_sscanf(const char *restrict, const char *restrict, ...);
extern byte DAT_0010320d;
extern byte DAT_00103231;
extern byte DAT_0010324c;
extern byte DAT_00103267;
extern byte DAT_00103283;
extern byte DAT_0010329f;
extern byte DAT_001032bb;
extern byte DAT_001032d7;
extern byte DAT_001032f4;
extern byte DAT_00103310;
extern byte DAT_0010332c;
extern byte DAT_00103348;
extern byte DAT_00103363;
extern byte DAT_001033b2;
extern byte DAT_001033cd;
extern byte DAT_001033e9;
extern byte DAT_00103405;
extern byte DAT_00103421;
extern byte DAT_0010343d;
extern byte DAT_00103459;
extern byte DAT_00103475;
extern byte DAT_0010349b;
extern byte DAT_001034b9;
extern byte DAT_001034d5;
extern byte DAT_001034f2;
extern byte DAT_0010350e;
extern byte DAT_0010352a;
extern byte DAT_00103546;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001013a0 @ 001013a0 */

void FUN_001013a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 001017c0 */

/* Forward declarations */
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);

undefined8 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: init_have_lse_atomics @ 001017e0 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001018fc @ 001018fc */

void FUN_001018fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00101954 */

void signal_handler(int param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 0010196c */

void *thread_sum(void *param_1)

{
 int iVar1;
 int *piVar2;
 
 piVar2 = (int *)param_1;
 iVar1 = *piVar2;
 piVar2[2] = 0;
 for (; iVar1 <= piVar2[1]; iVar1 = iVar1 + 1) {
 piVar2[2] = piVar2[2] + iVar1;
 }
 return (void *)0;
}



/* Function: thread_compute @ 00101998 */

void *thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *(int *)param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}



/* Function: thread_increment @ 001019c4 */

void *thread_increment(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 piVar3 = (int *)param_1;
 iVar1 = *piVar3;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return (void *)0;
}



/* Function: consumer_thread @ 00101a30 */

void *consumer_thread(void *param_1)

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
 return (void *)puVar2;
}



/* Function: producer_thread @ 00101a98 */

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



/* Function: thread_atomic_increment @ 00101af0 */

void *thread_atomic_increment(void *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *(int *)param_1;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 }
 return (void *)0;
}



/* Function: thread_atomic_load_store @ 00101b54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void *thread_atomic_load_store(void *param_1)

{
 atomic_counter = atomic_counter + 100;
 return (void *)0;
}



/* Function: thread_tls_test @ 00101b74 */

void *thread_tls_test_wrapper(void *param_1)

{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),(char *)param_1,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return (void *)0;
}



/* Function: param_strcpy @ 00101bc4 */

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 00101bec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_strcpy(void)

{
 undefined1 auStack_28 [32];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 param_strcpy(auStack_28,"HelloLib");
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: param_strcmp @ 00101c40 */

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



/* Function: call_strcmp @ 00101c60 */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp(&DAT_00103185,&DAT_00103181);
 iVar2 = param_strcmp(&DAT_00103189,&DAT_00103181);
 iVar3 = param_strcmp(&DAT_00103191,&DAT_0010318d);
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101cc0 */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00101cd4 */

undefined8 call_strlen(void)

{
 param_strlen("HelloLib");
 return 0xc;
}



/* Function: param_memcpy @ 00101cdc */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00101d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_memcpy(void)

{
 undefined8 local_38;
 undefined8 uStack_30;
 undefined4 local_28;
 undefined8 local_20;
 undefined8 local_18;
 int local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = 0;
 local_18 = 0;
 local_38 = 0x140000000a;
 uStack_30 = 0x280000001e;
 local_28 = 0x32;
 local_10 = 0;
 param_memcpy(&local_20,&local_38,0x14);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)&local_20,&__stack_chk_guard,0,
 local_8 - ___stack_chk_guard);
 }
 return 0;
}



/* Function: param_memcmp @ 00101d88 */

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



/* Function: call_memcmp @ 00101da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_memcmp(void)

{
 int iVar1;
 int iVar2;
 undefined8 local_38;
 undefined4 local_30;
 undefined8 local_28;
 undefined4 local_20;
 undefined8 local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = 4;
 local_38 = 0x200000001;
 local_30 = 3;
 local_28 = 0x200000001;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar1 = param_memcmp(&local_38,&local_28,0xc);
 iVar2 = param_memcmp(&local_38,&local_18,0xc);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return 0;
}



/* Function: param_printf @ 00101e5c */

void param_printf(undefined4 param_1,char *param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00101e74 */

undefined8 call_printf(void)

{
 param_printf(0x2a,"Test");
 return 0;
}



/* Function: param_scanf @ 00101e84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_scanf(char *param_1)

{
 int iVar1;
 int local_10;
 int iStack_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&iStack_c);
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: call_scanf @ 00101ef4 */

undefined8 call_scanf(void)

{
 param_scanf("123,456");
 return 0;
}



/* Function: param_fopen_fclose @ 00101f00 */

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



/* Function: call_fopen_fclose @ 00101f48 */

undefined8 call_fopen_fclose(void)

{
 int iVar1;
 undefined8 uVar2;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_fread_fwrite @ 00101f70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fread_fwrite(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 FILE *__s;
 size_t sVar3;
 char acStack_28 [32];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar3 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar3 == 0x12) {
 rewind(__s);
 sVar3 = fread(acStack_28,1,0x12,__s);
 acStack_28[sVar3] = '\0';
 fclose(__s);
 unlink(param_1);
 if (sVar3 == 0x12) {
 iVar1 = strcmp(acStack_28,"BinBench Test Data");
 uVar2 = 0xfffffffd;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_fread_fwrite @ 00102084 */

undefined8 call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return 0;
}



/* Function: param_malloc_free @ 00102090 */

int param_malloc_free(long param_1)

{
 int *__ptr;
 long lVar1;
 int iVar2;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 for (lVar1 = 0; lVar1 != param_1; lVar1 = lVar1 + 1) {
 __ptr[lVar1] = (int)lVar1 * 10;
 }
 iVar2 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: call_malloc_free @ 001020fc */

undefined8 call_malloc_free(void)

{
 param_malloc_free(10);
 return 0;
}



/* Function: param_memset @ 00102104 */

int param_memset(void *param_1,size_t param_2)

{
 int iVar1;
 size_t sVar2;
 
 memset(param_1,0,param_2);
 iVar1 = 0;
 for (sVar2 = 0; sVar2 != param_2; sVar2 = sVar2 + 1) {
 iVar1 = iVar1 + (uint)*(byte *)((long)param_1 + sVar2);
 }
 return iVar1;
}



/* Function: call_memset @ 00102150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_memset(void)

{
 long lVar1;
 int local_30 [10];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 lVar1 = 0;
 do {
 local_30[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 param_memset(local_30,0x28);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)(local_30[0] + local_30[9]),&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return 0;
}



/* Function: param_strchr_strstr @ 001021c0 */

int param_strchr_strstr(char *param_1,uint param_2,char *param_3)

{
 int iVar1;
 int iVar2;
 char *pcVar3;
 
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar1 = (int)pcVar3 - (int)param_1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar2 = (int)pcVar3 - (int)param_1;
 }
 return iVar1 + iVar2;
}



/* Function: call_strchr_strstr @ 0010221c */

undefined8 call_strchr_strstr(void)

{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return 0;
}



/* Function: test_standard_library_functions @ 00102234 */

void test_standard_library_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = puts(&DAT_0010320d);
 uVar2 = call_strcpy();
 __printf_chk(1,&DAT_00103231,uVar2);
 uVar2 = call_strcmp();
 __printf_chk(1,&DAT_0010324c,uVar2);
 __printf_chk(1,&DAT_00103267,0xc);
 uVar2 = call_memcpy();
 __printf_chk(1,&DAT_00103283,uVar2);
 uVar2 = call_memcmp();
 __printf_chk(1,&DAT_0010329f,uVar2);
 uVar2 = call_printf();
 __printf_chk(1,&DAT_001032bb,uVar2);
 uVar2 = call_scanf();
 __printf_chk(1,&DAT_001032d7,uVar2);
 uVar2 = call_fopen_fclose();
 __printf_chk(1,&DAT_001032f4,uVar2);
 uVar2 = call_fread_fwrite();
 __printf_chk(1,&DAT_00103310,uVar2);
 uVar2 = call_malloc_free();
 __printf_chk(1,&DAT_0010332c,uVar2);
 uVar2 = call_memset();
 __printf_chk(1,&DAT_00103348,uVar2);
 uVar2 = call_strchr_strstr();
 __printf_chk(1,&DAT_00103363,uVar2);
 return;
}



/* Function: param_linux_syscall @ 00102368 */

int param_linux_syscall(char *param_1)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 
 lVar2 = syscall(0x38,0xffffff9c,param_1,0);
 iVar1 = (int)lVar2;
 if (iVar1 < 0) {
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(0x39,lVar2);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 001023bc */

undefined8 call_linux_syscall(void)

{
 int iVar1;
 undefined8 uVar2;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_win32_api @ 001023e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 long local_58;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff78);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_win32_api @ 00102450 */

undefined8 call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return 0;
}



/* Function: param_fork_exec @ 0010245c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fork_exec(char *param_1,char *param_2)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
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
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = local_c >> 8 & 0xff;
 if ((local_c & 0x7f) != 0) {
 uVar2 = 0xfffffffd;
 }
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_fork_exec @ 00102510 */

undefined8 call_fork_exec(void)

{
 int iVar1;
 undefined8 uVar2;
 
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0x2a;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_pipe_communication @ 0010253c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 undefined8 uVar3;
 ssize_t sVar4;
 int local_30;
 int local_2c;
 undefined1 auStack_28 [32];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = pipe(&local_30);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 local_2c = local_30 + 1;
 local_30 = local_30;
 _Var2 = fork();
 if (_Var2 < 0) {
 uVar3 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_2c);
 sVar4 = read(local_30,auStack_28,0x1f);
 auStack_28[sVar4] = 0;
 close(local_30);
 wait((int *)0x0);
 uVar3 = 0x2a;
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_socket_create @ 00102628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined8 uVar2;
 undefined4 local_1c;
      struct sockaddr local_18;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_1c = 1;
 iVar1 = setsockopt(__fd,1,2,&local_1c,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_18.sa_data[6] = '\0';
 local_18.sa_data[7] = '\0';
 local_18.sa_data[8] = '\0';
 local_18.sa_data[9] = '\0';
 local_18.sa_data[10] = '\0';
 local_18.sa_data[0xb] = '\0';
 local_18.sa_data[0xc] = '\0';
 local_18.sa_data[0xd] = '\0';
 local_18.sa_family = 2;
 local_18.sa_data[0] = '\0';
 local_18.sa_data[1] = '\0';
 local_18.sa_data[2] = '\0';
 local_18.sa_data[3] = '\0';
 local_18.sa_data[4] = '\0';
 local_18.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_18,0x10);
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
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return 0;
}



/* Function: param_shmget_shmat @ 00102720 */

ulong param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t sVar2;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 __dest = shmat(iVar1,(void *)0x0,0);
 if (__dest != (char *)0xffffffffffffffff) {
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return sVar2 & 0xffffffff;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}



/* Function: call_shmget_shmat @ 001027e8 */

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



/* Function: param_signal_handling @ 00102808 */

undefined8 param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
 p_Var1 = signal(10,(void (*)(int))signal_handler);
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = signal(0xe,(void (*)(int))signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = (__sighandler_t)0xfffffffe;
 }
 else {
 iVar2 = 0x3e9;
 signal_received = 0;
 raise(10);
 while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
 usleep(1000);
 }
 if (signal_received == 0) {
 p_Var1 = (__sighandler_t)0xfffffffd;
 }
 else if (signal_number == 10) {
 iVar2 = 0x7d1;
 signal_received = 0;
 alarm(1);
 while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 p_Var1 = (__sighandler_t)0xfffffffb;
 }
 else {
 signal(10,(void (*)(int))0x0);
 signal(0xe,(void (*)(int))0x0);
 p_Var1 = (__sighandler_t)0x2a;
 }
 }
 else {
 p_Var1 = (__sighandler_t)0xfffffffc;
 }
 }
 }
 return (undefined8)p_Var1;
}



/* Function: test_system_calls @ 0010291c */

void test_system_calls(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = puts(&DAT_001033b2);
 uVar2 = call_linux_syscall();
 __printf_chk(1,&DAT_001033cd,uVar2);
 uVar2 = call_win32_api();
 __printf_chk(1,&DAT_001033e9,uVar2);
 uVar2 = call_fork_exec();
 __printf_chk(1,&DAT_00103405,uVar2);
 uVar2 = param_pipe_communication();
 __printf_chk(1,&DAT_00103421,uVar2);
 uVar2 = param_socket_create();
 __printf_chk(1,&DAT_0010343d,uVar2);
 uVar2 = call_shmget_shmat();
 __printf_chk(1,&DAT_00103459,uVar2);
 uVar2 = param_signal_handling();
 __printf_chk(1,&DAT_00103475,uVar2);
 return;
}



/* Function: param_pthread_create @ 001029dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1c;
 pthread_t local_18;
 void *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar1 == 0) {
  pthread_join(local_18,&local_10);
  uVar2 = *(undefined4 *)local_10;
  free(local_10);
 }
 else {
  uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
  /* WARNING: Subroutine does not return */
  __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar2;
}



/* Function: call_pthread_create @ 00102a6c */

undefined8 call_pthread_create(void)

{
 param_pthread_create(7);
 return 0;
}



/* Function: param_pthread_join @ 00102a74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_join(void)

{
 int iVar1;
 pthread_t local_48 [3];
 int thread_args [3];
 long lVar4;
 int iVar5;
 long local_8;
 
 iVar5 = 3;
 local_8 = ___stack_chk_guard;
 thread_args[0] = 1;
 thread_args[1] = 10;
 thread_args[2] = 15;
 lVar4 = 0;
 do {
 iVar1 = pthread_create(&local_48[lVar4],(const pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,(void *)&thread_args[lVar4]);
 if (iVar1 != 0) {
 iVar5 = -1;
 goto LAB_00102b30;
 }
 lVar4 = lVar4 + 1;
 iVar5 = iVar5 + -1;
 } while (iVar5 != 0);
 lVar4 = 0;
 iVar5 = 0;
 do {
 iVar1 = pthread_join(local_48[lVar4],(void **)0x0);
 if (iVar1 != 0) {
 iVar5 = -2;
 break;
 }
 lVar4 = lVar4 + 1;
 iVar5 = iVar5 + 1;
 } while (lVar4 != 3);
LAB_00102b30:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar5;
}



/* Function: param_mutex_lock @ 00102b80 */

undefined4 param_mutex_lock(ulong param_1,int param_2)

{
 long lVar1;
 int iVar2;
 int iVar3;
 undefined4 uVar4;
 void *__ptr;
 long lVar5;
 int local_4;
 
 iVar2 = (int)param_1;
 local_4 = param_2;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 lVar5 = 0;
 shared_counter = 0;
 do {
 if (iVar2 <= (int)lVar5) {
 for (lVar5 = 0; (int)lVar5 < iVar2; lVar5 = lVar5 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar5 * 8),(void **)0x0);
 }
 free(__ptr);
 if (shared_counter == iVar2 * local_4) {
 return 0x2a;
 }
 return 0xfffffffd;
 }
 lVar1 = lVar5 * 8;
 lVar5 = lVar5 + 1;
 iVar3 = pthread_create((pthread_t *)((long)__ptr + lVar1),(const pthread_attr_t *)0x0,
 (void *(*)(void *))thread_increment,(void *)&local_4);
 if (iVar3 != 0) break;
 } while (1);
 free(__ptr);
 uVar4 = 0xfffffffe;
 }
 return uVar4;
}



/* Function: call_mutex_lock @ 00102c60 */

undefined8 call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return 0;
}



/* Function: param_condition_variable @ 00102c6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t local_20;
 pthread_t local_18;
 void *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(const pthread_attr_t *)0x0,(void *(*)(void *))consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
  iVar1 = pthread_create(&local_20,(const pthread_attr_t *)0x0,(void *(*)(void *))producer_thread,(void *)0x0);
  if (iVar1 == 0) {
   pthread_join(local_18,&local_10);
   pthread_join(local_20,(void **)0x0);
   uVar2 = *(undefined4 *)local_10;
   free(local_10);
  }
  else {
   uVar2 = 0xfffffffe;
   pthread_cancel(local_18);
  }
 }
 else {
  uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
  /* WARNING: Subroutine does not return */
  __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar2;
}



/* Function: param_atomic_ops @ 00102d3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_atomic_ops(uint param_1,undefined4 param_2)

{
 long lVar1;
 int iVar2;
 undefined4 uVar3;
 pthread_t *__ptr;
 long lVar4;
 undefined4 local_14;
 pthread_t local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_14 = param_2;
 __ptr = (pthread_t *)malloc(param_1 * sizeof(pthread_t));
 if (__ptr == (pthread_t *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 atomic_counter = 0;
 lVar4 = 0;
 do {
 if ((int)param_1 <= (int)lVar4) {
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,(void *(*)(void *))thread_atomic_load_store,(void *)0x0);
 pthread_join(local_10,(void **)0x0);
 iVar2 = atomic_counter;
 for (lVar4 = 0; (int)lVar4 < (int)param_1; lVar4 = lVar4 + 1) {
 pthread_join(__ptr[lVar4],(void **)0x0);
 }
 free(__ptr);
 uVar3 = 0x2a;
 if (iVar2 < 1) {
 uVar3 = 0xfffffffd;
 }
 break;
 }
 lVar4 = lVar4 + 1;
 iVar2 = pthread_create(&__ptr[lVar4 - 1],(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_atomic_increment,(void *)&local_14);
 if (iVar2 != 0) break;
 } while (1);
 if (lVar4 < (long)(int)param_1) {
 free(__ptr);
 uVar3 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_atomic_ops @ 00102e78 */

undefined8 call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return 0;
}



/* Function: param_thread_local_storage @ 00102e84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_thread_local_storage(uint param_1)

{
 long lVar1;
 long lVar2;
 undefined4 uVar3;
 int iVar4;
 void *__ptr;
 void *__ptr_00;
 void *pvVar5;
 ulong uVar6;
 long lVar7;
 int iVar8;
 void *local_10;
 long local_8;
 
 uVar6 = -(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3;
 local_8 = ___stack_chk_guard;
 __ptr = malloc(uVar6);
 __ptr_00 = malloc(uVar6);
 if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 for (uVar6 = 0; (int)uVar6 < (int)param_1; uVar6 = uVar6 + 1) {
 pvVar5 = malloc(0x10);
 *(void **)((long)__ptr_00 + uVar6 * 8) = pvVar5;
 snprintf((char *)pvVar5,0x10,"Thread-%d",(int)uVar6);
 }
 lVar7 = 0;
 do {
 iVar8 = (int)lVar7;
 if ((int)param_1 <= iVar8) {
 iVar4 = 0;
 iVar8 = 0;
 for (lVar7 = 0; (int)lVar7 < (int)param_1; lVar7 = lVar7 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar7 * 8),&local_10);
 iVar8 = iVar8 + *(int *)local_10;
 iVar4 = iVar4 + ((int *)local_10)[1];
 free(local_10);
 free(*(void **)((long)__ptr_00 + lVar7 * 8));
 }
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0x2a;
 if (param_1 * 100 != iVar8 || param_1 * 0x96 != iVar4) {
 uVar3 = 0xfffffffd;
 }
 goto LAB_00102fcc;
 }
 lVar2 = lVar7 * 8;
 lVar1 = lVar7 * 8;
 lVar7 = lVar7 + 1;
 iVar4 = pthread_create((pthread_t *)((long)__ptr + lVar1),(const pthread_attr_t *)0x0,
 (void *(*)(void *))thread_tls_test_wrapper,*(void **)((long)__ptr_00 + lVar2));
 if (iVar4 != 0) break;
 } while (1);
 lVar7 = 0;
 do {
 lVar1 = lVar7 * 8;
 lVar7 = lVar7 + 1;
 free(*(void **)((long)__ptr_00 + lVar1));
 } while ((int)lVar7 < iVar8);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 }
LAB_00102fcc:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)0,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar3;
}



/* Function: call_thread_local_storage @ 00103040 */

undefined8 call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return 0;
}



/* Function: test_thread_concurrency @ 00103048 */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = puts(&DAT_0010349b);
 uVar2 = call_pthread_create();
 __printf_chk(1,&DAT_001034b9,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_001034d5,uVar2);
 uVar2 = call_mutex_lock();
 __printf_chk(1,&DAT_001034f2,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_0010350e,uVar2);
 uVar2 = call_atomic_ops();
 __printf_chk(1,&DAT_0010352a,uVar2);
 uVar2 = call_thread_local_storage();
 __printf_chk(1,&DAT_00103546,uVar2);
 return;
}



/* Function: __aarch64_cas4_acq_rel @ 001030f0 */

int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics != '\0') {
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



/* Function: __aarch64_ldadd4_acq_rel @ 00103130 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
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




/* Total functions decompiled: 70 */
