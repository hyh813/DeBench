/* Standard type definitions */
#include <stdint.h>
#include <stddef.h>

/* Standard library includes */
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
#include <fcntl.h>
#include <errno.h>
#include <sched.h>
#include <sys/auxv.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ipc.h>
#include <sys/shm.h>

/* BYTE1 macro - extracts the second byte from an integer */
#define BYTE1(x) (((unsigned int)(x) >> 8) & 0xFF)

/* Forward declarations */
extern int _aarch64_have_lse_atomics;
extern int __isoc99_sscanf(const char *str, const char *format, ...);
extern long long signal_handler(long long);
extern unsigned int __aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3);
extern long long __aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);
extern unsigned long long _ReadStatusReg(unsigned long long reg_id);
long long call_weak_fn(void);
extern long long test_standard_library_functions(void);
extern long long test_system_calls(void);
extern long long test_thread_concurrency(void);

/* String constants forward declarations */
const char asc_36EC[];
const char aLibL101D[];
const char aLibL102D[];
const char aLibL103D[];
const char aLibL104D[];
const char aLibL105D[];
const char aLibL106D[];
const char aLibL107D[];
const char aLibL108D[];
const char aLibL109D[];
const char aLibL110D[];
const char aLibL111D[];
const char aLibL112D[];

/* ARM64 register definitions */
#define TPIDR_EL0 0xDEAD

/* ARM64 intrinsic functions for atomic operations */
static inline unsigned int __ldaxr(volatile unsigned int *ptr) {
    unsigned int result;
    __asm__ __volatile__ ("ldaxr %w0, [%1]" : "=r" (result) : "r" (ptr) : "memory");
    return result;
}

static inline int __stlxr(unsigned int val, volatile unsigned int *ptr) {
    int result;
    __asm__ __volatile__ ("stlxr %w0, %w1, [%2]" : "=r" (result) : "r" (val), "r" (ptr) : "memory");
    return result;
}

#define LODWORD(x) ((unsigned int)(x))

/* JUMPOUT macro - used for unreachable code paths */
#define JUMPOUT(addr) ((void)0)

/* Function: .init_proc @ 0x12C8 */
long long init_proc()
{
 return call_weak_fn();
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




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x1854 */
size_t param_strcpy(char *a1, const char *a2)
{
 char *v2; // x0

 v2 = strcpy(a1, a2);
 return strlen(v2);
}


/* Function: call_strcpy @ 0x186C */
size_t call_strcpy()
{
 char v1[32]; // [xsp+0h] [xbp-20h] BYREF

 strcpy(v1, "HelloLib");
 return strlen(v1);
}


/* Function: param_strcmp @ 0x18A0 */
long long param_strcmp(const char *a1, const char *a2)
{
 int v2; // w0
 unsigned int v3; // w8

 v2 = strcmp(a1, a2);
 if ( v2 )
 v3 = -1;
 else
 v3 = 0;
 if ( v2 >= 1 )
 return 1;
 else
 return v3;
}


/* Function: call_strcmp @ 0x18C4 */
long long call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x18CC */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x18E0 */
long long call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x18E8 */
long long param_memcpy(void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // w19

 v3 = a3;
 memcpy(a1, a2, a3);
 return v3;
}


/* Function: call_memcpy @ 0x190C */
long long call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x1914 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // w0
 unsigned int v4; // w8

 v3 = memcmp(a1, a2, a3);
 if ( v3 )
 v4 = -1;
 else
 v4 = 0;
 if ( v3 >= 1 )
 return 1;
 else
 return v4;
}


/* Function: call_memcmp @ 0x1938 */
long long call_memcmp()
{
 return 0xFFFFFFFFLL;
}


/* Function: param_printf @ 0x1940 */
long long param_printf(int a1, const char *a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1964 */
long long call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x198C */
long long param_scanf(const char *a1)
{
 int v2; // [xsp+8h] [xbp-8h] BYREF
 int v3; // [xsp+Ch] [xbp-4h] BYREF

 if ( (unsigned int)__isoc99_sscanf(a1, "%d,%d", &v3, &v2) == 2 )
 return (unsigned int)(v2 + v3);
 else
 return 0xFFFFFFFFLL;
}


/* Function: call_scanf @ 0x19CC */
long long call_scanf()
{
 int v1; // [xsp+8h] [xbp-8h] BYREF
 int v2; // [xsp+Ch] [xbp-4h] BYREF

 if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", &v2, &v1) == 2 )
 return (unsigned int)(v1 + v2);
 else
 return 0xFFFFFFFFLL;
}


/* Function: param_fopen_fclose @ 0x1A14 */
long long param_fopen_fclose(const char *a1)
{
 FILE *v1; // x0
 FILE *v2; // x20
 unsigned int v3; // w19

 v1 = fopen(a1, "r");
 if ( v1 )
 {
 v2 = v1;
 v3 = fileno(v1);
 fclose(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: call_fopen_fclose @ 0x1A5C */
long long call_fopen_fclose()
{
 FILE *v0; // x0
 FILE *v1; // x19
 int v2; // w20

 v0 = fopen("/etc/passwd", "r");
 if ( !v0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 v2 = fileno(v0);
 fclose(v1);
 if ( v2 < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1AB4 */
long long param_fread_fwrite(const char *a1)
{
 FILE *v2; // x0
 FILE *v3; // x20
 size_t v4; // x22
 long long result; // x0
 long long v6; // [xsp+0h] [xbp-20h] BYREF
 unsigned long long v7[3]; // [xsp+8h] [xbp-18h]

 v2 = fopen(a1, "w+");
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v3 = v2;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v2) == 18 )
 {
 rewind(v3);
 v4 = fread(&v6, 1u, 0x12u, v3);
 *((unsigned char *)&v7[-1] + v4) = 0;
 fclose(v3);
 unlink(a1);
 result = 4294967293LL;
 if ( v4 == 18 )
 {
 if ( v6 ^ 0x68636E65426E6942LL | v7[0] ^ 0x6144207473655420LL | *(unsigned long long *)((char *)v7 + 3) ^ 0x61746144207473LL )
 return 4294967293LL;
 else
 return 42;
 }
 }
 else
 {
 fclose(v3);
 return 4294967294LL;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x1BD4 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1BF0 */
long long param_malloc_free(long long a1)
{
 unsigned int *v2; // x0
 int v3; // w8
 unsigned int *v4; // x9
 long long v5; // x10
 unsigned int v6; // w19

 v2 = malloc(4 * a1);
 if ( v2 )
 {
 if ( a1 )
 {
 v3 = 0;
 v4 = v2;
 v5 = a1;
 do
 {
 *v4++ = v3;
 --v5;
 v3 += 10;
 }
 while ( v5 );
 }
 v6 = v2[a1 - 1] + *v2;
 free(v2);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v6;
}


/* Function: call_malloc_free @ 0x1C58 */
long long call_malloc_free()
{
 unsigned int *v0; // x0
 int v1; // w8
 long long i; // x9
 unsigned int v3; // w19

 v0 = malloc(0x28u);
 if ( v0 )
 {
 v1 = 0;
 for ( i = 0; i != 10; ++i )
 {
 v0[i] = v1;
 v1 += 10;
 }
 v3 = v0[9] + *v0;
 free(v0);
 }
 else
 {
 return (unsigned int)-1;
 }
 return v3;
}


/* Function: param_memset @ 0x1CB4 */
long long param_memset(unsigned char *a1, size_t n)
{
 size_t v2; // x19
 unsigned char *v3; // x20
 long long result; // x0
 int v5; // t1

 v2 = n;
 v3 = a1;
 memset(a1, 0, n);
 for ( result = 0; v2; result = (unsigned int)(result + v5) )
 {
 v5 = *v3++;
 --v2;
 }
 return result;
}


/* Function: call_memset @ 0x1CF8 */
long long call_memset()
{
 long long i; // x8
 unsigned long long v2[2]; // [xsp+0h] [xbp-30h]

 for ( i = 0; i != 40; i += 4 )
 *(unsigned int *)((char *)v2 + i) = 255;
 return 0;
}


/* Function: param_strchr_strstr @ 0x1D34 */
long long param_strchr_strstr(const char *a1, unsigned char a2, const char *a3)
{
 char *v5; // x0
 int v6; // w21
 char *v7; // x0
 int v8; // w8

 v5 = strchr(a1, a2);
 if ( v5 )
 v6 = (unsigned int)v5 - (unsigned int)a1;
 else
 v6 = -1;
 v7 = strstr(a1, a3);
 v8 = (unsigned int)v7 - (unsigned int)a1;
 if ( !v7 )
 v8 = -1;
 return (unsigned int)(v8 + v6);
}


/* Function: call_strchr_strstr @ 0x1D8C */
long long call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x1D94 */
long long test_standard_library_functions()
{
 size_t v0; // x0
 unsigned int v1; // w19
 unsigned int v2; // w0
 long long v3; // x1
 FILE *v4; // x0
 FILE *v5; // x20
 int v6; // w19
 unsigned int v7; // w0
 unsigned int *v8; // x0
 int v9; // w8
 long long i; // x9
 unsigned int v11; // w19
 long long j; // x8
 char v14[32]; // [xsp+0h] [xbp-30h] BYREF
 long long v15; // [xsp+20h] [xbp-10h]
 int v16; // [xsp+4Ch] [xbp+1Ch] BYREF

 puts(asc_36EC);
 strcpy(v14, "HelloLib");
 v0 = strlen(v14);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = -1;
 printf(aLibL105D, 0xFFFFFFFFLL);
 v2 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v2);
 if ( (unsigned int)__isoc99_sscanf("123,456", "%d,%d", &v14, &v16) == 2 )
 v3 = (unsigned int)(v16 + *(unsigned int *)v14);
 else
 v3 = 0xFFFFFFFFLL;
 printf(aLibL107D, v3);
 v4 = fopen("/etc/passwd", "r");
 if ( v4 )
 {
 v5 = v4;
 v6 = fileno(v4);
 fclose(v5);
 if ( v6 < 0 )
 v1 = -1;
 else
 v1 = 42;
 }
 printf(aLibL108D, v1);
 v7 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v7);
 v8 = malloc(0x28u);
 if ( v8 )
 {
 v9 = 0;
 for ( i = 0; i != 10; ++i )
 {
 v8[i] = v9;
 v9 += 10;
 }
 v11 = v8[9] + *v8;
 free(v8);
 }
 else
 {
 v11 = -1;
 }
 printf(aLibL110D, v11);
 for ( j = 0; j != 40; j += 4 )
 *(unsigned int *)&v14[j] = 255;
 v15 = 0;
 *(unsigned long long *)v14 = 0u;
 printf(aLibL111D, 0);
 return printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x1FA0 */
long long param_linux_syscall(long long a1)
{
 unsigned int v1; // w19

 v1 = syscall(56, 4294967196LL, a1, 0);
 if ( (v1 & 0x80000000) != 0 )
 return (unsigned int)-*__errno_location();
 else
 syscall(57, v1);
 return v1;
}


/* Function: call_linux_syscall @ 0x1FF4 */
long long call_linux_syscall()
{
 int v0; // w19

 v0 = syscall(56, 4294967196LL, "/etc/passwd", 0);
 if ( v0 < 0 )
 v0 = -*__errno_location();
 else
 syscall(57, (unsigned int)v0);
 if ( v0 < 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_win32_api @ 0x2054 */
long long param_win32_api(const char *a1)
{
 int v1; // w0
 unsigned int v2; // w8
 struct stat _0; // [xsp+0h] [xbp-80h] BYREF

 v1 = stat(a1, &_0);
 if ( _0.st_size <= 0 )
 v2 = -2;
 else
 v2 = 42;
 if ( v1 < 0 )
 return 0xFFFFFFFFLL;
 else
 return v2;
}


/* Function: call_win32_api @ 0x2090 */
long long call_win32_api()
{
 int v0; // w0
 unsigned int v1; // w8
 struct stat _0; // [xsp+0h] [xbp-80h] BYREF

 v0 = stat("/etc/passwd", &_0);
 if ( _0.st_size <= 0 )
 v1 = -2;
 else
 v1 = 42;
 if ( v0 < 0 )
 return 0xFFFFFFFFLL;
 else
 return v1;
}


/* Function: param_fork_exec @ 0x20D4 */
long long param_fork_exec(const char *a1, long long a2)
{
 __pid_t v4; // w0
 int stat_loc; // [xsp+Ch] [xbp-4h] BYREF

 v4 = fork();
 if ( v4 < 0 )
 return 0xFFFFFFFFLL;
 if ( !v4 )
 {
 execl(a1, a1, a2, 0);
 _exit(127);
 }
 if ( waitpid(v4, &stat_loc, 0) < 0 )
 return 4294967294LL;
 if ( (stat_loc & 0x7F) != 0 )
 return 4294967293LL;
 return BYTE1(stat_loc);
}


/* Function: call_fork_exec @ 0x215C */
long long call_fork_exec()
{
 __pid_t v0; // w0
 int v1; // w8
 int stat_loc; // [xsp+Ch] [xbp-4h] BYREF

 v0 = fork();
 if ( v0 < 0 )
 {
 v1 = -1;
 }
 else
 {
 if ( !v0 )
 {
 execl("/bin/true", "/bin/true", 0, 0);
 _exit(127);
 }
 if ( waitpid(v0, &stat_loc, 0) < 0 )
 {
 v1 = -2;
 }
 else if ( (stat_loc & 0x7F) != 0 )
 {
 v1 = -3;
 }
 else
 {
 v1 = BYTE1(stat_loc);
 }
 }
 if ( v1 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Global variables */
int _aarch64_have_lse_atomics;
int ready;
int data;
int signal_received;
int signal_number;
int shared_counter;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
atomic_uint atomic_counter;

/* String constants */
const char asc_36EC[] = "Standard Library Functions Test\n";
const char aLibL101D[] = "strlen: %d\n";
const char aLibL102D[] = "strcmp: %d\n";
const char aLibL103D[] = "call_strlen: %d\n";
const char aLibL104D[] = "call_memcpy: %d\n";
const char aLibL105D[] = "param_printf: %d\n";
const char aLibL106D[] = "call_printf: %d\n";
const char aLibL107D[] = "param_scanf: %d\n";
const char aLibL108D[] = "call_fopen_fclose: %d\n";
const char aLibL109D[] = "param_fread_fwrite: %d\n";
const char aLibL110D[] = "call_malloc_free: %d\n";
const char aLibL111D[] = "param_memset: %d\n";
const char aLibL112D[] = "call_strchr_strstr: %d\n";
const char asc_3710[] = "System Calls Test\n";
const char aSysL301D[] = "param_linux_syscall: %d\n";
const char aSysL302D[] = "param_win32_api: %d\n";
const char aSysL303D[] = "param_fork_exec: %d\n";
const char aSysL304D[] = "param_pipe_communication: %d\n";
const char aSysL305D[] = "param_socket_create: %d\n";
const char aSysL306D[] = "param_shmget_shmat: %d\n";
const char aSysL307D[] = "param_signal_handling: %d\n";
const char asc_372B[] = "Thread Concurrency Test\n";
const char aThrL301D[] = "thread_compute: %d\n";
const char aThrL302D[] = "thread_sum: %d\n";
const char aThrL303D[] = "param_mutex_lock: %d\n";
const char aThrL304D[] = "param_condition_variable: %d\n";
const char aThrL305D[] = "param_atomic_ops: %d\n";
const char aThrL306D[] = "param_thread_local_storage: %d\n";

/* Function: param_pipe_communication @ 0x21E4 */
long long param_pipe_communication()
{
 __pid_t v0; // w0
 ssize_t v1; // x19
 int v2; // w0
 int *v3; // x0
 unsigned char buf[32]; // [xsp+8h] [xbp-28h] BYREF
 int pipedes[2]; // [xsp+28h] [xbp-8h] BYREF

 if ( pipe(pipedes) < 0 )
 return 0xFFFFFFFFLL;
 v0 = fork();
 if ( v0 < 0 )
 return 4294967294LL;
 if ( !v0 )
 {
 close(pipedes[0]);
 write(pipedes[1], "HelloPipe", 9u);
 close(pipedes[1]);
 _exit(0);
 }
 close(pipedes[1]);
 v1 = read(pipedes[0], buf, 0x1Fu);
 v2 = pipedes[0];
 buf[v1] = 0;
 close(v2);
 v3 = 0;
 wait(v3);
 if ( v1 <= 0 )
 return 4294967293LL;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x229C */
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x22B0 */
long long param_socket_create()
{
 int v0; // w0
 int v1; // w19
 int v2; // w20
 struct sockaddr addr; // [xsp+8h] [xbp-18h] BYREF
 int optval; // [xsp+1Ch] [xbp-4h] BYREF

 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return 0xFFFFFFFFLL;
 v1 = v0;
 optval = 1;
 if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
 {
 close(v1);
 return 4294967294LL;
 }
 else
 {
 *(unsigned long long *)&addr.sa_family = 2;
 *(unsigned long long *)&addr.sa_data[6] = 0;
 if ( bind(v1, &addr, 0x10u) < 0 )
 {
 close(v1);
 return 4294967293LL;
 }
 else
 {
 v2 = listen(v1, 5);
 close(v1);
 if ( v2 >= 0 )
 return 42;
 else
 return 4294967292LL;
 }
 }
}


/* Function: call_socket_create @ 0x2374 */
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x2388 */
long long param_shmget_shmat()
{
 int v0; // w0
 key_t v1; // w0
 int v2; // w0
 int v3; // w19
 char *v4; // x0
 char *v5; // x21
 unsigned int v6; // w20

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return (unsigned int)-1;
 close(v0);
 v1 = ftok("/tmp/binbench_shm", 42);
 if ( v1 < 0 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v2 = shmget(v1, 0x1000u, 950);
 if ( v2 < 0 )
 {
 return (unsigned int)-2;
 }
 else
 {
 v3 = v2;
 v4 = (char *)shmat(v2, 0, 0);
 if ( v4 == (char *)-1LL )
 {
 return (unsigned int)-3;
 }
 else
 {
 v5 = v4;
 strcpy(v4, "SharedMemory");
 v6 = strlen(v4);
 shmdt(v5);
 shmctl(v3, 0, 0);
 }
 }
 }
 return v6;
}


/* Function: call_shmget_shmat @ 0x2458 */
long long call_shmget_shmat()
{
 if ( (int)param_shmget_shmat() <= 0 )
 return 0xFFFFFFFFLL;
 else
 return 42;
}


/* Function: param_signal_handling @ 0x2478 */
long long param_signal_handling()
{
 unsigned int v0; // w20
 bool v1; // cc
 unsigned int v2; // w21
 bool v3; // cc

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 return 0xFFFFFFFFLL;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1LL )
 return 4294967294LL;
 signal_received = 0;
 raise(10);
 if ( !signal_received )
 {
 v0 = 1000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 v1 = 0;
 else
 v1 = v0 > 1;
 --v0;
 }
 while ( v1 );
 }
 if ( !signal_received )
 return 4294967293LL;
 if ( signal_number != 10 )
 return 4294967292LL;
 signal_received = 0;
 alarm(1u);
 if ( !signal_received )
 {
 v2 = 2000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 v3 = 0;
 else
 v3 = v2 > 1;
 --v2;
 }
 while ( v3 );
 }
 if ( !signal_received || signal_number != 14 )
 return 4294967291LL;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: signal_handler @ 0x25AC */
long long signal_handler(long long result)
{
 signal_received = 1;
 signal_number = result;
 return result;
}


/* Function: call_signal_handling @ 0x25C4 */
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x25D8 */
long long test_system_calls()
{
 int v0; // w19
 long long v1; // x1
 int v2; // w0
 unsigned int v3; // w8
 long long v4; // x1
 __pid_t v5; // w0
 int v6; // w8
 long long v7; // x1
 unsigned int v8; // w0
 unsigned int v9; // w0
 long long v10; // x1
 unsigned int v11; // w0
 struct stat v13; // [xsp+0h] [xbp-80h] BYREF

 puts(asc_3710);
 v0 = syscall(56, 4294967196LL, "/etc/passwd", 0);
 if ( v0 < 0 )
 v0 = -*__errno_location();
 else
 syscall(57, (unsigned int)v0);
 if ( v0 < 0 )
 v1 = 0xFFFFFFFFLL;
 else
 v1 = 42;
 printf(aSysL301D, v1);
 v2 = stat("/etc/passwd", &v13);
 if ( v13.st_size <= 0 )
 v3 = -2;
 else
 v3 = 42;
 if ( v2 < 0 )
 v4 = 0xFFFFFFFFLL;
 else
 v4 = v3;
 printf(aSysL302D, v4);
 v5 = fork();
 if ( v5 < 0 )
 {
 v6 = -1;
 }
 else
 {
 if ( !v5 )
 {
 execl("/bin/true", "/bin/true", 0, 0);
 _exit(127);
 }
 if ( waitpid(v5, (int *)&v13, 0) < 0 )
 {
 v6 = -2;
 }
 else if ( (v13.st_dev & 0x7F) != 0 )
 {
 v6 = -3;
 }
 else
 {
 v6 = BYTE1(v13.st_dev);
 }
 }
 if ( v6 )
 v7 = 0xFFFFFFFFLL;
 else
 v7 = 42;
 printf(aSysL303D, v7);
 v8 = param_pipe_communication();
 printf(aSysL304D, v8);
 v9 = param_socket_create();
 printf(aSysL305D, v9);
 if ( (int)param_shmget_shmat() <= 0 )
 v10 = 0xFFFFFFFFLL;
 else
 v10 = 42;
 printf(aSysL306D, v10);
 v11 = param_signal_handling();
 return printf(aSysL307D, v11);
}


/* Function: thread_compute @ 0x2758 */
unsigned int * thread_compute(unsigned int *a1)
{
 int v1; // w19
 unsigned int *result; // x0

 v1 = *a1 * *a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x2784 */
long long param_pthread_create(int a1)
{
 unsigned int v1; // w19
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 int arg; // [xsp+Ch] [xbp-4h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+18h] BYREF

 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 return (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, &ptr);
 v1 = *(unsigned int *)ptr;
 free(ptr);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x27E8 */
long long call_pthread_create()
{
 unsigned int v0; // w19
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 int arg; // [xsp+Ch] [xbp-4h] BYREF
 pthread_t newthread; // [xsp+28h] [xbp+18h] BYREF

 arg = 7;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 return (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, &ptr);
 v0 = *(unsigned int *)ptr;
 free(ptr);
 }
 return v0;
}


/* Function: thread_sum @ 0x2850 */
long long thread_sum(int *a1)
{
 int v1; // w8
 int v2; // w10

 v1 = *a1;
 v2 = a1[1];
 a1[2] = 0;
 if ( v2 >= v1 )
 a1[2] += v2 + (v2 - v1) * v1 + (((unsigned int)(v2 + ~v1) * (unsigned long long)(unsigned int)(v2 - v1)) >> 1);
 return 0;
}


/* Function: param_pthread_join @ 0x2890 */
long long param_pthread_join()
{
 long long v0; // x21
 long long *v1; // x19
 long long v2; // x20
 unsigned int v3; // w19
 int *v4; // x21
 int v5; // t1
 long long v7; // [xsp+0h] [xbp-40h] BYREF
 unsigned long long v8[3]; // [xsp+8h] [xbp-38h] BYREF
 int v9; // [xsp+20h] [xbp-20h]
 unsigned char v10[24]; // [xsp+28h] [xbp-18h] BYREF

 v0 = 0;
 v1 = &v7;
 v8[0] = 0xB00000000LL;
 v7 = 0xA00000001LL;
 v9 = 0;
 v8[1] = 20;
 v8[2] = 0x1E00000015LL;
 do
 {
 if ( pthread_create((pthread_t *)&v10[v0], 0, (void *(*)(void *))thread_sum, v1) )
 return (unsigned int)-1;
 v1 = (long long *)((char *)v1 + 12);
 v0 += 8;
 }
 while ( v0 != 24 );
 v2 = 0;
 v3 = 0;
 v4 = (int *)v8;
 while ( !pthread_join(*(unsigned long long *)&v10[v2], 0) )
 {
 v5 = *v4;
 v4 += 3;
 v2 += 8;
 v3 += v5;
 if ( v2 == 24 )
 return v3;
 }
 return (unsigned int)-2;
}


/* Function: call_pthread_join @ 0x2970 */
long long call_pthread_join()
{
 long long v0; // x21
 long long *v1; // x19
 long long v2; // x20
 unsigned int v3; // w19
 int *v4; // x21
 int v5; // t1
 long long v7; // [xsp+0h] [xbp-40h] BYREF
 unsigned long long v8[3]; // [xsp+8h] [xbp-38h] BYREF
 int v9; // [xsp+20h] [xbp-20h]
 unsigned char v10[24]; // [xsp+28h] [xbp-18h] BYREF

 v0 = 0;
 v1 = &v7;
 v8[0] = 0xB00000000LL;
 v7 = 0xA00000001LL;
 v9 = 0;
 v8[1] = 20;
 v8[2] = 0x1E00000015LL;
 do
 {
 if ( pthread_create((pthread_t *)&v10[v0], 0, (void *(*)(void *))thread_sum, v1) )
 return (unsigned int)-1;
 v0 += 8;
 v1 = (long long *)((char *)v1 + 12);
 }
 while ( v0 != 24 );
 v2 = 0;
 v3 = 0;
 v4 = (int *)v8;
 while ( !pthread_join(*(unsigned long long *)&v10[v2], 0) )
 {
 v5 = *v4;
 v4 += 3;
 v2 += 8;
 v3 += v5;
 if ( v2 == 24 )
 return v3;
 }
 return (unsigned int)-2;
}


/* Function: thread_increment @ 0x2A50 */
long long thread_increment(int *a1)
{
 int v1; // w20

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


/* Function: param_mutex_lock @ 0x2AB8 */
long long param_mutex_lock(int a1, int a2)
{
 pthread_t *v3; // x0
 pthread_t *v4; // x20
 long long v5; // x23
 long long v6; // x21
 pthread_t *v7; // x23
 pthread_t v8; // t1
 int arg; // [xsp+Ch] [xbp-4h] BYREF

 arg = a2;
 v3 = (pthread_t *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 shared_counter = 0;
 if ( a1 < 1 )
 {
LABEL_6:
 if ( a1 >= 1 )
 {
 v6 = (unsigned int)a1;
 v7 = v4;
 do
 {
 v8 = *v7++;
 pthread_join(v8, 0);
 --v6;
 }
 while ( v6 );
 }
 free(v4);
 if ( shared_counter == arg * a1 )
 return 42;
 else
 return 4294967293LL;
 }
 else
 {
 v5 = 0;
 while ( !pthread_create(&v4[v5], 0, (void *(*)(void *))thread_increment, &arg) )
 {
 if ( a1 == ++v5 )
 goto LABEL_6;
 }
 free(v4);
 return 4294967294LL;
 }
}


/* Function: call_mutex_lock @ 0x2BA8 */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2BC4 */
unsigned int *consumer_thread()
{
 int v0; // w19
 unsigned int *result; // x0

 pthread_mutex_lock(&cond_mutex);
 if ( (ready & 1) == 0 )
 {
 do
 pthread_cond_wait(&cond, &cond_mutex);
 while ( ready != 1 );
 }
 if ( data )
 v0 = 42;
 else
 v0 = 0;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v0;
 return result;
}


/* Function: producer_thread @ 0x2C50 */
long long producer_thread()
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x2CAC */
long long param_condition_variable()
{
 unsigned int v0; // w19
 void *ptr; // [xsp+0h] [xbp-10h] BYREF
 pthread_t newthread; // [xsp+8h] [xbp-8h] BYREF
 pthread_t th; // [xsp+28h] [xbp+18h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 return (unsigned int)-1;
 }
 else if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return (unsigned int)-2;
 }
 else
 {
 pthread_join(newthread, &ptr);
 pthread_join(th, 0);
 v0 = *(unsigned int *)ptr;
 free(ptr);
 }
 return v0;
}


/* Function: call_condition_variable @ 0x2D54 */
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x2D68 */
long long thread_atomic_increment(int *a1)
{
 int v1; // w21
 unsigned int v2; // w19

 v1 = *a1;
 if ( *a1 >= 1 )
 {
 v2 = 0;
 do
 {
 __aarch64_ldadd4_acq_rel(1, &atomic_counter);
 __aarch64_cas4_acq_rel(v2, v2 + 1000, &atomic_counter);
 ++v2;
 }
 while ( v2 != v1 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2DCC */
long long thread_atomic_load_store()
{
 long long result; // x0
 unsigned int v1; // w9

 result = 0;
 v1 = atomic_load(&atomic_counter);
 atomic_store(&atomic_counter, v1 + 100);
 return result;
}


/* Function: param_atomic_ops @ 0x2DE8 */
long long param_atomic_ops(int a1, int a2)
{
 long long v2; // x20
 pthread_t *v3; // x0
 pthread_t *v4; // x19
 long long v5; // x23
 pthread_t *v6; // x21
 pthread_t v7; // t1
 int v8; // w20
 pthread_t th; // [xsp+0h] [xbp-10h] BYREF
 int arg; // [xsp+Ch] [xbp-4h] BYREF

 v2 = a1;
 arg = a2;
 v3 = (pthread_t *)malloc(8LL * a1);
 if ( !v3 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 atomic_store(&atomic_counter, 0);
 if ( (int)v2 < 1 )
 {
LABEL_6:
 if ( !pthread_create(&th, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(th, 0);
 if ( (int)v2 >= 1 )
 {
 v2 = (unsigned int)v2;
 v6 = v4;
 do
 {
 v7 = *v6++;
 pthread_join(v7, 0);
 --v2;
 }
 while ( v2 );
 }
 v8 = atomic_load((unsigned int *)&atomic_counter);
 free(v4);
 if ( v8 <= 0 )
 return 4294967293LL;
 else
 return 42;
 }
 else
 {
 v5 = 0;
 while ( !pthread_create(&v4[v5], 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 if ( (unsigned int)v2 == ++v5 )
 goto LABEL_6;
 }
 free(v4);
 return 4294967294LL;
 }
}


/* Function: call_atomic_ops @ 0x2EFC */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x2F18 */
unsigned int * thread_tls_test(char *src)
{
 unsigned long long StatusReg; // x8
 int v2; // w19
 unsigned int *result; // x0

 StatusReg = _ReadStatusReg(TPIDR_EL0);
 v2 = *(unsigned int *)(StatusReg + 16);
 *(unsigned int *)(StatusReg + 16) = v2 + 50;
 strncpy((char *)(StatusReg + 20), src, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = v2 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x2F68 */
long long param_thread_local_storage(int a1)
{
 size_t v2; // x21
 pthread_t *v3; // x19
 void **v4; // x21
 long long result; // x0
 long long i; // x22
 char *v7; // x0
 long long v8; // x24
 pthread_t *v9; // x22
 int v11; // w23
 int v12; // w22
 long long v13; // x24
 pthread_t *v14; // x25
 void **v15; // x26
 pthread_t v16; // t1
 void *v17; // t1
 long long v18; // x20
 void *thread_return; // [xsp+8h] [xbp-8h] BYREF

 v2 = 8LL * a1;
 v3 = (pthread_t *)malloc(v2);
 v4 = (void **)malloc(v2);
 result = 0xFFFFFFFFLL;
 if ( v3 && v4 )
 {
 if ( a1 >= 1 )
 {
 for ( i = 0; i != a1; snprintf(v7, 0x10u, "Thread-%d", i++) )
 {
 v7 = (char *)malloc(0x10u);
 v4[i] = v7;
 }
 }
 if ( a1 < 1 )
 {
LABEL_10:
 if ( a1 < 1 )
 {
 v12 = 0;
 v11 = 0;
 }
 else
 {
 v11 = 0;
 v12 = 0;
 v13 = (unsigned int)a1;
 v14 = v3;
 v15 = v4;
 do
 {
 v16 = *v14++;
 pthread_join(v16, &thread_return);
 v12 += *(unsigned int *)thread_return;
 v11 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 v17 = *v15++;
 free(v17);
 --v13;
 }
 while ( v13 );
 }
 free(v4);
 free(v3);
 if ( v11 == 150 * a1 && v12 == 100 * a1 )
 return 42;
 else
 return 4294967293LL;
 }
 else
 {
 v8 = 0;
 v9 = v3;
 while ( !pthread_create(v9, 0, (void *(*)(void *))thread_tls_test, v4[v8++]) )
 {
 ++v9;
 if ( a1 == v8 )
 goto LABEL_10;
 }
 v18 = 0;
 do
 free(v4[v18++]);
 while ( v8 != v18 );
 free(v4);
 free(v3);
 return 4294967294LL;
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x310C */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3124 */
long long test_thread_concurrency()
{
 unsigned int v0; // w19
 long long v1; // x21
 pthread_t *v2; // x19
 long long v3; // x20
 unsigned int v4; // w19
 pthread_t *v5; // x21
 int v6; // t1
 unsigned int v7; // w0
 unsigned int v8; // w0
 unsigned int v9; // w0
 unsigned int v10; // w0
 int arg; // [xsp+Ch] [xbp-44h] BYREF
 pthread_t newthread[2]; // [xsp+10h] [xbp-40h] BYREF
 long long v14; // [xsp+20h] [xbp-30h]
 long long v15; // [xsp+28h] [xbp-28h]
 int v16; // [xsp+30h] [xbp-20h]
 void *thread_return[3]; // [xsp+38h] [xbp-18h] BYREF

 puts(asc_372B);
 arg = 7;
 if ( pthread_create(newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 v0 = -1;
 }
 else
 {
 pthread_join(newthread[0], thread_return);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 printf(aThrL301D, v0);
 v1 = 0;
 v2 = newthread;
 newthread[1] = 0xB00000000LL;
 newthread[0] = 0xA00000001LL;
 v16 = 0;
 v14 = 20;
 v15 = 0x1E00000015LL;
 do
 {
 if ( pthread_create((pthread_t *)&thread_return[v1], 0, (void *(*)(void *))thread_sum, v2) )
 {
 v4 = -1;
 goto LABEL_13;
 }
 ++v1;
 v2 = (pthread_t *)((char *)v2 + 12);
 }
 while ( v1 != 3 );
 v3 = 0;
 v4 = 0;
 v5 = &newthread[1];
 while ( !pthread_join((pthread_t)thread_return[v3], 0) )
 {
 v6 = *(unsigned int *)v5;
 v5 = (pthread_t *)((char *)v5 + 12);
 ++v3;
 v4 += v6;
 if ( v3 == 3 )
 goto LABEL_13;
 }
 v4 = -2;
LABEL_13:
 printf(aThrL302D, v4);
 v7 = param_mutex_lock(4, 1000);
 printf(aThrL303D, v7);
 v8 = param_condition_variable();
 printf(aThrL304D, v8);
 v9 = param_atomic_ops(4, 500);
 printf(aThrL305D, v9);
 v10 = param_thread_local_storage(4);
 return printf(aThrL306D, v10);
}


/* Function: main @ 0x32D4 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: __aarch64_cas4_acq_rel @ 0x3300 */
unsigned int __aarch64_cas4_acq_rel(unsigned int result, unsigned int a2, atomic_uint *a3)
{
 unsigned int v4; // w16

 if ( _aarch64_have_lse_atomics )
 {
 atomic_compare_exchange_strong(a3, &result, a2);
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


/* Function: __aarch64_ldadd4_acq_rel @ 0x3340 */
long long __aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 long long result; // x0

 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 result = __ldaxr((unsigned int *)a2);
 while ( __stlxr(result + a1, (unsigned int *)a2) );
 return result;
}


/* Function: .term_proc @ 0x3370 */
void term_proc()
{
 ;
}


/* Weak function stub - may be provided by CRT or linker */
__attribute__((weak)) long long call_weak_fn(void) { return 0; }

/* ReadStatusReg stub for TLS access */
unsigned long long _ReadStatusReg(unsigned long long reg_id)
{
    unsigned long long val;
    __asm__ __volatile__ ("mrs %0, tpidr_el0" : "=r" (val));
    return val;
}

/* External function declarations for standard library functions */
/* Note: Many standard functions are declared in stdio.h, stdlib.h, etc. */
/* Additional declarations that may be needed */
extern void *memcpy(void *dest, const void *src, size_t n);
extern void _exit(int status);
extern size_t strlen(const char *s);
extern int raise(int sig);
extern int execl(const char *path, const char *arg, ...);
extern int listen(int sockfd, int backlog);
extern int shmdt(const void *shmaddr);
extern int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
extern int pipe(int pipefd[2]);
extern pid_t fork(void);
extern int snprintf(char *s, size_t n, const char *format, ...);
extern int fileno(FILE *stream);
extern __sighandler_t signal(int signum, __sighandler_t handler);
extern int fclose(FILE *fp);
extern FILE *fopen(const char *filename, const char *mode);
extern void *malloc(size_t size);
extern int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
extern int open(const char *pathname, int flags, ...);
extern int pthread_cond_signal(pthread_cond_t *cond);
extern void *memset(void *s, int c, size_t n);
extern void *shmat(int shmid, const void *shmaddr, int shmflg);
extern unsigned int sleep(unsigned int seconds);
extern void rewind(FILE *stream);
extern int close(int fd);
extern int stat(const char *pathname, struct stat *statbuf);
extern ssize_t write(int fd, const void *buf, size_t count);
extern unsigned long getauxval(unsigned long type);
extern void abort(void);
extern int puts(const char *s);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern int strcmp(const char *s1, const char *s2);
extern int shmctl(int shmid, int cmd, struct shmid_ds *buf);
extern size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
extern key_t ftok(const char *pathname, int proj);
extern void free(void *ptr);
extern int shmget(key_t key, size_t size, int shmflg);
extern int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern char *strchr(const char *s, int c);
extern size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
extern int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
extern int socket(int domain, int type, int protocol);
extern char *strcpy(char *dest, const char *src);
extern ssize_t read(int fd, void *buf, size_t count);
extern char *strstr(const char *haystack, const char *needle);
extern int usleep(useconds_t usec);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int printf(const char *format, ...);
extern int *__errno_location(void);
extern int pthread_join(pthread_t thread, void **retval);
extern unsigned int alarm(unsigned int seconds);
extern int pthread_cancel(pthread_t thread);
extern int pthread_mutex_lock(pthread_mutex_t *mutex);
extern long syscall(long number, ...);
extern int pthread_mutex_unlock(pthread_mutex_t *mutex);
extern int unlink(const char *pathname);

/* Total functions decompiled: 75, failed: 61 */
