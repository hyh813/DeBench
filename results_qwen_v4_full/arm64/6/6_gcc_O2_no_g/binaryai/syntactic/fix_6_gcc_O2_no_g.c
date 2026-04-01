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

// Additional type definitions for compilation
typedef int __pid_t;
typedef unsigned int uint;
typedef int key_t;
typedef void* FILE;
typedef unsigned long pthread_t;
typedef void* pthread_mutex_t;
typedef void* pthread_cond_t;
typedef void* pthread_attr_t;
typedef void* __sighandler_t;
typedef struct { unsigned short sa_family; char sa_data[14]; } sockaddr;
typedef int socklen_t;
typedef void* shmid_ds;
typedef long __useconds_t;
typedef void* (*__start_routine)(void*);

// Additional global variable declarations
typedef unsigned char byte;
struct stat {
    long st_dev;
    long st_ino;
    unsigned int st_mode;
    int st_nlink;
    int st_uid;
    int st_gid;
    long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    long st_atime;
    long st_mtime;
    long st_ctime;
};

unsigned long ___stack_chk_guard;
unsigned long __stack_chk_guard;
int __aarch64_have_lse_atomics;
int signal_received;
int signal_number;
int shared_counter;
int counter_mutex;
int cond_mutex;
int cond;
int data;
int ready;
int atomic_counter;
long tpidr_el0;
char completed_0;
void* __dso_handle;
int tmp_ldWn;
int tmp_stWn;
char DAT_00103698;
char DAT_00103700;
char DAT_00103728;
char DAT_00103748;
char DAT_00103768;
char DAT_00103788;
char DAT_001037a8;
char DAT_001037c8;
char DAT_001037e8;
char DAT_00103808;
char DAT_00103828;
char DAT_00103848;
char DAT_00103868;
char DAT_00103888;
char DAT_001038f0;
char DAT_00103910;
char DAT_00103930;
char DAT_00103950;
char DAT_00103970;
char DAT_00103990;
char DAT_001039b0;
char DAT_001039d0;
char DAT_00103a00;
char DAT_00103a20;
char DAT_00103a40;
char DAT_00103a60;
char DAT_00103a80;
char DAT_00103aa0;
char DAT_00103ac0;

// Forward declarations for functions
int call_weak_fn(int ctx);
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);
int ExclusiveMonitorPass(int *param_1,int param_2);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

// Decompiled by BinaryAI
// SHA256: ee6457847b53611e694339836368b40571213d0221f02d06c5f6339e11e7ed67

// Function: _init @ 0x101388
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001013a0 @ 0x1013a0
void FUN_001013a0(void)
{
 return;
}

// External function declarations
extern void * memcpy(void *__dest,void *__src,size_t __n);
extern void _exit(int __status);
extern size_t strlen(char *__s);
extern int raise(int __sig);
extern int __libc_start_main(int (*__main)(int, char **, char **), int __argc, char **__ubp_av, void (*__init)(void), void (*__fini)(void), void (*__rtld_fini)(void), void (*__stack_end));
extern int execl(char *__path,char *__arg,...);
extern int listen(int __fd,int __n);
extern int shmdt(void *__shmaddr);
extern int bind(int __fd,sockaddr *__addr,socklen_t __len);
extern void __cxa_finalize(void);
extern int pipe(int *__pipedes);
extern __pid_t fork(void);
extern char * stpcpy(char *__dest,char *__src);
extern int fileno(FILE *__stream);
extern __sighandler_t signal(int __sig,__sighandler_t __handler);
extern int __snprintf_chk(char *__s, size_t __maxlen, int __flag, size_t __slen, const char *__format, ...);
extern int fclose(FILE *__stream);
extern FILE * fopen(char *__filename,char *__modes);
extern void * malloc(size_t __size);
extern int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
extern int open(char *__file,int __oflag,...);
extern int pthread_cond_signal(pthread_cond_t *__cond);
extern int __printf_chk(int __flag, const char *__format, ...);
extern void * memset(void *__s,int __c,size_t __n);
extern void * shmat(int __shmid,void *__shmaddr,int __shmflg);
extern uint sleep(uint __seconds);
extern void rewind(FILE *__stream);
extern void __stack_chk_fail(void) __attribute__((noreturn));
extern int close(int __fd);
extern void __gmon_start__(void);
extern int stat(char *__file,struct stat *__buf);
extern ssize_t write(int __fd,void *__buf,size_t __n);
extern unsigned long __getauxval(unsigned long __type);
extern void abort(void);
extern int puts(char *__s);
extern int memcmp(void *__s1,void *__s2,size_t __n);
extern int strcmp(char *__s1,char *__s2);
extern int shmctl(int __shmid,int __cmd,shmid_ds *__buf);
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);
extern key_t ftok(char *__pathname,int __proj_id);
extern void free(void *__ptr);
extern int shmget(key_t __key,size_t __size,int __shmflg);
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);
extern char * strchr(char *__s,int __c);
extern size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);
extern int pthread_create(pthread_t *__newthread,const pthread_attr_t *__attr,void *(*__start_routine)(void *), void *__arg);
extern __pid_t wait(int *__stat_loc);
extern int socket(int __domain,int __type,int __protocol);
extern ssize_t read(int __fd,void *__buf,size_t __nbytes);
extern char * strstr(char *__haystack,char *__needle);
extern int usleep(__useconds_t __useconds);
extern int __isoc99_sscanf(const char *__s, const char *__format, ...);
extern char * strncpy(char *__dest,char *__src,size_t __n);
extern int * __errno_location(void);
extern int pthread_join(pthread_t __th,void **__thread_return);
extern uint alarm(uint __seconds);
extern int pthread_cancel(pthread_t __th);
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);
extern long syscall(long __sysno,...);
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);
extern int unlink(char *__name);



























































































































// Function: main @ 0x1017c0
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: init_have_lse_atomics @ 0x1017e0
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: _start @ 0x101840
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack0x00000008 = (void *)0x0;
 __libc_start_main((int (*)(int, char **, char **))main,param_9,stack0x00000008,0,0,(void (*)(void))0x0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x101874
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x101890
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1018c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001018fc @ 0x1018fc
void FUN_001018fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101900
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: signal_handler @ 0x101960
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x101980
void * thread_sum(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 ((int *)param_1)[2] = 0;
 if (iVar1 <= ((int *)param_1)[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != ((int *)param_1)[1] + 1);
 ((int *)param_1)[2] = iVar2;
 }
 return (void *)0;
}

// Function: thread_compute @ 0x1019b4
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: thread_increment @ 0x1019e4
void * thread_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)(uintptr_t)&counter_mutex);
 iVar2 = iVar2 + 1;
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)(uintptr_t)&counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return (void *)0;
}

// Function: consumer_thread @ 0x101a54
void * consumer_thread(void *arg)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock((pthread_mutex_t *)(uintptr_t)cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)(uintptr_t)&cond,(pthread_mutex_t *)(uintptr_t)&cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)(uintptr_t)&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return (void *)puVar2;
}

// Function: producer_thread @ 0x101ad0
void * producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)(uintptr_t)&cond_mutex);
 ready = 1;
 data = 0x2a;
 pthread_cond_signal((pthread_cond_t *)(uintptr_t)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)(uintptr_t)&cond_mutex);
 return (void *)0;
}

// Function: thread_atomic_increment @ 0x101b30
void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar2 = *(int *)param_1;
 if (0 < iVar2) {
 iVar3 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 iVar1 = iVar3 + 1;
 __aarch64_cas4_acq_rel(iVar3,iVar3 + 1000,&atomic_counter);
 iVar3 = iVar1;
 } while (iVar2 != iVar1);
 }
 return (void *)0;
}

// Function: thread_atomic_load_store @ 0x101ba0
void * thread_atomic_load_store(void *arg)
{
 atomic_counter = atomic_counter + 100;
 return (void *)0;
}

// Function: thread_tls_test @ 0x101bc0
void * thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x18),(char *)param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return (void *)piVar4;
}

// Function: param_strcpy @ 0x101c10
int param_strcpy(char *param_1,char *param_2)
{
 char *pcVar1;
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}

// Function: call_strcpy @ 0x101c34
unsigned long long call_strcpy(void)
{
 return 8;
}

// Function: FUN_00101c3c @ 0x101c3c
int FUN_00101c3c(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = strcmp(param_1,param_2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: param_strcmp @ 0x101c40
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = strcmp(param_1,param_2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: call_strcmp @ 0x101c60
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x101c70
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x101c84
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: FUN_00101c8c @ 0x101c8c
unsigned long FUN_00101c8c(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: param_memcpy @ 0x101c90
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101cb4
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: FUN_00101cbc @ 0x101cbc
int FUN_00101cbc(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: param_memcmp @ 0x101cc0
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: call_memcmp @ 0x101ce0
unsigned long long call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned long long local_38;
 unsigned int local_30;
 unsigned long long local_28;
 unsigned int local_20;
 unsigned long long local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38 = 0x200000001;
 local_20 = 4;
 local_30 = 3;
 local_28 = 0x200000001;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar2 = memcmp(&local_38,&local_28,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 iVar3 = memcmp(&local_38,&local_18,0xc);
 iVar2 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar2 = 1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
}

// Function: param_printf @ 0x101db0
void param_printf(unsigned int param_1,unsigned long long param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x101dd0
void call_printf(void)
{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103698);
 return;
}

// Function: FUN_00101dec @ 0x101dec
void FUN_00101dec(unsigned long long param_1)
{
 int iVar1;
 int iStack_10;
 int iStack_c;
 long lStack_8;
 lStack_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf((const char *)param_1,"%d,%d",&iStack_10,&iStack_c);
 if (iVar1 == 2) {
 iStack_10 = iStack_10 + iStack_c;
 }
 else {
 iStack_10 = -1;
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_scanf @ 0x101df0
void param_scanf(unsigned long long param_1)
{
 int iVar1;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf((const char *)param_1,"%d,%d",&local_10,&iStack_c);
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_scanf @ 0x101e60
void call_scanf(void)
{
 int iVar1;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_10,&iStack_c);
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_fopen_fclose @ 0x101ee0
int param_fopen_fclose(char *param_1)
{
 int iVar1;
 FILE *__stream;
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

// Function: call_fopen_fclose @ 0x101f30
unsigned long long call_fopen_fclose(void)
{
 int iVar1;
 FILE *__stream;
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 if (-1 < iVar1) {
 return 0x2a;
 }
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x101f90
unsigned long long param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned long long uVar2;
 long local_28 [2];
 short local_18;
 char local_16;
 long local_8;
 local_8 = ___stack_chk_guard;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_28,1,0x12,__s);
 *(char *)((long)local_28 + sVar1) = 0;
 fclose(__s);
 unlink(param_1);
 if ((((sVar1 == 0x12) && (local_28[0] == 0x68636e65426e6942)) &&
 (local_28[1] == 0x6144207473655420)) && ((local_18 == 0x6174 && (local_16 == '\0')))) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
 return uVar2;
}

// Function: call_fread_fwrite @ 0x1020e0
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: FUN_001020ec @ 0x1020ec
int FUN_001020ec(long param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int *piVar3;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 if (param_1 != 0) {
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar3;
 } while (piVar3 != __ptr + param_1);
 }
 iVar1 = (__ptr + param_1)[-1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: param_malloc_free @ 0x1020f0
int param_malloc_free(long param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int *piVar3;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 if (param_1 != 0) {
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar3;
 } while (piVar3 != __ptr + param_1);
 }
 iVar1 = (__ptr + param_1)[-1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x102160
int call_malloc_free(void)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 100);
 iVar1 = *__ptr + __ptr[9];
 free(__ptr);
 }
 return iVar1;
}

// Function: param_memset @ 0x1021c0
int param_memset(byte *param_1,size_t param_2)
{
 int iVar1;
 byte *pbVar2;
 byte *pbVar3;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar1 = 0;
 pbVar3 = param_1;
 do {
 pbVar2 = pbVar3 + 1;
 iVar1 = iVar1 + (uint)*pbVar3;
 pbVar3 = pbVar2;
 } while (pbVar2 != param_1 + param_2);
 return iVar1;
 }
 return 0;
}

// Function: call_memset @ 0x102220
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x102230
int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar1 = (int)pcVar3 - (int)param_1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = -1;
 if (pcVar3 != (char *)0x0) {
 iVar2 = (int)pcVar3 - (int)param_1;
 }
 return iVar1 + iVar2;
}

// Function: call_strchr_strstr @ 0x102290
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x1022a0
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 int iVar2;
 FILE *__stream;
 int *__ptr;
 unsigned long long uVar3;
 int *piVar4;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(&DAT_00103700);
 __printf_chk(1,&DAT_00103728,8);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_00103748,uVar1);
 __printf_chk(1,&DAT_00103768,0xc);
 __printf_chk(1,&DAT_00103788,0x5a);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_001037a8,uVar1);
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00103698);
 __printf_chk(1,&DAT_001037c8,0);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_10,&iStack_c);
 if (iVar2 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 __printf_chk(1,&DAT_001037e8,local_10);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar3 = 0x2a;
 if (-1 < iVar2) goto LAB_001023d8;
 }
 uVar3 = 0xffffffff;
LAB_001023d8:
 __printf_chk(1,&DAT_00103808,uVar3);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_00103828,uVar1);
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar4 = __ptr;
 do {
 *piVar4 = iVar2;
 iVar2 = iVar2 + 10;
 piVar4 = piVar4 + 1;
 } while (iVar2 != 100);
 iVar2 = *__ptr + __ptr[9];
 free(__ptr);
 }
 __printf_chk(1,&DAT_00103848,iVar2);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_00103868,uVar1);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00103888,0xf);
 }
 return;
}

// Function: param_linux_syscall @ 0x1024c0
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 return uVar1 & 0xffffffff;
 }
 piVar2 = __errno_location();
 return (unsigned long)(uint)-*piVar2;
}

// Function: call_linux_syscall @ 0x102520
unsigned int call_linux_syscall(void)
{
 unsigned long uVar1;
 int *piVar2;
 unsigned int uVar3;
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 return 0x2a;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x102580
void param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 long local_58;
 long local_8;
 struct stat local_stack;
 local_8 = ___stack_chk_guard;
 iVar1 = stat(param_1,&local_stack);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: FUN_001025ec @ 0x1025ec
unsigned int FUN_001025ec(void)
{
 int iVar1;
 unsigned int uVar2;
 long lStack_58;
 long lStack_8;
 struct stat local_stack;
 lStack_8 = ___stack_chk_guard;
 iVar1 = stat("/etc/passwd",&local_stack);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (lStack_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (lStack_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x1025f0
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 long local_58;
 long local_8;
 struct stat local_stack;
 local_8 = ___stack_chk_guard;
 iVar1 = stat("/etc/passwd",&local_stack);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x102664
void param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_c >> 8 & 0xff, (local_c & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_fork_exec @ 0x102720
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0x2a;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: FUN_0010274c @ 0x10274c
void FUN_0010274c(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned int uVar3;
 ssize_t sVar4;
 int iStack_30;
 int iStack_2c;
 char auStack_28 [32];
 long lStack_8;
 lStack_8 = ___stack_chk_guard;
 iVar1 = pipe(&iStack_30);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 uVar3 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(iStack_30);
 write(iStack_2c,"HelloPipe",9);
 close(iStack_2c);
 _exit(0);
 }
 close(iStack_2c);
 sVar4 = read(iStack_30,auStack_28,0x1f);
 auStack_28[sVar4] = 0;
 close(iStack_30);
 wait((int *)0);
 uVar3 = 0x2a;
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
 }
 if (lStack_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_pipe_communication @ 0x102750
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned int uVar3;
 ssize_t sVar4;
 int local_30;
 int local_2c;
 char auStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = pipe(&local_30);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 uVar3 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 _exit(0);
 }
 close(local_2c);
 sVar4 = read(local_30,auStack_28,0x1f);
 auStack_28[sVar4] = 0;
 close(local_30);
 wait((int *)0);
 uVar3 = 0x2a;
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: param_socket_create @ 0x102844
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_1c;
 sockaddr local_18;
 long local_8;
 local_8 = ___stack_chk_guard;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_1c = 1;
 iVar1 = setsockopt(__fd,1,2,&local_1c,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_18.sa_data[6] = '\0';
 local_18.sa_data[7] = '\0';
 local_18.sa_data[8] = '\0';
 local_18.sa_data[9] = '\0';
 local_18.sa_data[10] = '\0';
 local_18.sa_data[11] = '\0';
 local_18.sa_data[12] = '\0';
 local_18.sa_data[13] = '\0';
 local_18.sa_family = 2;
 local_18.sa_data[0] = '\0';
 local_18.sa_data[1] = '\0';
 local_18.sa_data[2] = '\0';
 local_18.sa_data[3] = '\0';
 local_18.sa_data[4] = '\0';
 local_18.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_18,0x10);
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
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
 return uVar2;
}

// Function: param_shmget_shmat @ 0x102954
unsigned long long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__shmaddr;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 __shmaddr = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__shmaddr != (unsigned long long *)0xffffffffffffffff) {
 *__shmaddr = 0x654d646572616853;
 *(unsigned long long *)((long)__shmaddr + 5) = 0x79726f6d654d64;
 shmdt(__shmaddr);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: FUN_00102a0c @ 0x102a0c
unsigned int FUN_00102a0c(void)
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

// Function: call_shmget_shmat @ 0x102a10
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

// Function: param_signal_handling @ 0x102a30
unsigned long param_signal_handling(void)
{
 unsigned long p_Var1;
 int iVar2;
 p_Var1 = (unsigned long)signal(10,signal_handler);
 if (p_Var1 != 0xffffffffffffffff) {
 p_Var1 = (unsigned long)signal(0xe,signal_handler);
 if (p_Var1 == 0xffffffffffffffff) {
 p_Var1 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar2 = 1000;
 do {
 usleep(1000);
 iVar2 = iVar2 + -1;
 if (signal_received != 0) break;
 } while (iVar2 != 0);
 }
 if (signal_received == 0) {
 p_Var1 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar2 = 2000;
 do {
 usleep(1000);
 iVar2 = iVar2 + -1;
 if (signal_received != 0) break;
 } while (iVar2 != 0);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 p_Var1 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 p_Var1 = 0x2a;
 }
 }
 else {
 p_Var1 = 0xfffffffc;
 }
 }
 }
 return p_Var1;
}

// Function: test_system_calls @ 0x102b54
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned long uVar3;
 int *piVar4;
 unsigned int uVar5;
 long local_58;
 long local_8;
 struct stat local_stack;
 local_8 = ___stack_chk_guard;
 puts(&DAT_001038f0);
 uVar3 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if ((int)uVar3 < 0) {
 piVar4 = __errno_location();
 uVar2 = 0x2a;
 if (0 < *piVar4) {
 uVar2 = 0xffffffff;
 }
 }
 else {
 syscall(0x39,uVar3 & 0xffffffff);
 uVar2 = 0x2a;
 }
 __printf_chk(1,&DAT_00103910,uVar2);
 iVar1 = stat("/etc/passwd",&local_stack);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 __printf_chk(1,&DAT_00103930,uVar2);
 iVar1 = param_fork_exec("/bin/true",0);
 uVar5 = 0x2a;
 uVar2 = uVar5;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00103950,uVar2);
 uVar2 = param_pipe_communication();
 __printf_chk(1,&DAT_00103970,uVar2);
 uVar2 = param_socket_create();
 __printf_chk(1,&DAT_00103990,uVar2);
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar5 = 0xffffffff;
 }
 __printf_chk(1,&DAT_001039b0,uVar5);
 uVar2 = param_signal_handling();
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_001039d0,uVar2);
}

// Function: FUN_00102ccc @ 0x102ccc
unsigned int FUN_00102ccc(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uStack_1c;
 pthread_t pStack_18;
 unsigned int *puStack_10;
 long lStack_8;
 lStack_8 = ___stack_chk_guard;
 uStack_1c = param_1;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,(void *)&uStack_1c);
 if (iVar1 == 0) {
 pthread_join(pStack_18,(void **)&puStack_10);
 uVar2 = *puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_pthread_create @ 0x102cd0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,(void *)&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_pthread_create @ 0x102d64
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_1c = 7;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,&local_1c);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_18,(void **)&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_pthread_join @ 0x102e00
int param_pthread_join(void)
{
 long lVar1;
 int iVar2;
 pthread_t *__newthread;
 long lVar3;
 pthread_t *__arg;
 pthread_t *ppVar4;
 int iVar5;
 pthread_t local_48 [4];
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 __arg = local_48 + 3;
 iVar5 = 3;
 ppVar4 = local_48;
 local_8 = ___stack_chk_guard;
 local_10 = 0;
 uStack_28 = 0xb00000000;
 local_48[3] = 0xa00000001;
 uStack_18 = 0x1e00000015;
 uStack_20 = 0x14;
 __newthread = ppVar4;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,(__start_routine)thread_sum,__arg);
 if (iVar2 != 0) {
 iVar5 = -1;
 goto LAB_00102ec0;
 }
 __newthread = __newthread + 1;
 __arg = (pthread_t *)((long)__arg + 0xc);
 iVar5 = iVar5 + -1;
 } while (iVar5 != 0);
 iVar5 = 0;
 lVar3 = 0;
 do {
 iVar2 = pthread_join(*ppVar4,(void **)0x0);
 if (iVar2 != 0) {
 iVar5 = -2;
 break;
 }
 lVar1 = lVar3 + 0xc;
 ppVar4 = ppVar4 + 1;
 iVar5 = iVar5 + *(int *)((long)&uStack_28 + lVar3);
 lVar3 = lVar1;
 } while (lVar1 != 0x24);
LAB_00102ec0:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar5;
 }
 __stack_chk_fail();
}

// Function: param_mutex_lock @ 0x102f14
unsigned int param_mutex_lock(unsigned long param_1,int param_2)
{
 pthread_t *ppVar1;
 int iVar2;
 unsigned int uVar3;
 pthread_t *__ptr;
 pthread_t *ppVar4;
 pthread_t *ppVar5;
 int iVar6;
 int local_4;
 local_4 = param_2;
 __ptr = (pthread_t *)
 malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 iVar6 = (int)(param_1 & 0xffffffff);
 if (0 < iVar6) {
 ppVar4 = __ptr;
 do {
 ppVar1 = ppVar4 + 1;
 iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,(__start_routine)thread_increment,&local_4);
 if (iVar2 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar4 = ppVar1;
 ppVar5 = __ptr;
 } while (ppVar1 != __ptr + (param_1 & 0xffffffff));
 do {
 ppVar4 = ppVar5 + 1;
 pthread_join(*ppVar5,(void **)0x0);
 ppVar5 = ppVar4;
 } while (ppVar4 != __ptr + (param_1 & 0xffffffff));
 }
 free(__ptr);
 uVar3 = 0x2a;
 if (shared_counter != iVar6 * local_4) {
 uVar3 = 0xfffffffd;
 }
 }
 return uVar3;
}

// Function: call_mutex_lock @ 0x103020
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: FUN_0010302c @ 0x10302c
unsigned int FUN_0010302c(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t pStack_20;
 pthread_t pStack_18;
 unsigned int *puStack_10;
 long lStack_8;
 lStack_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,(void *(*)(void *))consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&pStack_20,(pthread_attr_t *)0x0,(void *(*)(void *))producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(pStack_18,(void **)&puStack_10);
 pthread_join(pStack_20,(void **)0x0);
 uVar2 = *puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xfffffffe;
 pthread_cancel(pStack_18);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (lStack_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_condition_variable @ 0x103030
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,(void *(*)(void *))producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 pthread_join(local_20,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xfffffffe;
 pthread_cancel(local_18);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_atomic_ops @ 0x103110
unsigned int param_atomic_ops(unsigned long param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *__ptr;
 pthread_t *ppVar4;
 long lVar5;
 unsigned int local_14;
 pthread_t local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_14 = param_2;
 __ptr = (pthread_t *)
 malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter = 0;
 iVar3 = (int)(param_1 & 0xffffffff);
 if (iVar3 < 1) {
 iVar3 = pthread_create(&local_10,(pthread_attr_t *)0x0,(void *(*)(void *))thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 }
 else {
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,(__start_routine)thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001031c0;
 }
 ppVar4 = ppVar4 + 1;
 } while (ppVar4 != __ptr + (param_1 & 0xffffffff));
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,(__start_routine)thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 lVar5 = 0;
 do {
 ppVar4 = __ptr + lVar5;
 lVar5 = lVar5 + 1;
 pthread_join(*ppVar4,(void **)0x0);
 } while ((int)lVar5 < iVar3);
 }
 iVar3 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar3 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001031c0:
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x1032b0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: FUN_001032bc @ 0x1032bc
void FUN_001032bc(uint param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t *__ptr;
 void **__ptr_00;
 void *pvVar3;
 unsigned long uVar4;
 unsigned long uVar5;
 void **ppvVar6;
 pthread_t *__newthread;
 long lVar8;
 int iVar9;
 unsigned long uVar10;
 int *piStack_10;
 long lStack_8;
 void **ppvVar7;
 uVar10 = (unsigned long)(int)param_1;
 lStack_8 = ___stack_chk_guard;
 uVar5 = -(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (unsigned long)param_1 << 3;
 __ptr = (pthread_t *)malloc(uVar5);
 __ptr_00 = (void **)malloc(uVar5);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void **)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if ((int)param_1 < 1) {
 iVar9 = 0;
 iVar1 = 0;
 }
 else {
 uVar5 = 0;
 do {
 pvVar3 = malloc(0x10);
 __ptr_00[uVar5] = pvVar3;
 uVar4 = uVar5 & 0xffffffff;
 uVar5 = uVar5 + 1;
 __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4);
 } while (uVar5 != uVar10);
 uVar5 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(__start_routine)thread_tls_test,__ptr_00[uVar5]);
 if (iVar1 != 0) {
 ppvVar6 = __ptr_00;
 do {
 ppvVar7 = ppvVar6 + 1;
 free(*ppvVar6);
 ppvVar6 = ppvVar7;
 } while (__ptr_00 + uVar5 + 1 != ppvVar7);
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001033d8;
 }
 uVar5 = uVar5 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar10);
 iVar9 = 0;
 lVar8 = 0;
 iVar1 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar8),(void **)&piStack_10);
 iVar1 = iVar1 + *piStack_10;
 iVar9 = iVar9 + piStack_10[1];
 free(piStack_10);
 ppvVar6 = (void **)((long)__ptr_00 + lVar8);
 lVar8 = lVar8 + 8;
 free(*ppvVar6);
 } while (lVar8 != uVar5 * 8);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (param_1 * 100 != iVar1 || param_1 * 0x96 != iVar9) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001033d8:
 if (lStack_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_thread_local_storage @ 0x1032c0
unsigned int param_thread_local_storage(uint param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t *__ptr;
 void **__ptr_00;
 void *pvVar3;
 unsigned long uVar4;
 unsigned long uVar5;
 void **ppvVar6;
 pthread_t *__newthread;
 long lVar8;
 int iVar9;
 unsigned long uVar10;
 int *local_10;
 long local_8;
 void **ppvVar7;
 uVar10 = (unsigned long)(int)param_1;
 local_8 = ___stack_chk_guard;
 uVar5 = -(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (unsigned long)param_1 << 3;
 __ptr = (pthread_t *)malloc(uVar5);
 __ptr_00 = (void **)malloc(uVar5);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void **)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 if ((int)param_1 < 1) {
 iVar9 = 0;
 iVar1 = 0;
 }
 else {
 uVar5 = 0;
 do {
 pvVar3 = malloc(0x10);
 __ptr_00[uVar5] = pvVar3;
 uVar4 = uVar5 & 0xffffffff;
 uVar5 = uVar5 + 1;
 __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4);
 } while (uVar5 != uVar10);
 uVar5 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(__start_routine)thread_tls_test,__ptr_00[uVar5]);
 if (iVar1 != 0) {
 ppvVar6 = __ptr_00;
 do {
 ppvVar7 = ppvVar6 + 1;
 free(*ppvVar6);
 ppvVar6 = ppvVar7;
 } while (__ptr_00 + uVar5 + 1 != ppvVar7);
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001033d8;
 }
 uVar5 = uVar5 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar10);
 iVar9 = 0;
 lVar8 = 0;
 iVar1 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar8),(void **)&local_10);
 iVar1 = iVar1 + *local_10;
 iVar9 = iVar9 + local_10[1];
 free(local_10);
 ppvVar6 = (void **)((long)__ptr_00 + lVar8);
 lVar8 = lVar8 + 8;
 free(*ppvVar6);
 } while (lVar8 != uVar5 * 8);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (param_1 * 100 != iVar1 || param_1 * 0x96 != iVar9) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001033d8:
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
 return uVar2;
}

// Function: call_thread_local_storage @ 0x1034a4
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: FUN_001034ac @ 0x1034ac
void FUN_001034ac(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uStack_1c;
 pthread_t pStack_18;
 unsigned int *puStack_10;
 long lStack_8;
 lStack_8 = ___stack_chk_guard;
 puts(&DAT_00103a00);
 uStack_1c = 7;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,(void *)&uStack_1c);
 if (iVar1 == 0) {
 pthread_join(pStack_18,(void **)&puStack_10);
 uVar2 = *puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00103a20,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_00103a40,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,&DAT_00103a60,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_00103a80,uVar2);
 uVar2 = param_atomic_ops(4,500);
 __printf_chk(1,&DAT_00103aa0,uVar2);
 uVar2 = param_thread_local_storage(4);
 if (lStack_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00103ac0,uVar2);
 return;
 }
 __stack_chk_fail();
}

// Function: test_thread_concurrency @ 0x1034b0
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(&DAT_00103a00);
 local_1c = 7;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00103a20,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_00103a40,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,&DAT_00103a60,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_00103a80,uVar2);
 uVar2 = param_atomic_ops(4,500);
 __printf_chk(1,&DAT_00103aa0,uVar2);
 uVar2 = param_thread_local_storage(4);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00103ac0,uVar2);
 return;
 }
 __stack_chk_fail();
}

// Function: __aarch64_cas4_acq_rel @ 0x1035f0
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 if (__aarch64_have_lse_atomics != '\0') {
 iVar3 = *param_3;
 if (iVar3 == param_1) {
 *param_3 = param_2;
 }
 return iVar3;
 }
 do {
 iVar3 = *param_3;
 if (*param_3 != param_1) {
 return iVar3;
 }
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
 if (bVar2) {
 *param_3 = param_2;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x103630
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar1 = *param_2;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar3) {
 *param_2 = iVar1 + param_1;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
 }
 LOAcquire();
 tmp_ldWn = *param_2;
 iVar1 = tmp_ldWn;
 tmp_stWn = iVar1 + param_1;
 iVar1 = tmp_stWn;
 *param_2 = iVar1;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}

// Function: _fini @ 0x103660
void _fini(void)
{
 return;
}

