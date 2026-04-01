/* Auto-injected type definitions by preprocessor */
/* Using stdint.h for standard integer types */
#include <stdint.h>

/* Ghidra undefined types */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned short ushort;
/* Additional types needed */
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned long ulong_t;

/* Function pointer type for callback */
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Missing standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <time.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include <sys/syscall.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>

/* GCC attribute for regparm */
#define __regparm1 __attribute__((regparm(1)))

/* Define missing data symbols from binary - declared as char arrays for string usage */
extern char DAT_00013026[];
extern char DAT_00013074[];
extern char DAT_0001308f[];
extern char DAT_000130aa[];
extern char DAT_000130c6[];
extern char DAT_000130e2[];
extern char DAT_000130fe[];
extern char DAT_0001311a[];
extern char DAT_00013137[];
extern char DAT_00013153[];
extern char DAT_0001316f[];
extern char DAT_0001318b[];
extern char DAT_000131a6[];
extern char DAT_000131f5[];
extern char DAT_00013211[];
extern char DAT_0001322d[];
extern char DAT_00013249[];
extern char DAT_00013265[];
extern char DAT_00013281[];
extern char DAT_0001329d[];
extern char DAT_000132c3[];
extern char DAT_000132df[];
extern char DAT_000132fc[];
extern char DAT_00013318[];
extern char DAT_00013334[];
extern char DAT_00013350[];
extern char DAT_0001336c[];
extern char DAT_00013390[];
extern char DAT_000133ab[];
extern char DAT_000133cc[];
extern char DAT_000133d8[];

/* Data symbol definitions */
char DAT_00013026[] = "TestName";
char DAT_00013074[] = "String length: %zu\n";
char DAT_0001308f[] = "strcmp result: %d\n";
char DAT_000130aa[] = "strchr result: %d\n";
char DAT_000130c6[] = "memcmp result: 0x%x\n";
char DAT_000130e2[] = "memcmp: %d\n";
char DAT_000130fe[] = "printf result: %d\n";
char DAT_0001311a[] = "scanf result: %d\n";
char DAT_00013137[] = "fopen result: %d\n";
char DAT_00013153[] = "fread/fwrite: %d\n";
char DAT_0001316f[] = "malloc result: %d\n";
char DAT_0001318b[] = "memset sum: %d\n";
char DAT_000131a6[] = "strstr result: %d\n";
char DAT_000131f5[] = "syscall result: %d\n";
char DAT_00013211[] = "stat result: %d\n";
char DAT_0001322d[] = "fork_exec result: %d\n";
char DAT_00013249[] = "pipe result: %d\n";
char DAT_00013265[] = "socket result: %d\n";
char DAT_00013281[] = "shm result: %d\n";
char DAT_0001329d[] = "signal result: %d\n";
char DAT_000132c3[] = "pthread_create: %d\n";
char DAT_000132df[] = "pthread_join sum: %d\n";
char DAT_000132fc[] = "mutex lock: %d\n";
char DAT_00013318[] = "cond var: %d\n";
char DAT_00013334[] = "atomic ops: %d\n";
char DAT_00013350[] = "thread local: %d\n";
char DAT_0001336c[] = "Testing standard library functions\n";
char DAT_00013390[] = "Testing system calls\n";
char DAT_000133ab[] = "Testing thread concurrency\n";
char DAT_000133cc[] = "TestDa";
char DAT_000133d8[] = "TestDa";

/* Global variables needed by the code */
int signal_received;
int signal_number;
int shared_counter;
int atomic_counter;
char ready;
char data;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Helper macros for atomic operations */
#define LOCK() pthread_mutex_lock(&counter_mutex)
#define UNLOCK() pthread_mutex_unlock(&counter_mutex)

/* Define bcmp as memcmp for compatibility - MUST be before any usage */
#define bcmp memcmp

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



/* Function: param_strcpy @ 00011564 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return sVar1;
}



/* Function: call_strcpy @ 00011597 */

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



/* Function: param_strcmp @ 000115c9 */

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



/* Function: call_strcmp @ 00011604 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 00011607 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return sVar1;
}



/* Function: call_strlen @ 00011628 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 0001162e */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return n;
}



/* Function: call_memcpy @ 0001165d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 00011663 */

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



/* Function: call_memcmp @ 000116a2 */

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
 iVar1 = memcmp(&DAT_000133d8,&DAT_000133cc,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(&DAT_000133d8,&DAT_000133d8,0xc);
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



/* Function: param_printf @ 0001170d */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00011739 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00013026);
 return iVar1;
}



/* Function: param_scanf @ 00011766 */

int param_scanf(char *input_str)

{
 int iVar1;
 int iVar2;
 int local_14;
 int local_10;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&local_10,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_10;
 }
 return iVar2;
}



/* Function: call_scanf @ 000117ab */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 int local_10;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_10,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_10;
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 000117f3 */

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



/* Function: call_fopen_fclose @ 00011841 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 
 /* Unresolved local var: int fd@[???] */
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 0001186a */

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
 iVar3 = memcmp(local_30, "BinBench Test Data", 0x12);
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



/* Function: call_fread_fwrite @ 0001193c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 0001195f */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int iVar1;
 size_t sVar2;
 int unaff_ESI;
 
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
 unaff_ESI = *__ptr;
 }
 iVar1 = unaff_ESI + __ptr[size - 1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 000119b9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 
 iVar1 = param_malloc_free(10);
 return iVar1;
}



/* Function: param_memset @ 000119da */

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 size_t sVar2;
 
 /* Unresolved local var: uchar * bytes@[???]
 Unresolved local var: int sum@[???] */
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size == 0) {
 iVar1 = 0;
 }
 else {
 sVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + (uint)*(byte *)((int)buffer + sVar2);
 sVar2 = sVar2 + 1;
 } while (size != sVar2);
 }
 return iVar1;
}



/* Function: call_memset @ 00011a1b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 /* Unresolved local var: int[10] buffer@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 00011a1e */

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



/* Function: call_strchr_strstr @ 00011a78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00011a7e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 size_t sVar1;
 int iVar2;
 int iVar3;
 int local_34;
 int local_30 [2];
 undefined1 local_28;
 
 puts(&DAT_0001336c);
 /* Unresolved local var: char[32] buffer@[???] */
 local_28 = 0;
 local_30[1] = 0x62694c6f;
 local_30[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_30);
 printf(&DAT_00013074,sVar1);
 printf(&DAT_0001308f,0);
 printf(&DAT_000130aa,0xc);
 printf(&DAT_000130c6,0x5a);
 iVar2 = call_memcmp();
 printf(&DAT_000130e2,iVar2);
 iVar2 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00013026);
 printf(&DAT_000130fe,iVar2);
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar3 = __isoc99_sscanf("123,456","%d,%d",local_30,&local_34);
 iVar2 = -1;
 if (iVar3 == 2) {
 iVar2 = local_34 + local_30[0];
 }
 printf(&DAT_0001311a,iVar2);
 /* Unresolved local var: int fd@[???] */
 iVar2 = param_fopen_fclose("/etc/passwd");
 printf(&DAT_00013137,iVar2 >> 0x1f | 0x2a);
 iVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00013153,iVar2);
 iVar2 = param_malloc_free(10);
 printf(&DAT_0001316f,iVar2);
 printf(&DAT_0001318b,0);
 printf(&DAT_000131a6,0xf);
 return;
}



/* Function: param_linux_syscall @ 00011c2f */

int __regparm1 param_linux_syscall(char *pathname)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 undefined4 uVar4;
 
 /* Unresolved local var: int fd@[???] */
 uVar4 = 0x11c37;
 uVar3 = 0;
 iVar1 = (int)syscall(5);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,pathname);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 00011c78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 
 /* Unresolved local var: int result@[???] */
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00011ca1 */

int param_win32_api(char *filename)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct stat local_64;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat(filename,&local_64);
 iVar3 = -2;
 if (0 < local_64.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: call_win32_api @ 00011ce7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct stat local_64;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_64);
 iVar3 = -2;
 if (0 < local_64.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: param_fork_exec @ 00011d30 */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 
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



/* Function: call_fork_exec @ 00011d9f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 return -(uint)(iVar1 != 0) | 0x2a;
}



/* Function: param_pipe_communication @ 00011dcf */

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



/* Function: call_pipe_communication @ 00011ea5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 00011ebf */

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



/* Function: call_socket_create @ 00011f8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00011fa6 */

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



/* Function: call_shmget_shmat @ 0001208a */

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



/* Function: param_signal_handling @ 000120b1 */

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
 iVar3 = -1;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 iVar3 = -2;
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
 iVar3 = -3;
 }
 else {
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
 }
 }
 }
 return iVar3;
}



/* Function: signal_handler @ 000121fa */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 0001221b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00012235 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 char *pathname;
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 struct stat local_6c;
 
 pathname = (char *)puts(&DAT_00013390);
 /* Unresolved local var: int result@[???] */
 iVar1 = param_linux_syscall(pathname);
 printf(&DAT_000131f5,iVar1 >> 0x1f | 0x2a);
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_6c);
 uVar2 = 0xfffffffe;
 if (0 < local_6c.st_size) {
 uVar2 = 0x2a;
 }
 uVar3 = 0xffffffff;
 if (iVar1 < 0) {
 uVar2 = uVar3;
 }
 printf(&DAT_00013211,uVar2);
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 printf(&DAT_0001322d,-(uint)(iVar1 != 0) | 0x2a);
 iVar1 = param_pipe_communication();
 printf(&DAT_00013249,iVar1);
 iVar1 = param_socket_create();
 printf(&DAT_00013265,iVar1);
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00013281,uVar3);
 iVar1 = param_signal_handling();
 printf(&DAT_0001329d,iVar1);
 return;
}



/* Function: thread_compute @ 0001234e */

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



/* Function: param_pthread_create @ 0001237a */

int param_pthread_create(int x)

{
 int iVar1;
 pthread_t local_14;
 int *local_10;
 int local_c;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_c = x;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_compute,&local_c);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_10);
 iVar1 = *local_10;
 free(local_10);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_pthread_create @ 000123e1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 
 iVar1 = param_pthread_create(7);
 return iVar1;
}



/* Function: thread_sum @ 00012402 */

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



/* Function: param_pthread_join @ 0001243a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 pthread_t *ppVar4;
 pthread_t apStack_40 [12];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 iVar3 = 0;
 ppVar4 = apStack_40;
 apStack_40[0xb] = 0;
 apStack_40[8] = 0;
 apStack_40[5] = 0;
 apStack_40[3] = 1;
 apStack_40[4] = 10;
 apStack_40[6] = 0xb;
 apStack_40[7] = 0x14;
 apStack_40[9] = 0x15;
 apStack_40[10] = 0x1e;
 do {
 /* Unresolved local var: int i@[???] */
 ppVar4 = ppVar4 + 3;
 iVar1 = pthread_create((pthread_t *)((int)apStack_40 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 ppVar4);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 } while (iVar3 != 0xc);
 /* Unresolved local var: int i@[???] */
 ppVar4 = apStack_40 + 5;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_40[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *ppVar4;
 iVar3 = iVar3 + 1;
 ppVar4 = ppVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}



/* Function: call_pthread_join @ 000124f1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: thread_increment @ 0001250b */

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



/* Function: param_mutex_lock @ 0001255b */

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



/* Function: call_mutex_lock @ 00012631 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00012655 */

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



/* Function: producer_thread @ 000126c7 */

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



/* Function: param_condition_variable @ 0001271c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 pthread_t local_14;
 pthread_t local_10;
 int *local_c;
 
 /* Unresolved local var: pthread_t consumer@[???]
 Unresolved local var: pthread_t producer@[???]
 Unresolved local var: void * consumer_ret@[???]
 Unresolved local var: int result@[???] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_c);
 pthread_join(local_10,(void **)0x0);
 iVar1 = *local_c;
 free(local_c);
 }
 else {
 pthread_cancel(local_14);
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_condition_variable @ 000127c6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 000127e0 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < *(int *)arg) {
 iVar2 = 0;
 do {
 /* Unresolved local var: int desired@[???]
 Unresolved local var: int expected@[???] */
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
 } while (iVar2 != *(int *)arg);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 0001281b */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00012839 */

int param_atomic_ops(int thread_count,int iterations)

{
 int aVar1;
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



/* Function: call_atomic_ops @ 00012939 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 0001295d */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *in_GS_OFFSET;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 iVar2 = in_GS_OFFSET[-9];
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET[-9] = iVar1;
 strncpy((char *)(*in_GS_OFFSET + -0x20),arg,0x1f);
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}



/* Function: param_thread_local_storage @ 000129b0 */

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
 /* Unresolved local var: int j@[???] */
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
 goto LAB_00012add;
 }
 }
 }
 iVar1 = 0;
 iVar2 = 0;
LAB_00012add:
 free(__ptr_00);
 free(__ptr);
 iVar3 = -3;
 if (thread_count * 0x96 == iVar2 && thread_count * 100 == iVar1) {
 iVar3 = 0x2a;
 }
 return iVar3;
}



/* Function: call_thread_local_storage @ 00012b50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00012b71 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 
 puts(&DAT_000133ab);
 iVar1 = param_pthread_create(7);
 printf(&DAT_000132c3,iVar1);
 iVar1 = param_pthread_join();
 printf(&DAT_000132df,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 printf(&DAT_000132fc,iVar1);
 iVar1 = param_condition_variable();
 printf(&DAT_00013318,iVar1);
 iVar1 = param_atomic_ops(4,500);
 printf(&DAT_00013334,iVar1);
 iVar1 = param_thread_local_storage(4);
 printf(&DAT_00013350,iVar1);
 return;
}



/* Function: main @ 00012c45 */

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
