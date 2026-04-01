/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;

typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* Additional type definitions for decompiled code */
typedef unsigned long ulong;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int uint;
typedef void (*__sighandler_t)(int);
typedef int key_t;
typedef int atomic_int;
typedef void (*code)(void);
typedef unsigned char undefined;

typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

typedef struct {
    short sa_family;
    char sa_data[14];
} sockaddr;

typedef struct {
    short sin_family;
    unsigned short sin_port;
    struct {
        unsigned int s_addr;
    } sin_addr;
    char sin_zero[8];
} sockaddr_in;

typedef struct {
    long st_dev;
    unsigned short st_ino;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned short st_uid;
    unsigned short st_gid;
    long st_rdev;
    long st_size;
    long st_atime;
    long st_mtime;
    long st_ctime;
    long st_blksize;
    long st_blocks;
} struct_stat;

typedef struct {
    unsigned int shm_perm;
    unsigned int shm_segsz;
    unsigned short shm_cpid;
    unsigned short shm_lpid;
    unsigned short shm_nattch;
    unsigned short shm_atime;
    unsigned short shm_dtime;
    unsigned short shm_ctime;
} shmid_ds;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <stdio.h>
#include <pthread.h>
#include <sys/stat.h>
#include <sys/auxv.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>

/* Global variables for decompiled code */
long ___stack_chk_guard;
long __stack_chk_guard;
int data;
int ready;
int __aarch64_have_lse_atomics;
int signal_received;
int signal_number;
int shared_counter;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int atomic_counter;
char completed_0;
void *__dso_handle;

/* Data references */
char DAT_00103698[] = "TestName";
char DAT_00103a00[] = "Testing thread concurrency...";
char DAT_00103a20[] = "pthread_create result: %d\n";
char DAT_00103a40[] = "pthread_join result: %d\n";
char DAT_00103a60[] = "mutex_lock result: %d\n";
char DAT_00103a80[] = "condition_variable result: %d\n";
char DAT_00103aa0[] = "atomic_ops result: %d\n";
char DAT_00103ac0[] = "Thread concurrency test complete\n";
char DAT_00103700[] = "Testing standard library functions...";
char DAT_00103728[] = "strcmp result: %d\n";
char DAT_00103748[] = "strcmp call result: %d\n";
char DAT_00103768[] = "strlen result: %d\n";
char DAT_00103788[] = "memcpy result: %d\n";
char DAT_001037a8[] = "memcmp result: %d\n";
char DAT_001037c8[] = "printf result: %d\n";
char DAT_001037e8[] = "scanf result: %d\n";
char DAT_00103808[] = "fopen result: %d\n";
char DAT_00103828[] = "fread_fwrite result: %d\n";
char DAT_00103848[] = "malloc result: %d\n";
char DAT_00103868[] = "memset result: %d\n";
char DAT_00103888[] = "strchr_strstr result: %d\n";
char DAT_001038f0[] = "Testing system calls...";
char DAT_00103910[] = "syscall result: %d\n";
char DAT_00103930[] = "stat result: %d\n";
char DAT_00103950[] = "fork_exec result: %d\n";
char DAT_00103970[] = "pipe result: %d\n";
char DAT_00103990[] = "socket result: %d\n";
char DAT_001039b0[] = "shmget result: %d\n";
char DAT_001039d0[] = "signal result: %d\n";

/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001013a0 @ 001013a0 */

void FUN_001013a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function declarations */
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);

/* External function declarations for internal/CRT functions */
extern unsigned long __getauxval(unsigned long type);
extern void __cxa_finalize(void *d);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern int ExclusiveMonitorPass(void *addr, int size);
extern char ExclusiveMonitorsStatus(void);
extern void LOAcquire(void);
extern void LORelease(void);
extern int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
extern int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
extern unsigned long tpidr_el0;
extern void __stack_chk_fail(void);
extern int __isoc99_sscanf(const char *format, ...);
extern int *__errno_location(void);
extern int waitpid(int pid, int *status, int options);
extern int wait(int *status);

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




/* Function: signal_handler @ 00101960 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: thread_sum @ 00101980 */

void * thread_sum(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: ThreadData * data@[DW_OP_reg0(x0)]
 Unresolved local var: int i@[???] */
 iVar1 = *(int *)arg;
 *(undefined4 *)((long)arg + 8) = 0;
 if (iVar1 <= *(int *)((long)arg + 4)) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != *(int *)((long)arg + 4) + 1);
 *(int *)((long)arg + 8) = iVar2;
 }
 return (void *)0x0;
}



/* Function: thread_compute @ 001019b4 */

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



/* Function: thread_increment @ 001019e4 */

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



/* Function: consumer_thread @ 00101a54 */

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



/* Function: producer_thread @ 00101ad0 */

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



/* Function: thread_atomic_increment @ 00101b30 */

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



/* Function: thread_atomic_load_store @ 00101ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 atomic_counter = atomic_counter + 100;
 return (void *)0x0;
}



/* Function: thread_tls_test @ 00101bc0 */

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
 strncpy((char *)(lVar3 + 0x18),arg,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}



/* Function: param_strcpy @ 00101c10 */

int param_strcpy(char *dst,char *src)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(dst,src);
 return (int)pcVar1 - (int)dst;
}



/* Function: call_strcpy @ 00101c34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 /* Unresolved local var: char[32] buffer@[???]
 Unresolved local var: int len@[???] */
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



/* Function: call_strcmp @ 00101c60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 00101c70 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 00101c84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: FUN_00101c8c @ 00101c8c */

ulong FUN_00101c8c(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: param_memcpy @ 00101c90 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00101cb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
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



/* Function: call_memcmp @ 00101ce0 */

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



/* Function: param_printf @ 00101db0 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00101dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103698);
 return iVar1;
}



/* Function: FUN_00101dec @ 00101dec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101dec(char *param_1)

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



/* Function: call_scanf @ 00101e60 */

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



/* Function: param_fopen_fclose @ 00101ee0 */

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



/* Function: call_fopen_fclose @ 00101f30 */

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



/* Function: param_fread_fwrite @ 00101f90 */

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
 if ((((sVar3 == 0x12) && (memcmp(read_buffer,"BinBench Test Data",0x12) == 0)) &&
 (read_buffer[0x12] == '\0'))) {
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



/* Function: call_fread_fwrite @ 001020e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
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

int param_malloc_free(size_t size)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int *piVar3;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(size * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: size_t i@[???] */
 iVar1 = 0;
 piVar2 = __ptr;
 if (size != 0) {
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar3;
 } while (piVar3 != __ptr + size);
 }
 iVar1 = (__ptr + size)[-1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00102160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 /* Unresolved local var: size_t i@[???] */
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

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 byte *pbVar2;
 byte *pbVar3;
 
 /* Unresolved local var: uchar * bytes@[???]
 Unresolved local var: int sum@[???] */
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 iVar1 = 0;
 pbVar3 = buffer;
 do {
 pbVar2 = pbVar3 + 1;
 iVar1 = iVar1 + (uint)*pbVar3;
 pbVar3 = pbVar2;
 } while (pbVar2 != (byte *)((long)buffer + size));
 return iVar1;
 }
 return 0;
}



/* Function: call_memset @ 00102220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 /* Unresolved local var: int[10] buffer@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 00102230 */

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



/* Function: call_strchr_strstr @ 00102290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: char * text@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 001022a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 int iVar1;
 undefined4 uVar2;
 FILE *__stream;
 int *__ptr;
 undefined8 uVar3;
 int *piVar4;
 int a;
 int b;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00103700);
 __printf_chk(1,DAT_00103728,8);
 iVar1 = call_strcmp();
 __printf_chk(1,DAT_00103748,iVar1);
 __printf_chk(1,DAT_00103768,0xc);
 __printf_chk(1,DAT_00103788,0x5a);
 iVar1 = call_memcmp();
 __printf_chk(1,DAT_001037a8,iVar1);
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 uVar2 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,DAT_00103698);
 __printf_chk(1,DAT_001037c8,uVar2);
 /* Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&a,&b);
 if (iVar1 == 2) {
 iVar1 = a + b;
 }
 else {
 iVar1 = -1;
 }
 __printf_chk(1,DAT_001037e8,iVar1);
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar3 = 0x2a;
 if (-1 < iVar1) goto LAB_001023d8;
 }
 uVar3 = 0xffffffff;
LAB_001023d8:
 __printf_chk(1,DAT_00103808,uVar3);
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,DAT_00103828,iVar1);
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar4 = __ptr;
 do {
 /* Unresolved local var: size_t i@[???] */
 *piVar4 = iVar1;
 iVar1 = iVar1 + 10;
 piVar4 = piVar4 + 1;
 } while (iVar1 != 100);
 iVar1 = *__ptr + __ptr[9];
 free(__ptr);
 }
 __printf_chk(1,DAT_00103848,iVar1);
 iVar1 = call_memset();
 __printf_chk(1,DAT_00103868,iVar1);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00103888,0xf);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_linux_syscall @ 001024c0 */

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



/* Function: call_linux_syscall @ 00102520 */

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



/* Function: param_win32_api @ 00102580 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_win32_api(char *filename)

{
 long lVar1;
 int iVar2;
 struct_stat st;
 
 lVar1 = ___stack_chk_guard;
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
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
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
 struct_stat local_58;
 iVar1 = stat("/etc/passwd",(struct stat *)(void *)&local_58);
 if (iVar1 < 0) {
  uVar2 = 0xffffffff;
 }
 else {
  uVar2 = 0x2a;
  if (local_58.st_size < 1) {
   uVar2 = 0xfffffffe;
  }
 }
 if (lStack_8 - ___stack_chk_guard != 0) {
  /* WARNING: Subroutine does not return */
  __stack_chk_fail();
 }
 return;
}



/* Function: call_win32_api @ 001025f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 long lVar1;
 int iVar2;
 struct_stat st;
 
 lVar1 = ___stack_chk_guard;
 iVar2 = stat("/etc/passwd",(struct stat *)(void *)&st);
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



/* Function: param_fork_exec @ 00102664 */

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
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00102720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 iVar2 = 0x2a;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 return iVar2;
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
 __stack_chk_fail();
 }
 return;
}



/* Function: param_pipe_communication @ 00102750 */

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



/* Function: call_pipe_communication @ 00102840 */

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



/* Function: param_socket_create @ 00102844 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int opt;
 sockaddr_in addr;
 
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
 iVar3 = bind(iVar2,(const struct sockaddr *)&addr,0x10);
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



/* Function: call_socket_create @ 00102950 */

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
 iVar2 = bind(iVar1,(const struct sockaddr *)&sStack_18,0x10);
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



/* Function: param_shmget_shmat @ 00102954 */

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
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return 0xc;
 }
 return -3;
 }
 }
 return -1;
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



/* Function: param_signal_handling @ 00102a30 */

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
 /* Unresolved local var: int attempts@[???] */
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



/* Function: call_signal_handling @ 00102b50 */

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



/* Function: test_system_calls @ 00102b54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 long lVar1;
 int iVar2;
 undefined4 uVar3;
 ulong uVar4;
 int *piVar5;
 undefined4 uVar6;
 struct_stat st;
 
 lVar1 = ___stack_chk_guard;
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 puts(DAT_001038f0);
 uVar4 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if ((int)uVar4 < 0) {
  /* Unresolved local var: int fd@[???] */
  piVar5 = __errno_location();
  uVar3 = 0x2a;
  if (0 < *piVar5) {
   uVar3 = 0xffffffff;
  }
 }
 else {
  syscall(0x39,uVar4 & 0xffffffff);
  uVar3 = 0x2a;
 }
 __printf_chk(1,DAT_00103910,uVar3);
 iVar2 = stat("/etc/passwd",(struct stat *)(void *)&st);
 if (iVar2 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 uVar3 = 0x2a;
 if (st.st_size < 1) {
 uVar3 = 0xfffffffe;
 }
 }
 __printf_chk(1,DAT_00103930,uVar3);
 /* Unresolved local var: int ret@[???] */
 iVar2 = param_fork_exec("/bin/true",(char *)0x0);
 uVar6 = 0x2a;
 uVar3 = uVar6;
 if (iVar2 != 0) {
 uVar3 = 0xffffffff;
 }
 __printf_chk(1,DAT_00103950,uVar3);
 iVar2 = param_pipe_communication();
 __printf_chk(1,DAT_00103970,iVar2);
 iVar2 = param_socket_create();
 __printf_chk(1,DAT_00103990,iVar2);
 /* Unresolved local var: int ret@[???] */
 iVar2 = param_shmget_shmat();
 if (iVar2 < 1) {
 uVar6 = 0xffffffff;
 }
 __printf_chk(1,DAT_001039b0,uVar6);
 iVar2 = param_signal_handling();
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_001039d0,iVar2);
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
 void *puStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 uStack_1c = param_1;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,thread_compute,&uStack_1c);
 if (iVar1 == 0) {
 pthread_join(pStack_18,&puStack_10);
 uVar2 = *(undefined4 *)puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return (undefined8)(ulong)uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_pthread_create @ 00102cd0 */

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
 __stack_chk_fail();
}



/* Function: call_pthread_create @ 00102d64 */

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
 __stack_chk_fail();
}



/* Function: param_pthread_join @ 00102e00 */

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
 goto LAB_00102ec0;
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
LAB_00102ec0:
 if (lVar2 - ___stack_chk_guard == 0) {
 return iVar6;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_join @ 00102f10 */

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
 if (lStack_8 - ___stack_chk_guard == 0) {
 return iVar5;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_mutex_lock @ 00102f14 */

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



/* Function: call_mutex_lock @ 00103020 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: FUN_0010302c @ 0010302c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010302c(void)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t pStack_20;
 pthread_t pStack_18;
 void *puStack_10;
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
 uVar2 = *(undefined4 *)puStack_10;
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
 return (undefined8)(ulong)uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_condition_variable @ 00103030 */

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
 pthread_join(consumer,(void **)&consumer_ret);
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
 __stack_chk_fail();
}



/* Function: call_condition_variable @ 00103104 */

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
 pthread_join(pStack_18,(void **)&piStack_10);
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
 __stack_chk_fail();
}



/* Function: param_atomic_ops @ 00103110 */

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
 goto LAB_001031c0;
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
LAB_001031c0:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_atomic_ops @ 001032b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
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
 __ptr_00[uVar5] = (undefined8)(ulong)(size_t)pvVar3;
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
 pthread_join(*(pthread_t *)((long)__ptr + lVar8),(void **)&piStack_10);
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
 __stack_chk_fail();
}



/* Function: param_thread_local_storage @ 001032c0 */

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
 __ptr_00[uVar5] = (undefined8)(ulong)(size_t)pvVar2;
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
 goto LAB_001033d8;
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
 } while (lVar8 != uVar5 * 8);
 }
 free(__ptr_00);
 free(__ptr);
 iVar1 = 0x2a;
 if (thread_count * 100 != iVar4 || thread_count * 0x96 != iVar9) {
 iVar1 = -3;
 }
 }
LAB_001033d8:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 001034a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: FUN_001034ac @ 001034ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001034ac(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uStack_1c;
 pthread_t pStack_18;
 void *puStack_10;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 puts(DAT_00103a00);
 uStack_1c = 7;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,thread_compute,&uStack_1c);
 if (iVar1 == 0) {
 pthread_join(pStack_18,&puStack_10);
 uVar2 = *(undefined4 *)puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00103a20,uVar2);
 iVar1 = param_pthread_join();
 __printf_chk(1,DAT_00103a40,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 __printf_chk(1,DAT_00103a60,iVar1);
 iVar1 = param_condition_variable();
 __printf_chk(1,DAT_00103a80,iVar1);
 iVar1 = param_atomic_ops(4,500);
 __printf_chk(1,DAT_00103aa0,iVar1);
 iVar1 = param_thread_local_storage(4);
 if (lStack_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,"%s",DAT_00103ac0);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_thread_concurrency @ 001034b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 int input;
 pthread_t tid;
 void *thread_ret;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00103a00);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: int result@[???] */
 input = 7;
 iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 if (iVar1 == 0) {
 pthread_join(tid,(void **)&thread_ret);
 uVar2 = *(undefined4 *)thread_ret;
 free(thread_ret);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,DAT_00103a20,uVar2);
 iVar1 = param_pthread_join();
 __printf_chk(1,DAT_00103a40,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 __printf_chk(1,DAT_00103a60,iVar1);
 iVar1 = param_condition_variable();
 __printf_chk(1,DAT_00103a80,iVar1);
 iVar1 = param_atomic_ops(4,500);
 __printf_chk(1,DAT_00103aa0,iVar1);
 iVar1 = param_thread_local_storage(4);
 if (local_8 - ___stack_chk_guard == 0) {
  __printf_chk(1,(char *)DAT_00103ac0);
  return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
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




/* Total functions decompiled: 87 */
