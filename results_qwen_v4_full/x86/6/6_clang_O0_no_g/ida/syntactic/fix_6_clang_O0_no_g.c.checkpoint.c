/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;


typedef int __pid_t;
typedef int key_t;



/* ELF type definition */
typedef struct {
    int d_tag;
    union {
        unsigned int d_val;
        void *d_ptr;
    } d_un;
} Elf32_Dyn;

/* External declarations for undeclared identifiers */
extern void *_gmon_start__;
extern void (*frame_dummy)(void);
extern void _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
typedef void (*__sighandler_t)(int);
extern int signal_received;
extern int signal_number;
extern int atomic_counter;
extern int atomic_counter_2;
extern int data;
extern int ready;
extern unsigned int dword_0;
extern unsigned char byte_9[];
extern unsigned int unk_4404[];
extern int *__errno_location(void);
extern key_t ftok(const char *pathname, int proj_id);

/* Definitions for extern variables */
unsigned int dword_0 = 31;
unsigned char byte_9[] = {0, 0, 0, 0, 10, 0, 0, 0, 14, 0};
unsigned int unk_4404[] = {0x11223344, 0x55667788, 0x99AABBCC, 0xDDEEFF00, 0x12345678};
int signal_received = 0;
int signal_number = 0;
int data = 0;
int ready = 0;
int atomic_counter = 0;
int atomic_counter_2 = 0;
static char asc_40AA[] = "=== Standard Library Tests ===\n";
static char aLibL101D[] = "call_strcpy: %d\n";
static char aLibL102D[] = "call_strcmp: %d\n";
static char aLibL103D[] = "call_strlen: %d\n";
static char aLibL104D[] = "call_memcpy: %d\n";
static char aLibL105D[] = "call_memcmp: %d\n";
static char aLibL106D[] = "call_printf: %d\n";
static char aLibL107D[] = "call_scanf: %d\n";
static char aLibL108D[] = "call_fopen_fclose: %d\n";
static char aLibL109D[] = "call_fread_fwrite: %d\n";
static char aLibL110D[] = "call_malloc_free: %d\n";
static char aLibL111D[] = "call_memset: %d\n";
static char aLibL112D[] = "call_strchr_strstr: %d\n";
static char asc_4250[] = "=== System Call Tests ===\n";
static char aSysL301D[] = "call_linux_syscall: %d\n";
static char aSysL302D[] = "call_win32_api: %d\n";
static char aSysL303D[] = "call_fork_exec: %d\n";
static char aSysL304D[] = "call_pipe_communication: %d\n";
static char aSysL305D[] = "call_socket_create: %d\n";
static char aSysL306D[] = "call_shmget_shmat: %d\n";
static char aSysL307D[] = "call_signal_handling: %d\n";
static char asc_433A[] = "=== Thread/Concurrency Tests ===\n";
static char aThrL301D[] = "call_pthread_create: %d\n";
static char aThrL302D[] = "call_pthread_join: %d\n";
static char aThrL303D[] = "call_mutex_lock: %d\n";
static char aThrL304D[] = "call_condition_variable: %d\n";
static char aThrL305D[] = "call_atomic_ops: %d\n";
static char aThrL306D[] = "call_thread_local_storage: %d\n";
extern Elf32_Dyn *GLOBAL_OFFSET_TABLE_[];

/* Forward declarations */
extern void signal_handler(int a1);

/* GCC built-in declarations for GS segment access */
extern unsigned int __readgsdword(unsigned int offset);
extern void __writegsdword(unsigned int offset, unsigned int value);

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/syscall.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
/* External declarations for pthread types (must come after pthread.h include) */
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
#include <errno.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdint.h>
#include <stddef.h>
#include <time.h>
#include <stdbool.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_clang_O0_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
}


/* Function: sub_13D0 @ 0x13D0 */
int sub_13D0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_140C @ 0x140C */
void sub_140C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1410 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1549 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x154D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_strcpy @ 0x1560 */
size_t param_strcpy(char *a1, const char *a2)
{
 strcpy(a1, a2);
 return strlen(a1);
}


/* Function: call_strcpy @ 0x15B0 */
size_t call_strcpy()
{
 char v1[36]; // [esp+14h] [ebp-24h] BYREF

 return param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x15F0 */
int param_strcmp(const char *a1, const char *a2)
{
 int v2; // eax
 int v5; // [esp+10h] [ebp-8h]

 v5 = strcmp(a1, a2);
 if ( v5 > 0 )
 return 1;
 v2 = 0;
 if ( v5 < 0 )
 return -1;
 return v2;
}


/* Function: call_strcmp @ 0x1660 */
int call_strcmp()
{
 int v1; // [esp+1Ch] [ebp-Ch]
 int v2; // [esp+20h] [ebp-8h]

 v2 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return param_strcmp("bbb", "aaa") + v1 + v2;
}


/* Function: param_strlen @ 0x16E0 */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x1710 */
size_t call_strlen()
{
 return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x1740 */
size_t param_memcpy(void *dest, void *src, size_t n)
{
 memcpy(dest, src, n);
 return n;
}


/* Function: call_memcpy @ 0x1780 */
int call_memcpy()
{
 unsigned int s[5]; // [esp+1Ch] [ebp-2Ch] BYREF
 unsigned char dest[24]; // [esp+30h] [ebp-18h] BYREF

 memcpy(dest, &unk_4404, 0x14u);
 memset(s, 0, sizeof(s));
 param_memcpy(s, dest, 0x14u);
 return s[4] + s[2] + s[0];
}


/* Function: param_memcmp @ 0x1800 */
int param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // eax
 int v6; // [esp+1Ch] [ebp-Ch]

 v6 = memcmp(a1, a2, a3);
 if ( v6 > 0 )
 return 1;
 v3 = 0;
 if ( v6 < 0 )
 return -1;
 return v3;
}


/* Function: call_memcmp @ 0x1870 */
int call_memcmp()
{
 int v1; // [esp+1Ch] [ebp-2Ch]
 unsigned int v2[3]; // [esp+20h] [ebp-28h] BYREF
 unsigned int v3[3]; // [esp+2Ch] [ebp-1Ch] BYREF
 unsigned int v4[4]; // [esp+38h] [ebp-10h] BYREF

 v4[0] = 1;
 v4[1] = 2;
 v4[2] = 3;
 v3[0] = 1;
 v3[1] = 2;
 v3[2] = 4;
 v2[0] = 1;
 v2[1] = 2;
 v2[2] = 3;
 v1 = param_memcmp(v4, v3, 0xCu);
 return param_memcmp(v4, v2, 0xCu) + v1;
}


/* Function: param_printf @ 0x1920 */
int param_printf(int a1, int a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1970 */
int call_printf()
{
 return param_printf(42, (int)"Test");
}


/* Function: param_scanf @ 0x19B0 */
int param_scanf(const char *a1)
{
 int v2; // [esp+14h] [ebp-14h] BYREF
 int v3; // [esp+18h] [ebp-10h] BYREF

 if ( sscanf(a1, "%d,%d", &v3, &v2) == 2 )
 return v2 + v3;
 else
 return -1;
}


/* Function: call_scanf @ 0x1A20 */
int call_scanf()
{
 return param_scanf("123,456");
}


/* Function: param_fopen_fclose @ 0x1A50 */
int param_fopen_fclose(char *filename)
{
 int v2; // [esp+18h] [ebp-10h]
 FILE *stream; // [esp+1Ch] [ebp-Ch]

 stream = fopen(filename, "r");
 if ( !stream )
 return -1;
 v2 = fileno(stream);
 fclose(stream);
 return v2;
}


/* Function: call_fopen_fclose @ 0x1AD0 */
int call_fopen_fclose()
{
 int v0; // edx
 int result; // eax

 v0 = param_fopen_fclose("/etc/passwd");
 result = -1;
 if ( v0 >= 0 )
 return 42;
 return result;
}


/* Function: param_fread_fwrite @ 0x1B10 */
int param_fread_fwrite(char *filename)
{
 size_t v1; // eax
 int v2; // eax
 bool v4; // [esp+13h] [ebp-45h]
 size_t v5; // [esp+20h] [ebp-38h]
 size_t n; // [esp+24h] [ebp-34h]
 FILE *s; // [esp+28h] [ebp-30h]
 char v8[32]; // [esp+2Ch] [ebp-2Ch] BYREF
 const char *v9; // [esp+4Ch] [ebp-Ch]

 v9 = "BinBench Test Data";
 s = fopen(filename, "w+");
 if ( !s )
 return -1;
 v1 = strlen(v9);
 n = fwrite(v9, 1u, v1, s);
 if ( n == strlen(v9) )
 {
 rewind(s);
 v5 = fread(v8, 1u, n, s);
 v8[v5] = 0;
 fclose(s);
 unlink(filename);
 v4 = 0;
 if ( v5 == n )
 v4 = strcmp(v8, v9) == 0;
 v2 = -3;
 if ( v4 )
 return 42;
 return v2;
 }
 else
 {
 fclose(s);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x1C80 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1CB0 */
int param_malloc_free(unsigned int a1)
{
 int v2; // [esp+14h] [ebp-14h]
 unsigned int i; // [esp+18h] [ebp-10h]
 unsigned int *ptr; // [esp+1Ch] [ebp-Ch]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 for ( i = 0; i < a1; ++i )
 ptr[i] = 10 * i;
 v2 = ptr[a1 - 1] + *ptr;
 free(ptr);
 return v2;
}


/* Function: call_malloc_free @ 0x1D60 */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x1D90 */
int param_memset(unsigned char *s, size_t n)
{
 size_t i; // [esp+18h] [ebp-10h]
 int v4; // [esp+1Ch] [ebp-Ch]

 memset(s, 0, n);
 v4 = 0;
 for ( i = 0; i < n; ++i )
 v4 += s[i];
 return v4;
}


/* Function: call_memset @ 0x1E10 */
int call_memset()
{
 int i; // [esp+18h] [ebp-30h]
 unsigned int s[11]; // [esp+1Ch] [ebp-2Ch] BYREF

 for ( i = 0; i < 10; ++i )
 s[i] = 255;
 param_memset((unsigned char *)s, 0x28u);
 return s[9] + s[0];
}


/* Function: param_strchr_strstr @ 0x1E80 */
int param_strchr_strstr(char *s, char a2, char *needle)
{
 int v4; // [esp+8h] [ebp-20h]
 int v5; // [esp+Ch] [ebp-1Ch]
 char *v6; // [esp+18h] [ebp-10h]
 char *v7; // [esp+20h] [ebp-8h]

 v7 = strchr(s, a2);
 if ( v7 )
 v5 = v7 - s;
 else
 v5 = -1;
 v6 = strstr(s, needle);
 if ( v6 )
 v4 = v6 - s;
 else
 v4 = -1;
 return v4 + v5;
}


/* Function: call_strchr_strstr @ 0x1F40 */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x1F90 */
int test_standard_library_functions()
{
 size_t v0; // eax
 int v1; // eax
 size_t v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax

 printf(asc_40AA);
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


/* Function: param_linux_syscall @ 0x2120 */
int param_linux_syscall(int a1)
{
 int v2; // [esp+1Ch] [ebp-Ch]

 v2 = syscall(5, a1, 0);
 if ( v2 < 0 )
 return -*__errno_location();
 syscall(6, v2);
 return v2;
}


/* Function: call_linux_syscall @ 0x21A0 */
int call_linux_syscall()
{
 int v0; // edx
 int result; // eax

 v0 = param_linux_syscall((int)"/etc/passwd");
 result = -1;
 if ( v0 >= 0 )
 return 42;
 return result;
}


/* Function: param_win32_api @ 0x21E0 */
int param_win32_api(char *file)
{
 int v1; // eax
 struct stat buf; // [esp+8h] [ebp-60h] BYREF

 if ( stat(file, &buf) < 0 )
 return -1;
 v1 = -2;
 if ( buf.st_size > 0 )
 return 42;
 return v1;
}


/* Function: call_win32_api @ 0x2240 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x2270 */
int param_fork_exec(char *arg, int a2)
{
 int stat_loc; // [esp+24h] [ebp-14h] BYREF
 __pid_t pid; // [esp+28h] [ebp-10h]
 char a2_str[32];

 pid = fork();
 if ( pid < 0 )
 return -1;
 if ( !pid )
 {
 snprintf(a2_str, sizeof(a2_str), "%d", a2);
 execl(arg, arg, a2_str, (char *)0);
 _exit(127);
 }
 if ( waitpid(pid, &stat_loc, 0) < 0 )
 return -2;
 if ( (stat_loc & 0x7F) != 0 )
 return -3;
 return (stat_loc & 0xFF00) >> 8;
}


/* Function: call_fork_exec @ 0x2360 */
int call_fork_exec()
{
 int v0; // edx
 int result; // eax

 v0 = param_fork_exec("/bin/true", 0);
 result = -1;
 if ( !v0 )
 return 42;
 return result;
}


/* Function: param_pipe_communication @ 0x23B0 */
int param_pipe_communication()
{
 size_t v0; // eax
 int v1; // eax
 int fd; // [esp+10h] [ebp-48h]
 ssize_t v4; // [esp+1Ch] [ebp-3Ch]
 __pid_t v5; // [esp+24h] [ebp-34h]
 unsigned char v6[32]; // [esp+28h] [ebp-30h] BYREF
 int pipedes[2]; // [esp+48h] [ebp-10h] BYREF

 if ( pipe(pipedes) < 0 )
 return -1;
 v5 = fork();
 if ( v5 < 0 )
 return -2;
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


/* Function: call_pipe_communication @ 0x24F0 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2510 */
int param_socket_create()
{
 struct sockaddr s; // [esp+18h] [ebp-20h] BYREF
 int optval; // [esp+28h] [ebp-10h] BYREF
 int fd; // [esp+2Ch] [ebp-Ch]

 fd = socket(2, 1, 0);
 if ( fd < 0 )
 return -1;
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
 return -4;
 }
 }
 else
 {
 close(fd);
 return -3;
 }
 }
 else
 {
 close(fd);
 return -2;
 }
}


/* Function: call_socket_create @ 0x2690 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x26B0 */
int param_shmget_shmat()
{
 size_t v1; // [esp+18h] [ebp-20h]
 char *v2; // [esp+1Ch] [ebp-1Ch]
 int shmid; // [esp+20h] [ebp-18h]
 key_t v4; // [esp+24h] [ebp-14h]
 int fd; // [esp+28h] [ebp-10h]

 fd = open("/tmp/binbench_shm", 66, 438);
 if ( fd < 0 )
 return -1;
 close(fd);
 v4 = ftok("/tmp/binbench_shm", 42);
 if ( v4 < 0 )
 return -1;
 shmid = shmget(v4, 4096, 950);
 if ( shmid < 0 )
 return -2;
 v2 = (char *)shmat(shmid, 0, 0);
 if ( v2 == (char *)-1 )
 return -3;
 strcpy(v2, "SharedMemory");
 v1 = strlen(v2);
 shmdt(v2);
 shmctl(shmid, 0, 0);
 return v1;
}


/* Function: call_shmget_shmat @ 0x2820 */
int call_shmget_shmat()
{
 int v0; // edx
 int result; // eax

 v0 = param_shmget_shmat();
 result = -1;
 if ( v0 > 0 )
 return 42;
 return result;
}


/* Function: param_signal_handling @ 0x2860 */
int param_signal_handling()
{
 int v0; // eax
 int v1; // eax
 bool v3; // [esp+16h] [ebp-12h]
 bool v4; // [esp+17h] [ebp-11h]
 int v5; // [esp+1Ch] [ebp-Ch]
 int v6; // [esp+1Ch] [ebp-Ch]

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -1;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -2;
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
 if ( !signal_received )
 return -3;
 if ( signal_number != (int)&byte_9[1] )
 return -4;
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
 if ( !signal_received || signal_number != (int)&byte_9[5] )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: signal_handler @ 0x2A70 */
void signal_handler(int a1)
{
 signal_received = 1;
 signal_number = a1;
}


/* Function: call_signal_handling @ 0x2AA0 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2AC0 */
int test_system_calls()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax

 printf(asc_4250);
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


/* Function: thread_compute @ 0x2BC0 */
unsigned int * thread_compute(unsigned int *a1)
{
 unsigned int *result; // eax
 int v2; // [esp+8h] [ebp-10h]

 v2 = *a1 * *a1;
 result = malloc(4u);
 *result = v2;
 return result;
}


/* Function: param_pthread_create @ 0x2C10 */
int param_pthread_create(int a1)
{
 int v2; // [esp+1Ch] [ebp-1Ch]
 void *thread_return; // [esp+24h] [ebp-14h] BYREF
 int arg; // [esp+28h] [ebp-10h] BYREF
 pthread_t newthread; // [esp+2Ch] [ebp-Ch] BYREF

 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(newthread, &thread_return);
 v2 = *(unsigned int *)thread_return;
 free(thread_return);
 return v2;
}


/* Function: call_pthread_create @ 0x2CB0 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2CE0 */
void *thread_sum(void *a1)
{
 int i; // [esp+0h] [ebp-8h]
 int *data = (int *)a1;

 data[2] = 0;
 for ( i = *data; i <= data[1]; ++i )
 data[2] += i;
 return 0;
}


/* Function: param_pthread_join @ 0x2D40 */
int param_pthread_join()
{
 int j; // [esp+14h] [ebp-44h]
 int v2; // [esp+18h] [ebp-40h]
 int i; // [esp+1Ch] [ebp-3Ch]
 pthread_t s[12]; // [esp+20h] [ebp-38h] BYREF
 int data_arr[12]; // [esp+20h] [ebp-38h] BYREF

 memset(data_arr, 0, 0x24u);
 data_arr[0] = 1;
 data_arr[1] = 10;
 data_arr[3] = 11;
 data_arr[4] = 20;
 data_arr[6] = 21;
 data_arr[7] = 30;
 for ( i = 0; i < 3; ++i )
 {
 if ( pthread_create(&s[i + 9], 0, (void *(*)(void *))thread_sum, &data_arr[3 * i]) )
 return -1;
 }
 v2 = 0;
 for ( j = 0; j < 3; ++j )
 {
 if ( pthread_join(s[j + 9], 0) )
 return -2;
 v2 += data_arr[3 * j + 2];
 }
 return v2;
}


/* Function: call_pthread_join @ 0x2E90 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2EB0 */
void *thread_increment(void *a1)
{
 int i; // [esp+Ch] [ebp-Ch]
 int v3; // [esp+10h] [ebp-8h]

 v3 = *(int *)a1;
 for ( i = 0; i < v3; ++i )
 {
 pthread_mutex_lock(&cond_mutex);
 atomic_counter = atomic_counter + 1;
 pthread_mutex_unlock(&cond_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x2F40 */
int param_mutex_lock(int a1, int arg)
{
 int v2; // eax
 int j; // [esp+20h] [ebp-18h]
 int i; // [esp+24h] [ebp-14h]
 pthread_t *ptr; // [esp+28h] [ebp-10h]

 ptr = (pthread_t *)malloc(sizeof(pthread_t) * a1);
 if ( !ptr )
 return -1;
 atomic_counter = 0;
 for ( i = 0; i < a1; ++i )
 {
 if ( pthread_create(ptr + i, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(ptr);
 return -2;
 }
 }
 for ( j = 0; j < a1; ++j )
 pthread_join(ptr[j], 0);
 free(ptr);
 v2 = -3;
 if ( atomic_counter == (arg * a1) )
 return 42;
 return v2;
}


/* Function: call_mutex_lock @ 0x3090 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x30C0 */
void *consumer_thread(void *arg)
{
 unsigned int *result; // eax
 int v1; // [esp+10h] [ebp-8h]
 (void)arg;

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x3160 */
void *producer_thread(void *arg)
{
 (void)arg;
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x31E0 */
int param_condition_variable()
{
 int v1; // [esp+20h] [ebp-18h]
 void *thread_return; // [esp+24h] [ebp-14h] BYREF
 pthread_t newthread; // [esp+28h] [ebp-10h] BYREF
 pthread_t th; // [esp+2Ch] [ebp-Ch] BYREF

 ready = 0;
 data = 0;
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


/* Function: call_condition_variable @ 0x32F0 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x3310 */
void *thread_atomic_increment(void *a1)
{
 signed int i; // [esp+24h] [ebp-8h]
 signed int v3; // [esp+28h] [ebp-4h]

 v3 = *(signed int *)a1;
 for ( i = 0; i < v3; ++i )
 {
 __sync_fetch_and_add((volatile signed int *)&atomic_counter_2, 1u);
 __sync_val_compare_and_swap((volatile signed int *)&atomic_counter_2, i, i + 1000);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x33C0 */
void *thread_atomic_load_store(void *arg)
{
 (void)arg;
 __sync_lock_test_and_set(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x3400 */
int param_atomic_ops(int a1, int arg)
{
 int v2; // eax
 int v4; // [esp+18h] [ebp-20h]
 int j; // [esp+1Ch] [ebp-1Ch]
 pthread_t newthread; // [esp+20h] [ebp-18h] BYREF
 int i; // [esp+24h] [ebp-14h]
 int v8; // [esp+28h] [ebp-10h]
 pthread_t *ptr; // [esp+2Ch] [ebp-Ch]

 ptr = (pthread_t *)malloc(sizeof(pthread_t) * a1);
 if ( !ptr )
 return -1;
 v8 = 0;
 __sync_lock_test_and_set((volatile int *)&atomic_counter_2, 0);
 for ( i = 0; i < a1; ++i )
 {
 if ( pthread_create(ptr + i, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(ptr);
 return -2;
 }
 }
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( j = 0; j < a1; ++j )
 pthread_join(ptr[j], 0);
 v4 = atomic_counter;
 free(ptr);
 v2 = -3;
 if ( v4 > 0 )
 return 42;
 return v2;
}


/* Function: call_atomic_ops @ 0x35A0 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x35D0 */
void *thread_tls_test(void *a1)
{
 unsigned int *result; // eax
 unsigned int v2; // [esp+1Ch] [ebp-Ch]
 static unsigned int tls_value = 0;
 const char *name = (const char *)a1;

 v2 = tls_value;
 tls_value = v2 + 50;
 result = malloc(8u);
 *result = v2;
 result[1] = tls_value;
 (void)name;
 return result;
}


/* Function: param_thread_local_storage @ 0x3660 */
int param_thread_local_storage(int a1)
{
 int v1; // eax
 bool v3; // [esp+1Bh] [ebp-3Dh]
 void *thread_return; // [esp+2Ch] [ebp-2Ch] BYREF
 int m; // [esp+30h] [ebp-28h]
 int v6; // [esp+34h] [ebp-24h]
 int v7; // [esp+38h] [ebp-20h]
 int k; // [esp+3Ch] [ebp-1Ch]
 int j; // [esp+40h] [ebp-18h]
 int i; // [esp+44h] [ebp-14h]
 char **ptr; // [esp+48h] [ebp-10h]
 pthread_t *v12; // [esp+4Ch] [ebp-Ch]

 v12 = (pthread_t *)malloc(sizeof(pthread_t) * a1);
 ptr = (char **)malloc(sizeof(char *) * a1);
 if ( !v12 || !ptr )
 return -1;
 for ( i = 0; i < a1; ++i )
 {
 ptr[i] = (char *)malloc(0x10u);
 snprintf(ptr[i], 0x10u, "Thread-%d", i);
 }
 for ( j = 0; j < a1; ++j )
 {
 if ( pthread_create(v12 + j, 0, (void *(*)(void *))thread_tls_test, ptr[j]) )
 {
 for ( k = 0; k <= j; ++k )
 free(ptr[k]);
 free(ptr);
 free(v12);
 return -2;
 }
 }
 v7 = 0;
 v6 = 0;
 for ( m = 0; m < a1; ++m )
 {
 pthread_join(v12[m], &thread_return);
 v7 += *(unsigned int *)thread_return;
 v6 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(ptr[m]);
 }
 free(ptr);
 free(v12);
 v3 = 0;
 if ( v7 == 100 * a1 )
 v3 = v6 == 150 * a1;
 v1 = -3;
 if ( v3 )
 return 42;
 return v1;
}


/* Function: call_thread_local_storage @ 0x38E0 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3910 */
int test_thread_concurrency()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 printf(asc_433A);
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


/* Function: main @ 0x39F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x3A7C */
void term_proc()
{
}


/* FAILED to decompile: setsockopt @ 0x71A4 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x71A8 */

/* FAILED to decompile: raise @ 0x71AC */

/* FAILED to decompile: strstr @ 0x71B0 */

/* FAILED to decompile: strcmp @ 0x71B4 */

/* FAILED to decompile: __libc_start_main @ 0x71B8 */

/* FAILED to decompile: read @ 0x71BC */

/* FAILED to decompile: printf @ 0x71C0 */

/* FAILED to decompile: _exit @ 0x71C4 */

/* FAILED to decompile: free @ 0x71C8 */

/* FAILED to decompile: memcpy @ 0x71CC */

/* FAILED to decompile: shmget @ 0x71D0 */

/* FAILED to decompile: fclose @ 0x71D4 */

/* FAILED to decompile: pthread_cond_wait @ 0x71D8 */

/* FAILED to decompile: signal @ 0x71DC */

/* FAILED to decompile: memcmp @ 0x71E0 */

/* FAILED to decompile: sleep @ 0x71E4 */

/* FAILED to decompile: alarm @ 0x71E8 */

/* FAILED to decompile: rewind @ 0x71EC */

/* FAILED to decompile: wait @ 0x71F0 */

/* FAILED to decompile: htons @ 0x71F4 */

/* FAILED to decompile: shmat @ 0x71F8 */

/* FAILED to decompile: pthread_mutex_lock @ 0x71FC */

/* FAILED to decompile: unlink @ 0x7200 */

/* FAILED to decompile: __cxa_finalize @ 0x7204 */

/* FAILED to decompile: fwrite @ 0x7208 */

/* FAILED to decompile: waitpid @ 0x720C */

/* FAILED to decompile: usleep @ 0x7210 */

/* FAILED to decompile: fread @ 0x7214 */

/* FAILED to decompile: strcpy @ 0x7218 */

/* FAILED to decompile: shmctl @ 0x721C */

/* FAILED to decompile: pthread_cond_signal @ 0x7220 */

/* FAILED to decompile: malloc @ 0x7224 */

/* FAILED to decompile: stat @ 0x7228 */

/* FAILED to decompile: open @ 0x722C */

/* FAILED to decompile: strchr @ 0x7230 */

/* FAILED to decompile: strlen @ 0x7234 */

/* FAILED to decompile: write @ 0x7238 */

/* FAILED to decompile: bind @ 0x723C */

/* FAILED to decompile: __isoc99_sscanf @ 0x7240 */

/* FAILED to decompile: fopen @ 0x7244 */

/* FAILED to decompile: memset @ 0x7248 */

/* FAILED to decompile: snprintf @ 0x724C */

/* FAILED to decompile: __errno_location @ 0x7250 */

/* FAILED to decompile: strncpy @ 0x7254 */

/* FAILED to decompile: syscall @ 0x7258 */

/* FAILED to decompile: fileno @ 0x725C */

/* FAILED to decompile: execl @ 0x7260 */

/* FAILED to decompile: pipe @ 0x7264 */

/* FAILED to decompile: shmdt @ 0x7268 */

/* FAILED to decompile: pthread_create @ 0x726C */

/* FAILED to decompile: fork @ 0x7270 */

/* FAILED to decompile: listen @ 0x7274 */

/* FAILED to decompile: ftok @ 0x7278 */

/* FAILED to decompile: socket @ 0x727C */

/* FAILED to decompile: pthread_join @ 0x7280 */

/* FAILED to decompile: pthread_cancel @ 0x7284 */

/* FAILED to decompile: close @ 0x7288 */

/* Total functions decompiled: 77, failed: 58 */
