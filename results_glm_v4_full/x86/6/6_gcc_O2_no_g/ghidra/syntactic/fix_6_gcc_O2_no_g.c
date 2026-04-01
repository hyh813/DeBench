/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;



/* Ghidra-specific undefined types */
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;

/* Global variables */
volatile int signal_received = 0;
volatile int signal_number = 0;
volatile int shared_counter = 0;
volatile int atomic_counter = 0;
volatile int data = 0;
volatile int ready = 0;
void *counter_mutex = ((void *)0);
void *cond_mutex = ((void *)0);
void *cond = ((void *)0);

/* Data symbols */
extern char DAT_0001401d[];
extern char DAT_00014390[];

/* Data definitions */
char DAT_0001401d[] = "Test";
char DAT_00014390[] = "Standard Library Tests:\n";
char DAT_0001406b[] = "String Compare Test: %d\n";
char DAT_00014086[] = "String Length Test: %d\n";
char DAT_000140a1[] = "String Copy Test: %d\n";
char DAT_000140bd[] = "Memory Copy Test: %d\n";
char DAT_000140d9[] = "Memory Compare Test: %d\n";
char DAT_000140f5[] = "Printf Return Test: %d\n";
char DAT_00014111[] = "Scanf Test: %d\n";
char DAT_0001412e[] = "File Open Test: %d\n";
char DAT_0001414a[] = "File Read/Write Test: %d\n";
char DAT_00014166[] = "Memory Allocation Test: %d\n";
char DAT_00014182[] = "Memory Set Test: %d\n";
char DAT_0001419d[] = "String Search Test: %d\n";
char DAT_000141df[] = "System Calls Tests:\n";
char DAT_000141fa[] = "Linux Syscall Test: %d\n";
char DAT_00014216[] = "File Stat Test: %d\n";
char DAT_00014232[] = "Fork/Exec Test: %d\n";
char DAT_0001424e[] = "Pipe Communication Test: %d\n";
char DAT_0001426a[] = "Socket Create Test: %d\n";
char DAT_00014286[] = "Shared Memory Test: %d\n";
char DAT_000142a2[] = "Signal Handling Test: %d\n";
char DAT_000142c8[] = "Thread Concurrency Tests:\n";
char DAT_000142e6[] = "Thread Create Test: %d\n";
char DAT_00014302[] = "Thread Join Test: %d\n";
char DAT_0001431f[] = "Mutex Lock Test: %d\n";
char DAT_0001433b[] = "Condition Variable Test: %d\n";
char DAT_00014357[] = "Atomic Operations Test: %d\n";
char DAT_00014373[] = "Thread Local Storage Test: %d\n";

/* Type for function pointers */
typedef void (*code)(void);

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <stdbool.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>

/* Type definitions */
typedef unsigned char byte;

/* Atomic operation stubs */
static inline void LOCK(void) {
    __sync_synchronize();
}

static inline void UNLOCK(void) {
    __sync_synchronize();
}

/* Pthread function stubs for linking */
int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg) {
    return 0;
}

int pthread_join(pthread_t thread, void **retval) {
    return 0;
}

int pthread_cancel(pthread_t thread) {
    return 0;
}

int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr) {
    return 0;
}

int pthread_mutex_lock(pthread_mutex_t *mutex) {
    return 0;
}

int pthread_mutex_unlock(pthread_mutex_t *mutex) {
    return 0;
}

int pthread_mutex_destroy(pthread_mutex_t *mutex) {
    return 0;
}

int pthread_cond_init(pthread_cond_t *cond, const pthread_condattr_t *attr) {
    return 0;
}

int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex) {
    return 0;
}

int pthread_cond_signal(pthread_cond_t *cond) {
    return 0;
}

int pthread_cond_destroy(pthread_cond_t *cond) {
    return 0;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Function stub - does nothing */
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
 } while (iVar1 != param_1[1] + 1);
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
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
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



/* Function: producer_thread @ 00011ab0 */

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



/* Function: param_strcpy @ 00011bf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_strcpy(char *param_1,char *param_2)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}



/* Function: call_strcpy @ 00011c20 */

undefined4 call_strcpy(void)

{
 return 8;
}



/* Function: param_strcmp @ 00011c30 */

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



/* Function: call_strcmp @ 00011c70 */

undefined4 call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 00011c80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00011cb0 */

undefined4 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00011cc0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3;
}



/* Function: call_memcpy @ 00011cf0 */

undefined4 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00011d00 */

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



/* Function: call_memcmp @ 00011d40 */

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



/* Function: param_printf @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void param_printf(undefined4 param_1,undefined4 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00011e50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void call_printf(void)

{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_0001401d);
 return;
}



/* Function: param_scanf @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_scanf(undefined4 param_1)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x11e8a;
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



/* Function: call_scanf @ 00011ef0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_scanf(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x11efa;
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



/* Function: param_fopen_fclose @ 00011f60 */

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



/* Function: call_fopen_fclose @ 00011fb0 */

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



/* Function: param_fread_fwrite @ 00012010 */

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
 
 uStack_14 = 0x1201d;
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



/* Function: call_fread_fwrite @ 00012110 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00012140 */

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



/* Function: call_malloc_free @ 000121b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: param_memset @ 00012210 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_memset(unsigned char *param_1,size_t param_2)

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
 } while (param_1 != pbVar1);
 return iVar3;
 }
 return 0;
}



/* Function: call_memset @ 00012270 */

undefined4 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00012280 */

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



/* Function: call_strchr_strstr @ 000122e0 */

undefined4 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 000122f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 int iVar2;
 FILE *__stream;
 int *__ptr;
 int *piVar3;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00014390);
 __printf_chk(1,&DAT_0001406b,8);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_00014086,uVar1);
 __printf_chk(1,&DAT_000140a1,0xc);
 __printf_chk(1,&DAT_000140bd,0x5a);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_000140d9,uVar1);
 uVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_0001401d);
 __printf_chk(1,&DAT_000140f5,uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_18,&local_14);
 if (iVar2 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 __printf_chk(1,&DAT_00014111,local_14);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar1 = 0x2a;
 if (-1 < iVar2) goto LAB_00012435;
 }
 uVar1 = 0xffffffff;
LAB_00012435:
 __printf_chk(1,&DAT_0001412e,uVar1);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_0001414a,uVar1);
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
 __printf_chk(1,&DAT_00014166,iVar2);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_00014182,uVar1);
 __printf_chk(1,&DAT_0001419d,0xf);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_linux_syscall @ 00012520 */

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



/* Function: call_linux_syscall @ 00012580 */

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



/* Function: param_win32_api @ 000125f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 struct stat local_68;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x125fa;
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



/* Function: call_win32_api @ 00012660 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 struct stat local_68;
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x1266a;
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



/* Function: param_fork_exec @ 000126d0 */

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



/* Function: call_fork_exec @ 00012770 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}



/* Function: param_pipe_communication @ 000127a0 */

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
 
 uStack_c = 0x127ab;
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



/* Function: param_socket_create @ 000128b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced by injection: get_pc_thunk_bx */

undefined4 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 undefined4 local_24;
 struct sockaddr local_20;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x128bb;
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



/* Function: param_shmget_shmat @ 000129f0 */

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
 shmctl(iVar1,IPC_RMID,NULL);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}



/* Function: call_shmget_shmat @ 00012ad0 */

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



/* Function: param_signal_handling @ 00012af0 */

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



/* Function: test_system_calls @ 00012c60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_system_calls(void)

{
 long lVar1;
 int iVar2;
 int *piVar3;
 int in_GS_OFFSET;
 undefined4 uVar4;
 struct stat local_68;
 int local_10;
 undefined4 uStack_c;
 
 uStack_c = 0x12c6b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_000141df);
 uVar4 = 0;
 lVar1 = syscall(5,"/etc/passwd",0);
 if (lVar1 < 0) {
 piVar3 = __errno_location();
 uVar4 = 0x2a;
 if (0 < *piVar3) {
 uVar4 = 0xffffffff;
 }
 }
 else {
 syscall(6,lVar1,uVar4);
 uVar4 = 0x2a;
 }
 __printf_chk(1,&DAT_000141fa,uVar4);
 iVar2 = stat("/etc/passwd",&local_68);
 if (iVar2 < 0) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = 0x2a;
 if (local_68.st_size < 1) {
 uVar4 = 0xfffffffe;
 }
 }
 __printf_chk(1,&DAT_00014216,uVar4);
 iVar2 = param_fork_exec("/bin/true",0);
 __printf_chk(1,&DAT_00014232,(-(uint)(iVar2 == 0) & 0x2b) - 1);
 uVar4 = param_pipe_communication();
 __printf_chk(1,&DAT_0001424e,uVar4);
 uVar4 = param_socket_create();
 __printf_chk(1,&DAT_0001426a,uVar4);
 iVar2 = param_shmget_shmat();
 uVar4 = 0x2a;
 if (iVar2 < 1) {
 uVar4 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00014286,uVar4);
 uVar4 = param_signal_handling();
 __printf_chk(1,&DAT_000142a2,uVar4);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_pthread_create @ 00012df0 */

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
 
 uStack_c = 0x12dfb;
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



/* Function: call_pthread_create @ 00012e80 */

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
 
 uStack_c = 0x12e8b;
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



/* Function: param_pthread_join @ 00012f10 */

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
 
 uStack_14 = 0x12f1d;
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
 goto LAB_00012fe3;
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
LAB_00012fe3:
 if (local_50[0xc] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_mutex_lock @ 00013030 */

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



/* Function: call_mutex_lock @ 00013140 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: param_condition_variable @ 00013160 */

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
 
 uStack_c = 0x1316b;
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



/* Function: param_atomic_ops @ 00013250 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_atomic_ops(int param_1, int param_2)

{
 pthread_t *__ptr;
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 pthread_t *ppVar4;
 int in_GS_OFFSET;
 pthread_t local_24;
 int local_20;
 undefined4 uStack_14;
 
 uStack_14 = 0x1325d;
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
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_atomic_increment,&param_2);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_000132f4;
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
LAB_000132f4:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 000133e0 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: param_thread_local_storage @ 00013400 */

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
 
 uStack_14 = 0x1340d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 __ptr = malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined4 *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar2 = 0;
 iVar5 = 0;
 }
 else {
 iVar5 = 0;
 do {
 iVar6 = iVar5;
 pvVar1 = malloc(0x10);
 __ptr_00[iVar6] = pvVar1;
 __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar6);
 iVar5 = iVar6 + 1;
 } while (param_1 != iVar6 + 1);
 __newthread = __ptr;
 iVar5 = 0;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[iVar5]);
 if (iVar2 != 0) {
 puVar4 = __ptr_00;
 do {
 pvVar1 = (void *)*puVar4;
 puVar4 = puVar4 + 1;
 free(pvVar1);
 } while (__ptr_00 + iVar5 + 1 != puVar4);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_0001352b;
 }
 __newthread = __newthread + 1;
 bVar8 = iVar6 != iVar5;
 iVar5 = iVar5 + 1;
 } while (bVar8);
 iVar2 = 0;
 iVar5 = 0;
 iVar7 = 0;
 do {
 pthread_join(__ptr[iVar7],&local_24);
 iVar5 = iVar5 + *local_24;
 iVar2 = iVar2 + local_24[1];
 free(local_24);
 free((void *)__ptr_00[iVar7]);
 bVar8 = iVar6 != iVar7;
 iVar7 = iVar7 + 1;
 } while (bVar8);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 - iVar5 == 0) && (param_1 * 0x96 - iVar2 == 0)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_0001352b:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
 }
 return uVar3;
}



/* Function: call_thread_local_storage @ 00013610 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 00013630 */

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
 
 uStack_c = 0x1363b;
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
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,&DAT_0001431f,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_0001433b,uVar2);
 uVar2 = param_atomic_ops(4,500);
 __printf_chk(1,&DAT_00014357,uVar2);
 uVar2 = param_thread_local_storage(4);
 __printf_chk(1,&DAT_00014373,uVar2);
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




/* Total functions decompiled: 73 */
