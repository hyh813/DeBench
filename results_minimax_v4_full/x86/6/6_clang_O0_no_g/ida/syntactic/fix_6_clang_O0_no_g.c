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

/* Required includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/errno.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <elf.h>
#include <errno.h>
#include <stdatomic.h>

/* ELF types for 32-bit */
typedef struct {
    int32_t d_tag;
    union {
        int32_t d_val;
        void *d_ptr;
    } d_un;
} Elf32_Dyn;

/* Define missing types */
typedef unsigned long __ULong;
typedef void (*sighandler_t)(int);
typedef int __pid_t;
typedef int key_t;
typedef unsigned int atomic_t;

/* GLOBAL_OFFSET_TABLE_ is treated as a byte array in the binary for pointer arithmetic */
#define GOT_BYTE(offset) (GLOBAL_OFFSET_TABLE_[(offset)])
#define GOT_INT(offset) (*(int *)(GLOBAL_OFFSET_TABLE_ + (offset)))
#define GOT_INTPTR(offset) ((int *)(GLOBAL_OFFSET_TABLE_ + (offset)))
#define GOT_ELFPTR(offset) ((Elf32_Dyn **)(GLOBAL_OFFSET_TABLE_ + (offset)))
/* Macros for accessing specific offset types (using char* for byte-level addressing) */
#define GOT_AT_MUTEX(offset) ((pthread_mutex_t *)((char *)GLOBAL_OFFSET_TABLE_ + (offset)))
#define GOT_AT_INT(offset) ((volatile int *)((char *)GLOBAL_OFFSET_TABLE_ + (offset)))
#define GOT_AT_PTR(offset) ((void **)((char *)GLOBAL_OFFSET_TABLE_ + (offset)))
extern unsigned char GLOBAL_OFFSET_TABLE_[];

/* Atomic operation wrappers */
static inline int _InterlockedExchangeAdd(volatile int *ptr, int val) {
    return __sync_fetch_and_add(ptr, val);
}

static inline int _InterlockedCompareExchange(volatile int *ptr, int val, int comp) {
    return __sync_val_compare_and_swap(ptr, comp, val);
}

static inline int _InterlockedExchange(volatile int *ptr, int val) {
    return __sync_lock_test_and_set(ptr, val);
}

/* TLS access for x86 (simplified) */
static inline unsigned int __readgsdword(unsigned long offset) {
    return 0;
}

static inline void __writegsdword(unsigned long offset, unsigned int val) {
    (void)offset;
    (void)val;
}

/* Global variables */
extern int signal_received;
extern int signal_number;
extern int ready;
extern int data;
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern int atomic_counter;
extern int byte_9[];
extern int dword_0;
extern char unk_4404[];

/* String constants referenced in code */
extern char asc_40AA[];
extern char asc_4250[];
extern char asc_433A[];
extern char aLibL101D[];
extern char aLibL102D[];
extern char aLibL103D[];
extern char aLibL104D[];
extern char aLibL105D[];
extern char aLibL106D[];
extern char aLibL107D[];
extern char aLibL108D[];
extern char aLibL109D[];
extern char aLibL110D[];
extern char aLibL111D[];
extern char aLibL112D[];
extern char aSysL301D[];
extern char aSysL302D[];
extern char aSysL303D[];
extern char aSysL304D[];
extern char aSysL305D[];
extern char aSysL306D[];
extern char aSysL307D[];
extern char aThrL301D[];
extern char aThrL302D[];
extern char aThrL303D[];
extern char aThrL304D[];
extern char aThrL305D[];
extern char aThrL306D[];

/* Function prototypes */
void signal_handler(int sig);
int main(int argc, const char **argv, const char **envp);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_clang_O0_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 /* CRT stubs - these are no-ops for this binary */
 return 0;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
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
int param_printf(int a1, const char *a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1970 */
int call_printf()
{
 return param_printf(42, "Test");
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
int param_fopen_fclose(const char *filename)
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
 v5 = fread(v8, 1, n, s);
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
int param_linux_syscall(const char *a1)
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

 v0 = param_linux_syscall("/etc/passwd");
 result = -1;
 if ( v0 >= 0 )
 return 42;
 return result;
}


/* Function: param_win32_api @ 0x21E0 */
int param_win32_api(const char *file)
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
int param_fork_exec(const char *arg, const char *a2)
{
 int stat_loc; // [esp+24h] [ebp-14h] BYREF
 __pid_t pid; // [esp+28h] [ebp-10h]

 pid = fork();
 if ( pid < 0 )
 return -1;
 if ( !pid )
 {
 execl(arg, arg, a2, (char *)NULL);
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
 char *dest; // [esp+20h] [ebp-18h]
 key_t v4; // [esp+24h] [ebp-14h]
 int fd; // [esp+28h] [ebp-10h]

 fd = open("/tmp/binbench_shm", 66, 438);
 if ( fd < 0 )
 return -1;
 close(fd);
 v4 = ftok("/tmp/binbench_shm", 42);
 if ( v4 < 0 )
 return -1;
 dest = (char *)shmget(v4, 4096, 950);
 if ( (int)dest < 0 )
 return -2;
 v2 = (char *)shmat(0, dest, 0, 0);
 if ( v2 == (char *)-1 )
 return -3;
 strcpy(v2, "SharedMemory");
 v1 = strlen(v2);
 shmdt(v2);
 shmctl(dest, 0, 0);
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

 if ( signal(10, (sighandler_t)signal_handler) == (sighandler_t)-1 )
 return -1;
 if ( signal(14, (sighandler_t)signal_handler) == (sighandler_t)-1 )
 return -2;
 signal_received = 0;
 raise(10);
 v5 = 1000;
 while ( 1 )
 {
 v4 = 0;
 if ( !((int*)GLOBAL_OFFSET_TABLE_)[64] )
 {
 v0 = v5--;
 v4 = v0 > 0;
 }
 if ( !v4 )
 break;
 usleep(0x3E8u);
 }
 if ( !((int*)GLOBAL_OFFSET_TABLE_)[64] )
 return -3;
 if ( ((Elf32_Dyn**)((int*)GLOBAL_OFFSET_TABLE_))[65] != (Elf32_Dyn *)&byte_9[1] )
 return -4;
 signal_received = 0;
 alarm(1u);
 v6 = 2000;
 while ( 1 )
 {
 v3 = 0;
 if ( !((int*)GLOBAL_OFFSET_TABLE_)[64] )
 {
 v1 = v6--;
 v3 = v1 > 0;
 }
 if ( !v3 )
 break;
 usleep(0x3E8u);
 }
 if ( !((int*)GLOBAL_OFFSET_TABLE_)[64] || ((Elf32_Dyn**)((int*)GLOBAL_OFFSET_TABLE_))[65] != (Elf32_Dyn *)&byte_9[5] )
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
int *thread_compute(int *a1)
{
 int *result; // eax
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
int thread_sum(int *a1)
{
 int i; // [esp+0h] [ebp-8h]

 a1[2] = 0;
 for ( i = *a1; i <= a1[1]; ++i )
 a1[2] += i;
 return 0;
}


/* Function: param_pthread_join @ 0x2D40 */
int param_pthread_join()
{
 int j; // [esp+14h] [ebp-44h]
 int v2; // [esp+18h] [ebp-40h]
 int i; // [esp+1Ch] [ebp-3Ch]
 unsigned int s[12]; // [esp+20h] [ebp-38h] BYREF

 memset(s, 0, 0x24u);
 s[0] = 1;
 s[1] = 10;
 s[3] = 11;
 s[4] = 20;
 s[6] = 21;
 s[7] = 30;
 for ( i = 0; i < 3; ++i )
 {
 if ( pthread_create(&s[i + 9], 0, (void *(*)(void *))thread_sum, &s[3 * i]) )
 return -1;
 }
 v2 = 0;
 for ( j = 0; j < 3; ++j )
 {
 if ( pthread_join(s[j + 9], 0) )
 return -2;
 v2 += s[3 * j + 2];
 }
 return v2;
}


/* Function: call_pthread_join @ 0x2E90 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2EB0 */
int thread_increment(int *a1)
{
 int i; // [esp+Ch] [ebp-Ch]
 int v3; // [esp+10h] [ebp-8h]

 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
 pthread_mutex_lock(GOT_AT_MUTEX(82));
 GOT_INT(66) = GOT_INT(66) + 1;
 pthread_mutex_unlock(GOT_AT_MUTEX(82));
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
 void *ptr; // [esp+28h] [ebp-10h]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 GLOBAL_OFFSET_TABLE_[66] = 0;
 for ( i = 0; i < a1; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(ptr);
 return -2;
 }
 }
 for ( j = 0; j < a1; ++j )
 pthread_join(*((unsigned int *)ptr + j), 0);
 free(ptr);
 v2 = -3;
 if ( GLOBAL_OFFSET_TABLE_[66] == arg * a1 )
 return 42;
 return v2;
}


/* Function: call_mutex_lock @ 0x3090 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x30C0 */
unsigned int *consumer_thread()
{
 unsigned int *result; // eax
 int v1; // [esp+10h] [ebp-8h]

 pthread_mutex_lock(&cond_mutex);
 while ( !GLOBAL_OFFSET_TABLE_[67] )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x3160 */
int producer_thread()
{
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
int thread_atomic_increment(signed int *a1)
{
 signed int i; // [esp+24h] [ebp-8h]
 signed int v3; // [esp+28h] [ebp-4h]

 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
 _InterlockedExchangeAdd(GOT_AT_INT(40), 1u);
 _InterlockedCompareExchange(GOT_AT_INT(40), i + 1000, i);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x33C0 */
int thread_atomic_load_store()
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
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
 void *ptr; // [esp+2Ch] [ebp-Ch]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 v8 = 0;
 _InterlockedExchange((volatile int *)(GLOBAL_OFFSET_TABLE_ + 11), 0);
 for ( i = 0; i < a1; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(ptr);
 return -2;
 }
 }
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( j = 0; j < a1; ++j )
 pthread_join(*((unsigned int *)ptr + j), 0);
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
unsigned int * thread_tls_test(const char *a1)
{
 unsigned int *result; // eax
 unsigned int v2; // [esp+1Ch] [ebp-Ch]

 v2 = __readgsdword(0xFFFFFFDC);
 __writegsdword(0xFFFFFFDC, v2 + 50);
 strncpy((char *)(__readgsdword(0) - 32), a1, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = __readgsdword(0xFFFFFFDC);
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
 void *ptr; // [esp+48h] [ebp-10h]
 void *v12; // [esp+4Ch] [ebp-Ch]

 v12 = malloc(4 * a1);
 ptr = malloc(4 * a1);
 if ( !v12 || !ptr )
 return -1;
 for ( i = 0; i < a1; ++i )
 {
 *((unsigned int *)ptr + i) = malloc(0x10u);
 snprintf(*((char **)ptr + i), 0x10u, "Thread-%d", i);
 }
 for ( j = 0; j < a1; ++j )
 {
 if ( pthread_create((pthread_t *)v12 + j, 0, (void *(*)(void *))thread_tls_test, *((void **)ptr + j)) )
 {
 for ( k = 0; k <= j; ++k )
 free(*((void **)ptr + k));
 free(ptr);
 free(v12);
 return -2;
 }
 }
 v7 = 0;
 v6 = 0;
 for ( m = 0; m < a1; ++m )
 {
 pthread_join(*((unsigned int *)v12 + m), &thread_return);
 v7 += *(unsigned int *)thread_return;
 v6 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(*((void **)ptr + m));
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
 _do_global_dtors_aux();
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
