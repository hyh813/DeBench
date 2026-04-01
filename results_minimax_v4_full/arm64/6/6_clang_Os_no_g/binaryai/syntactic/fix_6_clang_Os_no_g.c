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

/* CONCAT macros for byte concatenation */
#define CONCAT53(a, b) (((a) & 0xff) | (((b) & 0xff) << 8) | (((a) & 0xff00) << 8) | (((b) & 0xff00) << 16))
#define CONCAT35(a, b) (((a) & 0xff) | (((b) & 0xff) << 8) | (((a) & 0xff00) << 8) | (((b) & 0xff00) << 16))

/* NEON cmhs instruction emulation */
typedef struct { 
    uint8_t val[16]; 
    union {
        uint64_t _0_8_;
        uint8_t _0_1_[8];
    } a;
    union {
        uint64_t _8_8_;
        uint8_t _8_1_[8];
    } b;
} neon_uint8x16_t;
static inline neon_uint8x16_t NEON_cmhs(neon_uint8x16_t a, neon_uint8x16_t b, int flag) {
    neon_uint8x16_t result;
    for (int i = 0; i < 16; i++) {
        result.val[i] = (a.val[i] >= b.val[i]) ? a.val[i] : b.val[i];
    }
    return result;
}

/* Decompiler artifact types */
typedef unsigned char undefined3;
typedef unsigned char undefined5;

/* Forward declarations */
int main(void);
void call_weak_fn(void);
void signal_handler(unsigned int);
int __aarch64_ldadd4_acq_rel(int, int*);
int __aarch64_cas4_acq_rel(int, int, int*);
int ExclusiveMonitorPass(void*, int);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/* Thread-local storage register access */
static inline long get_tpidr_el0(void) {
    long val;
    __asm__ volatile("mrs %0, tpidr_el0" : "=r"(val));
    return val;
}
#define tpidr_el0 get_tpidr_el0()

/* String constants */
const char DAT_00102eb6[] = "TestName";
const char DAT_001031fc[] = "Testing standard library functions";
const char DAT_00102f04[] = "String length: %zu\n";
const char DAT_00102f1f[] = "strcmp result: %d\n";
const char DAT_00102f3a[] = "strlen result: %zu\n";
const char DAT_00102f56[] = "memcmp result: %d\n";
const char DAT_00102f72[] = "printf result: %u\n";
const char DAT_00102f8e[] = "printf return: %u\n";
const char DAT_00102faa[] = "scanf result: %u\n";
const char DAT_00102fc7[] = "fopen result: %u\n";
const char DAT_00102fe3[] = "fread result: %u\n";
const char DAT_00102fff[] = "malloc result: %u\n";
const char DAT_0010301b[] = "memset result: %lu\n";
const char DAT_00103036[] = "strchr/strstr result: %d\n";
const char DAT_00103085[] = "syscall result: %u\n";
const char DAT_001030a1[] = "stat result: %u\n";
const char DAT_001030bd[] = "fork/exec result: %u\n";
const char DAT_001030d9[] = "pipe result: %u\n";
const char DAT_001030f5[] = "socket result: %u\n";
const char DAT_00103111[] = "shm result: %u\n";
const char DAT_0010312d[] = "signal result: %llu\n";
const char DAT_00103153[] = "pthread_create result: %u\n";
const char DAT_0010316f[] = "pthread_join result: %u\n";
const char DAT_0010318c[] = "mutex lock result: %u\n";
const char DAT_001031a8[] = "condition variable result: %u\n";
const char DAT_001031c4[] = "atomic ops result: %u\n";
const char DAT_001031e0[] = "TLS result: %u\n";
const char DAT_00103220[] = "Testing system calls";
const char DAT_0010323b[] = "Testing thread concurrency";

/* Additional standard types */
typedef unsigned int uint;
typedef unsigned int uint_t;
typedef int __pid_t;
typedef int key_t;
typedef unsigned int __useconds_t;

/* Standard FILE type */
typedef struct _IO_FILE FILE;

/* pthread types */
typedef unsigned long pthread_t;
typedef unsigned long pthread_attr_t;
typedef unsigned long pthread_mutex_t;
typedef unsigned long pthread_cond_t;
typedef void *(*__start_routine)(void *);

/* Global variables */
typedef union {
    int val;
    int32_t _4_1_;
    int32_t _0_4_;
    struct {
        char _0_1_;
        char _1_1_;
        char _2_1_;
        char _3_1_;
        char _4_1_;
    } bytes;
} atomic_counter_t;
atomic_counter_t atomic_counter;
unsigned int ready;
unsigned int data;
unsigned long shared_counter;
unsigned long counter_mutex;
unsigned long cond_mutex;
unsigned long cond;
unsigned int signal_received;
unsigned int signal_number;
char completed_0;
void *__dso_handle;

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* Socket types */
typedef unsigned short sa_family_t;
typedef unsigned int socklen_t;
struct sockaddr {
 sa_family_t sa_family;
 char sa_data[14];
};

/* stat structure */
struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned int st_mode;
 unsigned int st_nlink;
 unsigned int st_uid;
 unsigned int st_gid;
 int __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;
 long st_atime;
 unsigned long st_atimensec;
 long st_mtime;
 unsigned long st_mtimensec;
 long st_ctime;
 unsigned long st_ctimensec;
 long __unused[3];
};

/* time_t type */
typedef unsigned long time_t;

/* byte type */
typedef unsigned char byte;

/* shmid_ds structure */
struct shmid_ds {
 unsigned long shm_segsz;
 time_t shm_atime;
 time_t shm_dtime;
 time_t shm_ctime;
 unsigned short shm_cpid;
 unsigned short shm_lpid;
 unsigned short shm_nattch;
 unsigned short __shm_unused;
 void *__unused;
};

/* Typedefs for struct types used without struct keyword */
typedef struct sockaddr sockaddr;
typedef struct shmid_ds shmid_ds;
typedef struct stat stat;

// Decompiled by BinaryAI
// SHA256: b94529fde7028950122045ef2a10c5eea72bfbb06eb51ba36ded6d922b4c7a8b

// Function: _init @ 0x1012c8
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001012e0 @ 0x1012e0
void FUN_001012e0(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x101300
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::_exit @ 0x101310
void _exit(int __status)
{
 _exit(__status);
}

// Function: <EXTERNAL>::strlen @ 0x101320
size_t strlen(const char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::raise @ 0x101330
int raise(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101340
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::execl @ 0x101350
int execl(char *__path,char *__arg,...)
{
 int iVar1;
 iVar1 = execl(__path,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x101360
int listen(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x101370
int shmdt(void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x101380
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101390
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::pipe @ 0x1013a0
int pipe(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x1013b0
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::snprintf @ 0x1013c0
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 int iVar1;
 iVar1 = snprintf(__s,__maxlen,__format);
 return iVar1;
}

// Function: <EXTERNAL>::fileno @ 0x1013d0
int fileno(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x1013e0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::fclose @ 0x1013f0
int fclose(FILE *__stream)
{
 int iVar1;
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::fopen @ 0x101400
FILE * fopen(const char *__filename,const char *__modes)
{
 FILE *pFVar1;
 pFVar1 = fopen(__filename,__modes);
 return pFVar1;
}

// Function: <EXTERNAL>::malloc @ 0x101410
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::setsockopt @ 0x101420
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 int iVar1;
 iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
 return iVar1;
}

// Function: <EXTERNAL>::open @ 0x101430
int open(char *__file,int __oflag,...)
{
 int iVar1;
 iVar1 = open(__file,__oflag);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101440
int pthread_cond_signal(pthread_cond_t *__cond)
{
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x101450
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::shmat @ 0x101460
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 void *pvVar1;
 pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
 return pvVar1;
}

// Function: <EXTERNAL>::sleep @ 0x101470
uint sleep(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x101480
void rewind(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::close @ 0x101490
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1014a0
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::stat @ 0x1014b0
int sys_stat(char *__file,stat *__buf)
{
 int iVar1;
 iVar1 = sys_stat(__file,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1014c0
ssize_t write(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::__getauxval @ 0x1014d0
void __getauxval(void)
{
 __getauxval();
 return;
}

// Function: <EXTERNAL>::abort @ 0x1014e0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::puts @ 0x1014f0
int puts(const char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x101500
int memcmp(const void *__s1,const void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x101510
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x101520
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
 int iVar1;
 iVar1 = shmctl(__shmid,__cmd,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x101530
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 size_t sVar1;
 sVar1 = fread(__ptr,__size,__n,__stream);
 return sVar1;
}

// Function: <EXTERNAL>::ftok @ 0x101540
key_t ftok(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::free @ 0x101550
void free(void *__ptr)
{
 free(__ptr);
 return;
}

// Function: <EXTERNAL>::shmget @ 0x101560
int shmget(key_t __key,size_t __size,int __shmflg)
{
 int iVar1;
 iVar1 = shmget(__key,__size,__shmflg);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101570
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::strchr @ 0x101580
char * strchr(char *__s,int __c)
{
 char *pcVar1;
 pcVar1 = strchr(__s,__c);
 return pcVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x101590
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 size_t sVar1;
 sVar1 = fwrite(__ptr,__size,__n,__s);
 return sVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x1015a0
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x1015b0
__pid_t wait(void *__stat_loc)
{
 __pid_t _Var1;
 _Var1 = wait(__stat_loc);
 return _Var1;
}

// Function: <EXTERNAL>::socket @ 0x1015c0
int socket(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::strcpy @ 0x1015d0
char * strcpy(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = strcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::read @ 0x1015e0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 ssize_t sVar1;
 sVar1 = read(__fd,__buf,__nbytes);
 return sVar1;
}

// Function: <EXTERNAL>::strstr @ 0x1015f0
char * strstr(char *__haystack,char *__needle)
{
 char *pcVar1;
 pcVar1 = strstr(__haystack,__needle);
 return pcVar1;
}

// Function: <EXTERNAL>::usleep @ 0x101600
int usleep(__useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x101610
int __isoc99_sscanf(char *__s,char *__format,...)
{
 int iVar1;
 iVar1 = __isoc99_sscanf(__s,__format);
 return iVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x101620
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x101630
int printf(const char *restrict __format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x101640
int * __errno_location(void)
{
 int *piVar1;
 piVar1 = __errno_location();
 return piVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x101650
int pthread_join(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::alarm @ 0x101660
uint alarm(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x101670
int pthread_cancel(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101680
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_lock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x101690
long syscall(long __sysno,...)
{
 long lVar1;
 lVar1 = syscall(__sysno);
 return lVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x1016a0
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_unlock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x1016b0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::unlink @ 0x1016c0
int unlink(char *__name)
{
 int iVar1;
 iVar1 = unlink(__name);
 return iVar1;
}

// Function: init_have_lse_atomics @ 0x101700
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 atomic_counter._4_1_ = extraout_var & 1;
 return;
}

// Function: _start @ 0x101740
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack_var = 0;
 __libc_start_main(main,param_9,&stack_var,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x101774
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x101790
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1017c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001017fc @ 0x1017fc
void FUN_001017fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101800
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_strcpy @ 0x101854
void param_strcpy(char *param_1,char *param_2)
{
 char *__s;
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}

// Function: call_strcpy @ 0x10186c
void call_strcpy(void)
{
 char local_30[8];
 local_30[0] = 'H';
 local_30[1] = 'e';
 local_30[2] = 'l';
 local_30[3] = 'l';
 local_30[4] = 'o';
 local_30[5] = 'L';
 local_30[6] = 'i';
 local_30[7] = 'b';
 strlen(local_30);
 return;
}

// Function: param_strcmp @ 0x1018a0
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

// Function: call_strcmp @ 0x1018c4
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x1018cc
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x1018e0
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x1018e8
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x10190c
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x101914
int param_memcmp(const void *param_1,const void *param_2,size_t param_3)
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

// Function: call_memcmp @ 0x101938
unsigned long long call_memcmp(void)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x101940
int param_printf(unsigned long param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return iVar1;
}

// Function: call_printf @ 0x101954
int call_printf(void)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00102eb6);
 return iVar1;
}

// Function: param_scanf @ 0x10196c
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}

// Function: call_scanf @ 0x1019ac
int call_scanf(void)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}

// Function: param_fopen_fclose @ 0x1019f4
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

// Function: call_fopen_fclose @ 0x101a3c
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

// Function: param_fread_fwrite @ 0x101a64
unsigned int param_fread_fwrite(char *param_1)
{
 unsigned int uVar1;
 FILE *__s;
 size_t sVar2;
 unsigned long local_50;
 undefined3 uStack_48;
 undefined5 local_45;
 unsigned int uStack_40;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(&local_50,1,0x12,__s);
 *(char *)((long)&local_50 + sVar2) = 0;
 fclose(__s);
 unlink(param_1);
 uVar1 = 0xfffffffd;
 if (sVar2 == 0x12) {
 uVar1 = 0x2a;
 if ((local_50 ^ 0x68636e65426e6942 | CONCAT53(local_45,uStack_48) ^ 0x6144207473655420 |
 CONCAT35((undefined3)uStack_40,local_45) ^ 0x61746144207473) != 0) {
 uVar1 = 0xfffffffd;
 }
 }
 }
 else {
 fclose(__s);
 uVar1 = 0xfffffffe;
 }
 }
 return uVar1;
}

// Function: call_fread_fwrite @ 0x101b78
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x101b84
int param_malloc_free(long param_1)
{
 neon_uint8x16_t auVar1;
 int *__ptr;
 int extraout_w8;
 int iVar2;
 unsigned long uVar3;
 int *piVar4;
 long lVar5;
 long lVar6;
 neon_uint8x16_t auVar7;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = extraout_w8;
 if (param_1 != 0) {
 iVar2 = 0;
 uVar3 = param_1 + 1U & 0xfffffffffffffffe;
 lVar6 = 1;
 lVar5 = 0;
 piVar4 = __ptr + 1;
 do {
 auVar7.b._8_8_ = lVar6;
 auVar7.a._0_8_ = lVar5;
 auVar1.b._8_8_ = param_1 + -1;
 auVar1.a._0_8_ = param_1 + -1;
 auVar7 = NEON_cmhs(auVar1,auVar7,8);
 if ((auVar7.val[0] & 0x1) != 0) {
 piVar4[-1] = iVar2;
 }
 if ((auVar7.val[0] & 0x1) != 0) {
 *piVar4 = iVar2 + 10;
 }
 lVar5 = lVar5 + 2;
 lVar6 = lVar6 + 2;
 piVar4 = piVar4 + 2;
 uVar3 = uVar3 - 2;
 iVar2 = iVar2 + 0x14;
 } while (uVar3 != 0);
 iVar2 = *__ptr;
 }
 iVar2 = __ptr[param_1 + -1] + iVar2;
 free(__ptr);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x101c34
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x101c3c
int param_memset(byte *param_1,size_t param_2)
{
 int iVar1;
 memset(param_1,0,param_2);
 iVar1 = 0;
 if (param_2 != 0) {
 do {
 param_2 = param_2 - 1;
 iVar1 = iVar1 + (uint)*param_1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: call_memset @ 0x101c80
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x101c88
int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar1;
}

// Function: call_strchr_strstr @ 0x101ce0
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x101ce8
int test_standard_library_functions(void)
{
 int iVar1;
 uint uVar2;
 size_t sVar3;
 unsigned long uVar4;
 unsigned long long local_40;
 char local_38;
 int local_4;
 puts(DAT_001031fc);
 local_38 = 0;
 local_40._0_1_ = 'H';
 local_40._1_1_ = 'e';
 local_40._2_1_ = 'l';
 local_40._3_1_ = 'l';
 local_40._4_1_ = 'o';
 local_40._5_1_ = 'L';
 local_40._6_1_ = 'i';
 local_40._7_1_ = 'b';
 sVar3 = strlen((char *)&local_40);
 printf(DAT_00102f04,sVar3);
 printf(DAT_00102f1f,0);
 printf(DAT_00102f3a,0xc);
 iVar1 = printf(DAT_00102f56,0x5a);
 uVar4 = call_memcmp(iVar1);
 printf(DAT_00102f72,uVar4 & 0xffffffff);
 uVar2 = printf("Value: %d, Name: %s\n",0x2a,DAT_00102eb6);
 printf(DAT_00102f8e,(unsigned long)uVar2);
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_40,&local_4);
 uVar2 = local_4 + (int)local_40;
 if (iVar1 != 2) {
 uVar2 = 0xffffffff;
 }
 printf(DAT_00102faa,(unsigned long)uVar2);
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 printf(DAT_00102fc7,(unsigned long)uVar2);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_00102fe3,uVar4 & 0xffffffff);
 uVar4 = param_malloc_free(10);
 printf(DAT_00102fff,uVar4 & 0xffffffff);
 printf(DAT_0010301b,0);
 iVar1 = printf(DAT_00103036,0xf);
 return iVar1;
}

// Function: param_linux_syscall @ 0x101e60
unsigned long param_linux_syscall(char *param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (unsigned long)(uint)-*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}

// Function: call_linux_syscall @ 0x101eb4
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x101edc
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_stat;
 iVar1 = sys_stat(param_1,&local_stat);
 uVar2 = 0x2a;
 if (local_stat.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x101f18
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 stat local_stat;
 iVar1 = stat("/etc/passwd",&local_stat);
 uVar2 = 0x2a;
 if (local_stat.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x101f5c
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_24;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else if ((local_24 & 0x7f) == 0) {
 uVar2 = local_24 >> 8 & 0xff;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x101fe4
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

// Function: param_pipe_communication @ 0x102010
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 char auStack_48 [32];
 int local_28;
 int local_24;
 iVar1 = pipe(&local_28);
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
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 _exit(0);
 }
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 return uVar4;
}

// Function: param_socket_create @ 0x1020cc
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 sockaddr local_38;
 unsigned int local_24;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_38.sa_family = 2;
 local_38.sa_data[0] = '\0';
 local_38.sa_data[1] = '\0';
 local_38.sa_data[2] = '\0';
 local_38.sa_data[3] = '\0';
 local_38.sa_data[4] = '\0';
 local_38.sa_data[5] = '\0';
 local_38.sa_data[6] = '\0';
 local_38.sa_data[7] = '\0';
 local_38.sa_data[8] = '\0';
 local_38.sa_data[9] = '\0';
 local_38.sa_data[10] = '\0';
 local_38.sa_data[11] = '\0';
 local_38.sa_data[12] = '\0';
 local_38.sa_data[13] = '\0';
 iVar1 = bind(__fd,&local_38,0x10);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0xfffffffc;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 }
 }
 }
 return uVar2;
}

// Function: param_shmget_shmat @ 0x102194
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
 size_t sVar2;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 sVar2 = 0xfffffffe;
 }
 else {
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 *__s = 0x654d646572616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 goto LAB_00102240;
 }
 }
 sVar2 = 0xffffffff;
LAB_00102240:
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x102264
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

// Function: param_signal_handling @ 0x102284
unsigned long long param_signal_handling(void)
{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 unsigned long long uVar4;
 int iVar5;
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xffffffff;
 }
 else {
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar5 = 1000;
 do {
 usleep(1000);
 bVar2 = iVar5 != 0;
 bVar1 = iVar5 != 1;
 iVar5 = iVar5 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if (signal_received == 0) {
 uVar4 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar5 = 2000;
 do {
 usleep(1000);
 bVar2 = iVar5 != 0;
 bVar1 = iVar5 != 1;
 iVar5 = iVar5 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar4 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar4 = 0x2a;
 }
 }
 else {
 uVar4 = 0xfffffffc;
 }
 }
 }
 return uVar4;
}

// Function: signal_handler @ 0x1023b8
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x1023d4
int test_system_calls(void)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 uint uVar4;
 stat local_stat;
 puts(DAT_00103220);
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar3 = 0x2a;
 uVar4 = uVar3;
 if (iVar1 < 0) {
 uVar4 = 0xffffffff;
 }
 printf(DAT_00103085,(unsigned long)uVar4);
 iVar1 = stat("/etc/passwd",&local_stat);
 if (local_stat.st_size < 1) {
 uVar3 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 printf(DAT_001030a1,(unsigned long)uVar3);
 iVar1 = param_fork_exec("/bin/true",0);
 uVar4 = 0x2a;
 uVar3 = uVar4;
 if (iVar1 != 0) {
 uVar3 = 0xffffffff;
 }
 iVar1 = printf(DAT_001030bd,(unsigned long)uVar3);
 uVar2 = param_pipe_communication(iVar1);
 iVar1 = printf(DAT_001030d9,uVar2 & 0xffffffff);
 uVar2 = param_socket_create(iVar1);
 iVar1 = printf(DAT_001030f5,uVar2 & 0xffffffff);
 iVar1 = param_shmget_shmat(iVar1);
 if (iVar1 < 1) {
 uVar4 = 0xffffffff;
 }
 iVar1 = printf(DAT_00103111,(unsigned long)uVar4);
 uVar2 = param_signal_handling(iVar1);
 iVar1 = printf(DAT_0010312d,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: thread_compute @ 0x1024cc
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x1024f8
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = param_1;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,&local_30);
 uVar2 = *local_30;
 free(local_30);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x10255c
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x102564
unsigned long long thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 param_1[2] = 0;
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = uVar2 + (uVar2 - uVar1) * uVar1 +
 (int)((unsigned long)(uVar2 + ~uVar1) * (unsigned long)(uVar2 - uVar1) >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x102598
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned long long *__arg;
 long lVar3;
 int *piVar4;
 unsigned long long local_70;
 int local_68;
 unsigned int uStack_64;
 unsigned int uStack_60;
 unsigned int uStack_5c;
 unsigned long long local_58;
 unsigned int local_50;
 pthread_t local_48 [3];
 __arg = &local_70;
 lVar3 = 0;
 local_68 = 0;
 uStack_5c = 0;
 local_50 = 0;
 local_70 = 0xa00000001;
 uStack_64 = 0xb;
 uStack_60 = 0x14;
 local_58 = 0x1e00000015;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_48 + lVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = (unsigned long long *)((long)__arg + 0xc);
 lVar3 = lVar3 + 8;
 } while (lVar3 != 0x18);
 lVar3 = 0;
 iVar1 = 0;
 piVar4 = &local_68;
 do {
 iVar2 = pthread_join(*(pthread_t *)((long)local_48 + lVar3),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 lVar3 = lVar3 + 8;
 iVar1 = *piVar4 + iVar1;
 piVar4 = piVar4 + 3;
 } while (lVar3 != 0x18);
 return iVar1;
}

// Function: thread_increment @ 0x102678
unsigned long long thread_increment(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x1026e0
unsigned int param_mutex_lock(unsigned long param_1,int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 long lVar5;
 int local_34;
 param_1 = param_1 & 0xffffffff;
 local_34 = param_2;
 __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar3 = (int)param_1;
 shared_counter = 0;
 if (0 < iVar3) {
 lVar5 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_34);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (param_1 * 8 - lVar5 != 0);
 ppVar4 = __ptr;
 if (0 < iVar3) {
 do {
 pthread_join(*ppVar4,(void **)0x0);
 param_1 = param_1 - 1;
 ppVar4 = ppVar4 + 1;
 } while (param_1 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != local_34 * iVar3) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x1027cc
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x1027d8
void consumer_thread(void)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return;
}

// Function: producer_thread @ 0x102864
unsigned long long producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x1028c0
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_28,&local_30);
 pthread_join(local_8,(void **)0x0);
 uVar2 = *local_30;
 free(local_30);
 }
 else {
 pthread_cancel(local_28);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: thread_atomic_increment @ 0x10296c
unsigned long long thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x1029d0
unsigned long long thread_atomic_load_store(void)
{
 atomic_counter._0_4_ = (int)atomic_counter + 100;
 return 0;
}

// Function: param_atomic_ops @ 0x1029ec
unsigned int param_atomic_ops(unsigned long param_1,unsigned int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned int uVar2;
 pthread_t *ppVar3;
 long lVar4;
 pthread_t local_50;
 unsigned int local_44;
 param_1 = param_1 & 0xffffffff;
 local_44 = param_2;
 __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter._0_4_ = 0;
 if (0 < (int)param_1) {
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar4 = lVar4 + 8;
 } while (param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_50,(void **)0x0);
 }
 ppVar3 = __ptr;
 if (0 < (int)param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 param_1 = param_1 - 1;
 ppVar3 = ppVar3 + 1;
 } while (param_1 != 0);
 }
 iVar1 = (int)atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x102b00
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x102b0c
void thread_tls_test(char *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return;
}

// Function: param_thread_local_storage @ 0x102b5c
unsigned int param_thread_local_storage(unsigned long param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void **__ptr_00;
 char *__s;
 unsigned int uVar2;
 int iVar3;
 unsigned long uVar4;
 unsigned long uVar5;
 pthread_t *ppVar6;
 int iVar7;
 void **ppvVar8;
 int *local_58;
 param_1 = param_1 & 0xffffffff;
 uVar5 = -(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3;
 __ptr = (pthread_t *)malloc(uVar5);
 __ptr_00 = (void **)malloc(uVar5);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void **)0x0) {
 return 0xffffffff;
 }
 iVar3 = (int)param_1;
 if (0 < iVar3) {
 uVar5 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[uVar5] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar5 & 0xffffffff);
 uVar5 = uVar5 + 1;
 } while (param_1 != uVar5);
 if (0 < iVar3) {
 uVar5 = 0;
 ppVar6 = __ptr;
 do {
 iVar1 = pthread_create(ppVar6,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[uVar5]);
 uVar5 = uVar5 + 1;
 if (iVar1 != 0) {
 uVar4 = 0;
 do {
 free(__ptr_00[uVar4]);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar6 = ppVar6 + 1;
 } while (param_1 != uVar5);
 if (0 < iVar3) {
 iVar7 = 0;
 iVar1 = 0;
 ppVar6 = __ptr;
 ppvVar8 = __ptr_00;
 do {
 pthread_join(*ppVar6,&local_58);
 iVar1 = *local_58 + iVar1;
 iVar7 = local_58[1] + iVar7;
 free(local_58);
 free(*ppvVar8);
 param_1 = param_1 - 1;
 ppVar6 = ppVar6 + 1;
 ppvVar8 = ppvVar8 + 1;
 } while (param_1 != 0);
 goto LAB_00102c78;
 }
 }
 }
 iVar1 = 0;
 iVar7 = 0;
LAB_00102c78:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar7 != iVar3 * 0x96 || iVar1 != iVar3 * 100) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x102cf8
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x102d00
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(DAT_0010323b);
 uVar2 = param_pthread_create(7);
 iVar1 = printf(DAT_00103153,uVar2 & 0xffffffff);
 uVar2 = param_pthread_join(iVar1);
 printf(DAT_0010316f,uVar2 & 0xffffffff);
 uVar2 = param_mutex_lock(4,1000);
 iVar1 = printf(DAT_0010318c,uVar2 & 0xffffffff);
 uVar2 = param_condition_variable(iVar1);
 printf(DAT_001031a8,uVar2 & 0xffffffff);
 uVar2 = param_atomic_ops(4,500);
 printf(DAT_001031c4,uVar2 & 0xffffffff);
 uVar2 = param_thread_local_storage(4);
 iVar1 = printf(DAT_001031e0,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x102da8
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x102dd0
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

// Function: __aarch64_ldadd4_acq_rel @ 0x102e10
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 int tmp_ldWn;
 int tmp_stWn;
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

// Function: _fini @ 0x102e40
void _fini(void)
{
 return;
}

