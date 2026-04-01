/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <stdarg.h>
#include <sys/io.h>

/* Type definitions */
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef void *(*__start_routine)(void *);
/* pthread_t and pthread_attr_t come from <pthread.h> */
typedef unsigned char byte;
/* socklen_t comes from <sys/socket.h> */
/* key_t comes from <sys/ipc.h> */
/* va_list comes from <stdarg.h> */
/* FILE comes from <stdio.h> */
/* pthread_mutex_t and pthread_cond_t come from <pthread.h> */
/* struct stat comes from <sys/stat.h> */
/* struct shmid_ds comes from <sys/shm.h> */
/* struct sockaddr comes from <sys/socket.h> */

/* Forward declarations for functions that are defined later */
void signal_handler(int param_1);
void * thread_compute(void *param_1);
void * thread_sum(void *param_1);
void * thread_increment(void *param_1);
void * consumer_thread(void *param_1);
void * producer_thread(void *param_1);
void * thread_atomic_increment(void *param_1);
void * thread_atomic_load_store(void *param_1);
void * thread_tls_test(void *param_1);
unsigned int param_signal_handling(void);
int main(void);

/* TLS initialization function */
int init_thread_local_storage(void);

/* Missing function declarations */
void __x86_get_pc_thunk_di(void);
void __do_global_ctors_aux(void);



/* Lock/Unlock functions */
void LOCK(void);
void UNLOCK(void);

/* Simple lock implementation */
static volatile int lock_var = 0;
void LOCK(void)
{
    while (__sync_lock_test_and_set(&lock_var, 1)) {
        usleep(1);
    }
}
void UNLOCK(void)
{
    __sync_lock_release(&lock_var);
}

/* Global variables */
volatile int signal_received = 0;
volatile int signal_number = 0;

/* TLS initialization flag and key */
static int tls_initialized = 0;
static pthread_mutex_t tls_init_mutex = PTHREAD_MUTEX_INITIALIZER;

pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int data = 0;
int ready = 0;
int atomic_counter = 0;
int stack0x00000004 = 0;
int stack0x00000008 = 100;
pthread_key_t tls_key;

/* Thread-local storage structure */
typedef struct {
    int offset;
    char data[32];
} tls_data_t;

/* String data */
char DAT_00014011[] = "string1";
char DAT_00014015[] = "string2";
char DAT_00014019[] = "equal";
char DAT_0001401d[] = "abc";
char DAT_00014021[] = "def";
char DAT_000140aa[] = "Testing Standard Library Functions...\n";
char DAT_000140cf[] = "strcpy: %u\n";
char DAT_000140ea[] = "strcmp: %u\n";
char DAT_00014105[] = "strlen: %u\n";
char DAT_00014121[] = "memcpy: %u\n";
char DAT_0001413d[] = "memcmp: %u\n";
char DAT_00014159[] = "printf: %u\n";
char DAT_00014175[] = "scanf: %u\n";
char DAT_00014192[] = "fopen_fclose: %u\n";
char DAT_000141ae[] = "fread_fwrite: %u\n";
char DAT_000141ca[] = "malloc_free: %u\n";
char DAT_000141e6[] = "memset: %u\n";
char DAT_00014201[] = "strchr_strstr: %u\n";
char DAT_00014250[] = "Testing System Calls...\n";
char DAT_0001426c[] = "linux_syscall: %u\n";
char DAT_00014288[] = "win32_api: %u\n";
char DAT_000142a4[] = "fork_exec: %u\n";
char DAT_000142c0[] = "pipe_communication: %u\n";
char DAT_000142dc[] = "socket_create: %u\n";
char DAT_000142f8[] = "shmget_shmat: %u\n";
char DAT_00014314[] = "signal_handling: %u\n";
char DAT_0001433a[] = "Testing Thread Concurrency...\n";
char DAT_00014359[] = "pthread_create: %u\n";
char DAT_00014375[] = "pthread_join: %u\n";
char DAT_00014392[] = "mutex_lock: %u\n";
char DAT_000143ae[] = "condition_variable: %u\n";
char DAT_000143ca[] = "atomic_ops: %u\n";
char DAT_000143e6[] = "thread_local_storage: %u\n";
char DAT_00014404[] = "Test data for memcpy";

// Decompiled by BinaryAI
// SHA256: 2ed314daa5878b1c670ed94c2d74ed1dcff14e01bfa4750effd14968f9687a3d



// Function: <EXTERNAL>::__libc_start_main @ 0x11090
int __libc_start_main(int (*main)(int,char **,char **),int argc,char **argv,
                      int (*init)(void),void (*fini)(void),void (*rtld_fini)(void),void *stack_end)
{
    (void)main; (void)argc; (void)argv; (void)init; (void)fini; (void)rtld_fini; (void)stack_end;
    return 0;
}

// Function: <EXTERNAL>::htons @ 0x11180
uint16_t htons(uint16_t __hostshort)
{
 return ((uint16_t)(__hostshort >> 8) | (uint16_t)(__hostshort << 8));
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x112a0
int __isoc99_sscanf(char *__s,char *__format,...)
{
 (void)__s; (void)__format;
 return 0;
}

// Function: <EXTERNAL>::pthread_create @ 0x113d0
int pthread_create(pthread_t *__restrict __newthread,
                   const pthread_attr_t *__restrict __attr,
                   void *(*__start_routine)(void *),
                   void *__restrict __arg)
{
 (void)__newthread; (void)__attr; (void)__start_routine; (void)__arg;
 return 0;
}

// Function: <EXTERNAL>::pthread_join @ 0x113e0
int pthread_join(pthread_t __th, void **__thread_return)
{
 (void)__th; (void)__thread_return;
 return 0;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x113f0
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x11400
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x11410
int pthread_cond_wait(pthread_cond_t *__cond, pthread_mutex_t *__mutex)
{
 return __pthread_cond_wait(__cond, __mutex);
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x11420
int pthread_cond_signal(pthread_cond_t *__cond)
{
 return __pthread_cond_signal(__cond);
}

/* Stubs for internal pthread functions */
int __pthread_cond_wait(pthread_cond_t *__cond, pthread_mutex_t *__mutex)
{
    (void)__cond; (void)__mutex;
    return 0;
}

int __pthread_cond_signal(pthread_cond_t *__cond)
{
    (void)__cond;
    return 0;
}

// Function: FUN_000113d0 @ 0x113d0
void FUN_000113d0(void)
{
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x1140c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11410
void __x86_get_pc_thunk_bx(void)
{
 return;
}





// Function: __x86.get_pc_thunk.di @ 0x1154d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_strcpy @ 0x11560
int *param_strcpy(char *param_1,char *param_2)
{
	int *piVar1;
	strcpy(param_1,param_2);
	strlen(param_1);
	piVar1 = (int *)malloc(4);
	*piVar1 = 0x2a;
	return piVar1;
}

// Function: call_strcpy @ 0x115b0
unsigned int call_strcpy(void)
{
 unsigned int uVar1;
 int *piVar2;
 char local_28 [32];
 piVar2 = param_strcpy(local_28,"HelloLib");
 uVar1 = *(unsigned int *)piVar2;
 free(piVar2);
 return uVar1;
}

// Function: param_strcmp @ 0x115f0
unsigned int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 unsigned int local_10;
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

// Function: call_strcmp @ 0x11660
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00014011,&DAT_00014015);
 iVar2 = param_strcmp(&DAT_00014019,&DAT_00014019);
 iVar3 = param_strcmp(&DAT_0001401d,&DAT_00014021);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x116e0
size_t param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1;
}

// Function: call_strlen @ 0x11710
unsigned int call_strlen(void)
{
 param_strlen("BinBench2025");
 return 0x2a;
}

// Function: param_memcpy @ 0x11740
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11780
int call_memcpy(void)
{
 int local_30 [2];
 int local_28;
 int local_20;
 char local_1c [20];
 memcpy(local_1c,&DAT_00014404,0x14);
 memset(local_30,0,0x14);
 param_memcpy(local_30,local_1c,0x14);
 return local_30[0] + local_28 + local_20;
}

// Function: param_memcmp @ 0x11800
unsigned int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int local_14;
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

// Function: call_memcmp @ 0x11870
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
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

// Function: param_printf @ 0x11920
int param_printf(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x11970
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,"Test");
 return uVar1;
}

// Function: param_scanf @ 0x119b0
int param_scanf(char *param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 int local_10;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_18);
 if (iVar1 == 2) {
 local_10 = local_14 + local_18;
 }
 else {
 local_10 = -1;
 }
 return local_10;
}

// Function: call_scanf @ 0x11a20
unsigned int call_scanf(void)
{
 param_scanf("123,456");
 return 0x2a;
}

// Function: param_fopen_fclose @ 0x11a50
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

// Function: call_fopen_fclose @ 0x11ad0
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x11b10
unsigned int param_fread_fwrite(char *param_1)
{
 char *__ptr;
 FILE *__s;
 size_t sVar1;
 size_t sVar2;
 int iVar3;
 bool bVar4;
 char local_30 [32];
 char *local_10;
 unsigned int local_c;
 local_10 = "BinBench Test Data";
 __s = fopen(param_1,"w+");
 __ptr = local_10;
 if (__s == (FILE *)0x0) {
 local_c = 0xffffffff;
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

// Function: call_fread_fwrite @ 0x11c80
unsigned int call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return 0x2a;
}

// Function: param_malloc_free @ 0x11cb0
int param_malloc_free(uint param_1)
{
 int *__ptr;
 uint local_14;
 int local_c;
 __ptr = (int *)malloc(param_1 << 2);
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

// Function: call_malloc_free @ 0x11d60
unsigned int call_malloc_free(void)
{
 param_malloc_free(10);
 return 0x2a;
}

// Function: param_memset @ 0x11d90
int param_memset(void *param_1,uint param_2)
{
 uint local_14;
 int local_10;
 memset(param_1,0,param_2);
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = (uint)*(byte *)((int)param_1 + local_14) + local_10;
 }
 return local_10;
}

// Function: call_memset @ 0x11e10
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

// Function: param_strchr_strstr @ 0x11e80
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 char *pcVar1;
 int local_24;
 int local_20;
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

// Function: call_strchr_strstr @ 0x11f40
unsigned int call_strchr_strstr(void)
{
 unsigned int uVar1;
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}

// Function: test_standard_library_functions @ 0x11f90
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 printf(&DAT_000140aa);
 uVar1 = call_strcpy();
 printf(&DAT_000140cf,uVar1);
 uVar1 = call_strcmp();
 printf(&DAT_000140ea,uVar1);
 uVar1 = call_strlen();
 printf(&DAT_00014105,uVar1);
 uVar1 = call_memcpy();
 printf(&DAT_00014121,uVar1);
 uVar1 = call_memcmp();
 printf(&DAT_0001413d,uVar1);
 uVar1 = call_printf();
 printf(&DAT_00014159,uVar1);
 uVar1 = call_scanf();
 printf(&DAT_00014175,uVar1);
 uVar1 = call_fopen_fclose();
 printf(&DAT_00014192,uVar1);
 uVar1 = call_fread_fwrite();
 printf(&DAT_000141ae,uVar1);
 uVar1 = call_malloc_free();
 printf(&DAT_000141ca,uVar1);
 uVar1 = call_memset();
 printf(&DAT_000141e6,uVar1);
 uVar1 = call_strchr_strstr();
 printf(&DAT_00014201,uVar1);
 return;
}

// Function: param_linux_syscall @ 0x12120
int param_linux_syscall(unsigned int param_1)
{
 int *piVar1;
 unsigned int uVar2;
 int local_c;
 uVar2 = 0;
 local_c = syscall(5,param_1,0);
 if (local_c < 0) {
 piVar1 = __errno_location();
 local_c = -*piVar1;
 }
 else {
 syscall(6,local_c,uVar2);
 }
 return local_c;
}

// Function: call_linux_syscall @ 0x121a0
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x121e0
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 struct stat local_64;
 unsigned int local_c;
 iVar1 = stat(param_1,&local_64);
 if (iVar1 < 0) {
 local_c = 0xffffffff;
 }
 else {
 local_c = 0xfffffffe;
 if (0 < local_64.st_size) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_win32_api @ 0x12240
unsigned int call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return 0x2a;
}

// Function: param_fork_exec @ 0x12270
int param_fork_exec(char *param_1,unsigned int param_2)
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

// Function: call_fork_exec @ 0x12360
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x123b0
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 char local_34 [32];
 int local_14;
 int local_10;
 unsigned int local_c;
 iVar1 = pipe(&local_14);
 if (iVar1 < 0) {
 local_c = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 local_c = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_14);
 __n = strlen("HelloPipe");
 write(local_10,"HelloPipe",__n);
 close(local_10);
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

// Function: call_pipe_communication @ 0x124f0
unsigned int call_pipe_communication(void)
{
 return param_pipe_communication();
}

// Function: param_socket_create @ 0x12510
unsigned int param_socket_create(void)
{
 int iVar1;
 struct sockaddr local_24;
 unsigned int local_14;
 int local_10;
 unsigned int local_c;
 local_10 = socket(2,1,0);
 if (local_10 < 0) {
 local_c = 0xffffffff;
 }
 else {
 local_14 = 1;
 iVar1 = setsockopt(local_10,1,2,&local_14,4);
 if (iVar1 < 0) {
 close(local_10);
 local_c = 0xfffffffe;
 }
 else {
 memset(&local_24,0,0x10);
 local_24.sa_family = 2;
 *(uint16_t*)(local_24.sa_data) = htons(0);
 local_24.sa_data[2] = '\0';
 local_24.sa_data[3] = '\0';
 local_24.sa_data[4] = '\0';
 local_24.sa_data[5] = '\0';
 iVar1 = bind(local_10,&local_24,0x10);
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

// Function: call_socket_create @ 0x12690
unsigned int call_socket_create(void)
{
 return param_socket_create();
}

// Function: param_shmget_shmat @ 0x126b0
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
 __dest = (char *)shmat(iVar1,(void *)0x0,0);
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

// Function: call_shmget_shmat @ 0x12820
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

// Function: call_signal_handling @ 0x12840
unsigned int call_signal_handling(void)
{
 return param_signal_handling();
}

// Function: param_signal_handling @ 0x12860
unsigned int param_signal_handling(void)
{
 int iVar1;
 __sighandler_t p_Var2;
 int local_10;
 unsigned int local_c;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 local_c = 0xffffffff;
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

// Function: signal_handler @ 0x12a70
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}



// Function: test_system_calls @ 0x12ac0
void test_system_calls(void)
{
 unsigned int uVar1;
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

// Function: thread_compute @ 0x12bc0
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x12c10
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int *local_18;
 unsigned int local_14;
 pthread_t local_10;
 unsigned int local_c;
 local_14 = param_1;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_14);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)&local_18);
 local_c = *(unsigned int *)local_18;
 free((void *)local_18);
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_pthread_create @ 0x12cb0
unsigned int call_pthread_create(void)
{
 param_pthread_create(7);
 return 0x2a;
}

// Function: thread_sum @ 0x12ce0
void * thread_sum(void *param_1)
{
 int local_c;
 int *arr = (int *)param_1;
 arr[2] = 0;
 for (local_c = arr[0]; local_c <= arr[1]; local_c = local_c + 1) {
 arr[2] = local_c + arr[2];
 }
 return NULL;
}

// Function: param_pthread_join @ 0x12d40
int param_pthread_join(void)
{
 int iVar1;
 int local_48;
 int local_44;
 int local_40;
 int local_3c [4];
 unsigned int local_2c;
 unsigned int local_24;
 unsigned int local_20;
 pthread_t local_18 [4];
 memset(local_3c,0,0x24);
 local_3c[0] = 1;
 local_3c[1] = 10;
 local_3c[3] = 0xb;
 local_2c = 0x14;
 local_24 = 0x15;
 local_20 = 0x1e;
 for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
 iVar1 = pthread_create(local_18 + local_40, NULL, thread_sum,
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
 iVar1 = pthread_join(local_18[local_48], NULL);
 if (iVar1 != 0) break;
 local_44 = local_3c[local_48 * 3 + 2] + local_44;
 local_48 = local_48 + 1;
 }
 return -2;
}

// Function: call_pthread_join @ 0x12e90
int call_pthread_join(void)
{
 return param_pthread_join();
}

// Function: thread_increment @ 0x12f10
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

// Function: param_mutex_lock @ 0x12f40
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 int local_1c;
 int local_18;
 unsigned int local_10;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 local_10 = 0xffffffff;
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

// Function: call_mutex_lock @ 0x13090
unsigned int call_mutex_lock(void)
{
 unsigned int result = param_mutex_lock(4,1000);
 return result;
}

// Function: consumer_thread @ 0x13150
void * consumer_thread(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 (void)param_1;
 pthread_mutex_lock(&cond_mutex);
 while (ready == 0) {
	uVar1 = data;
	pthread_cond_wait(&cond,&cond_mutex);
 }
	pthread_mutex_unlock(&cond_mutex);
 uVar1 = data;
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x131b0
void * producer_thread(void *param_1)
{
 (void)param_1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}

// Function: param_condition_variable @ 0x131e0
unsigned int param_condition_variable(void)
{
	int iVar1;
	unsigned int *local_retval;
	pthread_t local_14;
	pthread_t local_10;
	unsigned int local_c;
	ready = 0;
	data = 0;
	iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
	if (iVar1 == 0) {
	iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
	if (iVar1 == 0) {
	pthread_join(local_14,(void **)&local_retval);
	pthread_join(local_10,(void **)0x0);
	local_c = *local_retval;
	free(local_retval);
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

// Function: call_condition_variable @ 0x132f0
unsigned int call_condition_variable(void)
{
 return param_condition_variable();
}

// Function: thread_atomic_increment @ 0x13340
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
 return NULL;
}

// Function: thread_atomic_load_store @ 0x133d0
void * thread_atomic_load_store(void *param_1)
{
 (void)param_1;
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return NULL;
}

// Function: param_atomic_ops @ 0x13400
unsigned int param_atomic_ops(int param_1)
{
 int iVar1;
 int local_20;
 pthread_t local_1c;
 int local_18;
 unsigned int local_14;
 void *local_10;
 unsigned int local_c;
 local_10 = malloc(param_1 << 2);
 if (local_10 == (void *)0x0) {
 local_c = 0xffffffff;
 }
 else {
 local_14 = 0;
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 iVar1 = pthread_create((pthread_t *)((int)local_10 + local_18 * 4),(pthread_attr_t *)0x0,
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
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 pthread_join(*(pthread_t *)((int)local_10 + local_20 * 4),(void **)0x0);
 }
 iVar1 = (int)atomic_counter;
 free(local_10);
 local_c = 0xfffffffd;
 if (0 < iVar1) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_atomic_ops @ 0x135a0
unsigned int call_atomic_ops(void)
{
 return param_atomic_ops(4);
}

/* TLS initialization function */
int init_thread_local_storage(void)
{
    if (tls_initialized) {
        return 0;
    }
    pthread_mutex_lock(&tls_init_mutex);
    if (!tls_initialized) {
        if (pthread_key_create(&tls_key, free) == 0) {
            tls_initialized = 1;
        } else {
            pthread_mutex_unlock(&tls_init_mutex);
            return -1;
        }
    }
    pthread_mutex_unlock(&tls_init_mutex);
    return 0;
}

// Function: thread_tls_test @ 0x13630
void * thread_tls_test(void *param_1)
{
 int iVar1;
 int *piVar2;
 char *str = (char *)param_1;
 tls_data_t *tls_data = (tls_data_t *)pthread_getspecific(tls_key);
 if (tls_data == NULL) {
     tls_data = (tls_data_t *)calloc(1, sizeof(tls_data_t));
     tls_data->offset = 0;
     pthread_setspecific(tls_key, tls_data);
 }
 iVar1 = tls_data->offset;
 tls_data->offset = tls_data->offset + 0x32;
 strncpy(tls_data->data, str, 0x1f);
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar1;
 piVar2[1] = tls_data->offset;
 return piVar2;
}

// Function: param_thread_local_storage @ 0x13660
unsigned int param_thread_local_storage(int param_1)
{
 void *pvVar1;
 int iVar2;
 int *local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 void *local_14;
 void *local_10;
 unsigned int local_c;
 local_10 = malloc(param_1 << 2);
 local_14 = malloc(param_1 << 2);
 if ((local_10 == (void *)0x0) || (local_14 == (void *)0x0)) {
 local_c = 0xffffffff;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 pvVar1 = malloc(0x10);
 *(void **)((int)local_14 + local_18 * 4) = pvVar1;
 snprintf(*(char **)((int)local_14 + local_18 * 4),0x10,"Thread-%d",local_18);
 }
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 iVar2 = pthread_create((pthread_t *)((int)local_10 + local_1c * 4),(pthread_attr_t *)0x0,
 thread_tls_test,*(void **)((int)local_14 + local_1c * 4));
 if (iVar2 != 0) {
 for (local_20 = 0; local_20 <= local_1c; local_20 = local_20 + 1) {
 free(*(void **)((int)local_14 + local_20 * 4));
 }
 free(local_14);
 free(local_10);
 return 0xfffffffe;
 }
 }
 local_24 = 0;
 local_28 = 0;
 for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
 pthread_join(*(pthread_t *)((int)local_10 + local_2c * 4),(void **)&local_30);
 local_24 = *(int *)local_30 + local_24;
 local_28 = ((int *)local_30)[1] + local_28;
 free((void *)local_30);
 free(*(void **)((int)local_14 + local_2c * 4));
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

// Function: call_thread_local_storage @ 0x138e0
unsigned int call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return 0x2a;
}

// Function: test_thread_concurrency @ 0x13910
void test_thread_concurrency(void)
{
 unsigned int uVar1;
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

// Function: main @ 0x139f0
int main(void)
{
 /* Initialize thread-local storage */
 init_thread_local_storage();
 
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x13a30
void __do_global_ctors_aux(void)
{
}



