/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
/* uint64_t removed - conflicts with system uint64_t definition */
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t removed - conflicts with system __int64_t definition */
/* size_t removed - conflicts with system size_t definition */
/* ssize_t removed - conflicts with system ssize_t definition */
typedef unsigned long uintptr_t;
/* intptr_t removed - conflicts with system intptr_t definition */
/* ptrdiff_t removed - conflicts with system ptrdiff_t definition */
/* intmax_t removed - conflicts with system intmax_t definition */
/* uintmax_t removed - conflicts with system uintmax_t definition */
typedef void (*sighandler_t)(int);

/* Missing Ghidra decompiler types */
typedef void (*code)(void);

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;

/* Thread data structure for thread_sum */
typedef struct {
    uint start;
    int end;
    uint result;
} ThreadData;

/* Forward declarations for functions used before definition */
void signal_handler(int sig);
void *thread_compute(void *arg);
void *thread_sum(void *arg);
void *thread_increment(void *arg);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);
void *thread_atomic_increment(void *arg);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *arg);

/* Stubs for undefined functions */
#define CONCAT71(x, y) (y)
#define SUB161(x, y) 0
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdatomic.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/syscall.h>
#include <sys/wait.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>

/* String data definitions */
char DAT_00104069[] = "TestName";
char DAT_001043af[] = "Testing Standard Library Functions";
char DAT_001040b7[] = "strlen: %lu\n";
char DAT_001040d2[] = "strcmp: %d\n";
char DAT_001040ed[] = "strlen: %d\n";
char DAT_00104109[] = "memcpy: %d\n";
char DAT_00104125[] = "strcmp: %d\n";
char DAT_00104141[] = "printf: %lu\n";
char DAT_0010415d[] = "scanf: %lu\n";
char DAT_0010417a[] = "fopen: %lu\n";
char DAT_00104196[] = "fread: %lu\n";
char DAT_001041b2[] = "malloc: %lu\n";
char DAT_001041ce[] = "memset: %d\n";
char DAT_001041e9[] = "strchr: %d\n";
char DAT_00104238[] = "syscall: %lu\n";
char DAT_00104254[] = "stat: %lu\n";
char DAT_00104270[] = "fork: %lu\n";
char DAT_0010428c[] = "pipe: %lu\n";
char DAT_001042a8[] = "socket: %lu\n";
char DAT_001042c4[] = "shm: %lu\n";
char DAT_001042e0[] = "signal: %lu\n";
char DAT_00104306[] = "Testing Pthread Operations\n";
char DAT_00104322[] = "pthread_create: %lu\n";
char DAT_0010433f[] = "mutex: %lu\n";
char DAT_0010435b[] = "condvar: %lu\n";
char DAT_00104377[] = "atomic: %lu\n";
char DAT_00104393[] = "tls: %lu\n";
char DAT_001043ee[] = "Testing Thread Concurrency";
char DAT_001043d3[] = "Testing System Calls";

/* Global variables for signal handling */
volatile int signal_received = 0;
int signal_number = 0;

/* Global variables for mutex */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;

/* Global variables for condition variable */
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;

/* Global atomic counter */
int atomic_counter = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 /* (*(code *)(undefined *)0x0)();  Removed: NULL pointer dereference */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 001024b0 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return (int)sVar1;
}



/* Function: call_strcpy @ 001024d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 size_t sVar1;
 char local_28 [40];
 
 /* Unresolved local var: char[32] buffer@[???]
 Unresolved local var: int len@[???] */
 strncpy(local_28,"HelloLib",9);
 sVar1 = strlen(local_28);
 return (int)sVar1;
}



/* Function: param_strcmp @ 00102500 */

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



/* Function: call_strcmp @ 00102520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 00102530 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 00102540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 00102550 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 00102570 */

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



/* Function: call_memcmp @ 00102590 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 /* Unresolved local var: int[3] arr1@[???]
 Unresolved local var: int[3] arr2@[???]
 Unresolved local var: int[3] arr3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return -1;
}



/* Function: param_printf @ 001025a0 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 001025c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 return iVar1;
}



/* Function: param_scanf @ 001025e0 */

int param_scanf(char *input_str)

{
 int iVar1;
 int iVar2;
 int in_a;
 int in_b;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = sscanf(input_str,"%d,%d",&in_a,&in_b);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = in_a + in_b;
 }
 return iVar2;
}



/* Function: call_scanf @ 00102610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 int in_a;
 int in_b;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = sscanf("123,456","%d,%d",&in_a,&in_b);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = in_a + in_b;
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 00102650 */

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



/* Function: call_fopen_fclose @ 00102690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
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



/* Function: param_fread_fwrite @ 001026e0 */

int param_fread_fwrite(char *tmpfile)

{
 int iVar1;
 FILE *__s;
 size_t sVar2;
 unsigned char auVar3 [16];
 unsigned char auVar4 [16];
 char local_48 [4];
 char cStack_44;
 char cStack_43;
 char cStack_42;
 char cStack_41;
 char cStack_40;
 char cStack_3f;
 char cStack_3e;
 char cStack_3d;
 char cStack_3c;
 char cStack_3b;
 char cStack_3a;
 char cStack_39;
 char cStack_38;
 char cStack_37;
 char cStack_36;
 
 /* Unresolved local var: char[32] read_buffer@[???]
 Unresolved local var: FILE * fp@[???]
 Unresolved local var: size_t written@[???]
 Unresolved local var: size_t read@[???]
 Unresolved local var: char * write_data@[???] */
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(local_48,1,0x12,__s);
 local_48[sVar2] = '\0';
 fclose(__s);
 unlink(tmpfile);
 iVar1 = -3;
 if (sVar2 == 0x12) {
 if (strcmp(local_48, "BinBench Test Data") == 0) {
 iVar1 = 0x2a;
 }
 }
 else {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -2;
 fclose(__s);
 }
 }
 return iVar1;
}



/* Function: call_fread_fwrite @ 001027c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 001027d0 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int iVar1;
 size_t sVar2;
 
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
 sVar2 = 0;
 do {
 __ptr[sVar2] = iVar1;
 sVar2 = sVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (size != sVar2);
 }
 iVar1 = __ptr[size - 1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00102820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int *__ptr;
 long lVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 lVar1 = 0;
 /* Unresolved local var: size_t i@[???] */
 piVar2 = __ptr;
 do {
 *piVar2 = (int)lVar1;
 lVar1 = lVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar1 != 100);
 iVar3 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar3;
}



/* Function: param_memset @ 00102870 */

int param_memset(void *buffer,size_t size)

{
 size_t sVar1;
 int iVar2;
 
 /* Unresolved local var: uchar * bytes@[???]
 Unresolved local var: int sum@[???] */
 iVar2 = 0;
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 sVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (uint)*(unsigned char *)((long)buffer + sVar1);
 sVar1 = sVar1 + 1;
 } while (size != sVar1);
 }
 return iVar2;
}



/* Function: call_memset @ 001028b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 long lVar1;
 uint32_t local_28 [10];
 
 /* Unresolved local var: int[10] buffer@[???] */
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(RAX)] */
 local_28[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 /* Unresolved local var: int sum@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 001028f0 */

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



/* Function: call_strchr_strstr @ 00102930 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00102940 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 int *__ptr;
 long lVar4;
 int *piVar5;
 ulong uVar6;
 uint uVar7;
 int local_4c;
 int local_48 [2];
 ulong uStack_40;
 int local_28[2];
 
 puts(&DAT_001043af);
 local_48[0] = 0x6c6c6548;
 local_48[1] = 0x62694c6f;
 /* Unresolved local var: char[32] buffer@[???] */
 uStack_40 = uStack_40 & 0xffffffffffffff00;
 sVar3 = strlen((char *)local_48);
 printf(&DAT_001040b7,sVar3 & 0xffffffff);
 printf(&DAT_001040d2,0);
 printf(&DAT_001040ed,0xc);
 printf(&DAT_00104109,0x5a);
 uVar7 = 0xffffffff;
 printf(&DAT_00104125,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 printf(&DAT_00104141,(ulong)uVar1);
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 iVar2 = sscanf("123,456","%d,%d",&local_48[0], &local_48[1]);
 uVar6 = (ulong)(uint)(local_48[0] + local_48[1]);
 if (iVar2 != 2) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_0010415d,uVar6);
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen("/etc/passwd","r");
 uVar1 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar1 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_0010417a,(ulong)uVar1);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104196,(ulong)uVar1);
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr != (int *)0x0) {
 lVar4 = 0;
 piVar5 = __ptr;
 do {
 *piVar5 = (int)lVar4;
 lVar4 = lVar4 + 10;
 piVar5 = piVar5 + 1;
 } while (lVar4 != 100);
 uVar7 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 lVar4 = 0;
 printf(&DAT_001041b2,(ulong)uVar7);
 /* Unresolved local var: int[10] buffer@[???]
 Unresolved local var: int i@[DW_OP_reg3(RBX)] */
 do {
 local_48[lVar4] = 0xff;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 10);
 local_48[0] = 0;
 local_48[1] = 0;
 /* Unresolved local var: int sum@[???] */
 uStack_40 = 0;
 local_28[0] = 0;
 local_28[1] = 0;
 printf(&DAT_001041ce,0);
 printf(&DAT_001041e9,0xf);
 return;
}



/* Function: param_linux_syscall @ 00102b50 */

int param_linux_syscall(char *pathname)

{
 ulong uVar1;
 int iVar3;
 
 /* Unresolved local var: int fd@[???] */
 uVar1 = syscall(2,pathname,0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 iVar3 = -errno;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return iVar3;
}



/* Function: call_linux_syscall @ 00102b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 ulong uVar1;
 int iVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar1 = syscall(2,"/etc/passwd",0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 iVar3 = -errno;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return iVar3 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00102be0 */

int param_win32_api(char *filename)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct stat local_90;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat(filename,&local_90);
 iVar3 = -2;
 if (0 < local_90.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: call_win32_api @ 00102c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct stat local_90;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_90);
 iVar3 = -2;
 if (0 < local_90.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: param_fork_exec @ 00102c60 */

int param_fork_exec(char *prog,char *arg)

{
 pid_t _Var1;
 uint uVar2;
 uint local_14;
 
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(prog,prog,arg,(char *)NULL);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_14 & 0x7f) == 0) {
 uVar2 = local_14 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00102cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 pid_t _Var1;
 uint uVar2;
 uint local_4;
 
 /* Unresolved local var: int ret@[???] */
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",(char *)NULL);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_4,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_4 & 0x7f) == 0) {
 uVar2 = local_4 >> 8 & 0xff;
 }
 }
 }
 return -(uint)(uVar2 != 0) | 0x2a;
}



/* Function: param_pipe_communication @ 00102d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 pid_t _Var2;
 ssize_t sVar3;
 int local_30;
 int local_2c;
 unsigned char local_28 [32];
 
 /* Unresolved local var: int[2] pipefd@[???]
 Unresolved local var: char[32] buffer@[???]
 Unresolved local var: pid_t pid@[???] */
 iVar1 = pipe(&local_30);
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
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
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
 }
 }
 return iVar1;
}



/* Function: call_pipe_communication @ 00102df0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 00102e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 int local_2c;
 struct sockaddr_in local_28;
 
 /* Unresolved local var: sockaddr_in addr@[???]
 Unresolved local var: int sock@[???]
 Unresolved local var: int opt@[???] */
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 local_2c = 1;
 iVar2 = setsockopt(iVar1,1,2,&local_2c,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
 memset(&local_28, 0, sizeof(local_28));
 local_28.sin_family = 2;
 local_28.sin_port = 0;
 local_28.sin_addr.s_addr = 0;
 iVar2 = bind(iVar1,(struct sockaddr *)&local_28,0x10);
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



/* Function: call_socket_create @ 00102ec0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00102ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 void *__s;
 size_t sVar2;
 int iVar3;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[???]
 Unresolved local var: int shmid@[???]
 Unresolved local var: char * shm@[???]
 Unresolved local var: int len@[???] */
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 iVar3 = -1;
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 iVar3 = -2;
 }
 else {
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffffffffffff) {
 iVar3 = -3;
 }
 else {
 strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
                      iVar3 = (int)sVar2;
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return iVar3;
}



/* Function: call_shmget_shmat @ 00102fa0 */

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



/* Function: param_signal_handling @ 00102fc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 bool bVar1;
 int iVar2;
 sighandler_t p_Var3;
 uint uVar4;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == SIG_ERR) {
 return -1;
 }
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == SIG_ERR) {
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
 iVar2 = -4;
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
 iVar2 = -5;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,SIG_DFL);
 signal(0xe,SIG_DFL);
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: signal_handler @ 001030f0 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00103110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00103120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 int iVar1;
 pid_t _Var2;
 ulong uVar3;
 int *piVar4;
 uint uVar5;
 uint uVar6;
 struct stat local_a0;
 
 puts(&DAT_001043d3);
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar3 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar3;
 if (iVar1 < 0) {
 iVar1 = -errno;
 }
 else {
 syscall(3,uVar3 & 0xffffffff);
 }
 printf(&DAT_00104238,(ulong)(iVar1 >> 0x1f | 0x2a));
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar5 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar5 = 0x2a;
 }
 uVar6 = 0xffffffff;
 if (iVar1 < 0) {
 uVar5 = uVar6;
 }
 printf(&DAT_00104254,(ulong)uVar5);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var2 = fork();
 uVar5 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",(char *)NULL);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var2 = waitpid(_Var2,(int *)&local_a0,0);
 if (_Var2 < 0) {
 uVar5 = 0xfffffffe;
 }
 else {
 uVar5 = 0xfffffffd;
 if (((uint)local_a0.st_dev & 0x7f) == 0) {
 uVar5 = (uint)local_a0.st_dev >> 8 & 0xff;
 }
 }
 }
 printf(&DAT_00104270,(ulong)(-(uint)(uVar5 != 0) | 0x2a));
 uVar5 = param_pipe_communication();
 printf(&DAT_0010428c,(ulong)uVar5);
 uVar5 = param_socket_create();
 printf(&DAT_001042a8,(ulong)uVar5);
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar6 = 0x2a;
 }
 printf(&DAT_001042c4,(ulong)uVar6);
  uVar5 = param_signal_handling();
  printf(&DAT_001042e0,(ulong)uVar5);
  return;
}





/* Function: thread_compute @ 001032a0 */

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



/* Function: param_pthread_create @ 001032c0 */

int param_pthread_create(int x)

{
 int iVar1;
 int iVar2;
 int local_1c;
 int *local_18;
 pthread_t local_10;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_1c = x;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 iVar2 = *local_18;
 free(local_18);
 }
 return iVar2;
}



/* Function: call_pthread_create @ 00103310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int iVar2;
 uint32_t local_1c;
 int *local_18;
 pthread_t local_10;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 iVar2 = *local_18;
 free(local_18);
 }
 return iVar2;
}



/* Function: thread_sum @ 00103370 */

void * thread_sum(void *arg)

{
 uint uVar1;
 int iVar2;
 ThreadData *data;
 uint *raw_data = (uint *)arg;
 
 /* Handle raw pointer data passed from caller */
 if (arg != NULL) {
 uVar1 = raw_data[0];
 iVar2 = raw_data[1];
 /* Calculate sum inline since we don't have a valid ThreadData structure */
 uint result = 0;
 if ((int)uVar1 <= iVar2) {
 result = uVar1 + result + (uVar1 + 1) * (iVar2 - uVar1) +
 (int)((ulong)(iVar2 - uVar1) * (ulong)(iVar2 + ~uVar1) >> 1);
 }
 return (void *)(uintptr_t)result;
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 001033b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 uint64_t *__arg;
 int *piVar3;
 long lVar4;
 uint64_t local_68;
 int aiStack_60 [10];
 pthread_t local_38 [4];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 __arg = &local_68;
 aiStack_60[6] = 0;
 local_68 = 0xa00000001;
 aiStack_60[0] = 0;
 aiStack_60[1] = 0xb;
 aiStack_60[2] = 0x14;
 aiStack_60[3] = 0;
 aiStack_60[4] = 0x15;
 aiStack_60[5] = 0x1e;
 lVar4 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = (uint64_t *)((long)__arg + 0xc);
 lVar4 = lVar4 + 8;
 } while (lVar4 != 0x18);
 /* Unresolved local var: int i@[???] */
 piVar3 = aiStack_60;
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_38[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}



/* Function: call_pthread_join @ 00103490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 uint64_t *__arg;
 int *piVar3;
 long lVar4;
 uint64_t local_68;
 int aiStack_60 [10];
 pthread_t local_38 [4];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 __arg = &local_68;
 aiStack_60[6] = 0;
 local_68 = 0xa00000001;
 aiStack_60[0] = 0;
 aiStack_60[1] = 0xb;
 aiStack_60[2] = 0x14;
 aiStack_60[3] = 0;
 aiStack_60[4] = 0x15;
 aiStack_60[5] = 0x1e;
 lVar4 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 lVar4 = lVar4 + 8;
 __arg = (uint64_t *)((long)__arg + 0xc);
 } while (lVar4 != 0x18);
 /* Unresolved local var: int i@[???] */
 piVar3 = aiStack_60;
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_38[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}



/* Function: thread_increment @ 00103570 */

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



/* Function: param_mutex_lock @ 001035b0 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 int iVar1;
 int iVar2;
 uint64_t in_RAX;
 void *__ptr;
 ulong uVar3;
 long lVar4;
 int local_38;
 int local_34;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 __ptr = malloc((long)thread_count << 3);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 local_34 = thread_count;
 if (0 < thread_count) {
 lVar4 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_increment,&iterations_per_thread);
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 lVar4 = lVar4 + 8;
 } while ((ulong)(uint)thread_count * 8 - lVar4 != 0);
 }
 iVar1 = local_34;
 /* Unresolved local var: int i@[???] */
 if (0 < local_34) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while ((uint)thread_count != uVar3);
 }
 free(__ptr);
 iVar2 = -3;
 if (shared_counter == iVar1 * local_38) {
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: call_mutex_lock @ 001036a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 001036c0 */

void * consumer_thread(void *arg)

{
 int *puVar1;
 int uVar2;
 
 /* Unresolved local var: int received@[???]
 Unresolved local var: int * ret@[???] */
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 if (ready == 0) {
 do {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == 0) {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 puVar1 = malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}



/* Function: producer_thread @ 00103740 */

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



/* Function: param_condition_variable @ 00103780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int iVar2;
 pthread_t local_20;
 int *local_18;
 pthread_t local_10;
 
 /* Unresolved local var: pthread_t consumer@[???]
 Unresolved local var: pthread_t producer@[???]
 Unresolved local var: void * consumer_ret@[???]
 Unresolved local var: int result@[???] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_10,(void **)0x0);
 iVar2 = *local_18;
 free(local_18);
 }
 else {
 pthread_cancel(local_20);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: call_condition_variable @ 00103810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 00103820 */

void * thread_atomic_increment(void *arg)

{
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < *(int *)arg) {
 iVar2 = 0;
 /* Unresolved local var: int expected@[???]
 Unresolved local var: int desired@[???] */
 do {
 __atomic_fetch_add(&atomic_counter, 1, __ATOMIC_SEQ_CST);
 iVar2 = iVar2 + 1;
 } while (iVar2 != *(int *)arg);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00103860 */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 __atomic_fetch_add(&atomic_counter, 100, __ATOMIC_SEQ_CST);
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00103880 */

int param_atomic_ops(int thread_count,int iterations)

{
 int iVar1;
 int iVar2;
 void *__ptr;
 ulong uVar3;
 long lVar4;
 int local_3c;
 pthread_t local_38;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: pthread_t load_store_tid@[???]
 Unresolved local var: int final_value@[???] */
 local_3c = iterations;
 __ptr = malloc((long)thread_count << 3);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 lVar4 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_3c);
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 lVar4 = lVar4 + 8;
 } while ((ulong)(uint)thread_count * 8 - lVar4 != 0);
 }
 iVar2 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while ((uint)thread_count != uVar3);
 }
 iVar2 = atomic_counter;
 free(__ptr);
 iVar1 = -3;
 if (0 < iVar2) {
 iVar1 = 0x2a;
 }
 return iVar1;
}



/* Function: call_atomic_ops @ 00103990 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 001039b0 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int initial;
 int *piVar3;
 int value;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 value = 100;
 initial = value + 50;
 strncpy((char *)&value,arg,0x1f);
 piVar3 = malloc(8);
 *piVar3 = value;
 piVar3[1] = initial;
 return piVar3;
}



/* Function: param_thread_local_storage @ 00103a00 */

int param_thread_local_storage(int thread_count)

{
 int iVar1;
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 int iVar2;
 ulong uVar3;
 pthread_t *__newthread;
 ulong uVar4;
 int iVar5;
 int *local_38;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 uVar4 = (ulong)(uint)thread_count;
 __ptr = malloc((long)thread_count << 3);
 __ptr_00 = malloc((long)thread_count << 3);
 iVar1 = -1;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void *)0x0)) {
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = 0;
 do {
 __s = malloc(0x10);
 *(char **)((long)__ptr_00 + uVar3 * 8) = __s;
 snprintf(__s,0x10,"Thread-%d",uVar3 & 0xffffffff);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
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
 return -2;
 }
 uVar3 = uVar3 + 1;
 __newthread = __newthread + 1;
 } while (uVar4 != uVar3);
 }
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar5 = 0;
 iVar2 = 0;
 }
 else {
 uVar3 = 0;
 iVar2 = 0;
 iVar5 = 0;
 /* Unresolved local var: void * ret@[???]
 Unresolved local var: int * values@[???] */
 do {
 pthread_join(__ptr[uVar3],&local_38);
 iVar5 = iVar5 + *local_38;
 iVar2 = iVar2 + local_38[1];
 free(local_38);
 free(*(void **)((long)__ptr_00 + uVar3 * 8));
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 free(__ptr_00);
 free(__ptr);
 iVar1 = -3;
 if (thread_count * 0x96 == iVar2 && thread_count * 100 == iVar5) {
 iVar1 = 0x2a;
 }
 }
 return iVar1;
}



/* Function: call_thread_local_storage @ 00103b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00103ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 pthread_t *__newthread;
 long lVar2;
 int *piVar3;
 uint uVar4;
 uint32_t local_6c;
 pthread_t local_68;
 int aiStack_60 [10];
 void *local_38 [4];
 
 puts(&DAT_001043ee);
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_6c = 7;
 __newthread = &local_68;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_compute,&local_6c);
 if (iVar1 == 0) {
 pthread_join(local_68,local_38);
 free(local_38[0]);
 }
 lVar2 = 0;
 printf(&DAT_00104306);
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 aiStack_60[6] = 0;
 local_68 = 0xa00000001;
 aiStack_60[0] = 0;
 aiStack_60[1] = 0xb;
 aiStack_60[2] = 0x14;
 aiStack_60[3] = 0;
 aiStack_60[4] = 0x15;
 aiStack_60[5] = 0x1e;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create(&local_38[lVar2],(pthread_attr_t *)0x0,thread_sum,
 __newthread);
 if (iVar1 != 0) {
 uVar4 = 0xffffffff;
 goto LAB_00103cd2;
 }
 lVar2 = lVar2 + 8;
 __newthread = (pthread_t *)((long)__newthread + 0xc);
 } while (lVar2 != 0x18);
 /* Unresolved local var: int i@[???] */
 piVar3 = aiStack_60;
 lVar2 = 0;
 uVar4 = 0;
 do {
 iVar1 = pthread_join(local_38[lVar2],(void **)0x0);
 if (iVar1 != 0) {
 uVar4 = 0xfffffffe;
 break;
 }
 uVar4 = uVar4 + *piVar3;
 lVar2 = lVar2 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar2 != 3);
LAB_00103cd2:
 printf(&DAT_00104322,(ulong)uVar4);
 uVar4 = param_mutex_lock(4,1000);
 printf(&DAT_0010433f,(ulong)uVar4);
 uVar4 = param_condition_variable();
 printf(&DAT_0010435b,(ulong)uVar4);
 uVar4 = param_atomic_ops(4,500);
 printf(&DAT_00104377,(ulong)uVar4);
 uVar4 = param_thread_local_storage(4);
 printf(&DAT_00104393,(ulong)uVar4);
 return;
}



/* Function: main @ 00103d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
