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

/* Additional type definitions for POSIX types */
typedef unsigned long pthread_t;
typedef struct {
    int __lock;
    unsigned int __count;
    int __owner;
    int __kind;
    unsigned int __nusers;
    int __spins;
    int __elision;
    struct {
        int __lock;
        unsigned int __count;
    } __data;
} pthread_mutex_t;
typedef struct {
    union {
        struct {
            int __lock;
            unsigned int __futex;
            unsigned long long __total_seq;
            unsigned long long __wakeup_seq;
            unsigned long long __woken_seq;
            void *__mutex;
            unsigned int __nwaiters;
            unsigned int __broadcast_seq;
        } __data;
        char __size[48];
        long long __align;
    } __data;
} pthread_cond_t;
typedef struct _IO_FILE FILE;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef struct {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    long st_atime;
    long st_mtime;
    long st_ctime;
} stat_struct;

/* Define struct stat for stat() function */
struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    long st_atime;
    long st_mtime;
    long st_ctime;
};

/* Socket address structure */
typedef struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;

/* Boolean type */
typedef int bool;
#define true 1
#define false 0

/* Macros for byte extraction */
#define BYTE1(x) (((unsigned char*)&(x))[1])
#define LOWORD(x) ((unsigned short)(x))
#define HIWORD(x) ((unsigned short)((unsigned int)(x) >> 16))

/* FS segment access macros (x86-64) */
#define __readfsqword(x) (0ULL)
#define __readfsdword(x) (0U)
#define __writefsdword(x, v) ((void)0)

/* External declarations */
extern long long _gmon_start__(void);

/* Atomic intrinsics for Linux */
static inline signed int _InterlockedIncrement(signed int *ptr) {
    return __atomic_add_fetch(ptr, 1, __ATOMIC_SEQ_CST);
}

static inline signed int _InterlockedExchange(signed int *ptr, signed int val) {
    return __atomic_exchange_n(ptr, val, __ATOMIC_SEQ_CST);
}

static inline signed int _InterlockedCompareExchange(signed int *ptr, signed int exchange, signed int compare) {
    __atomic_compare_exchange_n(ptr, &compare, exchange, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
    return compare;
}

/* qmemcpy is a Hex-Rays decompiler intrinsic - map to memcpy */
static inline void *qmemcpy(void *dest, const void *src, size_t n) {
    return memcpy(dest, src, n);
}

/* Forward declarations */
long long test_standard_library_functions(int argc, const char **argv, const char **envp);
long long test_system_calls(void);
long long test_thread_concurrency(void);

/* Global variables */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int ready = 0;
int data = 0;
signed int atomic_counter = 0;

/* String constants */
const char *s = "Testing standard library functions";
const char *aLibL101D = "Lib L101: %d\n";
const char *aLibL102D = "Lib L102: %d\n";
const char *aLibL103D = "Lib L103: %d\n";
const char *aLibL104D = "Lib L104: %d\n";
const char *aLibL105D = "Lib L105: %d\n";
const char *aLibL106D = "Lib L106: %d\n";
const char *aLibL107D = "Lib L107: %d\n";
const char *aLibL108D = "Lib L108: %d\n";
const char *aLibL109D = "Lib L109: %d\n";
const char *aLibL110D = "Lib L110: %d\n";
const char *aLibL111D = "Lib L111: %d\n";
const char *aLibL112D = "Lib L112: %d\n";
const char *asc_423E = "Testing system calls";
const char *aSysL301D = "Sys L301: %d\n";
const char *aSysL302D = "Sys L302: %d\n";
const char *aSysL303D = "Sys L303: %d\n";
const char *aSysL304D = "Sys L304: %d\n";
const char *aSysL305D = "Sys L305: %d\n";
const char *aSysL306D = "Sys L306: %d\n";
const char *aSysL307D = "Sys L307: %d\n";
const char *asc_4327 = "Testing thread concurrency";
const char *aThrL301D = "Thr L301: %d\n";
const char *aThrL302D = "Thr L302: %d\n";
const char *aThrL303D = "Thr L303: %d\n";
const char *aThrL304D = "Thr L304: %d\n";
const char *aThrL305D = "Thr L305: %d\n";
const char *aThrL306D = "Thr L306: %d\n";
const void *unk_4400 = "\x01\x02\x03\x04\x05\x06\x07\x08\x09";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/6/6_gcc_Os_no_g
 * Processor: pc
 */




/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 /* JUMPOUT removed */
}







































































































































































/* Function: main @ 0x2720 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions(argc, argv, envp);
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: signal_handler @ 0x2829 */
void signal_handler(int a1)
{
 signal_received = 1;
 signal_number = a1;
}


/* Function: thread_sum @ 0x283E */
void * thread_sum(int *a1)
{
 int v1; // eax
 int v2; // edx

 v1 = *a1;
 v2 = a1[1];
 a1[2] = 0;
 while ( v2 >= v1 )
 a1[2] += v1++;
 return 0;
}


/* Function: thread_compute @ 0x285C */
unsigned int * thread_compute(unsigned int *a1)
{
 int v1; // ebx
 unsigned int *result; // rax

 v1 = *a1 * *a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: thread_increment @ 0x2874 */
void * thread_increment(int *a1)
{
 int v1; // r12d
 int v2; // ebx

 v1 = *a1;
 v2 = 0;
 while ( v2 < v1 )
 {
 ++v2;
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: consumer_thread @ 0x28C0 */
unsigned int * consumer_thread(void *a1)
{
 int v1; // ebx
 unsigned int *result; // rax

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x2911 */
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


/* Function: thread_atomic_increment @ 0x295B */
void * thread_atomic_increment(signed int *a1)
{
 signed int v1; // ecx
 signed int i; // edx

 v1 = *a1;
 for ( i = 0; i < v1; ++i )
 {
 _InterlockedIncrement(&atomic_counter);
 _InterlockedCompareExchange(&atomic_counter, i + 1000, i);
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x2985 */
void * thread_atomic_load_store(void *a1)
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: thread_tls_test @ 0x299B */
unsigned int * thread_tls_test(const char *a1)
{
 unsigned int v1; // ebp
 unsigned long long v2; // rax
 unsigned int *result; // rax

 v1 = __readfsdword(0xFFFFFFDC);
 v2 = __readfsqword(0);
 __writefsdword(0xFFFFFFDC, v1 + 50);
 strncpy((char *)(v2 - 32), a1, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x29E5 */
size_t param_strcpy(char *a1, const char *a2)
{
 char *v2; // rax

 v2 = strcpy(a1, a2);
 return strlen(v2);
}


/* Function: call_strcpy @ 0x29F9 */
size_t call_strcpy()
{
 char v1[32]; // [rsp+8h] [rbp-30h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 return param_strcpy(v1, "HelloLib");
}


/* Function: param_strcmp @ 0x2A3C */
long long param_strcmp(const char *a1, const char *a2)
{
 int v2; // r8d
 long long result; // rax

 v2 = strcmp(a1, a2);
 result = 1;
 if ( v2 <= 0 )
 return (unsigned int)-(v2 != 0);
 return result;
}


/* Function: call_strcmp @ 0x2A5D */
long long call_strcmp()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v1 + v0 + (unsigned int)param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x2AA5 */
size_t param_strlen(const char *a1)
{
 return strlen(a1);
}


/* Function: call_strlen @ 0x2AB1 */
long long call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x2ABB */
unsigned long long param_memcpy(void *a1, const void *a2, unsigned long long a3)
{
 unsigned long long result; // rax

 result = a3;
 qmemcpy(a1, a2, a3);
 return result;
}


/* Function: call_memcpy @ 0x2AC8 */
long long call_memcpy()
{
 long long v0; // rcx
 unsigned int *v1; // rdi
 unsigned long long v3[2]; // [rsp+0h] [rbp-38h] BYREF
 int v4; // [rsp+10h] [rbp-28h]
 unsigned int v5[5]; // [rsp+14h] [rbp-24h] BYREF
 unsigned long long v6; // [rsp+28h] [rbp-10h]

 v0 = 5;
 v6 = __readfsqword(0x28u);
 v1 = v5;
 v4 = 50;
 v3[0] = 0x140000000ALL;
 v3[1] = 0x280000001ELL;
 while ( v0 )
 {
 *v1++ = 0;
 --v0;
 }
 param_memcpy(v5, v3, 0x14u);
 return (unsigned int)(v5[4] + v5[0] + v5[2]);
}


/* Function: param_memcmp @ 0x2B49 */
long long param_memcmp(const void *a1, const void *a2, size_t a3)
{
 int v3; // r8d
 long long result; // rax

 v3 = memcmp(a1, a2, a3);
 result = 1;
 if ( v3 <= 0 )
 return (unsigned int)-(v3 != 0);
 return result;
}


/* Function: call_memcmp @ 0x2B6A */
long long call_memcmp()
{
 int v0; // ebx
 long long v2; // [rsp+4h] [rbp-44h] BYREF
 int v3; // [rsp+Ch] [rbp-3Ch]
 long long v4; // [rsp+10h] [rbp-38h] BYREF
 int v5; // [rsp+18h] [rbp-30h]
 long long v6; // [rsp+1Ch] [rbp-2Ch] BYREF
 int v7; // [rsp+24h] [rbp-24h]
 unsigned long long v8; // [rsp+28h] [rbp-20h]

 v8 = __readfsqword(0x28u);
 v3 = 3;
 v5 = 4;
 v7 = 3;
 v2 = 0x200000001LL;
 v4 = 0x200000001LL;
 v6 = 0x200000001LL;
 v0 = param_memcmp(&v2, &v4, 0xCu);
 return v0 + (unsigned int)param_memcmp(&v2, &v6, 0xCu);
}


/* Function: param_printf @ 0x2BFC */
long long param_printf(int a1, const char *a2)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x2C18 */
long long call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x2C2A */
long long param_scanf(long long a1)
{
 int v1; // r8d
 long long result; // rax
 int v3; // [rsp+0h] [rbp-18h] BYREF
 int v4; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v5; // [rsp+8h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v1 = __isoc99_sscanf(a1, "%d,%d", &v3, &v4);
 result = 0xFFFFFFFFLL;
 if ( v1 == 2 )
 return (unsigned int)(v3 + v4);
 return result;
}


/* Function: call_scanf @ 0x2C83 */
long long call_scanf()
{
 return param_scanf((long long)"123,456");
}


/* Function: param_fopen_fclose @ 0x2C90 */
long long param_fopen_fclose(const char *a1)
{
 unsigned int v1; // r12d
 FILE *v2; // rax
 FILE *v3; // rbp

 v1 = -1;
 v2 = fopen(a1, "r");
 if ( v2 )
 {
 v3 = v2;
 v1 = fileno(v2);
 fclose(v3);
 }
 return v1;
}


/* Function: call_fopen_fclose @ 0x2CCB */
long long call_fopen_fclose()
{
 return ((int)param_fopen_fclose("/etc/passwd") >> 31) | 0x2Au;
}


/* Function: param_fread_fwrite @ 0x2CE4 */
long long param_fread_fwrite(char *name)
{
 FILE *v1; // rbp
 long long result; // rax
 size_t v3; // rax
 size_t v4; // rbx
 char ptr[32]; // [rsp+8h] [rbp-50h] BYREF
 unsigned long long v6; // [rsp+28h] [rbp-30h]

 v6 = __readfsqword(0x28u);
 v1 = fopen(name, "w+");
 result = 0xFFFFFFFFLL;
 if ( v1 )
 {
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v1);
 v3 = fread(ptr, 1u, 0x12u, v1);
 ptr[v3] = 0;
 v4 = v3;
 fclose(v1);
 unlink(name);
 result = 4294967293LL;
 if ( v4 == 18 )
 return strcmp(ptr, "BinBench Test Data") == 0 ? 42 : -3;
 }
 else
 {
 fclose(v1);
 return 4294967294LL;
 }
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x2DCD */
long long call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2DDD */
long long param_malloc_free(long long a1)
{
 unsigned int v1; // r12d
 long long v2; // rbp
 unsigned int *v4; // rax
 unsigned int *v5; // rdi
 long long i; // rax

 v1 = -1;
 v2 = a1;
 v4 = malloc(4 * a1);
 if ( v4 )
 {
 v5 = v4;
 for ( i = 0; i != a1; ++i )
 v5[i] = 10 * i;
 v1 = v5[v2 - 1] + *v5;
 free(v5);
 }
 return v1;
}


/* Function: call_malloc_free @ 0x2E2B */
long long call_malloc_free()
{
 return param_malloc_free(10);
}


/* Function: param_memset @ 0x2E36 */
long long param_memset(unsigned char *a1, unsigned long long a2)
{
 unsigned int v2; // r8d
 long long i; // rax
 int v4; // ecx

 v2 = 0;
 memset(a1, 0, a2);
 for ( i = 0; i != a2; ++i )
 {
 v4 = a1[i];
 v2 += v4;
 }
 return v2;
}


/* Function: call_memset @ 0x2E5E */
long long call_memset()
{
 long long i; // rax
 unsigned int v2[10]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i != 10; ++i )
 v2[i] = 255;
 param_memset((unsigned char *)v2, 0x28u);
 return (unsigned int)(v2[0] + v2[9]);
}


/* Function: param_strchr_strstr @ 0x2EB4 */
long long param_strchr_strstr(char *haystack, char a2, const char *a3)
{
 int v4; // r12d
 char *v5; // rax
 int v6; // ebp
 char *v7; // rax

 v4 = -1;
 v5 = strchr(haystack, a2);
 v6 = (unsigned int)v5 - (unsigned int)haystack;
 if ( !v5 )
 v6 = -1;
 v7 = strstr(haystack, a3);
 if ( v7 )
 v4 = (unsigned int)v7 - (unsigned int)haystack;
 return (unsigned int)(v6 + v4);
}


/* Function: call_strchr_strstr @ 0x2F04 */
long long call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x2F1D */
long long test_standard_library_functions(int argc, const char **argv, const char **envp)
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

 puts(s);
 v0 = call_strcpy();
 __printf_chk(1, aLibL101D, v0);
 v1 = call_strcmp(1);
 __printf_chk(1, aLibL102D, v1);
 __printf_chk(1, aLibL103D, 12);
 v2 = call_memcpy(1);
 __printf_chk(1, aLibL104D, v2);
 v3 = call_memcmp(1);
 __printf_chk(1, aLibL105D, v3);
 v4 = call_printf(1);
 __printf_chk(1, aLibL106D, v4);
 v5 = call_scanf(1);
 __printf_chk(1, aLibL107D, v5);
 v6 = call_fopen_fclose(1);
 __printf_chk(1, aLibL108D, v6);
 v7 = call_fread_fwrite(1);
 __printf_chk(1, aLibL109D, v7);
 v8 = call_malloc_free(1);
 __printf_chk(1, aLibL110D, v8);
 v9 = call_memset(1);
 __printf_chk(1, aLibL111D, v9);
 v10 = call_strchr_strstr(1);
 return __printf_chk(1, aLibL112D, v10);
}


/* Function: param_linux_syscall @ 0x307B */
long long param_linux_syscall(long long a1)
{
 int v1; // eax
 unsigned int v2; // r12d
 int *errno_ptr; // rax

 v1 = syscall(2, a1, 0);
 if ( v1 >= 0 )
 {
 v2 = v1;
 syscall(3, (unsigned int)v1);
 }
 else
 {
 errno_ptr = __errno_location();
 return (unsigned int)-*errno_ptr;
 }
 return v2;
}


/* Function: call_linux_syscall @ 0x30BA */
long long call_linux_syscall()
{
 return ((int)param_linux_syscall((long long)"/etc/passwd") >> 31) | 0x2Au;
}


/* Function: param_win32_api @ 0x30D3 */
long long param_win32_api(const char *a1)
{
 int v1; // r8d
 long long result; // rax
 struct stat buf; // [rsp+8h] [rbp-A0h] BYREF
 unsigned long long v4; // [rsp+98h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 v1 = stat(a1, &buf);
 result = 0xFFFFFFFFLL;
 if ( v1 >= 0 )
 {
 result = 42;
 if ( buf.st_size <= 0 )
 return 4294967294LL;
 }
 return result;
}


/* Function: call_win32_api @ 0x3139 */
long long call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x3146 */
long long param_fork_exec(char *path, long long a2)
{
 int v2; // eax
 __pid_t v3; // r8d
 long long result; // rax
 int stat_loc; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v6; // [rsp+8h] [rbp-20h]

 v6 = __readfsqword(0x28u);
 v2 = fork();
 if ( v2 < 0 )
 return 0xFFFFFFFFLL;
 if ( !v2 )
 {
 execl(path, path, a2, 0);
 _exit(127);
 }
 v3 = waitpid(v2, &stat_loc, 0);
 result = 4294967294LL;
 if ( v3 >= 0 )
 {
 result = 4294967293LL;
 if ( (stat_loc & 0x7F) == 0 )
 return BYTE1(stat_loc);
 }
 return result;
}


/* Function: call_fork_exec @ 0x31DC */
long long call_fork_exec()
{
 return (unsigned int)param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x31FB */
long long param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // rax
 int v2; // edi
 long long v3; // rbx
 long long result; // rax
 int fd; // [rsp+0h] [rbp-38h] BYREF
 int v6; // [rsp+4h] [rbp-34h]
 unsigned char buf[32]; // [rsp+8h] [rbp-30h] BYREF
 unsigned long long v8; // [rsp+28h] [rbp-10h]

 v8 = __readfsqword(0x28u);
 if ( pipe(&fd) < 0 )
 return 0xFFFFFFFFLL;
 v0 = fork();
 if ( v0 < 0 )
 return 4294967294LL;
 if ( !v0 )
 {
 close(fd);
 write(v6, "HelloPipe", 9u);
 close(v6);
 _exit(0);
 }
 close(v6);
 v1 = read(fd, buf, 0x1Fu);
 v2 = fd;
 v3 = v1;
 buf[v1] = 0;
 close(v2);
 wait(0);
 result = 42;
 if ( v3 <= 0 )
 return 4294967293LL;
 return result;
}


/* Function: call_pipe_communication @ 0x32C1 */
long long call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x32CA */
long long param_socket_create()
{
 int v0; // edi
 long long result; // rax
 int optval; // [rsp+14h] [rbp-24h] BYREF
 sockaddr addr; // [rsp+18h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 v0 = socket(2, 1, 0);
 result = 0xFFFFFFFFLL;
 if ( v0 >= 0 )
 {
 optval = 1;
 if ( setsockopt(v0, 1, 2, &optval, 4u) >= 0 )
 {
 memset(&addr, 0, sizeof(addr));
 addr.sa_family = 2;
 if ( bind(v0, &addr, 0x10u) >= 0 )
 {
 if ( listen(v0, 5) >= 0 )
 {
 close(v0);
 return 42;
 }
 else
 {
 close(v0);
 return 4294967292LL;
 }
 }
 else
 {
 close(v0);
 return 4294967293LL;
 }
 }
 else
 {
 close(v0);
 return 4294967294LL;
 }
 }
 return result;
}


/* Function: call_socket_create @ 0x33B6 */
long long call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x33BF */
long long param_shmget_shmat()
{
 int v0; // eax
 unsigned int v1; // r12d
 int v2; // edi
 int v3; // eax
 int v4; // r13d
 char *v5; // rax
 const char *v6; // rbp

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return (unsigned int)-1;
 close(v0);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 < 0 )
 {
 return (unsigned int)-1;
 }
 else
 {
 v1 = -2;
 v3 = shmget(v2, 0x1000u, 950);
 v4 = v3;
 if ( v3 >= 0 )
 {
 v1 = -3;
 v5 = (char *)shmat(v3, 0, 0);
 v6 = v5;
 if ( v5 != (char *)-1LL )
 {
 strcpy(v5, "SharedMemory");
 v1 = strlen(v6);
 shmdt(v6);
 shmctl(v4, 0, 0);
 }
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x3474 */
long long call_shmget_shmat(long long a1)
{
 bool v1; // cc
 long long result; // rax

 v1 = (int)param_shmget_shmat(a1) <= 0;
 result = 42;
 if ( v1 )
 return 0xFFFFFFFFLL;
 return result;
}


/* Function: param_signal_handling @ 0x348F */
long long param_signal_handling()
{
 __sighandler_t v0; // r8
 long long result; // rax
 __sighandler_t v2; // r8
 int v3; // ebx
 int v4; // ebx

 v0 = signal(10, signal_handler);
 result = 0xFFFFFFFFLL;
 if ( v0 != (__sighandler_t)-1LL )
 {
 v2 = signal(14, signal_handler);
 result = 4294967294LL;
 if ( v2 != (__sighandler_t)-1LL )
 {
 v3 = 1001;
 signal_received = 0;
 raise(10);
 while ( !signal_received )
 {
 if ( !--v3 )
 break;
 usleep(0x3E8u);
 }
 result = 4294967293LL;
 if ( signal_received )
 {
 result = 4294967292LL;
 if ( signal_number == 10 )
 {
 v4 = 2001;
 signal_received = 0;
 alarm(1u);
 while ( !signal_received )
 {
 if ( !--v4 )
 break;
 usleep(0x3E8u);
 }
 result = 4294967291LL;
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
 }
 }
 }
 return result;
}


/* Function: call_signal_handling @ 0x3597 */
long long call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x35A0 */
long long test_system_calls(void)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax

 puts(asc_423E);
 v0 = call_linux_syscall(asc_423E);
 __printf_chk(1, aSysL301D, v0);
 v1 = call_win32_api(1);
 __printf_chk(1, aSysL302D, v1);
 v2 = call_fork_exec(1);
 __printf_chk(1, aSysL303D, v2);
 v3 = param_pipe_communication(1);
 __printf_chk(1, aSysL304D, v3);
 v4 = param_socket_create(1);
 __printf_chk(1, aSysL305D, v4);
 v5 = call_shmget_shmat(1);
 __printf_chk(1, aSysL306D, v5);
 v6 = param_signal_handling(1);
 return __printf_chk(1, aSysL307D, v6);
}


/* Function: param_pthread_create @ 0x3670 */
long long param_pthread_create(int a1)
{
 unsigned int v1; // r12d
 int arg; // [rsp+4h] [rbp-24h] BYREF
 pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
 void *thread_return[3]; // [rsp+10h] [rbp-18h] BYREF

 v1 = -1;
 thread_return[1] = (void *)__readfsqword(0x28u);
 arg = a1;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 {
 pthread_join(newthread, thread_return);
 v1 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 return v1;
}


/* Function: call_pthread_create @ 0x36E9 */
long long call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x36F7 */
long long param_pthread_join()
{
 unsigned int *v0; // rsi
 long long v1; // rcx
 unsigned int *v2; // rdi
 pthread_t *v3; // rbx
 unsigned char *v4; // rbp
 unsigned int v5; // r12d
 long long v6; // rbx
 long long v7; // rax
 pthread_t newthread[3]; // [rsp+8h] [rbp-80h] BYREF
 char v10; // [rsp+20h] [rbp-68h] BYREF
 unsigned char arg[36]; // [rsp+24h] [rbp-64h] BYREF
 unsigned long long v12; // [rsp+48h] [rbp-40h]

 v0 = &unk_4400;
 v1 = 9;
 v12 = __readfsqword(0x28u);
 v2 = arg;
 v3 = newthread;
 while ( v1 )
 {
 *v2++ = *v0++;
 --v1;
 }
 v4 = arg;
 do
 {
 v5 = pthread_create(v3, 0, (void *(*)(void *))thread_sum, v4);
 if ( v5 )
 return (unsigned int)-1;
 ++v3;
 v4 += 12;
 }
 while ( v3 != (pthread_t *)&v10 );
 v6 = 0;
 while ( !pthread_join(newthread[v6], 0) )
 {
 v7 = 12 * v6++;
 v5 += *(unsigned int *)&arg[v7 + 8];
 if ( v6 == 3 )
 return v5;
 }
 return (unsigned int)-2;
}


/* Function: call_pthread_join @ 0x37C7 */
long long call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x37D2 */
long long param_mutex_lock(int a1, int a2)
{
 pthread_t *v3; // rbp
 long long result; // rax
 pthread_t *v5; // r13
 int i; // r12d
 long long j; // r12
 pthread_t v9; // rdi
 unsigned int arg[11]; // [rsp+Ch] [rbp-2Ch] BYREF

 arg[0] = a2;
 v3 = (pthread_t *)malloc(8LL * a1);
 result = 0xFFFFFFFFLL;
 if ( v3 )
 {
 shared_counter = 0;
 v5 = v3;
 for ( i = 0; i < a1; ++i )
 {
 if ( pthread_create(v5++, 0, (void *(*)(void *))thread_increment, arg) )
 {
 free(v3);
 return 4294967294LL;
 }
 }
 for ( j = 0; a1 > (int)j; ++j )
 {
 v9 = v3[j];
 pthread_join(v9, 0);
 }
 free(v3);
 result = 42;
 if ( shared_counter != arg[0] * a1 )
 return 4294967293LL;
 }
 return result;
}


/* Function: call_mutex_lock @ 0x3896 */
long long call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x38A9 */
long long param_condition_variable()
{
 unsigned int v0; // r12d
 pthread_t th; // [rsp+0h] [rbp-28h] BYREF
 pthread_t newthread; // [rsp+8h] [rbp-20h] BYREF
 void *thread_return[3]; // [rsp+10h] [rbp-18h] BYREF

 v0 = -1;
 thread_return[1] = (void *)__readfsqword(0x28u);
 ready = 0;
 data = 0;
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 {
 if ( pthread_create(&th, 0, producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return (unsigned int)-2;
 }
 else
 {
 pthread_join(newthread, thread_return);
 pthread_join(th, 0);
 v0 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 }
 }
 return v0;
}


/* Function: call_condition_variable @ 0x395E */
long long call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x3969 */
long long param_atomic_ops(int a1, int a2)
{
 pthread_t *v3; // rbp
 long long result; // rax
 int v5; // r12d
 pthread_t *v6; // r13
 long long i; // r12
 pthread_t v9; // rdi
 int v10; // ebx
 int arg; // [rsp+Ch] [rbp-3Ch] BYREF
 pthread_t newthread[7]; // [rsp+10h] [rbp-38h] BYREF

 arg = a2;
 newthread[1] = __readfsqword(0x28u);
 v3 = (pthread_t *)malloc(8LL * a1);
 result = 0xFFFFFFFFLL;
 if ( v3 )
 {
 _InterlockedExchange(&atomic_counter, 0);
 v5 = 0;
 v6 = v3;
 while ( v5 < a1 )
 {
 if ( pthread_create(v6++, 0, (void *(*)(void *))thread_atomic_increment, &arg) )
 {
 free(v3);
 return 4294967294LL;
 }
 ++v5;
 }
 if ( !pthread_create(newthread, 0, thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 for ( i = 0; a1 > (int)i; ++i )
 {
 v9 = v3[i];
 pthread_join(v9, 0);
 }
 v10 = atomic_counter;
 free(v3);
 result = 42;
 if ( v10 <= 0 )
 return 4294967293LL;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x3A70 */
long long call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x3A83 */
long long param_thread_local_storage(int a1)
{
 char *v2; // r12
 void **v3; // rax
 void **v4; // rbp
 long long v5; // r13
 void *v6; // rax
 int v7; // r9d
 long long v8; // r13
 void *v9; // rcx
 long long v10; // r14
 pthread_t *v11; // rdi
 void **v12; // rbx
 void *v13; // rdi
 long long result; // rax
 long long v15; // r13
 int v16; // r14d
 void **v17; // rdx
 int v18; // r15d
 void *v19; // rdi
 void **v20; // [rsp+8h] [rbp-50h]
 void *thread_return[9]; // [rsp+10h] [rbp-48h] BYREF

 thread_return[1] = (void *)__readfsqword(0x28u);
 v2 = (char *)malloc(8LL * a1);
 v3 = (void **)malloc(8LL * a1);
 if ( !v2 )
 return 0xFFFFFFFFLL;
 v4 = v3;
 v5 = 0;
 if ( !v3 )
 return 0xFFFFFFFFLL;
 while ( a1 > (int)v5 )
 {
 v6 = malloc(0x10u);
 v7 = v5;
 v4[v5++] = v6;
 __snprintf_chk(v6, 16, 1, 16, "Thread-%d", v7);
 }
 v8 = 0;
 while ( a1 > (int)v8 )
 {
 v9 = v4[v8];
 v10 = v8;
 v11 = (pthread_t *)&v2[8 * v8++];
 if ( pthread_create(v11, 0, (void *(*)(void *))thread_tls_test, v9) )
 {
 v12 = v4;
 do
 {
 v13 = *v12++;
 free(v13);
 }
 while ( v12 != &v4[v10 + 1] );
 free(v4);
 free(v2);
 return 4294967294LL;
 }
 }
 v15 = 0;
 v16 = 0;
 v17 = thread_return;
 v18 = 0;
 while ( a1 > (int)v15 )
 {
 v20 = v17;
 pthread_join(*(unsigned long long *)&v2[8 * v15], v17);
 v18 += *(unsigned int *)thread_return[0];
 v16 += *((unsigned int *)thread_return[0] + 1);
 free(thread_return[0]);
 v19 = v4[v15++];
 free(v19);
 v17 = v20;
 }
 free(v4);
 free(v2);
 if ( 100 * a1 != v18 )
 return 4294967293LL;
 result = 42;
 if ( 150 * a1 != v16 )
 return 4294967293LL;
 return result;
}


/* Function: call_thread_local_storage @ 0x3C19 */
long long call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x3C27 */
long long test_thread_concurrency()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts(asc_4327);
 v0 = call_pthread_create(asc_4327);
 __printf_chk(1, aThrL301D, v0);
 v1 = param_pthread_join(1);
 __printf_chk(1, aThrL302D, v1);
 v2 = call_mutex_lock(1);
 __printf_chk(1, aThrL303D, v2);
 v3 = param_condition_variable(1);
 __printf_chk(1, aThrL304D, v3);
 v4 = call_atomic_ops(1);
 __printf_chk(1, aThrL305D, v4);
 v5 = call_thread_local_storage(1);
 return __printf_chk(1, aThrL306D, v5);
}


/* Function: .term_proc @ 0x3CE4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __snprintf_chk @ 0x7148 */

/* FAILED to decompile: raise @ 0x7150 */

/* FAILED to decompile: free @ 0x7158 */

/* FAILED to decompile: __libc_start_main @ 0x7160 */

/* FAILED to decompile: __errno_location @ 0x7168 */

/* FAILED to decompile: unlink @ 0x7170 */

/* FAILED to decompile: strncpy @ 0x7178 */

/* FAILED to decompile: _exit @ 0x7180 */

/* FAILED to decompile: strcpy @ 0x7188 */

/* FAILED to decompile: puts @ 0x7190 */

/* FAILED to decompile: fread @ 0x7198 */

/* FAILED to decompile: setsockopt @ 0x71A0 */

/* FAILED to decompile: shmdt @ 0x71A8 */

/* FAILED to decompile: write @ 0x71B0 */

/* FAILED to decompile: pthread_cond_wait @ 0x71B8 */

/* FAILED to decompile: fclose @ 0x71C0 */

/* FAILED to decompile: strlen @ 0x71C8 */

/* FAILED to decompile: __stack_chk_fail @ 0x71D0 */

/* FAILED to decompile: strchr @ 0x71D8 */

/* FAILED to decompile: rewind @ 0x71E0 */

/* FAILED to decompile: alarm @ 0x71E8 */

/* FAILED to decompile: close @ 0x71F0 */

/* FAILED to decompile: pipe @ 0x71F8 */

/* FAILED to decompile: read @ 0x7200 */

/* FAILED to decompile: memcmp @ 0x7208 */

/* FAILED to decompile: pthread_cond_signal @ 0x7210 */

/* FAILED to decompile: strcmp @ 0x7218 */

/* FAILED to decompile: signal @ 0x7220 */

/* FAILED to decompile: syscall @ 0x7228 */

/* FAILED to decompile: stat @ 0x7230 */

/* FAILED to decompile: fileno @ 0x7238 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x7240 */

/* FAILED to decompile: malloc @ 0x7248 */

/* FAILED to decompile: __isoc99_sscanf @ 0x7250 */

/* FAILED to decompile: listen @ 0x7258 */

/* FAILED to decompile: __printf_chk @ 0x7260 */

/* FAILED to decompile: bind @ 0x7268 */

/* FAILED to decompile: pthread_create @ 0x7270 */

/* FAILED to decompile: waitpid @ 0x7278 */

/* FAILED to decompile: open @ 0x7280 */

/* FAILED to decompile: shmctl @ 0x7288 */

/* FAILED to decompile: fopen @ 0x7290 */

/* FAILED to decompile: shmat @ 0x7298 */

/* FAILED to decompile: shmget @ 0x72A0 */

/* FAILED to decompile: fwrite @ 0x72A8 */

/* FAILED to decompile: ftok @ 0x72B0 */

/* FAILED to decompile: pthread_join @ 0x72B8 */

/* FAILED to decompile: execl @ 0x72C0 */

/* FAILED to decompile: pthread_cancel @ 0x72C8 */

/* FAILED to decompile: sleep @ 0x72D0 */

/* FAILED to decompile: wait @ 0x72D8 */

/* FAILED to decompile: fork @ 0x72E0 */

/* FAILED to decompile: strstr @ 0x72E8 */

/* FAILED to decompile: pthread_mutex_lock @ 0x72F0 */

/* FAILED to decompile: usleep @ 0x72F8 */

/* FAILED to decompile: socket @ 0x7300 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x7308 */

/* FAILED to decompile: __gmon_start__ @ 0x7318 */

/* Total functions decompiled: 126, failed: 58 */
