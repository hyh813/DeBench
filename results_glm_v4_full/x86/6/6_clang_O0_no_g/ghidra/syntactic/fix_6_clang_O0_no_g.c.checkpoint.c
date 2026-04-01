/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler type compatibility */
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned int undefined4;

/* Ghidra decompiler type definitions - removed conflicting types */
typedef void (*code)(void);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <sys/syscall.h>
#include <stdbool.h>
#include <sys/ipc.h>
#include <sys/shm.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Global variables */
volatile int signal_received = 0;
volatile int signal_number = 0;
volatile int atomic_counter = 0;
volatile int shared_counter = 0;
volatile int ready = 0;
volatile int data = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;

#define LOCK() pthread_mutex_lock(&counter_mutex)
#define UNLOCK() pthread_mutex_unlock(&counter_mutex)

/* Data references */
char DAT_00014011[] = "test1";
char DAT_00014015[] = "test2";
char DAT_00014019[] = "same";
char DAT_0001401d[] = "hello";
char DAT_00014021[] = "world";
char DAT_000140aa[] = "Testing strcpy...\n";
char DAT_000140cf[] = "strcpy result: %d\n";
char DAT_000140ea[] = "strcmp result: %d\n";
char DAT_00014105[] = "strlen result: %d\n";
char DAT_00014121[] = "memcpy result: %d\n";
char DAT_0001413d[] = "memcmp result: %d\n";
char DAT_00014159[] = "printf result: %d\n";
char DAT_00014175[] = "scanf result: %d\n";
char DAT_00014192[] = "fopen result: %d\n";
char DAT_000141ae[] = "fread result: %d\n";
char DAT_000141ca[] = "malloc result: %d\n";
char DAT_000141e6[] = "memset result: %d\n";
char DAT_00014201[] = "strchr result: %d\n";
char DAT_00014250[] = "Testing system calls...\n";
char DAT_0001426c[] = "syscall result: %d\n";
char DAT_00014288[] = "win32_api result: %d\n";
char DAT_000142a4[] = "fork_exec result: %d\n";
char DAT_000142c0[] = "pipe result: %d\n";
char DAT_000142dc[] = "socket result: %d\n";
char DAT_000142f8[] = "shm result: %d\n";
char DAT_00014314[] = "signal result: %d\n";
char DAT_0001433a[] = "Testing thread concurrency...\n";
char DAT_00014359[] = "pthread_create result: %d\n";
char DAT_00014375[] = "pthread_join result: %d\n";
char DAT_00014392[] = "mutex result: %d\n";
char DAT_000143ae[] = "condition result: %d\n";
char DAT_000143ca[] = "atomic result: %d\n";
char DAT_000143e6[] = "tls result: %d\n";
char DAT_00014404[] = "Test data for memcpy";

typedef unsigned int uint;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);

/* Forward declarations */
void signal_handler(int sig);


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001140c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011410 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011549 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001154d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_strcpy @ 00011560 */

char *param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return param_1;
}



/* Function: call_strcpy @ 000115b0 */

int call_strcpy(void)

{
 int uVar1;
 undefined1 local_28 [32];
 
 uVar1 = (int)param_strcpy(local_28,"HelloLib");
 return uVar1;
}



/* Function: param_strcmp @ 000115f0 */

undefined4 param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 undefined4 local_10;
 
 iVar1 = strcmp(param_1,param_2);
 if (iVar1 < 1) {
 local_10 = 0;
 if (iVar1 < 0) {
 local_10 = 0xffffffff;
 }
 }
 else {
 local_10 = 1;
 }
 return local_10;
}



/* Function: call_strcmp @ 00011660 */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = (int)param_strcmp(&DAT_00014011,&DAT_00014015);
 iVar2 = (int)param_strcmp(&DAT_00014019,&DAT_00014019);
 iVar3 = (int)param_strcmp(&DAT_0001401d,&DAT_00014021);
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 000116e0 */

size_t param_strlen(char *param_1)

{
 size_t sVar1;
 
 sVar1 = strlen(param_1);
 return sVar1;
}



/* Function: call_strlen @ 00011710 */

int call_strlen(void)

{
 return param_strlen("BinBench2025");
}



/* Function: param_memcpy @ 00011740 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3;
}



/* Function: call_memcpy @ 00011780 */

int call_memcpy(void)

{
 int local_30 [2];
 int local_28;
 int local_20;
 undefined1 local_1c [20];
 
 memcpy(local_1c,&DAT_00014404,0x14);
 memset(local_30,0,0x14);
 param_memcpy(local_30,local_1c,0x14);
 return local_30[0] + local_28 + local_20;
}



/* Function: param_memcmp @ 00011800 */

undefined4 param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 undefined4 local_14;
 
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 local_14 = 0;
 if (iVar1 < 0) {
 local_14 = 0xffffffff;
 }
 }
 else {
 local_14 = 1;
 }
 return local_14;
}



/* Function: call_memcmp @ 00011870 */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 local_20 = 1;
 local_1c = 2;
 local_18 = 4;
 local_2c = 1;
 local_28 = 2;
 local_24 = 3;
 iVar1 = param_memcmp(&local_14,&local_20,0xc);
 iVar2 = param_memcmp(&local_14,&local_2c,0xc);
 return iVar1 + iVar2;
}



/* Function: param_printf @ 00011920 */

int param_printf(int param_1,const char *param_2)

{
 int iVar1;
 
 iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
 return iVar1;
}



/* Function: call_printf @ 00011970 */

int call_printf(void)

{
 int uVar1;
 
 uVar1 = param_printf(0x2a,"Test");
 return uVar1;
}



/* Function: param_scanf @ 000119b0 */

int param_scanf(const char *param_1)

{
 int iVar1;
 int local_18;
 int local_14;
 int local_10;
 
 iVar1 = sscanf(param_1,"%d,%d",&local_14,&local_18);
 if (iVar1 == 2) {
 local_10 = local_14 + local_18;
 }
 else {
 local_10 = -1;
 }
 return local_10;
}



/* Function: call_scanf @ 00011a20 */

int call_scanf(void)

{
 return param_scanf("123,456");
}



/* Function: param_fopen_fclose @ 00011a50 */

int param_fopen_fclose(char *param_1)

{
 FILE *__stream;
 int local_c;
 
 __stream = fopen(param_1,"r");
 if (__stream == (FILE *)0x0) {
 local_c = -1;
 }
 else {
 local_c = fileno(__stream);
 fclose(__stream);
 }
 return local_c;
}



/* Function: call_fopen_fclose @ 00011ad0 */

int call_fopen_fclose(void)

{
 int iVar1;
 int uVar2;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = -1;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_fread_fwrite @ 00011b10 */

int param_fread_fwrite(char *param_1)

{
 char *__ptr;
 FILE *__s;
 size_t sVar1;
 size_t sVar2;
 int iVar3;
 bool bVar4;
 char local_30 [32];
 char *local_10;
 int local_c;
 
 local_10 = "BinBench Test Data";
 __s = fopen(param_1,"w+");
 __ptr = local_10;
 if (__s == (FILE *)0x0) {
 local_c = -1;
 }
 else {
 sVar1 = strlen(local_10);
 sVar1 = fwrite(__ptr,1,sVar1,__s);
 sVar2 = strlen(local_10);
 if (sVar1 == sVar2) {
 rewind(__s);
 sVar2 = fread(local_30,1,sVar1,__s);
 local_30[sVar2] = '\0';
 fclose(__s);
 unlink(param_1);
 bVar4 = false;
 if (sVar2 == sVar1) {
 iVar3 = strcmp(local_30,local_10);
 bVar4 = iVar3 == 0;
 }
 local_c = 0xfffffffd;
 if (bVar4) {
 local_c = 0x2a;
 }
 }
 else {
 fclose(__s);
 local_c = 0xfffffffe;
 }
 }
 return local_c;
}



/* Function: call_fread_fwrite @ 00011c80 */

int call_fread_fwrite(void)

{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}



/* Function: param_malloc_free @ 00011cb0 */

int param_malloc_free(uint param_1)

{
 int *__ptr;
 uint local_14;
 int local_c;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 __ptr[local_14] = local_14 * 10;
 }
 local_c = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return local_c;
}



/* Function: call_malloc_free @ 00011d60 */

int call_malloc_free(void)

{
 return param_malloc_free(10);
}



/* Function: param_memset @ 00011d90 */

int param_memset(void *param_1,uint param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 
 memset(param_1,0,param_2);
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = (uint)*(byte *)((int)param_1 + local_14) + local_10;
 }
 return local_10;
}



/* Function: call_memset @ 00011e10 */

int call_memset(void)

{
 int local_34;
 int local_30 [10];
 
 for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
 local_30[local_34] = 0xff;
 }
 param_memset(local_30,0x28);
 return local_30[0] + local_30[9];
}



/* Function: param_strchr_strstr @ 00011e80 */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
 char *pcVar1;
 undefined4 local_24;
 undefined4 local_20;
 
 pcVar1 = strchr(param_1,(int)param_2);
 if (pcVar1 == (char *)0x0) {
 local_20 = -1;
 }
 else {
 local_20 = (int)pcVar1 - (int)param_1;
 }
 pcVar1 = strstr(param_1,param_3);
 if (pcVar1 == (char *)0x0) {
 local_24 = -1;
 }
 else {
 local_24 = (int)pcVar1 - (int)param_1;
 }
 return local_20 + local_24;
}



/* Function: call_strchr_strstr @ 00011f40 */

int call_strchr_strstr(void)

{
 int uVar1;
 
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}



/* Function: test_standard_library_functions @ 00011f90 */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 
 printf(&DAT_000140aa);
 uVar1 = call_strcpy();
 printf(&DAT_000140cf,uVar1);
 uVar1 = call_strcmp();
 printf(&DAT_000140ea,uVar1);
 call_strlen();
 printf(&DAT_00014105,0);
 uVar1 = call_memcpy();
 printf(&DAT_00014121,uVar1);
 uVar1 = call_memcmp();
 printf(&DAT_0001413d,uVar1);
 uVar1 = call_printf();
 printf(&DAT_00014159,uVar1);
 call_scanf();
 printf(&DAT_00014175,0);
 uVar1 = call_fopen_fclose();
 printf(&DAT_00014192,uVar1);
 call_fread_fwrite();
 printf(&DAT_000141ae,0);
 call_malloc_free();
 printf(&DAT_000141ca,0);
 uVar1 = call_memset();
 printf(&DAT_000141e6,uVar1);
 uVar1 = call_strchr_strstr();
 printf(&DAT_00014201,uVar1);
 return;
}



/* Function: param_linux_syscall @ 00012120 */

int param_linux_syscall(undefined4 param_1)

{
 int *piVar1;
 undefined4 uVar2;
 undefined4 local_c;
 
 uVar2 = 0;
 local_c = syscall(5,param_1,0);
 if (local_c < 0) {
 local_c = -errno;
 }
 else {
 syscall(6,local_c,uVar2);
 }
 return local_c;
}



/* Function: call_linux_syscall @ 000121a0 */

int call_linux_syscall(void)

{
 int iVar1;
 int uVar2;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = -1;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_win32_api @ 000121e0 */

int param_win32_api(char *param_1)

{
 int iVar1;
 struct stat local_64;
 int local_c;
 
 iVar1 = stat(param_1,&local_64);
 if (iVar1 < 0) {
 local_c = -1;
 }
 else {
 local_c = 0xfffffffe;
 if (0 < local_64.st_size) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_win32_api @ 00012240 */

int call_win32_api(void)

{
 return param_win32_api("/etc/passwd");
}



/* Function: param_fork_exec @ 00012270 */

int param_fork_exec(char *param_1,undefined4 param_2)

{
 __pid_t _Var1;
 uint local_18;
 __pid_t local_14;
 int local_10;
 
 local_14 = fork();
 if (local_14 < 0) {
 local_10 = -1;
 }
 else {
 if (local_14 == 0) {
 execl(param_1,param_1,param_2,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(local_14,(int *)&local_18,0);
 if (_Var1 < 0) {
 local_10 = -2;
 }
 else if ((local_18 & 0x7f) == 0) {
 local_10 = (int)(local_18 & 0xff00) >> 8;
 }
 else {
 local_10 = -3;
 }
 }
 return local_10;
}



/* Function: call_fork_exec @ 00012360 */

int call_fork_exec(void)

{
 int iVar1;
 int uVar2;
 
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = -1;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_pipe_communication @ 000123b0 */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 undefined1 local_34 [32];
 int local_14;
 int local_10;
 int local_c;
 
 iVar1 = pipe(&local_14);
 if (iVar1 < 0) {
 local_c = -1;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 local_c = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_14);
 iVar1 = local_10;
 __n = strlen("HelloPipe");
 write(iVar1,"HelloPipe",__n);
 close(local_10);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_10);
 sVar3 = read(local_14,local_34,0x1f);
 local_34[sVar3] = 0;
 close(local_14);
 wait((void *)0x0);
 local_c = 0xfffffffd;
 if (0 < sVar3) {
 local_c = 0x2a;
 }
 }
 }
 return local_c;
}



/* Function: call_pipe_communication @ 000124f0 */

int call_pipe_communication(void)

{
 return param_pipe_communication();
}



/* Function: param_socket_create @ 00012510 */

int param_socket_create(void)

{
 int iVar1;
 struct sockaddr_in local_24;
 int local_14;
 int local_10;
 int local_c;
 
 local_10 = socket(2,1,0);
 if (local_10 < 0) {
 local_c = -1;
 }
 else {
 local_14 = 1;
 iVar1 = setsockopt(local_10,1,2,&local_14,4);
 if (iVar1 < 0) {
 close(local_10);
 local_c = 0xfffffffe;
 }
 else {
 memset(&local_24,0,sizeof(local_24));
 local_24.sin_family = 2;
 local_24.sin_port = htons(0);
 local_24.sin_addr.s_addr = htonl(0);
 iVar1 = bind(local_10,(struct sockaddr *)&local_24,sizeof(local_24));
 if (iVar1 < 0) {
 close(local_10);
 local_c = 0xfffffffd;
 }
 else {
 iVar1 = listen(local_10,5);
 if (iVar1 < 0) {
 close(local_10);
 local_c = 0xfffffffc;
 }
 else {
 close(local_10);
 local_c = 0x2a;
 }
 }
 }
 }
 return local_c;
}



/* Function: call_socket_create @ 00012690 */

int call_socket_create(void)

{
 return param_socket_create();
}



/* Function: param_shmget_shmat @ 000126b0 */

size_t param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t local_c;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 local_c = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 local_c = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 local_c = 0xfffffffe;
 }
 else {
 __dest = shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffff) {
 local_c = 0xfffffffd;
 }
 else {
 strcpy(__dest,"SharedMemory");
 local_c = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return local_c;
}



/* Function: call_shmget_shmat @ 00012820 */

int call_shmget_shmat(void)

{
 int iVar1;
 int uVar2;
 
 iVar1 = param_shmget_shmat();
 uVar2 = -1;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 00012860 */

int param_signal_handling(void)

{
 int iVar1;
 __sighandler_t p_Var2;
 int local_10;
 int local_c;
 
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 local_c = -1;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 local_c = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 local_10 = 1000;
 while( true ) {
 iVar1 = local_10;
 if (signal_received == 0) {
 local_10 = local_10 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if (signal_received == 0) {
 local_c = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_10 = 2000;
 while( true ) {
 iVar1 = local_10;
 if (signal_received == 0) {
 local_10 = local_10 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 local_c = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 local_c = 0x2a;
 }
 }
 else {
 local_c = 0xfffffffc;
 }
 }
 }
 return local_c;
}



/* Function: signal_handler @ 00012a70 */

void signal_handler(int param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: call_signal_handling @ 00012aa0 */

int call_signal_handling(void)

{
 return param_signal_handling();
}



/* Function: test_system_calls @ 00012ac0 */

void test_system_calls(void)

{
 undefined4 uVar1;
 
 printf(&DAT_00014250);
 uVar1 = call_linux_syscall();
 printf(&DAT_0001426c,uVar1);
 uVar1 = call_win32_api();
 printf(&DAT_00014288,uVar1);
 uVar1 = call_fork_exec();
 printf(&DAT_000142a4,uVar1);
 uVar1 = call_pipe_communication();
 printf(&DAT_000142c0,uVar1);
 uVar1 = call_socket_create();
 printf(&DAT_000142dc,uVar1);
 uVar1 = call_shmget_shmat();
 printf(&DAT_000142f8,uVar1);
 uVar1 = call_signal_handling();
 printf(&DAT_00014314,uVar1);
 return;
}



/* Function: thread_compute @ 00012bc0 */

void * thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *(int *)param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}



/* Function: param_pthread_create @ 00012c10 */

int param_pthread_create(int param_1)

{
 int uVar1;
 int iVar2;
 void *local_18;
 int local_14;
 pthread_t local_10;
 int local_c;
 
 local_14 = param_1;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_14);
 if (iVar2 == 0) {
 pthread_join(local_10,&local_18);
 uVar1 = *(int *)local_18;
 free(local_18);
 local_c = uVar1;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_pthread_create @ 00012cb0 */

int call_pthread_create(void)

{
 return param_pthread_create(7);
}



/* Function: thread_sum @ 00012ce0 */

void * thread_sum(void *param_1)

{
 int local_c;
 int *piVar1 = (int *)param_1;
 
 piVar1[2] = 0;
 for (local_c = piVar1[0]; local_c <= piVar1[1]; local_c = local_c + 1) {
 piVar1[2] = local_c + piVar1[2];
 }
 return (void *)0;
}



/* Function: param_pthread_join @ 00012d40 */

int param_pthread_join(void)

{
 int iVar1;
 int local_48;
 int local_44;
 int local_40;
 int local_3c [6];
 undefined4 local_24;
 undefined4 local_20;
 pthread_t local_18 [4];
 
 memset(local_3c,0,0x24);
 local_3c[0] = 1;
 local_3c[1] = 10;
 local_3c[3] = 0xb;
 local_3c[4] = 0x14;
 local_24 = 0x15;
 local_20 = 0x1e;
 for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
 iVar1 = pthread_create(local_18 + local_40,(pthread_attr_t *)0x0,thread_sum,
 local_3c + local_40 * 3);
 if (iVar1 != 0) {
 return -1;
 }
 }
 local_44 = 0;
 local_48 = 0;
 while( true ) {
 if (2 < local_48) {
 return local_44;
 }
 iVar1 = pthread_join(local_18[local_48],(void **)0x0);
 if (iVar1 != 0) break;
 local_44 = local_3c[local_48 * 3 + 2] + local_44;
 local_48 = local_48 + 1;
 }
 return -2;
}



/* Function: call_pthread_join @ 00012e90 */

int call_pthread_join(void)

{
 return param_pthread_join();
}



/* Function: thread_increment @ 00012eb0 */

void * thread_increment(void *param_1)

{
 int iVar1;
 int local_10;
 
 iVar1 = *(int *)param_1;
 for (local_10 = 0; local_10 < iVar1; local_10 = local_10 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return (void *)0;
}



/* Function: param_mutex_lock @ 00012f40 */

int param_mutex_lock(int param_1,int param_2)

{
 pthread_t *__ptr;
 int iVar1;
 int local_1c;
 int local_18;
 int local_10;
 
 __ptr = malloc(sizeof(pthread_t) * param_1);
 if (__ptr == (pthread_t *)0x0) {
 local_10 = -1;
 }
 else {
 shared_counter = 0;
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 iVar1 = pthread_create(&__ptr[local_18],(pthread_attr_t *)0x0,
 thread_increment,&param_2);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 pthread_join(__ptr[local_1c],(void **)0x0);
 }
 free(__ptr);
 local_10 = 0xfffffffd;
 if (shared_counter == param_1 * param_2) {
 local_10 = 0x2a;
 }
 }
 return local_10;
}



/* Function: call_mutex_lock @ 00013090 */

int call_mutex_lock(void)

{
 return param_mutex_lock(4,1000);
}



/* Function: consumer_thread @ 000130c0 */

void * consumer_thread(void *unused)

{
 int data_copy;
 int *puVar2;
 
 pthread_mutex_lock(&cond_mutex);
 while (ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 }
 data_copy = data;
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = data_copy;
 return (void *)puVar2;
}



/* Function: producer_thread @ 00013160 */

void * producer_thread(void *unused)

{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}



/* Function: param_condition_variable @ 000131e0 */

int param_condition_variable(void)

{
 int uVar1;
 int iVar2;
 void *local_18;
 pthread_t local_14;
 pthread_t local_10;
 int local_c;
 
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar2 == 0) {
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_14,&local_18);
 pthread_join(local_10,(void **)0x0);
 uVar1 = *(int *)local_18;
 free(local_18);
 local_c = uVar1;
 }
 else {
 pthread_cancel(local_14);
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_condition_variable @ 000132f0 */

int call_condition_variable(void)

{
 return param_condition_variable();
}



/* Function: thread_atomic_increment @ 00013310 */

void * thread_atomic_increment(void *param_1)

{
 int iVar1;
 int local_c;
 
 for (local_c = 0; local_c < *(int *)param_1; local_c = local_c + 1) {
 LOCK();
 iVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = local_c + 1000;
 LOCK();
 if (local_c != iVar1) {
 atomic_counter = iVar1;
 }
 UNLOCK();
 }
 return (void *)0;
}



/* Function: thread_atomic_load_store @ 000133c0 */

void * thread_atomic_load_store(void *unused)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0;
}



/* Function: param_atomic_ops @ 00013400 */

static int stack0x00000008 = 500;

int param_atomic_ops(int param_1, int param_2)

{
 int iVar1;
 int local_20;
 pthread_t local_1c;
 int local_18;
 int local_14;
 pthread_t *local_10;
 int local_c;
 
 local_10 = malloc(sizeof(pthread_t) * param_1);
 if (local_10 == (pthread_t *)0x0) {
 local_c = -1;
 }
 else {
 local_14 = 0;
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 iVar1 = pthread_create(&local_10[local_18],(pthread_attr_t *)0x0,
 thread_atomic_increment,&stack0x00000008);
 if (iVar1 != 0) {
 free(local_10);
 return 0xfffffffe;
 }
 }
 iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_1c,(void **)0x0);
 }
 for (local_20 = 0; iVar1 = atomic_counter, local_20 < param_1; local_20 = local_20 + 1) {
 pthread_join(local_10[local_20],(void **)0x0);
 }
 free(local_10);
 local_c = 0xfffffffd;
 if (0 < iVar1) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_atomic_ops @ 000135a0 */

int call_atomic_ops(void)

{
 return param_atomic_ops(4,500);
}



/* Function: thread_tls_test @ 000135d0 */

static __thread int thread_local_value = 100;

void * thread_tls_test(void *param_1)

{
 int iVar1;
 int *piVar2;
 char *thread_local_buffer;
 
 iVar1 = thread_local_value;
 thread_local_value = thread_local_value + 0x32;
 thread_local_buffer = malloc(32);
 strncpy(thread_local_buffer,(char *)param_1,0x1f);
 piVar2 = malloc(8);
 *piVar2 = iVar1;
 piVar2[1] = thread_local_value;
 free(thread_local_buffer);
 return (void *)piVar2;
}



/* Function: param_thread_local_storage @ 00013660 */

int param_thread_local_storage(int param_1)

{
 void *pvVar1;
 int iVar2;
 void *local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 void **local_14;
 pthread_t *local_10;
 int local_c;
 
 local_10 = malloc(sizeof(pthread_t) * param_1);
 local_14 = malloc(sizeof(void *) * param_1);
 if ((local_10 == (pthread_t *)0x0) || (local_14 == (void **)0x0)) {
 local_c = -1;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 pvVar1 = malloc(0x10);
 local_14[local_18] = pvVar1;
 snprintf((char *)local_14[local_18],0x10,"Thread-%d",local_18);
 }
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 iVar2 = pthread_create(&local_10[local_1c],(pthread_attr_t *)0x0,
 thread_tls_test,local_14[local_1c]);
 if (iVar2 != 0) {
 for (local_20 = 0; local_20 <= local_1c; local_20 = local_20 + 1) {
 free(local_14[local_20]);
 }
 free(local_14);
 free(local_10);
 return 0xfffffffe;
 }
 }
 local_24 = 0;
 local_28 = 0;
 for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
 pthread_join(local_10[local_2c],&local_30);
 local_24 = *(int *)local_30 + local_24;
 local_28 = ((int *)local_30)[1] + local_28;
 free(local_30);
 free(local_14[local_2c]);
 }
 free(local_14);
 free(local_10);
 local_c = 0xfffffffd;
 if (local_24 == param_1 * 100 && local_28 == param_1 * 0x96) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_thread_local_storage @ 000138e0 */

int call_thread_local_storage(void)

{
 return param_thread_local_storage(4);
}



/* Function: test_thread_concurrency @ 00013910 */

void test_thread_concurrency(void)

{
 undefined4 uVar1;
 
 printf(&DAT_0001433a);
 uVar1 = call_pthread_create();
 printf(&DAT_00014359,uVar1);
 uVar1 = call_pthread_join();
 printf(&DAT_00014375,uVar1);
 uVar1 = call_mutex_lock();
 printf(&DAT_00014392,uVar1);
 uVar1 = call_condition_variable();
 printf(&DAT_000143ae,uVar1);
 uVar1 = call_atomic_ops();
 printf(&DAT_000143ca,uVar1);
 uVar1 = call_thread_local_storage();
 printf(&DAT_000143e6,uVar1);
 return;
}



/* Function: main @ 000139f0 */

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
