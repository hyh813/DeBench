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
typedef unsigned int uint;

/* NULL definition */
#define NULL ((void *)0)

/* Missing type definitions */
typedef int __pid_t;
typedef int key_t;

/* va_list for variable arguments */
typedef struct __va_list {
    void *__stack;
    void *__gr_top;
    void *__vr_top;
    int __gr_offs;
    int __vr_offs;
} va_list;

/* Byte type */
typedef unsigned char byte;

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* Socket types */
typedef unsigned int socklen_t;

/* sockaddr structure */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};
typedef struct sockaddr sockaddr;

/* stat structure */
struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long __pad0;
    unsigned long st_rdev;
    long long st_size;
    long st_blksize;
    long long st_blocks;
    long long st_atime;
    unsigned long __pad_atime;
    long long st_mtime;
    unsigned long __pad_mtime;
    long long st_ctime;
    unsigned long __pad_ctime;
    long long __unused[3];
};

/* Opaque structure for FILE */
struct __FILE;
typedef struct __FILE FILE;

/* pthread types - complete structures for pointer arithmetic */
struct __pthread {
    void *__ptr;
};
typedef struct __pthread pthread_t;

struct __pthread_mutexattr;
typedef struct __pthread_mutexattr pthread_mutexattr_t;

struct __pthread_mutex;
typedef struct __pthread_mutex pthread_mutex_t;

struct __pthread_condattr;
typedef struct __pthread_condattr pthread_condattr_t;

struct __pthread_cond;
typedef struct __pthread_cond pthread_cond_t;

struct __pthread_attr;
typedef struct __pthread_attr pthread_attr_t;

/* Thread start routine type */
typedef void *(*__start_routine)(void);

/* Additional types */
typedef unsigned int __useconds_t;

/* Forward declarations for incomplete types */
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef long time_t;

/* ipc_perm structure for IPC permissions */
struct ipc_perm {
    __uid_t uid;
    __gid_t gid;
    __uid_t cuid;
    __gid_t cgid;
    unsigned int mode;
    unsigned int __seq;
};

/* shmid_ds structure for shared memory control */
struct shmid_ds {
    struct ipc_perm shm_perm;
    size_t shm_segsz;
    time_t shm_atime;
    time_t shm_dtime;
    time_t shm_ctime;
    __pid_t shm_cpid;
    __pid_t shm_lpid;
    unsigned long shm_nattch;
    unsigned long __shm_internal;
};

typedef struct shmid_ds shmid_ds;
typedef struct ipc_perm ipc_perm;

/* Union for atomic operations */
union atomic_counter_union {
    int _0_4_;
    struct {
        int value;
        char _4_1_;
        char _5_3_[3];
    };
};

union atomic_counter_union atomic_counter;

/* Global variables for ARM64 LSE atomics */
int tmp_ldWn;
int tmp_stWn;

/* Stack canary globals */
long ___stack_chk_guard;
long __stack_chk_guard;

/* Global variables for condition variable test */
int data;
int ready;
int shared_counter;
void *counter_mutex;
void *cond;
void *cond_mutex;
int signal_received;
int signal_number;
long tpidr_el0;

/* Global variables for destructor handling */
char completed_0;
void *__dso_handle;

/* Forward declarations for data references */
extern const char *DAT_00103400;
extern const char *DAT_00103408;
extern const char *DAT_00103410;
extern const char *DAT_00103418;
extern const char *DAT_00103420;
extern const char *DAT_00103440;
extern const char *DAT_001034c8;
extern const char *DAT_001034f0;
extern const char *DAT_00103510;
extern const char *DAT_00103530;
extern const char *DAT_00103550;
extern const char *DAT_00103570;
extern const char *DAT_00103590;
extern const char *DAT_001035b0;
extern const char *DAT_001035d0;
extern const char *DAT_001035f0;
extern const char *DAT_00103610;
extern const char *DAT_00103630;
extern const char *DAT_00103650;
extern const char *DAT_001036b8;
extern const char *DAT_001036d8;
extern const char *DAT_001036f8;
extern const char *DAT_00103718;
extern const char *DAT_00103738;
extern const char *DAT_00103758;
extern const char *DAT_00103778;
extern const char *DAT_00103798;
extern const char *DAT_001037c8;
extern const char *DAT_001037e8;
extern const char *DAT_00103808;
extern const char *DAT_00103828;
extern const char *DAT_00103848;
extern const char *DAT_00103868;
extern const char *DAT_00103888;

// Decompiled by BinaryAI
// SHA256: 1ebb251f6966e4548d01d8f85863bfb7b40e8fa85ec0768423944b1036925fa0

/* Thread functions */
void *thread_sum(void *param_1);
void *thread_compute(void *param_1);
void *thread_increment(void *param_1);
void *consumer_thread(void *param_1);
void *producer_thread(void *param_1);
void *thread_atomic_increment(void *param_1);
void *thread_atomic_load_store(void *param_1);
void *thread_tls_test(void *param_1);

/* Forward declarations */
void __stack_chk_fail(void) __attribute__((__noreturn__));

/* Forward declarations */
void call_weak_fn(void);
int main(void);
int call_strcpy(void);
int call_strcmp(void);
int call_strlen(void);
int call_memcpy(void);
int call_memcmp(void);
int call_printf(void);
int call_scanf(void);
unsigned int call_fopen_fclose(void);
int call_fread_fwrite(void);
int call_malloc_free(void);
int call_memset(void);
int call_strchr_strstr(void);
unsigned int call_linux_syscall(void);
unsigned int call_win32_api(void);
unsigned int call_fork_exec(void);
unsigned int call_pipe_communication(void);
unsigned int call_socket_create(void);
unsigned int call_shmget_shmat(void);
void call_signal_handling(void);
void call_pthread_create(void);
void call_pthread_join(void);
int call_mutex_lock(void);
int call_condition_variable(void);
int call_atomic_ops(void);
void call_thread_local_storage(void);

/* Forward declarations for atomic functions */
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);

/* Forward declarations for stdarg functions */
void va_start(va_list, ...);
void va_end(va_list);

/* Forward declarations for stdio functions */
int vsnprintf(char *, size_t, const char *, va_list);
int vprintf(const char *, va_list);
int vsscanf(const char *, const char *, va_list);

/* Forward declarations for stdlib functions */
void abort(void);

/* External libc function declaration */
void __libc_start_main_real(int (*main)(void), unsigned long long argc, char **ubp_av, 
                            void (*init)(void), void (*fini)(void), void (*rtld_fini)(void));

/* ARM64 atomic helper functions */
bool ExclusiveMonitorPass(void *addr, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

// Function: _init @ 0x101388
void _init(void *ctx)
{
 call_weak_fn();
}

// Function: FUN_001013a0 @ 0x1013a0
void FUN_001013a0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1013c0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::_exit @ 0x1013d0
void _exit(int __status)
{
 _exit(__status);
}

// Function: <EXTERNAL>::strlen @ 0x1013e0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::raise @ 0x1013f0
int raise(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101400
void __libc_start_main(int (*main)(void), unsigned long long argc, char **ubp_av, 
                       void (*init)(void), void (*fini)(void), void (*rtld_fini)(void))
{
 __libc_start_main_real(main, argc, ubp_av, init, fini, rtld_fini);
 return;
}

// Function: <EXTERNAL>::execl @ 0x101410
int execl(char *__path,char *__arg,...)
{
 int iVar1;
 iVar1 = execl(__path,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x101420
int listen(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x101430
int shmdt(void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x101440
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101450
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::pipe @ 0x101460
int pipe(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x101470
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::fileno @ 0x101480
int fileno(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x101490
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::__snprintf_chk @ 0x1014a0
int __snprintf_chk(char *__str, size_t __n, int __flag, size_t __os, const char *__fmt, ...)
{
 int iVar1;
 va_list args;
 va_start(args, __fmt);
 iVar1 = vsnprintf(__str, __n, __fmt, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x1014b0
int fclose(FILE *__stream)
{
 int iVar1;
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x1014c0
FILE * fopen(char *__filename,char *__modes)
{
 FILE *pFVar1;
 pFVar1 = fopen(__filename,__modes);
 return pFVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1014d0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x1014e0
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 int iVar1;
 iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
 return iVar1;
}

// Function: <EXTERNAL>::open @ 0x1014f0
int open(char *__file,int __oflag,...)
{
 int iVar1;
 iVar1 = open(__file,__oflag);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101500
int pthread_cond_signal(pthread_cond_t *__cond)
{
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x101510
int __printf_chk(int __flag, const char *__fmt, ...)
{
 int iVar1;
 va_list args;
 va_start(args, __fmt);
 iVar1 = vprintf(__fmt, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x101520
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::shmat @ 0x101530
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 void *pvVar1;
 pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
 return pvVar1;
}

// Function: <EXTERNAL>::sleep @ 0x101540
uint sleep(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x101550
void rewind(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101560
void __stack_chk_fail(void)
{
 abort();
}

// Function: <EXTERNAL>::close @ 0x101570
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101580
void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::stat @ 0x101590
int stat(char *__file,struct stat *__buf)
{
 int iVar1;
 iVar1 = stat(__file,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1015a0
ssize_t write(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::__getauxval @ 0x1015b0
unsigned long __getauxval(unsigned long __type)
{
 unsigned long uVar1;
 uVar1 = __getauxval(__type);
 return uVar1;
}

// Function: <EXTERNAL>::abort @ 0x1015c0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::puts @ 0x1015d0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x1015e0
int memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x1015f0
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x101600
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
 int iVar1;
 iVar1 = shmctl(__shmid,__cmd,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x101610
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 size_t sVar1;
 sVar1 = fread(__ptr,__size,__n,__stream);
 return sVar1;
}

// Function: <EXTERNAL>::ftok @ 0x101620
key_t ftok(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::free @ 0x101630
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::shmget @ 0x101640
int shmget(key_t __key,size_t __size,int __shmflg)
{
 int iVar1;
 iVar1 = shmget(__key,__size,__shmflg);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101650
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::strchr @ 0x101660
char * strchr(char *__s,int __c)
{
 char *pcVar1;
 pcVar1 = strchr(__s,__c);
 return pcVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x101670
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 size_t sVar1;
 sVar1 = fwrite(__ptr,__size,__n,__s);
 return sVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x101680
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*start_routine)(void *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x101690
__pid_t wait(void *__stat_loc)
{
 __pid_t _Var1;
 _Var1 = wait(__stat_loc);
 return _Var1;
}

// Function: <EXTERNAL>::socket @ 0x1016a0
int socket(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::strcpy @ 0x1016b0
char * strcpy(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = strcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::read @ 0x1016c0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 ssize_t sVar1;
 sVar1 = read(__fd,__buf,__nbytes);
 return sVar1;
}

// Function: <EXTERNAL>::strstr @ 0x1016d0
char * strstr(char *__haystack,char *__needle)
{
 char *pcVar1;
 pcVar1 = strstr(__haystack,__needle);
 return pcVar1;
}

// Function: <EXTERNAL>::usleep @ 0x1016e0
int usleep(__useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x1016f0
int __isoc99_sscanf(const char *__str, const char *__fmt, ...)
{
 int iVar1;
 va_list args;
 va_start(args, __fmt);
 iVar1 = vsscanf(__str, __fmt, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x101700
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x101710
int * __errno_location(void)
{
 int *piVar1;
 piVar1 = __errno_location();
 return piVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x101720
int pthread_join(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::alarm @ 0x101730
uint alarm(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x101740
int pthread_cancel(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101750
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_lock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x101760
long syscall(long __sysno,...)
{
 long lVar1;
 lVar1 = syscall(__sysno);
 return lVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x101770
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_unlock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x101780
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::unlink @ 0x101790
int unlink(char *__name)
{
 int iVar1;
 iVar1 = unlink(__name);
 return iVar1;
}

// Function: init_have_lse_atomics @ 0x1017c0
void init_have_lse_atomics(void)
{
 unsigned long auxval;
 auxval = (unsigned long)__getauxval(0x10);
 atomic_counter._4_1_ = (byte)(auxval & 1);
 return;
}

// Function: _start @ 0x101800
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 param_9 = 0;
 __libc_start_main(main,param_9,NULL,NULL,NULL,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x101834
void call_weak_fn(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x101850
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101880
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001018bc @ 0x1018bc
void FUN_001018bc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x1018c0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: signal_handler @ 0x101914
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x10192c
void *thread_sum(void *param_1)
{
 int iVar1;
 int iVar2;
 int *data = (int *)param_1;
 data[2] = 0;
 iVar1 = data[0];
 if (iVar1 <= data[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != data[1] + 1);
 data[2] = iVar2;
 }
 return NULL;
}

// Function: thread_compute @ 0x101964
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: thread_increment @ 0x101990
void *thread_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return NULL;
}

// Function: consumer_thread @ 0x101a0c
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

// Function: producer_thread @ 0x101a88
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

// Function: thread_atomic_increment @ 0x101ae0
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter._0_4_);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter._0_4_);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x101b4c
void *thread_atomic_load_store(void *param_1)
{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return NULL;
}

// Function: thread_tls_test @ 0x101b6c
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 char *str_param = (char *)param_1;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x18),str_param,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}

// Function: param_strcpy @ 0x101bc0
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x101be8
int call_strcpy(void)
{
 char auStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 param_strcpy(auStack_28,"HelloLib");
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
}

// Function: param_strcmp @ 0x101c3c
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = strcmp(param_1,param_2);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: call_strcmp @ 0x101c5c
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(DAT_00103408,DAT_00103400);
 iVar2 = param_strcmp(DAT_00103410,DAT_00103410);
 iVar3 = param_strcmp(DAT_00103420,DAT_00103418);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101cbc
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x101cd0
int call_strlen(void)
{
 return 12;
}

// Function: param_memcpy @ 0x101cd8
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101cfc
int call_memcpy(void)
{
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned int local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38 = 0x140000000a;
 uStack_30 = 0x280000001e;
 local_28 = 0x32;
 local_20 = 0;
 local_18 = 0;
 local_10 = 0;
 param_memcpy(&local_20,&local_38,0x14);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
}

// Function: param_memcmp @ 0x101d84
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = iVar2 >> 0x1f;
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: call_memcmp @ 0x101da4
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_38;
 unsigned int local_30;
 unsigned long long local_28;
 unsigned int local_20;
 unsigned long long local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38 = 0x200000001;
 local_30 = 3;
 local_28 = 0x200000001;
 local_20 = 4;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar1 = param_memcmp(&local_38,&local_28,0xc);
 iVar2 = param_memcmp(&local_38,&local_18,0xc);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
}

// Function: param_printf @ 0x101e58
void param_printf(unsigned int param_1,unsigned long long param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x101e80
int call_printf(void)
{
 param_printf(0x2a,(uintptr_t)&DAT_00103440);
 return 0;
}

// Function: param_scanf @ 0x101ea0
void param_scanf(const char *param_1)
{
 int iVar1;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_10,&local_c);
 if (iVar1 == 2) {
 local_10 = local_10 + local_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_scanf @ 0x101f14
int call_scanf(void)
{
 param_scanf("123,456");
 return 0;
}

// Function: param_fopen_fclose @ 0x101f30
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

// Function: call_fopen_fclose @ 0x101f78
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x101fa0
void param_fread_fwrite(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 FILE *__s;
 size_t sVar3;
 char acStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar3 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar3 == 0x12) {
 rewind(__s);
 sVar3 = fread(acStack_28,1,0x12,__s);
 acStack_28[sVar3] = '\0';
 fclose(__s);
 unlink(param_1);
 if (sVar3 == 0x12) {
 iVar1 = strcmp(acStack_28,"BinBench Test Data");
 uVar2 = 0xfffffffd;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
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
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_fread_fwrite @ 0x1020b8
int call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return 0;
}

// Function: param_malloc_free @ 0x1020d4
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
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 piVar3 = piVar2 + 1;
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar3;
 } while (piVar3 != __ptr + param_1);
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x102140
int call_malloc_free(void)
{
 param_malloc_free(10);
 return 0;
}

// Function: param_memset @ 0x102158
int param_memset(void *param_1,size_t param_2)
{
 int iVar1;
 byte *pbVar2;
 byte *pbVar3;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 pbVar3 = param_1;
 do {
 pbVar2 = pbVar3 + 1;
 iVar1 = iVar1 + (uint)*pbVar3;
 pbVar3 = pbVar2;
 } while (pbVar2 != param_1 + param_2);
 }
 return iVar1;
}

// Function: call_memset @ 0x1021ac
int call_memset(void)
{
 long *plVar1;
 long local_30 [4];
 int local_c;
 long local_8;
 long *plVar2;
 local_8 = ___stack_chk_guard;
 plVar2 = local_30;
 do {
 plVar1 = (long *)((long)plVar2 + 4);
 *(unsigned int *)plVar2 = 0xff;
 plVar2 = plVar1;
 } while (plVar1 != &local_8);
 param_memset(local_30,0x28);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
}

// Function: param_strchr_strstr @ 0x102220
int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
{
 char *pcVar1;
 int iVar2;
 int iVar3;
 pcVar1 = strchr(param_1,param_2 & 0xff);
 iVar3 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar2 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar3 + iVar2;
}

// Function: call_strchr_strstr @ 0x102278
int call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return 0;
}

// Function: test_standard_library_functions @ 0x1022a0
void test_standard_library_functions(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts((char *)DAT_001034c8);
 uVar2 = (unsigned int)call_strcpy();
 __printf_chk(1,(const char *)DAT_001034f0,uVar2);
 uVar2 = (unsigned int)call_strcmp();
 __printf_chk(1,(const char *)DAT_00103510,uVar2);
 uVar2 = (unsigned int)call_strlen();
 __printf_chk(1,(const char *)DAT_00103530,uVar2);
 uVar2 = (unsigned int)call_memcpy();
 __printf_chk(1,(const char *)DAT_00103550,uVar2);
 uVar2 = (unsigned int)call_memcmp();
 __printf_chk(1,(const char *)DAT_00103570,uVar2);
 uVar2 = (unsigned int)call_printf();
 __printf_chk(1,(const char *)DAT_00103590,uVar2);
 uVar2 = (unsigned int)call_scanf();
 __printf_chk(1,(const char *)DAT_001035b0,uVar2);
 uVar2 = (unsigned int)call_fopen_fclose();
 __printf_chk(1,(const char *)DAT_001035d0,uVar2);
 uVar2 = (unsigned int)call_fread_fwrite();
 __printf_chk(1,(const char *)DAT_001035f0,uVar2);
 uVar2 = (unsigned int)call_malloc_free();
 __printf_chk(1,(const char *)DAT_00103610,uVar2);
 uVar2 = (unsigned int)call_memset();
 __printf_chk(1,(const char *)DAT_00103630,uVar2);
 uVar2 = (unsigned int)call_strchr_strstr();
 __printf_chk(1,(const char *)DAT_00103650,uVar2);
 return;
}

// Function: param_linux_syscall @ 0x1023dc
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 unsigned long uVar3;
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar3 = (unsigned long)(uint)-*piVar2;
 }
 else {
 uVar3 = uVar1 & 0xffffffff;
 syscall(0x39,uVar1 & 0xffffffff);
 }
 return uVar3;
}

// Function: call_linux_syscall @ 0x102430
unsigned int call_linux_syscall(void)
{
 unsigned long iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall((unsigned long long)"/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x102458
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_58;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = stat(param_1,&local_58);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if ((long)local_58.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x1024c4
unsigned int call_win32_api(void)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x1024e0
unsigned int param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 unsigned int uVar2;
 uint local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,(char *)param_2,0);
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
 return uVar2;
}

// Function: call_fork_exec @ 0x102590
unsigned int call_fork_exec(void)
{
 unsigned int uVar2;
 uVar2 = param_fork_exec("/bin/true",0);
 if (uVar2 != 0x2a) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x1025bc
int param_pipe_communication(void)
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
 if (sVar4 >= 0) {
 auStack_28[sVar4] = 0;
 }
 close(local_30);
 wait((void *)0x0);
 uVar3 = 0x2a;
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar3;
 }
 __stack_chk_fail();
 return 0;
}

// Function: call_pipe_communication @ 0x1026a4
unsigned int call_pipe_communication(void)
{
 return param_pipe_communication();
}

// Function: param_socket_create @ 0x1026b8
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
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
}

// Function: call_socket_create @ 0x1027bc
unsigned int call_socket_create(void)
{
 return param_socket_create();
}

// Function: param_shmget_shmat @ 0x1027d0
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
 size_t sVar2;
 unsigned long uVar3;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 uVar3 = 0xfffffffe;
 }
 else {
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 uVar3 = 0xfffffffd;
 }
 else {
 *__s = 0x654d646572616853;
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 sVar2 = strlen((char *)__s);
 uVar3 = sVar2 & 0xffffffff;
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return uVar3;
}

// Function: call_shmget_shmat @ 0x1028b4
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

// Function: param_signal_handling @ 0x1028d4
unsigned int param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 int iVar3;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar3 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar3 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffb;
 }
 else if (signal_number == 0xe) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffb;
 }
 }
 else {
 uVar2 = 0xfffffffc;
 }
 }
 }
 return uVar2;
}

// Function: call_signal_handling @ 0x102a48
void call_signal_handling(void)
{
 (void)param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x102a5c
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts((char *)DAT_001036b8);
 uVar2 = (unsigned int)call_linux_syscall();
 __printf_chk(1,(const char *)DAT_001036d8,uVar2);
 uVar2 = call_win32_api();
 __printf_chk(1,(const char *)DAT_001036f8,uVar2);
 uVar2 = (unsigned int)call_fork_exec();
 __printf_chk(1,(const char *)DAT_00103718,uVar2);
 uVar2 = param_pipe_communication();
 __printf_chk(1,(const char *)DAT_00103738,uVar2);
 uVar2 = param_socket_create();
 __printf_chk(1,(const char *)DAT_00103758,uVar2);
 uVar2 = (unsigned int)call_shmget_shmat();
 __printf_chk(1,(const char *)DAT_00103778,uVar2);
 uVar2 = (unsigned int)param_signal_handling();
 __printf_chk(1,(const char *)DAT_00103798,uVar2);
 return;
}

// Function: param_pthread_create @ 0x102b20
int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 pthread_t local_18;
 void *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 uVar2 = *(unsigned int *)local_10;
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

// Function: call_pthread_create @ 0x102bb0
void call_pthread_create(void)
{
 (void)param_pthread_create(7);
 return;
}

// Function: param_pthread_join @ 0x102bc8
 int param_pthread_join(void)
{
 int iVar1;
 void *__arg;
 long lVar2;
 int iVar3;
 pthread_t threads[3];
 char local_48 [36];
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 int i;
 local_8 = ___stack_chk_guard;
 __arg = &local_48 + 12;
 uStack_28 = 0xb0000000;
 *(int *)(&local_48 + 12) = 0xa00000001;
 uStack_18 = 0x1e00000015;
 uStack_20 = 0x14;
 local_10 = 0;
 iVar3 = 3;
 for (i = 0; i < 3; i++) {
 iVar1 = pthread_create(&threads[i],(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar3 = -1;
 goto LAB_00102c84;
 }
 __arg = (char *)__arg + 12;
 iVar3 = iVar3 - 1;
 }
	lVar2 = 0;
	iVar3 = 0;
	for (i = 0; i < 3; i++) {
		void *thread_ret;
		iVar1 = pthread_join(threads[i],(void **)&thread_ret);
		if (iVar1 != 0) {
			iVar3 = -2;
			break;
		}
	iVar3 = iVar3 + *(int *)((char *)&uStack_28 + lVar2);
	lVar2 = lVar2 + 12;
}
LAB_00102c84:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar3;
 }
 __stack_chk_fail();
 return 0;
}

// Function: call_pthread_join @ 0x102ccc
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: param_mutex_lock @ 0x102ce0
unsigned int param_mutex_lock(unsigned long param_1,int param_2)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t *__ptr;
 int iVar5;
 int local_4;
 size_t i;
 size_t num_threads;
 local_4 = param_2;
 num_threads = (size_t)(param_1 & 0xffffffff);
 __ptr = (pthread_t *)malloc(num_threads * sizeof(pthread_t));
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 iVar5 = (int)num_threads;
 if (0 < iVar5) {
 for (i = 0; i < num_threads; i++) {
 iVar1 = pthread_create(&__ptr[i],(pthread_attr_t *)0x0,thread_increment,&local_4);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (i = 0; i < num_threads; i++) {
 pthread_join(__ptr[i],NULL);
 }
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != iVar5 * local_4) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x102ddc
int call_mutex_lock(void)
{
 return param_mutex_lock(4,1000);
}

// Function: param_condition_variable @ 0x102df8
int param_condition_variable(void)
{
	int iVar1;
	unsigned int uVar2;
	pthread_t local_20;
	pthread_t local_18;
	unsigned int *local_10;
	long local_8;
	void *thread_ret;
	local_8 = ___stack_chk_guard;
	ready = 0;
	data = 0;
	iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
	if (iVar1 == 0) {
	iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
	if (iVar1 == 0) {
	pthread_join(local_18,&thread_ret);
	pthread_join(local_20,(void **)0x0);
	local_10 = (unsigned int *)thread_ret;
	uVar2 = *local_10;
	free(local_10);
	}
	else {
	pthread_cancel(local_18);
	uVar2 = 0xfffffffe;
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

// Function: call_condition_variable @ 0x102ec8
int call_condition_variable(void)
{
 return param_condition_variable();
}

// Function: param_atomic_ops @ 0x102edc
int param_atomic_ops(unsigned long param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t *__ptr;
 pthread_t *__newthread;
 long lVar3;
 unsigned int local_14;
 pthread_t local_10;
 long local_8;
 param_1 = param_1 & 0xffffffff;
 local_8 = ___stack_chk_guard;
 local_14 = param_2;
 __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter._0_4_ = 0;
 if ((int)param_1 < 1) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 }
 else {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102fd4;
 }
 __newthread = __newthread + 1;
 } while (__newthread != __ptr + param_1);
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 lVar3 = 0;
 do {
 pthread_join(__ptr[lVar3],(void **)0x0);
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < (int)param_1);
 }
 iVar1 = atomic_counter._0_4_;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00102fd4:
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
 return 0;
}

// Function: call_atomic_ops @ 0x103064
int call_atomic_ops(void)
{
 return param_atomic_ops(4,500);
}

// Function: param_thread_local_storage @ 0x103080
int param_thread_local_storage(unsigned long param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t *__ptr;
 void **__ptr_00;
 void *pvVar3;
 unsigned long uVar4;
 void **ppvVar6;
 int iVar8;
 int iVar9;
 int *local_10;
 long local_8;
 void **ppvVar7;
 size_t i;
 param_1 = param_1 & 0xffffffff;
 local_8 = ___stack_chk_guard;
 uVar4 = (size_t)param_1;
 __ptr = (pthread_t *)malloc(uVar4 * sizeof(pthread_t));
 __ptr_00 = (void **)malloc(uVar4 * sizeof(void *));
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void **)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar9 = (int)param_1;
 if (iVar9 < 1) {
 iVar8 = 0;
 iVar1 = 0;
 }
 else {
 for (i = 0; i < uVar4; i++) {
 pvVar3 = malloc(0x10);
 __ptr_00[i] = pvVar3;
 __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",(unsigned int)i);
 }
 for (i = 0; i < uVar4; i++) {
 iVar1 = pthread_create(&__ptr[i],(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[i]);
 if (iVar1 != 0) {
 for (size_t j = 0; j < i; j++) {
 free(__ptr_00[j]);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001031ec;
 }
 }
 iVar1 = 0;
 iVar8 = 0;
 for (i = 0; i < uVar4; i++) {
 pthread_join(__ptr[i],(void **)&local_10);
 iVar1 = iVar1 + *local_10;
 iVar8 = iVar8 + local_10[1];
 free(local_10);
 free(__ptr_00[i]);
 }
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar9 * 100 != iVar1 || iVar9 * 0x96 != iVar8) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001031ec:
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
 return 0;
}

// Function: call_thread_local_storage @ 0x10327c
void call_thread_local_storage(void)
{
 (void)param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103294
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts((char *)DAT_001037c8);
 uVar2 = param_pthread_create(7);
 __printf_chk(1,(const char *)DAT_001037e8,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,(const char *)DAT_00103808,uVar2);
 call_mutex_lock();
 uVar2 = 0x2a;
 __printf_chk(1,(const char *)DAT_00103828,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,(const char *)DAT_00103848,uVar2);
 call_atomic_ops();
 uVar2 = 0x2a;
 __printf_chk(1,(const char *)DAT_00103868,uVar2);
 call_thread_local_storage();
 uVar2 = 0x2a;
 __printf_chk(1,(const char *)DAT_00103888,uVar2);
 return;
}

// Function: main @ 0x103340
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103360
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 if (atomic_counter._4_1_ != '\0') {
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

// Function: __aarch64_ldadd4_acq_rel @ 0x1033a0
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (atomic_counter._4_1_ == '\0') {
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

// Function: _fini @ 0x1033d0
void _fini(void)
{
 return;
}

