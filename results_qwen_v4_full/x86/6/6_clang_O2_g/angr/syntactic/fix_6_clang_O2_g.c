// Angr Decompilation of 6_clang_O2_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <stdatomic.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <netinet/in.h>

// Forward declarations for missing functions
int raise(int sig);
unsigned int alarm(unsigned int seconds);

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char field_c;
    char padding_0[252];
    char padding_5b27[12];
    char field_5b87;
} struct_0;

extern struct_0 *g_406ff4;
extern char g_4043cc;
extern char g_4043d8;
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char i;
extern char ready;
extern unsigned int signal_number;
extern unsigned int signal_received;

// Forward declarations
void signal_handler(unsigned int a0);
unsigned int param_signal_handling(void);
unsigned int call_signal_handling(void);
unsigned int thread_atomic_load_store(void);
unsigned int call_atomic_ops(void);
int call_strcpy(void);
unsigned int call_strcmp(void);
unsigned int call_strlen(void);
unsigned int call_memcpy(void);
int call_memcmp(void);
int call_printf(void);
unsigned int call_scanf(void);
unsigned int call_fopen_fclose(void);
unsigned int call_fread_fwrite(void);
unsigned int call_malloc_free(void);
unsigned int call_memset(void);
unsigned int call_strchr_strstr(void);
unsigned int call_linux_syscall(void);
unsigned int call_win32_api(void);
unsigned int call_fork_exec(void);
unsigned int call_pipe_communication(void);
unsigned int call_socket_create(void);
unsigned int call_shmget_shmat(void);
int call_mutex_lock(void);
int call_condition_variable(void);
int call_thread_local_storage(void);
int call_pthread_create(void);
int call_pthread_join(void);

int _init()
{
 if (g_406ff4)
 return 0;
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0(int a0)
{
 ((void (*)())a0)();
 return 0;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40141b at 0x40141b
void sub_40141b()
{
}


// Function: sub_40141c at 0x40141c
int sub_40141c()
{
 return 0;
}


// Function: __x86.get_pc_thunk_bx at 0x401420
void __x86.get_pc_thunk_bx()
{
}


// Function: sub_401424 at 0x401424
int sub_401424()
{
 return 0;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401463 at 0x401463
void sub_401463()
{
}


// Function: sub_401469 at 0x401469
int sub_401469()
{
 return 0;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

// Function: sub_4014b7 at 0x4014b7
int sub_4014b7(void)
{
 return 0;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */




// Function: sub_40154a at 0x40154a
int sub_40154a(void)
{
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401559
int __x86.get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86.get_pc_thunk_di at 0x40155d
int __x86.get_pc_thunk_di(int a0, int a1)
{
 return a0;
}


// Function: sub_401561 at 0x401561
int sub_401561(void)
{
 return 0;
}


// Function: param_strcpy at 0x401570
int param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4015a3 at 0x4015a3
int sub_4015a3(void)
{
 return call_strcpy();
}


// Function: call_strcpy at 0x4015b0
int call_strcpy(void)
{
 char v0[8]; // [bp-0x24]
 char v1[24]; // [bp-0x1c]

 strncpy(v1, "HelloLib", 8);
 return strlen(v0);
}


// Function: sub_4015e6 at 0x4015e6
int sub_4015e6(void)
{
 return 0;
}


// Function: param_strcmp at 0x4015f0
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 v2 = strcmp(a0, a1);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_40162b at 0x40162b
void sub_40162b(void)
{
 call_strcmp();
 return;
}


// Function: call_strcmp at 0x401630
unsigned int call_strcmp()
{
 return 0;
}


// Function: sub_401633 at 0x401633
int sub_401633(void)
{
 return 0;
}


// Function: param_strlen at 0x401640
int param_strlen(char *a0)
{
 return strlen(a0);
}


// Function: sub_401661 at 0x401661
void sub_401661(void)
{
 call_strlen();
 return;
}


// Function: call_strlen at 0x401670
unsigned int call_strlen(void)
{
 return 12;
}


// Function: sub_401676 at 0x401676
int sub_401676(void)
{
 return 0;
}


// Function: param_memcpy at 0x401680
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: sub_4016af at 0x4016af
void sub_4016af(void)
{
 call_memcpy();
 return;
}


// Function: call_memcpy at 0x4016b0
unsigned int call_memcpy(void)
{
 return 90;
}


// Function: sub_4016b6 at 0x4016b6
int sub_4016b6(void)
{
 return 0;
}


// Function: param_memcmp at 0x4016c0
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 v2 = memcmp(a0, a1, a2);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_4016ff at 0x4016ff
int sub_4016ff(void)
{
 return call_memcmp();
}


// Function: call_memcmp at 0x401700
int call_memcmp(void)
{
 unsigned int v4; // ebx
 unsigned int v5; // edi
 unsigned int v6; // esi
 unsigned int v7; // esi
 unsigned int v8; // eax
 unsigned int v9; // ecx
 unsigned int v10; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v2 = v4;
 v1 = v5;
 v0 = v6;
 v7 = memcmp(&g_4043d8, &g_4043cc, 12);
 v8 = memcmp(&g_4043d8, &g_4043d8, 12);
 v9 = -(v8);
 if (v8 == 0)
 v9 = 1;
 v10 = -(v7);
 if (v7 == 0)
 v10 = 1;
 return v10 + v9;
}


// Function: sub_401762 at 0x401762
int sub_401762(void)
{
 return 0;
}


// Function: param_printf at 0x401770
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = a1;
 v0 = a0;
 return printf("Value: %d, Name: %s\n", a0, (char *)a1);
}


// Function: sub_40179c at 0x40179c
int sub_40179c(void)
{
 return call_printf();
}


// Function: call_printf at 0x4017a0
int call_printf(void)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = (unsigned int)"Test";
 v0 = 42;
 return printf("Value: %d, Name: %s\n", v0, (char *)v1);
}


// Function: sub_4017cd at 0x4017cd
int sub_4017cd(void)
{
 return 0;
}


// Function: param_scanf at 0x4017d0
unsigned int param_scanf(char *a0)
{
 unsigned int v5; // ebx
 int v2; // [bp-0xc], Other Possible Types: unsigned int
 int v3; // [bp-0x8], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 return (sscanf(a0, "%d,%d", &v2, &v3) == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_401812 at 0x401812
int sub_401812(void)
{
 return call_scanf();
}


// Function: call_scanf at 0x401820
unsigned int call_scanf(void)
{
 unsigned int v7; // ebx
 unsigned int v8; // esi
 int v2; // [bp-0x10], Other Possible Types: unsigned int
 int v3; // [bp-0xc], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v7;
 v4 = v8;
 return (sscanf("123,456", "%d,%d", &v2, &v3) == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_40186a at 0x40186a
int sub_40186a(void)
{
 return 0;
}


// Function: param_fopen_fclose at 0x401870
unsigned int param_fopen_fclose(char *a0)
{
 FILE *fp; // eax
 unsigned int v1; // edi

 fp = fopen(a0, "r");
 if (!fp)
 return 4294967295;
 v1 = fileno(fp);
 fclose(fp);
 return v1;
}


// Function: call_fopen_fclose at 0x4018c0
unsigned int call_fopen_fclose(void)
{
 void* fp; // eax
 unsigned int v2; // eax

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v2 = fileno(fp);
 fclose(fp);
 return v2 >> 31 | 42;
}


// Function: sub_401918 at 0x401918
int sub_401918(void)
{
 return 0;
}


// Function: param_fread_fwrite at 0x401920
unsigned int param_fread_fwrite(char *a0)
{
 void* fp; // eax
 void* v2; // esi
 unsigned int count; // eax
 char v0; // [bp-0x30]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v2 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v2);
 return 4294967294;
 }
 rewind(v2);
 count = fread(&v0, 1, 18, v2);
 (&v0)[count] = 0;
 fclose(v2);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 return (!memcmp(&v0, "BinBench Test Data", 19) ? 42 : 4294967293);
}


// Function: sub_4019f4 at 0x4019f4
int sub_4019f4(void)
{
 return call_fread_fwrite();
}


// Function: call_fread_fwrite at 0x401a00
unsigned int call_fread_fwrite(void)
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_401a23 at 0x401a23
int sub_401a23(void)
{
 return 0;
}


// Function: param_malloc_free at 0x401a30
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int v0; // edi
 unsigned int *ptr; // eax
 unsigned int result; // edi
 unsigned int flag1; // ecx
 unsigned int index; // edx
 unsigned int v5; // ebp
 unsigned int v6; // edx
 unsigned int idx; // ebp
 unsigned int v8; // esi

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 result = v0;
 if (result)
 {
 flag1 = v0 & 3;
 index = 0;
 if (v0 - 1 >= 3)
 {
 index = 0;
 v5 = 20;
 do
 {
 ptr[index] = v5 - 20;
 ptr[1 + index] = v5 - 10;
 ptr[2 + index] = v5;
 ptr[3 + index] = v5 + 10;
 index += 4;
 v5 += 40;
 } while ((a0 & 0xfffffffc) != index);
 }
 if (flag1)
 {
 v6 = index * 10;
 idx = 0;
 do
 {
 ptr[idx + index] = v6;
 idx += 1;
 v6 += 10;
 } while (flag1 != idx);
 }
 v8 = *(ptr);
 result = a0;
 }
 free(ptr);
 return v8 + ptr[1 + result];
}


// Function: sub_401ae2 at 0x401ae2
void sub_401ae2(void)
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x401af0
unsigned int call_malloc_free(void)
{
 return 90;
}


// Function: sub_401af6 at 0x401af6
int sub_401af6(void)
{
 return 0;
}


// Function: param_memset at 0x401b00
unsigned int param_memset(void* a0, unsigned int n)
{
 unsigned int result; // ecx
 unsigned int i; // edx
 unsigned int v2; // eax
 unsigned int v3; // edx

 memset(a0, 0, n);
 if (!n)
 return 0;
 result = n & 7;
 if (n - 1 < 7)
 {
 i = 0;
 v2 = 0;
 }
 else
 {
 i = 0;
 v2 = 0;
 do
 {
 v2 = *(7 + (char *)a0 + i) + *(6 + (char *)a0 + i) + *(5 + (char *)a0 + i) + *(4 + (char *)a0 + i) + *(3 + (char *)a0 + i) + *(2 + (char *)a0 + i) + *(1 + (char *)a0 + i) + *((char *)a0 + i) + v2;
 i += 8;
 } while ((n & 0xfffffff8) != i);
 }
 if (!result)
 return v2;
 v3 = 0;
 do
 {
 v2 += *((char *)a0 + i + v3);
 v3 += 1;
 } while (result != v3);
 return v2;
}


// Function: sub_401bb1 at 0x401bb1
void sub_401bb1(void)
{
 call_memset();
 return;
}


// Function: call_memset at 0x401bc0
unsigned int call_memset(void)
{
 return 0;
}


// Function: sub_401bc3 at 0x401bc3
int sub_401bc3(void)
{
 return 0;
}


// Function: param_strchr_strstr at 0x401bd0
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 char *ptr1; // eax
 char *ptr2; // eax

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return ((ptr1 ? 1 : 0) | (ptr1 ? ptr1 - a0 : 0)) + ((ptr2 ? 1 : 0) | (ptr2 ? ptr2 - a0 : 0));
}


// Function: sub_401c2a at 0x401c2a
void sub_401c2a(void)
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x401c30
unsigned int call_strchr_strstr(void)
{
 return 15;
}


// Function: sub_401c36 at 0x401c36
int sub_401c36(void)
{
 return test_standard_library_functions();
}


// Function: test_standard_library_functions at 0x401c40
int test_standard_library_functions()
{
 unsigned int v5; // eax
 void* fp; // eax
 char *v0; // [bp-0x40]
 char v1; // [bp-0x34]
 char v2[8]; // [bp-0x30]
 char v3[24]; // [bp-0x28]

 puts(g_40436c);
 strncpy(v3, "HelloLib", 8);
 strlen(v2);
 printf(g_404074);
 printf(g_40408f);
 printf(g_4040aa);
 printf(g_4040c6);
 v5 = memcmp(&g_4043d8, &g_4043cc, 12);
 printf(g_4040e2);
 printf("Value: %d, Name: %s\n", 42, "Test");
 printf(g_4040fe);
 v0 = &v1;
 printf(g_40411a);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 fileno(fp);
 fclose(fp);
 }
 printf(g_404137);
 param_fread_fwrite("/tmp/binbench_test_tmp");
 printf(g_404153);
 printf(g_40416f);
 printf(g_40418b);
 return printf(g_4041a6);
}


// Function: sub_401e3c at 0x401e3c
int sub_401e3c(void)
{
 return 0;
}


// Function: param_linux_syscall at 0x401e40
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = v3;
 result = 0;
 v0 = a0;
 v4 = syscall(SYS_open, "/etc/passwd", O_RDONLY);
 if (v4 < 0)
 return -(*(__errno_location()));
 v0 = v4;
 syscall(SYS_close, v4);
 return v4;
}


// Function: sub_401e89 at 0x401e89
unsigned int sub_401e89(void)
{
 return call_linux_syscall();
}


// Function: call_linux_syscall at 0x401e90
unsigned int call_linux_syscall(void)
{
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = v4;
 result = 0;
 v0 = "/etc/passwd";
 v5 = syscall(SYS_open, "/etc/passwd", O_RDONLY);
 if (v5 >= 0)
 {
 v0 = v5;
 syscall(SYS_close, v5);
 }
 else
 {
 v5 = -(*(__errno_location()));
 }
 return v5 >> 31 | 42;
}


// Function: sub_401ee2 at 0x401ee2
int sub_401ee2(void)
{
 return 0;
}


// Function: param_win32_api at 0x401ef0
unsigned int param_win32_api(unsigned int a0)
{
 unsigned int v3; // ebx
 char v0; // [bp-0x5c]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 if (stat(a0, &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: sub_401f35 at 0x401f35
unsigned int sub_401f35(void)
{
 return call_win32_api();
}


// Function: call_win32_api at 0x401f40
unsigned int call_win32_api(void)
{
 unsigned int v4; // ebx
 char v0; // [bp-0x5c]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0x4]

 v2 = v4;
 if (stat("/etc/passwd", &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: sub_401f88 at 0x401f88
int sub_401f88(void)
{
 return 0;
}


// Function: param_fork_exec at 0x401f90
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // eax
 unsigned int result; // [bp-0x10]
 unsigned int v1[1]; // [bp-0x8]

 pid = fork();
 if (pid < 0)
 {
 return 4294967295;
 }
 else if (!pid)
 {
 result = 0;
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else if (waitpid(pid, &v1, 0) >= 0)
 {
 return 4294967293;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402001 at 0x402001
int sub_402001(void)
{
 return call_fork_exec();
}


// Function: call_fork_exec at 0x402010
unsigned int call_fork_exec(void)
{
 unsigned int pid; // eax
 unsigned int result; // [bp-0x10]
 int status; // [bp-0x10]

 pid = fork();
 if (pid < 0)
 {
 return 4294967295;
 }
 else if (!pid)
 {
 result = 0;
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(pid, &status, 0) < 0)
 {
 return 4294967295;
 }
 else if (!((char)status & 127))
 {
 return -(0 < (status & 0xff00)) | 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_40207c at 0x40207c
int sub_40207c(void)
{
 return 0;
}


// Function: param_pipe_communication at 0x402080
unsigned int param_pipe_communication()
{
 unsigned int pid; // eax
 unsigned int count; // eax
 int pipefd[2]; // [bp-0x30]
 char v2; // [bp-0x28]
 char buf[32]; // [bp-0x28]

 if (pipe(pipefd) < 0)
 return 4294967295;
 pid = fork();
 if (pid < 0)
 {
 return 4294967294;
 }
 else if (pid)
 {
 close(pipefd[1]);
 count = read(pipefd[0], buf, 31);
 buf[count] = 0;
 close(pipefd[0]);
 wait(NULL);
 return (count > 0 ? 42 : 4294967293);
 }
 else
 {
 close(pipefd[0]);
 write(pipefd[1], "HelloPipe", 9);
 close(pipefd[1]);
 _exit(0); /* do not return */
 }
}


// Function: sub_402158 at 0x402158
int sub_402158(void)
{
 return call_pipe_communication();
}


// Function: call_pipe_communication at 0x402160
unsigned int call_pipe_communication(void)
{
 return param_pipe_communication();
}


// Function: sub_40217a at 0x40217a
int sub_40217a(void)
{
 return 0;
}


// Function: param_socket_create at 0x402180
unsigned int param_socket_create()
{
 unsigned int sock; // eax
 unsigned int v7; // esi
 unsigned int v8; // eax
 unsigned int result; // [bp-0x20]
 struct sockaddr_in v1; // [bp-0x1c]

 sock = socket(AF_INET, SOCK_STREAM, 0);
 if (sock < 0)
 return 4294967295;
 v7 = sock;
 result = 1;
 if (setsockopt(v7, SOL_SOCKET, SO_REUSEADDR, &result, 4) < 0)
 {
 close(v7);
 return 4294967294;
 }
 memset(&v1, 0, sizeof(v1));
 v1.sin_family = AF_INET;
 v1.sin_port = 0;
 v1.sin_addr.s_addr = INADDR_ANY;
 if (bind(v7, (struct sockaddr *)&v1, sizeof(v1)) < 0)
 {
 close(v7);
 return 4294967293;
 }
 v8 = listen(v7, 5);
 close(v7);
 return (v8 < 0 ? 0xfffffffc : 42);
}


// Function: sub_402266 at 0x402266
int sub_402266(void)
{
 return call_socket_create();
}


// Function: call_socket_create at 0x402270
unsigned int call_socket_create(void)
{
 return param_socket_create();
}


// Function: sub_40228a at 0x40228a
int sub_40228a(void)
{
 return 0;
}


// Function: param_shmget_shmat at 0x402290
int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // esi
 unsigned int v3; // eax
 unsigned int v4; // eax
 struct_0 *ptr; // eax
 unsigned int len; // ebp

 v1 = open("/tmp/binbench_shm", O_RDWR | O_CREAT, 438);
 v2 = 4294967295;
 if (v1 >= 0)
 {
 close(v1);
 v3 = ftok("/tmp/binbench_shm", 42);
 if (v3 >= 0)
 {
 v4 = shmget(v3, 0x1000, 0666);
 if (v4 >= 0)
 {
 ptr = shmat(v4, 0, 0);
 if (ptr != (struct_0 *)-1)
 {
 ptr->field_c = 0;
 ptr->field_8 = 2037542765;
 ptr->field_4 = 1699570789;
 ptr->field_0 = 1918986323;
 len = strlen((char *)ptr);
 shmdt(ptr);
 shmctl(v4, IPC_RMID, 0);
 return len;
 }
 v2 = 4294967293;
 }
 else
 {
 v2 = 4294967294;
 }
 }
 }
 return v2;
}


// Function: sub_402374 at 0x402374
int sub_402374(void)
{
 return call_shmget_shmat();
}


// Helper function to replace _ccall
unsigned int _ccall_helper(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e)
{
 return c;
}

// Function: call_shmget_shmat at 0x402380
unsigned int call_shmget_shmat(void)
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 return ((char)_ccall_helper(15, 15, param_shmget_shmat(), 0, 0) ? 42 : 4294967295);
}


// Function: sub_4023a9 at 0x4023a9
int sub_4023a9(void)
{
 return 0;
}


// Function: param_signal_handling at 0x4023b0
unsigned int param_signal_handling()
{
 unsigned int v1; // esi
 unsigned int v2; // esi
 unsigned int v3; // esi
 unsigned int v4; // esi
 unsigned int v5; // esi
 unsigned int v6; // esi

 if (signal(10, (void (*)(int))signal_handler) == (unsigned int)-1)
 {
 return 4294967295;
 }
 else if (signal(14, (void (*)(int))signal_handler) != (unsigned int)-1)
 {
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v1 = 1000;
 do
 {
 v2 = v1;
 usleep(1000);
 } while (!signal_received && (v3 = v2 - 1, v1 = v2 - 1, v2 > 1));
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number == 10)
 {
 signal_received = 0;
 alarm(1);
 if (!signal_received)
 {
 v4 = 2000;
 do
 {
 v5 = v4;
 usleep(1000);
 } while (!signal_received && (v6 = v5 - 1, v4 = v5 - 1, v5 > 1));
 }
 if (!signal_received)
 {
 return 4294967291;
 }
 else if (signal_number == 14)
 {
 signal(10, SIG_DFL);
 signal(14, SIG_DFL);
 return 42;
 }
 else
 {
 return 4294967291;
 }
 }
 else
 {
 return 0xfffffffc;
 }
 }
 else
 {
 return 4294967294;
 }
}


// Function: signal_handler at 0x402510
void signal_handler(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
}


// Function: sub_402531 at 0x402531
int sub_402531(void)
{
 return call_signal_handling();
}


// Function: call_signal_handling at 0x402540
unsigned int call_signal_handling(void)
{
 return param_signal_handling();
}


// Function: sub_40255a at 0x40255a
int sub_40255a(void)
{
 return test_system_calls();
}


// Function: test_system_calls at 0x402560
int test_system_calls(void)
{
 unsigned int v4; // eax
 unsigned int pid; // eax
 unsigned int result; // [bp-0x70]
 struct stat v1; // [bp-0x6c]

 puts(g_404390);
 if (syscall(SYS_open, "/etc/passwd", O_RDONLY) >= 0)
 syscall(SYS_close, 3);
 else
 __errno_location();
 printf(g_4041f5);
 v4 = stat("/etc/passwd", &v1);
 printf(g_404211);
 pid = fork();
 if (pid >= 0 && !pid)
 {
 result = 0;
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 printf(g_40422d);
 param_pipe_communication();
 printf(g_404249);
 param_socket_create();
 printf(g_404265);
 printf(g_404281);
 param_signal_handling();
 return printf(g_40429d);
}


// Function: sub_4026e6 at 0x4026e6
int sub_4026e6(void)
{
 return 0;
}


// Forward declaration
unsigned int * thread_compute(unsigned int *a0);

// Function: thread_compute at 0x4026f0
unsigned int * thread_compute(unsigned int *a0)
{
 unsigned int *ptr; // eax

 ptr = malloc(4);
 *(ptr) = *(a0) * *(a0);
 return ptr;
}


// Function: sub_40271c at 0x40271c
int sub_40271c(void)
{
 return 0;
}


// Function: param_pthread_create at 0x402720
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int *v0;
 unsigned int v1;
 pthread_t v2;

 v1 = a0;
 if (pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, (void **)&v0);
 free(v0);
 return *v0;
}


// Function: sub_40278b at 0x40278b
int sub_40278b(void)
{
 return call_pthread_create();
}

// Function: call_pthread_create at 0x402790
int call_pthread_create(void)
{
 unsigned int *v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 v1 = 7;
 if (pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, (void **)&v0);
 free(v0);
 return *v0;
}


// Function: sub_4027fb at 0x4027fb
int sub_4027fb(void)
{
 return 0;
}


// Function: thread_sum at 0x402800
unsigned int thread_sum(unsigned int *ptr)
{
 unsigned int v0; // esi
 unsigned int v1; // edi

 ptr[2] = 0;
 v0 = *(ptr);
 v1 = ptr[1] - v0;
 if (ptr[1] >= v0)
 ptr[2] = v1 * (v0 + 1) + v0 + (unsigned int)(((ptr[1] + ~(v0)) * v1) * 0x80000000 >> 32);
 return 0;
}


// Function: sub_402838 at 0x402838
int sub_402838(void)
{
 return 0;
}


// Function: param_pthread_join at 0x402840
unsigned int param_pthread_join()
{
 pthread_t v0; // [bp-0x40], Other Possible Types: unsigned int
 pthread_t v1; // [bp-0x3c], Other Possible Types: unsigned int
 pthread_t v2; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int flag3; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 unsigned int flag2; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 unsigned int v7; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 unsigned int v9; // [bp-0x1c]
 unsigned int v10; // [bp-0x18]
 unsigned int result; // [bp-0x14]

 result = 0;
 flag1 = 0;
 flag2 = 0;
 flag3 = 1;
 v4 = 10;
 v6 = 11;
 v7 = 20;
 v9 = 21;
 v10 = 30;
 if (pthread_create(&v0, 0, (void *(*)(void *))thread_sum, &flag3))
 {
 return 4294967295;
 }
 else if (pthread_create(&v1, 0, (void *(*)(void *))thread_sum, &v6))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, 0, (void *(*)(void *))thread_sum, &v9))
 {
 return 4294967295;
 }
 else if (pthread_join(v0, 0))
 {
 return 4294967294;
 }
 else if (pthread_join(v1, 0))
 {
 return 4294967294;
 }
 else if (!pthread_join(v2, 0))
 {
 return flag1 + flag2 + result;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402953 at 0x402953
int sub_402953(void)
{
 return call_pthread_join();
}


// Function: call_pthread_join at 0x402960
int call_pthread_join(void)
{
 return param_pthread_join();
}


// Function: sub_40297a at 0x40297a
int sub_40297a(void)
{
 return 0;
}


// Function: thread_increment at 0x402980
unsigned int thread_increment(unsigned int *ptr)
{
 unsigned int v0; // esi
 unsigned int i; // esi
 unsigned int v2; // esi

 v0 = *(ptr);
 if (v0 <= 0)
 return 0;
 do
 {
 i = v0;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v2 = i - 1;
 v0 = v2;
 } while (i != 1);
 return 0;
}


// Function: sub_4029e1 at 0x4029e1
int sub_4029e1(void)
{
 return 0;
}


// Function: param_mutex_lock at 0x4029f0
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int i; // edi
 pthread_t *ptr; // eax
 pthread_t *v3; // ebp
 pthread_t *v4; // esi
 unsigned int v5; // edi
 unsigned int v6; // edi
 unsigned int v7; // esi
 pthread_t *threads; // [bp-0x14]

 i = a0;
 threads = malloc(i * sizeof(pthread_t));
 if (!threads)
 return 4294967295;
 v3 = threads;
 shared_counter = 0;
 if (i > 0)
 {
 v4 = v3;
 ptr = v4;
 do
 {
 v5 = i;
 if (pthread_create(v4, 0, (void *(*)(void *))thread_increment, &a1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v4 += 1, v6 = v5 - 1, i = v5 - 1, v5 != 1));
 i = a0;
 v3 = ptr;
 if (i > 0)
 {
 v7 = 0;
 do
 {
 pthread_join(v3[v7], 0);
 v7 += 1;
 } while (i != v7);
 }
 }
 free(v3);
 return (shared_counter == a1 * i ? 42 : 4294967293);
}


// Function: sub_402ad3 at 0x402ad3
int sub_402ad3(void)
{
 return call_mutex_lock();
}


// Function: call_mutex_lock at 0x402ae0
int call_mutex_lock(void)
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_402b04 at 0x402b04
int sub_402b04(void)
{
 return 0;
}


// Function: consumer_thread at 0x402b10
void * consumer_thread(void *arg)
{
 unsigned int *ptr; // eax

 pthread_mutex_lock(&cond_mutex);
 if (!i)
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (i != 1);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = (!data ? 0 : 42);
 return ptr;
}


// Function: sub_402b83 at 0x402b83
int sub_402b83(void)
{
 return 0;
}


// Function: producer_thread at 0x402b90
void * producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: sub_402be5 at 0x402be5
int sub_402be5(void)
{
 return 0;
}


// Function: param_condition_variable at 0x402bf0
unsigned int param_condition_variable()
{
 pthread_t v0; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int *v1; // [bp-0x10], Other Possible Types: char
 pthread_t v2; // [bp-0xc]

 ready = 0;
 data = 0;
 if (pthread_create(&v0, 0, (void *(*)(void *))consumer_thread, 0))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, 0, (void *(*)(void *))producer_thread, 0))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, (void **)&v1);
 pthread_join(v2, 0);
 free(v1);
 return *(v1);
 }
}


// Function: sub_402c9e at 0x402c9e
int sub_402c9e(void)
{
 return call_condition_variable();
}


// Function: call_condition_variable at 0x402ca0
int call_condition_variable(void)
{
 return param_condition_variable();
}


// Function: sub_402cba at 0x402cba
int sub_402cba(void)
{
 return 0;
}


// Function: thread_atomic_increment at 0x402cc0
extern _Atomic unsigned int atomic_counter;

unsigned int thread_atomic_increment(unsigned int *ptr)
{
 unsigned int v0; // edi
 unsigned int result; // esi
 unsigned int i; // ecx

 v0 = *(ptr);
 if (v0 <= 0)
 return 0;
 result = v0 & 3;
 i = 0;
 if (v0 - 1 >= 3)
 {
 i = 0;
 do
 {
 unsigned int temp1 = i + 1000;
 unsigned int temp2 = i + 1001;
 unsigned int temp3 = i + 1002;
 unsigned int temp4 = i + 1003;
 atomic_fetch_add(&atomic_counter, 1);
 atomic_compare_exchange_weak(&atomic_counter, &temp1, i);
 atomic_fetch_add(&atomic_counter, 1);
 atomic_compare_exchange_weak(&atomic_counter, &temp2, i + 1);
 atomic_fetch_add(&atomic_counter, 1);
 atomic_compare_exchange_weak(&atomic_counter, &temp3, i + 2);
 atomic_fetch_add(&atomic_counter, 1);
 atomic_compare_exchange_weak(&atomic_counter, &temp4, i + 3);
 i += 4;
 } while (i != (v0 & 0xfffffffc));
 }
 if (!result)
 return 0;
 do
 {
 unsigned int temp1 = i + 1000;
 atomic_fetch_add(&atomic_counter, 1);
 atomic_compare_exchange_weak(&atomic_counter, &temp1, i);
 i += 1;
 result -= 1;
 } while (result != 1);
 return 0;
}


// Function: sub_402d96 at 0x402d96
void sub_402d96(void)
{
 thread_atomic_load_store();
 return;
}


// Function: thread_atomic_load_store at 0x402da0
extern _Atomic unsigned int atomic_counter;

unsigned int thread_atomic_load_store()
{
 atomic_fetch_add(&atomic_counter, 100);
 return 0;
}


// Function: sub_402dbe at 0x402dbe
int sub_402dbe(void)
{
 return 0;
}


// Function: param_atomic_ops at 0x402dc0
extern _Atomic unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int i)
{
 unsigned int *v5; // esi
 unsigned int v4; // ebp
 unsigned int *v6; // esi
 unsigned int v7; // ebp
 unsigned int *v8; // esi
 unsigned int v9; // ebp
 unsigned int v10; // esi
 pthread_t v1; // [bp-0x14]
 char v2; // [bp+0x8]

 v5 = malloc(i * 4);
 if (!v5)
 return 4294967295;
 atomic_store(&atomic_counter, 0);
 if (i > 0)
 {
 v4 = i;
 v6 = v5;
 do
 {
 v7 = v4;
 if (pthread_create(v6, 0, (void *(*)(void *))thread_atomic_increment, &v2))
 {
 free(v5);
 return 4294967294;
 }
 } while ((v8 = v6 + 4, v9 = v7 - 1, v4 = v7 - 1, v6 = v6 + 4, v7 != 1));
 }
 if (!pthread_create(&v1, 0, (void *(*)(void *))thread_atomic_load_store, 0))
 pthread_join(v1, 0);
 if (i > 0)
 {
 v10 = 0;
 do
 {
 pthread_join(v5[v10], 0);
 v10 += 1;
 } while (i != v10);
 }
 free(v5);
 return (atomic_load(&atomic_counter) ? 42 : 4294967293);
}


// Function: sub_402ece at 0x402ece
int sub_402ece(void)
{
 return call_atomic_ops();
}


// Function: call_atomic_ops at 0x402ed0
unsigned int call_atomic_ops(void)
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_402ef4 at 0x402ef4
int sub_402ef4(void)
{
 return 0;
}


// Function: thread_tls_test at 0x402f00
unsigned int * thread_tls_test(char *a0)
{
 unsigned int v3; // esi
 unsigned int v4; // edi
 unsigned int *ptr; // eax

 v3 = 0;
 v4 = v3 + 50;
 ptr = malloc(8);
 ptr[0] = v3;
 ptr[1] = v4;
 return ptr;
}


// Function: sub_402f53 at 0x402f53
int sub_402f53(void)
{
 return 0;
}


// Function: param_thread_local_storage at 0x402f60
unsigned int param_thread_local_storage(unsigned int i)
{
 unsigned int v3; // esi
 unsigned int ptr_val; // ebp
 unsigned int v13; // ebp
 unsigned int v14; // esi
 unsigned int ptr_arr[2]; // eax
 unsigned int v16; // edi
 pthread_t *ptr; // ecx
 unsigned int index; // esi
 char *str_ptr; // eax
 unsigned int j; // esi
 pthread_t *v9; // ebp
 pthread_t *v10; // ebp
 pthread_t *v11; // ebp
 unsigned int v12; // edi
 pthread_t *p; // [bp-0x1c]
 pthread_t *addr; // [bp-0x18]
 void *v2; // [bp-0x14]

 v3 = i * sizeof(pthread_t);
 addr = malloc(v3);
 p = malloc(i * sizeof(char *));
 if (!addr || !p)
 {
 return 4294967295;
 }
 else
 {
 if (i > 0)
 {
 index = 0;
 do
 {
 str_ptr = malloc(16);
 ((char **)p)[index] = str_ptr;
 snprintf(str_ptr, 16, "Thread-%d", index);
 index += 1;
 } while (i != index);
 if (i > 0)
 {
 j = 0;
 v9 = addr;
 do
 {
 v10 = v9;
 if (pthread_create(v10, 0, (void *(*)(void *))thread_tls_test, ((char **)p)[j]))
 {
 v16 = 4294967295;
 do
 {
 free(((char **)p)[1 + v16]);
 v16 += 1;
 } while (j != v16);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((j += 1, v11 = v10 + 1, v9 = v10 + 1, i != j));
 if (i > 0)
 {
 v12 = 0;
 v13 = 0;
 v14 = 0;
 do
 {
 pthread_join(addr[v12], &v2);
 ptr_val = *((int *)&v2);
 v14 += ((unsigned int *)ptr_val)[0];
 v13 += ((unsigned int *)ptr_val)[1];
 free((void *)ptr_val);
 free(((char **)p)[v12]);
 v12 += 1;
 } while (i != v12);
 goto LABEL_4030a6;
 }
 }
 }
 v14 = 0;
 v13 = 0;
LABEL_4030a6:
 free(p);
 free(addr);
 return (!(i * 150 ^ v13) && !(i * 100 ^ v14) ? 42 : 4294967293);
 }
}


// Function: sub_403124 at 0x403124
int sub_403124(void)
{
 return call_thread_local_storage();
}


// Function: call_thread_local_storage at 0x403130
int call_thread_local_storage(void)
{
 return param_thread_local_storage(4);
}


// Function: sub_403151 at 0x403151
int sub_403151(void)
{
 return test_thread_concurrency();
}


// Function: test_thread_concurrency at 0x403160
extern char g_4042c3[];
extern char g_4042df[];
extern char g_4042fc[];
extern char g_404318[];
extern char g_404334[];
extern char g_404350[];
extern char g_4043ab[];

int test_thread_concurrency()
{
 unsigned int *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 puts(g_4043ab);
 v1 = 7;
 if (!pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v1))
 {
 pthread_join(v2, (void **)&v0);
 free(v0);
 }
 printf(g_4042c3);
 param_pthread_join();
 printf(g_4042df);
 param_mutex_lock(4, 1000);
 printf(g_4042fc);
 param_condition_variable();
 printf(g_404318);
 param_atomic_ops(4);
 printf(g_404334);
 param_thread_local_storage(4);
 return printf(g_404350);
}


// Function: sub_403273 at 0x403273
int sub_403273(void)
{
 return main();
}


// Function: main at 0x403280
int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: sub_4032a6 at 0x4032a6
void sub_4032a6(void)
{
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_4032f2 at 0x4032f2
void sub_4032f2(void)
{
}

/* Global variable definitions */
struct_0 *g_406ff4 = 0;
unsigned int signal_number = 0;
unsigned int signal_received = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
unsigned int shared_counter = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
char data = 0;
char i = 0;
char ready = 0;
_Atomic unsigned int atomic_counter = 0;
char g_404074[] = "";
char g_40408f[] = "";
char g_4040aa[] = "";
char g_4040c6[] = "";
char g_4040e2[] = "";
char g_4040fe[] = "";
char g_40411a[] = "";
char g_404137[] = "";
char g_404153[] = "";
char g_40416f[] = "";
char g_40418b[] = "";
char g_4041a6[] = "";
char g_40436c[] = "";
char g_4041f5[] = "";
char g_404211[] = "";
char g_40422d[] = "";
char g_404249[] = "";
char g_404265[] = "";
char g_404281[] = "";
char g_40429d[] = "";
char g_4042c3[] = "";
char g_4042df[] = "";
char g_4042fc[] = "";
char g_404318[] = "";
char g_404334[] = "";
char g_404350[] = "";
char g_4043ab[] = "";
char g_404390[] = "";
char g_4043cc = 0;
char g_4043d8 = 0;



/* CRT stub function _fini removed by preprocessor */


