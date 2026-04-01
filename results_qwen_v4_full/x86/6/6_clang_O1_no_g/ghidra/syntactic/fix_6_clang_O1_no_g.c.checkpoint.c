/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef long long longlong;
typedef int bool;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_clang_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <sys/syscall.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>

/* CRT stub function _init removed by preprocessor */

/* Declare __errno_location for glibc or __error for macOS */
#ifdef __APPLE__
extern int *__error(void);
#define __errno_location __error
#else
extern int *__errno_location(void);
#endif

/* Declare syscall for Linux system calls */
extern long syscall(long number, ...);

/* Declare alarm for signal handling */
extern unsigned int alarm(unsigned int seconds);

/* Declare raise for signal handling */
extern int raise(int sig);

/* Define __sighandler_t for signal handling */
typedef void (*__sighandler_t)(int);

/* Declare undefined data symbols */
extern char DAT_0001436c[];
extern char DAT_00014074[];
extern char DAT_0001408f[];
extern char DAT_000140aa[];
extern char DAT_000140c6[];
extern char DAT_000140e2[];
extern char DAT_00014026[];
extern char DAT_000140fe[];
extern char DAT_0001411a[];
extern char DAT_00014137[];
extern char DAT_00014153[];
extern char DAT_0001416f[];
extern char DAT_0001418b[];
extern char DAT_000141a6[];
extern char DAT_000143d8[];
extern char DAT_000143cc[];
extern char DAT_00014390[];
extern char DAT_000141f5[];
extern char DAT_00014211[];
extern char DAT_0001422d[];
extern char DAT_00014249[];
extern char DAT_00014265[];
extern char DAT_00014281[];
extern char DAT_0001429d[];
extern char DAT_000142c3[];
extern char DAT_000142df[];
extern char DAT_000142fc[];
extern char DAT_00014318[];
extern char DAT_00014334[];
extern char DAT_00014350[];
extern char DAT_000143ab[];

/* Define undefined data symbols */
char DAT_0001436c[] = "Testing standard library functions\n";
char DAT_00014074[] = "strlen result: %zu\n";
char DAT_0001408f[] = "call_strcmp result: %d\n";
char DAT_000140aa[] = "call_strlen result: %d\n";
char DAT_000140c6[] = "call_memcpy result: %d\n";
char DAT_000140e2[] = "call_memcmp result: %d\n";
char DAT_00014026[] = "BinBench";
char DAT_000140fe[] = "call_printf result: %d\n";
char DAT_0001411a[] = "call_scanf result: %d\n";
char DAT_00014137[] = "call_fopen_fclose result: %u\n";
char DAT_00014153[] = "call_fread_fwrite result: %d\n";
char DAT_0001416f[] = "call_malloc_free result: %d\n";
char DAT_0001418b[] = "call_memset result: %d\n";
char DAT_000141a6[] = "call_strchr_strstr result: %d\n";
char DAT_000143d8[] = "TestString12";
char DAT_000143cc[] = "TestString13";
char DAT_00014390[] = "Testing system calls\n";
char DAT_000141f5[] = "call_linux_syscall result: %d\n";
char DAT_00014211[] = "call_win32_api result: %d\n";
char DAT_0001422d[] = "call_fork_exec result: %d\n";
char DAT_00014249[] = "call_pipe_communication result: %d\n";
char DAT_00014265[] = "call_socket_create result: %d\n";
char DAT_00014281[] = "call_shmget_shmat result: %d\n";
char DAT_0001429d[] = "call_signal_handling result: %d\n";
char DAT_000142c3[] = "call_pthread_create result: %d\n";
char DAT_000142df[] = "call_pthread_join result: %d\n";
char DAT_000142fc[] = "call_mutex_lock result: %d\n";
char DAT_00014318[] = "call_condition_variable result: %d\n";
char DAT_00014334[] = "call_atomic_ops result: %d\n";
char DAT_00014350[] = "call_thread_local_storage result: %d\n";
char DAT_000143ab[] = "Testing thread concurrency\n";

/* Global variables for threading and signal handling */
volatile int signal_received = 0;
volatile int signal_number = 0;
volatile int shared_counter = 0;
volatile int atomic_counter = 0;
volatile char ready = 0;
volatile char data = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Signal handler function */
void signal_handler(int sig) {
    signal_received = 1;
    signal_number = sig;
}

/* LOCK/UNLOCK macros for atomic operations */
#define LOCK() pthread_mutex_lock(&counter_mutex)
#define UNLOCK() pthread_mutex_unlock(&counter_mutex)

/* Thread function for atomic load/store test */
void *thread_atomic_load_store(void *arg) {
    int i;
    for (i = 0; i < 100; i++) {
        LOCK();
        atomic_counter = atomic_counter + 1;
        UNLOCK();
    }
    return NULL;
}

/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Stub: null function pointer call removed */
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

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 000115b0 */

void call_strcpy(void)

{
 char local_24 [32];
 
 strncpy(local_24 + 4,"oLib",5);
 strncpy(local_24,"Hell",4);
 strlen(local_24);
 return;
}



/* Function: param_strcmp @ 000115f0 */

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



/* Function: call_strcmp @ 00011630 */

undefined4 call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 00011640 */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00011670 */

undefined4 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00011680 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3;
}



/* Function: call_memcpy @ 000116b0 */

undefined4 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 000116c0 */

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



/* Function: call_memcmp @ 00011700 */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
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

void param_printf(undefined4 param_1,undefined4 param_2)

{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 000117a0 */

void call_printf(void)

{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 return;
}



/* Function: param_scanf @ 000117d0 */

int param_scanf(undefined4 param_1)

{
 int iVar1;
 int iVar2;
 int local_c;
 int local_8;
 
 iVar1 = sscanf(param_1,"%d,%d",&local_8,&local_c);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_c + local_8;
 }
 return iVar2;
}



/* Function: call_scanf @ 00011820 */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 
 iVar1 = sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 00011870 */

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



/* Function: call_fopen_fclose @ 000118c0 */

uint call_fopen_fclose(void)

{
 FILE *__stream;
 int iVar1;
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



/* Function: param_fread_fwrite @ 00011920 */

undefined4 param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 undefined4 uVar2;
 int iVar3;
 undefined1 local_30 [32];
 
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_30,1,0x12,__s);
 local_30[sVar1] = 0;
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 iVar3 = memcmp(local_30,"BinBench Test Data",0x13);
 uVar2 = 0xfffffffd;
 if (iVar3 == 0) {
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



/* Function: call_fread_fwrite @ 00011a00 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00011a30 */

int param_malloc_free(int param_1)

{
 int *__ptr;
 int iVar1;
 int iVar2;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 __ptr[iVar2] = iVar1;
 iVar2 = iVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (param_1 != iVar2);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00011a90 */

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
 iVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: param_memset @ 00011af0 */

int param_memset(void *param_1,size_t param_2)

{
 int iVar1;
 size_t sVar2;
 
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 sVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + (uint)*(byte *)((int)param_1 + sVar2);
 sVar2 = sVar2 + 1;
 } while (param_2 != sVar2);
 }
 return iVar1;
}



/* Function: call_memset @ 00011b40 */

undefined4 call_memset(void)

{
 int iVar1;
 undefined4 local_28 [10];
 
 iVar1 = 0;
 do {
 local_28[iVar1] = 0xff;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 10);
 return 0;
}



/* Function: param_strchr_strstr @ 00011b70 */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
 char *pcVar1;
 char *pcVar2;
 
 pcVar1 = strchr(param_1,(int)param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}



/* Function: call_strchr_strstr @ 00011bd0 */

undefined4 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 00011be0 */

void test_standard_library_functions(void)

{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 undefined4 uVar4;
 int *__ptr;
 int iVar5;
 int *piVar6;
 uint uVar7;
 int local_3c;
 int local_38 [2];
 undefined1 local_30;
 
 puts(&DAT_0001436c);
 local_30 = 0;
 local_38[1] = 0x62694c6f;
 local_38[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_38);
 printf(&DAT_00014074,sVar1);
 printf(&DAT_0001408f,0);
 printf(&DAT_000140aa,0xc);
 printf(&DAT_000140c6,0x5a);
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 iVar3 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar5 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar5 = 1;
 }
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 printf(&DAT_000140e2,iVar3 + iVar5);
 iVar2 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 printf(&DAT_000140fe,iVar2);
 iVar2 = sscanf("123,456","%d,%d",local_38,&local_3c);
 local_3c = local_3c + local_38[0];
 iVar3 = -1;
 if (iVar2 != 2) {
 local_3c = -1;
 }
 printf(&DAT_0001411a,local_3c);
 __stream = fopen("/etc/passwd","r");
 uVar7 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar7 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_00014137,uVar7);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00014153,uVar4);
 __ptr = malloc(0x28);
 if (__ptr != (int *)0x0) {
 iVar2 = 0;
 piVar6 = __ptr;
 do {
 *piVar6 = iVar2;
 iVar2 = iVar2 + 10;
 piVar6 = piVar6 + 1;
 } while (iVar2 != 100);
 iVar3 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 printf(&DAT_0001416f,iVar3);
 iVar2 = 0;
 do {
 local_38[iVar2] = 0xff;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 printf(&DAT_0001418b,0);
 printf(&DAT_000141a6,0xf);
 return;
}



/* Function: param_linux_syscall @ 00011e60 */

int param_linux_syscall(undefined4 param_1)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 undefined4 uVar4;
 
 uVar4 = 0x11e68;
 uVar3 = 0;
 iVar1 = syscall(5,param_1,0,0x11e68);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 00011eb0 */

uint call_linux_syscall(void)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 
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



/* Function: param_win32_api @ 00011f10 */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 struct stat local_5c;
 
 iVar1 = stat(param_1,&local_5c);
 uVar3 = 0xfffffffe;
 if (0 < local_5c.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}



/* Function: call_win32_api @ 00011f60 */

undefined4 call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 struct stat local_5c;
 
 iVar1 = stat("/etc/passwd",&local_5c);
 uVar3 = 0xfffffffe;
 if (0 < local_5c.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}



/* Function: param_fork_exec @ 00011fb0 */

uint param_fork_exec(char *param_1,undefined4 param_2)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 
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
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_8 & 0x7f) == 0) {
 uVar2 = local_8 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00012030 */

uint call_fork_exec(void)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 
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
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_8 & 0x7f) == 0) {
 uVar2 = local_8 >> 8 & 0xff;
 }
 }
 }
 return -(uint)(uVar2 != 0) | 0x2a;
}



/* Function: param_pipe_communication @ 000120b0 */

undefined4 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined4 uVar4;
 int pipefd[2];
 undefined1 local_28 [32];
 
 iVar1 = pipe(pipefd);
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
 close(pipefd[0]);
 write(pipefd[1],"HelloPipe",9);
 close(pipefd[1]);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(pipefd[1]);
 sVar3 = read(pipefd[0],local_28,0x1f);
 local_28[sVar3] = 0;
 close(pipefd[0]);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}



/* Function: call_pipe_communication @ 00012190 */

void call_pipe_communication(void)

{
 param_pipe_communication();
 return;
}



/* Function: param_socket_create @ 000121b0 */

undefined4 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined4 uVar2;
 undefined4 local_20;
 struct sockaddr_in local_1c;
 
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_20 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_20,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 memset(&local_1c, 0, sizeof(local_1c));
 local_1c.sin_family = AF_INET;
 iVar1 = bind(__fd,(struct sockaddr*)&local_1c,sizeof(local_1c));
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xfffffffc;
 }
 }
 }
 }
 return uVar2;
}



/* Function: call_socket_create @ 000122a0 */

void call_socket_create(void)

{
 param_socket_create();
 return;
}



/* Function: param_shmget_shmat @ 000122c0 */

size_t param_shmget_shmat(void)

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



/* Function: call_shmget_shmat @ 000123b0 */

undefined4 call_shmget_shmat(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 000123e0 */

undefined4 param_signal_handling(void)

{
 bool bVar1;
 int iVar5;
 __sighandler_t p_Var2;
 undefined4 uVar3;
 uint uVar4;
 
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 uVar3 = 0xfffffffe;
 }
 else {
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
 uVar3 = 0xfffffffd;
 }
 else {
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
 }
 }
 }
 return uVar3;
}



/* Function: FUN_00012545 @ 00012545 */

void FUN_00012545(undefined4 param_1,undefined4 param_2)

{
 /* Stub: unaff_retaddr removed */
 return;
}



/* Function: call_signal_handling @ 00012570 */

void call_signal_handling(void)

{
 param_signal_handling();
 return;
}



/* Function: test_system_calls @ 00012590 */

void test_system_calls(void)

{
 int iVar1;
 int *piVar2;
 __pid_t _Var3;
 uint uVar4;
 undefined4 uVar5;
 undefined4 uVar6;
 struct stat local_6c;
 int wait_status;
 
 puts(&DAT_00014390);
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
 _Var3 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,&wait_status,0);
 if (_Var3 < 0) {
 uVar4 = 0xfffffffe;
 }
 else {
 uVar4 = 0xfffffffd;
 if ((wait_status & 0x7f) == 0) {
 uVar4 = wait_status >> 8 & 0xff;
 }
 }
 }
 printf(&DAT_0001422d,-(uint)(uVar4 != 0) | 0x2a);
 uVar6 = param_pipe_communication();
 printf(&DAT_00014249,uVar6);
 uVar6 = param_socket_create();
 printf(&DAT_00014265,uVar6);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00014281,uVar5);
 uVar6 = param_signal_handling();
 printf(&DAT_0001429d,uVar6);
 return;
}



/* Function: thread_compute @ 00012720 */

void *thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 int *p = (int *)param_1;
 
 iVar1 = *p;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}



/* Function: param_pthread_create @ 00012750 */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *local_14;
 undefined4 local_10;
 pthread_t local_c;
 
 local_10 = param_1;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}



/* Function: call_pthread_create @ 000127c0 */

undefined4 call_pthread_create(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *local_14;
 undefined4 local_10;
 pthread_t local_c;
 
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}



/* Function: thread_sum @ 00012830 */

void *thread_sum(void *param_1)

{
 uint uVar1;
 uint uVar2;
 longlong lVar3;
 ulonglong ullVar4;
 uint *p = (uint *)param_1;
 
 p[2] = 0;
 uVar1 = *p;
 uVar2 = p[1];
 if ((int)uVar1 <= (int)uVar2) {
 lVar3 = (ulonglong)(uVar2 + ~uVar1) * (ulonglong)(uVar2 - uVar1);
 p[2] = uVar1 + p[2] + (uVar1 + 1) * (uVar2 - uVar1) +
 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return (void *)0;
}



/* Function: param_pthread_join @ 00012870 */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined4 *__arg;
 int *piVar4;
 undefined4 local_44;
 undefined4 local_40;
 int local_3c [8];
 pthread_t apStack_1c [3];
 
 local_3c[6] = 0;
 local_3c[3] = 0;
 local_3c[0] = 0;
 local_44 = 1;
 local_40 = 10;
 local_3c[1] = 0xb;
 local_3c[2] = 0x14;
 local_3c[4] = 0x15;
 local_3c[5] = 0x1e;
 iVar3 = 0;
 __arg = &local_44;
 do {
 iVar1 = pthread_create((pthread_t *)((int)apStack_1c + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = __arg + 3;
 } while (iVar3 != 0xc);
 piVar4 = local_3c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_1c[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}



/* Function: call_pthread_join @ 00012950 */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined4 *__arg;
 int *piVar4;
 undefined4 local_44;
 undefined4 local_40;
 int local_3c [8];
 pthread_t apStack_1c [3];
 
 local_3c[6] = 0;
 local_3c[3] = 0;
 local_3c[0] = 0;
 local_44 = 1;
 local_40 = 10;
 local_3c[1] = 0xb;
 local_3c[2] = 0x14;
 local_3c[4] = 0x15;
 local_3c[5] = 0x1e;
 iVar3 = 0;
 __arg = &local_44;
 do {
 iVar1 = pthread_create((pthread_t *)((int)apStack_1c + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = __arg + 3;
 } while (iVar3 != 0xc);
 piVar4 = local_3c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_1c[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}



/* Function: thread_increment @ 00012a30 */

void *thread_increment(void *param_1)

{
 int iVar1;
 int *p = (int *)param_1;
 
 iVar1 = *p;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return (void *)0;
}



/* Function: param_mutex_lock @ 00012aa0 */

undefined4 param_mutex_lock(int param_1,int param_2)

{
 pthread_t *__ptr;
 int iVar1;
 undefined4 uVar2;
 pthread_t *__newthread;
 int iVar3;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 __newthread = __ptr;
 iVar3 = param_1;
 if (0 < param_1) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&param_2);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * param_2) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}



/* Function: call_mutex_lock @ 00012ba0 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: consumer_thread @ 00012bd0 */

void *consumer_thread(void *arg)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
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
 return (void *)puVar1;
}



/* Function: producer_thread @ 00012c50 */

void *producer_thread(void *arg)

{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}



/* Function: param_condition_variable @ 00012cb0 */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t local_14;
 undefined4 *local_10;
 pthread_t local_c;
 
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_10);
 pthread_join(local_c,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_14);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}



/* Function: call_condition_variable @ 00012d60 */

void call_condition_variable(void)

{
 param_condition_variable();
 return;
}



/* Function: thread_atomic_increment @ 00012d80 */

void *thread_atomic_increment(void *param_1)

{
 int iVar1;
 int iVar2;
 int *p = (int *)param_1;
 
 if (0 < *p) {
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
 } while (iVar2 != *p);
 }
 return (void *)0;
}



/* Function: FUN_00012dd5 @ 00012dd5 */

undefined4 FUN_00012dd5(void)

{
 /* Stub: unaff_retaddr removed */
 return 0;
}



/* Function: param_atomic_ops @ 00012df0 */

undefined4 param_atomic_ops(int param_1)

{
 pthread_t *__ptr;
 int iVar1;
 undefined4 uVar2;
 int iVar3;
 pthread_t *__newthread;
 pthread_t local_14;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 iVar3 = param_1;
 __newthread = __ptr;
 if (0 < param_1) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,
 &param_1);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 iVar3 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_14,(void **)0x0);
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 iVar3 = atomic_counter;
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar3) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}



/* Function: call_atomic_ops @ 00012f00 */

void call_atomic_ops(void)

{
 param_atomic_ops(4);
 return;
}



/* Function: thread_tls_test @ 00012f30 */

void *thread_tls_test(void *param_1)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 static int tls_value = 0;
 
 iVar2 = tls_value;
 iVar1 = iVar2 + 0x32;
 tls_value = iVar1;
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void *)piVar3;
}



/* Function: param_thread_local_storage @ 00012f90 */

undefined4 param_thread_local_storage(int param_1)

{
 pthread_t *__ptr;
 void *__ptr_00;
 undefined4 uVar1;
 char *__s;
 int iVar2;
 pthread_t *__newthread;
 int iVar3;
 int iVar4;
 int *local_14;
 
 __ptr = malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 uVar1 = 0xffffffff;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void *)0x0)) {
 if (0 < param_1) {
 iVar3 = 0;
 do {
 __s = malloc(0x10);
 *(char **)((int)__ptr_00 + iVar3 * 4) = __s;
 snprintf(__s,0x10,"Thread-%d",iVar3);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 if (0 < param_1) {
 iVar3 = 0;
 __newthread = __ptr;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((int)__ptr_00 + iVar3 * 4));
 if (iVar2 != 0) {
 iVar2 = -1;
 do {
 free(*(void **)((int)__ptr_00 + iVar2 * 4 + 4));
 iVar2 = iVar2 + 1;
 } while (iVar3 != iVar2);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + 1;
 __newthread = __newthread + 1;
 } while (param_1 != iVar3);
 }
 if (param_1 < 1) {
 iVar3 = 0;
 iVar2 = 0;
 }
 else {
 iVar4 = 0;
 iVar2 = 0;
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar4],&local_14);
 iVar3 = iVar3 + *local_14;
 iVar2 = iVar2 + local_14[1];
 free(local_14);
 free(*(void **)((int)__ptr_00 + iVar4 * 4));
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 }
 free(__ptr_00);
 free(__ptr);
 uVar1 = 0xfffffffd;
 if (param_1 * 0x96 == iVar2 && param_1 * 100 == iVar3) {
 uVar1 = 0x2a;
 }
 }
 return uVar1;
}



/* Function: call_thread_local_storage @ 00013150 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 00013180 */

void test_thread_concurrency(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 pthread_t *ppVar4;
 undefined4 uVar5;
 undefined4 *local_48;
 pthread_t local_44 [10];
 pthread_t local_1c [3];
 
 puts(&DAT_000143ab);
 local_1c[0] = 7;
 ppVar4 = local_44;
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_compute,local_1c);
 uVar5 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_44[0],&local_48);
 uVar5 = *local_48;
 free(local_48);
 }
 printf(&DAT_000142c3,uVar5);
 local_44[8] = 0;
 local_44[5] = 0;
 local_44[2] = 0;
 local_44[0] = 1;
 local_44[1] = 10;
 local_44[3] = 0xb;
 local_44[4] = 0x14;
 local_44[6] = 0x15;
 local_44[7] = 0x1e;
 iVar1 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((int)local_1c + iVar1),(pthread_attr_t *)0x0,thread_sum,
 ppVar4);
 if (iVar2 != 0) {
 iVar1 = -1;
 goto LAB_000132c0;
 }
 iVar1 = iVar1 + 4;
 ppVar4 = ppVar4 + 3;
 } while (iVar1 != 0xc);
 ppVar4 = local_44 + 2;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar3 = pthread_join(local_1c[iVar2],(void **)0x0);
 if (iVar3 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + *ppVar4;
 iVar2 = iVar2 + 1;
 ppVar4 = ppVar4 + 3;
 } while (iVar2 != 3);
LAB_000132c0:
 printf(&DAT_000142df,iVar1);
 uVar5 = param_mutex_lock(4,1000);
 printf(&DAT_000142fc,uVar5);
 uVar5 = param_condition_variable();
 printf(&DAT_00014318,uVar5);
 uVar5 = param_atomic_ops(4);
 printf(&DAT_00014334,uVar5);
 uVar5 = param_thread_local_storage(4);
 printf(&DAT_00014350,uVar5);
 return;
}



/* Function: main @ 00013350 */

undefined4 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 75 */
