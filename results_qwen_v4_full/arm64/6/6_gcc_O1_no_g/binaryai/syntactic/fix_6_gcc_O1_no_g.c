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
typedef long __pid_t;
typedef int key_t;
typedef unsigned long pthread_t;
typedef void *pthread_mutex_t;
typedef void *pthread_cond_t;
typedef void *pthread_attr_t;
typedef void *__sighandler_t;
typedef void *FILE;
typedef struct {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;
typedef unsigned int socklen_t;
typedef struct {
    int shm_segsz;
    // other fields omitted
} shmid_ds;
typedef struct {
    long st_size;
    // other fields omitted
} stat_struct;
typedef unsigned long __useconds_t;

// Additional type definitions for compilation
typedef unsigned char byte;
typedef void *(*__start_routine)(void *);

// Forward declarations for thread functions
static void * thread_sum(void *param_1);
static void * thread_compute(void *param_1);
static void * thread_increment(void *param_1);
static void * consumer_thread(void *arg);
static void * producer_thread(void *arg);
static void * thread_atomic_increment(void *param_1);
static void * thread_atomic_load_store(void *arg);
static void * thread_tls_test(void *param_1);

// Global variables
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int data = 0;
int ready = 0;
void *cond_mutex = 0;
void *cond = 0;
void *counter_mutex = 0;
long tpidr_el0 = 0;
void *__dso_handle = 0;
byte completed_0 = 0;
unsigned long ___stack_chk_guard = 0;

// Atomic counter union for atomic operations
typedef union {
    int _0_4_;
    byte _4_1_;
} atomic_counter_t;
atomic_counter_t atomic_counter = {0};
int tmp_ldWn = 0;
int tmp_stWn = 0;

// External functions - implementations
int ExclusiveMonitorPass(void *addr, int size) { return 1; }
byte ExclusiveMonitorsStatus(void) { return 0; }
void LOAcquire(void) { return; }
void LORelease(void) { return; }
int call_weak_fn(int ctx) { return 0; }

// Standard library function declarations
extern int __libc_start_main(int (*main)(void), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void __cxa_finalize(void *d);
extern void *malloc(size_t size);
extern size_t strlen(const char *s);
extern void *memcpy(void *dest, const void *src, size_t n);
extern int fclose(FILE *stream);
extern int fileno(FILE *stream);
extern FILE *fopen(const char *pathname, const char *mode);
extern int raise(int sig);
extern __sighandler_t signal(int signum, __sighandler_t handler);
extern int listen(int sockfd, int backlog);
extern int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
extern int execl(const char *path, const char *arg, ...);
extern void _exit(int status);
extern int shmdt(const void *shmaddr);
extern int __snprintf_chk(char *s, size_t maxlen, int flag, size_t slen, const char *format, ...);
extern __pid_t fork(void);
extern int pipe(int pipefd[2]);
extern int bind(int sockfd, const sockaddr *addr, socklen_t addrlen);
extern int open(const char *pathname, int flags, ...);

// Additional standard library function declarations
extern unsigned long __getauxval(unsigned long type);
extern void abort(void);
extern void __gmon_start__(void);
extern int pthread_mutex_lock(pthread_mutex_t *mutex);
extern int pthread_mutex_unlock(pthread_mutex_t *mutex);
extern int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern int pthread_cond_signal(pthread_cond_t *cond);
extern int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
extern int pthread_join(pthread_t thread, void **retval);
extern int pthread_cancel(pthread_t thread);
extern int usleep(__useconds_t usec);
extern unsigned int sleep(unsigned int seconds);
extern int strcmp(const char *s1, const char *s2);
extern char *strchr(const char *s, int c);
extern char *strstr(const char *haystack, const char *needle);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern int __isoc99_sscanf(const char *str, const char *format, ...);
extern void rewind(FILE *stream);
extern size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
extern size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
extern void free(void *ptr);
extern void memset(void *s, int c, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern long syscall(long number, ...);
extern int *__errno_location(void);
extern int stat(const char *pathname, stat_struct *buf);
extern int waitpid(__pid_t pid, int *wstatus, int options);
extern int wait(int *wstatus);
extern ssize_t read(int fd, void *buf, size_t count);
extern ssize_t write(int fd, const void *buf, size_t count);
extern int close(int fd);
extern int socket(int domain, int type, int protocol);
extern int shmget(key_t key, size_t size, int shmflg);
extern void *shmat(int shmid, const void *shmaddr, int shmflg);
extern int shmctl(int shmid, int cmd, shmid_ds *buf);
extern key_t ftok(const char *pathname, int proj_id);
extern int alarm(unsigned int seconds);
extern void __stack_chk_fail(void);
extern void strcpy(char *dest, const char *src);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int unlink(const char *pathname);

// Define stack protection variable (remove extern declaration)
// unsigned long ___stack_chk_guard is defined in global variables above

// Forward declarations for atomic operations
// extern int __aarch64_ldadd4_acq_rel(int param_1, int *param_2); // Removed - function is defined as static below
// extern int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3); // Removed - function is defined as static below

// External data references - definitions
char DAT_00103408[] = "test_string_1";
char DAT_00103400[] = "test_string_2";
char DAT_00103410[] = "test_string_3";
char DAT_00103420[] = "test_string_4";
char DAT_00103418[] = "test_string_5";
char DAT_00103440[] = "TestName";
char DAT_001034c8[] = "Testing standard library functions\n";
char DAT_001034f0[] = "strcmp result: %u\n";
char DAT_00103510[] = "strcmp total: %u\n";
char DAT_00103530[] = "strlen result: %u\n";
char DAT_00103550[] = "memcpy test complete\n";
char DAT_00103570[] = "memcmp test complete\n";
char DAT_00103590[] = "printf test complete\n";
char DAT_001035b0[] = "scanf test complete\n";
char DAT_001035d0[] = "fopen/fclose result: %u\n";
char DAT_001035f0[] = "fread/fwrite test complete\n";
char DAT_00103610[] = "malloc/free test complete\n";
char DAT_00103630[] = "memset test complete\n";
char DAT_00103650[] = "strchr/strstr test complete\n";
char DAT_001036b8[] = "Testing system calls\n";
char DAT_001036d8[] = "linux syscall result: %u\n";
char DAT_001036f8[] = "win32 api test complete\n";
char DAT_00103718[] = "fork/exec result: %u\n";
char DAT_00103738[] = "pipe communication test complete\n";
char DAT_00103758[] = "socket create test complete\n";
char DAT_00103778[] = "shmget/shmat result: %u\n";
char DAT_00103798[] = "signal handling test complete\n";
char DAT_001037c8[] = "Testing thread concurrency\n";
char DAT_001037e8[] = "pthread_create test complete\n";
char DAT_00103808[] = "pthread_join result: %u\n";
char DAT_00103828[] = "mutex lock test complete\n";
char DAT_00103848[] = "condition variable result: %u\n";
char DAT_00103868[] = "atomic ops test complete\n";
char DAT_00103888[] = "thread local storage test complete\n";

// Main function declaration
// extern int main(void); // Removed - function is defined as static below

// Decompiled by BinaryAI
// SHA256: a412c8f9704b6d19689c1ee2a45b8bc5aece9189c6991fa1241011659f1a7f05

// Function: _init @ 0x101388
static int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}





































































































































// Function: deregister_tm_clones @ 0x101850
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101880
static void register_tm_clones(void)
{
 return;
}

// Function: FUN_001018bc @ 0x1018bc
static void FUN_001018bc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: signal_handler @ 0x101914
static void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x10192c
static void * thread_sum(void *param_1)
{
 int iVar1;
 int iVar2;
 int *p = (int *)param_1;
 p[2] = 0;
 iVar1 = *p;
 if (iVar1 <= p[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != p[1] + 1);
 p[2] = iVar2;
 }
 return 0;
}

// Function: thread_compute @ 0x101964
static void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 int *p = (int *)param_1;
 iVar1 = *p;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: thread_increment @ 0x101990
static void * thread_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 int *p = (int *)param_1;
 iVar1 = *p;
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
 return 0;
}

// Function: consumer_thread @ 0x101a0c
static void * consumer_thread(void *arg)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 while (ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return (void *)puVar2;
}

// Function: producer_thread @ 0x101a88
static void * producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: thread_atomic_increment @ 0x101ae0
static void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 int *p = (int *)param_1;
 iVar1 = *p;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter._0_4_);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter._0_4_);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x101b4c
static void * thread_atomic_load_store(void *arg)
{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return 0;
}

// Function: thread_tls_test @ 0x101b6c
static void * thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 char *p = (char *)param_1;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x18),p,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return (void *)piVar4;
}

// Function: param_strcpy @ 0x101bc0
static unsigned long long param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return 0;
}

// Function: call_strcpy @ 0x101be8
static void call_strcpy(void)
{
 unsigned long long uVar1;
 char auStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 uVar1 = param_strcpy(auStack_28,"HelloLib");
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_strcmp @ 0x101c3c
static int param_strcmp(char *param_1,char *param_2)
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
static int call_strcmp(void)
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
static unsigned long long param_strlen(char *param_1)
{
 return strlen(param_1);
}

// Function: call_strlen @ 0x101cd0
static unsigned long long call_strlen(void)
{
 unsigned long long uVar1;
 uVar1 = param_strlen(DAT_00103408);
 return uVar1;
}

// Function: param_memcpy @ 0x101cd8
static unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101cfc
static void call_memcpy(void)
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
static int param_memcmp(void *param_1,void *param_2,size_t param_3)
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
static void call_memcmp(void)
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
static void param_printf(unsigned int param_1,unsigned long long param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x101e80
static void call_printf(void)
{
 param_printf(0x2a,(unsigned long long)&DAT_00103440);
 return;
}

// Function: param_scanf @ 0x101ea0
static void param_scanf(char *param_1)
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
static void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x101f30
static int param_fopen_fclose(char *param_1)
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
static unsigned int call_fopen_fclose(void)
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
static void param_fread_fwrite(char *param_1)
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
static void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x1020d4
static int param_malloc_free(long param_1)
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
static void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x102158
static int param_memset(void *param_1,size_t param_2)
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
 pbVar3 = (byte *)param_1;
 do {
 pbVar2 = pbVar3 + 1;
 iVar1 = iVar1 + (uint)*pbVar3;
 pbVar3 = pbVar2;
 } while (pbVar2 != (byte *)param_1 + param_2);
 }
 return iVar1;
}

// Function: call_memset @ 0x1021ac
static void call_memset(void)
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
static int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
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
static void call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}

// Function: test_standard_library_functions @ 0x1022a0
static void test_standard_library_functions(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_001034c8);
 call_strcpy();
 __printf_chk(1,DAT_001034f0,0);
 uVar2 = call_strcmp();
 __printf_chk(1,DAT_00103510,uVar2);
 uVar2 = call_strlen();
 __printf_chk(1,DAT_00103530,uVar2);
 call_memcpy();
 __printf_chk(1,DAT_00103550,0);
 call_memcmp();
 __printf_chk(1,DAT_00103570,0);
 call_printf();
 __printf_chk(1,DAT_00103590,0);
 call_scanf();
 __printf_chk(1,DAT_001035b0,0);
 uVar2 = call_fopen_fclose();
 __printf_chk(1,DAT_001035d0,uVar2);
 call_fread_fwrite();
 __printf_chk(1,DAT_001035f0,0);
 call_malloc_free();
 __printf_chk(1,DAT_00103610,0);
 call_memset();
 __printf_chk(1,DAT_00103630,0);
 call_strchr_strstr();
 __printf_chk(1,DAT_00103650,0);
 return;
}

// Function: param_linux_syscall @ 0x1023dc
static unsigned long param_linux_syscall(unsigned long long param_1)
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
static unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall(0);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x102458
static void param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 stat_struct local_stat;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = stat(param_1,&local_stat);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_stat.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_win32_api @ 0x1024c4
static void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x1024e0
static int param_fork_exec(char *param_1,unsigned long long param_2)
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
 return (int)uVar2;
}

// Function: call_fork_exec @ 0x102590
static unsigned int call_fork_exec(void)
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
static void param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned int uVar3;
 ssize_t sVar4;
 int pipefd[2];
 char auStack_28 [32];
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = pipe(pipefd);
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
 close(pipefd[0]);
 write(pipefd[1],"HelloPipe",9);
 close(pipefd[1]);
 _exit(0);
 }
 close(pipefd[1]);
 sVar4 = read(pipefd[0],auStack_28,0x1f);
 auStack_28[sVar4] = 0;
 close(pipefd[0]);
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
static void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x1026b8
static void param_socket_create(void)
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
 return;
 }
 __stack_chk_fail();
}

// Function: call_socket_create @ 0x1027bc
static void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x1027d0
static unsigned long param_shmget_shmat(void)
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
static unsigned int call_shmget_shmat(void)
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
static unsigned long long param_signal_handling(void)
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
static void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x102a5c
static void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_001036b8);
 uVar2 = call_linux_syscall();
 __printf_chk(1,DAT_001036d8,uVar2);
 call_win32_api();
 __printf_chk(1,DAT_001036f8,0);
 uVar2 = call_fork_exec();
 __printf_chk(1,DAT_00103718,uVar2);
 param_pipe_communication();
 __printf_chk(1,DAT_00103738,0);
 param_socket_create();
 __printf_chk(1,DAT_00103758,0);
 uVar2 = call_shmget_shmat();
 __printf_chk(1,DAT_00103778,uVar2);
 param_signal_handling();
 __printf_chk(1,DAT_00103798,0);
 return;
}

// Function: param_pthread_create @ 0x102b20
static unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 pthread_t local_18;
 void *local_10;
 unsigned int *puVar11;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_1c = param_1;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,(void *)&local_1c);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 puVar11 = (unsigned int *)local_10;
 uVar2 = *puVar11;
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
static void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: param_pthread_join @ 0x102bc8
static int param_pthread_join(void)
{
 int iVar1;
 pthread_t *__arg;
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
 __arg = local_48 + 3;
 uStack_28 = 0xb00000000;
 local_48[3] = 0xa00000001;
 uStack_18 = 0x1e00000015;
 uStack_20 = 0x14;
 local_10 = 0;
 ppVar4 = local_48;
 iVar3 = 3;
 __newthread = ppVar4;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(__start_routine)thread_sum,(void *)__arg);
 if (iVar1 != 0) {
 iVar3 = -1;
 goto LAB_00102c84;
 }
 __newthread = __newthread + 1;
 __arg = (pthread_t *)((long)__arg + 0xc);
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 lVar2 = 0;
 iVar3 = 0;
 do {
 iVar1 = pthread_join(*ppVar4,(void **)0x0);
 if (iVar1 != 0) {
 iVar3 = -2;
 break;
 }
 iVar3 = iVar3 + *(int *)((long)&uStack_28 + lVar2);
 ppVar4 = ppVar4 + 1;
 lVar2 = lVar2 + 0xc;
 } while (lVar2 != 0x24);
LAB_00102c84:
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar3;
 }
 __stack_chk_fail();
}

// Function: call_pthread_join @ 0x102ccc
static void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: param_mutex_lock @ 0x102ce0
static unsigned int param_mutex_lock(unsigned long param_1,int param_2)
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
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,(__start_routine)thread_increment,(void *)&local_4);
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
static void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: param_condition_variable @ 0x102df8
static unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 pthread_t local_18;
 void *local_10;
 unsigned int *puVar11;
 long local_8;
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,(__start_routine)consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,(__start_routine)producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 pthread_join(local_20,(void **)0x0);
 puVar11 = (unsigned int *)local_10;
 uVar2 = *puVar11;
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
static void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: param_atomic_ops @ 0x102edc
static void param_atomic_ops(unsigned long param_1,unsigned int param_2)
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
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,(__start_routine)thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)0x0);
 }
 }
 else {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,(__start_routine)thread_atomic_increment,(void *)&local_14);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102fd4;
 }
 __newthread = __newthread + 1;
 } while (__newthread != __ptr + param_1);
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,(__start_routine)thread_atomic_load_store,(void *)0x0);
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
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_atomic_ops @ 0x103064
static void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: param_thread_local_storage @ 0x103080
static void param_thread_local_storage(unsigned long param_1)
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
 void *local_10;
 int *piVar11;
 long local_8;
 void **ppvVar7;
 param_1 = param_1 & 0xffffffff;
 local_8 = ___stack_chk_guard;
 uVar4 = -(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3;
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
 pthread_join(*(pthread_t *)((long)__ptr + lVar5),&local_10);
 piVar11 = (int *)local_10;
 iVar1 = iVar1 + *piVar11;
 iVar8 = iVar8 + piVar11[1];
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
static void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103294
static void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = puts(DAT_001037c8);
 call_pthread_create();
 __printf_chk(1,DAT_001037e8,0);
 uVar2 = param_pthread_join();
 __printf_chk(1,DAT_00103808,uVar2);
 call_mutex_lock();
 __printf_chk(1,DAT_00103828,0);
 uVar2 = param_condition_variable();
 __printf_chk(1,DAT_00103848,uVar2);
 call_atomic_ops();
 __printf_chk(1,DAT_00103868,0);
 call_thread_local_storage();
 __printf_chk(1,DAT_00103888,0);
 return;
}

// Function: main @ 0x103340
static int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103360
static int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
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
static int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
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
static void _fini(void)
{
 return;
}

