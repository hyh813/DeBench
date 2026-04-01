// Angr Decompilation of 6_clang_O1_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <errno.h>
#include <dlfcn.h>
#include <sys/auxv.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>

/* Declare external functions that are used but not defined in the code */
extern unsigned long getauxval(unsigned long type);
extern unsigned long __getauxval(unsigned long type);
extern int __isoc99_sscanf(const char *str, const char *format, ...);
extern int signal_handler(unsigned long a0);
extern unsigned long long __aarch64_ldadd4_acq_rel(unsigned long long val, unsigned long long *ptr);
extern unsigned long long __aarch64_cas4_acq_rel(unsigned long long old_val, unsigned long long new_val, unsigned long long *ptr);
extern int arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_dep3);

/* Global mutex variables */
extern pthread_mutex_t counter_mutex;
extern pthread_mutex_t cond_mutex;

/* Define __ROL__ (Rotate Left) macro */
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))

/* External CRT stub functions */
extern void _start(void);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);

/* CRT stub function _init removed by preprocessor */


/* Forward declarations for thread functions */
unsigned int* thread_compute(unsigned int *a0);
unsigned long long thread_sum(unsigned int *ptr);
unsigned long long thread_increment(unsigned int *ptr);
unsigned long long thread_atomic_increment(unsigned int *a0);
unsigned int* thread_tls_test(char *a0);
unsigned int* consumer_thread();
unsigned long long producer_thread();

/* Wrapper functions for pthread_create to handle correct function signatures */
/* Wrapper functions for pthread_create to handle correct function signatures */
void* wrapper_thread_compute(void *arg) {
    return (void*)thread_compute((unsigned int*)arg);
}

void* wrapper_thread_sum(void *arg) {
    return (void*)thread_sum((unsigned int*)arg);
}

void* wrapper_thread_increment(void *arg) {
    return (void*)thread_increment((unsigned int*)arg);
}

void* wrapper_thread_atomic_increment(void *arg) {
    return (void*)thread_atomic_increment((unsigned int*)arg);
}

/* Wrapper functions for pthread_create - must match void* (*)(void*) signature */
void* wrapper_thread_compute(void *arg) {
    return (void*)thread_compute((unsigned int*)arg);
}

void* wrapper_thread_sum(void *arg) {
    return (void*)thread_sum((unsigned int*)arg);
}

void* wrapper_thread_increment(void *arg) {
    return (void*)thread_increment((unsigned int*)arg);
}

void* wrapper_thread_atomic_increment(void *arg) {
    return (void*)thread_atomic_increment((unsigned int*)arg);
}

void* wrapper_thread_tls_test(void *arg) {
    return (void*)thread_tls_test((char*)arg);
}

void* wrapper_consumer_thread(void *arg) {
    return (void*)consumer_thread();
}

void* wrapper_producer_thread(void *arg) {
    return (void*)producer_thread();
}


// Function: __dollar_x at 0x4012e0
extern unsigned long long g_414ff8;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto g_414ff8;
}


// Function: sub_4012f4 at 0x4012f4
long long sub_4012f4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = memcpy(v0, v1, v2);
 return memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x401700
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)__getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)__getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_401724 at 0x401724
void sub_401724(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401770 at 0x401770
void sub_401770()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401788 at 0x401788
void sub_401788()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4017fc at 0x4017fc
void sub_4017fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401848 at 0x401848
long long sub_401848()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_strcpy at 0x401854
long long param_strcpy(char *a0, char *a1)
{
 char *dst; // x0
 unsigned long long len; // x0

 dst = strcpy(a0, a1);
 len = strlen(dst);
 return strlen(dst);
}


// Function: call_strcpy at 0x40186c
long long call_strcpy()
{
 unsigned long long len; // x0
 char v0[8]; // [bp-0x30]
 char v1[24]; // [bp-0x28]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 strncpy(v1, "HelloLib", 8);
 len = strlen(v1);
 return strlen(v1);
}


// Function: param_strcmp at 0x4018a0
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned long long v3; // x30
 unsigned int result; // w0
 unsigned int v5; // w8
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 result = strcmp(a0, a1);
 if (!result)
 v5 = 0;
 else
 v5 = 4294967295;
 if (result >= 1)
 return 1;
 return v5;
}


// Function: call_strcmp at 0x4018c4
unsigned long long call_strcmp()
{
 return 0;
}


// Function: param_strlen at 0x4018cc
long long param_strlen()
{
 char *v2; // x0
 unsigned long long len; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 len = strlen(v2);
 return strlen(v2);
}


// Function: call_strlen at 0x4018e0
unsigned long long call_strlen()
{
 char v0[8]; // [bp-0x30]
 char v1[24]; // [bp-0x28]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 strncpy(v1, "HelloLib", 8);
 return strlen(v1);
}


// Function: param_memcpy at 0x4018e8
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x40190c
unsigned long long call_memcpy()
{
 return 90;
}


// Function: param_memcmp at 0x401914
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v3; // x30
 unsigned int result; // w0
 unsigned int v5; // w8
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 result = memcmp(a0, a1, a2);
 if (!result)
 v5 = 0;
 else
 v5 = 4294967295;
 if (result >= 1)
 return 1;
 return v5;
}


// Function: call_memcmp at 0x401938
unsigned long long call_memcmp()
{
 return 4294967295;
}


// Function: param_printf at 0x401940
int param_printf(unsigned int a0, unsigned long a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x401964
int call_printf()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x40198c
unsigned long long param_scanf()
{
 char *v4; // x0
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 if (__isoc99_sscanf(v4, "%d,%d", &v1, &v0) != 2)
 return 4294967295;
 return v0 + v1 & 4294967295;
}


// Function: call_scanf at 0x4019cc
unsigned long long call_scanf()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 if (__isoc99_sscanf("123,456", "%d,%d") != 2)
 return 4294967295;
 return v0 + v1 & 4294967295;
}


// Function: param_fopen_fclose at 0x401a14
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose()
{
 char *v2; // x0
 FILE *fp; // x0
 unsigned int v4; // w19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 fp = fopen(v2, "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4;
}


// Function: call_fopen_fclose at 0x401a5c
unsigned long long call_fopen_fclose()
{
 void* fp; // x0
 unsigned int v3; // w0
 unsigned long long v4; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v3 = fileno(fp);
 fclose(fp);
 if (0 <= v3)
 v4 = 42;
 else
 v4 = 4294967295;
 return v4;
}


// Function: param_fread_fwrite at 0x401ab4
 unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // x0
 void* v6; // x20
 unsigned long long count; // x0
 unsigned long long v8; // x0
 unsigned long long v0[2]; // [bp-0x60] - 16 bytes for storing test data (2 x 8 bytes)
 unsigned long long v1; // [bp-0x58] - padding
 unsigned short v2; // [bp-0x50]
 char *v3; // [bp-0x40]
 char v4; // [bp+0x0]
 char *read_buffer; // pointer to v0 for reading

 v3 = &v4;
 read_buffer = (char*)v0;
 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v6 = fp;
 if (fwrite("BinBench Test Data", 1, 18, v6) != 18)
 {
 fclose(v6);
 return 4294967294;
 }
 rewind(v6);
 memset(v0, 0, sizeof(v0));
 count = fread(read_buffer, 1, 18, v6);
 fclose(v6);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 // Compare with expected magic values
 // "BinBench Test Da" = 0x42696e42656e63682054657374 = 7521977183824144706
 // "ta" = 0x7461 = 29793, but stored in middle: 7008762604619650080
 v2 = *(unsigned short*)(read_buffer + 16); // Get last 2 bytes
 if (!(v2 ^ 0x7461ULL))
 v8 = 42;
 else
 v8 = 4294967293;
 return v8;
}


// Function: call_fread_fwrite at 0x401bd4
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401bf0
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned long long v2; // x19
 unsigned int *ptr; // x0
 unsigned int v4; // w8
 unsigned long long i; // x10
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 return 4294967295;
 if (v2)
 {
 v4 = 0;
 ptr = ptr;
 i = v2;
 do
 {
 *(ptr) = v4;
 v4 += 10;
 ptr += 1;
 i -= 1;
 } while (i != 1);
 }
 free(ptr);
 return ptr[1 + v2] + *(ptr);
}


// Function: call_malloc_free at 0x401c58
unsigned int call_malloc_free()
{
 unsigned int *ptr; // x0
 unsigned int v3; // w8
 unsigned long long i; // x9
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (unsigned int*)malloc(40);
 if (!ptr)
 return 4294967295;
 v3 = 0;
 i = 0;
 do
 {
 *((unsigned int *)((char *)ptr + i)) = v3;
 i += 4;
 v3 += 10;
 } while (i != 40);
 free(ptr);
 return ptr[9] + ptr[0];
}


// Function: param_memset at 0x401cb4
unsigned long long param_memset(char *ptr, unsigned long a1)
{
 unsigned long n; // x19
 unsigned long long v3; // x0
 char *v4; // x20
 unsigned long v5; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 n = a1;
 memset(ptr, 0, n);
 v3 = 0;
 if (!n)
 return 0;
 do
 {
 v4 = ptr + 1;
 v5 = n - 1;
 v3 += *(ptr);
 ptr = v4;
 n = v5;
 } while (n != 1);
 return v3;
}


// Function: call_memset at 0x401cf8
int call_memset()
{
 unsigned long long i; // x8
 int v1; // [bp-0x30]

 i = 0;
 do
 {
 *((unsigned int *)((char *)&v1 + i)) = 255;
 i += 4;
 } while (i != 40);
 v1 = 0;
 return 0 + (int)v1;
}


// Function: param_strchr_strstr at 0x401d34
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long v2; // x30
 unsigned long long v3; // x21
 unsigned long long ptr1; // x0
 unsigned long long v7; // x21
 unsigned long long ptr2; // x0
 unsigned long long v9; // x8
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2_save; // [bp-0x20]
 char v3_char; // [bp+0x0]

 v0 = &v3_char;
 v1 = v2;
 v2_save = v3;
 ptr1 = strchr(a0, a1 & 255);
 if (ptr1)
 v7 = ptr1 - a0 & 4294967295;
 else
 v7 = 4294967295;
 ptr2 = strstr(a0, a2);
 if (ptr2)
 v9 = ptr2 - a0 & 4294967295;
 else
 v9 = 4294967295;
 return v9 + v7;
}


// Function: call_strchr_strstr at 0x401d8c
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x401d94
extern char g_4033f4;
extern char g_40340f;
extern char g_40342a;
extern char g_403446;
extern char g_403462;
extern char g_40347e;
extern char g_40349a;
extern char g_4034b7;
extern char g_4034d3;
extern char g_4034ef;
extern char g_40350b;
extern char g_403526;
extern char g_4036ec;

int test_standard_library_functions()
{
 unsigned int v7; // w19
 unsigned int v16; // w19
 unsigned long long j; // x8
 unsigned long long v9; // x1
 void* fp; // x0
 unsigned int v11; // w0
 unsigned int ptr[10]; // x0
 unsigned int v14; // w8
 unsigned long long i; // x9
 char v0[16]; // [bp-0x60]
 char v1[24]; // [bp-0x58]
 unsigned long long result; // [bp-0x40]
 char *v3; // [bp-0x30]
 char v4; // [bp-0x14]
 char v5; // [bp+0x0]

 v3 = &v5;
 puts(&g_4036ec);
 strncpy(v1, "HelloLib", 8);
 printf(&g_4033f4, strlen(&v0));
 printf(&g_40340f, 0);
 printf(&g_40342a, 12);
 printf(&g_403446, 90);
 v7 = 4294967295;
 printf(&g_403462, 4294967295);
 printf(&g_40347e, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 if (__isoc99_sscanf("123,456", "%d,%d") == 2)
 v9 = *((int *)&v4) + *((int *)&v0[0]) & 4294967295;
 else
 v9 = 4294967295;
 printf(&g_40349a, v9);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v11 = fileno(fp);
 fclose(fp);
 if (0 <= v11)
 v7 = 42;
 else
 v7 = 4294967295;
 }
 printf(&g_4034b7, v7);
 printf(&g_4034d3, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 ptr = malloc(40);
 if (ptr)
 {
 v14 = 0;
 i = 0;
 do
 {
 *((unsigned int *)((char *)ptr + i)) = v14;
 i += 4;
 v14 += 10;
 } while (i != 40);
 v16 = ptr[9] + ptr[0];
 free(ptr);
 }
 else
 {
 v16 = 4294967295;
 }
 printf(&g_4034ef, v16);
 j = 0;
 do
 {
 *((unsigned int *)&v0[j]) = 255;
 j += 4;
 } while (j != 40);
 result = 0;
 *((unsigned long long *)&v0) = 0;
 printf(&g_40350b, 0 + *((int *)&v0[0]));
 return printf(&g_403526, 15);
}


// Function: param_linux_syscall at 0x401fa0
unsigned int param_linux_syscall(unsigned long a0)
{
 unsigned long long v2; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = syscall(56);
 if (((char)(v2 >> 31) & 1))
 return -(*(__errno_location()));
 syscall(57);
 return v2;
}


// Function: call_linux_syscall at 0x401ff4
unsigned long long call_linux_syscall()
{
 unsigned long long v3; // x30
 unsigned long long v4; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 v4 = syscall(56);
 if (!((char)(v4 >> 31) & 1))
 syscall(57);
 else
 v4 = -(*(__errno_location()));
 if (0 > (unsigned int)v4)
 return 4294967295;
 return 42;
}


// Function: param_win32_api at 0x402054
unsigned long long param_win32_api()
{
 unsigned int v3; // w0
 unsigned int v4; // w8
 unsigned long long v0; // [bp-0x60]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v3 = stat();
 if (0 < v0)
 v4 = 42;
 else
 v4 = 4294967294;
 if (0 > v3)
 return 4294967295;
 return v4;
}


// Function: call_win32_api at 0x402090
unsigned long long call_win32_api()
{
 unsigned int v4; // w0
 unsigned int v5; // w8
 char v0; // [bp-0x90]
 unsigned long long v1; // [bp-0x60]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v4 = stat("/etc/passwd", &v0);
 if (0 < v1)
 v5 = 42;
 else
 v5 = 4294967294;
 if (0 > v4)
 return 4294967295;
 return v5;
}


// Function: param_fork_exec at 0x4020d4
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long long pid; // x0
 int status; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 return 4294967295;
 }
 else if (!(unsigned int)pid)
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else if (((char)(waitpid(pid, &status, 0) >> 31) & 1))
 {
 return 4294967294;
 }
 else if (!((char)arm64g_calculate_condition(9, (unsigned long long)(status & 127), 0, 0)))
 {
 return 4294967293;
 }
 else
 {
 return __ROL__(status, 24) & 4278190335 & 255;
 }
}


// Function: call_fork_exec at 0x40215c
unsigned long long call_fork_exec()
{
 unsigned long long pid; // x0
 unsigned int result; // w8
 int status; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 result = 4294967295;
 }
 else if (!(unsigned int)pid)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (((char)(waitpid(pid, &status, 0) >> 31) & 1))
 {
 result = 4294967294;
 }
 else if (!((char)arm64g_calculate_condition(9, (unsigned long long)(status & 127), 0, 0)))
 {
 result = 4294967293;
 }
 else
 {
 result = __ROL__(status, 24) & 4278190335 & 255;
 }
 if (result)
 return 4294967295;
 return 42;
}


// Function: param_pipe_communication at 0x4021e4
unsigned long long param_pipe_communication()
{
 unsigned long long pid; // x0
 unsigned long long count; // x19
 unsigned long long v7; // x0
 char v0[32]; // [bp-0x48]
 int fds[2]; // [bp-0x28]
 char *v3; // [bp-0x20]
 char v4; // [bp+0x0]

 v3 = &v4;
 if (((char)(pipe(fds) >> 31) & 1))
 return 4294967295;
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 return 4294967294;
 }
 else if ((unsigned int)pid)
 {
 close(fds[1]);
 count = read(fds[0], v0, 31);
 v0[count] = 0;
 close(fds[0]);
 wait(NULL);
 if (0 < count)
 v7 = 42;
 else
 v7 = 4294967293;
 return v7;
 }
 else
 {
 close(fds[0]);
 write(fds[1], "HelloPipe", 9);
 close(fds[1]);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x40229c
unsigned long long call_pipe_communication()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x4022b0
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

unsigned long long param_socket_create()
{
 unsigned long long sock; // x0
 unsigned int v6; // w19
 unsigned int v7; // w0
 unsigned long long v8; // x0
 sockaddr v0; // [bp-0x38]
 unsigned int result; // [bp-0x24]
 char *v3; // [bp-0x20]
 char v4; // [bp+0x0]

 v3 = &v4;
 sock = socket(2, 1, 0);
 if (((char)(sock >> 31) & 1))
 return 4294967295;
 v6 = sock;
 result = 1;
 if (((char)(setsockopt(sock, 1, 2, &result, 4) >> 31) & 1))
 {
 close(v6);
 return 4294967294;
 }
 *((unsigned long long *)&v0.sin_family) = 2;
 *((unsigned long long *)&v0.sa_data[6]) = 0;
 if (((char)(bind(v6, &v0, 16) >> 31) & 1))
 {
 close(v6);
 return 4294967293;
 }
 v7 = listen(v6, 5);
 close(v6);
 if (v7 < 0)
 v8 = 0xfffffffc;
 else
 v8 = 42;
 return v8;
}


// Function: call_socket_create at 0x402374
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x402388
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

unsigned int param_shmget_shmat()
{
 int shm_id; // x0
 struct_0 *ptr; // x0
 unsigned int v5; // w20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 shm_id = open("/tmp/binbench_shm", 66, 438);
 if (((char)(shm_id >> 31) & 1))
 return 4294967295;
 close(shm_id);
 shm_id = shmget(ftok("/tmp/binbench_shm", 42), 1024, IPC_CREAT | 0666);
 if (((char)(shm_id >> 31) & 1))
 return 4294967294;
 ptr = (struct_0 *)shmat(shm_id, NULL, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long long)ptr, 1, 0))
 return 4294967293;
 *((unsigned long long *)((char *)ptr + 5)) = 34184295084281188;
 ptr->field_0 = 7299600957910902867;
 v5 = strlen((char*)ptr);
 shmdt(ptr);
 shmctl(shm_id, 0, 0);
 return v5;
}


// Function: call_shmget_shmat at 0x402458
unsigned long long call_shmget_shmat()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if (0 >= param_shmget_shmat())
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x402478
extern unsigned int __dollar_d_3;
extern unsigned int signal_number;

unsigned long long param_signal_handling()
{
 unsigned long long v2; // x0
 unsigned long long v3; // cc_op
 unsigned long long v4; // cc_dep1
 unsigned long long v5; // cc_dep2
 unsigned long long v6; // x20
 unsigned long long v7; // cc_op
 unsigned long v8; // cc_dep1
 unsigned long long v9; // cc_dep2
 unsigned long long v10; // x21
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if ((char)arm64g_calculate_condition(2, signal(10, signal_handler), 1, 0))
 return 4294967295;
 v2 = signal(14, signal_handler);
 v3 = 2;
 v4 = v2;
 v5 = 1;
 if ((char)arm64g_calculate_condition(2, v2, 1, 0))
 return 4294967294;
 __dollar_d_3 = 0;
 raise(10);
 if (!__dollar_d_3)
 {
 v6 = 1000;
 do
 {
 usleep(1000);
 if (!__dollar_d_3)
 {
 v3 = 3;
 v4 = ((char)arm64g_calculate_condition(v3, v4, v5, 0) ? v6 & 4294967295 : 0);
 v5 = ((char)arm64g_calculate_condition(v3, v4, v5, 0) ? 1 : 0);
 }
 else
 {
 v3 = 0;
 v4 = ((char)arm64g_calculate_condition(v3, v4, v5, 0) ? v6 & 4294967295 : 0);
 v5 = ((char)arm64g_calculate_condition(v3, v4, v5, 0) ? 1 : 0);
 }
 } while ((v6 = (unsigned long long)((unsigned int)v6 - 1), (char)arm64g_calculate_condition(v3 | 128, v4, v5, 0)));
 }
 if (!__dollar_d_3)
 return 4294967293;
 v7 = 3;
 v8 = signal_number;
 v9 = 10;
 if (signal_number != 10)
 return 0xfffffffc;
 __dollar_d_3 = 0;
 alarm(1);
 if (!__dollar_d_3)
 {
 v10 = 2000;
 do
 {
 usleep(1000);
 if (!__dollar_d_3)
 {
 v7 = 3;
 v8 = ((char)arm64g_calculate_condition(v7, v8, v9, 0) ? v10 & 4294967295 : 0);
 v9 = ((char)arm64g_calculate_condition(v7, v8, v9, 0) ? 1 : 0);
 }
 else
 {
 v7 = 0;
 v8 = ((char)arm64g_calculate_condition(v7, v8, v9, 0) ? v10 & 4294967295 : 0);
 v9 = ((char)arm64g_calculate_condition(v7, v8, v9, 0) ? 1 : 0);
 }
 } while ((v10 = (unsigned long long)((unsigned int)v10 - 1), (char)arm64g_calculate_condition(v7 | 128, v8, v9, 0)));
 }
 if (!__dollar_d_3 || signal_number != 14)
 return 4294967291;
 signal(10, NULL);
 signal(14, NULL);
 return 42;
 return 4294967291;
}


// Function: signal_handler at 0x4025ac
extern unsigned int __dollar_d_3;
extern unsigned int signal_number;

long long signal_handler(unsigned long a0)
{
 __dollar_d_3 = 1;
 signal_number = a0;
 return a0;
}


// Function: call_signal_handling at 0x4025c4
unsigned long long call_signal_handling()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x4025d8
extern char g_403575;
extern char g_403591;
extern char g_4035ad;
extern char g_4035c9;
extern char g_4035e5;
extern char g_403601;
extern char g_40361d;
extern char g_403710;

long long test_system_calls()
{
 unsigned long long v4; // x19
 unsigned long long v5; // x1
 unsigned long long v14; // x1
 unsigned long long v15; // x0
 unsigned int v6; // w0
 unsigned int v7; // w8
 unsigned long v8; // x1
 unsigned long long pid; // x0
 unsigned int result; // w8
 unsigned long long v11; // x1
 unsigned int v0[12][1]; // [bp-0xa0]
 unsigned long long v1; // [bp-0x70]
 char *v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts(&g_403710);
 v4 = syscall(56);
 if (!((char)(v4 >> 31) & 1))
 syscall(57);
 else
 v4 = -(*(__errno_location()));
 if (0 <= (unsigned int)v4)
 v5 = 42;
 else
 v5 = 4294967295;
 printf(&g_403575, v5);
 v6 = stat("/etc/passwd", &v0);
 if (0 < v1)
 v7 = 42;
 else
 v7 = 4294967294;
 if (0 <= v6)
 v8 = v7;
 else
 v8 = 4294967295;
 printf(&g_403591, v8);
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 result = 4294967295;
 }
 else if (!(unsigned int)pid)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (((char)(waitpid(pid, &v0, 0) >> 31) & 1))
 {
 result = 4294967294;
 }
 else if (!((char)arm64g_calculate_condition(9, (unsigned long long)(v0[0] & 127), 0, 0)))
 {
 result = 4294967293;
 }
 else
 {
 result = __ROL__(v0[0], 24) & 4278190335 & 255;
 }
 if (!result)
 v11 = 42;
 else
 v11 = 4294967295;
 printf(&g_4035ad, v11);
 printf(&g_4035c9, param_pipe_communication() & 4294967295);
 printf(&g_4035e5, param_socket_create() & 4294967295);
 if (0 < param_shmget_shmat())
 v14 = 42;
 else
 v14 = 4294967295;
 printf(&g_403601, v14);
 v15 = printf(&g_40361d, param_signal_handling() & 4294967295);
 return printf(&g_40361d, param_signal_handling() & 4294967295);
}


// Function: thread_compute at 0x402758
unsigned int * thread_compute(unsigned int *a0)
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(4);
 *(ptr) = *(a0) * *(a0);
 return ptr;
}


// Function: param_pthread_create at 0x402784
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 unsigned int v1; // [bp-0x24]
 pthread_t *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8], Other Possible Types: unsigned long long
 char v4; // [bp+0x0]

 v2 = &v3;
 v1 = a0;
 if (!(int)pthread_create(v2, 0, wrapper_thread_compute, &v1))
 {
 pthread_join(v3, (void**)&v0);
 free(v0);
 return *(v0);
 }
 return 4294967295;
}


// Function: call_pthread_create at 0x4027e8
unsigned int call_pthread_create()
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8], Other Possible Types: unsigned long long
 char v4; // [bp+0x0]

 v2 = &v4;
 v1 = 7;
 if (!(int)pthread_create(&v3, 0, wrapper_thread_compute, &v1))
 {
 pthread_join(v3, (void**)&v0);
 free(v0);
 return *(v0);
 }
 return 4294967295;
}


// Function: thread_sum at 0x402850
unsigned long long thread_sum(unsigned int *ptr)
{
 unsigned int v0; // w8
 unsigned int v1; // w10

 v0 = *(ptr);
 v1 = ptr[1];
 ptr[2] = 0;
 if (v1 >= v0)
 ptr[2] = ptr[2] + v0 + v1 - v0 + v0 * (v1 - v0) + __ROL__((v1 + ~(v0)) * (v1 - v0), 63);
 return 0;
}


// Function: param_pthread_join at 0x402890
unsigned int param_pthread_join()
{
 unsigned long long v9; // x21
 unsigned int *v10; // x19
 unsigned long long v11; // x20
 unsigned long long v12; // x19
 unsigned int *v13; // x21
 unsigned int *ptr; // x21
 unsigned int *v15; // x21
 unsigned int v0; // [bp-0x70], Other Possible Types: unsigned long long
 unsigned long long v1; // [bp-0x70]
 unsigned int v2; // [bp-0x64]
 unsigned long long v3; // [bp-0x60], Other Possible Types: unsigned int
 unsigned long long v4; // [bp-0x58]
 unsigned int result; // [bp-0x50]
 pthread_t v6; // [bp-0x48]
 pthread_t *v7; // [bp-0x30]
 pthread_t v8; // [bp+0x0]

 v7 = &v8;
 v9 = 0;
 v10 = &v0;
 v0 = 0;
 v3 = 0;
 v1 = 42949672961;
 result = 0;
 v2 = 11;
 v3 = 20;
 v4 = 128849018901;
 while (!(int)pthread_create(&v7[v9], 0, thread_sum, v10))
 {
 v10 += 3;
 v9 += 1;
 if (v9 == 3)
 {
 v11 = 0;
 v12 = 0;
 v13 = &v0 + 2;
 while (true)
 {
 ptr = v13;
 if ((int)pthread_join(v7[v11], 0))
 return 4294967294;
 v15 = ptr + 3;
 v11 += 1;
 v12 += *(ptr);
 v13 = v15;
 if (v11 == 3)
 return v12;
 }
 }
 }
 return 4294967295;
}


// Function: call_pthread_join at 0x402970
unsigned int call_pthread_join()
{
 unsigned long long v9; // x21
 char *v10; // x19
 unsigned long long v11; // x20
 unsigned long long v12; // x19
 unsigned long long v13; // x21
 unsigned int *ptr; // x21
 unsigned int *v15; // x21
 char v0; // [bp-0x70], Other Possible Types: unsigned long long
 unsigned long long v1; // [bp-0x70]
 unsigned int v2; // [bp-0x64]
 unsigned long long v3; // [bp-0x60], Other Possible Types: unsigned int
 unsigned long long v4; // [bp-0x58]
 unsigned int result; // [bp-0x50]
 char v6; // [bp-0x48]
 char *v7; // [bp-0x30]
 char v8; // [bp+0x0]

 v7 = &v8;
 v9 = 0;
 v10 = &v0;
 v0 = 0;
 v3 = 0;
 v1 = 42949672961;
 result = 0;
 v2 = 11;
 v3 = 20;
 v4 = 128849018901;
 while (!(int)pthread_create(&(&v6)[v9], 0, thread_sum, v10))
 {
 v9 += 8;
 v10 += 12;
 if (v9 == 24)
 {
 v11 = 0;
 v12 = 0;
 v13 = &v0 | 8;
 while (true)
 {
 ptr = v13;
 if ((int)pthread_join(*((long long *)&(&v6)[v11]), 0))
 return 4294967294;
 v15 = ptr + 3;
 v11 += 8;
 v12 += *(ptr);
 v13 = v15;
 if (v11 == 24)
 return v12;
 }
 }
 }
 return 4294967295;
}


// Function: thread_increment at 0x402a50
extern unsigned long long counter_mutex;
extern unsigned int shared_counter;

unsigned long long thread_increment(unsigned int *ptr)
{
 unsigned int v2; // w20
 unsigned int result; // w20
 unsigned int v4; // w20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = *(ptr);
 if (v2 < 1)
 return 0;
 do
 {
 result = v2;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v4 = result - 1;
 v2 = v4;
 } while (result != 1);
 return 0;
}


// Function: param_mutex_lock at 0x402ab8
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // x19
 unsigned long long *ptr; // x0
 unsigned long long *ptr2; // x20
 unsigned long long v6; // x23
 unsigned long long v7; // x21
 unsigned long long *v8; // x23
 unsigned long long i; // x21
 unsigned long long *v10; // x23
 unsigned long long v11; // x21
 unsigned long long v12; // x0
 unsigned int v0; // [bp-0x44]
 char *v1; // [bp-0x40]
 char v2; // [bp+0x0]

 v1 = &v2;
 v3 = a0;
 v0 = a1;
 ptr = malloc((v3 * 0x100000000 >> 63 & 0xfffffff800000000) + (__ROL__(v3, 3) & 34359738360 & 34359738367));
 if (!ptr)
 return 4294967295;
 ptr = ptr;
 shared_counter = 0;
 if ((unsigned int)v3 >= 1)
 {
 v6 = 0;
 do
 {
 if ((int)pthread_create((char *)ptr + v6, 0, thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v6 += 8, (__ROL__(v3 & 4294967295, 3) & 18446744073709551608) != v6));
 }
 if ((unsigned int)v3 >= 1)
 {
 v7 = v3 & 4294967295;
 v8 = ptr;
 do
 {
 i = v7;
 v10 = v8 + 1;
 pthread_join(*(v8), 0);
 v11 = i - 1;
 v8 = v10;
 v7 = v11;
 } while (i != 1);
 }
 free(ptr);
 if (shared_counter == (unsigned int)v3 * v0)
 v12 = 42;
 else
 v12 = 4294967293;
 return v12;
}


// Function: call_mutex_lock at 0x402ba8
unsigned long long call_mutex_lock()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402bc4
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern char data;
extern char i;

unsigned int * consumer_thread()
{
 unsigned int v2; // w19
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 pthread_mutex_lock(&cond_mutex);
 if (!(i & 1))
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (i != 1);
 }
 if (data)
 v2 = 42;
 else
 v2 = 0;
 pthread_mutex_unlock();
 ptr = malloc(4);
 *(ptr) = v2;
 return ptr;
}


// Function: producer_thread at 0x402c50
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern char data;
extern char ready;

unsigned long long producer_thread()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x402cac
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 char v1; // [bp-0x28], Other Possible Types: unsigned long long
 char *v2; // [bp-0x20]
 char v3; // [bp-0x8], Other Possible Types: unsigned long long
 char v4; // [bp+0x0]

 v2 = &v4;
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v1, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v3, 0, producer_thread, 0))
 {
 pthread_cancel(v1);
 return 4294967294;
 }
 else
 {
 pthread_join(v1, &v0);
 pthread_join(v3, 0);
 free(v0);
 return *(v0);
 }
}


// Function: call_condition_variable at 0x402d54
int call_condition_variable()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x402d68
extern unsigned long long atomic_counter;

unsigned long long thread_atomic_increment(unsigned int *a0)
{
 unsigned int i; // w19
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (*(a0) < 1)
 return 0;
 i = 0;
 do
 {
 __aarch64_ldadd4_acq_rel(1, &atomic_counter);
 __aarch64_cas4_acq_rel(i, i + 1000, &atomic_counter);
 i += 1;
 } while (i != *(a0));
 return 0;
}


// Function: thread_atomic_load_store at 0x402dcc
extern unsigned int atomic_counter;

unsigned long long thread_atomic_load_store()
{
 __sync_synchronize();
 __sync_synchronize();
 atomic_counter = atomic_counter + 100;
 return 0;
}


// Function: param_atomic_ops at 0x402de8
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned long v4; // x20
 unsigned long long *ptr; // x0
 unsigned long long *ptr2; // x19
 unsigned long long v7; // x23
 unsigned long long v8; // x20
 unsigned long long *v9; // x21
 unsigned long long i; // x20
 unsigned long long *v11; // x21
 unsigned long long v12; // x20
 unsigned long long v13; // x0
 char v0; // [bp-0x50], Other Possible Types: unsigned long long
 unsigned int v1; // [bp-0x44]
 char *v2; // [bp-0x40]
 char v3; // [bp+0x0]

 v2 = &v3;
 v4 = a0;
 v1 = a1;
 ptr = malloc(v4 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v4, 3) & 34359738360 & 34359738367);
 if (!ptr)
 return 4294967295;
 ptr = ptr;
 __sync_synchronize();
 atomic_counter = 0;
 if ((unsigned int)v4 >= 1)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create((char *)ptr + v7, 0, thread_atomic_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += 8, (__ROL__(v4 & 4294967295, 3) & 18446744073709551608) != v7));
 }
 if (!(int)pthread_create(&v0, 0, thread_atomic_load_store, 0))
 pthread_join(v0, 0);
 if ((unsigned int)v4 >= 1)
 {
 v8 = v4 & 4294967295;
 v9 = ptr;
 do
 {
 i = v8;
 v11 = v9 + 1;
 pthread_join(*(v9), 0);
 v12 = i - 1;
 v9 = v11;
 v8 = v12;
 } while (i != 1);
 }
 __sync_synchronize();
 free(ptr);
 if (0 < atomic_counter)
 v13 = 42;
 else
 v13 = 4294967293;
 return v13;
}


// Function: call_atomic_ops at 0x402efc
unsigned long long call_atomic_ops()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x402f18
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

unsigned int* thread_tls_test(char *a0)
{
 struct_0 *v2; // tpidr_el0
 struct_0 *ptr; // x9
 unsigned int v4; // w19
 unsigned int v5; // w20
 unsigned int p[2]; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = &v2->field_10;
 v4 = *((int *)&ptr->padding_0[0]);
 v5 = v4 + 50;
 *((unsigned int *)&ptr->padding_0[0]) = v5;
 strncpy(v2 + 1, a0, 31);
 p = malloc(8);
 p[0] = v4;
 p[1] = v5;
 return p;
}


// Function: param_thread_local_storage at 0x402f68
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long v3; // x20
 unsigned long long v4; // x21
 unsigned long long k; // x24
 unsigned long long *v14; // x22
 unsigned long long v15; // x20
 unsigned long long v16; // cc_op
 unsigned long long v17; // cc_dep1
 unsigned long long v18; // x23
 unsigned long long v19; // x22
 unsigned long long v20; // x24
 unsigned int **v21; // x26
 unsigned long long *v22; // x25
 unsigned long long *addr; // x19
 unsigned long long j; // x24
 unsigned int **v24; // x26
 unsigned long long *v25; // x25
 unsigned int **v26; // x26
 unsigned long v28; // x9
 unsigned long long v29; // cc_op
 unsigned long long v30; // cc_dep1
 unsigned long long v31; // cc_dep2
 unsigned int **p; // x21
 unsigned long long idx; // x22
 char *ptr; // x0
 unsigned long long v9; // x24
 unsigned long long *v10; // x22
 unsigned long long *v11; // x22
 unsigned long long v12; // x24
 unsigned int ptr[2]; // [bp-0x58]
 char *v1; // [bp-0x50]
 char v2; // [bp+0x0]

 v1 = &v2;
 v3 = a0;
 v4 = v3 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v3, 3) & 34359738360 & 34359738367;
 addr = malloc(v4);
 p = malloc(v4);
 if (!addr)
 {
 return 4294967295;
 }
 else if (p)
 {
 if ((unsigned int)v3 >= 1)
 {
 idx = 0;
 do
 {
 ptr = malloc(16);
 p[idx] = ptr;
 snprintf(ptr, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while ((v3 & 4294967295) != idx);
 }
 if ((unsigned int)v3 >= 1)
 {
 v9 = 0;
 v10 = addr;
 do
 {
 v11 = v10;
 v12 = v9;
 k = v12 + 1;
 if ((int)pthread_create(v11, 0, thread_tls_test, p[v12]))
 {
 v15 = 0;
 do
 {
 free(p[v15]);
 v15 += 1;
 } while (k != v15);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((v14 = v11 + 8, v9 = k, v10 = v11 + 8, (v3 & 4294967295) != v9));
 }
 v16 = 3;
 v17 = v3 & 4294967295;
 if ((unsigned int)v3 >= 1)
 {
 v18 = 0;
 v19 = 0;
 v20 = v3 & 4294967295;
 v21 = p;
 v22 = addr;
 do
 {
 j = v20;
 v24 = v21;
 v25 = v22 + 1;
 pthread_join(*(v22), &ptr);
 v19 += ptr[0];
 v18 += ptr[1];
 free(ptr);
 v26 = v24 + 1;
 free(*(v24));
 v16 = 4;
 v17 = j;
 v21 = v26;
 v22 = v25;
 v20 = j - 1;
 } while (j != 1);
 }
 else
 {
 v19 = 0;
 v18 = 0;
 }
 free(p);
 free(addr);
 v28 = 100 * (unsigned int)v3;
 if ((unsigned int)v18 == 150 * (unsigned int)v3)
 {
 v29 = 3;
 v30 = ((char)arm64g_calculate_condition(v16, v17, 1, 0) ? v19 & 4294967295 : 0);
 v31 = ((char)arm64g_calculate_condition(v16, v17, 1, 0) ? v28 & 4294967295 : 0);
 }
 else
 {
 v29 = 0;
 v30 = ((char)arm64g_calculate_condition(v16, v17, 1, 0) ? v19 & 4294967295 : 0);
 v31 = ((char)arm64g_calculate_condition(v16, v17, 1, 0) ? v28 & 4294967295 : 0);
 }
 if (!((char)arm64g_calculate_condition(v29, v30, v31, 0)))
 return 4294967293;
 return 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_thread_local_storage at 0x40310c
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x403124
extern char g_403643;
extern char g_40365f;
extern char g_40367c;
extern char g_403698;
extern char g_4036b4;
extern char g_4036d0;
extern char g_40372b;

int test_thread_concurrency()
{
 unsigned int v10; // w19
 unsigned long long v11; // x21
 char *v12; // x19
 unsigned long long v13; // x20
 unsigned long long v14; // x19
 unsigned long long v15; // x21
 unsigned int *p; // x21
 unsigned int *v17; // x21
 unsigned int v0; // [bp-0x74]
 unsigned long long v1; // [bp-0x70], Other Possible Types: unsigned long long
 char v2; // [bp-0x70]
 unsigned int v3; // [bp-0x64]
 unsigned long long v4; // [bp-0x60], Other Possible Types: unsigned int
 unsigned long long v5; // [bp-0x58]
 unsigned int result; // [bp-0x50]
 unsigned int *ptr; // [bp-0x48], Other Possible Types: char
 char *v8; // [bp-0x30]
 char v9; // [bp+0x0]

 v8 = &v9;
 puts(&g_40372b);
 v0 = 7;
 if ((int)pthread_create(&v2, 0, thread_compute, &v0))
 {
 v10 = 4294967295;
 }
 else
 {
 pthread_join(v1, &ptr);
 v10 = *(ptr);
 free(ptr);
 }
 printf(&g_403643, v10);
 v11 = 0;
 v12 = &v2;
 v1 = 0;
 v4 = 0;
 v1 = 42949672961;
 result = 0;
 v3 = 11;
 v4 = 20;
 v5 = 128849018901;
 do
 {
 if ((int)pthread_create((char *)&ptr + v11, 0, thread_sum, v12))
 {
 v14 = 4294967295;
 goto LABEL_40324c;
 }
 } while ((v11 += 8, v12 += 12, v11 != 24));
 v13 = 0;
 v14 = 0;
 v15 = &v2 | 8;
 do
 {
 p = v15;
 if ((int)pthread_join(*((long long *)((char *)&ptr + v13)), 0))
 {
 v14 = 4294967294;
 break;
 }
 } while ((v17 = p + 12, v13 += 8, v14 += (unsigned long long)*(p), v15 = p + 12, v13 != 24));
LABEL_40324c:
 printf(&g_40365f, v14 & 4294967295);
 printf(&g_40367c, param_mutex_lock(4, 1000) & 4294967295);
 printf(&g_403698, param_condition_variable() & 4294967295);
 printf(&g_4036b4, param_atomic_ops(4, 500) & 4294967295);
 return printf(&g_4036d0, param_thread_local_storage(4) & 4294967295);
}


// Function: main at 0x4032d4
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: sub_4032f4 at 0x4032f4
long long sub_4032f4()
{
 unsigned long long v0; // x0

 v0 = __aarch64_cas4_acq_rel();
 return __aarch64_cas4_acq_rel();
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x403300
// Function: sub_403314 at 0x403314
long long sub_403314()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_403334 at 0x403334
long long sub_403334()
{
 unsigned long long v0; // x0

 v0 = __aarch64_ldadd4_acq_rel();
 return __aarch64_ldadd4_acq_rel();
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x403340
// Function: sub_403354 at 0x403354
long long sub_403354()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


