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

/* Ghidra decompiler type compatibility */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned char byte;
typedef unsigned int undefined3 __attribute__((packed));
typedef unsigned long long undefined5 __attribute__((packed));
typedef uint8_t undefined;

/* Boolean type support */
#include <stdbool.h>

/* Pthread support */
#include <pthread.h>

/* Standard library support */
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
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <sys/auxv.h>

/* Additional system headers */
#include <sys/syscall.h>
#include <sys/auxv.h>

/* Ghidra CONCAT macros for value concatenation */
#define CONCAT44(a,b) (((uint64_t)(a) << 32) | (uint32_t)(b))
#define CONCAT53(a,b) (((uint64_t)(a) << 32) | (uint32_t)(b))
#define CONCAT35(a,b) (((uint64_t)(a) << 32) | (uint32_t)(b))

/* Forward declarations - struct ipc_perm and shmid_ds are in sys/ipc.h and sys/shm.h */
void signal_handler(int param_1);
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
int *__errno_location(void);

/* ARM64 system register and atomic primitives */
static inline unsigned long read_tpidr_el0(void) {
    unsigned long val;
    __asm__ volatile("mrs %0, tpidr_el0" : "=r"(val));
    return val;
}
bool ExclusiveMonitorPass(void *addr, size_t size) {
    /* Stub for ARM64 exclusive monitor pass check */
    return true;
}

unsigned int ExclusiveMonitorsStatus(void) {
    /* Stub for ARM64 exclusive monitors status */
    return 0;
}

void LOAcquire(void) {
    /* Stub for load-acquire operation */
    __asm__ volatile("" ::: "memory");
}

void LORelease(void) {
    /* Stub for load-release operation */
    __asm__ volatile("" ::: "memory");
}

/* Function pointer type for function calls */
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_clang_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Global variables */
byte __aarch64_have_lse_atomics = 0;
byte completed_0 = 0;
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int data = 0;
int ready = 0;
union { int _0_4_; } atomic_counter;

/* Data symbols from binary */
static char DAT_00103366[] = "TestString";
static char DAT_001033b4[] = "strlen: %lu\n";
static char DAT_001033cf[] = "strcmp: %d\n";
static char DAT_001033ea[] = "strlen test: %d\n";
static char DAT_00103406[] = "memcpy test: %d\n";
static char DAT_00103422[] = "memcmp test: %d\n";
static char DAT_0010343e[] = "printf returned: %lu\n";
static char DAT_0010345a[] = "scanf test: %lu\n";
static char DAT_00103477[] = "fopen test: %lu\n";
static char DAT_00103493[] = "fread test: %lu\n";
static char DAT_001034af[] = "malloc test: %lu\n";
static char DAT_001034cb[] = "memset test: %lu\n";
static char DAT_001034e6[] = "strchr/strstr test: %lu\n";
static char DAT_00103535[] = "syscall test: %lu\n";
static char DAT_00103551[] = "stat test: %lu\n";
static char DAT_0010356d[] = "fork/exec test: %lu\n";
static char DAT_00103589[] = "pipe test: %lu\n";
static char DAT_001035a5[] = "socket test: %lu\n";
static char DAT_001035c1[] = "shm test: %lu\n";
static char DAT_001035dd[] = "signal test: %lu\n";
static char DAT_00103603[] = "pthread create: %lu\n";
static char DAT_0010361f[] = "pthread join: %lu\n";
static char DAT_0010363c[] = "mutex test: %lu\n";
static char DAT_00103658[] = "condition variable test: %lu\n";
static char DAT_00103674[] = "atomic ops test: %lu\n";
static char DAT_00103690[] = "TLS test: %lu\n";
static char DAT_001036ac[] = "Testing standard library functions...";
static char DAT_001036d0[] = "Testing system calls...";
static char DAT_001036eb[] = "Testing thread concurrency...";

/* C++ runtime support */
extern void *__dso_handle;
extern void __cxa_finalize(void *);


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001012e0 @ 001012e0 */

void FUN_001012e0(void)

{
 (*(code *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00101700 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001017fc @ 001017fc */

void deregister_tm_clones(void) { return; }

void FUN_001017fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 00101854 */

void param_strcpy(char *param_1,char *param_2)

{
 char *__s;
 
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}



/* Function: call_strcpy @ 0010186c */

void call_strcpy(void)

{
 char local_30 [32];
 
 strncpy(local_30,"HelloLib",9);
 strlen(local_30);
 return;
}



/* Function: param_strcmp @ 001018a0 */

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



/* Function: call_strcmp @ 001018c4 */

undefined8 call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 001018cc */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 001018e0 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 001018e8 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 0010190c */

undefined8 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00101914 */

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



/* Function: call_memcmp @ 00101938 */

undefined8 call_memcmp(void)

{
 return 0xffffffff;
}



/* Function: param_printf @ 00101940 */

int param_printf(ulong param_1,undefined8 param_2)

{
 int iVar1;
 
 iVar1 = printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return iVar1;
}



/* Function: call_printf @ 00101954 */

int call_printf(void)

{
 int iVar1;
 
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00103366);
 return iVar1;
}



/* Function: param_scanf @ 0010196c */

int param_scanf(undefined8 param_1)

{
 int iVar1;
 int local_18;
 int local_14;
 
 iVar1 = sscanf((char *)param_1,"%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}



/* Function: call_scanf @ 001019ac */

int call_scanf(void)

{
 int iVar1;
 int local_18;
 int local_14;
 
 iVar1 = sscanf("123,456","%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}



/* Function: param_fopen_fclose @ 001019f4 */

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



/* Function: call_fopen_fclose @ 00101a44 */

undefined4 call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 undefined4 uVar2;
 
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 return 0xffffffff;
}



/* Function: param_fread_fwrite @ 00101aa4 */

undefined4 param_fread_fwrite(char *param_1)

{
 undefined4 uVar1;
 FILE *__s;
 size_t sVar2;
 long local_50;
 undefined3 uStack_48;
 undefined5 local_45;
 undefined3 uStack_40;
 
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 return 0xffffffff;
 }
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 != 0x12) {
 fclose(__s);
 return 0xfffffffe;
 }
 rewind(__s);
 sVar2 = fread(&local_50,1,0x12,__s);
 *(undefined1 *)((long)&local_50 + sVar2) = 0;
 fclose(__s);
 unlink(param_1);
 uVar1 = 0xfffffffd;
 if ((sVar2 == 0x12) &&
 (uVar1 = 0x2a,
 (local_50 != 0x68636e65426e6942 || CONCAT53(local_45,uStack_48) != 0x6144207473655420) ||
 CONCAT35(uStack_40,local_45) != 0x61746144207473)) {
 uVar1 = 0xfffffffd;
 }
 return uVar1;
}



/* Function: call_fread_fwrite @ 00101bd8 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00101be4 */

int param_malloc_free(ulong param_1)

{
 int *__ptr;
 int extraout_w8;
 ulong uVar1;
 int *piVar2;
 long lVar3;
 ulong uVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 iVar5 = extraout_w8;
 if (param_1 == 0) goto LAB_00101c94;
 if (param_1 < 8) {
 uVar1 = 0;
LAB_00101c70:
 lVar3 = param_1 - uVar1;
 iVar5 = (int)uVar1 * 10;
 piVar2 = __ptr + uVar1;
 do {
 *piVar2 = iVar5;
 lVar3 = lVar3 + -1;
 iVar5 = iVar5 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar3 != 0);
 }
 else {
 uVar1 = param_1 & 0xfffffffffffffff8;
 iVar7 = 2;
 iVar8 = 3;
 iVar5 = 0;
 iVar6 = 1;
 piVar2 = __ptr + 4;
 uVar4 = uVar1;
 do {
 iVar9 = iVar5 * 10;
 iVar10 = iVar6 * 10;
 iVar11 = iVar7 * 10;
 iVar12 = iVar8 * 10;
 uVar4 = uVar4 - 8;
 iVar5 = iVar5 + 8;
 iVar6 = iVar6 + 8;
 iVar7 = iVar7 + 8;
 iVar8 = iVar8 + 8;
 *(ulong *)(piVar2 + -2) = CONCAT44(iVar12,iVar11);
 *(ulong *)(piVar2 + -4) = CONCAT44(iVar10,iVar9);
 *(ulong *)(piVar2 + 2) = CONCAT44(iVar12 + 0x28,iVar11 + 0x28);
 *(ulong *)piVar2 = CONCAT44(iVar10 + 0x28,iVar9 + 0x28);
 piVar2 = piVar2 + 8;
 } while (uVar4 != 0);
 if (uVar1 != param_1) goto LAB_00101c70;
 }
 iVar5 = *__ptr;
LAB_00101c94:
 iVar6 = __ptr[param_1 - 1];
 free(__ptr);
 return iVar6 + iVar5;
}



/* Function: call_malloc_free @ 00101cb4 */

undefined8 call_malloc_free(void)

{
 return 0x5a;
}



/* Function: param_memset @ 00101cbc */

int param_memset(void *param_1,ulong param_2)

{
 uint uVar1;
 uint uVar2;
 ulong uVar3;
 byte *pbVar4;
 uint *puVar5;
 long lVar6;
 ulong uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar8 = 0;
 }
 else {
 if (param_2 < 8) {
 uVar3 = 0;
 iVar8 = 0;
 }
 else {
 uVar3 = param_2 & 0xfffffffffffffff8;
 puVar5 = (uint *)((long)param_1 + 4);
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 uVar7 = uVar3;
 do {
 uVar1 = puVar5[-1];
 uVar2 = *puVar5;
 puVar5 = puVar5 + 2;
 uVar7 = uVar7 - 8;
 iVar8 = iVar8 + (uVar1 & 0xff);
 iVar9 = iVar9 + (uVar1 >> 8 & 0xff);
 iVar10 = iVar10 + (uVar1 >> 0x10 & 0xff);
 iVar11 = iVar11 + (uVar1 >> 0x18);
 iVar12 = iVar12 + (uVar2 & 0xff);
 iVar13 = iVar13 + (uVar2 >> 8 & 0xff);
 iVar14 = iVar14 + (uVar2 >> 0x10 & 0xff);
 iVar15 = iVar15 + (uVar2 >> 0x18);
 } while (uVar7 != 0);
 iVar8 = iVar12 + iVar8 + iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11;
 if (uVar3 == param_2) {
 return iVar8;
 }
 }
 lVar6 = param_2 - uVar3;
 pbVar4 = (byte *)((long)param_1 + uVar3);
 do {
 lVar6 = lVar6 + -1;
 iVar8 = iVar8 + (uint)*pbVar4;
 pbVar4 = pbVar4 + 1;
 } while (lVar6 != 0);
 }
 return iVar8;
}



/* Function: call_memset @ 00101d68 */

undefined8 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00101d70 */

int param_strchr_strstr(char *param_1,uint param_2,char *param_3)

{
 int iVar1;
 int iVar2;
 char *pcVar3;
 
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar1;
}



/* Function: call_strchr_strstr @ 00101dc8 */

undefined8 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 00101dd0 */

int test_standard_library_functions(void)

{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 ulong uVar4;
 uint uVar5;
 int local_50 [2];
 undefined1 local_48;
 int local_14;
 
 puts(DAT_001036ac);
 local_48 = 0;
 local_50[0] = 0x6c6c6548;
 local_50[1] = 0x62694c6f;
 sVar3 = strlen((char *)local_50);
 printf(DAT_001033b4,sVar3);
 printf(DAT_001033cf,0);
 printf(DAT_001033ea,0xc);
 printf(DAT_00103406,0x5a);
 uVar5 = 0xffffffff;
 printf(DAT_00103422,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,DAT_00103366);
 printf(DAT_0010343e,(ulong)uVar1);
 iVar2 = sscanf("123,456","%d,%d",local_50,&local_14);
 uVar1 = local_14 + local_50[0];
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_0010345a,(ulong)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0x2a;
 if (iVar2 < 0) {
 uVar5 = 0xffffffff;
 }
 }
 printf(DAT_00103477,(ulong)uVar5);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_00103493,uVar4 & 0xffffffff);
 printf(DAT_001034af,0x5a);
 printf(DAT_001034cb,0);
 iVar2 = printf(DAT_001034e6,0xf);
 return iVar2;
}



/* Function: param_linux_syscall @ 00101f6c */

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



/* Function: call_linux_syscall @ 00101fcc */

undefined4 call_linux_syscall(void)

{
 ulong uVar1;
 int *piVar2;
 undefined4 uVar3;
 
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 uVar3 = 0x2a;
 if ((int)uVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (-*piVar2 < 0) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}



/* Function: param_win32_api @ 00102040 */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 struct stat local_60;
 
 iVar1 = stat(param_1,&local_60);
 uVar2 = 0x2a;
 if (local_60.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: call_win32_api @ 0010207c */

undefined4 call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 struct stat local_60;
 
 iVar1 = stat("/etc/passwd",&local_60);
 uVar2 = 0x2a;
 if (local_60.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_fork_exec @ 001020c0 */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
 __pid_t _Var1;
 uint local_24;
 
 _Var1 = fork();
 if (_Var1 < 0) {
 return 0xffffffff;
 }
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 if (_Var1 < 0) {
 return 0xfffffffe;
 }
 if ((local_24 & 0x7f) != 0) {
 return 0xfffffffd;
 }
 return local_24 >> 8 & 0xff;
}



/* Function: call_fork_exec @ 0010216c */

undefined4 call_fork_exec(void)

{
 __pid_t _Var1;
 undefined4 uVar2;
 uint local_14;
 
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if ((-1 < _Var1) && ((local_14 & 0x7f) == 0)) {
 uVar2 = 0x2a;
 if ((local_14 & 0xff00) != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 }
 return 0xffffffff;
}



/* Function: param_pipe_communication @ 001021e8 */

undefined4 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined4 uVar4;
 undefined1 auStack_48 [32];
 int local_28;
 int local_24;
 
 iVar1 = pipe(&local_28);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 return uVar4;
 }
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 return 0xfffffffe;
}



/* Function: param_socket_create @ 001022bc */

undefined4 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined4 uVar2;
 struct sockaddr local_38;
 undefined4 local_24;
 
 __fd = socket(2,1,0);
 if (__fd < 0) {
 return 0xffffffff;
 }
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (-1 < iVar1) {
 local_38.sa_family = 2;
 local_38.sa_data[0] = '\0';
 local_38.sa_data[1] = '\0';
 local_38.sa_data[2] = '\0';
 local_38.sa_data[3] = '\0';
 local_38.sa_data[4] = '\0';
 local_38.sa_data[5] = '\0';
 local_38.sa_data[6] = '\0';
 local_38.sa_data[7] = '\0';
 local_38.sa_data[8] = '\0';
 local_38.sa_data[9] = '\0';
 local_38.sa_data[10] = '\0';
 local_38.sa_data[0xb] = '\0';
 local_38.sa_data[0xc] = '\0';
 local_38.sa_data[0xd] = '\0';
 iVar1 = bind(__fd,&local_38,0x10);
 if (-1 < iVar1) {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0xfffffffc;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
 }
 close(__fd);
 return 0xfffffffd;
 }
 close(__fd);
 return 0xfffffffe;
}



/* Function: param_shmget_shmat @ 001023a8 */

ulong param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = (key_t)ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s != (char *)0xffffffffffffffff) {
 strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,NULL);
 return sVar2 & 0xffffffff;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}



/* Function: call_shmget_shmat @ 001024a8 */

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



/* Function: param_signal_handling @ 001024c8 */

undefined8 param_signal_handling(void)

{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 int iVar4;
 
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return 0xffffffff;
 }
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return 0xfffffffe;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar4 = 1000;
 do {
 usleep(1000);
 bVar1 = iVar4 != 0;
 bVar2 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 if (signal_number != 10) {
 return 0xfffffffc;
 }
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar4 = 2000;
 do {
 usleep(1000);
 bVar1 = iVar4 != 0;
 bVar2 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
 }
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 return 0x2a;
 }
 return 0xfffffffb;
}



/* Function: signal_handler @ 00102638 */

void signal_handler(int param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: test_system_calls @ 00102654 */

int test_system_calls(void)

{
 uint uVar1;
 int iVar2;
 __pid_t _Var3;
 ulong uVar4;
 int *piVar5;
 uint uVar6;
 uint local_a0 [12];
 long local_70;
 
 puts(DAT_001036d0);
 uVar4 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 iVar2 = (int)uVar4;
 if (iVar2 < 0) {
 piVar5 = __errno_location();
 iVar2 = -*piVar5;
 }
 else {
 syscall(0x39,uVar4 & 0xffffffff);
 }
 uVar6 = 0x2a;
 uVar1 = uVar6;
 if (iVar2 < 0) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_00103535,(ulong)uVar1);
 iVar2 = stat("/etc/passwd",(struct stat *)local_a0);
 if (local_70 < 1) {
 uVar6 = 0xfffffffe;
 }
 if (iVar2 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(DAT_00103551,(ulong)uVar6);
 _Var3 = fork();
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,(int *)local_a0,0);
 if (-1 < _Var3) {
 if ((local_a0[0] & 0x7f) == 0) {
 uVar6 = 0x2a;
 if ((local_a0[0] & 0xff00) != 0) {
 uVar6 = 0xffffffff;
 }
 uVar4 = (ulong)uVar6;
 goto LAB_00102724;
 }
 }
 }
 uVar4 = 0xffffffff;
LAB_00102724:
 iVar2 = printf(DAT_0010356d,uVar4);
 uVar4 = param_pipe_communication();
 iVar2 = printf(DAT_00103589,uVar4 & 0xffffffff);
 uVar4 = param_socket_create();
	iVar2 = printf(DAT_001035a5,uVar4 & 0xffffffff);
	iVar2 = param_shmget_shmat();
 uVar6 = 0x2a;
 if (iVar2 < 1) {
 uVar6 = 0xffffffff;
 }
	iVar2 = printf(DAT_001035c1,(ulong)uVar6);
	uVar4 = param_signal_handling();
 iVar2 = printf(DAT_001035dd,uVar4 & 0xffffffff);
 return iVar2;
}



/* Function: thread_compute @ 001027c4 */

void *thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *(int *)param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 001027f0 */

undefined4 param_pthread_create(undefined4 param_1)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 *local_30;
 undefined4 local_24;
 pthread_t local_8;
 
 local_24 = param_1;
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void*(*)(void*))thread_compute,&local_24);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_8,(void**)&local_30);
 uVar1 = *local_30;
 free(local_30);
 return uVar1;
}



/* Function: call_pthread_create @ 00102864 */

undefined4 call_pthread_create(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 *local_30;
 undefined4 local_24;
 pthread_t local_8;
 
 local_24 = 7;
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void*(*)(void*))thread_compute,&local_24);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_8,(void**)&local_30);
 uVar1 = *local_30;
 free(local_30);
 return uVar1;
}



/* Function: thread_sum @ 001028dc */

void *thread_sum(void *param_1)

{
 uint uVar1;
 uint uVar2;
 uint *p = (uint *)param_1;
 
 uVar1 = *p;
 uVar2 = p[1];
 p[2] = 0;
 if ((int)uVar1 <= (int)uVar2) {
 p[2] = uVar2 + (uVar2 - uVar1) * uVar1 +
 (int)((ulong)(uVar2 + ~uVar1) * (ulong)(uVar2 - uVar1) >> 1);
 }
 return 0;
}



/* Function: param_pthread_join @ 00102910 */

long param_pthread_join(int unused_param)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined8 local_60;
 int local_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 int local_4c;
 undefined8 local_48;
 int local_40;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28;
 
 local_58 = 0;
 local_4c = 0;
 local_40 = 0;
 local_60 = 0xa00000001;
 uStack_54 = 0xb;
 uStack_50 = 0x14;
 local_48 = 0x1e00000015;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,(void*(*)(void*))thread_sum,&local_60);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,(void*(*)(void*))thread_sum,&uStack_54);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,(void*(*)(void*))thread_sum,&local_48);
 if (iVar1 != 0) {
 return -1;
 }
 iVar2 = pthread_join(local_38,(void **)0x0);
 iVar1 = local_58;
 if (iVar2 != 0) {
 return -2;
 }
 iVar3 = pthread_join(local_30,(void **)0x0);
 iVar2 = local_4c;
 if (iVar3 != 0) {
 return -2;
 }
 iVar3 = pthread_join(local_28,(void **)0x0);
 if (iVar3 != 0) {
 return -2;
 }
 return local_40 + iVar2 + iVar1;
}



/* Function: thread_increment @ 00102a80 */

void *thread_increment(void *param_1)

{
 int iVar1;
 
 iVar1 = *(int *)param_1;
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



/* Function: param_mutex_lock @ 00102ae8 */

undefined4 param_mutex_lock(uint param_1,int param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined4 uVar2;
 pthread_t *ppVar3;
 ulong uVar4;
 long lVar5;
 int local_34;
 
 local_34 = param_2;
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 shared_counter = 0;
 if (0 < (int)param_1) {
 uVar4 = (ulong)param_1;
 lVar5 = 0;
 do {
iVar1 = pthread_create(&((pthread_t *)__ptr)[lVar5 >> 3],(pthread_attr_t *)0x0,
	(void*(*)(void*))thread_increment,&local_34);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (uVar4 * 8 - lVar5 != 0);
 ppVar3 = __ptr;
 if (0 < (int)param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 uVar4 = uVar4 - 1;
 ppVar3 = ppVar3 + 1;
 } while (uVar4 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != local_34 * param_1) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 00102bfc */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: consumer_thread @ 00102c08 */

void *consumer_thread(void *param_1)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
 pthread_mutex_lock(&cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != 1);
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



/* Function: producer_thread @ 00102c7c */

void *producer_thread(void *param_1)

{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}



/* Function: param_condition_variable @ 00102cd8 */

undefined4 param_condition_variable(int unused_param)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 *local_30;
 pthread_t local_28;
 pthread_t local_8;
 
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,(void*(*)(void*))consumer_thread,(void *)0x0);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void*(*)(void*))producer_thread,(void *)0x0);
 if (iVar2 != 0) {
 pthread_cancel(local_28);
 return 0xfffffffe;
 }
 pthread_join(local_28,(void**)&local_30);
 pthread_join(local_8,(void **)0x0);
 uVar1 = *local_30;
 free(local_30);
 return uVar1;
}



/* Function: thread_atomic_increment @ 00102da4 */

void *thread_atomic_increment(void *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter._0_4_);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter._0_4_);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00102e08 */

void *thread_atomic_load_store(void *param_1)

{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return 0;
}



/* Function: param_atomic_ops @ 00102e24 */

undefined4 param_atomic_ops(uint param_1,undefined4 param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined4 uVar2;
 ulong uVar3;
 pthread_t *ppVar4;
 long lVar5;
 pthread_t local_50;
 undefined4 local_44;
 
 local_44 = param_2;
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 atomic_counter._0_4_ = 0;
 if (0 < (int)param_1) {
 lVar5 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while ((ulong)param_1 * 8 - lVar5 != 0);
 }
 iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,(void*(*)(void*))thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_50,(void **)0x0);
 }
 if (0 < (int)param_1) {
 uVar3 = (ulong)param_1;
 ppVar4 = __ptr;
 do {
 pthread_join(*ppVar4,(void **)0x0);
 uVar3 = uVar3 - 1;
 ppVar4 = ppVar4 + 1;
 } while (uVar3 != 0);
 }
iVar1 = atomic_counter._0_4_;
	free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 00102f60 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: thread_tls_test @ 00102f6c */

void *thread_tls_test(void *param_1)

{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 
 lVar3 = read_tpidr_el0();
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),(char *)param_1,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}



/* Function: param_thread_local_storage @ 00102fbc */

undefined4 param_thread_local_storage(uint param_1)

{
	int iVar1;
	pthread_t *__ptr;
	void **__ptr_00;
	char *__s;
	undefined4 uVar2;
	ulong uVar3;
	ulong uVar4;
	pthread_t *ppVar5;
	int iVar6;
	void **puVar7;
	int *local_58;

	uVar3 = (ulong)param_1;
	uVar4 = -(ulong)((int)param_1 >> 0x1f) & 0xfffffff800000000 | uVar3 << 3;
	__ptr = (pthread_t *)malloc((size_t)uVar4);
	__ptr_00 = (void **)malloc((size_t)uVar4);
	if (__ptr == (pthread_t *)0x0) {
		return 0xffffffff;
	}
	if (__ptr_00 == (void **)0x0) {
		free(__ptr);
		return 0xffffffff;
	}
	if (0 < (int)param_1) {
		uVar4 = 0;
		do {
			__s = malloc(0x10);
			__ptr_00[uVar4] = (void *)__s;
			snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
			uVar4 = uVar4 + 1;
		} while (uVar3 != uVar4);
		if (0 < (int)param_1) {
 uVar4 = 0;
 ppVar5 = __ptr;
 do {
 iVar1 = pthread_create(ppVar5,(pthread_attr_t *)0x0,(void*(*)(void*))thread_tls_test,(void *)__ptr_00[uVar4]);
 uVar4 = uVar4 + 1;
 if (iVar1 != 0) {
 uVar3 = 0;
 do {
 free((void *)__ptr_00[uVar3]);
 uVar3 = uVar3 + 1;
 } while (uVar3 != uVar4);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar5 = ppVar5 + 1;
 } while (uVar3 != uVar4);
 if (0 < (int)param_1) {
 iVar6 = 0;
 iVar1 = 0;
 ppVar5 = __ptr;
 puVar7 = __ptr_00;
 do {
 pthread_join(*ppVar5,(void **)&local_58);
 iVar1 = *local_58 + iVar1;
 iVar6 = local_58[1] + iVar6;
 free(local_58);
 free((void *)*puVar7);
 uVar3 = uVar3 - 1;
 ppVar5 = ppVar5 + 1;
 puVar7 = puVar7 + 1;
 } while (uVar3 != 0);
 goto LAB_001030d8;
 }
 }
 }
 iVar1 = 0;
 iVar6 = 0;
LAB_001030d8:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar6 != param_1 * 0x96 || iVar1 != param_1 * 100) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}



/* Function: call_thread_local_storage @ 00103158 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 00103160 */

int test_thread_concurrency(void)

{
 int iVar1;
 ulong uVar2;
 uint uVar3;
 uint *local_30;
 undefined4 local_24;
 pthread_t local_8;
 
 puts(DAT_001036eb);
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,(void*(*)(void*))thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,(void**)&local_30);
 uVar3 = *local_30;
 free(local_30);
 }
 else {
 uVar3 = 0xffffffff;
 }
 iVar1 = printf(DAT_00103603,(ulong)uVar3);
 uVar2 = param_pthread_join(iVar1);
 printf(DAT_0010361f,uVar2 & 0xffffffff);
 uVar2 = param_mutex_lock(4,1000);
 iVar1 = printf(DAT_0010363c,uVar2 & 0xffffffff);
 uVar2 = param_condition_variable(iVar1);
 printf(DAT_00103658,uVar2 & 0xffffffff);
 uVar2 = param_atomic_ops(4,500);
 printf(DAT_00103674,uVar2 & 0xffffffff);
 uVar2 = param_thread_local_storage(4);
 iVar1 = printf(DAT_00103690,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00103258 */

undefined8 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 00103280 */

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
	bVar2 = ExclusiveMonitorPass((void *)param_3,4);
	if (bVar2) {
 *param_3 = param_2;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
}



/* Function: __aarch64_ldadd4_acq_rel @ 001032c0 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = ExclusiveMonitorPass((void *)param_2,4);
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




/* Total functions decompiled: 70 */
