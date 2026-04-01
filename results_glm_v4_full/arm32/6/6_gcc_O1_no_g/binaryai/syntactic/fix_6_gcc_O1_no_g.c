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

/* Additional type definitions needed for compilation */
typedef unsigned int uint;
typedef unsigned long pthread_t;
typedef struct _IO_FILE FILE;
typedef int __pid_t;
typedef _Bool bool;
typedef unsigned char byte;

/* NULL definition */
#define NULL ((void*)0)

/* Forward declarations for pthread types */
struct pthread_attr_t;
typedef struct pthread_attr_t pthread_attr_t;

struct pthread_mutex_t;
typedef struct pthread_mutex_t pthread_mutex_t;

struct pthread_cond_t;
typedef struct pthread_cond_t pthread_cond_t;

#define SIG_ERR ((__sighandler_t)-1)

typedef void (*__sighandler_t)(int);
typedef void (*__start_routine)(void *);
typedef unsigned int (*atomic_cmp_func)(unsigned int, unsigned int, void *);
typedef void (*atomic_barrier_func)(void);

/* Other POSIX types */
typedef int key_t;
typedef unsigned int socklen_t;
typedef unsigned int __useconds_t;
typedef unsigned long long ulonglong;

/* External function declarations */
extern atomic_cmp_func SUB_ffff0fc0;
extern atomic_barrier_func SUB_ffff0fa0;
extern int main(int, char **, char **);
extern void __gmon_start__(void);
extern unsigned long long __aeabi_read_tp(unsigned long long, unsigned long long);
extern int vsscanf(const char *__str, const char *__format, __builtin_va_list __arg);
extern int vprintf(const char *__format, __builtin_va_list __arg);
extern int vsnprintf(char *__str, size_t __n, const char *__format, __builtin_va_list __arg);
extern void __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av,
                              void (*init)(void), void (*fini)(void), void (*rtld_fini)(void),
                              void *stack_end);
extern void __sync_synchronize(void);
extern unsigned int call_malloc_free(void);
extern int param_pipe_communication(void);
extern int param_socket_create(void);
extern unsigned int call_shmget_shmat(void);
typedef __builtin_va_list va_list;
#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_end(ap) __builtin_va_end(ap)
#define va_copy(dest, src) __builtin_va_copy(dest, src)

/* Stack pointer placeholder */
void *stack0x00000004;

/* Global variables */
extern char completed_0;
extern int signal_received;
extern int signal_number;
extern int counter_mutex;
extern int shared_counter;
extern int cond_mutex;
extern int cond;
extern int data;
extern int ready;
extern int atomic_counter;

/* Data variables */
extern char DAT_00013850;
extern char DAT_00013854;
extern char DAT_00013858;
extern char DAT_0001385c;
extern char DAT_00013860;
extern char DAT_0001387c;
extern char DAT_000138f0;
extern char DAT_00013914;
extern char DAT_00013930;
extern char DAT_0001394c;
extern char DAT_00013968;
extern char DAT_00013984;
extern char DAT_000139a0;
extern char DAT_000139bc;
extern char DAT_000139dc;
extern char DAT_000139f8;
extern char DAT_00013a14;
extern char DAT_00013a30;
extern char DAT_00013a4c;
extern char DAT_00013aa4;
extern char DAT_00013ac0;
extern char DAT_00013adc;
extern char DAT_00013af8;
extern char DAT_00013b14;
extern char DAT_00013b30;
extern char DAT_00013b4c;
extern char DAT_00013b68;
extern char DAT_00013b90;
extern char DAT_00013bb0;
extern char DAT_00013bcc;
extern char DAT_00013bec;
extern char DAT_00013c08;
extern char DAT_00013c24;
extern char DAT_00013c40;

struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};
typedef struct sockaddr sockaddr;

struct shmid_ds;
typedef struct shmid_ds shmid_ds;

struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long __pad0;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    struct {
        long tv_sec;
        long tv_nsec;
    } st_atim, st_mtim, st_ctim;
    long __glibc_reserved[3];
};

// Decompiled by BinaryAI
// SHA256: 1940ae08e7e1e5af4cb93e0220fdcad0c0111fb471cbf91edf824b0697a52027

// Function: _init @ 0x10c9c
void _init(void *ctx)
{
 call_weak_fn();
 return;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x10cbc
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::strstr @ 0x10cc8
extern char * strstr(char *__haystack,char *__needle);

// Function: <EXTERNAL>::raise @ 0x10cd4
extern int raise(int __sig);

// Function: <EXTERNAL>::__libc_start_main @ 0x10ce0
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av,
                       void (*init)(void), void (*fini)(void), void (*rtld_fini)(void),
                       void *stack_end)
{
 __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x10cec
extern int strcmp(char *__s1,char *__s2);

// Function: <EXTERNAL>::setsockopt @ 0x10cf8
extern int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);

// Function: <EXTERNAL>::fopen @ 0x10d04
extern FILE * fopen(char *__filename,char *__modes);

// Function: <EXTERNAL>::read @ 0x10d10
extern ssize_t read(int __fd,void *__buf,size_t __nbytes);

// Function: <EXTERNAL>::free @ 0x10d1c
extern void free(void *__ptr);

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x10d28
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::_exit @ 0x10d34
extern void _exit(int __status);

// Function: <EXTERNAL>::memcpy @ 0x10d40
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::shmget @ 0x10d4c
extern int shmget(key_t __key,size_t __size,int __shmflg);

// Function: <EXTERNAL>::signal @ 0x10d58
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::memcmp @ 0x10d64
extern int memcmp(void *__s1,void *__s2,size_t __n);

// Function: <EXTERNAL>::sleep @ 0x10d70
extern uint sleep(uint __seconds);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10d7c
extern void __stack_chk_fail(void);

// Function: <EXTERNAL>::rewind @ 0x10d88
extern void rewind(FILE *__stream);

// Function: <EXTERNAL>::alarm @ 0x10d94
extern uint alarm(uint __seconds);

// Function: <EXTERNAL>::unlink @ 0x10da0
extern int unlink(char *__name);

// Function: <EXTERNAL>::wait @ 0x10dac
extern __pid_t wait(void *__stat_loc);

// Function: <EXTERNAL>::shmat @ 0x10db8
extern void * shmat(int __shmid,void *__shmaddr,int __shmflg);

// Function: <EXTERNAL>::fwrite @ 0x10dc4
extern size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);

// Function: <EXTERNAL>::usleep @ 0x10dd0
extern int usleep(__useconds_t __useconds);

// Function: <EXTERNAL>::waitpid @ 0x10ddc
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);

// Function: <EXTERNAL>::strcpy @ 0x10de8
extern char * strcpy(char *__dest,char *__src);

// Function: <EXTERNAL>::fread @ 0x10df4
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);

// Function: <EXTERNAL>::shmctl @ 0x10e00
extern int shmctl(int __shmid,int __cmd,shmid_ds *__buf);

// Function: <EXTERNAL>::puts @ 0x10e0c
extern int puts(char *__s);

// Function: <EXTERNAL>::malloc @ 0x10e18
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::stat @ 0x10e30
extern int stat(char *__file,struct stat *__buf);

// Function: <EXTERNAL>::open @ 0x10e3c
extern int open(char *__file,int __oflag,...);

// Function: <EXTERNAL>::syscall @ 0x10e48
extern long syscall(long __sysno,...);

// Function: <EXTERNAL>::strlen @ 0x10e54
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::strchr @ 0x10e60
extern char * strchr(char *__s,int __c);

// Function: <EXTERNAL>::__errno_location @ 0x10e6c
extern int * __errno_location(void);

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x10e78
int __isoc99_sscanf(const char *__str, const char *__format, ...)
{
 int iVar1;
 va_list __arg;
 va_start(__arg, __format);
 iVar1 = vsscanf(__str, __format, __arg);
 va_end(__arg);
 return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x10e84
extern int bind(int __fd,sockaddr *__addr,socklen_t __len);

// Function: <EXTERNAL>::memset @ 0x10e90
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::strncpy @ 0x10e9c
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::__printf_chk @ 0x10ea8
int __printf_chk(int __flag, const char *__format, ...)
{
 int iVar1;
 va_list __arg;
 va_start(__arg, __format);
 iVar1 = vprintf(__format, __arg);
 va_end(__arg);
 return iVar1;
}

// Function: <EXTERNAL>::write @ 0x10eb4
extern ssize_t write(int __fd,void *__buf,size_t __n);

// Function: <EXTERNAL>::fileno @ 0x10ec0
extern int fileno(FILE *__stream);

// Function: <EXTERNAL>::shmdt @ 0x10ecc
extern int shmdt(void *__shmaddr);

// Function: <EXTERNAL>::fclose @ 0x10ed8
extern int fclose(FILE *__stream);

// Function: <EXTERNAL>::pipe @ 0x10ee4
extern int pipe(int *__pipedes);

// Function: <EXTERNAL>::pthread_create @ 0x10ef0
extern int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg);

// Function: <EXTERNAL>::fork @ 0x10efc
extern __pid_t fork(void);

// Function: <EXTERNAL>::execl @ 0x10f08
extern int execl(char *__path,char *__arg,...);

// Function: <EXTERNAL>::listen @ 0x10f14
extern int listen(int __fd,int __n);

// Function: <EXTERNAL>::ftok @ 0x10f20
extern key_t ftok(char *__pathname,int __proj_id);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x10f2c
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::socket @ 0x10f38
extern int socket(int __domain,int __type,int __protocol);

// Function: <EXTERNAL>::pthread_join @ 0x10f44
extern int pthread_join(pthread_t __th,void **__thread_return);

// Function: <EXTERNAL>::pthread_cancel @ 0x10f50
extern int pthread_cancel(pthread_t __th);

// Function: <EXTERNAL>::pthread_cond_signal @ 0x10f5c
extern int pthread_cond_signal(pthread_cond_t *__cond);

// Function: <EXTERNAL>::abort @ 0x10f68
extern void abort(void);

// Function: <EXTERNAL>::close @ 0x10f74
extern int close(int __fd);

// Function: <EXTERNAL>::__snprintf_chk @ 0x10f80
int __snprintf_chk(char *__str, size_t __n, int __flag, size_t __slen, const char *__format, ...)
{
 int iVar1;
 va_list __arg;
 va_start(__arg, __format);
 iVar1 = vsnprintf(__str, __n, __format, __arg);
 va_end(__arg);
 return iVar1;
}

// Function: _start @ 0x10f90
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main((int (*)(int, char **, char **))main,(int)param_2,(char **)&stack0x00000004,0,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x10fd4
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x10ff8
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11024
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1105c
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: signal_handler @ 0x11088
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x110a0
void *thread_sum(int *param_1)
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
 return NULL;
}

// Function: thread_compute @ 0x110dc
void *thread_compute(int *param_1)
{
 int *piVar1;
 int iVar2;
 iVar2 = *param_1;
 piVar1 = (int *)malloc(4);
 *piVar1 = iVar2 * iVar2;
 return piVar1;
}

// Function: thread_increment @ 0x11100
void *thread_increment(int *param_1)
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
 return NULL;
}

// Function: consumer_thread @ 0x1115c
void *consumer_thread(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x111bc
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

// Function: thread_atomic_increment @ 0x11204
void *thread_atomic_increment(int *param_1)
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
 return NULL;
}

// Function: thread_atomic_load_store @ 0x11298
unsigned int thread_atomic_load_store(void)
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

// Function: thread_tls_test @ 0x112c8
void *thread_tls_test(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 unsigned long long uVar5;
 uVar5 = __aeabi_read_tp(param_1,param_1);
 iVar1 = (int)uVar5;
 iVar4 = *(int *)(iVar1 + 8);
 iVar3 = iVar4 + 0x32;
 *(int *)(iVar1 + 8) = iVar3;
 strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar5 >> 0x20),0x1f);
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar4;
 piVar2[1] = iVar3;
 return NULL;
}

// Function: param_strcpy @ 0x11310
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x11328
void call_strcpy(void)
{
 char auStack_2c [32];
 int local_c;
 local_c = 0;
 param_strcpy(auStack_2c,"HelloLib");
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_strcmp @ 0x11378
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

// Function: call_strcmp @ 0x11390
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

// Function: param_strlen @ 0x113e0
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x113ec
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: call_memcpy @ 0x11390
void call_memcpy(void)
{
 unsigned int local_34;
 unsigned int uStack_30;
 unsigned int uStack_2c;
 unsigned int uStack_28;
 unsigned int local_24;
 int local_20;
 unsigned int local_1c;
 int local_18;
 unsigned int local_14;
 int local_10;
 int local_c;
 local_c = 0;
 local_34 = 10;
 uStack_30 = 0x14;
 uStack_2c = 0x1e;
 uStack_28 = 0x28;
 local_24 = 0x32;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_10 = 0;
 memcpy(&local_20,&local_34,0x14);
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_memcmp @ 0x114a0
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

// Function: call_memcmp @ 0x114b8
void call_memcmp(void)
{
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned int local_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
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
 return;
 }
 __stack_chk_fail();
}

// Function: param_printf @ 0x11554
void param_printf(unsigned int param_1,unsigned int param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x11574
void call_printf(void)
{
 param_printf(0x2a,&DAT_0001387c);
 return;
}

// Function: param_scanf @ 0x1158c
void param_scanf(unsigned int param_1)
{
 unsigned long long uVar1;
 int iStack_14;
 int iStack_10;
 int local_c;
 local_c = 0;
 uVar1 = __isoc99_sscanf(param_1,"%d,%d",&iStack_14,&iStack_10);
 if ((int)uVar1 == 2) {
 iStack_14 = iStack_14 + iStack_10;
 }
 else {
 iStack_14 = -1;
 }
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_scanf @ 0x115f4
void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x11608
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

// Function: call_fopen_fclose @ 0x11644
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x11664
void param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 unsigned int uVar3;
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
 __stack_chk_fail();
 }
 return;
}

// Function: call_fread_fwrite @ 0x1175c
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_memset @ 0x117e8
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

// Function: call_memset @ 0x11834
void call_memset(void)
{
 unsigned int extraout_r1;
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
 return;
 }
 __stack_chk_fail();
}

// Function: param_strchr_strstr @ 0x118a4
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

// Function: call_strchr_strstr @ 0x118e0
void call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}

// Function: test_standard_library_functions @ 0x11900
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 puts(&DAT_000138f0);
 call_strcpy();
 __printf_chk(1,&DAT_00013914,0);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_00013930,uVar1);
 uVar1 = call_strlen();
 __printf_chk(1,&DAT_0001394c,uVar1);
 call_memcpy();
 __printf_chk(1,&DAT_00013968,0);
 call_memcmp();
 __printf_chk(1,&DAT_00013984,0);
 call_printf();
 __printf_chk(1,&DAT_000139a0,0);
 call_scanf();
 __printf_chk(1,&DAT_000139bc,0);
 uVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_000139dc,uVar1);
 call_fread_fwrite();
 __printf_chk(1,&DAT_000139f8,0);
 uVar1 = 0x2a;
 call_malloc_free();
 __printf_chk(1,&DAT_00013a14,uVar1);
 call_memset();
 __printf_chk(1,&DAT_00013a30,0);
 call_strchr_strstr();
 __printf_chk(1,&DAT_00013a4c,0);
 return;
}

// Function: call_malloc_free @ 0x119e8
unsigned int call_malloc_free(void)
{
 void *pvVar1;
 pvVar1 = malloc(0x1000);
 if (pvVar1 != (void *)0x0) {
 free(pvVar1);
 return 0x2a;
 }
 return 0xffffffff;
}

// Function: param_linux_syscall @ 0x11a34
int param_linux_syscall(unsigned int param_1)
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

// Function: call_linux_syscall @ 0x11a74
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x11a94
int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_68;
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
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x11afc
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x11b10
int param_fork_exec(char *param_1,unsigned int param_2)
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
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x11bb8
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x11bdc
int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 int local_3c;
 int local_38;
 char auStack_34 [32];
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
 _exit(0);
 }
 close(local_38);
 sVar3 = read(local_3c,auStack_34,0x1f);
 auStack_34[sVar3] = 0;
 close(local_3c);
 wait((void *)0x0);
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 else {
 uVar4 = 0x2a;
 }
 }
 }
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 return uVar4;
}

// Function: call_pipe_communication @ 0x11cc0
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x11ccc
int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 unsigned int local_20;
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
 local_1c.sa_data[11] = '\0';
 local_1c.sa_data[12] = '\0';
 local_1c.sa_data[13] = '\0';
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
 __stack_chk_fail();
}

// Function: call_socket_create @ 0x11dd8
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x11de4
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
 __s = (char *)shmat(iVar1,(void *)0x0,0);
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

// Function: call_shmget_shmat @ 0x11eb0
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x11ec8
unsigned int param_signal_handling(void)
{
 __sighandler_t p_Var1;
 int iVar2;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == SIG_ERR) {
 return 0xffffffff;
 }
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == SIG_ERR) {
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

// Function: call_signal_handling @ 0x1201c
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x12028
void test_system_calls(void)
{
 unsigned int uVar1;
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

// Function: param_pthread_create @ 0x120e4
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_18;
 unsigned int local_14;
 unsigned int *local_10;
 int local_c;
 local_c = 0;
 local_14 = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_14);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_c == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_pthread_create @ 0x1216c
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: param_pthread_join @ 0x1217c
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 pthread_t *ppVar5;
 pthread_t apStack_5c [3];
 pthread_t local_50;
 unsigned int uStack_4c;
 unsigned int local_48;
 unsigned int uStack_44;
 unsigned int local_40;
 unsigned int uStack_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int local_30;
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
 iVar2 = pthread_join(*ppVar3,NULL);
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
 __stack_chk_fail();
}

// Function: call_pthread_join @ 0x12270
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: param_mutex_lock @ 0x1227c
void param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *ppVar2;
 int iVar3;
 bool bVar4;
 int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
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
 iVar1 = iVar1 + 1;
 bVar4 = iVar1 < param_1;
 } while (bVar4);
 }
 free(__ptr);
 }
 return;
}

// Function: call_mutex_lock @ 0x12360
unsigned int call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return 0x2a;
}

// Function: param_condition_variable @ 0x12374
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_18;
 pthread_t local_14;
 unsigned int *local_10;
 int local_c;
 local_c = 0;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,(void **)&local_10);
 pthread_join(local_18,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 iVar1 = (int)pthread_cancel(local_14);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_c == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_condition_variable @ 0x12444
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: param_atomic_ops @ 0x12450
void param_atomic_ops(int param_1,unsigned int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *ppVar2;
 int iVar3;
 unsigned int local_2c;
 pthread_t local_28;
 int local_24;
 local_24 = 0;
 local_2c = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
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
 __stack_chk_fail();
}

// Function: call_atomic_ops @ 0x125c0
unsigned int call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return 0x2a;
}

// Function: param_thread_local_storage @ 0x125d4
void param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void *__ptr_00;
 void *pvVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 void **ppvVar5;
 pthread_t *ppVar6;
 void **ppvVar7;
 bool bVar8;
 int *local_30;
 int local_2c;
 int iVar3;
 local_2c = 0;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 __ptr_00 = malloc(param_1 << 2);
 if (__ptr_00 != (void *)0x0 && __ptr != (pthread_t *)0x0) {
 if (0 < param_1) {
 ppvVar7 = (void **)((int)__ptr_00 + -4);
 iVar4 = 0;
 ppvVar5 = ppvVar7;
 do {
 iVar3 = iVar4;
 pvVar1 = malloc(0x10);
 ppvVar5 = ppvVar5 + 1;
 *ppvVar5 = pvVar1;
 __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar3);
 iVar4 = iVar3 + 1;
 } while (param_1 != iVar3 + 1);
 iVar4 = 0;
 ppVar6 = __ptr;
 ppvVar5 = ppvVar7;
 do {
 ppvVar5 = ppvVar5 + 1;
 iVar2 = pthread_create(ppVar6,(pthread_attr_t *)0x0,thread_tls_test,*ppvVar5);
 if (iVar2 != 0) {
 if (-1 < iVar4) {
 do {
 ppvVar7 = ppvVar7 + 1;
 free(*ppvVar7);
 } while (ppvVar7 != (void **)((int)__ptr_00 + iVar4 * 4));
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
 ppvVar7 = ppvVar7 + 1;
 free(*ppvVar7);
 iVar4 = iVar4 + 1;
 bVar8 = iVar4 < param_1;
 } while (bVar8);
 }
 free(__ptr_00);
 free(__ptr);
 }
LAB_00012740:
 if (local_2c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_thread_local_storage @ 0x127bc
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x127cc
void test_thread_concurrency(void)
{
 unsigned int uVar1;
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
 call_thread_local_storage();
 __printf_chk(1,&DAT_00013c40,0x2a);
 return;
}

// Function: main @ 0x12870
int main(int argc, char **argv, char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __sync_fetch_and_add_4 @ 0x12888
int __sync_fetch_and_add_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = (int)SUB_ffff0fc0((unsigned int)iVar2,(unsigned int)(iVar2 + param_2),param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_sub_4 @ 0x128c0
int __sync_fetch_and_sub_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = (int)SUB_ffff0fc0((unsigned int)iVar2,(unsigned int)(iVar2 - param_2),param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_or_4 @ 0x128f8
uint __sync_fetch_and_or_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (int)SUB_ffff0fc0(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_and_4 @ 0x12930
uint __sync_fetch_and_and_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (int)SUB_ffff0fc0(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_xor_4 @ 0x12968
uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (int)SUB_ffff0fc0(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_nand_4 @ 0x129a0
uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (int)SUB_ffff0fc0(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_add_2 @ 0x129dc
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_sub_2 @ 0x12a3c
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_or_2 @ 0x12a9c
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_and_2 @ 0x12afc
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_xor_2 @ 0x12b5c
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_nand_2 @ 0x12bbc
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_add_1 @ 0x12c20
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_sub_1 @ 0x12c7c
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_or_1 @ 0x12cd8
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_and_1 @ 0x12d34
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_xor_1 @ 0x12d90
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_nand_1 @ 0x12dec
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
 iVar3 = SUB_ffff0fc0
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_add_and_fetch_4 @ 0x12e4c
int __sync_add_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_sub_and_fetch_4 @ 0x12e84
int __sync_sub_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_or_and_fetch_4 @ 0x12ebc
uint __sync_or_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_and_and_fetch_4 @ 0x12ef4
uint __sync_and_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_xor_and_fetch_4 @ 0x12f2c
uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_nand_and_fetch_4 @ 0x12f64
uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = SUB_ffff0fc0(*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_add_and_fetch_2 @ 0x12fa0
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_2 @ 0x13008
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_2 @ 0x13070
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_2 @ 0x130d8
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_2 @ 0x13140
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_2 @ 0x131a8
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_add_and_fetch_1 @ 0x13214
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_1 @ 0x13278
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_1 @ 0x132dc
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_1 @ 0x13340
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_1 @ 0x133a4
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_1 @ 0x13408
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
 iVar3 = SUB_ffff0fc0(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_val_compare_and_swap_4 @ 0x13470
int __sync_val_compare_and_swap_4(volatile int *param_1,int param_2,int param_3)
{
 int iVar1;
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = SUB_ffff0fc0((unsigned int)*param_1,(unsigned int)param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_2 @ 0x134c0
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
 return uVar1;
 }
 iVar3 = SUB_ffff0fc0
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_1 @ 0x13538
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
 return uVar1;
 }
 iVar3 = SUB_ffff0fc0
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_bool_compare_and_swap_4 @ 0x135ac
bool __sync_bool_compare_and_swap_4(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_4((int *)param_1, (int)param_2, (int)param_3);
 return iVar1 == param_2;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x135d8
bool __sync_bool_compare_and_swap_2(unsigned short *param_1,unsigned short param_2,unsigned short param_3)
{
 unsigned int iVar1;
 iVar1 = __sync_val_compare_and_swap_2((unsigned int)(uintptr_t)param_1, (unsigned int)param_2, (int)param_3);
 return (bool)(iVar1 == (unsigned int)param_2);
}

// Function: __sync_bool_compare_and_swap_1 @ 0x135f4
bool __sync_bool_compare_and_swap_1(unsigned char *param_1,unsigned char param_2,unsigned char param_3)
{
 unsigned int iVar1;
 iVar1 = __sync_val_compare_and_swap_1((unsigned int)(uintptr_t)param_1, (unsigned int)param_2, (int)param_3);
 return (bool)(iVar1 == (unsigned int)param_2);
}

// Function: __sync_lock_test_and_set_4 @ 0x1361c
unsigned int __sync_lock_test_and_set_4(unsigned int *param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_lock_test_and_set_2 @ 0x13654
int __sync_lock_test_and_set_2(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_test_and_set_1 @ 0x136b4
int __sync_lock_test_and_set_1(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_release_8 @ 0x13710
void __sync_lock_release_8(unsigned int *param_1)
{
 __sync_synchronize();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}

// Function: __sync_lock_release_4 @ 0x13734
void __sync_lock_release_4(unsigned int *param_1)
{
 __sync_synchronize();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_2 @ 0x13754
void __sync_lock_release_2(unsigned short *param_1)
{
 __sync_synchronize();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_1 @ 0x13774
void __sync_lock_release_1(char *param_1)
{
 __sync_synchronize();
 *param_1 = 0;
 return;
}

// Function: _fini @ 0x137a8
void _fini(void)
{
 return;
}

