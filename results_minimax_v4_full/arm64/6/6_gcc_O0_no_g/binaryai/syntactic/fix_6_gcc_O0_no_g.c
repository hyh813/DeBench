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

// Additional type definitions needed for compilation
typedef unsigned char byte;

// Forward declarations
void call_weak_fn(void);
unsigned long long main(void);
void __libc_csu_init(void);
void __libc_csu_fini(void);

// Atomic operation functions
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
int ExclusiveMonitorPass(void *addr, int type);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

// Data references
extern char *DAT_00103a78;
extern char *DAT_00103a70;
extern char *DAT_00103a80;
extern char *DAT_00103a90;
extern char *DAT_00103a88;
extern char *DAT_00103af8;
extern char *DAT_00103b80;
extern char *DAT_00103ba8;
extern char *DAT_00103bc8;
extern char *DAT_00103be8;
extern char *DAT_00103c08;
extern char *DAT_00103c28;
extern char *DAT_00103c48;
extern char *DAT_00103c68;
extern char *DAT_00103c88;
extern char *DAT_00103ca8;
extern char *DAT_00103cc8;
extern char *DAT_00103ce8;
extern char *DAT_00103d08;
extern char *DAT_00103d70;
extern char *DAT_00103d90;
extern char *DAT_00103db0;
extern char *DAT_00103dd0;
extern char *DAT_00103df0;
extern char *DAT_00103e10;
extern char *DAT_00103e30;
extern char *DAT_00103e50;
extern char *DAT_00103ea8;
extern char *DAT_00103ec8;
extern char *DAT_00103ee8;
extern char *DAT_00103f08;
extern char *DAT_00103f28;
extern char *DAT_00103f48;
extern char *DAT_00103f68;

typedef unsigned char byte;
typedef unsigned int __useconds_t;
typedef struct _IO_FILE FILE;
typedef int __pid_t;
typedef unsigned long pthread_t;
typedef unsigned int uint;
typedef int key_t;
typedef unsigned long pthread_attr_t;
typedef void *(*__start_routine)(void *);
typedef void (*__sighandler_t)(int);
typedef unsigned long socklen_t;
typedef unsigned short sa_family_t;
struct sockaddr { sa_family_t sa_family; char sa_data[14]; };
typedef struct sockaddr sockaddr;
typedef unsigned long pthread_mutex_t;
typedef unsigned long pthread_cond_t;
struct shmid_ds { int shm_segsz; };
typedef struct shmid_ds shmid_ds;
struct stat { unsigned long st_size; };
typedef struct stat stat;

// Global variables
unsigned long ____stack_chk_guard;
void *stack0x00000008;
int tmp_ldWn;
int tmp_stWn;

// Additional global variables needed for compilation
typedef struct {
    int _0_4_;
    char _4_1_;
} atomic_counter_t;
atomic_counter_t atomic_counter;
int data;
int ready;
char completed_0;
void *__dso_handle;
unsigned long counter_mutex;
unsigned long cond_mutex;
unsigned long cond;
int signal_received;
int signal_number;
unsigned long shared_counter;
void *tpidr_el0;

// Decompiled by BinaryAI
// SHA256: 63fda1558250e17af64ebc81fdf05ced4d107842f2481d4be1a5cda027a569f2

// Function: _init @ 0x1013b0
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001013d0 @ 0x1013d0
void FUN_001013d0(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1013f0
void * __memcpy(void *__dest,void *__src,size_t __n);
void * memcpy(void *__dest,void *__src,size_t __n) __attribute__((weak));
void * memcpy(void *__dest,void *__src,size_t __n)
{
 return __memcpy(__dest,__src,__n);
}

// Function: <EXTERNAL>::_exit @ 0x101400
void __exit(int __status) __attribute__((noreturn));
void _exit(int __status)
{
 __exit(__status);
}

// Function: <EXTERNAL>::strlen @ 0x101410
size_t __strlen(char *__s);
size_t strlen(char *__s) __attribute__((weak));
size_t strlen(char *__s)
{
 return __strlen(__s);
}

// Function: <EXTERNAL>::raise @ 0x101420
int __raise(int __sig);
int raise(int __sig) __attribute__((weak));
int raise(int __sig)
{
 return __raise(__sig);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101430
void __libc_start_main(void *main_func, void *stack, void *init, void *fini, void *rtld_fini, void *stack_end, long unsigned int *auxv);
void __libc_start_main(void *main_func, void *stack, void *init, void *fini, void *rtld_fini, void *stack_end, long unsigned int *auxv)
{
 return;
}

// Function: <EXTERNAL>::execl @ 0x101440
int execl(const char *__path,const char *__arg,...) __attribute__((noreturn));
int execl(const char *__path,const char *__arg,...)
{
 // In a real exec, this would replace the process
 while(1) { }
}

// Function: <EXTERNAL>::listen @ 0x101450
int __listen(int __fd,int __n);
int listen(int __fd,int __n) __attribute__((weak));
int listen(int __fd,int __n)
{
 return __listen(__fd,__n);
}

// Function: <EXTERNAL>::shmdt @ 0x101460
int shmdt(void *__shmaddr)
{
 return 0;
}

// Function: <EXTERNAL>::bind @ 0x101470
int __bind(int __fd,sockaddr *__addr,socklen_t __len);
int bind(int __fd,sockaddr *__addr,socklen_t __len) __attribute__((weak));
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
 return __bind(__fd,__addr,__len);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101480
void __cxa_finalize(void *ptr)
{
 return;
}

// Function: <EXTERNAL>::pipe @ 0x101490
int __pipe(int *__pipedes);
int pipe(int *__pipedes) __attribute__((weak));
int pipe(int *__pipedes)
{
 return __pipe(__pipedes);
}

// Function: <EXTERNAL>::fork @ 0x1014a0
__pid_t __fork(void);
__pid_t fork(void) __attribute__((weak));
__pid_t fork(void)
{
 return __fork();
}

// Function: <EXTERNAL>::snprintf @ 0x1014b0
int __snprintf(char *__s,size_t __maxlen,char *__format,...);
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 int iVar1;
 iVar1 = __snprintf(__s,__maxlen,__format);
 return iVar1;
}

// Function: <EXTERNAL>::fileno @ 0x1014c0
int __fileno(FILE *__stream);
int fileno(FILE *__stream) __attribute__((weak));
int fileno(FILE *__stream)
{
 return __fileno(__stream);
}

// Function: <EXTERNAL>::signal @ 0x1014d0
__sighandler_t __signal(int __sig,__sighandler_t __handler);
__sighandler_t signal(int __sig,__sighandler_t __handler) __attribute__((weak));
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 return __signal(__sig,__handler);
}

// Function: <EXTERNAL>::fclose @ 0x1014e0
int __fclose(FILE *__stream);
int fclose(FILE *__stream) __attribute__((weak));
int fclose(FILE *__stream)
{
 return __fclose(__stream);
}

// Function: <EXTERNAL>::fopen @ 0x1014f0
FILE * __fopen(char *__filename,char *__modes);
FILE * fopen(char *__filename,char *__modes) __attribute__((weak));
FILE * fopen(char *__filename,char *__modes)
{
 return __fopen(__filename,__modes);
}

// Function: <EXTERNAL>::malloc @ 0x101500
void * __malloc(size_t __size);
void * malloc(size_t __size) __attribute__((weak));
void * malloc(size_t __size)
{
 return __malloc(__size);
}

// Function: <EXTERNAL>::setsockopt @ 0x101510
int __setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen) __attribute__((weak));
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 return __setsockopt(__fd,__level,__optname,__optval,__optlen);
}

// Function: <EXTERNAL>::open @ 0x101520
int open(char *__file,int __oflag,...)
{
 int iVar1;
 iVar1 = open(__file,__oflag);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101530
int pthread_cond_signal(pthread_cond_t *__cond)
{
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x101540
void * __memset(void *__s,int __c,size_t __n);
void * memset(void *__s,int __c,size_t __n) __attribute__((weak));
void * memset(void *__s,int __c,size_t __n)
{
 return __memset(__s,__c,__n);
}

// Function: <EXTERNAL>::shmat @ 0x101550
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 void *pvVar1;
 pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
 return pvVar1;
}

// Function: <EXTERNAL>::sleep @ 0x101560
uint sleep(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::htons @ 0x101570
uint16_t htons(uint16_t __hostshort)
{
 uint16_t uVar1;
 uVar1 = htons(__hostshort);
 return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x101580
void rewind(FILE *__stream)
{
 (void)__stream;
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101590
void __stack_chk_fail(void) __attribute__((noreturn));
void __stack_chk_fail(void *param1, unsigned long param2, unsigned long param3, unsigned long param4)
{
 (void)param1;
 (void)param2;
 (void)param3;
 (void)param4;
 while(1) { }
}

// Function: <EXTERNAL>::close @ 0x1015a0
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1015b0
void __gmon_start__(void);
void __gmon_start__(void)
{
 (void)__gmon_start__();
 return;
}

// Function: <EXTERNAL>::stat @ 0x1015c0
int stat(char *__file,stat *__buf)
{
 int iVar1;
 iVar1 = stat(__file,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::write @ 0x1015d0
ssize_t write(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::__getauxval @ 0x1015e0
unsigned long __getauxval(unsigned long __type);
unsigned long __getauxval(unsigned long __type)
{
 return __getauxval(__type);
}

// Function: <EXTERNAL>::abort @ 0x1015f0
void abort(void) __attribute__((noreturn));
void abort(void)
{
 while(1) { }
}

// Function: <EXTERNAL>::puts @ 0x101600
int __puts(const char *__s);
int puts(char *__s) __attribute__((weak));
int puts(char *__s)
{
 return __puts(__s);
}

// Function: <EXTERNAL>::memcmp @ 0x101610
int memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::strcmp @ 0x101620
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x101630
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
 int iVar1;
 iVar1 = shmctl(__shmid,__cmd,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::fread @ 0x101640
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 size_t sVar1;
 sVar1 = fread(__ptr,__size,__n,__stream);
 return sVar1;
}

// Function: <EXTERNAL>::ftok @ 0x101650
key_t ftok(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::free @ 0x101660
void __free(void *__ptr);
void free(void *__ptr) __attribute__((weak));
void free(void *__ptr)
{
 __free(__ptr);
 return;
}

// Function: <EXTERNAL>::shmget @ 0x101670
int shmget(key_t __key,size_t __size,int __shmflg)
{
 int iVar1;
 iVar1 = shmget(__key,__size,__shmflg);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101680
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::strchr @ 0x101690
char * strchr(char *__s,int __c)
{
 char *pcVar1;
 pcVar1 = strchr(__s,__c);
 return pcVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x1016a0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 size_t sVar1;
 sVar1 = fwrite(__ptr,__size,__n,__s);
 return sVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x1016b0
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x1016c0
__pid_t wait(void *__stat_loc)
{
 __pid_t _Var1;
 _Var1 = wait(__stat_loc);
 return _Var1;
}

// Function: <EXTERNAL>::socket @ 0x1016d0
int socket(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::strcpy @ 0x1016e0
char * strcpy(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = strcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::read @ 0x1016f0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 ssize_t sVar1;
 sVar1 = read(__fd,__buf,__nbytes);
 return sVar1;
}

// Function: <EXTERNAL>::strstr @ 0x101700
char * strstr(char *__haystack,char *__needle)
{
 char *pcVar1;
 pcVar1 = strstr(__haystack,__needle);
 return pcVar1;
}

// Function: <EXTERNAL>::usleep @ 0x101710
int usleep(__useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x101720
void __isoc99_sscanf(void)
{
 __isoc99_sscanf();
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x101730
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x101740
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::__errno_location @ 0x101750
int * __errno_location(void)
{
 int *piVar1;
 piVar1 = __errno_location();
 return piVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x101760
int pthread_join(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::alarm @ 0x101770
uint alarm(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x101780
int pthread_cancel(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101790
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_lock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x1017a0
long syscall(long __sysno,...)
{
 long lVar1;
 lVar1 = syscall(__sysno);
 return lVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x1017b0
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_mutex_unlock(__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x1017c0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::unlink @ 0x1017d0
int unlink(char *__name)
{
 int iVar1;
 iVar1 = unlink(__name);
 return iVar1;
}

// Function: init_have_lse_atomics @ 0x101800
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 atomic_counter._4_1_ = extraout_var & 1;
 return;
}

// Function: _start @ 0x101840
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x101874
unsigned long long call_weak_fn(void)
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

// Function: param_strcpy @ 0x101954
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 (void)strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x101980
unsigned int call_strcpy(void)
{
 unsigned int uVar1;
 char auStack_28 [32];
 long local_8;
 local_8 = ____stack_chk_guard;
 uVar1 = param_strcpy(auStack_28,"HelloLib");
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,uVar1,0,local_8 - ____stack_chk_guard);
 }
 return uVar1;
}

// Function: param_strcmp @ 0x1019e8
unsigned long long param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = strcmp(param_1,param_2);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 return uVar2;
}

// Function: call_strcmp @ 0x101a3c
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00103a78,&DAT_00103a70);
 iVar2 = param_strcmp(&DAT_00103a80,&DAT_00103a80);
 iVar3 = param_strcmp(&DAT_00103a90,&DAT_00103a88);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101aa8
size_t param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1;
}

// Function: call_strlen @ 0x101acc
unsigned long long call_strlen(void)
{
 unsigned long long result;
 param_strlen("BinBench2025");
 result = 0;
 return result;
}

// Function: param_memcpy @ 0x101af0
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x101b20
int call_memcpy(void)
{
 int iVar1;
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned int local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 int local_10;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_38 = 0x140000000a;
 uStack_30 = 0x280000001e;
 local_28 = 0x32;
 local_20 = 0;
 local_18 = 0;
 local_10 = 0;
 param_memcpy(&local_20,&local_38,0x14);
 iVar1 = (int)local_20 + (int)local_18 + local_10;
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,iVar1,0,local_8 - ____stack_chk_guard);
 }
 return iVar1;
}

// Function: param_memcmp @ 0x101bb8
unsigned long long param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 return uVar2;
}

// Function: call_memcmp @ 0x101c14
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
 local_8 = ____stack_chk_guard;
 local_38 = 0x200000001;
 local_30 = 3;
 local_28 = 0x200000001;
 local_20 = 4;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar1 = param_memcmp(&local_38,&local_28,0xc);
 iVar2 = param_memcmp(&local_38,&local_18,0xc);
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,iVar1 + iVar2,0,local_8 - ____stack_chk_guard);
 }
 return iVar1 + iVar2;
}

// Function: param_printf @ 0x101ce8
int param_printf(uint param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",(unsigned long)param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x101d1c
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,&DAT_00103af8);
 return uVar1;
}

// Function: param_scanf @ 0x101d44
int param_scanf(unsigned long long param_1)
{
 int local_14;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_c = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_10);
 if (local_c == 2) {
 local_14 = local_14 + local_10;
 }
 else {
 local_14 = -1;
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,local_14,0,local_8 - ____stack_chk_guard);
 }
 return local_14;
}

// Function: call_scanf @ 0x101dd8
unsigned long long call_scanf(void)
{
 unsigned long long result;
 result = param_scanf("123,456");
 return result;
}

// Function: param_fopen_fclose @ 0x101df4
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

// Function: call_fopen_fclose @ 0x101e48
unsigned long long call_fopen_fclose(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x101e80
unsigned long long param_fread_fwrite(char *param_1)
{
 int iVar1;
 FILE *__s;
 unsigned long long uVar2;
 size_t sVar3;
 size_t sVar4;
 char acStack_28 [32];
 long local_8;
 local_8 = ____stack_chk_guard;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar3 = strlen("BinBench Test Data");
 sVar3 = fwrite("BinBench Test Data",1,sVar3,__s);
 sVar4 = strlen("BinBench Test Data");
 if (sVar3 == sVar4) {
 rewind(__s);
 sVar4 = fread(acStack_28,1,sVar3,__s);
 acStack_28[sVar4] = '\0';
 fclose(__s);
 unlink(param_1);
 if ((sVar4 == sVar3) && (iVar1 = strcmp(acStack_28,"BinBench Test Data"), iVar1 == 0)) {
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
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x101fb8
unsigned long long call_fread_fwrite(void)
{
 unsigned long long result;
 result = param_fread_fwrite("/tmp/binbench_test.tmp");
 return result;
}

// Function: param_malloc_free @ 0x101fd4
int param_malloc_free(unsigned long param_1)
{
 int iVar1;
 int *__ptr;
 unsigned long local_10;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 __ptr[local_10] = (int)local_10 * 10;
 }
 iVar1 = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x10209c
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x1020b4
int param_memset(void *param_1,size_t param_2)
{
 int local_14;
 unsigned long local_10;
 memset(param_1,0,param_2);
 local_14 = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_14 = local_14 + (uint)*(byte *)((long)param_1 + local_10);
 }
 return local_14;
}

// Function: call_memset @ 0x102130
int call_memset(void)
{
 int local_34;
 int local_30 [10];
 long local_8;
 local_8 = ____stack_chk_guard;
 for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
 local_30[local_34] = 0xff;
 }
 param_memset(local_30,0x28);
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,local_30[0] + local_30[9],0,local_8 - ____stack_chk_guard);
 }
 return local_30[0] + local_30[9];
}

// Function: param_strchr_strstr @ 0x1021c8
int param_strchr_strstr(char *param_1,byte param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,(uint)param_2);
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = (int)pcVar3 - (int)param_1;
 }
 pcVar3 = strstr(param_1,param_3);
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = (int)pcVar3 - (int)param_1;
 }
 return iVar1 + iVar2;
}

// Function: call_strchr_strstr @ 0x10225c
unsigned int call_strchr_strstr(void)
{
 unsigned int uVar1;
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}

// Function: test_standard_library_functions @ 0x102294
int test_standard_library_functions(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(DAT_00103b80);
 uVar2 = call_strcpy();
 iVar1 = printf(DAT_00103ba8,uVar2 & 0xffffffff);
 uVar2 = call_strcmp();
 iVar1 = printf(DAT_00103bc8,uVar2 & 0xffffffff);
 uVar2 = call_strlen();
 iVar1 = printf(DAT_00103be8,uVar2 & 0xffffffff);
 uVar2 = call_memcpy();
 iVar1 = printf(DAT_00103c08,uVar2 & 0xffffffff);
 uVar2 = call_memcmp();
 iVar1 = printf(DAT_00103c28,uVar2 & 0xffffffff);
 uVar2 = call_printf();
 iVar1 = printf(DAT_00103c48,uVar2 & 0xffffffff);
 uVar2 = call_scanf();
 iVar1 = printf(DAT_00103c68,uVar2 & 0xffffffff);
 uVar2 = call_fopen_fclose();
 iVar1 = printf(DAT_00103c88,uVar2 & 0xffffffff);
 uVar2 = call_fread_fwrite();
 iVar1 = printf(DAT_00103ca8,uVar2 & 0xffffffff);
 uVar2 = call_malloc_free();
 iVar1 = printf(DAT_00103cc8,uVar2 & 0xffffffff);
 uVar2 = call_memset();
 iVar1 = printf(DAT_00103ce8,uVar2 & 0xffffffff);
 uVar2 = call_strchr_strstr();
 iVar1 = printf(DAT_00103d08,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: param_linux_syscall @ 0x1023a4
int param_linux_syscall(unsigned long long param_1)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 uVar2 = syscall(0x38,0xffffff9c,param_1,0);
 iVar1 = (int)uVar2;
 if (iVar1 < 0) {
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(0x39,uVar2 & 0xffffffff);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x1023fc
unsigned long long call_linux_syscall(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x102434
unsigned long long param_win32_api(char *param_1)
{
 int iVar1;
 unsigned long long uVar2;
 long local_58;
 long local_8;
 local_8 = ____stack_chk_guard;
 iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff78);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else if (local_58 < 1) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0x2a;
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x1024bc
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x1024d8
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 uint uVar1;
 uint local_14;
 __pid_t local_10;
 __pid_t local_c;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_10 = fork();
 if (local_10 < 0) {
 uVar1 = 0xffffffff;
 }
 else {
 if (local_10 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 local_c = waitpid(local_10,(int *)&local_14,0);
 if (local_c < 0) {
 uVar1 = 0xfffffffe;
 }
 else if ((local_14 & 0x7f) == 0) {
 uVar1 = (int)local_14 >> 8 & 0xff;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,uVar1,0,local_8 - ____stack_chk_guard);
 }
 return uVar1;
}

// Function: call_fork_exec @ 0x1025c0
unsigned long long call_fork_exec(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x1025fc
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned long long uVar3;
 size_t __n;
 ssize_t sVar4;
 int local_30;
 int local_2c;
 char auStack_28 [32];
 long local_8;
 local_8 = ____stack_chk_guard;
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
 iVar1 = local_2c;
 __n = strlen("HelloPipe");
 write(iVar1,"HelloPipe",__n);
 close(local_2c);
 _exit(0);
 }
 close(local_2c);
 sVar4 = read(local_30,auStack_28,0x1f);
 auStack_28[sVar4] = 0;
 close(local_30);
 wait((void *)0x0);
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 else {
 uVar3 = 0x2a;
 }
 }
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,uVar3,0,local_8 - ____stack_chk_guard);
 }
 return uVar3;
}

// Function: call_pipe_communication @ 0x102720
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x102734
unsigned long long param_socket_create(void)
{
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_20;
 int local_1c;
 sockaddr local_18;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_1c = socket(2,1,0);
 if (local_1c < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_20 = 1;
 iVar1 = setsockopt(local_1c,1,2,&local_20,4);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffe;
 }
 else {
 memset(&local_18,0,0x10);
 local_18.sa_family = 2;
 local_18.sa_data._0_2_ = htons(0);
 local_18.sa_data[2] = '\0';
 local_18.sa_data[3] = '\0';
 local_18.sa_data[4] = '\0';
 local_18.sa_data[5] = '\0';
 iVar1 = bind(local_1c,&local_18,0x10);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(local_1c,5);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffc;
 }
 else {
 close(local_1c);
 uVar2 = 0x2a;
 }
 }
 }
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_socket_create @ 0x10286c
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x102880
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long uVar2;
 unsigned long long *__s;
 size_t sVar3;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 uVar2 = 0xfffffffd;
 }
 else {
 *__s = 0x654d646572616853;
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 sVar3 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 uVar2 = sVar3 & 0xffffffff;
 }
 }
 }
 }
 return uVar2;
}

// Function: call_shmget_shmat @ 0x10298c
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: signal_handler @ 0x1029bc
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: param_signal_handling @ 0x1029f0
unsigned long long param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 int local_4;
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
 local_4 = 1000;
 while ((signal_received == 0 && (0 < local_4))) {
 usleep(1000);
 local_4 = local_4 + -1;
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_4 = 2000;
 while ((signal_received == 0 && (0 < local_4))) {
 usleep(1000);
 local_4 = local_4 + -1;
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar2 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 }
 else {
 uVar2 = 0xfffffffc;
 }
 }
 }
 return uVar2;
}

// Function: call_signal_handling @ 0x102b64
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x102b78
int test_system_calls(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(DAT_00103d70);
 uVar2 = call_linux_syscall(iVar1);
 iVar1 = printf(DAT_00103d90,uVar2 & 0xffffffff);
 uVar2 = call_win32_api(iVar1);
 iVar1 = printf(DAT_00103db0,uVar2 & 0xffffffff);
 uVar2 = call_fork_exec(iVar1);
 iVar1 = printf(DAT_00103dd0,uVar2 & 0xffffffff);
 uVar2 = call_pipe_communication(iVar1);
 iVar1 = printf(DAT_00103df0,uVar2 & 0xffffffff);
 uVar2 = call_socket_create(iVar1);
 iVar1 = printf(DAT_00103e10,uVar2 & 0xffffffff);
 uVar2 = call_shmget_shmat(iVar1);
 iVar1 = printf(DAT_00103e30,uVar2 & 0xffffffff);
 uVar2 = call_signal_handling(iVar1);
 iVar1 = printf(DAT_00103e50,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: thread_compute @ 0x102c24
int * thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x102c74
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 unsigned int local_24;
 int local_20;
 unsigned int local_1c;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_24 = param_1;
 local_20 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (local_20 == 0) {
 pthread_join(local_18,&local_10);
 local_1c = *local_10;
 free(local_10);
 uVar1 = local_1c;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,uVar1,0,local_8 - ____stack_chk_guard);
 }
 return uVar1;
}

// Function: call_pthread_create @ 0x102d28
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x102d40
unsigned long long thread_sum(int *param_1)
{
 int local_c;
 param_1[2] = 0;
 for (local_c = *param_1; local_c <= param_1[1]; local_c = local_c + 1) {
 param_1[2] = param_1[2] + local_c;
 }
 return 0;
}

// Function: param_pthread_join @ 0x102dac
int param_pthread_join(void)
{
 int iVar1;
 int local_54;
 int local_50;
 int local_4c;
 pthread_t apStack_48 [3];
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ____stack_chk_guard;
 uStack_28 = 0xb00000000;
 local_30 = 0xa00000001;
 uStack_18 = 0x1e00000015;
 uStack_20 = 0x14;
 local_10 = 0;
 for (local_54 = 0; local_54 < 3; local_54 = local_54 + 1) {
 iVar1 = pthread_create(apStack_48 + local_54,(pthread_attr_t *)0x0,thread_sum,
 (void *)((long)&local_30 + (long)local_54 * 0xc));
 if (iVar1 != 0) {
 local_50 = -1;
 goto LAB_00102ed0;
 }
 }
 local_50 = 0;
 local_4c = 0;
 do {
 if (2 < local_4c) {
LAB_00102ed0:
 if (local_8 - ____stack_chk_guard == 0) {
 return local_50;
 }
 __stack_chk_fail(&____stack_chk_guard,local_50,0,local_8 - ____stack_chk_guard);
 }
 iVar1 = pthread_join(apStack_48[local_4c],(void **)0x0);
 if (iVar1 != 0) {
 local_50 = -2;
 goto LAB_00102ed0;
 }
 local_50 = local_50 + *(int *)((long)&uStack_28 + (long)local_4c * 0xc);
 local_4c = local_4c + 1;
 } while( true );
}

// Function: call_pthread_join @ 0x102f00
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: thread_increment @ 0x102f14
unsigned long long thread_increment(int *param_1)
{
 int iVar1;
 int local_8;
 iVar1 = *param_1;
 for (local_8 = 0; local_8 < iVar1; local_8 = local_8 + 1) {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x102f98
unsigned long long param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 int local_28;
 int local_24;
 int local_14;
 int local_10;
 void *local_8;
 local_28 = param_2;
 local_24 = param_1;
 local_8 = malloc((long)param_1 << 3);
 if (local_8 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_8 + (long)local_14 * 8),(pthread_attr_t *)0x0
 ,thread_increment,&local_28);
 if (iVar1 != 0) {
 free(local_8);
 return 0xfffffffe;
 }
 }
 for (local_10 = 0; local_10 < local_24; local_10 = local_10 + 1) {
 pthread_join(*(pthread_t *)((long)local_8 + (long)local_10 * 8),(void **)0x0);
 }
 free(local_8);
 if (local_24 * local_28 == shared_counter) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x1030c4
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x1030e0
unsigned int * consumer_thread(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 while (uVar1 = data, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x103164
unsigned long long producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x1031c8
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 pthread_t local_18;
 unsigned int *local_10;
 long local_8;
 local_8 = ____stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 pthread_join(local_20,(void **)0x0);
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
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x1032bc
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x1032d0
unsigned long long thread_atomic_increment(int *param_1)
{
 int iVar1;
 long lVar2;
 int local_14;
 lVar2 = ____stack_chk_guard;
 iVar1 = *param_1;
 for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(local_14,local_14 + 1000,&atomic_counter);
 }
 if (lVar2 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,0,0,lVar2 - ____stack_chk_guard);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x1033bc
unsigned long long thread_atomic_load_store(void)
{
 atomic_counter._0_4_ = (int)atomic_counter + 100;
 return 0;
}

// Function: param_atomic_ops @ 0x1033f8
unsigned long long param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_38;
 int local_34;
 int local_24;
 int local_20;
 int local_1c;
 pthread_t local_18;
 void *local_10;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_38 = param_2;
 local_34 = param_1;
 local_10 = malloc((long)param_1 << 3);
 if (local_10 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter._0_4_ = 0;
 for (local_24 = 0; local_24 < local_34; local_24 = local_24 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_10 + (long)local_24 * 8),
 (pthread_attr_t *)0x0,thread_atomic_increment,&local_38);
 if (iVar1 != 0) {
 free(local_10);
 uVar2 = 0xfffffffe;
 goto LAB_00103554;
 }
 }
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)0x0);
 }
 for (local_20 = 0; local_20 < local_34; local_20 = local_20 + 1) {
 pthread_join(*(pthread_t *)((long)local_10 + (long)local_20 * 8),(void **)0x0);
 }
 local_1c = (int)atomic_counter;
 free(local_10);
 if (local_1c < 1) {
 uVar2 = 0xfffffffd;
 }
 else {
 uVar2 = 0x2a;
 }
 }
LAB_00103554:
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x103584
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x1035a0
unsigned int * thread_tls_test(char *param_1)
{
 unsigned int uVar1;
 long lVar2;
 long lVar3;
 unsigned int *puVar4;
 lVar2 = tpidr_el0;
 uVar1 = *(unsigned int *)(lVar2 + 0x10);
 lVar2 = tpidr_el0;
 lVar3 = tpidr_el0;
 *(int *)(lVar3 + 0x10) = *(int *)(lVar2 + 0x10) + 0x32;
 lVar2 = tpidr_el0;
 strncpy((char *)(lVar2 + 0x18),param_1,0x1f);
 puVar4 = (unsigned int *)malloc(8);
 *puVar4 = uVar1;
 lVar2 = tpidr_el0;
 puVar4[1] = *(unsigned int *)(lVar2 + 0x10);
 return puVar4;
}

// Function: param_thread_local_storage @ 0x103644
unsigned long long param_thread_local_storage(int param_1)
{
 void **ppvVar1;
 int iVar2;
 unsigned long long uVar3;
 void *pvVar4;
 uint local_48;
 int local_44;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int *local_28;
 void *local_20;
 void *local_18;
 int *local_10;
 long local_8;
 local_8 = ____stack_chk_guard;
 local_20 = malloc((long)param_1 << 3);
 local_18 = malloc((long)param_1 << 3);
 if ((local_20 == (void *)0x0) || (local_18 == (void *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 for (local_48 = 0; (int)local_48 < param_1; local_48 = local_48 + 1) {
 ppvVar1 = (void **)((long)local_18 + (long)(int)local_48 * 8);
 pvVar4 = malloc(0x10);
 *ppvVar1 = pvVar4;
 snprintf(*(char **)((long)local_18 + (long)(int)local_48 * 8),0x10,"Thread-%d",(unsigned long)local_48
 );
 }
 for (local_44 = 0; local_44 < param_1; local_44 = local_44 + 1) {
 iVar2 = pthread_create((pthread_t *)((long)local_20 + (long)local_44 * 8),
 (pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)local_18 + (long)local_44 * 8));
 if (iVar2 != 0) {
 for (local_40 = 0; local_40 <= local_44; local_40 = local_40 + 1) {
 free(*(void **)((long)local_18 + (long)local_40 * 8));
 }
 free(local_18);
 free(local_20);
 uVar3 = 0xfffffffe;
 goto LAB_001038c8;
 }
 }
 local_3c = 0;
 local_38 = 0;
 for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
 pthread_join(*(pthread_t *)((long)local_20 + (long)local_34 * 8),&local_28);
 local_10 = local_28;
 local_3c = local_3c + *local_28;
 local_38 = local_38 + local_28[1];
 free(local_28);
 free(*(void **)((long)local_18 + (long)local_34 * 8));
 }
 free(local_18);
 free(local_20);
 if ((local_3c == param_1 * 100) && (local_38 == param_1 * 0x96)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_001038c8:
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail(&____stack_chk_guard,uVar3,0,local_8 - ____stack_chk_guard);
 }
 return uVar3;
}

// Function: call_thread_local_storage @ 0x1038fc
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103914
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(&DAT_00103ea8);
 uVar2 = call_pthread_create(iVar1);
 iVar1 = printf(&DAT_00103ec8,uVar2 & 0xffffffff);
 uVar2 = call_pthread_join(iVar1);
 iVar1 = printf(&DAT_00103ee8,uVar2 & 0xffffffff);
 uVar2 = call_mutex_lock(iVar1);
 iVar1 = printf(&DAT_00103f08,uVar2 & 0xffffffff);
 uVar2 = call_condition_variable(iVar1);
 iVar1 = printf(&DAT_00103f28,uVar2 & 0xffffffff);
 uVar2 = call_atomic_ops(iVar1);
 iVar1 = printf(&DAT_00103f48,uVar2 & 0xffffffff);
 uVar2 = call_thread_local_storage(iVar1);
 iVar1 = printf(&DAT_00103f68,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1039ac
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x1039d0
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

// Function: __aarch64_ldadd4_acq_rel @ 0x103a10
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

// Function: _fini @ 0x103a40
void _fini(void)
{
 return;
}

