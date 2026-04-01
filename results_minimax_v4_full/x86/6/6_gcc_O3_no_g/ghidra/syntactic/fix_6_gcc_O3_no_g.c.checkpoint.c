/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and ssize_t are defined in sys/types.h - already included */
/* Note: intptr_t and uintptr_t are defined in stdint.h - included via stdlib.h */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra-specific types */
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef unsigned char byte;
typedef int bool;
typedef struct sockaddr sockaddr;
typedef void (*code)(void);

/* Standard library includes */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#define _REENTRANT
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/errno.h>
#include <fcntl.h>
#include <ctype.h>

/* Define LOCK and UNLOCK for atomic operations (x86 inline assembly equivalents) */
#define LOCK()   __sync_synchronize()
#define UNLOCK() __sync_synchronize()

/* pthread functions - ensure they're properly declared for linking */
/* Some systems require explicit linking with -lpthread */
#ifndef _REENTRANT
#define _REENTRANT
#endif

/* Ensure pthread types are defined */
#ifndef pthread_t
typedef unsigned long pthread_t;
#endif

/* pthread types and functions are defined in pthread.h */

/* pthread functions are declared in pthread.h which is included above */
/* LINKER: This code requires linking with -lpthread flag */
/* Example: gcc -o output source.c -lpthread */

/* String constants from binary */
char DAT_00014027[] = "test";
char DAT_00014390[] = "Standard Library Tests:";
char DAT_00014075[] = "strcmp: %d\n";
char DAT_00014090[] = "strncmp: %d\n";
char DAT_000140ab[] = "memcmp: %d\n";
char DAT_000140c7[] = "printf: %d\n";
char DAT_000140e3[] = "Total correct: %d\n";
char DAT_000140ff[] = "printf returned: %d\n";
char DAT_0001411b[] = "sscanf result: %d\n";
char DAT_00014138[] = "fopen/fileno: 0x%x\n";
char DAT_00014154[] = "fread/fwrite: %d\n";
char DAT_00014170[] = "malloc/free: 0x%x\n";
char DAT_0001418c[] = "memset: %d\n";
char DAT_000141a7[] = "strchr/strstr: %d\n";
char DAT_000141e9[] = "System Call Tests:\n";
char DAT_000142c8[] = "Thread Concurrency Tests:\n";
char DAT_000142e6[] = "thread_compute: %d\n";
char DAT_00014302[] = "pthread_join: %d\n";
char DAT_0001431f[] = "mutex_lock: %d\n";
char DAT_0001433b[] = "condition_variable: %d\n";
char DAT_00014357[] = "atomic_ops: %d\n";
char DAT_00014373[] = "thread_local_storage: %d\n";
int atomic_counter;
int shared_counter;
int data;
int ready;
int signal_received;
int signal_number;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00011790 */

undefined4 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000117dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000117e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011919 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001191d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: signal_handler @ 00011930 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 00011960 */

undefined4 thread_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *param_1;
 param_1[2] = 0;
 if (iVar1 <= param_1[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (param_1[1] + 1 != iVar1);
 param_1[2] = iVar2;
 }
 return 0;
}



/* Function: thread_compute @ 00011990 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void thread_compute(int *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}



/* Function: thread_increment @ 000119c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 thread_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return 0;
}



/* Function: consumer_thread @ 00011a30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void consumer_thread(void)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock(&cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return;
}



/* Function: producer_thread @ 00011ab0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 producer_thread(void)

{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}



/* Function: thread_atomic_increment @ 00011b10 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 thread_atomic_increment(int *param_1)

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
 } while (*param_1 != iVar2);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00011b60 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

undefined4 thread_atomic_load_store(void)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}



/* Function: thread_tls_test @ 00011b90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}



/* Function: param_fork_exec.part.0 @ 00011bf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_fork_exec_part_0(void)

{
 char *in_EAX;
 
 execl(in_EAX,in_EAX);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
}



/* Function: param_thread_local_storage.constprop.0 @ 00011c20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_thread_local_storage_constprop_0(void)

{
 pthread_t *__ptr;
 undefined4 *__ptr_00;
 void *pvVar1;
 undefined4 uVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 pthread_t *__newthread;
 undefined4 *puVar6;
 int in_GS_OFFSET;
 int *local_24;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x11c29;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(0x10);
 __ptr_00 = malloc(0x10);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined4 *)0x0)) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar4 = 0;
 do {
 pvVar1 = malloc(0x10);
 __ptr_00[iVar4] = pvVar1;
 iVar3 = iVar4 + 1;
 __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar4);
 iVar4 = iVar3;
 } while (iVar3 != 4);
 iVar4 = 0;
 __newthread = __ptr;
 do {
 iVar3 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[iVar4]);
 if (iVar3 != 0) {
 puVar6 = __ptr_00;
 do {
 pvVar1 = (void *)*puVar6;
 puVar6 = puVar6 + 1;
 free(pvVar1);
 } while (__ptr_00 + iVar4 + 1 != puVar6);
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00011d63;
 }
 iVar4 = iVar4 + 1;
 __newthread = __newthread + 1;
 } while (iVar4 != 4);
 iVar3 = 0;
 iVar5 = 0;
 iVar4 = 0;
 do {
 pthread_join(__ptr[iVar5],&local_24);
 iVar4 = iVar4 + *local_24;
 iVar3 = iVar3 + local_24[1];
 free(local_24);
 puVar6 = __ptr_00 + iVar5;
 iVar5 = iVar5 + 1;
 free((void *)*puVar6);
 } while (iVar5 != 4);
 free(__ptr_00);
 free(__ptr);
 if ((iVar4 == 400) && (iVar3 == 600)) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00011d63:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_atomic_ops.constprop.0 @ 00011de0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_atomic_ops_constprop_0(void)

{
 pthread_t *__ptr;
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 pthread_t *ppVar4;
 int in_GS_OFFSET;
 undefined4 local_28;
 pthread_t local_24;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x11de9;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = 500;
 __ptr = malloc(0x10);
 if (__ptr == (pthread_t *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_atomic_increment,&local_28);
 if (iVar1 != 0) {
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00011ec0;
 }
 ppVar4 = ppVar4 + 1;
 } while (ppVar4 != __ptr + 4);
 iVar2 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 iVar1 = 0;
 if (iVar2 == 0) {
 pthread_join(local_24,(void **)0x0);
 }
 do {
 ppVar4 = __ptr + iVar1;
 iVar1 = iVar1 + 1;
 pthread_join(*ppVar4,(void **)0x0);
 iVar2 = atomic_counter;
 } while (iVar1 != 4);
 free(__ptr);
 uVar3 = 0x2a;
 if (iVar2 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011ec0:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_mutex_lock.constprop.0 @ 00011f10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_mutex_lock_constprop_0(void)

{
 pthread_t *__ptr;
 int iVar1;
 undefined4 uVar2;
 pthread_t *__newthread;
 int in_GS_OFFSET;
 int local_24;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x11f19;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 1000;
 __ptr = malloc(0x10);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00011fdf;
 }
 __newthread = __newthread + 1;
 } while (__ptr + 4 != __newthread);
 iVar1 = 0;
 do {
 pthread_join(__ptr[iVar1],(void **)0x0);
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 free(__ptr);
 uVar2 = 0x2a;
 if (local_24 << 2 != shared_counter) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00011fdf:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_strcpy @ 00012020 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strcpy(char *param_1,char *param_2)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}



/* Function: call_strcpy @ 00012050 */

undefined4 call_strcpy(void)

{
 return 8;
}



/* Function: param_strcmp @ 00012060 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = strcmp(param_1,param_2);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: call_strcmp @ 000120a0 */

undefined4 call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 000120b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 000120e0 */

undefined4 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 000120f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3;
}



/* Function: call_memcpy @ 00012120 */

undefined4 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00012130 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: call_memcmp @ 00012170 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 local_28 = 1;
 local_24 = 2;
 local_20 = 4;
 local_1c = 1;
 local_18 = 2;
 local_14 = 3;
 iVar1 = memcmp(&local_34,&local_28,0xc);
 iVar3 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar1 = memcmp(&local_34,&local_1c,0xc);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_printf @ 00012250 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_printf(undefined4 param_1,undefined4 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00012280 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void call_printf(void)

{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00014027);
 return;
}



/* Function: param_scanf @ 000122b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_scanf(undefined4 param_1)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x122ba;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_scanf @ 00012320 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_scanf(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x1232a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_fopen_fclose @ 00012390 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: call_fopen_fclose @ 000123e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 call_fopen_fclose(void)

{
 FILE *__stream;
 int iVar1;
 
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 if (-1 < iVar1) {
 return 0x2a;
 }
 }
 return 0xffffffff;
}



/* Function: param_fread_fwrite @ 00012440 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_40 [32];
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x1244d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 iVar2 = -1;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_40,1,0x12,__s);
 local_40[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 if (sVar1 == 0x12) {
 iVar2 = strcmp(local_40,"BinBench Test Data");
 iVar2 = (-(uint)(iVar2 == 0) & 0x2d) - 3;
 }
 else {
 iVar2 = -3;
 }
 }
 else {
 fclose(__s);
 iVar2 = -2;
 }
 }
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_fread_fwrite @ 00012540 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00012570 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_malloc_free(int param_1)

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
 } while (param_1 * 10 != iVar1);
 }
 iVar1 = *__ptr + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 000125e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 call_malloc_free(void)

{
 void *__ptr;
 undefined4 uVar1;
 
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar1 = 0x5a;
 }
 return uVar1;
}



/* Function: param_memset @ 00012620 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_memset(byte *param_1,size_t param_2)

{
 byte *pbVar1;
 byte bVar2;
 int iVar3;
 
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar3 = 0;
 pbVar1 = param_1 + param_2;
 do {
 bVar2 = *param_1;
 param_1 = param_1 + 1;
 iVar3 = iVar3 + (uint)bVar2;
 } while (pbVar1 != param_1);
 return iVar3;
 }
 return 0;
}



/* Function: call_memset @ 00012680 */

undefined4 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00012690 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
 char *pcVar1;
 int iVar2;
 int iVar3;
 
 pcVar1 = strchr(param_1,(int)param_2);
 iVar3 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar2 = -1;
 if (pcVar1 != (char *)0x0) {
 iVar2 = (int)pcVar1 - (int)param_1;
 }
 return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 000126f0 */

undefined4 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 00012700 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Type propagation algorithm not settling */

void test_standard_library_functions(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 FILE *__stream;
 void *__ptr;
 int iVar4;
 int in_GS_OFFSET;
 int local_3c;
 int local_38 [11];
 
 local_38[10] = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00014390);
 __printf_chk(1,&DAT_00014075,8);
 __printf_chk(1,&DAT_00014090,0);
 __printf_chk(1,&DAT_000140ab,0xc);
 __printf_chk(1,&DAT_000140c7,0x5a);
 local_38[1] = 1;
 local_38[2] = 2;
 local_38[3] = 3;
 local_38[4] = 1;
 local_38[5] = 2;
 local_38[6] = 4;
 local_38[7] = 1;
 local_38[8] = 2;
 local_38[9] = 3;
 iVar1 = memcmp(local_38 + 1,local_38 + 4,0xc);
 iVar4 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar4 = 1;
 }
 iVar1 = memcmp(local_38 + 1,local_38 + 7,0xc);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 __printf_chk(1,&DAT_000140e3,iVar2 + iVar4);
 uVar3 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00014027);
 __printf_chk(1,&DAT_000140ff,uVar3);
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_3c,local_38);
 if (iVar1 == 2) {
 local_38[0] = local_38[0] + local_3c;
 }
 else {
 local_38[0] = -1;
 }
 __printf_chk(1,&DAT_0001411b,local_38[0]);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar3 = 0x2a;
 if (-1 < iVar1) goto LAB_000128d4;
 }
 uVar3 = 0xffffffff;
LAB_000128d4:
 __printf_chk(1,&DAT_00014138,uVar3);
 uVar3 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_00014154,uVar3);
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar3 = 0x5a;
 }
 __printf_chk(1,&DAT_00014170,uVar3);
 __printf_chk(1,&DAT_0001418c,0);
 __printf_chk(1,&DAT_000141a7,0xf);
 if (local_38[10] == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_linux_syscall @ 000129a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

long param_linux_syscall(undefined4 param_1)

{
 long lVar1;
 int *piVar2;
 undefined4 uVar3;
 
 uVar3 = 0;
 lVar1 = syscall(5,param_1,0);
 if (-1 < lVar1) {
 syscall(6,lVar1,uVar3);
 return lVar1;
 }
 piVar2 = __errno_location();
 return -*piVar2;
}



/* Function: call_linux_syscall @ 00012a00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 call_linux_syscall(void)

{
 long lVar1;
 int *piVar2;
 undefined4 uVar3;
 
 uVar3 = 0;
 lVar1 = syscall(5,"/etc/passwd",0);
 if (-1 < lVar1) {
 syscall(6,lVar1,uVar3);
 return 0x2a;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}



/* Function: param_win32_api @ 00012a70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 struct stat local_68;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x12a7a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = stat(param_1,&local_68);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_68.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_win32_api @ 00012ae0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 struct stat local_68;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x12aea;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = stat("/etc/passwd",&local_68);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_68.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_fork_exec @ 00012b50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint param_fork_exec(void)

{
 __pid_t _Var1;
 uint uVar2;
 int in_GS_OFFSET;
 uint uStack_30;
 int iVar3;
 uint local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
LAB_00012bb4:
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 if (_Var1 != 0) {
 uStack_30 = 0x12b94;
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_14 >> 8 & 0xff, (local_14 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 goto LAB_00012bb4;
 }
 param_fork_exec_part_0();
 iVar3 = *(int *)(in_GS_OFFSET + 0x14);
 _Var1 = fork();
 if (_Var1 < 0) {
LAB_00012c29:
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 param_fork_exec_part_0();
 goto LAB_00012c59;
 }
 _Var1 = waitpid(_Var1,(int *)&uStack_30,0);
 if (((_Var1 < 0) || ((uStack_30 & 0x7f) != 0)) || ((char)(uStack_30 >> 8) != '\0'))
 goto LAB_00012c29;
 uVar2 = 0x2a;
 }
 if (iVar3 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
LAB_00012c59:
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_fork_exec @ 00012be0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 call_fork_exec(void)

{
 __pid_t _Var1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 uint local_14;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x12bea;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 _Var1 = fork();
 if (_Var1 < 0) {
LAB_00012c29:
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 param_fork_exec_part_0();
 goto LAB_00012c59;
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (((_Var1 < 0) || ((local_14 & 0x7f) != 0)) || ((char)(local_14 >> 8) != '\0'))
 goto LAB_00012c29;
 uVar2 = 0x2a;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
LAB_00012c59:
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_pipe_communication @ 00012c60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined4 uVar4;
 int in_GS_OFFSET;
 int local_38;
 int local_34;
 undefined1 local_30 [32];
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x12c6b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = pipe(&local_38);
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
 close(local_38);
 write(local_34,"HelloPipe",9);
 close(local_34);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_34);
 sVar3 = read(local_38,local_30,0x1f);
 local_30[sVar3] = 0;
 close(local_38);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_socket_create @ 00012d70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 undefined4 local_24;
 sockaddr local_20;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x12d7b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
 local_20.sa_data[2] = '\0';
 local_20.sa_data[3] = '\0';
 local_20.sa_data[4] = '\0';
 local_20.sa_data[5] = '\0';
 local_20.sa_data[6] = '\0';
 local_20.sa_data[7] = '\0';
 local_20.sa_data[8] = '\0';
 local_20.sa_data[9] = '\0';
 local_20.sa_data[10] = '\0';
 local_20.sa_data[0xb] = '\0';
 local_20.sa_data[0xc] = '\0';
 local_20.sa_data[0xd] = '\0';
 local_20.sa_family = 2;
 local_20.sa_data[0] = '\0';
 local_20.sa_data[1] = '\0';
 iVar1 = bind(__fd,&local_20,0x10);
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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_shmget_shmat @ 00012eb0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 undefined4 *__shmaddr;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 __shmaddr = shmat(iVar1,(void *)0x0,0);
 if (__shmaddr != (undefined4 *)0xffffffff) {
 *__shmaddr = 0x72616853;
 __shmaddr[1] = 0x654d6465;
 __shmaddr[2] = 0x79726f6d;
 *(undefined1 *)(__shmaddr + 3) = 0;
 shmdt(__shmaddr);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}



/* Function: call_shmget_shmat @ 00012f90 */

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



/* Function: param_signal_handling @ 00012fb0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_signal_handling(void)

{
 __sighandler_t p_Var1;
 undefined4 uVar2;
 int iVar3;
 
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
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar2 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 }
 else {
 uVar2 = 0xfffffffc;
 }
 }
 }
 return uVar2;
}



/* Function: test_system_calls @ 00013120 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_system_calls(void)

{
 long lVar1;
 __pid_t __pid;
 int iVar2;
 undefined4 uVar3;
 int in_GS_OFFSET;
 pthread_t pStack_88;
 uint uStack_84;
 undefined4 *puStack_80;
 int iVar4;
 struct stat local_68;
 int local_10;
 char *fmt_str;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puStack_80 = (undefined4 *)0x13153;
 puts(&DAT_000141e9);
 puStack_80 = (undefined4 *)0x13160;
 lVar1 = syscall(5);
 if (lVar1 < 0) {
 __errno_location();
 }
 else {
 puStack_80 = (undefined4 *)0x13176;
 syscall(6);
 }
 puStack_80 = (undefined4 *)0x13190;
 __printf_chk(1,"open: %ld\n",lVar1);
 puStack_80 = (undefined4 *)0x1319d;
 stat("/etc/passwd",&local_68);
 puStack_80 = (undefined4 *)0x131cd;
 __printf_chk(1,"stat: %d\n",iVar2);
 puStack_80 = (undefined4 *)0x131d2;
 __pid = fork();
 if (-1 < __pid) {
 if (__pid == 0) {
 param_fork_exec_part_0();
 iVar4 = *(int *)(in_GS_OFFSET + 0x14);
 uStack_84 = (uint)local_68.st_dev;
 iVar2 = pthread_create(&pStack_88,(pthread_attr_t *)0x0,thread_compute,&uStack_84);
 if (iVar2 == 0) {
 pthread_join(pStack_88,&puStack_80);
 uVar3 = *puStack_80;
 free(puStack_80);
 }
 else {
 uVar3 = 0xffffffff;
 }
 if (iVar4 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return uVar3;
 }
 puStack_80 = (undefined4 *)0x131eb;
 waitpid(__pid,(int *)&local_68,0);
 }
 puStack_80 = (undefined4 *)0x13215;
 __printf_chk(1,"pipe: %d\n",0);
 puStack_80 = (undefined4 *)0x1321a;
 param_pipe_communication();
 puStack_80 = (undefined4 *)0x1322c;
 __printf_chk(1,"socket: %d\n",uVar3);
 puStack_80 = (undefined4 *)0x13231;
 param_socket_create();
 puStack_80 = (undefined4 *)0x13243;
 __printf_chk(1,"shm: %d\n",uVar3);
 puStack_80 = (undefined4 *)0x13248;
 param_shmget_shmat();
 puStack_80 = (undefined4 *)0x13269;
 __printf_chk(1,"signal: %d\n",uVar3);
 puStack_80 = (undefined4 *)0x1326e;
 param_signal_handling();
 puStack_80 = (undefined4 *)0x13280;
 __printf_chk(1,"fork_exec: %d\n",uVar3);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return 0;
}



/* Function: param_pthread_create @ 000132f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 pthread_t local_1c;
 undefined4 local_18;
 undefined4 *local_14;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x132fb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = param_1;
 iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,thread_compute,&local_18);
 if (iVar1 == 0) {
 pthread_join(local_1c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_pthread_create @ 00013380 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Type propagation algorithm not settling */

undefined4 call_pthread_create(void)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 pthread_t local_1c [2];
 undefined4 *local_14;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x1338b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c[1] = 7;
 iVar1 = pthread_create(local_1c,(pthread_attr_t *)0x0,thread_compute,local_1c + 1);
 if (iVar1 == 0) {
 pthread_join(local_1c[0],&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_pthread_join @ 00013410 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 pthread_t *__newthread;
 pthread_t *__arg;
 pthread_t *ppVar4;
 int in_GS_OFFSET;
 pthread_t local_50 [15];
 undefined4 uStack_14;
 
 uStack_14 = 0x1341d;
 local_50[0xc] = *(int *)(in_GS_OFFSET + 0x14);
 ppVar4 = local_50 + 3;
 local_50[3] = 1;
 ppVar3 = local_50;
 local_50[4] = 10;
 local_50[5] = 0;
 local_50[6] = 0xb;
 local_50[7] = 0x14;
 local_50[8] = 0;
 local_50[9] = 0x15;
 local_50[10] = 0x1e;
 local_50[0xb] = 0;
 __newthread = ppVar3;
 __arg = ppVar4;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_000134e3;
 }
 __newthread = __newthread + 1;
 __arg = __arg + 3;
 } while (__arg != local_50 + 0xc);
 iVar1 = 0;
 do {
 iVar2 = pthread_join(*ppVar3,(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + ppVar4[2];
 ppVar3 = ppVar3 + 1;
 ppVar4 = ppVar4 + 3;
 } while (ppVar4 != local_50 + 0xc);
LAB_000134e3:
 if (local_50[0xc] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_mutex_lock @ 00013530 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_mutex_lock(int param_1,int param_2)

{
 pthread_t *__ptr;
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 pthread_t *__newthread;
 bool bVar4;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < param_1) {
 iVar1 = 0;
 __newthread = __ptr;
 do {
 iVar3 = iVar1;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&param_2);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar1 = iVar3 + 1;
 __newthread = __newthread + 1;
 } while (param_1 != iVar1);
 iVar1 = 0;
 do {
 pthread_join(__ptr[iVar1],(void **)0x0);
 bVar4 = iVar3 != iVar1;
 iVar1 = iVar1 + 1;
 } while (bVar4);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * param_2) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: param_condition_variable @ 00013650 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 pthread_t local_1c;
 pthread_t local_18;
 undefined4 *local_14;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x1365b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_14);
 pthread_join(local_1c,(void **)0x0);
 uVar2 = *local_14;
 free(local_14);
 }
 else {
 uVar2 = 0xfffffffe;
 pthread_cancel(local_18);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_atomic_ops @ 00013740 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

 undefined4 param_atomic_ops(int param_1)

{
 pthread_t *__ptr;
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 pthread_t *ppVar4;
 int in_GS_OFFSET;
 pthread_t local_24;
 int local_20;
 int local_28;
 undefined4 uStack_14;
 
 uStack_14 = 0x1374d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if (param_1 < 1) {
 iVar3 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_24,(void **)0x0);
 }
 }
 else {
 iVar3 = 0;
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_atomic_increment,&local_28);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_000137e4;
 }
 iVar3 = iVar3 + 1;
 ppVar4 = ppVar4 + 1;
 } while (param_1 != iVar3);
 iVar1 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 iVar3 = 0;
 if (iVar1 == 0) {
 pthread_join(local_24,(void **)0x0);
 }
 do {
 ppVar4 = __ptr + iVar3;
 iVar3 = iVar3 + 1;
 pthread_join(*ppVar4,(void **)0x0);
 } while (iVar3 < param_1);
 }
 iVar3 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar3 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_000137e4:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return uVar2;
}



/* Function: param_thread_local_storage @ 000138e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_thread_local_storage(int param_1)

{
 pthread_t *__ptr;
 undefined4 *__ptr_00;
 void *pvVar1;
 int iVar2;
 undefined4 uVar3;
 pthread_t *__newthread;
 undefined4 *puVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int in_GS_OFFSET;
 bool bVar8;
 int *local_24;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x138ed;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined4 *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar2 = 0;
 iVar6 = 0;
 }
 else {
 iVar6 = 0;
 do {
 iVar5 = iVar6;
 pvVar1 = malloc(0x10);
 __ptr_00[iVar5] = pvVar1;
 __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar5);
 iVar6 = iVar5 + 1;
 } while (param_1 != iVar5 + 1);
 __newthread = __ptr;
 iVar6 = 0;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[iVar6]);
 if (iVar2 != 0) {
 puVar4 = __ptr_00;
 do {
 pvVar1 = (void *)*puVar4;
 puVar4 = puVar4 + 1;
 free(pvVar1);
 } while (__ptr_00 + iVar6 + 1 != puVar4);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00013a0b;
 }
 __newthread = __newthread + 1;
 bVar8 = iVar5 != iVar6;
 iVar6 = iVar6 + 1;
 } while (bVar8);
 iVar2 = 0;
 iVar6 = 0;
 iVar7 = 0;
 do {
 pthread_join(__ptr[iVar7],&local_24);
 iVar6 = iVar6 + *local_24;
 iVar2 = iVar2 + local_24[1];
 free(local_24);
 free((void *)__ptr_00[iVar7]);
 bVar8 = iVar5 != iVar7;
 iVar7 = iVar7 + 1;
 } while (bVar8);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 - iVar6 == 0) && (param_1 * 0x96 - iVar2 == 0)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00013a0b:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return uVar3;
}



/* Function: test_thread_concurrency @ 00013af0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Type propagation algorithm not settling */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 pthread_t local_1c [2];
 undefined4 *local_14;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x13afb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000142c8);
 local_1c[1] = 7;
 iVar1 = pthread_create(local_1c,(pthread_attr_t *)0x0,thread_compute,local_1c + 1);
 if (iVar1 == 0) {
 pthread_join(local_1c[0],&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_000142e6,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_00014302,uVar2);
 uVar2 = param_mutex_lock_constprop_0();
 __printf_chk(1,&DAT_0001431f,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_0001433b,uVar2);
 uVar2 = param_atomic_ops_constprop_0();
 __printf_chk(1,&DAT_00014357,uVar2);
 uVar2 = param_thread_local_storage_constprop_0();
 __printf_chk(1,&DAT_00014373,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 00013c17 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00013c1b */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00013c20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 74 */
