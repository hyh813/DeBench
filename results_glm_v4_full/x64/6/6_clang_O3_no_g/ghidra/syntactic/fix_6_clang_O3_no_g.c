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
typedef unsigned int useconds_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char bool;
typedef int __pid_t;
typedef int pid_t;
typedef int key_t;
typedef void (*code)(void);
typedef void (*__sighandler_t)(int);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <syscall.h>
#include <errno.h>
#include <stdarg.h>
#include <fcntl.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <time.h>

/* Additional missing headers */
#include <strings.h>
#include <sys/time.h>

/* Socket constants that might be missing */
#ifndef SOL_SOCKET
#define SOL_SOCKET 1
#endif

#ifndef SO_REUSEADDR
#define SO_REUSEADDR 2
#endif

/* AF_INET family definition if missing */
#ifndef AF_INET
#define AF_INET 2
#endif

/* socklen_t type if not defined */
#ifndef _SOCKLEN_T
typedef unsigned int socklen_t;
#define _SOCKLEN_T
#endif

/* Ghidra decompiler helper type replacements */
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint64_t undefined8;
typedef unsigned int uint;
typedef uint8_t byte;
typedef uint64_t ulong;
typedef int32_t int32;
typedef uint64_t unkuint10;
typedef unsigned short ushort;
typedef unsigned int undefined4;
typedef struct {
    unsigned int _0_12_:12;
    unsigned int _10_3_:3;
} bitfield_13_t;

/* Forward declarations */
void signal_handler(int param_1);

/* Ensure pthread_attr_t is visible */
#if !defined(_PTHREAD_ATTR_T_DEFINED)
typedef struct {
    void *__size;
    long __align;
} pthread_attr_t;
#define _PTHREAD_ATTR_T_DEFINED
#endif

/* POSIX function declarations that might not be visible */
int fileno(FILE *stream);
int unlink(const char *pathname);
unsigned int alarm(unsigned int seconds);
int pthread_cancel(pthread_t thread);
void _exit(int status);
void rewind(FILE *stream);
unsigned int sleep(unsigned int seconds);
int usleep(useconds_t usec);
key_t ftok(const char *pathname, int proj_id);
int shmdt(const void *shmaddr);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);
void raise(int sig);
int open(const char *pathname, int flags, mode_t mode);
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
pid_t waitpid(pid_t pid, int *wstatus, int options);
int execl(const char *pathname, const char *arg, ...);
pid_t wait(int *wstatus);
int shmget(key_t key, size_t size, int shmflg);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int socket(int domain, int type, int protocol);
int stat(const char *pathname, struct stat *statbuf);
int snprintf(char *str, size_t size, const char *format, ...);
int puts(const char *s);
long syscall(long number, ...);

/* Fix undefined4 to be compatible with int for printf format strings */
typedef int undefined4_compat;
typedef unsigned int undefined4_ucompat;

/* GNU libc internal function declaration */
int *__errno_location(void);

/* Global variables */
volatile int signal_received = 0;
volatile int signal_number = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
volatile int ready = 0;
volatile int data = 0;
volatile int shared_counter = 0;
volatile int atomic_counter = 0;

/* Global data constants */
undefined8 _DAT_00104040 = 0;
const char DAT_001040d9[] = "TestName";
const char DAT_00104127[] = "strlen: %u\n";
const char DAT_00104142[] = "strcmp: %d\n";
const char DAT_0010415d[] = "strlen: %u\n";
const char DAT_00104179[] = "memcpy: 0x%x\n";
const char DAT_00104195[] = "memcmp: 0x%x\n";
const char DAT_001041b1[] = "printf chars: %u\n";
const char DAT_001041cd[] = "scanf: %lu\n";
const char DAT_001041ea[] = "fopen/fclose: 0x%x\n";
const char DAT_00104206[] = "fwrite/fread: 0x%lx\n";
const char DAT_00104222[] = "malloc/free: 0x%x\n";
const char DAT_0010423e[] = "memset: %d\n";
const char DAT_00104259[] = "strchr/strstr: 0x%x\n";
const char DAT_001042a8[] = "syscall: 0x%x\n";
const char DAT_001042c4[] = "stat: 0x%x\n";
const char DAT_001042e0[] = "fork/exec: 0x%lx\n";
const char DAT_001042fc[] = "pipe: 0x%lx\n";
const char DAT_00104318[] = "socket: 0x%lx\n";
const char DAT_00104334[] = "shm: 0x%lx\n";
const char DAT_00104350[] = "signal: 0x%lx\n";
const char DAT_00104376[] = "pthread_create: 0x%lx\n";
const char DAT_00104392[] = "pthread_join: 0x%lx\n";
const char DAT_001043af[] = "mutex: 0x%lx\n";
const char DAT_001043cb[] = "condvar: 0x%lx\n";
const char DAT_001043e7[] = "atomic: 0x%lx\n";
const char DAT_00104403[] = "tls: 0x%lx\n";
const char DAT_0010441f[] = "=== Testing Standard Library Functions ===";
const char DAT_00104443[] = "=== Testing System Calls ===";
const char DAT_0010445e[] = "=== Testing Thread Concurrency ===";

/* Ghidra helper macros */
#define SUB161(x, y) (((int16_t)(x)) - ((int16_t)(y)))
#define ZEXT712(x) ((uint64_t)(x))
#define ZEXT812(x) ((uint64_t)(x))
#define CONCAT44(high, low) ((((uint64_t)(high)) << 32) | ((uint32_t)(low)))
#define CONCAT12(high, low) ((((uint64_t)(high)) << 16) | ((uint16_t)(low)))
#define CONCAT13(high, low) ((((uint64_t)(high)) << 48) | ((uint64_t)(low)))
#define CONCAT32(high, low) ((((uint64_t)(high)) << 32) | ((uint32_t)(low)))
#define CONCAT72(high, low) ((((uint64_t)(high)) << 64) | ((uint64_t)(low)))
#define SUB137(x, y) (((uint64_t)(x)) - ((uint64_t)(y)))

/* Atomic operation helper macros */
#define LOCK() pthread_mutex_lock(&counter_mutex)
#define UNLOCK() pthread_mutex_unlock(&counter_mutex)

/* Thread-local storage via FS segment (x86_64) */
static inline void *get_fs_base(void) {
    void *fs_base;
    __asm__ volatile ("mov %%fs:0, %0" : "=r" (fs_base));
    return fs_base;
}

/* Replace builtin_strncpy with strncpy */
#define builtin_strncpy strncpy

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(void *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 001024b0 */

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 001024d0 */

void call_strcpy(void)

{
 char local_28 [40];
 
 builtin_strncpy(local_28,"HelloLib",9);
 strlen(local_28);
 return;
}



/* Function: param_strcmp @ 00102500 */

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



/* Function: call_strcmp @ 00102520 */

undefined8 call_strcmp(void)

{
 return 0;
}



/* Function: call_strlen @ 00102540 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00102550 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00102560 */

undefined8 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00102570 */

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



/* Function: call_memcmp @ 00102590 */

undefined8 call_memcmp(void)

{
 return 0xffffffff;
}



/* Function: param_printf @ 001025a0 */

void param_printf(ulong param_1,undefined8 param_2)

{
 printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return;
}



/* Function: call_printf @ 001025c0 */

void call_printf(void)

{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 return;
}



/* Function: param_scanf @ 001025e0 */

int param_scanf(undefined8 param_1)

{
 int iVar1;
 int iVar2;
 union { undefined8 u64; int i32[2]; } local_8;
 
 iVar1 = sscanf(param_1,"%d,%d",&local_8.i32[0],&local_8.i32[1]);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_8.i32[0] + local_8.i32[1];
 }
 return iVar2;
}



/* Function: call_scanf @ 00102610 */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 union { undefined8 u64; int i32[2]; } local_8;
 
 iVar1 = sscanf("123,456","%d,%d",&local_8.i32[0],&local_8.i32[1]);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_8.i32[0] + local_8.i32[1];
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 00102650 */

int param_fopen_fclose(char *param_1)

{
 int iVar1;
 FILE *__stream;
 
 __stream = fopen(param_1,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
}



/* Function: call_fopen_fclose @ 00102690 */

uint call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 uint uVar2;
 
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



/* Function: param_fread_fwrite @ 001026e0 */

undefined8 param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 undefined8 uVar2;
 undefined1 auVar3 [16];
 undefined1 auVar4 [16];
 char local_38 [4];
 char cStack_34;
 char cStack_33;
 char cStack_32;
 char cStack_31;
 char cStack_30;
 char cStack_2f;
 char cStack_2e;
 char cStack_2d;
 char cStack_2c;
 char cStack_2b;
 char cStack_2a;
 char cStack_29;
 char cStack_28;
 char cStack_27;
 char cStack_26;
 
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_38,1,0x12,__s);
 local_38[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 auVar4[0] = -(local_38[3] == 'B');
 auVar4[1] = -(cStack_34 == 'e');
 auVar4[2] = -(cStack_33 == 'n');
 auVar4[3] = -(cStack_32 == 'c');
 auVar4[4] = -(cStack_31 == 'h');
 auVar4[5] = -(cStack_30 == ' ');
 auVar4[6] = -(cStack_2f == 'T');
 auVar4[7] = -(cStack_2e == 'e');
 auVar4[8] = -(cStack_2d == 's');
 auVar4[9] = -(cStack_2c == 't');
 auVar4[10] = -(cStack_2b == ' ');
 auVar4[0xb] = -(cStack_2a == 'D');
 auVar4[0xc] = -(cStack_29 == 'a');
 auVar4[0xd] = -(cStack_28 == 't');
 auVar4[0xe] = -(cStack_27 == 'a');
 auVar4[0xf] = -(cStack_26 == '\0');
 auVar3[0] = -(local_38[0] == 'B');
 auVar3[1] = -(local_38[1] == 'i');
 auVar3[2] = -(local_38[2] == 'n');
 auVar3[3] = -(local_38[3] == 'B');
 auVar3[4] = -(cStack_34 == 'e');
 auVar3[5] = -(cStack_33 == 'n');
 auVar3[6] = -(cStack_32 == 'c');
 auVar3[7] = -(cStack_31 == 'h');
 auVar3[8] = -(cStack_30 == ' ');
 auVar3[9] = -(cStack_2f == 'T');
 auVar3[10] = -(cStack_2e == 'e');
 auVar3[0xb] = -(cStack_2d == 's');
 auVar3[0xc] = -(cStack_2c == 't');
 auVar3[0xd] = -(cStack_2b == ' ');
 auVar3[0xe] = -(cStack_2a == 'D');
 auVar3[0xf] = -(cStack_29 == 'a');
 auVar3 = auVar3 & auVar4;
 uVar2 = 0xfffffffd;
 if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
 (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
 (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) == 0xffff) {
 uVar2 = 0x2a;
 }
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}



/* Function: call_fread_fwrite @ 001027c0 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 001027d0 */

/* WARNING: Removing unreachable block (ram,0x00102945) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_malloc_free(ulong param_1)

{
 int *piVar1;
 int *__ptr;
 ulong uVar2;
 int iVar3;
 ulong uVar4;
 int unaff_EBP;
 long lVar5;
 ulong uVar6;
 int iVar9;
 uint8_t auVar7 [16];
 int iVar10;
 uint8_t auVar8 [16];
 int iVar11;
 int iVar12;
 int iVar14;
 uint8_t auVar13 [16];
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 == 0) goto LAB_00102921;
 if (param_1 < 8) {
 uVar2 = 0;
LAB_00102904:
 iVar3 = (int)uVar2 * 10;
 do {
 __ptr[uVar2] = iVar3;
 uVar2 = uVar2 + 1;
 iVar3 = iVar3 + 10;
 } while (param_1 != uVar2);
 }
 else {
 uVar2 = param_1 & 0xfffffffffffffff8;
 uVar4 = (uVar2 - 8 >> 3) + 1;
 if (uVar2 - 8 == 0) {
 iVar3 = 0;
 iVar10 = 10;
 iVar9 = 0x14;
 iVar11 = 0x1e;
 lVar5 = 0;
LAB_001028e8:
 piVar1 = __ptr + lVar5;
 *piVar1 = iVar3;
 piVar1[1] = iVar10;
 piVar1[2] = iVar9;
 piVar1[3] = iVar11;
 piVar1 = __ptr + lVar5 + 4;
 *piVar1 = iVar3 + 0x28;
 piVar1[1] = iVar10 + 0x28;
 piVar1[2] = iVar9 + 0x28;
 piVar1[3] = iVar11 + 0x28;
 }
 else {
 uVar6 = uVar4 & 0xfffffffffffffffe;
 lVar5 = 0;
 memcpy(auVar7, &_DAT_00104040, 16);
 do {
 iVar9 = *(int32_t *)(&auVar7[0]) * 10;
 iVar11 = (int)(((int64_t)*(int64_t *)(&auVar7[8]) & 0xffffffff) * 10);
 iVar3 = *(int32_t *)(&auVar7[4]);
 iVar10 = *(int32_t *)(&auVar7[12]);
 *(int32_t *)(&auVar13[4]) = iVar3;
 *(int32_t *)(&auVar13[0]) = iVar3;
 *(int32_t *)(&auVar13[8]) = iVar10;
 *(int32_t *)(&auVar13[12]) = iVar10;
 iVar12 = iVar3 * 10;
 iVar14 = (int)(((int64_t)*(int64_t *)(&auVar13[8]) & 0xffffffff) * 10);
 piVar1 = __ptr + lVar5;
 *(ulong *)piVar1 = CONCAT44(iVar12,iVar9);
 piVar1[4] = iVar11;
 piVar1[5] = iVar14;
 piVar1 = __ptr + lVar5 + 4;
 *piVar1 = iVar9 + 0x28;
 piVar1[1] = iVar12 + 0x28;
 piVar1[2] = iVar11 + 0x28;
 piVar1[3] = iVar14 + 0x28;
 piVar1 = __ptr + lVar5 + 8;
 *piVar1 = iVar9 + 0x50;
 piVar1[1] = iVar12 + 0x50;
 piVar1[2] = iVar11 + 0x50;
 piVar1[3] = iVar14 + 0x50;
 piVar1 = __ptr + lVar5 + 0xc;
 *piVar1 = iVar9 + 0x78;
 piVar1[1] = iVar12 + 0x78;
 piVar1[2] = iVar11 + 0x78;
 piVar1[3] = iVar14 + 0x78;
 lVar5 = lVar5 + 0x10;
 *(int32_t *)(&auVar8[0]) = *(int32_t *)(&auVar7[0]) + 0x10;
 *(int32_t *)(&auVar8[4]) = iVar3 + 0x10;
 *(int32_t *)(&auVar8[8]) = *(int32_t *)(&auVar7[8]) + 0x10;
 *(int32_t *)(&auVar8[12]) = iVar10 + 0x10;
 uVar6 = uVar6 - 2;
 memcpy(auVar7, auVar8, 16);
 } while (uVar6 != 0);
 *(int32_t *)(&auVar7[4]) = *(int32_t *)(&auVar8[4]);
 *(int32_t *)(&auVar7[0]) = *(int32_t *)(&auVar8[4]);
 *(int32_t *)(&auVar7[8]) = *(int32_t *)(&auVar8[12]);
 *(int32_t *)(&auVar7[12]) = *(int32_t *)(&auVar8[12]);
 iVar3 = *(int32_t *)(&auVar8[0]) * 10;
 iVar9 = (int)(((int64_t)*(int64_t *)(&auVar8[8]) & 0xffffffff) * 10);
 iVar10 = *(int32_t *)(&auVar8[4]) * 10;
 iVar11 = (int)(((int64_t)*(int64_t *)(&auVar7[8]) & 0xffffffff) * 10);
 if ((uVar4 & 1) != 0) goto LAB_001028e8;
 }
 if (uVar2 != param_1) goto LAB_00102904;
 }
 unaff_EBP = *__ptr;
LAB_00102921:
 iVar3 = __ptr[param_1 - 1];
 free(__ptr);
 /* WARNING: Read-only address (ram,0x00104040) is written */
 return unaff_EBP + iVar3;
}



/* Function: call_malloc_free @ 00102950 */

undefined8 call_malloc_free(void)

{
 return 0x5a;
}



/* Function: param_memset @ 00102960 */

int param_memset(void *param_1,size_t param_2)

{
 unsigned char *ptr;
 size_t i;
 int sum = 0;
 
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 return 0;
 }
 
 ptr = (unsigned char *)param_1;
 for (i = 0; i < param_2; i++) {
 sum += ptr[i];
 }
 return sum;
}



/* Function: call_memset @ 00102aa0 */

undefined8 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00102ab0 */

int param_strchr_strstr(char *param_1,int param_2,char *param_3)

{
 char *pcVar1;
 char *pcVar2;
 
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}



/* Function: call_strchr_strstr @ 00102af0 */

undefined8 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 00102b00 */

void test_standard_library_functions(void)

{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 uint uVar4;
 int local_3c;
 int local_38 [2];
 undefined1 local_30;
 
 puts(&DAT_0010441f);
 local_38[0] = 0x6c6c6548;
 local_38[1] = 0x62694c6f;
 local_30 = 0;
 sVar3 = strlen((char *)local_38);
 printf(&DAT_00104127,sVar3 & 0xffffffff);
 printf(&DAT_00104142,0);
 printf(&DAT_0010415d,0xc);
 printf(&DAT_00104179,0x5a);
 uVar4 = 0xffffffff;
 printf(&DAT_00104195,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 printf(&DAT_001041b1,(ulong)uVar1);
 iVar2 = sscanf("123,456","%d,%d",local_38,&local_3c);
 uVar1 = local_3c + local_38[0];
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_001041cd,(ulong)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar4 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_001041ea,(ulong)uVar4);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104206,(ulong)uVar1);
 printf(&DAT_00104222,0x5a);
 printf(&DAT_0010423e,0);
 printf(&DAT_00104259,0xf);
 return;
}



/* Function: param_linux_syscall @ 00102c90 */

ulong param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 
 uVar1 = syscall(2,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (ulong)(uint)-*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}



/* Function: call_linux_syscall @ 00102cd0 */

uint call_linux_syscall(void)

{
 ulong uVar1;
 int *piVar2;
 int iVar3;
 
 uVar1 = syscall(2,"/etc/passwd",0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 piVar2 = __errno_location();
 iVar3 = -*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return iVar3 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00102d20 */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 struct stat local_90;
 
 iVar1 = stat(param_1,&local_90);
 uVar3 = 0xfffffffe;
 if (0 < local_90.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}



/* Function: call_win32_api @ 00102d60 */

undefined4 call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 struct stat local_90;
 
 iVar1 = stat("/etc/passwd",&local_90);
 uVar3 = 0xfffffffe;
 if (0 < local_90.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}



/* Function: param_fork_exec @ 00102da0 */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
 __pid_t _Var1;
 uint local_14;
 
 _Var1 = fork();
 if (_Var1 < 0) {
 return 0xffffffff;
 }
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 return 0xfffffffe;
 }
 if ((local_14 & 0x7f) != 0) {
 return 0xfffffffd;
 }
 return local_14 >> 8 & 0xff;
}



/* Function: call_fork_exec @ 00102e20 */

uint call_fork_exec(void)

{
 __pid_t _Var1;
 uint local_c;
 
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 return -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return 0xffffffff;
}



/* Function: param_pipe_communication @ 00102e90 */

undefined8 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined8 uVar4;
 int local_30;
 int local_2c;
 undefined1 local_28 [32];
 
 iVar1 = pipe(&local_30);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(local_2c);
 sVar3 = read(local_30,local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 return uVar4;
 }
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 return 0xfffffffe;
}



/* Function: param_socket_create @ 00102f50 */

undefined8 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined8 uVar2;
 undefined4 local_24;
 struct sockaddr local_20;
 
 __fd = socket(2,1,0);
 if (__fd < 0) {
 return 0xffffffff;
 }
 local_24 = 1;
 iVar1 = setsockopt(__fd,SOL_SOCKET,SO_REUSEADDR,(void *)&local_24,4);
 if (-1 < iVar1) {
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
 if (-1 < iVar1) {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xfffffffc;
 }
 return uVar2;
 }
 close(__fd);
 return 0xfffffffd;
 }
 close(__fd);
 return 0xfffffffe;
}



/* Function: param_shmget_shmat @ 00103030 */

ulong param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 
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
 if (__s == (char *)0xffffffffffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 builtin_strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2 & 0xffffffff;
}



/* Function: call_shmget_shmat @ 00103100 */

undefined8 call_shmget_shmat(void)

{
 int iVar1;
 undefined8 uVar2;
 
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 00103120 */

undefined8 param_signal_handling(void)

{
 bool bVar1;
 __sighandler_t p_Var2;
 undefined8 uVar3;
 uint uVar4;
 
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 return 0xffffffff;
 }
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 return 0xfffffffe;
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
 return 0xfffffffd;
 }
 uVar3 = 0xfffffffc;
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
 uVar3 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar3 = 0x2a;
 }
 }
 return uVar3;
}



/* Function: signal_handler @ 00103250 */

void signal_handler(int param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: test_system_calls @ 00103280 */

void test_system_calls(void)

{
 int iVar1;
 __pid_t _Var2;
 uint uVar3;
 ulong uVar4;
 int *piVar5;
 uint uVar6;
 struct stat local_a0;
 
 puts(&DAT_00104443);
 uVar4 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar4;
 if (iVar1 < 0) {
 piVar5 = __errno_location();
 iVar1 = -*piVar5;
 }
 else {
 syscall(3,uVar4 & 0xffffffff);
 }
 printf(&DAT_001042a8,(ulong)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar3 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar3 = 0x2a;
 }
 uVar6 = 0xffffffff;
 if (iVar1 < 0) {
 uVar3 = uVar6;
 }
 printf(&DAT_001042c4,(ulong)uVar3);
 _Var2 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var2 = waitpid(_Var2,(int *)&local_a0,0);
 if ((_Var2 < 0) || (((uint)local_a0.st_dev & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = (ulong)(-(uint)(((uint)local_a0.st_dev & 0xff00) != 0) | 0x2a);
 }
 }
 printf(&DAT_001042e0,uVar4);
 uVar3 = param_pipe_communication();
 printf(&DAT_001042fc,(ulong)uVar3);
 uVar3 = param_socket_create();
 printf(&DAT_00104318,(ulong)uVar3);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar6 = 0x2a;
 }
 printf(&DAT_00104334,(ulong)uVar6);
 uVar3 = param_signal_handling();
 printf(&DAT_00104350,(ulong)uVar3);
 return;
}



/* Function: thread_compute @ 001033f0 */

void *thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 int *arg = (int *)param_1;
 
 iVar1 = *arg;
 piVar2 = malloc(sizeof(int));
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}



/* Function: param_pthread_create @ 00103410 */

undefined4 param_pthread_create(undefined4 param_1)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 local_1c;
 undefined4 *local_18;
 pthread_t local_10;
 
 local_1c = param_1;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_10,&local_18);
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}



/* Function: call_pthread_create @ 00103470 */

undefined4 call_pthread_create(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 local_1c;
 undefined4 *local_18;
 pthread_t local_10;
 
 local_1c = 7;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_10,&local_18);
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}



/* Function: thread_sum @ 001034d0 */

void *thread_sum(void *param_1)

{
 uint uVar1;
 uint uVar2;
 uint *args = (uint *)param_1;
 
 args[2] = 0;
 uVar1 = args[0];
 uVar2 = args[1];
 if ((int)uVar1 <= (int)uVar2) {
 args[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((ulong)(uVar2 - uVar1) * (ulong)(uVar2 + ~uVar1) >> 1);
 }
 return 0;
}



/* Function: param_pthread_join @ 00103510 */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 undefined8 local_68;
 undefined8 uStack_60;
 undefined4 local_58;
 int iStack_54;
 undefined8 uStack_50;
 int local_48;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28 [2];
 
 local_48 = 0;
 local_68 = 0xa00000001;
 uStack_60 = 0xb00000000;
 local_58 = 0x14;
 iStack_54 = 0;
 uStack_50 = 0x1e00000015;
 iVar2 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,&local_68);
 iVar4 = -1;
 if (iVar2 == 0) {
 iVar2 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,(void *)(((long)&uStack_60) + 4)
 );
 if (iVar2 == 0) {
 iVar2 = pthread_create(local_28,(pthread_attr_t *)0x0,thread_sum,&uStack_50);
 if (iVar2 == 0) {
 iVar2 = pthread_join(local_38,(void **)0x0);
 iVar4 = -2;
 if (iVar2 == 0) {
 iVar2 = (int)uStack_60;
 iVar3 = pthread_join(local_30,(void **)0x0);
 iVar1 = iStack_54;
 if (iVar3 == 0) {
 iVar3 = pthread_join(local_28[0],(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar1 + iVar2 + local_48;
 }
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: thread_increment @ 00103620 */

void *thread_increment(void *param_1)

{
 int iVar1;
 int *arg = (int *)param_1;
 
 iVar1 = *arg;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}



/* Function: param_mutex_lock @ 00103660 */

undefined8 param_mutex_lock(uint param_1,int param_2)

{
 int iVar1;
 void *__ptr;
 undefined8 uVar2;
 ulong uVar3;
 ulong uVar4;
 long lVar5;
 int local_38;
 uint local_34;
 
 local_38 = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 uVar4 = (ulong)param_1;
 lVar5 = 0;
 local_34 = param_1;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_38);
 param_1 = local_34;
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (uVar4 * 8 - lVar5 != 0);
 if (0 < (int)local_34) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * local_38) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 00103750 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: consumer_thread @ 00103760 */

void *consumer_thread(void *param_1)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
 (void)param_1;
 pthread_mutex_lock(&cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}



/* Function: producer_thread @ 001037e0 */

void *producer_thread(void *param_1)

{
 (void)param_1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}



/* Function: param_condition_variable @ 00103820 */

undefined4 param_condition_variable(void)

{
 undefined4 uVar1;
 int iVar2;
 pthread_t local_20;
 undefined4 *local_18;
 pthread_t local_10;
 
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 != 0) {
 pthread_cancel(local_20);
 return 0xfffffffe;
 }
 pthread_join(local_20,&local_18);
 pthread_join(local_10,(void **)0x0);
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}



/* Function: thread_atomic_increment @ 001038d0 */

void *thread_atomic_increment(void *param_1)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 uint *arg = (uint *)param_1;
 
 uVar1 = *arg;
 if (0 < (int)uVar1) {
 uVar5 = uVar1 & 3;
 uVar4 = 0;
 if (2 < uVar1 - 1) {
 uVar4 = 0;
 do {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar2 = uVar4 + 1000;
 if (uVar4 != atomic_counter) {
 uVar2 = atomic_counter;
 }
 atomic_counter = uVar2;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar3 = uVar4 + 0x3e9;
 if (uVar4 + 1 != atomic_counter) {
 iVar3 = atomic_counter;
 }
 atomic_counter = iVar3;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar3 = uVar4 + 0x3ea;
 if (uVar4 + 2 != atomic_counter) {
 iVar3 = atomic_counter;
 }
 atomic_counter = iVar3;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar2 = uVar4 + 0x3eb;
 if (uVar4 + 3 != atomic_counter) {
 uVar2 = atomic_counter;
 }
 atomic_counter = uVar2;
 UNLOCK();
 uVar4 = uVar4 + 4;
 } while (uVar4 != (uVar1 & 0xfffffffc));
 }
 for (; uVar5 != 0; uVar5 = uVar5 - 1) {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar1 = uVar4 + 1000;
 if (uVar4 != atomic_counter) {
 uVar1 = atomic_counter;
 }
 atomic_counter = uVar1;
 UNLOCK();
 uVar4 = uVar4 + 1;
 }
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00103990 */

void *thread_atomic_load_store(void *param_1)

{
 (void)param_1;
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}



/* Function: param_atomic_ops @ 001039b0 */

undefined8 param_atomic_ops(uint param_1,undefined4 param_2)

{
 int iVar1;
 void *__ptr;
 undefined8 uVar2;
 ulong uVar3;
 long lVar4;
 undefined4 local_3c;
 pthread_t local_38;
 
 local_3c = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if (0 < (int)param_1) {
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar4 = lVar4 + 8;
 } while ((ulong)param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 if (0 < (int)param_1) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while (param_1 != uVar3);
 }
 iVar1 = atomic_counter;
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 00103ac0 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: thread_tls_test @ 00103ad0 */

void *thread_tls_test(void *param_1)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 void *fs_base;
 char *arg = (char *)param_1;
 
 fs_base = get_fs_base();
 lVar2 = ((long *)fs_base)[-6];
 iVar1 = (int)lVar2 + 0x32;
 ((long *)fs_base)[-6] = (long)iVar1;
 strncpy((char *)((long *)fs_base + -8),arg,0x1f);
 piVar3 = malloc(8);
 *piVar3 = (int)lVar2;
 piVar3[1] = iVar1;
 return piVar3;
}



/* Function: param_thread_local_storage @ 00103b20 */

undefined8 param_thread_local_storage(uint param_1)

{
 int iVar1;
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 undefined8 uVar2;
 ulong uVar3;
 pthread_t *__newthread;
 ulong uVar4;
 int iVar5;
 int *local_38;
 
 __ptr = malloc((long)(int)param_1 << 3);
 __ptr_00 = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 uVar4 = (ulong)param_1;
 uVar3 = 0;
 do {
 __s = malloc(0x10);
 *(char **)((long)__ptr_00 + uVar3 * 8) = __s;
 snprintf(__s,0x10,"Thread-%d",uVar3 & 0xffffffff);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 if (0 < (int)param_1) {
 uVar3 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)__ptr_00 + uVar3 * 8));
 if (iVar1 != 0) {
 uVar4 = 0xffffffffffffffff;
 do {
 free(*(void **)((long)__ptr_00 + uVar4 * 8 + 8));
 uVar4 = uVar4 + 1;
 } while (uVar3 != uVar4);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 uVar3 = uVar3 + 1;
 __newthread = __newthread + 1;
 } while (uVar4 != uVar3);
 if ((int)param_1 < 1) {
 iVar1 = 0;
 iVar5 = 0;
 }
 else {
 uVar3 = 0;
 iVar5 = 0;
 iVar1 = 0;
 do {
 pthread_join(__ptr[uVar3],&local_38);
 iVar1 = iVar1 + *local_38;
 iVar5 = iVar5 + local_38[1];
 free(local_38);
 free(*(void **)((long)__ptr_00 + uVar3 * 8));
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 goto LAB_00103c4c;
 }
 }
 iVar1 = 0;
 iVar5 = 0;
LAB_00103c4c:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (param_1 * 0x96 == iVar5 && param_1 * 100 == iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: call_thread_local_storage @ 00103ce0 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 00103cf0 */

void test_thread_concurrency(void)

{
 int iVar1;
 uint uVar2;
 undefined4 local_1c;
 void *local_18;
 pthread_t local_10;
 
 puts(&DAT_0010445e);
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *(int *)local_18;
 free(local_18);
 }
 printf(&DAT_00104376,(ulong)uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_00104392,(ulong)uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_001043af,(ulong)uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_001043cb,(ulong)uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_001043e7,(ulong)uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00104403,(ulong)uVar2);
 return;
}



/* Function: main @ 00103de0 */

undefined8 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 64 */
