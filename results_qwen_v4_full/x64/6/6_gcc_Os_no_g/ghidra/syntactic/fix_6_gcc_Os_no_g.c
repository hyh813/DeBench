/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned char undefined;
typedef void (*code)(void);

/* Standard types */
typedef unsigned int uint;

/* Include necessary headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <errno.h>
#include <time.h>

/* Declare snprintf if not available */
#ifndef snprintf
extern int snprintf(char *str, size_t size, const char *format, ...);
#endif

/* Forward declarations for global variables */
extern int signal_received;
extern int signal_number;
extern int shared_counter;
extern pthread_mutex_t counter_mutex;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern int data;
extern int ready;
extern int atomic_counter;

/* Forward declarations for pthread functions */
extern void *thread_tls_test(void *param_1);

/* Forward declarations for data constants */
extern char DAT_00104011[];
extern char DAT_0010400d[];
extern char DAT_00104015[];
extern char DAT_0010401d[];
extern char DAT_00104019[];
extern char DAT_00104099[];
extern char DAT_001040bd[];
extern char DAT_001040d8[];
extern char DAT_001040f3[];
extern char DAT_0010410f[];
extern char DAT_0010412b[];
extern char DAT_00104147[];
extern char DAT_00104163[];
extern char DAT_00104180[];
extern char DAT_0010419c[];
extern char DAT_001041b8[];
extern char DAT_001041d4[];
extern char DAT_001041ef[];
extern char DAT_0010423e[];
extern char DAT_00104259[];
extern char DAT_00104275[];
extern char DAT_00104291[];
extern char DAT_001042ad[];
extern char DAT_001042c9[];
extern char DAT_001042e5[];
extern char DAT_00104301[];
extern int DAT_00104400[];

/* Global variables */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int data = 0;
int ready = 0;
int atomic_counter = 0;

/* Data constants */
char DAT_00104011[] = "test";
char DAT_0010400d[] = "test";
char DAT_00104015[] = "same";
char DAT_0010401d[] = "diff";
char DAT_00104019[] = "diff";
char DAT_00104099[] = "Testing standard library functions...";
char DAT_001040bd[] = "strcpy result: %d\n";
char DAT_001040d8[] = "strcmp result: %d\n";
char DAT_001040f3[] = "strlen result: %d\n";
char DAT_0010410f[] = "memcpy result: %d\n";
char DAT_0010412b[] = "memcmp result: %d\n";
char DAT_00104147[] = "printf result: %d\n";
char DAT_00104163[] = "scanf result: %d\n";
char DAT_00104180[] = "fopen/fclose result: %d\n";
char DAT_0010419c[] = "fread/fwrite result: %d\n";
char DAT_001041b8[] = "malloc/free result: %d\n";
char DAT_001041d4[] = "memset result: %d\n";
char DAT_001041ef[] = "strchr/strstr result: %d\n";
char DAT_0010423e[] = "Testing system calls...";
char DAT_00104259[] = "linux syscall result: %d\n";
char DAT_00104275[] = "win32 api result: %d\n";
char DAT_00104291[] = "fork/exec result: %d\n";
char DAT_001042ad[] = "pipe communication result: %d\n";
char DAT_001042c9[] = "socket create result: %d\n";
char DAT_001042e5[] = "shmget/shmat result: %d\n";
char DAT_00104301[] = "signal handling result: %d\n";
char DAT_00104327[] = "Testing thread concurrency...";
char DAT_00104345[] = "pthread create result: %d\n";
char DAT_00104361[] = "pthread join result: %d\n";
char DAT_0010437e[] = "mutex lock result: %d\n";
char DAT_0010439a[] = "condition variable result: %d\n";
char DAT_001043b6[] = "atomic ops result: %d\n";
char DAT_001043d2[] = "thread local storage result: %d\n";
int DAT_00104400[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

/* Stub functions for LOCK/UNLOCK */
#define LOCK()
#define UNLOCK()

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00102720 */

int main(void)

{
 undefined1 auVar1 [16];
 ulong in_RAX;
 
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00102829 */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 0010283e */

undefined8 thread_sum(int *param_1)

{
 int iVar1;
 
 iVar1 = *param_1;
 param_1[2] = 0;
 for (; iVar1 <= param_1[1]; iVar1 = iVar1 + 1) {
 param_1[2] = param_1[2] + iVar1;
 }
 return 0;
}



/* Function: thread_compute @ 0010285c */

undefined8 thread_compute(int *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return 0;
}



/* Function: thread_increment @ 00102874 */

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



/* Function: consumer_thread @ 001028c0 */

void *consumer_thread(void *param_1)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock(&cond_mutex);
 while (uVar1 = data, ready == 0) {
 pthread_cond_wait(&cond, &cond_mutex);
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return (void *)0;
}



/* Function: producer_thread @ 00102911 */

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



/* Function: thread_atomic_increment @ 0010295b */

undefined8 thread_atomic_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 for (iVar2 = 0; iVar2 < *param_1; iVar2 = iVar2 + 1) {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar1 = iVar2 + 1000;
 if (iVar2 != atomic_counter) {
 iVar1 = atomic_counter;
 }
 atomic_counter = iVar1;
 UNLOCK();
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00102985 */

undefined8 thread_atomic_load_store(void)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}



/* Function: thread_tls_test @ 0010299b */

void *thread_tls_test(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 long *in_FS_OFFSET;
 
 iVar2 = *(int *)((long)in_FS_OFFSET + -0x24);
 iVar1 = iVar2 + 0x32;
 *(int *)((long)in_FS_OFFSET + -0x24) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),(char *)param_1,0x1f);
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void *)0;
}



/* Function: param_strcpy @ 001029e5 */

void param_strcpy(char *param_1,char *param_2)

{
 char *__s;
 
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}



/* Function: call_strcpy @ 001029f9 */

void call_strcpy(void)

{
 long in_FS_OFFSET;
 undefined1 local_30 [32];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 param_strcpy(local_30,"HelloLib");
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: param_strcmp @ 00102a3c */

int param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = strcmp(param_1,param_2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_strcmp @ 00102a5d */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp(&DAT_00104011,&DAT_0010400d);
 iVar2 = param_strcmp(&DAT_00104015,&DAT_00104015);
 iVar3 = param_strcmp(&DAT_0010401d,&DAT_00104019);
 return iVar3 + iVar1 + iVar2;
}



/* Function: param_strlen @ 00102aa5 */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00102ab1 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00102abb */

long param_memcpy(undefined1 *param_1,undefined1 *param_2,long param_3)

{
 long lVar1;
 
 lVar1 = param_3;
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 }
 return lVar1;
}



/* Function: call_memcpy @ 00102ac8 */

int call_memcpy(void)

{
 long lVar1;
 int *piVar2;
 long in_FS_OFFSET;
 undefined8 local_38;
 undefined8 local_30;
 undefined4 local_28;
 int local_24 [4];
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = 0x32;
 local_38 = 0x140000000a;
 local_30 = 0x280000001e;
 piVar2 = local_24;
 for (lVar1 = 5; lVar1 != 0; lVar1 = lVar1 + -1) {
 *piVar2 = 0;
 piVar2 = piVar2 + 1;
 }
 param_memcpy(local_24,&local_38,0x14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_24[2] + local_24[0] + local_14;
}



/* Function: param_memcmp @ 00102b49 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_memcmp @ 00102b6a */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined8 local_44;
 undefined4 local_3c;
 undefined8 local_38;
 undefined4 local_30;
 undefined8 local_2c;
 undefined4 local_24;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_3c = 3;
 local_30 = 4;
 local_24 = 3;
 local_44 = 0x200000001;
 local_38 = 0x200000001;
 local_2c = 0x200000001;
 iVar1 = param_memcmp(&local_44,&local_38,0xc);
 iVar2 = param_memcmp(&local_44,&local_2c,0xc);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar1;
}



/* Function: param_printf @ 00102bfc */

void param_printf(undefined4 param_1,undefined8 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00102c18 */

void call_printf(void)

{
 param_printf(0x2a,"Test");
 return;
}



/* Function: param_scanf @ 00102c2a */

int param_scanf(undefined8 param_1)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_18;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_scanf @ 00102c83 */

void call_scanf(void)

{
 param_scanf("123,456");
 return;
}



/* Function: param_fopen_fclose @ 00102c90 */

int param_fopen_fclose(char *param_1)

{
 int iVar1;
 FILE *__stream;
 
 iVar1 = -1;
 __stream = fopen(param_1,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 }
 return iVar1;
}



/* Function: call_fopen_fclose @ 00102ccb */

uint call_fopen_fclose(void)

{
 int iVar1;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 00102ce4 */

int param_fread_fwrite(char *param_1)

{
 int iVar1;
 FILE *__s;
 size_t sVar2;
 long in_FS_OFFSET;
 char local_50 [32];
 long local_30;
 
 local_30 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(param_1,"w+");
 iVar1 = -1;
 if (__s != (FILE *)0x0) {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(local_50,1,0x12,__s);
 local_50[sVar2] = '\0';
 fclose(__s);
 unlink(param_1);
 iVar1 = -3;
 if (sVar2 == 0x12) {
 iVar1 = strcmp(local_50,"BinBench Test Data");
 iVar1 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
 }
 }
 else {
 fclose(__s);
 iVar1 = -2;
 }
 }
 if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: call_fread_fwrite @ 00102dcd */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00102ddd */

int param_malloc_free(long param_1)

{
 int *__ptr;
 long lVar1;
 int iVar2;
 
 iVar2 = -1;
 __ptr = malloc(param_1 * 4);
 if (__ptr != (int *)0x0) {
 for (lVar1 = 0; lVar1 != param_1; lVar1 = lVar1 + 1) {
 __ptr[lVar1] = (int)lVar1 * 10;
 }
 iVar2 = *__ptr + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar2;
}



/* Function: call_malloc_free @ 00102e2b */

void call_malloc_free(void)

{
 param_malloc_free(10);
 return;
}



/* Function: param_memset @ 00102e36 */

int param_memset(undefined1 *param_1,long param_2)

{
 long lVar1;
 undefined1 *puVar2;
 int iVar3;
 
 iVar3 = 0;
 puVar2 = param_1;
 for (lVar1 = param_2; lVar1 != 0; lVar1 = lVar1 + -1) {
 *puVar2 = 0;
 puVar2 = puVar2 + 1;
 }
 for (lVar1 = 0; lVar1 != param_2; lVar1 = lVar1 + 1) {
 iVar3 = iVar3 + (uint)(unsigned char)param_1[lVar1];
 }
 return iVar3;
}



/* Function: call_memset @ 00102e5e */

int call_memset(void)

{
 long lVar1;
 long in_FS_OFFSET;
 int local_38 [10];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_38[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 param_memset(local_38,0x28);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_38[9] + local_38[0];
}



/* Function: param_strchr_strstr @ 00102eb4 */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
 char *pcVar1;
 int iVar2;
 int iVar3;
 
 pcVar1 = strchr(param_1,(int)param_2);
 iVar2 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar3 = -1;
 if (pcVar1 != (char *)0x0) {
 iVar3 = (int)pcVar1 - (int)param_1;
 }
 return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 00102f04 */

void call_strchr_strstr(void)

{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}



/* Function: test_standard_library_functions @ 00102f1d */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 undefined8 in_RAX;
 
 puts(&DAT_00104099);
 call_strcpy();
 __printf_chk(1,&DAT_001040bd,0);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_001040d8,uVar1);
 __printf_chk(1,&DAT_001040f3,0xc);
 uVar1 = call_memcpy();
 __printf_chk(1,&DAT_0010410f,uVar1);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_0010412b,uVar1);
 call_printf();
 __printf_chk(1,&DAT_00104147,0);
 uVar1 = call_scanf();
 __printf_chk(1,&DAT_00104163,uVar1);
 uVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_00104180,uVar1);
 call_fread_fwrite();
 __printf_chk(1,&DAT_0010419c,0);
 call_malloc_free();
 __printf_chk(1,&DAT_001041b8,0);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_001041d4,uVar1);
 call_strchr_strstr();
 __printf_chk(1,&DAT_001041ef,0,in_RAX);
 return;
}



/* Function: param_linux_syscall @ 0010307b */

int param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 int iVar3;
 
 uVar1 = syscall(2,param_1,0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 piVar2 = __errno_location();
 iVar3 = -*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return iVar3;
}



/* Function: call_linux_syscall @ 001030ba */

uint call_linux_syscall(void)

{
 int iVar1;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 001030d3 */

undefined8 param_win32_api(char *param_1)

{
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 struct stat local_a0;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,&local_a0);
 uVar2 = 0xffffffff;
 if ((-1 < iVar1) && (uVar2 = 0x2a, local_a0.st_size < 1)) {
 uVar2 = 0xfffffffe;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_win32_api @ 00103139 */

void call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return;
}



/* Function: param_fork_exec @ 00103146 */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
 __pid_t _Var1;
 uint uVar2;
 long in_FS_OFFSET;
 uint local_24;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
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
 uVar2 = 0xfffffffe;
 if (-1 < _Var1) {
 uVar2 = 0xfffffffd;
 if ((local_24 & 0x7f) == 0) {
 uVar2 = local_24 >> 8 & 0xff;
 }
 }
 }
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_fork_exec @ 001031dc */

int call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 001031fb */

undefined8 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined8 uVar4;
 long in_FS_OFFSET;
 int local_38;
 int local_34;
 undefined1 local_30 [32];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_socket_create @ 001032ca */

undefined8 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 struct sockaddr local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __fd = socket(2,1,0);
 uVar2 = 0xffffffff;
 if (-1 < __fd) {
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
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
 local_20.sa_data[2] = '\0';
 local_20.sa_data[3] = '\0';
 local_20.sa_data[4] = '\0';
 local_20.sa_data[5] = '\0';
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
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: param_shmget_shmat @ 001033bf */

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
 if (__dest == (char *)0xffffffffffffffff) {
 return 0xfffffffd;
 }
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return sVar2 & 0xffffffff;
 }
 }
 return 0xffffffff;
}



/* Function: call_shmget_shmat @ 00103474 */

undefined8 call_shmget_shmat(void)

{
 int iVar1;
 undefined8 in_RAX;
 undefined8 uVar2;
 undefined1 auVar3 [16];
 
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 0010348f */

undefined8 param_signal_handling(void)

{
 __sighandler_t p_Var1;
 undefined8 uVar2;
 undefined8 in_RCX;
 int iVar3;
 undefined1 auVar4 [16];
 
 p_Var1 = signal(10,signal_handler);
 uVar2 = 0xffffffff;
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = signal(0xe,signal_handler);
 uVar2 = 0xfffffffe;
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 iVar3 = 0x3e9;
 signal_received = 0;
 raise(10);
 while ((signal_received == 0 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
 usleep(1000);
 }
 uVar2 = 0xfffffffd;
 if ((signal_received != 0) && (uVar2 = 0xfffffffc, signal_number == 10)) {
 iVar3 = 0x7d1;
 signal_received = 0;
 alarm(1);
 while ((signal_received == 0 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
 usleep(1000);
 }
 uVar2 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 }
 }
 }
 return uVar2;
}



/* Function: test_system_calls @ 001035a0 */

void test_system_calls(void)

{
 undefined4 uVar1;
 undefined8 in_RAX;
 
 puts(&DAT_0010423e);
 uVar1 = call_linux_syscall();
 __printf_chk(1,&DAT_00104259,uVar1);
 call_win32_api();
 __printf_chk(1,&DAT_00104275,0);
 uVar1 = call_fork_exec();
 __printf_chk(1,&DAT_00104291,uVar1);
 uVar1 = param_pipe_communication();
 __printf_chk(1,&DAT_001042ad,uVar1);
 uVar1 = param_socket_create();
 __printf_chk(1,&DAT_001042c9,uVar1);
 uVar1 = call_shmget_shmat();
 __printf_chk(1,&DAT_001042e5,uVar1);
 uVar1 = param_signal_handling();
 __printf_chk(1,&DAT_00104301,uVar1,in_RAX);
 return;
}



/* Function: param_pthread_create @ 00103670 */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 uVar2 = 0xffffffff;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_pthread_create @ 001036e9 */

void call_pthread_create(void)

{
 param_pthread_create(7);
 return;
}



/* Function: param_pthread_join @ 001036f7 */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 long lVar3;
 pthread_t *__newthread;
 long lVar4;
 int *piVar5;
 int *piVar6;
 long in_FS_OFFSET;
 pthread_t local_80 [3];
 int local_64 [9];
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 piVar5 = &DAT_00104400;
 piVar6 = local_64;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *piVar6 = *piVar5;
 piVar5 = piVar5 + 1;
 piVar6 = piVar6 + 1;
 }
 piVar5 = local_64;
 __newthread = local_80;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,piVar5);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_001037a0;
 }
 __newthread = __newthread + 1;
 piVar5 = piVar5 + 3;
 } while (__newthread != (pthread_t *)(local_80 + 3));
 iVar1 = 0;
 lVar3 = 0;
 do {
 pthread_join(local_80[lVar3],(void **)0x0);
 lVar4 = lVar3 + 1;
 iVar1 = iVar1 + local_64[lVar3 * 3 + 2];
 lVar3 = lVar4;
 } while (lVar4 != 3);
LAB_001037a0:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_join @ 001037c7 */

void call_pthread_join(void)

{
 param_pthread_join();
 return;
}



/* Function: param_mutex_lock @ 001037d2 */

undefined8 param_mutex_lock(int param_1,int param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 int iVar3;
 long lVar4;
 pthread_t *__newthread;
 int local_2c;
 
 local_2c = param_2;
 __ptr = malloc((long)param_1 << 3);
 uVar2 = 0xffffffff;
 if (__ptr != (pthread_t *)0x0) {
 shared_counter = 0;
 __newthread = __ptr;
 for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(void *(*)(void *))thread_increment,&local_2c);
 __newthread = __newthread + 1;
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (lVar4 = 0; (int)lVar4 < param_1; lVar4 = lVar4 + 1) {
 pthread_join(__ptr[lVar4],(void **)0x0);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * local_2c) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 00103896 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: param_condition_variable @ 001038a9 */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 pthread_t local_28;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 uVar2 = 0xffffffff;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,(void *(*)(void *))consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,(void *(*)(void *))producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_28,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_condition_variable @ 0010395e */

void call_condition_variable(void)

{
 param_condition_variable();
 return;
}



/* Function: param_atomic_ops @ 00103969 */

undefined8 param_atomic_ops(int param_1,undefined4 param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 int iVar3;
 long lVar4;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 undefined4 local_3c;
 pthread_t local_38;
 long local_30;
 
 local_30 = *(long *)(in_FS_OFFSET + 0x28);
 local_3c = param_2;
 __ptr = malloc((long)param_1 << 3);
 uVar2 = 0xffffffff;
 if (__ptr != (pthread_t *)0x0) {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 __newthread = __ptr;
 for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(void *(*)(void *))thread_atomic_increment,&local_3c);
 __newthread = __newthread + 1;
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00103a4e;
 }
 }
 iVar3 = pthread_create(&local_38,(pthread_attr_t *)0x0,(void *(*)(void *))thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 for (lVar4 = 0; iVar3 = atomic_counter, (int)lVar4 < param_1; lVar4 = lVar4 + 1) {
 pthread_join(__ptr[lVar4],(void **)0x0);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar3 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00103a4e:
 if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 00103a70 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: param_thread_local_storage @ 00103a83 */

undefined8 param_thread_local_storage(int param_1)

{
 int iVar1;
 void *__ptr;
 undefined8 *__ptr_00;
 void *pvVar2;
 undefined8 uVar3;
 undefined8 *puVar4;
 ulong uVar5;
 long lVar6;
 long lVar7;
 int iVar8;
 long in_FS_OFFSET;
 int *local_48;
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = malloc((long)param_1 << 3);
 __ptr_00 = malloc((long)param_1 << 3);
 if ((__ptr == (void *)0x0) || (uVar5 = 0, __ptr_00 == (undefined8 *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 for (; (int)uVar5 < param_1; uVar5 = uVar5 + 1) {
 pvVar2 = malloc(0x10);
 __ptr_00[uVar5] = pvVar2;
 snprintf((char *)pvVar2,0x10,"Thread-%d",(int)(uVar5 & 0xffffffff));
 }
 lVar7 = 0;
 do {
 lVar6 = lVar7;
 if (param_1 <= (int)lVar6) {
 iVar1 = 0;
 iVar8 = 0;
 for (lVar7 = 0; (int)lVar7 < param_1; lVar7 = lVar7 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + lVar7 * 8),(void **)&local_48);
 iVar8 = iVar8 + *local_48;
 iVar1 = iVar1 + local_48[1];
 free(local_48);
 free((void *)__ptr_00[lVar7]);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 != iVar8) || (uVar3 = 0x2a, param_1 * 0x96 != iVar1)) {
 uVar3 = 0xfffffffd;
 }
 goto LAB_00103bf5;
 }
 iVar1 = pthread_create((pthread_t *)((char *)__ptr + lVar6 * 8),(pthread_attr_t *)0x0,
 (void *(*)(void *))thread_tls_test,(void *)__ptr_00[lVar6]);
 lVar7 = lVar6 + 1;
 } while (1);
 puVar4 = __ptr_00;
 do {
 pvVar2 = (void *)*puVar4;
 puVar4 = puVar4 + 1;
 free(pvVar2);
 } while (puVar4 != __ptr_00 + lVar6 + 1);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 }
LAB_00103bf5:
 if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar3;
}



/* Function: call_thread_local_storage @ 00103c19 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 00103c27 */

void test_thread_concurrency(void)

{
 undefined4 uVar1;
 undefined8 in_RAX;
 
 puts(&DAT_00104327);
 call_pthread_create();
 __printf_chk(1,&DAT_00104345,0);
 uVar1 = param_pthread_join();
 __printf_chk(1,&DAT_00104361,uVar1);
 call_mutex_lock();
 __printf_chk(1,&DAT_0010437e,0);
 param_condition_variable();
 __printf_chk(1,&DAT_0010439a,0);
 call_atomic_ops();
 __printf_chk(1,&DAT_001043b6,0);
 call_thread_local_storage();
 __printf_chk(1,&DAT_001043d2,0,in_RAX);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 67 */
