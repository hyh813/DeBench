/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdarg.h>
#include <stdint.h>
#include <sched.h>
#include <sys/syscall.h>
#include <netdb.h>

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

/* ELF structures for GOT handling - using int for compatibility */
typedef int Elf32_Dyn;
typedef Elf32_Dyn *Elf32_Dyn_Ptr;

/* Mock GLOBAL_OFFSET_TABLE_ for position-independent code references */
/* Use a union to support both integer and pointer access */
typedef union {
    int int_val;
    void *ptr_val;
    pthread_mutex_t *mutex_ptr;
} GOTEntry;

static GOTEntry GLOBAL_OFFSET_TABLE_[256];
static GOTEntry *GLOBAL_OFFSET_TABLE_PTR = GLOBAL_OFFSET_TABLE_;

/* These are the actual variables that GOT entries will reference */
static int got_offset_64_var = 1;
static int got_offset_66_var = 0;
static int got_array_10_var[2] = {0, 0};
static int *got_array_10_ptr = got_array_10_var;
static pthread_mutex_t got_mutex_82_var = PTHREAD_MUTEX_INITIALIZER;

/* Forward declarations for variables used in init */
static unsigned char byte_9[10];  /* Forward declaration - defined later */

__attribute__((constructor))
static void init_got_entries(void) {
    GLOBAL_OFFSET_TABLE_[64].int_val = 1;           /* Used as integer (boolean) */
    GLOBAL_OFFSET_TABLE_[65].ptr_val = &byte_9[1]; /* Used as pointer */
    GLOBAL_OFFSET_TABLE_[66].int_val = 0;           /* Used as integer counter */
    GLOBAL_OFFSET_TABLE_[67].int_val = 1;           /* Used as boolean */
    GLOBAL_OFFSET_TABLE_[10].ptr_val = got_array_10_var;  /* Used as pointer to array */
    GLOBAL_OFFSET_TABLE_[82].mutex_ptr = &got_mutex_82_var; /* Used as mutex pointer */
}

/* Define GOT_OFFSET macro to access GOT entries correctly */
#define GOT_OFFSET(n) (*(int *)((char *)GLOBAL_OFFSET_TABLE_PTR + (n) * 4))
#define GOT_OFFSET_PTR(n) ((void **)((char *)GLOBAL_OFFSET_TABLE_PTR + (n) * 4))

/* These macros provide compatibility with code that uses &GLOBAL_OFFSET_TABLE_ + N */
/* For code that does *(&GLOBAL_OFFSET_TABLE_ + n), we need to return the element at index n */
#define GOT_IDX(n) (&GLOBAL_OFFSET_TABLE_[n])
#define GOT_VAL(n) (GLOBAL_OFFSET_TABLE_[n].int_val)
#define GOT_VALP(n) ((void *)GLOBAL_OFFSET_TABLE_[n].ptr_val)

/* Mock data for external references */
static unsigned int dword_0 = 1;
static unsigned char unk_4404[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
static unsigned char byte_9[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

/* Mock string constants */
static char asc_40AA[] = "=== Standard Library Function Tests ===\n";
static char asc_4250[] = "=== System Call Tests ===\n";
static char asc_433A[] = "=== Thread Concurrency Tests ===\n";
static char aLibL101D[] = "strcpy: %d\n";
static char aLibL102D[] = "strcmp: %d\n";
static char aLibL103D[] = "strlen: %d\n";
static char aLibL104D[] = "memcpy: %d\n";
static char aLibL105D[] = "memcmp: %d\n";
static char aLibL106D[] = "printf: %d\n";
static char aLibL107D[] = "scanf: %d\n";
static char aLibL108D[] = "fopen/fclose: %d\n";
static char aLibL109D[] = "fread/fwrite: %d\n";
static char aLibL110D[] = "malloc/free: %d\n";
static char aLibL111D[] = "memset: %d\n";
static char aLibL112D[] = "strchr/strstr: %d\n";
static char aSysL301D[] = "linux_syscall: %d\n";
static char aSysL302D[] = "win32_api: %d\n";
static char aSysL303D[] = "fork_exec: %d\n";
static char aSysL304D[] = "pipe_communication: %d\n";
static char aSysL305D[] = "socket_create: %d\n";
static char aSysL306D[] = "shmget_shmat: %d\n";
static char aSysL307D[] = "signal_handling: %d\n";
static char aThrL301D[] = "pthread_create: %d\n";
static char aThrL302D[] = "pthread_join: %d\n";
static char aThrL303D[] = "mutex_lock: %d\n";
static char aThrL304D[] = "condition_variable: %d\n";
static char aThrL305D[] = "atomic_ops: %d\n";
static char aThrL306D[] = "thread_local_storage: %d\n";

/* Define NULL if not already defined */
#ifndef NULL
#define NULL ((void*)0)
#endif

/* Windows intrinsics for atomic operations */
#ifdef __GNUC__
#define _InterlockedExchangeAdd(ptr, val) __atomic_fetch_add((volatile typeof(*(ptr))*)(ptr), (val), __ATOMIC_SEQ_CST)
#define _InterlockedCompareExchange(ptr, new, old) __sync_val_compare_and_swap((volatile typeof(*(ptr))*)(ptr), (old), (new))
#define _InterlockedExchange(ptr, val) (__sync_synchronize(), typeof(*(ptr)) __old = *(ptr); *(ptr) = (val); __old)
#else
#include <intrin.h>
#endif

/* Windows TLS intrinsics (x86/x64 specific) */
#ifdef __i386__
#define __readgsdword(offset) (*(unsigned int *)((unsigned char *)__builtin_frame_address(0) + (offset)))
#define __writegsdword(offset, value) (*(unsigned int *)((unsigned char *)__builtin_frame_address(0) + (offset)) = (value))
#elif defined(__x86_64__)
#define __readgsqword(offset) (*(unsigned long long *)((unsigned char *)__builtin_frame_address(0) + (offset)))
#define __writegsqword(offset, value) (*(unsigned long long *)((unsigned char *)__builtin_frame_address(0) + (offset)) = (value))
#endif

/* Fallback for other architectures - use pthread-based TLS simulation */
#ifndef __readgsdword
#define __readgsdword(offset) ((unsigned int)0)
#define __writegsdword(offset, value) ((void)0)
#endif

#ifndef __readgsqword
#define __readgsqword(offset) ((unsigned long long)0)
#define __writegsqword(offset, value) ((void)0)
#endif

/* socket address structure for compatibility */
#ifndef s_family
#define s_family sa_family
#endif

/* __isoc99_sscanf fallback */
#ifndef __isoc99_sscanf
#define __isoc99_sscanf sscanf
#endif

/* External declarations */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Undefined globals referenced in code */
int signal_received = 0;
int signal_number = 0;
int atomic_counter = 0;
int ready = 0;
int data = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;

/* Thread data structure */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

/* Signal handler function declaration */
void signal_handler(int sig);

/* Thread functions */
void *thread_compute(void *arg);
void *thread_sum(void *arg);
void *thread_increment(void *arg);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);
void *thread_atomic_increment(void *arg);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *arg);

/* External data references (from binary) */
/* Note: These are declared as static below, so no extern declarations needed */

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_clang_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
void _gmon_start__(void);
void frame_dummy(void);
int _do_global_ctors_aux(void);

int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *%%ebx" : : );
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
int param_strcpy(char *dst, const char *src)
{
 strcpy(dst, src);
 return strlen(dst);
}


/* Function: call_strcpy @ 0x15B0 */
int call_strcpy()
{
 char buffer[36]; // [esp+14h] [ebp-24h] BYREF

 return param_strcpy(buffer, "HelloLib");
}


/* Function: param_strcmp @ 0x15F0 */
int param_strcmp(const char *s1, const char *s2)
{
 int v2; // eax
 int ret; // [esp+10h] [ebp-8h]

 ret = strcmp(s1, s2);
 if ( ret > 0 )
 return 1;
 v2 = 0;
 if ( ret < 0 )
 return -1;
 return v2;
}


/* Function: call_strcmp @ 0x1660 */
int call_strcmp()
{
 int r2; // [esp+1Ch] [ebp-Ch]
 int r1; // [esp+20h] [ebp-8h]

 r1 = param_strcmp("abc", "def");
 r2 = param_strcmp("xyz", "xyz");
 return param_strcmp("bbb", "aaa") + r2 + r1;
}


/* Function: param_strlen @ 0x16E0 */
int param_strlen(const char *str)
{
 return strlen(str);
}


/* Function: call_strlen @ 0x1710 */
int call_strlen()
{
 return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x1740 */
int param_memcpy(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
 return n;
}


/* Function: call_memcpy @ 0x1780 */
int call_memcpy()
{
 int dst[5]; // [esp+1Ch] [ebp-2Ch] BYREF
 int src[5]; // [esp+30h] [ebp-18h] BYREF

 memcpy(src, &unk_4404, sizeof(src));
 memset(dst, 0, sizeof(dst));
 param_memcpy(dst, src, 0x14u);
 return dst[4] + dst[2] + dst[0];
}


/* Function: param_memcmp @ 0x1800 */
int param_memcmp(const void *p1, const void *p2, size_t n)
{
 int v3; // eax
 int ret; // [esp+1Ch] [ebp-Ch]

 ret = memcmp(p1, p2, n);
 if ( ret > 0 )
 return 1;
 v3 = 0;
 if ( ret < 0 )
 return -1;
 return v3;
}


/* Function: call_memcmp @ 0x1870 */
int call_memcmp()
{
 int r1; // [esp+1Ch] [ebp-2Ch]
 int arr3[3]; // [esp+20h] [ebp-28h] BYREF
 int arr2[3]; // [esp+2Ch] [ebp-1Ch] BYREF
 int arr1[4]; // [esp+38h] [ebp-10h] BYREF

 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 r1 = param_memcmp(arr1, arr2, 0xCu);
 return param_memcmp(arr1, arr3, 0xCu) + r1;
}


/* Function: param_printf @ 0x1920 */
int param_printf(int x, const char *name)
{
 return printf("Value: %d, Name: %s\n", x, name);
}


/* Function: call_printf @ 0x1970 */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x19B0 */
int param_scanf(const char *input_str)
{
 int b; // [esp+14h] [ebp-14h] BYREF
 int a; // [esp+18h] [ebp-10h] BYREF

 if ( __isoc99_sscanf(input_str, "%d,%d", &a, &b) == 2 )
 return b + a;
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
 int fd; // [esp+18h] [ebp-10h]
 FILE *fp; // [esp+1Ch] [ebp-Ch]

 fp = fopen(filename, "r");
 if ( !fp )
 return -1;
 fd = fileno(fp);
 fclose(fp);
 return fd;
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
int param_fread_fwrite(const char *tmpfile)
{
 size_t v1; // eax
 int v2; // eax
 bool v4; // [esp+13h] [ebp-45h]
 size_t read; // [esp+20h] [ebp-38h]
 size_t written; // [esp+24h] [ebp-34h]
 FILE *fp; // [esp+28h] [ebp-30h]
 char read_buffer[32]; // [esp+2Ch] [ebp-2Ch] BYREF
 const char *write_data; // [esp+4Ch] [ebp-Ch]

 write_data = "BinBench Test Data";
 fp = fopen(tmpfile, "w+");
 if ( !fp )
 return -1;
 v1 = strlen(write_data);
 written = fwrite(write_data, 1u, v1, fp);
 if ( written == strlen(write_data) )
 {
 rewind(fp);
 read = fread(read_buffer, (size_t)&dword_0 + 1, written, fp);
 read_buffer[read] = 0;
 fclose(fp);
 unlink(tmpfile);
 v4 = 0;
 if ( read == written )
 v4 = strcmp(read_buffer, write_data) == 0;
 v2 = -3;
 if ( v4 )
 return 42;
 return v2;
 }
 else
 {
 fclose(fp);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x1C80 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1CB0 */
int param_malloc_free(size_t size)
{
 int sum; // [esp+14h] [ebp-14h]
 size_t i; // [esp+18h] [ebp-10h]
 int *ptr; // [esp+1Ch] [ebp-Ch]

 ptr = (int *)malloc(4 * size);
 if ( !ptr )
 return -1;
 for ( i = 0; i < size; ++i )
 ptr[i] = 10 * i;
 sum = ptr[size - 1] + *ptr;
 free(ptr);
 return sum;
}


/* Function: call_malloc_free @ 0x1D60 */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x1D90 */
int param_memset(void *buffer, size_t size)
{
 size_t i; // [esp+18h] [ebp-10h]
 int sum; // [esp+1Ch] [ebp-Ch]

 memset(buffer, 0, size);
 sum = 0;
 for ( i = 0; i < size; ++i )
 sum += *((unsigned char *)buffer + i);
 return sum;
}


/* Function: call_memset @ 0x1E10 */
int call_memset()
{
 int i; // [esp+18h] [ebp-30h]
 int buffer[11]; // [esp+1Ch] [ebp-2Ch] BYREF

 for ( i = 0; i < 10; ++i )
 buffer[i] = 255;
 param_memset(buffer, 0x28u);
 return buffer[9] + buffer[0];
}


/* Function: param_strchr_strstr @ 0x1E80 */
int param_strchr_strstr(const char *str, char ch_0, const char *substr)
{
 int v4; // [esp+8h] [ebp-20h]
 int v5; // [esp+Ch] [ebp-1Ch]
 char *pos2; // [esp+18h] [ebp-10h]
 char *pos1; // [esp+20h] [ebp-8h]

 pos1 = strchr(str, ch_0);
 if ( pos1 )
 v5 = pos1 - str;
 else
 v5 = -1;
 pos2 = strstr(str, substr);
 if ( pos2 )
 v4 = pos2 - str;
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
void test_standard_library_functions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
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
 printf(aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x2120 */
int param_linux_syscall(const char *pathname)
{
 int fd; // [esp+1Ch] [ebp-Ch]

 fd = syscall(5, pathname, 0);
 if ( fd < 0 )
 return -*__errno_location();
 syscall(6, fd);
 return fd;
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
int param_win32_api(const char *filename)
{
 int v1; // eax
 struct stat st; // [esp+8h] [ebp-60h] BYREF

 if ( stat(filename, &st) < 0 )
 return -1;
 v1 = -2;
 if ( st.st_size > 0 )
 return 42;
 return v1;
}


/* Function: call_win32_api @ 0x2240 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x2270 */
int param_fork_exec(const char *prog, const char *arg)
{
 int status; // [esp+24h] [ebp-14h] BYREF
 pid_t pid; // [esp+28h] [ebp-10h]

 pid = fork();
 if ( pid < 0 )
 return -1;
 if ( !pid )
 {
 execl(prog, prog, arg, 0);
 _exit(127);
 }
 if ( waitpid(pid, &status, 0) < 0 )
 return -2;
 if ( (status & 0x7F) != 0 )
 return -3;
 return (status & 0xFF00) >> 8;
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
 int bytes; // [esp+1Ch] [ebp-3Ch]
 pid_t pid; // [esp+24h] [ebp-34h]
 char buffer[32]; // [esp+28h] [ebp-30h] BYREF
 int pipefd[2]; // [esp+48h] [ebp-10h] BYREF

 if ( pipe(pipefd) < 0 )
 return -1;
 pid = fork();
 if ( pid < 0 )
 return -2;
 if ( !pid )
 {
 close(pipefd[0]);
 fd = pipefd[1];
 v0 = strlen("HelloPipe");
 write(fd, "HelloPipe", v0);
 close(pipefd[1]);
 _exit(0);
 }
 close(pipefd[1]);
 bytes = read(pipefd[0], buffer, 0x1Fu);
 buffer[bytes] = 0;
 close(pipefd[0]);
 wait(0);
 v1 = -3;
 if ( bytes > 0 )
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
 struct sockaddr_in addr; // [esp+18h] [ebp-20h] BYREF
 int opt; // [esp+28h] [ebp-10h] BYREF
 int sock; // [esp+2Ch] [ebp-Ch]

 sock = socket(AF_INET, SOCK_STREAM, 0);
 if ( sock < 0 )
 return -1;
 opt = 1;
 if ( setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) >= 0 )
 {
 memset(&addr, 0, sizeof(addr));
 addr.sin_family = AF_INET;
 addr.sin_port = 0;
 addr.sin_addr.s_addr = INADDR_ANY;
 if ( bind(sock, (const struct sockaddr *)&addr, sizeof(addr)) >= 0 )
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


/* Function: call_socket_create @ 0x2690 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x26B0 */
size_t param_shmget_shmat()
{
 size_t len; // [esp+18h] [ebp-20h]
 char *shm; // [esp+1Ch] [ebp-1Ch]
 int shmid; // [esp+20h] [ebp-18h]
 int key; // [esp+24h] [ebp-14h]
 int fd; // [esp+28h] [ebp-10h]

 fd = open("/tmp/binbench_shm", 66, 438);
 if ( fd < 0 )
 return -1;
 close(fd);
 key = ftok("/tmp/binbench_shm", 42);
 if ( key < 0 )
 return -1;
 shmid = shmget(key, 4096, 950);
 if ( shmid < 0 )
 return -2;
 shm = (char *)shmat(shmid, NULL, 0);
 if ( shm == (char *)-1 )
 return -3;
 strcpy(shm, "SharedMemory");
 len = strlen(shm);
 shmdt(shm);
 shmctl(shmid, 0, 0);
 return len;
}


/* Function: call_shmget_shmat @ 0x2820 */
int call_shmget_shmat()
{
 signed int v0; // edx
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
 int attempts; // [esp+1Ch] [ebp-Ch]
 int attemptsa; // [esp+1Ch] [ebp-Ch]

 if ( signal(10, signal_handler) == (__sighandler_t)-1 )
 return -1;
 if ( signal(14, signal_handler) == (__sighandler_t)-1 )
 return -2;
 signal_received = 0;
 raise(10);
 attempts = 1000;
 while ( 1 )
 {
 v4 = 0;
 if ( !GLOBAL_OFFSET_TABLE_[64].int_val )
 {
 v0 = attempts--;
 v4 = v0 > 0;
 }
 if ( !v4 )
 break;
 usleep(0x3E8u);
 }
 if ( !GLOBAL_OFFSET_TABLE_[64].int_val )
 return -3;
 if ( GLOBAL_OFFSET_TABLE_[65].ptr_val != (void *)&byte_9[1] )
 return -4;
 signal_received = 0;
 alarm(1u);
 attemptsa = 2000;
 while ( 1 )
 {
 v3 = 0;
 if ( !GOT_VAL(64) )
 {
 v1 = attemptsa--;
 v3 = v1 > 0;
 }
 if ( !v3 )
 break;
 usleep(0x3E8u);
 }
 if ( !GOT_VAL(64) || GOT_VALP(65) != (void *)&byte_9[5] )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: signal_handler @ 0x2A70 */
void signal_handler(int sig)
{
 signal_received = 1;
 signal_number = sig;
}


/* Function: call_signal_handling @ 0x2AA0 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2AC0 */
void test_system_calls()
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
 printf(aSysL307D, v6);
}


/* Function: thread_compute @ 0x2BC0 */
void * thread_compute(void *arg)
{
 void *v1; // eax
 int result; // [esp+8h] [ebp-10h]

 result = *(unsigned int *)arg * *(unsigned int *)arg;
 v1 = malloc(4u);
 *(unsigned int *)v1 = result;
 return v1;
}


/* Function: param_pthread_create @ 0x2C10 */
int param_pthread_create(int x)
{
 int result; // [esp+1Ch] [ebp-1Ch]
 void *thread_ret; // [esp+24h] [ebp-14h] BYREF
 int input; // [esp+28h] [ebp-10h] BYREF
 pthread_t tid; // [esp+2Ch] [ebp-Ch] BYREF

 input = x;
 if ( pthread_create(&tid, 0, thread_compute, &input) )
 return -1;
 pthread_join(tid, &thread_ret);
 result = *(unsigned int *)thread_ret;
 free(thread_ret);
 return result;
}


/* Function: call_pthread_create @ 0x2CB0 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2CE0 */
void * thread_sum(void *arg)
{
 int i; // [esp+0h] [ebp-8h]

 *((unsigned int *)arg + 2) = 0;
 for ( i = *(unsigned int *)arg; i <= *((unsigned int *)arg + 1); ++i )
 *((unsigned int *)arg + 2) += i;
 return 0;
}


/* Function: param_pthread_join @ 0x2D40 */
int param_pthread_join()
{
 int i_0; // [esp+14h] [ebp-44h]
 int total; // [esp+18h] [ebp-40h]
 int i; // [esp+1Ch] [ebp-3Ch]
 ThreadData data[3]; // [esp+20h] [ebp-38h] BYREF
 pthread_t tids[3]; // [esp+44h] [ebp-14h] BYREF

 memset(data, 0, sizeof(data));
 data[0].start = 1;
 data[0].end = 10;
 data[1].start = 11;
 data[1].end = 20;
 data[2].start = 21;
 data[2].end = 30;
 for ( i = 0; i < 3; ++i )
 {
 if ( pthread_create(&tids[i], 0, thread_sum, &data[i]) )
 return -1;
 }
 total = 0;
 for ( i_0 = 0; i_0 < 3; ++i_0 )
 {
 if ( pthread_join(tids[i_0], 0) )
 return -2;
 total += data[i_0].result;
 }
 return total;
}


/* Function: call_pthread_join @ 0x2E90 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2EB0 */
void * thread_increment(void *arg)
{
 int i; // [esp+Ch] [ebp-Ch]
 int iterations; // [esp+10h] [ebp-8h]

 iterations = *(unsigned int *)arg;
 for ( i = 0; i < iterations; ++i )
 {
 pthread_mutex_lock(GLOBAL_OFFSET_TABLE_[82].mutex_ptr);
 GLOBAL_OFFSET_TABLE_[66].int_val = GLOBAL_OFFSET_TABLE_[66].int_val + 1;
 pthread_mutex_unlock(GLOBAL_OFFSET_TABLE_[82].mutex_ptr);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x2F40 */
int param_mutex_lock(int thread_count, int iterations_per_thread)
{
 int v2; // eax
 int i_0; // [esp+20h] [ebp-18h]
 int i; // [esp+24h] [ebp-14h]
 pthread_t *tids; // [esp+28h] [ebp-10h]

 tids = (pthread_t *)malloc(4 * thread_count);
 if ( !tids )
 return -1;
 GLOBAL_OFFSET_TABLE_[66].int_val = 0;
 for ( i = 0; i < thread_count; ++i )
 {
 if ( pthread_create(&tids[i], 0, thread_increment, &iterations_per_thread) )
 {
 free(tids);
 return -2;
 }
 }
 for ( i_0 = 0; i_0 < thread_count; ++i_0 )
 pthread_join(tids[i_0], 0);
 free(tids);
 v2 = -3;
 if ( GLOBAL_OFFSET_TABLE_[66].int_val == iterations_per_thread * thread_count )
 return 42;
 return v2;
}


/* Function: call_mutex_lock @ 0x3090 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x30C0 */
void * consumer_thread(void *arg)
{
 void *result; // eax
 int received; // [esp+10h] [ebp-8h]

 pthread_mutex_lock(&cond_mutex);
 while ( !GLOBAL_OFFSET_TABLE_[67].int_val )
 pthread_cond_wait(&cond, &cond_mutex);
 received = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *(unsigned int *)result = received;
 return result;
}


/* Function: producer_thread @ 0x3160 */
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


/* Function: param_condition_variable @ 0x31E0 */
int param_condition_variable()
{
 int result; // [esp+20h] [ebp-18h]
 void *consumer_ret; // [esp+24h] [ebp-14h] BYREF
 pthread_t consumer; // [esp+28h] [ebp-10h] BYREF
 pthread_t producer; // [esp+2Ch] [ebp-Ch] BYREF

 ready = 0;
 data = 0;
 if ( pthread_create(&consumer, 0, consumer_thread, 0) )
 return -1;
 if ( pthread_create(&producer, 0, producer_thread, 0) )
 {
 pthread_cancel(consumer);
 return -2;
 }
 else
 {
 pthread_join(consumer, &consumer_ret);
 pthread_join(producer, 0);
 result = *(unsigned int *)consumer_ret;
 free(consumer_ret);
 return result;
 }
}


/* Function: call_condition_variable @ 0x32F0 */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x3310 */
void * thread_atomic_increment(void *arg)
{
 signed int i; // [esp+24h] [ebp-8h]
 int iterations; // [esp+28h] [ebp-4h]

 iterations = *(unsigned int *)arg;
 for ( i = 0; i < iterations; ++i )
 {
 _InterlockedExchangeAdd((volatile int *)(got_array_10_ptr) + 1, 1u);
 _InterlockedCompareExchange((volatile int *)(got_array_10_ptr) + 1, i + 1000, i);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x33C0 */
void * thread_atomic_load_store(void *arg)
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x3400 */
int param_atomic_ops(int thread_count, int iterations)
{
 int v2; // eax
 int final_value; // [esp+18h] [ebp-20h]
 int i_0; // [esp+1Ch] [ebp-1Ch]
 pthread_t load_store_tid; // [esp+20h] [ebp-18h] BYREF
 int i; // [esp+24h] [ebp-14h]
 int v8; // [esp+28h] [ebp-10h]
 pthread_t *tids; // [esp+2Ch] [ebp-Ch]

 tids = (pthread_t *)malloc(4 * thread_count);
 if ( !tids )
 return -1;
 v8 = 0;
 _InterlockedExchange((volatile int *)((int *)GLOBAL_OFFSET_TABLE_[10].ptr_val) + 1, 0);
 for ( i = 0; i < thread_count; ++i )
 {
 if ( pthread_create(&tids[i], 0, thread_atomic_increment, &iterations) )
 {
 free(tids);
 return -2;
 }
 }
 if ( !pthread_create(&load_store_tid, 0, thread_atomic_load_store, 0) )
 pthread_join(load_store_tid, 0);
 for ( i_0 = 0; i_0 < thread_count; ++i_0 )
 pthread_join(tids[i_0], 0);
 final_value = atomic_counter;
 free(tids);
 v2 = -3;
 if ( final_value > 0 )
 return 42;
 return v2;
}


/* Function: call_atomic_ops @ 0x35A0 */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x35D0 */
void * thread_tls_test(void *arg)
{
 void *result; // eax
 int initial; // [esp+1Ch] [ebp-Ch]

 initial = __readgsdword(0xFFFFFFDC);
 __writegsdword(0xFFFFFFDC, initial + 50);
 strncpy((char *)(__readgsdword(0) - 32), (const char *)arg, 0x1Fu);
 result = malloc(8u);
 *(unsigned int *)result = initial;
 *((unsigned int *)result + 1) = __readgsdword(0xFFFFFFDC);
 return result;
}


/* Function: param_thread_local_storage @ 0x3660 */
int param_thread_local_storage(int thread_count)
{
 int v1; // eax
 bool v3; // [esp+1Bh] [ebp-3Dh]
 void *ret; // [esp+2Ch] [ebp-2Ch] BYREF
 int i_1; // [esp+30h] [ebp-28h]
 int total_final; // [esp+34h] [ebp-24h]
 int total_initial; // [esp+38h] [ebp-20h]
 int j; // [esp+3Ch] [ebp-1Ch]
 int i_0; // [esp+40h] [ebp-18h]
 int i; // [esp+44h] [ebp-14h]
 char **names; // [esp+48h] [ebp-10h]
 pthread_t *tids; // [esp+4Ch] [ebp-Ch]

 tids = (pthread_t *)malloc(4 * thread_count);
 names = (char **)malloc(4 * thread_count);
 if ( !tids || !names )
 return -1;
 for ( i = 0; i < thread_count; ++i )
 {
 names[i] = (char *)malloc(0x10u);
 snprintf(names[i], 0x10u, "Thread-%d", i);
 }
 for ( i_0 = 0; i_0 < thread_count; ++i_0 )
 {
 if ( pthread_create(&tids[i_0], 0, thread_tls_test, names[i_0]) )
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
 for ( i_1 = 0; i_1 < thread_count; ++i_1 )
 {
 pthread_join(tids[i_1], &ret);
 total_initial += *(unsigned int *)ret;
 total_final += *((unsigned int *)ret + 1);
 free(ret);
 free(names[i_1]);
 }
 free(names);
 free(tids);
 v3 = 0;
 if ( total_initial == 100 * thread_count )
 v3 = total_final == 150 * thread_count;
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
void test_thread_concurrency()
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
 printf(aThrL306D, v5);
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

/* FAILED to decompile: stat_0 @ 0x7228 */

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
