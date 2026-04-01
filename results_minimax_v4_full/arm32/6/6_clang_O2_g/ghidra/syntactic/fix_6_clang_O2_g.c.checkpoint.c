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
typedef char undefined;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <ctype.h>
#include <stdbool.h>

/* Global variables for signal handling */
volatile int signal_received = 0;
volatile int signal_number = 0;

/* Global variables for threading */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int shared_counter = 0;
char data = 0;
char ready = 0;
int atomic_counter = 0;

/* Forward declaration for signal handler */
void signal_handler(int sig);

/* Data references from binary */
static const uint8_t DAT_00012adc[12] = {0};
static const uint8_t DAT_00012ad0[12] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c};
static const char DAT_00012afd[] = "Test";
static const char DAT_00012b4b[] = "Hello World! Length: %zu\n";
static const char DAT_00012b66[] = "strcmp result: %d\n";
static const char DAT_00012b81[] = "strlen result: %d\n";
static const char DAT_00012b9d[] = "memcmp result: %d\n";
static const char DAT_00012bb9[] = "Combined memcmp: %d\n";
static const char DAT_00012bd5[] = "printf result: %d\n";
static const char DAT_00012bf1[] = "sscanf result: %d\n";
static const char DAT_00012c0e[] = "fileno result: %d\n";
static const char DAT_00012c2a[] = "fread_fwrite result: %d\n";
static const char DAT_00012c46[] = "malloc_free result: %d\n";
static const char DAT_00012c62[] = "memset result: %d\n";
static const char DAT_00012c7d[] = "strchr_strstr result: %d\n";
static const char DAT_00012cbf[] = "syscall result: %d\n";
static const char DAT_00012cdb[] = "stat result: %d\n";
static const char DAT_00012cf7[] = "fork_exec result: %d\n";
static const char DAT_00012d13[] = "pipe result: %d\n";
static const char DAT_00012d2f[] = "socket result: %d\n";
static const char DAT_00012d4b[] = "shmget_shmat result: %d\n";
static const char DAT_00012d67[] = "signal_handling result: %d\n";
static const char DAT_00012d8d[] = "pthread_create result: %d\n";
static const char DAT_00012da9[] = "pthread_join result: %d\n";
static const char DAT_00012dc6[] = "mutex_lock result: %d\n";
static const char DAT_00012de2[] = "condition_variable result: %d\n";
static const char DAT_00012dfe[] = "atomic_ops result: %d\n";
static const char DAT_00012e1a[] = "thread_local_storage result: %d\n";
static const char DAT_00012e5a[] = "System Calls Test\n";
static const char DAT_00012e75[] = "Thread Concurrency Test\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/6/6_clang_O2_g
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
 char local_28 [32];
 
 /* Unresolved local var: char[32] buffer@[???]
 Unresolved local var: int len@[???] */
 strncpy(local_28 + 4,"oLib",5);
 strncpy(local_28,"Hell",4);
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
 iVar1 = memcmp(&DAT_00012adc,&DAT_00012ad0,0xc);
 iVar3 = 0;
 /* Unresolved local var: int ret@[???] */
 if (iVar1 != 0) {
 iVar3 = -1;
 }
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar2 = memcmp(&DAT_00012adc,&DAT_00012adc,0xc);
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
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00012afd);
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



/* Function: param_fread_fwrite @ 00011380 */

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



/* Function: call_fread_fwrite @ 00011460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00011470 */

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
 unaff_r5 = *__ptr;
 }
 iVar1 = __ptr[size - 1];
 free(__ptr);
 return iVar1 + unaff_r5;
 }
 return -1;
}



/* Function: call_malloc_free @ 000114d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 return 0x5a;
}



/* Function: param_memset @ 000114dc */

int param_memset(void *buffer,size_t size)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: uchar * uint8_ts@[???] */
 iVar1 = 0;
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 iVar1 = 0;
 do {
 size = size - 1;
 iVar1 = iVar1 + (uint)*(uint8_t *)buffer;
 buffer = (uint8_t *)((int)buffer + 1);
 } while (size != 0);
 }
 return iVar1;
}



/* Function: call_memset @ 00011520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 /* Unresolved local var: int[10] buffer@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 00011528 */

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



/* Function: call_strchr_strstr @ 00011568 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00011570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 uint uVar4;
 uint uVar5 = 0xffffffff;
 int iVar6;
 int local_34 [2];
 char local_2c;
 int local_14;

 puts("Standard Library Functions Test");
 /* Unresolved local var: char[32] buffer@[???] */
 local_2c = 0;
 local_34[1] = 0x62694c6f;
 local_34[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_34);
 printf(&DAT_00012b4b,sVar1);
 printf(&DAT_00012b66,0);
 printf(&DAT_00012b81,0xc);
 printf(&DAT_00012b9d,0x5a);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ret@[???] */
 iVar2 = memcmp(&DAT_00012adc,&DAT_00012ad0,0xc);
 iVar6 = 0;
 /* Unresolved local var: int ret@[???] */
 if (iVar2 != 0) {
 iVar6 = -1;
 }
 if (0 < iVar2) {
 iVar6 = 1;
 }
 iVar3 = memcmp(&DAT_00012adc,&DAT_00012adc,0xc);
 iVar2 = 0;
 if (iVar3 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar3) {
 iVar2 = 1;
 }
 printf(&DAT_00012bb9,iVar2 + iVar6);
 iVar6 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00012afd);
 printf(&DAT_00012bd5,iVar6);
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar6 = __isoc99_sscanf("123,456","%d,%d",local_34,&local_14);
 iVar2 = -1;
 uVar5 = 0xffffffff;
 if (iVar6 == 2) {
 iVar2 = local_14 + local_34[0];
 }
 printf(&DAT_00012bf1,iVar2);
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 uVar4 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0xffffffff;
 if (uVar4 < 0x80000000) {
 uVar5 = 0x2a;
 }
 }
 printf(&DAT_00012c0e,uVar5);
 iVar6 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00012c2a,iVar6);
 printf(&DAT_00012c46,0x5a);
 printf(&DAT_00012c62,0);
 printf(&DAT_00012c7d,0xf);
 return;
}



/* Function: param_linux_syscall @ 000117b8 */

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



/* Function: call_linux_syscall @ 00011800 */

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



/* Function: param_win32_api @ 00011858 */

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



/* Function: call_win32_api @ 00011890 */

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



/* Function: param_fork_exec @ 000118d4 */

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



/* Function: call_fork_exec @ 00011954 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 int iVar2;
 uint local_c;
 
 /* Unresolved local var: int ret@[???] */
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 iVar2 = -1;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if (((-1 < _Var1) && ((local_c & 0x7f) == 0)) && (iVar2 = -1, (local_c & 0xff00) == 0)) {
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: param_pipe_communication @ 000119d0 */

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
 /* Unresolved local var: ssize_t uint8_ts@[???] */
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



/* Function: call_pipe_communication @ 00011a88 */

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



/* Function: param_socket_create @ 00011a8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 struct sockaddr local_24;
 undefined local_14;
 
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



/* Function: call_socket_create @ 00011b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 int iVar2;
 struct sockaddr sStack_24;
 undefined uStack_14;
 
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 uStack_14 = 1;
 iVar2 = setsockopt(iVar1,1,2,&uStack_14,4);
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



/* Function: param_shmget_shmat @ 00011b68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
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
 if (__s != (char *)0xffffffff) {
 memcpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1, 0, (struct shmid_ds *)0x0);
 return sVar2;
 }
 iVar3 = -3;
 }
 }
 }
 return iVar3;
}



/* Function: call_shmget_shmat @ 00011c44 */

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



/* Function: param_signal_handling @ 00011c64 */

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
 /* Error path for signal(0xe) failure */
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
 /* Error path for signal not received */
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



/* Function: signal_handler @ 00011dd8 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00011e00 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 bool bVar3;
 
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



/* Function: test_system_calls @ 00011e04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 uint uVar1;
 int *piVar2;
 __pid_t _Var3;
 int iVar4;
 undefined uVar5;
 undefined uVar6;
 struct stat local_68;
 
 puts(&DAT_00012e5a);
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
 uVar5 = 0xffffffff;
 uVar6 = 0xffffffff;
 if (uVar1 < 0x80000000) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00012cbf,uVar5);
 /* Unresolved local var: stat st@[???] */
 uVar1 = stat("/etc/passwd",&local_68);
 uVar5 = 0xfffffffe;
 if (0 < local_68.st_size) {
 uVar5 = 0x2a;
 }
 if (0x7fffffff < uVar1) {
 uVar5 = 0xffffffff;
 }
 printf(&DAT_00012cdb,uVar5);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var3 = fork();
 uVar5 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var3 = waitpid(_Var3,(int *)&local_68,0);
 if ((_Var3 < 0) || (((uint)local_68.st_dev & 0x7f) != 0)) {
 uVar5 = 0xffffffff;
 }
 else {
 uVar5 = 0xffffffff;
 if (((uint)local_68.st_dev & 0xff00) == 0) {
 uVar5 = 0x2a;
 }
 }
 }
 printf(&DAT_00012cf7,uVar5);
 iVar4 = param_pipe_communication();
 printf(&DAT_00012d13,iVar4);
 iVar4 = param_socket_create();
 printf(&DAT_00012d2f,iVar4);
 /* Unresolved local var: int ret@[???] */
 iVar4 = param_shmget_shmat();
 if (0 < iVar4) {
 uVar6 = 0x2a;
 }
 printf(&DAT_00012d4b,uVar6);
 iVar4 = param_signal_handling();
 printf(&DAT_00012d67,iVar4);
 return;
}



/* Function: thread_compute @ 00011fa8 */

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



/* Function: param_pthread_create @ 00011fc8 */

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



/* Function: call_pthread_create @ 00012024 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int iVar2;
 int *local_14;
 undefined local_10;
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



/* Function: thread_sum @ 00012084 */

void * thread_sum(void *arg)

{
 long long lVar1;
 uint uVar2;
 int iVar3;
 
 /* Unresolved local var: ThreadData * data@[???] */
 *(undefined *)((int)arg + 8) = 0;
 /* Unresolved local var: int i@[???] */
 uVar2 = *(uint *)arg;
 iVar3 = *(int *)((int)arg + 4);
 if ((int)uVar2 <= iVar3) {
 lVar1 = (unsigned long long)(iVar3 - uVar2) * (unsigned long long)(iVar3 + ~uVar2);
 *(uint *)((int)arg + 8) =
 (iVar3 - uVar2) * (uVar2 + 1) + uVar2 +
 ((uint)((uint8_t)((unsigned long long)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 000120d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 undefined local_40;
 undefined local_3c;
 int local_38;
 undefined local_34;
 undefined local_30;
 int local_2c;
 undefined local_28;
 undefined local_24;
 int local_20;
 pthread_t local_1c;
 pthread_t local_18;
 pthread_t local_14;
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 /* Unresolved local var: int i@[???] */
 local_20 = 0;
 local_2c = 0;
 local_38 = 0;
 local_24 = 0x1e;
 local_28 = 0x15;
 local_30 = 0x14;
 local_34 = 0xb;
 local_3c = 10;
 local_40 = 1;
 iVar1 = pthread_create(&local_1c,(pthread_attr_t *)0x0,thread_sum,&local_40);
 iVar4 = -1;
 if (((iVar1 == 0) &&
 (iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_sum,&local_34), iVar1 == 0)) &&
 (iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_sum,&local_28), iVar1 == 0)) {
 /* Unresolved local var: int i@[???] */
 iVar2 = pthread_join(local_1c,(void **)0x0);
 iVar1 = local_38;
 iVar4 = -2;
 if (((iVar2 == 0) && (iVar3 = pthread_join(local_18,(void **)0x0), iVar2 = local_2c, iVar3 == 0)
 ) && (iVar3 = pthread_join(local_14,(void **)0x0), iVar3 == 0)) {
 iVar4 = local_20 + iVar2 + iVar1;
 }
 }
 return iVar4;
}



/* Function: call_pthread_join @ 000121f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 undefined uStack_40;
 undefined uStack_3c;
 int iStack_38;
 undefined uStack_34;
 undefined uStack_30;
 int iStack_2c;
 undefined uStack_28;
 undefined uStack_24;
 int iStack_20;
 pthread_t pStack_1c;
 pthread_t pStack_18;
 pthread_t pStack_14;
 
 iStack_20 = 0;
 iStack_2c = 0;
 iStack_38 = 0;
 uStack_24 = 0x1e;
 uStack_28 = 0x15;
 uStack_30 = 0x14;
 uStack_34 = 0xb;
 uStack_3c = 10;
 uStack_40 = 1;
 iVar1 = pthread_create(&pStack_1c,(pthread_attr_t *)0x0,thread_sum,&uStack_40);
 iVar4 = -1;
 if (((iVar1 == 0) &&
 (iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,thread_sum,&uStack_34), iVar1 == 0))
 && (iVar1 = pthread_create(&pStack_14,(pthread_attr_t *)0x0,thread_sum,&uStack_28), iVar1 == 0)
 ) {
 iVar2 = pthread_join(pStack_1c,(void **)0x0);
 iVar1 = iStack_38;
 iVar4 = -2;
 if (((iVar2 == 0) &&
 (iVar3 = pthread_join(pStack_18,(void **)0x0), iVar2 = iStack_2c, iVar3 == 0)) &&
 (iVar3 = pthread_join(pStack_14,(void **)0x0), iVar3 == 0)) {
 iVar4 = iStack_20 + iVar2 + iVar1;
 }
 }
 return iVar4;
}



/* Function: thread_increment @ 000121f8 */

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



/* Function: param_mutex_lock @ 00012260 */

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



/* Function: call_mutex_lock @ 00012350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 0001235c */

void * consumer_thread(void *arg)

{
 char cVar1;
 undefined *puVar2;
 undefined uVar3;
 
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



/* Function: producer_thread @ 000123f4 */

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



/* Function: param_condition_variable @ 0001245c */

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



/* Function: call_condition_variable @ 00012518 */

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



/* Function: thread_atomic_increment @ 0001251c */

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



/* Function: thread_atomic_load_store @ 00012590 */

void * thread_atomic_load_store(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: int value@[???] */
 iVar1 = __atomic_load_4(&atomic_counter,5);
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 000125c8 */

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



/* Function: call_atomic_ops @ 000126ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 000126f8 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int *piVar2;
 int extraout_r2;
 int iVar3;
 int iVar4;
 unsigned long long uVar5;
 
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



/* Function: param_thread_local_storage @ 00012740 */

int param_thread_local_storage(int thread_count)

{
 pthread_t *__ptr;
 undefined *__ptr_00;
 char *__s;
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 undefined *puVar4;
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
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (undefined *)0x0) {
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
 goto LAB_0001285c;
 }
 }
 }
 iVar2 = 0;
 iVar1 = 0;
LAB_0001285c:
 free(__ptr_00);
 free(__ptr);
 iVar7 = -3;
 if (iVar2 == thread_count * 100 && iVar1 == thread_count * 0x96) {
 iVar7 = 0x2a;
 }
 return iVar7;
}



/* Function: call_thread_local_storage @ 000128dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 000128e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined uVar2;
 undefined *local_14;
 undefined local_10;
 pthread_t local_c;
 
 puts(&DAT_00012e75);
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 printf(&DAT_00012d8d,uVar2);
 iVar1 = param_pthread_join();
 printf(&DAT_00012da9,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 printf(&DAT_00012dc6,iVar1);
 iVar1 = param_condition_variable();
 printf(&DAT_00012de2,iVar1);
 iVar1 = param_atomic_ops(4,500);
 printf(&DAT_00012dfe,iVar1);
 iVar1 = param_thread_local_storage(4);
 printf(&DAT_00012e1a,iVar1);
 return;
}



/* Function: main @ 000129f0 */

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
