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
typedef int __pid_t;
typedef int pid_t;
typedef int bool;
typedef long __gthread_t;
typedef unsigned long pthread_t;
typedef unsigned long pthread_attr_t;
typedef unsigned long pthread_mutex_t;
typedef unsigned long pthread_cond_t;
typedef struct __FILE { int _flags; int _fileno; int _bufsiz; void* _buf; void* _base; int _ptr; int _cnt; } FILE;
typedef unsigned int socklen_t;
typedef unsigned short sa_family_t;
typedef char sockaddr_storage[128];
typedef struct sockaddr { sa_family_t sa_family; char sa_data[14]; } sockaddr;
typedef unsigned long key_t;
typedef unsigned long shmid_ds;
typedef void * __sighandler_t;
typedef unsigned int __useconds_t;
typedef void *(*__start_routine)(void *);
typedef unsigned char byte;
typedef struct stat { unsigned long st_size; unsigned short st_mode; unsigned int st_ino; } stat;
typedef int (*SUB_ffff0fc0_t)(int, int, int*);
typedef int (*SUB_ffff0fa0_t)(void);

// Global variables
int atomic_counter;
int shared_counter;
int data;
int ready;
int signal_received;
int signal_number;
int completed_0;
SUB_ffff0fc0_t SUB_ffff0fc0;
SUB_ffff0fa0_t SUB_ffff0fa0;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
char DAT_00013de8[] = "TestName";
char DAT_00013e40[] = "Testing standard library functions...";
char DAT_00013e64[] = "String length: %d\n";
char DAT_00013e80[] = "strcmp result: %d\n";
char DAT_00013e9c[] = "memcmp result: %d\n";
char DAT_00013eb8[] = "Test value: %d\n";
char DAT_00013ed4[] = "memcmp (different): %d\n";
char DAT_00013ef0[] = "printf result: %d\n";
char DAT_00013f0c[] = "sscanf test passed\n";
char DAT_00013f2c[] = "fopen/fileno/fclose test passed\n";
char DAT_00013f48[] = "fread/fwrite result: %d\n";
char DAT_00013f64[] = "malloc/free result: %d\n";
char DAT_00013f80[] = "memset sum: %d\n";
char DAT_00013f9c[] = "strchr/strstr result: %d\n";
char DAT_00013ff4[] = "Testing system calls...\n";
char DAT_00014010[] = "syscall test passed\n";
char DAT_0001402c[] = "stat test passed\n";
char DAT_00014048[] = "fork/exec test\n";
char DAT_00014064[] = "pipe result: %d\n";
char DAT_00014080[] = "socket result: %d\n";
char DAT_0001409c[] = "shm operations completed\n";
char DAT_000140b8[] = "signal handling completed\n";
char DAT_000140d4[] = "Testing thread concurrency...\n";
char DAT_000140f4[] = "pthread_create result: %d\n";
char DAT_00011fc4[] = "/bin/true";
char DAT_00014110[] = "pthread_join result: %d\n";
char DAT_00014130[] = "mutex lock result: %d\n";
char DAT_0001414c[] = "condition variable result: %d\n";
char DAT_00014168[] = "atomic ops result: %d\n";
char DAT_00014184[] = "thread local storage test completed\n";

// Decompiled by BinaryAI
// SHA256: 6babfaa0641291b7cc5975936ca3822958a6048e546f5bafd9c742e57bb46562

// Function: _init @ 0x10c9c
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x10cbc
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 return 0;
}

// Function: <EXTERNAL>::strstr @ 0x10cc8
char * strstr(char *__haystack,char *__needle)
{
 return (char *)0;
}

// Function: <EXTERNAL>::raise @ 0x10cd4
int raise(int __sig)
{
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10ce0
void __libc_start_main(void)
{
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x10cec
int strcmp(char *__s1,char *__s2)
{
 return 0;
}

// Function: <EXTERNAL>::setsockopt @ 0x10cf8
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 return 0;
}

// Function: <EXTERNAL>::fopen @ 0x10d04
FILE * fopen(char *__filename,char *__modes)
{
 return (FILE *)0;
}

// Function: <EXTERNAL>::read @ 0x10d10
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 return 0;
}

// Function: <EXTERNAL>::free @ 0x10d1c
void free(void *__ptr)
{
 return;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x10d28
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 return 0;
}

// Function: <EXTERNAL>::_exit @ 0x10d34
void _exit(int __status)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x10d40
void * memcpy(void *__dest,void *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>::shmget @ 0x10d4c
int shmget(key_t __key,size_t __size,int __shmflg)
{
 return -1;
}

// Function: <EXTERNAL>::signal @ 0x10d58
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 return (__sighandler_t)0;
}

// Function: <EXTERNAL>::memcmp @ 0x10d64
int memcmp(void *__s1,void *__s2,size_t __n)
{
 return 0;
}

// Function: <EXTERNAL>::sleep @ 0x10d70
uint sleep(uint __seconds)
{
 return 0;
}

// Function: <EXTERNAL>::stpcpy @ 0x10d7c
char * stpcpy(char *__dest,char *__src)
{
 return __dest;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10d88
void __stack_chk_fail(void)
{
 return;
}

// Function: <EXTERNAL>::rewind @ 0x10d94
void rewind(FILE *__stream)
{
 return;
}

// Function: <EXTERNAL>::alarm @ 0x10da0
uint alarm(uint __seconds)
{
 return 0;
}

// Function: <EXTERNAL>::unlink @ 0x10dac
int unlink(char *__name)
{
 return 0;
}

// Function: <EXTERNAL>::wait @ 0x10db8
__pid_t wait(void *__stat_loc)
{
 return -1;
}

// Function: <EXTERNAL>::shmat @ 0x10dc4
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 return (void *)-1;
}

// Function: <EXTERNAL>::fwrite @ 0x10dd0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 return 0;
}

// Function: <EXTERNAL>::usleep @ 0x10ddc
int usleep(__useconds_t __useconds)
{
 return 0;
}

// Function: <EXTERNAL>::waitpid @ 0x10de8
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 return -1;
}

// Function: <EXTERNAL>::fread @ 0x10df4
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 return 0;
}

// Function: <EXTERNAL>::shmctl @ 0x10e00
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
 return 0;
}

// Function: <EXTERNAL>::puts @ 0x10e0c
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::malloc @ 0x10e18
void * malloc(size_t __size)
{
 return (void *)0;
}

// Function: <EXTERNAL>::stat @ 0x10e30
int stat(char *__file,stat *__buf)
{
 int iVar1;
 iVar1 = stat(__file,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::open @ 0x10e3c
int open(char *__file,int __oflag,...)
{
 int iVar1;
 iVar1 = open(__file,__oflag);
 return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x10e48
long syscall(long __sysno,...)
{
 long lVar1;
 lVar1 = syscall(__sysno);
 return lVar1;
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
int __isoc99_sscanf(char *__s, char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::bind @ 0x10e84
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x10e90
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10e9c
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10ea8
int __printf_chk(int __flag, char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::write @ 0x10eb4
ssize_t write(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::fileno @ 0x10ec0
int fileno(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x10ecc
int shmdt(void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x10ed8
int fclose(FILE *__stream)
{
 int iVar1;
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x10ee4
int pipe(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x10ef0
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x10efc
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::execl @ 0x10f08
int execl(char *__path,char *__arg,...)
{
 int iVar1;
 iVar1 = execl(__path,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x10f14
int listen(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::ftok @ 0x10f20
key_t ftok(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x10f2c
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::socket @ 0x10f38
int socket(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x10f44
int pthread_join(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x10f50
int pthread_cancel(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x10f5c
int pthread_cond_signal(pthread_cond_t *__cond)
{
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10f68
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::close @ 0x10f74
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: <EXTERNAL>::__snprintf_chk @ 0x10f80
void __snprintf_chk(void)
{
 __snprintf_chk();
 return;
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
void processEntry _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
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
 } while (param_1[1] + 1 != iVar2);
 param_1[2] = iVar1;
 }
 return 0;
}

// Function: thread_compute @ 0x110f0
void thread_compute(int *param_1)
{
 int *piVar1;
 int iVar2;
 iVar2 = *param_1;
 piVar1 = (int *)malloc(4);
 *piVar1 = iVar2 * iVar2;
 return;
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
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 iVar1 = iVar1 + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 } while (iVar2 != iVar1);
 }
 return 0;
}

// Function: consumer_thread @ 0x11170
void consumer_thread(void)
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
 return;
}

// Function: producer_thread @ 0x111d0
unsigned int producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: thread_atomic_increment @ 0x11218
unsigned int thread_atomic_increment(int *param_1)
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

// Function: thread_atomic_load_store @ 0x112a8
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

// Function: thread_tls_test @ 0x112d8
void thread_tls_test(unsigned int param_1)
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
 strncpy((char *)(iVar1 + 0xc),(char *)((unsigned long long)uVar5 >> 0x20),0x1f);
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar4;
 piVar2[1] = iVar3;
 return;
}

// Function: param_fork_exec.part.0 @ 0x11324
void param_fork_exec_part_0(char *param_1,unsigned int param_2)
{
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
}

// Function: param_thread_local_storage.constprop.0 @ 0x11340
void param_thread_local_storage_constprop_0(void)
{
 pthread_t *__ptr;
 void *__ptr_00;
 void *pvVar1;
 int iVar2;
 void **ppvVar3;
 void **ppvVar4;
 int iVar5;
 pthread_t *ppVar6;
 int *local_30;
 int local_2c;
 local_2c = 0;
 __ptr = (pthread_t *)malloc(0x10);
 __ptr_00 = malloc(0x10);
 if (__ptr_00 != (void *)0x0 && __ptr != (pthread_t *)0x0) {
 ppvVar3 = (void **)((int)__ptr_00 + -4);
 iVar5 = 0;
 ppvVar4 = ppvVar3;
 do {
 pvVar1 = malloc(0x10);
 ppvVar4 = ppvVar4 + 1;
 *ppvVar4 = pvVar1;
 iVar2 = iVar5 + 1;
 __snprintf_chk(pvVar1,0x10,1,0x10,"Thread-%d",iVar5);
 iVar5 = iVar2;
 } while (iVar2 != 4);
 iVar5 = 0;
 ppVar6 = __ptr;
 ppvVar4 = ppvVar3;
 do {
 ppvVar4 = ppvVar4 + 1;
 iVar2 = pthread_create(ppVar6,(pthread_attr_t *)0x0,thread_tls_test,*ppvVar4);
 if (iVar2 != 0) {
 do {
 ppvVar3 = ppvVar3 + 1;
 free(*ppvVar3);
 } while ((void **)((int)__ptr_00 + iVar5 * 4) != ppvVar3);
 free(__ptr_00);
 free(__ptr);
 goto LAB_00011458;
 }
 iVar5 = iVar5 + 1;
 ppVar6 = ppVar6 + 1;
 } while (iVar5 != 4);
 ppVar6 = __ptr + -1;
 do {
 ppVar6 = ppVar6 + 1;
 pthread_join(*ppVar6,&local_30);
 free(local_30);
 ppvVar3 = ppvVar3 + 1;
 free(*ppvVar3);
 } while (ppVar6 != __ptr + 3);
 free(__ptr_00);
 free(__ptr);
 }
LAB_00011458:
 if (local_2c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_atomic_ops.constprop.0 @ 0x114bc
void param_atomic_ops_constprop_0(void)
{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *ppVar2;
 unsigned int local_24;
 pthread_t local_20;
 int local_1c;
 local_1c = 0;
 local_24 = 500;
 __ptr = (pthread_t *)malloc(0x10);
 if (__ptr != (pthread_t *)0x0) {
 __sync_synchronize();
 atomic_counter = 0;
 __sync_synchronize();
 ppVar2 = __ptr;
 do {
 iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_atomic_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 goto LAB_0001158c;
 }
 ppVar2 = ppVar2 + 1;
 } while (ppVar2 != __ptr + 4);
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,(void **)0x0);
 }
 ppVar2 = __ptr + -1;
 do {
 ppVar2 = ppVar2 + 1;
 pthread_join(*ppVar2,(void **)0x0);
 } while (__ptr + 3 != ppVar2);
 __sync_synchronize();
 __sync_synchronize();
 free(__ptr);
 }
LAB_0001158c:
 if (local_1c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_mutex_lock.constprop.0 @ 0x115e4
void param_mutex_lock_constprop_0(void)
{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *ppVar2;
 int local_20;
 int local_1c;
 local_1c = 0;
 local_20 = 1000;
 __ptr = (pthread_t *)malloc(0x10);
 if (__ptr != (pthread_t *)0x0) {
 shared_counter = 0;
 ppVar2 = __ptr;
 do {
 iVar1 = pthread_create(ppVar2,(pthread_attr_t *)0x0,thread_increment,&local_20);
 if (iVar1 != 0) {
 free(__ptr);
 goto LAB_0001168c;
 }
 ppVar2 = ppVar2 + 1;
 } while (ppVar2 != __ptr + 4);
 ppVar2 = __ptr + -1;
 do {
 ppVar2 = ppVar2 + 1;
 pthread_join(*ppVar2,(void **)0x0);
 } while (__ptr + 3 != ppVar2);
 free(__ptr);
 }
LAB_0001168c:
 if (local_1c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_strcpy @ 0x116d4
int param_strcpy(char *param_1,char *param_2)
{
 char *pcVar1;
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}

// Function: call_strcpy @ 0x116e8
unsigned int call_strcpy(void)
{
 return 8;
}

// Function: param_strcmp @ 0x116f0
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

// Function: call_strcmp @ 0x11714
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: call_strlen @ 0x11720
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11728
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x1173c
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11744
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

// Function: call_memcmp @ 0x11768
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
 __stack_chk_fail(iVar2 + iVar1);
 }
 return;
}

// Function: param_printf @ 0x11824
void param_printf(unsigned int param_1,unsigned int param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x1183c
void call_printf(void)
{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00013de8);
 return;
}

// Function: param_scanf @ 0x11858
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
 __stack_chk_fail(iStack_14,(int)((unsigned long long)uVar1 >> 0x20),local_c,0);
}

// Function: call_scanf @ 0x118bc
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
 __stack_chk_fail(iStack_14,(int)((unsigned long long)uVar1 >> 0x20),local_c,0);
}

// Function: param_fopen_fclose @ 0x11928
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

// Function: call_fopen_fclose @ 0x11964
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

// Function: param_fread_fwrite @ 0x119b0
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
 __stack_chk_fail(uVar3);
 }
 return;
}

// Function: call_fread_fwrite @ 0x11aac
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11ab8
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

// Function: call_malloc_free @ 0x11b20
unsigned int call_malloc_free(void)
{
 void *__ptr;
 __ptr = malloc(0x28);
 if (__ptr != (void *)0x0) {
 free(__ptr);
 return 0x5a;
 }
 return 0xffffffff;
}

// Function: param_memset @ 0x11b48
int param_memset(void *param_1,size_t param_2)
{
 int iVar1;
 byte *pbVar2;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar1 = 0;
 pbVar2 = (byte *)((int)param_1 + -1);
 do {
 pbVar2 = pbVar2 + 1;
 iVar1 = iVar1 + (uint)*pbVar2;
 } while ((byte *)((int)param_1 + (param_2 - 1)) != pbVar2);
 return iVar1;
 }
 return 0;
}

// Function: call_memset @ 0x11b94
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x11b9c
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

// Function: call_strchr_strstr @ 0x11bd8
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11be0
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 FILE *__stream;
 void *__ptr;
 char auStack_14 [4];
 char auStack_10 [4];
 int local_c;
 local_c = 0;
 puts(&DAT_00013e40);
 __printf_chk(1,&DAT_00013e64,8);
 __printf_chk(1,&DAT_00013e80,0);
 __printf_chk(1,&DAT_00013e9c,0xc);
 __printf_chk(1,&DAT_00013eb8,0x5a);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_00013ed4,uVar1);
 uVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00013de8);
 __printf_chk(1,&DAT_00013ef0,uVar1);
 __isoc99_sscanf("123,456","%d,%d",auStack_14,auStack_10);
 __printf_chk(1,&DAT_00013f0c);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 fileno(__stream);
 fclose(__stream);
 }
 __printf_chk(1,&DAT_00013f2c);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_00013f48,uVar1);
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar1 = 0x5a;
 }
 __printf_chk(1,&DAT_00013f64,uVar1);
 __printf_chk(1,&DAT_00013f80,0);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00013f9c,0xf);
 return;
}

// Function: param_linux_syscall @ 0x11dcc
long param_linux_syscall(unsigned int param_1)
{
 long lVar1;
 int *piVar2;
 lVar1 = syscall(5,param_1,0);
 if (-1 < lVar1) {
 syscall(6,lVar1);
 return lVar1;
 }
 piVar2 = __errno_location();
 return -*piVar2;
}

// Function: call_linux_syscall @ 0x11e10
unsigned int call_linux_syscall(void)
{
 long lVar1;
 int *piVar2;
 unsigned int uVar3;
 lVar1 = syscall(5,"/etc/passwd",0);
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
 syscall(6);
 return 0x2a;
}

// Function: param_win32_api @ 0x11e58
void param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_68;
 int local_c;
 local_c = 0;
 memset(&sStack_68, 0, sizeof(sStack_68));
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
 __stack_chk_fail(uVar2);
 }
 return;
}

// Function: call_win32_api @ 0x11ec0
void call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_68;
 int local_c;
 local_c = 0;
 memset(&sStack_68, 0, sizeof(sStack_68));
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
 __stack_chk_fail(uVar2);
 }
 return;
}

// Function: param_fork_exec @ 0x11f30
void param_fork_exec(unsigned int param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint uVar2;
 unsigned int uVar3;
 uint uStack_28;
 int iStack_24;
 unsigned int *puStack_1c;
 uint local_18;
 int local_14;
 local_14 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
LAB_00011f8c:
 if (local_14 != 0) {
 __stack_chk_fail(uVar2);
 }
 return;
 }
 if (_Var1 != 0) {
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
 goto LAB_00011f8c;
 }
 puStack_1c = &DAT_00011fc4;
 param_fork_exec_part_0(param_1,param_2);
 iStack_24 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
LAB_00012010:
 uVar3 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 uVar3 = param_fork_exec_part_0("/bin/true");
 goto LAB_00012054;
 }
 _Var1 = waitpid(_Var1,(int *)&uStack_28,0);
 if (((_Var1 < 0) || ((uStack_28 & 0x7f) != 0)) || (((int)uStack_28 >> 8 & 0xffU) != 0))
 goto LAB_00012010;
 uVar3 = 0x2a;
 }
 if (iStack_24 == 0) {
 return;
 }
LAB_00012054:
 __stack_chk_fail(uVar3);
}

// Function: call_fork_exec @ 0x11fc8
void call_fork_exec(void)
{
 __pid_t _Var1;
 unsigned int uVar2;
 uint local_10;
 int local_c;
 local_c = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
LAB_00012010:
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 uVar2 = param_fork_exec_part_0("/bin/true");
 goto LAB_00012054;
 }
 _Var1 = waitpid(_Var1,(int *)&local_10,0);
 if (((_Var1 < 0) || ((local_10 & 0x7f) != 0)) || (((int)local_10 >> 8 & 0xffU) != 0))
 goto LAB_00012010;
 uVar2 = 0x2a;
 }
 if (local_c == 0) {
 return;
 }
LAB_00012054:
 __stack_chk_fail(uVar2);
}

// Function: param_pipe_communication @ 0x12060
void param_pipe_communication(void)
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
 __stack_chk_fail(uVar4);
 }
 return;
}

// Function: param_socket_create @ 0x12148
void param_socket_create(void)
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
 __stack_chk_fail(uVar2);
}

// Function: param_shmget_shmat @ 0x12250
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
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x12304
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

// Function: param_signal_handling @ 0x1231c
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

// Function: test_system_calls @ 0x12448
void test_system_calls(void)
{
 long lVar1;
 __pid_t __pid;
 unsigned int uVar2;
 struct stat local_68;
 int local_c;
 local_c = 0;
 puts(&DAT_00013ff4);
 lVar1 = syscall(5,"/etc/passwd",0);
 if (lVar1 < 0) {
 __errno_location();
 }
 else {
 syscall(6);
 }
 __printf_chk(1,&DAT_00014010);
 stat("/etc/passwd",&local_68);
 __printf_chk(1,&DAT_0001402c);
 __pid = fork();
 if (-1 < __pid) {
 if (__pid == 0) {
 param_fork_exec_part_0("/bin/true");
 halt_baddata();
 }
 waitpid(__pid,(int *)&local_68,0);
 }
 __printf_chk(1,&DAT_00014048);
 uVar2 = param_pipe_communication();
 __printf_chk(1,&DAT_00014064,uVar2);
 uVar2 = param_socket_create();
 __printf_chk(1,&DAT_00014080,uVar2);
 param_shmget_shmat();
 __printf_chk(1,&DAT_0001409c);
 uVar2 = param_signal_handling();
 if (local_c == 0) {
 __printf_chk(1,&DAT_000140b8);
 return;
 }
 __stack_chk_fail(uVar2,local_c,uVar2,0);
}

// Function: param_pthread_create @ 0x125f4
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

// Function: call_pthread_create @ 0x12680
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

// Function: param_pthread_join @ 0x1270c
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
 goto LAB_000127b4;
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
LAB_000127b4:
 if (local_24 == 0) {
 return iVar1;
 }
 __stack_chk_fail();
}

// Function: param_mutex_lock @ 0x127fc
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

// Function: param_condition_variable @ 0x128d8
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

// Function: param_atomic_ops @ 0x129a4
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
 goto LAB_00012a34;
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
LAB_00012a34:
 if (local_24 == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_thread_local_storage @ 0x12b08
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
 goto LAB_00012c14;
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
LAB_00012c14:
 if (local_2c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: test_thread_concurrency @ 0x12cec
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_18;
 unsigned int local_14;
 unsigned int *local_10;
 int local_c;
 local_c = 0;
 puts(&DAT_000140d4);
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
 __printf_chk(1,&DAT_000140f4,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_00014110,uVar2);
 uVar2 = param_mutex_lock_constprop_0();
 __printf_chk(1,&DAT_00014130,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_0001414c,uVar2);
 uVar2 = param_atomic_ops_constprop_0();
 __printf_chk(1,&DAT_00014168,uVar2);
 uVar2 = param_thread_local_storage_constprop_0();
 if (local_c == 0) {
 __printf_chk(1,&DAT_00014184);
 return;
 }
 __stack_chk_fail(uVar2,local_c,uVar2,0);
}

// Function: __sync_fetch_and_add_4 @ 0x12e0c
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

// Function: __sync_fetch_and_sub_4 @ 0x12e44
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

// Function: __sync_fetch_and_or_4 @ 0x12e7c
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

// Function: __sync_fetch_and_and_4 @ 0x12eb4
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

// Function: __sync_fetch_and_xor_4 @ 0x12eec
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

// Function: __sync_fetch_and_nand_4 @ 0x12f24
uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(uVar2, ~(uVar2 & param_2), param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_add_2 @ 0x12f60
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_sub_2 @ 0x12fc0
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_or_2 @ 0x13020
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_and_2 @ 0x13080
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_xor_2 @ 0x130e0
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_nand_2 @ 0x13140
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_add_1 @ 0x131a4
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_sub_1 @ 0x13200
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_or_1 @ 0x1325c
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_and_1 @ 0x132b8
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_xor_1 @ 0x13314
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_nand_1 @ 0x13370
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_add_and_fetch_4 @ 0x133d0
int __sync_add_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_sub_and_fetch_4 @ 0x13408
int __sync_sub_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_or_and_fetch_4 @ 0x13440
uint __sync_or_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_and_and_fetch_4 @ 0x13478
uint __sync_and_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_xor_and_fetch_4 @ 0x134b0
uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = (*(void *)&SUB_ffff0fc0)*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_nand_and_fetch_4 @ 0x134e8
uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = (*(void *)&SUB_ffff0fc0)*param_1,uVar2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_add_and_fetch_2 @ 0x13524
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_2 @ 0x1358c
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_2 @ 0x135f4
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_2 @ 0x1365c
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_2 @ 0x136c4
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_2 @ 0x1372c
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_add_and_fetch_1 @ 0x13798
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_1 @ 0x137fc
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_1 @ 0x13860
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_1 @ 0x138c4
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_1 @ 0x13928
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_1 @ 0x1398c
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
 iVar3 = (*(void *)&SUB_ffff0fc0)uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_val_compare_and_swap_4 @ 0x139f4
int __sync_val_compare_and_swap_4(int *param_1,int param_2,unsigned int param_3)
{
 int iVar1;
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = (*(void *)&SUB_ffff0fc0)param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_2 @ 0x13a44
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_1 @ 0x13abc
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
 iVar3 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_bool_compare_and_swap_4 @ 0x13b30
bool __sync_bool_compare_and_swap_4(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = (*(void *)&SUB_ffff0fc0)param_2,param_3,param_1);
 return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x13b5c
bool __sync_bool_compare_and_swap_2(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_2();
 return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x13b78
bool __sync_bool_compare_and_swap_1(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __sync_val_compare_and_swap_1();
 return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x13ba0
unsigned int __sync_lock_test_and_set_4(unsigned int *param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = (*(void *)&SUB_ffff0fc0)uVar2,param_2,param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_lock_test_and_set_2 @ 0x13bd8
int __sync_lock_test_and_set_2(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_test_and_set_1 @ 0x13c38
int __sync_lock_test_and_set_1(uint param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = (*(void *)&SUB_ffff0fc0)
 (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (uint *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_release_8 @ 0x13c94
void __sync_lock_release_8(unsigned int *param_1)
{
 (*(void *)&SUB_ffff0fa0)();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}

// Function: __sync_lock_release_4 @ 0x13cb8
void __sync_lock_release_4(unsigned int *param_1)
{
 (*(void *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_2 @ 0x13cd8
void __sync_lock_release_2(unsigned short *param_1)
{
 (*(void *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_1 @ 0x13cf8
void __sync_lock_release_1(char *param_1)
{
 (*(void *)&SUB_ffff0fa0)();
 *param_1 = 0;
 return;
}

// Function: _fini @ 0x13d28
void _fini(void)
{
 return;
}

