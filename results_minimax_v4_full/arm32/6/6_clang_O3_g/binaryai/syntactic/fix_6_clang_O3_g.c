/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* Use standard size_t from stddef.h - don't redefine */
typedef unsigned long uintptr_t;
/* intptr_t is defined in stdint.h - use standard definition */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;

/* Include standard headers for external functions */
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <semaphore.h>

/* Define missing types */
typedef unsigned int socklen_t;
typedef int key_t;
typedef unsigned char byte;
typedef int bool;
#define true 1
#define false 0
typedef long long longlong;
typedef unsigned long long ulonglong;

/* Forward declaration for signal_handler */
void signal_handler(unsigned int param_1);

/* Define global variables referenced in code */
char completed_0 = 0;
void *__dso_handle = 0;
char stack0x00000004[8];
int signal_received = 0;
int signal_number = 0;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int shared_counter = 0;
char ready = 0;
int data = 0;
int atomic_counter = 0;

/* Define data arrays referenced in code */
unsigned char DAT_00012b00[] = {0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x57, 0x6f, 0x72, 0x6c, 0x64, 0x21};  // "Hello World!"
unsigned char DAT_00012b0c[] = {0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x57, 0x6f, 0x72, 0x6c, 0x64, 0x21};  // "Hello World!"
char DAT_00012b2d[] = "TestName";
char DAT_00012b7b[] = "strlen: %zu\n";
char DAT_00012b96[] = "strcmp: %d\n";
char DAT_00012bb1[] = "memcmp (diff): %d\n";
char DAT_00012bcd[] = "memcmp (same): %d\n";
char DAT_00012be9[] = "memcmp (combined): %d\n";
char DAT_00012c05[] = "printf return: %d\n";
char DAT_00012c21[] = "sscanf result: %d\n";
char DAT_00012c3e[] = "fileno: 0x%x\n";
char DAT_00012c5a[] = "fread/fwrite: 0x%x\n";
char DAT_00012c76[] = "malloc/free: 0x%x\n";
char DAT_00012c92[] = "memset: %d\n";
char DAT_00012cad[] = "strchr/strstr: %d\n";
char DAT_00012cef[] = "syscall open: 0x%x\n";
char DAT_00012d0b[] = "stat: 0x%x\n";
char DAT_00012d27[] = "fork/exec: 0x%x\n";
char DAT_00012d43[] = "pipe: 0x%x\n";
char DAT_00012d5f[] = "socket: 0x%x\n";
char DAT_00012d7b[] = "shm: 0x%x\n";
char DAT_00012d97[] = "signal: 0x%x\n";
char DAT_00012dbd[] = "thread_compute: %u\n";
char DAT_00012dd9[] = "pthread_join: %d\n";
char DAT_00012df6[] = "mutex_lock: 0x%x\n";
char DAT_00012e12[] = "cond_var: 0x%x\n";
char DAT_00012e2e[] = "atomic_ops: 0x%x\n";
char DAT_00012e4a[] = "tls: 0x%x\n";
char DAT_00012e66[] = "Running standard library tests...";
char DAT_00012e8a[] = "Testing system calls...";
char DAT_00012ea5[] = "Testing thread concurrency...";

/* Forward declarations */
unsigned int main(void);

// Decompiled by BinaryAI
// SHA256: da1939fa1df107d4002a062fec60db2a7eb1fd8d83b232f4a7fcc9b46ecbdf68

// Function: _init @ 0x10c3c
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x10c5c
// pthread_mutex_unlock is declared in pthread.h

// Function: <EXTERNAL>::raise @ 0x10c74
int raise(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: __libc_start_main @ 0x10c8c
int __libc_start_main(int (*main)(void), void *arg, void *stack, void (*exit_func)(int), void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::__cxa_finalize @ 0x10c80
void __cxa_finalize(void *);

// Function: <EXTERNAL>::read @ 0x10cc8
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 ssize_t sVar1;
 sVar1 = read(__fd,__buf,__nbytes);
 return sVar1;
}

// Function: <EXTERNAL>::free @ 0x10cd4
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x10ce0
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_lock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::_exit @ 0x10cec
void _exit(int __status)
{
 _exit(__status);
}

// Function: <EXTERNAL>::memcpy @ 0x10cf8
// memcpy is declared in string.h

// Function: <EXTERNAL>::__atomic_fetch_add_4 @ 0x10d04
int __atomic_fetch_add_4(int *ptr, int val, int model)
{
 return __atomic_fetch_add_4(ptr, val, model);
}
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::memcmp @ 0x10d28
// memcmp is declared in string.h

// Function: <EXTERNAL>::sleep @ 0x10d34
uint sleep(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x10d40
void rewind(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::alarm @ 0x10d4c
uint alarm(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::unlink @ 0x10d58
// unlink is declared in unistd.h

// Function: <EXTERNAL>::wait @ 0x10d64
// wait is declared in sys/wait.h

// Function: <EXTERNAL>::shmat @ 0x10d70
// shmat is declared in sys/shm.h

// Function: <EXTERNAL>::fwrite @ 0x10d7c
// fwrite is declared in stdio.h

// Function: <EXTERNAL>::usleep @ 0x10d88
int usleep(__useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x10d94
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::strcpy @ 0x10da0
// strcpy is declared in string.h

// Function: <EXTERNAL>::fread @ 0x10dac
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 size_t sVar1;
 sVar1 = fread(__ptr,__size,__n,__stream);
 return sVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x10db8
int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf)
{
 int iVar1;
 iVar1 = shmctl(__shmid,__cmd,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10dc4
// puts is declared in stdio.h

// Function: <EXTERNAL>::malloc @ 0x10dd0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__atomic_load_4 @ 0x10ddc
void __atomic_load_4(void)
{
 __atomic_load_4();
 return;
}

// Function: <EXTERNAL>::stat @ 0x10df4
// stat is declared in sys/stat.h

// Function: <EXTERNAL>::open @ 0x10e00
// open is declared in fcntl.h

// Function: <EXTERNAL>::syscall @ 0x10e0c
// syscall is declared in unistd.h with variadic arguments

// Function: <EXTERNAL>::bcmp @ 0x10e18
// bcmp is declared in string.h on some systems

// Function: <EXTERNAL>::strlen @ 0x10e24
// strlen is declared in string.h

// Function: <EXTERNAL>::strchr @ 0x10e30
// strchr is declared in string.h

// Function: <EXTERNAL>::__atomic_compare_exchange_4 @ 0x10e3c
void __atomic_compare_exchange_4(void)
{
 __atomic_compare_exchange_4();
 return;
}

// Function: <EXTERNAL>::__errno_location @ 0x10e48
int * __errno_location(void)
{
 int *piVar1;
 piVar1 = __errno_location();
 return piVar1;
}

// Function: <EXTERNAL>::snprintf @ 0x10e54
// snprintf is declared in stdio.h

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x10e60
void __isoc99_sscanf(void)
{
 __isoc99_sscanf();
 return;
}

// Function: <EXTERNAL>::bind @ 0x10e6c
// bind is declared in sys/socket.h

// Function: <EXTERNAL>::memset @ 0x10e78
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10e84
// strncpy is declared in string.h

// Function: <EXTERNAL>::write @ 0x10e90
// write is declared in unistd.h

// Function: <EXTERNAL>::fileno @ 0x10e9c
int fileno(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x10ea8
// shmdt is declared in sys/shm.h

// Function: <EXTERNAL>::fclose @ 0x10eb4
int fclose(FILE *__stream)
{
 int iVar1;
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x10ec0
int pipe(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

/* Define pthread routine type */
typedef void *(*__start_routine)(void *);

// Function: <EXTERNAL>::pthread_create @ 0x10ecc
// pthread_create is declared in pthread.h

// Function: <EXTERNAL>::fork @ 0x10ed8
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::execl @ 0x10ee4
// execl is declared in unistd.h

// Function: <EXTERNAL>::listen @ 0x10ef0
int listen(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::ftok @ 0x10efc
key_t ftok(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::__atomic_store_4 @ 0x10f08
void __atomic_store_4(void)
{
 __atomic_store_4();
 return;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x10f14
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::socket @ 0x10f20
int socket(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x10f2c
int pthread_join(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x10f38
int pthread_cancel(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x10f44
int pthread_cond_signal(pthread_cond_t *__cond)
{
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10f50
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::close @ 0x10f5c
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: _start @ 0x10f70
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10fb4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10fd8
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1101c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1106c
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: param_strcpy @ 0x110d8
void param_strcpy(char *param_1,char *param_2)
{
 char *__s;
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}

// Function: call_strcpy @ 0x110e8
void call_strcpy(void)
{
 unsigned int local_28;
 unsigned int local_24;
 char local_20;
 local_20 = 0;
 local_24 = 0x62694c6f;
 local_28 = 0x6c6c6548;
 strlen((char *)&local_28);
 return;
}

// Function: param_strcmp @ 0x11124
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x1114c
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11154
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11158
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11160
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11178
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11180
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x111a8
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_00012b0c,&DAT_00012b00,0xc);
 iVar3 = iVar1;
 if (iVar1 != 0) {
 iVar3 = -1;
 }
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar2 = memcmp(&DAT_00012b0c,&DAT_00012b0c,0xc);
 iVar1 = iVar2;
 if (iVar2 != 0) {
 iVar1 = -1;
 }
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1 + iVar3;
}

// Function: param_printf @ 0x11218
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x11230
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00012b2d);
 return;
}

// Function: param_scanf @ 0x11250
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: call_scanf @ 0x11294
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x112e4
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int iVar1;
 __stream = fopen(param_1,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
}

// Function: call_fopen_fclose @ 0x11328
unsigned int call_fopen_fclose(void)
{
 FILE *__stream;
 int iVar1;
 unsigned int uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar2 = 0x2a;
 }
 return uVar2;
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x11380
unsigned int param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 char auStack_38 [32];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 return 0xffffffff;
 }
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(auStack_38,1,0x12,__s);
 auStack_38[sVar1] = 0;
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 iVar3 = bcmp(auStack_38,"BinBench Test Data",0x13);
 uVar2 = 0xfffffffd;
 if (iVar3 == 0) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
 }
 fclose(__s);
 return 0xfffffffe;
}

// Function: call_fread_fwrite @ 0x11470
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11480
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 int unaff_r5;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr != (int *)0x0) {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 iVar3 = param_1;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 iVar3 = iVar3 + -1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0);
 unaff_r5 = *__ptr;
 }
 iVar3 = __ptr[param_1 + -1];
 free(__ptr);
 return iVar3 + unaff_r5;
 }
 return -1;
}

// Function: call_malloc_free @ 0x114e4
unsigned int call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x114ec
int param_memset(byte *param_1,size_t param_2)
{
 int iVar1;
 iVar1 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar1 = 0;
 do {
 param_2 = param_2 - 1;
 iVar1 = iVar1 + (uint)*param_1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: call_memset @ 0x11530
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x11538
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 int iVar2;
 int iVar3;
 pcVar1 = strchr(param_1,param_2);
 iVar3 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar2 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar3;
}

// Function: call_strchr_strstr @ 0x11578
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11580
void test_standard_library_functions(void)
{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 unsigned int uVar4;
 int iVar5;
 int local_34;
 unsigned int local_30;
 char local_2c;
 int local_14;
 puts(&DAT_00012e66);
 local_2c = 0;
 local_30 = 0x62694c6f;
 local_34 = 0x6c6c6548;
 sVar1 = strlen((char *)&local_34);
 printf(&DAT_00012b7b,sVar1);
 printf(&DAT_00012b96,0);
 printf(&DAT_00012bb1,0xc);
 printf(&DAT_00012bcd,0x5a);
 iVar2 = memcmp(&DAT_00012b0c,&DAT_00012b00,0xc);
 iVar5 = iVar2;
 if (iVar2 != 0) {
 iVar5 = -1;
 }
 if (0 < iVar2) {
 iVar5 = 1;
 }
 iVar3 = memcmp(&DAT_00012b0c,&DAT_00012b0c,0xc);
 iVar2 = iVar3;
 if (iVar3 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar3) {
 iVar2 = 1;
 }
 printf(&DAT_00012be9,iVar2 + iVar5);
 iVar5 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00012b2d);
 printf(&DAT_00012c05,iVar5);
 iVar5 = __isoc99_sscanf("123,456","%d,%d",&local_34,&local_14);
 iVar2 = -1;
 uVar4 = 0xffffffff;
 if (iVar5 == 2) {
 iVar2 = local_14 + local_34;
 }
 printf(&DAT_00012c21,iVar2);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar5 = fileno(__stream);
 fclose(__stream);
 uVar4 = 0xffffffff;
 if (iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1)) {
 uVar4 = 0x2a;
 }
 }
 printf(&DAT_00012c3e,uVar4);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00012c5a,uVar4);
 printf(&DAT_00012c76,0x5a);
 printf(&DAT_00012c92,0);
 printf(&DAT_00012cad,0xf);
 return;
}

// Function: param_linux_syscall @ 0x117c8
long param_linux_syscall(unsigned int param_1)
{
 long lVar1;
 int *piVar2;
 lVar1 = syscall(5,param_1,0);
 if (lVar1 != -1 && lVar1 + 1 < 0 == SCARRY4(lVar1,1)) {
 syscall(6,lVar1);
 return lVar1;
 }
 piVar2 = __errno_location();
 return -*piVar2;
}

// Function: call_linux_syscall @ 0x11818
unsigned int call_linux_syscall(void)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 uVar3 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar3 = 0x2a;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x11870
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_60;
 iVar1 = stat(param_1,&sStack_60);
 uVar2 = 0xfffffffe;
 if (0 < sStack_60.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x118a8
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_60;
 iVar1 = stat("/etc/passwd",&sStack_60);
 uVar2 = 0xfffffffe;
 if (0 < sStack_60.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x118ec
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_14;
 _Var1 = fork();
 if (_Var1 < 0) {
 return 0xffffffff;
 }
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 return 0xfffffffe;
 }
 uVar2 = 0xfffffffd;
 if ((local_14 & 0x7f) == 0) {
 uVar2 = local_14 >> 8 & 0xff;
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x1197c
unsigned int call_fork_exec(void)
{
 __pid_t _Var1;
 unsigned int uVar2;
 uint local_c;
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 uVar2 = 0xffffffff;
 if ((local_c & 0xff00) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
 }
 }
 return 0xffffffff;
}

// Function: param_pipe_communication @ 0x11a08
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 char auStack_38 [32];
 int local_18;
 int local_14;
 iVar1 = pipe(&local_18);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(local_14);
 sVar3 = read(local_18,auStack_38,0x1f);
 auStack_38[sVar3] = 0;
 close(local_18);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 return uVar4;
 }
 close(local_18);
 write(local_14,"HelloPipe",9);
 close(local_14);
 _exit(0);
 }
 return 0xfffffffe;
}

// Function: param_socket_create @ 0x11ad4
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 sockaddr local_24;
 unsigned int local_14;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 return 0xffffffff;
 }
 local_14 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_14,4);
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 local_24.sa_family = 2;
 local_24.sa_data[0] = '\0';
 local_24.sa_data[1] = '\0';
 local_24.sa_data[10] = '\0';
 local_24.sa_data[11] = '\0';
 local_24.sa_data[12] = '\0';
 local_24.sa_data[13] = '\0';
 local_24.sa_data[6] = '\0';
 local_24.sa_data[7] = '\0';
 local_24.sa_data[8] = '\0';
 local_24.sa_data[9] = '\0';
 local_24.sa_data[2] = '\0';
 local_24.sa_data[3] = '\0';
 local_24.sa_data[4] = '\0';
 local_24.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_24,0x10);
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xfffffffc;
 }
 return uVar2;
 }
 close(__fd);
 return 0xfffffffd;
 }
 close(__fd);
 return 0xfffffffe;
}

// Function: param_shmget_shmat @ 0x11bc8
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
 if (-1 < iVar1) {
 __s = (char *)shmat(iVar1,(void *)0x0,0);
 if (__s != (char *)0xffffffff) {
 memcpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return sVar2;
 }
 return 0xfffffffd;
 }
 sVar2 = 0xfffffffe;
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x11cac
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x11ccc
unsigned int param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned int uVar2;
 int iVar3;
 bool bVar4;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 return 0xffffffff;
 }
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 return 0xfffffffe;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar3 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar4 = iVar3 != 0;
 iVar3 = iVar3 + -1;
 } while (bVar4 && iVar3 != 0);
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 uVar2 = 0xfffffffc;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar3 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar4 = iVar3 != 0;
 iVar3 = iVar3 + -1;
 } while (bVar4 && iVar3 != 0);
 }
 uVar2 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: signal_handler @ 0x11e00
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x11e20
void test_system_calls(void)
{
 int iVar1;
 int *piVar2;
 __pid_t _Var3;
 unsigned int uVar4;
 unsigned int uVar5;
 stat local_68;
 puts(&DAT_00012e8a);
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 uVar4 = 0xffffffff;
 uVar5 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar4 = 0x2a;
 }
 printf(&DAT_00012cef,uVar4);
 iVar1 = stat("/etc/passwd",&local_68);
 uVar4 = 0xfffffffe;
 if (0 < local_68.st_size) {
 uVar4 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar4 = 0xffffffff;
 }
 printf(&DAT_00012d0b,uVar4);
 _Var3 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,(int *)&local_68,0);
 if ((_Var3 < 0) || (((uint)local_68.st_dev & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = 0xffffffff;
 if (((uint)local_68.st_dev & 0xff00) == 0) {
 uVar4 = 0x2a;
 }
 }
 }
 printf(&DAT_00012d27,uVar4);
 uVar4 = param_pipe_communication();
 printf(&DAT_00012d43,uVar4);
 uVar4 = param_socket_create();
 printf(&DAT_00012d5f,uVar4);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00012d7b,uVar5);
 uVar4 = param_signal_handling();
 printf(&DAT_00012d97,uVar4);
 return;
}

// Function: thread_compute @ 0x11fc4
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: param_pthread_create @ 0x11fe4
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = param_1;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 return uVar2;
}

// Function: call_pthread_create @ 0x12050
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 return uVar2;
}

// Function: thread_sum @ 0x120c0
unsigned int thread_sum(uint *param_1)
{
 longlong lVar1;
 uint uVar2;
 uint uVar3;
 param_1[2] = 0;
 uVar2 = *param_1;
 uVar3 = param_1[1];
 if ((int)uVar2 <= (int)uVar3) {
 lVar1 = (ulonglong)(uVar3 - uVar2) * (ulonglong)(uVar3 + ~uVar2);
 param_1[2] = (uVar3 - uVar2) * (uVar2 + 1) + uVar2 +
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x12110
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 unsigned int local_40;
 unsigned int local_3c;
 int local_38;
 unsigned int local_34;
 unsigned int local_30;
 int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 pthread_t local_1c;
 pthread_t local_18;
 pthread_t local_14;
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
 iVar2 = pthread_join(local_1c,(void **)0x0);
 iVar1 = local_38;
 iVar4 = -2;
 if ((iVar2 == 0) && (iVar3 = pthread_join(local_18,(void **)0x0), iVar2 = local_2c, iVar3 == 0))
 {
 iVar3 = pthread_join(local_14,(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = local_20 + iVar2 + iVar1;
 }
 return iVar4;
 }
 }
 return iVar4;
}

// Function: thread_increment @ 0x12244
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

// Function: param_mutex_lock @ 0x1229c
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 shared_counter = 0;
 if (0 < param_1) {
 iVar3 = param_1;
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar4 = ppVar4 + 1;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 ppVar4 = __ptr;
 iVar3 = param_1;
 if (0 < param_1) {
 do {
 pthread_join(*ppVar4,(void **)0x0);
 iVar3 = iVar3 + -1;
 ppVar4 = ppVar4 + 1;
 } while (iVar3 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == local_24 * param_1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12394
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x123a0
void consumer_thread(void)
{
 uint *puVar1;
 uint uVar2;
 pthread_mutex_lock(&cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = (uint)data;
 pthread_mutex_unlock(&cond_mutex);
 if (uVar2 != 0) {
 uVar2 = 0x2a;
 }
 puVar1 = (uint *)malloc(4);
 *puVar1 = uVar2;
 return;
}

// Function: producer_thread @ 0x1240c
unsigned int producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x12458
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 pthread_t local_10;
 pthread_t local_c;
 data = 0;
 ready = 0;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 != 0) {
 return 0xffffffff;
 }
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 != 0) {
 pthread_cancel(local_10);
 return 0xfffffffe;
 }
 pthread_join(local_10,&local_14);
 pthread_join(local_c,(void **)0x0);
 uVar2 = *local_14;
 free(local_14);
 return uVar2;
}

// Function: thread_atomic_increment @ 0x12528
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 int local_1c;
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __atomic_fetch_add_4(&atomic_counter,1,5);
 local_1c = iVar2;
 __atomic_compare_exchange_4(&atomic_counter,&local_1c,iVar2 + 1000,5,5);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x1259c
unsigned int thread_atomic_load_store(void)
{
 int iVar1;
 iVar1 = __atomic_load_4(&atomic_counter,5);
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return 0;
}

// Function: param_atomic_ops @ 0x125d4
unsigned int param_atomic_ops(int param_1,unsigned int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 pthread_t *ppVar3;
 int iVar4;
 pthread_t local_28;
 unsigned int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 __atomic_store_4(&atomic_counter,0,5);
 if (0 < param_1) {
 ppVar3 = __ptr;
 iVar4 = param_1;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar3 = ppVar3 + 1;
 iVar4 = iVar4 + -1;
 } while (iVar4 != 0);
 }
 iVar4 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar4 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 ppVar3 = __ptr;
 if (0 < param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 param_1 = param_1 + -1;
 ppVar3 = ppVar3 + 1;
 } while (param_1 != 0);
 }
 iVar4 = __atomic_load_4(&atomic_counter,5);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar4) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x12708
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x12714
void thread_tls_test(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 unsigned long long uVar6;
 iVar3 = 8;
 uVar6 = __aeabi_read_tp(param_1,param_1);
 iVar1 = (int)uVar6;
 iVar4 = *(int *)(iVar1 + iVar3);
 iVar5 = iVar4 + 0x32;
 *(int *)(iVar1 + iVar3) = iVar5;
 strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar6 >> 0x20),0x1f);
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar4;
 piVar2[1] = iVar5;
 return;
}

// Function: param_thread_local_storage @ 0x1275c
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void **__ptr_00;
 char *__s;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 uint uVar5;
 void **ppvVar6;
 int iVar7;
 uint uVar8;
 int *local_28;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 __ptr_00 = (void **)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void **)0x0) {
 return 0xffffffff;
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[iVar3] = __s;
 snprintf(__s,0x10,"Thread-%d",iVar3);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 if (0 < param_1) {
 iVar3 = 0;
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[iVar3]);
 if (iVar1 != 0) {
 iVar1 = 0;
 do {
 free(__ptr_00[iVar1]);
 iVar1 = iVar1 + 1;
 } while (iVar3 + 1 != iVar1);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + 1;
 ppVar4 = ppVar4 + 1;
 } while (param_1 != iVar3);
 if (0 < param_1) {
 uVar8 = 0;
 uVar5 = 0;
 ppVar4 = __ptr;
 ppvVar6 = __ptr_00;
 iVar3 = param_1;
 do {
 pthread_join(*ppVar4,&local_28);
 iVar1 = *local_28;
 iVar7 = local_28[1];
 free(local_28);
 free(*ppvVar6);
 uVar8 = iVar7 + uVar8;
 uVar5 = iVar1 + uVar5;
 iVar3 = iVar3 + -1;
 ppVar4 = ppVar4 + 1;
 ppvVar6 = ppvVar6 + 1;
 } while (iVar3 != 0);
 goto LAB_00012884;
 }
 }
 }
 uVar5 = 0;
 uVar8 = 0;
LAB_00012884:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((uVar5 ^ param_1 * 100 | uVar8 ^ param_1 * 0x96) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x1290c
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x12914
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 puts(&DAT_00012ea5);
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 printf(&DAT_00012dbd,uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_00012dd9,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_00012df6,uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_00012e12,uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_00012e2e,uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00012e4a,uVar2);
 return;
}

// Function: main @ 0x12a20
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x12a48
void _fini(void)
{
 return;
}

