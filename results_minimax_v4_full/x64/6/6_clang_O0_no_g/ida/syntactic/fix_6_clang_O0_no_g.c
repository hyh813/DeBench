/* Standard C includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <semaphore.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/syscall.h>
#include <arpa/inet.h>

/* Define bool type */
typedef int bool;
#define true 1
#define false 0

/* Global variables needed by the code */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
int ready = 0;
int data = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Format strings for printf statements */
const char *asc_50A6 = "===== Standard Library Function Tests =====\n";
const char *aLibL101D = "libl101: strcpy test: %d\n";
const char *aLibL102D = "libl102: strcmp test: %d\n";
const char *aLibL103D = "libl103: strlen test: %d\n";
const char *aLibL104D = "libl104: memcpy test: %d\n";
const char *aLibL105D = "libl105: memcmp test: %d\n";
const char *aLibL106D = "libl106: printf test: %d\n";
const char *aLibL107D = "libl107: scanf test: %d\n";
const char *aLibL108D = "libl108: fopen/fclose test: %d\n";
const char *aLibL109D = "libl109: fread/fwrite test: %d\n";
const char *aLibL110D = "libl110: malloc/free test: %d\n";
const char *aLibL111D = "libl111: memset test: %d\n";
const char *aLibL112D = "libl112: strchr/strstr test: %d\n";
const char *asc_524C = "===== System Call Tests =====\n";
const char *aSysL301D = "sysl301: linux syscall test: %d\n";
const char *aSysL302D = "sysl302: win32 api test: %d\n";
const char *aSysL303D = "sysl303: fork/exec test: %d\n";
const char *aSysL304D = "sysl304: pipe communication test: %d\n";
const char *aSysL305D = "sysl305: socket create test: %d\n";
const char *aSysL306D = "sysl306: shmget/shmat test: %d\n";
const char *aSysL307D = "sysl307: signal handling test: %d\n";
const char *asc_5336 = "===== Thread Concurrency Tests =====\n";
const char *aThrL301D = "thrl301: pthread_create test: %d\n";
const char *aThrL302D = "thrl302: pthread_join test: %d\n";
const char *aThrL303D = "thrl303: mutex lock test: %d\n";
const char *aThrL304D = "thrl304: condition variable test: %d\n";
const char *aThrL305D = "thrl305: atomic ops test: %d\n";
const char *aThrL306D = "thrl306: thread local storage test: %d\n";

/* External declarations */
extern void _gmon_start__(void);
long long (**_gmon_start_ptr)(void);

/* Forward declarations */
void signal_handler(int a1);

/* Atomic operation wrappers for Linux */
static inline int _InterlockedExchangeAdd(int *ptr, int val) {
    return __sync_fetch_and_add(ptr, val);
}

static inline int _InterlockedCompareExchange(int *ptr, int val, int comp) {
    return __sync_val_compare_and_swap(ptr, comp, val);
}

static inline int _InterlockedExchange(int *ptr, int val) {
    int old;
    do {
        old = *ptr;
    } while (__sync_val_compare_and_swap(ptr, old, val) != old);
    return old;
}

/* TLS equivalents using pthread */
static inline unsigned int __readfsdword(unsigned long off) {
    return (unsigned int)((uintptr_t)pthread_self() & 0xFF) + (unsigned int)(off & 0xFF);
}

static inline void __writefsdword(unsigned long off, unsigned int val) {
    (void)off;
    (void)val;
}

static inline unsigned long long __readfsqword(unsigned long off) {
    return (unsigned long long)(uintptr_t)pthread_self() + off;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_clang_O0_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( _gmon_start__ )
 {
   if (_gmon_start_ptr)
     return *_gmon_start_ptr;
 }
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_strcpy @ 0x24B0 */
size_t param_strcpy(char *a1, const char *a2)
{
 strcpy(a1, a2);
 return strlen(a1);
}


/* Function: call_strcpy @ 0x24E0 */
long long call_strcpy()
{
 char v1[32]; // [rsp+10h] [rbp-20h] BYREF

 return (unsigned int)param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x2510 */
long long param_strcmp(const char *a1, const char *a2)
{
 unsigned int v2; // eax
 int v5; // [rsp+Ch] [rbp-14h]

 v5 = strcmp(a1, a2);
 if ( v5 <= 0 )
 {
 v2 = 0;
 if ( v5 < 0 )
 return (unsigned int)-1;
 return v2;
 }
 else
 {
 return 1;
 }
}


/* Function: call_strcmp @ 0x2570 */
long long call_strcmp()
{
 int v1; // [rsp+8h] [rbp-8h]
 int v2; // [rsp+Ch] [rbp-4h]

 v2 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return (unsigned int)param_strcmp("bbb", "aaa") + v1 + v2;
}


/* Function: param_strlen @ 0x25D0 */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x2600 */
size_t call_strlen()
{
 return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x2630 */
size_t param_memcpy(void *a1, const void *a2, size_t a3)
{
 memcpy(a1, a2, a3);
 return a3;
}


/* Function: call_memcpy @ 0x2660 */
long long call_memcpy()
{
 unsigned char s[32]; // [rsp+0h] [rbp-40h] BYREF
 unsigned long long v2[2]; // [rsp+20h] [rbp-20h] BYREF
 int v3; // [rsp+30h] [rbp-10h]

 v2[0] = 0x140000000ULL;
 v2[1] = 0x280000001ULL;
 v3 = 50;
 memset(s, 0, 0x14u);
 param_memcpy(s, v2, 0x14u);
 return (unsigned int)(s[4] + s[2] + s[0]);
}


/* Function: param_memcmp @ 0x26C0 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 unsigned int v3; // eax
 int v6; // [rsp+4h] [rbp-1Ch]

 v6 = memcmp(a1, a2, a3);
 if ( v6 <= 0 )
 {
 v3 = 0;
 if ( v6 < 0 )
 return (unsigned int)-1;
 return v3;
 }
 else
 {
 return 1;
 }
}


/* Function: call_memcmp @ 0x2720 */
long long call_memcmp()
{
 int v1; // [rsp+8h] [rbp-28h]
 long long v2; // [rsp+Ch] [rbp-24h] BYREF
 int v3; // [rsp+14h] [rbp-1Ch]
 long long v4; // [rsp+18h] [rbp-18h] BYREF
 int v5; // [rsp+20h] [rbp-10h]
 long long v6; // [rsp+24h] [rbp-Ch] BYREF
 int v7; // [rsp+2Ch] [rbp-4h]

 v6 = 0x200000001LL;
 v7 = 3;
 v4 = 0x200000001LL;
 v5 = 4;
 v2 = 0x200000001LL;
 v3 = 3;
 v1 = param_memcmp(&v6, &v4, 0xCu);
 return (unsigned int)param_memcmp(&v6, &v2, 0xCu) + v1;
}


/* Function: param_printf @ 0x27A0 */
long long param_printf(int a1, const char *a2)
{
 return (unsigned int)printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x27D0 */
long long call_printf()
{
 return (unsigned int)param_printf(42, "Test");
}


/* Function: param_scanf @ 0x2800 */
long long param_scanf(long long a1)
{
 int v2; // [rsp+8h] [rbp-18h] BYREF
 int v3; // [rsp+Ch] [rbp-14h] BYREF
 long long v4; // [rsp+10h] [rbp-10h]

 v4 = a1;
 if ( (unsigned int)sscanf((const char *)a1, "%d,%d", &v3, &v2) == 2 )
 return (unsigned int)(v2 + v3);
 else
 return (unsigned int)-1;
}


/* Function: call_scanf @ 0x2860 */
long long call_scanf()
{
 return param_scanf((long long)"123,456");
}


/* Function: param_fopen_fclose @ 0x2880 */
long long param_fopen_fclose(const char *a1)
{
 unsigned int v2; // [rsp+4h] [rbp-1Ch]
 FILE *stream; // [rsp+8h] [rbp-18h]

 stream = fopen(a1, "r");
 if ( stream )
 {
 v2 = (unsigned int)(uintptr_t)fileno(stream);
 fclose(stream);
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_fopen_fclose @ 0x28E0 */
long long call_fopen_fclose()
{
 int v0; // edx
 long long result; // rax

 v0 = (int)param_fopen_fclose("/etc/passwd");
 result = 0xFFFFFFFFLL;
 if ( v0 >= 0 )
 return 42;
 return result;
}


/* Function: param_fread_fwrite @ 0x2910 */
long long param_fread_fwrite(char *a1)
{
 size_t v1; // rax
 unsigned int v2; // eax
 bool v4; // [rsp+7h] [rbp-69h]
 size_t v5; // [rsp+18h] [rbp-58h]
 size_t n; // [rsp+20h] [rbp-50h]
 FILE *stream; // [rsp+28h] [rbp-48h]
 char s1[40]; // [rsp+30h] [rbp-40h] BYREF
 char *s; // [rsp+58h] [rbp-18h]
 char *filename; // [rsp+60h] [rbp-10h]

 filename = a1;
 s = "BinBench Test Data";
 stream = fopen(a1, "w+");
 if ( stream )
 {
 v1 = strlen(s);
 n = fwrite(s, 1u, v1, stream);
 if ( n == strlen(s) )
 {
 rewind(stream);
 v5 = fread(s1, 1u, n, stream);
 s1[v5] = 0;
 fclose(stream);
 unlink(filename);
 v4 = 0;
 if ( v5 == n )
 v4 = strcmp(s1, s) == 0;
 v2 = -3;
 if ( v4 )
 return 42;
 return v2;
 }
 else
 {
 fclose(stream);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_fread_fwrite @ 0x2A40 */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2A60 */
long long param_malloc_free(unsigned long long a1)
{
 unsigned int v2; // [rsp+Ch] [rbp-24h]
 unsigned long long i; // [rsp+10h] [rbp-20h]
 unsigned int *ptr; // [rsp+18h] [rbp-18h]

 ptr = malloc(4 * a1);
 if ( ptr )
 {
 for ( i = 0; i < a1; ++i )
 ptr[i] = 10 * i;
 v2 = ptr[a1 - 1] + *ptr;
 free(ptr);
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_malloc_free @ 0x2B10 */
long long call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x2B20 */
long long param_memset(unsigned char *a1, size_t a2)
{
 size_t i; // [rsp+8h] [rbp-28h]
 unsigned int v4; // [rsp+14h] [rbp-1Ch]

 memset(a1, 0, a2);
 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += a1[i];
 return v4;
}


/* Function: call_memset @ 0x2B90 */
long long call_memset()
{
 int i; // [rsp+Ch] [rbp-34h]
 unsigned int v2[12]; // [rsp+10h] [rbp-30h] BYREF

 for ( i = 0; i < 10; ++i )
 v2[i] = 255;
 param_memset((unsigned char *)v2, 0x28u);
 return (unsigned int)(v2[9] + v2[0]);
}


/* Function: param_strchr_strstr @ 0x2BE0 */
long long param_strchr_strstr(const char *a1, char a2, const char *a3)
{
 int v4; // [rsp+8h] [rbp-48h]
 int v5; // [rsp+10h] [rbp-40h]
 char *v6; // [rsp+20h] [rbp-30h]
 char *v7; // [rsp+30h] [rbp-20h]

 v7 = strchr(a1, a2);
 if ( v7 )
 v5 = (unsigned int)v7 - (unsigned int)a1;
 else
 v5 = -1;
 v6 = strstr(a1, a3);
 if ( v6 )
 v4 = (unsigned int)v6 - (unsigned int)a1;
 else
 v4 = -1;
 return (unsigned int)(v4 + v5);
}


/* Function: call_strchr_strstr @ 0x2C90 */
long long call_strchr_strstr()
{
 return (unsigned int)param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x2CD0 */
int test_standard_library_functions()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned int v9; // eax
 unsigned int v10; // eax
 unsigned int v11; // eax

 printf(asc_50A6);
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
 return printf(aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x2DE0 */
long long param_linux_syscall(const char *a1)
{
  int v2; // [rsp+Ch] [rbp-14h]

  v2 = syscall(SYS_open, a1, O_RDONLY);
  if ( v2 >= 0 )
  {
    syscall(SYS_close, v2);
    return (unsigned int)v2;
  }
  else
  {
    return (unsigned int)(int)(-(*__errno_location()));
  }
}


/* Function: call_linux_syscall @ 0x2E40 */
long long call_linux_syscall()
{
 int v0; // edx
 long long result; // rax

 v0 = param_linux_syscall("/etc/passwd");
 result = 0xFFFFFFFFLL;
 if ( v0 >= 0 )
 return 42;
 return result;
}


/* Function: param_win32_api @ 0x2E70 */
long long param_win32_api(char *a1)
{
 unsigned int v1; // eax
 struct stat buf; // [rsp+0h] [rbp-A0h] BYREF
 char *file; // [rsp+90h] [rbp-10h]

 file = a1;
 if ( stat(a1, &buf) >= 0 )
 {
 v1 = -2;
 if ( buf.st_size > 0 )
 return 42;
 return v1;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_win32_api @ 0x2ED0 */
long long call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x2EF0 */
long long param_fork_exec(char *a1, const char *a2)
{
 int stat_loc; // [rsp+10h] [rbp-20h] BYREF
 __pid_t pid; // [rsp+14h] [rbp-1Ch]
 long long v5; // [rsp+18h] [rbp-18h]
 char *arg; // [rsp+20h] [rbp-10h]

 arg = a1;
 v5 = (long long)a2;
 pid = fork();
 if ( pid >= 0 )
 {
 if ( !pid )
 {
 execl(arg, arg, (char *)0);
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


/* Function: call_fork_exec @ 0x2FB0 */
long long call_fork_exec()
{
 int v0; // edx
 long long result; // rax

 v0 = param_fork_exec("/bin/true", (const char *)0);
 result = 0xFFFFFFFFLL;
 if ( !v0 )
 return 42;
 return result;
}


/* Function: param_pipe_communication @ 0x2FF0 */
long long param_pipe_communication()
{
 size_t v0; // rax
 unsigned int v1; // eax
 int fd; // [rsp+Ch] [rbp-54h]
 ssize_t v4; // [rsp+18h] [rbp-48h]
 __pid_t v5; // [rsp+2Ch] [rbp-34h]
 unsigned char v6[36]; // [rsp+30h] [rbp-30h] BYREF
 int pipedes[2]; // [rsp+54h] [rbp-Ch] BYREF

 if ( pipe(pipedes) >= 0 )
 {
 v5 = fork();
 if ( v5 >= 0 )
 {
 if ( !v5 )
 {
 close(pipedes[0]);
 fd = pipedes[1];
 v0 = strlen("HelloPipe");
 write(fd, "HelloPipe", v0);
 close(pipedes[1]);
 _exit(0);
 }
 close(pipedes[1]);
 v4 = read(pipedes[0], v6, 0x1Fu);
 v6[v4] = 0;
 close(pipedes[0]);
 wait(0);
 v1 = -3;
 if ( v4 > 0 )
 return 42;
 return v1;
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


/* Function: call_pipe_communication @ 0x30E0 */
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x30F0 */
long long param_socket_create()
{
 struct sockaddr s; // [rsp+0h] [rbp-20h] BYREF
 int optval; // [rsp+14h] [rbp-Ch] BYREF
 int fd; // [rsp+18h] [rbp-8h]

 fd = socket(2, 1, 0);
 if ( fd >= 0 )
 {
 optval = 1;
 if ( setsockopt(fd, 1, 2, &optval, 4u) >= 0 )
 {
 memset(&s, 0, sizeof(s));
 s.sa_family = 2;
 *(unsigned short *)s.sa_data = htons(0);
 *(unsigned int *)&s.sa_data[2] = 0;
 if ( bind(fd, &s, 0x10u) >= 0 )
 {
 if ( listen(fd, 5) >= 0 )
 {
 close(fd);
 return 42;
 }
 else
 {
 close(fd);
 return (unsigned int)-4;
 }
 }
 else
 {
 close(fd);
 return (unsigned int)-3;
 }
 }
 else
 {
 close(fd);
 return (unsigned int)-2;
 }
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_socket_create @ 0x3200 */
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x3210 */
long long param_shmget_shmat()
{
 unsigned int v1; // [rsp+4h] [rbp-2Ch]
 char *dest; // [rsp+8h] [rbp-28h]
 int shmid; // [rsp+14h] [rbp-1Ch]
 int key; // [rsp+18h] [rbp-18h]
 int fd; // [rsp+1Ch] [rbp-14h]

 fd = open("/tmp/binbench_shm", 66, 438);
 if ( fd >= 0 )
 {
 close(fd);
 key = ftok("/tmp/binbench_shm", 42);
 if ( key >= 0 )
 {
 shmid = shmget(key, 0x1000u, 950);
 if ( shmid >= 0 )
 {
 dest = (char *)(uintptr_t)shmat(shmid, 0, 0);
 if ( dest == (char *)(uintptr_t)-1 )
 {
 return (unsigned int)-3;
 }
 else
 {
 strcpy(dest, "SharedMemory");
 v1 = strlen(dest);
 shmdt((const void *)dest);
 shmctl(shmid, 0, 0);
 return v1;
 }
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
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_shmget_shmat @ 0x3320 */
long long call_shmget_shmat()
{
 int v0; // edx
 long long result; // rax

 v0 = param_shmget_shmat();
 result = 0xFFFFFFFFLL;
 if ( v0 > 0 )
 return 42;
 return result;
}


/* Function: param_signal_handling @ 0x3350 */
long long param_signal_handling()
{
 int v0; // eax
 int v1; // eax
 bool v3; // [rsp+6h] [rbp-Ah]
 bool v4; // [rsp+7h] [rbp-9h]
 int v5; // [rsp+8h] [rbp-8h]
 int v6; // [rsp+8h] [rbp-8h]

 if ( signal(10, signal_handler) == (__sighandler_t)-1LL )
 {
 return (unsigned int)-1;
 }
 else if ( signal(14, signal_handler) == (__sighandler_t)-1LL )
 {
 return (unsigned int)-2;
 }
 else
 {
 signal_received = 0;
 raise(10);
 v5 = 1000;
 while ( 1 )
 {
 v4 = 0;
 if ( !signal_received )
 {
 v0 = v5--;
 v4 = v0 > 0;
 }
 if ( !v4 )
 break;
 usleep(0x3E8u);
 }
 if ( signal_received )
 {
 if ( signal_number == 10 )
 {
 signal_received = 0;
 alarm(1u);
 v6 = 2000;
 while ( 1 )
 {
 v3 = 0;
 if ( !signal_received )
 {
 v1 = v6--;
 v3 = v1 > 0;
 }
 if ( !v3 )
 break;
 usleep(0x3E8u);
 }
 if ( signal_received && signal_number == 14 )
 {
 signal(10, 0);
 signal(14, 0);
 return 42;
 }
 else
 {
 return (unsigned int)-5;
 }
 }
 else
 {
 return (unsigned int)-4;
 }
 }
 else
 {
 return (unsigned int)-3;
 }
 }
}


/* Function: signal_handler @ 0x3510 */
void signal_handler(int a1)
{
 (void)a1;
 signal_received = 1;
 signal_number = a1;
}


/* Function: call_signal_handling @ 0x3530 */
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x3540 */
int test_system_calls()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax

 printf(asc_524C);
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
 return printf(aSysL307D, v6);
}


/* Function: thread_compute @ 0x35F0 */
unsigned int * thread_compute(unsigned int *a1)
{
 unsigned int *result; // rax
 int v2; // [rsp+8h] [rbp-18h]

 v2 = *a1 * *a1;
 result = (unsigned int *)(uintptr_t)malloc(4u);
 *result = v2;
 return result;
}


/* Function: param_pthread_create @ 0x3640 */
long long param_pthread_create(int a1)
{
 unsigned int v2; // [rsp+8h] [rbp-28h]
 void *thread_return; // [rsp+10h] [rbp-20h] BYREF
 int arg; // [rsp+1Ch] [rbp-14h] BYREF
 pthread_t newthread; // [rsp+20h] [rbp-10h] BYREF
 int v6; // [rsp+28h] [rbp-8h]

 v6 = a1;
 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 return (unsigned int)-1;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 v2 = *(unsigned int *)thread_return;
 free(thread_return);
 return v2;
 }
}


/* Function: call_pthread_create @ 0x36B0 */
long long call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x36C0 */
void * thread_sum(int *a1)
{
 int i; // [rsp+0h] [rbp-14h]

 a1[2] = 0;
 for ( i = *a1; i <= a1[1]; ++i )
 a1[2] += i;
 return 0;
}


/* Function: param_pthread_join @ 0x3720 */
long long param_pthread_join()
{
 int j; // [rsp+4h] [rbp-5Ch]
 unsigned int v2; // [rsp+8h] [rbp-58h]
 int i; // [rsp+Ch] [rbp-54h]
 unsigned int s[12]; // [rsp+10h] [rbp-50h] BYREF
 pthread_t th[3]; // [rsp+40h] [rbp-20h] BYREF

 memset(s, 0, 0x24u);
 s[0] = 1;
 s[1] = 10;
 s[3] = 11;
 s[4] = 20;
 s[6] = 21;
 s[7] = 30;
 for ( i = 0; i < 3; ++i )
 {
 if ( pthread_create(&th[i], 0, (void *(*)(void *))thread_sum, &s[3 * i]) )
 return (unsigned int)-1;
 }
 v2 = 0;
 for ( j = 0; j < 3; ++j )
 {
 if ( pthread_join(th[j], 0) )
 return (unsigned int)-2;
 v2 += s[3 * j + 2];
 }
 return v2;
}


/* Function: call_pthread_join @ 0x3840 */
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x3850 */
void * thread_increment(int *a1)
{
 int i; // [rsp+0h] [rbp-10h]
 int v3; // [rsp+4h] [rbp-Ch]

 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x38C0 */
long long param_mutex_lock(int a1, int a2)
{
 unsigned int v2; // eax
 int j; // [rsp+10h] [rbp-20h]
 int i; // [rsp+14h] [rbp-1Ch]
 void *ptr; // [rsp+18h] [rbp-18h]
 int arg; // [rsp+24h] [rbp-Ch] BYREF
 int v8; // [rsp+28h] [rbp-8h]

 v8 = a1;
 arg = a2;
 ptr = malloc(8LL * a1);
 if ( ptr )
 {
 shared_counter = 0;
 for ( i = 0; i < v8; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(ptr);
 return (unsigned int)-2;
 }
 }
 for ( j = 0; j < v8; ++j )
 pthread_join(*((unsigned long long *)ptr + j), 0);
 free(ptr);
 v2 = -3;
 if ( shared_counter == arg * v8 )
 return 42;
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_mutex_lock @ 0x39E0 */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x3A00 */
unsigned int * consumer_thread(void *a1)
{
 unsigned int *result; // rax
 int v2; // [rsp+14h] [rbp-Ch]

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v2 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v2;
 return result;
}


/* Function: producer_thread @ 0x3A80 */
void * producer_thread(void *a1)
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x3AE0 */
long long param_condition_variable()
{
 unsigned int v1; // [rsp+Ch] [rbp-24h]
 void *thread_return; // [rsp+10h] [rbp-20h] BYREF
 pthread_t newthread; // [rsp+18h] [rbp-18h] BYREF
 pthread_t th; // [rsp+20h] [rbp-10h] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 return (unsigned int)-1;
 }
 else if ( pthread_create(&th, 0, producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return (unsigned int)-2;
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


/* Function: call_condition_variable @ 0x3BA0 */
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x3BB0 */
void * thread_atomic_increment(signed int *a1)
{
 signed int i; // [rsp+1Eh] [rbp-10h]
 signed int v3; // [rsp+22h] [rbp-Ch]

 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
 _InterlockedExchangeAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, i + 1000, i);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x3C50 */
void * thread_atomic_load_store(void *a1)
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x3C80 */
long long param_atomic_ops(int a1, int a2)
{
 unsigned int v2; // eax
 int v4; // [rsp+10h] [rbp-30h]
 int j; // [rsp+14h] [rbp-2Ch]
 pthread_t newthread; // [rsp+18h] [rbp-28h] BYREF
 int i; // [rsp+20h] [rbp-20h]
 int v8; // [rsp+24h] [rbp-1Ch]
 void *ptr; // [rsp+28h] [rbp-18h]
 int arg; // [rsp+34h] [rbp-Ch] BYREF
 int v11; // [rsp+38h] [rbp-8h]

 v11 = a1;
 arg = a2;
 ptr = malloc(8LL * a1);
 if ( ptr )
 {
 v8 = 0;
 _InterlockedExchange(&atomic_counter, 0);
 for ( i = 0; i < v11; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(ptr);
 return (unsigned int)-2;
 }
 }
 if ( !pthread_create(&newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( j = 0; j < v11; ++j )
 {
   if ( pthread_join(((pthread_t *)ptr)[j], 0) )
     return (unsigned int)-3;
 }
 v4 = atomic_counter;
 free(ptr);
 v2 = -3;
 if ( v4 > 0 )
 return 42;
 return v2;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_atomic_ops @ 0x3DD0 */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x3DF0 */
unsigned int * thread_tls_test(const char *a1)
{
 unsigned int *result; // rax
 unsigned int v2; // [rsp+Ch] [rbp-14h]
 char *ptr; // [rsp+10h] [rbp-10h]

 v2 = __readfsdword(0xFFFFFFD0);
 __writefsdword(0xFFFFFFD0, v2 + 50);
 ptr = (char *)((unsigned long long)(uintptr_t)__readfsqword(0) - 32);
 strncpy(ptr, a1, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = __readfsdword(0xFFFFFFD0);
 return result;
}


/* Function: param_thread_local_storage @ 0x3E70 */
long long param_thread_local_storage(int a1)
{
 unsigned int v1; // eax
 bool v3; // [rsp+7h] [rbp-49h]
 void *thread_return; // [rsp+18h] [rbp-38h] BYREF
 int m; // [rsp+20h] [rbp-30h]
 int v6; // [rsp+24h] [rbp-2Ch]
 int v7; // [rsp+28h] [rbp-28h]
 int k; // [rsp+2Ch] [rbp-24h]
 int j; // [rsp+30h] [rbp-20h]
 int i; // [rsp+34h] [rbp-1Ch]
 void **ptr; // [rsp+38h] [rbp-18h]
 void **v12; // [rsp+40h] [rbp-10h]
 int v13; // [rsp+48h] [rbp-8h]

 v13 = a1;
 v12 = (void **)malloc(8LL * a1);
 ptr = (void **)malloc(8LL * a1);
 if ( v12 && ptr )
 {
 for ( i = 0; i < v13; ++i )
 {
 *((unsigned long long *)ptr + i) = malloc(0x10u);
 snprintf(*((char **)ptr + i), 0x10u, "Thread-%d", i);
 }
 for ( j = 0; j < v13; ++j )
 {
 if ( pthread_create((pthread_t *)v12 + j, 0, (void *(*)(void *))thread_tls_test, *((void **)ptr + j)) )
 {
 for ( k = 0; k <= j; ++k )
 free(*((void **)ptr + k));
 free(ptr);
 free(v12);
 return (unsigned int)-2;
 }
 }
 v7 = 0;
 v6 = 0;
 for ( m = 0; m < v13; ++m )
 {
 pthread_join(*((unsigned long long *)v12 + m), &thread_return);
 v7 += *(unsigned int *)thread_return;
 v6 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(*((void **)ptr + m));
 }
 free(ptr);
 free(v12);
 v3 = 0;
 if ( v7 == 100 * v13 )
 v3 = v6 == 150 * v13;
 v1 = -3;
 if ( v3 )
 return 42;
 return v1;
 }
 else
 {
 return (unsigned int)-1;
 }
}


/* Function: call_thread_local_storage @ 0x40B0 */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x40C0 */
int test_thread_concurrency()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 printf(asc_5336);
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
 return printf(aThrL306D, v5);
}


/* Function: main @ 0x4160 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: .term_proc @ 0x4188 */
void term_proc()
{
 ;
}


/* FAILED to decompile: raise @ 0x82D8 */

/* FAILED to decompile: free @ 0x82E0 */

/* FAILED to decompile: __libc_start_main @ 0x82E8 */

/* FAILED to decompile: __errno_location @ 0x82F0 */

/* FAILED to decompile: unlink @ 0x82F8 */

/* FAILED to decompile: strncpy @ 0x8300 */

/* FAILED to decompile: _exit @ 0x8308 */

/* FAILED to decompile: strcpy @ 0x8310 */

/* FAILED to decompile: fread @ 0x8318 */

/* FAILED to decompile: setsockopt @ 0x8320 */

/* FAILED to decompile: shmdt @ 0x8328 */

/* FAILED to decompile: write @ 0x8330 */

/* FAILED to decompile: pthread_cond_wait @ 0x8338 */

/* FAILED to decompile: fclose @ 0x8340 */

/* FAILED to decompile: strlen @ 0x8348 */

/* FAILED to decompile: htons @ 0x8350 */

/* FAILED to decompile: strchr @ 0x8358 */

/* FAILED to decompile: printf @ 0x8360 */

/* FAILED to decompile: rewind @ 0x8368 */

/* FAILED to decompile: snprintf @ 0x8370 */

/* FAILED to decompile: memset @ 0x8378 */

/* FAILED to decompile: alarm @ 0x8380 */

/* FAILED to decompile: close @ 0x8388 */

/* FAILED to decompile: pipe @ 0x8390 */

/* FAILED to decompile: read @ 0x8398 */

/* FAILED to decompile: memcmp @ 0x83A0 */

/* FAILED to decompile: pthread_cond_signal @ 0x83A8 */

/* FAILED to decompile: strcmp @ 0x83B0 */

/* FAILED to decompile: signal @ 0x83B8 */

/* FAILED to decompile: syscall @ 0x83C0 */

/* FAILED to decompile: stat @ 0x83C8 */

/* FAILED to decompile: memcpy @ 0x83D0 */

/* FAILED to decompile: fileno @ 0x83D8 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x83E0 */

/* FAILED to decompile: malloc @ 0x83E8 */

/* FAILED to decompile: __isoc99_sscanf @ 0x83F0 */

/* FAILED to decompile: listen @ 0x83F8 */

/* FAILED to decompile: bind @ 0x8400 */

/* FAILED to decompile: pthread_create @ 0x8408 */

/* FAILED to decompile: waitpid @ 0x8410 */

/* FAILED to decompile: open @ 0x8418 */

/* FAILED to decompile: shmctl @ 0x8420 */

/* FAILED to decompile: fopen @ 0x8428 */

/* FAILED to decompile: shmat @ 0x8430 */

/* FAILED to decompile: shmget @ 0x8438 */

/* FAILED to decompile: fwrite @ 0x8440 */

/* FAILED to decompile: ftok @ 0x8448 */

/* FAILED to decompile: pthread_join @ 0x8450 */

/* FAILED to decompile: execl @ 0x8458 */

/* FAILED to decompile: pthread_cancel @ 0x8460 */

/* FAILED to decompile: sleep @ 0x8468 */

/* FAILED to decompile: wait @ 0x8470 */

/* FAILED to decompile: fork @ 0x8478 */

/* FAILED to decompile: strstr @ 0x8480 */

/* FAILED to decompile: pthread_mutex_lock @ 0x8488 */

/* FAILED to decompile: usleep @ 0x8490 */

/* FAILED to decompile: socket @ 0x8498 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x84A0 */

/* FAILED to decompile: __gmon_start__ @ 0x84B0 */

/* Total functions decompiled: 71, failed: 59 */
