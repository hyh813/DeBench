/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <stdbool.h>
#include <time.h>
#include <netinet/in.h>

/* Ensure errno location function is available */
#ifndef __errno_location
extern int *__errno_location(void);
#endif

/* Auto-injected type definitions by preprocessor */
typedef unsigned long ptrdiff_t;
typedef unsigned char byte;
typedef unsigned int uint;

/* Ghidra decompiler type definitions */
typedef uint32_t undefined4;
typedef uint8_t undefined1;

/* Forward declarations */
void signal_handler(int);

/* String constant definitions */
char DAT_000133fd[] = "test";
char DAT_00013401[] = "string";
char DAT_00013405[] = "hello";
char DAT_00013409[] = "world";
char DAT_0001340d[] = "data";
char DAT_00013496[] = "Testing strcpy: %d\n";
char DAT_000134bb[] = "Testing strcmp: %d\n";
char DAT_000134d6[] = "Testing strlen: %d\n";
char DAT_000134f1[] = "Testing memcpy: %d\n";
char DAT_0001350d[] = "Testing memcmp: %d\n";
char DAT_00013529[] = "Testing printf: %d\n";
char DAT_00013545[] = "Testing scanf: %d\n";
char DAT_00013561[] = "Testing fopen/fclose: %d\n";
char DAT_0001357e[] = "Testing fread/fwrite: %d\n";
char DAT_0001359a[] = "Testing malloc/free: %d\n";
char DAT_000135b6[] = "Testing memset: %d\n";
char DAT_000135d2[] = "Testing strchr/strstr: %d\n";
char DAT_000135ed[] = "Standard library tests complete: %d\n";
char DAT_0001363c[] = "Testing Linux syscall: %d\n";
char DAT_00013658[] = "Testing file API: %d\n";
char DAT_00013674[] = "Testing fork/exec: %d\n";
char DAT_00013690[] = "Testing pipe: %d\n";
char DAT_000136ac[] = "Testing socket: %d\n";
char DAT_000136c8[] = "Testing shared memory: %d\n";
char DAT_000136e4[] = "Testing signal: %d\n";
char DAT_00013700[] = "System call tests complete: %d\n";
char DAT_00013726[] = "Testing pthread_create: %d\n";
char DAT_00013745[] = "Testing pthread_join: %d\n";
char DAT_00013761[] = "Testing mutex: %d\n";
char DAT_0001377e[] = "Testing condition variable: %d\n";
char DAT_0001379a[] = "Testing atomic ops: %d\n";
char DAT_000137b6[] = "Testing thread local storage: %d\n";
char DAT_000137d2[] = "Thread concurrency tests complete: %d\n";

/* Global variables */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;
int atomic_counter = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/6/6_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 000110a8 */

void *param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return param_1;
}



/* Function: call_strcpy @ 000110dc */

undefined4 call_strcpy(void)

{
 undefined4 uVar1;
 undefined1 auStack_28 [32];
 
 uVar1 = param_strcpy(auStack_28,"HelloLib");
 return uVar1;
}



/* Function: param_strcmp @ 00011110 */

int param_strcmp(char *param_1,char *param_2)

{
 undefined4 local_18;
 
 local_18 = strcmp(param_1,param_2);
 if (local_18 < 1) {
 local_18 = local_18 >> 0x1f;
 }
 else {
 local_18 = 1;
 }
 return local_18;
}



/* Function: call_strcmp @ 00011170 */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp(&DAT_000133fd,&DAT_00013401);
 iVar2 = param_strcmp(&DAT_00013405,"");
 iVar3 = param_strcmp(&DAT_00013409,&DAT_0001340d);
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 000111f4 */

size_t param_strlen(char *param_1)

{
 size_t sVar1;
 
 sVar1 = strlen(param_1);
 return sVar1;
}



/* Function: call_strlen @ 00011220 */

undefined4 call_strlen(void)

{
 param_strlen("BinBench2025");
 return 0;
}



/* Function: param_memcpy @ 00011250 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3;
}



/* Function: call_memcpy @ 00011288 */

int call_memcpy(void)

{
 int local_38 [6];
 undefined4 uStack_20;
 undefined4 uStack_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 
 local_38[5] = 10;
 uStack_20 = 0x14;
 uStack_1c = 0x1e;
 uStack_18 = 0x28;
 uStack_14 = 0x32;
 local_38[4] = 0;
 local_38[3] = 0;
 local_38[2] = 0;
 local_38[1] = 0;
 local_38[0] = 0;
 param_memcpy(local_38,local_38 + 5,0x14);
 return local_38[0] + local_38[2] + local_38[4];
}



/* Function: param_memcmp @ 000112f4 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 undefined4 local_1c;
 
 local_1c = memcmp(param_1,param_2,param_3);
 if (local_1c < 1) {
 local_1c = local_1c >> 0x1f;
 }
 else {
 local_1c = 1;
 }
 return local_1c;
}



/* Function: call_memcmp @ 0001135c */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 local_1c = 2;
 local_18 = 4;
 local_20 = 1;
 local_28 = 2;
 local_24 = 3;
 local_2c = 1;
 iVar1 = param_memcmp(&local_14,&local_20,4);
 iVar2 = param_memcmp(&local_14,&local_2c,0xc);
 return iVar1 + iVar2;
}



/* Function: param_printf @ 00011438 */

int param_printf(undefined4 param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
 return iVar1;
}



/* Function: call_printf @ 00011478 */

undefined4 call_printf(void)

{
 undefined4 uVar1;
 
 uVar1 = param_printf(0x2a,"Test");
 return uVar1;
}



/* Function: param_scanf @ 000114ac */

int param_scanf(undefined4 param_1)

{
 int iVar1;
 int local_18;
 int local_14;
 undefined4 local_10;
 int local_c;
 
 local_10 = param_1;
 iVar1 = sscanf(param_1,"%d,%d",&local_14,&local_18);
 if (iVar1 == 2) {
 local_c = local_14 + local_18;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_scanf @ 0001151c */

undefined4 call_scanf(void)

{
 param_scanf("123,456");
 return 0;
}



/* Function: param_fopen_fclose @ 0001153c */

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



/* Function: call_fopen_fclose @ 000115b0 */

undefined4 call_fopen_fclose(void)

{
 uint uVar1;
 undefined4 uVar2;
 
 uVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0xffffffff;
 if (uVar1 < 0x80000000) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_fread_fwrite @ 000115ec */

undefined4 param_fread_fwrite(char *param_1)

{
 char *__ptr;
 FILE *__s;
 size_t sVar1;
 size_t sVar2;
 int iVar3;
 bool bVar4;
 char acStack_34 [32];
 char *local_14;
 char *local_10;
 undefined4 local_c;
 
 local_14 = "BinBench Test Data";
 local_10 = param_1;
 __s = fopen(param_1,"w+");
 __ptr = local_14;
 if (__s == (FILE *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 sVar1 = strlen(local_14);
 sVar1 = fwrite(__ptr,1,sVar1,__s);
 sVar2 = strlen(local_14);
 if (sVar1 == sVar2) {
 rewind(__s);
 sVar2 = fread(acStack_34,1,sVar1,__s);
 acStack_34[sVar2] = '\0';
 fclose(__s);
 unlink(local_10);
 bVar4 = 0;
 if (sVar2 == sVar1) {
 iVar3 = strcmp(acStack_34,local_14);
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



/* Function: call_fread_fwrite @ 00011744 */

undefined4 call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return 0;
}



/* Function: param_malloc_free @ 00011764 */

int param_malloc_free(uint param_1)

{
 int *__ptr;
 uint local_18;
 int local_c;
 
 __ptr = malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 __ptr[local_18] = local_18 * 10;
 }
 local_c = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return local_c;
}



/* Function: call_malloc_free @ 0001182c */

undefined4 call_malloc_free(void)

{
 param_malloc_free(10);
 return 0;
}



/* Function: param_memset @ 00011844 */

int param_memset(void *param_1,uint param_2)

{
 undefined4 local_1c;
 undefined4 local_18;
 
 memset(param_1,0,param_2);
 local_18 = 0;
 for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
 local_18 = local_18 + (uint)*(byte *)((int)param_1 + local_1c);
 }
 return local_18;
}



/* Function: call_memset @ 000118d4 */

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



/* Function: param_strchr_strstr @ 00011944 */

int param_strchr_strstr(char *param_1,unsigned char param_2,char *param_3)

{
 char *pcVar1;
 undefined4 local_2c;
 undefined4 local_28;
 
 pcVar1 = strchr(param_1,(uint)param_2);
 if (pcVar1 == (char *)0x0) {
 local_28 = -1;
 }
 else {
 local_28 = (int)pcVar1 - (int)param_1;
 }
 pcVar1 = strstr(param_1,param_3);
 if (pcVar1 == (char *)0x0) {
 local_2c = -1;
 }
 else {
 local_2c = (int)pcVar1 - (int)param_1;
 }
 return local_28 + local_2c;
}



/* Function: call_strchr_strstr @ 00011a04 */

undefined4 call_strchr_strstr(void)

{
 undefined4 uVar1;
 
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}



/* Function: test_standard_library_functions @ 00011a4c */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 
 printf(&DAT_00013496);
 uVar1 = call_strcpy();
 printf(&DAT_000134bb,uVar1);
 uVar1 = call_strcmp();
 printf(&DAT_000134d6,uVar1);
 uVar1 = call_strlen();
 printf(&DAT_000134f1,uVar1);
 uVar1 = call_memcpy();
 printf(&DAT_0001350d,uVar1);
 uVar1 = call_memcmp();
 printf(&DAT_00013529,uVar1);
 uVar1 = call_printf();
 printf(&DAT_00013545,uVar1);
 uVar1 = call_scanf();
 printf(&DAT_00013561,uVar1);
 uVar1 = call_fopen_fclose();
 printf(&DAT_0001357e,uVar1);
 uVar1 = call_fread_fwrite();
 printf(&DAT_0001359a,uVar1);
 uVar1 = call_malloc_free();
 printf(&DAT_000135b6,uVar1);
 uVar1 = call_memset();
 printf(&DAT_000135d2,uVar1);
 uVar1 = call_strchr_strstr();
 printf(&DAT_000135ed,uVar1);
 return;
}



/* Function: param_linux_syscall @ 00011b8c */

uint param_linux_syscall(void *param_1)

{
 int *piVar1;
 undefined4 local_c;
 
 local_c = syscall(5,param_1,0);
 if (local_c < 0x80000000) {
 syscall(6,local_c);
 }
 else {
 piVar1 = __errno_location();
 local_c = -*piVar1;
 }
 return local_c;
}



/* Function: call_linux_syscall @ 00011bfc */

undefined4 call_linux_syscall(void)

{
 uint uVar1;
 undefined4 uVar2;
 
 uVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0xffffffff;
 if (uVar1 < 0x80000000) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_win32_api @ 00011c38 */

undefined4 param_win32_api(char *param_1)

{
 uint uVar1;
 struct stat sStack_68;
 char *local_10;
 undefined4 local_c;
 
 local_10 = param_1;
 uVar1 = stat(param_1,&sStack_68);
 if (uVar1 < 0x80000000) {
 local_c = 0xfffffffe;
 if (0 < sStack_68.st_size) {
 local_c = 0x2a;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_win32_api @ 00011c94 */

undefined4 call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return 0;
}



/* Function: param_fork_exec @ 00011cb4 */

uint param_fork_exec(char *param_1,undefined4 param_2)

{
 uint uVar1;
 unsigned char local_1c;
 unsigned char local_1b;
 uint local_18;
 undefined4 local_14;
 char *local_10;
 uint local_c;
 
 local_14 = param_2;
 local_10 = param_1;
 local_18 = fork();
 if (local_18 < 0x80000000) {
 if (local_18 == 0) {
 execl(local_10,local_10,local_14,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 uVar1 = waitpid(local_18,(int *)&local_1c,0);
 if (uVar1 < 0x80000000) {
 if ((local_1c & 0x7f) == 0) {
 local_c = (uint)local_1b;
 }
 else {
 local_c = 0xfffffffd;
 }
 }
 else {
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_fork_exec @ 00011d80 */

int call_fork_exec(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_pipe_communication @ 00011dc0 */

undefined4 param_pipe_communication(void)

{
 int __fd;
 uint uVar1;
 size_t __n;
 ssize_t sVar2;
 undefined1 auStack_34 [32];
 int local_14;
 int local_10;
 undefined4 local_c;
 
 uVar1 = pipe(&local_14);
 if (uVar1 < 0x80000000) {
 uVar1 = fork();
 if (uVar1 < 0x80000000) {
 if (uVar1 == 0) {
 close(local_14);
 __fd = local_10;
 __n = strlen("HelloPipe");
 write(__fd,"HelloPipe",__n);
 close(local_10);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_10);
 sVar2 = read(local_14,auStack_34,0x1f);
 auStack_34[sVar2] = 0;
 close(local_14);
 wait((void *)0x0);
 local_c = 0xfffffffd;
 if (0 < sVar2) {
 local_c = 0x2a;
 }
 }
 else {
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_pipe_communication @ 00011ed8 */

undefined4 call_pipe_communication(void)

{
 param_pipe_communication();
 return 0;
}



/* Function: param_socket_create @ 00011eec */

undefined4 param_socket_create(void)

{
 uint16_t uVar1;
 uint uVar2;
	struct sockaddr local_24;
 undefined4 local_14;
 uint local_10;
 undefined4 local_c;
 
 local_10 = socket(2,1,0);
 if (local_10 < 0x80000000) {
 local_14 = 1;
 uVar2 = setsockopt(local_10,1,2,&local_14,4);
 if (uVar2 < 0x80000000) {
 local_24.sa_data[10] = '\0';
 local_24.sa_data[0xb] = '\0';
 local_24.sa_data[0xc] = '\0';
 local_24.sa_data[0xd] = '\0';
 local_24.sa_data[6] = '\0';
 local_24.sa_data[7] = '\0';
 local_24.sa_data[8] = '\0';
 local_24.sa_data[9] = '\0';
 local_24.sa_data[2] = '\0';
 local_24.sa_data[3] = '\0';
 local_24.sa_data[4] = '\0';
 local_24.sa_data[5] = '\0';
 local_24.sa_family = 2;
 local_24.sa_data[0] = '\0';
 local_24.sa_data[1] = '\0';
 uVar1 = htons(0);
	*(uint16_t *)(local_24.sa_data) = uVar1;
 local_24.sa_data[2] = '\0';
 local_24.sa_data[3] = '\0';
 local_24.sa_data[4] = '\0';
 local_24.sa_data[5] = '\0';
 uVar2 = bind(local_10,&local_24,0x10);
 if (uVar2 < 0x80000000) {
 uVar2 = listen(local_10,5);
 if (uVar2 < 0x80000000) {
 close(local_10);
 local_c = 0x2a;
 }
 else {
 close(local_10);
 local_c = 0xfffffffc;
 }
 }
 else {
 close(local_10);
 local_c = 0xfffffffd;
 }
 }
 else {
 close(local_10);
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_socket_create @ 00012020 */

undefined4 call_socket_create(void)

{
 param_socket_create();
 return 0;
}



/* Function: param_shmget_shmat @ 00012034 */

size_t param_shmget_shmat(void)

{
 uint uVar1;
 char *__dest;
 size_t local_c;
 
 uVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (uVar1 < 0x80000000) {
 close(uVar1);
 uVar1 = ftok("/tmp/binbench_shm",0x2a);
 if (uVar1 < 0x80000000) {
 uVar1 = shmget(uVar1,0x1000,0x3b6);
 if (uVar1 < 0x80000000) {
 __dest = shmat(uVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffff) {
 local_c = 0xfffffffd;
 }
 else {
 strcpy(__dest,"SharedMemory");
 local_c = strlen(__dest);
 shmdt(__dest);
 shmctl(uVar1,IPC_RMID,(struct shmid_ds *)0x0);
 }
 }
 else {
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_shmget_shmat @ 00012178 */

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



/* Function: param_signal_handling @ 000121a8 */

undefined4 param_signal_handling(void)

{
 int iVar1;
 __sighandler_t p_Var2;
 int local_10;
 undefined4 local_c;
 
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)SIG_ERR) {
 local_c = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)SIG_ERR) {
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
 signal(10,SIG_DFL);
 signal(0xe,SIG_DFL);
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



/* Function: signal_handler @ 000123d0 */

void signal_handler(int param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: call_signal_handling @ 00012408 */

undefined4 call_signal_handling(void)

{
 param_signal_handling();
 return 0;
}



/* Function: test_system_calls @ 0001241c */

void test_system_calls(void)

{
 undefined4 uVar1;
 
 printf(&DAT_0001363c);
 uVar1 = call_linux_syscall();
 printf(&DAT_00013658,uVar1);
 uVar1 = call_win32_api();
 printf(&DAT_00013674,uVar1);
 uVar1 = call_fork_exec();
 printf(&DAT_00013690,uVar1);
 uVar1 = call_pipe_communication();
 printf(&DAT_000136ac,uVar1);
 uVar1 = call_socket_create();
 printf(&DAT_000136c8,uVar1);
 uVar1 = call_shmget_shmat();
 printf(&DAT_000136e4,uVar1);
 uVar1 = call_signal_handling();
 printf(&DAT_00013700,uVar1);
 return;
}



/* Function: thread_compute @ 000124e4 */

void * thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *(int *)param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 0001253c */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *local_1c;
 undefined4 local_18;
 pthread_t local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_18 = param_1;
 local_10 = param_1;
	iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_compute,&local_18);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_1c);
 uVar2 = *(undefined4 *)local_1c;
 free(local_1c);
 local_c = uVar2;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_pthread_create @ 000125cc */

undefined4 call_pthread_create(void)

{
 param_pthread_create(7);
 return 0;
}



/* Function: thread_sum @ 000125e4 */

void * thread_sum(void *param_1)

{
 int local_c;
 int *params = (int *)param_1;
 
 params[2] = 0;
 for (local_c = params[0]; local_c <= params[1]; local_c = local_c + 1) {
 params[2] = params[2] + local_c;
 }
 return NULL;
}



/* Function: param_pthread_join @ 0001265c */

int param_pthread_join(void)

{
 int iVar1;
 int local_48;
 int local_44;
 int local_40;
 int local_3c [6];
 undefined4 local_24;
 undefined4 local_20;
 pthread_t apStack_18 [4];
 
 memset(local_3c,0,0x24);
 local_3c[0] = 1;
 local_3c[1] = 10;
 local_3c[3] = 0xb;
 local_3c[4] = 0x14;
 local_24 = 0x15;
 local_20 = 0x1e;
 for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
 iVar1 = pthread_create(apStack_18 + local_40,(pthread_attr_t *)0x0,thread_sum,
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
 iVar1 = pthread_join(apStack_18[local_48],(void **)0x0);
 if (iVar1 != 0) break;
 local_44 = local_44 + local_3c[local_48 * 3 + 2];
 local_48 = local_48 + 1;
 }
 return -2;
}



/* Function: call_pthread_join @ 000127bc */

int call_pthread_join(void)

{
 param_pthread_join();
 return 0;
}



/* Function: thread_increment @ 000127d0 */

void *thread_increment(void *param_1)

{
 int iVar1;
 int local_14;
 
 iVar1 = *(int *)param_1;
	for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
	pthread_mutex_lock(&counter_mutex);
	shared_counter = shared_counter + 1;
	pthread_mutex_unlock(&counter_mutex);
	usleep(1000);
 }
	return (void *)0;
}



/* Function: param_mutex_lock @ 00012874 */

undefined4 param_mutex_lock(int param_1,int param_2)

{
 void *__ptr;
 int iVar1;
 int local_20;
 int local_1c;
 int local_14;
 int local_10;
 undefined4 local_c;
 
 local_14 = param_2;
 local_10 = param_1;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_1c = 0; local_1c < local_10; local_1c = local_1c + 1) {
 iVar1 = pthread_create((pthread_t *)((int)__ptr + local_1c * 4),(pthread_attr_t *)0x0,
 thread_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 pthread_join(*(pthread_t *)((int)__ptr + local_20 * 4),(void **)0x0);
 }
 free(__ptr);
 local_c = 0xfffffffd;
 if (shared_counter == local_10 * local_14) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_mutex_lock @ 000129d0 */

undefined4 call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return 0;
}



/* Function: consumer_thread @ 000129ec */

void * consumer_thread(void *param_1)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 undefined4 local_1c;
 
	pthread_mutex_lock(&cond_mutex);
 while (uVar1 = data, ready == 0) {
	pthread_cond_wait(&cond,&cond_mutex);
 }
	pthread_mutex_unlock(&cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}



/* Function: producer_thread @ 00012a90 */

void * producer_thread(void *param_1)

{
 sleep(1);
	pthread_mutex_lock(&cond_mutex);
	data = 0x2a;
	ready = 1;
	pthread_cond_signal(&cond);
	pthread_mutex_unlock(&cond_mutex);
 return NULL;
}



/* Function: param_condition_variable @ 00012b10 */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 *local_18;
 pthread_t local_14;
 pthread_t local_10;
 undefined4 local_c;
 
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 void *join_ret;
 pthread_join(local_14,&join_ret);
 pthread_join(local_10,(void **)0x0);
 local_18 = join_ret;
 uVar2 = *local_18;
 free(join_ret);
 local_c = uVar2;
 }
 else {
 pthread_cancel(local_14);
 local_c = 0xfffffffe;
 }
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_condition_variable @ 00012bf4 */

undefined4 call_condition_variable(void)

{
 param_condition_variable();
 return 0;
}



/* Function: thread_atomic_increment @ 00012c08 */

void * thread_atomic_increment(void *param_1)

{
 int local_20;
 undefined4 local_1c;
 int local_18;
 int local_14;
 int local_10;
 int *local_c;
 
 local_10 = *(int *)param_1;
 local_c = param_1;
 for (local_14 = 0; local_14 < local_10; local_14 = local_14 + 1) {
 local_18 = 1;
 __sync_fetch_and_add(&atomic_counter,1);
 local_20 = local_14;
 __sync_val_compare_and_swap((int *)&atomic_counter,local_20,local_14 + 1000);
 }
 return NULL;
}



/* Function: thread_atomic_load_store @ 00012cd0 */

void * thread_atomic_load_store(void *param_1)

{
 int iVar1;
 
 iVar1 = __atomic_load_4(&atomic_counter,5);
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return (void *)0;
}



/* Function: param_atomic_ops @ 00012d38 */

undefined4 param_atomic_ops(int param_1,undefined4 param_2)

{
 int iVar1;
 int local_28;
 pthread_t local_24;
 int local_20;
 undefined4 local_1c;
 void *local_18;
 void *local_19;
 undefined4 local_14;
 int local_10;
 undefined4 local_c;
 int local_8;
 
 local_14 = param_2;
 local_10 = param_1;
 local_18 = malloc(param_1 << 2);
 if (local_18 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_1c = 0;
 __atomic_store_4(&atomic_counter,0,5);
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 iVar1 = pthread_create((pthread_t *)((int)local_18 + local_20 * 4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(local_18);
 return 0xfffffffe;
 }
 }
	iVar1 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_24,&local_19);
 }
 for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
 void *join_ret2;
 pthread_join(*(pthread_t *)((int)local_18 + local_28 * 4),&join_ret2);
 }
 local_8 = __atomic_load_4(&atomic_counter,5);
 iVar1 = local_8;
 free(local_18);
 local_c = 0xfffffffd;
 if (0 < iVar1) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_atomic_ops @ 00012ee8 */

undefined4 call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return 0;
}



/* Function: thread_tls_test @ 00012f04 */

void * thread_tls_test(char *param_1)

{
 undefined4 *puVar2;
 undefined4 uVar3;
 static __thread int tls_value = 100;
 
 uVar3 = tls_value;
 tls_value = tls_value + 0x32;
 puVar2 = malloc(8);
 *puVar2 = uVar3;
 puVar2[1] = 0;
 return (void *)puVar2;
}



/* Function: param_thread_local_storage @ 00012f9c */

undefined4 param_thread_local_storage(int param_1)

{
 void *pvVar1;
 int iVar2;
 int *local_34;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 void *local_18;
 void *local_14;
 int local_10;
 undefined4 local_c;
 
 local_10 = param_1;
 local_14 = malloc(param_1 << 2);
 local_18 = malloc(local_10 << 2);
 if ((local_14 == (void *)0x0) || (local_18 == (void *)0x0)) {
 local_c = 0xffffffff;
 }
 else {
 for (local_1c = 0; local_1c < local_10; local_1c = local_1c + 1) {
 pvVar1 = malloc(0x10);
 *(void **)((int)local_18 + local_1c * 4) = pvVar1;
 snprintf(*(char **)((int)local_18 + local_1c * 4),0x10,"Thread-%d");
 }
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 iVar2 = pthread_create((pthread_t *)((int)local_14 + local_20 * 4),(pthread_attr_t *)0x0,
 thread_tls_test,*(void **)((int)local_18 + local_20 * 4));
 if (iVar2 != 0) {
 for (local_24 = 0; local_24 <= local_20; local_24 = local_24 + 1) {
 free(*(void **)((int)local_18 + local_24 * 4));
 }
 free(local_18);
 free(local_14);
 return 0xfffffffe;
 }
 }
	local_28 = 0;
	local_2c = 0;
	for (local_30 = 0; local_30 < local_10; local_30 = local_30 + 1) {
 void *join_ret;
 pthread_join(*(pthread_t *)((int)local_14 + local_30 * 4),&join_ret);
 local_28 = local_28 + *(int *)join_ret;
 local_2c = local_2c + 0;
 free(join_ret);
 free(*(void **)((int)local_18 + local_30 * 4));
 }
 free(local_18);
 free(local_14);
 local_c = 0xfffffffd;
 if (local_28 == local_10 * 100 && local_2c == local_10 * 0x96) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_thread_local_storage @ 00013254 */

undefined4 call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return 0;
}



/* Function: test_thread_concurrency @ 0001326c */

void test_thread_concurrency(void)

{
 undefined4 uVar1;
 
 printf(&DAT_00013726);
 uVar1 = call_pthread_create();
 printf(&DAT_00013745,uVar1);
 uVar1 = call_pthread_join();
 printf(&DAT_00013761,uVar1);
 uVar1 = call_mutex_lock();
 printf(&DAT_0001377e,uVar1);
 uVar1 = call_condition_variable();
 printf(&DAT_0001379a,uVar1);
 uVar1 = call_atomic_ops();
 printf(&DAT_000137b6,uVar1);
 uVar1 = call_thread_local_storage();
 printf(&DAT_000137d2,uVar1);
 return;
}



/* Function: main @ 0001331c */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
