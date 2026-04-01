/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/auxv.h>

/* Missing function declarations */
int __isoc99_sscanf(const char *str, const char *format, ...);
void LOAcquire(void);
void LORelease(void);
struct shmid_ds {
    unsigned long shm_segsz;
    time_t shm_atime;
    time_t shm_dtime;
    time_t shm_ctime;
    unsigned short shm_cpid;
    unsigned short shm_lpid;
    unsigned short shm_nattch;
    unsigned short shm_flag;
    key_t shm_key;
    id_t shm_id;
};

typedef struct shmid_ds shmid_ds;

/* ARM64 exclusive monitor functions */
static inline int ExclusiveMonitorPass(void *addr, int type) {
    return 0;
}
static inline char ExclusiveMonitorsStatus(void) {
    return 0;
}
#include <sys/syscall.h>
#include <errno.h>
#include <stdarg.h>
#include <sys/auxv.h>

/* Forward declarations */
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
unsigned long __getauxval(unsigned long);
extern char __aarch64_have_lse_atomics;
void __cxa_finalize(void *);
extern void *__dso_handle;
void deregister_tm_clones(void);
char completed_0;
int __aarch64_ldadd4_acq_rel(int, int *);
int __aarch64_cas4_acq_rel(int, int, int *);

/* String constants */
char DAT_00103e60[] = "Test";
char DAT_00103ec8[] = "Standard Library Tests\n";
char DAT_00103ef0[] = "printf: %d\n";
char DAT_00103f10[] = "printf: %d\n";
char DAT_00103f30[] = "printf: %d\n";
char DAT_00103f50[] = "printf: %d\n";
char DAT_00103f70[] = "memcmp: %d\n";
char DAT_00103f90[] = "printf: %d\n";
char DAT_00103fb0[] = "scanf: %d\n";
char DAT_00103fd0[] = "fopen: %d\n";
char DAT_00103ff0[] = "fread/fwrite: %d\n";
char DAT_00104010[] = "malloc: %d\n";
char DAT_00104030[] = "memset: %d\n";
char DAT_00104050[] = "strchr/strstr: %d\n";
char DAT_001040b8[] = "System Call Tests\n";
char DAT_001040d8[] = "syscall: %d\n";
char DAT_001040f8[] = "stat: %d\n";
char DAT_00104118[] = "fork/exec: %d\n";
char DAT_00104138[] = "pipe: %d\n";
char DAT_00104158[] = "socket: %d\n";
char DAT_00104178[] = "shm: %d\n";
char DAT_00104198[] = "signal: done\n";
char DAT_001041b8[] = "Thread Concurrency Tests\n";
char DAT_001041d8[] = "pthread_create: %d\n";
char DAT_001041f8[] = "pthread_join: %d\n";
char DAT_00104218[] = "mutex: %d\n";
char DAT_00104238[] = "cond_var: %d\n";
char DAT_00104258[] = "atomic: %d\n";
char DAT_00104278[] = "TLS: done\n";

/* Compiler builtins */
#define CONCAT44(a,b) (((uint64_t)(a) << 32) | (uint32_t)(b))
#define CONCAT12(a,b) (((uint32_t)(a) << 16) | (uint16_t)(b))

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
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef unsigned long ulong;
typedef pid_t __pid_t;
typedef unsigned char byte;
typedef int atomic_int;

typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;

struct sockaddr_in {
    short sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr {
    short sa_family;
    char sa_data[14];
};

typedef struct sockaddr sockaddr;

uintptr_t __stack_chk_guard;
uintptr_t ___stack_chk_guard;

typedef struct _ThreadData {
    int start;
    int end;
    int result;
} ThreadData;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001013a0 @ 001013a0 */

void FUN_001013a0(void)

{
 return;
}



/* Function: main @ 001017c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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

int atomic_counter;
int shared_counter;
int signal_received;
int signal_number;
int ready;
int data;
char __aarch64_have_lse_atomics;
int counter_mutex;
pthread_cond_t cond;
pthread_mutex_t cond_mutex;
char completed_0 = 0;
void *__dso_handle;
int tpidr_el0;

void __stack_chk_fail(void);

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: thread_sum @ 00101980 */

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
 
 /* Unresolved local var: ThreadData * data@[DW_OP_reg0(x0)]
 Unresolved local var: int i@[???] */
 iVar4 = *(int *)arg;
 iVar2 = *(int *)((long)arg + 4);
 *(undefined4 *)((long)arg + 8) = 0;
 if (iVar2 < iVar4) {
 return (void *)0x0;
 }
 uVar1 = (iVar2 - iVar4) + 1;
 if ((uint)(iVar2 - iVar4) < 8) {
 iVar6 = 0;
 }
 else {
 iVar5 = 0;
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 uVar3 = 0;
 iVar6 = iVar4;
 iVar10 = iVar4 + 1;
 iVar11 = iVar4 + 2;
 iVar12 = iVar4 + 3;
 do {
 uVar3 = uVar3 + 1;
 iVar5 = iVar5 + iVar6;
 iVar7 = iVar7 + iVar10;
 iVar8 = iVar8 + iVar11;
 iVar9 = iVar9 + iVar12;
 iVar6 = iVar6 + 4;
 iVar10 = iVar10 + 4;
 iVar11 = iVar11 + 4;
 iVar12 = iVar12 + 4;
 } while (uVar1 >> 2 != uVar3);
 iVar6 = iVar5 + iVar7 + iVar8 + iVar9;
 iVar4 = iVar4 + (uVar1 & 0xfffffffc);
 iVar10 = iVar6;
 if (uVar1 == (uVar1 & 0xfffffffc)) goto LAB_00101a64;
 }
 iVar10 = iVar6 + iVar4;
 if (iVar4 + 1 <= iVar2) {
 iVar10 = iVar6 + iVar4 + iVar4 + 1;
 if (iVar4 + 2 <= iVar2) {
 iVar10 = iVar10 + iVar4 + 2;
 if (iVar4 + 3 <= iVar2) {
 iVar10 = iVar10 + iVar4 + 3;
 if (iVar4 + 4 <= iVar2) {
 iVar10 = iVar10 + iVar4 + 4;
 if (iVar4 + 5 <= iVar2) {
 iVar10 = iVar10 + iVar4 + 5;
 if (iVar4 + 6 <= iVar2) {
 iVar6 = iVar10 + iVar4 + 6;
 iVar10 = iVar6 + iVar4 + 7;
 if (iVar2 < iVar4 + 7) {
 iVar10 = iVar6;
 }
 }
 }
 }
 }
 }
 }
LAB_00101a64:
 *(int *)((long)arg + 8) = iVar10;
 return (void *)0x0;
}



/* Function: thread_compute @ 00101a80 */

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * input@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ret@[???] */
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: thread_increment @ 00101ab0 */

void * thread_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 iVar2 = iVar2 + 1;
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return (void *)0x0;
}



/* Function: consumer_thread @ 00101b24 */

void * consumer_thread(void *arg)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int received@[???]
 Unresolved local var: int * ret@[???] */
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



/* Function: producer_thread @ 00101ba0 */

void * producer_thread(void *arg)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 ready = 1;
 data = 0x2a;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: thread_atomic_increment @ 00101c00 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int iterations@[???] */
 iVar2 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar2) {
 /* Unresolved local var: int expected@[???]
 Unresolved local var: int desired@[???] */
 iVar3 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 iVar1 = iVar3 + 1;
 __aarch64_cas4_acq_rel(iVar3,iVar3 + 1000,&atomic_counter);
 iVar3 = iVar1;
 } while (iVar2 != iVar1);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00101c70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 atomic_counter = atomic_counter + 100;
 return (void *)0x0;
}



/* Function: thread_tls_test @ 00101c90 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x20),arg,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}



/* Function: param_fork_exec @ 00101ce0 */

int param_fork_exec(char *prog,char *arg)

{
 /* Unresolved local var: pid_t pid@[???] */
 execl(prog,prog,arg,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
}



/* Function: param_thread_local_storage @ 00101d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_thread_local_storage(int thread_count)

{
 long lVar1;
 undefined8 *puVar2;
 int iVar3;
 pthread_t *__ptr;
 void *__ptr_00;
 void *pvVar4;
 ulong uVar5;
 int iVar6;
 ulong uVar7;
 long lVar8;
 long lVar9;
 int iVar10;
 pthread_t *__newthread;
 void *ret;
 long local_8;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 local_8 = ___stack_chk_guard;
 __ptr = malloc(0x20);
 __ptr_00 = malloc(0x20);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void *)0x0) {
 iVar3 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 uVar7 = 0;
 do {
 pvVar4 = malloc(0x10);
 *(void **)((long)__ptr_00 + uVar7 * 8) = pvVar4;
 uVar5 = uVar7 & 0xffffffff;
 uVar7 = uVar7 + 1;
 __snprintf_chk(pvVar4,0x10,1,0x10,"Thread-%d",uVar5);
 } while (uVar7 != 4);
 /* Unresolved local var: int i@[???] */
 lVar9 = 0;
 __newthread = __ptr;
 do {
 iVar3 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)__ptr_00 + lVar9 * 8));
 if (iVar3 != 0) {
 lVar8 = 0;
 do {
 /* Unresolved local var: int j@[???] */
 lVar1 = lVar8 * 8;
 lVar8 = lVar8 + 1;
 free(*(void **)((long)__ptr_00 + lVar1));
 } while ((int)lVar8 <= (int)lVar9);
 free(__ptr_00);
 free(__ptr);
 iVar3 = -2;
 goto LAB_00101e48;
 }
 lVar9 = lVar9 + 1;
 __newthread = __newthread + 1;
 } while (lVar9 != 4);
 iVar10 = 0;
 lVar9 = 0;
 iVar6 = 0;
 do {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(*(pthread_t *)((long)__ptr + lVar9),&ret);
 iVar6 = iVar6 + *(int *)ret;
 iVar10 = iVar10 + *(int *)((long)ret + 4);
 free(ret);
 puVar2 = (undefined8 *)((long)__ptr_00 + lVar9);
 lVar9 = lVar9 + 8;
 free((void *)*puVar2);
 } while (lVar9 != 0x20);
 free(__ptr_00);
 free(__ptr);
 iVar3 = 0x2a;
 if (iVar6 != 400 || iVar10 != 600) {
 iVar3 = -3;
 }
 }
LAB_00101e48:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_atomic_ops @ 00101ed0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 int iVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 long lVar4;
 undefined4 local_14;
 pthread_t load_store_tid;
 long local_8;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int final_value@[???] */
 local_8 = ___stack_chk_guard;
 local_14 = 500;
 __ptr = malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 atomic_counter = 0;
 /* Unresolved local var: int i@[???] */
 ppVar3 = __ptr;
 do {
 iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar2 != 0) {
 free(__ptr);
 iVar2 = -2;
 goto LAB_00101fc8;
 }
 ppVar3 = ppVar3 + 1;
 } while (__ptr + 4 != ppVar3);
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
 aVar1 = atomic_counter;
 } while (lVar4 != 4);
 free(__ptr);
 iVar2 = 0x2a;
 if (aVar1 < 1) {
 iVar2 = -3;
 }
 }
LAB_00101fc8:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_mutex_lock @ 00102030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 int iVar1;
 pthread_t *__ptr;
 pthread_t *ppVar2;
 long lVar3;
 int local_c;
 long local_8;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_8 = ___stack_chk_guard;
 local_c = 1000;
 __ptr = malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 shared_counter = 0;
 ppVar2 = __ptr;
 do {
 iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_increment,&local_c);
 if (iVar1 != 0) {
 free(__ptr);
 iVar1 = -2;
 goto LAB_00102100;
 }
 ppVar2 = ppVar2 + 1;
 } while (__ptr + 4 != ppVar2);
 lVar3 = 0;
 do {
 ppVar2 = __ptr + lVar3;
 /* Unresolved local var: int i@[???] */
 lVar3 = lVar3 + 1;
 pthread_join(*ppVar2,(void **)0x0);
 } while (lVar3 != 4);
 free(__ptr);
 iVar1 = 0x2a;
 if (shared_counter != local_c * 4) {
 iVar1 = -3;
 }
 }
LAB_00102100:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: param_strcpy @ 00102160 */

int param_strcpy(char *dst,char *src)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(dst,src);
 return (int)pcVar1 - (int)dst;
}



/* Function: call_strcpy @ 00102184 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 /* Unresolved local var: char[32] buffer@[???]
 Unresolved local var: int len@[???] */
 return 8;
}



/* Function: FUN_0010218c @ 0010218c */

int FUN_0010218c(char *param_1,char *param_2)

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



/* Function: param_strcmp @ 00102190 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar2 = strcmp(s1,s2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_strcmp @ 001021b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 001021c0 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 001021d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: FUN_001021dc @ 001021dc */

ulong FUN_001021dc(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: param_memcpy @ 001021e0 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00102204 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: FUN_0010220c @ 0010220c */

int FUN_0010220c(void *param_1,void *param_2,size_t param_3)

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



/* Function: param_memcmp @ 00102210 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(p1,p2,n);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_memcmp @ 00102230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 int iVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 lVar2 = ___stack_chk_guard;
 arr1[0] = 1;
 arr1[1] = 2;
 /* Unresolved local var: int ret@[???] */
 arr2[2] = 4;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 iVar3 = memcmp(arr1,arr2,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar1 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar1 = 1;
 }
 iVar4 = memcmp(arr1,arr3,0xc);
 iVar3 = -(uint)(iVar4 != 0);
 if (0 < iVar4) {
 iVar3 = 1;
 }
 if (lVar2 - ___stack_chk_guard == 0) {
 return iVar3 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_printf @ 00102300 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103e60);
 return iVar1;
}



/* Function: FUN_0010233c @ 0010233c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010233c(undefined8 param_1)

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



/* Function: param_scanf @ 00102340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_scanf(char *input_str)

{
 int iVar1;
 int a;
 int b;
 long local_8;
 
 /* Unresolved local var: int ret@[???] */
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b,&__stack_chk_guard,0);
 if (iVar1 == 2) {
 iVar1 = a + b;
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_scanf @ 001023b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int a;
 int b;
 long local_8;
 
 /* Unresolved local var: int ret@[???] */
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b,&__stack_chk_guard,0);
 if (iVar1 == 2) {
 iVar1 = a + b;
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_fopen_fclose @ 00102430 */

int param_fopen_fclose(char *filename)

{
 int iVar1;
 FILE *__stream;
 
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
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



/* Function: call_fopen_fclose @ 00102480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
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



/* Function: param_fread_fwrite @ 001024e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_fread_fwrite(char *tmpfile)

{
 long lVar1;
 int iVar2;
 FILE *__s;
 size_t sVar3;
 char read_buffer [32];
 
 /* Unresolved local var: char * write_data@[???]
 Unresolved local var: FILE * fp@[???]
 Unresolved local var: size_t written@[???]
 Unresolved local var: size_t read@[???] */
 lVar1 = ___stack_chk_guard;
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
 if ((((sVar3 == 0x12) && (read_buffer._0_8_ == 0x68636e65426e6942)) &&
 (read_buffer._8_8_ == 0x6144207473655420)) &&
 ((read_buffer._16_2_ == 0x6174 && (read_buffer[0x12] == '\0')))) {
 iVar2 = 0x2a;
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
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fread_fwrite @ 00102630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: FUN_0010263c @ 0010263c */

int FUN_0010263c(ulong param_1)

{
 int *__ptr;
 int *piVar1;
 int *piVar2;
 ulong uVar3;
 int iVar4;
 int iVar5;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 != 0) {
 if (param_1 - 1 < 3) {
 uVar3 = 0;
 }
 else {
 piVar1 = __ptr;
 iVar5 = 1;
 iVar4 = 0;
 do {
 piVar2 = piVar1 + 4;
 *(ulong *)(piVar1 + 2) = CONCAT44((iVar5 + 2) * 10,(iVar4 + 2) * 10);
 *(ulong *)piVar1 = CONCAT44(iVar5 * 10,iVar4 * 10);
 piVar1 = piVar2;
 iVar5 = iVar5 + 4;
 iVar4 = iVar4 + 4;
 } while (__ptr + (param_1 & 0xfffffffffffffffc) != piVar2);
 uVar3 = param_1 & 0xfffffffffffffffc;
 if ((param_1 & 3) == 0) goto LAB_0010270c;
 }
 __ptr[uVar3] = (int)uVar3 * 10;
 if (uVar3 + 1 < param_1) {
 __ptr[uVar3 + 1] = (int)(uVar3 + 1) * 10;
 if (uVar3 + 2 < param_1) {
 __ptr[uVar3 + 2] = (int)(uVar3 + 2) * 10;
 }
 }
 }
LAB_0010270c:
 iVar5 = *__ptr;
 iVar4 = __ptr[param_1 - 1];
 free(__ptr);
 return iVar4 + iVar5;
}



/* Function: param_malloc_free @ 00102640 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int *piVar1;
 int *piVar2;
 ulong uVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
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
 iVar5 = 1;
 iVar4 = 0;
 do {
 piVar2 = piVar1 + 4;
 *(ulong *)(piVar1 + 2) = CONCAT44((iVar5 + 2) * 10,(iVar4 + 2) * 10);
 *(ulong *)piVar1 = CONCAT44(iVar5 * 10,iVar4 * 10);
 piVar1 = piVar2;
 iVar5 = iVar5 + 4;
 iVar4 = iVar4 + 4;
 } while (__ptr + (size & 0xfffffffffffffffc) != piVar2);
 uVar3 = size & 0xfffffffffffffffc;
 if ((size & 3) == 0) goto LAB_0010270c;
 }
 __ptr[uVar3] = (int)uVar3 * 10;
 if (uVar3 + 1 < size) {
 __ptr[uVar3 + 1] = (int)(uVar3 + 1) * 10;
 if (uVar3 + 2 < size) {
 __ptr[uVar3 + 2] = (int)(uVar3 + 2) * 10;
 }
 }
 }
LAB_0010270c:
 iVar5 = *__ptr;
 iVar4 = __ptr[size - 1];
 free(__ptr);
 return iVar4 + iVar5;
}



/* Function: call_malloc_free @ 00102740 */

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



/* Function: FUN_0010276c @ 0010276c */

int FUN_0010276c(undefined8 *param_1,size_t param_2)

{
 ulong uVar1;
 undefined8 *puVar2;
 byte bVar4;
 byte bVar5;
 byte bVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 undefined8 uVar11;
 undefined8 uVar12;
 undefined8 *puVar3;
 
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 return 0;
 }
 if (param_2 - 1 < 0xf) {
 uVar1 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 puVar2 = param_1;
 do {
 puVar3 = puVar2 + 2;
 uVar12 = puVar2[1];
 uVar11 = *puVar2;
 bVar5 = (byte)((ulong)uVar11 >> 0x28);
 bVar4 = (byte)((ulong)uVar12 >> 8);
 bVar6 = (byte)((ulong)uVar12 >> 0x28);
 iVar7 = iVar7 + ((uint)uVar11 & 0xff) +
 (CONCAT12(bVar5,(ushort)(byte)((ulong)uVar11 >> 0x20)) & 0xffff) +
 ((CONCAT12(bVar4,(short)uVar12) & 0xff00ff) & 0xffff) +
 (CONCAT12(bVar6,(ushort)(byte)((ulong)uVar12 >> 0x20)) & 0xffff);
 iVar8 = iVar8 + (uint)(byte)((ulong)uVar11 >> 8) + (uint)bVar5 + (uint)bVar4 + (uint)bVar6;
 iVar9 = iVar9 + (uint)(byte)((ulong)uVar11 >> 0x10) + (uint)(byte)((ulong)uVar11 >> 0x30) +
 (uint)(byte)((ulong)uVar12 >> 0x10) + (uint)(byte)((ulong)uVar12 >> 0x30);
 iVar10 = iVar10 + (uint)(byte)((ulong)uVar11 >> 0x18) + (uint)(byte)((ulong)uVar11 >> 0x38) +
 (uint)(byte)((ulong)uVar12 >> 0x18) + (uint)(byte)((ulong)uVar12 >> 0x38);
 puVar2 = puVar3;
 } while (puVar3 != (undefined8 *)((param_2 & 0xfffffffffffffff0) + (long)param_1));
 iVar7 = iVar7 + iVar8 + iVar9 + iVar10;
 uVar1 = param_2 & 0xfffffffffffffff0;
 if ((param_2 & 0xf) == 0) {
 return iVar7;
 }
 }
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1);
 if (uVar1 + 1 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 1);
 if (uVar1 + 2 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 2);
 if (uVar1 + 3 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 3);
 if (uVar1 + 4 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 4);
 if (uVar1 + 5 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 5);
 if (uVar1 + 6 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 6);
 if (uVar1 + 7 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 7);
 if (uVar1 + 8 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 8);
 if (uVar1 + 9 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 9);
 if (uVar1 + 10 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 10);
 if (uVar1 + 0xb < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xb);
 if (uVar1 + 0xc < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xc);
 if (uVar1 + 0xd < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xd);
 if (uVar1 + 0xe < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xe);
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar7;
}



/* Function: param_memset @ 00102770 */

int param_memset(void *buffer,size_t size)

{
 ulong uVar1;
 undefined8 *puVar2;
 byte bVar4;
 byte bVar5;
 byte bVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 undefined8 uVar11;
 undefined8 uVar12;
 undefined8 *puVar3;
 
 /* Unresolved local var: uchar * bytes@[???]
 Unresolved local var: int sum@[???] */
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size == 0) {
 return 0;
 }
 if (size - 1 < 0xf) {
 uVar1 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 puVar2 = buffer;
 do {
 puVar3 = puVar2 + 2;
 uVar12 = puVar2[1];
 uVar11 = *puVar2;
 bVar5 = (byte)((ulong)uVar11 >> 0x28);
 bVar4 = (byte)((ulong)uVar12 >> 8);
 bVar6 = (byte)((ulong)uVar12 >> 0x28);
 iVar7 = iVar7 + ((uint)uVar11 & 0xff) +
 (CONCAT12(bVar5,(ushort)(byte)((ulong)uVar11 >> 0x20)) & 0xffff) +
 ((CONCAT12(bVar4,(short)uVar12) & 0xff00ff) & 0xffff) +
 (CONCAT12(bVar6,(ushort)(byte)((ulong)uVar12 >> 0x20)) & 0xffff);
 iVar8 = iVar8 + (uint)(byte)((ulong)uVar11 >> 8) + (uint)bVar5 + (uint)bVar4 + (uint)bVar6;
 iVar9 = iVar9 + (uint)(byte)((ulong)uVar11 >> 0x10) + (uint)(byte)((ulong)uVar11 >> 0x30) +
 (uint)(byte)((ulong)uVar12 >> 0x10) + (uint)(byte)((ulong)uVar12 >> 0x30);
 iVar10 = iVar10 + (uint)(byte)((ulong)uVar11 >> 0x18) + (uint)(byte)((ulong)uVar11 >> 0x38) +
 (uint)(byte)((ulong)uVar12 >> 0x18) + (uint)(byte)((ulong)uVar12 >> 0x38);
 puVar2 = puVar3;
 } while (puVar3 != (undefined8 *)((size & 0xfffffffffffffff0) + (long)buffer));
 iVar7 = iVar7 + iVar8 + iVar9 + iVar10;
 uVar1 = size & 0xfffffffffffffff0;
 if ((size & 0xf) == 0) {
 return iVar7;
 }
 }
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1);
 if (uVar1 + 1 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 1);
 if (uVar1 + 2 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 2);
 if (uVar1 + 3 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 3);
 if (uVar1 + 4 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 4);
 if (uVar1 + 5 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 5);
 if (uVar1 + 6 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 6);
 if (uVar1 + 7 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 7);
 if (uVar1 + 8 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 8);
 if (uVar1 + 9 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 9);
 if (uVar1 + 10 < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 10);
 if (uVar1 + 0xb < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 0xb);
 if (uVar1 + 0xc < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 0xc);
 if (uVar1 + 0xd < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 0xd);
 if (uVar1 + 0xe < size) {
 iVar7 = iVar7 + (uint)*(byte *)((long)buffer + uVar1 + 0xe);
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar7;
}



/* Function: call_memset @ 00102930 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 /* Unresolved local var: int[10] buffer@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 00102940 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 int iVar1;
 int iVar2;
 char *pcVar3;
 
 /* Unresolved local var: char * pos1@[???]
 Unresolved local var: int index1@[???]
 Unresolved local var: char * pos2@[???]
 Unresolved local var: int index2@[???] */
 pcVar3 = strchr(str,(uint)(byte)ch);
 iVar1 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar1 = (int)pcVar3 - (int)str;
 }
 pcVar3 = strstr(str,substr);
 iVar2 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar2 = (int)pcVar3 - (int)str;
 }
 return iVar1 + iVar2;
}



/* Function: call_strchr_strstr @ 001029a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: char * text@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 001029b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
 int a;
 int b;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 lVar1 = ___stack_chk_guard;
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ret@[???] */
 puts(DAT_00103ec8);
 __printf_chk(1,DAT_00103ef0,8);
 __printf_chk(1,DAT_00103f10,0);
 __printf_chk(1,DAT_00103f30,0xc);
 __printf_chk(1,DAT_00103f50,0x5a);
 arr1[0] = 1;
 arr1[1] = 2;
 arr2[2] = 4;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
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
 __printf_chk(1,DAT_00103f70,iVar2 + iVar5);
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 uVar4 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103e60);
 __printf_chk(1,DAT_00103f90,uVar4);
 /* Unresolved local var: int ret@[???] */
 iVar5 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
 if (iVar5 == 2) {
 iVar5 = a + b;
 }
 else {
 iVar5 = -1;
 }
 __printf_chk(1,DAT_00103fb0,iVar5);
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar5 = fileno(__stream);
 fclose(__stream);
 uVar6 = 0x2a;
 if (-1 < iVar5) goto LAB_00102b58;
 }
 uVar6 = 0xffffffff;
LAB_00102b58:
 __printf_chk(1,DAT_00103fd0,uVar6);
 iVar5 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,DAT_00103ff0,iVar5);
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
 __printf_chk(1,DAT_00104010,uVar6);
 __printf_chk(1,DAT_00104030,0);
 if (lVar1 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00104050,0xf);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_linux_syscall @ 00102c20 */

int param_linux_syscall(char *pathname)

{
 ulong uVar1;
 int *piVar2;
 
 /* Unresolved local var: int fd@[???] */
 uVar1 = syscall(0x38,0xffffff9c,pathname,0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 return (int)uVar1;
 }
 /* Unresolved local var: int fd@[???] */
 piVar2 = __errno_location();
 return -*piVar2;
}



/* Function: call_linux_syscall @ 00102c80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 ulong uVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
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



/* Function: param_win32_api @ 00102ce0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_win32_api(char *filename)

{
 long lVar1;
 int iVar2;
 struct stat st;
 
 lVar1 = ___stack_chk_guard;
 iVar2 = stat(filename,&st);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0x2a;
 if (st.st_size < 1) {
 iVar2 = -2;
 }
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: FUN_00102d4c @ 00102d4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102d4c(void)

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
 __stack_chk_fail();
 }
 return;
}



/* Function: call_win32_api @ 00102d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 long lVar1;
 int iVar2;
 struct stat st = {0};
 
 lVar1 = ___stack_chk_guard;
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
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_fork_exec @ 00102dc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 int status;
 long local_8;
 
 /* Unresolved local var: pid_t pid@[???] */
 local_8 = ___stack_chk_guard;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 /* WARNING: Subroutine does not return */
 param_fork_exec(prog,arg);
 }
 /* Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,&status,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = (uint)status >> 8 & 0xff, (status & 0x7fU) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00102e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 int iVar2;
 int status;
 long local_8;
 
 /* Unresolved local var: int ret@[???] */
 local_8 = ___stack_chk_guard;
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 /* WARNING: Subroutine does not return */
 param_fork_exec("/bin/true",(char *)0x0);
 }
 /* Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,&status,0);
 if (((-1 < _Var1) && ((status & 0x7fU) == 0)) && (iVar2 = 0x2a, (status & 0xff00U) == 0))
 goto LAB_00102ebc;
 }
 iVar2 = -1;
LAB_00102ebc:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_pipe_communication @ 00102f04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 long lVar1;
 int iVar2;
 __pid_t _Var3;
 ssize_t sVar4;
 int pipefd [2];
 char buffer [32];
 
 /* Unresolved local var: pid_t pid@[???] */
 lVar1 = ___stack_chk_guard;
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
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_pipe_communication @ 00102ff0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 int iStack_30;
 int iStack_2c;
 undefined1 auStack_28 [32];
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iVar1 = pipe(&iStack_30);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 iVar1 = -2;
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
 sVar3 = read(iStack_30,auStack_28,0x1f);
 auStack_28[sVar3] = 0;
 close(iStack_30);
 wait((void *)0x0);
 iVar1 = 0x2a;
 if (sVar3 < 1) {
 iVar1 = -3;
 }
 }
 }
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: param_socket_create @ 00102ff4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int opt;
 struct sockaddr_in addr;
 
 /* Unresolved local var: int sock@[???] */
 lVar1 = ___stack_chk_guard;
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
 addr.sin_addr.s_addr = 0;
 iVar3 = bind(iVar2,(sockaddr *)&addr,0x10);
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
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_socket_create @ 00103100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 int iVar2;
 undefined4 uStack_1c;
 sockaddr sStack_18;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 uStack_1c = 1;
 iVar2 = setsockopt(iVar1,1,2,&uStack_1c,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
 sStack_18.sa_data[6] = '\0';
 sStack_18.sa_data[7] = '\0';
 sStack_18.sa_data[8] = '\0';
 sStack_18.sa_data[9] = '\0';
 sStack_18.sa_data[10] = '\0';
 sStack_18.sa_data[0xb] = '\0';
 sStack_18.sa_data[0xc] = '\0';
 sStack_18.sa_data[0xd] = '\0';
 sStack_18.sa_family = 2;
 sStack_18.sa_data[0] = '\0';
 sStack_18.sa_data[1] = '\0';
 sStack_18.sa_data[2] = '\0';
 sStack_18.sa_data[3] = '\0';
 sStack_18.sa_data[4] = '\0';
 sStack_18.sa_data[5] = '\0';
 iVar2 = bind(iVar1,&sStack_18,0x10);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -3;
 }
 else {
 iVar2 = listen(iVar1,5);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -4;
 }
 else {
 close(iVar1);
 iVar1 = 0x2a;
 }
 }
 }
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_shmget_shmat @ 00103104 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__shmaddr;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[???]
 Unresolved local var: int shmid@[???]
 Unresolved local var: char * shm@[???]
 Unresolved local var: int len@[???] */
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
 if (__shmaddr != (char *)0xffffffffffffffff) {
 strncpy(__shmaddr,"SharedMemory",0xd);
 shmdt(__shmaddr);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return 0xc;
 }
 return -3;
 }
 }
 return -1;
}



/* Function: FUN_001031bc @ 001031bc */

undefined4 FUN_001031bc(void)

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



/* Function: call_shmget_shmat @ 001031c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 iVar2 = 0x2a;
 if (iVar1 < 1) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_signal_handling @ 001031e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
 /* Unresolved local var: int attempts@[???] */
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
 /* Unresolved local var: int attempts@[???] */
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
 return (int)p_Var1;
}



/* Function: call_signal_handling @ 00103300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

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
 return (int)p_Var1;
}



/* Function: test_system_calls @ 00103304 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 long lVar1;
 int iVar2;
 undefined4 uVar3;
 __pid_t _Var4;
 ulong uVar5;
 int *piVar6;
 undefined8 uVar7;
 int status;
 struct stat st;
 
 lVar1 = ___stack_chk_guard;
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 puts(DAT_001040b8);
 uVar5 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if ((int)uVar5 < 0) {
 /* Unresolved local var: int fd@[???] */
 piVar6 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar6) {
 uVar3 = 0xffffffff;
 }
 }
 else {
 syscall(0x39,uVar5 & 0xffffffff);
 uVar3 = 0x2a;
 }
 __printf_chk(1,DAT_001040d8,uVar3);
 iVar2 = stat("/etc/passwd",&st);
 if (iVar2 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 uVar3 = 0x2a;
 if (st.st_size < 1) {
 uVar3 = 0xfffffffe;
 }
 }
 __printf_chk(1,DAT_001040f8,uVar3);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var4 = fork();
 if (-1 < _Var4) {
 if (_Var4 == 0) {
 /* WARNING: Subroutine does not return */
 param_fork_exec("/bin/true",(char *)0x0);
 }
 /* Unresolved local var: pid_t wpid@[???] */
 _Var4 = waitpid(_Var4,&status,0);
 if (((-1 < _Var4) && ((status & 0x7fU) == 0)) && (uVar7 = 0x2a, (status & 0xff00U) == 0))
 goto LAB_001033d0;
 }
 uVar7 = 0xffffffff;
LAB_001033d0:
 __printf_chk(1,DAT_00104118,uVar7);
 iVar2 = param_pipe_communication();
 __printf_chk(1,DAT_00104138,iVar2);
 iVar2 = param_socket_create();
 __printf_chk(1,DAT_00104158,iVar2);
 /* Unresolved local var: int ret@[???] */
 iVar2 = param_shmget_shmat();
 uVar3 = 0x2a;
 if (iVar2 < 1) {
 uVar3 = 0xffffffff;
 }
 __printf_chk(1,DAT_00104178,uVar3);
 iVar2 = param_signal_handling();
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_00104198);
 return;
}



/* Function: param_pthread_create @ 001034b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_create(int x)

{
 int iVar1;
 int input;
 pthread_t tid;
 void *thread_ret;
 long local_8;
 
 /* Unresolved local var: int ret@[???]
 Unresolved local var: int result@[???] */
 local_8 = ___stack_chk_guard;
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
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_pthread_create @ 00103544 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int input;
 pthread_t tid;
 void *thread_ret;
 long local_8;
 
 /* Unresolved local var: int ret@[???]
 Unresolved local var: int result@[???] */
 local_8 = ___stack_chk_guard;
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
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_pthread_join @ 001035e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 long lVar1;
 long lVar2;
 int iVar3;
 pthread_t *__newthread;
 long lVar4;
 ThreadData *__arg;
 pthread_t *ppVar5;
 int iVar6;
 pthread_t tids [3];
 ThreadData data [3];
 
 /* Unresolved local var: int total@[???] */
 lVar2 = ___stack_chk_guard;
 __arg = data;
 iVar6 = 3;
 ppVar5 = tids;
 /* Unresolved local var: int i@[???] */
 data[2].result = 0;
 data[0].result = 0;
 data[1].start = 0xb;
 data[0].start = 1;
 data[0].end = 10;
 data[2].start = 0x15;
 data[2].end = 0x1e;
 data[1].end = 0x14;
 data[1].result = 0;
 __newthread = ppVar5;
 do {
 iVar3 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar3 != 0) {
 iVar6 = -1;
 goto LAB_001036a0;
 }
 __newthread = __newthread + 1;
 __arg = __arg + 1;
 iVar6 = iVar6 + -1;
 } while (iVar6 != 0);
 iVar6 = 0;
 lVar4 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar3 = pthread_join(*ppVar5,(void **)0x0);
 if (iVar3 != 0) {
 iVar6 = -2;
 break;
 }
 lVar1 = lVar4 + 0xc;
 ppVar5 = ppVar5 + 1;
 iVar6 = iVar6 + *(int *)((long)&data[0].result + lVar4);
 lVar4 = lVar1;
 } while (lVar1 != 0x24);
LAB_001036a0:
 if (lVar2 - ___stack_chk_guard == 0) {
 return iVar6;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
}



/* Function: call_pthread_join @ 001036f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 long lVar1;
 int iVar2;
 pthread_t *__newthread;
 long lVar3;
 pthread_t *__arg;
 pthread_t *ppVar4;
 int iVar5;
 pthread_t apStack_48 [4];
 int aiStack_28 [8];
 long lStack_8;
 
 __arg = apStack_48 + 3;
 iVar5 = 3;
 ppVar4 = apStack_48;
 lStack_8 = ___stack_chk_guard;
 aiStack_28[6] = 0;
 aiStack_28[0] = 0;
 aiStack_28[1] = 0xb;
 apStack_48[3] = 0xa00000001;
 aiStack_28[4] = 0x15;
 aiStack_28[5] = 0x1e;
 aiStack_28[2] = 0x14;
 aiStack_28[3] = 0;
 __newthread = ppVar4;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar2 != 0) {
 iVar5 = -1;
 goto LAB_001036a0;
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
LAB_001036a0:
 if (lStack_8 - ___stack_chk_guard == 0) {
 return iVar5;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: param_mutex_lock @ 001036f4 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 pthread_t *ppVar1;
 int iVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 int local_4;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_4 = iterations_per_thread;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 ppVar3 = __ptr;
 do {
 ppVar1 = ppVar3 + 1;
 iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_increment,&local_4);
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 ppVar3 = ppVar1;
 ppVar4 = __ptr;
 } while (ppVar1 != __ptr + (uint)thread_count);
 do {
 ppVar3 = ppVar4 + 1;
 /* Unresolved local var: int i@[???] */
 pthread_join(*ppVar4,(void **)0x0);
 ppVar4 = ppVar3;
 } while (ppVar3 != __ptr + (uint)thread_count);
 }
 free(__ptr);
 iVar2 = 0x2a;
 if (shared_counter != thread_count * local_4) {
 iVar2 = -3;
 }
 }
 return iVar2;
}



/* Function: call_mutex_lock @ 00103800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 pthread_t *__ptr;
 pthread_t *ppVar2;
 long lVar3;
 int iStack_c;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iStack_c = 1000;
 __ptr = malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 shared_counter = 0;
 ppVar2 = __ptr;
 do {
 iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_increment,&iStack_c);
 if (iVar1 != 0) {
 free(__ptr);
 iVar1 = -2;
 goto LAB_00102100;
 }
 ppVar2 = ppVar2 + 1;
 } while (__ptr + 4 != ppVar2);
 lVar3 = 0;
 do {
 ppVar2 = __ptr + lVar3;
 lVar3 = lVar3 + 1;
 pthread_join(*ppVar2,(void **)0x0);
 } while (lVar3 != 4);
 free(__ptr);
 iVar1 = 0x2a;
 if (shared_counter != iStack_c * 4) {
 iVar1 = -3;
 }
 }
LAB_00102100:
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: param_condition_variable @ 00103804 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 pthread_t producer;
 pthread_t consumer;
 void *consumer_ret;
 long local_8;
 
 /* Unresolved local var: int result@[???] */
 local_8 = ___stack_chk_guard;
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
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_condition_variable @ 001038e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 pthread_t pStack_20;
 pthread_t pStack_18;
 int *piStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&pStack_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(pStack_18,&piStack_10);
 pthread_join(pStack_20,(void **)0x0);
 iVar1 = *piStack_10;
 free(piStack_10);
 }
 else {
 iVar1 = -2;
 pthread_cancel(pStack_18);
 }
 }
 else {
 iVar1 = -1;
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: param_atomic_ops @ 001038e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 int iVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 long lVar4;
 int local_14;
 pthread_t load_store_tid;
 long local_8;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int final_value@[???] */
 local_8 = ___stack_chk_guard;
 local_14 = iterations;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 atomic_counter = 0;
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
 iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar2 != 0) {
 free(__ptr);
 iVar2 = -2;
 goto LAB_00103994;
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
LAB_00103994:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_atomic_ops @ 00103a80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 atomic_int aVar1;
 int iVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 long lVar4;
 undefined4 uStack_14;
 pthread_t pStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 uStack_14 = 500;
 __ptr = malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 atomic_counter = 0;
 ppVar3 = __ptr;
 do {
 iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&uStack_14);
 if (iVar2 != 0) {
 free(__ptr);
 iVar2 = -2;
 goto LAB_00101fc8;
 }
 ppVar3 = ppVar3 + 1;
 } while (__ptr + 4 != ppVar3);
 iVar2 = pthread_create(&pStack_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(pStack_10,(void **)0x0);
 }
 lVar4 = 0;
 do {
 ppVar3 = __ptr + lVar4;
 lVar4 = lVar4 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 aVar1 = atomic_counter;
 } while (lVar4 != 4);
 free(__ptr);
 iVar2 = 0x2a;
 if (aVar1 < 1) {
 iVar2 = -3;
 }
 }
LAB_00101fc8:
 if (lStack_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: param_thread_local_storage @ 00103a84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_thread_local_storage(int thread_count)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar2;
 ulong uVar3;
 int iVar4;
 ulong uVar5;
 undefined8 *puVar6;
 pthread_t *__newthread;
 long lVar8;
 int iVar9;
 ulong uVar10;
 void *ret;
 long local_8;
 undefined8 *puVar7;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 uVar10 = (ulong)thread_count;
 local_8 = ___stack_chk_guard;
 uVar5 = -(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (ulong)(uint)thread_count << 3;
 __ptr = malloc(uVar5);
 __ptr_00 = malloc(uVar5);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined8 *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar9 = 0;
 iVar4 = 0;
 }
 else {
 uVar5 = 0;
 do {
 pvVar2 = malloc(0x10);
 __ptr_00[uVar5] = pvVar2;
 uVar3 = uVar5 & 0xffffffff;
 uVar5 = uVar5 + 1;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar3);
 } while (uVar5 != uVar10);
 /* Unresolved local var: int i@[???] */
 uVar5 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar5]);
 if (iVar1 != 0) {
 puVar6 = __ptr_00;
 do {
 puVar7 = puVar6 + 1;
 /* Unresolved local var: int j@[???] */
 free((void *)*puVar6);
 puVar6 = puVar7;
 } while (__ptr_00 + uVar5 + 1 != puVar7);
 free(__ptr_00);
 free(__ptr);
 iVar1 = -2;
 goto LAB_00103ba0;
 }
 uVar5 = uVar5 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar10);
 iVar9 = 0;
 lVar8 = 0;
 iVar4 = 0;
 do {
 /* Unresolved local var: int i@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(*(pthread_t *)((long)__ptr + lVar8),&ret);
 iVar4 = iVar4 + *(int *)ret;
 iVar9 = iVar9 + *(int *)((long)ret + 4);
 free(ret);
 puVar6 = (undefined8 *)((long)__ptr_00 + lVar8);
 lVar8 = lVar8 + 8;
 free((void *)*puVar6);
 } while (uVar5 * 8 - lVar8 != 0);
 }
 free(__ptr_00);
 free(__ptr);
 iVar1 = 0x2a;
 if (thread_count * 100 != iVar4 || thread_count * 0x96 != iVar9) {
 iVar1 = -3;
 }
 }
LAB_00103ba0:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 00103c70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 long lVar1;
 undefined8 *puVar2;
 int iVar3;
 pthread_t *__ptr;
 void *__ptr_00;
 void *pvVar4;
 ulong uVar5;
 int iVar6;
 ulong uVar7;
 long lVar8;
 long lVar9;
 int iVar10;
 pthread_t *__newthread;
 int *piStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 __ptr = malloc(0x20);
 __ptr_00 = malloc(0x20);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void *)0x0) {
 iVar3 = -1;
 }
 else {
 uVar7 = 0;
 do {
 pvVar4 = malloc(0x10);
 *(void **)((long)__ptr_00 + uVar7 * 8) = pvVar4;
 uVar5 = uVar7 & 0xffffffff;
 uVar7 = uVar7 + 1;
 __snprintf_chk(pvVar4,0x10,1,0x10,"Thread-%d",uVar5);
 } while (uVar7 != 4);
 lVar9 = 0;
 __newthread = __ptr;
 do {
 iVar3 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)__ptr_00 + lVar9 * 8));
 if (iVar3 != 0) {
 lVar8 = 0;
 do {
 lVar1 = lVar8 * 8;
 lVar8 = lVar8 + 1;
 free(*(void **)((long)__ptr_00 + lVar1));
 } while ((int)lVar8 <= (int)lVar9);
 free(__ptr_00);
 free(__ptr);
 iVar3 = -2;
 goto LAB_00101e48;
 }
 lVar9 = lVar9 + 1;
 __newthread = __newthread + 1;
 } while (lVar9 != 4);
 iVar10 = 0;
 lVar9 = 0;
 iVar6 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar9),&piStack_10);
 iVar6 = iVar6 + *piStack_10;
 iVar10 = iVar10 + piStack_10[1];
 free(piStack_10);
 puVar2 = (undefined8 *)((long)__ptr_00 + lVar9);
 lVar9 = lVar9 + 8;
 free((void *)*puVar2);
 } while (lVar9 != 0x20);
 free(__ptr_00);
 free(__ptr);
 iVar3 = 0x2a;
 if (iVar6 != 400 || iVar10 != 600) {
 iVar3 = -3;
 }
 }
LAB_00101e48:
 if (lStack_8 - ___stack_chk_guard == 0) {
 return iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar3,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: test_thread_concurrency @ 00103c74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 int iterations_per_thread;
 int iterations;
 undefined4 uVar2;
 int input;
 pthread_t tid;
 void *thread_ret;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(&DAT_001041b8);
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
 __printf_chk(1,DAT_001041d8,uVar2);
 iVar1 = param_pthread_join();
 iVar1 = __printf_chk(1,DAT_001041f8,iVar1);
 iVar1 = param_mutex_lock(iVar1,iterations_per_thread);
 __printf_chk(1,DAT_00104218,iVar1);
 iVar1 = param_condition_variable();
 iVar1 = __printf_chk(1,DAT_00104238,iVar1);
 iVar1 = param_atomic_ops(iVar1,iterations);
 iVar1 = __printf_chk(1,DAT_00104258,iVar1);
 iVar1 = param_thread_local_storage(iVar1);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00104278);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: __aarch64_cas4_acq_rel @ 00103da0 */

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



/* Function: __aarch64_ldadd4_acq_rel @ 00103de0 */

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




/* Total functions decompiled: 87 */
