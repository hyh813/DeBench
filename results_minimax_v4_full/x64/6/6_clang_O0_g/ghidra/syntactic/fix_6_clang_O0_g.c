/* Auto-injected type definitions by preprocessor */
#ifndef _STDINT_TYPES_DEFINED
#define _STDINT_TYPES_DEFINED
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
#endif
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int undefined4;
typedef int bool;
#define true 1
#define false 0

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <errno.h>
#include <sys/syscall.h>

/* Global variables for signal handling */
static int signal_received = 0;
static int signal_number = 0;

/* Global variables for thread synchronization */
static int data = 0;
static int ready = 0;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Thread data structure for pthread_join */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

/* Global counter for mutex operations */
static int shared_counter = 0;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;

/* Atomic counter for atomic operations */
static int atomic_counter = 0;

/* Signal handler function declaration */
void signal_handler(int sig);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(void (*)())0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */

/* Data constants */
static const char DAT_001050a6[] = "=== Testing Standard Library Functions ===\n";
static const char DAT_001050cb[] = "strcpy result: %u\n";
static const char DAT_001050e6[] = "strcmp result: %d\n";
static const char DAT_00105101[] = "strlen result: %u\n";
static const char DAT_0010511d[] = "memcpy result: %u\n";
static const char DAT_00105139[] = "memcmp result: %d\n";
static const char DAT_00105155[] = "printf result: %d\n";
static const char DAT_00105171[] = "scanf result: %d\n";
static const char DAT_0010518e[] = "fopen result: %d\n";
static const char DAT_001051aa[] = "fread/fwrite result: %d\n";
static const char DAT_001051c6[] = "malloc/free result: %d\n";
static const char DAT_001051e2[] = "memset result: %d\n";
static const char DAT_001051fd[] = "strchr/strstr result: %d\n";
static const char DAT_0010524c[] = "=== Testing System Calls ===\n";
static const char DAT_00105268[] = "linux_syscall result: %d\n";
static const char DAT_00105284[] = "win32_api result: %d\n";
static const char DAT_001052a0[] = "fork_exec result: %d\n";
static const char DAT_001052bc[] = "pipe_communication result: %d\n";
static const char DAT_001052d8[] = "socket_create result: %d\n";
static const char DAT_001052f4[] = "shmget_shmat result: %d\n";
static const char DAT_00105310[] = "signal_handling result: %d\n";
static const char DAT_00105336[] = "=== Testing Thread Concurrency ===\n";
static const char DAT_00105355[] = "pthread_create result: %u\n";
static const char DAT_00105371[] = "pthread_join result: %d\n";
static const char DAT_0010538e[] = "mutex_lock result: %d\n";
static const char DAT_001053aa[] = "condition_variable result: %d\n";
static const char DAT_001053c6[] = "atomic_ops result: %d\n";
static const char DAT_001053e2[] = "thread_local_storage result: %d\n";





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 001024b0 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 char *src_local;
 char *dst_local;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return (int)sVar1;
}



/* Function: call_strcpy @ 001024e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 int iVar1;
 int len;
 char buffer [32];
 
 iVar1 = param_strcpy(buffer,"HelloLib");
 return iVar1;
}



/* Function: param_strcmp @ 00102510 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int local_20;
 char *s2_local;
 char *s1_local;
 
 iVar1 = strcmp(s1,s2);
 if (iVar1 < 1) {
 local_20 = 0;
 if (iVar1 < 0) {
 local_20 = -1;
 }
 }
 else {
 local_20 = 1;
 }
 return local_20;
}



/* Function: call_strcmp @ 00102570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int r3;
 int r2;
 int r1;
 
 iVar1 = param_strcmp("abc","def");
 iVar2 = param_strcmp("xyz","xyz");
 iVar3 = param_strcmp("bbb","aaa");
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 001025d0 */

int param_strlen(char *str)

{
 size_t sVar1;
 size_t len;
 char *str_local;
 
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 00102600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 int iVar1;
 char *test;
 
 iVar1 = param_strlen("BinBench2025");
 return iVar1;
}



/* Function: param_memcpy @ 00102630 */

int param_memcpy(void *dst,void *src,size_t n)

{
 size_t n_local;
 void *src_local;
 void *dst_local;
 
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00102660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 int dst [5];
 int src [5];
 
 src[0] = 10;
 src[1] = 0x14;
 src[2] = 0x1e;
 src[3] = 0x28;
 src[4] = 0x32;
 memset(dst,0,0x14);
 param_memcpy(dst,src,0x14);
 return dst[0] + dst[2] + dst[4];
}



/* Function: param_memcmp @ 001026c0 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 undefined4 local_28;
 int ret;
 size_t n_local;
 void *p2_local;
 void *p1_local;
 
 iVar1 = memcmp(p1,p2,n);
 if (iVar1 < 1) {
 local_28 = 0;
 if (iVar1 < 0) {
 local_28 = -1;
 }
 }
 else {
 local_28 = 1;
 }
 return local_28;
}



/* Function: call_memcmp @ 00102720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int r2;
 int r1;
 int arr3 [3];
 int arr2 [3];
 int arr1 [3];
 
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 iVar1 = param_memcmp(arr1,arr2,0xc);
 iVar2 = param_memcmp(arr1,arr3,0xc);
 return iVar1 + iVar2;
}



/* Function: param_printf @ 001027a0 */

int param_printf(int x,char *name)

{
 int iVar1;
 int ret;
 char *name_local;
 int x_local;
 
 iVar1 = printf("Value: %d, Name: %s\n",(ulong)(uint)x,name);
 return iVar1;
}



/* Function: call_printf @ 001027d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 int chars;
 
 iVar1 = param_printf(0x2a,"Test");
 return iVar1;
}



/* Function: param_scanf @ 00102800 */

int param_scanf(char *input_str)

{
 int iVar1;
 int ret;
 int b;
 int a;
 char *input_str_local;
 int local_c;
 
 input_str_local = input_str;
 iVar1 = sscanf(input_str,"%d,%d",&a,&b);
 if (iVar1 == 2) {
 local_c = a + b;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_scanf @ 00102860 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 
 iVar1 = param_scanf("123,456");
 return iVar1;
}



/* Function: param_fopen_fclose @ 00102880 */

int param_fopen_fclose(char *filename)

{
 FILE *__stream;
 int fd;
 FILE *fp;
 char *filename_local;
 int local_c;
 
 __stream = fopen(filename,"r");
 if (__stream == (FILE *)0x0) {
 local_c = -1;
 }
 else {
 local_c = fileno(__stream);
 fclose(__stream);
 }
 return local_c;
}



/* Function: call_fopen_fclose @ 001028e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 int iVar2;
 int fd;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_fread_fwrite @ 00102910 */

int param_fread_fwrite(char *tmpfile)

{
 int iVar1;
 FILE *__s;
 size_t sVar2;
 size_t sVar3;
 bool bVar4;
 size_t read;
 size_t written;
 FILE *fp;
 char read_buffer [32];
 char *write_data;
 char *tmpfile_local;
 int local_c;
 
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 local_c = -1;
 }
 else {
 sVar2 = strlen("BinBench Test Data");
 sVar2 = fwrite("BinBench Test Data",1,sVar2,__s);
 sVar3 = strlen("BinBench Test Data");
 if (sVar2 == sVar3) {
 rewind(__s);
 sVar3 = fread(read_buffer,1,sVar2,__s);
 read_buffer[sVar3] = '\0';
 fclose(__s);
 unlink(tmpfile);
 bVar4 = false;
 if (sVar3 == sVar2) {
 iVar1 = strcmp(read_buffer,"BinBench Test Data");
 bVar4 = iVar1 == 0;
 }
 local_c = -3;
 if (bVar4) {
 local_c = 0x2a;
 }
 }
 else {
 fclose(__s);
 local_c = -2;
 }
 }
 return local_c;
}



/* Function: call_fread_fwrite @ 00102a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00102a60 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int sum;
 size_t i;
 int *ptr;
 size_t size_local;
 int local_c;
 
 __ptr = malloc(size << 2);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 for (i = 0; i < size; i = i + 1) {
 __ptr[i] = (int)i * 10;
 }
 local_c = *__ptr + __ptr[size - 1];
 free(__ptr);
 }
 return local_c;
}



/* Function: call_malloc_free @ 00102b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 
 iVar1 = param_malloc_free(10);
 return iVar1;
}



/* Function: param_memset @ 00102b20 */

int param_memset(void *buffer,size_t size)

{
 size_t i;
 int sum;
 size_t size_local;
 void *buffer_local;
 
 memset(buffer,0,size);
 sum = 0;
 for (i = 0; i < size; i = i + 1) {
 sum = (uint)*(unsigned char *)((long)buffer + i) + sum;
 }
 return sum;
}



/* Function: call_memset @ 00102b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 int i;
 int buffer [10];
 
 for (i = 0; i < 10; i = i + 1) {
 buffer[i] = 0xff;
 }
 param_memset(buffer,0x28);
 return buffer[0] + buffer[9];
}



/* Function: param_strchr_strstr @ 00102be0 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 char *pcVar1;
 undefined4 local_50;
 undefined4 local_48;
 int index2;
 char *pos2;
 int index1;
 char *pos1;
 char *substr_local;
 char ch_local;
 char *str_local;
 
 pcVar1 = strchr(str,(int)ch);
 if (pcVar1 == (char *)0x0) {
 local_48 = -1;
 }
 else {
 local_48 = (int)pcVar1 - (int)str;
 }
 pcVar1 = strstr(str,substr);
 if (pcVar1 == (char *)0x0) {
 local_50 = -1;
 }
 else {
 local_50 = (int)pcVar1 - (int)str;
 }
 return local_48 + local_50;
}



/* Function: call_strchr_strstr @ 00102c90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 int iVar1;
 int result;
 char *text;
 
 iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
 return iVar1;
}



/* Function: test_standard_library_functions @ 00102cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 uint uVar1;
 
 printf(&DAT_001050a6);
 uVar1 = call_strcpy();
 printf(&DAT_001050cb,(ulong)uVar1);
 uVar1 = call_strcmp();
 printf(&DAT_001050e6,(ulong)uVar1);
 uVar1 = call_strlen();
 printf(&DAT_00105101,(ulong)uVar1);
 uVar1 = call_memcpy();
 printf(&DAT_0010511d,(ulong)uVar1);
 uVar1 = call_memcmp();
 printf(&DAT_00105139,(ulong)uVar1);
 uVar1 = call_printf();
 printf(&DAT_00105155,(ulong)uVar1);
 uVar1 = call_scanf();
 printf(&DAT_00105171,(ulong)uVar1);
 uVar1 = call_fopen_fclose();
 printf(&DAT_0010518e,(ulong)uVar1);
 uVar1 = call_fread_fwrite();
 printf(&DAT_001051aa,(ulong)uVar1);
 uVar1 = call_malloc_free();
 printf(&DAT_001051c6,(ulong)uVar1);
 uVar1 = call_memset();
 printf(&DAT_001051e2,(ulong)uVar1);
 uVar1 = call_strchr_strstr();
 printf(&DAT_001051fd,(ulong)uVar1);
 return;
}



/* Function: param_linux_syscall @ 00102de0 */

int param_linux_syscall(char *pathname)

{
 ulong uVar1;
 int *piVar2;
 int fd;
 char *pathname_local;
 undefined4 local_c;
 
 uVar1 = syscall(2,pathname,0);
 local_c = (int)uVar1;
 if (local_c < 0) {
 piVar2 = __errno_location();
 local_c = -*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return local_c;
}



/* Function: call_linux_syscall @ 00102e40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 int iVar2;
 int result;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_win32_api @ 00102e70 */

int param_win32_api(char *filename)

{
 int iVar1;
 struct stat st;
 char *filename_local;
 int local_c;
 
 iVar1 = stat(filename,(struct stat *)&st);
 if (iVar1 < 0) {
 local_c = -1;
 }
 else {
 local_c = -2;
 if (0 < st.st_size) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_win32_api @ 00102ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 
 iVar1 = param_win32_api("/etc/passwd");
 return iVar1;
}



/* Function: param_fork_exec @ 00102ef0 */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 pid_t wpid;
 int status;
 pid_t pid;
 char *arg_local;
 char *prog_local;
 int local_c;
 
 arg_local = arg;
 prog_local = prog;
 pid = fork();
 if (pid < 0) {
 local_c = -1;
 }
 else {
 if (pid == 0) {
 execl(prog_local,prog_local,arg_local,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(pid,&status,0);
 if (_Var1 < 0) {
 local_c = -2;
 }
 else if ((status & 0x7fU) == 0) {
 local_c = (int)(status & 0xff00U) >> 8;
 }
 else {
 local_c = -3;
 }
 }
 return local_c;
}



/* Function: call_fork_exec @ 00102fb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 int iVar2;
 int ret;
 
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_pipe_communication @ 00102ff0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 ssize_t bytes;
 char *msg;
 pid_t pid;
 char buffer [32];
 int pipefd [2];
 int local_c;
 
 iVar1 = pipe(pipefd);
 if (iVar1 < 0) {
 local_c = -1;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 local_c = -2;
 }
 else {
 if (_Var2 == 0) {
 close(pipefd[0]);
 iVar1 = pipefd[1];
 __n = strlen("HelloPipe");
 write(iVar1,"HelloPipe",__n);
 close(pipefd[1]);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(pipefd[1]);
 sVar3 = read(pipefd[0],buffer,0x1f);
 buffer[sVar3] = '\0';
 close(pipefd[0]);
 wait((void *)0x0);
 local_c = -3;
 if (0 < sVar3) {
 local_c = 0x2a;
 }
 }
 }
 return local_c;
}



/* Function: call_pipe_communication @ 001030e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 001030f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 struct sockaddr_in addr;
 int opt;
 int sock;
 int local_c;
 
 sock = socket(2,1,0);
 if (sock < 0) {
 local_c = -1;
 }
 else {
 opt = 1;
 iVar1 = setsockopt(sock,1,2,&opt,4);
 if (iVar1 < 0) {
 close(sock);
 local_c = -2;
 }
 else {
 memset(&addr,0,0x10);
 addr.sin_family = 2;
 addr.sin_port = htons(0);
 addr.sin_addr.s_addr = 0;
 iVar1 = bind(sock,(struct sockaddr *)&addr,0x10);
 if (iVar1 < 0) {
 close(sock);
 local_c = -3;
 }
 else {
 iVar1 = listen(sock,5);
 if (iVar1 < 0) {
 close(sock);
 local_c = -4;
 }
 else {
 close(sock);
 local_c = 0x2a;
 }
 }
 }
 }
 return local_c;
}



/* Function: call_socket_create @ 00103200 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00103210 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t sVar2;
 int len;
 char *shm;
 int shmid;
 key_t key;
 int fd;
 char *ftok_path;
 int local_c;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 local_c = -1;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 local_c = -1;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 local_c = -2;
 }
 else {
 __dest = shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffffffffffff) {
 local_c = -3;
 }
 else {
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 local_c = (int)sVar2;
 shmdt(__dest);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return local_c;
}



/* Function: call_shmget_shmat @ 00103320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int iVar2;
 int ret;
 
 iVar1 = param_shmget_shmat();
 iVar2 = -1;
 if (0 < iVar1) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_signal_handling @ 00103350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 int iVar1;
 __sighandler_t p_Var2;
 int attempts;
 int local_c;
 
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 local_c = -1;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 local_c = -2;
 }
 else {
 signal_received = 0;
 raise(10);
 attempts = 1000;
 while( true ) {
 iVar1 = attempts;
 if (signal_received == 0) {
 attempts = attempts + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if (signal_received == 0) {
 local_c = -3;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 attempts = 2000;
 while( true ) {
 iVar1 = attempts;
 if (signal_received == 0) {
 attempts = attempts + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 local_c = -5;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 local_c = 0x2a;
 }
 }
 else {
 local_c = -4;
 }
 }
 }
 return local_c;
}



/* Function: signal_handler @ 00103510 */

void signal_handler(int sig)

{
 int sig_local;
 
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00103530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00103540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 uint uVar1;
 
 printf(&DAT_0010524c);
 uVar1 = call_linux_syscall();
 printf(&DAT_00105268,(ulong)uVar1);
 uVar1 = call_win32_api();
 printf(&DAT_00105284,(ulong)uVar1);
 uVar1 = call_fork_exec();
 printf(&DAT_001052a0,(ulong)uVar1);
 uVar1 = call_pipe_communication();
 printf(&DAT_001052bc,(ulong)uVar1);
 uVar1 = call_socket_create();
 printf(&DAT_001052d8,(ulong)uVar1);
 uVar1 = call_shmget_shmat();
 printf(&DAT_001052f4,(ulong)uVar1);
 uVar1 = call_signal_handling();
 printf(&DAT_00105310,(ulong)uVar1);
 return;
}



/* Function: thread_compute @ 001035f0 */

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 int *ret;
 int result;
 int value;
 int *input;
 void *arg_local;
 
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 00103640 */

int param_pthread_create(int x)

{
 int iVar1;
 int result;
 int ret;
 void *thread_ret;
 int input;
 pthread_t tid;
 int x_local;
 int local_c;
 
 input = x;
 x_local = x;
 iVar1 = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 if (iVar1 == 0) {
 pthread_join(tid,&thread_ret);
 iVar1 = *(int *)thread_ret;
 free(thread_ret);
 local_c = iVar1;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_pthread_create @ 001036b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 
 iVar1 = param_pthread_create(7);
 return iVar1;
}



/* Function: thread_sum @ 001036c0 */

void * thread_sum(void *arg)

{
 int i;
 ThreadData *data;
 void *arg_local;
 
 *(undefined4 *)((long)arg + 8) = 0;
 for (i = *(int *)arg; i <= *(int *)((long)arg + 4); i = i + 1) {
 *(int *)((long)arg + 8) = i + *(int *)((long)arg + 8);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 00103720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int i_1;
 int total;
 int i;
 ThreadData data [3];
 pthread_t tids [3];
 
 memset(data,0,0x24);
 data[0].start = 1;
 data[0].end = 10;
 data[1].start = 0xb;
 data[1].end = 0x14;
 data[2].start = 0x15;
 data[2].end = 0x1e;
 for (i = 0; i < 3; i = i + 1) {
 iVar1 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_sum,data + i);
 if (iVar1 != 0) {
 return -1;
 }
 }
 total = 0;
 i_1 = 0;
 while( true ) {
 if (2 < i_1) {
 return total;
 }
 iVar1 = pthread_join(tids[i_1],(void **)0x0);
 if (iVar1 != 0) break;
 total = data[i_1].result + total;
 i_1 = i_1 + 1;
 }
 return -2;
}



/* Function: call_pthread_join @ 00103840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: thread_increment @ 00103850 */

void * thread_increment(void *arg)

{
 int iVar1;
 int i;
 int iterations;
 void *arg_local;
 
 iVar1 = *(int *)arg;
 for (i = 0; i < iVar1; i = i + 1) {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 }
 return (void *)0x0;
}



/* Function: param_mutex_lock @ 001038c0 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 int iVar1;
 void *__ptr;
 int expected;
 int i_1;
 int i;
 pthread_t *tids;
 int iterations_per_thread_local;
 int thread_count_local;
 int local_c;
 
 iterations_per_thread_local = iterations_per_thread;
 thread_count_local = thread_count;
 __ptr = malloc((long)thread_count << 3);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 shared_counter = 0;
 for (i = 0; i < thread_count_local; i = i + 1) {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + (long)i * 8),(pthread_attr_t *)0x0,
 thread_increment,&iterations_per_thread_local);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 }
 for (i_1 = 0; i_1 < thread_count_local; i_1 = i_1 + 1) {
 pthread_join(*(pthread_t *)((long)__ptr + (long)i_1 * 8),(void **)0x0);
 }
 free(__ptr);
 local_c = -3;
 if (shared_counter == thread_count_local * iterations_per_thread_local) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_mutex_lock @ 001039e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00103a00 */

void * consumer_thread(void *arg)

{
 int iVar1;
 int *piVar2;
 int *ret;
 int received;
 void *arg_local;
 
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 while (iVar1 = data, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 piVar2 = malloc(4);
 *piVar2 = iVar1;
 return piVar2;
}



/* Function: producer_thread @ 00103a80 */

void * producer_thread(void *arg)

{
 void *arg_local;
 
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: param_condition_variable @ 00103ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int result;
 void *consumer_ret;
 pthread_t consumer;
 pthread_t producer;
 int local_c;
 
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
 local_c = iVar1;
 }
 else {
 pthread_cancel(consumer);
 local_c = -2;
 }
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_condition_variable @ 00103ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 00103bb0 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int desired;
 int expected;
 int i;
 int iterations;
 void *arg_local;
 
 for (i = 0; i < *(int *)arg; i = i + 1) {
 pthread_mutex_lock(&counter_mutex);
 iVar1 = atomic_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 atomic_counter = i + 1000;
 pthread_mutex_lock(&counter_mutex);
 if (i != iVar1) {
 atomic_counter = iVar1;
 }
 pthread_mutex_unlock(&counter_mutex);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00103c50 */

void * thread_atomic_load_store(void *arg)

{
 int value;
 void *arg_local;
 
 pthread_mutex_lock(&counter_mutex);
 atomic_counter = atomic_counter + 100;
 pthread_mutex_unlock(&counter_mutex);
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00103c80 */

int param_atomic_ops(int thread_count,int iterations)

{
 int aVar1;
 int iVar2;
 int final_value;
 int i_1;
 pthread_t load_store_tid;
 int i;
 undefined4 local_24;
 pthread_t *tids;
 int iterations_local;
 int thread_count_local;
 int local_c;
 
 iterations_local = iterations;
 thread_count_local = thread_count;
 tids = malloc((long)thread_count << 3);
 if (tids == (pthread_t *)0x0) {
 local_c = -1;
 }
 else {
 local_24 = 0;
 pthread_mutex_lock(&counter_mutex);
 atomic_counter = 0;
 pthread_mutex_unlock(&counter_mutex);
 for (i = 0; i < thread_count_local; i = i + 1) {
 iVar2 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_atomic_increment,
 &iterations_local);
 if (iVar2 != 0) {
 free(tids);
 return -2;
 }
 }
 iVar2 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 if (iVar2 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 for (i_1 = 0; aVar1 = atomic_counter, i_1 < thread_count_local; i_1 = i_1 + 1) {
 pthread_join(tids[i_1],(void **)0x0);
 }
 free(tids);
 local_c = -3;
 if (0 < aVar1) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_atomic_ops @ 00103dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 00103df0 */

void * thread_tls_test(void *arg)

{
 long lVar1;
 undefined4 *puVar2;
 long *in_FS_OFFSET;
 int *ret;
 int initial;
 char *name;
 void *arg_local;
 
 lVar1 = in_FS_OFFSET[-6];
 *(int *)(in_FS_OFFSET + -6) = (int)in_FS_OFFSET[-6] + 0x32;
 strncpy((char *)(*in_FS_OFFSET + -0x20),arg,0x1f);
 puVar2 = malloc(8);
 *puVar2 = (int)lVar1;
 puVar2[1] = (int)in_FS_OFFSET[-6];
 return puVar2;
}



/* Function: param_thread_local_storage @ 00103e70 */

int param_thread_local_storage(int thread_count)

{
 int iVar1;
 char *pcVar2;
 int expected_final;
 int expected_initial;
 int *values;
 void *ret;
 int i_2;
 int total_final;
 int total_initial;
 int j;
 int i_1;
 int i;
 char **names;
 pthread_t *tids;
 int thread_count_local;
 int local_c;
 
 thread_count_local = thread_count;
 tids = malloc((long)thread_count << 3);
 names = malloc((long)thread_count_local << 3);
 if ((tids == (pthread_t *)0x0) || (names == (char **)0x0)) {
 local_c = -1;
 }
 else {
 for (i = 0; i < thread_count_local; i = i + 1) {
 pcVar2 = malloc(0x10);
 names[i] = pcVar2;
 snprintf(names[i],0x10,"Thread-%d",(ulong)(uint)i);
 }
 for (i_1 = 0; i_1 < thread_count_local; i_1 = i_1 + 1) {
 iVar1 = pthread_create(tids + i_1,(pthread_attr_t *)0x0,thread_tls_test,names[i_1]);
 if (iVar1 != 0) {
 for (j = 0; j <= i_1; j = j + 1) {
 free(names[j]);
 }
 free(names);
 free(tids);
 return -2;
 }
 }
 total_initial = 0;
 total_final = 0;
 for (i_2 = 0; i_2 < thread_count_local; i_2 = i_2 + 1) {
 pthread_join(tids[i_2],&ret);
 total_initial = *(int *)ret + total_initial;
 total_final = *(int *)((long)ret + 4) + total_final;
 free(ret);
 free(names[i_2]);
 }
 free(names);
 free(tids);
 local_c = -3;
 if (total_initial == thread_count_local * 100 && total_final == thread_count_local * 0x96) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_thread_local_storage @ 001040b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 001040c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 uint uVar1;
 
 printf(&DAT_00105336);
 uVar1 = call_pthread_create();
 printf(&DAT_00105355,(ulong)uVar1);
 uVar1 = call_pthread_join();
 printf(&DAT_00105371,(ulong)uVar1);
 uVar1 = call_mutex_lock();
 printf(&DAT_0010538e,(ulong)uVar1);
 uVar1 = call_condition_variable();
 printf(&DAT_001053aa,(ulong)uVar1);
 uVar1 = call_atomic_ops();
 printf(&DAT_001053c6,(ulong)uVar1);
 uVar1 = call_thread_local_storage();
 printf(&DAT_001053e2,(ulong)uVar1);
 return;
}



/* Function: main @ 00104160 */

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
