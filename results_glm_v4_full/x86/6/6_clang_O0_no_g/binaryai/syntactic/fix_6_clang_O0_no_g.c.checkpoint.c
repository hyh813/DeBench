/* Auto-injected type definitions by preprocessor */
#define _POSIX_C_SOURCE 200809L
#define _DEFAULT_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <sys/syscall.h>
#include <stdatomic.h>
#include <stdarg.h>
#include <inttypes.h>

/* Standard integer types - using system header definitions */
typedef unsigned char byte;
#define true 1
#define false 0
typedef int bool;
#define SIG_ERR ((__sighandler_t)-1)

/* Forward declarations and type definitions */
#include <sys/stat.h>

/* pthread_mutex_t, pthread_cond_t, and pthread_t are already defined in pthread.h */
typedef void *(*__start_routine)(void *);
typedef unsigned int __useconds_t;

/* uint type for compatibility */
typedef uint32_t uint;

/* Global variable declarations */
extern int signal_received;
extern int signal_number;
extern pthread_mutex_t counter_mutex;
extern int shared_counter;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern int data;
extern int ready;
extern int atomic_counter;
extern int stack0x00000008;

/* Global variable definitions */
int signal_received = 0;
int signal_number = 0;
pthread_mutex_t counter_mutex;
int shared_counter = 0;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int data = 0;
int ready = 0;
int atomic_counter = 0;
int stack0x00000008 = 500;
int __in_gs_offset = 0;

/* Simple spinlock for atomic operations */
static volatile int __atomic_lock_var = 0;

void LOCK(void)
{
    while (__atomic_test_and_set(&__atomic_lock_var, __ATOMIC_ACQUIRE)) {
        /* Spin */
    }
}

void UNLOCK(void)
{
    __atomic_clear(&__atomic_lock_var, __ATOMIC_RELEASE);
}

/* Data references */
const char DAT_00014011[] = "abc";
const char DAT_00014015[] = "def";
const char DAT_00014019[] = "test";
const char DAT_0001401d[] = "hello";
const char DAT_00014021[] = "world";
const char DAT_00014404[20] = "BinBenchTestData123";
const char DAT_000140aa[] = "Testing strcpy...\n";
const char DAT_000140cf[] = "strcpy result: %u\n";
const char DAT_000140ea[] = "strcmp result: %u\n";
const char DAT_00014105[] = "strlen result: %u\n";
const char DAT_00014121[] = "memcpy result: %u\n";
const char DAT_0001413d[] = "memcmp result: %u\n";
const char DAT_00014159[] = "printf result: %u\n";
const char DAT_00014175[] = "scanf result: %u\n";
const char DAT_00014192[] = "fopen_fclose result: %u\n";
const char DAT_000141ae[] = "fread_fwrite result: %u\n";
const char DAT_000141ca[] = "malloc_free result: %u\n";
const char DAT_000141e6[] = "memset result: %u\n";
const char DAT_00014201[] = "strchr_strstr result: %u\n";
const char DAT_00014250[] = "Testing syscall...\n";
const char DAT_0001426c[] = "syscall result: %u\n";
const char DAT_00014288[] = "win32_api result: %u\n";
const char DAT_000142a4[] = "fork_exec result: %u\n";
const char DAT_000142c0[] = "pipe_communication result: %u\n";
const char DAT_000142dc[] = "socket_create result: %u\n";
const char DAT_000142f8[] = "shmget_shmat result: %u\n";
const char DAT_00014314[] = "signal_handling result: %u\n";
const char DAT_0001433a[] = "Testing thread concurrency...\n";
const char DAT_00014359[] = "pthread_create result: %u\n";
const char DAT_00014375[] = "pthread_join result: %u\n";
const char DAT_00014392[] = "mutex_lock result: %u\n";
const char DAT_000143ae[] = "condition_variable result: %u\n";
const char DAT_000143ca[] = "atomic_ops result: %u\n";
const char DAT_000143e6[] = "thread_local_storage result: %u\n";

/* Function prototypes */
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void signal_handler(int param_1);
int main(int argc, char **argv, char **envp);
void LOCK(void);
void UNLOCK(void);
uint16_t htons(uint16_t hostshort);
char *strncpy(char *dest, const char *src, size_t n);
typedef int (*main_func_t)(int, char **, char **);
void __libc_start_main(main_func_t main, int argc, char **argv, 
                       void (*init)(void), void (*fini)(void),
                       void (*rtld_fini)(void), void *stack_end);

/* Standard library function prototypes - these are in system headers */

/* pthread function prototypes */
int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_cancel(pthread_t thread);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_mutex_destroy(pthread_mutex_t *mutex);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_cond_destroy(pthread_cond_t *cond);

/* signal function - already declared in signal.h */



/* Thread-local storage helper */
int __get_thread_local_base(void);

// Decompiled by BinaryAI
// SHA256: fffd91e06b5443514b0a11e4ad99f817eaaf34385707bbb4c60551ddc286d3c8

// Function: __gmon_start__ @ 0x11000
void __gmon_start__(void)
{
 return;
}

// Function: frame_dummy @ 0x11010
void frame_dummy(void)
{
 return;
}

// Function: __get_thread_local_base @ 0x11020
int __get_thread_local_base(void)
{
 return 0;
}

// Function: _init @ 0x11000
void _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}



// Function: FUN_000113d0 @ 0x113d0
void FUN_000113d0(void *unaff_EBX)
{
 (*(void (*)(void))(*(void **)((int)unaff_EBX + -0x10)))();
 return;
}

// Function: _start @ 0x113e0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,&auStack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
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

// Function: deregister_tm_clones @ 0x11420
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11460
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x114b0
void __do_global_dtors_aux(void)
{
 deregister_tm_clones();
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11549
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1154d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_strcpy @ 0x11560
size_t param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 return strlen(param_1);
}

// Function: call_strcpy @ 0x115b0
unsigned int call_strcpy(void)
{
 char local_28 [32];
 return param_strcpy(local_28,"HelloLib");
}

// Function: param_strcmp @ 0x115f0
int param_strcmp(char *param_1,char *param_2)
{
 return strcmp(param_1,param_2);
}

// Function: call_strcmp @ 0x11660
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp((char *)&DAT_00014011,(char *)&DAT_00014015);
 iVar2 = param_strcmp((char *)&DAT_00014019,(char *)&DAT_00014019);
 iVar3 = param_strcmp((char *)&DAT_0001401d,(char *)&DAT_00014021);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x116e0
size_t param_strlen(char *param_1)
{
 return strlen(param_1);
}

// Function: call_strlen @ 0x11710
unsigned int call_strlen(void)
{
 return param_strlen("BinBench2025");
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
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 return memcmp(param_1,param_2,param_3);
}

// Function: call_memcmp @ 0x11870
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
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
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 int local_10;
 iVar1 = sscanf(param_1,"%d,%d",&local_14,&local_18);
 if (iVar1 == 2) {
 local_10 = local_14 + local_18;
 }
 else {
 local_10 = -1;
 }
 return local_10;
}

// Function: call_scanf @ 0x11a20
int call_scanf(void)
{
 return param_scanf("123,456");
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
 return param_fread_fwrite("/tmp/binbench_test.tmp");
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
 return param_malloc_free(10);
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
unsigned int call_memset(void)
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
long param_linux_syscall(const char *param_1)
{
 long local_c;
 local_c = (long)syscall(5,param_1,0);
 if (local_c < 0) {
 local_c = -errno;
 }
 else {
 (void)syscall(6,local_c,0);
 }
 return local_c;
}

// Function: call_linux_syscall @ 0x121a0
unsigned int call_linux_syscall(void)
{
 long iVar1;
 unsigned int uVar2;
 iVar1 = (long)param_linux_syscall("/etc/passwd");
 uVar2 = 0xffffffff;
 if (iVar1 >= 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x121e0
int param_win32_api(char *param_1)
{
 int iVar1;
 struct stat local_64;
 int local_c;
 iVar1 = stat(param_1,&local_64);
 if (iVar1 < 0) {
 local_c = -1;
 }
 else {
 local_c = -2;
 if (0 < local_64.st_size) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_win32_api @ 0x12240
unsigned int call_win32_api(void)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x12270
int param_fork_exec(char *param_1,char *param_2)
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
 return param_fork_exec("/bin/true",(char *)0);
}

// Function: param_pipe_communication @ 0x123b0
int param_pipe_communication(unsigned int unused)
{
 int iVar1;
 __pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 char local_34 [32];
 int local_14;
 int local_10;
 int local_c;
 iVar1 = pipe(&local_14);
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
 local_c = -3;
 if (0 < sVar3) {
 local_c = 0x2a;
 }
 }
 }
 return local_c;
}

// Function: call_pipe_communication @ 0x124f0
unsigned int call_pipe_communication(unsigned int param_1)
{
 return param_pipe_communication(param_1);
}

// Function: param_socket_create @ 0x12510
int param_socket_create(unsigned int unused)
{
 int iVar1;
 struct sockaddr local_24;
 unsigned int local_14;
 int local_10;
 int local_c;
 local_10 = socket(2,1,0);
 if (local_10 < 0) {
 local_c = -1;
 }
 else {
 local_14 = 1;
 iVar1 = setsockopt(local_10,1,2,&local_14,4);
 if (iVar1 < 0) {
 close(local_10);
 local_c = -2;
 }
 else {
 memset(&local_24,0,0x10);
 local_24.sa_family = 2;
 *(uint16_t *)(local_24.sa_data) = htons(0);
 local_24.sa_data[2] = '\0';
 local_24.sa_data[3] = '\0';
 local_24.sa_data[4] = '\0';
 local_24.sa_data[5] = '\0';
 iVar1 = bind(local_10,&local_24,0x10);
 if (iVar1 < 0) {
 close(local_10);
 local_c = -3;
 }
 else {
 iVar1 = listen(local_10,5);
 if (iVar1 < 0) {
 close(local_10);
 local_c = -4;
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
unsigned int call_socket_create(unsigned int param_1)
{
 return param_socket_create(param_1);
}

// Function: param_shmget_shmat @ 0x126b0
int param_shmget_shmat(unsigned int unused)
{
 int iVar1;
 key_t __key;
 char *__dest;
 int local_c;
 struct shmid_ds dummy_shm;
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
 __dest = (char *)shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)-1) {
 local_c = -3;
 }
 else {
 strcpy(__dest,"SharedMemory");
 local_c = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1,0,&dummy_shm);
 }
 }
 }
 }
 return local_c;
}

// Function: call_shmget_shmat @ 0x12820
unsigned int call_shmget_shmat(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat(param_1);
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x12860
int param_signal_handling(unsigned int unused)
{
 int iVar1;
 __sighandler_t p_Var2;
 int local_10;
 int local_c;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == SIG_ERR) {
 local_c = -1;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == SIG_ERR) {
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

// Function: signal_handler @ 0x12a70
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x12aa0
unsigned int call_signal_handling(unsigned int param_1)
{
 return param_signal_handling(param_1);
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
 uVar1 = call_pipe_communication(0);
 printf(&DAT_000142c0,uVar1);
 uVar1 = call_socket_create(0);
 printf(&DAT_000142dc,uVar1);
 uVar1 = call_shmget_shmat(0);
 printf(&DAT_000142f8,uVar1);
 uVar1 = call_signal_handling(0);
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
int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 void *local_18;
 unsigned int local_14;
 pthread_t local_10;
 int local_c;
 local_14 = param_1;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_14);
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 local_c = *(int *)local_18;
 free(local_18);
 }
 else {
 local_c = -1;
 }
 return local_c;
}

// Function: call_pthread_create @ 0x12cb0
unsigned int call_pthread_create(void)
{
 return param_pthread_create(7);
}

// Function: thread_sum @ 0x12ce0
void * thread_sum(void *param_1)
{
 int *arr = (int *)param_1;
 int local_c;
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
 iVar1 = pthread_create(local_18 + local_40,(pthread_attr_t *)0x0,thread_sum,
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
 iVar1 = pthread_join(local_18[local_48],(void **)0x0);
 if (iVar1 != 0) break;
 local_44 = local_3c[local_48 * 3 + 2] + local_44;
 local_48 = local_48 + 1;
 }
 return -2;
}

// Function: call_pthread_join @ 0x12e90
unsigned int call_pthread_join(unsigned int param_1)
{
 return param_pthread_join();
}

// Function: thread_increment @ 0x12eb0
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
 return NULL;
}

// Function: param_mutex_lock @ 0x12f40
int param_mutex_lock(int param_1,int param_2)
{
 void *__ptr;
 int iVar1;
 int local_1c;
 int local_18;
 int local_10;
 __ptr = malloc(param_1 << 2);
 if (__ptr == (void *)0x0) {
 local_10 = -1;
 }
 else {
 shared_counter = 0;
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 iVar1 = pthread_create((pthread_t *)((int)__ptr + local_18 * 4),(pthread_attr_t *)0x0,
 thread_increment,&param_2);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 }
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 pthread_join(*(pthread_t *)((int)__ptr + local_1c * 4),(void **)0x0);
 }
 free(__ptr);
 local_10 = -3;
 if (shared_counter == param_1 * param_2) {
 local_10 = 0x2a;
 }
 }
 return local_10;
}

// Function: call_mutex_lock @ 0x13090
int call_mutex_lock(void)
{
 return param_mutex_lock(4,1000);
}

// Function: consumer_thread @ 0x130c0
void * consumer_thread(void *unused)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock(&cond_mutex);
 uVar1 = data;
 while (ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x13160
void * producer_thread(void *unused)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: param_condition_variable @ 0x131e0
int param_condition_variable(unsigned int unused)
{
 int iVar1;
 unsigned int *local_18;
 pthread_t local_14;
 pthread_t local_10;
 int local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_18);
 pthread_join(local_10,(void **)0x0);
 local_c = *local_18;
 free(local_18);
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

// Function: call_condition_variable @ 0x132f0
unsigned int call_condition_variable(unsigned int param_1)
{
 return param_condition_variable(param_1);
}

// Function: thread_atomic_increment @ 0x13310
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

// Function: thread_atomic_load_store @ 0x133c0
void * thread_atomic_load_store(void *unused)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return NULL;
}

// Function: param_atomic_ops @ 0x13400
int param_atomic_ops(int param_1)
{
 int iVar1;
 int local_20;
 pthread_t local_1c;
 int local_18;
 unsigned int local_14;
 void *local_10;
 int local_c;
 local_10 = malloc(param_1 << 2);
 if (local_10 == (void *)0x0) {
 local_c = -1;
 }
 else {
 local_14 = 0;
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 iVar1 = (int)pthread_create((pthread_t *)((int)local_10 + local_18 * 4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&stack0x00000008);
 if (iVar1 != 0) {
 free(local_10);
 return -2;
 }
 }
 iVar1 = (int)pthread_create(&local_1c,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_1c,(void **)0x0);
 }
 for (local_20 = 0; iVar1 = atomic_counter, local_20 < param_1; local_20 = local_20 + 1) {
 pthread_join(*(pthread_t *)((int)local_10 + local_20 * 4),(void **)0x0);
 }
 free(local_10);
 local_c = -3;
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

// Function: thread_tls_test @ 0x135d0
void * thread_tls_test(void *param_1)
{
 int iVar1;
 int *piVar2;
 char *thread_name = (char *)param_1;
 iVar1 = __in_gs_offset;
 __in_gs_offset = __in_gs_offset + 0x32;
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar1;
 piVar2[1] = __in_gs_offset;
 return piVar2;
}

// Function: param_thread_local_storage @ 0x13660
int param_thread_local_storage(int param_1)
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
 int local_c;
 local_10 = malloc(param_1 << 2);
 local_14 = malloc(param_1 << 2);
 if ((local_10 == (void *)0x0) || (local_14 == (void *)0x0)) {
 local_c = -1;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 pvVar1 = malloc(0x10);
 *(void **)((int)local_14 + local_18 * 4) = pvVar1;
 snprintf(*(char **)((int)local_14 + local_18 * 4),0x10,"Thread-%d",local_18);
 }
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 iVar2 = (int)pthread_create((pthread_t *)((int)local_10 + local_1c * 4),(pthread_attr_t *)0x0,
 thread_tls_test,*(void **)((int)local_14 + local_1c * 4));
 if (iVar2 != 0) {
 for (local_20 = 0; local_20 <= local_1c; local_20 = local_20 + 1) {
 free(*(void **)((int)local_14 + local_20 * 4));
 }
 free(local_14);
 free(local_10);
 return -2;
 }
 }
 local_24 = 0;
 local_28 = 0;
 for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
 pthread_join(*(pthread_t *)((int)local_10 + local_2c * 4),&local_30);
 local_24 = *local_30 + local_24;
 local_28 = local_30[1] + local_28;
 free(local_30);
 free(*(void **)((int)local_14 + local_2c * 4));
 }
 free(local_14);
 free(local_10);
 local_c = -3;
 if (local_24 == param_1 * 100 && local_28 == param_1 * 0x96) {
 local_c = 0x2a;
 }
 }
 return local_c;
}

// Function: call_thread_local_storage @ 0x138e0
unsigned int call_thread_local_storage(void)
{
 return param_thread_local_storage(4);
}

// Function: test_thread_concurrency @ 0x13910
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 printf(&DAT_0001433a);
 uVar1 = call_pthread_create();
 printf(&DAT_00014359,uVar1);
 uVar1 = call_pthread_join(0);
 printf(&DAT_00014375,uVar1);
 uVar1 = call_mutex_lock();
 printf(&DAT_00014392,uVar1);
 uVar1 = call_condition_variable(0);
 printf(&DAT_000143ae,uVar1);
 uVar1 = call_atomic_ops();
 printf(&DAT_000143ca,uVar1);
 uVar1 = call_thread_local_storage();
 printf(&DAT_000143e6,uVar1);
 return;
}

// Function: main @ 0x139f0
int main(int argc, char **argv, char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x13a30
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x13a7c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

