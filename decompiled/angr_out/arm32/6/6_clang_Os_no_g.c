// Angr Decompilation of 6_clang_Os_no_g
// Platform: ARMEL

// Function: _init at 0x400c3c
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_400c48 at 0x400c48
extern unsigned int g_413008;

int sub_400c48()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_413008;
}


// Function: _start at 0x400f70
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_400fa8 at 0x400fa8
void sub_400fa8()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400fb4
extern unsigned int g_413118;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_413118)
        goto LABEL_400fcc;
    return v0;
LABEL_400fcc:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x400fd8
extern char __TMC_END__;
extern unsigned int g_413114;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_400ff8;
    return &__TMC_END__;
LABEL_400ff8:
    if (g_413114)
        goto LABEL_401008;
    return &__TMC_END__;
LABEL_401008:
    goto g_413114;
}


// Function: register_tm_clones at 0x40101c
extern char __TMC_END__;
extern unsigned int g_413120;

int register_tm_clones()
{
    if (0)
        goto LABEL_401048;
    return &__TMC_END__;
LABEL_401048:
    if (g_413120)
        goto LABEL_401058;
    return &__TMC_END__;
LABEL_401058:
    goto g_413120;
}


// Function: __do_global_dtors_aux at 0x40106c
extern unsigned int __dso_handle;
extern char completed.0;
extern unsigned int g_413110;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!completed.0)
        goto LABEL_401088;
    return v2;
LABEL_401088:
    v1 = v3;
    v0 = v4;
    if (!g_413110)
    {
        v5 = deregister_tm_clones();
        completed.0 = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4010d4
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_strcpy at 0x4010d8
int param_strcpy(char *a0, char *a1)
{
    char *dst;  // r0
    unsigned int len;  // r0

    dst = strcpy(a0, a1);
    len = strlen(dst);
    return strlen(dst);
}


// Function: call_strcpy at 0x4010e8
int call_strcpy()
{
    unsigned int len;  // r0
    char v0[8];  // [bp-0x28]
    char result;  // [bp-0x20]

    strncpy(v0, "HelloLib", 8);
    result = 0;
    len = strlen(&v0);
    return strlen(&v0);
}


// Function: param_strcmp at 0x401124
unsigned int param_strcmp(char *a0, char *a1)
{
    unsigned int v1;  // lr
    unsigned int result;  // r0
    unsigned int v4;  // r1
    unsigned int v5;  // r1
    unsigned int v0;  // [bp-0x4]

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


// Function: call_strcmp at 0x40114c
unsigned int call_strcmp()
{
    return 0;
}


// Function: param_strlen at 0x401154
int param_strlen()
{
    char *v0;  // r0
    unsigned int len;  // r0

    len = strlen(v0);
    return strlen(v0);
}


// Function: call_strlen at 0x401158
unsigned int call_strlen()
{
    return 12;
}


// Function: param_memcpy at 0x401160
int param_memcpy(void* a0, void* a1, unsigned int n)
{
    memcpy(a0, a1, n);
    return n;
}


// Function: call_memcpy at 0x401178
unsigned int call_memcpy()
{
    return 90;
}


// Function: param_memcmp at 0x401180
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v1;  // lr
    unsigned int result;  // r0
    unsigned int v4;  // r1
    unsigned int v5;  // r1
    unsigned int v0;  // [bp-0x4]

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


// Function: call_memcmp at 0x4011a8
extern void g_402850;
extern void g_40285c;

int call_memcmp()
{
    unsigned int v4;  // lr
    unsigned int v5;  // r6
    unsigned int v14;  // r1
    unsigned int v15;  // r1
    unsigned int v6;  // r5
    unsigned int v7;  // r4
    unsigned int flag1;  // r0
    unsigned int v10;  // r5
    unsigned int v11;  // r5
    unsigned int result;  // r0
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = v5;
    v1 = v6;
    v0 = v7;
    flag1 = memcmp(&g_40285c, &g_402850, 12);
    if (flag1)
        v10 = 4294967295;
    else
        v10 = flag1;
    v11 = v10;
    if (1 <= flag1)
        v11 = 1;
    result = memcmp(&g_40285c, &g_40285c, 12);
    if (result)
        v14 = 4294967295;
    else
        v14 = result;
    v15 = v14;
    if (1 <= result)
        v15 = 1;
    return v15 + v11;
}


// Function: param_printf at 0x401218
int param_printf(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r0

    v0 = printf("Value: %d, Name: %s\n", a0, a1);
    return printf("Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x401230
int call_printf()
{
    unsigned int v0;  // r0

    v0 = printf("Value: %d, Name: %s\n", 42, "Test");
    return printf("Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x401250
unsigned int param_scanf()
{
    char *v2;  // r0
    char v0;  // [bp-0x10]
    char v1;  // [bp-0xc]

    return (__isoc99_sscanf(v2, "%d,%d", &v1, &v0) == 2 ? v0 + v1 : 4294967295);
}


// Function: call_scanf at 0x401294
unsigned int call_scanf()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    return (__isoc99_sscanf("123,456", "%d,%d") == 2 ? v0 + v1 : 4294967295);
}


// Function: param_fopen_fclose at 0x4012e4
typedef struct FILE {
} FILE;

FILE * param_fopen_fclose(char *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    FILE *fp;  // r0
    FILE *v2;  // r0
    FILE *v3;  // r0
    FILE *v4;  // r0
    unsigned int v0;  // [bp-0x8]

    v0 = &vvar_4;
    fp = fopen(a0, "r");
    if (!fp)
    {
        v2 = 0xffffffff;
        if ((Not Conv(32I->1I, armg_calculate_condition(0x2<32>, vvar_24{r8|4b}, 0x0<32>, 0x0<32>)))) { Goto None } else { Goto None }
        if (!((char)armg_calculate_condition(2, fp, 0, 0)))
            goto LABEL_401304;
        return 0xffffffff;
        v3 = v2;
    }
    else
    {
        if ((Not Conv(32I->1I, armg_calculate_condition(0x2<32>, vvar_24{r8|4b}, 0x0<32>, 0x0<32>)))) { Goto None } else { Goto None }
        if (!((char)armg_calculate_condition(2, fp, 0, 0)))
            goto LABEL_401304;
        return fp;
        v3 = fp;
    }
LABEL_401304:
    v4 = fileno(v3);
    fclose(v3);
    return v4;
}


// Function: call_fopen_fclose at 0x401328
unsigned int call_fopen_fclose(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v2;  // lr
    char v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    return (armg_calculate_condition(193, param_fopen_fclose("/etc/passwd", a1, a2, a3, &v0, v2, *((int *)&v0), *((int *)&v1)), 1, 0) ? 42 : 4294967295);
}


// Function: param_fread_fwrite at 0x401354
unsigned int param_fread_fwrite(char *a0)
{
    void* fp;  // r0
    void* v2;  // r5
    unsigned int count;  // r7
    char v0;  // [bp-0x38]

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
    count = fread(&v0, 1, 18, v2);
    (&v0)[count] = 0;
    fclose(v2);
    unlink(a0);
    if (count != 18)
        return 4294967293;
    return (!bcmp(&v0, "BinBench Test Data", 19) ? 42 : 4294967293);
}


// Function: call_fread_fwrite at 0x401434
unsigned int call_fread_fwrite()
{
    unsigned int count;  // r0

    count = param_fread_fwrite("/tmp/binbench_test.tmp");
    return param_fread_fwrite("/tmp/binbench_test.tmp");
}


// Function: param_malloc_free at 0x401444
unsigned int param_malloc_free(unsigned int a0)
{
    unsigned int result;  // r4
    unsigned int *ptr;  // r0
    unsigned int v2;  // r1
    unsigned int *p;  // r2
    unsigned int flag1;  // r3
    unsigned int *v5;  // r2
    unsigned int v7;  // r5

    result = a0;
    ptr = malloc(a0 * 4);
    if (!ptr)
        return 4294967295;
    if (result)
    {
        v2 = 0;
        p = ptr;
        flag1 = result;
        do
        {
            v5 = p + 1;
            *(p) = v2;
            v2 += 10;
            p = v5;
            flag1 -= 1;
        } while (flag1 != 1);
        v7 = *(ptr);
    }
    free(ptr);
    return ptr[1 + result] + v7;
}


// Function: call_malloc_free at 0x4014a8
unsigned int call_malloc_free()
{
    unsigned int ptr;  // r0

    ptr = param_malloc_free(10);
    return param_malloc_free(10);
}


// Function: param_memset at 0x4014b0
unsigned int param_memset(char *ptr, unsigned int a1)
{
    unsigned int n;  // r4
    unsigned int v1;  // r6
    char *v2;  // r5
    unsigned int v3;  // r4

    n = a1;
    memset(ptr, 0, n);
    if (!n)
        return 0;
    v1 = 0;
    do
    {
        v2 = ptr + 1;
        v3 = n - 1;
        v1 += *(ptr);
        ptr = v2;
        n = v3;
    } while (n != 1);
    return v1;
}


// Function: call_memset at 0x4014f4
unsigned int call_memset()
{
    return 0;
}


// Function: param_strchr_strstr at 0x4014fc
int param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
    unsigned int v4;  // lr
    unsigned int v5;  // r6
    unsigned int v6;  // r5
    unsigned int v7;  // r4
    unsigned int ptr;  // r0
    unsigned int v9;  // r6
    unsigned int ptr;  // r0
    unsigned int v11;  // r1
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = v5;
    v1 = v6;
    v0 = v7;
    ptr = strchr(a0, a1);
    v9 = ptr - a0;
    if (!ptr)
        v9 = 4294967295;
    ptr = strstr(a0, a2);
    v11 = ptr - a0;
    if (!ptr)
        v11 = 4294967295;
    return v11 + v9;
}


// Function: call_strchr_strstr at 0x40153c
unsigned int call_strchr_strstr()
{
    return 15;
}


// Function: test_standard_library_functions at 0x401544
extern char g_4028cb;
extern char g_4028e6;
extern char g_402901;
extern char g_40291d;
extern char g_402939;
extern char g_402955;
extern char g_402971;
extern char g_40298e;
extern char g_4029aa;
extern char g_4029c6;
extern char g_4029e2;
extern char g_4029fd;
extern char g_402bb6;

int test_standard_library_functions()
{
    unsigned int v16;  // r0
    unsigned int v9;  // r1
    unsigned int v10;  // r1
    unsigned int v11;  // r2
    unsigned int v12;  // r3
    char v0;  // [bp-0x30]
    char v1[4];  // [bp-0x2c]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x24]
    char v4;  // [bp-0xc]

    puts(&g_402bb6);
    strncpy(v1, "HelloLib", 8);
    printf(&g_4028cb, strlen(&v1));
    printf(&g_4028e6, 0);
    printf(&g_402901, 12);
    printf(&g_40291d, 90);
    printf(&g_402939, call_memcmp());
    printf(&g_402955, printf("Value: %d, Name: %s\n", 42, "Test"));
    v9 = (__isoc99_sscanf("123,456", "%d,%d") == 2 ? *((int *)&v4) + *(&v1) : 4294967295);
    printf(&g_402971, v9);
    printf(&g_40298e, (armg_calculate_condition(193, param_fopen_fclose("/etc/passwd", v10, v11, v12, *((int *)&v0), v1, *((int *)&v2), *((int *)&v3)), 1, 0) ? 42 : 4294967295));
    printf(&g_4029aa, param_fread_fwrite("/tmp/binbench_test.tmp"));
    printf(&g_4029c6, param_malloc_free(10));
    printf(&g_4029e2, 0);
    v16 = printf(&g_4029fd, 15);
    return printf(&g_4029fd, 15);
}


// Function: param_linux_syscall at 0x40170c
unsigned int param_linux_syscall(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = syscall(5);
    if ((char)armg_calculate_condition(209, v0, 1, 0))
        return -(*(__errno_location()));
    syscall(6);
    return v0;
}


// Function: call_linux_syscall at 0x401754
unsigned int call_linux_syscall()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    return (armg_calculate_condition(193, param_linux_syscall("/etc/passwd"), 1, 0) ? 42 : 4294967295);
}


// Function: param_win32_api at 0x401780
unsigned int param_win32_api()
{
    char v0;  // [bp-0x34]

    if (!armg_calculate_condition(209, stat(), 1, 0))
        return (0 < *((int *)&v0) ? 42 : 4294967294);
    return 4294967295;
}


// Function: call_win32_api at 0x4017b8
unsigned int call_win32_api()
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x34]

    if (!armg_calculate_condition(209, stat("/etc/passwd", &v0), 1, 0))
        return (0 < *((int *)&v1) ? 42 : 4294967294);
    return 4294967295;
}


// Function: param_fork_exec at 0x4017fc
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
    unsigned int pid;  // r0
    unsigned int v2;  // r0
    unsigned int v3;  // cc_dep1
    unsigned int v4;  // r1
    unsigned int v5;  // cc_dep1
    unsigned int v6;  // cc_dep2
    unsigned int v7;  // cc_ndep
    unsigned int v8;  // r0
    unsigned int v0[1];  // [bp-0x14]

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
                goto LABEL_401842;
LABEL_401841:
            v8 &= v4 >> 8;
        }
        else
        {
            v8 = 4294967293;
            if (armg_calculate_condition(5, v5, v6, v7))
                goto LABEL_401841;
LABEL_401842:
        }
        return v8;
    }
    else
    {
        execl(a0, a0);
        _exit(127); /* do not return */
    }
}


// Function: call_fork_exec at 0x40187c
unsigned int call_fork_exec()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    return (!param_fork_exec("/bin/true", 0) ? 42 : 4294967295);
}


// Function: param_pipe_communication at 0x4018ac
unsigned int param_pipe_communication()
{
    unsigned int pid;  // r0
    unsigned int count;  // r5
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x18], Other Possible Types: unsigned int
    char v2;  // [bp-0x14]

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
        (&v0)[count] = 0;
        close(v1);
        wait(NULL);
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


// Function: call_pipe_communication at 0x401964
unsigned int call_pipe_communication()
{
    unsigned int v0;  // r0

    v0 = param_pipe_communication();
    return param_pipe_communication();
}


// Function: param_socket_create at 0x401968
typedef struct sockaddr {
    unsigned short sin_family;
    char sa_data[14];
} sockaddr;

unsigned int param_socket_create()
{
    unsigned int sock;  // r0
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    sockaddr v0;  // [bp-0x24]
    unsigned int result;  // [bp-0x14]

    sock = socket(2, 1, 0);
    if ((char)armg_calculate_condition(66, sock, 0, 0))
        return 4294967295;
    v4 = sock;
    result = 1;
    if ((char)armg_calculate_condition(209, setsockopt(v4, 1, 2, &result, 4), 1, 0))
    {
        close(v4);
        return 4294967294;
    }
    *((unsigned int *)&v0.sin_family) = 2;
    memset(&v0.sa_data[2], 0, 12);
    if ((char)armg_calculate_condition(209, bind(v4, &v0, 16), 1, 0))
    {
        close(v4);
        return 4294967293;
    }
    v5 = listen(v4, 5);
    close(v4);
    return (armg_calculate_condition(66, v5, 0, 0) ? 0xfffffffc : 42);
}


// Function: call_socket_create at 0x401a40
unsigned int call_socket_create()
{
    unsigned int sock;  // r0

    sock = param_socket_create();
    return param_socket_create();
}


// Function: param_shmget_shmat at 0x401a44
int param_shmget_shmat()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r4
    unsigned int v2;  // r0
    void* v3;  // r0
    void* v4;  // r5
    unsigned int len;  // r0

    v0 = open("/tmp/binbench_shm", 66, 438);
    v1 = 4294967295;
    if (!((char)armg_calculate_condition(66, v0, 0, 0)))
    {
        close(v0);
        if (!((char)armg_calculate_condition(66, ftok("/tmp/binbench_shm", 42), 0, 0)))
        {
            v2 = shmget();
            if (!((char)armg_calculate_condition(66, v2, 0, 0)))
            {
                v3 = shmat();
                if (v3 != 0xffffffff)
                {
                    v4 = v3;
                    memcpy(v3, "SharedMemory", 13);
                    len = strlen(v4);
                    shmdt(v4);
                    shmctl(v2, 0, 0);
                    return len;
                }
                v1 = 4294967293;
            }
            else
            {
                v1 = 4294967294;
            }
        }
    }
    return v1;
}


// Function: call_shmget_shmat at 0x401b1c
unsigned int call_shmget_shmat()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    return (0 < param_shmget_shmat() ? 42 : 4294967295);
}


// Function: param_signal_handling at 0x401b3c
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling()
{
    unsigned int v0;  // r5
    unsigned int v1;  // r5
    unsigned int v2;  // r5
    unsigned int v3;  // r4
    unsigned int v4;  // r4
    unsigned int v5;  // r4

    if (signal(10, $a.34) == 4294967295)
    {
        return 4294967295;
    }
    else if (signal(14, $a.34) != 4294967295)
    {
        signal_received = 0;
        raise(10);
        if (!signal_received)
        {
            v0 = 1000;
            do
            {
                v1 = v0;
                usleep(1000);
            } while (!signal_received && (v2 = v1 - 1, v0 = v1 - 1, 1 < v1));
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
                v3 = 2000;
                do
                {
                    v4 = v3;
                    usleep(1000);
                } while (!signal_received && (v5 = v4 - 1, v3 = v4 - 1, 1 < v4));
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


// Function: $a.34 at 0x401cb0
extern unsigned int signal_number;
extern unsigned int signal_received;

int $a.34(unsigned int a0)
{
    signal_received = 1;
    signal_number = a0;
    return a0;
}


// Function: call_signal_handling at 0x401cd8
unsigned int call_signal_handling()
{
    unsigned int v0;  // r0

    v0 = param_signal_handling();
    return param_signal_handling();
}


// Function: test_system_calls at 0x401cdc
extern char g_402a3f;
extern char g_402a5b;
extern char g_402a77;
extern char g_402a93;
extern char g_402aaf;
extern char g_402acb;
extern char g_402ae7;
extern char g_402bda;

int test_system_calls()
{
    unsigned int v3;  // r0
    unsigned int v4;  // r1
    unsigned int v6;  // r1
    unsigned int v10;  // r0
    unsigned int v11;  // r0
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x3c]

    puts(&g_402bda);
    printf(&g_402a3f, (armg_calculate_condition(193, param_linux_syscall("/etc/passwd"), 1, 0) ? 42 : 4294967295));
    v3 = stat("/etc/passwd", &v0);
    v4 = (0 < *((int *)&v1) ? 42 : 4294967294);
    if (armg_calculate_condition(209, v3, 1, 0))
        v4 = 4294967295;
    printf(&g_402a5b, v4);
    v6 = (!param_fork_exec("/bin/true", 0) ? 42 : 4294967295);
    printf(&g_402a77, v6);
    printf(&g_402a93, param_pipe_communication());
    printf(&g_402aaf, param_socket_create());
    printf(&g_402acb, (0 < param_shmget_shmat() ? 42 : 4294967295));
    v10 = param_signal_handling();
    v11 = printf(&g_402ae7, v10);
    return printf(&g_402ae7, v10);
}


// Function: thread_compute at 0x401dfc
unsigned int * thread_compute(unsigned int *a0)
{
    unsigned int *ptr;  // r0

    ptr = malloc(4);
    *(ptr) = *(a0) * *(a0);
    return ptr;
}


// Function: param_pthread_create at 0x401e1c
unsigned int param_pthread_create(unsigned int a0)
{
    unsigned int *v0;  // [bp-0x14], Other Possible Types: char
    unsigned int v1;  // [bp-0x10]
    char v2;  // [bp-0xc]

    v1 = a0;
    if (pthread_create(&v2, 0, thread_compute, &v1))
        return 4294967295;
    pthread_join(*((int *)&v2), &v0);
    free(v0);
    return *(v0);
}


// Function: call_pthread_create at 0x401e78
unsigned int call_pthread_create()
{
    unsigned int count;  // r0

    count = param_pthread_create(7);
    return param_pthread_create(7);
}


// Function: thread_sum at 0x401e80
unsigned int thread_sum(unsigned int *ptr)
{
    unsigned int v0;  // r1
    unsigned int v1;  // r2

    ptr[2] = 0;
    v0 = *(ptr);
    v1 = ptr[1];
    if (v1 >= v0)
        ptr[2] = v0 + (v1 - v0) * (v0 + 1) + (((v1 + ~(v0)) * (v1 - v0) >> 32 & 1) * 0x80000000 | (v1 + ~(v0)) * (v1 - v0) >> 1);
    return 0;
}


// Function: param_pthread_join at 0x401ed0
unsigned int param_pthread_join()
{
    char *v8;  // r4
    unsigned int v9;  // r7
    unsigned int v10;  // r7
    unsigned int v11;  // r4
    unsigned int v12;  // r7
    unsigned int v13;  // r7
    char v0;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x44]
    char v2[4];  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    unsigned int v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x30]
    unsigned int v6;  // [bp-0x2c]
    char v7;  // [bp-0x24]

    v8 = &v0;
    v9 = 0;
    memset(&v2, 0, 28);
    v6 = 30;
    v5 = 21;
    v4 = 20;
    v3 = 11;
    v1 = 10;
    v0 = 1;
    while (!pthread_create(&(&v7)[v9], 0, thread_sum, v8))
    {
        v9 += 4;
        v8 += 12;
        if (v9 == 12)
        {
            v10 = 0;
            v11 = 0;
            while (true)
            {
                v12 = v10;
                if (pthread_join(*((int *)&(&v7)[-1 * v12]), 0))
                    return 4294967294;
                v13 = v12 - 4;
                v11 += *((int *)&v2[v12 + -4 * v12]);
                v10 = v13;
                if (v10 == 4294967284)
                    return v11;
            }
        }
    }
    return 4294967295;
}


// Function: call_pthread_join at 0x401fb8
unsigned int call_pthread_join()
{
    unsigned int count;  // r0

    count = param_pthread_join();
    return param_pthread_join();
}


// Function: thread_increment at 0x401fbc
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int *ptr)
{
    unsigned int v0;  // r5
    unsigned int result;  // r5
    unsigned int v2;  // r5

    v0 = *(ptr);
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


// Function: param_mutex_lock at 0x402024
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // r9
    unsigned int *ptr;  // r0
    unsigned int *v11;  // r4
    unsigned int flag1;  // r5
    unsigned int *v13;  // r4
    unsigned int v14;  // r5
    unsigned int *ptr;  // r8
    unsigned int *v4;  // r5
    unsigned int v5;  // r4
    unsigned int result;  // r4
    unsigned int *v7;  // r5
    unsigned int *v8;  // r5
    unsigned int v9;  // r4
    unsigned int v10;  // r5
    unsigned int v0;  // [bp-0x24]

    v1 = a0;
    v0 = a1;
    ptr = malloc(a0 * 4);
    if (!ptr)
        return 4294967295;
    ptr = ptr;
    shared_counter = 0;
    if (v1 >= 1)
    {
        v4 = ptr;
        v5 = v1;
        do
        {
            result = v5;
            v7 = v4;
            if (pthread_create(v7, 0, thread_increment, &v0))
            {
                free(ptr);
                return 4294967294;
            }
        } while ((v8 = v7 + 4, v9 = result - 1, v4 = v7 + 4, v5 = result - 1, result != 1));
        if (v1 >= 1)
        {
            v10 = v1;
            v11 = ptr;
            do
            {
                flag1 = v10;
                v13 = v11 + 1;
                pthread_join(*(v11), 0);
                v14 = flag1 - 1;
                v10 = v14;
                v11 = v13;
            } while (flag1 != 1);
        }
    }
    free(ptr);
    return (shared_counter == v0 * v1 ? 42 : 4294967293);
}


// Function: call_mutex_lock at 0x402114
unsigned int call_mutex_lock()
{
    unsigned int v0;  // r0

    v0 = param_mutex_lock(4, 1000);
    return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402120
extern unsigned int cond;
extern unsigned int cond_mutex;
extern char data;
extern char i;

unsigned int * consumer_thread()
{
    unsigned int *ptr;  // r0

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
    *(ptr) = (data ? 42 : 0);
    return ptr;
}


// Function: producer_thread at 0x4021b8
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


// Function: param_condition_variable at 0x402220
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
    unsigned int *v0;  // [bp-0x14], Other Possible Types: char
    char v1;  // [bp-0x10], Other Possible Types: unsigned int
    char v2;  // [bp-0xc]

    ready = 0;
    data = 0;
    if (pthread_create(&v1, 0, consumer_thread, 0))
    {
        return 4294967295;
    }
    else if (pthread_create(&v2, 0, producer_thread, 0))
    {
        pthread_cancel(v1);
        return 4294967294;
    }
    else
    {
        pthread_join(v1, &v0);
        pthread_join(*((int *)&v2), 0);
        free(v0);
        return *(v0);
    }
}


// Function: call_condition_variable at 0x4022dc
unsigned int call_condition_variable()
{
    unsigned int v0;  // r0

    v0 = param_condition_variable();
    return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4022e0
extern unsigned int atomic_counter;

unsigned int thread_atomic_increment(unsigned int *a0)
{
    unsigned int i;  // r7
    char v0;  // [bp-0x1c]

    if (*(a0) < 1)
        return 0;
    i = 0;
    do
    {
        __atomic_fetch_add_4(&atomic_counter, 1, 5);
        __atomic_compare_exchange_4(&atomic_counter, &v0, i + 1000, 5, 5, i);
        i += 1;
    } while (i != *(a0));
    return 0;
}


// Function: thread_atomic_load_store at 0x402354
extern unsigned int atomic_counter;

unsigned int thread_atomic_load_store()
{
    __atomic_store_4(&atomic_counter, __atomic_load_4(&atomic_counter, 5) + 100, 5);
    return 0;
}


// Function: param_atomic_ops at 0x40238c
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
    unsigned int v2;  // r6
    unsigned int *ptr;  // r0
    unsigned int flag1;  // r6
    unsigned int *v13;  // r4
    unsigned int v14;  // r6
    unsigned int v15;  // r0
    unsigned int *ptr;  // r8
    unsigned int v5;  // r5
    unsigned int *v6;  // r4
    unsigned int *v7;  // r4
    unsigned int result;  // r5
    unsigned int *v9;  // r4
    unsigned int v10;  // r5
    unsigned int *v11;  // r4
    char v0;  // [bp-0x28], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x24]

    v2 = a0;
    v1 = a1;
    ptr = malloc(a0 * 4);
    if (!ptr)
        return 4294967295;
    ptr = ptr;
    __atomic_store_4(&atomic_counter, 0, 5);
    if (v2 >= 1)
    {
        v5 = v2;
        v6 = ptr;
        do
        {
            v7 = v6;
            result = v5;
            if (pthread_create(v7, 0, thread_atomic_increment, &v1))
            {
                free(ptr);
                return 4294967294;
            }
        } while ((v9 = v7 + 4, v10 = result - 1, v5 = result - 1, v6 = v7 + 4, result != 1));
    }
    if (!pthread_create(&v0, 0, thread_atomic_load_store, 0))
        pthread_join(v0, 0);
    if (v2 >= 1)
    {
        v11 = ptr;
        do
        {
            flag1 = v2;
            v13 = v11 + 1;
            pthread_join(*(v11), 0);
            v14 = flag1 - 1;
            v2 = v14;
            v11 = v13;
        } while (flag1 != 1);
    }
    v15 = __atomic_load_4(&atomic_counter, 5);
    free(ptr);
    return (0 < v15 ? 42 : 4294967293);
}


// Function: call_atomic_ops at 0x4024b0
unsigned int call_atomic_ops()
{
    unsigned int v0;  // r0

    v0 = param_atomic_ops(4, 500);
    return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x4024bc
void thread_tls_test(unsigned int a0)
{
    unsigned int v3;  // lr
    unsigned int v4;  // r5
    unsigned int v5;  // r4
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = v4;
    v0 = v5;
    __aeabi_read_tp(); /* do not return */
}


// Function: sub_4024cc at 0x4024cc
unsigned int [2] sub_4024cc(char *a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    unsigned int v0;  // r4
    unsigned int v1;  // r5
    unsigned int ptr[2];  // r0

    v0 = *((int *)&a0[a2]);
    v1 = v0 + 50;
    *((unsigned int *)&a0[a2]) = v1;
    strncpy(a0 + 12, a1, 31);
    ptr = malloc(8);
    ptr[0] = v0;
    ptr[1] = v1;
    return ptr;
}


// Function: param_thread_local_storage at 0x402504
unsigned int param_thread_local_storage(unsigned int a0)
{
    unsigned int v3;  // r4
    unsigned int i;  // r10
    unsigned int index;  // r4
    char *ptr;  // r0
    unsigned int v18;  // r5
    unsigned int *v19;  // r4
    unsigned int *v20;  // r4
    unsigned int *v21;  // r4
    unsigned int v22;  // r9
    unsigned int *ptr;  // r8
    unsigned int v23;  // r4
    unsigned int **v24;  // r6
    unsigned int **v25;  // r6
    unsigned int result;  // r10
    unsigned int *v27;  // r5
    unsigned int **v28;  // r6
    unsigned int v29;  // r10
    unsigned int k;  // r5
    unsigned int **p;  // r11
    unsigned int v7;  // cc_dep1
    unsigned int v8;  // cc_dep2
    unsigned int v9;  // cc_ndep
    unsigned int v10;  // cc_dep1
    unsigned int v11;  // cc_dep2
    unsigned int v12;  // cc_ndep
    unsigned int v0;  // [bp-0x30]
    unsigned int *v1;  // [bp-0x2c]
    unsigned long ptr;  // [bp-0x28]

    v3 = a0 * 4;
    i = a0;
    ptr = malloc(v3);
    p = malloc(v3);
    if (ptr)
    {
        if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v7, v8, v9) ? p : v7), (armg_calculate_condition(18, v7, v8, v9) ? 0 : v8), (armg_calculate_condition(18, v7, v8, v9) ? 0 : v9)))
            return 4294967295;
    }
    else
    {
        if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v10, v11, v12) ? p : v10), (armg_calculate_condition(18, v10, v11, v12) ? 0 : v11), (armg_calculate_condition(18, v10, v11, v12) ? 0 : v12)))
            return 4294967295;
    }
    if (i >= 1)
    {
        index = 0;
        do
        {
            ptr = malloc(16);
            p[index] = ptr;
            snprintf(ptr, 16, "Thread-%d", index);
            index += 1;
        } while (i != index);
        if (i < 1)
            goto LABEL_402610;
        v18 = 0;
        v19 = ptr;
        do
        {
            v20 = v19;
            if (pthread_create(v20, 0, thread_tls_test, p[v18]))
            {
                k = 0;
                do
                {
                    free(p[k]);
                    k += 1;
                } while (v18 + 1 != k);
                free(p);
                free(ptr);
                return 4294967294;
            }
        } while ((v18 += 1, v21 = v20 + 4, v19 = v20 + 4, i != v18));
        v1 = ptr;
        v0 = i;
        if (i < 1)
            goto LABEL_402618;
        v22 = 0;
        v23 = 0;
        v24 = p;
        do
        {
            v25 = v24;
            result = i;
            v27 = ptr + 1;
            pthread_join(*(ptr), &ptr);
            free(ptr);
            v28 = v25 + 1;
            free(*(v25));
            v22 += *((int *)(ptr + 4));
            v23 += *((int *)ptr);
            v29 = result - 1;
            i = v29;
            v24 = v28;
            ptr = v27;
        } while (result != 1);
    }
    else
    {
LABEL_402610:
        v0 = i;
        v1 = ptr;
LABEL_402618:
        v23 = 0;
        v22 = 0;
    }
    free(p);
    free(v1);
    return (!(v23 ^ v0 * 100) && !(v22 ^ v0 * 150) ? 4294967293 : 42);
}


// Function: call_thread_local_storage at 0x4026a0
unsigned int call_thread_local_storage()
{
    unsigned int count;  // r0

    count = param_thread_local_storage(4);
    return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x4026a8
extern char g_402b0d;
extern char g_402b29;
extern char g_402b46;
extern char g_402b62;
extern char g_402b7e;
extern char g_402b9a;
extern char g_402bf5;

int test_thread_concurrency()
{
    unsigned int count;  // r0
    unsigned int v6;  // r0

    puts(&g_402bf5);
    printf(&g_402b0d, param_pthread_create(7));
    printf(&g_402b29, param_pthread_join());
    printf(&g_402b46, param_mutex_lock(4, 1000));
    printf(&g_402b62, param_condition_variable());
    printf(&g_402b7e, param_atomic_ops(4, 500));
    count = param_thread_local_storage(4);
    v6 = printf(&g_402b9a, count);
    return printf(&g_402b9a, count);
}


// Function: main at 0x402768
unsigned int main()
{
    test_standard_library_functions();
    test_system_calls();
    test_thread_concurrency();
    return 0;
}


// Function: __aeabi_read_tp at 0x402790
void __aeabi_read_tp()
{
}


// Function: _fini at 0x402798
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

