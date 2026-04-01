/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
#include <stdio.h>

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

/* Additional type definitions for missing types */

// NULL constant definition
#ifndef NULL
#define NULL ((void *)0)
#endif

// Basic types
typedef unsigned char byte;
typedef unsigned int __useconds_t;

// Standard I/O types
typedef struct _IO_FILE FILE;

// System types
typedef int pid_t;
typedef pid_t __pid_t;

// IPC types
typedef int key_t;

// Unsigned integer type
typedef unsigned int uint;

// File mode type
typedef unsigned int mode_t;

// Pthread types
typedef unsigned long pthread_t;
typedef struct { unsigned int __size; } pthread_attr_t;
typedef struct { unsigned int __data[5]; } pthread_mutex_t;
typedef struct { unsigned int __data[6]; } pthread_cond_t;
typedef void (*__sighandler_t)(int);

__sighandler_t signal(int signum, __sighandler_t handler);
unsigned int alarm(unsigned int seconds);

// Signal constants
#define SIG_ERR ((__sighandler_t)-1)
#define SIG_DFL ((__sighandler_t)0)
#define SIG_IGN ((__sighandler_t)1)

// Socket types
typedef unsigned short sa_family_t;
struct sockaddr {
	sa_family_t sa_family;
	char sa_data[14];
};
typedef unsigned int socklen_t;

// Stat structure
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
	long st_atime;
	long st_mtime;
	long st_ctime;
};

// Global variables
int data = 0;
int ready = 0;
char __aarch64_have_lse_atomics = 0;

// Thread synchronization variables
int shared_counter = 0;
int atomic_counter = 0;
int signal_received = 0;
int signal_number = 0;

// Mutex and condition variables
pthread_mutex_t counter_mutex_storage = {0};
pthread_mutex_t *counter_mutex = &counter_mutex_storage;
pthread_mutex_t cond_mutex_storage = {0};
pthread_mutex_t *cond_mutex = &cond_mutex_storage;
pthread_cond_t cond_storage = {0};
pthread_cond_t *cond = &cond_storage;

// Global completion and DSO handle
char completed_0 = 0;
void *__dso_handle;

// Thread-local storage base register
long tpidr_el0;

// IPC types
struct ipc_perm {
	unsigned int __key;
	unsigned int uid;
	unsigned int gid;
	unsigned int cuid;
	unsigned int cgid;
	unsigned short mode;
	unsigned short __pad1;
	unsigned short __seq;
	unsigned short __pad2;
	unsigned long __unused1;
	unsigned long __unused2;
};

// Shared memory types
struct shmid_ds {
	struct ipc_perm shm_perm;
	size_t shm_segsz;
	unsigned long shm_atime;
	unsigned long shm_dtime;
	unsigned long shm_ctime;
	pid_t shm_cpid;
	pid_t shm_lpid;
	unsigned long shm_nattch;
	unsigned long __pad1;
	unsigned long __pad2;
};

// Thread function pointer type
typedef void *(*__start_routine)(void *);

// Typedef for shmid_ds to allow usage without struct keyword
typedef struct shmid_ds shmid_ds;

// ARM atomic operations (compiler intrinsics)
static inline bool ExclusiveMonitorPass(void *ptr, int size);
static inline char ExclusiveMonitorsStatus(void);
static inline void LOAcquire(void);
static inline void LORelease(void);

// Forward declarations for functions used before definition
int call_weak_fn(int);
void test_standard_library_functions(void);
void test_system_calls(void);
void test_thread_concurrency(void);
void abort(void);

// Forward declarations for ARM atomic functions
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);
static inline bool ExclusiveMonitorPass(void *ptr, int size);
static inline char ExclusiveMonitorsStatus(void);

// Forward declarations for standard library functions
unsigned long __getauxval(unsigned long type);
void __gmon_start__(void);
void __cxa_finalize(void *dso_handle);
void *malloc(size_t size);
void free(void *ptr);
int vsnprintf(char *str, size_t size, const char *format, va_list ap);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_cancel(pthread_t thread);
int usleep(unsigned int usec);
unsigned int sleep(unsigned int seconds);
char *strncpy(char *dest, const char *src, size_t n);
char *stpcpy(char *dest, const char *src);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *memset(void *s, int c, size_t n);
int unlink(const char *pathname);
char *strchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);
long syscall(long number, ...);
int *__errno_location(void);
int stat(const char *pathname, struct stat *statbuf);
int execl(const char *path, const char *arg, ...);
pid_t waitpid(pid_t pid, int *status, int options);
int pipe(int pipefd[2]);
int open(const char *pathname, int flags, mode_t mode);
int close(int fd);
void _exit(int status);
ssize_t write(int fd, const void *buf, size_t count);
ssize_t read(int fd, void *buf, size_t count);
pid_t wait(int *status);
int socket(int domain, int type, int protocol);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int listen(int sockfd, int backlog);
int open(const char *pathname, int flags, mode_t mode);
key_t ftok(const char *pathname, int proj_id);
int shmget(key_t key, size_t size, int shmflg);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmctl(int shmid, int cmd, struct shmid_ds *buf);

// Stack protector variables
long ____stack_chk_guard;
long ___stack_chk_guard;

// Data string constants
char DAT_00103698[] = "TestName";
char DAT_00103700[] = "Testing Standard Library Functions";
char DAT_00103728[] = "strcmp result: %u\n";
char DAT_00103748[] = "strcmp expected 0: %u\n";
char DAT_00103768[] = "strlen result: %u\n";
char DAT_00103788[] = "memcpy result: %u\n";
char DAT_001037a8[] = "memcmp result: %u\n";
char DAT_001037c8[] = "printf chars: %u\n";
char DAT_001037e8[] = "sscanf result: %d\n";
char DAT_00103808[] = "fopen result: %u\n";
char DAT_00103828[] = "fread result: %u\n";
char DAT_00103848[] = "malloc result: %d\n";
char DAT_00103868[] = "memset result: %u\n";
char DAT_00103888[] = "strchr/strstr result: %u\n";
char DAT_001038f0[] = "Testing System Calls";
char DAT_00103910[] = "open result: %u\n";
char DAT_00103930[] = "stat result: %u\n";
char DAT_00103950[] = "fork result: %u\n";
char DAT_00103970[] = "pipe result: %u\n";
char DAT_00103990[] = "socket result: %u\n";
char DAT_001039b0[] = "shmget result: %u\n";
char DAT_001039d0[] = "signal result: PASS\n";
char DAT_00103a00[] = "Testing Thread Concurrency";
char DAT_00103a20[] = "pthread_create result: %u\n";
char DAT_00103a40[] = "pthread_join result: %u\n";
char DAT_00103a60[] = "mutex_lock result: %u\n";
char DAT_00103a80[] = "condition variable result: %u\n";
char DAT_00103aa0[] = "atomic ops result: %u\n";
char DAT_00103ac0[] = "TLS result: PASS\n";

// Decompiled by BinaryAI
// SHA256: 3008896a56a84c2b464dd6fd72dc924344a05b7b9581cd99f0de6ff93d57ed26

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







// Function: <EXTERNAL>::raise @ 0x1013f0
int raise(int __sig);

// Function: <EXTERNAL>::__libc_start_main @ 0x101400
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, 
                       int (*init)(int, char **, char **), void (*fini)(void), void (*rtld_fini)(void));





// Function: <EXTERNAL>::shmdt @ 0x101430
int shmdt(void *__shmaddr);

// Function: <EXTERNAL>::bind @ 0x101440
int bind(int __fd,struct sockaddr *__addr,socklen_t __len);





// Function: <EXTERNAL>::fork @ 0x101470
__pid_t fork(void);







// Function: <EXTERNAL>::__snprintf_chk @ 0x1014b0
int __snprintf_chk(char *__str, size_t __n, int __flag, size_t __slen, const char *__format, ...)
{
 va_list args;
 va_start(args, __format);
 int result = vsnprintf(__str, __n, __format, args);
 va_end(args);
 return result;
}













// Function: <EXTERNAL>::__printf_chk @ 0x101520
int __printf_chk(int __flag, const char *__format, ...)
{
 va_list args;
 va_start(args, __format);
 int result = vprintf(__format, args);
 va_end(args);
 return result;
}









// Function: <EXTERNAL>::__stack_chk_fail @ 0x101570
__attribute__((noreturn))
void __stack_chk_fail(void)
{
 abort();
}

























// Function: <EXTERNAL>::free @ 0x101640
void free(void *__ptr);

void __real_free(void *__ptr);

void free(void *__ptr)
{
 __real_free(__ptr);
 return;
}





















// Function: <EXTERNAL>::__isoc99_sscanf @ 0x1016f0
int __isoc99_sscanf(const char *__str, const char *__format, ...)
{
 va_list args;
 va_start(args, __format);
 int result = vsscanf(__str, __format, args);
 va_end(args);
 return result;
}





















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
 unsigned long extraout_var;
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: _start @ 0x101840
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 unsigned long long stack_end;
 __libc_start_main((int (*)(int, char **, char **))main, (int)param_9, (char **)&stack_end, (int (*)(int, char **, char **))0, (void (*)(void))0, (void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x101874
int call_weak_fn(int param_1)
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

// Function: signal_handler @ 0x101960
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x101980
void *thread_sum(void *param_1)
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
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: thread_increment @ 0x1019e4
void *thread_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock(counter_mutex);
 iVar2 = iVar2 + 1;
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return (void *)0;
}

// Function: consumer_thread @ 0x101a54
void *consumer_thread(void *unused)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock(cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait(cond,cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock(cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return (void *)puVar2;
}

// Function: producer_thread @ 0x101ad0
void *producer_thread(void *unused)
{
 sleep(1);
 pthread_mutex_lock(cond_mutex);
 ready = 1;
 data = 0x2a;
 pthread_cond_signal(cond);
 pthread_mutex_unlock(cond_mutex);
 return NULL;
}

// Function: thread_atomic_increment @ 0x101b30
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

// Function: thread_atomic_load_store @ 0x101ba0
void *thread_atomic_load_store(void *param_1)
{
 atomic_counter = atomic_counter + 100;
 return (void *)0;
}

// Function: thread_tls_test @ 0x101bc0
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
 local_8 = ____stack_chk_guard;
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
 if (local_8 - ____stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
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
 lStack_8 = ____stack_chk_guard;
 iVar1 = __isoc99_sscanf((const char *)param_1,"%d,%d",&iStack_10,&iStack_c);
 if (iVar1 == 2) {
 iStack_10 = iStack_10 + iStack_c;
 }
 else {
 iStack_10 = -1;
 }
 if (lStack_8 - ____stack_chk_guard == 0) {
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
 local_8 = ____stack_chk_guard;
 iVar1 = __isoc99_sscanf((const char *)param_1,"%d,%d",&local_10,&iStack_c);
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ____stack_chk_guard == 0) {
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
 local_8 = ____stack_chk_guard;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_10,&iStack_c);
 if (iVar1 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 if (local_8 - ____stack_chk_guard == 0) {
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
	local_8 = ____stack_chk_guard;
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
	if (local_8 - ____stack_chk_guard == 0) {
		return uVar2;
	}
	__stack_chk_fail();
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
 local_8 = ____stack_chk_guard;
 puts(DAT_00103700);
 __printf_chk(1,DAT_00103728,8);
 uVar1 = call_strcmp();
 __printf_chk(1,DAT_00103748,uVar1);
 __printf_chk(1,DAT_00103768,0xc);
 __printf_chk(1,DAT_00103788,0x5a);
 call_memcmp();
 uVar1 = 0;
 __printf_chk(1,DAT_001037a8,uVar1);
 uVar1 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,DAT_00103698);
 __printf_chk(1,DAT_001037c8,uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_10,&iStack_c);
 if (iVar2 == 2) {
 local_10 = local_10 + iStack_c;
 }
 else {
 local_10 = -1;
 }
 __printf_chk(1,DAT_001037e8,local_10);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar3 = 0x2a;
 if (-1 < iVar2) goto LAB_001023d8;
 }
 uVar3 = 0xffffffff;
LAB_001023d8:
 __printf_chk(1,DAT_00103808,uVar3);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,DAT_00103828,uVar1);
 iVar2 = call_malloc_free();
 __printf_chk(1,DAT_00103848,iVar2);
 uVar1 = call_memset();
 __printf_chk(1,DAT_00103868,uVar1);
 if (local_8 - ____stack_chk_guard == 0) {
 __printf_chk(1,DAT_00103888,0xf);
 return;
 }
 __stack_chk_fail();
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
 struct stat local_58;
 long local_8;
 local_8 = ____stack_chk_guard;
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
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: FUN_001025ec @ 0x1025ec
void FUN_001025ec(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_58;
 long local_8;
 local_8 = ____stack_chk_guard;
 iVar1 = stat("/etc/passwd",&local_58);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_win32_api @ 0x1025f0
void call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_58;
 long local_8;
 local_8 = ____stack_chk_guard;
 iVar1 = stat("/etc/passwd",&local_58);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_58.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_fork_exec @ 0x102664
 int param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 long local_8;
 local_8 = ____stack_chk_guard;
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
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
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
unsigned int FUN_0010274c(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned int uVar3;
 ssize_t sVar4;
 int iStack_30;
 int iStack_2c;
 char auStack_28 [32];
 long lStack_8;
 lStack_8 = ____stack_chk_guard;
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
 auStack_28[(int)sVar4] = 0;
 close(iStack_30);
 wait((void *)0x0);
 uVar3 = 0x2a;
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
 }
 if (lStack_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar3;
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
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 _exit(0);
 }
 close(local_2c);
 sVar4 = read(local_30,auStack_28,0x1f);
 auStack_28[(int)sVar4] = 0;
 close(local_30);
 wait((void *)0x0);
 uVar3 = 0x2a;
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
 }
 if (local_8 - ____stack_chk_guard != 0) {
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
	struct sockaddr local_18;
	long local_8;
	local_8 = ____stack_chk_guard;
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
			iVar1 = bind(__fd,(struct sockaddr *)&local_18,0x10);
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
	if (local_8 - ____stack_chk_guard == 0) {
		return uVar2;
	}
	__stack_chk_fail();
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
__sighandler_t param_signal_handling(void)
{
 __sighandler_t p_Var1;
 int iVar2;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)SIG_ERR) {
 p_Var1 = (__sighandler_t)0xfffffffe;
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
 p_Var1 = (__sighandler_t)0xfffffffd;
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
 p_Var1 = (__sighandler_t)0xfffffffb;
 }
 else {
 signal(10,SIG_DFL);
 signal(0xe,SIG_DFL);
 p_Var1 = (__sighandler_t)0x2a;
 }
 }
 else {
 p_Var1 = (__sighandler_t)0xfffffffc;
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
	local_8 = ____stack_chk_guard;
	puts(DAT_001038f0);
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
	__printf_chk(1,DAT_00103910,uVar2);
	iVar1 = stat("/etc/passwd",(struct stat *)&local_58);
	if (iVar1 < 0) {
		uVar2 = 0xffffffff;
	}
	else {
		uVar2 = 0x2a;
		if (local_58 < 1) {
			uVar2 = 0xfffffffe;
		}
	}
	__printf_chk(1,DAT_00103930,uVar2);
	iVar1 = param_fork_exec("/bin/true",0);
	uVar5 = 0x2a;
	uVar2 = uVar5;
	if (iVar1 != 0) {
		uVar2 = 0xffffffff;
	}
	__printf_chk(1,DAT_00103950,uVar2);
	uVar2 = (unsigned int)param_fread_fwrite("/tmp/binbench_test.tmp");
	__printf_chk(1,DAT_00103970,uVar2);
	uVar2 = (unsigned int)param_socket_create();
	__printf_chk(1,DAT_00103990,uVar2);
	iVar1 = param_shmget_shmat();
	if (iVar1 < 1) {
		uVar5 = 0xffffffff;
	}
	__printf_chk(1,DAT_001039b0,uVar5);
	uVar2 = (unsigned int)param_signal_handling();
	if (local_8 - ____stack_chk_guard != 0) {
		__stack_chk_fail();
	}
	__printf_chk(1,DAT_001039d0,uVar2);
	return;
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
 lStack_8 = ____stack_chk_guard;
 uStack_1c = param_1;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,&uStack_1c);
 if (iVar1 == 0) {
 pthread_join(pStack_18,(void **)&puStack_10);
 uVar2 = *puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (lStack_8 - ____stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
 return uVar2;
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
 local_8 = ____stack_chk_guard;
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
 if (local_8 - ____stack_chk_guard == 0) {
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
 local_8 = ____stack_chk_guard;
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
 if (local_8 - ____stack_chk_guard == 0) {
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
 local_8 = ____stack_chk_guard;
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
		pthread_join(*ppVar4,(void **)0x0);
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
 if (local_8 - ____stack_chk_guard == 0) {
 return iVar5;
 }
 __stack_chk_fail();
 return iVar5;
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
 pthread_join(*ppVar5,NULL);
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
 lStack_8 = ____stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&pStack_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(pStack_18,(void **)&puStack_10);
 pthread_join(pStack_20,NULL);
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
 if (lStack_8 - ____stack_chk_guard == 0) {
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
 local_8 = ____stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)&local_10);
 pthread_join(local_20,NULL);
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
 if (local_8 - ____stack_chk_guard == 0) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_atomic_ops @ 0x103110
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
 local_8 = ____stack_chk_guard;
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
 if (local_8 - ____stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
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
 lStack_8 = ____stack_chk_guard;
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
 if (lStack_8 - ____stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_thread_local_storage @ 0x1032c0
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
 unsigned long uVar10;
 int *local_10;
 long local_8;
 void **ppvVar7;
 uVar10 = (unsigned long)(int)param_1;
 local_8 = ____stack_chk_guard;
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
 if (local_8 - ____stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
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
 lStack_8 = ____stack_chk_guard;
 puts(DAT_00103a00);
 uStack_1c = 7;
 iVar1 = pthread_create(&pStack_18,(pthread_attr_t *)0x0,(__start_routine)thread_compute,&uStack_1c);
 if (iVar1 == 0) {
 pthread_join(pStack_18,(void **)&puStack_10);
 uVar2 = *puStack_10;
 free(puStack_10);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,DAT_00103a20,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,DAT_00103a40,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,DAT_00103a60,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,DAT_00103a80,uVar2);
 param_atomic_ops(4,500);
 __printf_chk(1,DAT_00103aa0,0x2a);
 uVar2 = param_thread_local_storage(4);
 if (lStack_8 - ____stack_chk_guard == 0) {
 __printf_chk(1,DAT_00103ac0);
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
 local_8 = ____stack_chk_guard;
 puts(DAT_00103a00);
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
 __printf_chk(1,DAT_00103a20,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,DAT_00103a40,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 __printf_chk(1,DAT_00103a60,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,DAT_00103a80,uVar2);
 param_atomic_ops(4,500);
 __printf_chk(1,DAT_00103aa0,0x2a);
 uVar2 = param_thread_local_storage(4);
 if (local_8 - ____stack_chk_guard == 0) {
 __printf_chk(1,DAT_00103ac0);
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
 int tmp_ldWn;
 int tmp_stWn;
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

