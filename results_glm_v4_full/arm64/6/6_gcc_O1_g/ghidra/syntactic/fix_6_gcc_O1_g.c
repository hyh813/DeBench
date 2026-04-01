/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long long uint64_t;

/* Additional type definitions */
typedef unsigned char byte;
typedef unsigned long ulong;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef void undefined;
typedef void (*code)(void);

/* Required includes */
#include <stdio.h>
#include <pthread.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <time.h>
#include <errno.h>
#include <stdatomic.h>
#include <fcntl.h>
#include <sys/shm.h>

/* Forward declarations for implicit functions */
unsigned long __getauxval(unsigned long type);
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
void __stack_chk_fail(void);
int __isoc99_sscanf(const char *str, const char *format, ...);
int __printf_chk(int flag, const char *format, ...);
int __snprintf_chk(char *str, size_t maxlen, int flag, size_t strlen, const char *format, ...);
bool ExclusiveMonitorPass(void *addr, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/* Missing type definitions */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

/* Global variable declarations */
extern unsigned long __stack_chk_guard;
extern unsigned long ___stack_chk_guard;
extern byte __aarch64_have_lse_atomics;
extern int data;
extern int ready;
extern atomic_int atomic_counter;
extern int shared_counter;
extern pthread_mutex_t counter_mutex;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern volatile int signal_received;
extern int signal_number;
extern long tpidr_el0;
extern char completed_0;
extern void *__dso_handle;

/* String data constants */
extern char *DAT_001034c8;
extern char *DAT_001034f0;
extern char *DAT_00103510;
extern char *DAT_00103530;
extern char *DAT_00103550;
extern char *DAT_00103570;
extern char *DAT_00103590;
extern char *DAT_001035b0;
extern char *DAT_001035d0;
extern char *DAT_001035f0;
extern char *DAT_00103610;
extern char *DAT_00103630;
extern char *DAT_00103650;
extern char *DAT_001036b8;
extern char *DAT_001036d8;
extern char *DAT_001036f8;
extern char *DAT_00103718;
extern char *DAT_00103738;
extern char *DAT_00103758;
extern char *DAT_00103778;
extern char *DAT_00103798;
extern char *DAT_001037c8;
extern char *DAT_001037e8;
extern char *DAT_00103808;
extern char *DAT_00103828;
extern char *DAT_00103848;
extern char *DAT_00103868;
extern char *DAT_00103888;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_O1_g
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



/* Function: init_have_lse_atomics @ 001017c0 */

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




/* Function: FUN_001018bc @ 001018bc */

void FUN_001018bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00101914 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: thread_sum @ 0010192c */

void * thread_sum(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: ThreadData * data@[DW_OP_reg0(x0)] */
 *(undefined4 *)((long)arg + 8) = 0;
 /* Unresolved local var: int i@[???] */
 iVar1 = *(int *)arg;
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



/* Function: thread_compute @ 00101964 */

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



/* Function: thread_increment @ 00101990 */

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
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return (void *)0x0;
}



/* Function: consumer_thread @ 00101a0c */

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



/* Function: producer_thread @ 00101a88 */

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



/* Function: thread_atomic_increment @ 00101ae0 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 iVar2 = 0;
 /* Unresolved local var: int expected@[???]
 Unresolved local var: int desired@[???] */
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00101b4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 atomic_counter = atomic_counter + 100;
 return (void *)0x0;
}



/* Function: thread_tls_test @ 00101b6c */

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



/* Function: param_strcpy @ 00101bc0 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return (int)sVar1;
}



/* Function: call_strcpy @ 00101be8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 long lVar1;
 int iVar2;
 char buffer [32];
 
 /* Unresolved local var: int len@[???] */
 lVar1 = ___stack_chk_guard;
 iVar2 = param_strcpy(buffer,"HelloLib");
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: param_strcmp @ 00101c3c */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar2 = strcmp(s1,s2);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_strcmp @ 00101c5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 iVar1 = param_strcmp("abc","def");
 iVar2 = param_strcmp("xyz","xyz");
 iVar3 = param_strcmp("bbb","aaa");
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101cbc */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 00101cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 00101cd8 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00101cfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 int iVar1;
 long lVar2;
 int src [5];
 int dst [5];
 
 lVar2 = ___stack_chk_guard;
 src[0] = 10;
 src[1] = 0x14;
 src[2] = 0x1e;
 src[3] = 0x28;
 src[4] = 0x32;
 dst[0] = 0;
 dst[1] = 0;
 dst[2] = 0;
 dst[3] = 0;
 dst[4] = 0;
 param_memcpy(dst,src,0x14);
 iVar1 = dst[0] + dst[2] + dst[4];
 if (lVar2 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1,&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
}



/* Function: param_memcmp @ 00101d84 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(p1,p2,n);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_memcmp @ 00101da4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 lVar1 = ___stack_chk_guard;
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 iVar2 = param_memcmp(arr1,arr2,0xc);
 iVar3 = param_memcmp(arr1,arr3,0xc);
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar2 + iVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2 + iVar3,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: param_printf @ 00101e58 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = __printf_chk(1,"Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00101e80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???] */
 iVar1 = param_printf(0x2a,"Test");
 return iVar1;
}



/* Function: param_scanf @ 00101ea0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_scanf(char *input_str)

{
 int iVar1;
 int a;
 int b;
 long local_8;
 
 /* Unresolved local var: int ret@[???] */
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
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
 __stack_chk_fail(iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_scanf @ 00101f14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 
 iVar1 = param_scanf("123,456");
 return iVar1;
}



/* Function: param_fopen_fclose @ 00101f30 */

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



/* Function: call_fopen_fclose @ 00101f78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int fd@[???] */
 iVar1 = param_fopen_fclose("/etc/passwd");
 iVar2 = 0x2a;
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_fread_fwrite @ 00101fa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_fread_fwrite(char *tmpfile)

{
 long lVar1;
 int iVar2;
 int iVar3;
 FILE *__s;
 size_t sVar4;
 char read_buffer [32];
 
 /* Unresolved local var: char * write_data@[???]
 Unresolved local var: FILE * fp@[???]
 Unresolved local var: size_t written@[???]
 Unresolved local var: size_t read@[???] */
 lVar1 = ___stack_chk_guard;
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar3 = -1;
 }
 else {
 sVar4 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar4 == 0x12) {
 rewind(__s);
 /* Unresolved local var: size_t sz@[???] */
 sVar4 = fread(read_buffer,1,0x12,__s);
 read_buffer[sVar4] = '\0';
 fclose(__s);
 unlink(tmpfile);
 if (sVar4 == 0x12) {
 iVar2 = strcmp(read_buffer,"BinBench Test Data");
 iVar3 = -3;
 if (iVar2 == 0) {
 iVar3 = 0x2a;
 }
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
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar3,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return iVar3;
}



/* Function: call_fread_fwrite @ 001020b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 001020d4 */

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
 if (size != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar3;
 } while (piVar3 != __ptr + size);
 }
 iVar1 = __ptr[size - 1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00102140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 
 iVar1 = param_malloc_free(10);
 return iVar1;
}



/* Function: param_memset @ 00102158 */

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 byte *pbVar2;
 byte *pbVar3;
 
 /* Unresolved local var: uchar * bytes@[???]
 Unresolved local var: int sum@[???] */
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 pbVar3 = buffer;
 do {
 pbVar2 = pbVar3 + 1;
 iVar1 = iVar1 + (uint)*pbVar3;
 pbVar3 = pbVar2;
 } while (pbVar2 != (byte *)((long)buffer + size));
 }
 return iVar1;
}



/* Function: call_memset @ 001021ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 long *plVar1;
 int buffer [10];
 long local_8;
 long *plVar2;
 
 local_8 = ___stack_chk_guard;
 /* Unresolved local var: int i@[???] */
 plVar1 = (long *)buffer;
 do {
 plVar2 = (long *)((long)plVar1 + 4);
 *(int *)plVar1 = 0xff;
 plVar1 = plVar2;
 } while (plVar2 != &local_8);
 param_memset(buffer,0x28);
 if (local_8 - ___stack_chk_guard == 0) {
 return buffer[0] + buffer[9];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(buffer[0] + buffer[9],&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_strchr_strstr @ 00102220 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 char *pcVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: char * pos1@[???]
 Unresolved local var: int index1@[???]
 Unresolved local var: char * pos2@[???]
 Unresolved local var: int index2@[???] */
 pcVar1 = strchr(str,(uint)(byte)ch);
 iVar3 = (int)pcVar1 - (int)str;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(str,substr);
 iVar2 = (int)pcVar1 - (int)str;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 00102278 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 int iVar1;
 
 /* Unresolved local var: char * text@[???]
 Unresolved local var: int result@[???] */
 iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
 return iVar1;
}



/* Function: test_standard_library_functions @ 001022a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 int iVar1;
 
 puts(&DAT_001034c8);
 iVar1 = call_strcpy();
 __printf_chk(1,&DAT_001034f0,iVar1);
 iVar1 = call_strcmp();
 __printf_chk(1,&DAT_00103510,iVar1);
 iVar1 = call_strlen();
 __printf_chk(1,&DAT_00103530,iVar1);
 iVar1 = call_memcpy();
 __printf_chk(1,&DAT_00103550,iVar1);
 iVar1 = call_memcmp();
 __printf_chk(1,&DAT_00103570,iVar1);
 iVar1 = call_printf();
 __printf_chk(1,&DAT_00103590,iVar1);
 iVar1 = call_scanf();
 __printf_chk(1,&DAT_001035b0,iVar1);
 iVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_001035d0,iVar1);
 iVar1 = call_fread_fwrite();
 __printf_chk(1,&DAT_001035f0,iVar1);
 iVar1 = call_malloc_free();
 __printf_chk(1,&DAT_00103610,iVar1);
 iVar1 = call_memset();
 __printf_chk(1,&DAT_00103630,iVar1);
 iVar1 = call_strchr_strstr();
 __printf_chk(1,&DAT_00103650,iVar1);
 return;
}



/* Function: param_linux_syscall @ 001023dc */

int param_linux_syscall(char *pathname)

{
 int iVar1;
 ulong uVar2;
 int *piVar3;
 
 /* Unresolved local var: int fd@[???] */
 uVar2 = syscall(0x38,0xffffff9c,pathname,0);
 iVar1 = (int)uVar2;
 if (iVar1 < 0) {
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(0x39,uVar2 & 0xffffffff);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 00102430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = param_linux_syscall("/etc/passwd");
 iVar2 = 0x2a;
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_win32_api @ 00102458 */

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
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: call_win32_api @ 001024c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 
 iVar1 = param_win32_api("/etc/passwd");
 return iVar1;
}



/* Function: param_fork_exec @ 001024e0 */

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
 __stack_chk_fail(uVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00102590 */

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



/* Function: param_pipe_communication @ 001025bc */

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
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: call_pipe_communication @ 001026a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 001026b8 */

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
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: call_socket_create @ 001027bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 001027d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 int __shmid;
 char *__s;
 size_t sVar2;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[???]
 Unresolved local var: int shmid@[???]
 Unresolved local var: char * shm@[???]
 Unresolved local var: int len@[???] */
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 iVar1 = -1;
 }
 else {
 __shmid = shmget(__key,0x1000,0x3b6);
 if (__shmid < 0) {
 iVar1 = -2;
 }
 else {
 __s = shmat(__shmid,(void *)0x0,0);
 if (__s == (char *)0xffffffffffffffff) {
 iVar1 = -3;
 }
 else {
 strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 iVar1 = (int)sVar2;
 shmdt(__s);
 shmctl(__shmid,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return iVar1;
}



/* Function: call_shmget_shmat @ 001028b4 */

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



/* Function: param_signal_handling @ 001028d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 iVar2 = -1;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 iVar2 = -2;
 }
 else {
 signal_received = 0;
 raise(10);
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
 if (signal_received == 0) {
 iVar2 = -5;
 }
 else if (signal_number == 0xe) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar2 = 0x2a;
 }
 else {
 iVar2 = -5;
 }
 }
 else {
 iVar2 = -4;
 }
 }
 }
 return iVar2;
}



/* Function: call_signal_handling @ 00102a48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00102a5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 int iVar1;
 
 puts(&DAT_001036b8);
 iVar1 = call_linux_syscall();
 __printf_chk(1,&DAT_001036d8,iVar1);
 iVar1 = call_win32_api();
 __printf_chk(1,&DAT_001036f8,iVar1);
 iVar1 = call_fork_exec();
 __printf_chk(1,&DAT_00103718,iVar1);
 iVar1 = param_pipe_communication();
 __printf_chk(1,&DAT_00103738,iVar1);
 iVar1 = param_socket_create();
 __printf_chk(1,&DAT_00103758,iVar1);
 iVar1 = call_shmget_shmat();
 __printf_chk(1,&DAT_00103778,iVar1);
 iVar1 = param_signal_handling();
 __printf_chk(1,&DAT_00103798,iVar1);
 return;
}



/* Function: param_pthread_create @ 00102b20 */

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



/* Function: call_pthread_create @ 00102bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 
 iVar1 = param_pthread_create(7);
 return iVar1;
}



/* Function: param_pthread_join @ 00102bc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 long lVar1;
 int iVar2;
 ThreadData *__arg;
 long lVar3;
 pthread_t *__newthread;
 int iVar4;
 pthread_t *ppVar5;
 pthread_t tids [3];
 ThreadData data [3];
 
 /* Unresolved local var: int total@[???] */
 lVar1 = ___stack_chk_guard;
 __arg = data;
 data[0].result = 0;
 data[1].start = 0xb;
 data[0].start = 1;
 data[0].end = 10;
 data[2].start = 0x15;
 data[2].end = 0x1e;
 data[1].end = 0x14;
 data[1].result = 0;
 data[2].result = 0;
 /* Unresolved local var: int i@[???] */
 ppVar5 = tids;
 iVar4 = 3;
 __newthread = ppVar5;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar2 != 0) {
 iVar4 = -1;
 goto LAB_00102c84;
 }
 __newthread = __newthread + 1;
 __arg = __arg + 1;
 iVar4 = iVar4 + -1;
 } while (iVar4 != 0);
 lVar3 = 0;
 iVar4 = 0;
 /* Unresolved local var: int i@[???] */
 do {
 iVar2 = pthread_join(*ppVar5,(void **)0x0);
 if (iVar2 != 0) {
 iVar4 = -2;
 break;
 }
 iVar4 = iVar4 + *(int *)((long)&data[0].result + lVar3);
 ppVar5 = ppVar5 + 1;
 lVar3 = lVar3 + 0xc;
 } while (lVar3 != 0x24);
LAB_00102c84:
 if (lVar1 - ___stack_chk_guard == 0) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: call_pthread_join @ 00102ccc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: param_mutex_lock @ 00102ce0 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 int iVar1;
 pthread_t *__ptr;
 pthread_t *ppVar2;
 pthread_t *ppVar3;
 int local_4;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_4 = iterations_per_thread;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 ppVar2 = __ptr;
 do {
 iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_increment,&local_4);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 ppVar2 = ppVar2 + 1;
 ppVar3 = __ptr;
 } while (ppVar2 != __ptr + (uint)thread_count);
 do {
 /* Unresolved local var: int i@[???] */
 ppVar2 = ppVar3 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 ppVar3 = ppVar2;
 } while (ppVar2 != __ptr + (uint)thread_count);
 }
 free(__ptr);
 iVar1 = 0x2a;
 if (shared_counter != thread_count * local_4) {
 iVar1 = -3;
 }
 }
 return iVar1;
}



/* Function: call_mutex_lock @ 00102ddc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: param_condition_variable @ 00102df8 */

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
 pthread_cancel(consumer);
 iVar1 = -2;
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



/* Function: call_condition_variable @ 00102ec8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: param_atomic_ops @ 00102edc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 int iVar2;
 pthread_t *__ptr;
 pthread_t *__newthread;
 long lVar3;
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
 __newthread = __ptr;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar2 != 0) {
 free(__ptr);
 iVar2 = -2;
 goto LAB_00102fd4;
 }
 __newthread = __newthread + 1;
 } while (__newthread != __ptr + (uint)thread_count);
 iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 if (iVar2 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 lVar3 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 pthread_join(__ptr[lVar3],(void **)0x0);
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < thread_count);
 }
 aVar1 = atomic_counter;
 free(__ptr);
 iVar2 = 0x2a;
 if (aVar1 < 1) {
 iVar2 = -3;
 }
 }
LAB_00102fd4:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return iVar2;
}



/* Function: call_atomic_ops @ 00103064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: param_thread_local_storage @ 00103080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_thread_local_storage(int thread_count)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar2;
 ulong uVar3;
 long lVar4;
 int iVar5;
 undefined8 *puVar6;
 int iVar8;
 pthread_t *__newthread;
 ulong uVar9;
 void *ret;
 long local_8;
 undefined8 *puVar7;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 local_8 = ___stack_chk_guard;
 uVar3 = -(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)thread_count << 3
 ;
 __ptr = malloc(uVar3);
 __ptr_00 = malloc(uVar3);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined8 *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar8 = 0;
 iVar5 = 0;
 }
 else {
 uVar9 = (ulong)(uint)thread_count;
 uVar3 = 0;
 do {
 pvVar2 = malloc(0x10);
 __ptr_00[uVar3] = pvVar2;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar3 & 0xffffffff);
 uVar3 = uVar3 + 1;
 } while (uVar3 != uVar9);
 uVar3 = 0;
 /* Unresolved local var: int i@[???] */
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar3]);
 if (iVar1 != 0) {
 /* Unresolved local var: int j@[???] */
 if (-1 < (int)uVar3) {
 puVar6 = __ptr_00;
 do {
 puVar7 = puVar6 + 1;
 free((void *)*puVar6);
 puVar6 = puVar7;
 } while (puVar7 != __ptr_00 + (uVar3 & 0xffffffff) + 1);
 }
 free(__ptr_00);
 free(__ptr);
 iVar1 = -2;
 goto LAB_001031ec;
 }
 uVar3 = uVar3 + 1;
 __newthread = __newthread + 1;
 } while (uVar3 != uVar9);
 lVar4 = 0;
 /* Unresolved local var: int i@[???]
 Unresolved local var: int * values@[???] */
 iVar5 = 0;
 iVar8 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar4),&ret);
 iVar5 = iVar5 + *(int *)ret;
 iVar8 = iVar8 + *(int *)((long)ret + 4);
 free(ret);
 free(*(void **)((long)__ptr_00 + lVar4));
 lVar4 = lVar4 + 8;
 } while (lVar4 != uVar9 * 8);
 }
 free(__ptr_00);
 free(__ptr);
 iVar1 = 0x2a;
 if (thread_count * 100 != iVar5 || thread_count * 0x96 != iVar8) {
 iVar1 = -3;
 }
 }
LAB_001031ec:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: call_thread_local_storage @ 0010327c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00103294 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 
 puts(&DAT_001037c8);
 iVar1 = call_pthread_create();
 __printf_chk(1,&DAT_001037e8,iVar1);
 iVar1 = param_pthread_join();
 __printf_chk(1,&DAT_00103808,iVar1);
 iVar1 = call_mutex_lock();
 __printf_chk(1,&DAT_00103828,iVar1);
 iVar1 = param_condition_variable();
 __printf_chk(1,&DAT_00103848,iVar1);
 iVar1 = call_atomic_ops();
 __printf_chk(1,&DAT_00103868,iVar1);
 iVar1 = call_thread_local_storage();
 __printf_chk(1,&DAT_00103888,iVar1);
 return;
}



/* Function: main @ 00103340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 00103360 */

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



/* Function: __aarch64_ldadd4_acq_rel @ 001033a0 */

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




/* Total functions decompiled: 75 */
