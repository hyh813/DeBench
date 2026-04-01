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
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef unsigned char byte;
typedef undefined4 undefined;
typedef void (*code)(void);
typedef unsigned long pthread_t;

typedef int __pid_t;
typedef int key_t;

/* Include necessary headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <errno.h>
#include <semaphore.h>
#include <stdbool.h>

/* Global variable declarations */
volatile sig_atomic_t signal_received;
int signal_number;
pthread_mutex_t* counter_mutex;
int shared_counter;
pthread_mutex_t* cond_mutex;
pthread_cond_t* cond;
int data;
int ready;
volatile int atomic_counter;

/* External data declarations for decompiled code */
extern char DAT_00014015[];
extern char DAT_00014011[];
extern char DAT_00014019[];
extern char DAT_00014021[];
extern char DAT_0001401d[];
extern char DAT_0001409d[];
extern char DAT_000140b8[];
extern char DAT_000140d3[];
extern char DAT_000140ef[];
extern char DAT_0001410b[];
extern char DAT_00014127[];
extern char DAT_00014143[];
extern char DAT_00014160[];
extern char DAT_0001417c[];
extern char DAT_00014198[];
extern char DAT_000141b4[];
extern char DAT_000141cf[];
extern char DAT_00014211[];
extern char DAT_0001422c[];
extern char DAT_00014248[];
extern char DAT_00014264[];
extern char DAT_00014280[];
extern char DAT_0001429c[];
extern char DAT_000142b8[];
extern char DAT_000142d4[];
extern char DAT_000142fa[];
extern char DAT_00014318[];
extern char DAT_00014334[];
extern char DAT_00014351[];
extern char DAT_0001436d[];
extern char DAT_00014389[];
extern char DAT_000143a5[];
extern char DAT_000143c4[];

/* External function declarations */
extern void LOCK(void);
extern void UNLOCK(void);
extern int __printf_chk(int, const char*, ...);
extern int __isoc99_sscanf(const char*, const char*, ...);
extern int __snprintf_chk(char*, size_t, int, size_t, const char*, ...);
extern int * __errno_location(void);
extern long syscall(long, ...);
extern int __stack_chk_fail(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((code)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000117bc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000117c0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000118f9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000118fd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: signal_handler @ 00011901 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 00011924 */

void* thread_sum(void *param_1)

{
 int iVar1;
 int iVar2;
 int *p = (int *)param_1;
 
 p[2] = 0;
 iVar1 = *p;
 if (iVar1 <= p[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != p[1] + 1);
 p[2] = iVar2;
 }
 return (void*)0;
}



/* Function: thread_compute @ 00011958 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void* thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 int *p = (int *)param_1;
 
 iVar1 = *p;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void*)piVar2;
}



/* Function: thread_increment @ 00011984 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void* thread_increment(void *param_1)

{
 int iVar1;
 int iVar2;
 int *p = (int *)param_1;
 
 iVar1 = *p;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return (void*)0;
}



/* Function: consumer_thread @ 000119f2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void* consumer_thread(void *param_1)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 (void)param_1;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return (void*)puVar2;
}



/* Function: producer_thread @ 00011a6b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 producer_thread(void)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}



/* Function: thread_atomic_increment @ 00011ac9 */

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



/* Function: thread_atomic_load_store @ 00011b10 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void* thread_atomic_load_store(void *param_1)

{
 (void)param_1;
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void*)0;
}



/* Function: thread_tls_test @ 00011b34 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void* thread_tls_test(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 char *p = (char *)param_1;
 
 iVar2 = 0;
 iVar1 = iVar2 + 0x32;
 strncpy((char *)0,p,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void*)piVar3;
}



/* Function: param_strcpy @ 00011b8b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 00011bbb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_strcpy(void)

{
 int in_GS_OFFSET;
 undefined1 local_30 [32];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 param_strcpy(local_30,"HelloLib");
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_strcmp @ 00011c03 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: call_strcmp @ 00011c33 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp(&DAT_00014015,&DAT_00014011);
 iVar2 = param_strcmp(&DAT_00014019,&DAT_00014019);
 iVar3 = param_strcmp(&DAT_00014021,&DAT_0001401d);
 return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 00011c90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00011cb1 */

undefined4 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00011cbb */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3;
}



/* Function: call_memcpy @ 00011ce9 */

int call_memcpy(void)

{
 int in_GS_OFFSET;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 int local_24 [9];
 
 local_24[5] = *(int *)(in_GS_OFFSET + 0x14);
 local_38 = 10;
 local_34 = 0x14;
 local_30 = 0x1e;
 local_2c = 0x28;
 local_28 = 0x32;
 local_24[0] = 0;
 local_24[1] = 0;
 local_24[2] = 0;
 local_24[3] = 0;
 local_24[4] = 0;
 param_memcpy(local_24,&local_38,0x14);
 if (local_24[5] == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_24[2] + local_24[0] + local_24[4];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_memcmp @ 00011d82 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: call_memcmp @ 00011db6 */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
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
 iVar1 = param_memcmp(&local_34,&local_28,0xc);
 iVar2 = param_memcmp(&local_34,&local_1c,0xc);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_printf @ 00011e53 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_printf(undefined4 param_1,undefined4 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00011e81 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_printf(void)

{
 param_printf(0x2a,"Test");
 return 0;
}



/* Function: param_scanf @ 00011ea4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_scanf(undefined4 param_1)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 
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



/* Function: call_scanf @ 00011f0b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_scanf(void)

{
 param_scanf("123,456");
 return 0;
}



/* Function: param_fopen_fclose @ 00011f2c */

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



/* Function: call_fopen_fclose @ 00011f7d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint call_fopen_fclose(void)

{
 int iVar1;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 00011fa4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_40 [32];
 int local_20;
 
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



/* Function: call_fread_fwrite @ 00012092 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return 0;
}



/* Function: param_malloc_free @ 000120b3 */

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
 } while (iVar1 != param_1 * 10);
 }
 iVar1 = *__ptr + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00012123 */

undefined4 call_malloc_free(void)

{
 param_malloc_free(10);
 return 0;
}



/* Function: param_memset @ 00012135 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_memset(byte *param_1,size_t param_2)

{
 byte *pbVar1;
 int iVar2;
 
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar2 = 0;
 }
 else {
 pbVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (uint)*param_1;
 param_1 = param_1 + 1;
 } while (param_1 != pbVar1);
 }
 return iVar2;
}



/* Function: call_memset @ 00012185 */

int call_memset(void)

{
 int *piVar1;
 int in_GS_OFFSET;
 int local_38 [10];
 int local_10 [4];
 
 local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = local_38;
 do {
 *piVar1 = 0xff;
 piVar1 = piVar1 + 1;
 } while (piVar1 != local_10);
 param_memset(local_38,0x28);
 if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_38[9] + local_38[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_strchr_strstr @ 000121dd */

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



/* Function: call_strchr_strstr @ 00012234 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_strchr_strstr(void)

{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return 0;
}



/* Function: test_standard_library_functions @ 0001225e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000143c4);
 uVar1 = call_strcpy();
 __printf_chk(1,&DAT_0001409d,uVar1);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_000140b8,uVar1);
 uVar1 = call_strlen();
 __printf_chk(1,&DAT_000140d3,uVar1);
 uVar1 = call_memcpy();
 __printf_chk(1,&DAT_000140ef,uVar1);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_0001410b,uVar1);
 uVar1 = call_printf();
 __printf_chk(1,&DAT_00014127,uVar1);
 uVar1 = call_scanf();
 __printf_chk(1,&DAT_00014143,uVar1);
 uVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_00014160,uVar1);
 uVar1 = call_fread_fwrite();
 __printf_chk(1,&DAT_0001417c,uVar1);
 uVar1 = call_malloc_free();
 __printf_chk(1,&DAT_00014198,uVar1);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_000141b4,uVar1);
 uVar1 = call_strchr_strstr();
 __printf_chk(1,&DAT_000141cf,uVar1);
 return;
}



/* Function: param_linux_syscall @ 00012396 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

long param_linux_syscall(undefined4 param_1)

{
 long lVar1;
 int *piVar2;
 undefined4 uVar3;
 
 uVar3 = 0;
 lVar1 = syscall(5,param_1,0);
 if (lVar1 < 0) {
 piVar2 = __errno_location();
 lVar1 = -*piVar2;
 }
 else {
 syscall(6,lVar1,uVar3);
 }
 return lVar1;
}



/* Function: call_linux_syscall @ 000123e1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint call_linux_syscall(void)

{
 int iVar1;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00012408 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 struct stat local_68;
 int local_10;
 
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



/* Function: call_win32_api @ 0001246c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return;
}



/* Function: param_fork_exec @ 0001248d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint param_fork_exec(char *param_1,undefined4 param_2)

{
 __pid_t _Var1;
 uint uVar2;
 int in_GS_OFFSET;
 uint local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_14 >> 8 & 0xff, (local_14 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_fork_exec @ 00012527 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 00012555 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined4 uVar4;
 int in_GS_OFFSET;
 int local_38 [2];
 undefined1 local_30 [32];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = pipe(local_38);
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
 close(local_38[1]);
 (void)write(local_38[0],"HelloPipe",9);
 close(local_38[0]);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_38[0]);
 sVar3 = read(local_38[1],local_30,0x1f);
 local_30[sVar3] = 0;
 close(local_38[1]);
 wait((int *)0x0);
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



/* Function: call_pipe_communication @ 00012648 */

undefined4 call_pipe_communication(void)

{
 (void)param_pipe_communication();
 return 0;
}



/* Function: param_socket_create @ 00012658 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 undefined4 local_24;
 struct sockaddr local_20;
 int local_10;
 
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



/* Function: call_socket_create @ 0001276c */

undefined4 call_socket_create(void)

{
 param_socket_create();
 return 0;
}



/* Function: param_shmget_shmat @ 0001277c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

size_t param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 sVar2 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 sVar2 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 sVar2 = 0xfffffffe;
 }
 else {
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}



/* Function: call_shmget_shmat @ 00012865 */

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



/* Function: param_signal_handling @ 00012884 */

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



/* Function: call_signal_handling @ 000129db */

undefined4 call_signal_handling(void)

{
 param_signal_handling();
 return 0;
}



/* Function: test_system_calls @ 000129eb */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_system_calls(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00014211);
 uVar1 = call_linux_syscall();
 __printf_chk(1,&DAT_0001422c,uVar1);
 uVar1 = call_win32_api();
 __printf_chk(1,&DAT_00014248,uVar1);
 uVar1 = call_fork_exec();
 __printf_chk(1,&DAT_00014264,uVar1);
 uVar1 = param_pipe_communication();
 __printf_chk(1,&DAT_00014280,uVar1);
 uVar1 = param_socket_create();
 __printf_chk(1,&DAT_0001429c,uVar1);
 uVar1 = call_shmget_shmat();
 __printf_chk(1,&DAT_000142b8,uVar1);
 uVar1 = param_signal_handling();
 __printf_chk(1,&DAT_000142d4,uVar1);
 return;
}



/* Function: param_pthread_create @ 00012ab0 */

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
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = param_1;
 iVar1 = (int)pthread_create(&local_1c,(pthread_attr_t *)0x0,thread_compute,&local_18);
 if (iVar1 == 0) {
  pthread_join(local_1c,(void**)&local_14);
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



/* Function: call_pthread_create @ 00012b3a */

undefined4 call_pthread_create(void)

{
 param_pthread_create(7);
 return 0;
}



/* Function: param_pthread_join @ 00012b4c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 pthread_t *__newthread;
 int *__arg;
 pthread_t *ppVar4;
 int in_GS_OFFSET;
 pthread_t local_50 [3];
 int local_44 [13];
 
 local_44[9] = *(int *)(in_GS_OFFSET + 0x14);
 local_44[0] = 1;
 local_44[1] = 10;
 local_44[2] = 0;
 local_44[3] = 0xb;
 local_44[4] = 0x14;
 local_44[5] = 0;
 local_44[6] = 0x15;
 local_44[7] = 0x1e;
 local_44[8] = 0;
 ppVar4 = local_50;
 piVar3 = local_44;
 __newthread = ppVar4;
 __arg = piVar3;
 do {
 iVar1 = (int)pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00012c1e;
 }
 __newthread = __newthread + 1;
 __arg = __arg + 3;
 } while (__arg != local_44 + 9);
 iVar1 = 0;
 do {
 pthread_join(*ppVar4,(void **)0x0);
 iVar1 = iVar1 + piVar3[2];
 ppVar4 = ppVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (piVar3 != local_44 + 9);
LAB_00012c1e:
 if (local_44[9] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_pthread_join @ 00012c48 */

undefined4 call_pthread_join(void)

{
 param_pthread_join();
 return 0;
}



/* Function: param_mutex_lock @ 00012c58 */

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
 iVar1 = (int)pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&param_2);
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
 iVar1 = iVar1 + 1;
 } while (iVar1 != param_1);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * param_2) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 00012d49 */

undefined4 call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return 0;
}



/* Function: param_condition_variable @ 00012d60 */

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
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ready = 0;
 data = 0;
 iVar1 = (int)pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
  iVar1 = (int)pthread_create(&local_1c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
  if (iVar1 == 0) {
   pthread_join(local_18,(void**)&local_14);
   pthread_join(local_1c,(void **)0x0);
   uVar2 = *local_14;
   free(local_14);
 }
 else {
 pthread_cancel(local_18);
 uVar2 = 0xfffffffe;
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



/* Function: call_condition_variable @ 00012e33 */

undefined4 call_condition_variable(void)

{
 param_condition_variable();
 return 0;
}



/* Function: param_atomic_ops @ 00012e43 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_atomic_ops(int param_1)

{
 pthread_t *__ptr;
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 pthread_t *__newthread;
 int in_GS_OFFSET;
 pthread_t local_24;
 int local_20;
 
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
 iVar3 = (int)pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_24,(void **)0x0);
 }
 }
 else {
 iVar3 = 0;
 __newthread = __ptr;
 do {
 iVar1 = (int)pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,
 &param_1);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00012f35;
 }
 iVar3 = iVar3 + 1;
 __newthread = __newthread + 1;
 } while (param_1 != iVar3);
 iVar1 = (int)pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 iVar3 = 0;
 if (iVar1 == 0) {
 pthread_join(local_24,(void **)0x0);
 }
 do {
 (void)pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (iVar3 < param_1);
 }
 iVar3 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar3 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00012f35:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 00012fbc */

undefined4 call_atomic_ops(void)

{
 param_atomic_ops(4);
 return 0;
}



/* Function: param_thread_local_storage @ 00012fd3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_thread_local_storage(int param_1)

{
 pthread_t *__ptr;
 undefined4 *__ptr_00;
 void *pvVar1;
 int iVar2;
 undefined4 uVar3;
 pthread_t *__newthread;
 int iVar4;
 int iVar5;
 int iVar6;
 undefined4 *puVar7;
 int in_GS_OFFSET;
 bool bVar8;
 void *local_24;
 int local_20;
 
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined4 *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar2 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 do {
 iVar5 = iVar4;
 pvVar1 = malloc(0x10);
 __ptr_00[iVar5] = pvVar1;
 __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar5);
 iVar4 = iVar5 + 1;
 } while (param_1 != iVar5 + 1);
 __newthread = __ptr;
 iVar4 = 0;
 do {
 iVar2 = (int)pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[iVar4]);
 if (iVar2 != 0) {
 if (-1 < iVar4) {
 puVar7 = __ptr_00;
 do {
 free((void *)*puVar7);
 puVar7 = puVar7 + 1;
 } while (puVar7 != __ptr_00 + iVar4 + 1);
 }
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00013143;
 }
 __newthread = __newthread + 1;
 iVar4 = iVar4 + 1;
 } while (iVar4 != param_1);
 iVar4 = 0;
 iVar2 = 0;
 iVar6 = 0;
 do {
 pthread_join(__ptr[iVar6],&local_24);
 iVar4 = iVar4 + *(int*)local_24;
 iVar2 = iVar2 + ((int*)local_24)[1];
 free(local_24);
 free((void *)__ptr_00[iVar6]);
 iVar6 = iVar6 + 1;
 } while (iVar6 != param_1);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 - iVar4 == 0) && (param_1 * 0x96 - iVar2 == 0)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00013143:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return uVar3;
}



/* Function: call_thread_local_storage @ 000131bb */

undefined4 call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return 0;
}



/* Function: test_thread_concurrency @ 000131cd */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_thread_concurrency(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000142fa);
 uVar1 = call_pthread_create();
 __printf_chk(1,&DAT_00014318,uVar1);
 uVar1 = call_pthread_join();
 __printf_chk(1,&DAT_00014334,uVar1);
 uVar1 = call_mutex_lock();
 __printf_chk(1,&DAT_00014351,uVar1);
 uVar1 = param_condition_variable();
 __printf_chk(1,&DAT_0001436d,uVar1);
 uVar1 = call_atomic_ops();
 __printf_chk(1,&DAT_00014389,uVar1);
 uVar1 = call_thread_local_storage();
 __printf_chk(1,&DAT_000143a5,uVar1);
 return;
}



/* Function: main @ 0001327b */

undefined4 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 0001329b */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 0001329f */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.si @ 000132a3 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 000132b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 79 */
