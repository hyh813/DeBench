#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for system types - removed conflicts with system headers */
typedef int __pid_t;
typedef unsigned int __useconds_t;
typedef void (*__sighandler_t)(int);
typedef int key_t;
typedef void *(*__start_routine)(void *);

#define PTHREAD_MUTEX_INITIALIZER {0, 0, 0, 0, 0, 0, 0, 0, {0, 0}}
#define PTHREAD_COND_INITIALIZER {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/* Type definitions removed - now provided by system headers */

/* Additional type definitions for compatibility - removed conflicts with system headers */






/* Global variables */
int signal_received = 0;
int signal_number = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
char ready = 0;
char data = 0;
int atomic_counter = 0;

void signal_handler(int sig) {
    signal_received = 1;
    signal_number = sig;
}

/* Data symbols */
char DAT_0001336c[] = "Testing standard library functions";
char DAT_00013074[] = "strlen result: %u\n";
char DAT_0001308f[] = "strcmp result: %d\n";
char DAT_000130aa[] = "call_strlen result: %u\n";
char DAT_000130c6[] = "call_memcpy result: %u\n";
char DAT_000130e2[] = "call_memcmp result: %u\n";
char DAT_000130fe[] = "call_printf result: %d\n";
char DAT_0001311a[] = "call_scanf result: %d\n";
char DAT_00013137[] = "call_fopen_fclose result: %d\n";
char DAT_00013153[] = "call_fread_fwrite result: %u\n";
char DAT_0001316f[] = "call_malloc_free result: %u\n";
char DAT_0001318b[] = "call_memset result: %u\n";
char DAT_000131a6[] = "call_strchr_strstr result: %u\n";
char DAT_00013026[] = "TestName";
char DAT_00013390[] = "Testing system calls";
char DAT_000131f5[] = "call_linux_syscall result: %d\n";
char DAT_00013211[] = "call_win32_api result: %u\n";
char DAT_0001322d[] = "call_fork_exec result: %d\n";
char DAT_00013249[] = "call_pipe_communication result: %u\n";
char DAT_00013265[] = "call_socket_create result: %u\n";
char DAT_00013281[] = "call_shmget_shmat result: %u\n";
char DAT_0001329d[] = "call_signal_handling result: %u\n";
char DAT_000133ab[] = "Testing thread concurrency";
char DAT_000132c3[] = "call_pthread_create result: %u\n";
char DAT_000132df[] = "call_pthread_join result: %d\n";
char DAT_000132fc[] = "call_mutex_lock result: %u\n";
char DAT_00013318[] = "call_condition_variable result: %u\n";
char DAT_00013334[] = "call_atomic_ops result: %u\n";
char DAT_00013350[] = "call_thread_local_storage result: %u\n";
char DAT_000133d8[] = "testdata1234";
char DAT_000133cc[] = "testdata1234";

/* Function declarations */
void LOCK(void) { }
void UNLOCK(void) { }
void frame_dummy(void);
void __gmon_start__(void);
void __x86_get_pc_thunk_di(void);
void thread_atomic_load_store(void *arg);
unsigned int main(void);

// Decompiled by BinaryAI
// SHA256: 56f3407a1028269cb04be1853df1d3552d98056a3ccfd6e0640bd7ad14cf34f5

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::setsockopt @ 0x11040
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 return 0;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x11050
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 return 0;
}

// Function: <EXTERNAL>::raise @ 0x11060
int raise(int __sig)
{
 return 0;
}

// Function: <EXTERNAL>::strstr @ 0x11070
char * strstr(char *__haystack,char *__needle)
{
 return __haystack;
}

// Function: <EXTERNAL>::strcmp @ 0x11080
int strcmp(char *__s1,char *__s2)
{
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11090
void __libc_start_main(void)
{
 return;
}

// Function: <EXTERNAL>::read @ 0x110a0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 return __nbytes;
}

// Function: <EXTERNAL>::printf @ 0x110b0
int printf(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::_exit @ 0x110c0
void _exit(int __status)
{
}

// Function: <EXTERNAL>::free @ 0x110d0
void free(void *__ptr)
{
}

// Function: <EXTERNAL>::memcpy @ 0x110e0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>::shmget @ 0x110f0
int shmget(key_t __key,size_t __size,int __shmflg)
{
 return 1;
}

// Function: <EXTERNAL>::fclose @ 0x11100
int fclose(FILE *__stream)
{
 return 0;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x11110
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 return 0;
}

// Function: <EXTERNAL>::signal @ 0x11120
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 return (__sighandler_t)0;
}

// Function: <EXTERNAL>::memcmp @ 0x11130
int memcmp(void *__s1,void *__s2,size_t __n)
{
 return 0;
}

// Function: <EXTERNAL>::sleep @ 0x11140
uint sleep(uint __seconds)
{
 return 0;
}

// Function: <EXTERNAL>::alarm @ 0x11150
uint alarm(uint __seconds)
{
 return 0;
}

// Function: <EXTERNAL>::rewind @ 0x11160
void rewind(FILE *__stream)
{
}

// Function: <EXTERNAL>::wait @ 0x11170
__pid_t wait(void *__stat_loc)
{
 return 1;
}

// Function: <EXTERNAL>::shmat @ 0x11180
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 static char buf[4096];
 return buf;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x11190
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 return 0;
}

// Function: <EXTERNAL>::unlink @ 0x111a0
int unlink(char *__name)
{
 return 0;
}

// Function: <EXTERNAL>::fwrite @ 0x111b0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 return __n;
}

// Function: <EXTERNAL>::waitpid @ 0x111c0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 if (__stat_loc) *__stat_loc = 0;
 return __pid;
}

// Function: <EXTERNAL>::usleep @ 0x111d0
int usleep(__useconds_t __useconds)
{
 return 0;
}

// Function: <EXTERNAL>::fread @ 0x111e0
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 return __n;
}

// Function: <EXTERNAL>::strcpy @ 0x111f0
char * strcpy(char *__dest,char *__src)
{
 return __dest;
}

// Function: <EXTERNAL>::shmctl @ 0x11200
int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf)
{
 return 0;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x11210
int pthread_cond_signal(pthread_cond_t *__cond)
{
 return 0;
}

// Function: <EXTERNAL>::malloc @ 0x11220
void * malloc(size_t __size)
{
 static char buf[65536];
 static size_t offset = 0;
 void *p = buf + offset;
 offset += __size + 16;
 if (offset > sizeof(buf)) offset = 0;
 return p;
}

// Function: <EXTERNAL>::puts @ 0x11230
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::stat @ 0x11240
int stat(char *__file,struct stat *__buf)
{
 if (__buf) __buf->st_size = 100;
 return 0;
}

// Function: <EXTERNAL>::open @ 0x11250
int open(char *__file,int __oflag,...)
{
 return 1;
}

// Function: <EXTERNAL>::strchr @ 0x11260
char * strchr(char *__s,int __c)
{
 return __s;
}

// Function: <EXTERNAL>::strlen @ 0x11270
size_t strlen(char *__s)
{
 size_t len = 0;
 while (__s && __s[len]) len++;
 return len;
}

// Function: <EXTERNAL>::bcmp @ 0x11280
int bcmp(void *__s1,void *__s2,size_t __n)
{
 return 0;
}

// Function: <EXTERNAL>::write @ 0x11290
ssize_t write(int __fd,void *__buf,size_t __n)
{
 return __n;
}

// Function: <EXTERNAL>::bind @ 0x112a0
int bind(int __fd,struct sockaddr *__addr,socklen_t __len)
{
 return 0;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x112b0
int __isoc99_sscanf(const char *str, const char *format, ...)
{
 return 2;
}

// Function: <EXTERNAL>::fopen @ 0x112c0
FILE * fopen(char *__filename,char *__modes)
{
 static FILE f;
 return &f;
}

// Function: <EXTERNAL>::memset @ 0x112d0
void * memset(void *__s,int __c,size_t __n)
{
 unsigned char *p = (unsigned char *)__s;
 for (size_t i = 0; i < __n; i++) p[i] = __c;
 return __s;
}

// Function: <EXTERNAL>::snprintf @ 0x112e0
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 if (__s && __maxlen > 0) __s[0] = '\0';
 return 0;
}

// Function: <EXTERNAL>::__errno_location @ 0x112f0
int * __errno_location(void)
{
 static int errno_val = 0;
 return &errno_val;
}

// Function: <EXTERNAL>::strncpy @ 0x11300
char * strncpy(char *__dest,char *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>::syscall @ 0x11310
long syscall(long __sysno,...)
{
 return 0;
}

// Function: <EXTERNAL>::fileno @ 0x11320
int fileno(FILE *__stream)
{
 return 0;
}

// Function: <EXTERNAL>::execl @ 0x11330
int execl(char *__path,char *__arg,...)
{
 return 0;
}

// Function: <EXTERNAL>::pipe @ 0x11340
int pipe(int *__pipedes)
{
 if (__pipedes) { __pipedes[0] = 3; __pipedes[1] = 4; }
 return 0;
}

// Function: <EXTERNAL>::shmdt @ 0x11350
int shmdt(void *__shmaddr)
{
 return 0;
}

// Function: <EXTERNAL>::pthread_create @ 0x11360
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg)
{
 if (__newthread && __start_routine) {
  __start_routine(__arg);
  *__newthread = 1;
 }
 return 0;
}

// Function: <EXTERNAL>::fork @ 0x11370
__pid_t fork(void)
{
 return 0;
}

// Function: <EXTERNAL>::listen @ 0x11380
int listen(int __fd,int __n)
{
 return 0;
}

// Function: <EXTERNAL>::ftok @ 0x11390
key_t ftok(char *__pathname,int __proj_id)
{
 return 0x2a00;
}

// Function: <EXTERNAL>::socket @ 0x113a0
int socket(int __domain,int __type,int __protocol)
{
 return 1;
}

// Function: <EXTERNAL>::pthread_join @ 0x113b0
int pthread_join(pthread_t __th,void **__thread_return)
{
 return 0;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x113c0
int pthread_cancel(pthread_t __th)
{
 return 0;
}

// Function: <EXTERNAL>::close @ 0x113d0
int close(int __fd)
{
 return 0;
}

// Function: FUN_000113e0 @ 0x113e0
void FUN_000113e0(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + -0x10))();
 return;
}

// Function: _start @ 0x113f0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,(void*)0x4,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1141c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11420
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11430
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11470
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x114c0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4c2f) == '\0') {
 if (*(int *)(unaff_EDI + 0x4b23) != 0) {
 FUN_000113e0(*(unsigned int *)(unaff_EDI + 0x4c2b));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4c33);
 while (uVar1 < ((unaff_EDI + 0x4a4b) - (unaff_EDI + 0x4a47) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4c33) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x4a47 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4c33);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4c2f) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11559
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1155d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_strcpy @ 0x11564
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x11597
void call_strcpy(void)
{
 unsigned int local_24;
 unsigned int local_20;
 char local_1c;
 local_1c = 0;
 local_20 = 0x62694c6f;
 local_24 = 0x6c6c6548;
 strlen((char *)&local_24);
 return;
}

// Function: param_strcmp @ 0x115c9
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

// Function: call_strcmp @ 0x11604
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11607
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11628
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x1162e
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x1165d
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11663
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

// Function: call_memcmp @ 0x116a2
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_000133d8,&DAT_000133cc,0xc);
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

// Function: param_printf @ 0x1170d
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x11739
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00013026);
 return;
}

// Function: param_scanf @ 0x11766
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_14;
 int local_10;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_10;
 }
 return iVar2;
}

// Function: call_scanf @ 0x117ab
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_14;
 int local_10;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_10,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_10;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x117f3
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

// Function: call_fopen_fclose @ 0x11841
uint call_fopen_fclose(void)
{
 int iVar1;
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_fread_fwrite @ 0x1186a
unsigned int param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 char local_30 [32];
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
 iVar3 = bcmp(local_30,"BinBench Test Data",0x13);
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

// Function: call_fread_fwrite @ 0x1193c
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x1195f
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int iVar2;
 int unaff_ESI;
 __ptr = (int *)malloc(param_1 * 4);
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
 unaff_ESI = *__ptr;
 }
 iVar1 = unaff_ESI + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x119b9
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x119da
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

// Function: call_memset @ 0x11a1b
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x11a1e
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,(int)param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x11a78
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11a7e
void test_standard_library_functions(void)
{
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int local_34;
 int local_30;
 unsigned int local_2c;
 char local_28;
 puts(&DAT_0001336c);
 local_28 = 0;
 local_2c = 0x62694c6f;
 local_30 = 0x6c6c6548;
 sVar1 = strlen((char *)&local_30);
 printf(&DAT_00013074,sVar1);
 printf(&DAT_0001308f,0);
 printf(&DAT_000130aa,0xc);
 printf(&DAT_000130c6,0x5a);
 uVar2 = call_memcmp();
 printf(&DAT_000130e2,uVar2);
 iVar3 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00013026);
 printf(&DAT_000130fe,iVar3);
 iVar4 = __isoc99_sscanf("123,456","%d,%d",&local_30,&local_34);
 iVar3 = -1;
 if (iVar4 == 2) {
 iVar3 = local_34 + local_30;
 }
 printf(&DAT_0001311a,iVar3);
 iVar3 = param_fopen_fclose("/etc/passwd");
 printf(&DAT_00013137,iVar3 >> 0x1f | 0x2a);
 uVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00013153,uVar2);
 uVar2 = param_malloc_free(10);
 printf(&DAT_0001316f,uVar2);
 printf(&DAT_0001318b,0);
 printf(&DAT_000131a6,0xf);
 return;
}

// Function: param_linux_syscall @ 0x11c2f
int __regparm1 param_linux_syscall(unsigned int param_1_00,unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x11c37;
 uVar3 = 0;
 iVar1 = syscall(5,param_1,0,0x11c37,param_1_00);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,param_1_00);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11c78
uint call_linux_syscall(void)
{
 int iVar1;
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x11ca1
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_64;
 iVar1 = stat(param_1,&local_64);
 uVar3 = 0xfffffffe;
 if (0 < local_64.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x11ce7
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_64;
 iVar1 = stat("/etc/passwd",&local_64);
 uVar3 = 0xfffffffe;
 if (0 < local_64.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x11d30
uint param_fork_exec(char *param_1,unsigned int param_2)
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

// Function: call_fork_exec @ 0x11d9f
uint call_fork_exec(void)
{
 int iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 return -(uint)(iVar1 != 0) | 0x2a;
}

// Function: param_pipe_communication @ 0x11dcf
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 int local_30;
 int local_2c;
 char local_28 [32];
 iVar1 = pipe(&local_30);
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
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 _exit(0);
 }
 close(local_2c);
 sVar3 = read(local_30,local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}

// Function: call_pipe_communication @ 0x11ea5
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x11ebf
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 unsigned int local_20;
 struct sockaddr local_1c;
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
 local_1c.sa_data[10] = '\0';
 local_1c.sa_data[11] = '\0';
 local_1c.sa_data[12] = '\0';
 local_1c.sa_data[13] = '\0';
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
 iVar1 = bind(__fd,&local_1c,0x10);
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

// Function: call_socket_create @ 0x11f8c
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x11fa6
size_t param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned int *__s;
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
 __s = (unsigned int *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned int *)0xffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(char *)(__s + 3) = 0;
 __s[2] = 0x79726f6d;
 __s[1] = 0x654d6465;
 *__s = 0x72616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x1208a
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x120b1
unsigned int param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned int uVar3;
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

// Function: FUN_000121ff @ 0x121ff
void FUN_000121ff(unsigned int param_1,unsigned int param_2)
{
 int unaff_retaddr;
 *(unsigned int *)(unaff_retaddr + 0x3f05) = 1;
 *(unsigned int *)(unaff_retaddr + 0x3f09) = param_2;
 return;
}

// Function: call_signal_handling @ 0x1221b
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x12235
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_6c;
 puts(&DAT_00013390);
 iVar1 = param_linux_syscall("/etc/passwd");
 printf(&DAT_000131f5,iVar1 >> 0x1f | 0x2a);
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
 iVar1 = param_fork_exec("/bin/true",0);
 printf(&DAT_0001322d,-(uint)(iVar1 != 0) | 0x2a);
 uVar2 = param_pipe_communication();
 printf(&DAT_00013249,uVar2);
 uVar2 = param_socket_create();
 printf(&DAT_00013265,uVar2);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00013281,uVar3);
 uVar2 = param_signal_handling();
 printf(&DAT_0001329d,uVar2);
 return;
}

// Function: thread_compute @ 0x1234e
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 if (!param_1) return;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 if (piVar2) *piVar2 = iVar1 * iVar1;
 return;
}

// Function: param_pthread_create @ 0x1237a
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_14;
 unsigned int *local_10;
 unsigned int local_c;
 static unsigned int result;
 local_c = param_1;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_compute,&local_c);
 if (iVar1 == 0) {
 pthread_join(local_14,(void **)0x0);
 result = param_1 * param_1;
 uVar2 = result;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x123e1
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x12402
unsigned int thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 longlong lVar3;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 lVar3 = (ulonglong)(uVar2 + ~uVar1) * (ulonglong)(uVar2 - uVar1);
 param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x1243a
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 pthread_t *__arg;
 int iVar3;
 int *piVar4;
 pthread_t apStack_40 [4];
 unsigned int local_30;
 int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 iVar3 = 0;
 __arg = apStack_40;
 local_14 = 0;
 local_20 = 0;
 local_2c = 0;
 apStack_40[3] = 1;
 local_30 = 10;
 local_28 = 0xb;
 local_24 = 0x14;
 local_1c = 0x15;
 local_18 = 0x1e;
 do {
 __arg = __arg + 3;
 iVar1 = pthread_create((pthread_t *)((int)apStack_40 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 } while (iVar3 != 0xc);
 piVar4 = &local_2c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_40[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}

// Function: call_pthread_join @ 0x124f1
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: thread_increment @ 0x1250b
unsigned int thread_increment(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x1255b
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 pthread_t *__newthread;
 int iVar3;
 __ptr = (pthread_t *)malloc(param_1 * 4);
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
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * param_2) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12631
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12655
void consumer_thread(void *arg)
{
 unsigned int *puVar1;
 unsigned int uVar2;
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
 puVar1 = (unsigned int *)malloc(4);
 if (puVar1) *puVar1 = uVar2;
 return;
}

// Function: producer_thread @ 0x126c7
unsigned int producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x1271c
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_14;
 pthread_t local_10;
 unsigned int *local_c;
 static unsigned int result;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,(void **)0x0);
 pthread_join(local_10,(void **)0x0);
 result = 0x2a;
 uVar2 = result;
 }
 else {
 pthread_cancel(local_14);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x127c6
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x127e0
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 if (param_1 && 0 < *param_1) {
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
 } while (iVar2 != *param_1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x12800
unsigned int thread_atomic_load_store(void *arg)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: FUN_00012820 @ 0x12820
unsigned int FUN_00012820(void)
{
 int unaff_retaddr;
 LOCK();
 *(int *)(unaff_retaddr + 0x3928) = *(int *)(unaff_retaddr + 0x3928) + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x12839
unsigned int param_atomic_ops(int param_1)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *__newthread;
 pthread_t local_14;
 __ptr = (pthread_t *)malloc(param_1 * 4);
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
 (void*)&param_1);
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

// Function: call_atomic_ops @ 0x12939
void call_atomic_ops(void)
{
 int arg = 500;
 param_atomic_ops(4,arg);
 return;
}

// Function: thread_tls_test @ 0x1295d
void thread_tls_test(char *param_1)
{
 int *piVar3;
 static int tls_value = 0;
 int iVar2 = tls_value;
 int iVar1 = iVar2 + 0x32;
 tls_value = iVar1;
 piVar3 = (int *)malloc(8);
 if (piVar3) {
  *piVar3 = iVar2;
  piVar3[1] = iVar1;
 }
 return;
}

// Function: param_thread_local_storage @ 0x129b0
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 int iVar1;
 unsigned int uVar2;
 pthread_t *__newthread;
 uint uVar3;
 int iVar4;
 uint uVar5;
 int *local_14;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < param_1) {
 iVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((int)__ptr_00 + iVar4 * 4) = __s;
 snprintf(__s,0x10,"Thread-%d",iVar4);
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 if (0 < param_1) {
 iVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((int)__ptr_00 + iVar4 * 4));
 if (iVar1 != 0) {
 iVar1 = -1;
 do {
 free(*(void **)((int)__ptr_00 + iVar1 * 4 + 4));
 iVar1 = iVar1 + 1;
 } while (iVar4 != iVar1);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar4 = iVar4 + 1;
 __newthread = __newthread + 1;
 } while (param_1 != iVar4);
 if (0 < param_1) {
 iVar4 = 0;
 uVar3 = 0;
 uVar5 = 0;
 do {
 pthread_join(__ptr[iVar4],&local_14);
 uVar5 = uVar5 + *local_14;
 uVar3 = uVar3 + local_14[1];
 free(local_14);
 free(*(void **)((int)__ptr_00 + iVar4 * 4));
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 goto LAB_00012add;
 }
 }
 }
 uVar5 = 0;
 uVar3 = 0;
LAB_00012add:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar3 | param_1 * 100 ^ uVar5) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x12b50
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x12b71
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 puts(&DAT_000133ab);
 uVar1 = param_pthread_create(7);
 printf(&DAT_000132c3,uVar1);
 uVar1 = param_pthread_join();
 printf(&DAT_000132df,uVar1);
 uVar1 = param_mutex_lock(4,1000);
 printf(&DAT_000132fc,uVar1);
 uVar1 = param_condition_variable();
 printf(&DAT_00013318,uVar1);
 uVar1 = param_atomic_ops(4,500);
 printf(&DAT_00013334,uVar1);
 uVar1 = param_thread_local_storage(4);
 printf(&DAT_00013350,uVar1);
 return;
}

// Function: main @ 0x12c45
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x12c70
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x12cbc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

