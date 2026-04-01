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

// Additional type definitions
typedef unsigned int uint;

// Macro definitions
#define CONCAT44(hi,lo) (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))
#define CONCAT12(hi,lo) (((unsigned short)(unsigned char)(hi) << 8) | (unsigned char)(lo))

// Atomic operation function declarations
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);
char ExclusiveMonitorPass(void *addr,int size);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

// Stub implementations for atomic operations
char ExclusiveMonitorPass(void *addr,int size)
{
 return 1;
}

char ExclusiveMonitorsStatus(void)
{
 return 0;
}

void LOAcquire(void)
{
}

void LORelease(void)
{
}

typedef unsigned char byte;
typedef unsigned short ushort;
typedef int __pid_t;
typedef long __useconds_t;
typedef void *FILE;
typedef unsigned int pthread_t;
typedef void *pthread_cond_t;
typedef void *pthread_mutex_t;
typedef void *pthread_attr_t;
typedef void *(*__start_routine)(void *);
typedef void (*__sighandler_t)(int);
typedef struct {
 unsigned short sa_family;
 char sa_data[14];
} sockaddr;
typedef unsigned int socklen_t;
typedef int key_t;
typedef struct {
 int shm_perm;
 size_t shm_segsz;
 short shm_lpid;
 short shm_cpid;
 unsigned short shm_nattch;
 unsigned short shm_atime;
 unsigned short shm_dtime;
 unsigned short shm_ctime;
} shmid_ds;
typedef struct {
 long st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 short st_nlink;
 short st_uid;
 short st_gid;
 long st_rdev;
 long st_size;
 long st_atime;
 long st_mtime;
 long st_ctime;
} stat_struct;

// Global variables
long ___stack_chk_guard;
char *DAT_00103e60;
char *DAT_00103ec8;
char *DAT_00103ef0;
char *DAT_00103f10;
char *DAT_00103f30;
char *DAT_00103f50;
char *DAT_00103f70;
char *DAT_00103f90;
char *DAT_00103fb0;
char *DAT_00103fd0;
char *DAT_00103ff0;
char *DAT_00104010;
char *DAT_00104030;
char *DAT_00104050;
char *DAT_001040b8;
char *DAT_001040d8;
char *DAT_001040f8;
char *DAT_00104118;
char *DAT_00104138;
char *DAT_00104158;
char *DAT_00104178;
char *DAT_00104198;
char *DAT_001041b8;
char *DAT_001041d8;
char *DAT_001041f8;
char *DAT_00104218;
char *DAT_00104238;
char *DAT_00104258;
char *DAT_00104278;
long __stack_chk_guard;
int atomic_counter;
int shared_counter;
unsigned int data;
int signal_received;
int signal_number;
int ready;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
pthread_mutex_t counter_mutex;
char completed_0;
void *__dso_handle;
long tpidr_el0;
int tmp_ldWn;
int tmp_stWn;

// Decompiled by BinaryAI
// SHA256: b11c40358f855f6e0a88a45ff254a01e771353fdfccf68e80a8c429605600ef8

// Function: call_weak_fn @ 0x101874
int call_weak_fn(void);

// Function: _init @ 0x101388
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_001013a0 @ 0x1013a0
void FUN_001013a0(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1013c0
// External memcpy declaration
extern void * memcpy(void *__s,const void *__ct,size_t __n);

// Function: <EXTERNAL>::_exit @ 0x1013d0
// External _exit declaration
void _exit(int __status);

// Function: <EXTERNAL>::strlen @ 0x1013e0
// External strlen declaration
size_t strlen(char *__s);

// Function: <EXTERNAL>::raise @ 0x1013f0
// External raise declaration
int raise(int __sig);

// Function: <EXTERNAL>::__libc_start_main @ 0x101400
// External __libc_start_main declaration
int __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end))
{
 int result;
 if (init) init();
 result = main(argc, ubp_av, (char **)0);
 if (fini) fini();
 return result;
}

// Stub implementation for __libc_start_main
int __libc_start_main_impl(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end))
{
 int result;
 if (init) init();
 result = main(argc, ubp_av, (char **)0);
 if (fini) fini();
 return result;
}

int __libc_start_main_wrapper_impl(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end))
{
 int iVar1;
 iVar1 = __libc_start_main_impl(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
 return iVar1;
}

// Wrapper for __libc_start_main that returns int
int __libc_start_main_wrapper(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end))
{
 return __libc_start_main_impl(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

// Function: <EXTERNAL>::execl @ 0x101410
// External execl declaration
int execl(const char *__path,const char *__arg,...);

int execl_wrapper(const char *__path,const char *__arg,...)
{
 int iVar1;
 iVar1 = execl(__path,__arg,(char *)0);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x101420
// External listen declaration
extern int listen(int __fd,int __n);

int listen_wrapper(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x101430
// External shmdt declaration
extern int shmdt(void *__shmaddr);

int shmdt_wrapper(void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x101440
// External bind declaration
extern int bind(int __fd,sockaddr *__addr,socklen_t __len);

int bind_wrapper(int __fd,sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101450
// External __cxa_finalize declaration
void __cxa_finalize(void *dso_handle);

void __cxa_finalize_wrapper(void *dso_handle)
{
 __cxa_finalize(dso_handle);
 return;
}

// Fixed __cxa_finalize that accepts parameter
void __cxa_finalize_impl(void *param)
{
 __cxa_finalize(param);
 return;
}

// Function: <EXTERNAL>::pipe @ 0x101460
// External pipe declaration
extern int pipe(int *__pipedes);

int pipe_wrapper(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x101470
// External fork declaration
extern __pid_t fork(void);

__pid_t fork_wrapper(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::stpcpy @ 0x101480
// External stpcpy declaration
extern char * stpcpy(char *__dest,char *__src);

char * stpcpy_wrapper(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = stpcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::fileno @ 0x101490
// External fileno declaration
extern int fileno(FILE *__stream);

int fileno_wrapper(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x1014a0
// External signal declaration
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

__sighandler_t signal_wrapper(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::__snprintf_chk @ 0x1014b0
// External __snprintf_chk declaration
extern int __snprintf_chk(char *str,unsigned long maxlen,int flag,unsigned long slen,const char *format,...);

// Function: <EXTERNAL>::fclose @ 0x1014c0
// External fclose declaration
extern int fclose(FILE *__stream);

int fclose_wrapper(FILE *__stream)
{
 int iVar1;
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x1014d0
// External fopen declaration
extern FILE * fopen(char *__filename,char *__modes);

FILE * fopen_wrapper(char *__filename,char *__modes)
{
 FILE *pFVar1;
 pFVar1 = fopen(__filename,__modes);
 return pFVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1014e0
// External malloc declaration
extern void * malloc(size_t __size);

void * malloc_wrapper(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x1014f0
// External setsockopt declaration
extern int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);

// Function: <EXTERNAL>::open @ 0x101500
// External open declaration
extern int open(char *__file,int __oflag,...);

int open_wrapper(char *__file,int __oflag,...)
{
 int iVar1;
 iVar1 = open(__file,__oflag);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101510
// External pthread_cond_signal declaration
extern int pthread_cond_signal(pthread_cond_t *__cond);

// Function: <EXTERNAL>::__printf_chk @ 0x101520
// External __printf_chk declaration - returns int
int __printf_chk(int __flag,const char *__format,...);

// Wrapper for __printf_chk with string pointer
int __printf_chk_str(int __flag,const char *__format)
{
 int iVar1;
 iVar1 = __printf_chk(__flag,__format);
 return iVar1;
}

// Fixed __printf_chk that accepts unsigned long long values
int __printf_chk_impl(int __flag,char *__format,unsigned long long val)
{
 int iVar1;
 iVar1 = __printf_chk(__flag,__format,val);
 return iVar1;
}

// Fixed __printf_chk for int values
int __printf_chk_int(int __flag,char *__format,int val)
{
 int iVar1;
 iVar1 = __printf_chk(__flag,__format,val);
 return iVar1;
}

// Fixed __printf_chk for unsigned int values
int __printf_chk_uint(int __flag,char *__format,unsigned int val)
{
 int iVar1;
 iVar1 = __printf_chk(__flag,__format,val);
 return iVar1;
}

// Fixed __printf_chk for long values
int __printf_chk_long(int __flag,char *__format,long val)
{
 int iVar1;
 iVar1 = __printf_chk(__flag,__format,val);
 return iVar1;
}

// Fixed __printf_chk for unsigned long values
int __printf_chk_ulong(int __flag,char *__format,unsigned long val)
{
 int iVar1;
 iVar1 = __printf_chk(__flag,__format,val);
 return iVar1;
}

// Fixed __printf_chk for pointer values (prints as hex)
int __printf_chk_ptr(int __flag,const char *__format,void *val)
{
 int iVar1;
 iVar1 = __printf_chk(__flag,__format,(unsigned long)val);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x101530
// External memset declaration
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::shmat @ 0x101540
// External shmat declaration
extern void * shmat(int __shmid,void *__shmaddr,int __shmflg);

// Function: <EXTERNAL>::sleep @ 0x101550
// External sleep declaration
extern uint sleep(uint __seconds);

uint sleep_wrapper(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x101560
// External rewind declaration
extern void rewind(FILE *__stream);

void rewind_wrapper(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101570
// External __stack_chk_fail declaration
void __stack_chk_fail(void);

// Fixed __stack_chk_fail that accepts parameters
void __stack_chk_fail_impl(unsigned long val, long *guard, int zero, long diff)
{
 __stack_chk_fail();
 return;
}

// Fixed __stack_chk_fail with single parameter
void __stack_chk_fail_one(unsigned long val)
{
 __stack_chk_fail();
 return;
}

// Fixed __stack_chk_fail with guard parameter
void __stack_chk_fail_guard(long *guard)
{
 __stack_chk_fail();
 return;
}

// Fixed __stack_chk_fail with diff parameter
void __stack_chk_fail_diff(long diff)
{
 __stack_chk_fail();
 return;
}

// Fixed __stack_chk_fail with multiple parameters
void __stack_chk_fail_multi(unsigned long val, long *guard, int zero, long diff)
{
 __stack_chk_fail();
 return;
}

// Function: <EXTERNAL>::close @ 0x101580
// External close declaration
extern int close(int __fd);

int close_wrapper(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101590
// External __gmon_start__ declaration
void __gmon_start__(void);

// Wrapper that returns int for compatibility
int __gmon_start__Wrapper(void)
{
 __gmon_start__();
 return 0;
}

// Function: <EXTERNAL>::stat @ 0x1015a0
// External stat declaration
extern int stat(char *__file,stat_struct *__buf);

// Function: <EXTERNAL>::write @ 0x1015b0
// External write declaration
extern ssize_t write(int __fd,void *__buf,size_t __n);

ssize_t write_wrapper(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::__getauxval @ 0x1015c0
// External __getauxval declaration
extern unsigned long __getauxval(unsigned long type);

// Function: <EXTERNAL>::abort @ 0x1015d0
// External abort declaration
void abort(void);

// Function: <EXTERNAL>::puts @ 0x1015e0
// External puts declaration
extern int puts(char *__s);

int puts_wrapper(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x1015f0
// External memcmp declaration
extern int memcmp(void *__s1,void *__s2,size_t __n);

// Function: <EXTERNAL>::strcmp @ 0x101600
// External strcmp declaration
extern int strcmp(char *__s1,char *__s2);

// Function: <EXTERNAL>::shmctl @ 0x101610
// External shmctl declaration
extern int shmctl(int __shmid,int __cmd,shmid_ds *__buf);

// Function: <EXTERNAL>::fread @ 0x101620
// External fread declaration
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);

// Function: <EXTERNAL>::ftok @ 0x101630
// External ftok declaration
extern key_t ftok(char *__pathname,int __proj_id);

// Function: <EXTERNAL>::free @ 0x101640
// External free declaration
extern void free(void *__ptr);

void free_wrapper(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::shmget @ 0x101650
// External shmget declaration
extern int shmget(key_t __key,size_t __size,int __shmflg);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101660
// External pthread_cond_wait declaration
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::strchr @ 0x101670
// External strchr declaration
extern char * strchr(char *__s,int __c);

// Function: <EXTERNAL>::fwrite @ 0x101680
// External fwrite declaration
extern size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);

// Function: <EXTERNAL>::pthread_create @ 0x101690
// External pthread_create declaration
extern int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
 void *__arg);

int pthread_create_wrapper(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
 return iVar1;
}

// Wrapper for pthread_create with void function
int pthread_create_void(pthread_t *__newthread,pthread_attr_t *__attr,void (*__start_routine)(void),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,(void *(*)(void *))__start_routine,__arg);
 return iVar1;
}

// Wrapper for pthread_create with unsigned long long function
int pthread_create_ull(pthread_t *__newthread,pthread_attr_t *__attr,unsigned long long (*__start_routine)(void *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,(void *(*)(void *))__start_routine,__arg);
 return iVar1;
}

// Wrapper for pthread_create with void* function
int pthread_create_vp(pthread_t *__newthread,pthread_attr_t *__attr,void (*__start_routine)(void *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,(void *(*)(void *))__start_routine,__arg);
 return iVar1;
}

// Fixed pthread_create for various thread function signatures
int pthread_create_int_func(pthread_t *__newthread,pthread_attr_t *__attr,int (*start_routine)(int *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,(void *(*)(void *))start_routine,__arg);
 return iVar1;
}

int pthread_create_void_func(pthread_t *__newthread,pthread_attr_t *__attr,void (*start_routine)(void),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,(void *(*)(void *))start_routine,__arg);
 return iVar1;
}

int pthread_create_ulong_func(pthread_t *__newthread,pthread_attr_t *__attr,unsigned long long (*start_routine)(void *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,(void *(*)(void *))start_routine,__arg);
 return iVar1;
}

int pthread_create_char_func(pthread_t *__newthread,pthread_attr_t *__attr,void (*start_routine)(char *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,(void *(*)(void *))start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x1016a0
// External wait declaration
extern __pid_t wait(void *__stat_loc);

__pid_t wait_wrapper(void *__stat_loc)
{
 __pid_t _Var1;
 _Var1 = wait(__stat_loc);
 return _Var1;
}

// Function: <EXTERNAL>::socket @ 0x1016b0
// External socket declaration
extern int socket(int __domain,int __type,int __protocol);

int socket_wrapper(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::read @ 0x1016c0
// External read declaration
extern ssize_t read(int __fd,void *__buf,size_t __nbytes);

ssize_t read_wrapper(int __fd,void *__buf,size_t __nbytes)
{
 ssize_t sVar1;
 sVar1 = read(__fd,__buf,__nbytes);
 return sVar1;
}

// Function: <EXTERNAL>::strstr @ 0x1016d0
// External strstr declaration
extern char * strstr(char *__haystack,char *__needle);

// Function: <EXTERNAL>::usleep @ 0x1016e0
// External usleep declaration
extern int usleep(__useconds_t __useconds);

int usleep_wrapper(__useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x1016f0
// External __isoc99_sscanf declaration
extern int __isoc99_sscanf(const char *str,const char *format,...);

// Function: <EXTERNAL>::strncpy @ 0x101700
// External strncpy declaration
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::__errno_location @ 0x101710
// External __errno_location declaration
extern int * __errno_location(void);

// Function: <EXTERNAL>::pthread_join @ 0x101720
// External pthread_join declaration
extern int pthread_join(pthread_t __th,void **__thread_return);

// Wrapper for pthread_join with unsigned int** return
int pthread_join_uint_ret(pthread_t __th,unsigned int **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,(void **)__thread_return);
 return iVar1;
}

// Fixed pthread_join for int pointer return
int pthread_join_int(pthread_t __th,int **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,(void **)__thread_return);
 return iVar1;
}

// Fixed pthread_join for unsigned int pointer return
int pthread_join_uint(pthread_t __th,unsigned int **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,(void **)__thread_return);
 return iVar1;
}

// Fixed pthread_join with NULL return
int pthread_join_null(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_join(__th,(void **)0x0);
 return iVar1;
}

// Function: <EXTERNAL>::alarm @ 0x101730
// External alarm declaration
extern uint alarm(uint __seconds);

uint alarm_wrapper(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x101740
// External pthread_cancel declaration
extern int pthread_cancel(pthread_t __th);

int pthread_cancel_wrapper(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101750
// External pthread_mutex_lock declaration
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);

int pthread_mutex_lock_wrapper(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_lock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x101760
// External syscall declaration
extern long syscall(long __sysno,...);

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x101770
// External pthread_mutex_unlock declaration
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);

int pthread_mutex_unlock_wrapper(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_unlock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x101780
// External waitpid declaration
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);

// Function: <EXTERNAL>::unlink @ 0x101790
// External unlink declaration
extern int unlink(char *__name);

int unlink_wrapper(char *__name)
{
 int iVar1;
 iVar1 = unlink(__name);
 return iVar1;
}

// Function: test_standard_library_functions @ 0x1029b0
void test_standard_library_functions(void);

// Function: test_system_calls @ 0x103304
void test_system_calls(void);

// Function: test_thread_concurrency @ 0x103c74
void test_thread_concurrency(void);

// Function: main @ 0x1017c0
int main(int argc, char **argv, char **envp)
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
 atomic_counter = (atomic_counter & 0xFF) | ((extraout_var & 1) << 8);
 return;
}

// Function: _start @ 0x101840
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack_ref = &___stack_chk_guard;
 __libc_start_main_wrapper(main,param_9,stack_ref,0,0,(void *)param_1,stack_ref);
 abort();
}

// Function: call_weak_fn @ 0x101874
int call_weak_fn(void)
{
 __gmon_start__Wrapper();
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
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101900
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
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
unsigned long long thread_sum(int *param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 iVar4 = *param_1;
 iVar2 = param_1[1];
 param_1[2] = 0;
 if (iVar2 < iVar4) {
 return 0;
 }
 uVar1 = (iVar2 - iVar4) + 1;
 if ((uint)(iVar2 - iVar4) < 8) {
 iVar6 = 0;
 }
 else {
 iVar5 = 0;
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 uVar3 = 0;
 iVar6 = iVar4;
 iVar10 = iVar4 + 1;
 iVar11 = iVar4 + 2;
 iVar12 = iVar4 + 3;
 do {
 uVar3 = uVar3 + 1;
 iVar5 = iVar5 + iVar6;
 iVar7 = iVar7 + iVar10;
 iVar8 = iVar8 + iVar11;
 iVar9 = iVar9 + iVar12;
 iVar6 = iVar6 + 4;
 iVar10 = iVar10 + 4;
 iVar11 = iVar11 + 4;
 iVar12 = iVar12 + 4;
 } while (uVar1 >> 2 != uVar3);
 iVar6 = iVar5 + iVar7 + iVar8 + iVar9;
 iVar4 = iVar4 + (uVar1 & 0xfffffffc);
 iVar10 = iVar6;
 if (uVar1 == (uVar1 & 0xfffffffc)) goto LAB_00101a64;
 }
 iVar10 = iVar6 + iVar4;
 if (iVar4 + 1 <= iVar2) {
 iVar10 = iVar6 + iVar4 + iVar4 + 1;
 if (iVar4 + 2 <= iVar2) {
 iVar10 = iVar10 + iVar4 + 2;
 if (iVar4 + 3 <= iVar2) {
 iVar10 = iVar10 + iVar4 + 3;
 if (iVar4 + 4 <= iVar2) {
 iVar10 = iVar10 + iVar4 + 4;
 if (iVar4 + 5 <= iVar2) {
 iVar10 = iVar10 + iVar4 + 5;
 if (iVar4 + 6 <= iVar2) {
 iVar6 = iVar10 + iVar4 + 6;
 iVar10 = iVar6 + iVar4 + 7;
 if (iVar2 < iVar4 + 7) {
 iVar10 = iVar6;
 }
 }
 }
 }
 }
 }
 }
LAB_00101a64:
 param_1[2] = iVar10;
 return 0;
}

// Function: thread_compute @ 0x101a80
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: thread_increment @ 0x101ab0
void *thread_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 iVar2 = iVar2 + 1;
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return (void *)0;
}

// Function: consumer_thread @ 0x101b24
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
 return (void *)puVar2;
}

// Function: producer_thread @ 0x101ba0
void *producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 ready = 1;
 data = 0x2a;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return (void *)0;
}

// Function: thread_atomic_increment @ 0x101c00
void *thread_atomic_increment(void *param_1)
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

// Function: thread_atomic_load_store @ 0x101c70
void *thread_atomic_load_store(void *param_1)
{
 atomic_counter = atomic_counter + 100;
 return (void *)0;
}

// Function: thread_tls_test @ 0x101c90
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x20),(char *)param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return (void *)piVar4;
}

// Function: param_fork_exec.part.0 @ 0x101ce0
void param_fork_exec_part_0(char *param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = execl(param_1,param_1,(char *)0);
 _exit(0x7f);
}

// Function: param_thread_local_storage.constprop.0 @ 0x101d00
unsigned int param_thread_local_storage_constprop_0(void)
{
 long lVar1;
 void **ppvVar2;
 int iVar1;
 int iVar3;
 unsigned int uVar4;
 pthread_t *__ptr;
 void *__ptr_00;
 void *pvVar5;
 unsigned long uVar6;
 unsigned long uVar7;
 long lVar8;
 long lVar9;
 int iVar10;
 pthread_t *__newthread;
 int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 __ptr = (pthread_t *)malloc(0x20);
 __ptr_00 = malloc(0x20);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar7 = 0;
 do {
 pvVar5 = malloc(0x10);
 *(void **)((long)__ptr_00 + uVar7 * 8) = pvVar5;
 uVar6 = uVar7 & 0xffffffff;
 uVar7 = uVar7 + 1;
 __snprintf_chk(pvVar5,0x10,1,0x10,"Thread-%d",uVar6);
 } while (uVar7 != 4);
 lVar9 = 0;
 __newthread = __ptr;
 do {
 iVar3 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)__ptr_00 + lVar9 * 8));
 if (iVar3 != 0) {
 lVar8 = 0;
 do {
 lVar1 = lVar8 * 8;
 lVar8 = lVar8 + 1;
 free(*(void **)((long)__ptr_00 + lVar1));
 } while ((int)lVar8 <= (int)lVar9);
 free(__ptr_00);
 free(__ptr);
 uVar4 = 0xfffffffe;
 goto LAB_00101e48;
 }
 lVar9 = lVar9 + 1;
 __newthread = __newthread + 1;
 } while (lVar9 != 4);
 iVar10 = 0;
 lVar9 = 0;
 iVar3 = 0;
 do {
 iVar1 = pthread_join(*(pthread_t *)((long)__ptr + lVar9),(void **)&local_10);
 iVar3 = iVar3 + *local_10;
 iVar10 = iVar10 + local_10[1];
 free(local_10);
 ppvVar2 = (void **)((long)__ptr_00 + lVar9);
 lVar9 = lVar9 + 8;
 free(*ppvVar2);
 } while (lVar9 != 0x20);
 free(__ptr_00);
 free(__ptr);
 uVar4 = 0x2a;
 if (iVar3 != 400 || iVar10 != 600) {
 uVar4 = 0xfffffffd;
 }
 }
LAB_00101e48:
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar4;
 }
 __stack_chk_fail();
 return uVar4;
}

// Function: param_atomic_ops.constprop.0 @ 0x101ed0
unsigned int param_atomic_ops_constprop_0(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 long lVar4;
 unsigned int local_14;
 pthread_t local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_14 = 500;
 __ptr = (pthread_t *)malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter = 0;
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00101fc8;
 }
 ppVar3 = ppVar3 + 1;
 } while (__ptr + 4 != ppVar3);
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 lVar4 = 0;
 do {
 ppVar3 = __ptr + lVar4;
 lVar4 = lVar4 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 iVar1 = (int)atomic_counter;
 } while (lVar4 != 4);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00101fc8:
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: param_mutex_lock.constprop.0 @ 0x102030
unsigned int param_mutex_lock_constprop_0(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t *__ptr;
 pthread_t *ppVar3;
 long lVar4;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = 1000;
 __ptr = (pthread_t *)malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_increment,&local_c);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102100;
 }
 ppVar3 = ppVar3 + 1;
 } while (__ptr + 4 != ppVar3);
 lVar4 = 0;
 do {
 ppVar3 = __ptr + lVar4;
 lVar4 = lVar4 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 } while (lVar4 != 4);
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != local_c * 4) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00102100:
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: param_strcpy @ 0x102160
int param_strcpy(char *param_1,char *param_2)
{
 char *pcVar1;
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}

// Function: call_strcpy @ 0x102184
unsigned long long call_strcpy(void)
{
 return 8;
}

// Function: FUN_0010218c @ 0x10218c
int FUN_0010218c(char *param_1,char *param_2)
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

// Function: param_strcmp @ 0x102190
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

// Function: call_strcmp @ 0x1021b0
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x1021c0
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x1021d4
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: FUN_001021dc @ 0x1021dc
unsigned long FUN_001021dc(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: param_memcpy @ 0x1021e0
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x102204
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: FUN_0010220c @ 0x10220c
int FUN_0010220c(void *param_1,void *param_2,size_t param_3)
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

// Function: param_memcmp @ 0x102210
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

// Function: call_memcmp @ 0x102230
void call_memcmp(void)
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
 return;
 }
 __stack_chk_fail();
}

// Function: param_printf @ 0x102300
void param_printf(unsigned int param_1,unsigned long long param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,(char *)param_2);
 return;
}

// Function: call_printf @ 0x102320
void call_printf(void)
{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,DAT_00103e60);
 return;
}

// Function: FUN_0010233c @ 0x10233c
void FUN_0010233c(unsigned long long param_1)
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

// Function: param_scanf @ 0x102340
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

// Function: call_scanf @ 0x1023b0
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

// Function: param_fopen_fclose @ 0x102430
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

// Function: call_fopen_fclose @ 0x102480
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

// Function: param_fread_fwrite @ 0x1024e0
void param_fread_fwrite(char *param_1)
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
 return;
 }
 __stack_chk_fail();
}

// Function: call_fread_fwrite @ 0x102630
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: FUN_0010263c @ 0x10263c
int FUN_0010263c(unsigned long param_1)
{
 unsigned long long *__ptr;
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long uVar3;
 int iVar4;
 int iVar5;
 __ptr = (unsigned long long *)malloc(param_1 * 4);
 if (__ptr == (unsigned long long *)0x0) {
 return -1;
 }
 if (param_1 != 0) {
 if (param_1 - 1 < 3) {
 uVar3 = 0;
 }
 else {
 puVar1 = __ptr;
 iVar5 = 1;
 iVar4 = 0;
 do {
 puVar2 = puVar1 + 2;
 puVar1[1] = CONCAT44((iVar5 + 2) * 10,(iVar4 + 2) * 10);
 *puVar1 = CONCAT44(iVar5 * 10,iVar4 * 10);
 puVar1 = puVar2;
 iVar5 = iVar5 + 4;
 iVar4 = iVar4 + 4;
 } while (__ptr + (param_1 >> 2) * 2 != puVar2);
 uVar3 = param_1 & 0xfffffffffffffffc;
 if ((param_1 & 3) == 0) goto LAB_0010270c;
 }
 *(int *)((long)__ptr + uVar3 * 4) = (int)uVar3 * 10;
 if (uVar3 + 1 < param_1) {
 *(int *)((long)__ptr + uVar3 * 4 + 4) = (int)(uVar3 + 1) * 10;
 if (uVar3 + 2 < param_1) {
 *(int *)((long)__ptr + uVar3 * 4 + 8) = (int)(uVar3 + 2) * 10;
 }
 }
 }
LAB_0010270c:
 iVar5 = *(int *)__ptr;
 iVar4 = *(int *)((long)__ptr + (param_1 * 4 - 4));
 free(__ptr);
 return iVar4 + iVar5;
}

// Function: param_malloc_free @ 0x102640
int param_malloc_free(unsigned long param_1)
{
 unsigned long long *__ptr;
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long uVar3;
 int iVar4;
 int iVar5;
 __ptr = (unsigned long long *)malloc(param_1 * 4);
 if (__ptr == (unsigned long long *)0x0) {
 return -1;
 }
 if (param_1 != 0) {
 if (param_1 - 1 < 3) {
 uVar3 = 0;
 }
 else {
 puVar1 = __ptr;
 iVar5 = 1;
 iVar4 = 0;
 do {
 puVar2 = puVar1 + 2;
 puVar1[1] = CONCAT44((iVar5 + 2) * 10,(iVar4 + 2) * 10);
 *puVar1 = CONCAT44(iVar5 * 10,iVar4 * 10);
 puVar1 = puVar2;
 iVar5 = iVar5 + 4;
 iVar4 = iVar4 + 4;
 } while (__ptr + (param_1 >> 2) * 2 != puVar2);
 uVar3 = param_1 & 0xfffffffffffffffc;
 if ((param_1 & 3) == 0) goto LAB_0010270c;
 }
 *(int *)((long)__ptr + uVar3 * 4) = (int)uVar3 * 10;
 if (uVar3 + 1 < param_1) {
 *(int *)((long)__ptr + uVar3 * 4 + 4) = (int)(uVar3 + 1) * 10;
 if (uVar3 + 2 < param_1) {
 *(int *)((long)__ptr + uVar3 * 4 + 8) = (int)(uVar3 + 2) * 10;
 }
 }
 }
LAB_0010270c:
 iVar5 = *(int *)__ptr;
 iVar4 = *(int *)((long)__ptr + (param_1 * 4 - 4));
 free(__ptr);
 return iVar4 + iVar5;
}

// Function: call_malloc_free @ 0x102740
unsigned long long call_malloc_free(void)
{
 void *__ptr;
 unsigned long long uVar1;
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar1 = 0x5a;
 }
 return uVar1;
}

// Function: FUN_0010276c @ 0x10276c
int FUN_0010276c(unsigned long long *param_1,size_t param_2)
{
 unsigned long uVar1;
 unsigned long long *puVar2;
 byte bVar4;
 byte bVar5;
 byte bVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 unsigned long long uVar11;
 unsigned long long uVar12;
 unsigned long long *puVar3;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 return 0;
 }
 if (param_2 - 1 < 0xf) {
 uVar1 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 puVar2 = param_1;
 do {
 puVar3 = puVar2 + 2;
 uVar12 = puVar2[1];
 uVar11 = *puVar2;
 bVar5 = (byte)((unsigned long)uVar11 >> 0x28);
 bVar4 = (byte)((unsigned long)uVar12 >> 8);
 bVar6 = (byte)((unsigned long)uVar12 >> 0x28);
 iVar7 = iVar7 + ((uint)uVar11 & 0xff) +
 (CONCAT12(bVar5,(ushort)(byte)((unsigned long)uVar11 >> 0x20)) & 0xffff) +
 ((CONCAT12(bVar4,(short)uVar12) & 0xff00ff) & 0xffff) +
 (CONCAT12(bVar6,(ushort)(byte)((unsigned long)uVar12 >> 0x20)) & 0xffff);
 iVar8 = iVar8 + (uint)(byte)((unsigned long)uVar11 >> 8) + (uint)bVar5 + (uint)bVar4 + (uint)bVar6;
 iVar9 = iVar9 + (uint)(byte)((unsigned long)uVar11 >> 0x10) + (uint)(byte)((unsigned long)uVar11 >> 0x30) +
 (uint)(byte)((unsigned long)uVar12 >> 0x10) + (uint)(byte)((unsigned long)uVar12 >> 0x30);
 iVar10 = iVar10 + (uint)(byte)((unsigned long)uVar11 >> 0x18) + (uint)(byte)((unsigned long)uVar11 >> 0x38) +
 (uint)(byte)((unsigned long)uVar12 >> 0x18) + (uint)(byte)((unsigned long)uVar12 >> 0x38);
 puVar2 = puVar3;
 } while (puVar3 != (unsigned long long *)((param_2 & 0xfffffffffffffff0) + (long)param_1));
 iVar7 = iVar7 + iVar8 + iVar9 + iVar10;
 uVar1 = param_2 & 0xfffffffffffffff0;
 if ((param_2 & 0xf) == 0) {
 return iVar7;
 }
 }
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1);
 if (uVar1 + 1 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 1);
 if (uVar1 + 2 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 2);
 if (uVar1 + 3 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 3);
 if (uVar1 + 4 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 4);
 if (uVar1 + 5 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 5);
 if (uVar1 + 6 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 6);
 if (uVar1 + 7 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 7);
 if (uVar1 + 8 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 8);
 if (uVar1 + 9 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 9);
 if (uVar1 + 10 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 10);
 if (uVar1 + 0xb < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xb);
 if (uVar1 + 0xc < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xc);
 if (uVar1 + 0xd < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xd);
 if (uVar1 + 0xe < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xe);
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar7;
}

// Function: param_memset @ 0x102770
int param_memset(unsigned long long *param_1,size_t param_2)
{
 unsigned long uVar1;
 unsigned long long *puVar2;
 byte bVar4;
 byte bVar5;
 byte bVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 unsigned long long uVar11;
 unsigned long long uVar12;
 unsigned long long *puVar3;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 return 0;
 }
 if (param_2 - 1 < 0xf) {
 uVar1 = 0;
 iVar7 = 0;
 }
 else {
 iVar7 = 0;
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 puVar2 = param_1;
 do {
 puVar3 = puVar2 + 2;
 uVar12 = puVar2[1];
 uVar11 = *puVar2;
 bVar5 = (byte)((unsigned long)uVar11 >> 0x28);
 bVar4 = (byte)((unsigned long)uVar12 >> 8);
 bVar6 = (byte)((unsigned long)uVar12 >> 0x28);
 iVar7 = iVar7 + ((uint)uVar11 & 0xff) +
 (CONCAT12(bVar5,(ushort)(byte)((unsigned long)uVar11 >> 0x20)) & 0xffff) +
 ((CONCAT12(bVar4,(short)uVar12) & 0xff00ff) & 0xffff) +
 (CONCAT12(bVar6,(ushort)(byte)((unsigned long)uVar12 >> 0x20)) & 0xffff);
 iVar8 = iVar8 + (uint)(byte)((unsigned long)uVar11 >> 8) + (uint)bVar5 + (uint)bVar4 + (uint)bVar6;
 iVar9 = iVar9 + (uint)(byte)((unsigned long)uVar11 >> 0x10) + (uint)(byte)((unsigned long)uVar11 >> 0x30) +
 (uint)(byte)((unsigned long)uVar12 >> 0x10) + (uint)(byte)((unsigned long)uVar12 >> 0x30);
 iVar10 = iVar10 + (uint)(byte)((unsigned long)uVar11 >> 0x18) + (uint)(byte)((unsigned long)uVar11 >> 0x38) +
 (uint)(byte)((unsigned long)uVar12 >> 0x18) + (uint)(byte)((unsigned long)uVar12 >> 0x38);
 puVar2 = puVar3;
 } while (puVar3 != (unsigned long long *)((param_2 & 0xfffffffffffffff0) + (long)param_1));
 iVar7 = iVar7 + iVar8 + iVar9 + iVar10;
 uVar1 = param_2 & 0xfffffffffffffff0;
 if ((param_2 & 0xf) == 0) {
 return iVar7;
 }
 }
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1);
 if (uVar1 + 1 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 1);
 if (uVar1 + 2 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 2);
 if (uVar1 + 3 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 3);
 if (uVar1 + 4 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 4);
 if (uVar1 + 5 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 5);
 if (uVar1 + 6 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 6);
 if (uVar1 + 7 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 7);
 if (uVar1 + 8 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 8);
 if (uVar1 + 9 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 9);
 if (uVar1 + 10 < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 10);
 if (uVar1 + 0xb < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xb);
 if (uVar1 + 0xc < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xc);
 if (uVar1 + 0xd < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xd);
 if (uVar1 + 0xe < param_2) {
 iVar7 = iVar7 + (uint)*(byte *)((long)param_1 + uVar1 + 0xe);
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 return iVar7;
}

// Function: call_memset @ 0x102930
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x102940
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

// Function: call_strchr_strstr @ 0x1029a0
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x1029b0
void test_standard_library_functions(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 FILE *__stream;
 void *__ptr;
 unsigned long long uVar5;
 int local_40;
 int iStack_3c;
 unsigned long long local_38;
 unsigned int local_30;
 unsigned long long local_28;
 unsigned int local_20;
 unsigned long long local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_00103ec8);
 __printf_chk(1,DAT_00103ef0,8);
 __printf_chk(1,DAT_00103f10,0);
 __printf_chk(1,DAT_00103f30,0xc);
 __printf_chk(1,DAT_00103f50,0x5a);
 local_38 = 0x200000001;
 local_20 = 4;
 local_30 = 3;
 local_28 = 0x200000001;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar1 = memcmp(&local_38,&local_28,0xc);
 iVar4 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar4 = 1;
 }
 iVar2 = memcmp(&local_38,&local_18,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 __printf_chk(1,DAT_00103f70,iVar1 + iVar4);
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,DAT_00103e60);
 __printf_chk(1,DAT_00103f90,uVar3);
 iVar4 = __isoc99_sscanf("123,456","%d,%d",&local_40,&iStack_3c);
 if (iVar4 == 2) {
 local_40 = local_40 + iStack_3c;
 }
 else {
 local_40 = -1;
 }
 __printf_chk(1,DAT_00103fb0,local_40);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar4 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0x2a;
 if (-1 < iVar4) goto LAB_00102b58;
 }
 uVar5 = 0xffffffff;
LAB_00102b58:
 __printf_chk(1,DAT_00103fd0,uVar5);
 uVar3 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,DAT_00103ff0,uVar3);
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar5 = 0x5a;
 }
 __printf_chk(1,DAT_00104010,uVar5);
 __printf_chk(1,DAT_00104030,0);
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00104050,0xf);
 return;
 }
 __stack_chk_fail();
}

// Function: param_linux_syscall @ 0x102c20
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

// Function: call_linux_syscall @ 0x102c80
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

// Function: param_win32_api @ 0x102ce0
void param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 long local_58;
 long local_8;
 stat_struct local_58_struct;
 local_8 = ___stack_chk_guard;
 iVar1 = stat(param_1,&local_58_struct);
 local_58 = local_58_struct.st_size;
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

// Function: FUN_00102d4c @ 0x102d4c
void FUN_00102d4c(void)
{
 int iVar1;
 unsigned int uVar2;
 long lStack_58;
 long lStack_8;
 stat_struct local_58_struct;
 lStack_8 = ___stack_chk_guard;
 iVar1 = stat("/etc/passwd",&local_58_struct);
 lStack_58 = local_58_struct.st_size;
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
 return;
}

// Function: call_win32_api @ 0x102d50
void call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 long local_58;
 long local_8;
 stat_struct local_58_struct;
 local_8 = ___stack_chk_guard;
 iVar1 = stat("/etc/passwd",&local_58_struct);
 local_58 = local_58_struct.st_size;
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

// Function: param_fork_exec @ 0x102dc4
void param_fork_exec(unsigned long long param_1,unsigned long long param_2)
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
 param_fork_exec_part_0((char *)param_1,param_2);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_c >> 8 & 0xff, (local_c & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 return;
 }
 return;
}

// Function: call_fork_exec @ 0x102e70
void call_fork_exec(void)
{
 __pid_t _Var1;
 unsigned long long uVar2;
 uint local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 param_fork_exec_part_0("/bin/true",(unsigned long long)0);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if (((-1 < _Var1) && ((local_c & 0x7f) == 0)) && (uVar2 = 0x2a, (local_c & 0xff00) == 0))
 goto LAB_00102ebc;
 }
 uVar2 = 0xffffffff;
LAB_00102ebc:
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 return;
 }
 return;
}

// Function: param_pipe_communication @ 0x102f04
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
 wait((void *)0x0);
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

// Function: param_socket_create @ 0x102ff4
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
 return uVar2;
}

// Function: param_shmget_shmat @ 0x103104
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

// Function: FUN_001031bc @ 0x1031bc
unsigned int FUN_001031bc(void)
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

// Function: call_shmget_shmat @ 0x1031c0
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

// Function: param_signal_handling @ 0x1031e0
unsigned int param_signal_handling(void)
{
 __sighandler_t p_Var1;
 int iVar2;
 unsigned int result;
 p_Var1 = signal(10,(void (*)(int))signal_handler);
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = signal(0xe,(void (*)(int))signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 result = 0xfffffffe;
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
 result = 0xfffffffd;
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
 result = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 result = 0x2a;
 }
 }
 else {
 result = 0xfffffffc;
 }
 }
 }
 else {
 result = 0xffffffff;
 }
 return result;
}

// Function: test_system_calls @ 0x103304
void test_system_calls(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned int uVar3;
 unsigned long uVar4;
 int *piVar5;
 unsigned long long uVar6;
 uint local_8c;
 long local_58;
 long local_8;
 stat_struct local_58_struct;
 local_8 = ___stack_chk_guard;
 puts(DAT_001040b8);
 uVar4 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if ((int)uVar4 < 0) {
 piVar5 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar5) {
 uVar3 = 0xffffffff;
 }
 }
 else {
 syscall(0x39,uVar4 & 0xffffffff);
 uVar3 = 0x2a;
 }
 __printf_chk(1,DAT_001040d8,uVar3);
 iVar1 = stat("/etc/passwd",&local_58_struct);
 local_58 = local_58_struct.st_size;
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 uVar3 = 0x2a;
 if (local_58 < 1) {
 uVar3 = 0xfffffffe;
 }
 }
 __printf_chk(1,DAT_001040f8,uVar3);
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 param_fork_exec_part_0("/bin/true",0);
 }
 _Var2 = waitpid(_Var2,(int *)&local_8c,0);
 if (((-1 < _Var2) && ((local_8c & 0x7f) == 0)) && (uVar6 = 0x2a, (local_8c & 0xff00) == 0))
 goto LAB_001033d0;
 }
 uVar6 = 0xffffffff;
LAB_001033d0:
 __printf_chk(1,DAT_00104118,uVar6);
 uVar3 = param_pipe_communication();
 __printf_chk(1,DAT_00104138,uVar3);
 uVar3 = param_socket_create();
 __printf_chk(1,DAT_00104158,uVar3);
 iVar1 = param_shmget_shmat();
 uVar3 = 0x2a;
 if (iVar1 < 1) {
 uVar3 = 0xffffffff;
 }
 __printf_chk(1,DAT_00104178,uVar3);
 uVar3 = param_signal_handling();
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_00104198,0);
 return;
}

// Function: param_pthread_create @ 0x1034b0
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
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_1c);
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
 return 0;
}

// Function: call_pthread_create @ 0x103544
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
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_1c);
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

// Function: param_pthread_join @ 0x1035e0
int param_pthread_join(void)
{
 long lVar1;
 int iVar1;
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
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,__arg);
 if (iVar2 != 0) {
 iVar5 = -1;
 goto LAB_001036a0;
 }
 __newthread = __newthread + 1;
 __arg = (pthread_t *)((long)__arg + 0xc);
 iVar5 = iVar5 + -1;
 } while (iVar5 != 0);
 iVar5 = 0;
 lVar3 = 0;
  do {
 iVar1 = pthread_join(*ppVar4,(void **)0x0);
 if (iVar1 != 0) {
 iVar5 = -2;
 break;
 }
 lVar1 = lVar3 + 0xc;
 ppVar4 = ppVar4 + 1;
 iVar5 = iVar5 + (int)((lVar3 >> 32) & 0xffffffff);
 lVar3 = lVar1;
 } while (lVar1 != 0x24);
LAB_001036a0:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar5;
 }
 __stack_chk_fail();
}

// Function: param_mutex_lock @ 0x1036f4
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
 iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_4);
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

// Function: param_condition_variable @ 0x103804
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
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
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

// Function: param_atomic_ops @ 0x1038e4
void param_atomic_ops(unsigned long param_1,unsigned int param_2)
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
 iVar3 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 }
 else {
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00103994;
 }
 ppVar4 = ppVar4 + 1;
 } while (ppVar4 != __ptr + (param_1 & 0xffffffff));
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
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
 iVar3 = (int)atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar3 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00103994:
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_thread_local_storage @ 0x103a84
void param_thread_local_storage(uint param_1)
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
 int iVar10;
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
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(void *(*)(void *))thread_tls_test,__ptr_00[uVar5]);
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
 goto LAB_00103ba0;
 }
 uVar5 = uVar5 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar10);
 iVar9 = 0;
 iVar10 = 0;
 lVar8 = 0;
 iVar1 = 0;
  do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar8),(void **)0x0);
 ppvVar6 = (void **)((long)__ptr_00 + lVar8);
 lVar8 = lVar8 + 8;
 free(*ppvVar6);
 } while (lVar8 != uVar10 * 8);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (param_1 * 100 != iVar1 || param_1 * 0x96 != iVar9) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00103ba0:
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
 return;
}

// Function: test_thread_concurrency @ 0x103c74
void test_thread_concurrency(void)
{
 int iVar1;
 int join_result;
 unsigned int uVar2;
 unsigned int local_1c;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts(DAT_001041b8);
 local_1c = 7;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(void *(*)(void *))thread_compute,&local_1c);
 if (iVar1 == 0) {
 join_result = pthread_join(local_18,(void **)&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,DAT_001041d8,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,DAT_001041f8,uVar2);
 uVar2 = param_mutex_lock_constprop_0();
 __printf_chk(1,DAT_00104218,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,DAT_00104238,uVar2);
 uVar2 = param_atomic_ops_constprop_0();
 __printf_chk(1,DAT_00104258,uVar2);
 uVar2 = param_thread_local_storage_constprop_0();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00104278,0);
 return;
 }
 __stack_chk_fail();
}

// Function: __aarch64_cas4_acq_rel @ 0x103da0
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 if ((atomic_counter >> 8) != 0) {
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

// Function: __aarch64_ldadd4_acq_rel @ 0x103de0
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if ((atomic_counter >> 8) == 0) {
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
 *param_2 = tmp_stWn;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}

// Function: _fini @ 0x103e10
void _fini(void)
{
 return;
}

