#define _GNU_SOURCE
#define _BSD_SOURCE
#define _DEFAULT_SOURCE
#define _XOPEN_SOURCE 600
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
typedef unsigned int socklen_t;
typedef int key_t;
typedef unsigned int useconds_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef void (*__sighandler_t)(int);
typedef long time_t;
typedef unsigned int dev_t;
typedef unsigned long ino_t;
typedef unsigned int mode_t;
typedef unsigned long nlink_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef long off_t;
typedef unsigned int pid_t;
typedef unsigned long shmatt_t;

/* Struct definitions removed - provided by system headers */

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_clang_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/syscall.h>
#include <netinet/in.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>

/* Structure definitions - removed duplicates (provided by system headers) */

/* Global variables */
int signal_received = 0;
int signal_number = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
int shared_counter = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int data = 0;
int ready = 0;
int atomic_counter = 0;
char *asc_436C = "=== Standard Library Functions ===";
char *asc_4390 = "=== System Calls ===";
char *asc_43AB = "=== Thread Concurrency ===";
char *aLibL101D = "strlen: %zu\n";
char *aLibL102D = "strcmp: %d\n";
char *aLibL103D = "strlen call: %d\n";
char *aLibL104D = "memcpy: %d\n";
char *aLibL105D = "memcmp: %d\n";
char *aLibL106D = "printf: %d\n";
char *aLibL107D = "sscanf: %d\n";
char *aLibL108D = "fopen/fclose: %d\n";
char *aLibL109D = "fread/fwrite: %d\n";
char *aLibL110D = "malloc/free: %d\n";
char *aLibL111D = "memset: %d\n";
char *aLibL112D = "strchr/strstr: %d\n";
char *aSysL301D = "syscall: %d\n";
char *aSysL302D = "stat: %d\n";
char *aSysL303D = "fork/exec: %d\n";
char *aSysL304D = "pipe: %d\n";
char *aSysL305D = "socket: %d\n";
char *aSysL306D = "shm: %d\n";
char *aSysL307D = "signal: %d\n";
char *aThrL301D = "pthread_create: %d\n";
char *aThrL302D = "pthread_join: %d\n";
char *aThrL303D = "mutex: %d\n";
char *aThrL304D = "cond_var: %d\n";
char *aThrL305D = "atomic: done\n";
char *aThrL306D = "tls: %d\n";
unsigned char unk_43D8[12] = {0};
unsigned char unk_43CC[12] = {0};



/* Function declarations for external functions */
extern int _do_global_ctors_aux(void);
extern void frame_dummy(void);
extern void _do_global_dtors_aux(void);
extern int bcmp(const void *s1, const void *s2, size_t n);
extern int __isoc99_sscanf(const char *str, const char *format, ...);
extern int *__errno_location(void);
extern int fileno(FILE *stream);
extern int unlink(const char *pathname);
extern int raise(int sig);
extern unsigned int alarm(unsigned int seconds);
extern int pthread_cancel(pthread_t thread);
extern key_t ftok(const char *pathname, int proj_id);
extern int shmget(key_t key, size_t size, int shmflg);
extern void *shmat(int shmid, const void *shmaddr, int shmflg);
extern int shmdt(const void *shmaddr);
extern long syscall(long number, ...);

/* shmctl declaration - struct shmid_ds provided by sys/shm.h */
extern int shmctl(int shmid, int cmd, struct shmid_ds *buf);

/* GCC builtin implementations for Windows intrinsics */
static inline void _InterlockedAdd(int *ptr, unsigned int val) {
    __sync_add_and_fetch(ptr, val);
}
static inline int _InterlockedCompareExchange(int *dest, int exchange, int compare) {
    return __sync_val_compare_and_swap(dest, compare, exchange);
}
static inline int _InterlockedExchange(int *target, int value) {
    return __sync_lock_test_and_set(target, value);
}
static inline unsigned int __readgsdword(unsigned int offset) {
    (void)offset;
    return 0;
}
static inline void __writegsdword(unsigned int offset, unsigned int value) {
    (void)offset;
    (void)value;
}



/* Helper macros */
#define BYTE1(x) ((unsigned char)(((unsigned int)(x) >> 8) & 0xFF))

/* Forward declarations */
void signal_handler(int sig);



/* Function: .init_proc @ 0x1000 */
extern void *_gmon_start__;
int init_proc()
{
 if ( _gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *(%%ebx+8)" ::: "memory");
}


/* Function: sub_13E0 @ 0x13E0 */
int sub_13E0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_141C @ 0x141C */
void sub_141C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1420 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1559 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x155D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_strcpy @ 0x1570 */
int param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return strlen(dst);
}


/* Function: call_strcpy @ 0x15B0 */
size_t call_strcpy()
{
 char s[36]; // [esp+8h] [ebp-24h] BYREF

 strcpy(s, "HelloLib");
 return strlen(s);
}


/* Function: param_strcmp @ 0x15F0 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // eax
 int v3; // ecx
 bool v4; // cc
 int result; // eax

 v2 = strcmp(s1, s2);
 v3 = -(v2 != 0);
 v4 = v2 <= 0;
 result = 1;
 if ( v4 )
 return v3;
 return result;
}


/* Function: call_strcmp @ 0x1630 */
int call_strcmp()
{
 return 0;
}


/* Function: param_strlen @ 0x1640 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x1670 */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1680 */
size_t param_memcpy(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
 return n;
}


/* Function: call_memcpy @ 0x16B0 */
int call_memcpy()
{
 return 90;
}


/* Function: param_memcmp @ 0x16C0 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // eax
 int v4; // ecx
 bool v5; // cc
 int result; // eax

 v3 = memcmp(p1, p2, n);
 v4 = -(v3 != 0);
 v5 = v3 <= 0;
 result = 1;
 if ( v5 )
 return v4;
 return result;
}


/* Function: call_memcmp @ 0x1700 */
int call_memcmp()
{
 int v0; // esi
 int v1; // eax
 int v2; // ecx
 int v3; // eax

 v0 = memcmp(&unk_43D8, &unk_43CC, 0xCu);
 v1 = memcmp(&unk_43D8, &unk_43D8, 0xCu);
 v2 = -(v1 != 0);
 if ( v1 > 0 )
 v2 = 1;
 v3 = -(v0 != 0);
 if ( v0 > 0 )
 v3 = 1;
 return v2 + v3;
}


/* Function: param_printf @ 0x1770 */
int param_printf(int x, const char *name)
{
 return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x17A0 */
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


/* Function: param_scanf @ 0x17D0 */
int param_scanf(const char *input_str)
{
 bool v1; // zf
 int result; // eax
 int v3; // [esp+0h] [ebp-Ch] BYREF
 int v4; // [esp+4h] [ebp-8h] BYREF

 v1 = __isoc99_sscanf(input_str, "%d,%d", &v4, &v3) == 2;
 result = -1;
 if ( v1 )
 return v4 + v3;
 return result;
}


/* Function: call_scanf @ 0x1820 */
int call_scanf()
{
 bool v0; // zf
 int result; // eax
 int v2; // [esp+Ch] [ebp-10h] BYREF
 unsigned int v3[3]; // [esp+10h] [ebp-Ch] BYREF

 v0 = __isoc99_sscanf("123,456", "%d,%d", v3, &v2) == 2;
 result = -1;
 if ( v0 )
 return v3[0] + v2;
 return result;
}


/* Function: param_fopen_fclose @ 0x1870 */
int param_fopen_fclose(const char *filename)
{
 FILE *stream; // eax
 FILE *v2; // esi
 int v3; // edi

 stream = fopen(filename, "r");
 if ( !stream )
 return -1;
 v2 = stream;
 v3 = fileno(stream);
 fclose(v2);
 return v3;
}


/* Function: call_fopen_fclose @ 0x18C0 */
int call_fopen_fclose()
{
 FILE *v0; // eax
 FILE *v1; // edi
 int v2; // esi

 v0 = fopen("/etc/passwd", "r");
 if ( !v0 )
 return -1;
 v1 = v0;
 v2 = fileno(v0);
 fclose(v1);
 return (v2 >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x1920 */
int param_fread_fwrite(const char *tmpfile)
{
 FILE *v1; // eax
 FILE *v2; // esi
 size_t v3; // ebp
 int result; // eax
 bool v5; // zf
 unsigned char ptr[48]; // [esp+Ch] [ebp-30h] BYREF

 v1 = fopen(tmpfile, "w+");
 if ( !v1 )
 return -1;
 v2 = v1;
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v2);
 v3 = fread(ptr, 1u, 0x12u, v2);
 ptr[v3] = 0;
 fclose(v2);
 unlink(tmpfile);
 result = -3;
 if ( v3 == 18 )
 {
 v5 = bcmp(ptr, "BinBench Test Data", 0x13u) == 0;
 result = -3;
 if ( v5 )
 return 42;
 }
 }
 else
 {
 fclose(v2);
 return -2;
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x1A00 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1A30 */
int param_malloc_free(size_t size)
{
 unsigned int *v1; // eax
 int v2; // ecx
 int i; // edx
 int v4; // esi

 v1 = malloc(4 * size);
 if ( !v1 )
 return -1;
 if ( size )
 {
 v2 = 0;
 for ( i = 0; i != size; ++i )
 {
 v1[i] = v2;
 v2 += 10;
 }
 }
 v4 = *v1 + v1[size - 1];
 free(v1);
 return v4;
}


/* Function: call_malloc_free @ 0x1A90 */
int call_malloc_free()
{
 unsigned int *v0; // eax
 int v1; // ecx
 unsigned int *v2; // edx
 int v3; // esi

 v0 = malloc(0x28u);
 if ( !v0 )
 return -1;
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 10;
 ++v2;
 }
 while ( v1 != 100 );
 v3 = *v0 + v0[9];
 free(v0);
 return v3;
}


/* Function: param_memset @ 0x1AF0 */
int param_memset(unsigned char *buffer, size_t size)
{
 int v2; // ecx
 int result; // eax

 memset(buffer, 0, size);
 if ( !size )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += buffer[v2++];
 while ( size != v2 );
 return result;
}


/* Function: call_memset @ 0x1B40 */
int call_memset()
{
 int i; // eax
 unsigned int v2[10]; // [esp+0h] [ebp-28h]

 for ( i = 0; i != 10; ++i )
 v2[i] = 255;
 return 0;
}


/* Function: param_strchr_strstr @ 0x1B70 */
int param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
 char *v3; // eax
 int v4; // ebp
 char *v5; // eax

 v3 = strchr(str, ch_0);
 v4 = v3 == 0 ? -1 : v3 - str;
 v5 = strstr(str, substr);
 return v4 + (v5 == 0 ? -1 : v5 - str);
}


/* Function: call_strchr_strstr @ 0x1BD0 */
int call_strchr_strstr()
{
 return 15;
}


/* Function: test_standard_library_functions @ 0x1BE0 */
void test_standard_library_functions()
{
 size_t v0; // eax
 int v1; // esi
 int v2; // eax
 int v3; // ecx
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // ecx
 int v8; // ebp
 FILE *v9; // eax
 int v10; // esi
 FILE *v11; // edi
 int v12; // esi
 int v13; // eax
 unsigned int *v14; // eax
 int v15; // ecx
 unsigned int *v16; // edx
 int i; // eax
 int v18; // [esp+10h] [ebp-3Ch] BYREF
 unsigned int s[14]; // [esp+14h] [ebp-38h] BYREF

 puts(asc_436C);
 strcpy((char *)s, "HelloLib");
 v0 = strlen((const char *)s);
 printf(aLibL101D, v0);
 printf(aLibL102D, 0);
 printf(aLibL103D, 12);
 printf(aLibL104D, 90);
 v1 = memcmp(&unk_43D8, &unk_43CC, 0xCu);
 v2 = memcmp(&unk_43D8, &unk_43D8, 0xCu);
 v3 = -(v2 != 0);
 if ( v2 > 0 )
 v3 = 1;
 v4 = -(v1 != 0);
 if ( v1 > 0 )
 v4 = 1;
 printf(aLibL105D, v3 + v4);
 v5 = printf("Value: %d, Name: %s\n", 42, "Test");
 printf(aLibL106D, v5);
 v6 = __isoc99_sscanf("123,456", "%d,%d", s, &v18);
 v7 = s[0] + v18;
 v8 = -1;
 if ( v6 != 2 )
 v7 = -1;
 printf(aLibL107D, v7);
 v9 = fopen("/etc/passwd", "r");
 v10 = -1;
 if ( v9 )
 {
 v11 = v9;
 v12 = fileno(v9);
 fclose(v11);
 v10 = (v12 >> 31) | 0x2A;
 }
 printf(aLibL108D, v10);
 v13 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(aLibL109D, v13);
 v14 = malloc(0x28u);
 if ( v14 )
 {
 v15 = 0;
 v16 = v14;
 do
 {
 *v16 = v15;
 v15 += 10;
 ++v16;
 }
 while ( v15 != 100 );
 v8 = *v14 + v14[9];
 free(v14);
 }
 printf(aLibL110D, v8);
 for ( i = 0; i != 10; ++i )
 s[i] = 255;
 printf(aLibL111D, 0);
 printf(aLibL112D, 15);
}


/* Function: param_linux_syscall @ 0x1E60 */
int param_linux_syscall(const char *pathname)
{
 int v1; // eax
 int v2; // esi

 v1 = syscall(5, pathname, 0);
 if ( v1 < 0 )
 return -*__errno_location();
 v2 = v1;
 syscall(6, v1);
 return v2;
}


/* Function: call_linux_syscall @ 0x1EB0 */
int call_linux_syscall()
{
 int v0; // eax
 int v1; // esi

 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v1 = -*__errno_location();
 }
 else
 {
 v1 = v0;
 syscall(6, v0);
 }
 return (v1 >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x1F10 */
int param_win32_api(const char *filename)
{
 int v1; // eax
 int v2; // edx
 bool v3; // sf
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-5Ch] BYREF

 v1 = stat(filename, &buf);
 v2 = -2;
 if ( buf.st_size > 0 )
 v2 = 42;
 v3 = v1 < 0;
 result = -1;
 if ( !v3 )
 return v2;
 return result;
}


/* Function: call_win32_api @ 0x1F60 */
int call_win32_api()
{
 int v0; // eax
 int v1; // edx
 bool v2; // sf
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-5Ch] BYREF

 v0 = stat("/etc/passwd", &buf);
 v1 = -2;
 if ( buf.st_size > 0 )
 v1 = 42;
 v2 = v0 < 0;
 result = -1;
 if ( !v2 )
 return v1;
 return result;
}


/* Function: param_fork_exec @ 0x1FB0 */
int param_fork_exec(const char *prog)
{
 int v1; // eax
 int result; // eax
 int stat_loc; // [esp+4h] [ebp-8h] BYREF

 v1 = fork();
 if ( v1 < 0 )
 return -1;
 if ( !v1 )
 {
 execl(prog, prog);
 _exit(127);
 }
 if ( waitpid(v1, &stat_loc, 0) < 0 )
 return -2;
 result = -3;
 if ( (stat_loc & 0x7F) == 0 )
 return BYTE1(stat_loc);
 return result;
}


/* Function: call_fork_exec @ 0x2030 */
int call_fork_exec()
{
 int v0; // eax
 int v1; // eax
 int stat_loc; // [esp+4h] [ebp-8h] BYREF

 v0 = fork();
 if ( v0 < 0 )
 {
 v1 = -1;
 }
 else
 {
 if ( !v0 )
 {
 execl("/bin/true", "/bin/true");
 _exit(127);
 }
 if ( waitpid(v0, &stat_loc, 0) < 0 )
 {
 v1 = -2;
 }
 else
 {
 v1 = -3;
 if ( (stat_loc & 0x7F) == 0 )
 v1 = BYTE1(stat_loc);
 }
 }
 return v1 != 0 ? -1 : 0x2A;
}


/* Function: param_pipe_communication @ 0x20B0 */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // esi
 int result; // eax
 int fd[2]; // [esp+Ch] [ebp-30h] BYREF
 unsigned char buf[40]; // [esp+14h] [ebp-28h] BYREF

 if ( pipe(fd) < 0 )
 return -1;
 v0 = fork();
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(fd[0]);
 write(fd[1], "HelloPipe", 9u);
 close(fd[1]);
 _exit(0);
 }
 close(fd[1]);
 v1 = read(fd[0], buf, 0x1Fu);
 buf[v1] = 0;
 close(fd[0]);
 wait(0);
 result = -3;
 if ( v1 > 0 )
 return 42;
 return result;
}


/* Function: call_pipe_communication @ 0x2190 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x21B0 */
int param_socket_create()
{
 int v0; // eax
 int v1; // esi
 int v2; // edi
 int result; // eax
 int optval; // [esp+Ch] [ebp-20h] BYREF
 struct sockaddr v5; // [esp+10h] [ebp-1Ch] BYREF

 v0 = socket(2, 1, 0);
 if ( v0 < 0 )
 return -1;
 v1 = v0;
 optval = 1;
 if ( setsockopt(v0, 1, 2, &optval, 4u) < 0 )
 {
 close(v1);
 return -2;
 }
 else
 {
 memset(&v5.sa_data[2], 0, 12);
 *(unsigned int *)&v5.sa_family = 2;
 if ( bind(v1, &v5, 0x10u) < 0 )
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


/* Function: call_socket_create @ 0x22A0 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x22C0 */
size_t param_shmget_shmat()
{
 int v0; // eax
 size_t v1; // esi
 key_t v2; // eax
 int v3; // eax
 int v4; // edi
 char *v5; // eax
 char *v6; // ebp

 v0 = open("/tmp/binbench_shm", O_RDWR | O_CREAT, 0666);
 v1 = -1;
 if ( v0 >= 0 )
 {
 close(v0);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 >= 0 )
 {
 v3 = shmget(v2, 4096, 950);
 if ( v3 < 0 )
 {
 return -2;
 }
 else
 {
 v4 = v3;
 v5 = (char *)shmat(v3, 0, 0);
 if ( v5 == (char *)-1 )
 {
 return -3;
 }
 else
 {
 v6 = v5;
 strcpy(v5, "SharedMemory");
 v1 = strlen(v5);
 shmdt(v6);
 shmctl(v4, 0, 0);
 }
 }
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x23B0 */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = (int)param_shmget_shmat() <= 0;
 result = -1;
 if ( !v0 )
 return 42;
 return result;
}


/* Function: param_signal_handling @ 0x23E0 */
int param_signal_handling()
{
 unsigned int v0; // esi
 bool v1; // cc
 int result; // eax
 unsigned int v3; // esi

 if ( signal(10, signal_handler) == (__sighandler_t)-1 )
 return -1;
 if ( signal(14, signal_handler) == (__sighandler_t)-1 )
 return -2;
 signal_received = 0;
 raise(10);
 if ( !signal_received )
 {
 v0 = 1000;
 do
 {
 usleep(0x3E8u);
 if ( signal_received )
 break;
 v1 = v0-- <= 1;
 }
 while ( !v1 );
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
 v1 = v3-- <= 1;
 }
 while ( !v1 );
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


/* Function: signal_handler @ 0x2540 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: call_signal_handling @ 0x2570 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2590 */
void test_system_calls()
{
 int v0; // eax
 int v1; // esi
 int v2; // eax
 int v3; // ecx
 int v4; // edi
 int v5; // eax
 int v6; // ecx
 int v7; // eax
 int v8; // eax
 int v9; // eax
 struct stat buf; // [esp+0h] [ebp-6Ch] BYREF

 puts(asc_4390);
 v0 = syscall(5, "/etc/passwd", 0);
 if ( v0 < 0 )
 {
 v1 = -*__errno_location();
 }
 else
 {
 v1 = v0;
 syscall(6, v0);
 }
 printf(aSysL301D, (v1 >> 31) | 0x2A);
 v2 = stat("/etc/passwd", &buf);
 v3 = -2;
 if ( buf.st_size > 0 )
 v3 = 42;
 v4 = -1;
 if ( v2 < 0 )
 v3 = -1;
 printf(aSysL302D, v3);
 v5 = fork();
 v6 = -1;
 if ( v5 >= 0 )
 {
 if ( !v5 )
 {
 execl("/bin/true", "/bin/true");
 _exit(127);
 }
 if ( waitpid(v5, (int *)&buf, 0) < 0 )
 {
 v6 = -2;
 }
 else
 {
 v6 = -3;
 if ( (buf.st_dev & 0x7F) == 0 )
 v6 = BYTE1(buf.st_dev);
 }
 }
 printf(aSysL303D, v6 != 0 ? -1 : 0x2A);
 v7 = param_pipe_communication();
 printf(aSysL304D, v7);
 v8 = param_socket_create();
 printf(aSysL305D, v8);
 if ( (int)param_shmget_shmat() > 0 )
 v4 = 42;
 printf(aSysL306D, v4);
 v9 = param_signal_handling();
 printf(aSysL307D, v9);
}


/* Function: thread_compute @ 0x2720 */
void * thread_compute(void *arg)
{
 int v1; // esi
 void *result; // eax

 v1 = *(unsigned int *)arg * *(unsigned int *)arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: param_pthread_create @ 0x2750 */
int param_pthread_create(int x)
{
 int v1; // esi
 void *thread_return; // [esp+8h] [ebp-14h] BYREF
 int arg; // [esp+Ch] [ebp-10h] BYREF
 pthread_t newthread[3]; // [esp+10h] [ebp-Ch] BYREF

 arg = x;
 v1 = -1;
 if ( !pthread_create(newthread, 0, thread_compute, &arg) )
 {
 pthread_join(newthread[0], &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x27C0 */
int call_pthread_create()
{
 int v0; // esi
 void *thread_return; // [esp+8h] [ebp-14h] BYREF
 int arg; // [esp+Ch] [ebp-10h] BYREF
 pthread_t newthread[3]; // [esp+10h] [ebp-Ch] BYREF

 arg = 7;
 v0 = -1;
 if ( !pthread_create(newthread, 0, thread_compute, &arg) )
 {
 pthread_join(newthread[0], &thread_return);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 return v0;
}


/* Function: thread_sum @ 0x2830 */
void * thread_sum(void *arg)
{
 int v1; // edi
 bool v2; // cc
 unsigned int v3; // edi

 *((unsigned int *)arg + 2) = 0;
 v1 = *((unsigned int *)arg + 1);
 v2 = v1 < *(unsigned int *)arg;
 v3 = v1 - *(unsigned int *)arg;
 if ( !v2 )
 *((unsigned int *)arg + 2) += ((v3 * (unsigned long long)(unsigned int)(~*(unsigned int *)arg + *((unsigned int *)arg + 1))) >> 1)
 + v3 * (*(unsigned int *)arg + 1)
 + *(unsigned int *)arg;
 return 0;
}


/* Function: param_pthread_join @ 0x2870 */
int param_pthread_join()
{
 int v0; // esi
 unsigned int *v1; // edi
 unsigned int *v2; // edi
 int v3; // ebp
 int v4; // esi
 unsigned int arg[2]; // [esp+8h] [ebp-44h] BYREF
 unsigned int v7[15]; // [esp+10h] [ebp-3Ch] BYREF

 v7[6] = 0;
 v7[3] = 0;
 v7[0] = 0;
 arg[0] = 1;
 arg[1] = 10;
 v7[1] = 11;
 v7[2] = 20;
 v7[4] = 21;
 v7[5] = 30;
 v0 = 0;
 v1 = arg;
 do
 {
 if ( pthread_create(&v7[v0 + 8], 0, thread_sum, v1) )
 return -1;
 ++v0;
 v1 += 3;
 }
 while ( v0 != 3 );
 v2 = v7;
 v3 = 0;
 v4 = 0;
 while ( !pthread_join(v7[v3 + 8], 0) )
 {
 v4 += *v2;
 ++v3;
 v2 += 3;
 if ( v3 == 3 )
 return v4;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x2950 */
int call_pthread_join()
{
 int v0; // esi
 unsigned int *v1; // edi
 unsigned int *v2; // edi
 int v3; // ebp
 int v4; // esi
 unsigned int arg[2]; // [esp+8h] [ebp-44h] BYREF
 unsigned int v7[15]; // [esp+10h] [ebp-3Ch] BYREF

 v7[6] = 0;
 v7[3] = 0;
 v7[0] = 0;
 arg[0] = 1;
 arg[1] = 10;
 v7[1] = 11;
 v7[2] = 20;
 v7[4] = 21;
 v7[5] = 30;
 v0 = 0;
 v1 = arg;
 do
 {
 if ( pthread_create(&v7[v0 + 8], 0, thread_sum, v1) )
 return -1;
 ++v0;
 v1 += 3;
 }
 while ( v0 != 3 );
 v2 = v7;
 v3 = 0;
 v4 = 0;
 while ( !pthread_join(v7[v3 + 8], 0) )
 {
 v4 += *v2;
 ++v3;
 v2 += 3;
 if ( v3 == 3 )
 return v4;
 }
 return -2;
}


/* Function: thread_increment @ 0x2A30 */
void * thread_increment(void *arg)
{
 int v1; // esi

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
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


/* Function: param_mutex_lock @ 0x2AA0 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 pthread_t *v2; // eax
 pthread_t *v3; // esi
 int v4; // edi
 int i; // esi
 int result; // eax
 pthread_t *newthread; // [esp+4h] [ebp-18h]

 v2 = (pthread_t *)malloc(4 * thread_count);
 if ( !v2 )
 return -1;
 newthread = v2;
 shared_counter = 0;
 if ( thread_count <= 0 )
 {
LABEL_6:
 if ( thread_count > 0 )
 {
 for ( i = 0; i != thread_count; ++i )
 pthread_join(newthread[i], 0);
 }
 free(newthread);
 result = -3;
 if ( shared_counter == iterations_per_thread * thread_count )
 return 42;
 }
 else
 {
 v3 = v2;
 v4 = thread_count;
 while ( !pthread_create(v3, 0, thread_increment, &iterations_per_thread) )
 {
 ++v3;
 if ( !--v4 )
 goto LABEL_6;
 }
 free(newthread);
 return -2;
 }
 return result;
}


/* Function: call_mutex_lock @ 0x2BA0 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2BD0 */
void *consumer_thread(void *arg)
{
 int v0; // edi
 unsigned int *result; // eax

 pthread_mutex_lock(&cond_mutex);
 if ( !ready )
 {
 do
 pthread_cond_wait(&cond, &cond_mutex);
 while ( ready != 1 );
 }
 v0 = 42;
 if ( !data )
 v0 = 0;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v0;
 return result;
}


/* Function: producer_thread @ 0x2C50 */
void *producer_thread(void *arg)
{
 (void)arg;
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x2CB0 */
int param_condition_variable()
{
 int v0; // esi
 pthread_t newthread; // [esp+8h] [ebp-14h] BYREF
 void *thread_return; // [esp+Ch] [ebp-10h] BYREF
 pthread_t th[3]; // [esp+10h] [ebp-Ch] BYREF

 ready = 0;
 data = 0;
 v0 = -1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 if ( pthread_create(th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(th[0], 0);
 v0 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 }
 return v0;
}


/* Function: call_condition_variable @ 0x2D60 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x2D80 */
void * thread_atomic_increment(void *arg)
{
 int v1; // esi
 signed int v2; // ecx

 v1 = *(unsigned int *)arg;
 if ( *(int *)arg > 0 )
 {
 v2 = 0;
 do
 {
 _InterlockedAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, v2 + 1000, v2);
 ++v2;
 }
 while ( v2 != v1 );
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2DD0 */
void *thread_atomic_load_store(void *arg)
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x2DF0 */
int param_atomic_ops(int thread_count, int iterations)
{
 pthread_t *v2; // eax
 pthread_t *v3; // esi
 int v4; // ebp
 int i; // esi
 int v6; // esi
 int result; // eax
 pthread_t *newthread; // [esp+4h] [ebp-18h]
 pthread_t th[5]; // [esp+8h] [ebp-14h] BYREF

 v2 = (pthread_t *)malloc(4 * thread_count);
 if ( !v2 )
 return -1;
 newthread = v2;
 _InterlockedExchange(&atomic_counter, 0);
 if ( thread_count <= 0 )
 {
LABEL_6:
 if ( !pthread_create(th, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(th[0], 0);
 if ( thread_count > 0 )
 {
 for ( i = 0; i != thread_count; ++i )
 pthread_join(newthread[i], 0);
 }
 v6 = atomic_counter;
 free(newthread);
 result = -3;
 if ( v6 > 0 )
 return 42;
 }
 else
 {
 v3 = v2;
 v4 = thread_count;
 while ( !pthread_create(v3, 0, thread_atomic_increment, &iterations) )
 {
 ++v3;
 if ( !--v4 )
 goto LABEL_6;
 }
 free(newthread);
 return -2;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x2F00 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x2F30 */
void * thread_tls_test(void *arg)
{
 unsigned int v1; // esi
 unsigned int *result; // eax

 v1 = __readgsdword(0xFFFFFFDC);
 __writegsdword(0xFFFFFFDC, v1 + 50);
 strncpy((char *)(__readgsdword(0) - 32), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_thread_local_storage @ 0x2F90 */
int param_thread_local_storage(int thread_count)
{
 pthread_t *v1; // edi
 unsigned int *v2; // ecx
 int result; // eax
 int i; // esi
 char *v5; // eax
 int v6; // esi
 pthread_t *v7; // ebp
 int v8; // edi
 int v9; // esi
 int v10; // ebp
 int v11; // edi
 unsigned int *ptr; // [esp+10h] [ebp-1Ch]
 pthread_t *newthread; // [esp+14h] [ebp-18h]
 void *thread_return; // [esp+18h] [ebp-14h] BYREF

 v1 = (pthread_t *)malloc(4 * thread_count);
 v2 = malloc(4 * thread_count);
 result = -1;
 if ( v1 )
 {
 ptr = v2;
 if ( v2 )
 {
 newthread = v1;
 if ( thread_count > 0 )
 {
 for ( i = 0; i != thread_count; ++i )
 {
 v5 = (char *)malloc(0x10u);
 ptr[i] = v5;
 snprintf(v5, 0x10u, "Thread-%d", i);
 }
 }
 if ( thread_count <= 0 )
 {
LABEL_10:
 if ( thread_count <= 0 )
 {
 v10 = 0;
 v9 = 0;
 }
 else
 {
 v8 = 0;
 v9 = 0;
 v10 = 0;
 do
 {
 pthread_join(newthread[v8], &thread_return);
 v10 += *(unsigned int *)thread_return;
 v9 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free((void *)ptr[v8++]);
 }
 while ( thread_count != v8 );
 }
 free(ptr);
 free(newthread);
 result = -3;
 if ( !(v10 ^ (100 * thread_count) | v9 ^ (150 * thread_count)) )
 return 42;
 }
 else
 {
 v6 = 0;
 v7 = v1;
 while ( !pthread_create(v7, 0, (void *(*)(void *))thread_tls_test, (void *)ptr[v6]) )
 {
 ++v6;
 ++v7;
 if ( thread_count == v6 )
 goto LABEL_10;
 }
 v11 = -1;
 do
 free((void *)ptr[++v11]);
 while ( v6 != v11 );
 free(ptr);
 free(newthread);
 return -2;
 }
 }
 }
 return result;
}


/* Function: call_thread_local_storage @ 0x3150 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3180 */
void test_thread_concurrency()
{
 pthread_t *v0; // esi
 int v1; // edi
 int i; // edi
 unsigned int *v3; // edi
 int v4; // ebp
 int v5; // esi
 int v6; // eax
 int v7; // eax
 int v8; // eax
 void *thread_return; // [esp+4h] [ebp-48h] BYREF
 pthread_t newthread_local[2]; // [esp+8h] [ebp-44h] BYREF
 unsigned int v11[8]; // [esp+10h] [ebp-3Ch] BYREF
 unsigned int arg[7]; // [esp+30h] [ebp-1Ch] BYREF
 pthread_t *newthread_ptr; // helper

 puts(asc_43AB);
 arg[0] = 7;
 newthread_ptr = newthread_local;
 v0 = newthread_ptr;
 v1 = -1;
 if ( !pthread_create(newthread_local, 0, thread_compute, arg) )
 {
 pthread_join(newthread_local[0], &thread_return);
 v1 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 printf(aThrL301D, v1);
 v11[6] = 0;
 v11[3] = 0;
 v11[0] = 0;
 arg[0] = 1;
 arg[1] = 10;
 v11[1] = 11;
 v11[2] = 20;
 v11[4] = 21;
 v11[5] = 30;
 v0 = (pthread_t *)v11;
 for ( i = 0; i != 3; ++i )
 {
 if ( pthread_create(&arg[i], 0, thread_sum, v0) )
 {
 v5 = -1;
 goto LABEL_12;
 }
 v0 += 3;
 }
 v3 = v11;
 v4 = 0;
 v5 = 0;
 while ( !pthread_join(arg[v4], 0) )
 {
 v5 += *v3;
 ++v4;
 v3 += 3;
 if ( v4 == 3 )
 goto LABEL_12;
 }
 v5 = -2;
LABEL_12:
 printf(aThrL302D, v5);
 v6 = param_mutex_lock(4, 1000);
 printf(aThrL303D, v6);
 v7 = param_condition_variable();
 printf(aThrL304D, v7);
 param_atomic_ops(4, 500);
 printf(aThrL305D);
 v8 = param_thread_local_storage(4);
 printf(aThrL306D, v8);
}


/* Function: main @ 0x3350 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x33CC */
void term_proc()
{
 _do_global_dtors_aux();
}



