#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>

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

/* Type definitions for decompiled code */
typedef unsigned int undefined4;
typedef unsigned char undefined1;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/6/6_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Test output string constants */
static const char DAT_00013496[] = "Testing standard library functions:\n";
static const char DAT_000134bb[] = "  call_strcpy() = %d\n";
static const char DAT_000134d6[] = "  call_strcmp() = %d\n";
static const char DAT_000134f1[] = "  call_strlen() = %d\n";
static const char DAT_0001350d[] = "  call_memcpy() = %d\n";
static const char DAT_00013529[] = "  call_memcmp() = %d\n";
static const char DAT_00013545[] = "  call_printf() = %d\n";
static const char DAT_00013561[] = "  call_scanf() = %d\n";
static const char DAT_0001357e[] = "  call_fopen_fclose() = %d\n";
static const char DAT_0001359a[] = "  call_fread_fwrite() = %d\n";
static const char DAT_000135b6[] = "  call_malloc_free() = %d\n";
static const char DAT_000135d2[] = "  call_memset() = %d\n";
static const char DAT_000135ed[] = "  call_strchr_strstr() = %d\n";
static const char DAT_0001363c[] = "Testing system calls:\n";
static const char DAT_00013658[] = "  call_linux_syscall() = %d\n";
static const char DAT_00013674[] = "  call_win32_api() = %d\n";
static const char DAT_00013690[] = "  call_fork_exec() = %d\n";
static const char DAT_000136ac[] = "  call_pipe_communication() = %d\n";
static const char DAT_000136c8[] = "  call_socket_create() = %d\n";
static const char DAT_000136e4[] = "  call_shmget_shmat() = %d\n";
static const char DAT_00013700[] = "  call_signal_handling() = %d\n";
static const char DAT_00013726[] = "Testing thread concurrency:\n";
static const char DAT_00013745[] = "  call_pthread_create() = %d\n";
static const char DAT_00013761[] = "  call_pthread_join() = %d\n";
static const char DAT_0001377e[] = "  call_mutex_lock() = %d\n";
static const char DAT_0001379a[] = "  call_condition_variable() = %d\n";
static const char DAT_000137b6[] = "  call_atomic_ops() = %d\n";
static const char DAT_000137d2[] = "  call_thread_local_storage() = %d\n";

/* Global variables for thread synchronization */
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static int signal_received = 0;
static int signal_number = 0;
static int shared_counter = 0;
static int data = 0;
static int ready = 0;
static int atomic_counter = 0;

/* Forward declarations */
void signal_handler(int sig);


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 000110a8 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return sVar1;
}



/* Function: call_strcpy @ 000110dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 int iVar1;
 char acStack_28 [32];
 
 /* Unresolved local var: char[32] buffer@[DW_OP_breg13(sp): +8]
 Unresolved local var: int len@[DW_OP_breg13(sp): +4] */
 iVar1 = param_strcpy(acStack_28,"HelloLib");
 return iVar1;
}



/* Function: param_strcmp @ 00011110 */

int param_strcmp(char *s1,char *s2)

{
 int local_18;
 
 /* Unresolved local var: int ret@[DW_OP_breg13(sp): +4] */
 local_18 = strcmp(s1,s2);
 if (local_18 < 1) {
 local_18 = local_18 >> 0x1f;
 }
 else {
 local_18 = 1;
 }
 return local_18;
}



/* Function: call_strcmp @ 00011170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[DW_OP_breg13(sp): +8]
 Unresolved local var: int r3@[DW_OP_breg13(sp): +4] */
 iVar1 = param_strcmp("abc","def");
 iVar2 = param_strcmp("xyz","xyz");
 iVar3 = param_strcmp("bbb","aaa");
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 000111f4 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[DW_OP_breg13(sp): 0] */
 sVar1 = strlen(str);
 return sVar1;
}



/* Function: call_strlen @ 00011220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 int iVar1;
 
 /* Unresolved local var: char * test@[DW_OP_breg13(sp): +4] */
 iVar1 = param_strlen("BinBench2025");
 return iVar1;
}



/* Function: param_memcpy @ 00011250 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return n;
}



/* Function: call_memcpy @ 00011288 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 int local_38 [6];
 int uStack_20;
 int uStack_1c;
 int uStack_18;
 int uStack_14;
 
 /* Unresolved local var: int[5] src@[DW_OP_breg13(sp): +20]
 Unresolved local var: int[5] dst@[DW_OP_breg13(sp): 0] */
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

int param_memcmp(void *p1,void *p2,size_t n)

{
 int local_1c;
 
 /* Unresolved local var: int ret@[DW_OP_breg13(sp): +8] */
 local_1c = memcmp(p1,p2,n);
 if (local_1c < 1) {
 local_1c = local_1c >> 0x1f;
 }
 else {
 local_1c = 1;
 }
 return local_1c;
}



/* Function: call_memcmp @ 0001135c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 uint32_t local_2c;
 uint32_t local_28;
 uint32_t local_24;
 uint32_t local_20;
 uint32_t local_1c;
 uint32_t local_18;
 uint32_t local_14;
 uint32_t local_10;
 uint32_t local_c;
 
 /* Unresolved local var: int[3] arr1@[???]
 Unresolved local var: int[3] arr2@[???]
 Unresolved local var: int[3] arr3@[DW_OP_breg13(sp): +20]
 Unresolved local var: int r1@[DW_OP_breg13(sp): +16]
 Unresolved local var: int r2@[DW_OP_breg13(sp): +12] */
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 local_1c = 2;
 local_18 = 4;
 local_20 = 1;
 local_28 = 2;
 local_24 = 3;
 local_2c = 1;
 iVar1 = param_memcmp(&local_14,&local_20,0xc);
 iVar2 = param_memcmp(&local_14,&local_2c,0xc);
 return iVar1 + iVar2;
}



/* Function: param_printf @ 00011438 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[DW_OP_breg13(sp): +4] */
 iVar1 = printf("Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 00011478 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[DW_OP_breg13(sp): +4] */
 iVar1 = param_printf(0x2a,"Test");
 return iVar1;
}



/* Function: param_scanf @ 000114ac */

int param_scanf(char *input_str)

{
 int iVar1;
 int local_18;
 int local_14;
 char *local_10;
 int local_c;
 
 /* Unresolved local var: int a@[DW_OP_breg13(sp): +12]
 Unresolved local var: int b@[DW_OP_breg13(sp): +8]
 Unresolved local var: int ret@[DW_OP_breg13(sp): +4] */
 local_10 = input_str;
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&local_14,&local_18);
 if (iVar1 == 2) {
 local_c = local_14 + local_18;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_scanf @ 0001151c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 
 iVar1 = param_scanf("123,456");
 return iVar1;
}



/* Function: param_fopen_fclose @ 0001153c */

int param_fopen_fclose(char *filename)

{
 FILE *__stream;
 int local_c;
 
 /* Unresolved local var: FILE * fp@[DW_OP_breg13(sp): +4]
 Unresolved local var: int fd@[DW_OP_breg13(sp): 0] */
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



/* Function: call_fopen_fclose @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int fd@[DW_OP_breg13(sp): +4] */
 uVar1 = param_fopen_fclose("/etc/passwd");
 iVar2 = -1;
 if (uVar1 < 0x80000000) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_fread_fwrite @ 000115ec */

int param_fread_fwrite(char *tmpfile)

{
 char *__ptr;
 FILE *__s;
 size_t sVar1;
 size_t sVar2;
 int iVar3;
 bool bVar4;
 char acStack_34 [32];
 int local_1c;
 char *local_14;
 char *local_10;
 int local_c;
 
 /* Unresolved local var: char * write_data@[???]
 Unresolved local var: char[32] read_buffer@[DW_OP_breg13(sp): +36]
 Unresolved local var: FILE * fp@[DW_OP_breg13(sp): +32]
 Unresolved local var: size_t written@[DW_OP_breg13(sp): +28]
 Unresolved local var: size_t read@[DW_OP_breg13(sp): +24] */
 local_14 = "BinBench Test Data";
 local_10 = tmpfile;
 __s = fopen(tmpfile,"w+");
 __ptr = local_14;
 if (__s == (FILE *)0x0) {
 local_c = -1;
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
 bVar4 = false;
 if (sVar2 == sVar1) {
 iVar3 = strcmp(acStack_34,local_14);
 bVar4 = iVar3 == 0;
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



/* Function: call_fread_fwrite @ 00011744 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00011764 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 uint local_18;
 int local_c;
 
 /* Unresolved local var: int * ptr@[DW_OP_breg13(sp): +12]
 Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
 __ptr = malloc(size << 2);
 if (__ptr == (int *)0x0) {
 local_c = -1;
 }
 else {
 /* Unresolved local var: size_t i@[DW_OP_breg13(sp): +8] */
 for (local_18 = 0; local_18 < size; local_18 = local_18 + 1) {
 __ptr[local_18] = local_18 * 10;
 }
 local_c = *__ptr + __ptr[size - 1];
 free(__ptr);
 }
 return local_c;
}



/* Function: call_malloc_free @ 0001182c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 
 iVar1 = param_malloc_free(10);
 return iVar1;
}



/* Function: param_memset @ 00011844 */

int param_memset(void *buffer,size_t size)

{
 int local_1c;
 int local_18;
 
 /* Unresolved local var: uchar * bytes@[DW_OP_breg13(sp): +12]
 Unresolved local var: int sum@[DW_OP_breg13(sp): +8] */
 memset(buffer,0,size);
 local_18 = 0;
 /* Unresolved local var: size_t i@[DW_OP_breg13(sp): +4] */
 for (local_1c = 0; local_1c < size; local_1c = local_1c + 1) {
 local_18 = local_18 + (uint)*(unsigned char *)((int)buffer + local_1c);
 }
 return local_18;
}



/* Function: call_memset @ 000118d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 int local_34;
 int local_30 [10];
 
 /* Unresolved local var: int[10] buffer@[DW_OP_breg13(sp): +8] */
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
 local_30[local_34] = 0xff;
 }
 param_memset(local_30,0x28);
 return local_30[0] + local_30[9];
}



/* Function: param_strchr_strstr @ 00011944 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 char *pcVar1;
 int local_2c;
 int local_28;
 
 /* Unresolved local var: char * pos1@[???]
 Unresolved local var: int index1@[DW_OP_breg13(sp): +20]
 Unresolved local var: char * pos2@[DW_OP_breg13(sp): +16]
 Unresolved local var: int index2@[DW_OP_breg13(sp): +12] */
 pcVar1 = strchr(str,(uint)(unsigned char)ch);
 if (pcVar1 == (char *)0x0) {
 local_28 = -1;
 }
 else {
 local_28 = (int)pcVar1 - (int)str;
 }
 pcVar1 = strstr(str,substr);
 if (pcVar1 == (char *)0x0) {
 local_2c = -1;
 }
 else {
 local_2c = (int)pcVar1 - (int)str;
 }
 return local_28 + local_2c;
}



/* Function: call_strchr_strstr @ 00011a04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 int iVar1;
 
 /* Unresolved local var: char * text@[DW_OP_breg13(sp): +4]
 Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
 iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
 return iVar1;
}



/* Function: test_standard_library_functions @ 00011a4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 int iVar1;
 
 printf(&DAT_00013496);
 iVar1 = call_strcpy();
 printf(&DAT_000134bb,iVar1);
 iVar1 = call_strcmp();
 printf(&DAT_000134d6,iVar1);
 iVar1 = call_strlen();
 printf(&DAT_000134f1,iVar1);
 iVar1 = call_memcpy();
 printf(&DAT_0001350d,iVar1);
 iVar1 = call_memcmp();
 printf(&DAT_00013529,iVar1);
 iVar1 = call_printf();
 printf(&DAT_00013545,iVar1);
 iVar1 = call_scanf();
 printf(&DAT_00013561,iVar1);
 iVar1 = call_fopen_fclose();
 printf(&DAT_0001357e,iVar1);
 iVar1 = call_fread_fwrite();
 printf(&DAT_0001359a,iVar1);
 iVar1 = call_malloc_free();
 printf(&DAT_000135b6,iVar1);
 iVar1 = call_memset();
 printf(&DAT_000135d2,iVar1);
 iVar1 = call_strchr_strstr();
 printf(&DAT_000135ed,iVar1);
 return;
}



/* Function: param_linux_syscall @ 00011b8c */

int param_linux_syscall(char *pathname)

{
 int *piVar1;
 int local_c;
 
 /* Unresolved local var: int fd@[DW_OP_breg13(sp): +4] */
 local_c = syscall(5,pathname,0);
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 uVar1 = param_linux_syscall("/etc/passwd");
 iVar2 = -1;
 if (uVar1 < 0x80000000) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_win32_api @ 00011c38 */

int param_win32_api(char *filename)

{
 uint uVar1;
 struct stat sStack_68;
 char *local_10;
 int local_c;
 
 /* Unresolved local var: stat st@[DW_OP_breg13(sp): 0] */
 local_10 = filename;
 uVar1 = stat(filename,&sStack_68);
 if (uVar1 < 0x80000000) {
 local_c = -2;
 if (0 < sStack_68.st_size) {
 local_c = 0x2a;
 }
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_win32_api @ 00011c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 
 iVar1 = param_win32_api("/etc/passwd");
 return iVar1;
}



/* Function: param_fork_exec @ 00011cb4 */

int param_fork_exec(char *prog,char *arg)

{
 uint uVar1;
 int local_1c;
 int local_1b;
 uint local_18;
 char *local_14;
 char *local_10;
 uint local_c;
 
 local_14 = arg;
 local_10 = prog;
 /* Unresolved local var: pid_t pid@[DW_OP_breg13(sp): +8] */
 local_18 = fork();
 if (local_18 < 0x80000000) {
 if (local_18 == 0) {
 execl(local_10,local_10,local_14,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[DW_OP_breg13(sp): +4]
 Unresolved local var: pid_t wpid@[DW_OP_breg13(sp): 0] */
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[DW_OP_breg13(sp): +4] */
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_pipe_communication @ 00011dc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int __fd;
 uint uVar1;
 size_t __n;
 ssize_t sVar2;
 undefined1 auStack_34 [32];
 int local_14;
 int local_10;
 int local_c;
 
 /* Unresolved local var: int[2] pipefd@[???]
 Unresolved local var: char[32] buffer@[DW_OP_breg13(sp): +28]
 Unresolved local var: pid_t pid@[DW_OP_breg13(sp): +24] */
 uVar1 = pipe(&local_14);
 if (uVar1 < 0x80000000) {
 uVar1 = fork();
 if (uVar1 < 0x80000000) {
 if (uVar1 == 0) {
 /* Unresolved local var: char * msg@[DW_OP_breg13(sp): +20] */
 close(local_14);
 __fd = local_10;
 __n = strlen("HelloPipe");
 write(__fd,"HelloPipe",__n);
 close(local_10);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 /* Unresolved local var: ssize_t bytes@[DW_OP_breg13(sp): +16] */
 close(local_10);
 sVar2 = read(local_14,auStack_34,0x1f);
 auStack_34[sVar2] = 0;
 close(local_14);
 wait((void *)0x0);
 local_c = -3;
 if (0 < sVar2) {
 local_c = 0x2a;
 }
 }
 else {
 local_c = -2;
 }
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_pipe_communication @ 00011ed8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 00011eec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 uint16_t uVar1;
 uint uVar2;
 struct sockaddr local_24;
 int local_14;
 uint local_10;
 int local_c;
 
 /* Unresolved local var: int sock@[???]
 Unresolved local var: int opt@[???]
 Unresolved local var: sockaddr_in addr@[DW_OP_breg13(sp): +12] */
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
 uVar2 = bind(local_10,&local_24,0x10);
 if (uVar2 < 0x80000000) {
 uVar2 = listen(local_10,5);
 if (uVar2 < 0x80000000) {
 close(local_10);
 local_c = 0x2a;
 }
 else {
 close(local_10);
 local_c = -4;
 }
 }
 else {
 close(local_10);
 local_c = -3;
 }
 }
 else {
 close(local_10);
 local_c = -2;
 }
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_socket_create @ 00012020 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00012034 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 uint uVar1;
 char *__dest;
 size_t local_c;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[DW_OP_breg13(sp): +16]
 Unresolved local var: int shmid@[DW_OP_breg13(sp): +12]
 Unresolved local var: char * shm@[DW_OP_breg13(sp): +8]
 Unresolved local var: int len@[DW_OP_breg13(sp): +4] */
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
 shmctl(uVar1,0,(struct shmid_ds *)0x0);
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[DW_OP_breg13(sp): +4] */
 iVar1 = param_shmget_shmat();
 iVar2 = -1;
 if (0 < iVar1) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_signal_handling @ 000121a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 int iVar1;
 __sighandler_t p_Var2;
 int local_10;
 int local_c;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 local_c = -1;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 local_c = -2;
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
 local_c = -3;
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



/* Function: signal_handler @ 000123d0 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00012408 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 0001241c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 int iVar1;
 
 printf(&DAT_0001363c);
 iVar1 = call_linux_syscall();
 printf(&DAT_00013658,iVar1);
 iVar1 = call_win32_api();
 printf(&DAT_00013674,iVar1);
 iVar1 = call_fork_exec();
 printf(&DAT_00013690,iVar1);
 iVar1 = call_pipe_communication();
 printf(&DAT_000136ac,iVar1);
 iVar1 = call_socket_create();
 printf(&DAT_000136c8,iVar1);
 iVar1 = call_shmget_shmat();
 printf(&DAT_000136e4,iVar1);
 iVar1 = call_signal_handling();
 printf(&DAT_00013700,iVar1);
 return;
}



/* Function: thread_compute @ 000124e4 */

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * input@[???]
 Unresolved local var: int value@[DW_OP_breg13(sp): +12]
 Unresolved local var: int result@[DW_OP_breg13(sp): +8]
 Unresolved local var: int * ret@[DW_OP_breg13(sp): +4] */
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 0001253c */

int param_pthread_create(int x)

{
 int iVar1;
 int *local_1c;
 int local_18;
 pthread_t local_14;
 int local_10;
 int local_c;
 
 /* Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int input@[DW_OP_breg13(sp): +16]
 Unresolved local var: void * thread_ret@[DW_OP_breg13(sp): +12]
 Unresolved local var: int ret@[DW_OP_breg13(sp): +8]
 Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 local_18 = x;
 local_10 = x;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_compute,&local_18);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_1c);
 iVar1 = *local_1c;
 free(local_1c);
 local_c = iVar1;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_pthread_create @ 000125cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 
 iVar1 = param_pthread_create(7);
 return iVar1;
}



/* Function: thread_sum @ 000125e4 */

void * thread_sum(void *arg)

{
 undefined4 local_c;
 
 /* Unresolved local var: ThreadData * data@[DW_OP_breg13(sp): +4] */
 *(undefined4 *)((int)arg + 8) = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
 for (local_c = *(int *)arg; local_c <= *(int *)((int)arg + 4); local_c = local_c + 1) {
 *(int *)((int)arg + 8) = *(int *)((int)arg + 8) + local_c;
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 0001265c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[DW_OP_breg13(sp): +20]
 Unresolved local var: int total@[DW_OP_breg13(sp): +12] */
 memset(local_3c,0,0x24);
 local_3c[0] = 1;
 local_3c[1] = 10;
 local_3c[3] = 0xb;
 local_3c[4] = 0x14;
 local_24 = 0x15;
 local_20 = 0x1e;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +16] */
 for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
 iVar1 = pthread_create(apStack_18 + local_40,(pthread_attr_t *)0x0,thread_sum,
 local_3c + local_40 * 3);
 if (iVar1 != 0) {
 return -1;
 }
 }
 local_44 = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +8] */
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: thread_increment @ 000127d0 */

void * thread_increment(void *arg)

{
 int iVar1;
 int local_14;
 
 /* Unresolved local var: int iterations@[DW_OP_breg13(sp): +8] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
 for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 }
 return (void *)0x0;
}



/* Function: param_mutex_lock @ 00012874 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 void *__ptr;
 int iVar1;
 int local_20;
 int local_1c;
 int local_14;
 int local_10;
 int local_c;
 
 /* Unresolved local var: pthread_t * tids@[DW_OP_breg13(sp): +16]
 Unresolved local var: int expected@[DW_OP_breg13(sp): +4] */
 local_14 = iterations_per_thread;
 local_10 = thread_count;
 __ptr = malloc(thread_count << 2);
 if (__ptr == (void *)0x0) {
 local_c = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +12] */
 for (local_1c = 0; local_1c < local_10; local_1c = local_1c + 1) {
 iVar1 = pthread_create((pthread_t *)((int)__ptr + local_1c * 4),(pthread_attr_t *)0x0,
 thread_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 }
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +8] */
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 pthread_join(*(pthread_t *)((int)__ptr + local_20 * 4),(void **)0x0);
 }
 free(__ptr);
 local_c = -3;
 if (shared_counter == local_10 * local_14) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_mutex_lock @ 000129d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 000129ec */

void * consumer_thread(void *arg)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int received@[DW_OP_breg13(sp): +8]
 Unresolved local var: int * ret@[DW_OP_breg13(sp): +4] */
 iVar1 = 0;
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 while (iVar1 = data, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 piVar2 = malloc(4);
 *piVar2 = iVar1;
 return piVar2;
}



/* Function: producer_thread @ 00012a90 */

void * producer_thread(void *arg)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: param_condition_variable @ 00012b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int *local_18;
 pthread_t local_14;
 pthread_t local_10;
 int local_c;
 
 /* Unresolved local var: pthread_t producer@[???]
 Unresolved local var: pthread_t consumer@[DW_OP_breg13(sp): +12]
 Unresolved local var: void * consumer_ret@[DW_OP_breg13(sp): +8]
 Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_18);
 pthread_join(local_10,(void **)0x0);
 iVar1 = *local_18;
 free(local_18);
 local_c = iVar1;
 }
 else {
 pthread_cancel(local_14);
 local_c = -2;
 }
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_condition_variable @ 00012bf4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 00012c08 */

void * thread_atomic_increment(void *arg)

{
 int local_20;
 undefined4 local_1c;
 undefined4 local_18;
 int local_14;
 int local_10;
 void *local_c;
 
 /* Unresolved local var: int iterations@[???] */
 local_10 = *(int *)arg;
 local_c = arg;
 /* Unresolved local var: int i@[???] */
 for (local_14 = 0; local_14 < local_10; local_14 = local_14 + 1) {
 /* Unresolved local var: int expected@[DW_OP_breg13(sp): +24]
 Unresolved local var: int desired@[DW_OP_breg13(sp): +20] */
 local_18 = 1;
 local_1c = __atomic_fetch_add_4(&atomic_counter,1);
 local_20 = local_14;
 __atomic_compare_exchange_4(&atomic_counter,&local_20,local_14 + 1000,5,5);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00012cd0 */

void * thread_atomic_load_store(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: int value@[???] */
 iVar1 = __atomic_load_4();
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00012d38 */

int param_atomic_ops(int thread_count,int iterations)

{
 int iVar1;
 int local_28;
 pthread_t local_24;
 int local_20;
 undefined4 local_1c;
 void *local_18;
 int local_14;
 int local_10;
 int local_c;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: pthread_t load_store_tid@[DW_OP_breg13(sp): +20]
 Unresolved local var: int final_value@[DW_OP_breg13(sp): +12] */
 local_14 = iterations;
 local_10 = thread_count;
 local_18 = malloc(thread_count << 2);
 if (local_18 == (void *)0x0) {
 local_c = -1;
 }
 else {
 local_1c = 0;
 __atomic_store_4(&atomic_counter,0,5);
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +24] */
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 iVar1 = pthread_create((pthread_t *)((int)local_18 + local_20 * 4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(local_18);
 return -2;
 }
 }
 iVar1 = pthread_create(&local_24,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_24,(void **)0x0);
 }
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +16] */
 for (local_28 = 0; local_28 < local_10; local_28 = local_28 + 1) {
 pthread_join(*(pthread_t *)((int)local_18 + local_28 * 4),(void **)0x0);
 }
 iVar1 = __atomic_load_4(&atomic_counter,5);
 free(local_18);
 local_c = -3;
 if (0 < iVar1) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_atomic_ops @ 00012ee8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 00012f04 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 undefined4 *puVar2;
 undefined4 uVar3;
 int extraout_r2;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[DW_OP_breg13(sp): +12]
 Unresolved local var: int * ret@[DW_OP_breg13(sp): +8] */
 iVar1 = __aeabi_read_tp();
 uVar3 = *(undefined4 *)(iVar1 + extraout_r2);
 *(int *)(iVar1 + extraout_r2) = *(int *)(iVar1 + extraout_r2) + 0x32;
 strncpy((char *)(iVar1 + 0xc),arg,0x1f);
 puVar2 = malloc(8);
 *puVar2 = uVar3;
 puVar2[1] = *(undefined4 *)(iVar1 + 8);
 return puVar2;
}



/* Function: param_thread_local_storage @ 00012f9c */

int param_thread_local_storage(int thread_count)

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
 int local_c;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_initial@[DW_OP_breg13(sp): +32]
 Unresolved local var: int total_final@[DW_OP_breg13(sp): +28]
 Unresolved local var: int expected_initial@[DW_OP_breg13(sp): +12]
 Unresolved local var: int expected_final@[DW_OP_breg13(sp): +8] */
 local_10 = thread_count;
 local_14 = malloc(thread_count << 2);
 local_18 = malloc(local_10 << 2);
 if ((local_14 == (void *)0x0) || (local_18 == (void *)0x0)) {
 local_c = -1;
 }
 else {
 /* Unresolved local var: int i@[???] */
 for (local_1c = 0; local_1c < local_10; local_1c = local_1c + 1) {
 pvVar1 = malloc(0x10);
 *(void **)((int)local_18 + local_1c * 4) = pvVar1;
 snprintf(*(char **)((int)local_18 + local_1c * 4),0x10,"Thread-%d");
 }
 /* Unresolved local var: int i@[???] */
 for (local_20 = 0; local_20 < local_10; local_20 = local_20 + 1) {
 iVar2 = pthread_create((pthread_t *)((int)local_14 + local_20 * 4),(pthread_attr_t *)0x0,
 thread_tls_test,*(void **)((int)local_18 + local_20 * 4));
 if (iVar2 != 0) {
 /* Unresolved local var: int j@[???] */
 for (local_24 = 0; local_24 <= local_20; local_24 = local_24 + 1) {
 free(*(void **)((int)local_18 + local_24 * 4));
 }
 free(local_18);
 free(local_14);
 return -2;
 }
 }
 local_28 = 0;
 local_2c = 0;
 /* Unresolved local var: int i@[DW_OP_breg13(sp): +24] */
 for (local_30 = 0; local_30 < local_10; local_30 = local_30 + 1) {
 /* Unresolved local var: void * ret@[DW_OP_breg13(sp): +20]
 Unresolved local var: int * values@[DW_OP_breg13(sp): +16] */
 pthread_join(*(pthread_t *)((int)local_14 + local_30 * 4),&local_34);
 local_28 = local_28 + *local_34;
 local_2c = local_2c + local_34[1];
 free(local_34);
 free(*(void **)((int)local_18 + local_30 * 4));
 }
 free(local_18);
 free(local_14);
 local_c = -3;
 if (local_28 == local_10 * 100 && local_2c == local_10 * 0x96) {
 local_c = 0x2a;
 }
 }
 return local_c;
}



/* Function: call_thread_local_storage @ 00013254 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 0001326c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 
 printf(&DAT_00013726);
 iVar1 = call_pthread_create();
 printf(&DAT_00013745,iVar1);
 iVar1 = call_pthread_join();
 printf(&DAT_00013761,iVar1);
 iVar1 = call_mutex_lock();
 printf(&DAT_0001377e,iVar1);
 iVar1 = call_condition_variable();
 printf(&DAT_0001379a,iVar1);
 iVar1 = call_atomic_ops();
 printf(&DAT_000137b6,iVar1);
 iVar1 = call_thread_local_storage();
 printf(&DAT_000137d2,iVar1);
 return;
}



/* Function: main @ 0001331c */

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
