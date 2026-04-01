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

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned char byte;
typedef int __pid_t;
typedef int key_t;

/* Variadic function support (from stdarg.h) */
typedef __builtin_va_list va_list;
#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_end(ap) __builtin_va_end(ap)
#define va_arg(ap, type) __builtin_va_arg(ap, type)

/* Stack protector variables */
extern long __stack_chk_guard;
extern long ___stack_chk_guard;

/* pthread types */
typedef unsigned long pthread_t;
typedef struct { int __data; } pthread_mutex_t;
typedef struct { int __data; } pthread_cond_t;
typedef union { char __size[56]; long int __align; } pthread_attr_t;

/* Signal definitions */
#define SIG_DFL ((void (*)(int))0)
#define SIG_IGN ((void (*)(int))1)

/* Thread function pointer type */
typedef void *(*__start_routine)(void *);

/* FILE structure - opaque type for stdio */
typedef struct _IO_FILE FILE;

/* System structure types */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};
typedef unsigned int socklen_t;
typedef void (*__sighandler_t)(int);
typedef unsigned int __useconds_t;
#define NULL ((void *)0)

/* Shared memory types */
struct shmid_ds {
    int shm_perm;
    size_t shm_segsz;
    long shm_atime;
    long shm_dtime;
    long shm_ctime;
    int shm_cpid;
    int shm_lpid;
    unsigned long shm_nattch;
};

/* stat structure */
struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    long st_atime;
    long st_mtime;
    long st_ctime;
};

/* Atomic operations */
extern int __aarch64_cas4_acq_rel(int, int, int *);
extern int __aarch64_ldadd4_acq_rel(int, int *);
extern bool ExclusiveMonitorPass(int *, int);
extern char ExclusiveMonitorsStatus(void);
extern void LOAcquire(void);
extern void LORelease(void);

/* Atomic helper variables */
extern int tmp_ldWn;
extern int tmp_stWn;

/* External function declarations - these call system functions */
extern void _exit(int);
extern size_t strlen(const char *);
extern int raise(int);
extern __sighandler_t signal(int, __sighandler_t);
extern int __libc_start_main(int (*)(int, char **, char **), int, char **, int (*)(), int (*)(), void (*)());
extern int execl(const char *, const char *, ...);
extern int execle(const char *, const char *, ...);
extern int listen(int, int);
extern int shmdt(void *__shmaddr);
extern int bind(int __fd, struct sockaddr *__addr, socklen_t __addrlen);
extern void __cxa_finalize(void *);
extern int pipe(int [2]);
extern __pid_t fork(void);
extern int fileno(FILE *);
extern int __snprintf_chk(char *, size_t, int, size_t, const char *, ...);
extern int fclose(FILE *);
extern FILE *fopen(const char *, const char *);
extern void *malloc(size_t);
extern int setsockopt(int, int, int, void *, socklen_t);
extern int open(char *, int, ...);
extern int pthread_cond_signal(pthread_cond_t *);
extern int __printf_chk(int, const char *, ...);
extern void *memset(void *, int, size_t);
extern void *shmat(int, void *, int);
extern unsigned int sleep(unsigned int);
extern void rewind(FILE *);
extern void __stack_chk_fail(void);
extern int close(int);
extern void __gmon_start__(void);
extern int stat(const char *, struct stat *);
extern ssize_t write(int, const void *, size_t);
extern unsigned long __getauxval(unsigned long);
extern void abort(void);
extern int puts(const char *);
extern int memcmp(const void *, const void *, size_t);
extern int strcmp(const char *, const char *);
extern int shmctl(int, int, struct shmid_ds *);
extern size_t fread(void *, size_t, size_t, FILE *);
extern key_t ftok(char *, int);
extern void free(void *);
extern int shmget(key_t, size_t, int);
extern int pthread_cond_wait(pthread_cond_t *, pthread_mutex_t *);
extern char *strchr(char *, int);
extern size_t fwrite(void *, size_t, size_t, FILE *);
extern int pthread_create(pthread_t *, pthread_attr_t *, void *(*)(void *), void *);
extern __pid_t wait(void *);
extern int socket(int, int, int);
extern char *strcpy(char *, const char *);
extern ssize_t read(int, void *, size_t);
extern char *strstr(const char *, const char *);
extern int usleep(unsigned int);
extern int vsscanf(const char *, const char *, va_list);
extern char *strncpy(char *, const char *, size_t);
extern int *__errno_location(void);
extern int pthread_join(pthread_t, void **);
extern unsigned int alarm(unsigned int);
extern int pthread_cancel(pthread_t);
extern int pthread_mutex_lock(pthread_mutex_t *);
extern long syscall(long, ...);
extern int pthread_mutex_unlock(pthread_mutex_t *);
extern __pid_t waitpid(__pid_t, int *, int);
extern int unlink(const char *);
extern int execve(const char *, char *const[], char *const[]);
extern void *memcpy(void * __dest, const void * __src, size_t __n);

// Decompiled by BinaryAI
// SHA256: a412c8f9704b6d19689c1ee2a45b8bc5aece9189c6991fa1241011659f1a7f05

/* Forward declarations */
void call_weak_fn(void);
int main(int, char **, char **);
unsigned int call_pthread_create(void);

/* Global variables */
union {
    int _0_4_;
    char _4_1_;
    int _4_2_;
} atomic_counter;

/* Data constants */
static char DAT_00103400[16];
static char DAT_00103408[16];
static char DAT_00103410[16];
static char DAT_00103418[16];
static char DAT_00103420[16];
static char DAT_00103440[16];
static char DAT_001034c8[32];
static char DAT_001034f0[32];
static char DAT_00103510[32];
static char DAT_00103530[32];
static char DAT_00103550[32];
static char DAT_00103570[32];
static char DAT_00103590[32];
static char DAT_001035b0[32];
static char DAT_001035d0[32];
static char DAT_001035f0[32];
static char DAT_00103610[32];
static char DAT_00103630[32];
static char DAT_00103650[32];
static char DAT_001036b8[32];
static char DAT_001036d8[32];
static char DAT_001036f8[32];
static char DAT_00103718[32];
static char DAT_00103738[32];
static char DAT_00103758[32];
static char DAT_00103778[32];
static char DAT_00103798[32];
static char DAT_001037c8[32];
static char DAT_001037e8[32];
static char DAT_00103808[32];
static char DAT_00103828[32];
static char DAT_00103848[32];
static char DAT_00103868[32];
static char DAT_00103888[32];

/* Stack pointer variable */
void *stack0x00000008;

 int shared_counter;
int data;
int ready;
int counter_mutex;
int cond_mutex;
int cond;
unsigned int signal_received;
unsigned int signal_number;
char completed_0;
void *__dso_handle;
unsigned long tpidr_el0;

// Function: _init @ 0x101388
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_001013a0 @ 0x1013a0
void FUN_001013a0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1013c0
void * memcpy(void *__dest,const void *__src,size_t __n)
{
 unsigned char *d = (unsigned char *)__dest;
 unsigned char *s = (unsigned char *)__src;
 size_t i;
 for (i = 0; i < __n; i++) {
 d[i] = s[i];
 }
 return __dest;
}

// Function: <EXTERNAL>::_exit @ 0x1013d0
void _exit(int __status)
{
 syscall(93, __status);
 while(1);
 return;
}

// Function: <EXTERNAL>::strlen @ 0x1013e0
size_t strlen(const char *__s)
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
int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, 
                     int (*init)(), int (*fini)(), void (*rtld_fini)())
{
 return __libc_start_main(main, argc, argv, init, fini, rtld_fini);
}

// Function: <EXTERNAL>::execl @ 0x101410
int execl(const char *__path,const char *__arg,...)
{
 va_list ap;
 va_start(ap, __arg);
 char *args[32];
 args[0] = (char *)__arg;
 int i = 1;
 char *arg;
 while ((arg = va_arg(ap, char *)) != NULL && i < 31) {
 args[i++] = arg;
 }
 args[i] = NULL;
 va_end(ap);
 return execve(__path, args, NULL);
}





// Function: <EXTERNAL>::bind @ 0x101440
int bind(int __fd,struct sockaddr *__addr,socklen_t __addrlen)
{
 return syscall(49, __fd, __addr, __addrlen);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101450
void __cxa_finalize(void *__d)
{
 return;
}









// Function: <EXTERNAL>::__snprintf_chk @ 0x1014a0
int __snprintf_chk(char *__str, size_t __n, int __flag, size_t __s, const char *__format, ...)
{
 va_list ap;
 va_start(ap, __format);
 int result = __builtin_vsnprintf(__str, __n, __format, ap);
 va_end(ap);
 return result;
}













// Function: <EXTERNAL>::__printf_chk @ 0x101510
int __printf_chk(int __flag, const char *__format, ...)
{
 return __builtin_printf(__format, __builtin_va_arg_pack());
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
 __stack_chk_fail();
}



// Function: <EXTERNAL>::__gmon_start__ @ 0x101580
void __gmon_start__(void)
{
 return;
}







// Function: <EXTERNAL>::abort @ 0x1015c0
void abort(void)
{
 syscall(60, 0);
 while(1);
}













// Function: <EXTERNAL>::free @ 0x101630
void free(void *__ptr)
{
 free(__ptr);
 return;
}









// Function: <EXTERNAL>::pthread_create @ 0x101680
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start)(void *),void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start,__arg);
 return iVar1;
}



// Function: <EXTERNAL>::socket @ 0x1016a0
int socket(int __domain,int __type,int __protocol)
{
 return syscall(41, __domain, __type, __protocol);
}








// Function: <EXTERNAL>::strstr @ 0x1016d0
char * strstr(const char *__haystack,const char *__needle)
{
 char *pcVar1;
 if (__haystack == NULL || __needle == NULL) return NULL;
 if (*__needle == '\0') return (char *)__haystack;
 while (*__haystack) {
 const char *h = __haystack;
 const char *n = __needle;
 while (*h && *n && *h == *n) {
 h++;
 n++;
 }
 if (*n == '\0') return (char *)__haystack;
 __haystack++;
 }
 return NULL;
}





// Function: <EXTERNAL>::__isoc99_sscanf @ 0x1016f0
int __isoc99_sscanf(const char *__str, const char *__format, ...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vsscanf(__str, __format, args);
 va_end(args);
 return iVar1;
}





















// Function: init_have_lse_atomics @ 0x1017c0
void init_have_lse_atomics(void)
{
 unsigned long extraout_var;
 extraout_var = __getauxval(0x10);
 atomic_counter._4_1_ = extraout_var & 1;
 return;
}

// Function: _start @ 0x101800
void _start(unsigned long long param_1)
{
 int (*real_main)(int, char **, char **) = (int (*)(int, char **, char **))main;
 __libc_start_main(real_main, 0, (char **)&stack0x00000008, 0, 0, (void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x101834
void call_weak_fn(void)
{
 __gmon_start__();
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
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x1018c0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
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
 int *piVar3;
 piVar3 = (int *)param_1;
 piVar3[2] = 0;
 iVar1 = *piVar3;
 if (iVar1 <= piVar3[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != piVar3[1] + 1);
 piVar3[2] = iVar2;
 }
 return (void *)0;
}

// Function: thread_compute @ 0x101964
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 if (param_1 == (void *)0x0) {
 uVar3 = 0;
 } else {
 uVar3 = *(unsigned int *)param_1;
 }
 iVar1 = uVar3 * uVar3;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1;
 return (void *)piVar2;
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
 __aarch64_ldadd4_acq_rel(1,(int *)&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,(int *)&atomic_counter);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x101b4c
void *thread_atomic_load_store(void *param_1)
{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return (void *)0;
}

// Function: thread_tls_test @ 0x101b6c
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
 strncpy((char *)(lVar3 + 0x18),(char *)param_1,0x1f);
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
void call_strcpy(void)
{
 char auStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 param_strcpy(auStack_28,"HelloLib");
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
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
 iVar1 = param_strcmp((char *)&DAT_00103408,(char *)&DAT_00103400);
 iVar2 = param_strcmp((char *)&DAT_00103410,(char *)&DAT_00103410);
 iVar3 = param_strcmp((char *)&DAT_00103420,(char *)&DAT_00103418);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101cbc
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x101cd0
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x101cd8
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101cfc
void call_memcpy(void)
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
 return;
 }
 __stack_chk_fail();
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
void call_memcmp(void)
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
 return;
 }
 __stack_chk_fail();
}

// Function: param_printf @ 0x101e58
void param_printf(unsigned int param_1,char *param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x101e80
void call_printf(void)
{
 param_printf(0x2a,(char *)&DAT_00103440);
 return;
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
void call_scanf(void)
{
 param_scanf("123,456");
 return;
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
 iVar1 = unlink(param_1);
 if (iVar1 != 0) {
 uVar2 = 0xfffffffe;
 }
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
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
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
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x102158
int param_memset(void *param_1,size_t param_2)
{
 int iVar1;
 unsigned char *pbVar2;
 unsigned char *pbVar3;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 pbVar3 = (unsigned char *)param_1;
 do {
 pbVar2 = pbVar3 + 1;
 iVar1 = iVar1 + (uint)*pbVar3;
 pbVar3 = pbVar2;
 } while (pbVar2 != (unsigned char *)param_1 + param_2);
 }
 return iVar1;
}

// Function: call_memset @ 0x1021ac
void call_memset(void)
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
 return;
 }
 __stack_chk_fail();
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
void call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}

// Function: test_standard_library_functions @ 0x1022a0
void test_standard_library_functions(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts((char *)&DAT_001034c8);
 call_strcpy();
 uVar2 = 0x2a;
 __printf_chk(1,"String copy test result: %d\n",uVar2);
 uVar2 = call_strcmp();
 __printf_chk(1,"String compare test result: %d\n",uVar2);
 uVar2 = call_strlen();
 __printf_chk(1,"String length test result: %d\n",uVar2);
 call_memcpy();
 uVar2 = 0x2a;
 __printf_chk(1,"Memory copy test result: %d\n",uVar2);
 call_memcmp();
 uVar2 = 0x2a;
 __printf_chk(1,"Memory compare test result: %d\n",uVar2);
 call_printf();
 uVar2 = 0x2a;
 __printf_chk(1,"Printf test result: %d\n",uVar2);
 call_scanf();
 uVar2 = 0x2a;
 __printf_chk(1,"Scanf test result: %d\n",uVar2);
 uVar2 = call_fopen_fclose();
 __printf_chk(1,"File open/close test result: %d\n",uVar2);
 call_fread_fwrite();
 uVar2 = 0x2a;
 __printf_chk(1,"File read/write test result: %d\n",uVar2);
 call_malloc_free();
 uVar2 = 0x2a;
 __printf_chk(1,"Malloc/free test result: %d\n",uVar2);
 call_memset();
 uVar2 = 0x2a;
 __printf_chk(1,"Memory set test result: %d\n",uVar2);
 call_strchr_strstr();
 uVar2 = 0x2a;
 __printf_chk(1,"String search test result: %d\n",uVar2);
 return;
}

// Function: param_linux_syscall @ 0x1023dc
unsigned long param_linux_syscall(const char *param_1)
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
unsigned int call_linux_syscall(int unused)
{
 int iVar1;
 unsigned int uVar2;
 (void)unused; /* unused parameter */
 iVar1 = param_linux_syscall("/etc/passwd");
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
 if (local_58.st_size < 1) {
  uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x1024c4
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x1024e0
unsigned int param_fork_exec(char *param_1,unsigned long long param_2)
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
 return uVar2;
}

// Function: call_fork_exec @ 0x102590
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

// Function: param_pipe_communication @ 0x1025bc
void param_pipe_communication(void)
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
 return;
}

// Function: call_pipe_communication @ 0x1026a4
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x1026b8
void param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_1c;
 struct sockaddr local_18;
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
 return;
 }
 __stack_chk_fail();
}

// Function: call_socket_create @ 0x1027bc
void call_socket_create(void)
{
 param_socket_create();
 return;
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
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
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
unsigned long long param_signal_handling(void)
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
 signal(10,SIG_DFL);
 signal(0xe,SIG_DFL);
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
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x102a5c
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts((char *)&DAT_001036b8);
 uVar2 = call_linux_syscall(0);
 __printf_chk(1,"Linux syscall test result: %d\n",uVar2);
 uVar2 = call_win32_api();
 __printf_chk(1,"Win32 API test result: %d\n",uVar2);
 uVar2 = call_fork_exec();
 __printf_chk(1,"Fork/exec test result: %d\n",uVar2);
 param_pipe_communication();
 uVar2 = 0x2a;
 __printf_chk(1,"Pipe communication test result: %d\n",uVar2);
 param_socket_create();
 uVar2 = 0x2a;
 __printf_chk(1,"Socket create test result: %d\n",uVar2);
 uVar2 = call_shmget_shmat();
 __printf_chk(1,"Shared memory test result: %d\n",uVar2);
 param_signal_handling();
 uVar2 = 0x2a;
 __printf_chk(1,"Signal handling test result: %d\n",uVar2);
 return;
}

// Function: param_pthread_create @ 0x102b20
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
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,&local_1c);
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

// Function: call_pthread_create @ 0x102bb0
unsigned int call_pthread_create(void)
{
 unsigned int uVar2;
 uVar2 = param_pthread_create(7);
 return uVar2;
}

// Function: param_pthread_join @ 0x102bc8
int param_pthread_join(void)
{
 int iVar1;
 void *__arg;
 long lVar2;
 pthread_t *__newthread;
 int iVar3;
 pthread_t *ppVar4;
 pthread_t local_48 [4];
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 __arg = (void *)((char *)local_48 + 12);
 uStack_28 = 0xb00000000;
 local_48[3] = 0xa00000001;
 uStack_18 = 0x1e00000015;
 uStack_20 = 0x14;
 local_10 = 0;
 ppVar4 = local_48;
 iVar3 = 3;
 __newthread = ppVar4;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(__start_routine)thread_sum,__arg);
 if (iVar1 != 0) {
  iVar3 = -1;
  goto LAB_00102c84;
 }
 __newthread = __newthread + 1;
 __arg = (void *)((char *)__arg + 12);
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 lVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = pthread_join(*ppVar4, (void **)0x0);
 if (iVar1 != 0) {
 iVar3 = -2;
 break;
 }
 iVar3 = iVar3 + *(int *)((char *)&uStack_28 + lVar2);
 ppVar4 = ppVar4 + 1;
 lVar2 = lVar2 + 12;
 } while (lVar2 != 36);
LAB_00102c84:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar3;
 }
 __stack_chk_fail();
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
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 int iVar5;
 int local_4;
 local_4 = param_2;
 __ptr = (pthread_t *)
 malloc(-(param_1 >> 0x1f & 1) & 0xfffffff800000000 | (param_1 & 0xffffffff) << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 iVar5 = (int)(param_1 & 0xffffffff);
 if (0 < iVar5) {
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,(__start_routine)thread_increment,&local_4);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar3 = ppVar3 + 1;
 ppVar4 = __ptr;
 } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
 do {
 ppVar3 = ppVar4 + 1;
 pthread_join(*ppVar4,(void **)0x0);
 ppVar4 = ppVar3;
 } while (ppVar3 != __ptr + (param_1 & 0xffffffff));
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
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: param_condition_variable @ 0x102df8
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
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(__start_routine)consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,(__start_routine)producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 pthread_join(local_20,(void **)NULL);
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
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: param_atomic_ops @ 0x102edc
void param_atomic_ops(unsigned long param_1,unsigned int param_2)
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
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(__start_routine)thread_atomic_increment,&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102fd4;
 }
 __newthread = __newthread + 1;
 } while (__newthread != __ptr + (int)param_1);
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,NULL);
 }
 lVar3 = 0;
 do {
 void *thread_ret;
 pthread_join(__ptr[lVar3], &thread_ret);
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
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_atomic_ops @ 0x103064
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: param_thread_local_storage @ 0x103080
void param_thread_local_storage(unsigned long param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t *__ptr;
 void **__ptr_00;
 void *pvVar3;
 unsigned long uVar4;
 long lVar5;
 void **ppvVar6;
 int iVar8;
 pthread_t *__newthread;
 int iVar9;
 int *local_10;
 long local_8;
 void **ppvVar7;
 param_1 = param_1 & 0xffffffff;
 local_8 = ___stack_chk_guard;
 uVar4 = param_1 * 8;
 __ptr = (pthread_t *)malloc(uVar4);
 __ptr_00 = (void **)malloc(uVar4);
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
 uVar4 = 0;
 do {
 pvVar3 = malloc(0x10);
 __ptr_00[uVar4] = pvVar3;
 __snprintf_chk(pvVar3,0x10,1,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar4 != param_1);
 uVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(__start_routine)thread_tls_test,__ptr_00[uVar4]);
 if (iVar1 != 0) {
 if (-1 < (int)uVar4) {
 ppvVar6 = __ptr_00;
 do {
 ppvVar7 = ppvVar6 + 1;
 free(*ppvVar6);
 ppvVar6 = ppvVar7;
 } while (ppvVar7 != __ptr_00 + (uVar4 & 0xffffffff) + 1);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001031ec;
 }
 uVar4 = uVar4 + 1;
 __newthread = __newthread + 1;
 } while (uVar4 != param_1);
 lVar5 = 0;
 iVar1 = 0;
 iVar8 = 0;
 do {
 void *thread_ret;
 pthread_join(*(pthread_t *)((long)__ptr + lVar5),&thread_ret);
 local_10 = (int *)thread_ret;
 iVar1 = iVar1 + *local_10;
 iVar8 = iVar8 + local_10[1];
 free(local_10);
 free(*(void **)((long)__ptr_00 + lVar5));
 lVar5 = lVar5 + 8;
 } while (lVar5 != param_1 * 8);
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
 return;
 }
 __stack_chk_fail();
}

// Function: call_thread_local_storage @ 0x10327c
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103294
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts((char *)&DAT_001037c8);
 uVar2 = call_pthread_create();
 __printf_chk(1,"Pthread create test result: %d\n",uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,"Pthread join test result: %d\n",uVar2);
 uVar2 = call_mutex_lock();
 __printf_chk(1,"Mutex lock test result: %d\n",uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,"Condition variable test result: %d\n",uVar2);
 call_atomic_ops();
 uVar2 = 0x2a;
 __printf_chk(1,"Atomic ops test result: %d\n",uVar2);
 call_thread_local_storage();
 uVar2 = 0x2a;
 __printf_chk(1,"Thread local storage test result: %d\n",uVar2);
 return;
}

// Function: main @ 0x103340
int main(int __argc, char **__argv, char **__envp)
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
 iVar3 = *param_3;
 if (atomic_counter._4_1_ != '\0') {
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

