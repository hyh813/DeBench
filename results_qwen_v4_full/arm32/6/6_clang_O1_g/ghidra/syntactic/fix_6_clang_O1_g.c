/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t, ssize_t, uintptr_t, intptr_t already defined by system headers */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned char byte;
typedef long long longlong;
typedef unsigned long long undefined8;

/* Required includes for standard library functions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <stdbool.h>

/* Global data declarations */
char DAT_00012dec[12];
char DAT_00012de0[12];
char DAT_00012e0d[] = "TestName";
char DAT_00013146[] = "Testing standard library functions\n";
char DAT_0001316a[] = "Testing system calls\n";
char DAT_00013185[] = "Testing thread concurrency\n";
char DAT_00012e5b[] = "String length: %zu\n";
char DAT_00012e76[] = "String compare result: %d\n";
char DAT_00012e91[] = "Memory compare result: %d\n";
char DAT_00012ead[] = "Memory copy result: %d\n";
char DAT_00012ec9[] = "Memcmp results: %d\n";
char DAT_00012ee5[] = "Printf returned: %d\n";
char DAT_00012f01[] = "Scanf result: %d\n";
char DAT_00012f1e[] = "File open result: %d\n";
char DAT_00012f3a[] = "File read/write result: %d\n";
char DAT_00012f56[] = "Malloc result: %d\n";
char DAT_00012f72[] = "Memset result: %d\n";
char DAT_00012f8d[] = "Strchr/strstr result: %d\n";
char DAT_00012fcf[] = "Syscall result: %d\n";
char DAT_00012feb[] = "Stat result: %d\n";
char DAT_00013007[] = "Fork result: %d\n";
char DAT_00013023[] = "Pipe result: %d\n";
char DAT_0001303f[] = "Socket result: %d\n";
char DAT_0001305b[] = "Shared memory result: %d\n";
char DAT_00013077[] = "Signal handling result: %d\n";
char DAT_0001309d[] = "Pthread create result: %d\n";
char DAT_000130b9[] = "Pthread join result: %d\n";
char DAT_000130d6[] = "Mutex lock result: %d\n";
char DAT_000130f2[] = "Condition variable result: %d\n";
char DAT_0001310e[] = "Atomic ops result: %d\n";
char DAT_0001312a[] = "Thread local storage result: %d\n";

/* Global variables */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
char ready = 0;
char data = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Forward declarations */
void signal_handler(int sig);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/6/6_clang_O1_g
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



/* Function: call_strcpy @ 000110ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 size_t sVar1;
 char local_28 [32];
 
 /* Unresolved local var: char[32] buffer@[???]
 Unresolved local var: int len@[???] */
 strncpy(local_28 + 4,"oLib",5);
 strncpy(local_28,"Hell",4);
 sVar1 = strlen(local_28);
 return sVar1;
}



/* Function: param_strcmp @ 00011128 */

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



/* Function: call_strcmp @ 00011150 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 00011158 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return sVar1;
}



/* Function: call_strlen @ 00011168 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 00011170 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return n;
}



/* Function: call_memcpy @ 00011188 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 00011190 */

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



/* Function: call_memcmp @ 000111b8 */

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
 iVar1 = memcmp(&DAT_00012dec,&DAT_00012de0,0xc);
 iVar3 = 0;
 if (iVar1 != 0) {
 iVar3 = -1;
 }
 if (0 < iVar1) {
 iVar3 = 1;
 }
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(&DAT_00012dec,&DAT_00012dec,0xc);
 iVar1 = 0;
 if (iVar2 != 0) {
 iVar1 = -1;
 }
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1 + iVar3;
}



/* Function: param_printf @ 00011228 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 0001124c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00012e0d);
 return iVar1;
}



/* Function: param_scanf @ 00011278 */

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



/* Function: call_scanf @ 000112bc */

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



/* Function: param_fopen_fclose @ 0001130c */

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



/* Function: call_fopen_fclose @ 00011350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 FILE *__stream;
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int fd@[???] */
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 uVar1 = fileno(__stream);
 fclose(__stream);
 iVar2 = -1;
 if (uVar1 < 0x80000000) {
 iVar2 = 0x2a;
 }
 return iVar2;
 }
 return -1;
}



/* Function: param_fread_fwrite @ 000113a8 */

int param_fread_fwrite(char *tmpfile)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 int iVar3;
 undefined1 auStack_38 [32];
 
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



/* Function: call_fread_fwrite @ 0001148c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 000114a8 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 size_t sVar3;
 int iVar4;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(size << 2);
 if (__ptr != (int *)0x0) {
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
 }
 iVar1 = *__ptr;
 iVar4 = __ptr[size - 1];
 free(__ptr);
 return iVar4 + iVar1;
 }
 return -1;
}



/* Function: call_malloc_free @ 00011508 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int *__ptr;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int * ptr@[???] */
 __ptr = malloc(0x28);
 if (__ptr != (int *)0x0) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 __ptr[-iVar2] = iVar1;
 iVar1 = iVar1 + 10;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -10);
 iVar1 = *__ptr;
 iVar2 = __ptr[9];
 free(__ptr);
 return iVar2 + iVar1;
 }
 return -1;
}



/* Function: param_memset @ 00011558 */

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
 iVar1 = iVar1 + (uint)*(byte *)buffer;
 size = size - 1;
 buffer = (byte *)((int)buffer + 1);
 } while (size != 0);
 }
 return iVar1;
}



/* Function: call_memset @ 0001159c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 int iVar1;
 int local_30 [10];
 
 /* Unresolved local var: int[10] buffer@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 local_30[-iVar1] = 0xff;
 iVar1 = iVar1 + -1;
 } while (iVar1 != -10);
 memset(local_30,0,0x28);
 return local_30[9] + local_30[0];
}



/* Function: param_strchr_strstr @ 000115e8 */

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



/* Function: call_strchr_strstr @ 00011628 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 uint uVar4;
 int *__ptr;
 undefined4 uVar5;
 int iVar6;
 int local_44;
 int local_40 [2];
 undefined1 local_38;
 int local_1c;
 
 puts(&DAT_00013146);
 /* Unresolved local var: char[32] buffer@[???] */
 local_38 = 0;
 local_40[1] = 0x62694c6f;
 local_40[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_40);
 printf(&DAT_00012e5b,sVar1);
 printf(&DAT_00012e76,0);
 printf(&DAT_00012e91,0xc);
 printf(&DAT_00012ead,0x5a);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ret@[???] */
 iVar2 = memcmp(&DAT_00012dec,&DAT_00012de0,0xc);
 iVar6 = 0;
 if (iVar2 != 0) {
 iVar6 = -1;
 }
 if (0 < iVar2) {
 iVar6 = 1;
 }
 /* Unresolved local var: int ret@[???] */
 iVar3 = memcmp(&DAT_00012dec,&DAT_00012dec,0xc);
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar3) {
 iVar2 = 1;
 }
 printf(&DAT_00012ec9,iVar2 + iVar6);
 iVar6 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00012e0d);
 printf(&DAT_00012ee5,iVar6);
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar6 = __isoc99_sscanf("123,456","%d,%d",local_40,&local_44);
 iVar3 = -1;
 iVar2 = -1;
 if (iVar6 == 2) {
 iVar2 = local_44 + local_40[0];
 }
 printf(&DAT_00012f01,iVar2);
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen("/etc/passwd","r");
 uVar5 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 uVar4 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0xffffffff;
 if (uVar4 < 0x80000000) {
 uVar5 = 0x2a;
 }
 }
 printf(&DAT_00012f1e,uVar5);
 iVar6 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00012f3a,iVar6);
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr != (int *)0x0) {
 iVar6 = 0;
 iVar2 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 __ptr[-iVar2] = iVar6;
 iVar6 = iVar6 + 10;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -10);
 iVar6 = *__ptr;
 iVar3 = __ptr[9];
 free(__ptr);
 iVar3 = iVar3 + iVar6;
 }
 printf(&DAT_00012f56,iVar3);
 iVar6 = 0;
 do {
 /* Unresolved local var: int[10] buffer@[???]
 Unresolved local var: int i@[???] */
 local_40[-iVar6] = 0xff;
 iVar6 = iVar6 + -1;
 } while (iVar6 != -10);
 memset(local_40,0,0x28);
 printf(&DAT_00012f72,local_1c + local_40[0]);
 printf(&DAT_00012f8d,0xf);
 return;
}



/* Function: param_linux_syscall @ 000118e8 */

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



/* Function: call_linux_syscall @ 00011930 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 uint uVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: int fd@[???] */
 uVar1 = syscall(5,"/etc/passwd",0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = -*piVar2;
 }
 else {
 syscall(6,uVar1);
 }
 iVar3 = -1;
 if (uVar1 < 0x80000000) {
 iVar3 = 0x2a;
 }
 return iVar3;
}



/* Function: param_win32_api @ 00011988 */

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



/* Function: call_win32_api @ 000119c0 */

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



/* Function: param_fork_exec @ 00011a04 */

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



/* Function: call_fork_exec @ 00011a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 uint uVar2;
 int iVar3;
 uint local_c;
 
 /* Unresolved local var: int ret@[???] */
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 iVar3 = -1;
 uVar2 = 0xffffffff;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_c & 0x7f) == 0) {
 uVar2 = local_c >> 8 & 0xff;
 }
 }
 }
 if (uVar2 == 0) {
 iVar3 = 0x2a;
 }
 return iVar3;
}



/* Function: param_pipe_communication @ 00011b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined1 auStack_38 [32];
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



/* Function: call_pipe_communication @ 00011bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 00011bd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 struct sockaddr local_24;
 undefined4 local_14;
 
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



/* Function: call_socket_create @ 00011cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00011cc0 */

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



/* Function: call_shmget_shmat @ 00011d94 */

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



/* Function: param_signal_handling @ 00011db4 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 bool bVar3;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 return -1;
 }
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 return -2;
 }
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
 return -3;
 }
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
 return iVar2;
}



/* Function: signal_handler @ 00011f28 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00011f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00011f60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 uint uVar1;
 int *piVar2;
 __pid_t _Var3;
 int iVar4;
 undefined4 uVar5;
 undefined4 uVar6;
 struct stat local_68;
 
 puts(&DAT_0001316a);
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar1 = syscall(5,"/etc/passwd",0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = -*piVar2;
 }
 else {
 syscall(6,uVar1);
 }
 uVar6 = 0xffffffff;
 uVar5 = 0xffffffff;
 if (uVar1 < 0x80000000) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00012fcf,uVar5);
 /* Unresolved local var: stat st@[???] */
 uVar1 = stat("/etc/passwd",&local_68);
 uVar5 = 0xfffffffe;
 if (0 < local_68.st_size) {
 uVar5 = 0x2a;
 }
 if (0x7fffffff < uVar1) {
 uVar5 = 0xffffffff;
 }
 printf(&DAT_00012feb,uVar5);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var3 = fork();
 uVar1 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var3 = waitpid(_Var3,(int *)&local_68,0);
 if (_Var3 < 0) {
 uVar1 = 0xfffffffe;
 }
 else {
 uVar1 = 0xfffffffd;
 if (((uint)local_68.st_dev & 0x7f) == 0) {
 uVar1 = (uint)local_68.st_dev >> 8 & 0xff;
 }
 }
 }
 uVar5 = 0xffffffff;
 if (uVar1 == 0) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00013007,uVar5);
 iVar4 = param_pipe_communication();
 printf(&DAT_00013023,iVar4);
 iVar4 = param_socket_create();
 printf(&DAT_0001303f,iVar4);
 /* Unresolved local var: int ret@[???] */
 iVar4 = param_shmget_shmat();
 if (0 < iVar4) {
 uVar6 = 0x2a;
 }
 printf(&DAT_0001305b,uVar6);
 iVar4 = param_signal_handling();
 printf(&DAT_00013077,iVar4);
 return;
}



/* Function: thread_compute @ 0001210c */

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



/* Function: param_pthread_create @ 0001212c */

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



/* Function: call_pthread_create @ 00012188 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int iVar2;
 int *local_14;
 undefined4 local_10;
 pthread_t local_c;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 iVar2 = *local_14;
 free(local_14);
 }
 return iVar2;
}



/* Function: thread_sum @ 000121e8 */

void * thread_sum(void *arg)

{
 longlong lVar1;
 uint uVar2;
 int iVar3;
 
 /* Unresolved local var: ThreadData * data@[???] */
 *(undefined4 *)((int)arg + 8) = 0;
 /* Unresolved local var: int i@[???] */
 uVar2 = *(uint *)arg;
 iVar3 = *(int *)((int)arg + 4);
 if ((int)uVar2 <= iVar3) {
 lVar1 = (unsigned long long)(iVar3 - uVar2) * (unsigned long long)(iVar3 + ~uVar2);
 *(uint *)((int)arg + 8) =
 (iVar3 - uVar2) * (uVar2 + 1) + *(int *)((int)arg + 8) + uVar2 +
 ((uint)((byte)((unsigned long long)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 00012240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 undefined4 *__arg;
 int iVar3;
 undefined4 local_48;
 undefined4 local_44;
 int local_40 [4];
 undefined4 local_30;
 undefined4 local_2c;
 pthread_t local_24 [3];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 __arg = &local_48;
 iVar3 = 0;
 memset(&local_48,0,0x24);
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
 __arg = (undefined4 *)((int)__arg + 0xc);
 iVar3 = iVar3 + 4;
 } while (iVar3 != 0xc);
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 iVar3 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar1),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar3 = *(int *)((int)local_40 + iVar1 * -3) + iVar3;
 iVar1 = iVar1 + -4;
 } while (iVar1 != -0xc);
 return iVar3;
}



/* Function: call_pthread_join @ 00012328 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 undefined4 *__arg;
 int iVar3;
 undefined4 local_48;
 undefined4 local_44;
 int local_40 [4];
 undefined4 local_30;
 undefined4 local_2c;
 pthread_t local_24 [3];
 
 __arg = &local_48;
 iVar3 = 0;
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 memset(&local_48,0,0x24);
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
 __arg = (undefined4 *)((int)__arg + 0xc);
 iVar3 = iVar3 + 4;
 } while (iVar3 != 0xc);
 /* Unresolved local var: int i@[???] */
 iVar1 = 0;
 iVar3 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar1),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar3 = *(int *)((int)local_40 + iVar1 * -3) + iVar3;
 iVar1 = iVar1 + -4;
 } while (iVar1 != -0xc);
 return iVar3;
}



/* Function: thread_increment @ 00012410 */

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



/* Function: param_mutex_lock @ 00012478 */

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
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
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
 }
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
 free(__ptr);
 iVar2 = -3;
 if (shared_counter == local_24 * thread_count) {
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: call_mutex_lock @ 00012568 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00012580 */

void * consumer_thread(void *arg)

{
 char cVar1;
 undefined4 *puVar2;
 undefined4 uVar3;
 
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



/* Function: producer_thread @ 00012618 */

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



/* Function: param_condition_variable @ 00012680 */

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



/* Function: call_condition_variable @ 0001273c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 0001274c */

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



/* Function: thread_atomic_load_store @ 000127c0 */

void * thread_atomic_load_store(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: int value@[???] */
 iVar1 = __atomic_load_4(&atomic_counter,5);
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 000127f8 */

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



/* Function: call_atomic_ops @ 0001291c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 00012934 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int *piVar2;
 int extraout_r2;
 int iVar3;
 int iVar4;
 undefined8 uVar5;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 uVar5 = __aeabi_read_tp(arg,arg,8);
 iVar1 = (int)uVar5;
 iVar3 = *(int *)(iVar1 + extraout_r2);
 iVar4 = iVar3 + 0x32;
 *(int *)(iVar1 + extraout_r2) = iVar4;
 strncpy((char *)(iVar1 + 0xc),(char *)((unsigned long long)uVar5 >> 0x20),0x1f);
 piVar2 = malloc(8);
 *piVar2 = iVar3;
 piVar2[1] = iVar4;
 return piVar2;
}



/* Function: param_thread_local_storage @ 0001297c */

int param_thread_local_storage(int thread_count)

{
 pthread_t *__ptr;
 undefined4 *__ptr_00;
 int iVar1;
 char *__s;
 int iVar2;
 pthread_t *ppVar3;
 undefined4 *puVar4;
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
 iVar1 = -1;
 if (__ptr != (pthread_t *)0x0 && __ptr_00 != (undefined4 *)0x0) {
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar1 = 0;
 do {
 __s = malloc(0x10);
 __ptr_00[iVar1] = __s;
 snprintf(__s,0x10,"Thread-%d",iVar1);
 iVar1 = iVar1 + 1;
 } while (thread_count != iVar1);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar1 = 0;
 ppVar3 = __ptr;
 do {
 iVar2 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_tls_test,(void *)__ptr_00[iVar1])
 ;
 if (iVar2 != 0) {
 /* Unresolved local var: int j@[???] */
 iVar2 = 0;
 do {
 free((void *)__ptr_00[iVar2]);
 iVar2 = iVar2 + 1;
 } while (iVar1 + 1 != iVar2);
 free(__ptr_00);
 free(__ptr);
 return -2;
 }
 ppVar3 = ppVar3 + 1;
 iVar1 = iVar1 + 1;
 } while (thread_count != iVar1);
 }
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar5 = 0;
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 iVar5 = 0;
 ppVar3 = __ptr;
 puVar4 = __ptr_00;
 iVar1 = thread_count;
 do {
 /* Unresolved local var: void * ret@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(*ppVar3,&local_28);
 iVar7 = *local_28;
 iVar6 = local_28[1];
 free(local_28);
 free((void *)*puVar4);
 iVar2 = iVar6 + iVar2;
 iVar5 = iVar7 + iVar5;
 iVar1 = iVar1 + -1;
 ppVar3 = ppVar3 + 1;
 puVar4 = puVar4 + 1;
 } while (iVar1 != 0);
 }
 free(__ptr_00);
 free(__ptr);
 iVar1 = -3;
 if (iVar5 == thread_count * 100 && iVar2 == thread_count * 0x96) {
 iVar1 = 0x2a;
 }
 }
 return iVar1;
}



/* Function: call_thread_local_storage @ 00012b18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00012b2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 int iVar2;
 pthread_t *__newthread;
 undefined4 uVar3;
 int iVar4;
 undefined4 *local_4c;
 pthread_t local_48 [6];
 undefined4 local_30;
 undefined4 local_2c;
 pthread_t local_24 [3];
 
 puts(&DAT_00013185);
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_24[0] = 7;
 __newthread = local_48;
 iVar4 = 0;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_compute,local_24);
 uVar3 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_48[0],&local_4c);
 uVar3 = *local_4c;
 free(local_4c);
 }
 printf(&DAT_0001309d,uVar3);
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 memset(__newthread,0,0x24);
 local_2c = 0x1e;
 local_30 = 0x15;
 local_48[4] = 0x14;
 local_48[3] = 0xb;
 local_48[1] = 10;
 local_48[0] = 1;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((int)local_24 + iVar4),(pthread_attr_t *)0x0,thread_sum,
 __newthread);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00012c60;
 }
 __newthread = __newthread + 3;
 iVar4 = iVar4 + 4;
 } while (iVar4 != 0xc);
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar4),(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = *(int *)((int)local_48 + iVar4 * -3 + 8) + iVar1;
 iVar4 = iVar4 + -4;
 } while (iVar4 != -0xc);
LAB_00012c60:
 printf(&DAT_000130b9,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 printf(&DAT_000130d6,iVar1);
 iVar1 = param_condition_variable();
 printf(&DAT_000130f2,iVar1);
 iVar1 = param_atomic_ops(4,500);
 printf(&DAT_0001310e,iVar1);
 iVar1 = param_thread_local_storage(4);
 printf(&DAT_0001312a,iVar1);
 return;
}



/* Function: main @ 00012d04 */

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
