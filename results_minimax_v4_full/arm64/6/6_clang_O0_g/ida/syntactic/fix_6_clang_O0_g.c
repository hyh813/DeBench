/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* Required includes for standard library types */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <stdatomic.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <errno.h>
#include <sys/auxv.h>

/* Define __WAIT_STATUS type */
typedef union {
 int __i;
 unsigned int __uptr;
} __WAIT_STATUS;

/* Define JUMPOUT macro */
#define JUMPOUT(addr) goto *(void*)(addr)

/* Declare call_weak_fn - weak symbol that can be overridden */
void *call_weak_fn(void) __attribute__((weak_import));

/* Declare signal_handler */
void signal_handler(int sig);

/* Atomic operations are provided by stdatomic.h - using standard C11 atomics */

/* Declare ARM64 exclusive monitor intrinsics */
static inline unsigned int __ldaxr(unsigned int *ptr) {
    unsigned int result;
    __asm__ __volatile__ ("ldaxr %w0, [%1]" : "=r" (result) : "r" (ptr) : "memory");
    return result;
}

static inline int __stlxr(unsigned int val, unsigned int *ptr) {
    int result;
    __asm__ __volatile__ ("stlxr %w0, %w1, [%2]" : "=r" (result) : "r" (val), "r" (ptr) : "memory");
    return result;
}

/* Declare ARM64 status register read */
unsigned long long _ReadStatusReg(unsigned long long reg_id)
{
    unsigned long long result;
    __asm__ __volatile__ ("mrs %0, tpidr_el0" : "=r" (result));
    return result;
}

/* Declare ARM64 LSE atomic operations */
extern unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3);
extern long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);

/* Declare init_have_lse_atomics */
extern long long init_have_lse_atomics(void);

/* Declare global variable for LSE atomics detection */
extern int _aarch64_have_lse_atomics;

/* Define TPIDR_EL0 register ID */
#define TPIDR_EL0 0x5E82

/* Define xmmword_3D04 constant (128-bit) */
static const __int128 xmmword_3D04 = (__int128)0x42006F6C6C6548LL | ((__int128)0x42006F6C6C6548LL << 64);

/* Format strings for test_standard_library_functions */
static const char *asc_39AA = "Testing Standard Library Functions:\n";
static const char *aLibL101D = "LibL101: strcpy = %d\n";
static const char *aLibL102D = "LibL102: strcmp = %d\n";
static const char *aLibL103D = "LibL103: strlen = %d\n";
static const char *aLibL104D = "LibL104: memcpy = %d\n";
static const char *aLibL105D = "LibL105: memcmp = %d\n";
static const char *aLibL106D = "LibL106: printf = %d\n";
static const char *aLibL107D = "LibL107: scanf = %d\n";
static const char *aLibL108D = "LibL108: fopen/fclose = %d\n";
static const char *aLibL109D = "LibL109: fread/fwrite = %d\n";
static const char *aLibL110D = "LibL110: malloc/free = %d\n";
static const char *aLibL111D = "LibL111: memset = %d\n";
static const char *aLibL112D = "LibL112: strchr/strstr = %d\n";

/* Format strings for test_system_calls */
static const char *asc_3B50 = "Testing System Calls:\n";
static const char *aSysL301D = "SysL301: linux_syscall = %d\n";
static const char *aSysL302D = "SysL302: win32_api = %d\n";
static const char *aSysL303D = "SysL303: fork_exec = %d\n";
static const char *aSysL304D = "SysL304: pipe_communication = %d\n";
static const char *aSysL305D = "SysL305: socket_create = %d\n";
static const char *aSysL306D = "SysL306: shmget_shmat = %d\n";
static const char *aSysL307D = "SysL307: signal_handling = %d\n";

/* Format strings for test_thread_concurrency */
static const char *asc_3C3A = "Testing Thread Concurrency:\n";
static const char *aThrL301D = "ThrL301: pthread_create = %d\n";
static const char *aThrL302D = "ThrL302: pthread_join = %d\n";
static const char *aThrL303D = "ThrL303: mutex_lock = %d\n";
static const char *aThrL304D = "ThrL304: condition_variable = %d\n";
static const char *aThrL305D = "ThrL305: atomic_ops = %d\n";
static const char *aThrL306D = "ThrL306: thread_local_storage = %d\n";

/* Global variables for LSE atomics detection */
int _aarch64_have_lse_atomics;

/* Global variables for condition variable example */
int ready;
int data;

/* Global variables for signal handling */
volatile int signal_received;
volatile int signal_number;

/* Global variables for mutex example */
int shared_counter;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;

/* Global variables for condition variable example */
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Global atomic counter */
atomic_uint atomic_counter;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/6/6_clang_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x12C8 */
long long init_proc()
{
 return (long long)call_weak_fn();
}


/* Function: sub_12E0 @ 0x12E0 */
void sub_12E0()
{
 JUMPOUT(0);
}


/* Function: init_have_lse_atomics @ 0x1700 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn - provides weak symbol resolution */
void *call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x1854 */
size_t param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return strlen(dst);
}


/* Function: call_strcpy @ 0x1888 */
int call_strcpy()
{
 char dst[32]; // [xsp+10h] [xbp-20h] BYREF

 return param_strcpy(dst, "HelloLib");
}


/* Function: param_strcmp @ 0x18B8 */
long long param_strcmp(const char *s1, const char *s2)
{
 int v5; // [xsp+Ch] [xbp-14h]

 v5 = strcmp(s1, s2);
 if ( v5 <= 0 )
 {
 if ( v5 < 0 )
 return (unsigned int)-1;
 else
 return 0;
 }
 else
 {
 return 1;
 }
}


/* Function: call_strcmp @ 0x1920 */
int call_strcmp()
{
 int v1; // [xsp+8h] [xbp-8h]
 int r1; // [xsp+Ch] [xbp-4h]

 r1 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return r1 + v1 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1990 */
long long param_strlen(const char *str)
{
 return (unsigned int)strlen(str);
}


/* Function: call_strlen @ 0x19C0 */
int call_strlen()
{
 return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x19EC */
long long param_memcpy(void *dst, const void *src, size_t n)
{
 unsigned int na; // [xsp+8h] [xbp-18h]

 na = n;
 memcpy(dst, src, n);
 return na;
}


/* Function: call_memcpy @ 0x1A28 */
int call_memcpy()
{
 long long dst; // [xsp+8h] [xbp-38h] BYREF
 long long v2; // [xsp+10h] [xbp-30h]
 int v3; // [xsp+18h] [xbp-28h]
 __int128 src; // [xsp+20h] [xbp-20h] BYREF
 int v5; // [xsp+30h] [xbp-10h]

 src = xmmword_3D04;
 v5 = 50;
 dst = 0;
 v2 = 0;
 v3 = 0;
 param_memcpy(&dst, &src, 0x14u);
 return dst + v2 + v3;
}


/* Function: param_memcmp @ 0x1A88 */
long long param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v6; // [xsp+4h] [xbp-1Ch]

 v6 = memcmp(p1, p2, n);
 if ( v6 <= 0 )
 {
 if ( v6 < 0 )
 return (unsigned int)-1;
 else
 return 0;
 }
 else
 {
 return 1;
 }
}


/* Function: call_memcmp @ 0x1AF8 */
int call_memcmp()
{
 int v1; // [xsp+1Ch] [xbp-34h]
 long long v2; // [xsp+20h] [xbp-30h] BYREF
 int v3; // [xsp+28h] [xbp-28h]
 int arr2[3]; // [xsp+30h] [xbp-20h] BYREF
 int arr1[3]; // [xsp+40h] [xbp-10h] BYREF

 *(unsigned long long *)arr1 = 0x200000001LL;
 arr1[2] = 3;
 *(unsigned long long *)arr2 = 0x200000001LL;
 arr2[2] = 4;
 v2 = 0x200000001LL;
 v3 = 3;
 v1 = param_memcmp(arr1, arr2, 0xCu);
 return v1 + param_memcmp(arr1, &v2, 0xCu);
}


/* Function: param_printf @ 0x1BA0 */
long long param_printf(int x, const char *name)
{
 return (unsigned int)printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1BDC */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1C0C */
long long param_scanf(const char *input_str)
{
 int v2; // [xsp+8h] [xbp-18h] BYREF
 int v3; // [xsp+Ch] [xbp-14h] BYREF
 const char *v4; // [xsp+10h] [xbp-10h]

 v4 = input_str;
 if ( (unsigned int)sscanf(input_str, "%d,%d", &v3, &v2) == 2 )
 return (unsigned int)(v3 + v2);
 else
 return (unsigned int)-1;
}


/* Function: call_scanf @ 0x1C78 */
int call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x1C94 */
long long param_fopen_fclose(const char *filename)
{
 unsigned int v2; // [xsp+4h] [xbp-1Ch]
 FILE *stream; // [xsp+8h] [xbp-18h]

 stream = fopen(filename, "r");
 if ( stream )
 {
 v2 = fileno(stream);
 fclose(stream);
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_fopen_fclose @ 0x1D00 */
int call_fopen_fclose()
{
 if ( (int)param_fopen_fclose("/etc/passwd") < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1D38 */
int param_fread_fwrite(const char *tmpfile)
{
 size_t v1; // x0
 bool v4; // [xsp+Ch] [xbp-64h]
 size_t v5; // [xsp+20h] [xbp-50h]
 size_t n; // [xsp+28h] [xbp-48h]
 FILE *s; // [xsp+30h] [xbp-40h]
 char s1[32]; // [xsp+38h] [xbp-38h] BYREF
 const char *write_data; // [xsp+58h] [xbp-18h]
 const char *tmpfilea; // [xsp+60h] [xbp-10h]

 tmpfilea = tmpfile;
 write_data = "BinBench Test Data";
 s = fopen(tmpfile, "w+");
 if ( !s )
 return -1;
 v1 = strlen(write_data);
 n = fwrite(write_data, 1u, v1, s);
 if ( n == strlen(write_data) )
 {
 rewind(s);
 v5 = fread(s1, 1u, n, s);
 s1[v5] = 0;
 fclose(s);
 unlink(tmpfilea);
 v4 = 0;
 if ( v5 == n )
 v4 = strcmp(s1, write_data) == 0;
 if ( v4 )
 return 42;
 else
 return -3;
 }
 else
 {
 fclose(s);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x1E84 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1EA0 */
int param_malloc_free(size_t size)
{
 int v2; // [xsp+Ch] [xbp-24h]
 size_t i; // [xsp+10h] [xbp-20h]
 unsigned int *ptr; // [xsp+18h] [xbp-18h]

 ptr = malloc(4 * size);
 if ( !ptr )
 return -1;
 for ( i = 0; i < size; ++i )
 ptr[i] = 10 * i;
 v2 = *ptr + ptr[size - 1];
 free(ptr);
 return v2;
}


/* Function: call_malloc_free @ 0x1F68 */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x1F80 */
int param_memset(void *buffer, size_t size)
{
 size_t i; // [xsp+8h] [xbp-28h]
 int v4; // [xsp+14h] [xbp-1Ch]

 memset(buffer, 0, size);
 v4 = 0;
 for ( i = 0; i < size; ++i )
 v4 += *((unsigned char *)buffer + i);
 return v4;
}


/* Function: call_memset @ 0x2008 */
int call_memset()
{
 int i; // [xsp+4h] [xbp-2Ch]
 unsigned int buffer[10]; // [xsp+8h] [xbp-28h] BYREF

 for ( i = 0; i < 10; ++i )
 buffer[i] = 255;
 param_memset(buffer, 0x28u);
 return buffer[0] + buffer[9];
}


/* Function: param_strchr_strstr @ 0x2074 */
int param_strchr_strstr(const char *str, char ch, const char *substr)
{
 int v4; // [xsp+8h] [xbp-48h]
 int v5; // [xsp+10h] [xbp-40h]
 char *v6; // [xsp+20h] [xbp-30h]
 char *pos1; // [xsp+30h] [xbp-20h]

 pos1 = strchr(str, (unsigned char)ch);
 if ( pos1 )
 v5 = (unsigned int)pos1 - (unsigned int)str;
 else
 v5 = -1;
 v6 = strstr(str, substr);
 if ( v6 )
 v4 = (unsigned int)v6 - (unsigned int)str;
 else
 v4 = -1;
 return v5 + v4;
}


/* Function: call_strchr_strstr @ 0x212C */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x216C */
void test_standard_library_functions()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0
 unsigned int v9; // w0
 unsigned int v10; // w0
 unsigned int v11; // w0

 printf(asc_39AA);
 v0 = call_strcpy();
 printf(aLibL101D, v0);
 v1 = call_strcmp();
 printf(aLibL102D, v1);
 v2 = call_strlen();
 printf(aLibL103D, v2);
 v3 = call_memcpy();
 printf(aLibL104D, v3);
 v4 = call_memcmp();
 printf(aLibL105D, v4);
 v5 = call_printf();
 printf(aLibL106D, v5);
 v6 = call_scanf();
 printf(aLibL107D, v6);
 v7 = call_fopen_fclose();
 printf(aLibL108D, v7);
 v8 = call_fread_fwrite();
 printf(aLibL109D, v8);
 v9 = call_malloc_free();
 printf(aLibL110D, v9);
 v10 = call_memset();
 printf(aLibL111D, v10);
 v11 = call_strchr_strstr();
 printf(aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x2278 */
long long param_linux_syscall(const char *pathname)
{
 int v2; // [xsp+Ch] [xbp-14h]

 v2 = syscall(56, 4294967196LL, pathname, 0);
 if ( v2 >= 0 )
 {
 syscall(57, (unsigned int)v2);
 return (unsigned int)v2;
 }
 else
 {
 return (unsigned int)-*__errno_location();
 }
}


/* Function: call_linux_syscall @ 0x22F4 */
int call_linux_syscall()
{
 if ( (int)param_linux_syscall("/etc/passwd") < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_win32_api @ 0x232C */
int param_win32_api(const char *filename)
{
 struct stat v3; // [xsp+0h] [xbp-90h] BYREF
 const char *filenamea; // [xsp+80h] [xbp-10h]

 filenamea = filename;
 if ( stat(filename, &v3) < 0 )
 return -1;
 if ( v3.st_size <= 0 )
 return -2;
 else
 return 42;
}


/* Function: call_win32_api @ 0x238C */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x23A8 */
long long param_fork_exec(const char *prog, const char *arg)
{
 int stat_loc; // [xsp+10h] [xbp-20h] BYREF
 __pid_t pid; // [xsp+14h] [xbp-1Ch]
 const char *v5; // [xsp+18h] [xbp-18h]
 const char *proga; // [xsp+20h] [xbp-10h]

 proga = prog;
 v5 = arg;
 pid = fork();
 if ( pid >= 0 )
 {
 if ( !pid )
 {
 execl(proga, proga, v5, 0);
 _exit(127);
 }
 if ( waitpid(pid, &stat_loc, 0) >= 0 )
 {
 if ( (stat_loc & 0x7F) != 0 )
 return (unsigned int)-3;
 else
 return (stat_loc & 0xFF00) >> 8;
 }
 else
 {
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_fork_exec @ 0x2478 */
int call_fork_exec()
{
 if ( (unsigned int)param_fork_exec("/bin/true", 0) )
 return -1;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x24B4 */
int param_pipe_communication()
{
 size_t v0; // x0
 __WAIT_STATUS v1; // x0
 int fd; // [xsp+1Ch] [xbp-44h]
 ssize_t v5; // [xsp+20h] [xbp-40h]
 __pid_t v6; // [xsp+30h] [xbp-30h]
 char buffer[32]; // [xsp+34h] [xbp-2Ch] BYREF
 int pipefd[2]; // [xsp+54h] [xbp-Ch] BYREF

 if ( pipe(pipefd) < 0 )
 return -1;
 v6 = fork();
 if ( v6 < 0 )
 return -2;
 if ( !v6 )
 {
 close(pipefd[0]);
 fd = pipefd[1];
 v0 = strlen("HelloPipe");
 write(fd, "HelloPipe", v0);
 close(pipefd[1]);
 _exit(0);
 }
 close(pipefd[1]);
 v5 = read(pipefd[0], buffer, 0x1Fu);
 buffer[v5] = 0;
 close(pipefd[0]);
 wait(&v1.__i);
 if ( v5 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x25C8 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x25DC */
int param_socket_create()
{
 struct sockaddr v1; // [xsp+10h] [xbp-20h] BYREF
 int opt; // [xsp+24h] [xbp-Ch] BYREF
 int sock; // [xsp+28h] [xbp-8h]

 sock = socket(2, 1, 0);
 if ( sock < 0 )
 return -1;
 opt = 1;
 if ( setsockopt(sock, 1, 2, &opt, 4u) >= 0 )
 {
 *(unsigned long long *)&v1.sa_data[6] = 0;
 *(unsigned long long *)&v1.sa_family = 2;
 *(unsigned short *)v1.sa_data = htons(0);
 *(unsigned int *)&v1.sa_data[2] = 0;
 if ( bind(sock, &v1, 0x10u) >= 0 )
 {
 if ( listen(sock, 5) >= 0 )
 {
 close(sock);
 return 42;
 }
 else
 {
 close(sock);
 return -4;
 }
 }
 else
 {
 close(sock);
 return -3;
 }
 }
 else
 {
 close(sock);
 return -2;
 }
}


/* Function: call_socket_create @ 0x26FC */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2710 */
int param_shmget_shmat()
{
 int v1; // [xsp+4h] [xbp-2Ch]
 char *dest; // [xsp+8h] [xbp-28h]
 int shmid; // [xsp+14h] [xbp-1Ch]
 int key; // [xsp+18h] [xbp-18h]
 int fd; // [xsp+1Ch] [xbp-14h]

 fd = open("/tmp/binbench_shm", 66, 438);
 if ( fd < 0 )
 return -1;
 close(fd);
 key = ftok("/tmp/binbench_shm", 42);
 if ( key < 0 )
 return -1;
 shmid = shmget(key, 0x1000u, 950);
 if ( shmid < 0 )
 return -2;
 dest = (char *)shmat(shmid, 0, 0);
 if ( dest == (char *)-1LL )
 return -3;
 strcpy(dest, "SharedMemory");
 v1 = strlen(dest);
 shmdt(dest);
 shmctl(shmid, 0, 0);
 return v1;
}


/* Function: call_shmget_shmat @ 0x2844 */
int call_shmget_shmat()
{
 if ( param_shmget_shmat() <= 0 )
 return -1;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x2874 */
int param_signal_handling()
{
 int v0; // w8
 int v1; // w8
 bool v3; // [xsp+10h] [xbp-10h]
 bool v4; // [xsp+14h] [xbp-Ch]
 int attempts; // [xsp+18h] [xbp-8h]
 int attemptsa; // [xsp+18h] [xbp-8h]

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 return -1;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 return -2;
 signal_received = 0;
 raise(10);
 attempts = 1000;
 while ( 1 )
 {
 v4 = 0;
 if ( !signal_received )
 {
 v0 = attempts--;
 v4 = v0 > 0;
 }
 if ( !v4 )
 break;
 usleep(0x3E8u);
 }
 if ( !signal_received )
 return -3;
 if ( signal_number != 10 )
 return -4;
 signal_received = 0;
 alarm(1u);
 attemptsa = 2000;
 while ( 1 )
 {
 v3 = 0;
 if ( !signal_received )
 {
 v1 = attemptsa--;
 v3 = v1 > 0;
 }
 if ( !v3 )
 break;
 usleep(0x3E8u);
 }
 if ( !signal_received || signal_number != 14 )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: signal_handler @ 0x2A44 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: call_signal_handling @ 0x2A6C */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2A80 */
void test_system_calls()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0

 printf(asc_3B50);
 v0 = call_linux_syscall();
 printf(aSysL301D, v0);
 v1 = call_win32_api();
 printf(aSysL302D, v1);
 v2 = call_fork_exec();
 printf(aSysL303D, v2);
 v3 = call_pipe_communication();
 printf(aSysL304D, v3);
 v4 = call_socket_create();
 printf(aSysL305D, v4);
 v5 = call_shmget_shmat();
 printf(aSysL306D, v5);
 v6 = call_signal_handling();
 printf(aSysL307D, v6);
}


/* Function: thread_compute @ 0x2B28 */
void * thread_compute(void *arg)
{
 void *result; // x0
 int v2; // [xsp+8h] [xbp-18h]

 v2 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v2;
 return result;
}


/* Function: param_pthread_create @ 0x2B84 */
int param_pthread_create(int x)
{
 int v2; // [xsp+8h] [xbp-28h]
 void *thread_return; // [xsp+10h] [xbp-20h] BYREF
 int input; // [xsp+1Ch] [xbp-14h] BYREF
 pthread_t tid; // [xsp+20h] [xbp-10h] BYREF
 int xa; // [xsp+28h] [xbp-8h]

 xa = x;
 input = x;
 if ( pthread_create(&tid, 0, (void *(*)(void *))thread_compute, &input) )
 return -1;
 pthread_join(tid, &thread_return);
 v2 = *(unsigned int *)thread_return;
 free(thread_return);
 return v2;
}


/* Function: call_pthread_create @ 0x2C0C */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2C24 */
void * thread_sum(void *arg)
{
 int i; // [xsp+Ch] [xbp-14h]

 *((unsigned int *)arg + 2) = 0;
 for ( i = *(unsigned int *)arg; i <= *((unsigned int *)arg + 1); ++i )
 *((unsigned int *)arg + 2) += i;
 return 0;
}


/* Function: param_pthread_join @ 0x2C98 */
int param_pthread_join()
{
 int j; // [xsp+0h] [xbp-50h]
 int v2; // [xsp+4h] [xbp-4Ch]
 int i; // [xsp+8h] [xbp-48h]
 unsigned int s[9]; // [xsp+Ch] [xbp-44h] BYREF
 pthread_t tids[3]; // [xsp+30h] [xbp-20h] BYREF

 memset(s, 0, sizeof(s));
 s[0] = 1;
 s[1] = 10;
 s[3] = 11;
 s[4] = 20;
 s[6] = 21;
 s[7] = 30;
 for ( i = 0; i < 3; ++i )
 {
 if ( pthread_create(&tids[i], 0, (void *(*)(void *))thread_sum, &s[3 * i]) )
 return -1;
 }
 v2 = 0;
 for ( j = 0; j < 3; ++j )
 {
 if ( pthread_join(tids[j], 0) )
 return -2;
 v2 += s[3 * j + 2];
 }
 return v2;
}


/* Function: call_pthread_join @ 0x2DEC */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2E00 */
void * thread_increment(void *arg)
{
 int i; // [xsp+10h] [xbp-10h]
 int iterations; // [xsp+14h] [xbp-Ch]

 iterations = *(unsigned int *)arg;
 for ( i = 0; i < iterations; ++i )
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x2E8C */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 int j; // [xsp+10h] [xbp-20h]
 int i; // [xsp+14h] [xbp-1Ch]
 void *ptr; // [xsp+18h] [xbp-18h]
 int iterations_per_threada; // [xsp+24h] [xbp-Ch] BYREF
 int thread_counta; // [xsp+28h] [xbp-8h]

 thread_counta = thread_count;
 iterations_per_threada = iterations_per_thread;
 ptr = malloc(8LL * thread_count);
 if ( !ptr )
 return -1;
 shared_counter = 0;
 for ( i = 0; i < thread_counta; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_increment, &iterations_per_threada) )
 {
 free(ptr);
 return -2;
 }
 }
 for ( j = 0; j < thread_counta; ++j )
 pthread_join(*((unsigned long long *)ptr + j), 0);
 free(ptr);
 if ( shared_counter == thread_counta * iterations_per_threada )
 return 42;
 else
 return -3;
}


/* Function: call_mutex_lock @ 0x2FCC */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2FE8 */
void * consumer_thread(void *arg)
{
 void *result; // x0
 int received; // [xsp+14h] [xbp-Ch]

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 received = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *(unsigned int *)result = received;
 return result;
}


/* Function: producer_thread @ 0x3070 */
void * producer_thread(void *arg)
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x30D8 */
int param_condition_variable()
{
 int v1; // [xsp+Ch] [xbp-24h]
 void *thread_return; // [xsp+10h] [xbp-20h] BYREF
 pthread_t newthread; // [xsp+18h] [xbp-18h] BYREF
 pthread_t producer; // [xsp+20h] [xbp-10h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 return -1;
 if ( pthread_create(&producer, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(producer, 0);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 return v1;
 }
}


/* Function: call_condition_variable @ 0x319C */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x31B0 */
void * thread_atomic_increment(void *arg)
{
 int i; // [xsp+30h] [xbp-10h]
 int iterations; // [xsp+34h] [xbp-Ch]

 iterations = *(unsigned int *)arg;
 for ( i = 0; i < iterations; ++i )
 {
 _aarch64_ldadd4_acq_rel(1, &atomic_counter);
 _aarch64_cas4_acq_rel(0, 0, &atomic_counter);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x3298 */
void * thread_atomic_load_store(void *arg)
{
 unsigned int v1; // w8

 v1 = atomic_load(&atomic_counter);
 atomic_store(&atomic_counter, v1 + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x32D8 */
int param_atomic_ops(int thread_count, int iterations)
{
 unsigned int v2; // w8
 int v5; // [xsp+10h] [xbp-30h]
 int j; // [xsp+14h] [xbp-2Ch]
 pthread_t newthread; // [xsp+18h] [xbp-28h] BYREF
 int i; // [xsp+20h] [xbp-20h]
 int v9; // [xsp+24h] [xbp-1Ch]
 pthread_t *tids; // [xsp+28h] [xbp-18h]
 int iterationsa; // [xsp+34h] [xbp-Ch] BYREF
 int thread_counta; // [xsp+38h] [xbp-8h]

 thread_counta = thread_count;
 iterationsa = iterations;
 tids = (pthread_t *)malloc(8LL * thread_count);
 if ( !tids )
 return -1;
 v9 = 0;
 atomic_store(&atomic_counter, 0);
 for ( i = 0; i < thread_counta; ++i )
 {
 if ( pthread_create(&tids[i], 0, (void *(*)(void *))thread_atomic_increment, &iterationsa) )
 {
 free(tids);
 return -2;
 }
 }
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( j = 0; j < thread_counta; ++j )
 pthread_join(tids[j], 0);
 v2 = atomic_load((unsigned int *)&atomic_counter);
 v5 = v2;
 free(tids);
 if ( v5 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_atomic_ops @ 0x3458 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x3474 */
void * thread_tls_test(void *arg)
{
 unsigned long long StatusReg; // x8
 void *result; // x0
 unsigned int *v3; // [xsp+8h] [xbp-28h]
 int initial; // [xsp+1Ch] [xbp-14h]

 StatusReg = _ReadStatusReg(TPIDR_EL0);
 v3 = (unsigned int *)(StatusReg + 16);
 initial = *(unsigned int *)(StatusReg + 16);
 *(unsigned int *)(StatusReg + 16) = initial + 50;
 strncpy((char *)(StatusReg + 20), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = initial;
 *((unsigned int *)result + 1) = *v3;
 return result;
}


/* Function: param_thread_local_storage @ 0x3504 */
int param_thread_local_storage(int thread_count)
{
 bool v3; // [xsp+Ch] [xbp-54h]
 void *thread_return; // [xsp+28h] [xbp-38h] BYREF
 int k; // [xsp+30h] [xbp-30h]
 int total_final; // [xsp+34h] [xbp-2Ch]
 int total_initial; // [xsp+38h] [xbp-28h]
 int j; // [xsp+3Ch] [xbp-24h]
 int i_0; // [xsp+40h] [xbp-20h]
 int i; // [xsp+44h] [xbp-1Ch]
 char **names; // [xsp+48h] [xbp-18h]
 pthread_t *tids; // [xsp+50h] [xbp-10h]
 int thread_counta; // [xsp+58h] [xbp-8h]

 thread_counta = thread_count;
 tids = (pthread_t *)malloc(8LL * thread_count);
 names = (char **)malloc(8LL * thread_counta);
 if ( !tids || !names )
 return -1;
 for ( i = 0; i < thread_counta; ++i )
 {
 names[i] = (char *)malloc(0x10u);
 snprintf(names[i], 0x10u, "Thread-%d", i);
 }
 for ( i_0 = 0; i_0 < thread_counta; ++i_0 )
 {
 if ( pthread_create(&tids[i_0], 0, (void *(*)(void *))thread_tls_test, names[i_0]) )
 {
 for ( j = 0; j <= i_0; ++j )
 free(names[j]);
 free(names);
 free(tids);
 return -2;
 }
 }
 total_initial = 0;
 total_final = 0;
 for ( k = 0; k < thread_counta; ++k )
 {
 pthread_join(tids[k], &thread_return);
 total_initial += *(unsigned int *)thread_return;
 total_final += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(names[k]);
 }
 free(names);
 free(tids);
 v3 = 0;
 if ( total_initial == 100 * thread_counta )
 v3 = total_final == 150 * thread_counta;
 if ( v3 )
 return 42;
 else
 return -3;
}


/* Function: call_thread_local_storage @ 0x37A0 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x37B8 */
void test_thread_concurrency()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 printf(asc_3C3A);
 v0 = call_pthread_create();
 printf(aThrL301D, v0);
 v1 = call_pthread_join();
 printf(aThrL302D, v1);
 v2 = call_mutex_lock();
 printf(aThrL303D, v2);
 v3 = call_condition_variable();
 printf(aThrL304D, v3);
 v4 = call_atomic_ops();
 printf(aThrL305D, v4);
 v5 = call_thread_local_storage();
 printf(aThrL306D, v5);
}


/* Function: _aarch64_cas4_acq_rel @ 0x3880 */
unsigned int _aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3)
{
 unsigned int v4; // w16

 if ( _aarch64_have_lse_atomics )
 {
 atomic_compare_exchange_strong_explicit(a3, &result, a2, memory_order_acq_rel, memory_order_acq_rel);
 return result;
 }
 else
 {
 v4 = result;
 do
 result = __ldaxr((unsigned int *)a3);
 while ( result == v4 && __stlxr(a2, (unsigned int *)a3) );
 }
 return result;
}


/* Function: _aarch64_ldadd4_acq_rel @ 0x38C0 */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 long long result; // x0

 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 result = __ldaxr((unsigned int *)a2);
 while ( __stlxr(result + a1, (unsigned int *)a2) );
 return result;
}


/* Function: main @ 0x384C */
int main(int argc, const char **argv, const char **envp)
{
 /* Initialize LSE atomics detection before using atomic operations */
 init_have_lse_atomics();
 
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: .term_proc @ 0x38F0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x15358 */

/* FAILED to decompile: _exit @ 0x15360 */

/* FAILED to decompile: strlen @ 0x15368 */

/* FAILED to decompile: raise @ 0x15370 */

/* FAILED to decompile: __libc_start_main @ 0x15378 */

/* FAILED to decompile: execl @ 0x15380 */

/* FAILED to decompile: listen @ 0x15388 */

/* FAILED to decompile: shmdt @ 0x15390 */

/* FAILED to decompile: bind @ 0x15398 */

/* FAILED to decompile: __cxa_finalize @ 0x153A0 */

/* FAILED to decompile: pipe @ 0x153A8 */

/* FAILED to decompile: fork @ 0x153B0 */

/* FAILED to decompile: snprintf @ 0x153B8 */

/* FAILED to decompile: fileno @ 0x153C0 */

/* FAILED to decompile: signal @ 0x153C8 */

/* FAILED to decompile: fclose @ 0x153D0 */

/* FAILED to decompile: fopen @ 0x153D8 */

/* FAILED to decompile: malloc @ 0x153E0 */

/* FAILED to decompile: setsockopt @ 0x153E8 */

/* FAILED to decompile: open @ 0x153F0 */

/* FAILED to decompile: pthread_cond_signal @ 0x153F8 */

/* FAILED to decompile: memset @ 0x15400 */

/* FAILED to decompile: shmat @ 0x15408 */

/* FAILED to decompile: sleep @ 0x15410 */

/* FAILED to decompile: htons @ 0x15418 */

/* FAILED to decompile: rewind @ 0x15420 */

/* FAILED to decompile: close @ 0x15428 */

/* FAILED to decompile: stat_0 @ 0x15430 */

/* FAILED to decompile: write @ 0x15438 */

/* FAILED to decompile: __getauxval @ 0x15440 */

/* FAILED to decompile: abort @ 0x15448 */

/* FAILED to decompile: memcmp @ 0x15450 */

/* FAILED to decompile: strcmp @ 0x15458 */

/* FAILED to decompile: shmctl @ 0x15460 */

/* FAILED to decompile: fread @ 0x15468 */

/* FAILED to decompile: ftok @ 0x15470 */

/* FAILED to decompile: free @ 0x15478 */

/* FAILED to decompile: shmget @ 0x15480 */

/* FAILED to decompile: pthread_cond_wait @ 0x15488 */

/* FAILED to decompile: strchr @ 0x15490 */

/* FAILED to decompile: fwrite @ 0x15498 */

/* FAILED to decompile: pthread_create @ 0x154A0 */

/* FAILED to decompile: wait @ 0x154A8 */

/* FAILED to decompile: socket @ 0x154B0 */

/* FAILED to decompile: strcpy @ 0x154B8 */

/* FAILED to decompile: read @ 0x154C0 */

/* FAILED to decompile: strstr @ 0x154C8 */

/* FAILED to decompile: usleep @ 0x154D0 */

/* FAILED to decompile: __isoc99_sscanf @ 0x154D8 */

/* FAILED to decompile: strncpy @ 0x154E0 */

/* FAILED to decompile: printf @ 0x154E8 */

/* FAILED to decompile: __errno_location @ 0x154F0 */

/* FAILED to decompile: pthread_join @ 0x154F8 */

/* FAILED to decompile: alarm @ 0x15500 */

/* FAILED to decompile: pthread_cancel @ 0x15508 */

/* FAILED to decompile: pthread_mutex_lock @ 0x15510 */

/* FAILED to decompile: syscall @ 0x15518 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x15520 */

/* FAILED to decompile: waitpid @ 0x15528 */

/* FAILED to decompile: unlink @ 0x15530 */

/* FAILED to decompile: __gmon_start__ @ 0x15540 */

/* Total functions decompiled: 75, failed: 61 */
