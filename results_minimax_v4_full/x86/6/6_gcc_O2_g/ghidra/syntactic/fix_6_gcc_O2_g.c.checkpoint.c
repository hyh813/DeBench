/* Define _GNU_SOURCE before any includes for pthread extensions */
#define _GNU_SOURCE

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t is defined in system headers, don't redefine */
#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned long size_t;
#endif
typedef unsigned long uintptr_t;
/* intptr_t is already defined in system headers - don't redefine */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int undefined4;
typedef unsigned int uundefined;
typedef short undefined2;
typedef unsigned short undefined3;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char uundefined1;
typedef int bool;
typedef int atomic_int_t;

/* Link with -lpthread - compile with: gcc -pthread source.c -o output */
/* Or use: gcc -o output source.c -lpthread */
/* IMPORTANT: Linker must find pthread library. Use: gcc -o output source.c -lpthread */
/* If using CMake, add: target_link_libraries(your_target pthread) */
/* NOTE: The -pthread flag is recommended as it both links pthread and defines needed macros */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <sched.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

/* LOCK/UNLOCK macros for atomic operations - using pthread mutex for simplicity */
static pthread_mutex_t atomic_lock = PTHREAD_MUTEX_INITIALIZER;
#define LOCK() pthread_mutex_lock(&atomic_lock)
#define UNLOCK() pthread_mutex_unlock(&atomic_lock)

/* ThreadData structure for thread functions */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

/* Global variables */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
int cond_mutex = 0;
int ready = 0;
int data = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;



/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* String constants from binary */
char DAT_0001401d[] = "Test";
char DAT_00014390[] = "=== System Calls Test ===";
char DAT_0001406b[] = "strcmp: %d\n";
char DAT_00014086[] = "strlen: %d\n";
char DAT_000140a1[] = "strlen: %d\n";
char DAT_000140bd[] = "memcpy: %d\n";
char DAT_000140d9[] = "memcmp: %d\n";
char DAT_000140f5[] = "printf returned: %d\n";
char DAT_00014111[] = "sscanf result: %d\n";
char DAT_0001412e[] = "fopen/fileno: %d\n";
char DAT_0001414a[] = "fread/fwrite: %d\n";
char DAT_00014166[] = "malloc/free: %d\n";
char DAT_00014182[] = "memset: %d\n";
char DAT_0001419d[] = "strchr/strstr: %d\n";
char DAT_000141df[] = "=== Linux Syscall Test ===";
char DAT_000141fa[] = "syscall(open): %d\n";
char DAT_00014216[] = "stat: %d\n";
char DAT_00014232[] = "fork/exec: %d\n";
char DAT_0001424e[] = "pipe: %d\n";
char DAT_0001426a[] = "socket: %d\n";
char DAT_00014286[] = "shm: %d\n";
char DAT_000142a2[] = "signal: %d\n";
char DAT_000142c8[] = "=== Thread Concurrency Test ===";
char DAT_000142e6[] = "pthread_create: %d\n";
char DAT_00014302[] = "pthread_join: %d\n";
char DAT_0001431f[] = "mutex_lock: %d\n";
char DAT_0001433b[] = "condition_variable: %d\n";
char DAT_00014357[] = "atomic_ops: %d\n";
char DAT_00014373[] = "thread_local_storage: %d\n";




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Null function - was calling function pointer at address 0 */
 return;
}



/* Function: main @ 00011790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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
/* WARNING: Unknown calling convention */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: thread_sum @ 00011960 */

void * thread_sum(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 iVar1 = *(int *)arg;
 *(undefined4 *)((int)arg + 8) = 0;
 if (iVar1 <= *(int *)((int)arg + 4)) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != *(int *)((int)arg + 4) + 1);
 *(int *)((int)arg + 8) = iVar2;
 }
 return (void *)0x0;
}



/* Function: thread_compute @ 00011990 */

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



/* Function: thread_increment @ 000119c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: consumer_thread @ 00011a30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: producer_thread @ 00011ab0 */

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



/* Function: thread_atomic_increment @ 00011b10 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int i@[???] */
 if (0 < *(int *)arg) {
 iVar2 = 0;
 do {
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
 iVar2 = iVar2 + 1;
 } while (*(int *)arg != iVar2);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00011b60 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void * thread_atomic_load_store(void *arg)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0x0;
}



/* Function: thread_tls_test @ 00011b90 */

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



/* Function: param_strcpy @ 00011bf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strcpy(char *dst,char *src)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(dst,src);
 return (int)pcVar1 - (int)dst;
}



/* Function: call_strcpy @ 00011c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 return 8;
}



/* Function: param_strcmp @ 00011c30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: call_strcmp @ 00011c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 00011c80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strlen(char *str)

{
 size_t sVar1;
 
 sVar1 = strlen(str);
 return sVar1;
}



/* Function: call_strlen @ 00011cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00011cc0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return n;
}



/* Function: call_memcpy @ 00011cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00011d00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: call_memcmp @ 00011d40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int in_GS_OFFSET;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(arr1,arr2,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar4 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar4 = 1;
 }
 iVar2 = memcmp(arr1,arr3,0xc);
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar3 + iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_printf @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_printf(int x,char *name)

{
 int iVar1;
 
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00011e50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_0001401d);
 return iVar1;
}



/* Function: param_scanf @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_scanf(char *input_str)

{
 int iVar1;
 int in_GS_OFFSET;
 int a;
 int b;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x11e8a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
 if (iVar1 == 2) {
 iVar1 = b + a;
 }
 else {
 iVar1 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_scanf @ 00011ef0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int a;
 int b;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x11efa;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 /* Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
 if (iVar1 == 2) {
 iVar1 = b + a;
 }
 else {
 iVar1 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_fopen_fclose @ 00011f60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fopen_fclose(char *filename)

{
 FILE *__stream;
 int iVar1;
 
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



/* Function: call_fopen_fclose @ 00011fb0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 FILE *__stream;
 int iVar1;
 
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



/* Function: param_fread_fwrite @ 00012010 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fread_fwrite(char *tmpfile)

{
 int iVar1;
 FILE *__s;
 size_t sVar2;
 int iVar3;
 int in_GS_OFFSET;
 char read_buffer [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar3 = -1;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 /* Unresolved local var: size_t sz@[???] */
 sVar2 = fread(read_buffer,1,0x12,__s);
 read_buffer[sVar2] = '\0';
 fclose(__s);
 unlink(tmpfile);
 if (sVar2 == 0x12) {
 iVar3 = strcmp(read_buffer,"BinBench Test Data");
 iVar3 = (-(uint)(iVar3 == 0) & 0x2d) - 3;
 }
 else {
 iVar3 = -3;
 }
 }
 else {
 fclose(__s);
 iVar3 = -2;
 }
 }
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_fread_fwrite @ 00012110 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00012140 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 __ptr = malloc(size * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (size * 10 != iVar1);
 }
 iVar1 = *__ptr + __ptr[size - 1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 000121b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 /* Unresolved local var: size_t i@[???] */
 *piVar1 = iVar2;
 iVar2 = iVar2 + 10;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 100);
 iVar2 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: param_memset @ 00012210 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_memset(void *buffer,size_t size)

{
 byte *pbVar1;
 byte bVar2;
 int iVar3;
 
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 iVar3 = 0;
 pbVar1 = (byte *)((int)buffer + size);
 do {
 bVar2 = *(byte *)buffer;
 buffer = (void *)((int)buffer + 1);
 iVar3 = iVar3 + (uint)bVar2;
 } while (buffer != pbVar1);
 return iVar3;
 }
 return 0;
}



/* Function: call_memset @ 00012270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00012280 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 char *pcVar1;
 int iVar2;
 int iVar3;
 
 pcVar1 = strchr(str,(int)ch);
 iVar3 = (int)pcVar1 - (int)str;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(str,substr);
 iVar2 = -1;
 if (pcVar1 != (char *)0x0) {
 iVar2 = (int)pcVar1 - (int)str;
 }
 return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 000122e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 000122f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 FILE *__stream;
 int *__ptr;
 int *piVar3;
 int in_GS_OFFSET;
 int a;
 int b;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00014390);
 __printf_chk(1,&DAT_0001406b,8);
 iVar1 = call_strcmp();
 __printf_chk(1,&DAT_00014086,iVar1);
 __printf_chk(1,&DAT_000140a1,0xc);
 __printf_chk(1,&DAT_000140bd,0x5a);
 iVar1 = call_memcmp();
 __printf_chk(1,&DAT_000140d9,iVar1);
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 uVar2 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_0001401d);
 __printf_chk(1,&DAT_000140f5,uVar2);
 /* Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
 if (iVar1 == 2) {
 iVar1 = b + a;
 }
 else {
 iVar1 = -1;
 }
 __printf_chk(1,&DAT_00014111,iVar1);
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = 0x2a;
 if (-1 < iVar1) goto LAB_00012435;
 }
 uVar2 = 0xffffffff;
LAB_00012435:
 __printf_chk(1,&DAT_0001412e,uVar2);
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_0001414a,iVar1);
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar3 = __ptr;
 do {
 /* Unresolved local var: size_t i@[???] */
 *piVar3 = iVar1;
 iVar1 = iVar1 + 10;
 piVar3 = piVar3 + 1;
 } while (iVar1 != 100);
 iVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 __printf_chk(1,&DAT_00014166,iVar1);
 iVar1 = call_memset();
 __printf_chk(1,&DAT_00014182,iVar1);
 __printf_chk(1,&DAT_0001419d,0xf);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_linux_syscall @ 00012520 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_linux_syscall(char *pathname)

{
 long lVar1;
 int *piVar2;
 undefined4 uVar3;
 
 uVar3 = 0;
 lVar1 = syscall(5,pathname,0);
 if (-1 < lVar1) {
 syscall(6,lVar1,uVar3);
 return lVar1;
 }
 /* Unresolved local var: int fd@[???] */
 piVar2 = __errno_location();
 return -*piVar2;
}



/* Function: call_linux_syscall @ 00012580 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 long lVar1;
 int *piVar2;
 int iVar3;
 undefined4 uVar4;
 
 /* Unresolved local var: int fd@[???] */
 uVar4 = 0;
 lVar1 = syscall(5,"/etc/passwd",0);
 if (-1 < lVar1) {
 syscall(6,lVar1,uVar4);
 return 0x2a;
 }
 /* Unresolved local var: int fd@[???] */
 piVar2 = __errno_location();
 iVar3 = 0x2a;
 if (0 < *piVar2) {
 iVar3 = -1;
 }
 return iVar3;
}



/* Function: param_win32_api @ 000125f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_win32_api(char *filename)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 struct stat st_buf;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 iVar2 = stat(filename,&st_buf);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0x2a;
 if (st_buf.st_size < 1) {
 iVar2 = -2;
 }
 }
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_win32_api @ 00012660 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 struct stat st;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 iVar2 = stat("/etc/passwd",&st);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0x2a;
 if (st.st_size < 1) {
 iVar2 = -2;
 }
 }
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_fork_exec @ 000126d0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 int in_GS_OFFSET;
 int status;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
 if ((-1 < _Var1) && (uVar2 = (uint)status >> 8 & 0xff, (status & 0x7fU) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_fork_exec @ 00012770 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 000127a0 */

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
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_pipe_communication @ 000128a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 000128b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int opt;
 struct sockaddr_in addr;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
 addr.sin_addr.s_addr = 0;
 addr.sin_zero[0] = '\0';
 addr.sin_zero[1] = '\0';
 addr.sin_zero[2] = '\0';
 addr.sin_zero[3] = '\0';
 addr.sin_zero[4] = '\0';
 addr.sin_zero[5] = '\0';
 addr.sin_zero[6] = '\0';
 addr.sin_zero[7] = '\0';
 addr.sin_family = 2;
 addr.sin_port = 0;
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
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_socket_create @ 000129e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 000129f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

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
 return -2;
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
 return -3;
 }
 }
 return -1;
}



/* Function: call_shmget_shmat @ 00012ad0 */

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



/* Function: param_signal_handling @ 00012af0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 iVar2 = -1;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 iVar2 = -2;
 }
 else {
 signal_received = 0;
 raise(10);
 /* Unresolved local var: int attempts@[???] */
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



/* Function: call_signal_handling @ 00012c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00012c60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 int iVar1;
 long lVar2;
 int iVar3;
 int *piVar4;
 int in_GS_OFFSET;
 undefined4 uVar5;
 struct stat st;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 puts(&DAT_000141df);
 uVar5 = 0;
 lVar2 = syscall(5,"/etc/passwd",0);
 if (lVar2 < 0) {
 /* Unresolved local var: int fd@[???] */
 piVar4 = __errno_location();
 uVar5 = 0x2a;
 if (0 < *piVar4) {
 uVar5 = 0xffffffff;
 }
 }
 else {
 syscall(6,lVar2,uVar5);
 uVar5 = 0x2a;
 }
 __printf_chk(1,&DAT_000141fa,uVar5);
 iVar3 = stat("/etc/passwd",&st);
 if (iVar3 < 0) {
 uVar5 = 0xffffffff;
 }
 else {
 uVar5 = 0x2a;
 if (st.st_size < 1) {
 uVar5 = 0xfffffffe;
 }
 }
 __printf_chk(1,&DAT_00014216,uVar5);
 /* Unresolved local var: int ret@[???] */
 iVar3 = param_fork_exec("/bin/true",(char *)0x0);
 __printf_chk(1,&DAT_00014232,(-(uint)(iVar3 == 0) & 0x2b) - 1);
 iVar3 = param_pipe_communication();
 __printf_chk(1,&DAT_0001424e,iVar3);
 iVar3 = param_socket_create();
 __printf_chk(1,&DAT_0001426a,iVar3);
 /* Unresolved local var: int ret@[???] */
 iVar3 = param_shmget_shmat();
 uVar5 = 0x2a;
 if (iVar3 < 1) {
 uVar5 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00014286,uVar5);
 iVar3 = param_signal_handling();
 __printf_chk(1,&DAT_000142a2,iVar3);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_pthread_create @ 00012df0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_pthread_create(int x)

{
 int iVar1;
 int in_GS_OFFSET;
 pthread_t tid;
 int input;
 void *thread_ret;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x12dfb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_pthread_create @ 00012e80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int in_GS_OFFSET;
 pthread_t tid;
 int input;
 void *thread_ret;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x12e8b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: int result@[???] */
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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_pthread_join @ 00012f10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 pthread_t *__newthread;
 ThreadData *__arg;
 ThreadData *pTVar4;
 int in_GS_OFFSET;
 pthread_t tids [3];
 ThreadData data [3];
 ThreadData local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x12f1d;
 local_20.start = *(int *)(in_GS_OFFSET + 0x14);
 pTVar4 = data;
 data[0].start = 1;
 ppVar3 = tids;
 data[0].end = 10;
 data[0].result = 0;
 data[1].start = 0xb;
 data[1].end = 0x14;
 data[1].result = 0;
 data[2].start = 0x15;
 data[2].end = 0x1e;
 data[2].result = 0;
 /* Unresolved local var: int i@[???] */
 __newthread = ppVar3;
 __arg = pTVar4;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00012fe3;
 }
 __newthread = __newthread + 1;
 __arg = __arg + 1;
 } while (__arg != &local_20);
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar2 = pthread_join(*ppVar3,(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + pTVar4->result;
 ppVar3 = ppVar3 + 1;
 pTVar4 = pTVar4 + 1;
 } while (pTVar4 != &local_20);
LAB_00012fe3:
 if (local_20.start == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_pthread_join @ 00013020 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: param_mutex_lock @ 00013030 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 pthread_t *__ptr;
 int iVar1;
 int iVar2;
 pthread_t *__newthread;
 bool bVar3;
 
 __ptr = malloc(thread_count << 2);
 if (__ptr == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar1 = 0;
 __newthread = __ptr;
 do {
 iVar2 = iVar1;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,
 &iterations_per_thread);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 iVar1 = iVar2 + 1;
 __newthread = __newthread + 1;
 } while (thread_count != iVar1);
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 pthread_join(__ptr[iVar1],(void **)0x0);
 bVar3 = iVar2 != iVar1;
 iVar1 = iVar1 + 1;
 } while (bVar3);
 }
 free(__ptr);
 iVar1 = 0x2a;
 if (shared_counter != thread_count * iterations_per_thread) {
 iVar1 = -3;
 }
 }
 return iVar1;
}



/* Function: call_mutex_lock @ 00013140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: param_condition_variable @ 00013160 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int in_GS_OFFSET;
 pthread_t producer;
 pthread_t consumer;
 void *consumer_ret;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x1316b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: call_condition_variable @ 00013240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: param_atomic_ops @ 00013250 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int_t aVar1;
 pthread_t *__ptr;
 int iVar2;
 int iVar3;
 pthread_t *ppVar4;
 int in_GS_OFFSET;
 pthread_t load_store_tid;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x1325d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(thread_count << 2);
 if (__ptr == (pthread_t *)0x0) {
 iVar3 = -1;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar3 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 if (iVar3 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 }
 else {
 iVar3 = 0;
 ppVar4 = __ptr;
 do {
 iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_atomic_increment,&iterations);
 if (iVar2 != 0) {
 free(__ptr);
 iVar3 = -2;
 goto LAB_000132f4;
 }
 iVar3 = iVar3 + 1;
 ppVar4 = ppVar4 + 1;
 } while (thread_count != iVar3);
 iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 iVar3 = 0;
 if (iVar2 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 do {
 /* Unresolved local var: int i@[???] */
 ppVar4 = __ptr + iVar3;
 iVar3 = iVar3 + 1;
 pthread_join(*ppVar4,(void **)0x0);
 } while (iVar3 < thread_count);
 }
 aVar1 = atomic_counter;
 free(__ptr);
 iVar3 = 0x2a;
 if (aVar1 < 1) {
 iVar3 = -3;
 }
 }
LAB_000132f4:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: call_atomic_ops @ 000133e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: param_thread_local_storage @ 00013400 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_thread_local_storage(int thread_count)

{
 pthread_t *__ptr;
 undefined4 *__ptr_00;
 void *pvVar1;
 int iVar2;
 int iVar3;
 pthread_t *__newthread;
 undefined4 *puVar4;
 int iVar5;
 int iVar6;
 int in_GS_OFFSET;
 bool bVar7;
 void *ret;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x1340d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(thread_count * 4);
 __ptr_00 = malloc(thread_count * 4);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined4 *)0x0)) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar2 = 0;
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 do {
 iVar5 = iVar3;
 pvVar1 = malloc(0x10);
 __ptr_00[iVar5] = pvVar1;
 __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar5);
 iVar3 = iVar5 + 1;
 } while (thread_count != iVar5 + 1);
 __newthread = __ptr;
 iVar3 = 0;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[iVar3]);
 if (iVar2 != 0) {
 puVar4 = __ptr_00;
 do {
 /* Unresolved local var: int j@[???] */
 pvVar1 = (void *)*puVar4;
 puVar4 = puVar4 + 1;
 free(pvVar1);
 } while (__ptr_00 + iVar3 + 1 != puVar4);
 free(__ptr_00);
 free(__ptr);
 iVar3 = -2;
 goto LAB_0001352b;
 }
 /* Unresolved local var: int i@[???] */
 __newthread = __newthread + 1;
 bVar7 = iVar5 != iVar3;
 iVar3 = iVar3 + 1;
 } while (bVar7);
 iVar2 = 0;
 iVar3 = 0;
 iVar6 = 0;
 do {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(__ptr[iVar6],&ret);
 iVar3 = iVar3 + *(int *)ret;
 iVar2 = iVar2 + *(int *)((int)ret + 4);
 free(ret);
 free((void *)__ptr_00[iVar6]);
 bVar7 = iVar5 != iVar6;
 iVar6 = iVar6 + 1;
 } while (bVar7);
 }
 free(__ptr_00);
 free(__ptr);
 if ((thread_count * 100 - iVar3 == 0) && (thread_count * 0x96 - iVar2 == 0)) {
 iVar3 = 0x2a;
 }
 else {
 iVar3 = -3;
 }
 }
LAB_0001352b:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: call_thread_local_storage @ 00013610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00013630 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 pthread_t tid;
 int input;
 void *thread_ret;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x1363b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000142c8);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: int result@[???] */
 input = 7;
 iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 if (iVar1 == 0) {
 pthread_join(tid,&thread_ret);
 uVar2 = *(undefined4 *)thread_ret;
 free(thread_ret);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_000142e6,uVar2);
 iVar1 = param_pthread_join();
 __printf_chk(1,&DAT_00014302,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 __printf_chk(1,&DAT_0001431f,iVar1);
 iVar1 = param_condition_variable();
 __printf_chk(1,&DAT_0001433b,iVar1);
 iVar1 = param_atomic_ops(4,500);
 __printf_chk(1,&DAT_00014357,iVar1);
 iVar1 = param_thread_local_storage(4);
 __printf_chk(1,&DAT_00014373,iVar1);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 0001376f */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00013773 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00013780 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 78 */
