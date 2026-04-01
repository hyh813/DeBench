/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler type definitions */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef void undefined;
typedef void (*code)(void);

/* System headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <signal.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <errno.h>
#include <fcntl.h>

/* Global variable declarations */
extern long __stack_chk_guard;
extern long ___stack_chk_guard;
int data;
int ready;
int shared_counter;
int atomic_counter;
int signal_received;
int signal_number;
int __aarch64_have_lse_atomics;
void *counter_mutex;
void *cond;
void *cond_mutex;
char completed_0;
void *__dso_handle;
char DAT_00103698[8] = "TestName";
char DAT_00103700[32] = "=== Standard Library ===";
char DAT_00103728[32] = "strcmp: %d\n";
char DAT_00103748[32] = "strcmp result: %d\n";
char DAT_00103768[32] = "strlen: %d\n";
char DAT_00103788[32] = "memcpy: %d\n";
char DAT_001037a8[32] = "memcmp: %d\n";
char DAT_001037c8[32] = "printf: %d\n";
char DAT_001037e8[32] = "scanf: %d\n";
char DAT_00103808[32] = "fopen: %d\n";
char DAT_00103828[32] = "fread/fwrite: %d\n";
char DAT_00103848[32] = "malloc/free: %d\n";
char DAT_00103868[32] = "memset: %d\n";
char DAT_00103888[32] = "strchr/strstr: %d\n";
char DAT_001038f0[32] = "=== System Calls ===";
char DAT_00103910[32] = "syscall: %d\n";
char DAT_00103930[32] = "stat: %d\n";
char DAT_00103950[32] = "fork/exec: %d\n";
char DAT_00103970[32] = "pipe: %d\n";
char DAT_00103990[32] = "socket: %d\n";
char DAT_001039b0[32] = "shm: %d\n";
char DAT_001039d0[32] = "signal: %d\n";
char DAT_00103a00[24] = "=== Thread Concurrency ===";
char DAT_00103a20[32] = "Thread compute: %d\n";
char DAT_00103a40[32] = "Thread join sum: %d\n";
char DAT_00103a60[32] = "Mutex lock: %d\n";
char DAT_00103a80[32] = "Condition variable: %d\n";
char DAT_00103aa0[32] = "Atomic ops: %d\n";
char DAT_00103ac0[32] = "Thread local storage: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_O2_no_g
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



/* Forward declarations */
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
unsigned long __getauxval(unsigned long type);
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
void __stack_chk_fail(void);
int __isoc99_sscanf(const char *str, const char *format, ...);
bool ExclusiveMonitorPass(void *addr, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

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
 
 __getauxval(0x10);
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




/* Function: signal_handler @ 00101960 */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 00101980 */

void *thread_sum(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar1 = (int *)param_1;
 
 iVar1 = *piVar1;
 piVar1[2] = 0;
 if (iVar1 <= piVar1[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != piVar1[1] + 1);
 piVar1[2] = iVar2;
 }
 return NULL;
}



/* Function: thread_compute @ 001019b4 */

void *thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: thread_increment @ 001019e4 */

undefined8 thread_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 iVar2 = iVar2 + 1;
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return 0;
}



/* Function: consumer_thread @ 00101a54 */

void consumer_thread(void)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return;
}



/* Function: producer_thread @ 00101ad0 */

undefined8 producer_thread(void)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 ready = 1;
 data = 0x2a;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}



/* Function: thread_atomic_increment @ 00101b30 */

undefined8 thread_atomic_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar2 = *param_1;
 if (0 < iVar2) {
 iVar3 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 iVar1 = iVar3 + 1;
 __aarch64_cas4_acq_rel(iVar3,iVar3 + 1000,&atomic_counter);
 iVar3 = iVar1;
 } while (iVar2 != iVar1);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00101ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 thread_atomic_load_store(void)

{
 atomic_counter = atomic_counter + 100;
 return 0;
}



/* Function: thread_tls_test @ 00101bc0 */

void thread_tls_test(char *param_1)

{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 register long tpidr_el0 asm("tpidr_el0");
 
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x18),param_1,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return;
}



/* Function: param_strcpy @ 00101c10 */

int param_strcpy(char *param_1,char *param_2)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}



/* Function: call_strcpy @ 00101c34 */

undefined8 call_strcpy(void)

{
 return 8;
}



/* Function: FUN_00101c3c @ 00101c3c */

int FUN_00101c3c(char *param_1,char *param_2)

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

undefined8 call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 00101c70 */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00101c84 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: FUN_00101c8c @ 00101c8c */

ulong FUN_00101c8c(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: param_memcpy @ 00101c90 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00101cb4 */

undefined8 call_memcpy(void)

{
 return 0x5a;
}



/* Function: FUN_00101cbc @ 00101cbc */

int FUN_00101cbc(void *param_1,void *param_2,size_t param_3)

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



/* Function: param_memcmp @ 00101cc0 */

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



/* Function: call_memcmp @ 00101ce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined8 local_38;
 undefined4 local_30;
 undefined8 local_28;
 undefined4 local_20;
 undefined8 local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_38 = 0x200000001;
 local_20 = 4;
 local_30 = 3;
 local_28 = 0x200000001;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar2 = memcmp(&local_38,&local_28,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 iVar3 = memcmp(&local_38,&local_18,0xc);
 iVar2 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar2 = 1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_printf @ 00101db0 */

void param_printf(undefined4 param_1,undefined8 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00101dd0 */

void call_printf(void)

{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103698);
 return;
}



/* Function: FUN_00101dec @ 00101dec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101dec(undefined8 param_1)

{
 int iVar1;
 int iStack_10;
 int iStack_c;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&iStack_10,&iStack_c,&__stack_chk_guard,0);
 if (iVar1 == 2) {
 iStack_10 = iStack_10 + iStack_c;
 }
 else {
 iStack_10 = -1;
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_scanf @ 00101df0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_scanf(undefined8 param_1)

{
 int iVar1;
 int local_10;
 int iStack_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&iStack_c,&__stack_chk_guard,0);
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}

/* Function: call_scanf @ 00101e60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_scanf(void)

{
 int iVar1;
 int local_10;
 int iStack_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_10,&iStack_c,&__stack_chk_guard,0);
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_fopen_fclose @ 00101ee0 */

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



/* Function: call_fopen_fclose @ 00101f30 */

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



/* Function: param_fread_fwrite @ 00101f90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 undefined8 uVar2;
 long local_28 [2];
 short local_18;
 char local_16;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_28,1,0x12,__s);
 *(undefined1 *)((long)local_28 + sVar1) = 0;
 fclose(__s);
 unlink(param_1);
 if ((((sVar1 == 0x12) && (local_28[0] == 0x68636e65426e6942)) &&
 (local_28[1] == 0x6144207473655420)) && ((local_18 == 0x6174 && (local_16 == '\0')))) {
 uVar2 = 0x2a;
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
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_fread_fwrite @ 001020e0 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: FUN_001020ec @ 001020ec */

int FUN_001020ec(long param_1)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 if (param_1 != 0) {
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar3;
 } while (piVar3 != __ptr + param_1);
 }
 iVar1 = (__ptr + param_1)[-1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: param_malloc_free @ 001020f0 */

int param_malloc_free(long param_1)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 if (param_1 != 0) {
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar3;
 } while (piVar3 != __ptr + param_1);
 }
 iVar1 = (__ptr + param_1)[-1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00102160 */

int call_malloc_free(void)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 100);
 iVar1 = *__ptr + __ptr[9];
 free(__ptr);
 }
 return iVar1;
}



/* Function: param_memset @ 001021c0 */

int param_memset(byte *param_1,size_t param_2)

{
 int iVar1;
 byte *pbVar2;
 byte *pbVar3;
 
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar1 = 0;
 pbVar3 = param_1;
 do {
 pbVar2 = pbVar3 + 1;
 iVar1 = iVar1 + (uint)*pbVar3;
 pbVar3 = pbVar2;
 } while (pbVar2 != param_1 + param_2);
 return iVar1;
 }
 return 0;
}



/* Function: call_memset @ 00102220 */

undefined8 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00102230 */

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



/* Function: call_strchr_strstr @ 00102290 */

undefined8 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 001022a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 int iVar2;
 FILE *__stream;
 int *__ptr;
 undefined8 uVar3;
 int *piVar4;
 int local_10;
 int iStack_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(&DAT_00103700);
 __printf_chk(1,DAT_00103728,8);
 uVar1 = call_strcmp();
 __printf_chk(1,DAT_00103748,uVar1);
 __printf_chk(1,DAT_00103768,0xc);
 __printf_chk(1,DAT_00103788,0x5a);
 uVar1 = call_memcmp();
 __printf_chk(1,DAT_001037a8,uVar1);
 uVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103698);
 __printf_chk(1,DAT_001037c8,uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_10,&iStack_c);
 if (iVar2 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 __printf_chk(1,DAT_001037e8,local_10);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar3 = 0x2a;
 if (-1 < iVar2) goto LAB_001023d8;
 }
 uVar3 = 0xffffffff;
LAB_001023d8:
 __printf_chk(1,DAT_00103808,uVar3);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,DAT_00103828,uVar1);
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar4 = __ptr;
 do {
 *piVar4 = iVar2;
 iVar2 = iVar2 + 10;
 piVar4 = piVar4 + 1;
 } while (iVar2 != 100);
 iVar2 = *__ptr + __ptr[9];
 free(__ptr);
 }
 __printf_chk(1,DAT_00103848,iVar2);
 uVar1 = call_memset();
 __printf_chk(1,DAT_00103868,uVar1);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00103888,0xf);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_linux_syscall @ 001024c0 */

ulong param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 return uVar1 & 0xffffffff;
 }
 piVar2 = __errno_location();
 return (ulong)(uint)-*piVar2;
}



/* Function: call_linux_syscall @ 00102520 */

undefined4 call_linux_syscall(void)

{
 ulong uVar1;
 int *piVar2;
 undefined4 uVar3;
 
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 return 0x2a;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}



/* Function: param_win32_api @ 00102580 */

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
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: FUN_001025ec @ 001025ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001025ec(void)

{
 int iVar1;
 undefined4 uVar2;
 long lStack_58;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iVar1 = stat("/etc/passwd",(stat *)&stack0xffffffffffffff78);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (lStack_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: call_win32_api @ 001025f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 long local_58;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = stat("/etc/passwd",(stat *)&stack0xffffffffffffff78);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: param_fork_exec @ 00102664 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_fork_exec(char *param_1,undefined8 param_2)

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
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_c >> 8 & 0xff, (local_c & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: call_fork_exec @ 00102720 */

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



/* Function: FUN_0010274c @ 0010274c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010274c(void)

{
 int iVar1;
 __pid_t _Var2;
 undefined4 uVar3;
 ssize_t sVar4;
 int iStack_30;
 int iStack_2c;
 undefined1 auStack_28 [32];
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iVar1 = pipe(&iStack_30);
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
 close(iStack_30);
 write(iStack_2c,"HelloPipe",9);
 close(iStack_2c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(iStack_2c);
 sVar4 = read(iStack_30,auStack_28,0x1f);
 auStack_28[sVar4] = 0;
 close(iStack_30);
 wait((void *)0x0);
 uVar3 = 0x2a;
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
 }
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar3,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: param_pipe_communication @ 00102750 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 undefined4 uVar3;
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
 wait((void *)0x0);
 uVar3 = 0x2a;
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar3,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: param_socket_create @ 00102844 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_socket_create(void)

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
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_shmget_shmat @ 00102954 */

undefined8 param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__shmaddr;
 
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
 if (__shmaddr != (char *)0xffffffffffffffff) {
 strncpy(__shmaddr,"SharedMemory",0xd);
 shmdt(__shmaddr);
 shmctl(iVar1,0,(void *)0x0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}



/* Function: FUN_00102a0c @ 00102a0c */

undefined4 FUN_00102a0c(void)

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



/* Function: call_shmget_shmat @ 00102a10 */

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



/* Function: param_signal_handling @ 00102a30 */

__sighandler_t param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = (__sighandler_t)0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar2 = 1000;
 do {
 usleep(1000);
 iVar2 = iVar2 + -1;
 if (signal_received != 0) break;
 } while (iVar2 != 0);
 }
 if (signal_received == 0) {
 p_Var1 = (__sighandler_t)0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar2 = 2000;
 do {
 usleep(1000);
 iVar2 = iVar2 + -1;
 if (signal_received != 0) break;
 } while (iVar2 != 0);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 p_Var1 = (__sighandler_t)0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 p_Var1 = (__sighandler_t)0x2a;
 }
 }
 else {
 p_Var1 = (__sighandler_t)0xfffffffc;
 }
 }
 }
 return p_Var1;
}



/* Function: test_system_calls @ 00102b54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_system_calls(void)

{
 int iVar1;
 undefined4 uVar2;
 ulong uVar3;
 int *piVar4;
 undefined4 uVar5;
 long local_58;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(&DAT_001038f0);
 uVar3 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if ((int)uVar3 < 0) {
 piVar4 = __errno_location();
 uVar2 = 0x2a;
 if (0 < *piVar4) {
 uVar2 = 0xffffffff;
 }
 }
 else {
 syscall(0x39,uVar3 & 0xffffffff);
 uVar2 = 0x2a;
 }
 __printf_chk(1,DAT_00103910,uVar2);
 iVar1 = stat("/etc/passwd",(stat *)&stack0xffffffffffffff78);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 __printf_chk(1,DAT_00103930,uVar2);
 iVar1 = param_fork_exec("/bin/true",0);
 uVar5 = 0x2a;
 uVar2 = uVar5;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,DAT_00103950,uVar2);
 uVar2 = param_pipe_communication();
 __printf_chk(1,DAT_00103970,uVar2);
 uVar2 = param_socket_create();
 __printf_chk(1,DAT_00103990,uVar2);
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar5 = 0xffffffff;
 }
 __printf_chk(1,DAT_001039b0,uVar5);
 uVar2 = param_signal_handling();
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_001039d0);
 return;
}



/* Function: FUN_00102ccc @ 00102ccc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00102ccc(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uStack_1c;
 pthread_t pStack_18;
 undefined4 *puStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 uStack_1c = param_1;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,thread_compute,&uStack_1c);
 if (iVar1 == 0) {
 pthread_join(pStack_18,&puStack_10);
 uVar2 = *puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: param_pthread_create @ 00102cd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1c;
 pthread_t local_18;
 undefined4 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_pthread_create @ 00102d64 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_pthread_create(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1c;
 pthread_t local_18;
 undefined4 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_1c = 7;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_pthread_join @ 00102e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_join(void)

{
 long lVar1;
 int iVar2;
 pthread_t *__newthread;
 long lVar3;
 pthread_t *__arg;
 pthread_t *ppVar4;
 int iVar5;
 pthread_t local_48 [4];
 int aiStack_28 [8];
 long local_8;
 
 __arg = local_48 + 3;
 iVar5 = 3;
 ppVar4 = local_48;
 local_8 = ___stack_chk_guard;
 aiStack_28[6] = 0;
 aiStack_28[0] = 0;
 aiStack_28[1] = 0xb;
 local_48[3] = 0xa00000001;
 aiStack_28[4] = 0x15;
 aiStack_28[5] = 0x1e;
 aiStack_28[2] = 0x14;
 aiStack_28[3] = 0;
 __newthread = ppVar4;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar2 != 0) {
 iVar5 = -1;
 goto LAB_00102ec0;
 }
 __newthread = __newthread + 1;
 __arg = (pthread_t *)((long)__arg + 0xc);
 iVar5 = iVar5 + -1;
 } while (iVar5 != 0);
 iVar5 = 0;
 lVar3 = 0;
 do {
 iVar2 = pthread_join(*ppVar4,(void **)0x0);
 if (iVar2 != 0) {
 iVar5 = -2;
 break;
 }
 lVar1 = lVar3 + 0xc;
 ppVar4 = ppVar4 + 1;
 iVar5 = iVar5 + *(int *)((long)aiStack_28 + lVar3);
 lVar3 = lVar1;
 } while (lVar1 != 0x24);
LAB_00102ec0:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar5;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_mutex_lock @ 00102f14 */

undefined4 param_mutex_lock(ulong param_1,int param_2)

{
 pthread_t *ppVar1;
 int iVar2;
 undefined4 uVar3;
 pthread_t *__ptr;
 pthread_t *ppVar4;
 pthread_t *ppVar5;
 int local_4;
 
 local_4 = param_2;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 ppVar4 = __ptr;
 do {
 ppVar1 = ppVar4 + 1;
 iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_4);
 if (iVar2 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar4 = ppVar1;
 ppVar5 = __ptr;
 } while (ppVar1 != __ptr + (param_1 & 0xffffffff));
 do {
 ppVar4 = ppVar5 + 1;
 pthread_join(*ppVar5,(void **)0x0);
 ppVar5 = ppVar4;
 } while (ppVar4 != __ptr + (param_1 & 0xffffffff));
 }
 free(__ptr);
 uVar3 = 0x2a;
 if (shared_counter != (int)param_1 * local_4) {
 uVar3 = 0xfffffffd;
 }
 }
 return uVar3;
}



/* Function: call_mutex_lock @ 00103020 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: FUN_0010302c @ 0010302c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010302c(void)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t pStack_20;
 pthread_t pStack_18;
 undefined4 *puStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&pStack_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(pStack_18,&puStack_10);
 pthread_join(pStack_20,(void **)0x0);
 uVar2 = *puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xfffffffe;
 pthread_cancel(pStack_18);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: param_condition_variable @ 00103030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t local_20;
 pthread_t local_18;
 undefined4 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 pthread_join(local_20,(void **)0x0);
 uVar2 = *local_10;
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
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_atomic_ops @ 00103110 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_atomic_ops(ulong param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 long lVar4;
 undefined4 local_14;
 pthread_t local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_14 = param_2;
 __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter = 0;
 if ((int)param_1 < 1) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 }
 else {
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001031c0;
 }
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
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
LAB_001031c0:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return;
}



/* Function: call_atomic_ops @ 001032b0 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: FUN_001032bc @ 001032bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001032bc(uint param_1)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar3;
 ulong uVar4;
 ulong uVar5;
 undefined8 *puVar6;
 pthread_t *__newthread;
 long lVar8;
 int iVar9;
 ulong uVar10;
 int *piStack_10;
 long lStack_8;
 undefined8 *puVar7;
 
 uVar10 = (ulong)(int)param_1;
 lStack_8 = ___stack_chk_guard;
 uVar5 = -(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (ulong)param_1 << 3;
 __ptr = malloc(uVar5);
 __ptr_00 = malloc(uVar5);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined8 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if ((int)param_1 < 1) {
 iVar9 = 0;
 iVar1 = 0;
 }
 else {
 uVar5 = 0;
 do {
 pvVar3 = malloc(0x10);
 __ptr_00[uVar5] = pvVar3;
 uVar4 = uVar5 & 0xffffffff;
 uVar5 = uVar5 + 1;
 __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4);
 } while (uVar5 != uVar10);
 uVar5 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar5]);
 if (iVar1 != 0) {
 puVar6 = __ptr_00;
 do {
 puVar7 = puVar6 + 1;
 free((void *)*puVar6);
 puVar6 = puVar7;
 } while (__ptr_00 + uVar5 + 1 != puVar7);
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001033d8;
 }
 uVar5 = uVar5 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar10);
 iVar9 = 0;
 lVar8 = 0;
 iVar1 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar8),&piStack_10);
 iVar1 = iVar1 + *piStack_10;
 iVar9 = iVar9 + piStack_10[1];
 free(piStack_10);
 puVar6 = (undefined8 *)((long)__ptr_00 + lVar8);
 lVar8 = lVar8 + 8;
 free((void *)*puVar6);
 } while (lVar8 != uVar5 * 8);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (param_1 * 100 != iVar1 || param_1 * 0x96 != iVar9) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001033d8:
 if (lStack_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: param_thread_local_storage @ 001032c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_thread_local_storage(uint param_1)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar3;
 ulong uVar4;
 ulong uVar5;
 undefined8 *puVar6;
 pthread_t *__newthread;
 long lVar8;
 int iVar9;
 ulong uVar10;
 int *local_10;
 long local_8;
 undefined8 *puVar7;
 
 uVar10 = (ulong)(int)param_1;
 local_8 = ___stack_chk_guard;
 uVar5 = -(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (ulong)param_1 << 3;
 __ptr = malloc(uVar5);
 __ptr_00 = malloc(uVar5);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined8 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if ((int)param_1 < 1) {
 iVar9 = 0;
 iVar1 = 0;
 }
 else {
 uVar5 = 0;
 do {
 pvVar3 = malloc(0x10);
 __ptr_00[uVar5] = pvVar3;
 uVar4 = uVar5 & 0xffffffff;
 uVar5 = uVar5 + 1;
 __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4);
 } while (uVar5 != uVar10);
 uVar5 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar5]);
 if (iVar1 != 0) {
 puVar6 = __ptr_00;
 do {
 puVar7 = puVar6 + 1;
 free((void *)*puVar6);
 puVar6 = puVar7;
 } while (__ptr_00 + uVar5 + 1 != puVar7);
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001033d8;
 }
 uVar5 = uVar5 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar10);
 iVar9 = 0;
 lVar8 = 0;
 iVar1 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar8),&local_10);
 iVar1 = iVar1 + *local_10;
 iVar9 = iVar9 + local_10[1];
 free(local_10);
 puVar6 = (undefined8 *)((long)__ptr_00 + lVar8);
 lVar8 = lVar8 + 8;
 free((void *)*puVar6);
 } while (lVar8 != uVar5 * 8);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (param_1 * 100 != iVar1 || param_1 * 0x96 != iVar9) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001033d8:
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_thread_local_storage @ 001034a4 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: FUN_001034ac @ 001034ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001034ac(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uStack_1c;
 pthread_t pStack_18;
 undefined4 *puStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 puts(&DAT_00103a00);
 uStack_1c = 7;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,thread_compute,&uStack_1c);
 if (iVar1 == 0) {
 pthread_join(pStack_18,&puStack_10);
 uVar2 = *puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,DAT_00103a20,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,DAT_00103a40,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,DAT_00103a60,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,DAT_00103a80,uVar2);
 uVar2 = param_atomic_ops(4,500);
 __printf_chk(1,DAT_00103aa0,uVar2);
 uVar2 = param_thread_local_storage(4);
 if (lStack_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00103ac0);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_thread_concurrency @ 001034b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1c;
 pthread_t local_18;
 undefined4 *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(&DAT_00103a00);
 local_1c = 7;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00103a20,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_00103a40,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,&DAT_00103a60,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_00103a80,uVar2);
 uVar2 = param_atomic_ops(4,500);
 __printf_chk(1,&DAT_00103aa0,uVar2);
 uVar2 = param_thread_local_storage(4);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00103ac0);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,uVar2,0);
}



/* Function: __aarch64_cas4_acq_rel @ 001035f0 */

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



/* Function: __aarch64_ldadd4_acq_rel @ 00103630 */

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




/* Total functions decompiled: 82 */
