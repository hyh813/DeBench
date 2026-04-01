/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t is provided by stdint.h */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional types needed for decompiled code */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined3;
typedef unsigned char undefined5;

/* Define uid_t, gid_t if not available */
#ifndef _UID_T
typedef unsigned int uid_t;
typedef unsigned int gid_t;
#endif

/* IPC types for shared memory */
typedef uid_t cuid_t;
typedef gid_t cgid_t;

/* CONCAT macros for combining values */
#define CONCAT53(a, b) (((a) & 0xff) << 24 | (((b) >> 32) & 0xffffffff))
#define CONCAT35(a, b) (((a) & 0xff) << 24 | (((b) >> 32) & 0xffffffff))

/* Include standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <signal.h>
#include <stdatomic.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/* Global variables needed for the code */
int __aarch64_have_lse_atomics;
int ready;
int data;
int atomic_counter;
int signal_received;
int signal_number;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int shared_counter;
pthread_mutex_t counter_mutex;

/* External declarations for CRT functions */
extern char **environ;
void __cxa_finalize(void *);
void deregister_tm_clones(void);
void register_tm_clones(void);
void * __dso_handle;
char completed_0;

/* External functions */
unsigned long __getauxval(unsigned long);
int *__errno_location(void);
int wait(int *);
void (*signal_handler)(int);
int stat(const char *, struct stat *);
/* syscall is declared in unistd.h */
int shmget(int, size_t, int);
void *shmat(int, const void *, int);
int shmdt(const void *);

/* shmid_ds structure for shared memory control */
struct shmid_ds {
    struct ipc_perm {
        key_t __key;
        uid_t uid;
        gid_t gid;
        cuid_t cuid;
        cgid_t cgid;
        unsigned short mode;
        unsigned short __pad1;
        unsigned short __unused1;
        unsigned short __unused2;
    } shm_perm;
    size_t shm_segsz;
    time_t shm_atime;
    time_t shm_dtime;
    time_t shm_ctime;
    pid_t shm_cpid;
    pid_t shm_lpid;
    unsigned short shm_nattch;
    unsigned short __unused2;
    void *__unused3;
};
typedef struct shmid_ds shmid_ds;

int shmctl(int, int, void *);
key_t ftok(const char *, int);
int execl(const char *, const char *, ...);
__pid_t waitpid(__pid_t, int *, int);
void _exit(int);
ssize_t read(int, void *, size_t);
ssize_t write(int, const void *, size_t);
int pipe(int *);
int close(int);
int open(const char *, int, ...);
int fileno(FILE *);
int __isoc99_sscanf(const char *, const char *, ...);
int puts(const char *);
int raise(int);
unsigned int alarm(unsigned int);
int usleep(unsigned int);
int kill(__pid_t, int);
int pthread_mutex_lock(pthread_mutex_t *);
int pthread_mutex_unlock(pthread_mutex_t *);
int pthread_cond_wait(pthread_cond_t *, pthread_mutex_t *);
int pthread_cond_signal(pthread_cond_t *);
int pthread_cancel(pthread_t);
void sleep(unsigned int);
void free(void *);
void *memset(void *, int, size_t);
void *memcpy(void *, const void *, size_t);
int memcmp(const void *, const void *, size_t);
char *strcpy(char *, const char *);
char *strncpy(char *, const char *, size_t);
size_t strlen(const char *);
int strcmp(const char *, const char *);
char *strchr(const char *, int);
char *strstr(const char *, const char *);
int printf(const char *, ...);
int sprintf(char *, const char *, ...);
int snprintf(char *, size_t, const char *, ...);
int sscanf(const char *, const char *, ...);
FILE *fopen(const char *, const char *);
size_t fread(void *, size_t, size_t, FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int fclose(FILE *);
int fileno(FILE *);
int unlink(const char *);
void putchar(int);
int puts(const char *);
int scanf(const char *, ...);

/* Atomic operation functions */
int __aarch64_ldadd4_acq_rel(int, int *);
int __aarch64_cas4_acq_rel(int, int, int *);

/* Compiler builtin functions */
char *builtin_strncpy(char *, const char *, size_t);

/* Atomic operation helper functions for non-LSE systems */
int ExclusiveMonitorPass(void *, unsigned long);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/* Pseudo-register for TLS */
long tpidr_el0;

/* String data */
char DAT_001033a6[] = "test";
char DAT_001036ec[] = "=== Standard Library Function Tests ===\n";
char DAT_001033f4[] = "strlen test: %zu\n";
char DAT_0010340f[] = "strcmp test: %d\n";
char DAT_0010342a[] = "strchr test: %d\n";
char DAT_00103446[] = "strstr test: %d\n";
char DAT_00103462[] = "memcmp test: %u\n";
char DAT_0010347e[] = "printf test: %lu\n";
char DAT_0010349a[] = "sscanf test: %lu\n";
char DAT_001034b7[] = "fopen/fileno test: %lu\n";
char DAT_001034d3[] = "fread/fwrite test: %lu\n";
char DAT_001034ef[] = "malloc/free test: %lu\n";
char DAT_0010350b[] = "memset test: %d\n";
char DAT_00103526[] = "strchr/strstr test: %d\n";
char DAT_00103575[] = "syscall test: %lu\n";
char DAT_00103591[] = "stat test: %lu\n";
char DAT_001035ad[] = "fork/exec test: %lu\n";
char DAT_001035c9[] = "pipe test: %lu\n";
char DAT_001035e5[] = "socket test: %lu\n";
char DAT_00103601[] = "shm test: %lu\n";
char DAT_0010361d[] = "signal test: %lu\n";
char DAT_00103643[] = "pthread_create test: %lu\n";
char DAT_0010365f[] = "pthread_join sum test: %lu\n";
char DAT_0010367c[] = "pthread_mutex test: %lu\n";
char DAT_00103698[] = "pthread_cond test: %lu\n";
char DAT_001036b4[] = "atomic ops test: %lu\n";
char DAT_001036d0[] = "thread local storage test: %lu\n";
char DAT_00103710[] = "=== System Calls Tests ===\n";
char DAT_0010372b[] = "=== Thread Concurrency Tests ===\n";

/* Forward declarations */
int param_pthread_create(int);
int param_pthread_join(void);
int param_mutex_lock(int, int);
int param_condition_variable(void);
int param_atomic_ops(int, int);
int param_thread_local_storage(int);
int param_pipe_communication(void);
int param_socket_create(void);
int param_shmget_shmat(void);
int param_signal_handling(void);




/* Function: FUN_001012e0 @ 001012e0 */
/* This function appears to be a null pointer call stub - removing as it would crash */

void FUN_001012e0(void)

{
 return;
}



/* Function: init_have_lse_atomics @ 00101700 */

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




/* Function: FUN_001017fc @ 001017fc */

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

int param_strcpy(char *dst,char *src)

{
 char *__s;
 size_t sVar1;
 
 __s = strcpy(dst,src);
 sVar1 = strlen(__s);
 return (int)sVar1;
}



/* Function: call_strcpy @ 0010186c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 size_t sVar1;
 char local_30 [32];
 
 /* Unresolved local var: char[32] buffer@[DW_OP_breg31(sp): 0]
 Unresolved local var: int len@[???] */
 builtin_strncpy(local_30,"HelloLib",9);
 sVar1 = strlen(local_30);
 return (int)sVar1;
}



/* Function: param_strcmp @ 001018a0 */

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



/* Function: call_strcmp @ 001018c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 001018cc */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 001018e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 001018e8 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 0010190c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 00101914 */

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



/* Function: call_memcmp @ 00101938 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int[3] arr1@[???]
 Unresolved local var: int[3] arr2@[???]
 Unresolved local var: int[3] arr3@[???]
 Unresolved local var: int r2@[???] */
 return -1;
}



/* Function: param_printf @ 00101940 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",(ulong)(uint)x,name);
 return iVar1;
}



/* Function: call_printf @ 00101964 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001033a6);
 return iVar1;
}



/* Function: param_scanf @ 0010198c */

int param_scanf(char *input_str)

{
 int iVar1;
 int local_18;
 int local_14;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}



/* Function: call_scanf @ 001019cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int local_18;
 int local_14;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[DW_OP_breg31(sp): +8]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}



/* Function: param_fopen_fclose @ 00101a14 */

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



/* Function: call_fopen_fclose @ 00101a5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 int iVar2;
 
 /* Unresolved local var: int fd@[???] */
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream == (FILE *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 iVar2 = 0x2a;
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 }
 return iVar2;
}



/* Function: param_fread_fwrite @ 00101ab4 */

int param_fread_fwrite(char *tmpfile)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 long local_60;
 undefined3 uStack_58;
 undefined5 local_55;
 undefined3 uStack_50;
 
 /* Unresolved local var: char[32] read_buffer@[DW_OP_breg31(sp): 0]
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
 sVar1 = fread(&local_60,1,0x12,__s);
 *(undefined1 *)((long)&local_60 + sVar1) = 0;
 fclose(__s);
 unlink(tmpfile);
 iVar2 = -3;
 if ((sVar1 == 0x12) &&
 (iVar2 = 0x2a,
 (local_60 != 0x68636e65426e6942 || CONCAT53(local_55,uStack_58) != 0x6144207473655420) ||
 CONCAT35(uStack_50,local_55) != 0x61746144207473)) {
 iVar2 = -3;
 }
 }
 else {
 fclose(__s);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: call_fread_fwrite @ 00101bd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00101bf0 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 size_t sVar3;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(size << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 sVar3 = size;
 do {
 *piVar2 = iVar1;
 sVar3 = sVar3 - 1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (sVar3 != 0);
 }
 iVar1 = __ptr[size - 1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00101c58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int *__ptr;
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 lVar2 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((long)__ptr + lVar2) = iVar1;
 lVar2 = lVar2 + 4;
 iVar1 = iVar1 + 10;
 } while (lVar2 != 0x28);
 iVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: param_memset @ 00101cb4 */

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: uchar * bytes@[???] */
 memset(buffer,0,size);
 iVar1 = 0;
 /* Unresolved local var: size_t i@[???] */
 for (; size != 0; size = size - 1) {
 iVar1 = iVar1 + (uint)*(byte *)buffer;
 buffer = (byte *)((long)buffer + 1);
 }
 return iVar1;
}



/* Function: call_memset @ 00101cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 long lVar1;
 undefined4 local_30 [12];
 
 /* Unresolved local var: int[10] buffer@[???] */
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(undefined4 *)((long)local_30 + lVar1) = 0xff;
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x28);
 return 0;
}



/* Function: param_strchr_strstr @ 00101d34 */

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
 iVar1 = (int)pcVar3 - (int)str;
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 pcVar3 = strstr(str,substr);
 iVar2 = (int)pcVar3 - (int)str;
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar1;
}



/* Function: call_strchr_strstr @ 00101d8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00101d94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 int *__ptr;
 long lVar4;
 uint uVar5;
 int local_60 [2];
 ulong uStack_58;
 undefined8 local_40;
 int local_14;
 
 puts(DAT_001036ec);
 /* Unresolved local var: char[32] buffer@[DW_OP_breg31(sp): 0] */
 uStack_58 = uStack_58 & 0xffffffffffffff00;
 local_60 = (int [2])0x62694c6f6c6c6548;
 sVar3 = strlen((char *)local_60);
 printf(DAT_001033f4,sVar3);
 printf(DAT_0010340f,0);
 printf(DAT_0010342a,0xc);
 printf(DAT_00103446,0x5a);
 uVar5 = 0xffffffff;
 printf(DAT_00103462,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,DAT_001033a6);
 printf(DAT_0010347e,(ulong)uVar1);
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[DW_OP_breg31(sp): 0]
 Unresolved local var: int ret@[???] */
 iVar2 = __isoc99_sscanf("123,456","%d,%d",local_60,&local_14);
 uVar1 = local_14 + local_60[0];
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_0010349a,(ulong)uVar1);
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0x2a;
 if (iVar2 < 0) {
 uVar5 = 0xffffffff;
 }
 }
 printf(DAT_001034b7,(ulong)uVar5);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_001034d3,(ulong)uVar1);
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 iVar2 = 0;
 lVar4 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((long)__ptr + lVar4) = iVar2;
 lVar4 = lVar4 + 4;
 iVar2 = iVar2 + 10;
 } while (lVar4 != 0x28);
 uVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 printf(DAT_001034ef,(ulong)uVar1);
 lVar4 = 0;
 do {
 /* Unresolved local var: int[10] buffer@[DW_OP_breg31(sp): 0]
 Unresolved local var: int i@[???] */
 *(undefined4 *)((long)local_60 + lVar4) = 0xff;
 lVar4 = lVar4 + 4;
 } while (lVar4 != 0x28);
 local_40 = 0;
 uStack_58 = 0;
 local_60[0] = 0;
 local_60[1] = 0;
 printf(DAT_0010350b,0);
 printf(DAT_00103526,0xf);
 return;
}



/* Function: param_linux_syscall @ 00101fa0 */

int param_linux_syscall(char *pathname)

{
 ulong uVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int fd@[???] */
 uVar1 = syscall(0x38,0xffffff9c,pathname,0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 piVar2 = __errno_location();
 iVar3 = -*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 return iVar3;
}



/* Function: call_linux_syscall @ 00101ff4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 ulong uVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: int fd@[???] */
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 iVar4 = (int)uVar1;
 if (iVar4 < 0) {
 piVar2 = __errno_location();
 iVar4 = -*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 iVar3 = 0x2a;
 if (iVar4 < 0) {
 iVar3 = -1;
 }
 return iVar3;
}



/* Function: param_win32_api @ 00102054 */

int param_win32_api(char *filename)

{
 int iVar1;
 int iVar2;
 struct stat st;
 
 /* Unresolved local var: stat st@[DW_OP_breg31(sp): 0] */
 iVar1 = stat(filename,&st);
 iVar2 = 0x2a;
 if (st.st_size < 1) {
 iVar2 = -2;
 }
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: call_win32_api @ 00102090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 int iVar2;
 long local_60;
 
 /* Unresolved local var: stat st@[DW_OP_breg31(sp): 0] */
 iVar1 = stat("/etc/passwd",(stat *)&stack0xffffffffffffff70);
 iVar2 = 0x2a;
 if (local_60 < 1) {
 iVar2 = -2;
 }
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_fork_exec @ 001020d4 */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_24;
 
 /* Unresolved local var: pid_t pid@[???] */
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
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else if ((local_24 & 0x7f) == 0) {
 uVar2 = local_24 >> 8 & 0xff;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}



/* Function: call_fork_exec @ 0010215c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 uint uVar2;
 int iVar3;
 uint local_14;
 
 /* Unresolved local var: int ret@[???] */
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else if ((local_14 & 0x7f) == 0) {
 uVar2 = local_14 >> 8 & 0xff;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 iVar3 = 0x2a;
 if (uVar2 != 0) {
 iVar3 = -1;
 }
 return iVar3;
}



/* Function: param_pipe_communication @ 001021e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined1 auStack_48 [32];
 int local_28;
 int local_24;
 
 /* Unresolved local var: int[2] pipefd@[???]
 Unresolved local var: char[32] buffer@[DW_OP_breg31(sp): +8]
 Unresolved local var: pid_t pid@[???] */
 iVar1 = pipe(&local_28);
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
 /* Unresolved local var: char * msg@[???] */
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 /* Unresolved local var: ssize_t bytes@[???] */
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 iVar1 = 0x2a;
 if (sVar3 < 1) {
 iVar1 = -3;
 }
 }
 }
 return iVar1;
}



/* Function: call_pipe_communication @ 0010229c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 001022b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 struct sockaddr local_38;
 undefined4 local_24;
 
 /* Unresolved local var: sockaddr_in addr@[DW_OP_breg31(sp): +8]
 Unresolved local var: int sock@[???]
 Unresolved local var: int opt@[???] */
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 local_24 = 1;
 iVar2 = setsockopt(iVar1,1,2,&local_24,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
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
 iVar2 = bind(iVar1,&local_38,0x10);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -3;
 }
 else {
 iVar2 = listen(iVar1,5);
 close(iVar1);
 iVar1 = -4;
 if (-1 < iVar2) {
 iVar1 = 0x2a;
 }
 }
 }
 }
 return iVar1;
}



/* Function: call_socket_create @ 00102374 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00102388 */

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
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return -2;
 }
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s != (char *)0xffffffffffffffff) {
 builtin_strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return (int)sVar2;
 }
 return -3;
 }
 }
 return -1;
}



/* Function: call_shmget_shmat @ 00102458 */

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



/* Function: param_signal_handling @ 00102478 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 int iVar4;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 iVar4 = -1;
 }
 else {
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 iVar4 = -2;
 }
 else {
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
 iVar4 = -3;
 }
 else if (signal_number == 10) {
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
 if ((signal_received == 0) || (signal_number != 0xe)) {
 iVar4 = -5;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar4 = 0x2a;
 }
 }
 else {
 iVar4 = -4;
 }
 }
 }
 return iVar4;
}



/* Function: signal_handler @ 001025ac */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 001025c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 001025d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 uint uVar1;
 int iVar2;
 __pid_t _Var3;
 uint uVar4;
 ulong uVar5;
 int *piVar6;
 uint uVar7;
 uint local_a0 [12];
 long local_70;
 
 puts(&DAT_00103710);
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar5 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 iVar2 = (int)uVar5;
 if (iVar2 < 0) {
 piVar6 = __errno_location();
 iVar2 = -*piVar6;
 }
 else {
 syscall(0x39,uVar5 & 0xffffffff);
 }
 uVar4 = 0x2a;
 uVar1 = uVar4;
 if (iVar2 < 0) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_00103575,(ulong)uVar1);
 /* Unresolved local var: stat st@[DW_OP_breg31(sp): 0] */
 iVar2 = stat("/etc/passwd",(stat *)local_a0);
 if (local_70 < 1) {
 uVar4 = 0xfffffffe;
 }
 if (iVar2 < 0) {
 uVar4 = 0xffffffff;
 }
 printf(DAT_00103591,(ulong)uVar4);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var3 = fork();
 if (_Var3 < 0) {
 uVar4 = 0xffffffff;
 }
 else {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var3 = waitpid(_Var3,(int *)local_a0,0);
 if (_Var3 < 0) {
 uVar4 = 0xfffffffe;
 }
 else if ((local_a0[0] & 0x7f) == 0) {
 uVar4 = local_a0[0] >> 8 & 0xff;
 }
 else {
 uVar4 = 0xfffffffd;
 }
 }
 uVar7 = 0x2a;
 uVar1 = uVar7;
 if (uVar4 != 0) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_001035ad,(ulong)uVar1);
 uVar4 = param_pipe_communication();
 printf(DAT_001035c9,(ulong)uVar4);
 uVar4 = param_socket_create();
 printf(DAT_001035e5,(ulong)uVar4);
 /* Unresolved local var: int ret@[???] */
 iVar2 = param_shmget_shmat();
 if (iVar2 < 1) {
 uVar7 = 0xffffffff;
 }
 printf(DAT_00103601,(ulong)uVar7);
 uVar4 = param_signal_handling();
 printf(DAT_0010361d,(ulong)uVar4);
 return;
}



/* Function: thread_compute @ 00102758 */

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



/* Function: param_pthread_create @ 00102784 */

int param_pthread_create(int x)

{
 int iVar1;
 int *local_30;
 int local_24;
 pthread_t local_8;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_24 = x;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,&local_30);
 iVar1 = *local_30;
 free(local_30);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_pthread_create @ 001027e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int *local_30;
 undefined4 local_24;
 pthread_t local_8;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,&local_30);
 iVar1 = *local_30;
 free(local_30);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: thread_sum @ 00102850 */

void * thread_sum(void *arg)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 
 /* Unresolved local var: ThreadData * data@[DW_OP_reg0(x0)]
 Unresolved local var: int i@[???] */
 uVar1 = *(uint *)arg;
 iVar2 = *(int *)((long)arg + 4);
 *(undefined4 *)((long)arg + 8) = 0;
 uVar3 = iVar2 - uVar1;
 if ((int)uVar1 <= iVar2) {
 *(uint *)((long)arg + 8) =
 *(int *)((long)arg + 8) + uVar1 + uVar3 + uVar3 * uVar1 +
 (int)((ulong)(iVar2 + ~uVar1) * (ulong)uVar3 >> 1);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 00102890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 undefined8 *__arg;
 long lVar3;
 int *piVar4;
 undefined8 local_70;
 undefined8 uStack_68;
 undefined8 uStack_60;
 undefined8 local_58;
 undefined4 local_50;
 pthread_t local_48 [3];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[DW_OP_breg31(sp): 0]
 Unresolved local var: int total@[???] */
 __arg = &local_70;
 lVar3 = 0;
 local_70 = 0xa00000001;
 local_50 = 0;
 uStack_68 = 0xb00000000;
 uStack_60 = 0x14;
 local_58 = 0x1e00000015;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = (undefined8 *)((long)__arg + 0xc);
 lVar3 = lVar3 + 8;
 } while (lVar3 != 0x18);
 lVar3 = 0;
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 piVar4 = (int *)((ulong)&local_70 | 8);
 do {
 iVar2 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 lVar3 = lVar3 + 8;
 iVar1 = *piVar4 + iVar1;
 piVar4 = piVar4 + 3;
 } while (lVar3 != 0x18);
 return iVar1;
}



/* Function: call_pthread_join @ 00102970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 undefined8 *__arg;
 long lVar3;
 int *piVar4;
 undefined8 local_70;
 undefined8 uStack_68;
 undefined8 uStack_60;
 undefined8 local_58;
 undefined4 local_50;
 pthread_t local_48 [3];
 
 __arg = &local_70;
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[DW_OP_breg31(sp): 0]
 Unresolved local var: int total@[???] */
 lVar3 = 0;
 local_70 = 0xa00000001;
 local_50 = 0;
 uStack_68 = 0xb00000000;
 uStack_60 = 0x14;
 local_58 = 0x1e00000015;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 lVar3 = lVar3 + 8;
 __arg = (undefined8 *)((long)__arg + 0xc);
 } while (lVar3 != 0x18);
 lVar3 = 0;
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 piVar4 = (int *)((ulong)&local_70 | 8);
 do {
 iVar2 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 lVar3 = lVar3 + 8;
 iVar1 = *piVar4 + iVar1;
 piVar4 = piVar4 + 3;
 } while (lVar3 != 0x18);
 return iVar1;
}



/* Function: thread_increment @ 00102a50 */

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



/* Function: param_mutex_lock @ 00102ab8 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 int iVar1;
 pthread_t *__ptr;
 ulong uVar2;
 long lVar3;
 pthread_t *ppVar4;
 int local_44;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_44 = iterations_per_thread;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 shared_counter = 0;
 if (0 < thread_count) {
 lVar3 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar3),(pthread_attr_t *)0x0,
 thread_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 lVar3 = lVar3 + 8;
 } while ((ulong)(uint)thread_count * 8 - lVar3 != 0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar2 = (ulong)(uint)thread_count;
 ppVar4 = __ptr;
 do {
 pthread_join(*ppVar4,(void **)0x0);
 uVar2 = uVar2 - 1;
 ppVar4 = ppVar4 + 1;
 } while (uVar2 != 0);
 }
 free(__ptr);
 iVar1 = 0x2a;
 if (shared_counter != local_44 * thread_count) {
 iVar1 = -3;
 }
 }
 return iVar1;
}



/* Function: call_mutex_lock @ 00102ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00102bc4 */

void * consumer_thread(void *arg)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
 /* Unresolved local var: int received@[???]
 Unresolved local var: int * ret@[???] */
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 } while (ready != 1);
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



/* Function: producer_thread @ 00102c50 */

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



/* Function: param_condition_variable @ 00102cac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 
 /* Unresolved local var: pthread_t consumer@[???]
 Unresolved local var: pthread_t producer@[???]
 Unresolved local var: void * consumer_ret@[???]
 Unresolved local var: int result@[???] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_28,&local_30);
 pthread_join(local_8,(void **)0x0);
 iVar1 = *local_30;
 free(local_30);
 }
 else {
 pthread_cancel(local_28);
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_condition_variable @ 00102d54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 00102d68 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 /* Unresolved local var: int desired@[???]
 Unresolved local var: int expected@[???] */
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00102dcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 atomic_counter = atomic_counter + 100;
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00102de8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 int iVar2;
 pthread_t *__ptr;
 ulong uVar3;
 pthread_t *ppVar4;
 long lVar5;
 pthread_t local_50;
 int local_44;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: pthread_t load_store_tid@[???]
 Unresolved local var: int final_value@[???] */
 local_44 = iterations;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 atomic_counter = 0;
 if (0 < thread_count) {
 lVar5 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_44);
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 lVar5 = lVar5 + 8;
 } while ((ulong)(uint)thread_count * 8 - lVar5 != 0);
 }
 iVar2 = pthread_create(&local_50,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_50,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = (ulong)(uint)thread_count;
 ppVar4 = __ptr;
 do {
 pthread_join(*ppVar4,(void **)0x0);
 uVar3 = uVar3 - 1;
 ppVar4 = ppVar4 + 1;
 } while (uVar3 != 0);
 }
 aVar1 = atomic_counter;
 free(__ptr);
 iVar2 = 0x2a;
 if (aVar1 < 1) {
 iVar2 = -3;
 }
 }
 return iVar2;
}



/* Function: call_atomic_ops @ 00102efc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 00102f18 */

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
 strncpy((char *)(lVar3 + 0x14),arg,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}



/* Function: param_thread_local_storage @ 00102f68 */

int param_thread_local_storage(int thread_count)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 char *__s;
 ulong uVar2;
 ulong uVar3;
 int iVar4;
 pthread_t *ppVar5;
 int iVar6;
 undefined8 *puVar7;
 int *local_58;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int expected_final@[???]
 Unresolved local var: int expected_initial@[???] */
 uVar3 = -(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)thread_count << 3
 ;
 __ptr = malloc(uVar3);
 __ptr_00 = malloc(uVar3);
 iVar1 = -1;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (undefined8 *)0x0)) {
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = 0;
 do {
 __s = malloc(0x10);
 __ptr_00[uVar3] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar3 & 0xffffffff);
 uVar3 = uVar3 + 1;
 } while ((uint)thread_count != uVar3);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = 0;
 ppVar5 = __ptr;
 do {
 iVar1 = pthread_create(ppVar5,(pthread_attr_t *)0x0,thread_tls_test,(void *)__ptr_00[uVar3])
 ;
 uVar3 = uVar3 + 1;
 if (iVar1 != 0) {
 uVar2 = 0;
 do {
 /* Unresolved local var: int j@[DW_OP_reg20(x20)] */
 free((void *)__ptr_00[uVar2]);
 uVar2 = uVar2 + 1;
 } while (uVar3 != uVar2);
 free(__ptr_00);
 free(__ptr);
 return -2;
 }
 ppVar5 = ppVar5 + 1;
 } while ((uint)thread_count != uVar3);
 }
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar4 = 0;
 iVar6 = 0;
 }
 else {
 iVar6 = 0;
 iVar4 = 0;
 uVar3 = (ulong)(uint)thread_count;
 ppVar5 = __ptr;
 puVar7 = __ptr_00;
 do {
 /* Unresolved local var: void * ret@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(*ppVar5,&local_58);
 iVar4 = *local_58 + iVar4;
 iVar6 = local_58[1] + iVar6;
 free(local_58);
 free((void *)*puVar7);
 uVar3 = uVar3 - 1;
 ppVar5 = ppVar5 + 1;
 puVar7 = puVar7 + 1;
 } while (uVar3 != 0);
 }
 free(__ptr_00);
 free(__ptr);
 iVar1 = 0x2a;
 if (iVar6 != thread_count * 0x96 || iVar4 != thread_count * 100) {
 iVar1 = -3;
 }
 }
 return iVar1;
}



/* Function: call_thread_local_storage @ 0010310c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00103124 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 uint uVar2;
 pthread_t *__arg;
 long lVar3;
 int *piVar4;
 undefined4 local_74;
 pthread_t local_70 [4];
 undefined4 local_50;
 uint *local_48 [3];
 
 puts(&DAT_0010372b);
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_74 = 7;
 iVar1 = pthread_create(local_70,(pthread_attr_t *)0x0,thread_compute,&local_74);
 if (iVar1 == 0) {
 pthread_join(local_70[0],local_48);
 uVar2 = *local_48[0];
 free(local_48[0]);
 }
 else {
 uVar2 = 0xffffffff;
 }
 printf(DAT_00103643,(ulong)uVar2);
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[DW_OP_breg31(sp): +16]
 Unresolved local var: int total@[???] */
 lVar3 = 0;
 __arg = local_70;
 local_70[0] = 0xa00000001;
 local_50 = 0;
 local_70[1] = 0xb00000000;
 local_70[2] = 0x14;
 local_70[3] = 0x1e00000015;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 goto LAB_0010324c;
 }
 lVar3 = lVar3 + 8;
 __arg = (pthread_t *)((long)__arg + 0xc);
 } while (lVar3 != 0x18);
 lVar3 = 0;
 uVar2 = 0;
 /* Unresolved local var: int i@[???] */
 piVar4 = (int *)((ulong)local_70 | 8);
 do {
 iVar1 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
 if (iVar1 != 0) {
 uVar2 = 0xfffffffe;
 break;
 }
 lVar3 = lVar3 + 8;
 uVar2 = *piVar4 + uVar2;
 piVar4 = piVar4 + 3;
 } while (lVar3 != 0x18);
LAB_0010324c:
 printf(DAT_0010365f,(ulong)uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(DAT_0010367c,(ulong)uVar2);
 uVar2 = param_condition_variable();
 printf(DAT_00103698,(ulong)uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(DAT_001036b4,(ulong)uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(DAT_001036d0,(ulong)uVar2);
 return;
}



/* Function: main @ 001032d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 00103300 */

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



/* Function: __aarch64_ldadd4_acq_rel @ 00103340 */

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
