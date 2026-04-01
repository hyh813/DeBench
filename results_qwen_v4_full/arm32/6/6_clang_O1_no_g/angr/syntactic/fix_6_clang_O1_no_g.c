// Angr Decompilation of 6_clang_O1_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_400c48 at 0x400c48
int sub_400c48()
{
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400fa8 at 0x400fa8
void sub_400fa8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_strcpy at 0x4010d8
int param_strcpy(char *a0, char *a1)
{
 char *dst; // r0
 unsigned int len; // r0

 dst = strcpy(a0, a1);
 len = strlen(dst);
 return strlen(dst);
}


// Function: call_strcpy at 0x4010ec
int call_strcpy()
{
 unsigned int len; // r0
 char v0[8]; // [bp-0x28]
 char v1[24]; // [bp-0x20]

 strncpy(v1, "HelloLib", 8);
 len = strlen(&v0);
 return strlen(&v0);
}


// Function: param_strcmp at 0x401128
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v1; // lr
 unsigned int result; // r0
 unsigned int v4; // r1
 unsigned int v5; // r1
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 result = strcmp(a0, a1);
 if (result)
 v4 = 4294967295;
 else
 v4 = result;
 v5 = v4;
 if (1 > result)
 return v5;
 return 1;
}


// Function: call_strcmp at 0x401150
unsigned int call_strcmp()
{
 return 0;
}


// Function: param_strlen at 0x401158
int param_strlen()
{
 char *v0; // r0
 unsigned int len; // r0

 len = strlen(v0);
 return strlen(v0);
}


// Function: call_strlen at 0x401168
unsigned int call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x401170
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x401188
unsigned int call_memcpy()
{
 return 90;
}


// Function: param_memcmp at 0x401190
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // lr
 unsigned int result; // r0
 unsigned int v4; // r1
 unsigned int v5; // r1
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 result = memcmp(a0, a1, a2);
 if (result)
 v4 = 4294967295;
 else
 v4 = result;
 v5 = v4;
 if (1 > result)
 return v5;
 return 1;
}


// Function: call_memcmp at 0x4011b8
extern void g_402de0;
extern void g_402dec;

int call_memcmp()
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v14; // r1
 unsigned int v15; // r1
 unsigned int v6; // r5
 unsigned int v7; // r4
 unsigned int result; // r0
 unsigned int v10; // r5
 unsigned int v11; // r5
 unsigned int flag1; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 result = memcmp(&g_402dec, &g_402de0, 12);
 if (result)
 v10 = 4294967295;
 else
 v10 = result;
 v11 = v10;
 if (1 <= result)
 v11 = 1;
 flag1 = memcmp(&g_402dec, &g_402dec, 12);
 if (flag1)
 v14 = 4294967295;
 else
 v14 = flag1;
 v15 = v14;
 if (1 <= flag1)
 v15 = 1;
 return v15 + v11;
}


// Function: param_printf at 0x401228
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0

 v0 = printf("Value: %d, Name: %s\n", a0, a1);
 return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x40124c
int call_printf()
{
 unsigned int v0; // r0

 v0 = printf("Value: %d, Name: %s\n", 42, "Test");
 return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x401278
unsigned int param_scanf()
{
 char *v2; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]

 return (__isoc99_sscanf(v2, "%d,%d", &v1, &v0) == 2 ? v0 + v1 : 4294967295);
}


// Function: call_scanf at 0x4012bc
unsigned int call_scanf()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 return (__isoc99_sscanf("123,456", "%d,%d") == 2 ? v0 + v1 : 4294967295);
}


// Function: param_fopen_fclose at 0x40130c
typedef struct FILE {
} FILE;

typedef unsigned long pthread_t;
typedef struct { unsigned int __data; } pthread_mutex_t;
typedef struct { unsigned int __data; } pthread_cond_t;

unsigned int param_fopen_fclose()
{
 char *v0; // r0
 FILE *fp; // r0
 unsigned int v2; // r0

 fp = fopen(v0, "r");
 if (!fp)
 return 4294967295;
 v2 = fileno(fp);
 fclose(fp);
 return v2;
}


// Function: call_fopen_fclose at 0x401350
void* call_fopen_fclose(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v4; // lr
 unsigned int v5; // r5
 unsigned int v6; // r4
 FILE *fp; // r0
 FILE *v8; // r0
 FILE *v9; // r0
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = 0;
 v1 = v5;
 v0 = v6;
 fp = fopen("/etc/passwd", "r");
 if (!fp)
 {
 v8 = (FILE *)0xffffffff;
 if (!((char)armg_calculate_condition(2, fp, 0, 0)))
 goto LABEL_401378;
 v9 = v8;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, fp, 0, 0)))
 goto LABEL_401378;
 v9 = fp;
 }
LABEL_401378:
 v10 = fileno(v9);
 fclose(v9);
 return (void *)(armg_calculate_condition(193, v10, 1, 0) ? 0x2a : 0xffffffff);
}


// Function: param_fread_fwrite at 0x4013a8
unsigned int param_fread_fwrite(char *a0)
{
 void* fp; // r0
 void* v2; // r5
 unsigned int count; // r7
 char v0[32]; // [bp-0x38]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v2 = fp;
 if (fwrite("BinBench Test Data", 1, 18, v2) != 18)
 {
 fclose(v2);
 return 4294967294;
 }
 rewind(v2);
 count = fread(v0, 1, 18, v2);
 v0[count] = 0;
 fclose(v2);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 return (!bcmp(v0, "BinBench Test Data", 19) ? 42 : 4294967293);
}


// Function: call_fread_fwrite at 0x40148c
unsigned int call_fread_fwrite()
{
 unsigned int count; // r0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x4014a8
unsigned int * param_malloc_free(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int *ptr; // r0
 unsigned int *v2; // r0
 unsigned int *v3; // r0
 unsigned int v4; // r1
 unsigned int *v_ptr; // r2
 unsigned int result; // r3
 unsigned int *v7; // r2
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 ptr = (unsigned int *)malloc(a0 * 4);
 if (!ptr)
 {
 v2 = (unsigned int *)0xffffffff;
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_4014c8;
 v3 = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_4014c8;
 v3 = ptr;
 }
LABEL_4014c8:
 if (a0)
 {
 v4 = 0;
 v_ptr = v3;
 result = a0;
 do
 {
 v7 = v_ptr + 1;
 *(v_ptr) = v4;
 v4 += 10;
 v_ptr = v7;
 result -= 1;
 } while (result != 1);
 }
 free(v3);
 return (unsigned int *)0;
}


// Function: call_malloc_free at 0x401508
unsigned int * call_malloc_free(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int *ptr; // r0
 unsigned int *v2; // r0
 unsigned int *v3; // r0
 unsigned int v4; // r1
 unsigned int i; // r2
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 ptr = (unsigned int *)malloc(40);
 if (!ptr)
 {
 v2 = (unsigned int *)0xffffffff;
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_401524;
 v3 = v2;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
 goto LABEL_401524;
 v3 = ptr;
 }
LABEL_401524:
 v4 = 0;
 i = 0;
 do
 {
 ptr[i] = v4;
 v4 += 10;
 i += 1;
 } while (i != 10);
 free(ptr);
 return (unsigned int *)0;
}


// Function: param_memset at 0x401558
unsigned int param_memset(char *ptr, unsigned int a1)
{
 unsigned int n; // r4
 unsigned int v1; // r6
 char *v2; // r5

 n = a1;
 memset(ptr, 0, n);
 if (!n)
 return 0;
 v1 = 0;
 do
 {
 v2 = ptr + 1;
 v1 += *(ptr);
 ptr = v2;
 n -= 1;
 } while (n != 1);
 return v1;
}


// Function: call_memset at 0x40159c
int call_memset()
{
 unsigned int i; // r0
 char v0[36]; // [bp-0x30]
 unsigned int v1; // [bp-0xc]

 i = 0;
 do
 {
 *((unsigned int *)&v0[-4 * i]) = 255;
 i -= 1;
 } while (i != 4294967286);
 memset(&v0, 0, 40);
 return v1 + *((int *)&v0[0]);
}


// Function: param_strchr_strstr at 0x4015e8
int param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 char *ptr; // r0
 unsigned int v9; // r6
 char *ptr2; // r0
 unsigned int v11; // r1
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 ptr = strchr(a0, a1);
 v9 = ptr - a0;
 if (!ptr)
 v9 = 4294967295;
 ptr2 = strstr(a0, a2);
 v11 = ptr2 - a0;
 if (!ptr2)
 v11 = 4294967295;
 return v11 + v9;
}


// Function: call_strchr_strstr at 0x401628
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x401630
extern void g_402de0;
extern void g_402dec;
extern char g_402e5b;
extern char g_402e76;
extern char g_402e91;
extern char g_402ead;
extern char g_402ec9;
extern char g_402ee5;
extern char g_402f01;
extern char g_402f1e;
extern char g_402f3a;
extern char g_402f56;
extern char g_402f72;
extern char g_402f8d;
extern char g_403146;

int test_standard_library_functions()
{
 unsigned int result; // r0
 unsigned int v14; // r5
 void* fp; // r0
 unsigned int v17; // r1
 unsigned int v18; // r0
 unsigned int *ptr; // r0
 unsigned int v21; // r1
 unsigned int i; // r2
 unsigned int j; // r0
 unsigned int v24; // r0
 unsigned int v7; // r5
 unsigned int v8; // r5
 unsigned int flag1; // r0
 unsigned int v11; // r1
 unsigned int v12; // r1
 unsigned int v0; // [bp-0x44]
 char v1[8]; // [bp-0x40]
 char v2[28]; // [bp-0x38]
 char v3; // [bp-0x1c]

 puts(&g_403146);
 strncpy(v2, "HelloLib", 8);
 printf(&g_402e5b, strlen(&v1));
 printf(&g_402e76, 0);
 printf(&g_402e91, 12);
 printf(&g_402ead, 90);
 result = memcmp(&g_402dec, &g_402de0, 12);
 if (result)
 v7 = 4294967295;
 else
 v7 = result;
 v8 = v7;
 if (1 <= result)
 v8 = 1;
 flag1 = memcmp(&g_402dec, &g_402dec, 12);
 if (flag1)
 v11 = 4294967295;
 else
 v11 = flag1;
 v12 = v11;
 if (1 <= flag1)
 v12 = 1;
 printf(&g_402ec9, v12 + v8);
 printf(&g_402ee5, printf("Value: %d, Name: %s\n", 42, "Test"));
 v14 = 4294967295;
 printf(&g_402f01, (__isoc99_sscanf("123,456", "%d,%d") == 2 ? v0 + *((unsigned int *)&v1) : 4294967295));
 fp = fopen("/etc/passwd", "r");
 v17 = 4294967295;
 if (fp)
 {
 v18 = fileno(fp);
 fclose(fp);
 v17 = (armg_calculate_condition(193, v18, 1, 0) ? 42 : 4294967295);
 }
 printf(&g_402f1e, v17);
 printf(&g_402f3a, param_fread_fwrite("/tmp/binbench_test_tmp"));
 ptr = malloc(40);
 if (ptr)
 {
 v21 = 0;
 i = 0;
 do
 {
 ptr[-1 * i] = v21;
 v21 += 10;
 i -= 1;
 } while (i != 4294967286);
 free(ptr);
 v14 = ptr[9] + ptr[0];
 }
 printf(&g_402f56, v14);
 j = 0;
 do
 {
 *((unsigned int *)&v1[-4 * j]) = 255;
 j -= 1;
 } while (j != 4294967286);
 memset(&v1, 0, 40);
 printf(&g_402f72, *((int *)&v3) + *((unsigned int *)&v1));
 v24 = printf(&g_402f8d, 15);
 return printf(&g_402f8d, 15);
}


// Function: param_linux_syscall at 0x4018e8
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = syscall(5);
 if ((char)armg_calculate_condition(209, v0, 1, 0))
 return -(*(__errno_location()));
 syscall(6);
 return v0;
}


// Function: call_linux_syscall at 0x401930
unsigned int call_linux_syscall()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = syscall(5);
 if (!((char)armg_calculate_condition(209, v4, 1, 0)))
 syscall(6);
 else
 v4 = -(*(__errno_location()));
 return (armg_calculate_condition(193, v4, 1, 0) ? 42 : 4294967295);
}


// Function: param_win32_api at 0x401988
unsigned int param_win32_api()
{
 char v0; // [bp-0x34]

 if (!armg_calculate_condition(209, stat(), 1, 0))
 return (0 < *((int *)&v0) ? 42 : 4294967294);
 return 4294967295;
}


// Function: call_win32_api at 0x4019c0
unsigned int call_win32_api()
{
 char v0; // [bp-0x60]
 char v1; // [bp-0x34]

 if (!armg_calculate_condition(209, stat("/etc/passwd", &v0), 1, 0))
 return (0 < *((int *)&v1) ? 42 : 4294967294);
 return 4294967295;
}


// Function: param_fork_exec at 0x401a04
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // r0
 unsigned int v2; // r0
 unsigned int v3; // cc_dep1
 unsigned int v4; // r1
 unsigned int v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 unsigned int v8; // r0
 unsigned int v0[1]; // [bp-0x14]

 pid = fork();
 if ((char)armg_calculate_condition(66, pid, 0, 0))
 {
 return 4294967295;
 }
 else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 v2 = waitpid(pid, &v0, 0);
 v3 = v2;
 if ((char)armg_calculate_condition(66, v2, 0, 0))
 return 4294967294;
 v4 = v0;
 v5 = v4 & 127;
 v6 = armg_calculate_flag_c(2, v3, 0, 0);
 v7 = armg_calculate_flag_v(2, v3, 0, 0);
 if (!((char)v4 & 127))
 {
 v8 = 255;
 if (!armg_calculate_condition(5, v5, v6, v7))
 goto LABEL_401a4a;
LABEL_401a49:
 v8 &= v4 >> 8;
 }
 else
 {
 v8 = 4294967293;
 if (armg_calculate_condition(5, v5, v6, v7))
 goto LABEL_401a49;
LABEL_401a4a:
 }
 return v8;
 }
 else
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
}


// Function: call_fork_exec at 0x401a84
unsigned int call_fork_exec()
{
 unsigned int v3; // lr
 unsigned int v4; // r4
 unsigned int pid; // r0
 unsigned int v6; // r1
 unsigned int v7; // r0
 unsigned int v8; // cc_dep1
 unsigned int v9; // r0
 unsigned int v10; // cc_dep1
 unsigned int v11; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v0[1][1]; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = v4;
 pid = fork();
 v6 = 4294967295;
 if (!((char)armg_calculate_condition(66, pid, 0, 0)))
 {
 if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 v7 = waitpid(pid, &v0, 0);
 v8 = v7;
 if (!((char)armg_calculate_condition(66, v7, 0, 0)))
 {
 v9 = *(v0);
 v10 = v9 & 127;
 v11 = armg_calculate_flag_c(2, v8, 0, 0);
 v12 = armg_calculate_flag_v(2, v8, 0, 0);
 if (!((char)v9 & 127))
 {
 v6 = 255;
 if (!armg_calculate_condition(5, v10, v11, v12))
 goto LABEL_401aca;
LABEL_401ac9:
 v6 &= v9 >> 8;
 }
 else
 {
 v6 = 4294967293;
 if (armg_calculate_condition(5, v10, v11, v12))
 goto LABEL_401ac9;
LABEL_401aca:
 }
 }
 else
 {
 v6 = 4294967294;
 }
 }
 else
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 }
 return (!v6 ? 42 : 4294967295);
}


// Function: param_pipe_communication at 0x401b10
unsigned int param_pipe_communication()
{
 unsigned int pid; // r0
 unsigned int count; // r5
 char v0; // [bp-0x38]
 char v1; // [bp-0x18], Other Possible Types: unsigned int
 char v2; // [bp-0x14]

 if ((char)armg_calculate_condition(66, pipe(&v1), 0, 0))
 return 4294967295;
 pid = fork();
 if ((char)armg_calculate_condition(66, pid, 0, 0))
 {
 return 4294967294;
 }
 else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 close(*((int *)&v2));
 count = read(v1, &v0, 31);
 v0[count] = 0;
 close(v1);
 wait(0);
 return (0 < count ? 42 : 4294967293);
 }
 else
 {
 close(v1);
 write(*((int *)&v2), "HelloPipe", 9);
 close(*((int *)&v2));
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x401bc8
unsigned int call_pipe_communication()
{
 unsigned int v0; // r0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x401bd8
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

unsigned int param_socket_create()
{
 unsigned int sock; // r0
 unsigned int v6; // r4
 unsigned int v7; // r0
 sockaddr v0; // [bp-0x24]
 unsigned int result; // [bp-0x14]

 sock = socket(2, 1, 0);
 if ((char)armg_calculate_condition(66, sock, 0, 0))
 return 4294967295;
 v6 = sock;
 result = 1;
 if ((char)armg_calculate_condition(209, setsockopt(v6, 1, 2, &result, 4), 1, 0))
 {
 close(v6);
 return 4294967294;
 }
 *((unsigned int *)&v0.sa_data[10]) = 0;
 *((unsigned int *)&v0.sa_data[6]) = 0;
 *((unsigned int *)&v0.sa_data[2]) = 0;
 *((unsigned int *)&v0.sin_family) = 2;
 if ((char)armg_calculate_condition(209, bind(v6, &v0, 16), 1, 0))
 {
 close(v6);
 return 4294967293;
 }
 v7 = listen(v6, 5);
 close(v6);
 return (armg_calculate_condition(66, v7, 0, 0) ? 0xfffffffc : 42);
}


// Function: call_socket_create at 0x401cb0
unsigned int call_socket_create()
{
 unsigned int sock; // r0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x401cc0
int param_shmget_shmat()
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 void* v2; // r0
 void* v3; // r6
 unsigned int len; // r0

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ((char)armg_calculate_condition(66, v0, 0, 0))
 return 4294967295;
 close(v0);
 if ((char)armg_calculate_condition(66, ftok("/tmp/binbench_shm", 42), 0, 0))
 return 4294967295;
 v1 = shmget(42, 1024, 0666);
 if ((char)armg_calculate_condition(66, v1, 0, 0))
 return 4294967294;
 v2 = shmat(v1, 0, 0);
 if (v2 == (void*)0xffffffff)
 return 4294967293;
 v3 = v2;
 memcpy(v2, "SharedMemory", 13);
 len = strlen(v3);
 shmdt(v3);
 shmctl(v1, 0, 0);
 return len;
}


// Function: call_shmget_shmat at 0x401d94
unsigned int call_shmget_shmat()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return (0 < param_shmget_shmat() ? 42 : 4294967295);
}


// Function: param_signal_handling at 0x401db4
extern unsigned int signal_number;
extern unsigned int signal_received;
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char ready;
extern unsigned int atomic_counter;
int __dollar_a_34(unsigned int a0);

unsigned int param_signal_handling(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r5
 unsigned int v4; // r5
 unsigned int v5; // r5
 unsigned int v6; // cc_dep1
 unsigned int v7; // r4
 unsigned int v8; // r4
 unsigned int v9; // r4
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 v1 = signal(10, __dollar_a_34);
 if (v1 == 4294967295)
 {
 if (!((char)armg_calculate_condition(1, v1, 1, 0)))
 goto LABEL_401dd8;
 return 4294967295;
 }
 else
 {
 if (!((char)armg_calculate_condition(1, v1, 1, 0)))
 goto LABEL_401dd8;
 return v1;
 }
LABEL_401dd8:
 v2 = signal(14, __dollar_a_34);
 if (v2 == 4294967295)
 {
 if (!((char)armg_calculate_condition(1, v2, 1, 0)))
 goto LABEL_401df8;
 return 4294967294;
 }
 else
 {
 if (!((char)armg_calculate_condition(1, v2, 1, 0)))
 goto LABEL_401df8;
 return v2;
 }
LABEL_401df8:
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v3 = 1000;
 do
 {
 v4 = v3;
 usleep(1000);
 } while (!signal_received && (v5 = v4 - 1, v3 = v4 - 1, 1 < v4));
 }
 v6 = signal_received;
 if (!signal_received)
 {
 if (!((char)armg_calculate_condition(2, v6, 0, 0)))
 goto LABEL_401e5c;
 return 4294967293;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, v6, 0, 0)))
 goto LABEL_401e5c;
 return signal_received;
 }
LABEL_401e5c:
 if (signal_number != 10)
 return 0xfffffffc;
 signal_received = 0;
 alarm(1);
 if (!signal_received)
 {
 v7 = 2000;
 do
 {
 v8 = v7;
 usleep(1000);
 } while (!signal_received && (v9 = v8 - 1, v7 = v8 - 1, 1 < v8));
 }
 if (!signal_received)
 {
 return 4294967291;
 }
 else if (signal_number == 14)
 {
 signal(10, 0);
 signal(14, 0);
 return 42;
 }
 else
 {
 return 4294967291;
 }
}


// Function: __dollar_a_34 at 0x401f28
extern unsigned int signal_number;
extern unsigned int signal_received;

int __dollar_a_34(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: call_signal_handling at 0x401f50
unsigned int call_signal_handling(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v11; // r0
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]
 char v2; // [bp+0x4]
 char v3; // [bp+0x8]
 char v4; // [bp+0xc]
 char v5; // [bp+0x10]
 char v6; // [bp+0x14]
 char v7; // [bp+0x18]
 char v8; // [bp+0x1c]
 char v9; // [bp+0x20]
 char v10; // [bp+0x24]

 v11 = param_signal_handling(a0, a1, a2, a3, &v1, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3), *((int *)&v4), *((int *)&v5), *((int *)&v6), *((int *)&v7), *((int *)&v8), *((int *)&v9), *((int *)&v10));
 return param_signal_handling(a0, a1, a2, a3, &v1, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3), *((int *)&v4), *((int *)&v5), *((int *)&v6), *((int *)&v7), *((int *)&v8), *((int *)&v9), *((int *)&v10));
}


// Function: test_system_calls at 0x401f60
extern char g_402fcf;
extern char g_402feb;
extern char g_403007;
extern char g_403023;
extern char g_40303f;
extern char g_40305b;
extern char g_403077;
extern char g_40316a;

int test_system_calls()
{
 unsigned int v11; // r0
 unsigned int v12; // r0
 unsigned int v21; // cc_ndep
 unsigned int v22; // r1
 unsigned int v26; // r0
 unsigned int v27; // r1
 unsigned int v28; // r2
 unsigned int v29; // r3
 unsigned int v30; // r0
 unsigned int v13; // r1
 unsigned int pid; // r0
 unsigned int v15; // r1
 unsigned int v16; // r0
 unsigned int v17; // cc_dep1
 unsigned int v18; // r0
 unsigned int v19; // cc_dep1
 unsigned int v20; // cc_dep2
 unsigned int v0[2][1]; // [bp-0x68]
 char v1; // [bp-0x60]
 char v2; // [bp-0x5c]
 char v3; // [bp-0x58]
 char v4; // [bp-0x54]
 char v5; // [bp-0x50]
 char v6; // [bp-0x4c]
 char v7; // [bp-0x48]
 char v8; // [bp-0x44]
 char v9; // [bp-0x40]
 char v10; // [bp-0x3c]

 puts(&g_40316a);
 v11 = syscall(5);
 if (!((char)armg_calculate_condition(209, v11, 1, 0)))
 syscall(6);
 else
 v11 = -(*(__errno_location()));
 printf(&g_402fcf, (armg_calculate_condition(193, v11, 1, 0) ? 42 : 4294967295));
 v12 = stat("/etc/passwd", &v0);
 v13 = (0 < *((int *)&v10) ? 42 : 4294967294);
 if (armg_calculate_condition(209, v12, 1, 0))
 v13 = 4294967295;
 printf(&g_402feb, v13);
 pid = fork();
 v15 = 4294967295;
 if (!((char)armg_calculate_condition(66, pid, 0, 0)))
 {
 if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 v16 = waitpid(pid, &v0, 0);
 v17 = v16;
 if (!((char)armg_calculate_condition(66, v16, 0, 0)))
 {
 v18 = v0[0];
 v19 = v18 & 127;
 v20 = armg_calculate_flag_c(2, v17, 0, 0);
 v21 = armg_calculate_flag_v(2, v17, 0, 0);
 if (!((char)v18 & 127))
 {
 v15 = 255;
 if (!armg_calculate_condition(5, v19, v20, v21))
 goto LABEL_40203a;
LABEL_402039:
 v15 &= v18 >> 8;
 }
 else
 {
 v15 = 4294967293;
 if (armg_calculate_condition(5, v19, v20, v21))
 goto LABEL_402039;
LABEL_40203a:
 }
 }
 else
 {
 v15 = 4294967294;
 }
 }
 else
 {
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 }
 v22 = (!v15 ? 42 : 4294967295);
 printf(&g_403007, (!v15 ? 42 : 4294967295));
 printf(&g_403023, param_pipe_communication());
 printf(&g_40303f, param_socket_create());
 v26 = printf(&g_40305b, (0 < param_shmget_shmat() ? 42 : 4294967295));
 v30 = printf(&g_403077, param_signal_handling(v26, v27, v28, v29, (unsigned int)*(&v0), (unsigned int)*(&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3), *((int *)&v4), *((int *)&v5), *((int *)&v6), *((int *)&v7), *((int *)&v8), *((int *)&v9), *((int *)&v10)));
 return printf(&g_403077, param_signal_handling(v26, v27, v28, v29, (unsigned int)*(&v0), (unsigned int)*(&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3), *((int *)&v4), *((int *)&v5), *((int *)&v6), *((int *)&v7), *((int *)&v8), *((int *)&v9), *((int *)&v10)));
}


// Function: thread_compute at 0x40210c
unsigned int * thread_compute(unsigned int *a0)
{
 unsigned int *ptr; // r0
 unsigned int val;

 ptr = (unsigned int *)malloc(4);
 val = *a0;
 *ptr = val * val;
 return ptr;
}


// Function: param_pthread_create at 0x40212c
unsigned int param_pthread_create(unsigned int a0)
{
 void *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]

 v1 = a0;
 if (pthread_create(&v2, 0, thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, &v0);
 free(v0);
 return *((unsigned int *)v0);
}


// Function: call_pthread_create at 0x402188
unsigned int call_pthread_create()
{
 void *v0; // [bp-0x14], Other Possible Types: char
 unsigned int v1; // [bp-0x10]
 pthread_t v2; // [bp-0xc]
 unsigned int result;

 v1 = 7;
 if (pthread_create(&v2, 0, (void *(*)(void *))thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, &v0);
 result = *((unsigned int *)v0);
 free(v0);
 return result;
}


// Function: thread_sum at 0x4021e8
void* thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v0; // r1
 unsigned int v1; // r2
 unsigned int *p; // r0

 p = ptr;
 p[2] = 0;
 v0 = *(p);
 v1 = p[1];
 if (v1 >= v0)
 p[2] = p[2] + v0 + (v1 - v0) * (v0 + 1) + (((v1 + ~(v0)) * (v1 - v0) >> 32 & 1) * 0x80000000 | (v1 + ~(v0)) * (v1 - v0) >> 1);
 return 0;
}


// Function: param_pthread_join at 0x402240
unsigned int param_pthread_join()
{
 unsigned int v9; // r7
 unsigned int v10; // r7
 unsigned int v11; // r4
 unsigned int v1; // [bp-0x44]
 unsigned int v2[9]; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 pthread_t v7[3]; // [bp-0x24]

 v9 = 0;
 memset(v2, 0, 36);
 v6 = 30;
 v5 = 21;
 v4 = 20;
 v3 = 11;
 v1 = 10;
 v2[0] = 1;
 while (v9 < 3 && !pthread_create(&v7[v9], 0, (void *(*)(void *))thread_sum, (void *)&v2[v9 * 3]))
 {
  v9 += 1;
 }
 if (v9 == 3)
 {
  v10 = 0;
  v11 = 0;
  do
  {
   if (pthread_join(v7[2 - v10], 0))
   {
    return 4294967294;
   }
   v11 += v2[v10 * 3 + 2];
   v10 += 1;
  } while (v10 != 3);
  return v11;
 }
 return 4294967295;
}


// Function: call_pthread_join at 0x402328
unsigned int call_pthread_join()
{
 unsigned int v9; // r7
 unsigned int v10; // r7
 unsigned int v11; // r4
 unsigned int v1; // [bp-0x44]
 unsigned int v2[9]; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x30]
 unsigned int v6; // [bp-0x2c]
 pthread_t v7[3]; // [bp-0x24]

 v9 = 0;
 memset(v2, 0, 36);
 v6 = 30;
 v5 = 21;
 v4 = 20;
 v3 = 11;
 v1 = 10;
 v2[0] = 1;
 while (v9 < 3 && !pthread_create(&v7[v9], 0, (void *(*)(void *))thread_sum, (void *)&v2[v9 * 3]))
 {
  v9 += 1;
 }
 if (v9 == 3)
 {
  v10 = 0;
  v11 = 0;
  do
  {
   if (pthread_join(v7[2 - v10], 0))
   {
    return 4294967294;
   }
   v11 += v2[v10 * 3 + 2];
   v10 += 1;
  } while (v10 != 3);
  return v11;
 }
 return 4294967295;
}


// Function: thread_increment at 0x402410
typedef struct { unsigned int __data; } pthread_mutex_t;
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

void* thread_increment(void *arg)
{
 unsigned int v0; // r5
 unsigned int result; // r5
 unsigned int v2; // r5
 unsigned int *ptr;

 ptr = (unsigned int *)arg;
 v0 = *ptr;
 if (v0 < 1)
 return 0;
 do
 {
 result = v0;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v2 = result - 1;
 v0 = v2;
 } while (result != 1);
 return 0;
}


// Function: param_mutex_lock at 0x402478
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r9
 pthread_t *ptr; // r0
 pthread_t v11; // r4
 unsigned int result; // r5
 pthread_t v13; // r4
 unsigned int v14; // r5
 pthread_t *v_ptr; // r8
 pthread_t *v4; // r5
 unsigned int v5; // r4
 unsigned int flag1; // r4
 pthread_t v7; // r5
 pthread_t v8; // r5
 unsigned int v9; // r4
 unsigned int v10; // r5
 unsigned int v0; // [bp-0x24]
 unsigned int idx; // helper

 v1 = a0;
 v0 = a1;
 ptr = (pthread_t *)malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 shared_counter = 0;
 if (v1 >= 1)
 {
 v4 = ptr;
 v5 = v1;
 idx = 0;
 do
 {
 flag1 = v5;
 if (pthread_create(&ptr[idx], 0, (void *(*)(void *))thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 v9 = flag1 - 1;
 idx += 1;
 v5 = flag1 - 1;
 }
 while (flag1 != 1);
 }
 if (v1 >= 1)
 {
 v10 = v1;
 idx = 0;
 do
 {
 result = v10;
 pthread_join(ptr[idx], 0);
 v14 = result - 1;
 v10 = v14;
 idx += 1;
 } while (result != 1);
 }
 free(ptr);
 return (shared_counter == v0 * v1 ? 42 : 4294967293);
}


// Function: call_mutex_lock at 0x402568
unsigned int call_mutex_lock()
{
 unsigned int v0; // r0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402580
typedef struct { unsigned int __data; } pthread_cond_t;
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char i;

void* consumer_thread(void *arg)
{
 pthread_mutex_lock(&cond_mutex);
 if (!i)
 {
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (i != 1);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = (unsigned int *)malloc(4);
 *ptr = (data ? 42 : 0);
 return ptr;
}


// Function: producer_thread at 0x402618
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern char data;
extern char ready;

void* producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x402680
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
 void *v0; // [bp-0x14], Other Possible Types: char
 pthread_t v1; // [bp-0x10], Other Possible Types: unsigned int
 pthread_t v2; // [bp-0xc]
 unsigned int dummy;
 unsigned int result;

 ready = 0;
 data = 0;
 if (pthread_create(&v1, 0, (void *(*)(void *))consumer_thread, &dummy))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, 0, (void *(*)(void *))producer_thread, &dummy))
 {
 pthread_cancel(v1);
 return 4294967294;
 }
 else
 {
 pthread_join(v1, &v0);
 pthread_join(v2, 0);
 result = *((unsigned int *)v0);
 free(v0);
 return result;
 }
}


// Function: call_condition_variable at 0x40273c
unsigned int call_condition_variable()
{
 unsigned int v0; // r0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x40274c
extern unsigned int atomic_counter;

void* thread_atomic_increment(void *arg)
{
 unsigned int i; // r7
 char v0; // [bp-0x1c]
 unsigned int limit;
 unsigned int *ptr;

 ptr = (unsigned int *)arg;
 if (*ptr < 1)
 return 0;
 limit = *ptr;
 i = 0;
 do
 {
 __atomic_fetch_add_4(&atomic_counter, 1, 5);
 __atomic_compare_exchange_4(&atomic_counter, &v0, i + 1000, 5, 5, i);
 i += 1;
 } while (i != limit);
 return 0;
}


// Function: thread_atomic_load_store at 0x4027c0
extern unsigned int atomic_counter;

void* thread_atomic_load_store(void *arg)
{
 __atomic_store_4(&atomic_counter, __atomic_load_4(&atomic_counter, 5) + 100, 5);
 return 0;
}


// Function: param_atomic_ops at 0x4027f8
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r6
 pthread_t *ptr; // r0
 unsigned int flag1; // r6
 pthread_t v13; // r4
 unsigned int v14; // r6
 unsigned int v15; // r0
 pthread_t *v_ptr; // r8
 unsigned int v5; // r5
 pthread_t *v6; // r4
 pthread_t v7; // r4
 unsigned int result; // r5
 pthread_t v9; // r4
 unsigned int v10; // r5
 pthread_t *v11; // r4
 pthread_t v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int idx; // helper

 v2 = a0;
 v1 = a1;
 ptr = (pthread_t *)malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 return 4294967295;
 __atomic_store_4(&atomic_counter, 0, 5);
 if (v2 >= 1)
 {
 v5 = v2;
 v6 = ptr;
 idx = 0;
 do
 {
 result = v5;
 if (pthread_create(&ptr[idx], 0, (void *(*)(void *))thread_atomic_increment, &v1))
 {
 free(ptr);
 return 4294967294;
 }
 v10 = result - 1;
 v5 = result - 1;
 idx += 1;
 }
 while (result != 1);
 }
 if (!pthread_create(&v0, 0, (void *(*)(void *))thread_atomic_load_store, 0))
 pthread_join(v0, 0);
 if (v2 >= 1)
 {
 idx = 0;
 do
 {
 flag1 = v2;
 pthread_join(ptr[idx], 0);
 v14 = flag1 - 1;
 v2 = v14;
 idx += 1;
 } while (flag1 != 1);
 }
 v15 = __atomic_load_4(&atomic_counter, 5);
 free(ptr);
 return (0 < v15 ? 42 : 4294967293);
}


// Function: call_atomic_ops at 0x40291c
unsigned int call_atomic_ops()
{
 unsigned int v0; // r0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x402934
void* thread_tls_test(void *arg)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = v4;
 v0 = v5;
 __aeabi_read_tp(); /* do not return */
 return 0;
}


// Function: sub_402944 at 0x402944
unsigned int * sub_402944(char *a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r4
 unsigned int v1; // r5
 unsigned int *ptr; // r0

 v0 = *((int *)&a0[a2]);
 v1 = v0 + 50;
 *((unsigned int *)&a0[a2]) = v1;
 strncpy(a0 + 12, a1, 31);
 ptr = (unsigned int *)malloc(8);
 ptr[0] = v0;
 ptr[1] = v1;
 return ptr;
}


// Function: param_thread_local_storage at 0x40297c
unsigned int param_thread_local_storage(unsigned int a0)
{
 unsigned int i; // r10
 unsigned int v4; // r4
 unsigned int index; // r4
 char *mem_ptr; // r0
 unsigned int v18; // r5
 pthread_t *v19; // r4
 pthread_t *v20; // r4
 pthread_t *v21; // r4
 unsigned int k; // r5
 unsigned int *thread_ptr; // r8
 unsigned int v23; // r4
 unsigned int v24; // r7
 pthread_t **v25; // r6
 pthread_t **v26; // r6
 unsigned int result; // r10
 unsigned int *v28; // r5
 pthread_t **v29; // r6
 unsigned int v30; // r10
 pthread_t **p; // r11
 pthread_t *thread_ids; // r11
 unsigned int v7; // cc_dep1
 unsigned int v8; // cc_dep2
 unsigned int v9; // cc_ndep
 unsigned int v10; // cc_dep1
 unsigned int v11; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v0; // [bp-0x30]
 char *v1; // [bp-0x2c]
 unsigned long alloc_ptr; // [bp-0x28]

 i = a0;
 v4 = a0 * 4;
 mem_ptr = (char *)malloc(v4);
 p = (pthread_t **)malloc(v4);
 thread_ids = (pthread_t *)malloc(v4);
 if (!mem_ptr || !p || !thread_ids)
 {
 free(mem_ptr);
 free(p);
 free(thread_ids);
 return 4294967295;
 }
 if (i >= 1)
 {
 index = 0;
 do
 {
 mem_ptr = (char *)malloc(16);
 p[index] = (pthread_t *)mem_ptr;
 snprintf(mem_ptr, 16, "Thread-%d", index);
 index += 1;
 } while (i != index);
 }
 if (i >= 1)
 {
 v18 = 0;
 v19 = (pthread_t *)mem_ptr;
 do
 {
  v20 = v19;
  if (pthread_create(&thread_ids[v18], 0, (void *(*)(void *))thread_tls_test, p[v18]))
  {
  k = 0;
  do
  {
  free(p[k]);
  k += 1;
  }
  while (v18 + 1 != k);
  free(p);
  free(thread_ids);
  free(mem_ptr);
  return 4294967294;
  }
  v21 = v20 + 1;
  v18 += 1;
  v19 = v20 + 1;
  }
 while (i != v18);
  }
 v1 = mem_ptr;
 v0 = i;
 if (i >= 1)
 {
 v23 = 0;
 v24 = 0;
 v25 = p;
 do
 {
  v26 = v25;
  result = i;
  v28 = p[v23];
  pthread_join(thread_ids[v23], 0);
  v29 = v26 + 1;
  v23 += 1;
  v24 += v28[0];
  v30 = result - 1;
  i = v30;
  v25 = v29;
 }
 while (result != 1);
 }
 else
 {
 v24 = 0;
 v23 = 0;
 }
 free(p);
 free(thread_ids);
 free(v1);
 return (!(v24 ^ v0 * 100) && !(v23 ^ v0 * 150) ? 4294967293 : 42);
}


// Function: call_thread_local_storage at 0x402b18
unsigned int call_thread_local_storage()
{
 unsigned int count; // r0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x402b2c
extern char g_40309d;
extern char g_4030b9;
extern char g_4030d6;
extern char g_4030f2;
extern char g_40310e;
extern char g_40312a;
extern char g_403185;

int test_thread_concurrency()
{
 char *v9; // r5
 unsigned int v10; // r7
 unsigned int v11; // r6
 unsigned int v12; // r7
 unsigned int v13; // r5
 unsigned int v17; // r0
 unsigned int *ptr; // [bp-0x4c], Other Possible Types: char
 char v1[36]; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int v3[9]; // [bp-0x40]
 unsigned int v4; // [bp-0x3c]
 unsigned int v5; // [bp-0x38]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 pthread_t v8[3]; // [bp-0x24]

 puts(&g_403185);
 v9 = &v1;
 v10 = 0;
 v11 = 4294967295;
 if (!pthread_create(&v8[0], 0, (void *(*)(void *))thread_compute, &v10))
 {
 pthread_join(v8[0], &ptr);
 v11 = *ptr;
 free(ptr);
 }
 printf(&g_40309d, v11);
 memset(&v1, 0, 36);
 v7 = 30;
 v6 = 21;
 v5 = 20;
 v4 = 11;
 v2 = 10;
 *((unsigned int *)&v1) = 1;
 do
 {
 if (pthread_create(&v8[v10], 0, (void *(*)(void *))thread_sum, (void *)v9))
 {
 v13 = 4294967295;
 goto LABEL_402c60;
 }
 v9 += 12;
 v10 += 1;
 }
 while (v10 != 3);
 v12 = 0;
 v13 = 0;
 do
 {
 if (pthread_join(v8[v12], 0))
 {
 v13 = 4294967294;
 break;
 }
 v13 += v3[v12 * 3 + 2];
 v12 += 1;
 }
 while (v12 != 3);
LABEL_402c60:
 printf(&g_4030b9, v13);
 printf(&g_4030d6, param_mutex_lock(4, 1000));
 printf(&g_4030f2, param_condition_variable());
 printf(&g_40310e, param_atomic_ops(4, 500));
 v17 = printf(&g_40312a, param_thread_local_storage(4));
 return printf(&g_40312a, param_thread_local_storage(4));
}


// Function: main at 0x402d04
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


