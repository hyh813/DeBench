// Angr Decompilation of 6_clang_O0_g
// Platform: ARMEL

// Function: _init at 0x400c20
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_400c2c at 0x400c2c
extern unsigned int g_414008;

int sub_400c2c()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_414008;
}


// Function: _start at 0x400f40
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_400f78 at 0x400f78
void sub_400f78()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400f84
extern unsigned int g_414114;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_414114)
        goto LABEL_400f9c;
    return v0;
LABEL_400f9c:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x400fa8
extern char __TMC_END__;
extern unsigned int g_414110;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_400fc8;
    return &__TMC_END__;
LABEL_400fc8:
    if (g_414110)
        goto LABEL_400fd8;
    return &__TMC_END__;
LABEL_400fd8:
    goto g_414110;
}


// Function: register_tm_clones at 0x400fec
extern char __TMC_END__;
extern unsigned int g_41411c;

int register_tm_clones()
{
    if (0)
        goto LABEL_401018;
    return &__TMC_END__;
LABEL_401018:
    if (g_41411c)
        goto LABEL_401028;
    return &__TMC_END__;
LABEL_401028:
    goto g_41411c;
}


// Function: __do_global_dtors_aux at 0x40103c
extern char __TMC_END__;
extern unsigned int __dso_handle;
extern unsigned int g_41410c;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!__TMC_END__)
        goto LABEL_401058;
    return v2;
LABEL_401058:
    v1 = v3;
    v0 = v4;
    if (!g_41410c)
    {
        v5 = deregister_tm_clones();
        __TMC_END__ = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4010a4
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_strcpy at 0x4010a8
int param_strcpy(char *ptr, char *a1)
{
    unsigned int len;  // r0

    strcpy(ptr, a1);
    len = strlen(ptr);
    return strlen(ptr);
}


// Function: call_strcpy at 0x4010dc
unsigned int call_strcpy()
{
    unsigned int dst;  // [bp-0x2c]
    char v1[32];  // [bp-0x28]

    dst = param_strcpy(&v1, "HelloLib");
    return dst;
}


// Function: param_strcmp at 0x401110
unsigned int param_strcmp(char *a0, char *a1)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]

    v1 = strcmp(a0, a1);
    v0 = (v1 < 1 ? v1 >> 31 : 1);
    return v0;
}


// Function: call_strcmp at 0x401170
int call_strcmp()
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v2 = param_strcmp("abc", "def");
    v1 = param_strcmp("xyz", "xyz");
    v0 = param_strcmp("bbb", "aaa");
    return v2 + v1 + v0;
}


// Function: param_strlen at 0x4011f4
unsigned int param_strlen(char *a0)
{
    unsigned int len;  // [bp-0x10]

    len = strlen(a0);
    return len;
}


// Function: call_strlen at 0x401220
unsigned int call_strlen()
{
    unsigned int len;  // r0
    char *v0;  // [bp-0xc]

    v0 = "BinBench2025";
    len = param_strlen(v0);
    return param_strlen(v0);
}


// Function: param_memcpy at 0x401250
int param_memcpy(void* a0, void* a1, unsigned int n)
{
    memcpy(a0, a1, n);
    return n;
}


// Function: call_memcpy at 0x401288
int call_memcpy()
{
    unsigned int result;  // [bp-0x38]
    char v1;  // [bp-0x34]
    char v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0x18]
    unsigned int v8;  // [bp-0x14]

    v4 = 10;
    v5 = 20;
    v6 = 30;
    v7 = 40;
    v8 = 50;
    memset(&v1, 0, 16);
    result = 0;
    param_memcpy(&result, &v4, 20);
    return result + *((int *)&v2) + v3;
}


// Function: param_memcmp at 0x4012f4
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]

    v1 = memcmp(a0, a1, a2);
    v0 = (v1 < 1 ? v1 >> 31 : 1);
    return v0;
}


// Function: call_memcmp at 0x40135c
int call_memcmp()
{
    unsigned int v0;  // [bp-0x3c]
    char *v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    unsigned int v3;  // [bp-0x30]
    unsigned int flag2;  // [bp-0x2c]
    unsigned int v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x24]
    unsigned int flag1;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]
    unsigned int v9;  // [bp-0x18]
    unsigned int result;  // [bp-0x14]
    unsigned int v11;  // [bp-0x10]
    unsigned int v12;  // [bp-0xc]

    result = 1;
    v12 = 3;
    v11 = 2;
    v9 = 4;
    v8 = 2;
    flag1 = 1;
    v6 = 3;
    v5 = 2;
    flag2 = 1;
    v1 = &result;
    v0 = 12;
    v3 = param_memcmp(&result, &flag1, 12);
    v2 = param_memcmp(v1, &flag2, v0);
    return v3 + v2;
}


// Function: param_printf at 0x401438
unsigned int param_printf(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]

    v0 = printf("Value: %d, Name: %s\n", a0, a1);
    return v0;
}


// Function: call_printf at 0x401478
unsigned int call_printf()
{
    unsigned int v0;  // [bp-0xc]

    v0 = param_printf(42, "Test");
    return v0;
}


// Function: param_scanf at 0x4014ac
unsigned int param_scanf(char *a0)
{
    unsigned int v0;  // [bp-0x1c]
    char v1;  // [bp-0x18], Other Possible Types: unsigned int
    char v2;  // [bp-0x14], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0xc]

    v0 = __isoc99_sscanf(a0, "%d,%d", &v2, &v1);
    v3 = (v0 != 2 ? 4294967295 : v2 + v1);
    return v3;
}


// Function: call_scanf at 0x40151c
unsigned int call_scanf()
{
    unsigned int v0;  // r0

    v0 = param_scanf("123,456");
    return param_scanf("123,456");
}


// Function: param_fopen_fclose at 0x40153c
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose(char *a0)
{
    unsigned int v0;  // [bp-0x18]
    FILE *fp;  // [bp-0x14]
    unsigned int v2;  // [bp-0xc]

    fp = fopen(a0, "r");
    if (fp)
    {
        v0 = fileno(fp);
        fclose(fp);
        v2 = v0;
        return v2;
    }
    v2 = 4294967295;
    return v2;
}


// Function: call_fopen_fclose at 0x4015b0
unsigned int call_fopen_fclose()
{
    unsigned int fp;  // [bp-0xc]

    fp = param_fopen_fclose("/etc/passwd");
    return (armg_calculate_condition(193, fp, 1, 0) ? 42 : 4294967295);
}


// Function: param_fread_fwrite at 0x4015ec
unsigned int param_fread_fwrite(char *a0)
{
    unsigned int v11;  // r0
    char *v0;  // [bp-0x54]
    unsigned int result;  // [bp-0x50]
    unsigned int v2;  // [bp-0x4c]
    void* v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    unsigned int count;  // [bp-0x40]
    unsigned int count;  // [bp-0x3c]
    void* fp;  // [bp-0x38]
    char v8;  // [bp-0x34]
    void* v9;  // [bp-0x14]
    unsigned int v10;  // [bp-0xc]

    v9 = "BinBench Test Data";
    fp = fopen(a0, "w+");
    if (!fp)
    {
        v10 = 4294967295;
        return v10;
    }
    v3 = v9;
    count = fwrite(v3, 1, strlen(v9), fp);
    v4 = count;
    if (v4 != strlen(v9))
    {
        fclose(fp);
        v10 = 4294967294;
        return v10;
    }
    rewind(fp);
    v0 = &v8;
    count = fread(&v8, 1, count, fp);
    result = 0;
    v0[count] = 0;
    fclose(fp);
    unlink(a0);
    v2 = result;
    if (count == count)
    {
        v11 = strcmp(&v8, v9);
        v2 = v11 + -(v11) + (v11 <= 0);
    }
    v10 = ((v2 & 1) ? 42 : 4294967293);
    return v10;
}


// Function: call_fread_fwrite at 0x401744
unsigned int call_fread_fwrite()
{
    unsigned int count;  // r0

    count = param_fread_fwrite("/tmp/binbench_test.tmp");
    return param_fread_fwrite("/tmp/binbench_test.tmp");
}


// Function: param_malloc_free at 0x401764
unsigned int param_malloc_free(unsigned int a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int idx;  // [bp-0x18]
    unsigned int *ptr;  // [bp-0x14], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0xc]

    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v3 = 4294967295;
        return v3;
    }
    for (idx = 0; a0 > idx; idx += 1)
    {
        ptr[idx] = idx * 10;
    }
    v0 = *(ptr) + ptr[1 + a0];
    free(ptr);
    ptr = 0;
    v3 = v0;
    return v3;
}


// Function: call_malloc_free at 0x40182c
unsigned int call_malloc_free()
{
    unsigned int ptr;  // r0

    ptr = param_malloc_free(10);
    return param_malloc_free(10);
}


// Function: param_memset at 0x401844
int param_memset(void* a0, unsigned int n)
{
    unsigned int result;  // [bp-0x20]
    unsigned int cur;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]

    result = 0;
    memset(a0, 0, n);
    v2 = result;
    for (cur = v2; n > cur; cur += 1)
    {
        v2 += *((char *)a0 + cur);
    }
    return v2;
}


// Function: call_memset at 0x4018d4
int call_memset()
{
    unsigned int idx;  // [bp-0x34]
    unsigned long v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0xc]

    for (idx = 0; 9 >= idx; idx += 1)
    {
        (&v1)[idx] = 255;
    }
    param_memset(&v1, 40);
    return v1 + v2;
}


// Function: param_strchr_strstr at 0x401944
int param_strchr_strstr(char *a0, char a1, char *a2)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned int ptr;  // [bp-0x20]
    unsigned int v4;  // [bp-0x1c]
    unsigned int ptr;  // [bp-0x18]

    ptr = strchr(a0, a1);
    v1 = (!ptr ? 4294967295 : ptr - a0);
    v4 = v1;
    ptr = strstr(a0, a2);
    v0 = (!ptr ? 4294967295 : ptr - a0);
    v2 = v0;
    return v4 + v2;
}


// Function: call_strchr_strstr at 0x401a04
unsigned int call_strchr_strstr()
{
    unsigned int ptr;  // [bp-0x10]
    char *v1;  // [bp-0xc]

    v1 = "Hello BinBench Test";
    ptr = param_strchr_strstr(v1, 66, "Bench");
    return ptr;
}


// Function: test_standard_library_functions at 0x401a4c
extern char g_403496;
extern char g_4034bb;
extern char g_4034d6;
extern char g_4034f1;
extern char g_40350d;
extern char g_403529;
extern char g_403545;
extern char g_403561;
extern char g_40357e;
extern char g_40359a;
extern char g_4035b6;
extern char g_4035d2;
extern char g_4035ed;

int test_standard_library_functions()
{
    unsigned int v11;  // r0

    printf(&g_403496);
    printf(&g_4034bb, call_strcpy());
    printf(&g_4034d6, call_strcmp());
    printf(&g_4034f1, call_strlen());
    printf(&g_40350d, call_memcpy());
    printf(&g_403529, call_memcmp());
    printf(&g_403545, call_printf());
    printf(&g_403561, call_scanf());
    printf(&g_40357e, call_fopen_fclose());
    printf(&g_40359a, call_fread_fwrite());
    printf(&g_4035b6, call_malloc_free());
    printf(&g_4035d2, call_memset());
    v11 = printf(&g_4035ed, call_strchr_strstr());
    return printf(&g_4035ed, call_strchr_strstr());
}


// Function: param_linux_syscall at 0x401b8c
unsigned int param_linux_syscall(unsigned int a0)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v1 = a0;
    v0 = syscall(5);
    if ((char)armg_calculate_condition(193, v0, 1, 0))
    {
        syscall(6);
        v2 = v0;
        return v2;
    }
    v2 = -(*(__errno_location()));
    return v2;
}


// Function: call_linux_syscall at 0x401bfc
unsigned int call_linux_syscall()
{
    unsigned int v0;  // [bp-0xc]

    v0 = param_linux_syscall("/etc/passwd");
    return (armg_calculate_condition(193, v0, 1, 0) ? 42 : 4294967295);
}


// Function: param_win32_api at 0x401c38
unsigned int param_win32_api(unsigned int a0)
{
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0xc]

    if ((char)armg_calculate_condition(193, stat(a0, &v0), 1, 0))
    {
        v2 = (0 < *((int *)&v1) ? 42 : 4294967294);
        return v2;
    }
    v2 = 4294967295;
    return v2;
}


// Function: call_win32_api at 0x401c94
unsigned int call_win32_api()
{
    unsigned int v0;  // r0

    v0 = param_win32_api("/etc/passwd");
    return param_win32_api("/etc/passwd");
}


// Function: param_fork_exec at 0x401cb4
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    char v2;  // [bp-0x1b]
    unsigned int pid;  // [bp-0x18]
    unsigned int v4;  // [bp-0x14]
    unsigned int v5;  // [bp-0xc]

    v4 = a1;
    pid = fork();
    if (!((char)armg_calculate_condition(193, pid, 1, 0)))
    {
        v5 = 4294967295;
        return v5;
    }
    else if (!pid)
    {
        execl(a0, a0);
        _exit(127); /* do not return */
    }
    else
    {
        v0 = waitpid(pid, &v1, 0);
        v5 = ((char)armg_calculate_condition(193, v0, 1, 0) ? ((v1 & 127) ? 4294967293 : v2) : 4294967294);
        return v5;
    }
}


// Function: call_fork_exec at 0x401d80
unsigned int call_fork_exec()
{
    unsigned int pid;  // [bp-0xc]

    pid = param_fork_exec("/bin/true", 0);
    return (!pid ? 42 : 4294967295);
}


// Function: param_pipe_communication at 0x401dc0
unsigned int param_pipe_communication()
{
    char *v0;  // [bp-0x50]
    unsigned int *result;  // [bp-0x4c]
    void* v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    unsigned int count;  // [bp-0x40]
    void* v5;  // [bp-0x3c]
    unsigned int pid;  // [bp-0x38]
    char v7;  // [bp-0x34]
    char v8;  // [bp-0x14], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x10]
    unsigned int v10;  // [bp-0xc]

    if (!((char)armg_calculate_condition(193, pipe(&v8), 1, 0)))
    {
        v10 = 4294967295;
        return v10;
    }
    pid = fork();
    if (!((char)armg_calculate_condition(193, pid, 1, 0)))
    {
        v10 = 4294967294;
        return v10;
    }
    else if (!pid)
    {
        close(v8);
        v5 = "HelloPipe";
        v3 = v9;
        v2 = v5;
        write(v3, v2, strlen(v5));
        close(v9);
        _exit(0); /* do not return */
    }
    else
    {
        close(v9);
        v0 = &v7;
        count = read(v8, &v7, 31);
        result = NULL;
        v0[count] = 0;
        close(v8);
        wait(result);
        v10 = (0 < count ? 42 : 4294967293);
        return v10;
    }
}


// Function: call_pipe_communication at 0x401ed8
unsigned int call_pipe_communication()
{
    unsigned int v0;  // r0

    v0 = param_pipe_communication();
    return param_pipe_communication();
}


// Function: param_socket_create at 0x401eec
typedef struct sockaddr {
    unsigned short sin_family;
    char sa_data[14];
} sockaddr;

unsigned int param_socket_create()
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned int
    sockaddr v1;  // [bp-0x24]
    unsigned int result;  // [bp-0x14]
    unsigned int sock;  // [bp-0x10]
    unsigned int v6;  // [bp-0xc]

    sock = socket(2, 1, 0);
    if (!((char)armg_calculate_condition(193, sock, 1, 0)))
    {
        v6 = 4294967295;
        return v6;
    }
    result = 1;
    if (!((char)armg_calculate_condition(193, setsockopt(sock, 1, 2, &result, 4), 1, 0)))
    {
        close(sock);
        v6 = 4294967294;
        return v6;
    }
    memset(&v0, 0, 20);
    v1.sin_family = 2;
    *((unsigned short *)&v1.sa_data[0]) = htons(0);
    *((unsigned int *)&v1.sa_data[2]) = v0;
    if (!((char)armg_calculate_condition(193, bind(sock, &v1, 16), 1, 0)))
    {
        close(sock);
        v6 = 4294967293;
        return v6;
    }
    else if (!((char)armg_calculate_condition(193, listen(sock, 5), 1, 0)))
    {
        close(sock);
        v6 = 0xfffffffc;
        return v6;
    }
    else
    {
        close(sock);
        v6 = 42;
        return v6;
    }
}


// Function: call_socket_create at 0x402020
unsigned int call_socket_create()
{
    unsigned int sock;  // r0

    sock = param_socket_create();
    return param_socket_create();
}


// Function: param_shmget_shmat at 0x402034
int param_shmget_shmat()
{
    unsigned int len;  // [bp-0x24]
    char *ptr;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0x14]
    char *v5;  // [bp-0x10]
    unsigned int v6;  // [bp-0xc]

    v5 = "/tmp/binbench_shm";
    v4 = open(v5, 66, 438);
    if (!((char)armg_calculate_condition(193, v4, 1, 0)))
    {
        v6 = 4294967295;
        return v6;
    }
    close(v4);
    v3 = ftok("/tmp/binbench_shm", 42);
    if (!((char)armg_calculate_condition(193, v3, 1, 0)))
    {
        v6 = 4294967295;
        return v6;
    }
    v2 = shmget(v3, 0x1000, 950);
    if (!((char)armg_calculate_condition(193, v2, 1, 0)))
    {
        v6 = 4294967294;
        return v6;
    }
    ptr = shmat(v2, 0, 0);
    if (ptr != 0xffffffff)
    {
        strcpy(ptr, "SharedMemory");
        len = strlen(ptr);
        shmdt(ptr);
        shmctl(v2, 0, 0);
        v6 = len;
        return v6;
    }
    v6 = 4294967293;
    return v6;
}


// Function: call_shmget_shmat at 0x402178
unsigned int call_shmget_shmat()
{
    unsigned int v0;  // [bp-0xc]

    v0 = param_shmget_shmat();
    return (0 < v0 ? 42 : 4294967295);
}


// Function: param_signal_handling at 0x4021a8
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling()
{
    sighandler_t result;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0x10]
    unsigned int v5;  // [bp-0xc]

    if (signal(10, $a.42) == 4294967295)
    {
        v5 = 4294967295;
        return v5;
    }
    else if (signal(14, $a.42) == 4294967295)
    {
        v5 = 4294967294;
        return v5;
    }
    else
    {
        signal_received = 0;
        raise(10);
        v3 = 1000;
        while (true)
        {
            v2 = 0;
            if (!signal_received)
            {
                v4 = v3 - 1;
                v2 = (0 < v3 ? 1 : 0);
                v3 = v4;
            }
            if (!((char)v2 & 1))
                break;
            usleep(1000);
        }
        if (!signal_received)
        {
            v5 = 4294967293;
            return v5;
        }
        else if (signal_number != 10)
        {
            v5 = 0xfffffffc;
            return v5;
        }
        else
        {
            signal_received = 0;
            alarm(1);
            v3 = 2000;
            while (true)
            {
                v1 = 0;
                if (!signal_received)
                {
                    v4 = v3 - 1;
                    v1 = (0 < v3 ? 1 : 0);
                    v3 = v4;
                }
                if (!((char)v1 & 1))
                    break;
                usleep(1000);
            }
            if (signal_received && signal_number == 14)
            {
                result = NULL;
                signal(10, NULL);
                signal(14, result);
                v5 = 42;
                return v5;
            }
            v5 = 4294967291;
            return v5;
        }
    }
}


// Function: $a.42 at 0x4023d0
extern unsigned int signal_number;
extern unsigned int signal_received;

int $a.42(unsigned int a0)
{
    signal_received = 1;
    signal_number = a0;
    return a0;
}


// Function: call_signal_handling at 0x402408
unsigned int call_signal_handling()
{
    unsigned int v0;  // r0

    v0 = param_signal_handling();
    return param_signal_handling();
}


// Function: test_system_calls at 0x40241c
extern char g_40363c;
extern char g_403658;
extern char g_403674;
extern char g_403690;
extern char g_4036ac;
extern char g_4036c8;
extern char g_4036e4;
extern char g_403700;

int test_system_calls()
{
    unsigned int v6;  // r0
    unsigned int v7;  // r0

    printf(&g_40363c);
    printf(&g_403658, call_linux_syscall());
    printf(&g_403674, call_win32_api());
    printf(&g_403690, call_fork_exec());
    printf(&g_4036ac, call_pipe_communication());
    printf(&g_4036c8, call_socket_create());
    printf(&g_4036e4, call_shmget_shmat());
    v6 = call_signal_handling();
    v7 = printf(&g_403700, v6);
    return printf(&g_403700, v6);
}


// Function: thread_compute at 0x4024e4
unsigned int * thread_compute(unsigned int *p)
{
    unsigned int *ptr;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    v2 = *(p);
    v1 = v2 * v2;
    ptr = malloc(4);
    *(ptr) = v1;
    return ptr;
}


// Function: param_pthread_create at 0x40253c
unsigned int param_pthread_create(unsigned int a0)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int count;  // [bp-0x20]
    unsigned int *ptr;  // [bp-0x1c], Other Possible Types: char
    unsigned int v3;  // [bp-0x18]
    char v4;  // [bp-0x14], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0xc]

    v3 = a0;
    count = pthread_create(&v4, 0, thread_compute, &v3);
    if (!count)
    {
        pthread_join(v4, &ptr);
        v0 = *(ptr);
        free(ptr);
        v5 = v0;
        return v5;
    }
    v5 = 4294967295;
    return v5;
}


// Function: call_pthread_create at 0x4025cc
unsigned int call_pthread_create()
{
    unsigned int count;  // r0

    count = param_pthread_create(7);
    return param_pthread_create(7);
}


// Function: thread_sum at 0x4025e4
unsigned int thread_sum(unsigned int *ptr)
{
    unsigned int i;  // [bp-0xc]

    ptr[2] = 0;
    for (i = *(ptr); ptr[1] >= i; i += 1)
    {
        ptr[2] = ptr[2] + i;
    }
    return 0;
}


// Function: param_pthread_join at 0x40265c
unsigned int param_pthread_join()
{
    unsigned int flag1;  // [bp-0x4c]
    unsigned int idx;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int i;  // [bp-0x40]
    char v4;  // [bp-0x3c]
    unsigned int result;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x38]
    unsigned int v13;  // [bp-0x34]
    unsigned int v7;  // [bp-0x30]
    unsigned int v8;  // [bp-0x2c]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned long v11;  // [bp-0x18]
    unsigned int v12;  // [bp-0xc]

    flag1 = 0;
    memset(&v4, 0, 36);
    result = 1;
    v6 = 10;
    v7 = 11;
    v8 = 20;
    v9 = 21;
    v10 = 30;
    for (i = flag1; 2 >= i; i += 1)
    {
        if (pthread_create(&(&v11)[i], 0, thread_sum, &(&v4)[12 * i]))
        {
            v12 = 4294967295;
            return v12;
        }
    }
    v2 = 0;
    for (idx = 0; 2 >= idx; idx += 1)
    {
        if (pthread_join((&v11)[idx], 0))
        {
            v12 = 4294967294;
            return v12;
        }
        v2 += (&v13)[3 * idx];
    }
    v12 = v2;
    return v12;
}


// Function: call_pthread_join at 0x4027bc
unsigned int call_pthread_join()
{
    unsigned int count;  // r0

    count = param_pthread_join();
    return param_pthread_join();
}


// Function: thread_increment at 0x4027d0
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int *ptr)
{
    unsigned int v3;  // r1
    unsigned int v0;  // [bp-0x18]
    unsigned int i;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v2 = *(ptr);
    for (i = 0; v2 > i; i += 1)
    {
        v0 = &counter_mutex;
        pthread_mutex_lock(&counter_mutex);
        v3 = shared_counter + 1;
        shared_counter = shared_counter + 1;
        pthread_mutex_unlock(v0, v3, &shared_counter);
        usleep(1000);
    }
    return 0;
}


// Function: param_mutex_lock at 0x402874
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int j;  // [bp-0x20]
    unsigned int i;  // [bp-0x1c]
    unsigned int *ptr;  // [bp-0x18]
    unsigned int v4;  // [bp-0x14]
    unsigned int v5;  // [bp-0xc]

    v4 = a1;
    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v5 = 4294967295;
        return v5;
    }
    shared_counter = 0;
    for (i = 0; a0 > i; i += 1)
    {
        if (pthread_create(&ptr[i], 0, thread_increment, &v4))
        {
            free(ptr);
            v5 = 4294967294;
            return v5;
        }
    }
    for (j = 0; a0 > j; j += 1)
    {
        pthread_join(ptr[j], 0);
    }
    free(ptr);
    v0 = a0 * v4;
    v5 = (shared_counter == v0 ? 42 : 4294967293);
    return v5;
}


// Function: call_mutex_lock at 0x4029d0
unsigned int call_mutex_lock()
{
    unsigned int v0;  // r0

    v0 = param_mutex_lock(4, 1000);
    return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x4029ec
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int i;

unsigned int * consumer_thread(unsigned int a0)
{
    unsigned int *ptr;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v2 = a0;
    pthread_mutex_lock(&cond_mutex);
    while (!i)
    {
        pthread_cond_wait(&cond, &cond_mutex);
    }
    v1 = data;
    pthread_mutex_unlock(&cond_mutex);
    ptr = malloc(4);
    *(ptr) = v1;
    return ptr;
}


// Function: producer_thread at 0x402a90
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int ready;

unsigned int producer_thread(unsigned int a0)
{
    unsigned int result;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v2 = a0;
    result = 1;
    sleep(1);
    v1 = &cond_mutex;
    pthread_mutex_lock(&cond_mutex);
    data = 42;
    ready = result;
    pthread_cond_signal(&cond, &ready, &data);
    pthread_mutex_unlock(v1);
    return 0;
}


// Function: param_condition_variable at 0x402b10
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable()
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int *ptr;  // [bp-0x18], Other Possible Types: char
    char v2;  // [bp-0x14], Other Possible Types: unsigned int
    char v3;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0xc]

    ready = 0;
    data = 0;
    if (pthread_create(&v2, 0, consumer_thread, 0))
    {
        v4 = 4294967295;
        return v4;
    }
    else if (pthread_create(&v3, 0, producer_thread, 0))
    {
        pthread_cancel(v2);
        v4 = 4294967294;
        return v4;
    }
    else
    {
        pthread_join(v2, &ptr);
        pthread_join(v3, 0);
        v0 = *(ptr);
        free(ptr);
        v4 = v0;
        return v4;
    }
}


// Function: call_condition_variable at 0x402bf4
unsigned int call_condition_variable()
{
    unsigned int v0;  // r0

    v0 = param_condition_variable();
    return param_condition_variable();
}


// Function: thread_atomic_increment at 0x402c08
extern unsigned int atomic_counter;

unsigned int thread_atomic_increment(unsigned int *ptr)
{
    unsigned int v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]
    unsigned int result;  // [bp-0x18]
    unsigned int i;  // [bp-0x14]
    unsigned int v8;  // [bp-0x10]

    v8 = *(ptr);
    for (i = 0; v8 > i; i += 1)
    {
        result = 1;
        v1 = &atomic_counter;
        v0 = 5;
        v5 = __atomic_fetch_add_4(&atomic_counter, result, 5);
        v4 = i;
        v3 = i + 1000;
        v2 = v3;
        __atomic_compare_exchange_4(v1, &v4, v2, v0, v0);
    }
    return 0;
}


// Function: thread_atomic_load_store at 0x402cd0
extern unsigned int atomic_counter;

unsigned int thread_atomic_load_store(unsigned int a0)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0x10]
    unsigned int v5;  // [bp-0xc]

    v5 = a0;
    v1 = &atomic_counter;
    v0 = 5;
    v3 = __atomic_load_4(&atomic_counter, 5);
    v4 = v3;
    v2 = v4 + 100;
    __atomic_store_4(v1, v2, v0);
    return 0;
}


// Function: param_atomic_ops at 0x402d38
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
    unsigned int result;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    unsigned int j;  // [bp-0x28]
    char v4;  // [bp-0x24], Other Possible Types: unsigned int
    unsigned int i;  // [bp-0x20]
    unsigned int flag1;  // [bp-0x1c]
    unsigned int *ptr;  // [bp-0x18]
    unsigned int v8;  // [bp-0x14]
    unsigned int v9;  // [bp-0xc]

    v8 = a1;
    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v9 = 4294967295;
        return v9;
    }
    result = 0;
    flag1 = 0;
    __atomic_store_4(&atomic_counter, flag1, 5);
    for (i = result; a0 > i; i += 1)
    {
        if (pthread_create(&ptr[i], 0, thread_atomic_increment, &v8))
        {
            free(ptr);
            v9 = 4294967294;
            return v9;
        }
    }
    if (!pthread_create(&v4, 0, thread_atomic_load_store, 0))
        pthread_join(v4, 0);
    for (j = 0; a0 > j; j += 1)
    {
        pthread_join(ptr[j], 0);
    }
    v1 = __atomic_load_4(&atomic_counter, 5);
    v2 = v1;
    free(ptr);
    v9 = (0 < v2 ? 42 : 4294967293);
    return v9;
}


// Function: call_atomic_ops at 0x402ee8
unsigned int call_atomic_ops()
{
    unsigned int v0;  // r0

    v0 = param_atomic_ops(4, 500);
    return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x402f04
int thread_tls_test(unsigned int a0)
{
    unsigned int v3;  // lr
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = a0;
    v0 = 8;
    __aeabi_read_tp(a0); /* do not return */
}


// Function: sub_402f28 at 0x402f28
unsigned int [2] sub_402f28(char *a0, unsigned int a1, unsigned int a2)
{
    char v0;  // [bp-0x8]
    unsigned int v1;  // [bp+0x0]
    unsigned int ptr[2];  // [bp+0x8]
    unsigned int v3;  // [bp+0xc]

    v3 = *((int *)&a0[a2]);
    *((unsigned int *)&a0[a2]) = *((int *)&a0[a2]) + 50;
    strncpy(a0 + 12, *((int *)&v0), 31);
    ptr[0] = malloc(8);
    ptr[0] = v3;
    ptr[1] = *((int *)&a0[v1]);
    return ptr;
}


// Function: param_thread_local_storage at 0x402f9c
unsigned int param_thread_local_storage(unsigned int a0)
{
    unsigned int v0;  // [bp-0x48]
    unsigned int size;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    unsigned int ptr[2];  // [bp-0x38]
    unsigned int v5[2];  // [bp-0x34]
    char k;  // [bp-0x30], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0x2c]
    unsigned int v8;  // [bp-0x28]
    unsigned int l;  // [bp-0x24]
    unsigned int j;  // [bp-0x20]
    unsigned int index;  // [bp-0x1c]
    unsigned int *p;  // [bp-0x18]
    unsigned int *addr;  // [bp-0x14]
    unsigned int v14;  // [bp-0xc]

    addr = malloc(a0 * 4);
    p = malloc(a0 * 4);
    if (addr && p)
    {
        for (index = 0; a0 > index; index += 1)
        {
            size = 16;
            p[index] = malloc(16);
            snprintf(p[index], size, "Thread-%d", index);
        }
        for (j = 0; a0 > j; j += 1)
        {
            if (pthread_create(&addr[j], 0, thread_tls_test, p[j]))
            {
                for (l = 0; j >= l; l += 1)
                {
                    free(p[l]);
                }
                free(p);
                free(addr);
                v14 = 4294967294;
                return v14;
            }
        }
        memset(&k, 0, 12);
        for (; a0 > k; k += 1)
        {
            pthread_join(addr[k], &v5);
            ptr[0] = v5;
            v8 += ptr[0];
            v7 += ptr[1];
            free(ptr);
            free(p[k]);
        }
        free(p);
        free(addr);
        v3 = a0 * 100;
        v2 = a0 * 150;
        v0 = 0;
        if (v8 == v3)
            v0 = v7 - v2 + -(v7 - v2) + (v7 - v2 <= 0);
        v14 = ((v0 & 1) ? 42 : 4294967293);
        return v14;
    }
    v14 = 4294967295;
    return v14;
}


// Function: call_thread_local_storage at 0x403254
unsigned int call_thread_local_storage()
{
    unsigned int count;  // r0

    count = param_thread_local_storage(4);
    return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x40326c
extern char g_403726;
extern char g_403745;
extern char g_403761;
extern char g_40377e;
extern char g_40379a;
extern char g_4037b6;
extern char g_4037d2;

int test_thread_concurrency()
{
    unsigned int count;  // r0
    unsigned int v6;  // r0

    printf(&g_403726);
    printf(&g_403745, call_pthread_create());
    printf(&g_403761, call_pthread_join());
    printf(&g_40377e, call_mutex_lock());
    printf(&g_40379a, call_condition_variable());
    printf(&g_4037b6, call_atomic_ops());
    count = call_thread_local_storage();
    v6 = printf(&g_4037d2, count);
    return printf(&g_4037d2, count);
}


// Function: main at 0x40331c
unsigned int main()
{
    unsigned int result;  // [bp-0x10]
    unsigned int flag1;  // [bp-0xc]

    result = 0;
    flag1 = 0;
    test_standard_library_functions();
    test_system_calls();
    test_thread_concurrency();
    return result;
}


// Function: __aeabi_read_tp at 0x403350
void __aeabi_read_tp()
{
}


// Function: _fini at 0x403358
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

