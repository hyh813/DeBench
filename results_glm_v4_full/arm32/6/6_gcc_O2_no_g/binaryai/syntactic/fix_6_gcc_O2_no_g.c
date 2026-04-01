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
/* intptr_t removed - conflicts with system headers */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long long ulonglong;

#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>
#include <signal.h>
#include <stdbool.h>
#include <stdarg.h>

// Decompiled by BinaryAI
// SHA256: c1f1102488f33c4c44112ffd8b80502a18b3714fdfb4041a818f616bf74c017a

// Global variable declarations
int completed_0 = 0;
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
unsigned int data = 0;
unsigned int ready = 0;
unsigned long stack0x00000004 = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
void *DAT_000139fc = (void *)0x139fc;
void *DAT_00013a54 = (void *)0x13a54;
void *DAT_00013a78 = (void *)0x13a78;
void *DAT_00013a94 = (void *)0x13a94;
void *DAT_00013ab0 = (void *)0x13ab0;
void *DAT_00013acc = (void *)0x13acc;
void *DAT_00013ae8 = (void *)0x13ae8;
void *DAT_00013b04 = (void *)0x13b04;
void *DAT_00013b20 = (void *)0x13b20;
void *DAT_00013b40 = (void *)0x13b40;
void *DAT_00013b5c = (void *)0x13b5c;
void *DAT_00013b78 = (void *)0x13b78;
void *DAT_00013b94 = (void *)0x13b94;
void *DAT_00013bb0 = (void *)0x13bb0;
void *DAT_00013c08 = (void *)0x13c08;
void *DAT_00013c24 = (void *)0x13c24;
void *DAT_00013c40 = (void *)0x13c40;
void *DAT_00013c5c = (void *)0x13c5c;
void *DAT_00013c78 = (void *)0x13c78;
void *DAT_00013c94 = (void *)0x13c94;
void *DAT_00013cb0 = (void *)0x13cb0;
void *DAT_00013ccc = (void *)0x13ccc;
void *DAT_00013cf4 = (void *)0x13cf4;
void *DAT_00013d14 = (void *)0x13d14;
void *DAT_00013d30 = (void *)0x13d30;
void *DAT_00013d50 = (void *)0x13d50;
void *DAT_00013d6c = (void *)0x13d6c;
void *DAT_00013d88 = (void *)0x13d88;
void *DAT_00013da4 = (void *)0x13da4;

// Atomic operation function pointers
void *__aeabi_read_tp(void *, void *);
int SUB_ffff0fc0(int old_val, int new_val, void *ptr);
void SUB_ffff0fa0(void);

// Function pointer type for atomic operations
typedef int (*atomic_cmp_swap_func_t)(int, int, void *);

// Function: _init @ 0x10c9c
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x10cbc
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 extern int (*pthread_mutex_unlock_ptr)(pthread_mutex_t *);
 pthread_mutex_unlock_ptr = (int (*)(pthread_mutex_t *))pthread_mutex_unlock;
 if (pthread_mutex_unlock_ptr)
 return pthread_mutex_unlock_ptr(__mutex);
 return 0;
}

// Function: <EXTERNAL>::strstr @ 0x10cc8
char * strstr(char *__haystack,char *__needle)
{
 extern char *(*strstr_ptr)(const char *, const char *);
 strstr_ptr = (char *(*)(const char *, const char *))strstr;
 if (strstr_ptr)
 return strstr_ptr(__haystack,__needle);
 return NULL;
}

// Function: <EXTERNAL>::raise @ 0x10cd4
int raise(int __sig)
{
 extern int (*raise_ptr)(int);
 raise_ptr = (int (*)(int))raise;
 if (raise_ptr)
 return raise_ptr(__sig);
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10ce0
int __libc_start_main(int (*main)(int,char **,char **), int argc, char **ubp_av,
                      void (*init)(void), void (*fini)(void), void (*rtld_fini)(void),
                      void *stack_end)
{
 extern __typeof (__libc_start_main) __libc_start_main __attribute__((weak));
 if (__libc_start_main)
 return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
 return 0;
}

// Function: <EXTERNAL>::strcmp @ 0x10cec
int strcmp(char *__s1,char *__s2)
{
 extern int (*strcmp_ptr)(const char *, const char *);
 strcmp_ptr = (int (*)(const char *, const char *))strcmp;
 if (strcmp_ptr)
 return strcmp_ptr(__s1,__s2);
 return 0;
}

// Function: <EXTERNAL>::setsockopt @ 0x10cf8
int wrapped_setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 int iVar1;
 iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x10d04
FILE * wrapped_fopen(char *__filename,char *__modes)
{
 FILE *pFVar1;
 pFVar1 = fopen(__filename,__modes);
 return pFVar1;
}

// Function: <EXTERNAL>::read @ 0x10d10
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 extern ssize_t (*read_ptr)(int, void *, size_t);
 read_ptr = (ssize_t (*)(int, void *, size_t))read;
 if (read_ptr)
 return read_ptr(__fd, __buf, __nbytes);
 return -1;
}

// Function: <EXTERNAL>::free @ 0x10d1c
void free(void *__ptr)
{
 extern __typeof (free) free __attribute__((weak));
 if (free)
 free(__ptr);
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x10d28
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 extern int (*pthread_mutex_lock_ptr)(pthread_mutex_t *);
 pthread_mutex_lock_ptr = (int (*)(pthread_mutex_t *))pthread_mutex_lock;
 if (pthread_mutex_lock_ptr)
 return pthread_mutex_lock_ptr(__mutex);
 return 0;
}

// Function: <EXTERNAL>::_exit @ 0x10d34
void _exit(int __status)
{
 extern __typeof (_exit) _exit __attribute__((weak));
 if (_exit)
 _exit(__status);
}

// Function: <EXTERNAL>::memcpy @ 0x10d40
void * memcpy(void *__dest,void *__src,size_t __n)
{
 extern void *(*memcpy_ptr)(void *, const void *, size_t);
 memcpy_ptr = (void *(*)(void *, const void *, size_t))memcpy;
 if (memcpy_ptr)
 return memcpy_ptr(__dest,__src,__n);
 return NULL;
}

// Function: <EXTERNAL>::shmget @ 0x10d4c
int shmget(key_t __key,size_t __size,int __shmflg)
{
 int iVar1;
 iVar1 = shmget(__key,__size,__shmflg);
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x10d58
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 extern __typeof (signal) signal __attribute__((weak));
 (void)signal;
 extern __sighandler_t (*signal_func_ptr)(int, __sighandler_t);
 signal_func_ptr = signal;
 if (signal_func_ptr)
 return signal_func_ptr(__sig,__handler);
 return SIG_ERR;
}

// Function: <EXTERNAL>::memcmp @ 0x10d64
int memcmp(void *__s1,void *__s2,size_t __n)
{
 extern int (*memcmp_ptr)(const void *, const void *, size_t);
 memcmp_ptr = (int (*)(const void *, const void *, size_t))memcmp;
 if (memcmp_ptr)
 return memcmp_ptr(__s1,__s2,__n);
 return 0;
}

// Function: <EXTERNAL>::sleep @ 0x10d70
uint sleep(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::stpcpy @ 0x10d7c
char * stpcpy(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = stpcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10d88
void __stack_chk_fail(void)
{
 extern __typeof (__stack_chk_fail) __stack_chk_fail __attribute__((weak));
 if (__stack_chk_fail)
 __stack_chk_fail();
}

// Function: <EXTERNAL>::rewind @ 0x10d94
void rewind(FILE *__stream)
{
 extern void (*rewind_ptr)(FILE *);
 (void)rewind;
 rewind_ptr = rewind;
 if (rewind_ptr)
 rewind_ptr(__stream);
}

// Function: <EXTERNAL>::alarm @ 0x10da0
uint alarm(uint __seconds)
{
 extern unsigned int (*alarm_ptr)(unsigned int);
 alarm_ptr = (unsigned int (*)(unsigned int))alarm;
 if (alarm_ptr)
 return alarm_ptr(__seconds);
 return 0;
}

// Function: __sync_nand_and_fetch_4 @ 0x13110

// Function: <EXTERNAL>::wait @ 0x10db8
__pid_t wait(int *__stat_loc)
{
 extern __pid_t (*wait_ptr)(int *);
 wait_ptr = (__pid_t (*)(int *))wait;
 if (wait_ptr)
 return wait_ptr(__stat_loc);
 return -1;
}

// Function: <EXTERNAL>::shmat @ 0x10dc4
void * shmat(int __shmid,const void *__shmaddr,int __shmflg)
{
 extern void *(*shmat_ptr)(int, const void *, int);
 shmat_ptr = (void *(*)(int, const void *, int))shmat;
 if (shmat_ptr)
 return shmat_ptr(__shmid,__shmaddr,__shmflg);
 return (void *)-1;
}

// Function: <EXTERNAL>::fwrite @ 0x10dd0
size_t fwrite(const void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 extern size_t (*fwrite_ptr)(const void *, size_t, size_t, FILE *);
 fwrite_ptr = (size_t (*)(const void *, size_t, size_t, FILE *))fwrite;
 if (fwrite_ptr)
 return fwrite_ptr(__ptr,__size,__n,__s);
 return 0;
}

// Function: <EXTERNAL>::usleep @ 0x10ddc
int usleep(__useconds_t __useconds)
{
 extern int (*usleep_ptr)(__useconds_t);
 usleep_ptr = (int (*)(__useconds_t))usleep;
 if (usleep_ptr)
 return usleep_ptr(__useconds);
 return -1;
}

// Function: <EXTERNAL>::waitpid @ 0x10de8
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 extern __pid_t (*waitpid_ptr)(__pid_t, int *, int);
 waitpid_ptr = (__pid_t (*)(__pid_t, int *, int))waitpid;
 if (waitpid_ptr)
 return waitpid_ptr(__pid,__stat_loc,__options);
 return -1;
}

// Function: <EXTERNAL>::fread @ 0x10df4
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 extern size_t (*fread_ptr)(void *, size_t, size_t, FILE *);
 fread_ptr = (size_t (*)(void *, size_t, size_t, FILE *))fread;
 if (fread_ptr)
 return fread_ptr(__ptr,__size,__n,__stream);
 return 0;
}

// Function: <EXTERNAL>::shmctl @ 0x10e00
int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf)
{
 extern int (*shmctl_ptr)(int, int, struct shmid_ds *);
 shmctl_ptr = (int (*)(int, int, struct shmid_ds *))shmctl;
 if (shmctl_ptr)
 return shmctl_ptr(__shmid,__cmd,__buf);
 return -1;
}

// Function: <EXTERNAL>::puts @ 0x10e0c
int puts(const char *__s)
{
 extern int (*puts_ptr)(const char *);
 puts_ptr = (int (*)(const char *))puts;
 if (puts_ptr)
 return puts_ptr(__s);
 return EOF;
}

// Function: <EXTERNAL>::malloc @ 0x10e18
void * malloc(size_t __size)
{
 extern void *(*malloc_ptr)(size_t);
 malloc_ptr = (void *(*)(size_t))malloc;
 if (malloc_ptr)
 return malloc_ptr(__size);
 return NULL;
}

// Function: <EXTERNAL>::stat @ 0x10e30
int stat(const char *__file,struct stat *__buf)
{
 extern int (*stat_ptr)(const char *, struct stat *);
 stat_ptr = (int (*)(const char *, struct stat *))stat;
 if (stat_ptr)
 return stat_ptr(__file,__buf);
 return -1;
}

// Function: <EXTERNAL>::open @ 0x10e3c
int open(char *__file,int __oflag,...)
{
 extern int (*open_ptr)(const char *, int, ...);
 open_ptr = (int (*)(const char *, int, ...))open;
 if (open_ptr)
 return open_ptr(__file,__oflag);
 return -1;
}

// Function: syscall wrapper
long syscall(long number, ...)
{
 va_list args;
 va_start(args, number);
 long result;
 __asm__ volatile ("syscall" : "=a" (result) : "0" (number), "c" (va_arg(args, long)), "d" (va_arg(args, long)) : "rcx", "r11", "memory");
 va_end(args);
 return result;
}

// Function: <EXTERNAL>::unlink @ 0x10ed0
int unlink(const char *__name)
{
 int iVar1;
 iVar1 = unlink(__name);
 return iVar1;
}



// Function: <EXTERNAL>::strlen @ 0x10e54
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::strchr @ 0x10e60
char * strchr(char *__s,int __c)
{
 char *pcVar1;
 pcVar1 = strchr(__s,__c);
 return pcVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x10e6c
int * __errno_location(void)
{
 int *piVar1;
 piVar1 = __errno_location();
 return piVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x10e78
int __isoc99_sscanf(const char *str, const char *fmt, ...)
{
 int result;
 va_list args;
 va_start(args, fmt);
 result = vsscanf(str, fmt, args);
 va_end(args);
 return result;
}

// Function: <EXTERNAL>::bind @ 0x10e84
int bind(int __fd,const struct sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x10e90
void * memset(void *__s,int __c,size_t __n)
{
 extern void *(*memset_ptr)(void *, int, size_t);
 memset_ptr = (void *(*)(void *, int, size_t))memset;
 if (memset_ptr)
 return memset_ptr(__s,__c,__n);
 return NULL;
}

// Function: <EXTERNAL>::strncpy @ 0x10e9c
char * strncpy(char *__dest,char *__src,size_t __n)
{
 extern char *(*strncpy_ptr)(char *, const char *, size_t);
 strncpy_ptr = (char *(*)(char *, const char *, size_t))strncpy;
 if (strncpy_ptr)
 return strncpy_ptr(__dest,__src,__n);
 return NULL;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10ea8
int __printf_chk(int flag, const char *fmt, ...)
{
 int result;
 va_list args;
 va_start(args, fmt);
 result = vprintf(fmt, args);
 va_end(args);
 return result;
}

// Function: <EXTERNAL>::write @ 0x10eb4
ssize_t wrapped_write(int __fd,void *__buf,size_t __n)
{
 extern __typeof (write) write __attribute__((weak));
 if (write)
 return write(__fd,__buf,__n);
 return -1;
}

// Function: <EXTERNAL>::fileno @ 0x10ec0
int fileno(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x10ecc
int shmdt(const void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x10ed8
int fclose(FILE *__stream)
{
 extern int (*fclose_ptr)(FILE *);
 fclose_ptr = (int (*)(FILE *))fclose;
 if (fclose_ptr)
 return fclose_ptr(__stream);
 return EOF;
}

// Function: <EXTERNAL>::pipe @ 0x10ee4
int pipe(int *__pipedes)
{
 extern int (*pipe_ptr)(int *);
 pipe_ptr = (int (*)(int *))pipe;
 if (pipe_ptr)
 return pipe_ptr(__pipedes);
 return -1;
}

// Function: <EXTERNAL>::pthread_create @ 0x10ef0
int pthread_create(pthread_t *__newthread,const pthread_attr_t *__attr,void *(*__start_routine)(void *),
 void *__arg)
{
 extern int (*pthread_create_ptr)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *);
 pthread_create_ptr = (int (*)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_create;
 if (pthread_create_ptr)
 return pthread_create_ptr(__newthread,__attr,__start_routine,__arg);
 return -1;
}

// Function: <EXTERNAL>::fork @ 0x10efc
__pid_t fork(void)
{
 extern __pid_t (*fork_ptr)(void);
 fork_ptr = (__pid_t (*)(void))fork;
 if (fork_ptr)
 return fork_ptr();
 return -1;
}

// Function: <EXTERNAL>::execl @ 0x10f08
int wrapped_execl(char *__path,char *__arg,...)
{
 int iVar1;
 va_list args;
 va_start(args, __arg);
 iVar1 = execl(__path, __arg, NULL);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x10f14
int listen(int __fd,int __n)
{
 extern int (*listen_ptr)(int, int);
 listen_ptr = (int (*)(int, int))listen;
 if (listen_ptr)
 return listen_ptr(__fd,__n);
 return -1;
}

// Function: <EXTERNAL>::ftok @ 0x10f20
key_t wrapped_ftok(char *__pathname,int __proj_id)
{
 extern key_t (*ftok_ptr)(const char *, int);
 ftok_ptr = (key_t (*)(const char *, int))ftok;
 if (ftok_ptr)
 return ftok_ptr(__pathname,__proj_id);
 return -1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x10f2c
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 extern int (*pthread_cond_wait_ptr)(pthread_cond_t *, pthread_mutex_t *);
 pthread_cond_wait_ptr = (int (*)(pthread_cond_t *, pthread_mutex_t *))pthread_cond_wait;
 if (pthread_cond_wait_ptr)
 return pthread_cond_wait_ptr(__cond,__mutex);
 return -1;
}

// Function: <EXTERNAL>::socket @ 0x10f38
int socket(int __domain,int __type,int __protocol)
{
 extern int (*socket_ptr)(int, int, int);
 socket_ptr = (int (*)(int, int, int))socket;
 if (socket_ptr)
 return socket_ptr(__domain,__type,__protocol);
 return -1;
}

// Function: <EXTERNAL>::pthread_join @ 0x10f44
int pthread_join(pthread_t __th,void **__thread_return)
{
 extern int (*pthread_join_ptr)(pthread_t, void **);
 pthread_join_ptr = (int (*)(pthread_t, void **))pthread_join;
 if (pthread_join_ptr)
 return pthread_join_ptr(__th,__thread_return);
 return 0;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x10f50
int pthread_cancel(pthread_t __th)
{
 extern int (*pthread_cancel_ptr)(pthread_t);
 pthread_cancel_ptr = (int (*)(pthread_t))pthread_cancel;
 if (pthread_cancel_ptr)
 return pthread_cancel_ptr(__th);
 return 0;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x10f5c
int pthread_cond_signal(pthread_cond_t *__cond)
{
 extern int (*pthread_cond_signal_ptr)(pthread_cond_t *);
 pthread_cond_signal_ptr = (int (*)(pthread_cond_t *))pthread_cond_signal;
 if (pthread_cond_signal_ptr)
 return pthread_cond_signal_ptr(__cond);
 return 0;
}

// Function: <EXTERNAL>::abort @ 0x10f68
void abort(void)
{
 extern __typeof (abort) abort __attribute__((weak));
 if (abort)
 abort();
}

// Function: <EXTERNAL>::close @ 0x10f74
int close(int __fd)
{
 extern int (*close_ptr)(int);
 close_ptr = (int (*)(int))close;
 if (close_ptr)
 return close_ptr(__fd);
 return 0;
}

// Function: <EXTERNAL>::__snprintf_chk @ 0x10f80
int __snprintf_chk(char *str, size_t len, int flag, size_t maxlen, const char *fmt, ...)
{
 int result;
 va_list args;
 va_start(args, fmt);
 result = vsnprintf(str, len, fmt, args);
 va_end(args);
 return result;
}

// Function: main @ 0x10f90
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _start @ 0x10fa8
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main, param_1, (char **)param_2, NULL, NULL, NULL, &stack0x00000004);
 abort();
}

// Function: __gmon_start__ @ weak function
void __gmon_start__(void)
{
 return;
}

// Function: call_weak_fn @ 0x10fec
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x11010
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1103c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11074
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: signal_handler @ 0x110a0
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x110b8
unsigned int thread_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 iVar2 = *param_1;
 param_1[2] = 0;
 if (iVar2 <= param_1[1]) {
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != param_1[1] + 1);
 param_1[2] = iVar1;
 }
 return 0;
}

// Function: thread_compute @ 0x110f0
void *thread_compute(void *param_1)
{
 int *piVar1;
 int iVar2;
 iVar2 = *(int *)param_1;
 piVar1 = (int *)malloc(4);
 *piVar1 = iVar2 * iVar2;
 return piVar1;
}

// Function: thread_increment @ 0x11118
unsigned int thread_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar2 = *param_1;
 if (0 < iVar2) {
 iVar1 = 0;
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 iVar1 = iVar1 + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 } while (iVar2 != iVar1);
 }
 return 0;
}

// Function: consumer_thread @ 0x11170
void *consumer_thread(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock(&cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x111d0
void *producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: thread_atomic_increment @ 0x11218
void *thread_atomic_increment(void *param_1)
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

// Function: thread_atomic_load_store @ 0x112a8
void *thread_atomic_load_store(void *param_1)
{
 int iVar1;
 __sync_synchronize();
 iVar1 = atomic_counter;
 __sync_synchronize();
 __sync_synchronize();
 atomic_counter = iVar1 + 100;
 __sync_synchronize();
 return NULL;
}

// Function: thread_tls_test @ 0x112d8
void *thread_tls_test(void *param_1)
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

// Function: param_strcpy @ 0x11324
int param_strcpy(char *param_1,char *param_2)
{
 char *pcVar1;
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}

// Function: call_strcpy @ 0x11338
unsigned int call_strcpy(void)
{
 return 8;
}

// Function: param_strcmp @ 0x11340
unsigned int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = strcmp(param_1,param_2);
 if (iVar1 < 1) {
 if (iVar1 == 0) {
 uVar2 = 0;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 return 1;
}

// Function: call_strcmp @ 0x11364
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: call_strlen @ 0x11370
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11378
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x1138c
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11394
unsigned int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 if (iVar1 == 0) {
 uVar2 = 0;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 return 1;
}

// Function: call_memcmp @ 0x113b8
void call_memcmp(void)
{
 int iVar1;
 int iVar2;
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
 local_38 = 1;
 uStack_34 = 2;
 uStack_30 = 3;
 local_14 = 0;
 local_2c = 1;
 uStack_28 = 2;
 uStack_24 = 4;
 local_20 = 1;
 uStack_1c = 2;
 uStack_18 = 3;
 iVar1 = memcmp(&local_38,&local_2c,0xc);
 if (iVar1 < 1) {
 if (iVar1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = -1;
 }
 }
 else {
 iVar1 = 1;
 }
 iVar2 = memcmp(&local_38,&local_20,0xc);
 if (iVar2 < 1) {
 if (iVar2 == 0) {
 iVar2 = 0;
 }
 else {
 iVar2 = -1;
 }
 }
 else {
 iVar2 = 1;
 }
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_printf @ 0x11474
void param_printf(unsigned int param_1,unsigned int param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x1148c
void call_printf(void)
{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_000139fc);
 return;
}

// Function: param_scanf @ 0x114a8
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
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_scanf @ 0x1150c
void call_scanf(void)
{
 unsigned long long uVar1;
 int iStack_14;
 int iStack_10;
 int local_c;
 local_c = 0;
 uVar1 = __isoc99_sscanf("123,456","%d,%d",&iStack_14,&iStack_10);
 if ((int)uVar1 == 2) {
 iStack_14 = iStack_14 + iStack_10;
 }
 else {
 iStack_14 = -1;
 }
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_fopen_fclose @ 0x11578
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

// Function: call_fopen_fclose @ 0x115b4
unsigned int call_fopen_fclose(void)
{
 FILE *__stream;
 int iVar1;
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

// Function: param_fread_fwrite @ 0x11600
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

// Function: call_fread_fwrite @ 0x116fc
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11708
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr + -1;
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 } while (piVar2 != __ptr + param_1 + -1);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x11770
int call_malloc_free(void)
{
 int *__ptr;
 int *piVar1;
 int iVar2;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar1 = __ptr + -1;
 do {
 piVar1 = piVar1 + 1;
 *piVar1 = iVar2;
 iVar2 = iVar2 + 10;
 } while (iVar2 != 100);
 iVar2 = *__ptr + __ptr[9];
 free(__ptr);
 }
 return iVar2;
}

// Function: param_memset @ 0x117bc
int param_memset(void *param_1,size_t param_2)
{
 int iVar1;
 unsigned char *pbVar2;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar1 = 0;
 pbVar2 = (unsigned char *)((int)param_1 + -1);
 do {
 pbVar2 = pbVar2 + 1;
 iVar1 = iVar1 + (uint)*pbVar2;
 } while (pbVar2 != (unsigned char *)((int)param_1 + (param_2 - 1)));
 return iVar1;
 }
 return 0;
}

// Function: call_memset @ 0x11808
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x11810
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

// Function: call_strchr_strstr @ 0x1184c
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11854
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 FILE *__stream;
 int *__ptr;
 int *piVar2;
 int iVar3;
 char auStack_14 [4];
 char auStack_10 [4];
 int local_c;
 local_c = 0;
 puts(&DAT_00013a54);
 __printf_chk(1,&DAT_00013a78,8);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_00013a94,uVar1);
 __printf_chk(1,&DAT_00013ab0,0xc);
 __printf_chk(1,&DAT_00013acc,0x5a);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_00013ae8,uVar1);
 uVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_000139fc);
 __printf_chk(1,&DAT_00013b04,uVar1);
 __isoc99_sscanf("123,456","%d,%d",auStack_14,auStack_10);
 __printf_chk(1,&DAT_00013b20);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 (void)fileno(__stream);
 (void)fclose(__stream);
 }
 __printf_chk(1,&DAT_00013b40);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_00013b5c,uVar1);
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = 0;
 piVar2 = __ptr + -1;
 do {
 piVar2 = piVar2 + 1;
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 } while (iVar3 != 100);
 iVar3 = *__ptr + __ptr[9];
 free(__ptr);
 }
 __printf_chk(1,&DAT_00013b78,iVar3);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_00013b94,uVar1);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00013bb0,0xf);
 return;
}

// Function: param_linux_syscall @ 0x11a6c
long param_linux_syscall(unsigned int param_1)
{
 long lVar1;
 int *piVar2;
 lVar1 = open(param_1, 0);
 if (-1 < lVar1) {
 close(lVar1);
 return lVar1;
 }
 piVar2 = __errno_location();
 return -*piVar2;
}

// Function: call_linux_syscall @ 0x11ab0
unsigned int call_linux_syscall(void)
{
 long lVar1;
 int *piVar2;
 unsigned int uVar3;
 lVar1 = open("/etc/passwd", 0);
 if (lVar1 < 0) {
 piVar2 = __errno_location();
 if (*piVar2 < 1) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xffffffff;
 }
 return uVar3;
 }
 close(lVar1);
 return 0x2a;
}

// Function: param_win32_api @ 0x11af8
void param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_68;
 int local_c;
;
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
 return;
}

// Function: call_win32_api @ 0x11b60
void call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_68;
 int local_c;
 local_c = 0;
 iVar1 = stat("/etc/passwd",&sStack_68);
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
 return;
}

// Function: param_pipe_communication @ 0x11bbc
unsigned int param_pipe_communication(void)
{
 int pipedes[2];
 char buf[32];
 pid_t pid;
 int status;
 ssize_t bytes;
 
 if (pipe(pipedes) < 0) {
 return 0xffffffff;
 }
 
 pid = fork();
 if (pid < 0) {
 close(pipedes[0]);
 close(pipedes[1]);
 return 0xfffffffe;
 }
 
 if (pid == 0) {
 close(pipedes[0]);
 write(pipedes[1], "Test", 4);
 close(pipedes[1]);
 _exit(0);
 }
 
 close(pipedes[1]);
 bytes = read(pipedes[0], buf, sizeof(buf));
 close(pipedes[0]);
 waitpid(pid, &status, 0);
 
 if (bytes == 4) {
 return 0x2a;
 }
 return 0xfffffffd;
}

// Function: param_fork_exec @ 0x11bd0
unsigned int param_fork_exec(char *param_1,unsigned int param_2)
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
 (void)execl(param_1,param_1,(char *)param_2);
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

// Function: call_fork_exec @ 0x11c74
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



// Function: param_socket_create @ 0x11d80
void param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 unsigned int local_20;
 struct sockaddr local_1c;
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
 local_1c.sa_family = 2;
 local_1c.sa_data[0] = '\0';
 local_1c.sa_data[1] = '\0';
 local_1c.sa_data[6] = '\0';
 local_1c.sa_data[7] = '\0';
 local_1c.sa_data[8] = '\0';
 local_1c.sa_data[9] = '\0';
 local_1c.sa_data[10] = '\0';
 local_1c.sa_data[11] = '\0';
 local_1c.sa_data[12] = '\0';
 local_1c.sa_data[13] = '\0';
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
 return;
 }
 __stack_chk_fail();
}

// Function: param_shmget_shmat @ 0x11e88
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 void *__dest;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 __dest = shmat(iVar1,(void *)0x0,0);
 if (__dest != (void *)0xffffffff) {
 memcpy(__dest,"SharedMemory",0xd);
 shmdt(__dest);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x11f3c
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

// Function: param_signal_handling @ 0x11f54
unsigned int param_signal_handling(void)
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
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 return 0x2a;
 }
 return 0xfffffffb;
}

// Function: test_system_calls @ 0x12080
void test_system_calls(void)
{
 long lVar1;
 unsigned int uVar2;
 struct stat sStack_68;
 int local_c;
;
 local_c = 0;
 puts(&DAT_00013c08);
 lVar1 = syscall(5,"/etc/passwd",0);
 if (lVar1 < 0) {
 __errno_location();
 }
 __printf_chk(1,&DAT_00013c24);
 stat("/etc/passwd",&sStack_68);
 __printf_chk(1,&DAT_00013c40);
 param_fork_exec("/bin/true",0);
 __printf_chk(1,&DAT_00013c5c);
 uVar2 = param_pipe_communication();
 __printf_chk(1,&DAT_00013c78,uVar2);
 uVar2 = param_socket_create();
 __printf_chk(1,&DAT_00013c94,uVar2);
 param_shmget_shmat();
 __printf_chk(1,&DAT_00013cb0);
 uVar2 = param_signal_handling();
 if (local_c != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00013ccc);
 return;
}

// Function: param_pthread_create @ 0x121f4
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
 pthread_join(local_18,&local_10);
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

// Function: call_pthread_create @ 0x12280
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_18;
 unsigned int local_14;
 unsigned int *local_10;
 int local_c;
 local_c = 0;
 local_14 = 7;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_14);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
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

// Function: param_pthread_join @ 0x1230c
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 pthread_t *ppVar5;
 pthread_t apStack_54 [3];
 pthread_t local_48;
 unsigned int uStack_44;
 unsigned int local_40;
 unsigned int uStack_3c;
 unsigned int local_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 unsigned int uStack_2c;
 unsigned int local_28;
 pthread_t local_24;
 ppVar5 = &local_48;
 local_24 = 0;
 local_48 = 1;
 uStack_44 = 10;
 local_40 = 0;
 uStack_3c = 0xb;
 local_38 = 0x14;
 uStack_34 = 0;
 uStack_30 = 0x15;
 uStack_2c = 0x1e;
 local_28 = 0;
 ppVar3 = ppVar5;
 ppVar4 = apStack_54;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_sum,ppVar3);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_000123b4;
 }
 ppVar3 = ppVar3 + 3;
 ppVar4 = ppVar4 + 1;
 } while (ppVar3 != &local_24);
 iVar1 = 0;
 ppVar3 = apStack_54;
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
 } while (ppVar4 != &local_48);
LAB_000123b4:
 if (local_24 == 0) {
 return iVar1;
 }
 __stack_chk_fail();
}

// Function: param_mutex_lock @ 0x123fc
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 int iVar5;
 bool bVar6;
 int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 ppVar4 = __ptr;
 iVar3 = 0;
 if (0 < param_1) {
 do {
 iVar5 = iVar3;
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_24);
 iVar3 = iVar5 + 1;
 ppVar4 = ppVar4 + 1;
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 } while (param_1 != iVar3);
 ppVar4 = __ptr + -1;
 iVar3 = 0;
 do {
 ppVar4 = ppVar4 + 1;
 pthread_join(*ppVar4,(void **)0x0);
 bVar6 = iVar5 != iVar3;
 iVar3 = iVar3 + 1;
 } while (bVar6);
 }
 free(__ptr);
 if (shared_counter == local_24 * param_1) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x124d4
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: param_condition_variable @ 0x124e0
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
 pthread_join(local_14,&local_10);
 pthread_join(local_18,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
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
 __stack_chk_fail();
}

// Function: param_atomic_ops @ 0x125ac
void param_atomic_ops(int param_1,unsigned int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 int iVar2;
 pthread_t *ppVar3;
 unsigned int local_2c;
 pthread_t local_28;
 int local_24;
 local_24 = 0;
 local_2c = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr != (pthread_t *)0x0) {
 iVar2 = 0;
 __sync_synchronize();
 atomic_counter = 0;
 __sync_synchronize();
 ppVar3 = __ptr;
 if (param_1 < 1) {
 iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 }
 else {
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_2c);
 if (iVar1 != 0) {
 free(__ptr);
 goto LAB_0001263c;
 }
 iVar2 = iVar2 + 1;
 ppVar3 = ppVar3 + 1;
 } while (param_1 != iVar2);
 iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 ppVar3 = __ptr + -1;
 iVar2 = 0;
 do {
 ppVar3 = ppVar3 + 1;
 iVar2 = iVar2 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 } while (iVar2 < param_1);
 }
 __sync_synchronize();
 __sync_synchronize();
 free(__ptr);
 }
LAB_0001263c:
 if (local_24 == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_atomic_ops @ 0x1270c
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: param_thread_local_storage @ 0x12718
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
 local_2c = 0;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
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
 do {
 ppvVar7 = ppvVar7 + 1;
 free(*ppvVar7);
 } while ((void **)((int)__ptr_00 + iVar4 * 4) != ppvVar7);
 free(__ptr_00);
 free(__ptr);
 goto LAB_00012824;
 }
 bVar8 = iVar3 != iVar4;
 ppVar6 = ppVar6 + 1;
 iVar4 = iVar4 + 1;
 } while (bVar8);
 ppVar6 = __ptr + -1;
 iVar4 = 0;
 do {
 ppVar6 = ppVar6 + 1;
 pthread_join(*ppVar6,&local_30);
 free(local_30);
 ppvVar7 = ppvVar7 + 1;
 free(*ppvVar7);
 bVar8 = iVar3 != iVar4;
 iVar4 = iVar4 + 1;
 } while (bVar8);
 }
 free(__ptr_00);
 free(__ptr);
 }
LAB_00012824:
 if (local_2c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_thread_local_storage @ 0x128f8
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x12900
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_18;
 unsigned int local_14;
 unsigned int *local_10;
 int local_c;
 local_c = 0;
 puts(&DAT_00013cf4);
 local_14 = 7;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_14);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_00013d14,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_00013d30,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,&DAT_00013d50,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_00013d6c,uVar2);
 uVar2 = param_atomic_ops(4,500);
 __printf_chk(1,&DAT_00013d88,uVar2);
 uVar2 = param_thread_local_storage(4);
 if (local_c == 0) {
 __printf_chk(1,&DAT_00013da4);
 return;
 }
 __stack_chk_fail();
}

// Function: __sync_fetch_and_add_4 @ 0x12a34
int __sync_fetch_and_add_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_sub_4 @ 0x12a6c
int __sync_fetch_and_sub_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_or_4 @ 0x12aa4
uint __sync_fetch_and_or_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 | param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_and_4 @ 0x12adc
uint __sync_fetch_and_and_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 & param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_xor_4 @ 0x12b14
uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,uVar2 ^ param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_nand_4 @ 0x12b4c
uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2,~(uVar2 & param_2),param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_add_2 @ 0x12b88
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
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ (uVar1 + param_2) << iVar4) & ((0xffff << iVar4) ^ uVar2),
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
;
}

// Function: __sync_fetch_and_sub_2 @ 0x12be8
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
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_or_2 @ 0x12c48
int __sync_fetch_and_or_2(int *param_1, uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((int)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((int)param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)((int)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_and_2 @ 0x12ca8
int __sync_fetch_and_and_2(int *param_1, uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((int)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((int)param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)((int)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_xor_2 @ 0x12d08
int __sync_fetch_and_xor_2(int *param_1, uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((int)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((int)param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)((int)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_nand_2 @ 0x12d68
int __sync_fetch_and_nand_2(int *param_1, uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((int)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((int)param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)((int)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_add_1 @ 0x12dcc
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
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_sub_1 @ 0x12e28
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
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_or_1 @ 0x12e84
int __sync_fetch_and_or_1(int *param_1, uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((int)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((int)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)((int)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_and_1 @ 0x12ee0
int __sync_fetch_and_and_1(int *param_1, uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = ((int)param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)((int)param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)((int)param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_xor_1 @ 0x12f3c
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
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_nand_1 @ 0x12f98
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
 iVar3 = SUB_ffff0fc0(uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_add_and_fetch_4 @ 0x12ff8
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

// Function: __sync_sub_and_fetch_4 @ 0x13030
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

// Function: __sync_or_and_fetch_4 @ 0x13068
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

// Function: __sync_and_and_fetch_4 @ 0x130a0
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

// Function: __sync_xor_and_fetch_4 @ 0x130d8
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

// Function: __sync_nand_and_fetch_4 @ 0x13110
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

// Function: __sync_add_and_fetch_2 @ 0x1314c
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

// Function: __sync_sub_and_fetch_2 @ 0x131b4
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

// Function: __sync_or_and_fetch_2 @ 0x1321c
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

// Function: __sync_and_and_fetch_2 @ 0x13284
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

// Function: __sync_xor_and_fetch_2 @ 0x132ec
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

// Function: __sync_nand_and_fetch_2 @ 0x13354
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

// Function: __sync_add_and_fetch_1 @ 0x133c0
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

// Function: __sync_sub_and_fetch_1 @ 0x13424
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

// Function: __sync_or_and_fetch_1 @ 0x13488
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

// Function: __sync_and_and_fetch_1 @ 0x134ec
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

// Function: __sync_xor_and_fetch_1 @ 0x13550
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

// Function: __sync_nand_and_fetch_1 @ 0x135b4
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

// Function: __sync_val_compare_and_swap_4 @ 0x1361c
int __sync_val_compare_and_swap_4(int *param_1,int param_2,unsigned int param_3)
{
 int iVar1;
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_2 @ 0x1366c
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
 iVar3 = SUB_ffff0fc0(uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_1 @ 0x136e4
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
 iVar3 = SUB_ffff0fc0(uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_bool_compare_and_swap_4 @ 0x13758
bool __sync_bool_compare_and_swap_4(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x13784
bool __sync_bool_compare_and_swap_2(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_2(param_1,param_2,param_3);
 return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x137a0
bool __sync_bool_compare_and_swap_1(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_1(param_1,param_2,param_3);
 return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x137c8
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

// Function: __sync_lock_test_and_set_2 @ 0x13800
int __sync_lock_test_and_set_2(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0(uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_test_and_set_1 @ 0x13860
int __sync_lock_test_and_set_1(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0(uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_release_8 @ 0x138bc
void __sync_lock_release_8(unsigned int *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}

// Function: __sync_lock_release_4 @ 0x138e0
void __sync_lock_release_4(unsigned int *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_2 @ 0x13900
void __sync_lock_release_2(unsigned short *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_1 @ 0x13920
void __sync_lock_release_1(char *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: _fini @ 0x13948
void _fini(void)
{
 return;
}

