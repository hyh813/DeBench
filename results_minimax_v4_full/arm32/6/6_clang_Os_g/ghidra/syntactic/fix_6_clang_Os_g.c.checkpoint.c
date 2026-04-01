/* Auto-injected type definitions by preprocessor */
typedef unsigned char byte;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned long uintptr_t;
/* Remove duplicate intptr_t definition - already in stdint.h */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <pthread.h>
#include <fcntl.h>
#include <errno.h>

/* Data constants from binary */
static const char DAT_00012850[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const char DAT_0001285c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const char DAT_0001287d[] = "test";
static const char DAT_00012bb6[] = "Testing Standard Library Functions:";
static const char DAT_000128cb[] = "strlen: %zu\n";
static const char DAT_000128e6[] = "strcmp: %d\n";
static const char DAT_00012901[] = "memcpy: %d\n";
static const char DAT_0001291d[] = "memcmp: %d\n";
static const char DAT_00012939[] = "printf: %d\n";
static const char DAT_00012955[] = "printf ret: %d\n";
static const char DAT_00012971[] = "sscanf: %d\n";
static const char DAT_0001298e[] = "fopen: %d\n";
static const char DAT_000129aa[] = "fread/fwrite: %d\n";
static const char DAT_000129c6[] = "malloc/free: %d\n";
static const char DAT_000129e2[] = "memset: %d\n";
static const char DAT_000129fd[] = "strchr/strstr: %d\n";
static const char DAT_00012a3f[] = "syscall: %d\n";
static const char DAT_00012a5b[] = "stat: %d\n";
static const char DAT_00012a77[] = "fork/exec: %d\n";
static const char DAT_00012a93[] = "pipe: %d\n";
static const char DAT_00012aaf[] = "socket: %d\n";
static const char DAT_00012acb[] = "shm: %d\n";
static const char DAT_00012ae7[] = "signal: %d\n";
static const char DAT_00012b0d[] = "pthread_create: %d\n";
static const char DAT_00012b29[] = "pthread_join: %d\n";
static const char DAT_00012b46[] = "mutex_lock: %d\n";
static const char DAT_00012b62[] = "cond_var: %d\n";
static const char DAT_00012b7e[] = "atomic_ops: %d\n";
static const char DAT_00012b9a[] = "thread_local: %d\n";
static const char DAT_00012bda[] = "Testing System Calls:";
static const char DAT_00012bf5[] = "Testing Thread Concurrency:";

/* Global variables for signal handling */
int signal_received;
int signal_number;

/* Global variables for thread synchronization */
int shared_counter;
int counter_mutex;
int cond_mutex;
int cond;
char data;
char ready;

/* Global atomic counter */
int atomic_counter;

/* Function prototypes */
void signal_handler(int sig);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/6/6_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 000110d8 */

int param_strcpy(char *dst,char *src)

{
 char *__s;
 size_t sVar1;
 
 __s = strcpy(dst,src);
 sVar1 = strlen(__s);
 return sVar1;
}



/* Function: call_strcpy @ 000110e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 size_t sVar1;
 char local_28 [4];
 char acStack_24 [4];
 char local_20;
 
 /* Unresolved local var: char[32] buffer@[???]
 Unresolved local var: int len@[???] */
 local_28[0] = 'H';
 local_28[1] = 'e';
 local_28[2] = 'l';
 local_28[3] = 'l';
 acStack_24[0] = 'o';
 acStack_24[1] = 'L';
 acStack_24[2] = 'i';
 acStack_24[3] = 'b';
 local_20 = '\0';
 sVar1 = strlen(local_28);
 return sVar1;
}



/* Function: param_strcmp @ 00011124 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = strcmp(s1,s2);
 iVar2 = 0;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: call_strcmp @ 0001114c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 00011154 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 sVar1 = strlen(str);
 return sVar1;
 /* Unresolved local var: size_t len@[???] */
}



/* Function: call_strlen @ 00011158 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 00011160 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return n;
}



/* Function: call_memcpy @ 00011178 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 00011180 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = memcmp(p1,p2,n);
 iVar2 = 0;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: call_memcmp @ 000111a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int[3] arr1@[???]
 Unresolved local var: int[3] arr2@[???]
 Unresolved local var: int[3] arr3@[???] */
 /* Unresolved local var: int ret@[???] */
 iVar1 = memcmp(&DAT_0001285c,&DAT_00012850,0xc);
 iVar3 = 0;
 /* Unresolved local var: int ret@[???] */
 if (iVar1 != 0) {
 iVar3 = -1;
 }
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar2 = memcmp(&DAT_0001285c,&DAT_0001285c,0xc);
 iVar1 = 0;
 if (iVar2 != 0) {
 iVar1 = -1;
 }
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1 + iVar3;
}



/* Function: param_printf @ 00011218 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00011230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_0001287d);
 return iVar1;
}



/* Function: param_scanf @ 00011250 */

int param_scanf(char *input_str)

{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}



/* Function: call_scanf @ 00011294 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 000112e4 */

int param_fopen_fclose(char *filename)

{
 FILE *__stream;
 int iVar1;
 
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen(filename,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
}



/* Function: call_fopen_fclose @ 00011328 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int fd@[???] */
 uVar1 = param_fopen_fclose("/etc/passwd");
 iVar2 = -1;
 if (uVar1 < 0x80000000) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_fread_fwrite @ 00011354 */

int param_fread_fwrite(char *tmpfile)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 int iVar3;
 char auStack_38 [32];
 
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
 sVar1 = fread(auStack_38,1,0x12,__s);
 auStack_38[sVar1] = 0;
 fclose(__s);
 unlink(tmpfile);
 iVar2 = -3;
 if (sVar1 == 0x12) {
 iVar3 = bcmp(auStack_38,"BinBench Test Data",0x13);
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



/* Function: call_fread_fwrite @ 00011434 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00011444 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 size_t sVar3;
 int unaff_r5;
 
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
 iVar1 = iVar1 + 10;
 sVar3 = sVar3 - 1;
 piVar2 = piVar2 + 1;
 } while (sVar3 != 0);
 unaff_r5 = *__ptr;
 }
 iVar1 = __ptr[size - 1];
 free(__ptr);
 iVar1 = iVar1 + unaff_r5;
 }
 return iVar1;
}



/* Function: call_malloc_free @ 000114a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 
 iVar1 = param_malloc_free(10);
 return iVar1;
}



/* Function: param_memset @ 000114b0 */

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: uchar * bytes@[???] */
 iVar1 = 0;
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 iVar1 = 0;
 do {
 size = size - 1;
 iVar1 = iVar1 + (uint)*(byte *)buffer;
 buffer = (byte *)((int)buffer + 1);
 } while (size != 0);
 }
 return iVar1;
}



/* Function: call_memset @ 000114f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 /* Unresolved local var: int[10] buffer@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 000114fc */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 char *pcVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: char * pos1@[???]
 Unresolved local var: int index1@[???]
 Unresolved local var: char * pos2@[???]
 Unresolved local var: int index2@[???] */
 pcVar1 = strchr(str,(int)ch);
 iVar3 = (int)pcVar1 - (int)str;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(str,substr);
 iVar2 = (int)pcVar1 - (int)str;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar3;
}



/* Function: call_strchr_strstr @ 0001153c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00011544 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 size_t sVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 int uVar5;
 union {
   int as_int;
   char as_bytes[4];
 } local_2c;
 char acStack_28 [4];
 char local_24;
 int local_c;
 
 puts(&DAT_00012bb6);
 /* Unresolved local var: char[32] buffer@[???] */
 local_2c.as_bytes[0] = 'H';
 local_2c.as_bytes[1] = 'e';
 local_2c.as_bytes[2] = 'l';
 local_2c.as_bytes[3] = 'l';
 acStack_28[0] = 'o';
 acStack_28[1] = 'L';
 acStack_28[2] = 'i';
 acStack_28[3] = 'b';
 local_24 = '\0';
 sVar1 = strlen((char *)&local_2c);
 printf(&DAT_000128cb,sVar1);
 printf(&DAT_000128e6,0);
 printf(&DAT_00012901,0xc);
 printf(&DAT_0001291d,0x5a);
 iVar2 = call_memcmp();
 printf(&DAT_00012939,iVar2);
 iVar2 = printf("Value: %d, Name: %s\n",0x2a,&DAT_0001287d);
 printf(&DAT_00012955,iVar2);
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_2c.as_int,&local_c);
 iVar4 = -1;
 uVar5 = 0xffffffff;
 if (iVar2 == 2) {
 iVar4 = local_c + local_2c.as_int;
 }
 printf(&DAT_00012971,iVar4);
 /* Unresolved local var: int fd@[???] */
 uVar3 = param_fopen_fclose("/etc/passwd");
 if (uVar3 < 0x80000000) {
 uVar5 = 0x2a;
 }
 printf(&DAT_0001298e,uVar5);
 iVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_000129aa,iVar2);
 iVar2 = param_malloc_free(10);
 printf(&DAT_000129c6,iVar2);
 printf(&DAT_000129e2,0);
 printf(&DAT_000129fd,0xf);
 return;
}



/* Function: param_linux_syscall @ 0001170c */

int param_linux_syscall(char *pathname)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int fd@[???] */
 iVar1 = syscall(5,pathname,0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 00011754 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 uVar1 = param_linux_syscall("/etc/passwd");
 iVar2 = -1;
 if (uVar1 < 0x80000000) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_win32_api @ 00011780 */

int param_win32_api(char *filename)

{
 uint uVar1;
 int iVar2;
 struct stat sStack_60;
 
 /* Unresolved local var: stat st@[???] */
 uVar1 = stat(filename,&sStack_60);
 iVar2 = -2;
 if (0 < sStack_60.st_size) {
 iVar2 = 0x2a;
 }
 if (0x7fffffff < uVar1) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: call_win32_api @ 000117b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 uint uVar1;
 int iVar2;
 struct stat sStack_60;
 
 /* Unresolved local var: stat st@[???] */
 uVar1 = stat("/etc/passwd",&sStack_60);
 iVar2 = -2;
 if (0 < sStack_60.st_size) {
 iVar2 = 0x2a;
 }
 if (0x7fffffff < uVar1) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_fork_exec @ 000117fc */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_14;
 
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



/* Function: call_fork_exec @ 0001187c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_pipe_communication @ 000118ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 char auStack_38 [32];
 int local_18;
 int local_14;
 
 /* Unresolved local var: int[2] pipefd@[???]
 Unresolved local var: char[32] buffer@[???]
 Unresolved local var: pid_t pid@[???] */
 iVar1 = pipe(&local_18);
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
 close(local_18);
 write(local_14,"HelloPipe",9);
 close(local_14);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 /* Unresolved local var: ssize_t bytes@[???] */
 close(local_14);
 sVar3 = read(local_18,auStack_38,0x1f);
 auStack_38[sVar3] = 0;
 close(local_18);
 wait((void *)0x0);
 iVar1 = -3;
 if (0 < sVar3) {
 iVar1 = 0x2a;
 }
 }
 }
 return iVar1;
}



/* Function: call_pipe_communication @ 00011964 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 char auStack_38 [32];
 int iStack_18;
 int iStack_14;
 
 iVar1 = pipe(&iStack_18);
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
 close(iStack_18);
 write(iStack_14,"HelloPipe",9);
 close(iStack_14);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(iStack_14);
 sVar3 = read(iStack_18,auStack_38,0x1f);
 auStack_38[sVar3] = 0;
 close(iStack_18);
 wait((void *)0x0);
 iVar1 = -3;
 if (0 < sVar3) {
 iVar1 = 0x2a;
 }
 }
 }
 return iVar1;
}



/* Function: param_socket_create @ 00011968 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 struct sockaddr local_24;
 int local_14;
 
 /* Unresolved local var: sockaddr_in addr@[???]
 Unresolved local var: int sock@[???]
 Unresolved local var: int opt@[???] */
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 local_14 = 1;
 iVar2 = setsockopt(iVar1,1,2,&local_14,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
 local_24.sa_family = 2;
 local_24.sa_data[0] = '\0';
 local_24.sa_data[1] = '\0';
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
 iVar2 = bind(iVar1,&local_24,0x10);
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



/* Function: call_socket_create @ 00011a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 int iVar2;
 struct sockaddr sStack_24;
 int local_14;
 
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 local_14 = 1;
 iVar2 = setsockopt(iVar1,1,2,&local_14,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
 sStack_24.sa_family = 2;
 sStack_24.sa_data[0] = '\0';
 sStack_24.sa_data[1] = '\0';
 sStack_24.sa_data[10] = '\0';
 sStack_24.sa_data[0xb] = '\0';
 sStack_24.sa_data[0xc] = '\0';
 sStack_24.sa_data[0xd] = '\0';
 sStack_24.sa_data[6] = '\0';
 sStack_24.sa_data[7] = '\0';
 sStack_24.sa_data[8] = '\0';
 sStack_24.sa_data[9] = '\0';
 sStack_24.sa_data[2] = '\0';
 sStack_24.sa_data[3] = '\0';
 sStack_24.sa_data[4] = '\0';
 sStack_24.sa_data[5] = '\0';
 iVar2 = bind(iVar1,&sStack_24,0x10);
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



/* Function: param_shmget_shmat @ 00011a44 */

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
 memcpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}



/* Function: call_shmget_shmat @ 00011b1c */

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



/* Function: param_signal_handling @ 00011b3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 bool bVar3;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 iVar2 = -1;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
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
 bVar3 = iVar2 != 0;
 iVar2 = iVar2 + -1;
 } while (bVar3 && iVar2 != 0);
 }
 if (signal_received == 0) {
 iVar2 = -3;
 }
 else {
 iVar2 = -4;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar2 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar3 = iVar2 != 0;
 iVar2 = iVar2 + -1;
 } while (bVar3 && iVar2 != 0);
 }
 iVar2 = -5;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar2 = 0x2a;
 }
 }
 }
 }
 }
 return iVar2;
}



/* Function: signal_handler @ 00011cb0 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00011cd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 bool bVar3;
 
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 iVar2 = -1;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
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
 bVar3 = iVar2 != 0;
 iVar2 = iVar2 + -1;
 } while (bVar3 && iVar2 != 0);
 }
 if (signal_received == 0) {
 iVar2 = -3;
 }
 else {
 iVar2 = -4;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar2 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar3 = iVar2 != 0;
 iVar2 = iVar2 + -1;
 } while (bVar3 && iVar2 != 0);
 }
 iVar2 = -5;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar2 = 0x2a;
 }
 }
 }
 }
 }
 return iVar2;
}



/* Function: test_system_calls @ 00011cdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 struct stat sStack_68;
 
 puts(&DAT_00012bda);
 /* Unresolved local var: int result@[???] */
 uVar1 = param_linux_syscall("/etc/passwd");
 uVar3 = 0xffffffff;
 uVar4 = 0xffffffff;
 if (uVar1 < 0x80000000) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00012a3f,uVar3);
 /* Unresolved local var: stat st@[???] */
 uVar1 = stat("/etc/passwd",&sStack_68);
 uVar3 = 0xfffffffe;
 if (0 < sStack_68.st_size) {
 uVar3 = 0x2a;
 }
 if (0x7fffffff < uVar1) {
 uVar3 = 0xffffffff;
 }
 printf(&DAT_00012a5b,uVar3);
 /* Unresolved local var: int ret@[???] */
 iVar2 = param_fork_exec("/bin/true",(char *)0x0);
 uVar3 = 0xffffffff;
 if (iVar2 == 0) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00012a77,uVar3);
 iVar2 = param_pipe_communication();
 printf(&DAT_00012a93,iVar2);
 iVar2 = param_socket_create();
 printf(&DAT_00012aaf,iVar2);
 /* Unresolved local var: int ret@[???] */
 iVar2 = param_shmget_shmat();
 if (0 < iVar2) {
 uVar4 = 0x2a;
 }
 printf(&DAT_00012acb,uVar4);
 iVar2 = param_signal_handling();
 printf(&DAT_00012ae7,iVar2);
 return;
}



/* Function: thread_compute @ 00011dfc */

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



/* Function: param_pthread_create @ 00011e1c */

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



/* Function: call_pthread_create @ 00011e78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 
 iVar1 = param_pthread_create(7);
 return iVar1;
}



/* Function: thread_sum @ 00011e80 */

void * thread_sum(void *arg)

{
 int64_t lVar1;
 uint uVar2;
 int iVar3;
 
 /* Unresolved local var: ThreadData * data@[???] */
 *(uint *)((int)arg + 8) = 0;
 /* Unresolved local var: int i@[???] */
 uVar2 = *(uint *)arg;
 iVar3 = *(int *)((int)arg + 4);
 if ((int)uVar2 <= iVar3) {
 lVar1 = (unsigned long long)(iVar3 - uVar2) * (unsigned long long)(iVar3 + ~uVar2);
 *(uint *)((int)arg + 8) =
 (iVar3 - uVar2) * (uVar2 + 1) + uVar2 +
 ((uint)((byte)((unsigned long long)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 00011ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int *__arg;
 int iVar3;
 int local_48;
 int local_44;
 int local_40 [4];
 int local_30;
 int local_2c;
 pthread_t local_24 [3];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 __arg = &local_48;
 iVar3 = 0;
 memset(local_40,0,0x1c);
 local_2c = 0x1e;
 local_30 = 0x15;
 local_40[2] = 0x14;
 local_40[1] = 0xb;
 local_44 = 10;
 local_48 = 1;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((int)local_24 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = (uint32_t *)((int)__arg + 0xc);
 } while (iVar3 != 0xc);
 iVar1 = 0;
 iVar3 = 0;
 /* Unresolved local var: int i@[???] */
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar1),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar2 = iVar1 * -3;
 iVar1 = iVar1 + -4;
 iVar3 = *(int *)((int)local_40 + iVar2) + iVar3;
 } while (iVar1 != -0xc);
 return iVar3;
}



/* Function: call_pthread_join @ 00011fb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int *__arg;
 int iVar3;
 int uStack_48;
 int uStack_44;
 int aiStack_40 [4];
 int uStack_30;
 int uStack_2c;
 pthread_t apStack_24 [3];
 
 __arg = &uStack_48;
 iVar3 = 0;
 memset(aiStack_40,0,0x1c);
 uStack_2c = 0x1e;
 uStack_30 = 0x15;
 aiStack_40[2] = 0x14;
 aiStack_40[1] = 0xb;
 uStack_44 = 10;
 uStack_48 = 1;
 do {
 iVar1 = pthread_create((pthread_t *)((int)apStack_24 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = (int *)((int)__arg + 0xc);
 } while (iVar3 != 0xc);
 iVar1 = 0;
 iVar3 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)apStack_24 - iVar1),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar2 = iVar1 * -3;
 iVar1 = iVar1 + -4;
 iVar3 = *(int *)((int)aiStack_40 + iVar2) + iVar3;
 } while (iVar1 != -0xc);
 return iVar3;
}



/* Function: thread_increment @ 00011fbc */

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



/* Function: param_mutex_lock @ 00012024 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 pthread_t *__ptr;
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 int local_24;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_24 = iterations_per_thread;
 __ptr = malloc(thread_count << 2);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 shared_counter = 0;
 if (0 < thread_count) {
 iVar2 = thread_count;
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 ppVar3 = ppVar3 + 1;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 /* Unresolved local var: int i@[???] */
 ppVar3 = __ptr;
 iVar2 = thread_count;
 if (0 < thread_count) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 iVar2 = iVar2 + -1;
 ppVar3 = ppVar3 + 1;
 } while (iVar2 != 0);
 }
 }
 free(__ptr);
 iVar2 = -3;
 if (shared_counter == local_24 * thread_count) {
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: call_mutex_lock @ 00012114 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00012120 */

void * consumer_thread(void *arg)

{
 char cVar1;
 uint32_t *puVar2;
 uint32_t uVar3;
 
 /* Unresolved local var: int received@[???]
 Unresolved local var: int * ret@[???] */
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 } while (ready != '\x01');
 }
 cVar1 = data;
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 uVar3 = 0;
 if (cVar1 != '\0') {
 uVar3 = 0x2a;
 }
 puVar2 = malloc(4);
 *puVar2 = uVar3;
 return puVar2;
}



/* Function: producer_thread @ 000121b8 */

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



/* Function: param_condition_variable @ 00012220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int iVar2;
 int *local_14;
 pthread_t local_10;
 pthread_t local_c;
 
 /* Unresolved local var: pthread_t consumer@[???]
 Unresolved local var: pthread_t producer@[???]
 Unresolved local var: void * consumer_ret@[???]
 Unresolved local var: int result@[???] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,&local_14);
 pthread_join(local_c,(void **)0x0);
 iVar2 = *local_14;
 free(local_14);
 }
 else {
 pthread_cancel(local_10);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: call_condition_variable @ 000122dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 int iVar2;
 int *piStack_14;
 pthread_t pStack_10;
 pthread_t pStack_c;
 
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&pStack_10,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&pStack_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(pStack_10,&piStack_14);
 pthread_join(pStack_c,(void **)0x0);
 iVar2 = *piStack_14;
 free(piStack_14);
 }
 else {
 pthread_cancel(pStack_10);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: thread_atomic_increment @ 000122e0 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 int local_1c;
 
 /* Unresolved local var: int iterations@[???] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 /* Unresolved local var: int expected@[???]
 Unresolved local var: int desired@[???] */
 __atomic_fetch_add_4(&atomic_counter,1,5);
 local_1c = iVar2;
 __atomic_compare_exchange_4(&atomic_counter,&local_1c,iVar2 + 1000,5,5);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00012354 */

void * thread_atomic_load_store(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: int value@[???] */
 iVar1 = __atomic_load_4(&atomic_counter,5);
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 0001238c */

int param_atomic_ops(int thread_count,int iterations)

{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *ppVar2;
 int iVar3;
 pthread_t local_28;
 int local_24;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: pthread_t load_store_tid@[???]
 Unresolved local var: int final_value@[???] */
 local_24 = iterations;
 __ptr = malloc(thread_count << 2);
 if (__ptr == (pthread_t *)0x0) {
 iVar3 = -1;
 }
 else {
 __atomic_store_4(&atomic_counter,0,5);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 ppVar2 = __ptr;
 iVar3 = thread_count;
 do {
 iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_atomic_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 ppVar2 = ppVar2 + 1;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 iVar3 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 ppVar2 = __ptr;
 if (0 < thread_count) {
 do {
 pthread_join(*ppVar2,(void **)0x0);
 thread_count = thread_count + -1;
 ppVar2 = ppVar2 + 1;
 } while (thread_count != 0);
 }
 iVar1 = __atomic_load_4(&atomic_counter,5);
 free(__ptr);
 iVar3 = -3;
 if (0 < iVar1) {
 iVar3 = 0x2a;
 }
 }
 return iVar3;
}



/* Function: call_atomic_ops @ 000124b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 000124bc */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int *piVar2;
 int extraout_r2;
 int iVar3;
 int iVar4;
 void *thread_ptr;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 thread_ptr = __aeabi_read_tp(arg,arg,8);
 iVar1 = (int)thread_ptr;
 iVar3 = *(int *)(iVar1 + extraout_r2);
 iVar4 = iVar3 + 0x32;
 *(int *)(iVar1 + extraout_r2) = iVar4;
 strncpy((char *)(iVar1 + 0xc),(char *)((unsigned long long)thread_ptr >> 0x20),0x1f);
 piVar2 = malloc(8);
 *piVar2 = iVar3;
 piVar2[1] = iVar4;
 return piVar2;
}



/* Function: param_thread_local_storage @ 00012504 */

int param_thread_local_storage(int thread_count)

{
 pthread_t *__ptr;
 uint32_t *__ptr_00;
 char *__s;
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 uint32_t *puVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int *local_28;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int expected_final@[???]
 Unresolved local var: int expected_initial@[???] */
 __ptr = malloc(thread_count << 2);
 __ptr_00 = malloc(thread_count << 2);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (uint32_t *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar2 = 0;
 do {
 __s = malloc(0x10);
 __ptr_00[iVar2] = __s;
 snprintf(__s,0x10,"Thread-%d",iVar2);
 iVar2 = iVar2 + 1;
 } while (thread_count != iVar2);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar2 = 0;
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_tls_test,(void *)__ptr_00[iVar2])
 ;
 if (iVar1 != 0) {
 /* Unresolved local var: int j@[???] */
 iVar1 = 0;
 do {
 free((void *)__ptr_00[iVar1]);
 iVar1 = iVar1 + 1;
 } while (iVar2 + 1 != iVar1);
 free(__ptr_00);
 free(__ptr);
 return -2;
 }
 iVar2 = iVar2 + 1;
 ppVar3 = ppVar3 + 1;
 } while (thread_count != iVar2);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar1 = 0;
 iVar2 = 0;
 ppVar3 = __ptr;
 puVar4 = __ptr_00;
 iVar7 = thread_count;
 do {
 /* Unresolved local var: void * ret@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(*ppVar3,&local_28);
 iVar5 = *local_28;
 iVar6 = local_28[1];
 free(local_28);
 free((void *)*puVar4);
 iVar1 = iVar6 + iVar1;
 iVar2 = iVar5 + iVar2;
 iVar7 = iVar7 + -1;
 ppVar3 = ppVar3 + 1;
 puVar4 = puVar4 + 1;
 } while (iVar7 != 0);
 goto LAB_00012620;
 }
 }
 }
 iVar2 = 0;
 iVar1 = 0;
LAB_00012620:
 free(__ptr_00);
 free(__ptr);
 iVar7 = -3;
 if (iVar2 == thread_count * 100 && iVar1 == thread_count * 0x96) {
 iVar7 = 0x2a;
 }
 return iVar7;
}



/* Function: call_thread_local_storage @ 000126a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 000126a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 
 puts(&DAT_00012bf5);
 iVar1 = param_pthread_create(7);
 printf(&DAT_00012b0d,iVar1);
 iVar1 = param_pthread_join();
 printf(&DAT_00012b29,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 printf(&DAT_00012b46,iVar1);
 iVar1 = param_condition_variable();
 printf(&DAT_00012b62,iVar1);
 iVar1 = param_atomic_ops(4,500);
 printf(&DAT_00012b7e,iVar1);
 iVar1 = param_thread_local_storage(4);
 printf(&DAT_00012b9a,iVar1);
 return;
}



/* Function: main @ 00012768 */

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
