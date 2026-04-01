// Angr Decompilation of 6_gcc_O0_g
// Platform: AARCH64

// Function: _init at 0x4013b0
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x4013d0
extern unsigned long long g_414dc8;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_414dc8;
}


// Function: sub_4013e4 at 0x4013e4
long long sub_4013e4()
{
    void* v0;  // x0
    void* v1;  // x1
    unsigned long v2;  // x2
    unsigned long long dst;  // x0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x401800
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)__getauxval(16), 24)) & 1;
    return __ROL__((unsigned int)__getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_401824 at 0x401824
void sub_401824(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x401840
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_401870 at 0x401870
void sub_401870()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x401874
extern unsigned long long g_414fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_414fe0)
        return 0;
    v0 = __gmon_start__(g_414fe0);
    return __gmon_start__(g_414fe0);
}


// Function: sub_401888 at 0x401888
void sub_401888()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401890
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x4018c0
extern char __TMC_END__;
extern unsigned long long g_414ff8;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_414ff8)
    {
        goto g_414ff8;
    }
    else
    {
        return &__TMC_END__;
    }
}


// Function: sub_4018fc at 0x4018fc
void sub_4018fc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401900
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_414fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_414fd8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __TMC_END__ = 1;
    return 1;
}


// Function: sub_401948 at 0x401948
long long sub_401948()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x401950
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_strcpy at 0x401954
long long param_strcpy(char *ptr, char *a1)
{
    unsigned long long len;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    strcpy(ptr, a1);
    len = strlen(ptr);
    return strlen(ptr);
}


// Function: call_strcpy at 0x401980
extern char __stack_chk_guard;

long long call_strcpy()
{
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x2c]
    char v2[32];  // [bp-0x28]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    v1 = param_strcpy(&v2, "HelloLib");
    if (v3 == *((long long *)&__stack_chk_guard))
        return v1;
    __stack_chk_fail(); /* do not return */
}


// Function: param_strcmp at 0x4019e8
unsigned long long param_strcmp(char *a0, char *a1)
{
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = strcmp(a0, a1);
    if (0 < v1)
    {
        return 1;
    }
    else if (0 > v1)
    {
        return 4294967295;
    }
    else
    {
        return 0;
    }
}


// Function: call_strcmp at 0x401a3c
int call_strcmp()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v1 = param_strcmp("abc", "def");
    v2 = param_strcmp("xyz", "xyz");
    v3 = param_strcmp("bbb", "aaa");
    return v1 + v2 + v3;
}


// Function: param_strlen at 0x401aa8
unsigned long long param_strlen(char *a0)
{
    char *v0;  // [bp-0x30]
    unsigned long long len;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    len = strlen(a0);
    return len;
}


// Function: call_strlen at 0x401acc
unsigned long long call_strlen()
{
    unsigned long long len;  // x0
    char *v0;  // [bp-0x20]
    char *v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = "BinBench2025";
    len = param_strlen(v1);
    return param_strlen(v1);
}


// Function: param_memcpy at 0x401af0
long long param_memcpy(void* a0, void* a1, unsigned long n)
{
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    memcpy(a0, a1, n);
    return n;
}


// Function: call_memcpy at 0x401b20
extern char __stack_chk_guard;

unsigned long long call_memcpy()
{
    char *v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    char v6;  // [bp-0x10]
    unsigned long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = &v8;
    v7 = *((long long *)&__stack_chk_guard);
    v1 = 85899345930;
    v2 = 171798691870;
    v3 = 50;
    memset(&v4, 0, 20);
    param_memcpy(&v4, &v1, 20);
    if (v7 == *((long long *)&__stack_chk_guard))
        return *((int *)&v4) + *((int *)&v5) + *((int *)&v6) & 4294967295;
    __stack_chk_fail(); /* do not return */
}


// Function: param_memcmp at 0x401bb8
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = memcmp(a0, a1, a2);
    if (0 < v1)
    {
        return 1;
    }
    else if (0 > v1)
    {
        return 4294967295;
    }
    else
    {
        return 0;
    }
}


// Function: call_memcmp at 0x401c14
extern char __stack_chk_guard;

unsigned long long call_memcmp()
{
    char *v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned long v3;  // [bp-0x38]
    unsigned int v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned int v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = &v10;
    v9 = *((long long *)&__stack_chk_guard);
    v3 = 8589934593;
    v4 = 3;
    v5 = 8589934593;
    v6 = 4;
    v7 = 8589934593;
    v8 = 3;
    v1 = param_memcmp(&v3, &v5, 12);
    v2 = param_memcmp(&v3, &v7, 12);
    if (v9 == *((long long *)&__stack_chk_guard))
        return v1 + v2 & 4294967295;
    __stack_chk_fail(); /* do not return */
}


// Function: param_printf at 0x401ce8
int param_printf(unsigned int a0, unsigned long a1)
{
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = printf("Value: %d, Name: %s\n", a0, a1);
    return v1;
}


// Function: call_printf at 0x401d1c
int call_printf()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = param_printf(42, "Test");
    return v1;
}


// Function: param_scanf at 0x401d44
extern char __stack_chk_guard;

long long param_scanf(char *a0)
{
    unsigned int v6;  // w0
    char *v0;  // [bp-0x40]
    char v1;  // [bp-0x14], Other Possible Types: unsigned int
    char v2;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0xc]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v3 = __isoc99_sscanf(a0, "%d,%d", &v1, &v2);
    if (v3 == 2)
        v6 = v1 + v2;
    else
        v6 = 4294967295;
    if (v4 == *((long long *)&__stack_chk_guard))
        return v6;
    __stack_chk_fail(); /* do not return */
}


// Function: call_scanf at 0x401dd8
unsigned long long call_scanf()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_scanf("123,456");
    return param_scanf("123,456");
}


// Function: param_fopen_fclose at 0x401df4
typedef struct FILE {
} FILE;

unsigned long long param_fopen_fclose(char *a0)
{
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0xc]
    FILE *fp;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    fp = fopen(a0, "r");
    if (fp)
    {
        v1 = fileno(fp);
        fclose(fp);
        return v1;
    }
    return 4294967295;
}


// Function: call_fopen_fclose at 0x401e48
unsigned long long call_fopen_fclose()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = param_fopen_fclose("/etc/passwd");
    if (v1 < 0)
        return 4294967295;
    return 42;
}


// Function: param_fread_fwrite at 0x401e80
extern char __stack_chk_guard;

long long param_fread_fwrite(char *a0)
{
    unsigned int v8;  // w0
    char *v0;  // [bp-0x70]
    void* v1;  // [bp-0x48]
    void* fp;  // [bp-0x40]
    unsigned long count;  // [bp-0x38]
    unsigned long count;  // [bp-0x30]
    char v5;  // [bp-0x28]
    unsigned long v6;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v0 = &v7;
    v6 = *((long long *)&__stack_chk_guard);
    v1 = "BinBench Test Data";
    fp = fopen(a0, "w+");
    if (!fp)
    {
        v8 = 4294967295;
    }
    else
    {
        count = fwrite(v1, 1, strlen(v1), fp);
        if (count != strlen(v1))
        {
            fclose(fp);
            v8 = 4294967294;
        }
        else
        {
            rewind(fp);
            count = fread(&v5, 1, count, fp);
            (&v5)[count] = 0;
            fclose(fp);
            unlink(a0);
            if (count == count && !strcmp(&v5, v1))
                v8 = 42;
            else
                v8 = 4294967293;
        }
    }
    if (v6 == *((long long *)&__stack_chk_guard))
        return v8;
    __stack_chk_fail(); /* do not return */
}


// Function: call_fread_fwrite at 0x401fb8
unsigned long long call_fread_fwrite()
{
    unsigned long long count;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = param_fread_fwrite("/tmp/binbench_test.tmp");
    return param_fread_fwrite("/tmp/binbench_test.tmp");
}


// Function: param_malloc_free at 0x401fd4
unsigned long long param_malloc_free(unsigned long long a0)
{
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x14]
    unsigned long long i;  // [bp-0x10]
    unsigned int *ptr;  // [bp-0x8], Other Possible Types: unsigned long long
    char v4;  // [bp+0x0]

    v0 = &v4;
    ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
    if (!ptr)
        return 4294967295;
    for (i = 0; i < a0; i += 1)
    {
        *((unsigned int *)((char *)ptr + (__ROL__(i, 2) & 18446744073709551612))) = (((((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i) * 2 | (((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i >> 31) & 4294967294;
    }
    v1 = *(ptr) + *((int *)(-4 + (char *)ptr + (__ROL__(a0, 2) & 18446744073709551612)));
    free(ptr);
    ptr = 0;
    return v1;
}


// Function: call_malloc_free at 0x40209c
unsigned long long call_malloc_free()
{
    unsigned long long ptr;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = param_malloc_free(10);
    return param_malloc_free(10);
}


// Function: param_memset at 0x4020b4
unsigned int param_memset(void* a0)
{
    unsigned long n;  // x1
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x14]
    unsigned long i;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v0 = &v3;
    memset(a0, 0, n);
    v1 = 0;
    for (i = 0; i < n; i += 1)
    {
        v1 += *((char *)a0 + i);
    }
    return v1;
}


// Function: call_memset at 0x402130
extern char __stack_chk_guard;

unsigned long long call_memset()
{
    char *v0;  // [bp-0x50]
    unsigned int i;  // [bp-0x34]
    unsigned long v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0xc]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    for (i = 0; i <= 9; i += 1)
    {
        *((unsigned int *)((char *)&v2 + (__ROL__(i, 2) & 18446744073709551612))) = 255;
    }
    param_memset(&v2);
    if (v4 == *((long long *)&__stack_chk_guard))
        return (unsigned int)v2 + v3 & 4294967295;
    __stack_chk_fail(); /* do not return */
}


// Function: param_strchr_strstr at 0x4021c8
int param_strchr_strstr(char *a0, char a1, char *a2)
{
    unsigned int v6;  // w0
    unsigned int v7;  // w0
    char *v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    unsigned long long ptr;  // [bp-0x10]
    unsigned long long ptr;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    ptr = strchr(a0, a1);
    if (ptr)
        v6 = (unsigned int)(ptr - a0);
    else
        v6 = 4294967295;
    v1 = v6;
    ptr = strstr(a0, a2);
    if (ptr)
        v7 = (unsigned int)(ptr - a0);
    else
        v7 = 4294967295;
    v2 = v7;
    return v1 + v2;
}


// Function: call_strchr_strstr at 0x40225c
int call_strchr_strstr()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0xc]
    char *v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = "Hello BinBench Test";
    v1 = param_strchr_strstr(v2, 66, "Bench");
    return v1;
}


// Function: test_standard_library_functions at 0x402294
extern char g_403b80;
extern char g_403ba8;
extern char g_403bc8;
extern char g_403be8;
extern char g_403c08;
extern char g_403c28;
extern char g_403c48;
extern char g_403c68;
extern char g_403c88;
extern char g_403ca8;
extern char g_403cc8;
extern char g_403ce8;
extern char g_403d08;

int test_standard_library_functions()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_403b80);
    printf(&g_403ba8, call_strcpy() & 4294967295);
    printf(&g_403bc8, call_strcmp() & 4294967295);
    printf(&g_403be8, call_strlen() & 4294967295);
    printf(&g_403c08, call_memcpy() & 4294967295);
    printf(&g_403c28, call_memcmp() & 4294967295);
    printf(&g_403c48, call_printf() & 4294967295);
    printf(&g_403c68, call_scanf() & 4294967295);
    printf(&g_403c88, call_fopen_fclose() & 4294967295);
    printf(&g_403ca8, call_fread_fwrite() & 4294967295);
    printf(&g_403cc8, call_malloc_free() & 4294967295);
    printf(&g_403ce8, call_memset() & 4294967295);
    return printf(&g_403d08, call_strchr_strstr() & 4294967295);
}


// Function: param_linux_syscall at 0x4023a4
unsigned int param_linux_syscall(unsigned long long a0)
{
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x4]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v1 = a0;
    v2 = syscall(56);
    if (0 <= v2)
    {
        syscall(57);
        return v2;
    }
    return -(*(__errno_location()));
}


// Function: call_linux_syscall at 0x4023fc
unsigned long long call_linux_syscall()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = param_linux_syscall("/etc/passwd");
    if (v1 < 0)
        return 4294967295;
    return 42;
}


// Function: param_win32_api at 0x402434
extern char __stack_chk_guard;

long long param_win32_api(unsigned long long a0)
{
    unsigned int v5;  // w0
    char *v0;  // [bp-0xb0]
    char v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    if (0 > (int)stat(a0, &v1))
    {
        v5 = 4294967295;
    }
    else if (v2 > 0)
    {
        v5 = 42;
    }
    else
    {
        v5 = 4294967294;
    }
    if (v3 == *((long long *)&__stack_chk_guard))
        return v5;
    __stack_chk_fail(); /* do not return */
}


// Function: call_win32_api at 0x4024bc
unsigned long long call_win32_api()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_win32_api("/etc/passwd");
    return param_win32_api("/etc/passwd");
}


// Function: param_fork_exec at 0x4024d8
extern char __stack_chk_guard;

long long param_fork_exec(char *a0, unsigned long long a1)
{
    unsigned int v7;  // w0
    char *v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x30]
    unsigned int v2[1];  // [bp-0x14]
    unsigned int result;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v1 = a1;
    v5 = *((long long *)&__stack_chk_guard);
    result = fork();
    if (0 > result)
    {
        v7 = 4294967295;
    }
    else
    {
        if (!result)
        {
            execl(a0, a0);
            _exit(127); /* do not return */
        }
        v4 = waitpid(result, &v2, 0);
        if (0 > v4)
        {
            v7 = 4294967294;
        }
        else if (!((char)*(v2) & 127))
        {
            v7 = (*(v2) >> 31 & 0xff000000 | __ROL__(*(v2), 24) & 16777215) & 255;
        }
        else
        {
            v7 = 4294967293;
        }
    }
    if (v5 == *((long long *)&__stack_chk_guard))
        return v7;
    __stack_chk_fail(); /* do not return */
}


// Function: call_fork_exec at 0x4025c0
unsigned long long call_fork_exec()
{
    char *v0;  // [bp-0x20]
    unsigned int result;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    result = param_fork_exec("/bin/true", 0);
    if (result)
        return 4294967295;
    return 42;
}


// Function: param_pipe_communication at 0x4025fc
extern char __stack_chk_guard;

long long param_pipe_communication()
{
    unsigned int v9;  // w0
    char *v0;  // [bp-0x70]
    unsigned int result;  // [bp-0x44]
    unsigned long long count;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    char v4;  // [bp-0x30], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x2c]
    char v6;  // [bp-0x28]
    unsigned long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = &v8;
    v7 = *((long long *)&__stack_chk_guard);
    if (0 > pipe(&v4))
    {
        v9 = 4294967295;
    }
    else
    {
        result = fork();
        if (0 > result)
        {
            v9 = 4294967294;
        }
        else
        {
            if (!result)
            {
                close(v4);
                v3 = "HelloPipe";
                write(v5, v3, strlen(v3));
                close(v5);
                _exit(0); /* do not return */
            }
            close(v5);
            count = read(v4, &v6, 31);
            (&v6)[count] = 0;
            close(v4);
            wait(NULL);
            if (count > 0)
                v9 = 42;
            else
                v9 = 4294967293;
        }
    }
    if (v7 == *((long long *)&__stack_chk_guard))
        return v9;
    __stack_chk_fail(); /* do not return */
}


// Function: call_pipe_communication at 0x402720
unsigned long long call_pipe_communication()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_pipe_communication();
    return param_pipe_communication();
}


// Function: param_socket_create at 0x402734
typedef struct sockaddr {
    unsigned short sin_family;
    char sa_data[14];
} sockaddr;

extern char __stack_chk_guard;

long long param_socket_create()
{
    unsigned int v9;  // w0
    char *v0;  // [bp-0x30]
    unsigned int result;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    sockaddr v3;  // [bp-0x18]
    unsigned long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = &v8;
    v7 = *((long long *)&__stack_chk_guard);
    v2 = socket(2, 1, 0);
    if (0 > v2)
    {
        v9 = 4294967295;
    }
    else
    {
        result = 1;
        if (0 > setsockopt(v2, 1, 2, &result, 4))
        {
            close(v2);
            v9 = 4294967294;
        }
        else
        {
            memset(&v3, 0, 16);
            v3.sin_family = 2;
            *((unsigned short *)&v3.sa_data[0]) = htons(0);
            *((unsigned int *)&v3.sa_data[2]) = 0;
            if (0 > bind(v2, &v3, 16))
            {
                close(v2);
                v9 = 4294967293;
            }
            else if (0 > listen(v2, 5))
            {
                close(v2);
                v9 = 0xfffffffc;
            }
            else
            {
                close(v2);
                v9 = 42;
            }
        }
    }
    if (v7 == *((long long *)&__stack_chk_guard))
        return v9;
    __stack_chk_fail(); /* do not return */
}


// Function: call_socket_create at 0x40286c
unsigned long long call_socket_create()
{
    unsigned long long sock;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    sock = param_socket_create();
    return param_socket_create();
}


// Function: param_shmget_shmat at 0x402880
typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_5;
} struct_0;

unsigned long long param_shmget_shmat()
{
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0x14]
    char *v5;  // [bp-0x10]
    struct_0 *ptr;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v0 = &v7;
    v5 = "/tmp/binbench_shm";
    v1 = open(v5, 66, 438);
    if (0 > v1)
        return 4294967295;
    close(v1);
    v2 = ftok("/tmp/binbench_shm", 42);
    if (0 > v2)
        return 4294967295;
    v3 = shmget(v2, 0x1000, 950);
    if (0 > v3)
        return 4294967294;
    ptr = shmat(v3, 0, 0);
    if ((char)arm64g_calculate_condition(18, ptr, 1, 0))
    {
        ptr->field_0 = 7299600957910902867;
        *((unsigned long long *)((char *)&ptr->field_0 + 5)) = 34184295084281188;
        v4 = strlen(ptr);
        shmdt(ptr);
        shmctl(v3, 0, 0);
        return v4;
    }
    return 4294967293;
}


// Function: call_shmget_shmat at 0x40298c
unsigned long long call_shmget_shmat()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = param_shmget_shmat();
    if (v1 <= 0)
        return 4294967295;
    return 42;
}


// Function: signal_handler at 0x4029bc
extern unsigned int $d;
extern unsigned int signal_number;

unsigned int * signal_handler(unsigned int a0)
{
    $d = 1;
    signal_number = a0;
    return &signal_number;
}


// Function: param_signal_handling at 0x4029f0
extern unsigned int $d;
extern unsigned int signal_number;

unsigned long long param_signal_handling()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    unsigned int v2;  // [bp-0x4]
    char v3;  // [bp+0x0]

    v0 = &v3;
    if (!((char)arm64g_calculate_condition(18, signal(10, signal_handler), 1, 0)))
    {
        return 4294967295;
    }
    else if (!((char)arm64g_calculate_condition(18, signal(14, signal_handler), 1, 0)))
    {
        return 4294967294;
    }
    else
    {
        $d = 0;
        raise(10);
        v1 = 1000;
        while (true)
        {
            if ($d || !((v2 = v1 - 1, 0 < v1)))
                break;
            usleep(1000);
            v1 = v2;
        }
        if (!$d)
        {
            return 4294967293;
        }
        else if (signal_number != 10)
        {
            return 0xfffffffc;
        }
        else
        {
            $d = 0;
            alarm(1);
            v1 = 2000;
            while (true)
            {
                if ($d || !((v2 = v1 - 1, 0 < v1)))
                    break;
                usleep(1000);
                v1 = v2;
            }
            if (!$d || signal_number != 14)
                return 4294967291;
            signal(10, NULL);
            signal(14, NULL);
            return 42;
            return 4294967291;
        }
    }
}


// Function: call_signal_handling at 0x402b64
unsigned long long call_signal_handling()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_signal_handling();
    return param_signal_handling();
}


// Function: test_system_calls at 0x402b78
extern char g_403d70;
extern char g_403d90;
extern char g_403db0;
extern char g_403dd0;
extern char g_403df0;
extern char g_403e10;
extern char g_403e30;
extern char g_403e50;

int test_system_calls()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_403d70);
    printf(&g_403d90, call_linux_syscall() & 4294967295);
    printf(&g_403db0, call_win32_api() & 4294967295);
    printf(&g_403dd0, call_fork_exec() & 4294967295);
    printf(&g_403df0, call_pipe_communication() & 4294967295);
    printf(&g_403e10, call_socket_create() & 4294967295);
    printf(&g_403e30, call_shmget_shmat() & 4294967295);
    return printf(&g_403e50, call_signal_handling() & 4294967295);
}


// Function: thread_compute at 0x402c24
unsigned int * thread_compute(unsigned int *p)
{
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v1 = *(p);
    v2 = v1 * v1;
    ptr = malloc(4);
    *(ptr) = v2;
    return ptr;
}


// Function: param_pthread_create at 0x402c74
extern char __stack_chk_guard;

long long param_pthread_create(unsigned int a0)
{
    unsigned int v7;  // w0
    char *v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x24]
    unsigned int result;  // [bp-0x20]
    char v3;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned int *ptr;  // [bp-0x10], Other Possible Types: char
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    v1 = a0;
    result = pthread_create(&v3, 0, thread_compute, &v1, &v3);
    if (result)
    {
        v7 = 4294967295;
    }
    else
    {
        pthread_join(v3, &ptr);
        v7 = *(ptr);
        free(ptr);
    }
    if (v5 == *((long long *)&__stack_chk_guard))
        return v7;
    __stack_chk_fail(); /* do not return */
}


// Function: call_pthread_create at 0x402d28
unsigned long long call_pthread_create()
{
    unsigned long long count;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = param_pthread_create(7);
    return param_pthread_create(7);
}


// Function: thread_sum at 0x402d40
unsigned long long thread_sum(unsigned int *ptr)
{
    unsigned int i;  // [bp-0xc]

    ptr[2] = 0;
    for (i = *(ptr); i <= ptr[1]; i += 1)
    {
        ptr[2] = ptr[2] + i;
    }
    return 0;
}


// Function: param_pthread_join at 0x402dac
extern char __stack_chk_guard;

long long param_pthread_join()
{
    char *v10;  // x4
    unsigned int v11;  // w0
    char *v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x54]
    unsigned int v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned long v4;  // [bp-0x48]
    uint128_t v5;  // [bp-0x30]
    unsigned long v12;  // [bp-0x28]
    uint128_t v6;  // [bp-0x20]
    unsigned int result;  // [bp-0x10]
    unsigned long v8;  // [bp-0x8]
    char v9;  // [bp+0x0]

    v0 = &v9;
    v8 = *((long long *)&__stack_chk_guard);
    v5 = 871509787656907713571933126657;
    v6 = 2376844875815311753354219094036;
    result = 0;
    v1 = 0;
    while (true)
    {
        if (v1 <= 2)
        {
            v10 = (char *)&v4 + (__ROL__(v1, 3) & 18446744073709551608);
            if ((int)pthread_create(v10, 0, thread_sum, (char *)&v5 + (__ROL__((__ROL__(v1, 1) & 18446744073709551614) + v1, 2) & 18446744073709551612), v10))
            {
                v11 = 4294967295;
                break;
            }
            else
            {
                v1 += 1;
            }
        }
        else
        {
            v2 = 0;
            v3 = 0;
            while (true)
            {
                if (v3 > 2)
                {
                    v11 = v2;
                    break;
                }
                else if ((int)pthread_join(*((long long *)((char *)&v4 + (__ROL__(v3, 3) & 18446744073709551608))), 0))
                {
                    v11 = 4294967294;
                    break;
                }
                else
                {
                    v2 += *((int *)((char *)&v12 + (__ROL__((__ROL__(v3, 1) & 18446744073709551614) + v3, 2) & 18446744073709551612)));
                    v3 += 1;
                }
            }
        }
    }
    if (v8 == *((long long *)&__stack_chk_guard))
        return v11;
    __stack_chk_fail(); /* do not return */
}


// Function: call_pthread_join at 0x402f00
unsigned long long call_pthread_join()
{
    unsigned long long count;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = param_pthread_join();
    return param_pthread_join();
}


// Function: thread_increment at 0x402f14
extern unsigned long long counter_mutex;
extern unsigned int shared_counter;

unsigned long long thread_increment(unsigned int *ptr)
{
    unsigned long v4;  // x1
    char *v0;  // [bp-0x30]
    unsigned int i;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = *(ptr);
    for (i = 0; i < v2; i += 1)
    {
        pthread_mutex_lock(&counter_mutex);
        v4 = shared_counter + 1;
        shared_counter = shared_counter + 1;
        pthread_mutex_unlock(&counter_mutex, v4);
        usleep(1000);
    }
    return 0;
}


// Function: param_mutex_lock at 0x402f98
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned int a0, unsigned int a1)
{
    unsigned long long v7;  // x4
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x28]
    unsigned int i;  // [bp-0x14]
    unsigned int j;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned int *ptr;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v1 = a1;
    ptr = malloc(__ROL__(a0, 3) & 18446744073709551608);
    if (!ptr)
        return 4294967295;
    shared_counter = 0;
    for (i = 0; i < a0; i += 1)
    {
        v7 = (char *)ptr + (__ROL__(i, 3) & 18446744073709551608);
        if ((int)pthread_create(v7, 0, thread_increment, &v1, v7))
        {
            free(ptr);
            return 4294967294;
        }
    }
    for (j = 0; j < a0; j += 1)
    {
        pthread_join(*((long long *)((char *)ptr + (__ROL__(j, 3) & 18446744073709551608))), 0);
    }
    free(ptr);
    v4 = v1 * a0;
    if (v4 != shared_counter)
        return 4294967293;
    return 42;
}


// Function: call_mutex_lock at 0x4030c4
unsigned long long call_mutex_lock()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_mutex_lock(4, 1000);
    return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x4030e0
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int i;

unsigned int * consumer_thread(unsigned long long a0)
{
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0xc]
    unsigned int *ptr;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v1 = a0;
    pthread_mutex_lock(&cond_mutex);
    while (!i)
    {
        pthread_cond_wait(&cond, &cond_mutex);
    }
    v2 = data;
    pthread_mutex_unlock(&cond_mutex);
    ptr = malloc(4);
    *(ptr) = v2;
    return ptr;
}


// Function: producer_thread at 0x403164
extern unsigned long long cond;
extern unsigned long long cond_mutex;
extern unsigned int data;
extern unsigned int ready;

unsigned long long producer_thread(unsigned long long a0)
{
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = a0;
    sleep(1);
    pthread_mutex_lock(&cond_mutex);
    data = 42;
    ready = 1;
    pthread_cond_signal(&cond, 1);
    pthread_mutex_unlock(&cond_mutex);
    return 0;
}


// Function: param_condition_variable at 0x4031c8
extern char __stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;

long long param_condition_variable()
{
    unsigned int v7;  // w0
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x24]
    char v2;  // [bp-0x20], Other Possible Types: unsigned long long
    char v3;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned int *ptr;  // [bp-0x10], Other Possible Types: char
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    ready = 0;
    data = 0;
    if ((int)pthread_create(&v3, 0, consumer_thread, NULL, &v3))
    {
        v7 = 4294967295;
    }
    else if ((int)pthread_create(&v2, 0, producer_thread, NULL, &v2))
    {
        pthread_cancel(v3);
        v7 = 4294967294;
    }
    else
    {
        pthread_join(v3, &ptr);
        pthread_join(v2, 0);
        v1 = *(ptr);
        free(ptr);
        v7 = v1;
    }
    if (v5 == *((long long *)&__stack_chk_guard))
        return v7;
    __stack_chk_fail(); /* do not return */
}


// Function: call_condition_variable at 0x4032bc
unsigned long long call_condition_variable()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_condition_variable();
    return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4032d0
extern char __stack_chk_guard;
extern unsigned long long atomic_counter;

unsigned long long thread_atomic_increment(unsigned int *ptr)
{
    unsigned int v7;  // w0
    unsigned int result;  // w0
    char *v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x18]
    unsigned int i;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    v3 = *(ptr);
    for (i = 0; i < v3; i += 1)
    {
        __aarch64_ldadd4_acq_rel(1, &atomic_counter);
        v1 = i;
        v4 = i + 1000;
        v7 = __aarch64_cas4_acq_rel(v1, v4, &atomic_counter);
        if (v7 != v1)
            result = 0;
        else
            result = 1;
        if (!result)
            v1 = v7;
    }
    if (v5 == *((long long *)&__stack_chk_guard))
        return 0;
    __stack_chk_fail(); /* do not return */
}


// Function: thread_atomic_load_store at 0x4033bc
extern unsigned int atomic_counter;

unsigned int thread_atomic_load_store(unsigned long a0)
{
    unsigned int v0;  // [bp-0x4]

    [D] MBusEvent-Imbe_Fence()
    v0 = atomic_counter;
    [D] MBusEvent-Imbe_Fence()
    atomic_counter = v0 + 100;
    return 0;
}


// Function: param_atomic_ops at 0x4033f8
extern char __stack_chk_guard;
extern unsigned int atomic_counter;

long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
    unsigned int v9;  // w0
    unsigned long long v10;  // x4
    char *v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x24]
    unsigned int i;  // [bp-0x20]
    unsigned int v4;  // [bp-0x1c]
    char v5;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned int *ptr;  // [bp-0x10]
    unsigned long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = &v8;
    v1 = a1;
    v7 = *((long long *)&__stack_chk_guard);
    ptr = malloc(__ROL__(a0, 3) & 18446744073709551608);
    if (!ptr)
    {
        v9 = 4294967295;
    }
    else
    {
        [D] MBusEvent-Imbe_Fence()
        atomic_counter = 0;
        v2 = 0;
        while (true)
        {
            if (v2 < a0)
            {
                v10 = (char *)ptr + (__ROL__(v2, 3) & 18446744073709551608);
                if ((int)pthread_create(v10, 0, thread_atomic_increment, &v1, v10))
                {
                    free(ptr);
                    v9 = 4294967294;
                    break;
                }
                else
                {
                    v2 += 1;
                }
            }
            else
            {
                if (!(int)pthread_create(&v5, 0, thread_atomic_load_store, NULL, &v5))
                    pthread_join(v5, 0);
                for (i = 0; i < a0; i += 1)
                {
                    pthread_join(*((long long *)((char *)ptr + (__ROL__(i, 3) & 18446744073709551608))), 0);
                }
                [D] MBusEvent-Imbe_Fence()
                v4 = atomic_counter;
                free(ptr);
                if (v4 > 0)
                {
                    v9 = 42;
                    break;
                }
                else
                {
                    v9 = 4294967293;
                    break;
                }
            }
        }
    }
    if (v7 == *((long long *)&__stack_chk_guard))
        return v9;
    __stack_chk_fail(); /* do not return */
}


// Function: call_atomic_ops at 0x403584
unsigned long long call_atomic_ops()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_atomic_ops(4, 500);
    return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x4035a0
typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
} struct_0;

unsigned int [2] thread_tls_test(char *a0)
{
    struct_0 *p;  // tpidr_el0
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x14]
    unsigned int ptr[2];  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v1 = p->field_10;
    p->field_10 = p->field_10 + 50;
    strncpy(&p[1].padding_0[4], a0, 31);
    *((void* *)&ptr[0]) = malloc(8);
    ptr[0] = v1;
    ptr[1] = p->field_10;
    return ptr;
}


// Function: param_thread_local_storage at 0x403644
extern char __stack_chk_guard;

long long param_thread_local_storage(unsigned int a0)
{
    unsigned long long v15;  // x4
    unsigned int v16;  // w0
    char *v0;  // [bp-0x80]
    unsigned int i;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int j;  // [bp-0x40]
    char v4;  // [bp-0x3c], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x38]
    unsigned int k;  // [bp-0x34]
    unsigned int v7;  // [bp-0x30]
    unsigned int v8;  // [bp-0x2c]
    unsigned int v9[2];  // [bp-0x28]
    unsigned int *addr;  // [bp-0x20]
    unsigned int *p;  // [bp-0x18]
    unsigned int ptr[2];  // [bp-0x10]
    unsigned long v13;  // [bp-0x8]
    char v14;  // [bp+0x0]

    v0 = &v14;
    v13 = *((long long *)&__stack_chk_guard);
    addr = malloc(__ROL__(a0, 3) & 18446744073709551608);
    p = malloc(__ROL__(a0, 3) & 18446744073709551608);
    if (!addr || !p)
    {
        v16 = 4294967295;
    }
    else
    {
        for (i = 0; i < a0; i += 1)
        {
            *((void* *)((char *)p + (__ROL__(i, 3) & 18446744073709551608))) = malloc(16);
            snprintf(*((long long *)((char *)p + (__ROL__(i, 3) & 18446744073709551608))), 16, "Thread-%d", i);
        }
        v2 = 0;
        while (true)
        {
            if (v2 < a0)
            {
                v15 = (char *)addr + (__ROL__(v2, 3) & 18446744073709551608);
                if ((int)pthread_create(v15, 0, thread_tls_test, *((long long *)((char *)p + (__ROL__(v2, 3) & 18446744073709551608))), v15))
                {
                    for (j = 0; j <= v2; j += 1)
                    {
                        free(*((long long *)((char *)p + (__ROL__(j, 3) & 18446744073709551608))));
                    }
                    free(p);
                    free(addr);
                    v16 = 4294967294;
                    break;
                }
                else
                {
                    v2 += 1;
                }
            }
            else
            {
                memset(&v4, 0, 12);
                for (; k < a0; k += 1)
                {
                    pthread_join(*((long long *)((char *)addr + (__ROL__(k, 3) & 18446744073709551608))), &v9);
                    *((unsigned int *[2])&ptr[0]) = v9;
                    v4 += ptr[0];
                    v5 += ptr[1];
                    free(ptr);
                    free(*((long long *)((char *)p + (__ROL__(k, 3) & 18446744073709551608))));
                }
                free(p);
                free(addr);
                v7 = 100 * a0;
                v8 = 150 * a0;
                if (v4 == v7 && v5 == v8)
                {
                    v16 = 42;
                    break;
                }
                else
                {
                    v16 = 4294967293;
                    break;
                }
            }
        }
    }
    if (v13 == *((long long *)&__stack_chk_guard))
        return v16;
    __stack_chk_fail(); /* do not return */
}


// Function: call_thread_local_storage at 0x4038fc
unsigned long long call_thread_local_storage()
{
    unsigned long long count;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    count = param_thread_local_storage(4);
    return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x403914
extern char g_403ea8;
extern char g_403ec8;
extern char g_403ee8;
extern char g_403f08;
extern char g_403f28;
extern char g_403f48;
extern char g_403f68;

int test_thread_concurrency()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_403ea8);
    printf(&g_403ec8, call_pthread_create() & 4294967295);
    printf(&g_403ee8, call_pthread_join() & 4294967295);
    printf(&g_403f08, call_mutex_lock() & 4294967295);
    printf(&g_403f28, call_condition_variable() & 4294967295);
    printf(&g_403f48, call_atomic_ops() & 4294967295);
    return printf(&g_403f68, call_thread_local_storage() & 4294967295);
}


// Function: main at 0x4039ac
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_standard_library_functions();
    test_system_calls();
    test_thread_concurrency();
    return 0;
}


// Function: sub_4039cc at 0x4039cc
long long sub_4039cc()
{
    unsigned long long v0;  // x0

    v0 = __aarch64_cas4_acq_rel();
    return __aarch64_cas4_acq_rel();
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x4039d0
// Function: sub_4039e4 at 0x4039e4
long long sub_4039e4()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: sub_403a04 at 0x403a04
long long sub_403a04()
{
    unsigned long long v0;  // x0

    v0 = __aarch64_ldadd4_acq_rel();
    return __aarch64_ldadd4_acq_rel();
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x403a10
// Function: sub_403a24 at 0x403a24
long long sub_403a24()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _fini at 0x403a40
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

