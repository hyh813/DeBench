// Angr Decompilation of 6_clang_O0_g
// Platform: X86

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *g_406ff4;

int _init()
{
    if (g_406ff4)
        g_406ff4();
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


// Function: sub_4013d0 at 0x4013d0
int sub_4013d0()
{
    void* v1;  // ebx

    goto (int)v1[16];
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6()
{
}


// Function: _start at 0x4013e0
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


// Function: sub_40140b at 0x40140b
void sub_40140b()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4199435()
}


// Function: sub_40140c at 0x40140c
void sub_40140c()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x401410
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_401414 at 0x401414
void sub_401414()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401420
unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[5940] + 3;
}


// Function: sub_401453 at 0x401453
void sub_401453()
{
}


// Function: sub_401459 at 0x401459
void sub_401459()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401460
typedef struct struct_0 {
    char padding_0[23447];
    struct struct_1 *field_5b97;
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
    v3 = (char *)&v2->field_5b97 + 3;
    v0 = v4;
    if (!(&v3->padding_0[248] - &v3->padding_0[248] >> 31) + (&v3->padding_0[248] - &v3->padding_0[248] >> 2) >> 1)
    {
        return (&v3->padding_0[248] - &v3->padding_0[248] >> 31) + (&v3->padding_0[248] - &v3->padding_0[248] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[4]))
    {
        return (*((int *)&v3->padding_0[4]))(&v3->padding_0[248], (&v3->padding_0[248] - &v3->padding_0[248] >> 31) + (&v3->padding_0[248] - &v3->padding_0[248] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[248] - &v3->padding_0[248] >> 31) + (&v3->padding_0[248] - &v3->padding_0[248] >> 2) >> 1;
    }
}


// Function: sub_4014a7 at 0x4014a7
void sub_4014a7()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4014b0
typedef struct struct_0 {
    char padding_0[23347];
    unsigned int field_5b33;
    char padding_5b37[256];
    unsigned int field_5c37;
    char field_5c3b;
    char padding_5c3c[3];
    unsigned int field_5c3f;
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
    ptr = &v6->padding_5b37[11];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[248])
        return v5;
    if (*((int *)&ptr->padding_0[16]))
        sub_4013d0(*((int *)&ptr->padding_0[244]));
    v10 = &ptr->padding_0[236];
    v11 = *((int *)&ptr->padding_0[252]);
    i = (&ptr->padding_0[232] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[252]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[252]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[252]);
        } while (*((int *)&ptr->padding_0[252]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[248] = 1;
    return v14;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401540
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x401549
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x40154d
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: sub_401551 at 0x401551
int sub_401551()
{
    param_strcpy();
    return;
}


// Function: param_strcpy at 0x401560
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int param_strcpy(char *a0, char *a1)
{
    unsigned int v0;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    strcpy(a0, a1);
    return strlen(a0);
}


// Function: sub_4015a3 at 0x4015a3
int sub_4015a3()
{
    call_strcpy();
    return;
}


// Function: call_strcpy at 0x4015b0
unsigned int call_strcpy()
{
    unsigned int dst;  // [bp-0x2c]
    char v1[32];  // [bp-0x28]

    dst = param_strcpy(&v1, "HelloLib");
    return dst;
}


// Function: sub_4015e4 at 0x4015e4
int sub_4015e4()
{
    param_strcmp();
    return;
}


// Function: param_strcmp at 0x4015f0
unsigned int param_strcmp(char *a0, char *a1)
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = strcmp(a0, a1);
    if (v1 <= 0)
    {
        v0 = (v1 < 0 ? 4294967295 : 0);
        return v0;
    }
    v0 = 1;
    return v0;
}


// Function: sub_401651 at 0x401651
int sub_401651()
{
    call_strcmp();
    return;
}


// Function: call_strcmp at 0x401660
extern char _GLOBAL_OFFSET_TABLE_;

int call_strcmp()
{
    char *v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    v3 = param_strcmp("abc", "def");
    v2 = param_strcmp(v0 + 12263, v0 + 12263);
    v1 = param_strcmp(v0 + 12259, v0 + 12255);
    return v3 + v2 + v1;
}


// Function: sub_4016d6 at 0x4016d6
int sub_4016d6()
{
    param_strlen();
    return;
}


// Function: param_strlen at 0x4016e0
int param_strlen(char *a0)
{
    unsigned int len;  // [bp-0xc]

    len = strlen(a0);
    return len;
}


// Function: sub_40170e at 0x40170e
int sub_40170e()
{
    call_strlen();
    return;
}


// Function: call_strlen at 0x401710
unsigned int call_strlen()
{
    char *v0;  // [bp-0xc]

    v0 = "BinBench2025";
    return param_strlen(v0);
}


// Function: sub_40173d at 0x40173d
int sub_40173d()
{
    param_memcpy();
    return;
}


// Function: param_memcpy at 0x401740
int param_memcpy(void* a0, void* a1, unsigned int n)
{
    memcpy(a0, a1, n);
    return n;
}


// Function: sub_40177e at 0x40177e
int sub_40177e()
{
    call_memcpy();
    return;
}


// Function: call_memcpy at 0x401780
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int call_memcpy()
{
    unsigned int v0;  // [bp-0x34]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x20]
    char v4;  // [bp-0x1c]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    memcpy(&v4, "\n", 20);
    memset(&v1, 0, 20);
    param_memcpy(&v1, &v4, 20);
    return *((int *)&v1) + *((int *)&v2) + v3;
}


// Function: sub_4017ff at 0x4017ff
int sub_4017ff()
{
    param_memcmp();
    return;
}


// Function: param_memcmp at 0x401800
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    v1 = memcmp(a0, a1, a2);
    if (v1 <= 0)
    {
        v0 = (v1 < 0 ? 4294967295 : 0);
        return v0;
    }
    v0 = 1;
    return v0;
}


// Function: sub_40186c at 0x40186c
int sub_40186c()
{
    call_memcmp();
    return;
}


// Function: call_memcmp at 0x401870
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int call_memcmp()
{
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int flag2;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x28]
    unsigned int v5;  // [bp-0x24]
    unsigned int flag1;  // [bp-0x20]
    unsigned int v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0x18]
    unsigned int result;  // [bp-0x14]
    unsigned int v10;  // [bp-0x10]
    unsigned int v11;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    result = 1;
    v10 = 2;
    v11 = 3;
    flag1 = 1;
    v7 = 2;
    v8 = 4;
    flag2 = 1;
    v4 = 2;
    v5 = 3;
    v2 = param_memcmp(&result, &flag1, 12);
    v1 = param_memcmp(&result, &flag2, 12);
    return v2 + v1;
}


// Function: param_printf at 0x401920
unsigned int param_printf(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0xc]

    v0 = a0;
    v1 = a1;
    v2 = printf("Value: %d, Name: %s\n");
    return v2;
}


// Function: sub_401961 at 0x401961
int sub_401961()
{
    call_printf();
    return;
}


// Function: call_printf at 0x401970
unsigned int call_printf()
{
    unsigned int v0;  // [bp-0xc]

    v0 = param_printf(42, "Test");
    return v0;
}


// Function: sub_4019a5 at 0x4019a5
int sub_4019a5()
{
    param_scanf();
    return;
}


// Function: param_scanf at 0x4019b0
unsigned int param_scanf(char *a0)
{
    char *v0;  // [bp-0x24]
    char *v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    char v3;  // [bp-0x18], Other Possible Types: unsigned int
    char v4;  // [bp-0x14], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x10]

    v0 = &v4;
    v1 = &v3;
    v2 = __isoc99_sscanf(a0, "%d,%d");
    v5 = (v2 == 2 ? v4 + v3 : 4294967295);
    return v5;
}


// Function: sub_401a16 at 0x401a16
int sub_401a16()
{
    call_scanf();
    return;
}


// Function: call_scanf at 0x401a20
unsigned int call_scanf()
{
    return param_scanf("123,456");
}


// Function: sub_401a45 at 0x401a45
int sub_401a45()
{
    param_fopen_fclose();
    return;
}


// Function: param_fopen_fclose at 0x401a50
typedef struct FILE {
} FILE;

extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_fopen_fclose(char *a0)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    FILE *fp;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    fp = fopen(a0, "r");
    if (fp)
    {
        v1 = fileno(fp);
        fclose(fp);
        v3 = v1;
        return v3;
    }
    v3 = 4294967295;
    return v3;
}


// Function: sub_401ac5 at 0x401ac5
int sub_401ac5()
{
    call_fopen_fclose();
    return;
}


// Function: call_fopen_fclose at 0x401ad0
unsigned int call_fopen_fclose()
{
    unsigned int v3;  // ebx
    unsigned int fp;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = v3;
    fp = param_fopen_fclose("/etc/passwd");
    return (fp >= 0 ? 42 : 4294967295);
}


// Function: sub_401b0d at 0x401b0d
int sub_401b0d()
{
    param_fread_fwrite();
    return;
}


// Function: param_fread_fwrite at 0x401b10
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_fread_fwrite(char *a0)
{
    char v0;  // [bp-0x49]
    void* v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int v3;  // [bp-0x40]
    unsigned int count;  // [bp-0x3c]
    unsigned int count;  // [bp-0x38]
    void* fp;  // [bp-0x34]
    char v7;  // [bp-0x30]
    void* v8;  // [bp-0x10]
    unsigned int v9;  // [bp-0xc]

    v3 = &_GLOBAL_OFFSET_TABLE_;
    v8 = "BinBench Test Data";
    fp = fopen(a0, "w+");
    if (!fp)
    {
        v9 = 4294967295;
        return v9;
    }
    v1 = v8;
    count = fwrite(v1, 1, strlen(v8), fp);
    v2 = count;
    if (v2 != strlen(v8))
    {
        fclose(fp);
        v9 = 4294967294;
        return v9;
    }
    rewind(fp);
    count = fread(&v7, 1, count, fp);
    (&v7)[count] = 0;
    fclose(fp);
    unlink(a0);
    v0 = 0;
    if (count == count)
        v0 = !strcmp(&v7, v8);
    v9 = ((v0 & 1) ? 42 : 4294967293);
    return v9;
}


// Function: sub_401c7e at 0x401c7e
int sub_401c7e()
{
    call_fread_fwrite();
    return;
}


// Function: call_fread_fwrite at 0x401c80
unsigned int call_fread_fwrite()
{
    return param_fread_fwrite("/tmp/binbench_test.tmp");
}


// Function: sub_401ca5 at 0x401ca5
int sub_401ca5()
{
    param_malloc_free();
    return;
}


// Function: param_malloc_free at 0x401cb0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_malloc_free(unsigned int a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int idx;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v4 = 4294967295;
        return v4;
    }
    for (idx = 0; idx < a0; idx += 1)
    {
        ptr[idx] = idx * 10;
    }
    v1 = *(ptr) + ptr[1 + a0];
    free(ptr);
    ptr = 0;
    v4 = v1;
    return v4;
}


// Function: sub_401d56 at 0x401d56
int sub_401d56()
{
    call_malloc_free();
    return;
}


// Function: call_malloc_free at 0x401d60
unsigned int call_malloc_free()
{
    return param_malloc_free(10);
}


// Function: sub_401d83 at 0x401d83
int sub_401d83()
{
    param_memset();
    return;
}


// Function: param_memset at 0x401d90
unsigned int param_memset(char *a0, unsigned int n)
{
    unsigned int i;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    memset(a0, 0, n);
    v1 = 0;
    for (i = 0; i < n; i += 1)
    {
        v1 += a0[i];
    }
    return v1;
}


// Function: sub_401e0c at 0x401e0c
int sub_401e0c()
{
    call_memset();
    return;
}


// Function: call_memset at 0x401e10
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int call_memset()
{
    unsigned int v0;  // [bp-0x38]
    unsigned int idx;  // [bp-0x34]
    char v2[36];  // [bp-0x30]
    char v3;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    for (idx = 0; idx < 10; idx += 1)
    {
        *((unsigned int *)&v2[4 * idx]) = 255;
    }
    param_memset(&v2, 40);
    return *((int *)&v2[0]) + *((int *)&v3);
}


// Function: sub_401e72 at 0x401e72
int sub_401e72()
{
    param_strchr_strstr();
    return;
}


// Function: param_strchr_strstr at 0x401e80
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int param_strchr_strstr(char *a0, char a1, char *a2)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0x18]
    unsigned int ptr;  // [bp-0x14]
    unsigned int v5;  // [bp-0x10]
    unsigned int ptr;  // [bp-0xc]

    v2 = &_GLOBAL_OFFSET_TABLE_;
    ptr = strchr(a0, a1);
    v1 = (!ptr ? 4294967295 : ptr - a0);
    v5 = v1;
    ptr = strstr(a0, a2);
    v0 = (!ptr ? 4294967295 : ptr - a0);
    v3 = v0;
    return v5 + v3;
}


// Function: sub_401f33 at 0x401f33
int sub_401f33()
{
    call_strchr_strstr();
    return;
}


// Function: call_strchr_strstr at 0x401f40
unsigned int call_strchr_strstr()
{
    unsigned int ptr;  // [bp-0x10]
    char *v1;  // [bp-0xc]

    v1 = "Hello BinBench Test";
    ptr = param_strchr_strstr(v1, 66, "Bench");
    return ptr;
}


// Function: sub_401f85 at 0x401f85
int sub_401f85()
{
    test_standard_library_functions();
    return;
}


// Function: test_standard_library_functions at 0x401f90
extern char _GLOBAL_OFFSET_TABLE_;
extern char g_4040aa;

int test_standard_library_functions()
{
    unsigned int dst;  // [bp-0x18]
    char *v1;  // [bp-0xc]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    printf(&g_4040aa);
    dst = call_strcpy();
    printf(v1 + 12081);
    dst = call_strcmp();
    printf(v1 + 12054);
    dst = call_strlen();
    printf(v1 + 12027);
    dst = call_memcpy();
    printf(v1 + 11999);
    dst = call_memcmp();
    printf(v1 + 11971);
    dst = call_printf();
    printf(v1 + 11943);
    dst = call_scanf();
    printf(v1 + 11915);
    dst = call_fopen_fclose();
    printf(v1 + 11886);
    dst = call_fread_fwrite();
    printf(v1 + 11858);
    dst = call_malloc_free();
    printf(v1 + 11830);
    dst = call_memset();
    printf(v1 + 11802);
    dst = call_strchr_strstr();
    return printf(v1 + 11775);
}


// Function: sub_402116 at 0x402116
int sub_402116()
{
    param_linux_syscall();
    return;
}


// Function: param_linux_syscall at 0x402120
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_linux_syscall(unsigned int a0)
{
    unsigned int v0;  // [bp-0x28]
    unsigned int result;  // [bp-0x24]
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]

    v2 = &_GLOBAL_OFFSET_TABLE_;
    v0 = a0;
    result = 0;
    v3 = syscall(5);
    if (v3 >= 0)
    {
        v0 = v3;
        syscall(6);
        v4 = v3;
        return v4;
    }
    v4 = -(*(__errno_location()));
    return v4;
}


// Function: sub_40219e at 0x40219e
int sub_40219e()
{
    call_linux_syscall();
    return;
}


// Function: call_linux_syscall at 0x4021a0
unsigned int call_linux_syscall()
{
    unsigned int v3;  // ebx
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = v3;
    v0 = param_linux_syscall("/etc/passwd");
    return (v0 >= 0 ? 42 : 4294967295);
}


// Function: sub_4021dd at 0x4021dd
int sub_4021dd()
{
    param_win32_api();
    return;
}


// Function: param_win32_api at 0x4021e0
unsigned int param_win32_api(unsigned int a0)
{
    char v0;  // [bp-0x64]
    char v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0xc]

    if (stat(a0, &v0) >= 0)
    {
        v2 = (*((int *)&v1) > 0 ? 42 : 4294967294);
        return v2;
    }
    v2 = 4294967295;
    return v2;
}


// Function: sub_40223c at 0x40223c
int sub_40223c()
{
    call_win32_api();
    return;
}


// Function: call_win32_api at 0x402240
unsigned int call_win32_api()
{
    return param_win32_api("/etc/passwd");
}


// Function: sub_402265 at 0x402265
int sub_402265()
{
    param_fork_exec();
    return;
}


// Function: param_fork_exec at 0x402270
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_fork_exec(char *a0, unsigned int a1)
{
    unsigned int result;  // [bp-0x30]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3[1];  // [bp-0x18]
    unsigned int pid;  // [bp-0x14]
    unsigned int v5;  // [bp-0x10]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    pid = fork();
    if (pid < 0)
    {
        v5 = 4294967295;
        return v5;
    }
    else if (!pid)
    {
        result = 0;
        execl(a0, a0);
        _exit(127); /* do not return */
    }
    else
    {
        v2 = waitpid(pid, &v3, 0);
        v5 = (v2 < 0 ? 4294967294 : (!(*(v3) & 127) ? (*(v3) & 0xff00) >> 8 : 4294967293));
        return v5;
    }
}


// Function: sub_402355 at 0x402355
int sub_402355()
{
    call_fork_exec();
    return;
}


// Function: call_fork_exec at 0x402360
unsigned int call_fork_exec()
{
    unsigned int v3;  // ebx
    unsigned int pid;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = v3;
    pid = param_fork_exec("/bin/true", 0);
    return (!pid ? 42 : 4294967295);
}


// Function: sub_4023a7 at 0x4023a7
int sub_4023a7()
{
    param_pipe_communication();
    return;
}


// Function: param_pipe_communication at 0x4023b0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_pipe_communication()
{
    unsigned int v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int count;  // [bp-0x40]
    unsigned int v4;  // [bp-0x3c]
    unsigned int pid;  // [bp-0x38]
    char v6;  // [bp-0x34]
    char v7;  // [bp-0x14], Other Possible Types: unsigned int
    unsigned int v8;  // [bp-0x10]
    unsigned int v9;  // [bp-0xc]

    v2 = &_GLOBAL_OFFSET_TABLE_;
    if (pipe(&v7) < 0)
    {
        v9 = 4294967295;
        return v9;
    }
    pid = fork();
    if (pid < 0)
    {
        v9 = 4294967294;
        return v9;
    }
    else if (!pid)
    {
        close(v7);
        v4 = v2 - 11737;
        v0 = v8;
        v1 = v4;
        write(v0, v1, strlen(v4));
        close(v8);
        _exit(0); /* do not return */
    }
    else
    {
        close(v8);
        count = read(v7, &v6, 31);
        (&v6)[count] = 0;
        close(v7);
        wait(NULL);
        v9 = (count > 0 ? 42 : 4294967293);
        return v9;
    }
}


// Function: sub_4024ef at 0x4024ef
int sub_4024ef()
{
    call_pipe_communication();
    return;
}


// Function: call_pipe_communication at 0x4024f0
unsigned int call_pipe_communication()
{
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v2;
    return param_pipe_communication();
}


// Function: sub_40250c at 0x40250c
int sub_40250c()
{
    param_socket_create();
    return;
}


// Function: param_socket_create at 0x402510
typedef struct sockaddr {
    unsigned short sin_family;
    char sa_data[14];
} sockaddr;

extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_socket_create()
{
    unsigned int v0;  // [bp-0x28]
    sockaddr v1;  // [sp-0x24]
    unsigned int result;  // [bp-0x14]
    unsigned int sock;  // [bp-0x10]
    unsigned int v7;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    sock = socket(2, 1, 0);
    if (sock < 0)
    {
        v7 = 4294967295;
        return v7;
    }
    result = 1;
    if (setsockopt(sock, 1, 2, &result, 4) < 0)
    {
        close(sock);
        v7 = 4294967294;
        return v7;
    }
    memset(&v1, 0, 16);
    v1.sin_family = 2;
    *((unsigned short *)&v1.sa_data[0]) = htons(0);
    *((unsigned int *)&v1.sa_data[2]) = 0;
    if (bind(sock, &v1, 16) < 0)
    {
        close(sock);
        v7 = 4294967293;
        return v7;
    }
    else if (listen(sock, 5) < 0)
    {
        close(sock);
        v7 = 0xfffffffc;
        return v7;
    }
    else
    {
        close(sock);
        v7 = 42;
        return v7;
    }
}


// Function: sub_40268d at 0x40268d
int sub_40268d()
{
    call_socket_create();
    return;
}


// Function: call_socket_create at 0x402690
unsigned int call_socket_create()
{
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v2;
    return param_socket_create();
}


// Function: sub_4026ac at 0x4026ac
int sub_4026ac()
{
    param_shmget_shmat();
    return;
}


// Function: param_shmget_shmat at 0x4026b0
extern char _GLOBAL_OFFSET_TABLE_;

int param_shmget_shmat()
{
    char *v0;  // [bp-0x28]
    unsigned int len;  // [bp-0x24]
    char *ptr;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0x18]
    unsigned int v5;  // [bp-0x14]
    char *v6;  // [bp-0x10]
    unsigned int v7;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    v6 = "/tmp/binbench_shm";
    v5 = open(v6, 66, 438);
    if (v5 < 0)
    {
        v7 = 4294967295;
        return v7;
    }
    close(v5);
    v4 = ftok(v0 + 11727, 42);
    if (v4 < 0)
    {
        v7 = 4294967295;
        return v7;
    }
    v3 = shmget(v4, 0x1000, 950);
    if (v3 < 0)
    {
        v7 = 4294967294;
        return v7;
    }
    ptr = shmat(v3, 0, 0);
    if (ptr != 0xffffffff)
    {
        strcpy(ptr, v0 + 11709);
        len = strlen(ptr);
        shmdt(ptr);
        shmctl(v3, 0, 0);
        v7 = len;
        return v7;
    }
    v7 = 4294967293;
    return v7;
}


// Function: sub_40281e at 0x40281e
int sub_40281e()
{
    call_shmget_shmat();
    return;
}


// Function: call_shmget_shmat at 0x402820
unsigned int call_shmget_shmat()
{
    unsigned int v3;  // ebx
    unsigned int v4;  // eax
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = v3;
    v0 = v4;
    v0 = param_shmget_shmat();
    return (v0 > 0 ? 42 : 4294967295);
}


// Function: sub_402852 at 0x402852
int sub_402852()
{
    param_signal_handling();
    return;
}


// Function: param_signal_handling at 0x402860
extern unsigned int _GLOBAL_OFFSET_TABLE_[66];

unsigned int param_signal_handling()
{
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    char v0;  // [bp-0x16]
    char v1;  // [bp-0x15]
    unsigned int ptr[66];  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]

    ptr[0] = &_GLOBAL_OFFSET_TABLE_[0];
    if (signal(10, signal_handler) == 4294967295)
    {
        v4 = 4294967295;
        return v4;
    }
    else if (signal(14, &ptr[67 + 30]) == 4294967295)
    {
        v4 = 4294967294;
        return v4;
    }
    else
    {
        ptr[64] = 0;
        raise(10);
        v3 = 1000;
        while (true)
        {
            v1 = 0;
            if (!ptr[64])
            {
                v6 = v3;
                v3 = v6 - 1;
                v1 = v6 > 0;
            }
            if (!(v1 & 1))
                break;
            usleep(1000);
        }
        if (!ptr[64])
        {
            v4 = 4294967293;
            return v4;
        }
        else if (ptr[65] != 10)
        {
            v4 = 0xfffffffc;
            return v4;
        }
        else
        {
            ptr[64] = 0;
            alarm(1);
            v3 = 2000;
            while (true)
            {
                v0 = 0;
                if (!ptr[64])
                {
                    v7 = v3;
                    v3 = v7 - 1;
                    v0 = v7 > 0;
                }
                if (!(v0 & 1))
                    break;
                usleep(1000);
            }
            if (ptr[64] && ptr[65] == 14)
            {
                signal(10, NULL);
                signal(14, NULL);
                v4 = 42;
                return v4;
            }
            v4 = 4294967291;
            return v4;
        }
    }
}


// Function: sub_402a63 at 0x402a63
void sub_402a63(unsigned int a0)
{
    signal_handler();
    return;
}


// Function: signal_handler at 0x402a70
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int signal_number;
extern unsigned int signal_received;

int signal_handler(unsigned int a0)
{
    signal_received = 1;
    signal_number = a0;
    return &_GLOBAL_OFFSET_TABLE_;
}


// Function: sub_402a97 at 0x402a97
int sub_402a97()
{
    call_signal_handling();
    return;
}


// Function: call_signal_handling at 0x402aa0
unsigned int call_signal_handling()
{
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v2;
    return param_signal_handling();
}


// Function: sub_402abc at 0x402abc
int sub_402abc()
{
    test_system_calls();
    return;
}


// Function: test_system_calls at 0x402ac0
extern char _GLOBAL_OFFSET_TABLE_;
extern char g_404250;

int test_system_calls()
{
    unsigned int pid;  // [bp-0x18]
    char *v1;  // [bp-0xc]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    printf(&g_404250);
    pid = call_linux_syscall();
    printf(v1 + 11668);
    pid = call_win32_api();
    printf(v1 + 11640);
    pid = call_fork_exec();
    printf(v1 + 11612);
    pid = call_pipe_communication();
    printf(v1 + 11584);
    pid = call_socket_create();
    printf(v1 + 11556);
    pid = call_shmget_shmat();
    printf(v1 + 11528);
    pid = call_signal_handling();
    return printf(v1 + 11500);
}


// Function: sub_402bb5 at 0x402bb5
int sub_402bb5()
{
    thread_compute();
    return;
}


// Function: thread_compute at 0x402bc0
unsigned int * thread_compute(unsigned int *p)
{
    unsigned int *ptr;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v2 = *(p);
    v1 = v2 * v2;
    ptr = malloc(4);
    *(ptr) = v1;
    return ptr;
}


// Function: sub_402c0e at 0x402c0e
int sub_402c0e()
{
    param_pthread_create();
    return;
}


// Function: param_pthread_create at 0x402c10
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_pthread_create(unsigned int a0)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int count;  // [bp-0x1c]
    unsigned int *ptr;  // [bp-0x18], Other Possible Types: char
    unsigned int v4;  // [bp-0x14]
    char v5;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v6;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    v4 = a0;
    count = pthread_create(&v5, 0, thread_compute, &v4);
    if (!count)
    {
        pthread_join(v5, &ptr);
        v1 = *(ptr);
        free(ptr);
        v6 = v1;
        return v6;
    }
    v6 = 4294967295;
    return v6;
}


// Function: sub_402ca8 at 0x402ca8
int sub_402ca8()
{
    call_pthread_create();
    return;
}


// Function: call_pthread_create at 0x402cb0
unsigned int call_pthread_create()
{
    return param_pthread_create(7);
}


// Function: sub_402cd3 at 0x402cd3
void sub_402cd3(unsigned int a0)
{
    thread_sum();
    return;
}


// Function: thread_sum at 0x402ce0
unsigned int thread_sum(unsigned int *ptr)
{
    unsigned int i;  // [bp-0xc]

    ptr[2] = 0;
    for (i = *(ptr); i <= ptr[1]; i += 1)
    {
        ptr[2] = i + ptr[2];
    }
    return 0;
}


// Function: sub_402d31 at 0x402d31
int sub_402d31()
{
    param_pthread_join();
    return;
}


// Function: param_pthread_join at 0x402d40
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int param_pthread_join()
{
    unsigned int v0;  // [bp-0x4c]
    unsigned int idx;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int i;  // [bp-0x40]
    char v4[4];  // [bp-0x3c]
    unsigned int v6;  // [bp-0x38]
    unsigned int v14;  // [bp-0x34]
    unsigned int v7;  // [bp-0x30]
    unsigned int v8;  // [bp-0x2c]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned long v11;  // [bp-0x18]
    unsigned int v12;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    memset(&v4, 0, 36);
    *((unsigned int *)&v4) = 1;
    v6 = 10;
    v7 = 11;
    v8 = 20;
    v9 = 21;
    v10 = 30;
    for (i = 0; i < 3; i += 1)
    {
        if (pthread_create(&(&v11)[i], 0, v0 - 17184, (char [4])&(&v4)[3 * i]))
        {
            v12 = 4294967295;
            return v12;
        }
    }
    v2 = 0;
    for (idx = 0; idx < 3; idx += 1)
    {
        if (pthread_join((&v11)[idx], 0))
        {
            v12 = 4294967294;
            return v12;
        }
        v2 += (&v14)[3 * idx];
    }
    v12 = v2;
    return v12;
}


// Function: sub_402e85 at 0x402e85
int sub_402e85()
{
    call_pthread_join();
    return;
}


// Function: call_pthread_join at 0x402e90
unsigned int call_pthread_join()
{
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v2;
    return param_pthread_join();
}


// Function: sub_402eac at 0x402eac
int sub_402eac()
{
    thread_increment();
    return;
}


// Function: thread_increment at 0x402eb0
typedef struct struct_0 {
    char padding_0[264];
    unsigned int field_108;
} struct_0;

extern struct_0 _GLOBAL_OFFSET_TABLE_;

unsigned int thread_increment(unsigned int *ptr)
{
    struct_0 *p;  // [bp-0x14]
    unsigned int i;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    p = &_GLOBAL_OFFSET_TABLE_.padding_0[0];
    v2 = *(ptr);
    for (i = 0; i < v2; i += 1)
    {
        pthread_mutex_lock(&p[1].padding_0[60]);
        p->field_108 = p->field_108 + 1;
        pthread_mutex_unlock(&p[1].padding_0[60]);
        usleep(1000);
    }
    return 0;
}


// Function: sub_402f3a at 0x402f3a
int sub_402f3a()
{
    param_mutex_lock();
    return;
}


// Function: param_mutex_lock at 0x402f40
typedef struct struct_0 {
    char padding_0[264];
    unsigned int field_108;
} struct_0;

extern struct_0 _GLOBAL_OFFSET_TABLE_;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
    struct_0 *p;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int j;  // [bp-0x1c]
    unsigned int i;  // [bp-0x18]
    unsigned int *ptr;  // [bp-0x14]
    unsigned int v5;  // [bp-0x10]

    p = &_GLOBAL_OFFSET_TABLE_.padding_0[0];
    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v5 = 4294967295;
        return v5;
    }
    p->field_108 = 0;
    for (i = 0; i < a0; i += 1)
    {
        if (pthread_create(&ptr[i], 0, &p[62].padding_0[104], &a1))
        {
            free(ptr);
            v5 = 4294967294;
            return v5;
        }
    }
    for (j = 0; j < a0; j += 1)
    {
        pthread_join(ptr[j], 0);
    }
    free(ptr);
    v1 = a1 * a0;
    v5 = (p->field_108 == v1 ? 42 : 4294967293);
    return v5;
}


// Function: sub_40308a at 0x40308a
int sub_40308a()
{
    call_mutex_lock();
    return;
}


// Function: call_mutex_lock at 0x403090
unsigned int call_mutex_lock()
{
    return param_mutex_lock(4, 1000);
}


// Function: sub_4030bd at 0x4030bd
int sub_4030bd()
{
    consumer_thread();
    return;
}


// Function: consumer_thread at 0x4030c0
extern unsigned int _GLOBAL_OFFSET_TABLE_[81];
extern unsigned int cond_mutex;

unsigned int * consumer_thread()
{
    unsigned int p[81];  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    p[0] = &_GLOBAL_OFFSET_TABLE_[0];
    pthread_mutex_lock(&cond_mutex);
    while (((p[67] ^ 255) & 1))
    {
        pthread_cond_wait(&p[68], &p[1 + 7]);
    }
    v2 = p[80];
    pthread_mutex_unlock(&p[1 + 7]);
    ptr = malloc(4);
    *(ptr) = v2;
    return ptr;
}


// Function: producer_thread at 0x403160
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int producer_thread(unsigned int a0)
{
    unsigned int ptr;  // [bp-0xc]

    ptr = &_GLOBAL_OFFSET_TABLE_;
    sleep(1);
    pthread_mutex_lock(ptr + 352);
    *((unsigned int *)(ptr + 320)) = 42;
    *((unsigned int *)(ptr + 268)) = 1;
    pthread_cond_signal(ptr + 272);
    pthread_mutex_unlock(ptr + 352);
    return 0;
}


// Function: sub_4031d4 at 0x4031d4
int sub_4031d4()
{
    param_condition_variable();
    return;
}


// Function: param_condition_variable at 0x4031e0
extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable()
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int *ptr;  // [bp-0x18], Other Possible Types: char
    char v3;  // [bp-0x14], Other Possible Types: unsigned int
    char v4;  // [bp-0x10], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    ready = 0;
    data = 0;
    if (pthread_create(&v3, 0, consumer_thread, 0))
    {
        v5 = 4294967295;
        return v5;
    }
    else if (pthread_create(&v4, 0, v0 - 16032, 0))
    {
        pthread_cancel(v3);
        v5 = 4294967294;
        return v5;
    }
    else
    {
        pthread_join(v3, &ptr);
        pthread_join(v4, 0);
        v1 = *(ptr);
        free(ptr);
        v5 = v1;
        return v5;
    }
}


// Function: sub_4032e5 at 0x4032e5
int sub_4032e5()
{
    call_condition_variable();
    return;
}


// Function: call_condition_variable at 0x4032f0
unsigned int call_condition_variable()
{
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v2;
    return param_condition_variable();
}


// Function: sub_40330c at 0x40330c
void sub_40330c(unsigned int a0)
{
    thread_atomic_increment();
    return;
}


// Function: thread_atomic_increment at 0x403310
typedef struct struct_0 {
    char padding_0[324];
    unsigned int field_144;
} struct_0;

extern struct_0 _GLOBAL_OFFSET_TABLE_;

unsigned int thread_atomic_increment(unsigned int *ptr)
{
    unsigned int v11;  // eax
    unsigned int v12;  // 4119
    char v0;  // [bp-0x2d]
    unsigned int v1;  // [bp-0x2c]
    struct_0 *p;  // [bp-0x28]
    char v3;  // [bp-0x21]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0x18]
    unsigned int v7;  // [bp-0x14]
    unsigned int result;  // [bp-0x10]
    unsigned int i;  // [bp-0xc]
    unsigned int v10;  // [bp-0x8]

    p = &_GLOBAL_OFFSET_TABLE_.padding_0[0];
    v10 = *(ptr);
    for (i = 0; i < v10; i += 1)
    {
        result = 1;
        atomic_exchange_add(&p->field_144, result);
        v7 = p->field_144;
        v6 = i;
        v5 = i + 1000;
        v4 = v5;
        v11 = v6;
        v12 = atomic_compare_exchange(&p->field_144, v4, v11);
        v0 = v11 == v12;
        v1 = (v11 == v12 ? v11 : v12);
        if (v11 != v12)
            v6 = v1;
        v3 = v0 & 1;
    }
    return 0;
}


// Function: sub_4033b6 at 0x4033b6
void sub_4033b6()
{
    thread_atomic_load_store();
    return;
}


// Function: thread_atomic_load_store at 0x4033c0
extern unsigned int atomic_counter;

unsigned int thread_atomic_load_store()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    v1 = atomic_counter;
    v2 = v1;
    v0 = v2 + 100;
    atomic_exchange(&atomic_counter, v0);
    return 0;
}


// Function: sub_4033fd at 0x4033fd
int sub_4033fd()
{
    param_atomic_ops();
    return;
}


// Function: param_atomic_ops at 0x403400
typedef struct struct_0 {
    char padding_0[324];
    unsigned int field_144;
} struct_0;

extern struct_0 _GLOBAL_OFFSET_TABLE_;

unsigned int param_atomic_ops(unsigned int a0)
{
    struct_0 *p;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned int j;  // [bp-0x20]
    char v4;  // [bp-0x1c], Other Possible Types: unsigned int
    unsigned int i;  // [bp-0x18]
    unsigned int result;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10]
    unsigned int v8;  // [bp-0xc]
    char v9;  // [bp+0x8]

    p = &_GLOBAL_OFFSET_TABLE_.padding_0[0];
    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v8 = 4294967295;
        return v8;
    }
    result = 0;
    atomic_exchange(&p->field_144, result);
    for (i = 0; i < a0; i += 1)
    {
        if (pthread_create(&ptr[i], 0, &p[47].padding_0[184], &v9))
        {
            free(ptr);
            v8 = 4294967294;
            return v8;
        }
    }
    if (!pthread_create(&v4, 0, &p[47].padding_0[8], 0))
        pthread_join(v4, 0);
    for (j = 0; j < a0; j += 1)
    {
        pthread_join(ptr[j], 0);
    }
    v1 = p->field_144;
    v2 = v1;
    free(ptr);
    v8 = (v2 > 0 ? 42 : 4294967293);
    return v8;
}


// Function: sub_40359b at 0x40359b
int sub_40359b()
{
    call_atomic_ops();
    return;
}


// Function: call_atomic_ops at 0x4035a0
unsigned int call_atomic_ops()
{
    unsigned int v0;  // [bp-0x18]

    v0 = 500;
    return param_atomic_ops(4);
}


// Function: sub_4035cd at 0x4035cd
int sub_4035cd()
{
    thread_tls_test();
    return;
}


// Function: thread_tls_test at 0x4035d0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int [2] thread_tls_test(char *a0)
{
    unsigned long v3;  // ldt
    unsigned long v4;  // gdt
    unsigned short v5;  // gs
    unsigned int v0;  // [bp-0x18]
    unsigned int ptr[2];  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 4294967260));
    *((unsigned int *)_ccall(v3, v4, (unsigned int)v5, 4294967260)) = *((int *)_ccall(v3, v4, (unsigned int)v5, 4294967260)) + 50;
    strncpy(*((int *)_ccall(v3, v4, (unsigned int)v5, 0)) - 32, a0, 31);
    ptr[0] = malloc(8);
    ptr[0] = v2;
    ptr[1] = *((int *)_ccall(v3, v4, (unsigned int)v5, 4294967260));
    return ptr;
}


// Function: sub_40365b at 0x40365b
int sub_40365b()
{
    param_thread_local_storage();
    return;
}


// Function: param_thread_local_storage at 0x403660
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int param_thread_local_storage(unsigned int a0)
{
    char v0;  // [bp-0x41]
    char *v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x38]
    unsigned int ptr[2];  // [bp-0x34]
    unsigned int v5[2];  // [bp-0x30]
    char k;  // [bp-0x2c], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0x28]
    unsigned int v8;  // [bp-0x24]
    unsigned int l;  // [bp-0x20]
    unsigned int j;  // [bp-0x1c]
    unsigned int index;  // [bp-0x18]
    unsigned int *p;  // [bp-0x14]
    unsigned int *addr;  // [bp-0x10]
    unsigned int v14;  // [bp-0xc]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    addr = malloc(a0 * 4);
    p = malloc(a0 * 4);
    if (addr && p)
    {
        for (index = 0; index < a0; index += 1)
        {
            p[index] = malloc(16);
            snprintf(p[index], 16, v1 + 11472);
        }
        for (j = 0; j < a0; j += 1)
        {
            if (pthread_create(&addr[j], 0, v1 + 14896, p[j]))
            {
                for (l = 0; l <= j; l += 1)
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
        for (; k < a0; k += 1)
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
            v0 = v7 == v2;
        v14 = ((v0 & 1) ? 42 : 4294967293);
        return v14;
    }
    v14 = 4294967295;
    return v14;
}


// Function: sub_4038db at 0x4038db
int sub_4038db()
{
    call_thread_local_storage();
    return;
}


// Function: call_thread_local_storage at 0x4038e0
unsigned int call_thread_local_storage()
{
    return param_thread_local_storage(4);
}


// Function: sub_403903 at 0x403903
int sub_403903()
{
    test_thread_concurrency();
    return;
}


// Function: test_thread_concurrency at 0x403910
extern char _GLOBAL_OFFSET_TABLE_;
extern char g_40433a;

int test_thread_concurrency()
{
    unsigned int count;  // [bp-0x18]
    char *v1;  // [bp-0xc]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    printf(&g_40433a);
    count = call_pthread_create();
    printf(v1 + 11431);
    count = call_pthread_join();
    printf(v1 + 11403);
    count = call_mutex_lock();
    printf(v1 + 11374);
    count = call_condition_variable();
    printf(v1 + 11346);
    count = call_atomic_ops();
    printf(v1 + 11318);
    count = call_thread_local_storage();
    return printf(v1 + 11290);
}


// Function: sub_4039e8 at 0x4039e8
int sub_4039e8()
{
    main();
    return;
}


// Function: main at 0x4039f0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int main()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int result;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    result = 0;
    test_standard_library_functions();
    test_system_calls();
    test_thread_concurrency();
    return 0;
}


// Function: sub_403a2a at 0x403a2a
void sub_403a2a()
{
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x403a30
typedef struct struct_0 {
    char padding_0[13519];
    struct struct_1 *field_34cf;
    struct struct_1 *field_34d3;
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


// Function: sub_403a72 at 0x403a72
void sub_403a72()
{
}


// Function: _fini at 0x403a7c
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

