/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
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
typedef unsigned long ulong;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned int uint;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <errno.h>

/* Global variables */
int data;
int ready;
int atomic_counter;
int shared_counter;
int signal_received;
int signal_number;
pthread_mutex_t cond_mutex;
pthread_mutex_t counter_mutex;
pthread_cond_t cond;
volatile int atomic_lock = 0;

#define LOCK() while(__sync_lock_test_and_set(&atomic_lock, 1)) {}
#define UNLOCK() __sync_lock_release(&atomic_lock)

char DAT_00105019[] = "TestName";
char DAT_00105067[] = "strcmp: %d\n";
char DAT_00105082[] = "hello";
char DAT_0010509d[] = "strlen: %d\n";
char DAT_001050b9[] = "memcmp: %d\n";
char DAT_001050d5[] = "call_memcmp: %d\n";
char DAT_001050f1[] = "printf: %d\n";
char DAT_0010510d[] = "scanf result: %d\n";
char DAT_0010512a[] = "fopen result: 0x%x\n";
char DAT_00105146[] = "fread result: 0x%x\n";
char DAT_00105162[] = "malloc result: %d\n";
char DAT_0010517e[] = "memset: %d\n";
char DAT_00105199[] = "strchr/strstr: %d\n";
char DAT_001051db[] = "Testing System Calls\n";
char DAT_001051f6[] = "syscall: 0x%x\n";
char DAT_00105212[] = "stat: 0x%x\n";
char DAT_0010522e[] = "fork/exec: 0x%x\n";
char DAT_0010524a[] = "pipe: 0x%x\n";
char DAT_00105266[] = "socket: 0x%x\n";
char DAT_00105282[] = "shm: 0x%x\n";
char DAT_0010529e[] = "Testing Thread Concurrency\n";
char DAT_001052c4[] = "Testing Thread Concurrency\n";
char DAT_001052e2[] = "pthread_compute: %d\n";
char DAT_001052fe[] = "pthread_join: %d\n";
char DAT_0010531b[] = "mutex_lock: %d\n";
char DAT_00105337[] = "condition_var: %d\n";
char DAT_00105353[] = "atomic_ops: %d\n";
char DAT_0010536f[] = "All thread tests passed\n";
char DAT_00105390[] = "Testing Standard Library Functions\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 ((void (*)(void))0)();
 return;
}



/* Function: main @ 00102760 */

undefined8 main(void)

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

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 001028a0 */

undefined8 thread_sum(int *param_1)

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
 } while (iVar1 != param_1[1] + 1);
 param_1[2] = iVar2;
 }
 return 0;
}



/* Function: thread_compute @ 001028d0 */

void thread_compute(int *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}



/* Function: thread_increment @ 001028f0 */

undefined8 thread_increment(int *param_1)

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



/* Function: consumer_thread @ 00102950 */

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



/* Function: producer_thread @ 001029c0 */

undefined8 producer_thread(void)

{
 sleep(1);
  pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}



/* Function: thread_atomic_increment @ 00102a10 */

undefined8 thread_atomic_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < *param_1) {
 iVar2 = 0;
 do {
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
 iVar2 = iVar2 + 1;
 } while (*param_1 != iVar2);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00102a50 */

undefined8 thread_atomic_load_store(void)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}



/* Function: thread_tls_test @ 00102a70 */

void thread_tls_test(char *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 long *in_FS_OFFSET;
 
 iVar2 = *(int *)((long)in_FS_OFFSET + -0x24);
 iVar1 = iVar2 + 0x32;
 *(int *)((long)in_FS_OFFSET + -0x24) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}



/* Function: param_strcpy @ 00102ac0 */

int param_strcpy(char *param_1,char *param_2)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}



/* Function: call_strcpy @ 00102ae0 */

undefined8 call_strcpy(void)

{
 return 8;
}



/* Function: param_strcmp @ 00102af0 */

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



/* Function: call_strcmp @ 00102b20 */

undefined8 call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 00102b30 */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00102b50 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00102b60 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00102b80 */

undefined8 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00102b90 */

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



/* Function: call_memcmp @ 00102bc0 */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
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
 iVar2 = memcmp(&local_44,&local_38,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 iVar2 = memcmp(&local_44,&local_2c,0xc);
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar3 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_printf @ 00102c80 */

void param_printf(undefined4 param_1,undefined8 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00102ca0 */

void call_printf(void)

{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105019);
 return;
}



/* Function: param_scanf @ 00102cd0 */

int param_scanf(undefined8 param_1)

{
 int iVar1;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_scanf @ 00102d30 */

int call_scanf(void)

{
 int iVar1;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_fopen_fclose @ 00102da0 */

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



/* Function: call_fopen_fclose @ 00102df0 */

undefined8 call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 
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



/* Function: param_fread_fwrite @ 00102e50 */

undefined8 param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 long local_48;
 long local_40;
 short local_38;
 char local_36;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(&local_48,1,0x12,__s);
 *(undefined1 *)((long)&local_48 + sVar1) = 0;
 fclose(__s);
 unlink(param_1);
 if ((((sVar1 != 0x12) || (local_40 != 0x6144207473655420 || local_48 != 0x68636e65426e6942))
 || (local_38 != 0x6174)) || (uVar2 = 0x2a, local_36 != '\0')) {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_fread_fwrite @ 00102f60 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00102f70 */

int param_malloc_free(long param_1)

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
 piVar2 = piVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (piVar2 != __ptr + param_1);
 }
 iVar1 = *__ptr + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00102fe0 */

int call_malloc_free(void)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + 10;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 100);
 iVar2 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: param_memset @ 00103030 */

int param_memset(void *param_1,size_t param_2)

{
 byte *pbVar1;
 byte bVar2;
 int iVar3;
 byte *pbVar4;
 
 pbVar4 = memset(param_1,0,param_2);
 if (param_2 != 0) {
 pbVar1 = pbVar4 + param_2;
 iVar3 = 0;
 do {
 bVar2 = *pbVar4;
 pbVar4 = pbVar4 + 1;
 iVar3 = iVar3 + (uint)bVar2;
 } while (pbVar4 != pbVar1);
 return iVar3;
 }
 return 0;
}



/* Function: call_memset @ 00103070 */

undefined8 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00103080 */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
 int iVar1;
 char *pcVar2;
 int iVar3;
 
 pcVar2 = strchr(param_1,(int)param_2);
 iVar3 = (int)pcVar2 - (int)param_1;
 if (pcVar2 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar2 = strstr(param_1,param_3);
 iVar1 = -1;
 if (pcVar2 != (char *)0x0) {
 iVar1 = (int)pcVar2 - (int)param_1;
 }
 return iVar3 + iVar1;
}



/* Function: call_strchr_strstr @ 001030e0 */

undefined8 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 001030f0 */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 int iVar2;
 FILE *__stream;
 int *__ptr;
 int *piVar3;
 undefined8 uVar4;
 long in_FS_OFFSET;
 int local_28;
 int local_24;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00105390);
 __printf_chk(1,&DAT_00105067,8);
 call_strcmp();
 __printf_chk(1,&DAT_0010509d,0xc);
 __printf_chk(1,&DAT_0010509d,0xc);
 __printf_chk(1,&DAT_001050b9,0x5a);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_001050d5,uVar1);
 uVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105019);
 __printf_chk(1,&DAT_001050f1,uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_28,&local_24);
 if (iVar2 == 2) {
 local_24 = local_24 + local_28;
 }
 else {
 local_24 = -1;
 }
 __printf_chk(1,&DAT_0010510d,local_24);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar4 = 0x2a;
 if (-1 < iVar2) goto LAB_0010324b;
 }
 uVar4 = 0xffffffff;
LAB_0010324b:
 __printf_chk(1,&DAT_0010512a,uVar4);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_00105146,uVar1);
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar3 = __ptr;
 do {
 *piVar3 = iVar2;
 iVar2 = iVar2 + 10;
 piVar3 = piVar3 + 1;
 } while (iVar2 != 100);
 iVar2 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 __printf_chk(1,&DAT_00105162,iVar2);
 iVar2 = call_memset();
 __printf_chk(1,&DAT_0010517e,iVar2);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00105199,0xf);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_linux_syscall @ 00103340 */

ulong param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 
 uVar1 = syscall(2,param_1,0);
 if (-1 < (int)uVar1) {
 syscall(3,uVar1 & 0xffffffff);
 return uVar1 & 0xffffffff;
 }
 piVar2 = __errno_location();
 return (ulong)(uint)-*piVar2;
}



/* Function: call_linux_syscall @ 00103390 */

undefined8 call_linux_syscall(void)

{
 ulong uVar1;
 int *piVar2;
 undefined8 uVar3;
 
 uVar1 = syscall(2,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(3,uVar1 & 0xffffffff);
 return 0x2a;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}



/* Function: param_win32_api @ 001033f0 */

undefined8 param_win32_api(char *param_1)

{
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 struct stat sStack_a8;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,&sStack_a8);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (sStack_a8.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_win32_api @ 00103460 */

undefined8 call_win32_api(void)

{
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 struct stat sStack_a8;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat("/etc/passwd",&sStack_a8);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (sStack_a8.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_fork_exec @ 001034d0 */

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
 if ((-1 < _Var1) && (uVar2 = local_24 >> 8 & 0xff, (local_24 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fork_exec @ 00103570 */

int call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 001035a0 */

undefined8 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined8 uVar4;
 long in_FS_OFFSET;
 int local_40;
 int local_3c;
 undefined1 local_38 [40];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = pipe(&local_40);
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
 close(local_40);
 write(local_3c,"HelloPipe",9);
 close(local_3c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_3c);
 sVar3 = read(local_40,local_38,0x1f);
 local_38[sVar3] = 0;
 close(local_40);
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



/* Function: param_socket_create @ 001036a0 */

undefined8 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 undefined4 local_2c;
 struct sockaddr local_28;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_2c = 1;
 iVar1 = setsockopt(__fd,1,2,&local_2c,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 memset(&local_28, 0, sizeof(local_28));
 local_28.sa_family = 2;
 iVar1 = bind(__fd,(struct sockaddr *)&local_28,0x10);
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_shmget_shmat @ 001037b0 */

undefined8 param_shmget_shmat(void)

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
 return 0xfffffffe;
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
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}



/* Function: call_shmget_shmat @ 00103870 */

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



/* Function: param_signal_handling @ 001038a0 */

undefined8 param_signal_handling(void)

{
 __sighandler_t p_Var1;
 undefined8 uVar2;
 int iVar3;
 
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
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



/* Function: test_system_calls @ 001039f0 */

void test_system_calls(void)

{
 int iVar1;
 undefined4 uVar2;
 ulong uVar3;
 int *piVar4;
 undefined8 uVar5;
 long in_FS_OFFSET;
 struct stat sStack_a8;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001051db);
 uVar3 = syscall(2,"/etc/passwd",0);
 if ((int)uVar3 < 0) {
 piVar4 = __errno_location();
 uVar5 = 0x2a;
 if (0 < *piVar4) {
 uVar5 = 0xffffffff;
 }
 }
 else {
 syscall(3,uVar3 & 0xffffffff);
 uVar5 = 0x2a;
 }
 __printf_chk(1,&DAT_001051f6,uVar5);
 iVar1 = stat("/etc/passwd",&sStack_a8);
 if (iVar1 < 0) {
 uVar5 = 0xffffffff;
 }
 else {
 uVar5 = 0x2a;
 if (sStack_a8.st_size < 1) {
 uVar5 = 0xfffffffe;
 }
 }
 __printf_chk(1,&DAT_00105212,uVar5);
 iVar1 = param_fork_exec("/bin/true",0);
 __printf_chk(1,&DAT_0010522e,(-(uint)(iVar1 == 0) & 0x2b) - 1);
 uVar2 = param_pipe_communication();
 __printf_chk(1,&DAT_0010524a,uVar2);
 uVar2 = param_socket_create();
 __printf_chk(1,&DAT_00105266,uVar2);
 iVar1 = param_shmget_shmat();
 uVar5 = 0x2a;
 if (iVar1 < 1) {
 uVar5 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00105282,uVar5);
 param_signal_handling();
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_0010529e);
 return;
}



/* Function: param_pthread_create @ 00103b90 */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_create @ 00103c10 */

undefined4 call_pthread_create(void)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 7;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_pthread_join @ 00103ca0 */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 undefined8 *__arg;
 long lVar3;
 long lVar4;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 pthread_t local_88 [4];
 undefined8 local_68;
 int local_60 [7];
 undefined1 local_44 [20];

 __newthread = local_88;
 *(long *)&local_44[4] = *(long *)(in_FS_OFFSET + 0x28);
 __arg = &local_68;
 local_60[2] = 0x14;
 local_60[3] = 0;
 local_60[6] = 0;
 local_68 = 0xa00000001;
 local_60[0] = 0;
 local_60[1] = 0xb;
 local_60[4] = 0x15;
 local_60[5] = 0x1e;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00103d63;
 }
 __arg = (undefined8 *)((long)__arg + 0xc);
 __newthread = __newthread + 1;
 } while (__arg != (undefined8 *)local_44);
 iVar1 = 0;
 lVar3 = 0;
 do {
 iVar2 = pthread_join(local_88[lVar3],(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 lVar4 = lVar3 + 1;
 iVar1 = iVar1 + local_60[lVar3 * 3];
 lVar3 = lVar4;
 } while (lVar4 != 3);
LAB_00103d63:
 if (*(long *)&local_44[4] == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_join @ 00103da0 */

void call_pthread_join(void)

{
 param_pthread_join();
 return;
}



/* Function: param_mutex_lock @ 00103db0 */

undefined8 param_mutex_lock(uint param_1,int param_2)

{
 pthread_t __th;
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 pthread_t *ppVar3;
 pthread_t *__newthread;
 int local_3c [3];
 
 local_3c[0] = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 __newthread = __newthread + 1;
 ppVar3 = __ptr;
 } while (__newthread != __ptr + param_1);
 do {
 __th = *ppVar3;
 ppVar3 = ppVar3 + 1;
 pthread_join(__th,(void **)0x0);
 } while (ppVar3 != __ptr + param_1);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * local_3c[0]) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 00103ea0 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: param_condition_variable @ 00103ec0 */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 pthread_t local_28;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_28,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xfffffffe;
 pthread_cancel(local_20);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_condition_variable @ 00103f90 */

void call_condition_variable(void)

{
 param_condition_variable();
 return;
}



/* Function: param_atomic_ops @ 00103fa0 */

undefined8 param_atomic_ops(uint param_1,undefined4 param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 pthread_t *ppVar3;
 long lVar4;
 long in_FS_OFFSET;
 undefined4 local_4c;
 pthread_t local_48;
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_4c = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if ((int)param_1 < 1) {
 iVar1 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_48,(void **)0x0);
 }
 }
 else {
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_4c);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_0010403a;
 }
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + param_1);
 iVar1 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_48,(void **)0x0);
 }
 lVar4 = 0;
 do {
 ppVar3 = __ptr + lVar4;
 lVar4 = lVar4 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 } while ((int)lVar4 < (int)param_1);
 }
 iVar1 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_0010403a:
 if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 00104100 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: param_thread_local_storage @ 00104120 */

undefined8 param_thread_local_storage(int param_1)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar2;
 undefined8 uVar3;
 ulong uVar4;
 undefined8 *puVar5;
 ulong uVar6;
 int iVar7;
 ulong uVar8;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 int *local_48;
 long local_40;
 
 uVar4 = (ulong)param_1;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = malloc(uVar4 * 8);
 __ptr_00 = malloc(uVar4 * 8);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar7 = 0;
 iVar1 = 0;
 }
 else {
 uVar8 = 0;
 do {
 pvVar2 = malloc(0x10);
 uVar6 = uVar8 & 0xffffffff;
 __ptr_00[uVar8] = pvVar2;
 uVar8 = uVar8 + 1;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar6);
 } while (uVar8 != uVar4);
 uVar8 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar8]);
 if (iVar1 != 0) {
 puVar5 = __ptr_00;
 do {
 pvVar2 = (void *)*puVar5;
 puVar5 = puVar5 + 1;
 free(pvVar2);
 } while (__ptr_00 + uVar8 + 1 != puVar5);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00104237;
 }
 uVar8 = uVar8 + 1;
 __newthread = __newthread + 1;
 } while (uVar8 != uVar4);
 iVar7 = 0;
 uVar8 = 0;
 iVar1 = 0;
 do {
 pthread_join(__ptr[uVar8],&local_48);
 iVar1 = iVar1 + *local_48;
 iVar7 = iVar7 + local_48[1];
 free(local_48);
 puVar5 = __ptr_00 + uVar8;
 uVar8 = uVar8 + 1;
 free((void *)*puVar5);
 } while (uVar8 != uVar4);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 == iVar1) && (param_1 * 0x96 == iVar7)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00104237:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 00104300 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 00104310 */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001052c4);
 local_24 = 7;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_001052e2,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_001052fe,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,&DAT_0010531b,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_00105337,uVar2);
 uVar2 = param_atomic_ops(4,500);
 __printf_chk(1,&DAT_00105353,uVar2);
 param_thread_local_storage(4);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_0010536f);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 67 */
