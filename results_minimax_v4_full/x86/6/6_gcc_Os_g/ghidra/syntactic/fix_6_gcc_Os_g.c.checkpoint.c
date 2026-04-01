/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/syscall.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>
#include <stdatomic.h>

/* Force linking with pthread library */
#include <pthread.h>

/* pthread functions are declared in pthread.h which is included above */
/* Ensure we link with -lpthread during compilation */

typedef unsigned char byte;
typedef unsigned char undefined1;
typedef int undefined4;
typedef pid_t __pid_t;

/* Weak symbol declarations for pthread functions to ensure linking */
#ifndef __APPLE__
#pragma weak pthread_create
#pragma weak pthread_join
#endif

/* LOCK and UNLOCK macros for atomic operations */
#define LOCK()   __atomic_thread_fence(__ATOMIC_ACQUIRE)
#define UNLOCK() __atomic_thread_fence(__ATOMIC_RELEASE)

/* Thread data structure for pthread operations */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

/* Data arrays from binary */
static const int DAT_00014400[] = {0};
static const int DAT_00014414[] = {0};
static const int DAT_00014420[] = {0};
static const int DAT_00014440[] = {0,1,2,3,4,5,6,7,8,9};
static const char DAT_0001409d[] = "Standard Library Tests:\n";
static const char DAT_000140c1[] = "strcpy: %d\n";
static const char DAT_000140dc[] = "strcmp: %d\n";
static const char DAT_000140f7[] = "strlen: %d\n";
static const char DAT_00014113[] = "memcpy: %d\n";
static const char DAT_0001412f[] = "memcmp: %d\n";
static const char DAT_0001414b[] = "printf: %d\n";
static const char DAT_00014167[] = "scanf: %d\n";
static const char DAT_00014184[] = "fopen: %d\n";
static const char DAT_000141a0[] = "fread: %d\n";
static const char DAT_000141bc[] = "malloc: %d\n";
static const char DAT_000141d8[] = "memset: %d\n";
static const char DAT_000141f3[] = "strchr/strstr: %d\n";
static const char DAT_00014242[] = "System Call Tests:\n";
static const char DAT_0001425d[] = "syscall: %d\n";
static const char DAT_00014279[] = "stat: %d\n";
static const char DAT_00014295[] = "fork/exec: %d\n";
static const char DAT_000142b1[] = "pipe: %d\n";
static const char DAT_000142cd[] = "socket: %d\n";
static const char DAT_000142e9[] = "shm: %d\n";
static const char DAT_00014305[] = "signal: %d\n";
static const char DAT_0001432b[] = "Thread Concurrency Tests:\n";
static const char DAT_00014349[] = "pthread_create: %d\n";
static const char DAT_00014365[] = "pthread_join: %d\n";
static const char DAT_00014382[] = "mutex: %d\n";
static const char DAT_0001439e[] = "cond_var: %d\n";
static const char DAT_000143ba[] = "atomic: %d\n";
static const char DAT_000143d6[] = "tls: %d\n";

/* Global variable for producer/consumer */
int data;

/* Global variables */
int ready;
int atomic_counter;
int signal_received;
int signal_number;
int shared_counter;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_gcc_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 void (*func)(void) = NULL;
 if (func != NULL) {
 func();
 }
 return;
}



/* Function: main @ 00011750 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001179c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000117a0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000118d9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000118dd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: signal_handler @ 000118e1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: thread_sum @ 00011907 */

void * thread_sum(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: int i@[???] */
 iVar1 = *(int *)arg;
 *(undefined4 *)((int)arg + 8) = 0;
 for (; iVar1 <= *(int *)((int)arg + 4); iVar1 = iVar1 + 1) {
 *(int *)((int)arg + 8) = *(int *)((int)arg + 8) + iVar1;
 }
 return (void *)0x0;
}



/* Function: thread_compute @ 0001192b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: thread_increment @ 0001195a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * thread_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 }
 return (void *)0x0;
}



/* Function: consumer_thread @ 000119c1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void * consumer_thread(void *arg)

{
 int iVar1;
 int *piVar2;
 
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 while (iVar1 = data, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 piVar2 = malloc(4);
 *piVar2 = iVar1;
 return piVar2;
}



/* Function: producer_thread @ 00011a2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: thread_atomic_increment @ 00011a89 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < *(int *)arg; iVar2 = iVar2 + 1) {
 /* Unresolved local var: int expected@[???]
 Unresolved local var: int desired@[???] */
 LOCK();
 iVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = iVar2 + 1000;
 LOCK();
 if (iVar2 != iVar1) {
 atomic_counter = iVar1;
 }
 UNLOCK();
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00011ac8 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void * thread_atomic_load_store(void *arg)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0x0;
}



/* Function: thread_tls_test @ 00011ae9 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *in_GS_OFFSET;
 
 iVar2 = in_GS_OFFSET[-9];
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET[-9] = iVar1;
 strncpy((char *)(*in_GS_OFFSET + -0x20),arg,0x1f);
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}



/* Function: param_strcpy @ 00011b43 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return sVar1;
}



/* Function: call_strcpy @ 00011b77 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char buffer [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 iVar2 = param_strcpy(buffer,"HelloLib");
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: param_strcmp @ 00011bba */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = strcmp(s1,s2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_strcmp @ 00011bf6 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp("abc","def");
 iVar2 = param_strcmp("xyz","xyz");
 iVar3 = param_strcmp("bbb","aaa");
 return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 00011c58 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strlen(char *str)

{
 size_t sVar1;
 
 sVar1 = strlen(str);
 return sVar1;
}



/* Function: call_strlen @ 00011c7e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00011c88 */

/* WARNING: Unknown calling convention */

int param_memcpy(void *dst,void *src,size_t n)

{
 size_t sVar1;
 
 sVar1 = n;
 for (; n != 0; n = n - 1) {
 *(undefined1 *)dst = *(undefined1 *)src;
 src = (undefined1 *)((int)src + 1);
 dst = (undefined1 *)((int)dst + 1);
 }
 return sVar1;
}



/* Function: call_memcpy @ 00011ca2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int in_GS_OFFSET;
 int src [5];
 int dst [5];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 piVar3 = &DAT_00014400;
 piVar4 = src;
 for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 piVar3 = dst;
 for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar3 = 0;
 piVar3 = piVar3 + 1;
 }
 param_memcpy(dst,src,0x14);
 iVar2 = dst[2] + dst[0] + dst[4];
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: param_memcmp @ 00011d10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = memcmp(p1,p2,n);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_memcmp @ 00011d4f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int *piVar4;
 int *piVar5;
 int in_GS_OFFSET;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 piVar4 = &DAT_00014414;
 piVar5 = arr1;
 for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
 *piVar5 = *piVar4;
 piVar4 = piVar4 + 1;
 piVar5 = piVar5 + 1;
 }
 piVar4 = &DAT_00014420;
 piVar5 = arr2;
 for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
 *piVar5 = *piVar4;
 piVar4 = piVar4 + 1;
 piVar5 = piVar5 + 1;
 }
 piVar4 = &DAT_00014414;
 piVar5 = arr3;
 for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
 *piVar5 = *piVar4;
 piVar4 = piVar4 + 1;
 piVar5 = piVar5 + 1;
 }
 iVar3 = param_memcmp(arr1,arr2,0xc);
 iVar2 = param_memcmp(arr1,arr3,0xc);
 iVar2 = iVar2 + iVar3;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: param_printf @ 00011ddc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_printf(int x,char *name)

{
 int iVar1;
 
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",name);
 return iVar1;
}



/* Function: call_printf @ 00011e09 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 iVar1 = param_printf(0x14098,(char *)0x2a);
 return iVar1;
}



/* Function: param_scanf @ 00011e2d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_scanf(char *input_str)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int a;
 int b;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x11e3a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = b + a;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_scanf @ 00011e8e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 
 iVar1 = param_scanf("123,456");
 return iVar1;
}



/* Function: param_fopen_fclose @ 00011eb0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fopen_fclose(char *filename)

{
 FILE *__stream;
 int iVar1;
 
 iVar1 = -1;
 __stream = fopen(filename,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 }
 return iVar1;
}



/* Function: call_fopen_fclose @ 00011f03 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 00011f2e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fread_fwrite(char *tmpfile)

{
 int iVar1;
 FILE *__s;
 int iVar2;
 size_t sVar3;
 int in_GS_OFFSET;
 char read_buffer [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 __s = fopen(tmpfile,"w+");
 iVar2 = -1;
 if (__s != (FILE *)0x0) {
 sVar3 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar3 == 0x12) {
 rewind(__s);
 /* Unresolved local var: size_t sz@[???] */
 sVar3 = fread(read_buffer,1,0x12,__s);
 read_buffer[sVar3] = '\0';
 fclose(__s);
 unlink(tmpfile);
 iVar2 = -3;
 if (sVar3 == 0x12) {
 iVar2 = strcmp(read_buffer,"BinBench Test Data");
 iVar2 = (-(uint)(iVar2 == 0) & 0x2d) - 3;
 }
 }
 else {
 fclose(__s);
 iVar2 = -2;
 }
 }
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_fread_fwrite @ 00012016 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00012038 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_malloc_free(size_t size)

{
 int *__ptr;
 size_t sVar1;
 int iVar2;
 
 __ptr = malloc(size * 4);
 /* Unresolved local var: size_t i@[???] */
 sVar1 = 0;
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 for (; sVar1 != size; sVar1 = sVar1 + 1) {
 __ptr[sVar1] = sVar1 * 10;
 }
 iVar2 = *__ptr + __ptr[size - 1];
 free(__ptr);
 }
 return iVar2;
}



/* Function: call_malloc_free @ 0001209d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 
 iVar1 = param_malloc_free(10);
 return iVar1;
}



/* Function: param_memset @ 000120b0 */

/* WARNING: Unknown calling convention */

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 byte *pbVar2;
 
 iVar1 = 0;
 pbVar2 = buffer;
 for (; size != 0; size = size - 1) {
 *pbVar2 = 0;
 pbVar2 = pbVar2 + 1;
 }
 for (; buffer != pbVar2; buffer = (void *)((int)buffer + 1)) {
 iVar1 = iVar1 + (uint)*(byte *)buffer;
 }
 return iVar1;
}



/* Function: call_memset @ 000120d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int *buffer_00;
 undefined4 uVar4;
 int iVar5;
 int buffer [10];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 iVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 buffer_00 = buffer;
 buffer_00[iVar2] = 0xff;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 uVar4 = 0x28;
 iVar5 = iVar2;
 param_memset(buffer_00,0x28);
 iVar3 = buffer[9] + buffer[0];
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local(buffer_00,uVar4,iVar2,iVar5);
 }
 return iVar3;
}



/* Function: param_strchr_strstr @ 00012120 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 char *pcVar1;
 int iVar2;
 int iVar3;
 
 iVar3 = -1;
 pcVar1 = strchr(str,(int)ch);
 if (pcVar1 != (char *)0x0) {
 iVar3 = (int)pcVar1 - (int)str;
 }
 pcVar1 = strstr(str,substr);
 iVar2 = -1;
 if (pcVar1 != (char *)0x0) {
 iVar2 = (int)pcVar1 - (int)str;
 }
 return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 00012178 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 int iVar1;
 
 iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
 return iVar1;
}



/* Function: test_standard_library_functions @ 000121a6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 int iVar1;
 
 puts(&DAT_0001409d);
 iVar1 = call_strcpy();
 __printf_chk(1,&DAT_000140c1,iVar1);
 iVar1 = call_strcmp();
 __printf_chk(1,&DAT_000140dc,iVar1);
 __printf_chk(1,&DAT_000140f7,0xc);
 iVar1 = call_memcpy();
 __printf_chk(1,&DAT_00014113,iVar1);
 iVar1 = call_memcmp();
 __printf_chk(1,&DAT_0001412f,iVar1);
 iVar1 = call_printf();
 __printf_chk(1,&DAT_0001414b,iVar1);
 iVar1 = call_scanf();
 __printf_chk(1,&DAT_00014167,iVar1);
 iVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_00014184,iVar1);
 iVar1 = call_fread_fwrite();
 __printf_chk(1,&DAT_000141a0,iVar1);
 iVar1 = call_malloc_free();
 __printf_chk(1,&DAT_000141bc,iVar1);
 iVar1 = call_memset();
 __printf_chk(1,&DAT_000141d8,iVar1);
 iVar1 = call_strchr_strstr();
 __printf_chk(1,&DAT_000141f3,iVar1);
 return;
}



/* Function: param_linux_syscall @ 000122e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_linux_syscall(char *pathname)

{
 long lVar1;
 int *piVar2;
 
 lVar1 = syscall(5,pathname,0);
 if (lVar1 < 0) {
 /* Unresolved local var: int fd@[???] */
 piVar2 = __errno_location();
 lVar1 = -*piVar2;
 }
 else {
 syscall(6,lVar1,lVar1,lVar1);
 }
 return lVar1;
}



/* Function: call_linux_syscall @ 0001232b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00012356 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_win32_api(char *filename)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 struct stat stbuf;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 iVar2 = stat(filename,&stbuf);
 iVar3 = -1;
   if ((-1 < iVar2) && (iVar3 = 0x2a, stbuf.st_size < 1)) {
 iVar3 = -2;
 }
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: call_win32_api @ 000123b6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 
 iVar1 = param_win32_api("/etc/passwd");
 return iVar1;
}



/* Function: param_fork_exec @ 000123d8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 int in_GS_OFFSET;
 int status;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x123e7;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 /* Unresolved local var: pid_t pid@[???] */
 execl(prog,prog,arg,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,&status,0);
 uVar2 = 0xfffffffe;
 if (-1 < _Var1) {
 uVar2 = 0xfffffffd;
 if ((status & 0x7fU) == 0) {
 uVar2 = (uint)status >> 8 & 0xff;
 }
 }
 }
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar2 = __stack_chk_fail_local();
 }
 return uVar2;
}



/* Function: call_fork_exec @ 0001246b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 0001249b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 int iVar2;
 __pid_t _Var3;
 ssize_t sVar4;
 int in_GS_OFFSET;
 int pipefd [2];
 char buffer [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_pipe_communication @ 00012582 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 0001258b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int __fd;
 int iVar2;
 struct sockaddr_in *psVar3;
 int in_GS_OFFSET;
 byte bVar4;
 int opt;
 struct sockaddr_in addr;
 struct sockaddr saddr;
 
 bVar4 = 0;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 __fd = socket(2,1,0);
 iVar2 = -1;
 if (-1 < __fd) {
 opt = 1;
 iVar2 = setsockopt(__fd,1,2,&opt,4);
 if (iVar2 < 0) {
 close(__fd);
 iVar2 = -2;
 }
 else {
 psVar3 = &addr;
 for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
 psVar3->sin_family = 0;
 psVar3->sin_port = 0;
 psVar3 = (struct sockaddr_in *)((int)psVar3 + (uint)bVar4 * -8 + 4);
 }
 addr.sin_family = 2;
 iVar2 = bind(__fd,(struct sockaddr *)&addr,0x10);
 if (iVar2 < 0) {
 close(__fd);
 iVar2 = -3;
 }
 else {
 iVar2 = listen(__fd,5);
 if (iVar2 < 0) {
 close(__fd);
 iVar2 = -4;
 }
 else {
 close(__fd);
 iVar2 = 0x2a;
 }
 }
 }
 }
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_socket_create @ 00012683 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 0001268c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

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
 return -2;
 }
 __dest = shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffff) {
 return -3;
 }
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1, 0, (struct shmid_ds *)0x0);
 return sVar2;
 }
 }
 return -1;
}



/* Function: call_shmget_shmat @ 00012758 */

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



/* Function: param_signal_handling @ 00012778 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
 p_Var1 = signal(10,signal_handler);
 iVar2 = -1;
 if (p_Var1 != (__sighandler_t)0xffffffff) {
 p_Var1 = signal(0xe,signal_handler);
 iVar2 = -2;
 if (p_Var1 != (__sighandler_t)0xffffffff) {
 iVar2 = 0x3e9;
 signal_received = 0;
 raise(10);
 /* Unresolved local var: int attempts@[???] */
 while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
 usleep(1000);
 }
 iVar2 = -3;
 if ((signal_received != 0) && (iVar2 = -4, signal_number == 10)) {
 iVar2 = 0x7d1;
 signal_received = 0;
 alarm(1);
 while ((signal_received == 0 && (iVar2 = iVar2 + -1, iVar2 != 0))) {
 usleep(1000);
 }
 iVar2 = -5;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar2 = 0x2a;
 }
 }
 }
 }
 return iVar2;
}



/* Function: call_signal_handling @ 0001289e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 000128a7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 int iVar1;
 
 puts(&DAT_00014242);
 iVar1 = call_linux_syscall();
 __printf_chk(1,&DAT_0001425d,iVar1);
 iVar1 = call_win32_api();
 __printf_chk(1,&DAT_00014279,iVar1);
 iVar1 = call_fork_exec();
 __printf_chk(1,&DAT_00014295,iVar1);
 iVar1 = param_pipe_communication();
 __printf_chk(1,&DAT_000142b1,iVar1);
 iVar1 = param_socket_create();
 __printf_chk(1,&DAT_000142cd,iVar1);
 iVar1 = call_shmget_shmat();
 __printf_chk(1,&DAT_000142e9,iVar1);
 iVar1 = param_signal_handling();
 __printf_chk(1,&DAT_00014305,iVar1);
 return;
}



/* Function: param_pthread_create @ 00012972 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_pthread_create(int x)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 pthread_t tid;
 int input;
 void *thread_ret;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x1297f;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 input = x;
 iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(tid,&thread_ret);
 iVar2 = *(int *)thread_ret;
 free(thread_ret);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_pthread_create @ 000129f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 
 iVar1 = param_pthread_create(7);
 return iVar1;
}



/* Function: param_pthread_join @ 00012a06 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 ThreadData *pTVar4;
 int *piVar5;
 pthread_t *__newthread;
 int iVar6;
 int in_GS_OFFSET;
 pthread_t tids [3];
 ThreadData data [3];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 piVar5 = &DAT_00014440;
 pTVar4 = data;
 for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
 pTVar4->start = *piVar5;
 piVar5 = piVar5 + 1;
 pTVar4 = (ThreadData *)&pTVar4->end;
 }
 /* Unresolved local var: int i@[???] */
 pTVar4 = data;
 __newthread = tids;
 do {
 iVar3 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,pTVar4);
 if (iVar3 != 0) {
 iVar3 = -1;
 goto LAB_00012aa6;
 }
 __newthread = __newthread + 1;
 pTVar4 = pTVar4 + 1;
 } while ((ThreadData *)__newthread != data);
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 iVar6 = 0;
 do {
 iVar2 = pthread_join(tids[iVar6],(void **)0x0);
 if (iVar2 != 0) {
 iVar3 = -2;
 break;
 }
 iVar2 = iVar6 + 1;
 iVar3 = iVar3 + data[iVar6].result;
 iVar6 = iVar2;
 } while (iVar2 != 3);
LAB_00012aa6:
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: call_pthread_join @ 00012ac1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: param_mutex_lock @ 00012aca */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 void *__ptr;
 int iVar1;
 int iVar2;
 
 __ptr = malloc(thread_count * 4);
 iVar1 = -1;
 if (__ptr != (void *)0x0) {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < thread_count; iVar1 = iVar1 + 1) {
 iVar2 = pthread_create((pthread_t *)((int)__ptr + iVar1 * 4),(pthread_attr_t *)0x0,
 thread_increment,&iterations_per_thread);
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 }
 /* Unresolved local var: int i@[???] */
 for (iVar1 = 0; iVar1 < thread_count; iVar1 = iVar1 + 1) {
 pthread_join(*(pthread_t *)((int)__ptr + iVar1 * 4),(void **)0x0);
 }
 free(__ptr);
 iVar1 = 0x2a;
 if (shared_counter != thread_count * iterations_per_thread) {
 iVar1 = -3;
 }
 }
 return iVar1;
}



/* Function: call_mutex_lock @ 00012b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: param_condition_variable @ 00012bb4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 pthread_t producer;
 pthread_t consumer;
 void *consumer_ret;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x12bc1;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&consumer,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = pthread_create(&producer,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(consumer,&consumer_ret);
 pthread_join(producer,(void **)0x0);
 iVar2 = *(int *)consumer_ret;
 free(consumer_ret);
 }
 else {
 // pthread_cancel not available - use pthread_kill or just set a flag
 // pthread_cancel(consumer);
 iVar2 = -2;
 }
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_condition_variable @ 00012c7f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: param_atomic_ops @ 00012c88 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 void *__ptr;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 pthread_t load_store_tid;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x12c97;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(thread_count << 2);
 iVar2 = -1;
 if (__ptr != (void *)0x0) {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 /* Unresolved local var: int i@[???] */
 for (iVar2 = 0; iVar2 < thread_count; iVar2 = iVar2 + 1) {
 iVar3 = pthread_create((pthread_t *)((int)__ptr + iVar2 * 4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&iterations);
 if (iVar3 != 0) {
 free(__ptr);
 iVar2 = -2;
 goto LAB_00012d71;
 }
 }
 iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 if (iVar2 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 for (iVar2 = 0; aVar1 = atomic_counter, iVar2 < thread_count; iVar2 = iVar2 + 1) {
 pthread_join(*(pthread_t *)((int)__ptr + iVar2 * 4),(void **)0x0);
 }
 free(__ptr);
 iVar2 = 0x2a;
 if (aVar1 < 1) {
 iVar2 = -3;
 }
 }
LAB_00012d71:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: call_atomic_ops @ 00012d8a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: param_thread_local_storage @ 00012da2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_thread_local_storage(int thread_count)

{
 void *__ptr;
 void *__ptr_00;
 void *pvVar1;
 int iVar2;
 int extraout_EDX;
 int iVar3;
 int in_GS_OFFSET;
 int local_38;
 int local_34;
 void *ret;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x12db1;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(thread_count * 4);
 __ptr_00 = malloc(thread_count * 4);
 if ((__ptr == (void *)0x0) || (__ptr_00 == (void *)0x0)) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 for (iVar3 = 0; iVar3 < thread_count; iVar3 = iVar3 + 1) {
 pvVar1 = malloc(0x10);
 *(void **)((int)__ptr_00 + iVar3 * 4) = pvVar1;
 __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar3);
 }
 /* Unresolved local var: int i@[???] */
 for (iVar3 = 0; iVar3 < thread_count; iVar3 = iVar3 + 1) {
 iVar2 = pthread_create((pthread_t *)((int)__ptr + iVar3 * 4),(pthread_attr_t *)0x0,
 thread_tls_test,*(void **)((int)__ptr_00 + iVar3 * 4));
 if (iVar2 != 0) {
 /* Unresolved local var: int j@[???] */
 iVar2 = 0;
 do {
 free(*(void **)((int)__ptr_00 + iVar2 * 4));
 iVar2 = iVar2 + 1;
 } while (iVar2 <= iVar3);
 free(__ptr_00);
 free(__ptr);
 iVar3 = -2;
 goto LAB_00012f17;
 }
 }
 local_38 = 0;
 local_34 = 0;
 /* Unresolved local var: int i@[???] */
 for (iVar3 = 0; iVar3 < thread_count; iVar3 = iVar3 + 1) {
 /* Unresolved local var: int * values@[???] */
 pthread_join(*(pthread_t *)((int)__ptr + iVar3 * 4),&ret);
 local_34 = local_34 + *(int *)ret;
 local_38 = local_38 + *(int *)((int)ret + 4);
 free(ret);
 free(*(void **)((int)__ptr_00 + iVar3 * 4));
 }
 free(__ptr_00);
 free(__ptr);
 if ((thread_count * 100 - local_34 != 0) || (iVar3 = 0x2a, thread_count * 0x96 - local_38 != 0))
 {
 iVar3 = -3;
 }
 }
LAB_00012f17:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 iVar3 = extraout_EDX;
 }
 return iVar3;
}



/* Function: call_thread_local_storage @ 00012f32 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00012f45 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 
 puts(&DAT_0001432b);
 iVar1 = call_pthread_create();
 __printf_chk(1,&DAT_00014349,iVar1);
 iVar1 = param_pthread_join();
 __printf_chk(1,&DAT_00014365,iVar1);
 iVar1 = call_mutex_lock();
 __printf_chk(1,&DAT_00014382,iVar1);
 iVar1 = param_condition_variable();
 __printf_chk(1,&DAT_0001439e,iVar1);
 iVar1 = call_atomic_ops();
 __printf_chk(1,&DAT_000143ba,iVar1);
 iVar1 = call_thread_local_storage();
 __printf_chk(1,&DAT_000143d6,iVar1);
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012ff9 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012ffd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.si @ 00013001 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00013010 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 79 */
