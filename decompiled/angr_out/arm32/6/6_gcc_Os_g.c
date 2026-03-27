// Angr Decompilation of 6_gcc_Os_g
// Platform: ARMEL

// Function: _init at 0x10c9c
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_10ca8 at 0x10ca8
extern unsigned int g_24008;

int sub_10ca8()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_24008;
}


// Function: main at 0x10f90
unsigned int main()
{
    unsigned int v2;  // r0
    unsigned int v3;  // r1
    unsigned int count;  // r2
    unsigned int v5;  // r3
    unsigned int v6;  // r0
    char v0;  // [bp-0x8]
    char v1;  // [bp-0x4]

    v2 = test_standard_library_functions();
    v6 = test_system_calls(v2, v3, count, v5, *((int *)&v0), *((int *)&v1));
    test_thread_concurrency(v6, v3, count, v5);
    return 0;
}


// Function: _start at 0x10fa8
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_10fe0 at 0x10fe0
void sub_10fe0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x10fec
extern unsigned int g_240fc;

int call_weak_fn()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    if (g_240fc)
        goto LABEL_11004;
    return v0;
LABEL_11004:
    v1 = __gmon_start__();
    return __gmon_start__();
}


// Function: deregister_tm_clones at 0x11010
extern char __TMC_END__;

int deregister_tm_clones()
{
    if (!(1))
        goto LABEL_11020;
    return 147724;
LABEL_11020:
    if (!(1))
        goto LABEL_1102c;
    return 147724;
LABEL_1102c:
}


// Function: register_tm_clones at 0x1103c
extern char __TMC_END__;

int register_tm_clones()
{
    if (0)
        goto LABEL_11058;
    return 147724;
LABEL_11058:
    if (!(1))
        goto LABEL_11064;
    return 147724;
LABEL_11064:
}


// Function: __do_global_dtors_aux at 0x11074
extern char completed.0;

unsigned int __do_global_dtors_aux(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    if (!completed.0)
        goto LABEL_11088;
    return a0;
LABEL_11088:
    v0 = deregister_tm_clones();
    completed.0 = 1;
    return v0;
}


// Function: frame_dummy at 0x1109c
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: signal_handler at 0x110a0
extern unsigned int signal_number;
extern unsigned int signal_received;

int signal_handler(unsigned int a0)
{
    signal_received = 1;
    signal_number = a0;
    return a0;
}


// Function: thread_sum at 0x110b8
unsigned int thread_sum(unsigned int *ptr)
{
    unsigned int v0;  // r1
    unsigned int i;  // r3

    v0 = ptr[1];
    ptr[2] = 0;
    for (i = *(ptr); i <= v0; i += 1)
    {
        ptr[2] = ptr[2] + i;
    }
    return 0;
}


// Function: thread_compute at 0x110ec
unsigned int * thread_compute(unsigned int *a0)
{
    unsigned int *ptr;  // r0

    ptr = malloc(4);
    *(ptr) = *(a0) * *(a0);
    return ptr;
}


// Function: thread_increment at 0x11110
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int ptr)
{
    unsigned int i;  // r4
    unsigned int v1;  // r7

    i = 0;
    for (v1 = *((int *)ptr); i < v1; i += 1)
    {
        pthread_mutex_lock(0x24120);
        shared_counter = shared_counter + 1;
        pthread_mutex_unlock(0x24120);
        usleep(1000);
    }
    return 0;
}


// Function: consumer_thread at 0x11164
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int i;

unsigned int * consumer_thread()
{
    unsigned int *ptr;  // r0

    pthread_mutex_lock(0x2413c);
    while (!i)
    {
        pthread_cond_wait(0x24158, 0x2413c);
    }
    pthread_mutex_unlock(0x2413c);
    ptr = malloc(4);
    *(ptr) = data;
    return ptr;
}


// Function: producer_thread at 0x111bc
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int ready;

unsigned int producer_thread()
{
    sleep(1);
    pthread_mutex_lock(0x2413c);
    data = 42;
    ready = 1;
    pthread_cond_signal(0x24158);
    pthread_mutex_unlock(0x2413c);
    return 0;
}


// Function: thread_atomic_increment at 0x11204
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern unsigned int atomic_counter;

unsigned int thread_atomic_increment(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
    unsigned int i;  // r4
    unsigned int v5;  // r7
    unsigned int v6;  // r0
    unsigned int *v0;  // [bp-0x20], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0x18]

    v3 = a2;
    v2 = a1;
    v0 = ptr;
    i = 0;
    v2 = GLIBC_2.4::__stack_chk_guard;
    for (v5 = *(ptr); i < v5; i += 1)
    {
        __sync_fetch_and_add_4(0x24190, 1);
        v0 = i;
        v6 = __sync_val_compare_and_swap_4(0x24190, i, i + 1000);
        v1 = v6;
    }
    if (!(v2 ^ GLIBC_2.4::__stack_chk_guard))
        return 0;
    __stack_chk_fail(); /* do not return */
}


// Function: thread_atomic_load_store at 0x1128c
void thread_atomic_load_store()
{
    unsigned int v4;  // lr
    unsigned int v5;  // r6
    unsigned int v6;  // r5
    unsigned int v7;  // r4
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = v5;
    v1 = v6;
    v0 = v7;
    __sync_synchronize(); /* do not return */
}


// Function: sub_11298 at 0x11298
void sub_11298()
{
    __sync_synchronize(); /* do not return */
}


// Function: sub_112a0 at 0x112a0
void sub_112a0()
{
    __sync_synchronize(); /* do not return */
}


// Function: sub_112a8 at 0x112a8
typedef struct struct_0 {
    char padding_0[120];
    unsigned int field_78;
} struct_0;

void sub_112a8()
{
    struct_0 *ptr;  // r5
    unsigned int v1;  // r4

    ptr->field_78 = v1;
    __sync_synchronize(); /* do not return */
}


// Function: sub_112b3 at 0x112b3
int sub_112b3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
}


// Function: sub_112b4 at 0x112b4
int sub_112b4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0;
}


// Function: thread_tls_test at 0x112bc
void thread_tls_test(unsigned int a0)
{
    unsigned int v4;  // lr
    unsigned int v5;  // r6
    unsigned int v6;  // r5
    unsigned int v7;  // r4
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = v5;
    v1 = v6;
    v0 = v7;
    __aeabi_read_tp(); /* do not return */
}


// Function: sub_112c8 at 0x112c8
unsigned int [2] sub_112c8(unsigned int p, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r4
    unsigned int ptr[2];  // r0

    v0 = *((int *)(8 + p));
    v1 = v0 + 50;
    *((unsigned int *)(8 + p)) = v1;
    strncpy(12 + p, a1, 31);
    ptr = malloc(8);
    ptr[0] = v0;
    ptr[1] = v1;
    return ptr;
}


// Function: param_strcpy at 0x11304
int param_strcpy(char *ptr, char *a1)
{
    unsigned int len;  // r0

    strcpy(ptr, a1);
    len = strlen(ptr);
    return strlen(ptr);
}


// Function: call_strcpy at 0x1131c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_strcpy()
{
    unsigned int v3;  // lr
    unsigned int dst;  // r0
    char v0[32];  // [bp-0x2c]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = GLIBC_2.4::__stack_chk_guard;
    dst = param_strcpy(&v0, "HelloLib");
    if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
        return dst;
    __stack_chk_fail(); /* do not return */
}


// Function: param_strcmp at 0x1136c
unsigned int param_strcmp(char *a0, char *a1)
{
    unsigned int v0;  // r0
    unsigned int v2;  // r0

    v0 = strcmp(a0, a1);
    if (0 < v0)
        return 1;
    if (armg_calculate_condition(18, v0, 0, 0))
    {
        v2 = 4294967295;
        if (!armg_calculate_condition(2, v0, 0, 0))
            return v2;
    }
    else
    {
        v2 = v0;
        if (!armg_calculate_condition(2, v2, 0, 0))
            return v2;
    }
    return 0;
}


// Function: call_strcmp at 0x11390
int call_strcmp()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v0 = param_strcmp("abc", "def");
    v1 = param_strcmp("xyz", "xyz");
    return v0 + v1 + param_strcmp("bbb", "aaa");
}


// Function: param_strlen at 0x113e0
int param_strlen()
{
    char *v0;  // r0
    unsigned int len;  // r0

    len = strlen(v0);
    return strlen(v0);
}


// Function: call_strlen at 0x113e4
unsigned int call_strlen()
{
    return 12;
}


// Function: param_memcpy at 0x113ec
int param_memcpy(void* a0, void* a1, unsigned int n)
{
    memcpy(a0, a1, n);
    return n;
}


// Function: call_memcpy at 0x11400
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_memcpy()
{
    unsigned int v10;  // lr
    unsigned int v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    unsigned int v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x24]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x18]
    unsigned int v7;  // [bp-0x10]
    unsigned int v8;  // [bp-0xc]
    unsigned int v9;  // [bp-0x4]

    v9 = v10;
    v8 = GLIBC_2.4::__stack_chk_guard;
    v0 = 10;
    v1 = 20;
    v2 = 30;
    v3 = 40;
    v4 = 50;
    memset(&v5, 0, 20);
    param_memcpy(&v5, &v0, 20);
    if (!(v8 ^ GLIBC_2.4::__stack_chk_guard))
        return *((int *)&v5) + *((int *)&v6) + v7;
    __stack_chk_fail(); /* do not return */
}


// Function: param_memcmp at 0x11490
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v0;  // r0
    unsigned int v2;  // r0

    v0 = memcmp(a0, a1, a2);
    if (0 < v0)
        return 1;
    if (armg_calculate_condition(18, v0, 0, 0))
    {
        v2 = 4294967295;
        if (!armg_calculate_condition(2, v0, 0, 0))
            return v2;
    }
    else
    {
        v2 = v0;
        if (!armg_calculate_condition(2, v2, 0, 0))
            return v2;
    }
    return 0;
}


// Function: call_memcmp at 0x114b4
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_memcmp()
{
    unsigned int v10;  // r0
    unsigned int v11;  // r0
    unsigned int result;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int flag1;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x28]
    unsigned int v5;  // [bp-0x24]
    unsigned int flag2;  // [bp-0x20]
    unsigned int v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0x18]
    unsigned int v9;  // [bp-0x14]

    v9 = GLIBC_2.4::__stack_chk_guard;
    result = 1;
    v1 = 2;
    v2 = 3;
    flag1 = 1;
    v4 = 2;
    v5 = 4;
    flag2 = 1;
    v7 = 2;
    v8 = 3;
    v10 = param_memcmp(&result, &flag1, 12);
    v11 = param_memcmp(&result, &flag2, 12);
    if (!(v9 ^ GLIBC_2.4::__stack_chk_guard))
        return v10 + v11;
    __stack_chk_fail(); /* do not return */
}


// Function: param_printf at 0x1154c
int param_printf(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r0

    v0 = __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
    return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x11564
unsigned int call_printf()
{
    unsigned int v0;  // r0

    v0 = param_printf(42, "Test");
    return param_printf(42, "Test");
}


// Function: param_scanf at 0x11574
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_scanf(char *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v6;  // lr
    unsigned int v7;  // r4
    unsigned int v8;  // r3
    unsigned int v9;  // r0
    unsigned int v11;  // r0
    unsigned int v12;  // r0
    char *v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x8]
    unsigned int v5;  // [bp-0x4]

    v5 = v6;
    v4 = v7;
    v3 = v8;
    v2 = a2;
    v1 = a1;
    v0 = a0;
    v3 = GLIBC_2.4::__stack_chk_guard;
    v9 = __isoc99_sscanf(a0, "%d,%d", &v1, &v2);
    if ((vvar_18{r8|4b} != 0x2<32>)) { Goto None } else { Goto None }
    if (armg_calculate_condition(2, v9, 2, 0))
        v11 = v9 + v8;
    else
        v11 = v9;
    v12 = v11;
    if (armg_calculate_condition(18, v9, 2, 0))
        v12 = 4294967295;
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v12;
    __stack_chk_fail(); /* do not return */
}


// Function: call_scanf at 0x115d4
unsigned int call_scanf(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = param_scanf("123,456", a1, a2);
    return param_scanf("123,456", a1, a2);
}


// Function: param_fopen_fclose at 0x115e0
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose()
{
    char *v0;  // r0
    FILE *fp;  // r0
    unsigned int v2;  // r0
    unsigned int v3;  // r4

    fp = fopen(v0, "r");
    if (!fp)
    {
        if ((char)armg_calculate_condition(2, fp, 0, 0))
            return 4294967295;
    }
    else
    {
        if ((char)armg_calculate_condition(2, fp, 0, 0))
            return v3;
    }
    v2 = fileno(fp);
    fclose(fp);
    return v2;
}


// Function: call_fopen_fclose at 0x11614
unsigned int call_fopen_fclose()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int fp;  // r0
    unsigned int v6;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    fp = param_fopen_fclose();
    if (0 <= fp)
    {
        v6 = 42;
        if (!armg_calculate_condition(178, fp, 0, 0))
            return v6;
    }
    else
    {
        v6 = fp;
        if (!armg_calculate_condition(178, v6, 0, 0))
            return v6;
    }
    return 4294967295;
}


// Function: param_fread_fwrite at 0x11634
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void* param_fread_fwrite(char *a0)
{
    void* fp;  // r0
    void* v3;  // r4
    void* v4;  // cc_dep1
    void* v5;  // r0
    unsigned int count;  // r5
    unsigned int result;  // r0
    char v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x14]

    v1 = GLIBC_2.4::__stack_chk_guard;
    fp = fopen(a0, "w+");
    v3 = fp;
    v4 = fp;
    if (!fp)
    {
        fp = 0xffffffff;
        if (!((char)armg_calculate_condition(2, v4, 0, 0)))
            goto LABEL_11664;
    }
    else if (!((char)armg_calculate_condition(2, v4, 0, 0)))
    {
LABEL_11664:
        v5 = v3;
        if (fwrite("BinBench Test Data", 1, 18, v3) != 18)
        {
            fclose(v5);
            fp = 0xfffffffe;
        }
        else
        {
            rewind(v5);
            count = fread(&v0, 1, 18, v3);
            (&v0)[count] = 0;
            fclose(v3);
            fp = unlink(a0);
            if (count != 18)
            {
                fp = 0xfffffffd;
                if (!((char)armg_calculate_condition(18, count, 18, 0)))
                    goto LABEL_116f4;
            }
            else if (!((char)armg_calculate_condition(18, count, 18, 0)))
            {
LABEL_116f4:
                result = strcmp(&v0, "BinBench Test Data");
                if (result)
                {
                    fp = 0xfffffffd;
                    if (!armg_calculate_condition(2, result, 0, 0))
                        goto LABEL_1170a;
LABEL_11709:
                    fp = 0x2a;
                }
                else
                {
                    fp = NULL;
                    if (armg_calculate_condition(2, result, 0, 0))
                        goto LABEL_11709;
LABEL_1170a:
                }
            }
        }
    }
    if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
        return fp;
    __stack_chk_fail(); /* do not return */
}


// Function: call_fread_fwrite at 0x11724
void* call_fread_fwrite()
{
    void* count;  // r0

    count = param_fread_fwrite("/tmp/binbench_test.tmp");
    return param_fread_fwrite("/tmp/binbench_test.tmp");
}


// Function: param_malloc_free at 0x11730
unsigned int param_malloc_free(unsigned int a0)
{
    unsigned int *ptr;  // r0
    unsigned int idx;  // r3
    unsigned int v2;  // r3
    unsigned int v3;  // r2

    ptr = malloc(a0 * 4);
    if (ptr)
    {
        idx = 0;
        if (!armg_calculate_condition(18, ptr, 0, 0))
            goto LABEL_1174e;
LABEL_1174d:
        v3 = 10;
    }
    else
    {
        idx = v2;
        if (armg_calculate_condition(18, ptr, 0, 0))
            goto LABEL_1174d;
LABEL_1174e:
        if ((char)armg_calculate_condition(18, ptr, 0, 0))
        {
            for (; idx != a0; idx += 1)
            {
                ptr[idx] = v3 * idx;
            }
            free(ptr);
            return ptr[1 + a0] + *(ptr);
        }
    }
    return 4294967295;
}


// Function: call_malloc_free at 0x1178c
unsigned int call_malloc_free()
{
    unsigned int ptr;  // r0

    ptr = param_malloc_free(10);
    return param_malloc_free(10);
}


// Function: param_memset at 0x11794
unsigned int param_memset(char *a0, unsigned int n)
{
    char *v0;  // r4
    unsigned int v1;  // r0
    char *v2;  // r5
    char *ptr;  // r3
    char *v4;  // r3

    v0 = a0;
    memset(a0, 0, n);
    v1 = 0;
    v2 = &v0[n];
    while (true)
    {
        ptr = v0;
        if (ptr != v2)
            goto LABEL_117c0;
        return v1;
LABEL_117c0:
        v4 = ptr + 1;
        v1 += *(ptr);
        v0 = v4;
    }
}


// Function: call_memset at 0x117cc
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_memset()
{
    unsigned int v4;  // lr
    unsigned int *ptr;  // r2
    unsigned int i;  // r3
    unsigned int *v7;  // r2
    char v0[36];  // [bp-0x34]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    ptr = &v0;
    v2 = GLIBC_2.4::__stack_chk_guard;
    i = 0;
    do
    {
        i += 1;
        v7 = ptr + 1;
        *(ptr) = 255;
        ptr = v7;
    } while (i != 10);
    param_memset(&v0, 40);
    if (!(v2 ^ GLIBC_2.4::__stack_chk_guard))
        return *((int *)&v0[0]) + v1;
    __stack_chk_fail(); /* do not return */
}


// Function: param_strchr_strstr at 0x11840
int param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
    unsigned int v4;  // lr
    unsigned int v5;  // r6
    unsigned int v12;  // r0
    unsigned int v6;  // r5
    unsigned int v7;  // r4
    unsigned int ptr;  // r0
    unsigned int v9;  // cc_dep1
    unsigned int v10;  // r4
    unsigned int ptr;  // r0
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = v5;
    v1 = v6;
    v0 = v7;
    ptr = strchr(a0, a1);
    v9 = ptr;
    if (!ptr)
    {
        v10 = 4294967295;
        if (!armg_calculate_condition(18, v9, 0, 0))
            goto LABEL_11862;
LABEL_11861:
        v10 -= a0;
    }
    else
    {
        v10 = ptr;
        if (armg_calculate_condition(18, v9, 0, 0))
            goto LABEL_11861;
LABEL_11862:
    }
    ptr = strstr(a0, a2);
    if (!ptr)
    {
        v12 = 4294967295;
        if (!armg_calculate_condition(18, ptr, 0, 0))
            goto LABEL_11872;
LABEL_11871:
        v12 -= a0;
    }
    else
    {
        v12 = ptr;
        if (armg_calculate_condition(18, ptr, 0, 0))
            goto LABEL_11871;
LABEL_11872:
    }
    return v10 + v12;
}


// Function: call_strchr_strstr at 0x1187c
unsigned int call_strchr_strstr()
{
    unsigned int ptr;  // r0

    ptr = param_strchr_strstr("Hello BinBench Test", 66, "Bench");
    return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


// Function: test_standard_library_functions at 0x11894
extern char g_136a9;
extern char g_136cd;
extern char g_136e8;
extern char g_13703;
extern char g_1371f;
extern char g_1373b;
extern char g_13757;
extern char g_13773;
extern char g_13790;
extern char g_137ac;
extern char g_137c8;
extern char g_137e4;
extern char g_137ff;

int test_standard_library_functions()
{
    unsigned int v13;  // r0
    unsigned int v4;  // r0
    unsigned int v5;  // r1
    unsigned int v6;  // r2
    unsigned int v7;  // r3
    unsigned int v8;  // r0

    puts(0x136a9);
    __printf_chk(1, 0x136cd, call_strcpy());
    __printf_chk(1, 0x136e8, call_strcmp());
    __printf_chk(1, 0x13703, 12);
    __printf_chk(1, 0x1371f, call_memcpy());
    __printf_chk(1, 0x1373b, call_memcmp());
    v4 = call_printf();
    v8 = call_scanf(__printf_chk(1, 0x13757, v4), v5, v6, v7);
    __printf_chk(1, 0x13773, v8);
    __printf_chk(1, 0x13790, call_fopen_fclose());
    __printf_chk(1, 0x137ac, call_fread_fwrite());
    __printf_chk(1, 0x137c8, call_malloc_free());
    __printf_chk(1, 0x137e4, call_memset());
    v13 = __printf_chk(1, 0x137ff, call_strchr_strstr());
    return __printf_chk(1, 0x137ff, call_strchr_strstr());
}


// Function: param_linux_syscall at 0x119c4
unsigned int param_linux_syscall(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = syscall(5);
    if (0 <= v0)
    {
        syscall(6);
        return v0;
    }
    return -(*(__errno_location()));
}


// Function: call_linux_syscall at 0x11a04
unsigned int call_linux_syscall()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v6;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    v4 = param_linux_syscall("/etc/passwd");
    if (0 <= v4)
    {
        v6 = 42;
        if (!armg_calculate_condition(178, v4, 0, 0))
            return v6;
    }
    else
    {
        v6 = v4;
        if (!armg_calculate_condition(178, v6, 0, 0))
            return v6;
    }
    return 4294967295;
}


// Function: param_win32_api at 0x11a24
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_win32_api()
{
    unsigned int v3;  // lr
    unsigned int v4;  // r0
    unsigned int v5;  // r0
    char v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = GLIBC_2.4::__stack_chk_guard;
    v4 = stat();
    if (v4 < 0)
    {
        v5 = 4294967295;
        if (!((char)armg_calculate_condition(178, v4, 0, 0)))
            goto LABEL_11a50;
    }
    else
    {
        v5 = v4;
        if (!((char)armg_calculate_condition(178, v4, 0, 0)))
        {
LABEL_11a50:
            if (0 < *((int *)&v0))
            {
                v5 = 42;
                if (!armg_calculate_condition(210, *((int *)&v0), 0, 0))
                    goto LABEL_11a5e;
LABEL_11a5d:
                v5 = 4294967294;
            }
            else
            {
                if (armg_calculate_condition(210, *((int *)&v0), 0, 0))
                    goto LABEL_11a5d;
LABEL_11a5e:
            }
        }
    }
    if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
        return v5;
    __stack_chk_fail(); /* do not return */
}


// Function: call_win32_api at 0x11a88
unsigned int call_win32_api()
{
    unsigned int v0;  // r0

    v0 = param_win32_api();
    return param_win32_api();
}


// Function: param_fork_exec at 0x11a94
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_fork_exec(unsigned int a0[1], unsigned int a1, unsigned int a2)
{
    unsigned int pid;  // r0
    unsigned int v4;  // r0
    unsigned int v6;  // r0
    unsigned int v0[1];  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v2 = a2;
    v1 = a1;
    *((unsigned int [1])v0) = a0;
    v1 = GLIBC_2.4::__stack_chk_guard;
    pid = fork();
    if (pid < 0)
    {
        v6 = 4294967295;
    }
    else if (!((char)armg_calculate_condition(18, pid, 0, 0)))
    {
        execl(a0, a0);
        _exit(127); /* do not return */
    }
    else
    {
        v4 = waitpid(pid, &v0, 0);
        if (v4 < 0)
        {
            v6 = 4294967294;
            if (!((char)armg_calculate_condition(178, v4, 0, 0)))
                goto LABEL_11af0;
        }
        else
        {
            v6 = v4;
            if (!((char)armg_calculate_condition(178, v6, 0, 0)))
            {
LABEL_11af0:
                v6 = (!(*(v0) & 127) ? (!(*(v0) & 127) ? ((*(v0) & 127) ? 4294967293 : *(v0)) >> 8 : 4294967293) & 255 : (!(*(v0) & 127) ? ((*(v0) & 127) ? 4294967293 : *(v0)) >> 8 : 4294967293));
            }
        }
    }
    if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
        return v6;
    __stack_chk_fail(); /* do not return */
}


// Function: call_fork_exec at 0x11b34
unsigned int call_fork_exec(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int pid;  // r0
    unsigned int v6;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    pid = param_fork_exec("/bin/true", 0, a2);
    if (!pid)
    {
        v6 = 42;
        if (!armg_calculate_condition(18, pid, 0, 0))
            return v6;
    }
    else
    {
        v6 = pid;
        if (!armg_calculate_condition(18, v6, 0, 0))
            return v6;
    }
    return 4294967295;
}


// Function: param_pipe_communication at 0x11b58
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_pipe_communication()
{
    unsigned int pid;  // r4
    unsigned int count;  // r4
    unsigned int v6;  // r0
    char v0;  // [bp-0x3c], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x38]
    char v2;  // [bp-0x34]
    unsigned int v3;  // [bp-0x14]

    v3 = GLIBC_2.4::__stack_chk_guard;
    if (pipe(&v0) >= 0)
    {
        pid = fork();
        if (pid >= 0)
        {
            if (!((char)armg_calculate_condition(18, pid, 0, 0)))
            {
                close(v0);
                write(v1, "HelloPipe", 9);
                close(v1);
                _exit(pid); /* do not return */
            }
            close(v1);
            count = read(v0, &v2, 31);
            (&v2)[count] = 0;
            close(v0);
            v6 = wait(NULL);
            if (0 < count)
            {
                v6 = 42;
                if (!armg_calculate_condition(210, count, 0, 0))
                    goto LABEL_11bfe;
LABEL_11bfd:
                v6 = 4294967293;
            }
            else
            {
                if (armg_calculate_condition(210, count, 0, 0))
                    goto LABEL_11bfd;
LABEL_11bfe:
            }
        }
        else
        {
            v6 = 4294967294;
        }
    }
    else
    {
        v6 = 4294967295;
    }
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v6;
    __stack_chk_fail(); /* do not return */
}


// Function: call_pipe_communication at 0x11c3c
unsigned int call_pipe_communication()
{
    unsigned int v0;  // r0

    v0 = param_pipe_communication();
    return param_pipe_communication();
}


// Function: param_socket_create at 0x11c40
typedef struct sockaddr {
    unsigned short sin_family;
    char sa_data[14];
} sockaddr;

extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_socket_create()
{
    unsigned int sock;  // r0
    unsigned int v5;  // r4
    unsigned int v6;  // cc_dep1
    unsigned int v7;  // r0
    unsigned int v8;  // r0
    unsigned int result;  // [bp-0x20]
    sockaddr v1;  // [bp-0x1c]
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    sock = socket(2, 1, 0);
    v5 = sock;
    v6 = sock;
    if (sock < 0)
    {
        v7 = 4294967295;
        if (!((char)armg_calculate_condition(178, v6, 0, 0)))
            goto LABEL_11c74;
    }
    else
    {
        v7 = sock;
        if (!((char)armg_calculate_condition(178, v6, 0, 0)))
        {
LABEL_11c74:
            result = 1;
            if (0 > setsockopt(v7, 1, 2, &result, 4))
            {
                close(v5);
                v7 = 4294967294;
            }
            else
            {
                memset(&v1, 0, 16);
                v1.sin_family = 2;
                if (0 > bind(v5, &v1, 16))
                {
                    close(v5);
                    v7 = 4294967293;
                }
                else
                {
                    v8 = v5;
                    if (0 > listen(v5, 5))
                    {
                        close(v8);
                        v7 = 0xfffffffc;
                    }
                    else
                    {
                        close(v8);
                        v7 = 42;
                    }
                }
            }
        }
    }
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v7;
    __stack_chk_fail(); /* do not return */
}


// Function: call_socket_create at 0x11d3c
unsigned int call_socket_create()
{
    unsigned int sock;  // r0

    sock = param_socket_create();
    return param_socket_create();
}


// Function: param_shmget_shmat at 0x11d40
unsigned int param_shmget_shmat()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0
    unsigned int v2;  // r4
    char *ptr;  // r5
    unsigned int len;  // r0

    v0 = open("/tmp/binbench_shm", 66, 438);
    if (0 > v0)
        return 4294967295;
    close(v0);
    if (ftok("/tmp/binbench_shm", 42) >= 0)
    {
        v1 = shmget();
        if (v1 < 0)
        {
            v2 = 4294967294;
            if ((char)armg_calculate_condition(178, v1, 0, 0))
                return 4294967294;
        }
        else if ((char)armg_calculate_condition(178, v1, 0, 0))
        {
            return v2;
        }
        ptr = shmat();
        if (ptr == 0xffffffff)
        {
            if ((char)armg_calculate_condition(1, ptr, 1, 0))
                return 4294967293;
        }
        else
        {
            if ((char)armg_calculate_condition(1, ptr, 1, 0))
                return v2;
        }
        strcpy(ptr, "SharedMemory");
        len = strlen(ptr);
        shmdt(ptr);
        shmctl(v1, 0, 0);
        return len;
    }
    return 4294967295;
}


// Function: call_shmget_shmat at 0x11df4
unsigned int call_shmget_shmat()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v6;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    v4 = param_shmget_shmat();
    if (0 < v4)
    {
        v6 = 42;
        if (!armg_calculate_condition(210, v4, 0, 0))
            return v6;
    }
    else
    {
        v6 = v4;
        if (!armg_calculate_condition(210, v6, 0, 0))
            return v6;
    }
    return 4294967295;
}


// Function: param_signal_handling at 0x11e0c
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    unsigned int v0;  // r0
    unsigned int v1;  // r5
    unsigned int result;  // r5
    unsigned int v3;  // r5
    unsigned int v4;  // r5
    unsigned int flag1;  // r5
    unsigned int v6;  // r5

    v0 = signal(10, signal_handler);
    if (v0 != 4294967295)
        goto LABEL_11e24;
    return v0;
LABEL_11e24:
    if (signal(14, signal_handler) == 4294967295)
        return 4294967294;
    signal_received = 0;
    raise(10);
    v1 = 1001;
    while (true)
    {
        result = v1;
        if (signal_received || !((v3 = result - 1, result != 1)))
            break;
        usleep(1000);
        v1 = v3;
    }
    if (!signal_received)
    {
        return 4294967293;
    }
    else if (signal_number == 10)
    {
        signal_received = 0;
        alarm(1);
        v4 = 2001;
        while (true)
        {
            flag1 = v4;
            if (signal_received || !((v6 = flag1 - 1, flag1 != 1)))
                break;
            usleep(1000);
            v4 = v6;
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


// Function: call_signal_handling at 0x11f24
unsigned int call_signal_handling()
{
    unsigned int v4;  // r0
    unsigned int v5;  // r1
    unsigned int v6;  // r2
    unsigned int v7;  // r3
    unsigned int v8;  // r0
    char v0;  // [bp+0x0]
    char v1;  // [bp+0x4]
    char v2;  // [bp+0x8]
    char v3;  // [bp+0xc]

    v8 = param_signal_handling(v4, v5, v6, v7, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
    return param_signal_handling(v4, v5, v6, v7, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
}


// Function: test_system_calls at 0x11f28
extern char g_1384e;
extern char g_13869;
extern char g_13885;
extern char g_138a1;
extern char g_138bd;
extern char g_138d9;
extern char g_138f5;
extern char g_13911;

unsigned int test_system_calls()
{
    unsigned int v5;  // r1
    unsigned int v6;  // r2
    unsigned int v10;  // r0
    unsigned int v11;  // r3
    unsigned int v12;  // r0
    char v0;  // [bp-0x8]
    char v1;  // [bp-0x4]
    char v2;  // [bp+0x0]
    char v3;  // [bp+0x4]

    puts(0x1384e);
    __printf_chk(1, 0x13869, call_linux_syscall());
    __printf_chk(1, 0x138a1, call_fork_exec(__printf_chk(1, 0x13885, call_win32_api()), v5, v6));
    __printf_chk(1, 0x138bd, param_pipe_communication());
    __printf_chk(1, 0x138d9, param_socket_create());
    v10 = __printf_chk(1, 0x138f5, call_shmget_shmat());
    v12 = __printf_chk(1, 0x13911, param_signal_handling(v10, v5, v6, v11, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3)));
    return __printf_chk(1, 0x13911, param_signal_handling(v10, v5, v6, v11, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3)));
}


// Function: param_pthread_create at 0x11fe4
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_pthread_create(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int a3)
{
    unsigned int count;  // r0
    unsigned int v7;  // r4
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    char v4;  // [bp-0x8]
    char v5;  // [bp-0x4]

    ptr = a2;
    v0 = a0;
    v3 = GLIBC_2.4::__stack_chk_guard;
    v1 = a0;
    count = pthread_create(&v0, 0, thread_compute, &v1, a0, a0, a2, GLIBC_2.4::__stack_chk_guard, *((int *)&v4), *((int *)&v5));
    if (count)
    {
        v7 = 4294967295;
        if (!((char)armg_calculate_condition(18, count, 0, 0)))
            goto LABEL_1201c;
    }
    else if (!((char)armg_calculate_condition(18, count, 0, 0)))
    {
LABEL_1201c:
        pthread_join(v0, &ptr);
        v7 = *(ptr);
        free(ptr);
    }
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v7;
    __stack_chk_fail(); /* do not return */
}


// Function: call_pthread_create at 0x12064
unsigned int call_pthread_create(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int a3)
{
    unsigned int count;  // r0

    count = param_pthread_create(7, a1, a2, a3);
    return param_pthread_create(7, a1, a2, a3);
}


// Function: param_pthread_join at 0x1206c
typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned int field_8;
} struct_0;

extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_pthread_join()
{
    unsigned int *v11;  // r9
    struct_0 *cur;  // r8
    char *v13;  // r6
    char *v14;  // r7
    unsigned int v15;  // r5
    unsigned int count;  // r0
    unsigned int flag3;  // r5
    unsigned int *v18;  // r9
    unsigned int v0;  // [bp-0x54]
    char v1;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x44]
    unsigned int result;  // [bp-0x40]
    unsigned int v4;  // [bp-0x3c]
    unsigned int v5;  // [bp-0x38]
    unsigned int flag1;  // [bp-0x34]
    unsigned int v7;  // [bp-0x30]
    unsigned int v8;  // [bp-0x2c]
    unsigned int flag2;  // [bp-0x28]
    unsigned int v10;  // [bp-0x24]

    v11 = &v0;
    cur = &v1;
    v13 = &v1;
    v14 = &v0;
    v15 = 0;
    v10 = GLIBC_2.4::__stack_chk_guard;
    v1 = 1;
    v2 = 10;
    result = 0;
    v4 = 11;
    v5 = 20;
    flag1 = 0;
    v7 = 21;
    v8 = 30;
    flag2 = 0;
    while (true)
    {
        count = pthread_create(v14, 0, thread_sum, v13);
        if (!count)
        {
            v15 += 1;
            v14 += 4;
            v13 += 12;
            if (v15 == 3)
            {
                do
                {
                    flag3 = v15;
                    v18 = v11;
                    if (pthread_join(*(v18), 0))
                    {
                        if ((v10 ^ GLIBC_2.4::__stack_chk_guard))
                            __stack_chk_fail(); /* do not return */
                        return 4294967294;
                    }
                } while ((count += cur->field_8, cur += 12, v11 = v18 + 4, v15 = flag3 - 1, flag3 != 1));
                if (!(v10 ^ GLIBC_2.4::__stack_chk_guard))
                    return count;
                __stack_chk_fail(); /* do not return */
            }
        }
        else if ((v10 ^ GLIBC_2.4::__stack_chk_guard))
        {
            __stack_chk_fail(); /* do not return */
        }
        else
        {
            return 4294967295;
        }
    }
}


// Function: call_pthread_join at 0x12158
unsigned int call_pthread_join()
{
    unsigned int count;  // r0

    count = param_pthread_join();
    return param_pthread_join();
}


// Function: param_mutex_lock at 0x1215c
extern unsigned int shared_counter;

int param_mutex_lock(unsigned int a0, unsigned int a1)
{
    unsigned int ptr;  // r0
    unsigned int ptr;  // r5
    unsigned int v4;  // cc_dep1
    unsigned int i;  // r6
    unsigned int j;  // r6
    unsigned int v7;  // r0
    unsigned int v8;  // r4
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]

    v1 = a1;
    v0 = a0;
    v1 = a1;
    ptr = malloc(a0 * 4);
    ptr = ptr;
    v4 = ptr;
    if (!ptr)
    {
        if ((char)armg_calculate_condition(2, v4, 0, 0))
            return 4294967295;
    }
    else
    {
        if ((char)armg_calculate_condition(2, v4, 0, 0))
            return ptr;
    }
    i = 0;
    for (shared_counter = 0; i < a0; i += 1)
    {
        if (pthread_create(ptr + i * 4, 0, thread_increment, &v1))
        {
            free(ptr);
            return 4294967294;
        }
    }
    for (j = 0; j < a0; j += 1)
    {
        pthread_join(*((int *)(ptr + j * 4)), 0);
    }
    v7 = (unsigned int)free(ptr);
    v8 = v1 * a0;
    if (shared_counter == v8)
    {
        v7 = 42;
        if (!armg_calculate_condition(18, shared_counter, v8, 0))
            goto LABEL_121be;
LABEL_121bd:
        v7 = 4294967293;
    }
    else
    {
        if (armg_calculate_condition(18, shared_counter, v8, 0))
            goto LABEL_121bd;
LABEL_121be:
    }
    return v7;
}


// Function: call_mutex_lock at 0x12218
unsigned int call_mutex_lock()
{
    unsigned int v0;  // r0

    v0 = param_mutex_lock(4, 1000);
    return param_mutex_lock(4, 1000);
}


// Function: param_condition_variable at 0x12224
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int a3)
{
    unsigned int count;  // r0
    unsigned int v7;  // r4
    unsigned int count;  // r0
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    char v4;  // [bp-0x8]
    char v5;  // [bp-0x4]

    ptr = a2;
    v1 = a1;
    v0 = a0;
    v3 = GLIBC_2.4::__stack_chk_guard;
    ready = 0;
    data = 0;
    count = pthread_create(&v1, 0, consumer_thread, NULL, a0, a1, a2, GLIBC_2.4::__stack_chk_guard, *((int *)&v4), *((int *)&v5));
    if (count)
    {
        v7 = 4294967295;
        if (!((char)armg_calculate_condition(18, count, 0, 0)))
            goto LABEL_12264;
    }
    else if (!((char)armg_calculate_condition(18, count, 0, 0)))
    {
LABEL_12264:
        count = pthread_create(&v0, count, producer_thread);
        if (count)
        {
            pthread_cancel(v1);
            v7 = 4294967294;
        }
        else
        {
            pthread_join(v1, &ptr);
            pthread_join(v0, count);
            v7 = *(ptr);
            free(ptr);
        }
    }
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v7;
    __stack_chk_fail(); /* do not return */
}


// Function: call_condition_variable at 0x122e8
unsigned int call_condition_variable(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = param_condition_variable(a0, a1, a2, a3);
    return param_condition_variable(a0, a1, a2, a3);
}


// Function: param_atomic_ops at 0x122ec
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int ptr;  // r0
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    v3 = a3;
    v2 = a2;
    v1 = a1;
    v0 = a0;
    v1 = a1;
    v3 = GLIBC_2.4::__stack_chk_guard;
    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v5 = 4294967295;
        if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
            __sync_synchronize(4294967295); /* do not return */
    }
    else
    {
        v5 = ptr;
        if (!((char)armg_calculate_condition(2, ptr, 0, 0)))
            __sync_synchronize(v5); /* do not return */
    }
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v5;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_12328 at 0x12328
typedef struct struct_0 {
    char padding_0[120];
    unsigned int field_78;
} struct_0;

void sub_12328()
{
    struct_0 *ptr;  // r7
    unsigned int v1;  // r5

    ptr->field_78 = v1;
    __sync_synchronize(); /* do not return */
}


// Function: sub_12330 at 0x12330
int sub_12330()
{
    unsigned int i;  // r5
    unsigned int v3;  // r6
    unsigned int *v4;  // r4
    unsigned int j;  // r5
    unsigned int v0;  // [bp+0x4]
    char v1;  // [bp+0x8]

    while (i < v3)
    {
        if (pthread_create(&v4[i], 0, thread_atomic_increment, &v0))
            free(v4);
        else
            i += 1;
    }
    if (!pthread_create(&v1, 0, thread_atomic_load_store, NULL))
        pthread_join(*((int *)&v1));
    for (j = 0; j < v3; j += 1)
    {
        pthread_join(v4[j], 0);
    }
    __sync_synchronize(); /* do not return */
}


// Function: sub_12370 at 0x12370
void sub_12370()
{
    __sync_synchronize(); /* do not return */
}


// Function: sub_12378 at 0x12378
int sub_12378()
{
    unsigned int *v0;  // r4
    unsigned int v1;  // r5

    free(v0);
    if (0 < v1)
    {
        if (!armg_calculate_condition(210, v1, 0, 0))
            goto LABEL_1238a;
LABEL_12389:
    }
    else
    {
        if (armg_calculate_condition(210, v1, 0, 0))
            goto LABEL_12389;
LABEL_1238a:
    }
}


// Function: call_atomic_ops at 0x12408
unsigned int call_atomic_ops(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = param_atomic_ops(4, 500, a2, a3);
    return param_atomic_ops(4, 500, a2, a3);
}


// Function: param_thread_local_storage at 0x12414
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int param_thread_local_storage(unsigned int a0)
{
    unsigned int v2;  // r4
    unsigned int *addr;  // r6
    unsigned int v9;  // cc_dep2
    unsigned int v10;  // cc_ndep
    unsigned int v14;  // r7
    unsigned int **ptr;  // r0
    unsigned int idx;  // r7
    unsigned int *v28;  // cc_dep1
    unsigned int *v5;  // cc_dep1
    unsigned int v29;  // cc_dep2
    unsigned int v30;  // cc_ndep
    unsigned int **p;  // r4
    unsigned int v38;  // r0
    unsigned int v6;  // cc_dep2
    unsigned int ptr;  // r0
    unsigned int j;  // r7
    unsigned int v41;  // r7
    unsigned int v42;  // r8
    unsigned int v43;  // r9
    unsigned int v44;  // cc_dep1
    unsigned int v45;  // r5
    unsigned int v46;  // cc_dep1
    unsigned int v47;  // cc_dep2
    unsigned int v48;  // cc_ndep
    unsigned int v7;  // cc_ndep
    unsigned int **k;  // r5
    unsigned int *v8;  // cc_dep1
    unsigned int ptr[2];  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]

    v2 = a0 * 4;
    v1 = GLIBC_2.4::__stack_chk_guard;
    addr = malloc(v2);
    ptr = malloc(v2);
    if (ptr)
    {
        v28 = (armg_calculate_condition(18, v5, v6, v7) ? addr : v5);
        v29 = (armg_calculate_condition(18, v5, v6, v7) ? 0 : v6);
        v30 = (armg_calculate_condition(18, v5, v6, v7) ? 0 : v7);
        if (!armg_calculate_condition(2, v28, v29, v30))
            goto LABEL_12452;
LABEL_12451:
        v14 = 1;
        if (!armg_calculate_condition(18, v28, v29, v30))
            goto LABEL_12456;
LABEL_12455:
        idx = 0;
        if (!armg_calculate_condition(18, v28, v29, v30))
            goto LABEL_1245a;
LABEL_12459:
        p = ptr;
    }
    else
    {
        v28 = (armg_calculate_condition(18, v8, v9, v10) ? addr : v8);
        v29 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
        v30 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
        if (armg_calculate_condition(2, v28, v29, v30))
            goto LABEL_12451;
LABEL_12452:
        if (armg_calculate_condition(18, v28, v29, v30))
            goto LABEL_12455;
LABEL_12456:
        idx = v14;
        if (armg_calculate_condition(18, v28, v29, v30))
            goto LABEL_12459;
LABEL_1245a:
        p = v2;
    }
    if ((char)armg_calculate_condition(18, v28, v29, v30))
    {
        for (; idx < a0; idx += 1)
        {
            ptr = malloc(16);
            p[idx] = ptr;
            __snprintf_chk(ptr, 16, 1, 16, "Thread-%d", idx);
        }
        for (j = 0; j < a0; j += 1)
        {
            if (pthread_create(&addr[j], 0, thread_tls_test, p[j]))
            {
                k = p + 1;
                do
                {
                    free(k[1]);
                    k += 1;
                } while (k != &p[j]);
                free(p);
                free(addr);
                if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
                    return 4294967294;
                __stack_chk_fail(); /* do not return */
            }
        }
        v41 = 0;
        v42 = 0;
        v43 = 0;
        while (true)
        {
            v44 = v41;
            if (v41 >= a0)
                break;
            pthread_join(addr[v41], &ptr);
            v43 += ptr[0];
            v42 += ptr[1];
            free(ptr);
            free(p[v41]);
            v41 += 1;
        }
        free(p);
        v38 = (unsigned int)free(addr);
        v45 = 150 * a0;
        if (a0 * 100 == v43)
        {
            v46 = (armg_calculate_condition(2, v44, a0, 0) ? v45 : v44);
            v47 = (armg_calculate_condition(2, v44, a0, 0) ? v42 : a0);
            v48 = (armg_calculate_condition(2, v44, a0, 0) ? 0 : 0);
            if (!armg_calculate_condition(2, v46, v47, v48))
                goto LABEL_124ea;
LABEL_124e9:
            v38 = 42;
            if (!armg_calculate_condition(18, v46, v47, v48))
                goto LABEL_124ee;
LABEL_124ed:
            v38 = 4294967293;
        }
        else
        {
            v46 = (armg_calculate_condition(2, v44, a0, 0) ? v45 : v44);
            v47 = (armg_calculate_condition(2, v44, a0, 0) ? v42 : a0);
            v48 = (armg_calculate_condition(2, v44, a0, 0) ? 0 : 0);
            if (armg_calculate_condition(2, v46, v47, v48))
                goto LABEL_124e9;
LABEL_124ea:
            if (armg_calculate_condition(18, v46, v47, v48))
                goto LABEL_124ed;
LABEL_124ee:
        }
        if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
            return v38;
        __stack_chk_fail(); /* do not return */
    }
    else if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
    {
        __stack_chk_fail(); /* do not return */
    }
    else
    {
        return 4294967295;
    }
}


// Function: call_thread_local_storage at 0x125ac
unsigned int call_thread_local_storage()
{
    unsigned int count;  // r0

    count = param_thread_local_storage(4);
    return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x125b4
extern char g_13937;
extern char g_13955;
extern char g_13971;
extern char g_1398e;
extern char g_139aa;
extern char g_139c6;
extern char g_139e2;

unsigned int test_thread_concurrency()
{
    unsigned int v0;  // r1
    unsigned int *v1;  // r2
    unsigned int v2;  // r3
    unsigned int v5;  // r0
    unsigned int v6;  // r0
    unsigned int v7;  // r0
    unsigned int v8;  // r0

    __printf_chk(1, 0x13955, call_pthread_create(puts(0x13937), v0, v1, v2));
    __printf_chk(1, 0x13971, param_pthread_join());
    v5 = call_mutex_lock();
    v6 = param_condition_variable(__printf_chk(1, 0x1398e, v5), v0, v1, v2);
    v7 = call_atomic_ops(__printf_chk(1, 0x139aa, v6), v0, v1, v2);
    __printf_chk(1, 0x139c6, v7);
    v8 = __printf_chk(1, 0x139e2, call_thread_local_storage());
    return __printf_chk(1, 0x139e2, call_thread_local_storage());
}


// Function: __sync_fetch_and_add_4 at 0x12658
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x12690
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x126c8
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x12700
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x12738
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x12770
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x127ac
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x1280c
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x1286c
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x128cc
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x1292c
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x1298c
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x129f0
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x12a4c
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x12aa8
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x12b04
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x12b60
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x12bbc
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x12c1c
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x12c54
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x12c8c
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x12cc4
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x12cfc
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x12d34
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x12d70
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_sub_and_fetch_2 at 0x12dd8
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_or_and_fetch_2 at 0x12e40
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_and_and_fetch_2 at 0x12ea8
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_xor_and_fetch_2 at 0x12f10
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_nand_and_fetch_2 at 0x12f78
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_add_and_fetch_1 at 0x12fe4
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_sub_and_fetch_1 at 0x13048
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_or_and_fetch_1 at 0x130ac
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_and_and_fetch_1 at 0x13110
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_xor_and_fetch_1 at 0x13174
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_nand_and_fetch_1 at 0x131d8
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_val_compare_and_swap_4 at 0x13240
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
    while (*(a0) == i)
    {
        if (!4294905792())
            return i;
    }
    return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x13290
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
    {
        if (!4294905792())
            return a1;
    }
    return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x13308
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
    {
        if (!4294905792())
            return a1;
    }
    return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x1337c
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    v4 = 4294905792();
    return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_2 at 0x133a8
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    v4 = a1 - __sync_val_compare_and_swap_2(a0, a1, a2);
    return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_1 at 0x133c4
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    v4 = a1 - __sync_val_compare_and_swap_1(a0, a1, a2);
    return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_synchronize at 0x133e0
int __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x133ec
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x13424
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x13484
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x134e0
void __sync_lock_release_8(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    ptr[1] = 0;
    return;
}


// Function: __sync_lock_release_4 at 0x13504
void __sync_lock_release_4(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_2 at 0x13524
void __sync_lock_release_2(unsigned short *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_1 at 0x13544
void __sync_lock_release_1(char *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __aeabi_read_tp at 0x13570
void __aeabi_read_tp()
{
}


// Function: _fini at 0x13578
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

