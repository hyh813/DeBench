// Angr Decompilation of 6_clang_O2_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/auxv.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>

// Declare ftok
extern key_t ftok(const char *pathname, int proj_id);

// signal is declared in signal.h

#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

/* CRT stub function _init removed by preprocessor */

// Helper functions for decompiler artifacts
static inline unsigned long long MulV(unsigned long long a, unsigned long long b) { return a * b; }
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }
static inline int arm64g_calculate_condition(unsigned long long op, unsigned long long dep1, unsigned long long dep2, unsigned long long dep3) { return 1; }

// Declare __isoc99_sscanf
extern int __isoc99_sscanf(const char *str, const char *format, ...);

// Forward declarations for CRT stub functions
extern void _start(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern unsigned long long frame_dummy(void);

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
 return g_414ff8;
}


// Function: sub_4012f4 at 0x4012f4
long long sub_4012f4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 void* dst; // x0

 dst = memcpy(v0, v1, v2);
 return (unsigned long long)dst;
}


// Function: init_have_lse_atomics at 0x401700
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
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
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 dst = strcpy(a0, a1);
 len = strlen(a0);
 return strlen(a0);
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
 v2 = "test";
 len = strlen(v2);
 return strlen(v2);
}


// Function: call_strlen at 0x4018e0
unsigned long long call_strlen()
{
 return 12;
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
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x401954
int call_printf()
{
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x40196c
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


// Function: call_scanf at 0x4019ac
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


// Function: param_fopen_fclose at 0x4019f4

unsigned long long param_fopen_fclose()
{
 char *v2; // x0
 FILE *fp; // x0
 unsigned int v4; // w0
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


// Function: call_fopen_fclose at 0x401a3c
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


// Function: param_fread_fwrite at 0x401a94
unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // x0
 void* v6; // x20
 unsigned long long count; // x0
 unsigned long long v8; // x0
 char v0[20]; // [bp-0x50]
 char v1; // [bp-0x48]
 unsigned long long v2; // [bp-0x45]
 char *v3; // [bp-0x30]
 char v4; // [bp+0x0]

 v3 = &v4;
 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v6 = fp;
 if (fwrite("BinBench Test Data", 1, 18, v6) != 18)
 {
 fclose(v6);
 return 4294967294;
 }
 fseek(v6, 0, SEEK_SET);
 count = fread(v0, 1, 18, v6);
 v0[count] = 0;
 fclose(v6);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 if (!((*(unsigned long long *)v0) ^ 7521977183824144706) && !(*((long long *)&v1) ^ 7008762604619650080) && !(v2 ^ 27431033844561011))
 v8 = 42;
 else
 v8 = 4294967293;
 return v8;
}


// Function: call_fread_fwrite at 0x401ba8
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401bb4
unsigned int param_malloc_free(unsigned long a0)
{
 void* ptr; // x0
 unsigned long long v3; // x8
 unsigned int v13; // w8
 unsigned long long v4; // q3
 void* cur; // x9
 unsigned long long i; // x10
 int v7; // q4
 unsigned long long v8; // x10
 unsigned long long j; // x9
 void* iter; // x8
 unsigned int v11; // w10
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 return 4294967295;
 if (a0)
 {
 if (8 > a0)
 {
 v3 = 0;
 }
 else
 {
 v3 = a0 & 18446744073709551608;
 v4 = 0x3000000020000000100000000;
 cur = ptr + 16;
 i = v3;
 do
 {
 v7 = MulV(v4, 42949672970);
 v8 = i - 8;
 v4 = AddV(v4, 34359738376);
 cur[16] = v7;
 *(cur) = AddV(v7, 171798691880);
 cur += 32;
 i = v8;
 } while (i != 8);
 if (v3 == a0)
 goto LABEL_401c54;
 }
 j = a0 - v3;
 iter = ptr + v3 * 4;
 v11 = ((unsigned int)v3 * 10 | (unsigned int)v3 * 5 >> 31) & 4294967294;
 do
 {
 *((unsigned int *)iter) = v11;
 iter += 4;
 v11 += 10;
 j -= 1;
 } while (j != 1);
LABEL_401c54:
 v13 = *((int *)ptr);
 }
 free(ptr);
 return *((int *)(-4 + (char *)ptr + 4 * a0)) + v13;
}


// Function: call_malloc_free at 0x401c78
unsigned long long call_malloc_free()
{
 return 90;
}


// Function: param_memset at 0x401c80
unsigned long long param_memset(void* a0, unsigned long n)
{
 unsigned long long v2; // x8
 unsigned long long v3; // x0
 unsigned long long i; // x10
 unsigned long long j; // x9
 char *ptr; // x8
 char *v8; // x8
 unsigned long long v9; // x9
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 memset(a0, 0, n);
 if (!n)
 return 0;
 if (8 > n)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = n & 18446744073709551608;
 i = v2;
 do
 {
 i -= 8;
 } while (i != 8);
 v3 = 0;
 if (v2 == n)
 return v3;
 }
 j = n - v2;
 ptr = a0 + v2;
 do
 {
 v8 = ptr + 1;
 v9 = j - 1;
 v3 += *(ptr);
 ptr = v8;
 j = v9;
 } while (j != 1);
 return v3;
}


// Function: call_memset at 0x401d2c
unsigned long long call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x401d34
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x21
 char *ptr; // x0
 unsigned long long v7; // x21
 char *v9_ptr; // x0
 unsigned long long v9; // x8
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = v4;
 v2 = v5;
 ptr = strchr(a0, a1 & 255);
 if (ptr)
 v7 = ptr - a0 & 4294967295;
 else
 v7 = 4294967295;
 v9_ptr = strstr(a0, a2);
 if (v9_ptr)
 v9 = v9_ptr - a0 & 4294967295;
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
extern char g_4031a4;
extern char g_4031bf;
extern char g_4031da;
extern char g_4031f6;
extern char g_403212;
extern char g_40322e;
extern char g_40324a;
extern char g_403267;
extern char g_403283;
extern char g_40329f;
extern char g_4032bb;
extern char g_4032d6;
extern char g_40349c;

int test_standard_library_functions()
{
 unsigned int v6; // w19
 unsigned long long v8; // x1
 void* fp; // x0
 unsigned int v10; // w0
 char v0[8]; // [bp-0x50]
 char v1[24]; // [bp-0x48]
 char *v2; // [bp-0x30]
 char v3; // [bp-0x14]
 char v4; // [bp+0x0]

 v2 = &v4;
 puts(&g_40349c);
 strncpy(v1, "HelloLib", 8);
 printf(&g_4031a4, strlen(v0));
 printf(&g_4031bf, 0);
 printf(&g_4031da, 12);
 printf(&g_4031f6, 90);
 v6 = 4294967295;
 printf(&g_403212, 4294967295);
 printf(&g_40322e, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 if (__isoc99_sscanf("123,456", "%d,%d") == 2)
 v8 = *((int *)&v3) + *((int *)&v0[0]) & 4294967295;
 else
 v8 = 4294967295;
 printf(&g_40324a, v8);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 v10 = fileno(fp);
 fclose(fp);
 if (0 <= v10)
 v6 = 42;
 else
 v6 = 4294967295;
 }
 printf(&g_403267, v6);
 printf(&g_403283, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 printf(&g_40329f, 90);
 printf(&g_4032bb, 0);
 return printf(&g_4032d6, 15);
}


// Function: param_linux_syscall at 0x401f30
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


// Function: call_linux_syscall at 0x401f84
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


// Function: param_win32_api at 0x401fe4
unsigned long long param_win32_api()
{
 unsigned int v3; // w0
 unsigned int v4; // w8
 unsigned long long v0; // [bp-0x60]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v3 = stat("/etc/passwd", (struct stat *)&v0);
 if (0 < v1)
 v4 = 42;
 else
 v4 = 4294967294;
 if (0 > v3)
 return 4294967295;
 return v4;
}


// Function: call_win32_api at 0x402020
unsigned long long call_win32_api()
{
 unsigned int v4; // w0
 unsigned int v5; // w8
 struct stat v0; // [bp-0x90]
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


// Function: param_fork_exec at 0x402064
unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long long pid; // x0
 int v0[1]; // [bp-0x24]
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
 else if (((char)(waitpid(pid, v0, 0) >> 31) & 1))
 {
 return 4294967294;
 }
 else if (!((char)arm64g_calculate_condition(9, (unsigned long long)(*(v0) & 127), 0, 0)))
 {
 return 4294967293;
 }
 else
 {
 return __ROL__(*(v0), 24) & 4278190335 & 255;
 }
}


// Function: call_fork_exec at 0x4020ec
unsigned long long call_fork_exec()
{
 unsigned long long pid; // x0
 unsigned long long v4; // x0
 int v0[1]; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 pid = fork();
 if (!((char)(pid >> 31) & 1))
 {
 if (!(unsigned int)pid)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (!((char)(waitpid(pid, v0, 0) >> 31) & 1) && (char)arm64g_calculate_condition(9, (unsigned long long)(v0[0] & 127), 0, 0))
 {
 if ((char)arm64g_calculate_condition(9, (unsigned long long)(v0[0] & 0xff00), 0, 0))
 v4 = 42;
 else
 v4 = 4294967295;
 return v4;
 }
 }
 return 4294967295;
}


// Function: param_pipe_communication at 0x402160
unsigned long long param_pipe_communication()
{
 unsigned long long pid; // x0
 unsigned long long count; // x19
 unsigned long long v7; // x0
 int pipefd[2]; // [bp-0x48]
 char v0; // [bp-0x28], Other Possible Types: unsigned int
 char *v3; // [bp-0x20]
 char v4; // [bp+0x0]

 v3 = &v4;
 if (((char)(pipe(pipefd) >> 31) & 1))
 return 4294967295;
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 return 4294967294;
 }
 else if ((unsigned int)pid)
 {
 close(pipefd[1]);
 count = read(pipefd[0], &v0, 31);
 (&v0)[count] = 0;
 close(pipefd[0]);
 wait(NULL);
 if (0 < count)
 v7 = 42;
 else
 v7 = 4294967293;
 return v7;
 }
 else
 {
 close(pipefd[0]);
 write(pipefd[1], "HelloPipe", 9);
 close(pipefd[1]);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x402218
unsigned long long call_pipe_communication()
{
 unsigned long long v0; // x0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x40221c
unsigned long long param_socket_create()
{
 unsigned long long sock; // x0
 unsigned int v6; // w19
 unsigned int v7; // w0
 unsigned long long v8; // x0
 struct sockaddr v0; // [bp-0x38]
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
 *((unsigned long long *)&((struct sockaddr *)&v0)->sa_data[0]) = 2;
 *((unsigned long long *)&((struct sockaddr *)&v0)->sa_data[6]) = 0;
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


// Function: call_socket_create at 0x4022e0
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x4022e4
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

unsigned int param_shmget_shmat()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 struct_0 *ptr; // x0
 unsigned int v5; // w20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = open("/tmp/binbench_shm", 66, 438);
 if (((char)(v2 >> 31) & 1))
 return 4294967295;
 close(v2);
 if (!((char)(ftok("/tmp/binbench_shm", 42) >> 31) & 1))
 {
 v3 = shmget(ftok("/tmp/binbench_shm", 42), 1024, 0666);
 if (((char)(v3 >> 31) & 1))
 return 4294967294;
 ptr = (struct_0 *)shmat(v3, 0, 0);
 if (arm64g_calculate_condition(2, (unsigned long long)ptr, 1, 0))
 return 4294967293;
 *((unsigned long long *)((char *)ptr + 5)) = 34184295084281188;
 ptr->field_0 = 7299600957910902867;
 v5 = 42;
 shmdt(ptr);
 shmctl(v3 & 4294967295, IPC_RMID, 0);
 return v5;
}
 return 4294967295;
}


// Function: call_shmget_shmat at 0x4023b4
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


// Function: param_signal_handling at 0x4023d4
extern unsigned int __dollar_d_5;
extern unsigned int signal_number;

// Forward declaration
extern void signal_handler(int a0);

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
 void (*sig_result1)(int) = signal(10, signal_handler);
 v2 = (unsigned long long)sig_result1;
 if ((char)arm64g_calculate_condition(2, v2, 1, 0))
 return 4294967295;
 void (*sig_result2)(int) = signal(14, signal_handler);
 v2 = (unsigned long long)sig_result2;
 v3 = 2;
 v4 = v2;
 v5 = 1;
 if ((char)arm64g_calculate_condition(2, v2, 1, 0))
 return 4294967294;
 __dollar_d_5 = 0;
 raise(10);
if (!__dollar_d_5)
{
 v6 = 1000;
 do
 {
 usleep(1000);
 if (!__dollar_d_5)
{
 int cond_result1 = arm64g_calculate_condition(v3, v4, v5, 0);
 v3 = 3;
 v4 = (cond_result1 ? v6 & 4294967295 : 0);
 v5 = (cond_result1 ? 1 : 0);
}
else
{
 int cond_result1b = arm64g_calculate_condition(v3, v4, v5, 0);
 v3 = 0;
 v4 = (cond_result1b ? v6 & 4294967295 : 0);
 v5 = (cond_result1b ? 1 : 0);
}
 } while ((v6 = (unsigned long long)((unsigned int)v6 - 1), arm64g_calculate_condition(v3 | 128, v4, v5, 0) != 0));
 }
 if (!__dollar_d_5)
 return 4294967293;
 v7 = 3;
 v8 = signal_number;
 v9 = 10;
 if (signal_number != 10)
 return 0xfffffffc;
 __dollar_d_5 = 0;
 alarm(1);
 if (!__dollar_d_5)
 {
 v10 = 2000;
 do
 {
 usleep(1000);
 if (!__dollar_d_5)
{
 int cond_result2 = arm64g_calculate_condition(v7, v8, v9, 0);
 v7 = 3;
 v8 = (cond_result2 ? v10 & 4294967295 : 0);
 v9 = (cond_result2 ? 1 : 0);
}
else
{
 int cond_result2b = arm64g_calculate_condition(v7, v8, v9, 0);
 v7 = 0;
 v8 = (cond_result2b ? v10 & 4294967295 : 0);
 v9 = (cond_result2b ? 1 : 0);
}
 } while ((v10 = (unsigned long long)((unsigned int)v10 - 1), arm64g_calculate_condition(v7 | 128, v8, v9, 0) != 0));
 }
 if (!__dollar_d_5 || signal_number != 14)
 return 4294967291;
 signal(10, NULL);
 signal(14, NULL);
 return 42;
}


// Function: signal_handler at 0x402508
extern unsigned int __dollar_d_5;
extern unsigned int signal_number;

void signal_handler(int a0)
{
 __dollar_d_5 = 1;
 signal_number = a0;
 return;
}


// Function: call_signal_handling at 0x402520
unsigned long long call_signal_handling()
{
 unsigned long long v0; // x0

 v0 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x402524
extern char g_403325;
extern char g_403341;
extern char g_40335d;
extern char g_403379;
extern char g_403395;
extern char g_4033b1;
extern char g_4033cd;
extern char g_4034c0;

long long test_system_calls()
{
 unsigned long long v4; // x19
 unsigned long long v5; // x1
 unsigned int v14; // w0
 unsigned long long v15; // x0
 unsigned int v6; // w0
 unsigned int v7; // w8
 unsigned long v8; // x1
 unsigned long long pid; // x0
 unsigned long long v10; // x1
 unsigned long long v13; // x1
 struct stat v0; // [bp-0xa0]
 unsigned long long v1; // [bp-0x70]
 char *v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts(&g_4034c0);
 v4 = syscall(56);
 if (!((char)(v4 >> 31) & 1))
 syscall(57);
 else
 v4 = -(*(__errno_location()));
 if (0 <= (unsigned int)v4)
 v5 = 42;
 else
 v5 = 4294967295;
 printf(&g_403325, v5);
 v6 = stat("/etc/passwd", &v0);
 if (0 < v1)
 v7 = 42;
 else
 v7 = 4294967294;
 if (0 <= v6)
 v8 = v7;
 else
 v8 = 4294967295;
 printf(&g_403341, v8);
 pid = fork();
 if (!((char)(pid >> 31) & 1))
 {
 int wstatus;
 if (!(unsigned int)pid)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 if (((char)(waitpid(pid, &wstatus, 0) >> 31) & 1) || !((char)arm64g_calculate_condition(9, (unsigned long long)(wstatus & 127), 0, 0)))
 goto LABEL_4025f0;
 if ((char)arm64g_calculate_condition(9, (unsigned long long)(v0.st_mode & 0xff00), 0, 0))
 v10 = 42;
 else
 v10 = 4294967295;
 }
 else
 {
LABEL_4025f0:
 v10 = 4294967295;
 }
 printf(&g_40335d, v10);
 printf(&g_403379, param_pipe_communication() & 4294967295);
 printf(&g_403395, param_socket_create() & 4294967295);
 if (0 < param_shmget_shmat())
 v13 = 42;
 else
 v13 = 4294967295;
 printf(&g_4033b1, v13);
 v14 = param_signal_handling();
 v15 = printf(&g_4033cd, v14);
 return printf(&g_4033cd, v14);
}


// Function: thread_compute at 0x402694
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


// Function: param_pthread_create at 0x4026c0
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v2 = &v4;
 v1 = a0;
 if (!(int)pthread_create(&v3, 0, (void *(*)(void *))thread_compute, &v1))
 {
 pthread_join(v3, (void **)&v0);
 free(v0);
 return *(v0);
 }
 return 4294967295;
}


// Function: call_pthread_create at 0x402724
unsigned int call_pthread_create()
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v2 = &v4;
 v1 = 7;
 if (!(int)pthread_create(&v3, 0, (void *(*)(void *))thread_compute, &v1))
 {
 pthread_join(v3, (void **)&v0);
 free(v0);
 return *(v0);
 }
 return 4294967295;
}


// Function: thread_sum at 0x40278c
unsigned long long thread_sum(unsigned int *ptr)
{
 unsigned int v0; // w8
 unsigned int v1; // w9

 v0 = *(ptr);
 v1 = ptr[1];
 ptr[2] = 0;
 if (v1 >= v0)
 ptr[2] = v1 + v0 * (v1 - v0) + __ROL__((v1 + ~(v0)) * (v1 - v0), 63);
 return 0;
}


// Function: param_pthread_join at 0x4027c0
unsigned long long param_pthread_join()
{
 unsigned long long v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x58]
 unsigned long long v2; // [bp-0x54]
 unsigned long long flag1; // [bp-0x50]
 unsigned long v4; // [bp-0x48]
 unsigned int result; // [bp-0x40]
 pthread_t v6; // [bp-0x38]
 pthread_t v7; // [bp-0x30]
 pthread_t v8; // [bp-0x28]
 char *v9; // [bp-0x20]
 char v10; // [bp+0x0]

 v9 = &v10;
 v1 = 0;
 flag1 = 0;
 result = 0;
 v0 = 42949672961;
 v2 = 85899345931;
 v4 = 128849018901;
 if (!(int)pthread_create(&v6, 0, (void *(*)(void *))thread_sum, &v0) && !(int)pthread_create(&v7, 0, (void *(*)(void *))thread_sum, &v2) && !(int)pthread_create(&v8, 0, (void *(*)(void *))thread_sum, &v4))
 {
 if ((int)pthread_join(v6, 0) || (int)pthread_join(v7, 0) || (int)pthread_join(v8, 0))
 return 4294967294;
 return result + *((int *)((char *)&flag1 + 4)) + (unsigned int)v1;
 }
 return 4294967295;
}


// Function: call_pthread_join at 0x4028c4
unsigned long long call_pthread_join()
{
 unsigned long long count; // x0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: thread_increment at 0x4028c8
extern pthread_mutex_t counter_mutex;
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


// Function: param_mutex_lock at 0x402930
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // x19
 unsigned long long *ptr; // x0
 unsigned long long v6; // x23
 unsigned long long v7; // x24
 unsigned long long *v8; // x21
 unsigned long long i; // x23
 unsigned long long *v10; // x21
 unsigned long long v11; // x23
 unsigned long long v12; // x0
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp+0x0]

 v0 = &v2;
 v3 = a0;
 v1 = a1;
 ptr = malloc(v3 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v3, 3) & 34359738360 & 34359738367);
 if (!ptr)
 return 4294967295;
 shared_counter = 0;
 if ((unsigned int)v3 >= 1)
 {
 v6 = v3 & 4294967295;
 v7 = 0;
 do
 {
 if ((int)pthread_create((pthread_t *)((char *)ptr + v7), 0, (void *(*)(void *))thread_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += 8, (__ROL__(v6, 3) & 18446744073709551608) != v7));
 if ((unsigned int)v3 >= 1)
 {
 v8 = ptr;
 do
 {
 i = v6;
 v10 = v8 + 1;
 pthread_join(*(v8), 0);
 v11 = i - 1;
 v6 = v11;
 v8 = v10;
 } while (i != 1);
 }
 }
 free(ptr);
 if (shared_counter == (unsigned int)v3 * v1)
 v12 = 42;
 else
 v12 = 4294967293;
 return v12;
}


// Function: call_mutex_lock at 0x402a1c
unsigned long long call_mutex_lock()
{
 unsigned long long v0; // x0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402a28
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
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 if (!(i & 1))
 {
 do
 {
 pthread_cond_wait((pthread_cond_t *)&cond, (pthread_mutex_t *)&cond_mutex);
 } while (i != 1);
 }
 if (data)
 v2 = 42;
 else
 v2 = 0;
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 ptr = malloc(4);
 *(ptr) = v2;
 return ptr;
}


// Function: producer_thread at 0x402ab4
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
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x402b10
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 pthread_t v1; // [bp-0x28]
 char *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v2 = &v4;
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v1, 0, (void *(*)(void *))consumer_thread, 0))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v3, 0, (void *(*)(void *))producer_thread, 0))
 {
 pthread_cancel(v1);
 return 4294967294;
 }
 else
 {
 pthread_join(v1, (void **)&v0);
 pthread_join(v3, 0);
 free(v0);
 return *(v0);
 }
}


// Function: call_condition_variable at 0x402bb8
int call_condition_variable()
{
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x402bbc
extern unsigned int atomic_counter;

// Declare ARM64 atomic intrinsics
extern unsigned int __aarch64_ldadd4_acq_rel(unsigned int val, unsigned int *ptr);
extern unsigned int __aarch64_cas4_acq_rel(unsigned int expected, unsigned int desired, unsigned int *ptr);

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


// Function: thread_atomic_load_store at 0x402c20
extern unsigned int atomic_counter;

unsigned long long thread_atomic_load_store()
{
 __sync_synchronize();
 __sync_synchronize();
 atomic_counter = atomic_counter + 100;
 return 0;
}


// Function: param_atomic_ops at 0x402c3c
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned long v4; // x20
 unsigned long long *ptr; // x0
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
 __sync_synchronize();
 atomic_counter = 0;
 if ((unsigned int)v4 >= 1)
 {
 v7 = 0;
 do
 {
 if ((int)pthread_create((pthread_t *)((char *)ptr + v7), 0, (void *(*)(void *))thread_atomic_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v7 += 8, (__ROL__(v4 & 4294967295, 3) & 18446744073709551608) != v7));
 }
 if (!(int)pthread_create((pthread_t *)&v0, 0, (void *(*)(void *))thread_atomic_load_store, 0))
 pthread_join(*(pthread_t *)&v0, 0);
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


// Function: call_atomic_ops at 0x402d50
unsigned long long call_atomic_ops()
{
 unsigned long long v0; // x0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x402d5c
typedef struct struct_1 {
 char padding_0[16];
 unsigned int field_10;
} struct_1;

unsigned int * thread_tls_test(char *a0)
{
 struct_1 *v2; // tpidr_el0
 struct_1 *ptr; // x9
 unsigned int v4; // w19
 unsigned int v5; // w20
 unsigned int *p; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (struct_1 *)&v2->field_10;
 v4 = *((int *)&ptr->padding_0[0]);
 v5 = v4 + 50;
 *((unsigned int *)&ptr->padding_0[0]) = v5;
 strncpy((char *)(v2 + 1), a0, 31);
 p = malloc(8);
 p[0] = v4;
 p[1] = v5;
 return p;
}


// Function: param_thread_local_storage at 0x402dac
unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long v3; // x20
 unsigned long long v4; // x21
 unsigned long long *v13; // x22
 unsigned long long *v14; // x22
 unsigned long long v15; // x25
 unsigned long long k; // x25
 unsigned long long *v17; // x22
 unsigned long long v18; // x23
 unsigned long long v19; // x22
 void* *v20; // x26
 unsigned long long *v21; // x25
 unsigned long long j; // x24
 unsigned long long *addr; // x19
 void* *v23; // x26
 unsigned long long *v24; // x25
 void* *v25; // x26
 unsigned long long v27; // x20
 unsigned long v28; // x9
 unsigned long long v29; // cc_op
 unsigned long long v30; // cc_dep1
 unsigned long long v31; // cc_dep2
 unsigned long long v32; // x0
 void* *p; // x21
 unsigned long long v7; // cc_op
 unsigned long long v8; // cc_dep1
 unsigned long long idx; // x22
 unsigned long long i; // x24
 char *ptr; // x0
 unsigned long long v12; // x25
 unsigned int ptr_int[2]; // [bp-0x58]
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
 v7 = 3;
 v8 = v3 & 4294967295;
 if ((unsigned int)v3 >= 1)
 {
 idx = 0;
 i = v3 & 4294967295;
 do
 {
 ptr = malloc(16);
 p[idx] = ptr;
 snprintf(ptr, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (i != idx);
 v7 = 3;
 v8 = v3 & 4294967295;
 if ((unsigned int)v3 >= 1)
 {
 v12 = 0;
 v13 = addr;
 do
 {
 v14 = v13;
 v15 = v12;
 k = v15 + 1;
 if ((int)pthread_create((pthread_t *)v14, 0, (void *(*)(void *))thread_tls_test, p[v15]))
 {
 v27 = 0;
 do
 {
 free(p[v27]);
 v27 += 1;
 } while (k != v27);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((v17 = v14 + 8, v12 = k, v13 = v14 + 8, i != v12));
 v7 = 3;
 v8 = v3 & 4294967295;
 if ((unsigned int)v3 >= 1)
 {
 v18 = 0;
 v19 = 0;
 v20 = p;
 v21 = addr;
 do
 {
 j = i;
 v23 = v20;
 v24 = v21 + 1;
 pthread_join(*(v21), (void **)&ptr);
 v19 += ptr_int[0];
 v18 += ptr_int[1];
 free(ptr);
 v25 = v23 + 1;
 free(*(v23));
 v7 = 4;
 v8 = j;
 v20 = v25;
 v21 = v24;
 i = j - 1;
 } while (j != 1);
 goto LABEL_402ec8;
 }
 }
 }
 v19 = 0;
 v18 = 0;
LABEL_402ec8:
 free(p);
 free(addr);
 v28 = 100 * (unsigned int)v3;
 if ((unsigned int)v18 == 150 * (unsigned int)v3)
 {
 v29 = 3;
 v30 = ((char)arm64g_calculate_condition(v7, v8, 1, 0) ? v19 & 4294967295 : 0);
 v31 = ((char)arm64g_calculate_condition(v7, v8, 1, 0) ? v28 & 4294967295 : 0);
 }
 else
 {
 v29 = 0;
 v30 = ((char)arm64g_calculate_condition(v7, v8, 1, 0) ? v19 & 4294967295 : 0);
 v31 = ((char)arm64g_calculate_condition(v7, v8, 1, 0) ? v28 & 4294967295 : 0);
 }
 if ((char)arm64g_calculate_condition(v29, v30, v31, 0))
 v32 = 42;
 else
 v32 = 4294967293;
 return v32;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_thread_local_storage at 0x402f48
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x402f50
extern char g_4033f3;
extern char g_40340f;
extern char g_40342c;
extern char g_403448;
extern char g_403464;
extern char g_403480;
extern char g_4034db;

int test_thread_concurrency()
{
 unsigned int v5; // w19
 unsigned int *ptr; // [bp-0x30], Other Possible Types: char
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v2 = &v4;
 puts(&g_4034db);
 v1 = 7;
 if ((int)pthread_create(&v3, 0, (void *(*)(void *))thread_compute, &v1))
 {
 v5 = 4294967295;
 }
 else
 {
 pthread_join(v3, (void **)&ptr);
 v5 = *(ptr);
 free(ptr);
 }
 printf(&g_4033f3, v5);
 printf(&g_40340f, param_pthread_join() & 4294967295);
 printf(&g_40342c, param_mutex_lock(4, 1000) & 4294967295);
 printf(&g_403448, param_condition_variable() & 4294967295);
 printf(&g_403464, param_atomic_ops(4, 500) & 4294967295);
 return printf(&g_403480, param_thread_local_storage(4) & 4294967295);
}


// Function: main at 0x403048
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


// Function: sub_403068 at 0x403068
long long sub_403068()
{
 unsigned long long v0; // x0

 v0 = __aarch64_cas4_acq_rel(0, 0, 0);
 return __aarch64_cas4_acq_rel(0, 0, 0);
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x403070
// Function: sub_403084 at 0x403084
long long sub_403084()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_4030a4 at 0x4030a4
long long sub_4030a4()
{
 unsigned long long v0; // x0
 unsigned int val = 0;
 unsigned int *ptr = 0;

 v0 = __aarch64_ldadd4_acq_rel(val, ptr);
 return __aarch64_ldadd4_acq_rel(val, ptr);
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x4030b0
// Function: sub_4030c4 at 0x4030c4
long long sub_4030c4()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


