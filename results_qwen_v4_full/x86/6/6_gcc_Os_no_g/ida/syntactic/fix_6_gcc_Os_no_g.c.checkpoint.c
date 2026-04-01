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

/* Additional type definitions for missing types */
typedef struct _IO_FILE FILE;
typedef unsigned int pthread_t;
typedef int pthread_mutex_t;
typedef int pthread_cond_t;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);

typedef struct {
    unsigned int d_tag;
    union {
        unsigned int d_val;
        unsigned int d_ptr;
    } d_un;
} Elf32_Dyn;

/* Additional missing type definitions */
typedef int key_t;
typedef int bool;
typedef __builtin_va_list va_list;

/* External function declarations for system/library functions */
extern void *malloc(size_t size);
extern void free(void *ptr);
extern int printf(const char *format, ...);
extern int __printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);
extern int _do_global_dtors_aux(void);

/* Stub implementations for pthread and other functions */
int pthread_create(pthread_t *thread, void *attr, void *(*start_routine)(void *), void *arg) { return 0; }
int pthread_join(pthread_t thread, void **retval) { return 0; }
int pthread_mutex_lock(pthread_mutex_t *mutex) { return 0; }
int pthread_mutex_unlock(pthread_mutex_t *mutex) { return 0; }
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex) { return 0; }
int pthread_cond_signal(pthread_cond_t *cond) { return 0; }
int pthread_cancel(pthread_t thread) { return 0; }

/* Macros for 64-bit value manipulation */
#define LODWORD(x) ((unsigned int)(x))
#define HIDWORD(x) ((unsigned int)((x) >> 32))
#define BYTE1(x) (((x) >> 8) & 0xFF)

/* Stub for GS segment write - decompiler artifact */
#define __writegsdword(offset, value) ((void)0)
#define __readgsdword(offset) (0)

struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned int __pad0;
    long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    long st_atime;
    long st_atime_nsec;
    long st_mtime;
    long st_mtime_nsec;
    long st_ctime;
    long st_ctime_nsec;
    long __unused[3];
};

struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_gcc_Os_no_g
 * Processor: pc
 */

/* External declarations */
extern void *_gmon_start__;
extern int _do_global_ctors_aux(void);
extern void frame_dummy(void);
extern int *__errno_location(void);
extern unsigned char unk_4400[];
extern unsigned char unk_4414[];
extern unsigned char unk_4420[];
static unsigned char unk_4440[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
unsigned char unk_4400[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
unsigned char unk_4414[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
unsigned char unk_4420[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
static char unk_4167[] = "Scanf: %d\n";
static char unk_41BC[] = "Malloc: %d\n";
static char asc_409D[] = "=== Standard Library Tests ===\n";
static char unk_40C1[] = "Strcpy: %d\n";
static char unk_40DC[] = "Strcmp: %d\n";
static char unk_40F7[] = "Strlen: %d\n";
static char unk_4113[] = "Memcpy: %d\n";
static char unk_412F[] = "Memcmp: %d\n";
static char unk_414B[] = "Printf: %d\n";
extern char unk_4167[];
static char unk_4184[] = "Socket: %d\n";
static char unk_41A0[] = "FileIO: %d\n";
extern char unk_41BC[];
static char unk_41D8[] = "Memset: %d\n";
static char unk_41F3[] = "StrchrStrstr: %d\n";
static char asc_4242[] = "=== System Call Tests ===\n";
static char unk_425D[] = "LinuxSyscall: %d\n";
static char unk_4279[] = "Win32API: %d\n";
static char unk_4295[] = "ForkExec: %d\n";
static char unk_42B1[] = "Pipe: %d\n";
static char unk_42CD[] = "Socket: %d\n";
static char unk_42E9[] = "SHM: %d\n";
static char unk_4305[] = "Signal: %d\n";
static char asc_432B[] = "=== Thread Concurrency Tests ===\n";
static char unk_4349[] = "PthreadCreate: %d\n";
static char unk_4365[] = "PthreadJoin: %d\n";
static char unk_4382[] = "MutexLock: %d\n";
static char unk_439E[] = "CondVar: %d\n";
static char unk_43BA[] = "AtomicOps: %d\n";
static char unk_43D6[] = "TLS: %d\n";

/* Global variables */
int ready;
int data;
int signal_received;
int signal_number;
int shared_counter;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int atomic_counter;
Elf32_Dyn **GLOBAL_OFFSET_TABLE_;


















































































































































































/* Function: main @ 0x1750 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _start removed by preprocessor */










/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */









/* Function: signal_handler @ 0x18E1 */
Elf32_Dyn ** signal_handler(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 signal_received = 1;
 signal_number = a1;
 return result;
}


/* Function: thread_sum @ 0x1907 */
int thread_sum(int *a1)
{
 int v1; // edx
 int v2; // ecx

 v1 = *a1;
 v2 = a1[1];
 a1[2] = 0;
 while ( v2 >= v1 )
 a1[2] += v1++;
 return 0;
}


/* Function: thread_compute @ 0x192B */
unsigned int * thread_compute(unsigned int *a1)
{
 int v1; // esi
 unsigned int *result; // eax

 v1 = *a1 * *a1;
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: thread_increment @ 0x195A */
int thread_increment(int *a1)
{
 int v1; // edi
 int v3; // [esp+0h] [ebp-1Ch]

 v1 = 0;
 v3 = *a1;
 while ( v1 < v3 )
 {
 ++v1;
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: consumer_thread @ 0x19C1 */
unsigned int *consumer_thread()
{
 int v0; // esi
 unsigned int *result; // eax

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v0 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v0;
 return result;
}


/* Function: producer_thread @ 0x1A2A */
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


/* Function: thread_atomic_increment @ 0x1A89 */
int thread_atomic_increment(signed int *a1)
{
 signed int v1; // edx
 signed int v2; // ebx

 v1 = 0;
 v2 = *a1;
 while ( v1 < v2 )
 {
 atomic_counter++;
 atomic_counter = (v1 + 1000 > atomic_counter) ? (v1 + 1000) : atomic_counter;
 ++v1;
 }
 return 0;
}


/* Function: thread_atomic_load_store @ 0x1AC8 */
int thread_atomic_load_store()
{
 atomic_counter = atomic_counter + 100;
 return 0;
}


/* Function: thread_tls_test @ 0x1AE9 */
unsigned int * thread_tls_test(char *src)
{
 unsigned int v1; // edi
 char *v2; // eax
 unsigned int *result; // eax

 v1 = __readgsdword(0xFFFFFFDC);
 v2 = (char *)(__readgsdword(0) - 32);
 __writegsdword(0xFFFFFFDC, v1 + 50);
 strncpy(v2, src, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 result[1] = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x1B43 */
size_t param_strcpy(char *dest, char *src)
{
 strcpy(dest, src);
 return strlen(dest);
}


/* Function: call_strcpy @ 0x1B77 */
size_t call_strcpy(int a1)
{
 char v2; // [esp-30h] [ebp-30h] BYREF
 unsigned int v3; // [esp-10h] [ebp-10h]
 int v4; // [esp-4h] [ebp-4h]

 v4 = a1;
 v3 = __readgsdword(0x14u);
 return param_strcpy(&v2, "HelloLib");
}


/* Function: param_strcmp @ 0x1BBA */
int param_strcmp(char *s1, char *s2)
{
 int v2; // edx
 int result; // eax

 v2 = strcmp(s1, s2);
 result = 1;
 if ( v2 <= 0 )
 return -(v2 != 0);
 return result;
}


/* Function: call_strcmp @ 0x1BF6 */
int call_strcmp()
{
 int v0; // ebx
 int v1; // ebx

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz") + v0;
 return v1 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1C58 */
size_t param_strlen(char *s)
{
 return strlen(s);
}


/* Function: call_strlen @ 0x1C7E */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1C88 */
unsigned int param_memcpy(void *a1, const void *a2, unsigned int a3)
{
 unsigned int result; // eax

 result = a3;
 memcpy(a1, a2, a3);
 return result;
}


/* Function: call_memcpy @ 0x1CA2 */
long long call_memcpy()
{
 long long result; // rax
 unsigned char v1[20]; // [esp-38h] [ebp-38h] BYREF
 unsigned int v2[5]; // [esp-24h] [ebp-24h] BYREF
 unsigned int v3; // [esp-10h] [ebp-10h]

 v3 = __readgsdword(0x14u);
 memcpy(v1, &unk_4400, sizeof(v1));
 memset(v2, 0, sizeof(v2));
 param_memcpy(v2, v1, 0x14u);
 result = (long long)(v2[4] + v2[0] + v2[2]) | ((long long)(v3 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: param_memcmp @ 0x1D10 */
int param_memcmp(void *s1, void *s2, size_t n)
{
 int v3; // edx
 int result; // eax

 v3 = memcmp(s1, s2, n);
 result = 1;
 if ( v3 <= 0 )
 return -(v3 != 0);
 return result;
}


/* Function: call_memcmp @ 0x1D4F */
long long call_memcmp()
{
 int v0; // esi
 long long result; // rax
 unsigned char v2[12]; // [esp-34h] [ebp-34h] BYREF
 unsigned char v3[12]; // [esp-28h] [ebp-28h] BYREF
 unsigned char v4[12]; // [esp-1Ch] [ebp-1Ch] BYREF
 unsigned int v5; // [esp-10h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 memcpy(v2, &unk_4414, sizeof(v2));
 memcpy(v3, &unk_4420, sizeof(v3));
 memcpy(v4, &unk_4414, sizeof(v4));
 v0 = param_memcmp(v2, v3, 0xCu);
 result = (long long)(v0 + param_memcmp(v2, v4, 0xCu)) | ((long long)(v5 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: param_printf @ 0x1DDC */
int param_printf(int a1, int a2, int a3)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a2, a3, a1);
}


/* Function: call_printf @ 0x1E09 */
int call_printf()
{
 return param_printf((int)"Test", 42, (int)"Test");
}


/* Function: param_scanf @ 0x1E2D */
int param_scanf(int a1)
{
 int v1; // edx
 int result; // eax
 int v3; // [esp-4h] [ebp-18h]
 int v4; // [esp+0h] [ebp-14h] BYREF
 unsigned int v5[3]; // [esp+4h] [ebp-10h] BYREF

 v5[1] = __readgsdword(0x14u);
 v1 = __isoc99_sscanf(a1, "%d,%d", &v4, v5, v3);
 result = -1;
 if ( v1 == 2 )
 return v4 + v5[0];
 return result;
}


/* Function: call_scanf @ 0x1E8E */
int call_scanf()
{
 return param_scanf((int)"123,456");
}


/* Function: param_fopen_fclose @ 0x1EB0 */
int param_fopen_fclose(char *filename)
{
 int v1; // edi
 FILE *v2; // eax
 FILE *v3; // esi

 v1 = -1;
 v2 = fopen(filename, "r");
 if ( v2 )
 {
 v3 = v2;
 v1 = fileno(v2);
 fclose(v3);
 }
 return v1;
}


/* Function: call_fopen_fclose @ 0x1F03 */
int call_fopen_fclose()
{
 return (param_fopen_fclose("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x1F2E */
int param_fread_fwrite(char *filename)
{
 FILE *v1; // esi
 int result; // eax
 size_t v3; // [esp+8h] [ebp-4Ch]
 char ptr[32]; // [esp+18h] [ebp-3Ch] BYREF
 unsigned int v5; // [esp+38h] [ebp-1Ch]

 v5 = __readgsdword(0x14u);
 v1 = fopen(filename, "w+");
 result = -1;
 if ( v1 )
 {
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v1);
 v3 = fread(ptr, 1u, 0x12u, v1);
 ptr[v3] = 0;
 fclose(v1);
 unlink(filename);
 result = -3;
 if ( v3 == 18 )
 return strcmp(ptr, "BinBench Test Data") == 0 ? 42 : -3;
 }
 else
 {
 fclose(v1);
 return -2;
 }
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x2016 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2038 */
int param_malloc_free(int a1)
{
 unsigned int *v1; // edx
 int v2; // eax
 int v4; // [esp+0h] [ebp-1Ch]

 v1 = malloc(4 * a1);
 v2 = 0;
 if ( !v1 )
 return -1;
 while ( v2 != a1 )
 {
 v1[v2] = 10 * v2;
 ++v2;
 }
 v4 = v1[a1 - 1] + *v1;
 free(v1);
 return v4;
}


/* Function: call_malloc_free @ 0x209D */
int call_malloc_free()
{
 return param_malloc_free(10);
}


/* Function: param_memset @ 0x20B0 */
int param_memset(unsigned char *a1, unsigned int a2)
{
 int v2; // edx
 unsigned char *i; // eax
 int v4; // ecx

 v2 = 0;
 memset(a1, 0, a2);
 for ( i = a1; i != &a1[a2]; ++i )
 {
 v4 = *i;
 v2 += v4;
 }
 return v2;
}


/* Function: call_memset @ 0x20D8 */
long long call_memset()
{
 int i; // eax
 long long result; // rax
 unsigned int v2[10]; // [esp+4h] [ebp-34h] BYREF
 unsigned int v3; // [esp+2Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 10; ++i )
 v2[i] = 255;
 param_memset((unsigned char *)v2, 0x28u);
 result = (long long)(v2[0] + v2[9]) | ((long long)(v3 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: param_strchr_strstr @ 0x2120 */
int param_strchr_strstr(char *s, char a2, char *needle)
{
 int v3; // esi
 char *v4; // eax
 char *v5; // eax
 int v6; // edx

 v3 = -1;
 v4 = strchr(s, a2);
 if ( v4 )
 v3 = v4 - s;
 v5 = strstr(s, needle);
 v6 = -1;
 if ( v5 )
 v6 = v5 - s;
 return v3 + v6;
}


/* Function: call_strchr_strstr @ 0x2178 */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x21A6 */
int test_standard_library_functions()
{
 size_t v0; // eax
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
 int v12; // [esp-8h] [ebp-Ch]
 int v13; // [esp-4h] [ebp-8h]
 int v14; // [esp+0h] [ebp-4h]
 int v15; // [esp+0h] [ebp-4h]
 int v16; // [esp+0h] [ebp-4h]
 int v17; // [esp+0h] [ebp-4h]
 int v18; // [esp+0h] [ebp-4h]
 int v19; // [esp+0h] [ebp-4h]
 int v20; // [esp+0h] [ebp-4h]
 int v21; // [esp+0h] [ebp-4h]
 int v22; // [esp+0h] [ebp-4h]
 int v23; // [esp+0h] [ebp-4h]
 int v24; // [esp+0h] [ebp-4h]
 int savedregs; // [esp+4h] [ebp+0h] BYREF

 puts(asc_409D);
 v0 = call_strcpy((int)&savedregs);
 __printf_chk(1, &unk_40C1, v0, v12, v13);
 v1 = call_strcmp();
 __printf_chk(1, &unk_40DC, v1, v14, savedregs);
 __printf_chk(1, &unk_40F7, 12, v15, savedregs);
 v2 = call_memcpy();
 __printf_chk(1, &unk_4113, v2, v16, savedregs);
 v3 = call_memcmp();
 __printf_chk(1, &unk_412F, v3, v17, savedregs);
 v4 = call_printf();
 __printf_chk(1, &unk_414B, v4, v18, savedregs);
 v5 = call_scanf();
 __printf_chk(1, &unk_4167, v5, v19, savedregs);
 v6 = call_fopen_fclose();
 __printf_chk(1, &unk_4184, v6, v20, savedregs);
 v7 = call_fread_fwrite();
 __printf_chk(1, &unk_41A0, v7, v21, savedregs);
 v8 = call_malloc_free();
 __printf_chk(1, &unk_41BC, v8, v22, savedregs);
 v9 = call_memset();
 __printf_chk(1, &unk_41D8, v9, v23, savedregs);
 v10 = call_strchr_strstr();
 return __printf_chk(1, &unk_41F3, v10, v24, savedregs);
}


/* Function: param_linux_syscall @ 0x22E0 */
int param_linux_syscall(int a1, int a2)
{
 int v2; // eax
 int v3; // esi

 v2 = syscall(5, a2, 0, a1);
 if ( v2 < 0 )
 return -*__errno_location();
 v3 = v2;
 syscall(6, v2, v2, v2);
 return v3;
}


/* Function: call_linux_syscall @ 0x232B */
int call_linux_syscall(int a1, int a2)
{
 return (param_linux_syscall(a2, (int)"/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x2356 */
int param_win32_api(char *file)
{
 int v1; // edx
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-64h] BYREF
 unsigned int v4; // [esp+58h] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v1 = stat(file, &buf);
 result = -1;
 if ( v1 >= 0 )
 {
 result = 42;
 if ( buf.st_size <= 0 )
 return -2;
 }
 return result;
}


/* Function: call_win32_api @ 0x23B6 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x23D8 */
int param_fork_exec(char *path, int a2)
{
 int v2; // eax
 __pid_t v3; // edx
 int result; // eax
 int stat_loc[8]; // [esp+0h] [ebp-20h] BYREF

 stat_loc[1] = __readgsdword(0x14u);
 v2 = fork();
 if ( v2 < 0 )
 return -1;
 if ( !v2 )
 {
 execl(path, path, a2, 0);
 _exit(127);
 }
 v3 = waitpid(v2, stat_loc, 0);
 result = -2;
 if ( v3 >= 0 )
 {
 result = -3;
 if ( (stat_loc[0] & 0x7F) == 0 )
 return BYTE1(stat_loc[0]);
 }
 return result;
}


/* Function: call_fork_exec @ 0x246B */
int call_fork_exec()
{
 return param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x249B */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // eax
 int v2; // esi
 int result; // eax
 int pipedes[2]; // [esp+0h] [ebp-34h] BYREF
 unsigned char buf[32]; // [esp+8h] [ebp-2Ch] BYREF
 unsigned int v6; // [esp+28h] [ebp-Ch]

 v6 = __readgsdword(0x14u);
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
 _exit(0);
 }
 close(pipedes[1]);
 v1 = read(pipedes[0], buf, 0x1Fu);
 buf[v1] = 0;
 v2 = v1;
 close(pipedes[0]);
 wait(0);
 result = 42;
 if ( v2 <= 0 )
 return -3;
 return result;
}


/* Function: call_pipe_communication @ 0x2582 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x258B */
int param_socket_create()
{
 int v0; // esi
 int result; // eax
 int optval; // [esp+0h] [ebp-30h] BYREF
 struct sockaddr addr; // [esp+4h] [ebp-2Ch] BYREF
 unsigned int v4; // [esp+14h] [ebp-1Ch]

 v4 = __readgsdword(0x14u);
 v0 = socket(2, 1, 0);
 result = -1;
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
 return -4;
 }
 }
 else
 {
 close(v0);
 return -3;
 }
 }
 else
 {
 close(v0);
 return -2;
 }
 }
 return result;
}


/* Function: call_socket_create @ 0x2683 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x268C */
int param_shmget_shmat()
{
 int v0; // eax
 size_t v1; // esi
 key_t v2; // eax
 int v3; // eax
 int v4; // ecx
 char *v5; // eax
 const char *v6; // edi
 char *v8; // [esp-10h] [ebp-2Ch]
 int v9; // [esp+0h] [ebp-1Ch]

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 < 0 )
 return -1;
 v1 = -2;
 v3 = shmget(v2, 4096, 950, "/tmp/binbench_shm");
 if ( v3 >= 0 )
 {
 v1 = -3;
 v9 = v3;
 v5 = (char *)shmat(v3, 0, 0, v4);
 v6 = v5;
 if ( v5 != (char *)-1 )
 {
 v8 = v5;
 strcpy(v5, "SharedMemory");
 v1 = strlen(v6);
 shmdt(v6);
 shmctl(v9, 0, 0, v8);
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x2758 */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = param_shmget_shmat() <= 0;
 result = 42;
 if ( v0 )
 return -1;
 return result;
}


/* Function: param_signal_handling @ 0x2778 */
int param_signal_handling()
{
 __sighandler_t v0; // edx
 int result; // eax
 __sighandler_t v2; // edx
 int v3; // esi
 int v4; // esi

 v0 = signal(10, (__sighandler_t)signal_handler);
 result = -1;
 if ( v0 != (__sighandler_t)-1 )
 {
 v2 = signal(14, (__sighandler_t)signal_handler);
 result = -2;
 if ( v2 != (__sighandler_t)-1 )
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
 result = -3;
 if ( signal_received )
 {
 result = -4;
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
 }
 }
 }
 return result;
}


/* Function: call_signal_handling @ 0x289E */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x28A7 */
int test_system_calls()
{
 int v0; // edx
 int v1; // ecx
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v10; // [esp-8h] [ebp-Ch]
 int v11; // [esp-4h] [ebp-8h]
 int v12; // [esp+0h] [ebp-4h]
 int v13; // [esp+0h] [ebp-4h]
 int v14; // [esp+0h] [ebp-4h]
 int v15; // [esp+0h] [ebp-4h]
 int v16; // [esp+0h] [ebp-4h]
 int v17; // [esp+0h] [ebp-4h]
 int savedregs; // [esp+4h] [ebp+0h]
 int savedregsa; // [esp+4h] [ebp+0h]
 int savedregsb; // [esp+4h] [ebp+0h]
 int savedregsc; // [esp+4h] [ebp+0h]
 int savedregsd; // [esp+4h] [ebp+0h]
 int savedregse; // [esp+4h] [ebp+0h]

 puts(asc_4242);
 v2 = call_linux_syscall(v1, v0);
 __printf_chk(1, &unk_425D, v2, v10, v11);
 v3 = call_win32_api();
 __printf_chk(1, &unk_4279, v3, v12, savedregs);
 v4 = call_fork_exec();
 __printf_chk(1, &unk_4295, v4, v13, savedregsa);
 v5 = param_pipe_communication();
 __printf_chk(1, &unk_42B1, v5, v14, savedregsb);
 v6 = param_socket_create();
 __printf_chk(1, &unk_42CD, v6, v15, savedregsc);
 v7 = call_shmget_shmat();
 __printf_chk(1, &unk_42E9, v7, v16, savedregsd);
 v8 = param_signal_handling();
 return __printf_chk(1, &unk_4305, v8, v17, savedregse);
}


/* Function: param_pthread_create @ 0x2972 */
int param_pthread_create(int a1)
{
 int v1; // edx
 int result; // eax
 int v3; // [esp+0h] [ebp-1Ch]
 pthread_t newthread; // [esp+4h] [ebp-18h] BYREF
 int arg; // [esp+8h] [ebp-14h] BYREF
 void *thread_return[3]; // [esp+Ch] [ebp-10h] BYREF

 thread_return[1] = (void *)__readgsdword(0x14u);
 arg = a1;
 v1 = pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg);
 result = -1;
 if ( !v1 )
 {
 pthread_join(newthread, thread_return);
 v3 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 return v3;
 }
 return result;
}


/* Function: call_pthread_create @ 0x29F3 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x2A06 */
int param_pthread_join()
{
 unsigned int *v0; // edx
 pthread_t *v1; // edi
 void *(*v2)(void *); // ecx
 int v3; // esi
 int v4; // edi
 int v5; // eax
 unsigned int *v7; // [esp+0h] [ebp-68h]
 void *(*v8)(void *); // [esp+4h] [ebp-64h]
 pthread_t newthread[3]; // [esp+1Ch] [ebp-4Ch] BYREF
 unsigned int v10[16]; // [esp+28h] [ebp-40h] BYREF

 v0 = v10;
 v10[9] = __readgsdword(0x14u);
 memcpy(v10, &unk_4440, 0x24u);
 v1 = newthread;
 v2 = (void *(*)(void *))thread_sum;
 do
 {
 v7 = v0;
 v8 = v2;
 v3 = pthread_create(v1, 0, v2, v0);
 if ( v3 )
 return -1;
 ++v1;
 v2 = v8;
 v0 = v7 + 3;
 }
 while ( v1 != v10 );
 v4 = 0;
 while ( !pthread_join(newthread[v4], 0) )
 {
 v5 = 3 * v4++;
 v3 += v10[v5 + 2];
 if ( v4 == 3 )
 return v3;
 }
 return -2;
}


/* Function: call_pthread_join @ 0x2AC1 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x2ACA */
int param_mutex_lock(int a1, int arg)
{
 pthread_t *v2; // esi
 int result; // eax
 int v4; // edx
 void *(*v5)(void *); // ecx
 int v6; // eax
 int i; // edx
 void *(*v8)(void *); // [esp+0h] [ebp-20h]
 int v9; // [esp+4h] [ebp-1Ch]
 int v10; // [esp+4h] [ebp-1Ch]

 v2 = (pthread_t *)malloc(4 * a1);
 result = -1;
 if ( v2 )
 {
 shared_counter = 0;
 v4 = 0;
 v5 = (void *(*)(void *))thread_increment;
 while ( v4 < a1 )
 {
 v8 = v5;
 v9 = v4;
 v6 = pthread_create(&v2[v4], 0, v5, &arg);
 v5 = v8;
 if ( v6 )
 {
 free(v2);
 return -2;
 }
 v4 = v9 + 1;
 }
 for ( i = 0; i < a1; i = v10 + 1 )
 {
 v10 = i;
 pthread_join(v2[i], 0);
 }
 free(v2);
 result = 42;
 if ( shared_counter != arg * a1 )
 return -3;
 }
 return result;
}


/* Function: call_mutex_lock @ 0x2B9C */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x2BB4 */
int param_condition_variable()
{
 int v0; // edx
 int result; // eax
 int v2; // [esp+0h] [ebp-1Ch]
 pthread_t th; // [esp+4h] [ebp-18h] BYREF
 pthread_t newthread; // [esp+8h] [ebp-14h] BYREF
 void *thread_return[3]; // [esp+Ch] [ebp-10h] BYREF

 thread_return[1] = (void *)__readgsdword(0x14u);
 ready = 0;
 data = 0;
 v0 = pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0);
 result = -1;
 if ( !v0 )
 {
 if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
 }
 else
 {
 pthread_join(newthread, thread_return);
 pthread_join(th, 0);
 v2 = *(unsigned int *)thread_return[0];
 free(thread_return[0]);
 return v2;
 }
 }
 return result;
}


/* Function: call_condition_variable @ 0x2C7F */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x2C88 */
int param_atomic_ops(int a1, int a2)
{
 pthread_t *v1; // esi
 int result; // eax
 int v3; // edi
 void *(*v4)(void *); // ecx
 int v5; // eax
 int i; // edi
 int v7; // edi
 pthread_t v8; // [esp-1Ch] [ebp-48h]
 void *(*v9)(void *); // [esp+0h] [ebp-2Ch]
 pthread_t newthread[8]; // [esp+Ch] [ebp-20h] BYREF
 int arg; // [esp+38h] [ebp+Ch]

 arg = a2;
 newthread[1] = __readgsdword(0x14u);
 v1 = (pthread_t *)malloc(4 * a1);
 result = -1;
 if ( v1 )
 {
 atomic_counter = 0;
 v3 = 0;
 v4 = (void *(*)(void *))thread_atomic_increment;
 while ( v3 < a1 )
 {
 v9 = v4;
 v5 = pthread_create(&v1[v3], 0, v4, &arg);
 v4 = v9;
 if ( v5 )
 {
 free(v1);
 return -2;
 }
 ++v3;
 }
 if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 for ( i = 0; i < a1; ++i )
 {
 v8 = v1[i];
 pthread_join(v8, 0);
 }
 v7 = atomic_counter;
 free(v1);
 result = 42;
 if ( v7 <= 0 )
 return -3;
 }
 return result;
}


/* Function: call_atomic_ops @ 0x2D8A */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x2DA2 */
int param_thread_local_storage(int a1)
{
 unsigned int *v1; // eax
 unsigned int *v2; // esi
 int i; // edi
 void *v4; // eax
 int v5; // edi
 void *(*v6)(void *); // edx
 int v7; // eax
 int v8; // eax
 int v9; // edx
 int v10; // edi
 void *v12; // [esp-14h] [ebp-48h]
 int v13; // [esp-10h] [ebp-44h]
 int v14; // [esp+0h] [ebp-34h]
 void *(*v15)(void *); // [esp+4h] [ebp-30h]
 int v16; // [esp+4h] [ebp-30h]
 int v17; // [esp+4h] [ebp-30h]
 pthread_t *ptr; // [esp+8h] [ebp-2Ch]
 void *thread_return[8]; // [esp+14h] [ebp-20h] BYREF

 thread_return[1] = (void *)__readgsdword(0x14u);
 ptr = (pthread_t *)malloc(4 * a1);
 v1 = malloc(4 * a1);
 if ( !ptr )
 return -1;
 v2 = v1;
 if ( !v1 )
 return -1;
 for ( i = 0; i < a1; ++i )
 {
 v4 = malloc(0x10u);
 v2[i] = v4;
 v13 = i;
 __snprintf_chk(v4, 16, 1, 16, "Thread-%d", v13);
 }
 v5 = 0;
 v6 = (void *(*)(void *))thread_tls_test;
 while ( v5 < a1 )
 {
 v15 = v6;
 v7 = pthread_create(&ptr[v5], 0, v6, (void *)v2[v5]);
 v6 = v15;
 if ( v7 )
 {
 v8 = 0;
 do
 {
 v16 = v8;
 free((void *)v2[v8]);
 v8 = v16 + 1;
 }
 while ( v5 >= v16 + 1 );
 free(v2);
 free(ptr);
 return -2;
 }
 ++v5;
 }
 v14 = 0;
 v10 = 0;
 v17 = 0;
 while ( v10 < a1 )
 {
 pthread_join(ptr[v10], thread_return);
 v17 += *(unsigned int *)thread_return[0];
 v14 += *((unsigned int *)thread_return[0] + 1);
 free(thread_return[0]);
 v12 = (void *)v2[v10++];
 free(v12);
 }
 free(v2);
 free(ptr);
 if ( 100 * a1 != v17 )
 return -3;
 v9 = 42;
 if ( 150 * a1 != v14 )
 return -3;
 return v9;
}


/* Function: call_thread_local_storage @ 0x2F32 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x2F45 */
int test_thread_concurrency()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v7; // [esp-8h] [ebp-Ch]
 int v8; // [esp-4h] [ebp-8h]
 int v9; // [esp+0h] [ebp-4h]
 int v10; // [esp+0h] [ebp-4h]
 int v11; // [esp+0h] [ebp-4h]
 int v12; // [esp+0h] [ebp-4h]
 int v13; // [esp+0h] [ebp-4h]
 int savedregs; // [esp+4h] [ebp+0h]
 int savedregsa; // [esp+4h] [ebp+0h]
 int savedregsb; // [esp+4h] [ebp+0h]
 int savedregsc; // [esp+4h] [ebp+0h]
 int savedregsd; // [esp+4h] [ebp+0h]

 puts(asc_432B);
 v0 = call_pthread_create();
 __printf_chk(1, &unk_4349, v0, v7, v8);
 v1 = param_pthread_join();
 __printf_chk(1, &unk_4365, v1, v9, savedregs);
 v2 = call_mutex_lock();
 __printf_chk(1, &unk_4382, v2, v10, savedregsa);
 v3 = param_condition_variable();
 __printf_chk(1, &unk_439E, v3, v11, savedregsb);
 v4 = call_atomic_ops();
 __printf_chk(1, &unk_43BA, v4, v12, savedregsc);
 v5 = call_thread_local_storage();
 return __printf_chk(1, &unk_43D6, v5, v13, savedregsd);
}















/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x307C */
void term_proc()
{
 /* _do_global_dtors_aux(); */
}

/* Stub for _do_global_dtors_aux */
int _do_global_dtors_aux(void)
{
 return 0;
}


/* FAILED to decompile: setsockopt @ 0x7104 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x7108 */

/* FAILED to decompile: raise @ 0x710C */

/* FAILED to decompile: __snprintf_chk @ 0x7110 */

/* FAILED to decompile: strstr @ 0x7114 */

/* FAILED to decompile: strcmp @ 0x7118 */

/* FAILED to decompile: __libc_start_main @ 0x711C */

/* FAILED to decompile: read @ 0x7120 */

/* FAILED to decompile: _exit @ 0x7124 */

/* FAILED to decompile: free @ 0x7128 */

/* FAILED to decompile: shmget @ 0x712C */

/* FAILED to decompile: fclose @ 0x7130 */

/* FAILED to decompile: pthread_cond_wait @ 0x7134 */

/* FAILED to decompile: signal @ 0x7138 */

/* FAILED to decompile: memcmp @ 0x713C */

/* FAILED to decompile: sleep @ 0x7140 */

/* FAILED to decompile: alarm @ 0x7144 */

/* FAILED to decompile: __stack_chk_fail @ 0x7148 */

/* FAILED to decompile: rewind @ 0x714C */

/* FAILED to decompile: wait @ 0x7150 */

/* FAILED to decompile: shmat @ 0x7154 */

/* FAILED to decompile: pthread_mutex_lock @ 0x7158 */

/* FAILED to decompile: unlink @ 0x715C */

/* FAILED to decompile: __cxa_finalize @ 0x7160 */

/* FAILED to decompile: fwrite @ 0x7164 */

/* FAILED to decompile: waitpid @ 0x7168 */

/* FAILED to decompile: usleep @ 0x716C */

/* FAILED to decompile: fread @ 0x7170 */

/* FAILED to decompile: strcpy @ 0x7174 */

/* FAILED to decompile: shmctl @ 0x7178 */

/* FAILED to decompile: pthread_cond_signal @ 0x717C */

/* FAILED to decompile: malloc @ 0x7180 */

/* FAILED to decompile: puts @ 0x7184 */

/* FAILED to decompile: stat @ 0x7188 */

/* FAILED to decompile: open @ 0x718C */

/* FAILED to decompile: strchr @ 0x7190 */

/* FAILED to decompile: strlen @ 0x7194 */

/* FAILED to decompile: write @ 0x7198 */

/* FAILED to decompile: bind @ 0x719C */

/* FAILED to decompile: __isoc99_sscanf @ 0x71A0 */

/* FAILED to decompile: fopen @ 0x71A4 */

/* FAILED to decompile: __errno_location @ 0x71A8 */

/* FAILED to decompile: strncpy @ 0x71AC */

/* FAILED to decompile: syscall @ 0x71B0 */

/* FAILED to decompile: fileno @ 0x71B4 */

/* FAILED to decompile: execl @ 0x71B8 */

/* FAILED to decompile: pipe @ 0x71BC */

/* FAILED to decompile: __printf_chk @ 0x71C0 */

/* FAILED to decompile: shmdt @ 0x71C4 */

/* FAILED to decompile: pthread_create @ 0x71C8 */

/* FAILED to decompile: fork @ 0x71CC */

/* FAILED to decompile: listen @ 0x71D0 */

/* FAILED to decompile: ftok @ 0x71D4 */

/* FAILED to decompile: socket @ 0x71D8 */

/* FAILED to decompile: pthread_join @ 0x71DC */

/* FAILED to decompile: pthread_cancel @ 0x71E0 */

/* FAILED to decompile: close @ 0x71E4 */

/* Total functions decompiled: 137, failed: 57 */
