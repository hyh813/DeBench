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
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef void undefined;
typedef unsigned short unkuint9;
typedef unsigned int unkuint10;
typedef unsigned int uint3;
typedef unsigned char byte;
typedef void (*code)(void);

#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdatomic.h>

/* Atomic lock/unlock macros */
#define LOCK() __atomic_thread_fence(__ATOMIC_ACQUIRE)
#define UNLOCK() __atomic_thread_fence(__ATOMIC_RELEASE)

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Global variables */
int atomic_counter;
int signal_received;
int signal_number;
int data;
int ready;
int shared_counter;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;

/* Concatenation macro for 16-bit values */
#define CONCAT44(hi,lo) (((uint32_t)((hi) & 0xFFFF) << 16) | ((uint32_t)((lo) & 0xFFFF)))

/* String constants for test output */
static const char DAT_001052c4[] = "Thread Concurrency Tests:";
static const char DAT_0010521c[] = "File Stat Test: %d\n";
static const char DAT_0010528c[] = "Shared Memory Test: %d\n";
static const char DAT_0010531b[] = "Mutex Lock Test: %d\n";
static const char DAT_00105071[] = "Strcpy Test: %d\n";
static const char DAT_0010508c[] = "Strcmp Test: %d\n";
static const char DAT_001050a7[] = "Strlen Test: %d\n";
static const char DAT_001050c3[] = "Memcpy Test: %d\n";
static const char DAT_001050df[] = "Memcmp Test: %d\n";
static const char DAT_001050fb[] = "Printf Test: %d\n";
static const char DAT_00105117[] = "Scanf Test: %d\n";
static const char DAT_00105134[] = "File Open Test: %d\n";
static const char DAT_00105150[] = "File Read Write Test: %d\n";
static const char DAT_0010516c[] = "Malloc Free Test: %d\n";
static const char DAT_00105188[] = "Memset Test: %d\n";
static const char DAT_001051a3[] = "Strchr Strstr Test: %d\n";
static const char DAT_001051e5[] = "System Calls Tests:";
static const char DAT_00105200[] = "Linux Syscall Test: %d\n";
static const char DAT_00105238[] = "Fork Exec Test: %d\n";
static const char DAT_00105254[] = "Pipe Communication Test: %d\n";
static const char DAT_00105270[] = "Socket Create Test: %d\n";
static const char DAT_001052a8[] = "Signal Handling Test: PASSED\n";
static const char DAT_001052e2[] = "Pthread Create Test: %d\n";
static const char DAT_001052fe[] = "Pthread Join Test: %d\n";
static const char DAT_00105337[] = "Condition Variable Test: %d\n";
static const char DAT_00105353[] = "Atomic Ops Test: %d\n";
static const char DAT_0010536f[] = "Thread Local Storage Test: PASSED\n";
static const char DAT_00105390[] = "Standard Library Functions:";

/* External data references */
static const char DAT_00105023[] = "TestName";

/* Thread data structure */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined8 *)0x0)();
 return;
}



/* Function: main @ 00102760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00102880 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: thread_sum @ 001028a0 */

void * thread_sum(void *arg)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 
 /* Unresolved local var: int i@[???] */
 iVar5 = *(int *)arg;
 iVar2 = *(int *)((long)arg + 4);
 *(undefined4 *)((long)arg + 8) = 0;
 if (iVar2 < iVar5) {
 return (void *)0x0;
 }
 uVar1 = (iVar2 - iVar5) + 1;
 if ((uint)(iVar2 - iVar5) < 10) {
 iVar9 = 0;
 }
 else {
 iVar8 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 uVar3 = 0;
 iVar9 = iVar5;
 iVar4 = iVar5 + 1;
 iVar6 = iVar5 + 2;
 iVar7 = iVar5 + 3;
 do {
 uVar3 = uVar3 + 1;
 iVar8 = iVar8 + iVar9;
 iVar10 = iVar10 + iVar4;
 iVar11 = iVar11 + iVar6;
 iVar12 = iVar12 + iVar7;
 iVar9 = iVar9 + 4;
 iVar4 = iVar4 + 4;
 iVar6 = iVar6 + 4;
 iVar7 = iVar7 + 4;
 } while (uVar1 >> 2 != uVar3);
 iVar5 = iVar5 + (uVar1 & 0xfffffffc);
 iVar9 = iVar8 + iVar11 + iVar10 + iVar12;
 iVar4 = iVar9;
 if (uVar1 == (uVar1 & 0xfffffffc)) goto LAB_0010298b;
 }
 iVar4 = iVar9 + iVar5;
 if (iVar5 + 1 <= iVar2) {
 iVar4 = iVar9 + iVar5 + iVar5 + 1;
 if (iVar5 + 2 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 2;
 if (iVar5 + 3 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 3;
 if (iVar5 + 4 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 4;
 if (iVar5 + 5 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 5;
 if (iVar5 + 6 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 6;
 if (iVar5 + 7 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 7;
 if (iVar5 + 8 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 8;
 if (iVar5 + 9 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 9;
 }
 }
 }
 }
 }
 }
 }
 }
 }
LAB_0010298b:
 *(int *)((long)arg + 8) = iVar4;
 return (void *)0x0;
}



/* Function: thread_compute @ 001029a0 */

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: thread_increment @ 001029c0 */

void * thread_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return (void *)0x0;
}



/* Function: consumer_thread @ 00102a20 */

void * consumer_thread(void *arg)

{
 int iVar1;
 int *piVar2;
 
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 iVar1 = data;
 while (data = iVar1, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 iVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 piVar2 = malloc(4);
 *piVar2 = iVar1;
 return piVar2;
}



/* Function: producer_thread @ 00102a90 */

void * producer_thread(void *arg)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: thread_atomic_increment @ 00102ae0 */

void * thread_atomic_increment(void *arg)

{
 atomic_int aVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < *(int *)arg) {
 iVar2 = 0;
 do {
 /* Unresolved local var: int expected@[???]
 Unresolved local var: int desired@[???] */
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 aVar1 = iVar2 + 1000;
 if (iVar2 != atomic_counter) {
 aVar1 = atomic_counter;
 }
 atomic_counter = aVar1;
 UNLOCK();
 iVar2 = iVar2 + 1;
 } while (*(int *)arg != iVar2);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00102b20 */

void * thread_atomic_load_store(void *arg)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0x0;
}



/* Function: thread_tls_test @ 00102b40 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int iVar2;
 undefined8 *puVar3;
 long *in_FS_OFFSET;
 
 iVar2 = *(int *)((long)in_FS_OFFSET + -0x24);
 iVar1 = iVar2 + 0x32;
 *(int *)((long)in_FS_OFFSET + -0x24) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),arg,0x1f);
 puVar3 = malloc(8);
 *puVar3 = CONCAT44(iVar1,iVar2);
 return puVar3;
}



/* Function: param_fork_exec_child @ 00102ba0 */

int param_fork_exec_child(char *prog,char *arg)

{
 /* Unresolved local var: pid_t pid@[???] */
 execl(prog,prog,arg,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
}



/* Function: param_thread_local_storage @ 00102bc0 */

int param_thread_local_storage(int thread_count)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar2;
 ulong uVar3;
 undefined8 *puVar4;
 ulong uVar5;
 long lVar6;
 int iVar7;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 void *ret;
 long local_40;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = malloc(0x20);
 __ptr_00 = malloc(0x20);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
 iVar1 = -1;
 }
 else {
 uVar3 = 0;
 /* Unresolved local var: int i@[???] */
 do {
 pvVar2 = malloc(0x10);
 uVar5 = uVar3 & 0xffffffff;
 __ptr_00[uVar3] = pvVar2;
 uVar3 = uVar3 + 1;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar5);
 } while (uVar3 != 4);
 lVar6 = 0;
 __newthread = __ptr;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[lVar6]);
 if (iVar1 != 0) {
 puVar4 = __ptr_00;
 do {
 /* Unresolved local var: int j@[???] */
 pvVar2 = (void *)*puVar4;
 puVar4 = puVar4 + 1;
 free(pvVar2);
 } while (__ptr_00 + lVar6 + 1 != puVar4);
 free(__ptr_00);
 free(__ptr);
 iVar1 = -2;
 goto LAB_00102ced;
 }
 lVar6 = lVar6 + 1;
 __newthread = __newthread + 1;
 } while (lVar6 != 4);
 iVar7 = 0;
 lVar6 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(*(pthread_t *)((long)__ptr + lVar6),&ret);
 iVar1 = iVar1 + *(int *)ret;
 iVar7 = iVar7 + *(int *)((long)ret + 4);
 free(ret);
 puVar4 = (undefined8 *)((long)__ptr_00 + lVar6);
 lVar6 = lVar6 + 8;
 free((void *)*puVar4);
 } while (lVar6 != 0x20);
 free(__ptr_00);
 free(__ptr);
 if ((iVar1 == 400) && (iVar7 == 600)) {
 iVar1 = 0x2a;
 }
 else {
 iVar1 = -3;
 }
 }
LAB_00102ced:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_atomic_ops_impl @ 00102d60 */

int param_atomic_ops_impl(int thread_count,int iterations)

{
 atomic_int aVar1;
 int iVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 long in_FS_OFFSET;
 undefined4 local_4c;
 pthread_t load_store_tid;
 long local_40;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int final_value@[???] */
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_4c = 500;
 __ptr = malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 /* Unresolved local var: int i@[???] */
 ppVar3 = __ptr;
 do {
 iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_4c);
 if (iVar2 != 0) {
 free(__ptr);
 iVar2 = -2;
 goto LAB_00102e31;
 }
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + 4);
 iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 ppVar3 = __ptr;
 if (iVar2 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 do {
 /* Unresolved local var: int i@[???] */
 ppVar4 = ppVar3 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 aVar1 = atomic_counter;
 ppVar3 = ppVar4;
 } while (ppVar4 != __ptr + 4);
 free(__ptr);
 iVar2 = 0x2a;
 if (aVar1 < 1) {
 iVar2 = -3;
 }
 }
LAB_00102e31:
 if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_mutex_lock_impl @ 00102e80 */

int param_mutex_lock_impl(int thread_count,int iterations_per_thread)

{
 pthread_t __th;
 int iVar1;
 pthread_t *__ptr;
 pthread_t *__newthread;
 pthread_t *ppVar2;
 long in_FS_OFFSET;
 int local_44;
 long local_40;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_44 = 1000;
 __ptr = malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 iVar1 = -2;
 goto LAB_00102f38;
 }
 __newthread = __newthread + 1;
 ppVar2 = __ptr;
 } while (__newthread != __ptr + 4);
 do {
 /* Unresolved local var: int i@[???] */
 __th = *ppVar2;
 ppVar2 = ppVar2 + 1;
 pthread_join(__th,(void **)0x0);
 } while (ppVar2 != __ptr + 4);
 free(__ptr);
 iVar1 = 0x2a;
 if (local_44 << 2 != shared_counter) {
 iVar1 = -3;
 }
 }
LAB_00102f38:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_strcpy @ 00102f80 */

int param_strcpy(char *dst,char *src)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(dst,src);
 return (int)pcVar1 - (int)dst;
}



/* Function: call_strcpy @ 00102fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 return 8;
}



/* Function: param_strcmp @ 00102fb0 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = strcmp(s1,s2);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: call_strcmp @ 00102fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 00102ff0 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 00103010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00103020 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00103040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00103050 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = memcmp(p1,p2,n);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: call_memcmp @ 00103080 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 long in_FS_OFFSET;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 /* Unresolved local var: int ret@[???] */
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 arr1[2] = 3;
 arr1[0] = 1;
 arr1[1] = 2;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 iVar3 = memcmp(arr1,arr2,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar2 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar2 = 1;
 }
 iVar3 = memcmp(arr1,arr3,0xc);
 iVar4 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar4 = 1;
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_printf @ 00103140 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00103160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105023);
 return iVar1;
}



/* Function: param_scanf @ 00103190 */

int param_scanf(char *input_str)

{
 int iVar1;
 long in_FS_OFFSET;
 int a;
 int b;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
 if (iVar1 == 2) {
 iVar1 = b + a;
 }
 else {
 iVar1 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_scanf @ 001031f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 long in_FS_OFFSET;
 int a;
 int b;
 long local_10;
 
 /* Unresolved local var: int ret@[???] */
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
 if (iVar1 == 2) {
 iVar1 = b + a;
 }
 else {
 iVar1 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_fopen_fclose @ 00103260 */

int param_fopen_fclose(char *filename)

{
 int iVar1;
 FILE *__stream;
 
 __stream = fopen(filename,"r");
 if (__stream == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 }
 return iVar1;
}



/* Function: call_fopen_fclose @ 001032b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 if (-1 < iVar1) {
 return 0x2a;
 }
 }
 return -1;
}



/* Function: param_fread_fwrite @ 00103310 */

int param_fread_fwrite(char *tmpfile)

{
 long lVar1;
 int iVar2;
 FILE *__s;
 size_t sVar3;
 long in_FS_OFFSET;
 char read_buffer [32];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar2 = -1;
 }
 else {
 sVar3 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar3 == 0x12) {
 rewind(__s);
 /* Unresolved local var: size_t sz@[???] */
 sVar3 = fread(read_buffer,1,0x12,__s);
 read_buffer[sVar3] = '\0';
 fclose(__s);
 unlink(tmpfile);
 if ((((sVar3 != 0x12) ||
 (*(uint64_t *)(read_buffer + 8) != 0x6144207473655420UL || *(uint64_t *)read_buffer != 0x68636e65426e6942UL)) ||
 (*(uint16_t *)(read_buffer + 16) != 0x6174)) || (iVar2 = 0x2a, read_buffer[0x12] != '\0')) {
 iVar2 = -3;
 }
 }
 else {
 fclose(__s);
 iVar2 = -2;
 }
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_fread_fwrite @ 00103420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00103430 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int *piVar1;
 int *piVar2;
 ulong uVar3;
 int iVar4;
 int iVar5;
 
 __ptr = malloc(size * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 if (size - 1 < 3) {
 uVar3 = 0;
 }
 else {
 piVar1 = __ptr;
 iVar4 = 0;
 iVar5 = 1;
 do {
 piVar2 = piVar1 + 4;
 *piVar1 = iVar4 * 10;
 piVar1[1] = iVar5 * 10;
 piVar1[2] = (iVar4 + 2) * 10;
 piVar1[3] = (iVar5 + 2) * 10;
 piVar1 = piVar2;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 } while (__ptr + (size & 0xfffffffffffffffc) != piVar2);
 uVar3 = size & 0xfffffffffffffffc;
 if ((size & 3) == 0) goto LAB_00103513;
 }
 __ptr[uVar3] = (int)uVar3 * 10;
 if (uVar3 + 1 < size) {
 __ptr[uVar3 + 1] = (int)(uVar3 + 1) * 10;
 if (uVar3 + 2 < size) {
 __ptr[uVar3 + 2] = (int)(uVar3 + 2) * 10;
 }
 }
 }
LAB_00103513:
 iVar4 = *__ptr;
 iVar5 = __ptr[size - 1];
 free(__ptr);
 return iVar4 + iVar5;
}



/* Function: call_malloc_free @ 00103540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 void *__ptr;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 free(__ptr);
 iVar1 = 0x5a;
 }
 return iVar1;
}



/* Function: param_memset @ 00103570 */

int param_memset(void *buffer,size_t size)

{
 memset(buffer, 0, size);
 return 0;
}



/* Function: call_memset @ 00103740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00103750 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 int iVar1;
 char *pcVar2;
 int iVar3;
 
 pcVar2 = strchr(str,(int)ch);
 iVar3 = (int)pcVar2 - (int)str;
 if (pcVar2 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar2 = strstr(str,substr);
 iVar1 = -1;
 if (pcVar2 != (char *)0x0) {
 iVar1 = (int)pcVar2 - (int)str;
 }
 return iVar3 + iVar1;
}



/* Function: call_strchr_strstr @ 001037b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 001037c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 undefined4 uVar4;
 int iVar5;
 FILE *__stream;
 void *__ptr;
 undefined8 uVar6;
 long in_FS_OFFSET;
 int a;
 int b;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ret@[???] */
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00105390);
 __printf_chk(1,&DAT_00105071,8);
 __printf_chk(1,&DAT_0010508c,0);
 __printf_chk(1,&DAT_001050a7,0xc);
 __printf_chk(1,&DAT_001050c3,0x5a);
 arr1[2] = 3;
 arr1[0] = 1;
 arr1[1] = 2;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 iVar2 = memcmp(arr1,arr2,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar5 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar5 = 1;
 }
 iVar3 = memcmp(arr1,arr3,0xc);
 iVar2 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar2 = 1;
 }
 __printf_chk(1,&DAT_001050df,iVar2 + iVar5);
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 uVar4 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105023);
 __printf_chk(1,&DAT_001050fb,uVar4);
 /* Unresolved local var: int ret@[???] */
 iVar5 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
 if (iVar5 == 2) {
 iVar5 = b + a;
 }
 else {
 iVar5 = -1;
 }
 __printf_chk(1,&DAT_00105117,iVar5);
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar5 = fileno(__stream);
 fclose(__stream);
 uVar6 = 0x2a;
 if (-1 < iVar5) goto LAB_00103987;
 }
 uVar6 = 0xffffffff;
LAB_00103987:
 __printf_chk(1,&DAT_00105134,uVar6);
 iVar5 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_00105150,iVar5);
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar6 = 0x5a;
 }
 __printf_chk(1,&DAT_0010516c,uVar6);
 __printf_chk(1,&DAT_00105188,0);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_001051a3,0xf);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_linux_syscall @ 00103a50 */

int param_linux_syscall(char *pathname)

{
 ulong uVar1;
 int *piVar2;
 
 uVar1 = syscall(2,pathname,0);
 if (-1 < (int)uVar1) {
 syscall(3,uVar1 & 0xffffffff);
 return (int)uVar1;
 }
 /* Unresolved local var: int fd@[???] */
 piVar2 = __errno_location();
 return -*piVar2;
}



/* Function: call_linux_syscall @ 00103aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 ulong uVar2;
 int *piVar3;
 
 /* Unresolved local var: int fd@[???] */
 uVar2 = syscall(2,"/etc/passwd",0);
 if (-1 < (int)uVar2) {
 syscall(3,uVar2 & 0xffffffff);
 return 0x2a;
 }
 /* Unresolved local var: int fd@[???] */
 piVar3 = __errno_location();
 iVar1 = 0x2a;
 if (0 < *piVar3) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: param_win32_api @ 00103b00 */

int param_win32_api(char *filename)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 struct stat st;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 iVar2 = stat(filename,(struct stat *)&st);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0x2a;
 if (st.st_size < 1) {
 iVar2 = -2;
 }
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_win32_api @ 00103b70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 struct stat st;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 iVar2 = stat("/etc/passwd",(struct stat *)&st);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0x2a;
 if (st.st_size < 1) {
 iVar2 = -2;
 }
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_fork_exec @ 00103be0 */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 long in_FS_OFFSET;
 int status;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 /* WARNING: Subroutine does not return */
 param_fork_exec_child(prog,arg);
 }
 /* Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,&status,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = (uint)status >> 8 & 0xff, (status & 0x7fU) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fork_exec @ 00103c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 int iVar2;
 long in_FS_OFFSET;
 int status;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 /* WARNING: Subroutine does not return */
 param_fork_exec("/bin/true",(char *)0x0);
 }
 /* Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,&status,0);
 if (((-1 < _Var1) && ((status & 0x7fU) == 0)) && ((char)((uint)status >> 8) == '\0')) {
 iVar2 = 0x2a;
 goto LAB_00103cb2;
 }
 }
 iVar2 = -1;
LAB_00103cb2:
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_pipe_communication @ 00103cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 long lVar1;
 int iVar2;
 __pid_t _Var3;
 ssize_t sVar4;
 long in_FS_OFFSET;
 int pipefd [2];
 char buffer [32];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 iVar2 = pipe(pipefd);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 _Var3 = fork();
 if (_Var3 < 0) {
 iVar2 = -2;
 }
 else {
 if (_Var3 == 0) {
 /* Unresolved local var: char * msg@[???] */
 close(pipefd[0]);
 write(pipefd[1],"HelloPipe",9);
 close(pipefd[1]);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 /* Unresolved local var: ssize_t bytes@[???] */
 close(pipefd[1]);
 sVar4 = read(pipefd[0],buffer,0x1f);
 buffer[sVar4] = '\0';
 close(pipefd[0]);
 wait((void *)0x0);
 iVar2 = 0x2a;
 if (sVar4 < 1) {
 iVar2 = -3;
 }
 }
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pipe_communication @ 00103de0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 00103df0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 int opt;
 struct sockaddr_in addr;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 iVar2 = socket(2,1,0);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 opt = 1;
 iVar3 = setsockopt(iVar2,1,2,&opt,4);
 if (iVar3 < 0) {
 close(iVar2);
 iVar2 = -2;
 }
 else {
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = 2;
 iVar3 = bind(iVar2,(struct sockaddr *)&addr,0x10);
 if (iVar3 < 0) {
 close(iVar2);
 iVar2 = -3;
 }
 else {
 iVar3 = listen(iVar2,5);
 if (iVar3 < 0) {
 close(iVar2);
 iVar2 = -4;
 }
 else {
 close(iVar2);
 iVar2 = 0x2a;
 }
 }
 }
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_socket_create @ 00103ef0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00103f00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 undefined8 *__shmaddr;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return -2;
 }
 __shmaddr = shmat(iVar1,(void *)0x0,0);
 if (__shmaddr != (undefined8 *)0xffffffffffffffff) {
 *(undefined4 *)(__shmaddr + 1) = 0x79726f6d;
 *__shmaddr = 0x654d646572616853;
 *(undefined1 *)((long)__shmaddr + 0xc) = 0;
 shmdt(__shmaddr);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return 0xc;
 }
 return -3;
 }
 }
 return -1;
}



/* Function: call_shmget_shmat @ 00103fc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_shmget_shmat();
 iVar2 = 0x2a;
 if (iVar1 < 1) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_signal_handling @ 00103ff0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 iVar2 = -1;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 iVar2 = -2;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar2 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 }
 if (signal_received == 0) {
 iVar2 = -3;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 /* Unresolved local var: int attempts@[???] */
 if (signal_received == 0) {
 iVar2 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 iVar2 = -5;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar2 = 0x2a;
 }
 }
 else {
 iVar2 = -4;
 }
 }
 }
 return iVar2;
}



/* Function: call_signal_handling @ 00104130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00104140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 long lVar1;
 int iVar2;
 __pid_t _Var3;
 ulong uVar4;
 int *piVar5;
 undefined8 uVar6;
 long in_FS_OFFSET;
 int status;
 struct stat st;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001051e5);
 uVar4 = syscall(2,"/etc/passwd",0);
 if ((int)uVar4 < 0) {
 /* Unresolved local var: int fd@[???] */
 piVar5 = __errno_location();
 uVar6 = 0x2a;
 if (0 < *piVar5) {
 uVar6 = 0xffffffff;
 }
 }
 else {
 syscall(3,uVar4 & 0xffffffff);
 uVar6 = 0x2a;
 }
 __printf_chk(1,&DAT_00105200,uVar6);
 iVar2 = stat("/etc/passwd",&st);
 if (iVar2 < 0) {
 uVar6 = 0xffffffff;
 }
 else {
 uVar6 = 0x2a;
 if (st.st_size < 1) {
 uVar6 = 0xfffffffe;
 }
 }
 __printf_chk(1,&DAT_0010521c,uVar6);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var3 = fork();
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 /* WARNING: Subroutine does not return */
 param_fork_exec_child("/bin/true",(char *)0x0);
 }
 /* Unresolved local var: pid_t wpid@[???] */
 _Var3 = waitpid(_Var3,&status,0);
 if (((-1 < _Var3) && ((status & 0x7fU) == 0)) && ((char)((uint)status >> 8) == '\0')) {
 uVar6 = 0x2a;
 goto LAB_0010421e;
 }
 }
 uVar6 = 0xffffffff;
LAB_0010421e:
 __printf_chk(1,&DAT_00105238,uVar6);
 iVar2 = param_pipe_communication();
 __printf_chk(1,&DAT_00105254,iVar2);
 iVar2 = param_socket_create();
 __printf_chk(1,&DAT_00105270,iVar2);
 /* Unresolved local var: int ret@[???] */
 iVar2 = param_shmget_shmat();
 uVar6 = 0x2a;
 if (iVar2 < 1) {
 uVar6 = 0xffffffff;
 }
 __printf_chk(1,&DAT_0010528c,uVar6);
 param_signal_handling();
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_001052a8);
 return;
}



/* Function: param_pthread_create @ 00104320 */

int param_pthread_create(int x)

{
 int iVar1;
 long in_FS_OFFSET;
 int input;
 pthread_t tid;
 void *thread_ret;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 input = x;
 iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 if (iVar1 == 0) {
 pthread_join(tid,&thread_ret);
 iVar1 = *(int *)thread_ret;
 free(thread_ret);
 }
 else {
 iVar1 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_create @ 001043a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 long in_FS_OFFSET;
 int input;
 pthread_t tid;
 void *thread_ret;
 long local_10;
 
 /* Unresolved local var: int ret@[???]
 Unresolved local var: int result@[???] */
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 input = 7;
 iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 if (iVar1 == 0) {
 pthread_join(tid,&thread_ret);
 iVar1 = *(int *)thread_ret;
 free(thread_ret);
 }
 else {
 iVar1 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_pthread_join @ 00104430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 ThreadData *__arg;
 long lVar3;
 long lVar4;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 pthread_t tids [3];
 ThreadData data [3];
 long local_canary;
 ThreadData local_44;

 __newthread = tids;
 local_canary = *(long *)(in_FS_OFFSET + 0x28);
 __arg = data;
 data[0].start = 1;
 data[0].end = 10;
 data[0].result = 0;
 data[1].start = 0xb;
 data[2].result = 0;
 data[1].end = 0x14;
 data[1].result = 0;
 /* Unresolved local var: int i@[???] */
 data[2].start = 0x15;
 data[2].end = 0x1e;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_001044d9;
 }
 __arg = __arg + 1;
 __newthread = __newthread + 1;
 } while (&local_44 != __arg);
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 lVar3 = 0;
 do {
 iVar2 = pthread_join(tids[lVar3],(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 lVar4 = lVar3 + 1;
 iVar1 = iVar1 + data[lVar3].result;
 lVar3 = lVar4;
 } while (lVar4 != 3);
LAB_001044d9:
 if (local_canary == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_join @ 00104520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: param_mutex_lock @ 00104530 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 pthread_t __th;
 int iVar1;
 pthread_t *__ptr;
 pthread_t *ppVar2;
 pthread_t *__newthread;
 int local_3c [3];
 
 local_3c[0] = iterations_per_thread;
 __ptr = malloc((long)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 __newthread = __newthread + 1;
 ppVar2 = __ptr;
 } while (__newthread != __ptr + (uint)thread_count);
 do {
 /* Unresolved local var: int i@[???] */
 __th = *ppVar2;
 ppVar2 = ppVar2 + 1;
 pthread_join(__th,(void **)0x0);
 } while (ppVar2 != __ptr + (uint)thread_count);
 }
 free(__ptr);
 iVar1 = 0x2a;
 if (shared_counter != thread_count * local_3c[0]) {
 iVar1 = -3;
 }
 }
 return iVar1;
}



/* Function: call_mutex_lock @ 00104620 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 int in_ESI;
 int in_EDI;
 
 iVar1 = param_mutex_lock_impl(in_EDI,in_ESI);
 return iVar1;
}



/* Function: param_condition_variable @ 00104630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 long in_FS_OFFSET;
 pthread_t producer;
 pthread_t consumer;
 void *consumer_ret;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&consumer,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&producer,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(consumer,&consumer_ret);
 pthread_join(producer,(void **)0x0);
 iVar1 = *(int *)consumer_ret;
 free(consumer_ret);
 }
 else {
 iVar1 = -2;
 pthread_cancel(consumer);
 }
 }
 else {
 iVar1 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_condition_variable @ 00104700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: param_atomic_ops @ 00104710 */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 int iVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 long lVar4;
 long in_FS_OFFSET;
 int local_4c;
 pthread_t load_store_tid;
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_4c = iterations;
 __ptr = malloc((long)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 if (iVar2 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 }
 else {
 ppVar3 = __ptr;
 do {
 iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_4c);
 if (iVar2 != 0) {
 free(__ptr);
 iVar2 = -2;
 goto LAB_001047aa;
 }
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + (uint)thread_count);
 iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 if (iVar2 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 lVar4 = 0;
 do {
 ppVar3 = __ptr + lVar4;
 /* Unresolved local var: int i@[???] */
 lVar4 = lVar4 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 } while ((int)lVar4 < thread_count);
 }
 aVar1 = atomic_counter;
 free(__ptr);
 iVar2 = 0x2a;
 if (aVar1 < 1) {
 iVar2 = -3;
 }
 }
LAB_001047aa:
 if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_atomic_ops @ 00104870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 int in_ESI;
 int in_EDI;
 
 iVar1 = param_atomic_ops(in_EDI,in_ESI);
 return iVar1;
}







/* Function: call_thread_local_storage @ 00104a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 int in_EDI;
 
 iVar1 = param_thread_local_storage(in_EDI);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00104a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined4 uVar4;
 long in_FS_OFFSET;
 int input;
 pthread_t tid;
 void *thread_ret;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001052c4);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: int result@[???] */
 input = 7;
 iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 if (iVar1 == 0) {
 pthread_join(tid,&thread_ret);
 uVar4 = *(undefined4 *)thread_ret;
 free(thread_ret);
 }
 else {
 uVar4 = 0xffffffff;
 }
 __printf_chk(1,&DAT_001052e2,uVar4);
 iVar1 = param_pthread_join();
 iVar2 = 0x1052fe;
 iVar3 = 1;
 __printf_chk(1,&DAT_001052fe,iVar1);
 iVar1 = param_mutex_lock(iVar3,iVar2);
 __printf_chk(1,&DAT_0010531b,iVar1);
 iVar1 = param_condition_variable();
 iVar2 = 0x105337;
 iVar3 = 1;
 __printf_chk(1,&DAT_00105337,iVar1);
 iVar1 = param_atomic_ops(iVar3,iVar2);
 iVar2 = 1;
 __printf_chk(1,&DAT_00105353,iVar1);
 param_thread_local_storage(iVar2);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_0010536f);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
