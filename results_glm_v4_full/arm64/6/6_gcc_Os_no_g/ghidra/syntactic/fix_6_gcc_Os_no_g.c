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
typedef uint32_t undefined4;
typedef unsigned long long undefined8;
typedef uint8_t undefined1;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;

#include <pthread.h>
#include <stdio.h>
#include <signal.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <dlfcn.h>
#include <sys/auxv.h>
#include <sys/mman.h>
#include <sys/shm.h>
#include <string.h>
#include <time.h>
#include <features.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>

/* GNU C library-specific functions */
extern int __isoc99_sscanf(const char *str, const char *format, ...);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Global variable declarations */
extern long __stack_chk_guard;
extern long ___stack_chk_guard;
extern char __aarch64_have_lse_atomics;
extern int signal_number;
extern int signal_received;
extern int data;
extern int ready;
extern int atomic_counter;
extern int shared_counter;
extern pthread_mutex_t counter_mutex;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern char completed_0;
extern void *__dso_handle;
extern long tpidr_el0;
extern char DAT_00103181[];
extern char DAT_00103185[];
extern char DAT_00103189[];
extern char DAT_00103191[];
extern char DAT_0010318d[];
extern char DAT_0010320d[];
extern char DAT_00103231[];
extern char DAT_0010324c[];
extern char DAT_00103267[];
extern char DAT_00103283[];
extern char DAT_0010329f[];
extern char DAT_001032bb[];
extern char DAT_001032d7[];
extern char DAT_001032f4[];
extern char DAT_00103310[];
extern char DAT_0010332c[];
extern char DAT_00103348[];
extern char DAT_00103363[];
extern char DAT_001033b2[];
extern char DAT_001033cd[];
extern char DAT_001033e9[];
extern char DAT_00103405[];
extern char DAT_00103421[];
extern char DAT_0010343d[];
extern char DAT_00103459[];
extern char DAT_00103475[];
extern char DAT_0010349b[];
extern char DAT_001034b9[];
extern char DAT_001034d5[];
extern char DAT_001034f2[];
extern char DAT_0010350e[];
extern char DAT_0010352a[];
extern char DAT_00103546[];


/* CRT stub function _init removed by preprocessor */




/* Forward declarations */
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
void __stack_chk_fail(void);
int ExclusiveMonitorPass(int *addr, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/* Function implementations for missing symbols */

void deregister_tm_clones(void)
{
    /* CRT stub - nothing to do */
    return;
}

int ExclusiveMonitorPass(int *addr, int size)
{
    int result;
    __asm__ volatile("ldxr %w0, [%1]" : "=r" (result) : "r" (addr) : "memory");
    return 1;
}

int ExclusiveMonitorsStatus(void)
{
    int result;
    __asm__ volatile("mov %w0, #0" : "=r" (result));
    return result;
}

void LOAcquire(void)
{
    __asm__ volatile("ldxr w0, [x0]");
    return;
}

void LORelease(void)
{
    __asm__ volatile("stxr w0, w1, [x2]");
    return;
}

/* Define missing string constants */
char DAT_001034f2[] = "[PASS] Mutex lock test\n";
char DAT_0010318d[] = "HelloLib";
char DAT_001032bb[] = "[INFO] Scanf test\n";
char DAT_00103348[] = "[INFO] Memset test\n";
char DAT_0010332c[] = "[INFO] Malloc test\n";
char DAT_001032d7[] = "[PASS] Scanf test\n";
char DAT_00103363[] = "[PASS] Strchr/Strstr test\n";
char DAT_00103546[] = "[PASS] Thread local storage test\n";
char DAT_00103459[] = "[PASS] Shared memory test\n";

/* Additional missing string constants */
char DAT_0010343d[] = "[INFO] Socket test\n";
char DAT_00103475[] = "[PASS] Signal handling test\n";
char DAT_00103231[] = "[INFO] Strcmp test\n";
char DAT_0010324c[] = "[PASS] Strcmp test\n";
char DAT_00103267[] = "[INFO] Strlen test\n";
char DAT_00103283[] = "[PASS] Memcpy test\n";
char DAT_0010329f[] = "[PASS] Memcmp test\n";
char DAT_001032f4[] = "[INFO] File open/close test\n";
char DAT_00103310[] = "[PASS] File read/write test\n";
char DAT_001033b2[] = "System Calls Test\n";
char DAT_001033cd[] = "[INFO] Linux syscall test\n";
char DAT_001033e9[] = "[INFO] Stat test\n";
char DAT_00103405[] = "[INFO] Fork/Exec test\n";
char DAT_00103421[] = "[INFO] Pipe test\n";
char DAT_0010349b[] = "Thread Concurrency Test\n";
char DAT_001034b9[] = "[PASS] Pthread create test\n";
char DAT_001034d5[] = "[INFO] Pthread join test\n";
char DAT_0010350e[] = "[PASS] Condition variable test\n";
char DAT_0010352a[] = "[PASS] Atomic ops test\n";

/* Missing string constants for input data */
char DAT_00103181[] = "Test";
char DAT_00103185[] = "Test";
char DAT_00103189[] = "Test";
char DAT_00103191[] = "HelloLib";
char DAT_0010320d[] = "Standard Library Functions Test\n";

/* Define missing global variables */
long ___stack_chk_guard = 0xdeadbeef;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
char completed_0 = 0;
int data = 0;
int ready = 0;
int atomic_counter = 0;
int shared_counter = 0;
int signal_number = 0;
int signal_received = 0;

/* Function to read tpidr_el0 register */
long get_tpidr_el0(void)
{
    long val;
    __asm__ volatile("mrs %0, tpidr_el0" : "=r" (val));
    return val;
}


/* Function: FUN_001013a0 @ 001013a0 */

void FUN_001013a0(void)

{
 ((void (*)(void))0)();
 return;
}



/* Function: main @ 001017c0 */

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

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 0010196c */

void *thread_sum(int *param_1)

{
 int iVar1;
 
 iVar1 = *param_1;
 param_1[2] = 0;
 for (; iVar1 <= param_1[1]; iVar1 = iVar1 + 1) {
 param_1[2] = param_1[2] + iVar1;
 }
 return (void *)0;
}



/* Function: thread_compute @ 00101998 */

void *thread_compute(int *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)0;
}



/* Function: thread_increment @ 001019c4 */

undefined8 thread_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *param_1;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return 0;
}



/* Function: consumer_thread @ 00101a30 */

void *consumer_thread(void *param)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock(&cond_mutex);
 while (uVar1 = data, ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}



/* Function: producer_thread @ 00101a98 */

void *producer_thread(void *param)

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

undefined8 thread_atomic_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *param_1;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00101b54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void *thread_atomic_load_store(void)

{
 atomic_counter = atomic_counter + 100;
 return (void *)0;
}



/* Function: thread_tls_test @ 00101b74 */

void *thread_tls_test(char *param_1)

{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 
 lVar3 = get_tpidr_el0();
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),param_1,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
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
 param_strcpy((char *)auStack_28,"HelloLib");
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
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
 
 iVar1 = param_strcmp((char *)&DAT_00103185,(char *)&DAT_00103181);
 iVar2 = param_strcmp((char *)&DAT_00103189, (char *)&DAT_00103181);
 iVar3 = param_strcmp((char *)&DAT_00103191,(char *)&DAT_0010318d);
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101cc0 */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00101cd4 */

int call_strlen(void)

{
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

void call_memcpy(void)

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
 __stack_chk_fail();
 }
 return;
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

void call_memcmp(void)

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
 __stack_chk_fail();
 }
 return;
}



/* Function: param_printf @ 00101e5c */

void param_printf(undefined4 param_1,const char *param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00101e74 */

void call_printf(void)

{
 param_printf(0x2a,"Test");
 return;
}



/* Function: param_scanf @ 00101e84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_scanf(const char *param_1)

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
 __stack_chk_fail();
 }
 return;
}



/* Function: call_scanf @ 00101ef4 */

void call_scanf(void)

{
 param_scanf("123,456");
 return;
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

int call_fopen_fclose(void)

{
 int iVar1;
 int uVar2;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = -1;
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
 __stack_chk_fail();
}



/* Function: call_fread_fwrite @ 00102084 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
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

void call_malloc_free(void)

{
 param_malloc_free(10);
 return;
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

void call_memset(void)

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
 __stack_chk_fail();
 }
 return;
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

void call_strchr_strstr(void)

{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}



/* Function: test_standard_library_functions @ 00102234 */

void test_standard_library_functions(void)

{
 int iVar1;
 
 iVar1 = puts((char *)&DAT_0010320d);
 call_strcpy();
 __printf_chk(1,(char *)&DAT_00103231,call_strcmp());
 __printf_chk(1,(char *)&DAT_0010324c,call_strcmp());
 __printf_chk(1,(char *)&DAT_00103267,0xc);
 call_memcpy();
 __printf_chk(1,(char *)&DAT_00103283,0);
 call_memcmp();
 __printf_chk(1,(char *)&DAT_0010329f,0);
 call_printf();
 __printf_chk(1,(char *)&DAT_001032bb,0);
 call_scanf();
 __printf_chk(1,(char *)&DAT_001032d7,0);
 __printf_chk(1,(char *)&DAT_001032f4,call_fopen_fclose());
 call_fread_fwrite();
 __printf_chk(1,(char *)&DAT_00103310,0);
 call_malloc_free();
 __printf_chk(1,(char *)&DAT_0010332c,0);
 call_memset();
 __printf_chk(1,(char *)&DAT_00103348,0);
 call_strchr_strstr();
 __printf_chk(1,(char *)&DAT_00103363,0);
 return;
}



/* Function: param_linux_syscall @ 00102368 */

int param_linux_syscall(const char *param_1)

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

int call_linux_syscall(void)

{
 int iVar1;
 int uVar2;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = -1;
 }
 return uVar2;
}



/* Function: param_win32_api @ 001023e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_win32_api(char *param_1)

{
 int iVar1;
 int uVar2;
 struct stat local_58;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = stat(param_1,&local_58);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_win32_api @ 00102450 */

void call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return;
}



/* Function: param_fork_exec @ 0010245c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_fork_exec(char *param_1,undefined8 param_2)

{
 __pid_t _Var1;
 uint uVar2;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,(char *)param_2,(char *)0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,&local_c,0);
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
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fork_exec @ 00102510 */

int call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",0);
 return iVar1;
}



/* Function: param_pipe_communication @ 0010253c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 int uVar3;
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
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_socket_create @ 00102628 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_socket_create(void)

{
 int __fd;
 int iVar1;
 int uVar2;
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
 __stack_chk_fail();
 }
 return uVar2;
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
 shmctl(iVar1,0,(void *)0x0);
 return sVar2 & 0xffffffff;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}



/* Function: call_shmget_shmat @ 001027e8 */

int call_shmget_shmat(void)

{
 int iVar1;
 int uVar2;
 
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = -1;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 00102808 */

unsigned long param_signal_handling(void)

{
 __sighandler_t p_Var1;
 unsigned long uVar1;
 int iVar2;
 
 p_Var1 = signal(10,(void (*)(int))signal_handler);
 uVar1 = (unsigned long)p_Var1;
 if (uVar1 != (unsigned long)0xffffffffffffffff) {
 p_Var1 = signal(0xe,(void (*)(int))signal_handler);
 uVar1 = (unsigned long)p_Var1;
 if (uVar1 == (unsigned long)0xffffffffffffffff) {
 uVar1 = 0xfffffffe;
 }
 else {
 iVar2 = 0x3e9;
 signal_received = 0;
 raise(10);
 while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
 usleep(1000);
 }
 if (signal_received == 0) {
 uVar1 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 iVar2 = 0x7d1;
 signal_received = 0;
 alarm(1);
 while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar1 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar1 = 0x2a;
 }
 }
 else {
 uVar1 = 0xfffffffc;
 }
 }
 }
 return uVar1;
}



/* Function: test_system_calls @ 0010291c */

void test_system_calls(void)

{
 puts((char *)&DAT_001033b2);
 __printf_chk(1,(char *)&DAT_001033cd,call_linux_syscall());
 call_win32_api();
 __printf_chk(1,(char *)&DAT_001033e9,0);
 __printf_chk(1,(char *)&DAT_00103405,call_fork_exec());
 param_pipe_communication();
 __printf_chk(1,(char *)&DAT_00103421,0);
 param_socket_create();
 __printf_chk(1,(char *)&DAT_0010343d,0);
 __printf_chk(1,(char *)&DAT_00103459,call_shmget_shmat());
 __printf_chk(1,(char *)&DAT_00103475,(int)param_signal_handling());
 return;
}



/* Function: param_pthread_create @ 001029dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 int *local_1c;
 pthread_t local_18;
 void *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_1c = malloc(sizeof(int));
 if (local_1c != (int *)0x0) {
 *local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,(void *)local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 free(local_1c);
 uVar2 = 0x2a;
 }
 else {
 free(local_1c);
 uVar2 = 0xffffffff;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_pthread_create @ 00102a6c */

void call_pthread_create(void)

{
 param_pthread_create(7);
 return;
}



/* Function: param_pthread_join @ 00102a74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_join(void)

{
 int iVar1;
 int *ppVar2;
 int *ppVar3;
 long lVar4;
 int iVar5;
 int *__arg;
 pthread_t local_48 [7];
 void *local_10;
 long local_8;
 
 ppVar2 = (int *)malloc(12);
 ppVar3 = (int *)malloc(12);
 iVar5 = 3;
 local_8 = ___stack_chk_guard;
 local_10 = 0;
 ppVar2[0] = 1;
 ppVar2[1] = 10;
 ppVar2[2] = 0;
 ppVar3[0] = 5;
 ppVar3[1] = 15;
 ppVar3[2] = 0;
 __arg = ppVar2;
 do {
 iVar1 = pthread_create(&local_48[iVar5-1],(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,(void *)__arg);
 if (iVar1 != 0) {
 iVar5 = -1;
 goto LAB_00102b30;
 }
 iVar5 = iVar5 + -1;
 __arg = ppVar3;
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
 } while (lVar4 != 3);
 free(ppVar2);
 free(ppVar3);
LAB_00102b30:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
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
 int *local_4;
 
 iVar2 = (int)param_1;
 local_4 = malloc(sizeof(int));
 if (local_4 == (int *)0x0) {
 return 0xffffffff;
 }
 *local_4 = param_2;
 __ptr = malloc(param_1 * sizeof(pthread_t));
 if (__ptr == (void *)0x0) {
 free(local_4);
 uVar4 = 0xffffffff;
 }
 else {
 lVar5 = 0;
 shared_counter = 0;
 do {
 if (iVar2 <= (int)lVar5) {
 for (lVar5 = 0; (int)lVar5 < iVar2; lVar5 = lVar5 + 1) {
 pthread_join(((pthread_t *)__ptr)[lVar5],(void **)0x0);
 }
 free(__ptr);
 free(local_4);
 if (shared_counter == iVar2 * param_2) {
 return 0x2a;
 }
 return 0xfffffffd;
 }
 lVar1 = lVar5;
 lVar5 = lVar5 + 1;
 iVar3 = pthread_create(&((pthread_t *)__ptr)[lVar1],(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_increment,(void *)local_4);
 } while (iVar3 == 0);
 free(__ptr);
 free(local_4);
 uVar4 = 0xfffffffe;
 }
 return uVar4;
}



/* Function: call_mutex_lock @ 00102c60 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: param_condition_variable @ 00102c6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_condition_variable(void)

{
 int iVar1;
 int uVar2;
 pthread_t local_20;
 pthread_t local_18;
 int *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
pthread_join(local_18,(void **)&local_10);
	pthread_join(local_20,(void **)0x0);
	uVar2 = *(int *)local_10;
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
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: param_atomic_ops @ 00102d3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_atomic_ops(uint param_1,int param_2)

{
 long lVar1;
 int iVar2;
 int uVar3;
 void *__ptr;
 long lVar4;
 int *local_14;
 pthread_t local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_14 = malloc(sizeof(int));
 if (local_14 == (int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 *local_14 = param_2;
 __ptr = malloc(param_1 * sizeof(pthread_t));
 if (__ptr == (void *)0x0) {
 free(local_14);
 uVar3 = 0xffffffff;
 }
 else {
 atomic_counter = 0;
 lVar4 = 0;
 do {
 if ((int)param_1 <= (int)lVar4) {
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,(void *(*)(void *))thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 for (lVar4 = 0; iVar2 = atomic_counter, (int)lVar4 < (int)param_1; lVar4 = lVar4 + 1) {
 pthread_join(((pthread_t *)__ptr)[lVar4],(void **)0x0);
 }
 free(__ptr);
 free(local_14);
 uVar3 = 0x2a;
 if (iVar2 < 1) {
 uVar3 = 0xfffffffd;
 }
 goto LAB_00102e28;
 }
 lVar1 = lVar4;
 lVar4 = lVar4 + 1;
 iVar2 = pthread_create(&((pthread_t *)__ptr)[lVar1],(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_atomic_increment,(void *)local_14);
 } while (iVar2 == 0);
 free(__ptr);
 free(local_14);
 uVar3 = 0xfffffffe;
 }
 }
LAB_00102e28:
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_atomic_ops @ 00102e78 */

int call_atomic_ops(void)

{
 return param_atomic_ops(4,500);
}



/* Function: param_thread_local_storage @ 00102e84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_thread_local_storage(uint param_1)

{
 long lVar1;
 long lVar2;
 int uVar3;
 int iVar4;
 void *__ptr;
 void *__ptr_00;
 void *pvVar5;
 ulong uVar6;
 long lVar7;
 int iVar8;
 int *local_10;
 long local_8;
 
 uVar6 = param_1 * 8;
 local_8 = ___stack_chk_guard;
 __ptr = malloc(uVar6);
 __ptr_00 = malloc(uVar6);
 if (__ptr == (void *)0x0 || __ptr_00 == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 for (uVar6 = 0; (int)uVar6 < (int)param_1; uVar6 = uVar6 + 1) {
 pvVar5 = malloc(0x10);
 ((void **)__ptr_00)[uVar6] = pvVar5;
 __snprintf_chk(pvVar5,0x10,1,0x10,"Thread-%d",(int)uVar6);
 (void)__snprintf_chk(pvVar5,0x10,1,0x10,"Thread-%d",(int)uVar6);
 }
 lVar7 = 0;
 do {
 iVar8 = (int)lVar7;
 if ((int)param_1 <= iVar8) {
 iVar4 = 0;
 iVar8 = 0;
 for (lVar7 = 0; (int)lVar7 < (int)param_1; lVar7 = lVar7 + 1) {
 pthread_join(((pthread_t *)__ptr)[lVar7],(void **)&local_10);
 iVar8 = iVar8 + *local_10;
 iVar4 = iVar4 + local_10[1];
 free(local_10);
 free(((void **)__ptr_00)[lVar7]);
 }
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0x2a;
 if ((int)(param_1 * 100) != iVar8 || (int)(param_1 * 0x96) != iVar4) {
 uVar3 = 0xfffffffd;
 }
 goto LAB_00102fcc;
 }
 lVar1 = lVar7;
 lVar7 = lVar7 + 1;
 iVar4 = pthread_create(&((pthread_t *)__ptr)[lVar1],(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_tls_test,((void **)__ptr_00)[lVar1]);
 } while (iVar4 == 0);
 lVar7 = 0;
 do {
 free(((void **)__ptr_00)[lVar7]);
 lVar7 = lVar7 + 1;
 } while ((int)lVar7 <= iVar8);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 }
LAB_00102fcc:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar3;
}



/* Function: call_thread_local_storage @ 00103040 */

int call_thread_local_storage(void)

{
 return param_thread_local_storage(4);
}



/* Function: test_thread_concurrency @ 00103048 */

void test_thread_concurrency(void)

{
 puts((char *)&DAT_0010349b);
 call_pthread_create();
 __printf_chk(1,(char *)&DAT_001034b9,0);
 __printf_chk(1,(char *)&DAT_001034d5,param_pthread_join());
 call_mutex_lock();
 __printf_chk(1,(char *)&DAT_001034f2,0);
 __printf_chk(1,(char *)&DAT_0010350e,param_condition_variable());
 __printf_chk(1,(char *)&DAT_0010352a,call_atomic_ops());
 __printf_chk(1,(char *)&DAT_00103546,call_thread_local_storage());
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
