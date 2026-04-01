#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <stdarg.h>
#include <stdbool.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
#ifndef int64_t
typedef long long int64_t;
#endif


#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif

#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/6/6_clang_O3_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0xC3C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_C48 @ 0xC48 */
void sub_C48()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Data variables */
const char unk_2B00[12] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C};
const char unk_2B0C[12] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C};

const char *asc_2E66 = "=== Testing Standard Library Functions ===";
const char *aLibL101D = "LibL101: %d\n";
const char *aLibL102D = "LibL102: %d\n";
const char *aLibL103D = "LibL103: %d\n";
const char *aLibL104D = "LibL104: %d\n";
const char *aLibL105D = "LibL105: %d\n";
const char *aLibL106D = "LibL106: %d\n";
const char *aLibL107D = "LibL107: %d\n";
const char *aLibL108D = "LibL108: %d\n";
const char *aLibL109D = "LibL109: %d\n";
const char *aLibL110D = "LibL110: %d\n";
const char *aLibL111D = "LibL111: %d\n";
const char *aLibL112D = "LibL112: %d\n";

const char *asc_2E8A = "=== Testing System Calls ===";
const char *aSysL301D = "SysL301: %d\n";
const char *aSysL302D = "SysL302: %d\n";
const char *aSysL303D = "SysL303: %d\n";
const char *aSysL304D = "SysL304: %d\n";
const char *aSysL305D = "SysL305: %d\n";
const char *aSysL306D = "SysL306: %d\n";
const char *aSysL307D = "SysL307: %d\n";

const char *asc_2EA5 = "=== Testing Thread Concurrency ===";
const char *aThrL301D = "ThrL301: %d\n";
const char *aThrL302D = "ThrL302: %d\n";
const char *aThrL303D = "ThrL303: %d\n";
const char *aThrL304D = "ThrL304: %d\n";
const char *aThrL305D = "ThrL305: %d\n";
const char *aThrL306D = "ThrL306: %d\n";

/* Global variables for threading */
int shared_counter = 0;
int atomic_int_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int data = 0;
int ready = 0;
int signal_received = 0;
int signal_number = 0;
int unk_141C4 = 0;
char byte_141C8[32] = {0};

/* Function prototypes */
int JUMPOUT(int addr);
int call_weak_fn(void);
int *_errno_location(void);
int signal_handler(int sig);
int _atomic_compare_exchange_4(volatile void *ptr, void *expected, int desired, int success_memorder, int failure_memorder);
int _atomic_load_4(volatile void *ptr, int memorder);
int _atomic_fetch_add_4(volatile void *ptr, int value, int memorder);
void _atomic_store_4(volatile void *ptr, int value, int memorder);

/* Implement missing functions */
static inline int _isoc99_sscanf(const char *str, const char *fmt, ...)
{
    va_list args;
    int result;
    va_start(args, fmt);
    result = vsscanf(str, fmt, args);
    va_end(args);
    return result;
}

/* errno_location - returns address of errno */
int *_errno_location(void)
{
    return &errno;
}

/* CRT weak function stub */
int call_weak_fn(void)
{
    return 0;
}

/* Atomic store operation */
void _atomic_store_4(volatile void *ptr, int value, int memorder)
{
    __atomic_store_n((volatile int*)ptr, value, memorder);
}

/* Extract byte 1 (second byte) from an integer */
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* JUMPOUT - control flow helper for decompiled code */
int JUMPOUT(int addr)
{
    return addr;
}

/* Atomic operations using GCC builtins */
int _atomic_load_4(volatile void *ptr, int memorder)
{
    return __atomic_load_n((volatile int*)ptr, memorder);
}

int _atomic_fetch_add_4(volatile void *ptr, int value, int memorder)
{
    return __atomic_fetch_add((volatile int*)ptr, value, memorder);
}

int _atomic_compare_exchange_4(volatile void *ptr, void *expected, int desired, int success_memorder, int failure_memorder)
{
    return __atomic_compare_exchange_n((volatile int*)ptr, (int*)expected, desired, 0, success_memorder, failure_memorder);
}

/* Function: param_strcpy @ 0x10D8 */
size_t param_strcpy(char *a1, const char *a2)
{
 char *v2; // r0

 v2 = strcpy(a1, a2);
 return strlen(v2);
}


/* Function: call_strcpy @ 0x10E8 */
size_t call_strcpy()
{
 char v1[40]; // [sp+0h] [bp-28h] BYREF

 strcpy(v1, "HelloLib");
 return strlen(v1);
}


/* Function: param_strcmp @ 0x1124 */
int param_strcmp(const char *a1, const char *a2)
{
 int v2; // r0
 int v3; // r1

 v2 = strcmp(a1, a2);
 v3 = v2;
 if ( v2 )
 v3 = -1;
 if ( v2 >= 1 )
 return 1;
 return v3;
}


/* Function: call_strcmp @ 0x114C */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x1154 */
// attributes: thunk
size_t param_strlen(const char *s)
{
 return strlen(s);
}


/* Function: call_strlen @ 0x1158 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1160 */
size_t param_memcpy(void *a1, const void *a2, size_t a3)
{
 memcpy(a1, a2, a3);
 return a3;
}


/* Function: call_memcpy @ 0x1178 */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x1180 */
int param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // r0
 int v4; // r1

 v3 = memcmp(a1, a2, a3);
 v4 = v3;
 if ( v3 )
 v4 = -1;
 if ( v3 >= 1 )
 return 1;
 return v4;
}


/* Function: call_memcmp @ 0x11A8 */
int call_memcmp()
{
 int v0; // r0
 int v1; // r5
 int v2; // r0
 int v3; // r1

 v0 = memcmp(&unk_2B0C, &unk_2B00, 0xCu);
 v1 = v0;
 if ( v0 )
 v1 = -1;
 if ( v0 >= 1 )
 v1 = 1;
 v2 = memcmp(&unk_2B0C, &unk_2B0C, 0xCu);
 v3 = v2;
 if ( v2 )
 v3 = -1;
 if ( v2 >= 1 )
 v3 = 1;
 return v3 + v1;
}


/* Function: param_printf @ 0x1218 */
int param_printf(int a1, const char *a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1230 */
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x1250 */
int param_scanf(int a1)
{
 int v1; // r0
 int v2; // r1
 int v4; // [sp+0h] [bp-10h] BYREF
 int v5; // [sp+4h] [bp-Ch] BYREF

 v1 = _isoc99_sscanf(a1, "%d,%d", &v5, &v4);
 v2 = -1;
 if ( v1 == 2 )
 return v4 + v5;
 return v2;
}


/* Function: call_scanf @ 0x1294 */
int call_scanf()
{
 int v0; // r0
 int v1; // r1
 int v3; // [sp+0h] [bp-10h] BYREF
 int v4; // [sp+4h] [bp-Ch] BYREF

 v0 = _isoc99_sscanf("123,456", "%d,%d", &v4, &v3);
 v1 = -1;
 if ( v0 == 2 )
 return v3 + v4;
 return v1;
}


/* Function: param_fopen_fclose @ 0x12E4 */
int param_fopen_fclose(const char *a1)
{
 FILE *v1; // r0
 FILE *v3; // r4
 int v4; // r5

 v1 = fopen(a1, "r");
 if ( !v1 )
 return -1;
 v3 = v1;
 v4 = fileno(v1);
 fclose(v3);
 return v4;
}


/* Function: call_fopen_fclose @ 0x1328 */
int call_fopen_fclose()
{
 FILE *v0; // r0
 int result; // r0
 FILE *v2; // r4
 int v3; // r5

 v0 = fopen("/etc/passwd", "r");
 if ( !v0 )
 return -1;
 v2 = v0;
 v3 = fileno(v0);
 fclose(v2);
 result = -1;
 if ( v3 > -1 )
 return 42;
 return result;
}


/* Function: param_fread_fwrite @ 0x1380 */
int param_fread_fwrite(const char *a1)
{
 FILE *v2; // r0
 FILE *v3; // r5
 size_t v4; // r7
 int result; // r0
 int v6; // r1
 unsigned char v7[56]; // [sp+0h] [bp-38h] BYREF

 v2 = fopen(a1, "w+");
 if ( !v2 )
 return -1;
 v3 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v4 = fread(v7, 1u, 0x12u, v3);
 v7[v4] = 0;
 fclose(v3);
 unlink(a1);
 result = -3;
 if ( v4 == 18 )
 {
 v6 = bcmp(v7, "BinBench Test Data", 0x13u);
 result = -3;
 if ( !v6 )
 return 42;
 }
 }
 else
 {
 fclose(v3);
 return -2;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x1470 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1480 */
int param_malloc_free(int a1)
{
 int v1; // r5
 unsigned int *v3; // r0
 int v5; // r1
 unsigned int *v6; // r2
 int v7; // r3
 int v8; // r4

 v3 = malloc(4 * a1);
 if ( !v3 )
 return -1;
 if ( a1 )
 {
 v5 = 0;
 v6 = v3;
 v7 = a1;
 do
 {
 *v6++ = v5;
 v5 += 10;
 --v7;
 }
 while ( v7 );
 v1 = *v3;
 }
 v8 = v3[a1 - 1];
 free(v3);
 return v8 + v1;
}


/* Function: call_malloc_free @ 0x14E4 */
int call_malloc_free()
{
 return 90;
}


/* Function: param_memset @ 0x14EC */
int param_memset(unsigned char *a1, size_t n)
{
 size_t v2; // r4
 unsigned char *v3; // r5
 int v4; // r6
 int v5; // t1

 v2 = n;
 v3 = a1;
 v4 = 0;
 memset(a1, 0, n);
 if ( v2 )
 {
 v4 = 0;
 do
 {
 v5 = *v3++;
 --v2;
 v4 += v5;
 }
 while ( v2 );
 }
 return v4;
}


/* Function: call_memset @ 0x1530 */
int call_memset()
{
 return 0;
}


/* Function: param_strchr_strstr @ 0x1538 */
int param_strchr_strstr(const char *a1, int a2, const char *a3)
{
 char *v5; // r0
 int v6; // r6
 char *v7; // r0
 int v8; // r1

 v5 = strchr(a1, a2);
 v6 = v5 - a1;
 if ( !v5 )
 v6 = -1;
 v7 = strstr(a1, a3);
 v8 = v7 - a1;
 if ( !v7 )
 v8 = -1;
 return v8 + v6;
}


/* Function: call_strchr_strstr @ 0x1578 */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x1580 */
int test_standard_library_functions()
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r5
 int v3; // r0
 int v4; // r1
 int v5; // r0
 int v6; // r0
 int v7; // r1
 int v8; // r4
 FILE *v9; // r0
 FILE *v10; // r5
 int v11; // r6
 int v12; // r0
 char s[32]; // [sp+4h] [bp-34h] BYREF
 int v15; // [sp+24h] [bp-14h] BYREF

 puts(asc_2E66);
 strcpy(s, "HelloLib");
 v0 = strlen(s);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = memcmp(&unk_2B0C, &unk_2B00, 0xCu);
 v2 = v1;
 if ( v1 )
 v2 = -1;
 if ( v1 >= 1 )
 v2 = 1;
 v3 = memcmp(&unk_2B0C, &unk_2B0C, 0xCu);
 v4 = v3;
 if ( v3 )
 v4 = -1;
 if ( v3 >= 1 )
 v4 = 1;
 printf(aLibL105D, v4 + v2);
 v5 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v5);
 v6 = _isoc99_sscanf("123,456", "%d,%d", s, &v15);
 v7 = -1;
 v8 = -1;
 if ( v6 == 2 )
 v7 = v15 + *(unsigned int *)s;
 printf(aLibL107D, v7);
 v9 = fopen("/etc/passwd", "r");
 if ( v9 )
 {
 v10 = v9;
 v11 = fileno(v9);
 fclose(v10);
 v8 = -1;
 if ( v11 > -1 )
 v8 = 42;
 }
 printf(aLibL108D, v8);
 v12 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v12);
 printf(aLibL110D, 90);
 printf(aLibL111D, 0);
 return printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x17C8 */
int param_linux_syscall(int a1)
{
 int v1; // r0
 int v2; // r4

 v1 = syscall(5, a1, 0);
 if ( v1 <= -1 )
 return -*_errno_location();
 v2 = v1;
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x1818 */
int call_linux_syscall()
{
 int v0; // r0
 int v1; // r4
 int result; // r0

 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 <= -1 )
 {
 v1 = -*_errno_location();
 }
 else
 {
 v1 = v0;
 syscall(6, v0);
 }
 result = -1;
 if ( v1 > -1 )
 return 42;
 return result;
}


/* Function: param_win32_api @ 0x1870 */
int param_win32_api(const char *a1)
{
 int v1; // r0
 int v2; // r1
 struct stat v4; // [sp+0h] [bp-60h] BYREF

 v1 = stat(a1, &v4);
 v2 = -2;
 if ( v4.st_size > 0 )
 v2 = 42;
 if ( v1 <= -1 )
 return -1;
 return v2;
}


/* Function: call_win32_api @ 0x18A8 */
int call_win32_api()
{
 int v0; // r0
 int v1; // r1
 struct stat v3; // [sp+0h] [bp-60h] BYREF

 v0 = stat("/etc/passwd", &v3);
 v1 = -2;
 if ( v3.st_size > 0 )
 v1 = 42;
 if ( v0 <= -1 )
 return -1;
 return v1;
}


/* Function: param_fork_exec @ 0x18EC */
int param_fork_exec(const char *a1, int a2)
{
 int v4; // r0
 int result; // r0
 int stat_loc; // [sp+4h] [bp-14h] BYREF

 v4 = fork();
 if ( v4 < 0 )
 return -1;
 if ( !v4 )
 {
 execl(a1, a1, a2, 0);
 exit(127);
 }
 if ( waitpid(v4, &stat_loc, 0) < 0 )
 return -2;
 result = -3;
 if ( (stat_loc & 0x7F) == 0 )
 return BYTE1(stat_loc);
 return result;
}


/* Function: call_fork_exec @ 0x197C */
int call_fork_exec()
{
 int v0; // r0
 int v2; // r4
 int stat_loc; // [sp+4h] [bp-Ch] BYREF

 v0 = fork();
 if ( v0 < 0 )
 return -1;
 if ( !v0 )
 {
 execl("/bin/true", "/bin/true", 0, 0);
 exit(127);
 }
 if ( waitpid(v0, &stat_loc, 0) < 0 || (stat_loc & 0x7F) != 0 )
 return -1;
 v2 = -1;
 if ( (stat_loc & 0xFF00) == 0 )
 return 42;
 return v2;
}


/* Function: param_pipe_communication @ 0x1A08 */
int param_pipe_communication()
{
 __pid_t v0; // r0
 ssize_t v1; // r5
 int result; // r0
 unsigned char v3[32]; // [sp+0h] [bp-38h] BYREF
 int pipedes[2]; // [sp+20h] [bp-18h] BYREF

 if ( pipe(pipedes) < 0 )
 return -1;
 v0 = fork();
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(pipedes[0]);
 write(pipedes[1], "HelloPipe", 9u);
 close(pipedes[1]);
 exit(0);
 }
 close(pipedes[1]);
 v1 = read(pipedes[0], v3, 0x1Fu);
 v3[v1] = 0;
 close(pipedes[0]);
 wait(0);
 result = -3;
 if ( v1 > 0 )
 return 42;
 return result;
}


/* Function: call_pipe_communication @ 0x1AD0 */
// attributes: thunk
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x1AD4 */
int param_socket_create()
{
 int v0; // r0
 int v1; // r4
 int v2; // r5
 int result; // r0
 struct sockaddr addr; // [sp+4h] [bp-24h] BYREF
 int optval; // [sp+14h] [bp-14h] BYREF

 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return -1;
 v1 = v0;
 optval = 1;
 if ( setsockopt(v0, 1, 2, &optval, 4u) <= -1 )
 {
 close(v1);
 return -2;
 }
 else
 {
 *(unsigned int *)&addr.sa_family = 2;
 memset(&addr.sa_data[2], 0, 12);
 if ( bind(v1, &addr, 0x10u) <= -1 )
 {
 close(v1);
 return -3;
 }
 else
 {
 v2 = listen(v1, 5);
 close(v1);
 result = 42;
 if ( v2 < 0 )
 return -4;
 }
 }
 return result;
}


/* Function: call_socket_create @ 0x1BC4 */
// attributes: thunk
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x1BC8 */
int param_shmget_shmat()
{
 int v0; // r0
 int v1; // r4
 int v2; // r0
 int v3; // r4
 char *v4; // r0
 char *v5; // r5
 size_t v6; // r6
 key_t v7; // key for shared memory

 v0 = open("/tmp/binbench_shm", 66, 438);
 v1 = -1;
 if ( v0 < 0 )
 return v1;
 close(v0);
 v7 = ftok("/tmp/binbench_shm", 42);
 if ( v7 < 0 )
 return v1;
 v2 = shmget(v7, 1024, 0600 | IPC_CREAT);
 if ( v2 < 0 )
 return -2;
 v3 = v2;
 v4 = (char *)shmat(v3, 0, 0);
 if ( v4 == (char *)-1 )
 return -3;
 v5 = v4;
 strcpy(v4, "SharedMemory");
 v6 = strlen(v4);
 shmdt(v5);
 shmctl(v3, IPC_RMID, 0);
 return v6;
}


/* Function: call_shmget_shmat @ 0x1CAC */
int call_shmget_shmat()
{
 int v0; // r0
 int v1; // r1

 v0 = param_shmget_shmat();
 v1 = -1;
 if ( v0 > 0 )
 return 42;
 return v1;
}


/* Function: param_signal_handling @ 0x1CCC */
int param_signal_handling()
{
 int result; // r0
 unsigned int v1; // r5
 bool v2; // cc
 unsigned int v3; // r5

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -1;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -2;
 signal_received = 0;
 raise(10);
 if ( !signal_received )
 {
 v1 = 1000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 v2 = v1-- > 1;
 }
 while ( v2 );
 }
 if ( !signal_received )
 return -3;
 result = -4;
 if ( signal_number == 10 )
 {
 signal_received = 0;
 alarm(1u);
 if ( !signal_received )
 {
 v3 = 2000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 v2 = v3-- > 1;
 }
 while ( v2 );
 }
 result = -5;
 if ( signal_received )
 {
 if ( signal_number == 14 )
 {
 signal(10, 0);
 signal(14, 0);
 return 42;
 }
 }
 }
 return result;
}


/* Function: signal_handler @ 0x1E00 */
int signal_handler(int result)
{
 signal_received = 1;
 signal_number = result;
 return result;
}


/* Function: call_signal_handling @ 0x1E1C */
// attributes: thunk
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x1E20 */
int test_system_calls()
{
 int v0; // r0
 int v1; // r5
 int v2; // r1
 int v3; // r4
 int v4; // r0
 int v5; // r1
 int v6; // r0
 int v7; // r1
 int v8; // r0
 int v9; // r0
 int v10; // r0
 struct stat v12; // [sp+0h] [bp-68h] BYREF

 puts(asc_2E8A);
 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 <= -1 )
 {
 v1 = -*_errno_location();
 }
 else
 {
 v1 = v0;
 syscall(6, v0);
 }
 v2 = -1;
 v3 = -1;
 if ( v1 > -1 )
 v2 = 42;
 printf(aSysL301D, v2);
 v4 = stat("/etc/passwd", &v12);
 v5 = -2;
 if ( v12.st_size > 0 )
 v5 = 42;
 if ( v4 <= -1 )
 v5 = -1;
 printf(aSysL302D, v5);
 v6 = fork();
 v7 = -1;
 if ( v6 >= 0 )
 {
 if ( !v6 )
 {
 execl("/bin/true", "/bin/true", 0, 0);
 exit(127);
 }
 if ( waitpid(v6, (int *)&v12, 0) < 0 || (v12.st_dev & 0x7F) != 0 )
 {
 v7 = -1;
 }
 else
 {
 v7 = -1;
 if ( (v12.st_dev & 0xFF00) == 0 )
 v7 = 42;
 }
 }
 printf(aSysL303D, v7);
 v8 = param_pipe_communication();
 printf(aSysL304D, v8);
 v9 = param_socket_create();
 printf(aSysL305D, v9);
 if ( param_shmget_shmat() > 0 )
 v3 = 42;
 printf(aSysL306D, v3);
 v10 = param_signal_handling();
 return printf(aSysL307D, v10);
}


/* Function: thread_compute @ 0x1FC4 */
unsigned int * thread_compute(unsigned int *a1)
{
 int v1; // r4
 unsigned int *result; // r0

 v1 = *a1 * *a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x1FE4 */
int param_pthread_create(int a1)
{
 int v2; // r4
 void *thread_return; // [sp+4h] [bp-14h] BYREF
 int arg; // [sp+8h] [bp-10h] BYREF
 pthread_t newthread; // [sp+Ch] [bp-Ch] BYREF

 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(newthread, &thread_return);
 v2 = *(unsigned int *)thread_return;
 free(thread_return);
 return v2;
}


/* Function: call_pthread_create @ 0x2050 */
int call_pthread_create()
{
 int v1; // r4
 void *thread_return; // [sp+4h] [bp-14h] BYREF
 int arg; // [sp+8h] [bp-10h] BYREF
 pthread_t newthread; // [sp+Ch] [bp-Ch] BYREF

 arg = 7;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(newthread, &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 return v1;
}


/* Function: thread_sum @ 0x20C0 */
int thread_sum(unsigned int *a1)
{
 int v1; // r2

 a1[2] = 0;
 v1 = a1[1];
 if ( v1 >= *a1 )
 a1[2] = *a1
 + (v1 - *a1) * (*a1 + 1)
 + ((long long)((unsigned int)(v1 + ~*a1) * (unsigned long long)(unsigned int)(v1 - *a1)) >> 1);
 return 0;
}


/* Function: param_pthread_join @ 0x2110 */
int param_pthread_join()
{
 int v0; // r4
 int v2; // r5
 int v3; // r6
 unsigned int v4[2]; // [sp+0h] [bp-40h] BYREF
 int v5; // [sp+8h] [bp-38h]
 unsigned int v6[2]; // [sp+Ch] [bp-34h] BYREF
 int v7; // [sp+14h] [bp-2Ch]
 unsigned int v8[2]; // [sp+18h] [bp-28h] BYREF
 int v9; // [sp+20h] [bp-20h]
 pthread_t newthread; // [sp+24h] [bp-1Ch] BYREF
 pthread_t th; // [sp+28h] [bp-18h] BYREF
 pthread_t v12; // [sp+2Ch] [bp-14h] BYREF

 v9 = 0;
 v7 = 0;
 v5 = 0;
 v8[1] = 30;
 v8[0] = 21;
 v6[1] = 20;
 v6[0] = 11;
 v4[1] = 10;
 v4[0] = 1;
 v0 = -1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_sum, v4) )
 return v0;
 if ( pthread_create(&th, 0, (void *(*)(void *))thread_sum, v6) )
 return v0;
 if ( pthread_create(&v12, 0, (void *(*)(void *))thread_sum, v8) )
 return v0;
 v0 = -2;
 if ( pthread_join(newthread, 0) )
 return v0;
 v2 = v5;
 if ( pthread_join(th, 0) )
 return v0;
 v3 = v7;
 if ( !pthread_join(v12, 0) )
 return v9 + v3 + v2;
 return v0;
}


/* Function: call_pthread_join @ 0x2240 */
// attributes: thunk
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2244 */
int thread_increment(int *a1)
{
 int v1; // r5

 v1 = *a1;
 if ( *a1 >= 1 )
 {
 do
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 --v1;
 }
 while ( v1 );
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x229C */
int param_mutex_lock(int a1, int a2)
{
 void *v3; // r0
 void *v4; // r8
 pthread_t *v5; // r5
 int v6; // r4
 pthread_t *v7; // r4
 int v8; // r5
 pthread_t v9; // t1
 int result; // r0
 int arg; // [sp+4h] [bp-24h] BYREF

 arg = a2;
 v3 = malloc(4 * a1);
 if ( !v3 )
 return -1;
 v4 = v3;
 shared_counter = 0;
 if ( a1 >= 1 )
 {
 v5 = (pthread_t *)v3;
 v6 = a1;
 do
 {
 if ( pthread_create(v5, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(v4);
 return -2;
 }
 ++v5;
 --v6;
 }
 while ( v6 );
 v7 = (pthread_t *)v4;
 v8 = a1;
 do
 {
 v9 = *v7++;
 pthread_join(v9, 0);
 --v8;
 }
 while ( v8 );
 }
 free(v4);
 result = -3;
 if ( shared_counter == arg * a1 )
 return 42;
 return result;
}


/* Function: call_mutex_lock @ 0x2394 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x23A0 */
unsigned int *consumer_thread()
{
 int v0; // r5
 unsigned int *result; // r0

 pthread_mutex_lock(&cond_mutex);
 if ( !ready )
 {
 do
 pthread_cond_wait(&cond, &cond_mutex);
 while ( ready != 1 );
 }
 v0 = (unsigned char)data;
 pthread_mutex_unlock(&cond_mutex);
 if ( v0 )
 v0 = 42;
 result = malloc(4u);
 *result = v0;
 return result;
}


/* Function: producer_thread @ 0x240C */
int producer_thread()
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x2458 */
int param_condition_variable()
{
 int v1; // r4
 void *thread_return; // [sp+4h] [bp-14h] BYREF
 pthread_t newthread; // [sp+8h] [bp-10h] BYREF
 pthread_t th; // [sp+Ch] [bp-Ch] BYREF

 data = 0;
 ready = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 return -1;
 if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(th, 0);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 return v1;
 }
}


/* Function: call_condition_variable @ 0x2524 */
// attributes: thunk
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x2528 */
int thread_atomic_increment(int *a1)
{
 int v1; // r6
 int v2; // r7
 int v4; // [sp+4h] [bp-1Ch] BYREF

 v1 = *a1;
 if ( *a1 >= 1 )
 {
 v2 = 0;
 do
 {
 _atomic_fetch_add_4(&atomic_int_counter, 1, 5);
 v4 = v2;
 ((void ( *)(void *, int *, int, int, int))_atomic_compare_exchange_4)(
 &atomic_int_counter,
 &v4,
 v2 + 1000,
 5,
 5);
 ++v2;
 }
 while ( v2 != v1 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x259C */
int thread_atomic_load_store()
{
 int v0; // r0

 v0 = _atomic_load_4(&atomic_int_counter, 5);
 _atomic_store_4(&atomic_int_counter, v0 + 100, 5);
 return 0;
}


/* Function: param_atomic_ops @ 0x25D4 */
int param_atomic_ops(int a1, int a2)
{
 int v2; // r6
 pthread_t *v3; // r0
 pthread_t *v4; // r8
 pthread_t *v5; // r4
 int v6; // r5
 pthread_t *v7; // r4
 pthread_t v8; // t1
 int v9; // r4
 int result; // r0
 pthread_t th; // [sp+0h] [bp-28h] BYREF
 int arg; // [sp+4h] [bp-24h] BYREF

 v2 = a1;
 arg = a2;
 v3 = (pthread_t *)malloc(4 * a1);
 if ( !v3 )
 return -1;
 v4 = v3;
 _atomic_store_4(&atomic_int_counter, 0, 5);
 if ( v2 < 1 )
 {
LABEL_6:
 if ( !pthread_create(&th, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(th, 0);
 if ( v2 >= 1 )
 {
 v7 = v4;
 do
 {
 v8 = *v7++;
 pthread_join(v8, 0);
 --v2;
 }
 while ( v2 );
 }
 v9 = _atomic_load_4(&atomic_int_counter, 5);
 free(v4);
 result = -3;
 if ( v9 > 0 )
 return 42;
 }
 else
 {
 v5 = v4;
 v6 = v2;
 while ( !pthread_create(v5, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 ++v5;
 if ( !--v6 )
 goto LABEL_6;
 }
 free(v4);
 return -2;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x2708 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x2714 */
unsigned int * thread_tls_test(const char *a1)
{
 int v1; // r4
 unsigned int *result; // r0

 v1 = unk_141C4;
 unk_141C4 += 50;
 strncpy(byte_141C8, a1, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x275C */
int param_thread_local_storage(int a1)
{
 size_t v1; // r4
 int v2; // r10
 void *v3; // r8
 void *v4; // r11
 bool v5; // zf
 int result; // r0
 int i; // r4
 char *v8; // r0
 int v9; // r5
 pthread_t *v10; // r4
 int v11; // r9
 pthread_t *v12; // r5
 void **v13; // r6
 int v14; // r4
 pthread_t v15; // t1
 int v16; // r7
 int v17; // r8
 void *v18; // t1
 int v19; // r4
 int v20; // r5
 int v21; // [sp+0h] [bp-30h]
 void *ptr; // [sp+4h] [bp-2Ch]
 void *thread_return; // [sp+8h] [bp-28h] BYREF

 v1 = 4 * a1;
 v2 = a1;
 v3 = malloc(4 * a1);
 v4 = malloc(v1);
 v5 = v3 == 0;
 result = -1;
 if ( v3 )
 v5 = v4 == 0;
 if ( !v5 )
 {
 if ( v2 < 1 )
 {
 v21 = v2;
 ptr = v3;
 v14 = 0;
 v11 = 0;
LABEL_16:
 free(v4);
 free(ptr);
 result = -3;
 if ( !(v14 ^ (100 * v21) | v11 ^ (150 * v21)) )
 return 42;
 }
 else
 {
 for ( i = 0; i != v2; ++i )
 {
 v8 = (char *)malloc(0x10u);
 *((unsigned int *)v4 + i) = v8;
 snprintf(v8, 0x10u, "Thread-%d", i);
 }
 v9 = 0;
 v10 = (pthread_t *)v3;
 while ( !pthread_create(v10, 0, (void *(*)(void *))thread_tls_test, *((void **)v4 + v9)) )
 {
 ++v9;
 ++v10;
 if ( v2 == v9 )
 {
 ptr = v3;
 v21 = v2;
 v11 = 0;
 v12 = (pthread_t *)v3;
 v13 = (void **)v4;
 v14 = 0;
 do
 {
 v15 = *v12++;
 pthread_join(v15, &thread_return);
 v16 = *(unsigned int *)thread_return;
 v17 = *((unsigned int *)thread_return + 1);
 free(thread_return);
 v18 = *v13++;
 free(v18);
 v11 += v17;
 v14 += v16;
 --v2;
 }
 while ( v2 );
 goto LABEL_16;
 }
 }
 v19 = v9 + 1;
 v20 = 0;
 do
 free(*((void **)v4 + v20++));
 while ( v19 != v20 );
 free(v4);
 free(v3);
 return -2;
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x290C */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x2914 */
int test_thread_concurrency()
{
 int v0; // r4
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0
 void *thread_return; // [sp+4h] [bp-14h] BYREF
 int arg; // [sp+8h] [bp-10h] BYREF
 pthread_t newthread; // [sp+Ch] [bp-Ch] BYREF

 puts(asc_2EA5);
 arg = 7;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 pthread_join(newthread, &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 printf(aThrL301D, v0);
 v1 = param_pthread_join();
 printf(aThrL302D, v1);
 v2 = param_mutex_lock(4, 1000);
 printf(aThrL303D, v2);
 v3 = param_condition_variable();
 printf(aThrL304D, v3);
 v4 = param_atomic_ops(4, 500);
 printf(aThrL305D, v4);
 v5 = param_thread_local_storage(4);
 return printf(aThrL306D, v5);
}


/* Function: main @ 0x2A20 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */



/* Function: .term_proc @ 0x2A48 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_pthread_mutex_unlock @ 0x14208 */

/* FAILED to decompile: __imp_strstr @ 0x1420C */

/* FAILED to decompile: __imp_raise @ 0x14210 */

/* FAILED to decompile: __imp___libc_start_main @ 0x14214 */

/* FAILED to decompile: __imp_strcmp @ 0x14218 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x1421C */

/* FAILED to decompile: __imp_setsockopt @ 0x14220 */

/* FAILED to decompile: __imp_printf @ 0x14224 */

/* FAILED to decompile: __imp_fopen @ 0x14228 */

/* FAILED to decompile: __imp_read @ 0x1422C */

/* FAILED to decompile: __imp_free @ 0x14230 */

/* FAILED to decompile: __imp_pthread_mutex_lock @ 0x14234 */

/* FAILED to decompile: __imp__exit @ 0x14238 */

/* FAILED to decompile: __imp_memcpy @ 0x1423C */

/* FAILED to decompile: __imp___atomic_fetch_add_4 @ 0x14240 */

/* FAILED to decompile: __imp_shmget @ 0x14244 */

/* FAILED to decompile: __imp_signal @ 0x14248 */

/* FAILED to decompile: __imp_memcmp @ 0x1424C */

/* FAILED to decompile: __imp_sleep @ 0x14250 */

/* FAILED to decompile: __imp_rewind @ 0x14254 */

/* FAILED to decompile: __imp_alarm @ 0x14258 */

/* FAILED to decompile: __imp_unlink @ 0x1425C */

/* FAILED to decompile: __imp_wait @ 0x14260 */

/* FAILED to decompile: __imp_shmat @ 0x14264 */

/* FAILED to decompile: __imp_fwrite @ 0x14268 */

/* FAILED to decompile: __imp_usleep @ 0x1426C */

/* FAILED to decompile: __imp_waitpid @ 0x14270 */

/* FAILED to decompile: __imp_strcpy @ 0x14274 */

/* FAILED to decompile: __imp_fread @ 0x14278 */

/* FAILED to decompile: __imp_shmctl @ 0x1427C */

/* FAILED to decompile: __imp_puts @ 0x14280 */

/* FAILED to decompile: __imp_malloc @ 0x14284 */

/* FAILED to decompile: __imp___atomic_load_4 @ 0x14288 */

/* FAILED to decompile: __imp_stat @ 0x1428C */

/* FAILED to decompile: __imp_open @ 0x14290 */

/* FAILED to decompile: __imp_syscall @ 0x14294 */

/* FAILED to decompile: __imp_bcmp @ 0x14298 */

/* FAILED to decompile: __imp_strlen @ 0x1429C */

/* FAILED to decompile: __imp_strchr @ 0x142A0 */

/* FAILED to decompile: __imp___atomic_compare_exchange_4 @ 0x142A4 */

/* FAILED to decompile: __imp___errno_location @ 0x142A8 */

/* FAILED to decompile: __imp_snprintf @ 0x142AC */

/* FAILED to decompile: __imp___isoc99_sscanf @ 0x142B0 */

/* FAILED to decompile: __imp_bind @ 0x142B4 */

/* FAILED to decompile: __imp_memset @ 0x142B8 */

/* FAILED to decompile: __imp_strncpy @ 0x142BC */

/* FAILED to decompile: __imp_write @ 0x142C0 */

/* FAILED to decompile: __imp_fileno @ 0x142C4 */

/* FAILED to decompile: __imp_shmdt @ 0x142C8 */

/* FAILED to decompile: __imp_fclose @ 0x142CC */

/* FAILED to decompile: __imp_pipe @ 0x142D0 */

/* FAILED to decompile: __imp_pthread_create @ 0x142D4 */

/* FAILED to decompile: __imp_fork @ 0x142D8 */

/* FAILED to decompile: __imp_execl @ 0x142DC */

/* FAILED to decompile: __imp_listen @ 0x142E0 */

/* FAILED to decompile: __imp_ftok @ 0x142E4 */

/* FAILED to decompile: __imp___atomic_store_4 @ 0x142E8 */

/* FAILED to decompile: __imp_pthread_cond_wait @ 0x142EC */

/* FAILED to decompile: __imp_socket @ 0x142F0 */

/* FAILED to decompile: __imp_pthread_join @ 0x142F4 */

/* FAILED to decompile: __imp_pthread_cancel @ 0x142F8 */

/* FAILED to decompile: __imp_pthread_cond_signal @ 0x142FC */

/* FAILED to decompile: __imp_abort @ 0x14300 */

/* FAILED to decompile: __imp_close @ 0x14304 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1430C */

/* Total functions decompiled: 73, failed: 65 */
