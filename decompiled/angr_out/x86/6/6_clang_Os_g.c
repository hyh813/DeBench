// Angr Decompilation of 6_clang_Os_g
// Platform: X86

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *g_405ff4;

int _init()
{
    if (g_405ff4)
        g_405ff4();
    frame_dummy();
    return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
    unsigned int ptr[3];  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = ptr[1];
    goto ptr[2];
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0()
{
    void* v1;  // ebx

    goto (int)v1[16];
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
}


// Function: _start at 0x4013f0
int _start()
{
    unsigned int v4;  // eax
    unsigned int v5;  // edx
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp+0x0]
    unsigned int v2;  // [bp+0x0]
    unsigned int v3;  // [bp+0x4]

    v1 = v4;
    v0 = v5;
    __libc_start_main(main, v2, &v3, 0, 0); /* do not return */
}


// Function: sub_40141b at 0x40141b
void sub_40141b()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4199451()
}


// Function: sub_40141c at 0x40141c
void sub_40141c()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x401420
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_401424 at 0x401424
void sub_401424()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401430
unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[4913] + 3;
}


// Function: sub_401463 at 0x401463
void sub_401463()
{
}


// Function: sub_401469 at 0x401469
void sub_401469()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401470
typedef struct struct_0 {
    char padding_0[19335];
    struct struct_1 *field_4b87;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
    struct_0 *v2;  // edx
    struct_0 *v3;  // edx
    unsigned int v4;  // ebx
    unsigned int v0;  // [bp-0x8]

    __x86.get_pc_thunk.dx();
    v3 = (char *)&v2->field_4b87 + 3;
    v0 = v4;
    if (!(&v3->padding_0[252] - &v3->padding_0[252] >> 31) + (&v3->padding_0[252] - &v3->padding_0[252] >> 2) >> 1)
    {
        return (&v3->padding_0[252] - &v3->padding_0[252] >> 31) + (&v3->padding_0[252] - &v3->padding_0[252] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[4]))
    {
        return (*((int *)&v3->padding_0[4]))(&v3->padding_0[252], (&v3->padding_0[252] - &v3->padding_0[252] >> 31) + (&v3->padding_0[252] - &v3->padding_0[252] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[252] - &v3->padding_0[252] >> 31) + (&v3->padding_0[252] - &v3->padding_0[252] >> 2) >> 1;
    }
}


// Function: sub_4014b7 at 0x4014b7
void sub_4014b7()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4014c0
typedef struct struct_0 {
    char padding_0[19235];
    unsigned int field_4b23;
    char padding_4b27[260];
    unsigned int field_4c2b;
    char field_4c2f;
    char padding_4c30[3];
    unsigned int field_4c33;
} struct_0;

unsigned int * __do_global_dtors_aux()
{
    unsigned int *v5;  // eax
    struct_0 *v6;  // edi
    struct_0 *ptr;  // edi
    unsigned int v8;  // esi
    unsigned int v9;  // ebx
    struct_0 *v10;  // esi
    unsigned int v11;  // eax
    unsigned int i;  // ebx
    unsigned int v13;  // eax
    unsigned int *v14;  // eax
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    char v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v5 = __x86.get_pc_thunk.di(*((int *)&v2), &v3);
    ptr = &v6->padding_4b27[11];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[252])
        return v5;
    if (*((int *)&ptr->padding_0[16]))
        sub_4013e0(*((int *)&ptr->padding_0[248]));
    v10 = &ptr->padding_0[236];
    v11 = *((int *)&ptr->padding_0[0x100]);
    i = (&ptr->padding_0[232] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[0x100]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[0x100]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[0x100]);
        } while (*((int *)&ptr->padding_0[0x100]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[252] = 1;
    return v14;
}


// Function: sub_40154a at 0x40154a
void sub_40154a()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401550
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x401559
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x40155d
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: sub_401561 at 0x401561
int sub_401561()
{
    param_strcpy();
    return;
}


// Function: param_strcpy at 0x401564
int param_strcpy(char *a0, char *a1)
{
    strcpy(a0, a1);
    return strlen(a0);
}


// Function: call_strcpy at 0x401597
int call_strcpy()
{
    char v0[8];  // [bp-0x24]
    char v1[24];  // [bp-0x1c]

    strncpy(v1, "HelloLib", 8);
    return strlen(&v0);
}


// Function: param_strcmp at 0x4015c9
unsigned int param_strcmp(char *a0, char *a1)
{
    unsigned int v1;  // ebx
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    v2 = strcmp(a0, a1);
    if (v2 > 0)
        return 1;
    return -(v2);
}


// Function: call_strcmp at 0x401604
unsigned int call_strcmp()
{
    return 0;
}


// Function: param_strlen at 0x401607
int param_strlen(char *a0)
{
    return strlen(a0);
}


// Function: call_strlen at 0x401628
unsigned int call_strlen()
{
    return 12;
}


// Function: param_memcpy at 0x40162e
int param_memcpy(void* a0, void* a1, unsigned int n)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v1;
    memcpy(a0, a1, n);
    return n;
}


// Function: call_memcpy at 0x40165d
unsigned int call_memcpy()
{
    return 90;
}


// Function: param_memcmp at 0x401663
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v1;  // ebx
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    v2 = memcmp(a0, a1, a2);
    if (v2 > 0)
        return 1;
    return -(v2);
}


// Function: call_memcmp at 0x4016a2
extern void g_4033cc;
extern void g_4033d8;

int call_memcmp()
{
    unsigned int v4;  // ebx
    unsigned int v5;  // edi
    unsigned int v6;  // esi
    unsigned int v7;  // esi
    unsigned int v8;  // eax
    unsigned int v9;  // ecx
    unsigned int v10;  // eax
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = memcmp(&g_4033d8, &g_4033cc, 12);
    v8 = memcmp(&g_4033d8, &g_4033d8, 12);
    v9 = -(v8);
    if ((char)_ccall(15, 15, v8, 0, 0))
        v9 = 1;
    v10 = -(v7);
    if ((char)_ccall(15, 15, v7, 0, 0))
        v10 = 1;
    return v10 + v9;
}


// Function: param_printf at 0x40170d
int param_printf(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]

    v1 = a1;
    v0 = a0;
    return printf("Value: %d, Name: %s\n");
}


// Function: call_printf at 0x401739
int call_printf()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]

    v1 = "Test";
    v0 = 42;
    return printf("Value: %d, Name: %s\n");
}


// Function: param_scanf at 0x401766
unsigned int param_scanf(char *a0)
{
    unsigned int v7;  // ebx
    unsigned int v8;  // edi
    unsigned int v9;  // esi
    char *v0;  // [bp-0x24]
    char *v1;  // [bp-0x20]
    char v2;  // [bp-0x14], Other Possible Types: unsigned int
    char v3;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0x8]
    unsigned int v6;  // [bp-0x4]

    v6 = v7;
    v5 = v8;
    v4 = v9;
    v1 = &v2;
    v0 = &v3;
    if (__isoc99_sscanf(a0, "%d,%d") != 2)
        return 4294967295;
    return v2 + v3;
}


// Function: call_scanf at 0x4017ab
unsigned int call_scanf()
{
    unsigned int v8;  // ebx
    unsigned int v9;  // edi
    unsigned int v10;  // esi
    char *v0;  // [bp-0x24]
    char *v1;  // [bp-0x20]
    char v2;  // [bp-0x14], Other Possible Types: unsigned int
    char v3;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0x8]
    unsigned int v6;  // [bp-0x4]

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v1 = &v2;
    v0 = &v3;
    if (__isoc99_sscanf("123,456", "%d,%d") != 2)
        return 4294967295;
    return v2 + v3;
}


// Function: param_fopen_fclose at 0x4017f3
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose(char *a0)
{
    FILE *fp;  // eax
    unsigned int v1;  // edi

    fp = fopen(a0, "r");
    if (!fp)
        return 4294967295;
    v1 = fileno(fp);
    fclose(fp);
    return v1;
}


// Function: call_fopen_fclose at 0x401841
unsigned int call_fopen_fclose()
{
    return param_fopen_fclose("/etc/passwd") >> 31 | 42;
}


// Function: param_fread_fwrite at 0x40186a
unsigned int param_fread_fwrite(char *a0)
{
    void* fp;  // eax
    void* v2;  // esi
    unsigned int count;  // eax
    char v0;  // [bp-0x30]

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
    return (!bcmp(&v0, "BinBench Test Data", 19) ? 42 : 4294967293);
}


// Function: call_fread_fwrite at 0x40193c
unsigned int call_fread_fwrite()
{
    return param_fread_fwrite("/tmp/binbench_test.tmp");
}


// Function: param_malloc_free at 0x40195f
unsigned int param_malloc_free(unsigned int i)
{
    unsigned int *ptr;  // eax
    unsigned int v1;  // ecx
    unsigned int idx;  // edx
    unsigned int v3;  // esi

    ptr = malloc(i * 4);
    if (!ptr)
        return 4294967295;
    if (i)
    {
        v1 = 0;
        idx = 0;
        do
        {
            ptr[idx] = v1;
            idx += 1;
            v1 += 10;
        } while (i != idx);
        v3 = *(ptr);
    }
    free(ptr);
    return v3 + ptr[1 + i];
}


// Function: call_malloc_free at 0x4019b9
unsigned int call_malloc_free()
{
    return param_malloc_free(10);
}


// Function: param_memset at 0x4019da
unsigned int param_memset(void* a0, unsigned int n)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // eax

    memset(a0, 0, n);
    if (!n)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v1 += *((char *)a0 + v0);
        v0 += 1;
    } while (n != v0);
    return v1;
}


// Function: call_memset at 0x401a1b
unsigned int call_memset()
{
    return 0;
}


// Function: param_strchr_strstr at 0x401a1e
int param_strchr_strstr(char *a0, char a1, char *a2)
{
    unsigned int ptr;  // eax
    unsigned int ptr;  // eax

    ptr = strchr(a0, a1);
    ptr = strstr(a0, a2);
    return (-(ptr < 1) | ptr - a0) + (-(ptr < 1) | ptr - a0);
}


// Function: call_strchr_strstr at 0x401a78
unsigned int call_strchr_strstr()
{
    return 15;
}


// Function: test_standard_library_functions at 0x401a7e
extern char g_403074;
extern char g_40308f;
extern char g_4030aa;
extern char g_4030c6;
extern char g_4030e2;
extern char g_4030fe;
extern char g_40311a;
extern char g_403137;
extern char g_403153;
extern char g_40316f;
extern char g_40318b;
extern char g_4031a6;
extern char g_40336c;

int test_standard_library_functions()
{
    char *v0;  // [bp-0x44], Other Possible Types: unsigned int
    char *v1;  // [bp-0x40]
    char v2;  // [bp-0x34]
    char v3[8];  // [bp-0x30]
    char v4[24];  // [bp-0x28]

    puts(&g_40336c);
    strncpy(v4, "HelloLib", 8);
    strlen(&v3);
    printf(&g_403074);
    printf(&g_40308f);
    printf(&g_4030aa);
    printf(&g_4030c6);
    call_memcmp();
    printf(&g_4030e2);
    v0 = "Test";
    printf("Value: %d, Name: %s\n");
    printf(&g_4030fe);
    v1 = &v2;
    v0 = &v3[0];
    printf(&g_40311a);
    param_fopen_fclose("/etc/passwd");
    printf(&g_403137);
    param_fread_fwrite("/tmp/binbench_test.tmp");
    printf(&g_403153);
    param_malloc_free(10);
    printf(&g_40316f);
    printf(&g_40318b);
    return printf(&g_4031a6);
}


// Function: param_linux_syscall at 0x401c2f
unsigned int param_linux_syscall(unsigned int a0)
{
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    unsigned int v0;  // [bp-0x18]
    unsigned int result;  // [bp-0x14]
    unsigned int v2;  // [bp-0xc]

    v2 = v3;
    result = 0;
    v0 = a0;
    v4 = syscall(5);
    if (v4 < 0)
        return -(*(__errno_location()));
    v0 = v4;
    syscall(6);
    return v4;
}


// Function: call_linux_syscall at 0x401c78
unsigned int call_linux_syscall()
{
    return param_linux_syscall("/etc/passwd") >> 31 | 42;
}


// Function: param_win32_api at 0x401ca1
unsigned int param_win32_api(unsigned int a0)
{
    unsigned int v4;  // ebx
    unsigned int v5;  // esi
    char v0;  // [bp-0x64]
    char v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = v5;
    if (stat(a0, &v0) < 0)
        return 4294967295;
    return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: call_win32_api at 0x401ce7
unsigned int call_win32_api()
{
    unsigned int v5;  // ebx
    unsigned int v6;  // esi
    char v0;  // [bp-0x64]
    char v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v5;
    v2 = v6;
    if (stat("/etc/passwd", &v0) < 0)
        return 4294967295;
    return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: param_fork_exec at 0x401d30
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
    unsigned int pid;  // eax
    unsigned int result;  // [bp-0x10]
    unsigned int v1[1];  // [bp-0x8]

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


// Function: call_fork_exec at 0x401d9f
unsigned int call_fork_exec()
{
    return -(0 < param_fork_exec("/bin/true", 0)) | 42;
}


// Function: param_pipe_communication at 0x401dcf
unsigned int param_pipe_communication()
{
    unsigned int pid;  // eax
    unsigned int count;  // eax
    char v0;  // [bp-0x30], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x2c]
    char v2;  // [bp-0x28]

    if (pipe(&v0) < 0)
        return 4294967295;
    pid = fork();
    if (pid < 0)
    {
        return 4294967294;
    }
    else if (pid)
    {
        close(v1);
        count = read(v0, &v2, 31);
        (&v2)[count] = 0;
        close(v0);
        wait(NULL);
        return ((char)_ccall(15, 15, count, 0, 0) ? 42 : 4294967293);
    }
    else
    {
        close(v0);
        write(v1, "HelloPipe", 9);
        close(v1);
        _exit(0); /* do not return */
    }
}


// Function: call_pipe_communication at 0x401ea5
unsigned int call_pipe_communication()
{
    return param_pipe_communication();
}


// Function: param_socket_create at 0x401ebf
typedef struct sockaddr {
    unsigned short sin_family;
    char sa_data[14];
} sockaddr;

unsigned int param_socket_create()
{
    unsigned int sock;  // eax
    unsigned int v7;  // esi
    unsigned int v8;  // eax
    unsigned int result;  // [bp-0x20]
    sockaddr v1;  // [bp-0x1c]

    sock = socket(2, 1, 0);
    if (sock < 0)
        return 4294967295;
    v7 = sock;
    result = 1;
    if (setsockopt(v7, 1, 2, &result, 4) < 0)
    {
        close(v7);
        return 4294967294;
    }
    *((unsigned int *)&v1.sa_data[10]) = 0;
    *((unsigned int *)&v1.sa_data[6]) = 0;
    *((unsigned int *)&v1.sin_family) = 2;
    *((unsigned int *)&v1.sa_data[2]) = 0;
    if (bind(v7, &v1, 16) < 0)
    {
        close(v7);
        return 4294967293;
    }
    v8 = listen(v7, 5);
    close(v7);
    return (v8 < 0 ? 0xfffffffc : 42);
}


// Function: call_socket_create at 0x401f8c
unsigned int call_socket_create()
{
    return param_socket_create();
}


// Function: param_shmget_shmat at 0x401fa6
typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char field_c;
} struct_0;

int param_shmget_shmat()
{
    unsigned int v2;  // eax
    unsigned int v3;  // esi
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    struct_0 *ptr;  // eax
    unsigned int len;  // [bp-0x14]

    v2 = open("/tmp/binbench_shm", 66, 438);
    v3 = 4294967295;
    if (v2 >= 0)
    {
        close(v2);
        v4 = ftok("/tmp/binbench_shm", 42);
        if (v4 >= 0)
        {
            v5 = shmget(v4, 0x1000, 950);
            if (v5 >= 0)
            {
                ptr = shmat(v5, 0, 0);
                if (ptr != 0xffffffff)
                {
                    ptr->field_c = 0;
                    ptr->field_8 = 2037542765;
                    ptr->field_4 = 1699570789;
                    ptr->field_0 = 1918986323;
                    len = strlen(ptr);
                    shmdt(ptr);
                    shmctl(v5, 0, 0);
                    return len;
                }
                v3 = 4294967293;
            }
            else
            {
                v3 = 4294967294;
            }
        }
    }
    return v3;
}


// Function: call_shmget_shmat at 0x40208a
unsigned int call_shmget_shmat()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = v2;
    return (param_shmget_shmat() <= 0 ? 4294967295 : 42);
}


// Function: param_signal_handling at 0x4020b1
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling()
{
    unsigned int v1;  // esi
    unsigned int v2;  // esi
    unsigned int v3;  // esi
    unsigned int v4;  // esi
    unsigned int v5;  // esi
    unsigned int v6;  // esi

    if (signal(10, signal_handler) == 4294967295)
    {
        return 4294967295;
    }
    else if (signal(14, signal_handler) != 4294967295)
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
                signal(10, NULL);
                signal(14, NULL);
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


// Function: signal_handler at 0x4021fa
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int signal_number;
extern unsigned int signal_received;

int signal_handler(unsigned int a0)
{
    signal_received = 1;
    signal_number = a0;
    return &_GLOBAL_OFFSET_TABLE_;
}


// Function: call_signal_handling at 0x40221b
unsigned int call_signal_handling()
{
    return param_signal_handling();
}


// Function: test_system_calls at 0x402235
extern char g_4031f5;
extern char g_403211;
extern char g_40322d;
extern char g_403249;
extern char g_403265;
extern char g_403281;
extern char g_40329d;
extern char g_403390;

int test_system_calls()
{
    unsigned int v3;  // eax
    char v0;  // [bp-0x6c]

    puts(&g_403390);
    param_linux_syscall("/etc/passwd");
    printf(&g_4031f5);
    v3 = stat("/etc/passwd", &v0);
    printf(&g_403211);
    param_fork_exec("/bin/true", 0);
    printf(&g_40322d);
    param_pipe_communication();
    printf(&g_403249);
    param_socket_create();
    printf(&g_403265);
    printf(&g_403281);
    param_signal_handling();
    return printf(&g_40329d);
}


// Function: thread_compute at 0x40234e
unsigned int * thread_compute(unsigned int *a0)
{
    unsigned int *ptr;  // eax

    ptr = malloc(4);
    *(ptr) = *(a0) * *(a0);
    return ptr;
}


// Function: param_pthread_create at 0x40237a
unsigned int param_pthread_create(unsigned int a0)
{
    char v0;  // [bp-0x14], Other Possible Types: unsigned int
    unsigned int *v1;  // [bp-0x10], Other Possible Types: char
    unsigned int v2;  // [bp-0xc]

    v2 = a0;
    if (!pthread_create(&v0, 0, thread_compute, &v2))
    {
        pthread_join(v0, &v1);
        free(v1);
        return *(v1);
    }
    return 4294967295;
}


// Function: call_pthread_create at 0x4023e1
unsigned int call_pthread_create()
{
    return param_pthread_create(7);
}


// Function: thread_sum at 0x402402
unsigned int thread_sum(unsigned int *ptr)
{
    unsigned int v0;  // esi
    unsigned int v1;  // edi

    ptr[2] = 0;
    v0 = *(ptr);
    v1 = ptr[1] - v0;
    if (ptr[1] >= v0)
        ptr[2] = v1 * (v0 + 1) + v0 + (unsigned int)(((ptr[1] + ~(v0)) * v1 >> 32 CONCAT (ptr[1] + ~(v0)) * v1) * 0x80000000 >> 32);
    return 0;
}


// Function: param_pthread_join at 0x40243a
unsigned int param_pthread_join()
{
    unsigned int v12;  // edi
    char cur[4];  // edi
    unsigned int v14;  // ebp
    unsigned int v15;  // esi
    unsigned int v0;  // [bp-0x44]
    unsigned long v1;  // [bp-0x40]
    unsigned int flag3;  // [bp-0x34]
    unsigned int v3;  // [bp-0x30]
    unsigned int flag2;  // [bp-0x2c]
    unsigned int v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x24]
    unsigned int flag1;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]
    unsigned int v9;  // [bp-0x18]
    unsigned int result;  // [bp-0x14]

    v12 = 0;
    result = 0;
    flag1 = 0;
    flag2 = 0;
    flag3 = 1;
    v3 = 10;
    v5 = 11;
    v6 = 20;
    v8 = 21;
    v9 = 30;
    v0 = thread_sum;
    while (!pthread_create((char *)&v1 + v12, 0, v0, &flag3))
    {
        v12 += 4;
        if (v12 == 12)
        {
            cur = &flag2;
            v14 = 0;
            v15 = 0;
            while (!pthread_join((&v1)[v14], 0))
            {
                v15 += *(cur);
                v14 += 1;
                cur += 3;
                if (v14 == 3)
                    return v15;
            }
            return 4294967294;
        }
    }
    return 4294967295;
}


// Function: call_pthread_join at 0x4024f1
unsigned int call_pthread_join()
{
    return param_pthread_join();
}


// Function: thread_increment at 0x40250b
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int *ptr)
{
    unsigned int v0;  // esi
    unsigned int i;  // esi
    unsigned int v2;  // esi

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


// Function: param_mutex_lock at 0x40255b
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
    unsigned int i;  // edi
    unsigned int *ptr;  // eax
    unsigned int *v3;  // ebp
    unsigned int *v4;  // esi
    unsigned int v5;  // edi
    unsigned int v6;  // edi
    unsigned int v7;  // esi
    unsigned int *ptr;  // [bp-0x14]

    i = a0;
    ptr = malloc(i * 4);
    if (!ptr)
        return 4294967295;
    v3 = ptr;
    shared_counter = 0;
    if (i > 0)
    {
        v4 = v3;
        ptr = v4;
        do
        {
            v5 = i;
            if (pthread_create(v4, 0, thread_increment, &a1))
            {
                free(ptr);
                return 4294967294;
            }
        } while ((v4 += 4, v6 = v5 - 1, i = v5 - 1, v5 != 1));
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


// Function: call_mutex_lock at 0x402631
unsigned int call_mutex_lock()
{
    return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402655
extern unsigned int cond;
extern unsigned int cond_mutex;
extern char data;
extern char i;

unsigned int * consumer_thread()
{
    unsigned int *ptr;  // eax

    pthread_mutex_lock(&cond_mutex);
    if (!i)
    {
        do
        {
            pthread_cond_wait(&cond, &cond_mutex);
        } while (i != 1);
    }
    pthread_mutex_unlock();
    ptr = malloc(4);
    *(ptr) = (!data ? 0 : 42);
    return ptr;
}


// Function: producer_thread at 0x4026c7
extern unsigned int cond;
extern unsigned int cond_mutex;
extern char data;
extern char ready;

unsigned int producer_thread()
{
    sleep(1);
    pthread_mutex_lock(&cond_mutex);
    data = 1;
    ready = 1;
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&cond_mutex);
    return 0;
}


// Function: param_condition_variable at 0x40271c
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
    char v0;  // [bp-0x14], Other Possible Types: unsigned int
    char v1;  // [bp-0x10], Other Possible Types: unsigned int
    char v2;  // [bp-0xc]

    ready = 0;
    data = 0;
    if (pthread_create(&v0, 0, consumer_thread, 0))
    {
        return 4294967295;
    }
    else if (pthread_create(&v1, 0, producer_thread, 0))
    {
        pthread_cancel(v0);
        return 4294967294;
    }
    else
    {
        pthread_join(v0, &v2);
        pthread_join(v1, 0);
        free(*((int *)&v2));
        return *((int *)*((int *)&v2));
    }
}


// Function: call_condition_variable at 0x4027c6
unsigned int call_condition_variable()
{
    return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4027e0
extern char atomic_counter;

unsigned int thread_atomic_increment(unsigned int *a0)
{
    unsigned int i;  // ecx

    if (*(a0) <= 0)
        return 0;
    i = 0;
    do
    {
        atomic_fetch_add(&atomic_counter);
        atomic_compare_exchange(&atomic_counter, i + 1000, i);
        i += 1;
    } while (i != *(a0));
    return 0;
}


// Function: thread_atomic_load_store at 0x40281b
extern unsigned int atomic_counter;

unsigned int thread_atomic_load_store()
{
    atomic_exchange(&atomic_counter, atomic_counter + 100);
    return 0;
}


// Function: param_atomic_ops at 0x402839
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int i)
{
    unsigned int *ptr;  // eax
    unsigned int v4;  // ebp
    unsigned int *v5;  // esi
    unsigned int *v6;  // esi
    unsigned int v7;  // ebp
    unsigned int *v8;  // esi
    unsigned int v9;  // ebp
    unsigned int v10;  // esi
    unsigned int *ptr;  // [bp-0x18]
    char v1;  // [bp-0x14]
    char v2;  // [bp+0x8]

    ptr = malloc(i * 4);
    if (!ptr)
        return 4294967295;
    ptr = ptr;
    atomic_exchange(&atomic_counter, 0);
    if (i > 0)
    {
        v4 = i;
        v5 = ptr;
        do
        {
            v6 = v5;
            v7 = v4;
            if (pthread_create(v6, 0, thread_atomic_increment, &v2))
            {
                free(ptr);
                return 4294967294;
            }
        } while ((v8 = v6 + 4, v9 = v7 - 1, v4 = v7 - 1, v5 = v6 + 4, v7 != 1));
    }
    if (!pthread_create(&v1, 0, thread_atomic_load_store, 0))
        pthread_join(*((int *)&v1), 0);
    if (i > 0)
    {
        v10 = 0;
        do
        {
            pthread_join(ptr[v10], 0);
            v10 += 1;
        } while (i != v10);
    }
    free(ptr);
    return ((char)_ccall(15, 15, atomic_counter, 0, 0) ? 42 : 4294967293);
}


// Function: call_atomic_ops at 0x402939
unsigned int call_atomic_ops()
{
    unsigned int v0;  // [bp-0x18]

    v0 = 500;
    return param_atomic_ops(4);
}


// Function: thread_tls_test at 0x40295d
unsigned int [2] thread_tls_test(char *a0)
{
    unsigned long v0;  // ldt
    unsigned long v1;  // gdt
    unsigned short v2;  // gs
    unsigned int v3;  // esi
    unsigned int v4;  // edi
    unsigned int ptr[2];  // eax

    v3 = *((int *)_ccall(v0, v1, (unsigned int)v2, 4294967260));
    v4 = v3 + 50;
    *((unsigned int *)_ccall(v0, v1, (unsigned int)v2, 4294967260)) = v4;
    strncpy(*((int *)_ccall(v0, v1, (unsigned int)v2, 0)) - 32, a0, 31);
    ptr = malloc(8);
    ptr[0] = v3;
    ptr[1] = v4;
    return ptr;
}


// Function: param_thread_local_storage at 0x4029b0
unsigned int param_thread_local_storage(unsigned int i)
{
    unsigned int v4;  // esi
    unsigned int *ptr;  // edi
    unsigned int v14;  // ebp
    unsigned int v15;  // esi
    unsigned int ptr[2];  // eax
    unsigned int v17;  // edi
    unsigned int *ptr;  // ecx
    unsigned int index;  // esi
    char *ptr;  // eax
    unsigned int j;  // esi
    unsigned int *v10;  // ebp
    unsigned int *v11;  // ebp
    unsigned int *v12;  // ebp
    unsigned int v13;  // edi
    unsigned int *p;  // [bp-0x20]
    unsigned int *addr;  // [bp-0x1c]
    char *v2;  // [bp-0x18]
    char v3;  // [bp-0x14]

    v4 = i * 4;
    ptr = malloc(v4);
    ptr = malloc(v4);
    if (!ptr)
        return 4294967295;
    p = ptr;
    if (!p)
        return 4294967295;
    addr = ptr;
    if (i > 0)
    {
        index = 0;
        v2 = "Thread-%d";
        do
        {
            ptr = malloc(16);
            p[index] = ptr;
            snprintf(ptr, 16, v2);
            index += 1;
        } while (i != index);
        if (i > 0)
        {
            j = 0;
            v10 = addr;
            do
            {
                v11 = v10;
                if (pthread_create(v11, 0, thread_tls_test, p[j]))
                {
                    v17 = 4294967295;
                    do
                    {
                        free(p[1 + v17]);
                        v17 += 1;
                    } while (j != v17);
                    free(p);
                    free(addr);
                    return 4294967294;
                }
            } while ((j += 1, v12 = v11 + 4, v10 = v11 + 4, i != j));
            if (i > 0)
            {
                v13 = 0;
                v14 = 0;
                v15 = 0;
                do
                {
                    pthread_join(addr[v13], &v3);
                    ptr = *((int *)&v3);
                    v15 += ptr[0];
                    v14 += ptr[1];
                    free(ptr);
                    free(p[v13]);
                    v13 += 1;
                } while (i != v13);
                goto LABEL_402add;
            }
        }
    }
    v15 = 0;
    v14 = 0;
LABEL_402add:
    free(p);
    free(addr);
    return (!(i * 150 ^ v14) && !(i * 100 ^ v15) ? 42 : 4294967293);
}


// Function: call_thread_local_storage at 0x402b50
unsigned int call_thread_local_storage()
{
    return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x402b71
extern char g_4032c3;
extern char g_4032df;
extern char g_4032fc;
extern char g_403318;
extern char g_403334;
extern char g_403350;
extern char g_4033ab;

int test_thread_concurrency()
{
    puts(&g_4033ab);
    param_pthread_create(7);
    printf(&g_4032c3);
    param_pthread_join();
    printf(&g_4032df);
    param_mutex_lock(4, 1000);
    printf(&g_4032fc);
    param_condition_variable();
    printf(&g_403318);
    param_atomic_ops(4);
    printf(&g_403334);
    param_thread_local_storage(4);
    return printf(&g_403350);
}


// Function: main at 0x402c45
unsigned int main()
{
    test_standard_library_functions();
    test_system_calls();
    test_thread_concurrency();
    return 0;
}


// Function: sub_402c6b at 0x402c6b
void sub_402c6b()
{
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x402c70
typedef struct struct_0 {
    char padding_0[12943];
    struct struct_1 *field_328f;
    struct struct_1 *field_3293;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux()
{
    struct_0 *v2;  // edx
    struct_0 *ptr;  // edx
    unsigned int *v4;  // eax
    unsigned int v5;  // ebx
    struct_0 *v6;  // ebx
    struct_0 *p;  // ebx
    unsigned int v0;  // [bp-0x8]

    __x86.get_pc_thunk.dx();
    ptr = &v2[1].padding_0[239];
    v4 = *((int *)&ptr->padding_0[244]);
    if (*((int *)&ptr->padding_0[244]) == 0xffffffff)
        return 4294967295;
    v0 = v5;
    v6 = &ptr->padding_0[244];
    do
    {
        p = v6;
        v4();
        v4 = *((int *)&p->padding_0[4]);
        v6 = &p->padding_0[4];
    } while (*((int *)&p->padding_0[4]) != 0xffffffff);
    return 4294967295;
}


// Function: sub_402cb2 at 0x402cb2
void sub_402cb2()
{
}


// Function: _fini at 0x402cbc
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

