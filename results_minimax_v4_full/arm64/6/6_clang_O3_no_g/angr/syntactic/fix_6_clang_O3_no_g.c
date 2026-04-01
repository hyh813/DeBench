// Angr Decompilation of 6_clang_O3_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <errno.h>
#include <dlfcn.h>
#include <sys/auxv.h>
#include <linux/auxvec.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// Forward declarations for CRT stub functions
void __do_global_dtors_aux(void);
void frame_dummy(void);
int __isoc99_sscanf(const char *str, const char *format, ...);

// SIMD vector operation stubs
unsigned long long MulV(unsigned long long a, unsigned long long b);
unsigned long long AddV(unsigned long long a, unsigned long long b);

// Rotate left macro
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))

// Forward declarations for functions used in the code
int arm64g_calculate_condition(unsigned long long cc_op, unsigned long long cc_dep1, unsigned long long cc_dep2, unsigned long long cc_dep3);
void signal_handler(int sig);
unsigned int __aarch64_ldadd4_acq_rel(unsigned int val, unsigned int *ptr);
unsigned long long __aarch64_cas4_acq_rel(unsigned int old, unsigned int new_val, unsigned int *ptr);

/* CRT stub function _init removed by preprocessor */



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
void* sub_4012f4(void* v0, void* v1, unsigned long v2)
{
 return memcpy(v0, v1, v2);
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
 /* _start() removed - CRT stub */
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
 /* deregister_tm_clones - CRT stub */
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
void __do_global_dtors_aux(void);
void __do_global_dtors_aux(void) {}

// Function: sub_401848 at 0x401848
long long sub_401848()
{
 frame_dummy();
 return 0;
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
long long param_strlen(char *v2)
{
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
 return (v0 + v1) & 4294967295;
}


// Function: call_scanf at 0x4019ac
unsigned long long call_scanf()
{
 unsigned int v0 = 0; // [bp-0x18]
 unsigned int v1 = 0; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 if (__isoc99_sscanf("123,456", "%d,%d", &v1, &v0) != 2)
 return 4294967295;
 return (unsigned long long)(v0 + v1) & 4294967295;
}


// Function: param_fopen_fclose at 0x4019f4
unsigned long long param_fopen_fclose(char *filename)
{
 FILE *fp; // x0
 unsigned int v4; // w0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 fp = fopen(filename, "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4;
}


// Function: call_fopen_fclose at 0x401a44
unsigned long long call_fopen_fclose()
{
 void* fp; // x0
 unsigned int v3; // w0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v3 = fileno(fp);
 fclose(fp);
 if (0 > v3)
 return 4294967295;
 return 42;
}


// Function: param_fread_fwrite at 0x401aa4
unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // x0
 void* v6; // x20
 unsigned long long count; // x0
 char v0; // [bp-0x50], Other Possible Types: unsigned long long
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
 rewind(v6);
 count = fread(&v0, 1, 18, v6);
 (&v0)[count] = 0;
 fclose(v6);
 unlink(a0);
 if (count != 18)
 {
 return 4294967293;
 }
 else if (!(v0 ^ 7521977183824144706) && !(*((long long *)&v1) ^ 7008762604619650080) && !(v2 ^ 27431033844561011))
 {
 return 42;
 }
 else
 {
 return 4294967293;
 }
}


// Function: call_fread_fwrite at 0x401bd8
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401be4
unsigned long long param_malloc_free(unsigned long a0)
{
 void* ptr; // x0
 unsigned long long v3; // x8
 unsigned int* v13; // w8
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
 ptr = malloc((size_t)((__ROL__((unsigned long long)a0, 2) & 18446744073709551612ULL)));
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
 v3 = a0 & 18446744073709551608ULL;
 v4 = 0x3000000020000000100000000ULL;
 cur = (char*)ptr + 16;
 i = v3;
 do
 {
 v7 = MulV(v4, 0x0000000A0000000AULL);
 v8 = i - 8;
 v4 = AddV(v4, 0x0000000800000008ULL);
 *(unsigned long long*)((char*)cur + 16) = v7;
 *(unsigned long long*)cur = AddV(v7, 0x0000000A0000000AULL);
 cur = (char*)cur + 32;
 i = v8;
 } while (i != 8);
 if (v3 == a0)
 goto LABEL_401c90;
 }
 j = a0 - v3;
 iter = (char*)ptr + v3 * 4;
 v11 = ((unsigned int)v3 * 10 | (unsigned int)v3 * 5 >> 31) & 0xFFFFFFFE;
 do
 {
 *((unsigned int *)iter) = v11;
 iter = (char*)iter + 4;
 v11 += 10;
 j -= 1;
 } while (j != 1);
LABEL_401c90:
 v13 = (unsigned int*)ptr;
 }
 free(ptr);
 v13 = (unsigned int*)ptr;
 return (unsigned long long)(*((int *)((char *)ptr + (size_t)(4 * a0 - 4))) + *v13) & 0xFFFFFFFF;
}


// Function: call_malloc_free at 0x401cb4
unsigned long long call_malloc_free()
{
 return 90;
}


// Function: param_memset at 0x401cbc
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


// Function: call_memset at 0x401d68
unsigned long long call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x401d70
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x21
 unsigned long long ptr; // x0
 unsigned long long v7; // x21
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
 v9 = (unsigned long long)strstr(a0, a2);
 if (v9)
 v9 = v9 - (unsigned long long)a0 & 4294967295;
 else
 v9 = 4294967295;
 return v9 + v7;
}


// Function: call_strchr_strstr at 0x401dc8
unsigned long long call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x401dd0
extern char g_4033b4;
extern char g_4033cf;
extern char g_4033ea;
extern char g_403406;
extern char g_403422;
extern char g_40343e;
extern char g_40345a;
extern char g_403477;
extern char g_403493;
extern char g_4034af;
extern char g_4034cb;
extern char g_4034e6;
extern char g_4036ac;

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
 puts(&g_4036ac);
 strncpy(v1, "HelloLib", 8);
 printf(&g_4033b4, strlen(&v0));
 printf(&g_4033cf, 0);
 printf(&g_4033ea, 12);
 printf(&g_403406, 90);
 v6 = 4294967295;
 printf(&g_403422, 4294967295);
 printf(&g_40343e, printf("Value: %d, Name: %s\n", 42, "Test") & 4294967295);
 if (__isoc99_sscanf("123,456", "%d,%d") == 2)
 v8 = *((int *)&v3) + *((int *)&v0[0]) & 4294967295;
 else
 v8 = 4294967295;
 printf(&g_40345a, v8);
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
 printf(&g_403477, v6);
 printf(&g_403493, param_fread_fwrite("/tmp/binbench_test_tmp") & 4294967295);
 printf(&g_4034af, 90);
 printf(&g_4034cb, 0);
 return printf(&g_4034e6, 15);
}


// Function: param_linux_syscall at 0x401f6c
int param_linux_syscall(unsigned long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = syscall(56);
 if (((char)(v2 >> 31) & 1))
 return -(*(__errno_location()));
 syscall(57);
 return v2;
}


// Function: call_linux_syscall at 0x401fcc
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
 {
 syscall(57);
 if (0 > (unsigned int)v4)
 return 4294967295;
 return 42;
 }
 else if (0 <= !(*(__errno_location())))
 {
 return 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: param_win32_api at 0x402040
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


// Function: call_win32_api at 0x40207c
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


// Function: param_fork_exec at 0x4020c0
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


// Function: call_fork_exec at 0x40216c
unsigned long long call_fork_exec()
{
 unsigned long long pid; // x0
 unsigned int v0[1][1]; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 return 4294967295;
 }
 else if (!(unsigned int)pid)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (((char)(waitpid(pid, &v0, 0) >> 31) & 1))
 {
 return 4294967295;
 }
 else if (!((char)arm64g_calculate_condition(9, (unsigned long long)(*(v0) & 127), 0, 0)))
 {
 return 4294967295;
 }
 else if ((char)arm64g_calculate_condition(9, (unsigned long long)(*(v0) & 0xff00), 0, 0))
 {
 return 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: param_pipe_communication at 0x4021e8
unsigned long long param_pipe_communication()
{
 unsigned long long pid; // x0
 unsigned long long count; // x19
 char v0; // [bp-0x48]
 char v1; // [bp-0x28], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x24]
 char *v3; // [bp-0x20]
 char v4; // [bp+0x0]

 v3 = &v4;
 if (((char)(pipe(&v1) >> 31) & 1))
 return 4294967295;
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 return 4294967294;
 }
 else if ((unsigned int)pid)
 {
 close(v2);
 count = read(v1, &v0, 31);
 (&v0)[count] = 0;
 close(v1);
 wait(NULL);
 if (0 >= count)
 return 4294967293;
 return 42;
 }
 else
 {
 close(v1);
 write(v2, "HelloPipe", 9);
 close(v2);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x4022b8
unsigned long long call_pipe_communication()
{
 unsigned long long v0; // x0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x4022bc
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

unsigned long long param_socket_create()
{
 unsigned long long sock; // x0
 unsigned int v6; // w19
 unsigned int v7; // w0
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
 if (v7 >= 0)
 return 42;
 return 0xfffffffc;
}


// Function: call_socket_create at 0x4023a4
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x4023a8
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_5;
} struct_0;

unsigned long long param_shmget_shmat()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 struct_0 *ptr; // x0
 unsigned int v5; // w0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = open("/tmp/binbench_shm", 66, 438);
 if (((char)(v2 >> 31) & 1))
 return 4294967295;
 close(v2);
 if (((char)(ftok("/tmp/binbench_shm", 42) >> 31) & 1))
 return 4294967295;
 v3 = shmget();
 if (((char)(v3 >> 31) & 1))
 return 4294967294;
 ptr = shmat();
 if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
 return 4294967293;
 *((unsigned long long *)((char *)&ptr->field_0 + 5)) = 34184295084281188;
 ptr->field_0 = 7299600957910902867;
 v5 = strlen(ptr);
 shmdt(ptr);
 shmctl(v3 & 4294967295, 0, 0);
 return v5;
}


// Function: call_shmget_shmat at 0x4024a8
unsigned long long call_shmget_shmat()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if (0 >= (unsigned int)param_shmget_shmat())
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x4024c8
extern unsigned int signal_number;
extern unsigned int signal_received;

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
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v6 = 1000;
 do
 {
 usleep(1000);
 if (!signal_received)
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
 if (!signal_received)
 return 4294967293;
 v7 = 3;
 v8 = signal_number;
 v9 = 10;
 if (signal_number != 10)
 return 0xfffffffc;
 signal_received = 0;
 alarm(1);
 if (!signal_received)
 {
 v10 = 2000;
 do
 {
 usleep(1000);
 if (!signal_received)
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
 if (!signal_received)
 {
 return 4294967291;
 }
 else if (signal_number == 14)
 {
 signal(10, NULL);
 signal(14, NULL);
 return 42;
 }
 else
 {
 return 4294967291;
 }
}


// Function: signal_handler at 0x402638
extern unsigned int signal_number;
extern unsigned int signal_received;

long long signal_handler(unsigned long a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: call_signal_handling at 0x402650
unsigned long long call_signal_handling()
{
 unsigned long long v0; // x0

 v0 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x402654
extern char g_403535;
extern char g_403551;
extern char g_40356d;
extern char g_403589;
extern char g_4035a5;
extern char g_4035c1;
extern char g_4035dd;
extern char g_4036d0;

long long test_system_calls()
{
 unsigned long long v4; // x19
 unsigned long long v5; // x1
 unsigned long long v14; // x0
 unsigned int v6; // w0
 unsigned int v7; // w8
 unsigned long v8; // x1
 unsigned long long pid; // x0
 unsigned long long v10; // x1
 unsigned long long v13; // x1
 unsigned int v0[12][1]; // [bp-0xa0]
 unsigned long long v1; // [bp-0x70]
 char *v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v2 = &v3;
 puts(&g_4036d0);
 v4 = syscall(56);
 if (!((char)(v4 >> 31) & 1))
 syscall(57);
 else
 v4 = -(*(__errno_location()));
 if (0 <= (unsigned int)v4)
 v5 = 42;
 else
 v5 = 4294967295;
 printf(&g_403535, v5);
 v6 = stat("/etc/passwd", &v0);
 if (0 < v1)
 v7 = 42;
 else
 v7 = 4294967294;
 if (0 <= v6)
 v8 = v7;
 else
 v8 = 4294967295;
 printf(&g_403551, v8);
 pid = fork();
 if (!((char)(pid >> 31) & 1))
 {
 if (!(unsigned int)pid)
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 if (((char)(waitpid(pid, &v0, 0) >> 31) & 1) || !((char)arm64g_calculate_condition(9, (unsigned long long)(v0[0] & 127), 0, 0)))
 goto LABEL_402720;
 if ((char)arm64g_calculate_condition(9, (unsigned long long)(v0[0] & 0xff00), 0, 0))
 v10 = 42;
 else
 v10 = 4294967295;
 }
 else
 {
LABEL_402720:
 v10 = 4294967295;
 }
 printf(&g_40356d, v10);
 printf(&g_403589, param_pipe_communication() & 4294967295);
 printf(&g_4035a5, param_socket_create() & 4294967295);
 if (0 < (unsigned int)param_shmget_shmat())
 v13 = 42;
 else
 v13 = 4294967295;
 printf(&g_4035c1, v13);
 v14 = printf(&g_4035dd, param_signal_handling() & 4294967295);
 return printf(&g_4035dd, param_signal_handling() & 4294967295);
}


// Function: thread_compute at 0x4027c4
void* thread_compute(void *a0)
{
 unsigned int *ptr; // x0
 unsigned int *input = (unsigned int *)a0;

 ptr = malloc(4);
 *(ptr) = *(input) * *(input);
 return ptr;
}


// Function: param_pthread_create at 0x4027f0
unsigned long long param_pthread_create(unsigned int a0)
{
 void *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x20]
 pthread_t v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v2 = &v4;
 v1 = a0;
 if (!pthread_create(&v3, NULL, (void *(*)(void *))thread_compute, &v1))
 {
 pthread_join(v3, &v0);
 free(v0);
 return *(unsigned int *)v0;
 }
 return 4294967295;
}


// Function: call_pthread_create at 0x402864
unsigned long long call_pthread_create()
{
 unsigned int *v0; // [bp-0x30], Other Possible Types: char
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x20]
 char v3; // [bp-0x8], Other Possible Types: unsigned long long
 char v4; // [bp+0x0]

 v2 = &v4;
 v1 = 7;
 if (!(int)pthread_create(&v3, 0, thread_compute, &v1))
 {
 pthread_join(v3, &v0);
 free(v0);
 return *(v0);
 }
 return 4294967295;
}


// Function: thread_sum at 0x4028dc
void* thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v0; // w8
 unsigned int v1; // w9

 v0 = *(ptr);
 v1 = ptr[1];
 ptr[2] = 0;
 if (v1 >= v0)
 ptr[2] = v1 + v0 * (v1 - v0) + __ROL__((v1 + ~(v0)) * (v1 - v0), 63);
 return 0;
}


// Function: param_pthread_join at 0x402910
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
 if ((int)pthread_create(&v6, NULL, thread_sum, &v0))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v7, NULL, thread_sum, &v2))
 {
 return 4294967295;
 }
 else if ((int)pthread_create(&v8, NULL, thread_sum, &v4))
 {
 return 4294967295;
 }
 else if ((int)pthread_join(v6, NULL))
 {
 return 4294967294;
 }
 else if ((int)pthread_join(v7, NULL))
 {
 return 4294967294;
 }
 else if ((int)pthread_join(v8, NULL))
 {
 return 4294967294;
 }
 else
 {
 return result + *((int *)((char *)&flag1 + 4)) + (unsigned int)v1;
 }
}


// Function: call_pthread_join at 0x402a7c
unsigned long long call_pthread_join()
{
 unsigned long long count; // x0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: thread_increment at 0x402a80
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


// Function: param_mutex_lock at 0x402ae8
extern unsigned int shared_counter;
extern pthread_mutex_t counter_mutex;

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned long v3; // x19
 pthread_t *ptr; // x0
 pthread_t *ptr; // x20
 unsigned long long v6; // x23
 unsigned long long v7; // x24
 pthread_t *v8; // x21
 unsigned long long i; // x23
 pthread_t *v10; // x21
 unsigned long long v11; // x23
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp+0x0]

 v0 = &v2;
 v3 = a0;
 v1 = a1;
 ptr = (pthread_t *)malloc(v3 * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 shared_counter = 0;
 if ((unsigned int)v3 >= 1)
 {
 v6 = v3 & 4294967295;
 v7 = 0;
 do
 {
 if ((int)pthread_create(&ptr[v7 / sizeof(pthread_t)], NULL, thread_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 v7 += 8;
 } while ((__ROL__(v6, 3) & 18446744073709551608) != v7);
 if ((unsigned int)v3 >= 1)
 {
 v8 = ptr;
 do
 {
 i = v6;
 v10 = v8 + 1;
 pthread_join(*v8, NULL);
 v11 = i - 1;
 v6 = v11;
 v8 = v10;
 } while (i != 1);
 }
 }
 free(ptr);
 if (shared_counter != (unsigned int)v3 * v1)
 return 4294967293;
 return 42;
}


// Function: call_mutex_lock at 0x402bfc
unsigned long long call_mutex_lock()
{
 unsigned long long v0; // x0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402c08
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern char data;
extern char i;

unsigned int * consumer_thread()
{
 unsigned int v2; // w19
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
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


// Function: producer_thread at 0x402c7c
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern char data;
extern char ready;

unsigned long long producer_thread()
{
 char *v0; // [bp-0x30]
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


// Function: param_condition_variable at 0x402cd8
extern char data;
extern char ready;

unsigned long long param_condition_variable()
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


// Function: call_condition_variable at 0x402da0
unsigned long long call_condition_variable()
{
 unsigned long long v0; // x0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x402da4
extern unsigned long long __dollar_d_5;

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
 __aarch64_ldadd4_acq_rel(1, &__dollar_d_5);
 __aarch64_cas4_acq_rel(i, i + 1000, &__dollar_d_5);
 i += 1;
 } while (i != *(a0));
 return 0;
}


// Function: thread_atomic_load_store at 0x402e08
extern unsigned int __dollar_d_5;

unsigned long long thread_atomic_load_store()
{
 __sync_synchronize();
 __sync_synchronize();
 __dollar_d_5 = __dollar_d_5 + 100;
 return 0;
}


// Function: param_atomic_ops at 0x402e24
extern unsigned int __dollar_d_5;

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned long v4; // x20
 unsigned long long *ptr; // x0
 unsigned long long *ptr; // x19
 unsigned long long v7; // x23
 unsigned long long v8; // x20
 unsigned long long *v9; // x21
 unsigned long long i; // x20
 unsigned long long *v11; // x21
 unsigned long long v12; // x20
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
 __dollar_d_5 = 0;
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
 if (0 >= __dollar_d_5)
 return 4294967293;
 return 42;
}


// Function: call_atomic_ops at 0x402f60
unsigned long long call_atomic_ops()
{
 unsigned long long v0; // x0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x402f6c
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


// Function: param_thread_local_storage at 0x402fbc
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
 if ((int)pthread_create(v14, 0, thread_tls_test, p[v15]))
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
 pthread_join(*(v21), &ptr);
 v19 += ptr[0];
 v18 += ptr[1];
 free(ptr);
 v25 = v23 + 1;
 free(*(v23));
 v7 = 4;
 v8 = j;
 v20 = v25;
 v21 = v24;
 i = j - 1;
 } while (j != 1);
 goto LABEL_4030d8;
 }
 }
 }
 v19 = 0;
 v18 = 0;
LABEL_4030d8:
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


// Function: call_thread_local_storage at 0x403158
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x403160
extern char g_403603;
extern char g_40361f;
extern char g_40363c;
extern char g_403658;
extern char g_403674;
extern char g_403690;
extern char g_4036eb;

int test_thread_concurrency()
{
 unsigned int v5; // w19
 unsigned int *ptr; // [bp-0x30], Other Possible Types: char
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x20]
 char v3; // [bp-0x8], Other Possible Types: unsigned long long
 char v4; // [bp+0x0]

 v2 = &v4;
 puts(&g_4036eb);
 v1 = 7;
 if ((int)pthread_create(&v3, 0, thread_compute, &v1))
 {
 v5 = 4294967295;
 }
 else
 {
 pthread_join(v3, &ptr);
 v5 = *(ptr);
 free(ptr);
 }
 printf(&g_403603, v5);
 printf(&g_40361f, param_pthread_join() & 4294967295);
 printf(&g_40363c, param_mutex_lock(4, 1000) & 4294967295);
 printf(&g_403658, param_condition_variable() & 4294967295);
 printf(&g_403674, param_atomic_ops(4, 500) & 4294967295);
 return printf(&g_403690, param_thread_local_storage(4) & 4294967295);
}


// Function: main at 0x403258
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


// Function: sub_403278 at 0x403278
long long sub_403278()
{
 unsigned long long v0; // x0

 v0 = __aarch64_cas4_acq_rel();
 return __aarch64_cas4_acq_rel();
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x403280
// Function: sub_403294 at 0x403294
long long sub_403294()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_4032b4 at 0x4032b4
long long sub_4032b4()
{
 unsigned long long v0; // x0

 v0 = __aarch64_ldadd4_acq_rel();
 return __aarch64_ldadd4_acq_rel();
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x4032c0
// Function: sub_4032d4 at 0x4032d4
long long sub_4032d4()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


