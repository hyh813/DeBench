/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t, ssize_t, ptrdiff_t defined in sys/types.h */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra types for undefined bytes */
typedef char undefined;
typedef char undefined1;
typedef unsigned char undefined8;
typedef short undefined16;
typedef int undefined32;
typedef long long undefined64;
typedef int undefined4;
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef void (*code)();

/* Calling convention attribute for x86 */
#define __regparm1 __attribute__((regparm(1)))

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <pthread.h>
#include <sys/shm.h>
#include <errno.h>
#include <stdatomic.h>
#include <sys/ipc.h>

/* Missing type definitions */
typedef unsigned int uint;
typedef unsigned short ushort;

/* Missing function declarations */
char *strstr(const char *haystack, const char *needle);
char *strchr(const char *s, int c);
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
int strncmp(const char *s1, const char *s2, size_t n);
int sscanf(const char *str, const char *format, ...);
int __isoc99_sscanf(const char *str, const char *format, ...);
int *__errno_location(void);
int shmget(key_t key, size_t size, int shmflg);
int open(const char *pathname, int flags, ...);
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
pid_t fork(void);
pid_t waitpid(pid_t pid, int *status, int options);
int execl(const char *pathname, const char *arg, ... /*, (char *) NULL */);
void _exit(int status);
int pipe(int pipefd[2]);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int socket(int domain, int type, int protocol);
int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
__sighandler_t signal(int signum, __sighandler_t handler);
int raise(int sig);
unsigned int alarm(unsigned int seconds);
int usleep(useconds_t usec);
int fileno(FILE *stream);
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_cancel(pthread_t thread);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int snprintf(char *s, size_t n, const char *format, ...);

/* Additional type definitions - key_t, __pid_t, __sighandler_t already defined in headers */

/* Global variables used by signal handling */
volatile int signal_received = 0;
volatile int signal_number = 0;

/* Data symbols from binary */
char DAT_000143d8[] = "BinBench Da";
char DAT_000143cc[] = "BinBench Db";
char DAT_00014026[] = "test";
char DAT_0001436c[] = "=== Standard Library Function Tests ===";
char DAT_00014074[] = "String length: %zu\n";
char DAT_0001408f[] = "strcmp result: %d\n";
char DAT_000140aa[] = "strlen result: %d\n";
char DAT_000140c6[] = "memcmp result: 0x%x\n";
char DAT_000140e2[] = "Total memcmp: 0x%x\n";
char DAT_000140fe[] = "printf result: %d\n";
char DAT_0001411a[] = "scanf result: %d\n";
char DAT_00014137[] = "fopen/fileno result: %u\n";
char DAT_00014153[] = "fread/fwrite result: %d\n";
char DAT_0001416f[] = "malloc/free result: 0x%x\n";
char DAT_0001418b[] = "memset result: %d\n";
char DAT_000141a6[] = "strchr/strstr result: %d\n";
char DAT_000141f5[] = "syscall result: %u\n";
char DAT_00014211[] = "stat result: %u\n";
char DAT_0001422d[] = "fork/waitpid result: %u\n";
char DAT_00014249[] = "pipe result: %d\n";
char DAT_00014265[] = "socket result: %d\n";
char DAT_00014281[] = "shm result: %u\n";
char DAT_0001429d[] = "signal result: %d\n";
char DAT_000142c3[] = "pthread_create result: %d\n";
char DAT_000142df[] = "pthread_join sum: %d\n";
char DAT_000142fc[] = "mutex lock result: %d\n";
char DAT_00014318[] = "condition variable result: %d\n";
char DAT_00014334[] = "atomic ops result: %d\n";
char DAT_00014350[] = "TLS result: %d\n";
char DAT_00014390[] = "=== System Call Tests ===";
char DAT_000143ab[] = "=== Thread Concurrency Tests ===";

/* Global variables used by mutex/condition variables */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
volatile int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
volatile char ready = 0;
volatile char data = 0;

/* Atomic counter */
volatile int atomic_counter = 0;

/* Lock/Unlock macros for atomic operations */
#define LOCK() 
#define UNLOCK()

/* TLS base - used in thread_tls_test */
int *in_GS_OFFSET = (int *)0;

/* Signal handler function declaration */
void signal_handler(int sig);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_clang_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001141c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011420 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011559 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001155d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_strcpy @ 00011570 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return sVar1;
}



/* Function: call_strcpy @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 size_t sVar1;
 char local_24 [32];
 
 /* Unresolved local var: char[32] buffer@[???]
 Unresolved local var: int len@[???] */
 strncpy(local_24 + 4,"oLib",5);
 strncpy(local_24,"Hell",4);
 sVar1 = strlen(local_24);
 return sVar1;
}



/* Function: param_strcmp @ 000115f0 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = strcmp(s1,s2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_strcmp @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 int r1 = strcmp("test1", "test2");
 int r2 = strcmp("test", "test");
 int r3 = strcmp("abc", "xyz");
 (void)r1;
 (void)r2;
 (void)r3;
 return r1 != 0 && r2 == 0 && r3 != 0 ? 1 : 0;
}



/* Function: param_strlen @ 00011640 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return sVar1;
}



/* Function: call_strlen @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 00011680 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return n;
}



/* Function: call_memcpy @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 000116c0 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = memcmp(p1,p2,n);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_memcmp @ 00011700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int[3] arr1@[???]
 Unresolved local var: int[3] arr2@[???]
 Unresolved local var: int[3] arr3@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2 + iVar3;
}



/* Function: param_printf @ 00011770 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 000117a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 return iVar1;
}



/* Function: param_scanf @ 000117d0 */

int param_scanf(char *input_str)

{
 int iVar1;
 int iVar2;
 int local_c;
 int local_8;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&local_8,&local_c);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_c + local_8;
 }
 return iVar2;
}



/* Function: call_scanf @ 00011820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 00011870 */

int param_fopen_fclose(char *filename)

{
 FILE *__stream;
 int iVar1;
 
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



/* Function: call_fopen_fclose @ 000118c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 FILE *__stream;
 int iVar1;
 uint uVar2;
 
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = iVar1 >> 0x1f | 0x2a;
 }
 return uVar2;
}



/* Function: param_fread_fwrite @ 00011920 */

int param_fread_fwrite(char *tmpfile)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 int iVar3;
 undefined1 local_30 [32];
 
 /* Unresolved local var: char[32] read_buffer@[???]
 Unresolved local var: FILE * fp@[???]
 Unresolved local var: size_t written@[???]
 Unresolved local var: size_t read@[???]
 Unresolved local var: char * write_data@[???] */
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar2 = -1;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_30,1,0x12,__s);
 local_30[sVar1] = 0;
 fclose(__s);
 unlink(tmpfile);
 iVar2 = -3;
 if (sVar1 == 0x12) {
 iVar3 = memcmp(local_30,"BinBench Test Data",0x13);
 iVar2 = -3;
 if (iVar3 == 0) {
 iVar2 = 0x2a;
 }
 }
 }
 else {
 fclose(__s);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: call_fread_fwrite @ 00011a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00011a30 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 uint uVar1;
 int iVar2;
 uint uVar3;
 int unaff_ESI;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(size * 4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 uVar1 = 0;
 if (2 < size - 1) {
 uVar1 = 0;
 iVar2 = 0x14;
 do {
 __ptr[uVar1] = iVar2 + -0x14;
 __ptr[uVar1 + 1] = iVar2 + -10;
 __ptr[uVar1 + 2] = iVar2;
 __ptr[uVar1 + 3] = iVar2 + 10;
 uVar1 = uVar1 + 4;
 iVar2 = iVar2 + 0x28;
 } while ((size & 0xfffffffc) != uVar1);
 }
 if ((size & 3) != 0) {
 iVar2 = uVar1 * 10;
 uVar3 = 0;
 do {
 __ptr[uVar1 + uVar3] = iVar2;
 uVar3 = uVar3 + 1;
 iVar2 = iVar2 + 10;
 } while ((size & 3) != uVar3);
 }
 unaff_ESI = *__ptr;
 }
 iVar2 = unaff_ESI + __ptr[size - 1];
 free(__ptr);
 }
 return iVar2;
}



/* Function: call_malloc_free @ 00011af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 return 0x5a;
}



/* Function: param_memset @ 00011b00 */

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 /* Unresolved local var: uchar * bytes@[???]
 Unresolved local var: int sum@[???] */
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size == 0) {
 iVar1 = 0;
 }
 else {
 if (size - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = (uint)*(byte *)((int)buffer + uVar2 + 7) +
 (uint)*(byte *)((int)buffer + uVar2 + 6) +
 (uint)*(byte *)((int)buffer + uVar2 + 5) +
 (uint)*(byte *)((int)buffer + uVar2 + 4) +
 (uint)*(byte *)((int)buffer + uVar2 + 3) +
 (uint)*(byte *)((int)buffer + uVar2 + 2) +
 (uint)*(byte *)((int)buffer + uVar2 + 1) +
 (uint)*(byte *)((int)buffer + uVar2) + iVar1;
 uVar2 = uVar2 + 8;
 } while ((size & 0xfffffff8) != uVar2);
 }
 if ((size & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + (uint)*(byte *)((int)buffer + uVar3 + uVar2);
 uVar3 = uVar3 + 1;
 } while ((size & 7) != uVar3);
 }
 }
 return iVar1;
}



/* Function: call_memset @ 00011bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 /* Unresolved local var: int[10] buffer@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 00011bd0 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 char *pcVar1;
 char *pcVar2;
 
 /* Unresolved local var: char * pos1@[???]
 Unresolved local var: int index1@[???]
 Unresolved local var: char * pos2@[???]
 Unresolved local var: int index2@[???] */
 pcVar1 = strchr(str,(int)ch);
 pcVar2 = strstr(str,substr);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)str) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)str);
}



/* Function: call_strchr_strstr @ 00011c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00011c40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 int iVar4;
 uint uVar5;
 int local_34;
 int local_30 [2];
 undefined1 local_28;
 
 puts(&DAT_0001436c);
 /* Unresolved local var: char[32] buffer@[???] */
 local_28 = 0;
 local_30[1] = 0x62694c6f;
 local_30[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_30);
 printf(&DAT_00014074,sVar1);
 printf(&DAT_0001408f,0);
 printf(&DAT_000140aa,0xc);
 printf(&DAT_000140c6,0x5a);
 /* Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int ret@[???] */
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar3 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar4 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar4 = 1;
 }
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 printf(&DAT_000140e2,iVar3 + iVar4);
 iVar2 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 printf(&DAT_000140fe,iVar2);
 /* Unresolved local var: int ret@[???] */
 iVar2 = __isoc99_sscanf("123,456","%d,%d",local_30,&local_34);
 local_34 = local_34 + local_30[0];
 uVar5 = 0xffffffff;
 if (iVar2 != 2) {
 local_34 = -1;
 }
 printf(&DAT_0001411a,local_34);
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar5 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_00014137,uVar5);
 iVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00014153,iVar2);
 printf(&DAT_0001416f,0x5a);
 printf(&DAT_0001418b,0);
 printf(&DAT_000141a6,0xf);
 return;
}



/* Function: param_linux_syscall @ 00011e40 */

int __regparm1 param_linux_syscall(char *pathname)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 undefined4 uVar4;
 
 /* Unresolved local var: int fd@[???] */
 uVar4 = 0x11e48;
 uVar3 = 0;
 iVar1 = syscall(5);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,pathname);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 00011e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar3 = 0;
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3);
 }
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00011ef0 */

int param_win32_api(char *filename)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct stat local_5c;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat(filename,&local_5c);
 iVar3 = -2;
 if (0 < local_5c.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: call_win32_api @ 00011f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct stat local_5c;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_5c);
 iVar3 = -2;
 if (0 < local_5c.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: param_fork_exec @ 00011f90 */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint local_8;
 
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (_Var1 < 0) {
 return -1;
 }
 if (_Var1 == 0) {
 execl(prog,prog,arg,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 return -2;
 }
 if ((local_8 & 0x7f) != 0) {
 return -3;
 }
 return (local_8 >> 8) & 0xff;
}



/* Function: call_fork_exec @ 00012010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 uVar2 = 0xffffffff;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 uVar2 = -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return uVar2;
}



/* Function: param_pipe_communication @ 00012080 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 int local_30;
 int local_2c;
 undefined1 local_28 [32];
 
 /* Unresolved local var: int[2] pipefd@[???]
 Unresolved local var: char[32] buffer@[???]
 Unresolved local var: pid_t pid@[???] */
 iVar1 = pipe(&local_30);
 if (iVar1 < 0) {
 return -1;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 /* Unresolved local var: ssize_t bytes@[???] */
 close(local_2c);
 sVar3 = read(local_30,local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30);
 wait((void *)0x0);
 iVar1 = -3;
 if (0 < sVar3) {
 iVar1 = 0x2a;
 }
 return iVar1;
 }
 /* Unresolved local var: char * msg@[???] */
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 return -2;
}



/* Function: call_pipe_communication @ 00012160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 00012180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_20;
 struct sockaddr local_1c;
 
 /* Unresolved local var: sockaddr_in addr@[???]
 Unresolved local var: int sock@[???]
 Unresolved local var: int opt@[???] */
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 local_20 = 1;
 iVar2 = setsockopt(iVar1,1,2,&local_20,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
 local_1c.sa_data[10] = '\0';
 local_1c.sa_data[0xb] = '\0';
 local_1c.sa_data[0xc] = '\0';
 local_1c.sa_data[0xd] = '\0';
 local_1c.sa_data[6] = '\0';
 local_1c.sa_data[7] = '\0';
 local_1c.sa_data[8] = '\0';
 local_1c.sa_data[9] = '\0';
 local_1c.sa_family = 2;
 local_1c.sa_data[0] = '\0';
 local_1c.sa_data[1] = '\0';
 local_1c.sa_data[2] = '\0';
 local_1c.sa_data[3] = '\0';
 local_1c.sa_data[4] = '\0';
 local_1c.sa_data[5] = '\0';
 iVar2 = bind(iVar1,&local_1c,0x10);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -3;
 }
 else {
 iVar2 = listen(iVar1,5);
 close(iVar1);
 iVar1 = 0x2a;
 if (iVar2 < 0) {
 iVar1 = -4;
 }
 }
 }
 }
 return iVar1;
}



/* Function: call_socket_create @ 00012270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00012290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[???]
 Unresolved local var: int shmid@[???]
 Unresolved local var: char * shm@[???]
 Unresolved local var: int len@[???] */
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 sVar2 = 0xffffffff;
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
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



/* Function: call_shmget_shmat @ 00012380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 iVar2 = -1;
 if (0 < iVar1) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_signal_handling @ 000123b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 bool bVar1;
 __sighandler_t p_Var2;
 int iVar3;
 uint uVar4;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 return -1;
 }
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 return -2;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 uVar4 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar1 = 1 < uVar4;
 uVar4 = uVar4 - 1;
 } while (bVar1);
 }
 if (signal_received == 0) {
 return -3;
 }
 iVar3 = -4;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 uVar4 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar1 = 1 < uVar4;
 uVar4 = uVar4 - 1;
 } while (bVar1);
 }
 iVar3 = -5;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar3 = 0x2a;
 }
 }
 return iVar3;
}



/* Function: signal_handler @ 00012520 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00012550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00012570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 int iVar1;
 int *piVar2;
 __pid_t _Var3;
 uint uVar4;
 undefined4 uVar5;
 undefined4 uVar6;
 struct stat local_6c;
 
 puts(&DAT_00014390);
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar6 = 0;
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar6);
 }
 printf(&DAT_000141f5,iVar1 >> 0x1f | 0x2a);
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_6c);
 uVar6 = 0xfffffffe;
 if (0 < local_6c.st_size) {
 uVar6 = 0x2a;
 }
 uVar5 = 0xffffffff;
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00014211,uVar6);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var3 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var3 = waitpid(_Var3,(int *)&local_6c,0);
 if ((_Var3 < 0) || (((uint)local_6c.st_dev & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = -(uint)(((uint)local_6c.st_dev & 0xff00) != 0) | 0x2a;
 }
 }
 printf(&DAT_0001422d,uVar4);
 iVar1 = param_pipe_communication();
 printf(&DAT_00014249,iVar1);
 iVar1 = param_socket_create();
 printf(&DAT_00014265,iVar1);
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00014281,uVar5);
 iVar1 = param_signal_handling();
 printf(&DAT_0001429d,iVar1);
 return;
}



/* Function: thread_compute @ 00012700 */

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



/* Function: param_pthread_create @ 00012730 */

int param_pthread_create(int x)

{
 int iVar1;
 int iVar2;
 int *local_14;
 int local_10;
 pthread_t local_c;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_10 = x;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 iVar2 = *local_14;
 free(local_14);
 }
 return iVar2;
}



/* Function: call_pthread_create @ 000127a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int iVar2;
 int *local_14;
 undefined4 local_10;
 pthread_t local_c;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 iVar2 = *local_14;
 free(local_14);
 }
 return iVar2;
}



/* Function: thread_sum @ 00012810 */

void * thread_sum(void *arg)

{
 uint uVar1;
 int iVar2;
 longlong lVar3;
 
 /* Unresolved local var: ThreadData * data@[???] */
 *(undefined4 *)((int)arg + 8) = 0;
 /* Unresolved local var: int i@[???] */
 uVar1 = *(uint *)arg;
 iVar2 = *(int *)((int)arg + 4);
 if ((int)uVar1 <= iVar2) {
 lVar3 = (ulonglong)(iVar2 + ~uVar1) * (ulonglong)(iVar2 - uVar1);
 *(uint *)((int)arg + 8) =
 (uVar1 + 1) * (iVar2 - uVar1) + uVar1 +
 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 00012850 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 pthread_t pVar1;
 pthread_t pVar2;
 int iVar3;
 int iVar4;
 pthread_t local_40;
 pthread_t local_3c;
 pthread_t local_38 [10];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 local_38[9] = 0;
 local_38[6] = 0;
 local_38[3] = 0;
 local_38[1] = 1;
 local_38[2] = 10;
 local_38[4] = 0xb;
 local_38[5] = 0x14;
 local_38[7] = 0x15;
 local_38[8] = 0x1e;
 /* Unresolved local var: int i@[???] */
 iVar3 = pthread_create(&local_40,(pthread_attr_t *)0x0,thread_sum,local_38 + 1);
 iVar4 = -1;
 if (iVar3 == 0) {
 iVar3 = pthread_create(&local_3c,(pthread_attr_t *)0x0,thread_sum,local_38 + 4);
 if (iVar3 == 0) {
 iVar3 = pthread_create(local_38,(pthread_attr_t *)0x0,thread_sum,local_38 + 7);
 if (iVar3 == 0) {
 /* Unresolved local var: int i@[???] */
 iVar3 = pthread_join(local_40,(void **)0x0);
 pVar1 = local_38[3];
 iVar4 = -2;
 if (iVar3 == 0) {
 iVar3 = pthread_join(local_3c,(void **)0x0);
 pVar2 = local_38[6];
 if (iVar3 == 0) {
 iVar3 = pthread_join(local_38[0],(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = pVar2 + pVar1 + local_38[9];
 }
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: call_pthread_join @ 00012970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: thread_increment @ 00012990 */

void * thread_increment(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: int iterations@[???] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 do {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return (void *)0x0;
}



/* Function: param_mutex_lock @ 00012a00 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *__newthread;
 int iVar2;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 __ptr = malloc(thread_count * 4);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 __newthread = __ptr;
 iVar2 = thread_count;
 if (0 < thread_count) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,
 &iterations_per_thread);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 iVar2 = iVar2 + -1;
 __newthread = __newthread + 1;
 } while (iVar2 != 0);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar2 = 0;
 do {
 pthread_join(__ptr[iVar2],(void **)0x0);
 iVar2 = iVar2 + 1;
 } while (thread_count != iVar2);
 }
 }
 free(__ptr);
 iVar2 = -3;
 if (shared_counter == thread_count * iterations_per_thread) {
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: call_mutex_lock @ 00012af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00012b20 */

void * consumer_thread(void *arg)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
 /* Unresolved local var: int received@[???]
 Unresolved local var: int * ret@[???] */
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 puVar1 = malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}



/* Function: producer_thread @ 00012ba0 */

void * producer_thread(void *arg)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: param_condition_variable @ 00012c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int iVar2;
 pthread_t local_14;
 int *local_10;
 pthread_t local_c;
 
 /* Unresolved local var: pthread_t consumer@[???]
 Unresolved local var: pthread_t producer@[???]
 Unresolved local var: void * consumer_ret@[???]
 Unresolved local var: int result@[???] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_14,&local_10);
 pthread_join(local_c,(void **)0x0);
 iVar2 = *local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_14);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: call_condition_variable @ 00012cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 00012cd0 */

void * thread_atomic_increment(void *arg)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 
 /* Unresolved local var: int iterations@[???] */
 uVar3 = *(uint *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < (int)uVar3) {
 uVar5 = uVar3 & 3;
 uVar4 = 0;
 if (2 < uVar3 - 1) {
 uVar4 = 0;
 do {
 LOCK();
 uVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 1000;
 LOCK();
 if (uVar4 != uVar1) {
 atomic_counter = uVar1;
 }
 UNLOCK();
 LOCK();
 iVar2 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3e9;
 LOCK();
 if (uVar4 + 1 != iVar2) {
 atomic_counter = iVar2;
 }
 UNLOCK();
 LOCK();
 iVar2 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3ea;
 LOCK();
 if (uVar4 + 2 != iVar2) {
 atomic_counter = iVar2;
 }
 UNLOCK();
 LOCK();
 iVar2 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3eb;
 LOCK();
 if (uVar4 + 3 != iVar2) {
 atomic_counter = iVar2;
 }
 UNLOCK();
 uVar4 = uVar4 + 4;
 } while (uVar4 != (uVar3 & 0xfffffffc));
 }
 for (; uVar5 != 0; uVar5 = uVar5 - 1) {
 LOCK();
 uVar3 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 1000;
 LOCK();
 if (uVar4 != uVar3) {
 atomic_counter = uVar3;
 }
 UNLOCK();
 uVar4 = uVar4 + 1;
 }
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00012db0 */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00012dd0 */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 pthread_t *__ptr;
 int iVar2;
 int iVar3;
 pthread_t *__newthread;
 pthread_t local_14;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: pthread_t load_store_tid@[???]
 Unresolved local var: int final_value@[???] */
 __ptr = malloc(thread_count * 4);
 if (__ptr == (pthread_t *)0x0) {
 iVar3 = -1;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 /* Unresolved local var: int i@[???] */
 iVar3 = thread_count;
 __newthread = __ptr;
 if (0 < thread_count) {
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&iterations
 );
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 iVar3 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_14,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (thread_count != iVar3);
 }
 aVar1 = atomic_counter;
 free(__ptr);
 iVar3 = -3;
 if (0 < aVar1) {
 iVar3 = 0x2a;
 }
 }
 return iVar3;
}



/* Function: call_atomic_ops @ 00012ee0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 00012f10 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 iVar2 = ((int *)arg)[-1];
 iVar1 = iVar2 + 0x32;
 ((int *)arg)[-1] = iVar1;
 strncpy((char *)(((int *)arg)[-2]),arg,0x1f);
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}



/* Function: param_thread_local_storage @ 00012f70 */

int param_thread_local_storage(int thread_count)

{
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 int iVar1;
 pthread_t *__newthread;
 int iVar2;
 int iVar3;
 int *local_14;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 __ptr = malloc(thread_count * 4);
 __ptr_00 = malloc(thread_count * 4);
 if (__ptr == (pthread_t *)0x0) {
 return -1;
 }
 if (__ptr_00 == (void *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar2 = 0;
 do {
 __s = malloc(0x10);
 *(char **)((int)__ptr_00 + iVar2 * 4) = __s;
 snprintf(__s,0x10,"Thread-%d",iVar2);
 iVar2 = iVar2 + 1;
 } while (thread_count != iVar2);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar2 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((int)__ptr_00 + iVar2 * 4));
 if (iVar1 != 0) {
 iVar1 = -1;
 do {
 free(*(void **)((int)__ptr_00 + iVar1 * 4 + 4));
 iVar1 = iVar1 + 1;
 } while (iVar2 != iVar1);
 free(__ptr_00);
 free(__ptr);
 return -2;
 }
 iVar2 = iVar2 + 1;
 __newthread = __newthread + 1;
 } while (thread_count != iVar2);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar3 = 0;
 iVar2 = 0;
 iVar1 = 0;
 do {
 /* Unresolved local var: void * ret@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(__ptr[iVar3],&local_14);
 iVar1 = iVar1 + *local_14;
 iVar2 = iVar2 + local_14[1];
 free(local_14);
 free(*(void **)((int)__ptr_00 + iVar3 * 4));
 iVar3 = iVar3 + 1;
 } while (thread_count != iVar3);
 goto LAB_000130b6;
 }
 }
 }
 iVar1 = 0;
 iVar2 = 0;
LAB_000130b6:
 free(__ptr_00);
 free(__ptr);
 iVar3 = -3;
 if (thread_count * 0x96 == iVar2 && thread_count * 100 == iVar1) {
 iVar3 = 0x2a;
 }
 return iVar3;
}



/* Function: call_thread_local_storage @ 00013140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00013170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *local_14;
 undefined4 local_10;
 pthread_t local_c;
 
 puts(&DAT_000143ab);
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 printf(&DAT_000142c3,uVar2);
 iVar1 = param_pthread_join();
 printf(&DAT_000142df,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 printf(&DAT_000142fc,iVar1);
 iVar1 = param_condition_variable();
 printf(&DAT_00014318,iVar1);
 iVar1 = param_atomic_ops(4,500);
 printf(&DAT_00014334,iVar1);
 iVar1 = param_thread_local_storage(4);
 printf(&DAT_00014350,iVar1);
 return;
}



/* Function: main @ 00013290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 75 */
