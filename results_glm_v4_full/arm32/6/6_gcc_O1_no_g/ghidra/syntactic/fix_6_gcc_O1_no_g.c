/* Auto-injected type definitions by preprocessor */
#define NULL ((void *)0)
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

/* Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned int undefined2;
typedef unsigned char undefined1;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned int bool;
typedef unsigned long long ulonglong;
typedef unsigned long pthread_t;
typedef struct { int dummy; } FILE;
typedef unsigned char byte;
typedef int __pid_t;
typedef struct stat {
    unsigned int st_dev;
    unsigned int st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned int st_rdev;
    unsigned long st_size;
    unsigned long st_blksize;
    unsigned long st_blocks;
    unsigned long st_atime;
    unsigned long st_mtime;
    unsigned long st_ctime;
} stat_info;

typedef int key_t;
typedef unsigned int mode_t;
typedef unsigned int socklen_t;

typedef void (*__sighandler_t)(int);

typedef struct {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;

typedef struct { int dummy; } pthread_attr_t;
typedef struct { int dummy; } pthread_mutex_t;
typedef struct { int dummy; } pthread_cond_t;
typedef struct { int dummy; } shmid_ds;

typedef int (*code)(int, int, void *);

/* External atomic operation functions */
extern code SUB_ffff0fc0;
extern void (*SUB_ffff0fa0)(void);

/* Shared memory and IPC function prototypes */
extern int shmctl(int shmid, int cmd, struct shmid_ds *buf);
extern int shmget(key_t key, size_t size, int shmflg);
extern void *shmat(int shmid, const void *shmaddr, int shmflg);
extern int shmdt(const void *shmaddr);
extern key_t ftok(const char *pathname, int proj_id);
extern int open(const char *pathname, int flags, mode_t mode);
extern int close(int fd);

/* System call prototypes */
extern ssize_t read(int fd, void *buf, size_t count);
extern ssize_t write(int fd, const void *buf, size_t count);
extern int pipe(int pipefd[2]);
extern int socket(int domain, int type, int protocol);
extern int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
extern int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int listen(int sockfd, int backlog);

/* Signal and process prototypes */
extern __sighandler_t signal(int signum, __sighandler_t handler);
extern __pid_t fork(void);
extern int execl(const char *path, const char *arg, ...);
extern void _exit(int status);
extern __pid_t waitpid(__pid_t pid, int *status, int options);
extern __pid_t wait(int *status);
extern unsigned int alarm(unsigned int seconds);
extern int raise(int sig);
extern int usleep(unsigned int usec);
extern unsigned int sleep(unsigned int seconds);

/* Standard library prototypes */
extern void __snprintf_chk(char *str, size_t maxlen, int flag, size_t strlen, const char *fmt, ...);

/* Thread prototypes */
extern int pthread_cancel(pthread_t thread);
extern int pthread_mutex_lock(pthread_mutex_t *mutex);
extern int pthread_mutex_unlock(pthread_mutex_t *mutex);
extern int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern int pthread_cond_signal(pthread_cond_t *cond);
extern int pthread_join(pthread_t thread, void **retval);

/* Global shared variables for thread operations */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
int data = 0;
int ready = 0;
void *counter_mutex = 0;
void *cond_mutex = 0;
void *cond = 0;

/* Data symbols */
extern char DAT_00013850[];
extern char DAT_00013854[];
extern char DAT_00013858[];
extern char DAT_0001385c[];
extern char DAT_00013860[];
extern char DAT_0001387c[];
extern char DAT_000138f0[];
extern char DAT_00013914[];
extern char DAT_00013930[];
extern char DAT_0001394c[];
extern char DAT_00013968[];
extern char DAT_00013984[];
extern char DAT_000139a0[];
extern char DAT_000139bc[];
extern char DAT_000139dc[];
extern char DAT_000139f8[];
extern char DAT_00013a14[];
extern char DAT_00013a30[];
extern char DAT_00013a4c[];
extern char DAT_00013aa4[];
extern char DAT_00013ac0[];
extern char DAT_00013adc[];
extern char DAT_00013af8[];
extern char DAT_00013b14[];
extern char DAT_00013b30[];
extern char DAT_00013b4c[];
extern char DAT_00013b68[];
extern char DAT_00013b90[];
extern char DAT_00013bb0[];
extern char DAT_00013bcc[];
extern char DAT_00013bec[];
extern char DAT_00013c08[];
extern char DAT_00013c24[];
extern char DAT_00013c40[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/6/6_gcc_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00011088 */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 000110a0 */

undefined4 thread_sum(int *param_1)

{
 int iVar1;
 int iVar2;
 
 param_1[2] = 0;
 iVar2 = *param_1;
 if (iVar2 <= param_1[1]) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != param_1[1] + 1);
 param_1[2] = iVar1;
 }
 return 0;
}



/* Function: thread_compute @ 000110dc */

void *thread_compute(void *param_1)

{
 int *piVar1;
 int iVar2;
 
 iVar2 = *(int *)param_1;
 piVar1 = malloc(4);
 *piVar1 = iVar2 * iVar2;
 return NULL;
}



/* Function: thread_increment @ 00011100 */

undefined4 thread_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = *param_1;
 if (0 < iVar2) {
 iVar1 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + 1;
 } while (iVar2 != iVar1);
 }
 return 0;
}



/* Function: consumer_thread @ 0001115c */

void *consumer_thread(void *param_1)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 while (ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return NULL;
}



/* Function: producer_thread @ 000111bc */

void *producer_thread(void *param_1)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return NULL;
}



/* Function: thread_atomic_increment @ 00011204 */

/* WARNING: Removing unreachable block (ram,0x0001128c) */

undefined4 thread_atomic_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar2 = *param_1;
 if (0 < iVar2) {
 iVar1 = 0;
 do {
 __sync_fetch_and_add_4(&atomic_counter,1);
 __sync_val_compare_and_swap_4(&atomic_counter,iVar1,iVar1 + 1000);
 iVar1 = iVar1 + 1;
 } while (iVar2 != iVar1);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00011298 */

undefined4 thread_atomic_load_store(void)

{
 int iVar1;
 
 __sync_synchronize();
 iVar1 = atomic_counter;
 __sync_synchronize();
 __sync_synchronize();
 atomic_counter = iVar1 + 100;
 __sync_synchronize();
 return 0;
}



/* Function: thread_tls_test @ 000112c8 */

void *thread_tls_test(undefined4 param_1)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 ulonglong uVar5;
 
 uVar5 = (ulonglong)param_1;
 iVar1 = (int)uVar5;
 iVar4 = *(int *)(iVar1 + 8);
 iVar3 = iVar4 + 0x32;
 *(int *)(iVar1 + 8) = iVar3;
 strncpy((char *)(iVar1 + 0xc),(char *)(uVar5 >> 0x20),0x1f);
 piVar2 = malloc(8);
 *piVar2 = iVar4;
 piVar2[1] = iVar3;
 return NULL;
}



/* Function: param_strcpy @ 00011310 */

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 00011328 */

undefined4 call_strcpy(void)
{
 undefined1 auStack_2c [32];
 int local_c;
 
 local_c = 0;
 param_strcpy(auStack_2c,"HelloLib");
 if (local_c == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_strcmp @ 00011378 */

int param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 
 iVar1 = strcmp(param_1,param_2);
 if (iVar1 < 1) {
 iVar1 = iVar1 >> 0x1f;
 }
 else {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_strcmp @ 00011390 */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_strcmp(&DAT_00013854,&DAT_00013850);
 iVar2 = param_strcmp(&DAT_00013858,&DAT_00013858);
 iVar3 = param_strcmp(&DAT_00013860,&DAT_0001385c);
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 000113e0 */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 000113ec */

undefined4 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 000113f4 */

size_t param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3;
}



/* Function: call_memcpy @ 00011408 */

undefined4 call_memcpy(void)

{
 undefined4 extraout_r1;
 undefined4 local_34;
 undefined4 uStack_30;
 undefined4 uStack_2c;
 undefined4 uStack_28;
 undefined4 local_24;
 int local_20 [7];
 
 local_20[5] = 0;
 local_34 = 10;
 uStack_30 = 0x14;
 uStack_2c = 0x1e;
 uStack_28 = 0x28;
 local_24 = 0x32;
 local_20[0] = 0;
 local_20[1] = 0;
 local_20[2] = 0;
 local_20[3] = 0;
 local_20[4] = 0;
 param_memcpy(local_20,&local_34,0x14);
 if (local_20[5] == 0) {
 return 0;
 }
 return 0;
}



/* Function: param_memcmp @ 000114a0 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 iVar1 = iVar1 >> 0x1f;
 }
 else {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_memcmp @ 000114b8 */

undefined4 call_memcmp(void)

{
 int iVar1;
 undefined8 uVar2;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 local_20;
 undefined4 uStack_1c;
 undefined4 uStack_18;
 int local_14;
 
 local_14 = 0;
 local_38 = 1;
 uStack_34 = 2;
 uStack_30 = 3;
 local_2c = 1;
 uStack_28 = 2;
 uStack_24 = 4;
 local_20 = 1;
 uStack_1c = 2;
 uStack_18 = 3;
 iVar1 = param_memcmp(&local_38,&local_2c,0xc);
 uVar2 = param_memcmp(&local_38,&local_20,0xc);
 if (local_14 == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_14,0);
 return 0;
}



/* Function: param_printf @ 00011554 */

void param_printf(undefined4 param_1,undefined4 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00011574 */

void call_printf(void)

{
 param_printf(0x2a,&DAT_0001387c);
 return;
}



/* Function: param_scanf @ 0001158c */

void param_scanf(undefined4 param_1)

{
 undefined8 uVar1;
 int local_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 uVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_10);
 if ((int)uVar1 == 2) {
 local_14 = local_14 + local_10;
 }
 else {
 local_14 = -1;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_14,(int)((ulonglong)uVar1 >> 0x20),local_c,0);
 }
 return;
}



/* Function: call_scanf @ 000115f4 */

undefined4 call_scanf(void)

{
 param_scanf("123,456");
 return 0;
}



/* Function: param_fopen_fclose @ 00011608 */

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



/* Function: call_fopen_fclose @ 00011644 */

undefined4 call_fopen_fclose(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_fread_fwrite @ 00011664 */

void param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 undefined4 uVar3;
 char acStack_34 [32];
 int local_14;
 
 local_14 = 0;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(acStack_34,1,0x12,__s);
 acStack_34[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 if (sVar1 == 0x12) {
 iVar2 = strcmp(acStack_34,"BinBench Test Data");
 if (iVar2 == 0) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 uVar3 = 0xfffffffe;
 }
 }
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar3);
 }
 return;
}



/* Function: call_fread_fwrite @ 0001175c */

undefined4 call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return 0x2a;
}



/* Function: param_malloc_free @ 00011770 */

int param_malloc_free(int param_1)

{
 int *__ptr;
 int *piVar1;
 int iVar2;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if (param_1 != 0) {
 piVar1 = __ptr + -1;
 iVar2 = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 10;
 } while (piVar1 != __ptr + param_1 + -1);
 }
 iVar2 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar2;
}



/* Function: call_malloc_free @ 000117d8 */

undefined4 call_malloc_free(void)

{
 param_malloc_free(10);
 return 0x2a;
}



/* Function: param_memset @ 000117e8 */

int param_memset(void *param_1,size_t param_2)

{
 int iVar1;
 byte *pbVar2;
 
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 pbVar2 = (byte *)((int)param_1 + -1);
 iVar1 = 0;
 do {
 pbVar2 = pbVar2 + 1;
 iVar1 = iVar1 + (uint)*pbVar2;
 } while (pbVar2 != (byte *)((int)param_1 + (param_2 - 1)));
 return iVar1;
 }
 return 0;
}



/* Function: call_memset @ 00011834 */

undefined4 call_memset(void)

{
 undefined4 extraout_r1;
 int *piVar1;
 int iStack_38;
 int local_34 [10];
 int local_c;
 
 piVar1 = &iStack_38;
 local_c = 0;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = 0xff;
 } while (piVar1 != local_34 + 9);
 param_memset(local_34,0x28);
 if (local_c == 0) {
 return 0;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_strchr_strstr @ 000118a4 */

int param_strchr_strstr(char *param_1,int param_2,char *param_3)

{
 char *pcVar1;
 int iVar2;
 int iVar3;
 
 pcVar1 = strchr(param_1,param_2);
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = (int)pcVar1 - (int)param_1;
 }
 pcVar1 = strstr(param_1,param_3);
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = (int)pcVar1 - (int)param_1;
 }
 return iVar3 + iVar2;
}



/* Function: call_strchr_strstr @ 000118e0 */

undefined4 call_strchr_strstr(void)

{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return 0;
}



/* Function: test_standard_library_functions @ 00011900 */

void test_standard_library_functions(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000138f0);
 uVar1 = call_strcpy();
 __printf_chk(1,&DAT_00013914,uVar1);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_00013930,uVar1);
 uVar1 = call_strlen();
 __printf_chk(1,&DAT_0001394c,uVar1);
 uVar1 = call_memcpy();
 __printf_chk(1,&DAT_00013968,uVar1);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_00013984,uVar1);
 uVar1 = call_printf();
 __printf_chk(1,&DAT_000139a0,uVar1);
 uVar1 = call_scanf();
 __printf_chk(1,&DAT_000139bc,uVar1);
 uVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_000139dc,uVar1);
 uVar1 = call_fread_fwrite();
 __printf_chk(1,&DAT_000139f8,uVar1);
 uVar1 = call_malloc_free();
 __printf_chk(1,&DAT_00013a14,uVar1);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_00013a30,uVar1);
 uVar1 = call_strchr_strstr();
 __printf_chk(1,&DAT_00013a4c,uVar1);
 return;
}



/* Function: param_linux_syscall @ 00011a34 */

int param_linux_syscall(undefined4 param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = syscall(5,param_1,0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 00011a74 */

undefined4 call_linux_syscall(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_win32_api @ 00011a94 */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 stat_info sStack_68;
 int local_c;
 
 local_c = 0;
 iVar1 = stat(param_1,&sStack_68);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else if (sStack_68.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0x2a;
 }
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2);
 }
 return uVar2;
}



/* Function: call_win32_api @ 00011afc */

undefined4 call_win32_api(void)

{
 param_win32_api("/etc/passwd");
 return 0x2a;
}



/* Function: param_fork_exec @ 00011b10 */

int param_fork_exec(char *param_1,undefined4 param_2)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_18;
 int local_14;
 
 local_14 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_18,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else if ((local_18 & 0x7f) == 0) {
 uVar2 = (int)local_18 >> 8 & 0xff;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2);
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00011bb8 */

undefined4 call_fork_exec(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_fork_exec("/bin/true",0);
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_pipe_communication @ 00011bdc */

unsigned int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined4 uVar4;
 int local_3c;
 int local_38;
 undefined1 auStack_34 [32];
 int local_14;
 
 local_14 = 0;
 iVar1 = pipe(&local_3c);
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
 close(local_3c);
 write(local_38,"HelloPipe",9);
 close(local_38);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(local_38);
 sVar3 = read(local_3c,auStack_34,0x1f);
 auStack_34[sVar3] = 0;
 close(local_3c);
 iVar1 = wait((void *)0x0);
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 else {
 uVar4 = 0x2a;
 }
 }
 }
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar4);
 }
 return uVar4;
}



/* Function: call_pipe_communication @ 00011cc0 */

unsigned int call_pipe_communication(void)

{
 return param_pipe_communication();
}



/* Function: param_socket_create @ 00011ccc */

undefined4 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined4 uVar2;
 undefined4 local_20;
 sockaddr local_1c;
 int local_c;
 
 local_c = 0;
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
 local_1c.sa_data[2] = '\0';
 local_1c.sa_data[3] = '\0';
 local_1c.sa_data[4] = '\0';
 local_1c.sa_data[5] = '\0';
 local_1c.sa_data[6] = '\0';
 local_1c.sa_data[7] = '\0';
 local_1c.sa_data[8] = '\0';
 local_1c.sa_data[9] = '\0';
 local_1c.sa_data[10] = '\0';
 local_1c.sa_data[0xb] = '\0';
 local_1c.sa_data[0xc] = '\0';
 local_1c.sa_data[0xd] = '\0';
 local_1c.sa_family = 2;
 local_1c.sa_data[0] = '\0';
 local_1c.sa_data[1] = '\0';
 iVar1 = bind(__fd,&local_1c,0x10);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffc;
 }
 else {
 close(__fd);
 uVar2 = 0x2a;
 }
 }
 }
 }
 if (local_c == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar2);
}

/* Function: call_socket_create @ 00011dd8 */

undefined4 call_socket_create(void)

{
 return param_socket_create();
}



/* Function: param_shmget_shmat @ 00011de4 */

size_t param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 sVar2 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 sVar2 = 0xffffffff;
 }
 else {
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
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}



/* Function: call_shmget_shmat @ 00011eb0 */

undefined4 call_shmget_shmat(void)

{
 int iVar1;
 undefined4 uVar2;
 
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 00011ec8 */

undefined4 param_signal_handling(void)

{
 __sighandler_t p_Var1;
 int iVar2;
 
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
 iVar2 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 if (signal_number != 10) {
 return 0xfffffffc;
 }
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar2 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 }
 if (signal_received == 0) {
 return 0xfffffffb;
 }
 if (signal_number == 0xe) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 return 0x2a;
 }
 return 0xfffffffb;
}



/* Function: call_signal_handling @ 0001201c */

void call_signal_handling(void)

{
 param_signal_handling();
 return;
}



/* Function: test_system_calls @ 00012028 */

void test_system_calls(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00013aa4);
 uVar1 = call_linux_syscall();
 __printf_chk(1,&DAT_00013ac0,uVar1);
 uVar1 = call_win32_api();
 __printf_chk(1,&DAT_00013adc,uVar1);
 uVar1 = call_fork_exec();
 __printf_chk(1,&DAT_00013af8,uVar1);
 uVar1 = param_pipe_communication();
 __printf_chk(1,&DAT_00013b14,uVar1);
 uVar1 = param_socket_create();
 __printf_chk(1,&DAT_00013b30,uVar1);
 uVar1 = call_shmget_shmat();
 __printf_chk(1,&DAT_00013b4c,uVar1);
 uVar1 = param_signal_handling();
 __printf_chk(1,&DAT_00013b68,uVar1);
 return;
}



/* Function: param_pthread_create @ 000120e4 */

int param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t local_18;
 int local_c;
 
 local_c = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&param_1);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)0x0);
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_c == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_create @ 0001216c */

undefined4 call_pthread_create(void)

{
 param_pthread_create(7);
 return 0;
}



/* Function: param_pthread_join @ 0001217c */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 pthread_t *ppVar5;
 pthread_t apStack_5c [3];
 pthread_t local_50;
 undefined4 uStack_4c;
 undefined4 local_48;
 undefined4 uStack_44;
 undefined4 local_40;
 undefined4 uStack_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 local_30;
 pthread_t local_2c [2];
 
 local_2c[0] = 0;
 local_50 = 1;
 uStack_4c = 10;
 local_48 = 0;
 uStack_44 = 0xb;
 local_40 = 0x14;
 uStack_3c = 0;
 uStack_38 = 0x15;
 uStack_34 = 0x1e;
 local_30 = 0;
 ppVar5 = &local_50;
 ppVar3 = ppVar5;
 ppVar4 = apStack_5c;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_sum,ppVar3);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_0001222c;
 }
 ppVar4 = ppVar4 + 1;
 ppVar3 = ppVar3 + 3;
 } while (ppVar3 != local_2c);
 iVar1 = 0;
 ppVar3 = apStack_5c;
 do {
 ppVar4 = ppVar3 + 1;
 iVar2 = pthread_join(*ppVar3,(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + ppVar5[2];
 ppVar5 = ppVar5 + 3;
 ppVar3 = ppVar4;
 } while (ppVar4 != &local_50);
LAB_0001222c:
 if (local_2c[0] == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_join @ 00012270 */

undefined4 call_pthread_join(void)

{
 param_pthread_join();
 return 0;
}



/* Function: param_mutex_lock @ 0001227c */

void param_mutex_lock(int param_1,int param_2)

{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *ppVar2;
 int iVar3;
 bool bVar4;
 int local_24;
 
 local_24 = param_2;
 __ptr = malloc(param_1 << 2);
 if (__ptr != (pthread_t *)0x0) {
 shared_counter = 0;
 if (0 < param_1) {
 ppVar2 = __ptr;
 iVar1 = 0;
 do {
 iVar3 = iVar1;
 iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return;
 }
 iVar1 = iVar3 + 1;
 ppVar2 = ppVar2 + 1;
 } while (param_1 != iVar1);
 ppVar2 = __ptr + -1;
 iVar1 = 0;
 do {
 ppVar2 = ppVar2 + 1;
 pthread_join(*ppVar2,(void **)0x0);
 bVar4 = iVar3 != iVar1;
 iVar1 = iVar1 + 1;
 } while (bVar4);
 }
 free(__ptr);
 }
 return;
}



/* Function: call_mutex_lock @ 00012360 */

undefined4 call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return 0;
}



/* Function: param_condition_variable @ 00012374 */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t local_18;
 pthread_t local_14;
 undefined4 *local_10;
 int local_c;
 
 local_c = 0;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,(void **)0x0);
 pthread_join(local_18,(void **)0x0);
 uVar2 = 0x2a;
 }
 else {
 pthread_cancel(local_14);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_c == 0) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_condition_variable @ 00012444 */

undefined4 call_condition_variable(void)

{
 param_condition_variable();
 return 0;
}



/* Function: param_atomic_ops @ 00012450 */

void param_atomic_ops(int param_1,undefined4 param_2)

{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *ppVar2;
 int iVar3;
 undefined4 local_2c;
 pthread_t local_28;
 int local_24;
 
 local_24 = 0;
 local_2c = param_2;
 __ptr = malloc(param_1 << 2);
 if (__ptr != (pthread_t *)0x0) {
 __sync_synchronize();
 atomic_counter = 0;
 __sync_synchronize();
 if (param_1 < 1) {
 iVar3 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 }
 else {
 iVar3 = 0;
 ppVar2 = __ptr;
 do {
 iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_atomic_increment,&local_2c);
 if (iVar1 != 0) {
 free(__ptr);
 goto LAB_00012538;
 }
 iVar3 = iVar3 + 1;
 ppVar2 = ppVar2 + 1;
 } while (param_1 != iVar3);
 iVar3 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 ppVar2 = __ptr + -1;
 iVar3 = 0;
 do {
 ppVar2 = ppVar2 + 1;
 pthread_join(*ppVar2,(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (iVar3 < param_1);
 }
 __sync_synchronize();
 __sync_synchronize();
 free(__ptr);
 }
LAB_00012538:
 if (local_24 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_atomic_ops @ 000125c0 */

undefined4 call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return 0;
}



/* Function: param_thread_local_storage @ 000125d4 */

void param_thread_local_storage(int param_1)

{
 pthread_t *__ptr;
 void *__ptr_00;
 void *pvVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 undefined4 *puVar5;
 pthread_t *ppVar6;
 undefined4 *puVar7;
 bool bVar8;
 int *local_30;
 int local_2c;
 
 local_2c = 0;
 __ptr = malloc(param_1 << 2);
 __ptr_00 = malloc(param_1 << 2);
 if (__ptr_00 != (void *)0x0 && __ptr != (pthread_t *)0x0) {
 if (0 < param_1) {
 puVar7 = (undefined4 *)((int)__ptr_00 + -4);
 iVar4 = 0;
 puVar5 = puVar7;
 do {
 iVar3 = iVar4;
 pvVar1 = malloc(0x10);
 puVar5 = puVar5 + 1;
 *puVar5 = pvVar1;
 (void)__snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar3);
 iVar4 = iVar3 + 1;
 } while (param_1 != iVar3 + 1);
 iVar4 = 0;
 ppVar6 = __ptr;
 puVar5 = puVar7;
 do {
 puVar5 = puVar5 + 1;
 iVar2 = pthread_create(ppVar6,(pthread_attr_t *)0x0,thread_tls_test,(void *)*puVar5);
 if (iVar2 != 0) {
 if (-1 < iVar4) {
 do {
 puVar7 = puVar7 + 1;
 free((void *)*puVar7);
 } while (puVar7 != (undefined4 *)((int)__ptr_00 + iVar4 * 4));
 }
 free(__ptr_00);
 free(__ptr);
 goto LAB_00012740;
 }
 ppVar6 = ppVar6 + 1;
 bVar8 = iVar3 != iVar4;
 iVar4 = iVar4 + 1;
 } while (bVar8);
 ppVar6 = __ptr + -1;
 iVar4 = 0;
 do {
 ppVar6 = ppVar6 + 1;
 pthread_join(*ppVar6,NULL);
 puVar7 = puVar7 + 1;
 free((void *)*puVar7);
 bVar8 = iVar3 != iVar4;
 iVar4 = iVar4 + 1;
 } while (bVar8);
 }
 free(__ptr_00);
 free(__ptr);
 }
LAB_00012740:
 if (local_2c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_thread_local_storage @ 000127bc */

undefined4 call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return 0;
}



/* Function: test_thread_concurrency @ 000127cc */

void test_thread_concurrency(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00013b90);
 uVar1 = call_pthread_create();
 __printf_chk(1,&DAT_00013bb0,uVar1);
 uVar1 = param_pthread_join();
 __printf_chk(1,&DAT_00013bcc,uVar1);
 uVar1 = call_mutex_lock();
 __printf_chk(1,&DAT_00013bec,uVar1);
 uVar1 = param_condition_variable();
 __printf_chk(1,&DAT_00013c08,uVar1);
 uVar1 = call_atomic_ops();
 __printf_chk(1,&DAT_00013c24,uVar1);
 uVar1 = call_thread_local_storage();
 __printf_chk(1,&DAT_00013c40,uVar1);
 return;
}



/* Function: main @ 00012870 */

undefined4 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: __sync_fetch_and_add_4 @ 00012888 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 000128c0 */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 000128f8 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 00012930 */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 00012968 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 000129a0 */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 000129dc */

int __sync_fetch_and_add_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 00012a3c */

int __sync_fetch_and_sub_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 00012a9c */

int __sync_fetch_and_or_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 00012afc */

int __sync_fetch_and_and_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 00012b5c */

int __sync_fetch_and_xor_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 00012bbc */

int __sync_fetch_and_nand_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 00012c20 */

int __sync_fetch_and_add_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00012c7c */

int __sync_fetch_and_sub_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 00012cd8 */

int __sync_fetch_and_or_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 00012d34 */

int __sync_fetch_and_and_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 00012d90 */

int __sync_fetch_and_xor_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 00012dec */

int __sync_fetch_and_nand_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}



/* Function: __sync_add_and_fetch_4 @ 00012e4c */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00012e84 */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00012ebc */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 00012ef4 */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 00012f2c */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00012f64 */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
 int iVar1;
 uint uVar2;
 
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 00012fa0 */

int __sync_add_and_fetch_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 00013008 */

int __sync_sub_and_fetch_2(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 00013070 */

int __sync_or_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 000130d8 */

int __sync_and_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 00013140 */

int __sync_xor_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 000131a8 */

int __sync_nand_and_fetch_2(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 00013214 */

int __sync_add_and_fetch_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 00013278 */

int __sync_sub_and_fetch_1(uint param_1,int param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 000132dc */

int __sync_or_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 00013340 */

int __sync_and_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 000133a4 */

int __sync_xor_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 00013408 */

int __sync_nand_and_fetch_1(uint param_1,uint param_2)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 00013470 */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
 int iVar1;
 
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 000134c0 */

uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return (int)(short)uVar1;
 }
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 00013538 */

uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xff)) {
 return (int)(char)uVar1;
 }
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 000135ac */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 
 iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
 return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 000135d8 */

uint __sync_bool_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return 0;
 }
 iVar3 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return 1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 000135f4 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = __sync_val_compare_and_swap_1(param_1, param_2, param_3);
 return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 0001361c */

undefined4 __sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
 int iVar1;
 undefined4 uVar2;
 
 do {
 uVar2 = *param_1;
 iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 00013654 */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 000136b4 */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

{
 int iVar1;
 uint uVar2;
 int iVar3;
 
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(code *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 00013710 */

undefined4 __sync_lock_release_8(undefined4 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 param_1[1] = 0;
 return 0;
}



/* Function: __sync_lock_release_4 @ 00013734 */

undefined4 __sync_lock_release_4(undefined4 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return 0;
}



/* Function: __sync_lock_release_2 @ 00013754 */

undefined4 __sync_lock_release_2(undefined2 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return 0;
}



/* Function: __sync_lock_release_1 @ 00013774 */

undefined4 __sync_lock_release_1(undefined1 *param_1)

{
 SUB_ffff0fa0();
 *param_1 = 0;
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 119 */
