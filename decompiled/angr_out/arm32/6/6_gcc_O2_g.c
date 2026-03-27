// Angr Decompilation of 6_gcc_O2_g
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
    unsigned int v0;  // r2
    unsigned int i;  // r3
    unsigned int v2;  // r1

    v0 = 0;
    i = *(ptr);
    v2 = ptr[1];
    ptr[2] = 0;
    if (v2 < i)
        return 0;
    do
    {
        v0 += i;
        i += 1;
    } while (i != v2 + 1);
    ptr[2] = v0;
    return 0;
}


// Function: thread_compute at 0x110f0
unsigned int * thread_compute(unsigned int *a0)
{
    unsigned int *ptr;  // r0

    ptr = malloc(4);
    *(ptr) = *(a0) * *(a0);
    return ptr;
}


// Function: thread_increment at 0x11118
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int *ptr)
{
    unsigned int i;  // r7
    unsigned int v1;  // r4

    i = *(ptr);
    if (i <= 0)
        return 0;
    v1 = 0;
    do
    {
        pthread_mutex_lock(0x24120);
        shared_counter = shared_counter + 1;
        v1 += 1;
        pthread_mutex_unlock(0x24120);
        usleep(1000);
    } while (i != v1);
    return 0;
}


// Function: consumer_thread at 0x11170
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int i;

unsigned int * consumer_thread()
{
    unsigned int *ptr;  // r0

    pthread_mutex_lock(0x2413c);
    if (!i)
    {
        do
        {
            pthread_cond_wait(0x24158, 0x2413c);
        } while (!i);
    }
    pthread_mutex_unlock(0x2413c);
    ptr = malloc(4);
    *(ptr) = data;
    return ptr;
}


// Function: producer_thread at 0x111d0
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


// Function: thread_atomic_increment at 0x11218
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern unsigned int atomic_counter;

unsigned int thread_atomic_increment(unsigned int *ptr)
{
    unsigned int i;  // r7
    unsigned int v4;  // r4
    unsigned int v5;  // r4
    unsigned int v6;  // r0
    unsigned int v7;  // r4
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]

    i = *(ptr);
    v2 = GLIBC_2.4::__stack_chk_guard;
    if (i > 0)
    {
        v4 = 0;
        do
        {
            v5 = v4;
            __sync_fetch_and_add_4(0x2418c, 1);
            v0 = v5;
            v6 = __sync_val_compare_and_swap_4(0x2418c, v5, v5 + 1000);
            v7 = v5 + 1;
            v1 = v6;
            v4 = v7;
        } while (i != v4);
    }
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return 0;
}


// Function: thread_atomic_load_store at 0x112a8
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


// Function: sub_112b4 at 0x112b4
void sub_112b4()
{
    __sync_synchronize(); /* do not return */
}


// Function: sub_112bc at 0x112bc
void sub_112bc()
{
    __sync_synchronize(); /* do not return */
}


// Function: sub_112c4 at 0x112c4
typedef struct struct_0 {
    char padding_0[116];
    unsigned int field_74;
} struct_0;

void sub_112c4()
{
    struct_0 *ptr;  // r5
    unsigned int v1;  // r4

    ptr->field_74 = v1;
    __sync_synchronize(); /* do not return */
}


// Function: sub_112cf at 0x112cf
int sub_112cf(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
}


// Function: sub_112d0 at 0x112d0
int sub_112d0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0;
}


// Function: thread_tls_test at 0x112d8
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


// Function: sub_112e4 at 0x112e4
unsigned int [2] sub_112e4(unsigned int p, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
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


// Function: param_strcpy at 0x11324
int param_strcpy(char *a0, char *a1)
{
    return stpcpy(a0, a1) - a0;
}


// Function: call_strcpy at 0x11338
unsigned int call_strcpy()
{
    return 8;
}


// Function: param_strcmp at 0x11340
unsigned int param_strcmp(char *a0, char *a1)
{
    unsigned int v0;  // r0
    unsigned int v2;  // r0

    v0 = strcmp(a0, a1);
    if (v0 > 0)
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


// Function: call_strcmp at 0x11364
unsigned int call_strcmp()
{
    return 0;
}


// Function: param_strlen at 0x1136c
int param_strlen()
{
    char *v0;  // r0
    unsigned int len;  // r0

    len = strlen(v0);
    return strlen(v0);
}


// Function: call_strlen at 0x11370
unsigned int call_strlen()
{
    return 12;
}


// Function: param_memcpy at 0x11378
int param_memcpy(void* a0, void* a1, unsigned int n)
{
    memcpy(a0, a1, n);
    return n;
}


// Function: call_memcpy at 0x1138c
unsigned int call_memcpy()
{
    return 90;
}


// Function: param_memcmp at 0x11394
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v0;  // r0
    unsigned int v2;  // r0

    v0 = memcmp(a0, a1, a2);
    if (v0 > 0)
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


// Function: call_memcmp at 0x113b8
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_memcmp()
{
    unsigned int v10;  // r0
    unsigned int v11;  // r6
    unsigned int v12;  // r6
    unsigned int v13;  // r0
    unsigned int v14;  // r0
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

    result = 1;
    v1 = 2;
    v2 = 3;
    v9 = GLIBC_2.4::__stack_chk_guard;
    flag1 = 1;
    v4 = 2;
    v5 = 4;
    flag2 = 1;
    v7 = 2;
    v8 = 3;
    v10 = memcmp(&result, &flag1, 12);
    if (0 < v10)
    {
        v11 = 1;
        if (!((char)armg_calculate_condition(194, v10, 0, 0)))
        {
            if (armg_calculate_condition(18, v10, 0, 0))
                goto LABEL_11419;
LABEL_1141a:
            if (armg_calculate_condition(2, v10, 0, 0))
                goto LABEL_1141d;
LABEL_1141e:
        }
    }
    else
    {
        v11 = v12;
        if (!((char)armg_calculate_condition(194, v10, 0, 0)))
        {
            if (!armg_calculate_condition(18, v10, 0, 0))
                goto LABEL_1141a;
LABEL_11419:
            v11 = 4294967295;
            if (!armg_calculate_condition(2, v10, 0, 0))
                goto LABEL_1141e;
LABEL_1141d:
            v11 = 0;
        }
    }
    v13 = memcmp(&result, &flag2, 12);
    if (0 < v13)
    {
        v14 = 1;
        if (!((char)armg_calculate_condition(194, v13, 0, 0)))
        {
            if (armg_calculate_condition(18, v13, 0, 0))
                goto LABEL_1143d;
LABEL_1143e:
            if (armg_calculate_condition(2, v13, 0, 0))
                goto LABEL_11441;
LABEL_11442:
        }
    }
    else
    {
        v14 = v13;
        if (!((char)armg_calculate_condition(194, v13, 0, 0)))
        {
            if (!armg_calculate_condition(18, v13, 0, 0))
                goto LABEL_1143e;
LABEL_1143d:
            v14 = 4294967295;
            if (!armg_calculate_condition(2, v13, 0, 0))
                goto LABEL_11442;
LABEL_11441:
            v14 = 0;
        }
    }
    if ((v9 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v14 + v11;
}


// Function: param_printf at 0x11474
int param_printf(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r0

    v0 = __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
    return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x1148c
int call_printf()
{
    unsigned int v0;  // r0

    v0 = __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
    return __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test");
}


// Function: param_scanf at 0x114a8
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_scanf()
{
    unsigned int v4;  // lr
    char *v5;  // r0
    unsigned int v6;  // r0
    unsigned int v7;  // r3
    unsigned int v9;  // r0
    unsigned int v10;  // r0
    char v0;  // [bp-0x14]
    char v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = GLIBC_2.4::__stack_chk_guard;
    v6 = __isoc99_sscanf(v5, "%d,%d", &v0, &v1);
    if ((vvar_14{r8|4b} != 0x2<32>)) { Goto None } else { Goto None }
    if (armg_calculate_condition(2, v6, 2, 0))
        v9 = v6 + v7;
    else
        v9 = v6;
    v10 = v9;
    if (armg_calculate_condition(18, v6, 2, 0))
        v10 = 4294967295;
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v10;
}


// Function: call_scanf at 0x1150c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_scanf()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v4;  // r3
    unsigned int v6;  // r0
    unsigned int v7;  // r0
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = GLIBC_2.4::__stack_chk_guard;
    v3 = __isoc99_sscanf("123,456", "%d,%d");
    if ((vvar_15{r8|4b} != 0x2<32>)) { Goto None } else { Goto None }
    if (armg_calculate_condition(2, v3, 2, 0))
        v6 = v3 + v4;
    else
        v6 = v3;
    v7 = v6;
    if (armg_calculate_condition(18, v3, 2, 0))
        v7 = 4294967295;
    if ((v0 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v7;
}


// Function: param_fopen_fclose at 0x11578
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose()
{
    char *v0;  // r0
    FILE *fp;  // r0
    unsigned int v2;  // r0

    fp = fopen(v0, "r");
    if (!fp)
        return 4294967295;
    v2 = fileno(fp);
    fclose(fp);
    return v2;
}


// Function: call_fopen_fclose at 0x115b4
unsigned int call_fopen_fclose()
{
    void* fp;  // r4
    unsigned int v1;  // r0

    fp = fopen("/etc/passwd", "r");
    if (!fp)
        return 4294967295;
    v1 = fileno(fp);
    fclose(fp);
    if (v1 < 0)
        return 4294967295;
    return 42;
}


// Function: param_fread_fwrite at 0x11600
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_fread_fwrite(char *a0)
{
    void* fp;  // r4
    void* v3;  // r0
    unsigned int count;  // r3
    unsigned int result;  // r0
    unsigned int v6;  // r0
    char v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x14]

    v1 = GLIBC_2.4::__stack_chk_guard;
    fp = fopen(a0, "w+");
    if (fp)
    {
        v3 = fp;
        if (fwrite("BinBench Test Data", 1, 18, fp) == 18)
        {
            rewind(v3);
            count = fread(&v0, 1, 18, fp);
            (&v0)[count] = 0;
            fclose(fp);
            unlink(a0);
            if (count == 18)
            {
                result = strcmp(&v0, "BinBench Test Data");
                if (result)
                {
                    v6 = 4294967293;
                    if (!armg_calculate_condition(2, result, 0, 0))
                        goto LABEL_116ae;
LABEL_116ad:
                    v6 = 42;
                }
                else
                {
                    v6 = 0;
                    if (armg_calculate_condition(2, result, 0, 0))
                        goto LABEL_116ad;
LABEL_116ae:
                }
            }
            else
            {
                v6 = 4294967293;
            }
        }
        else
        {
            fclose(v3);
            v6 = 4294967294;
        }
    }
    else
    {
        v6 = 4294967295;
    }
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: call_fread_fwrite at 0x116fc
unsigned int call_fread_fwrite()
{
    unsigned int count;  // r0

    count = param_fread_fwrite("/tmp/binbench_test.tmp");
    return param_fread_fwrite("/tmp/binbench_test.tmp");
}


// Function: param_malloc_free at 0x11708
unsigned int param_malloc_free(unsigned int a0)
{
    unsigned int v0;  // r4
    unsigned int *ptr;  // r0
    unsigned int v2;  // r2
    unsigned int *ptr;  // r3
    unsigned int *v4;  // r3

    v0 = a0 * 4;
    ptr = malloc(v0);
    if (!ptr)
        return 4294967295;
    if (a0)
    {
        v2 = 0;
        ptr = ptr + 1;
        do
        {
            v4 = ptr + 1;
            ptr[1] = v2;
            v2 += 10;
            ptr = v4;
        } while (ptr != -4 + (char *)ptr + v0);
    }
    free(ptr);
    return *((int *)(-4 + (char *)ptr + v0)) + *(ptr);
}


// Function: call_malloc_free at 0x11770
unsigned int call_malloc_free()
{
    unsigned int ptr[10];  // r0
    unsigned int i;  // r3
    unsigned int ptr[10];  // r2
    unsigned int v3[10];  // r2

    ptr = malloc(40);
    if (!ptr)
        return 4294967295;
    i = 0;
    ptr = &ptr[1];
    do
    {
        v3 = &ptr[1];
        ptr[1] = i;
        i += 10;
        ptr = v3;
    } while (i != 100);
    free(ptr);
    return ptr[0] + ptr[9];
}


// Function: param_memset at 0x117bc
unsigned int param_memset(char *a0, unsigned int n)
{
    unsigned int v0;  // r0
    char *cur;  // r3
    unsigned int v2;  // r0
    unsigned int v3;  // r2
    unsigned int v4;  // r0

    memset(a0, 0, n);
    if (!n)
        return 0;
    v0 = 0;
    cur = a0 + 1;
    do
    {
        v2 = v0;
        cur += 1;
        v4 = v2 + cur[1];
        v0 = v4;
    } while (cur != &a0[1 + n]);
    return v2 + v3;
}


// Function: call_memset at 0x11808
unsigned int call_memset()
{
    return 0;
}


// Function: param_strchr_strstr at 0x11810
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
            goto LABEL_11832;
LABEL_11831:
        v10 -= a0;
    }
    else
    {
        v10 = ptr;
        if (armg_calculate_condition(18, v9, 0, 0))
            goto LABEL_11831;
LABEL_11832:
    }
    ptr = strstr(a0, a2);
    if (!ptr)
    {
        v12 = 4294967295;
        if (!armg_calculate_condition(18, ptr, 0, 0))
            goto LABEL_11842;
LABEL_11841:
        v12 -= a0;
    }
    else
    {
        v12 = ptr;
        if (armg_calculate_condition(18, ptr, 0, 0))
            goto LABEL_11841;
LABEL_11842:
    }
    return v10 + v12;
}


// Function: call_strchr_strstr at 0x1184c
unsigned int call_strchr_strstr()
{
    return 15;
}


// Function: test_standard_library_functions at 0x11854
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char g_13a54;
extern char g_13a78;
extern char g_13a94;
extern char g_13ab0;
extern char g_13acc;
extern char g_13ae8;
extern char g_13b04;
extern char g_13b20;
extern char g_13b40;
extern char g_13b5c;
extern char g_13b78;
extern char g_13b94;
extern char g_13bb0;

int test_standard_library_functions()
{
    unsigned int ptr[10];  // r0
    unsigned int i;  // r3
    unsigned int p[10];  // r2
    unsigned int v15[10];  // r2
    unsigned int v16;  // r4
    unsigned int v18;  // r0
    unsigned int v4;  // r0
    unsigned int v5;  // r2
    unsigned int v6;  // r2
    unsigned int v7;  // r3
    void* fp;  // r0
    unsigned int v9;  // r4
    unsigned int v10;  // r2
    unsigned int v0;  // [bp-0xc]

    v0 = GLIBC_2.4::__stack_chk_guard;
    puts(0x13a54);
    __printf_chk(1, 0x13a78, 8);
    __printf_chk(1, 0x13a94, call_strcmp());
    __printf_chk(1, 0x13ab0, 12);
    __printf_chk(1, 0x13acc, 90);
    __printf_chk(1, 0x13ae8, call_memcmp());
    __printf_chk(1, 0x13b04, __printf_chk(1, "Value: %d, Name: %s\n", 42, "Test"));
    v4 = __isoc99_sscanf("123,456", "%d,%d");
    if ((vvar_95{r8|4b} != 0x2<32>)) { Goto None } else { Goto None }
    if (armg_calculate_condition(18, v4, 2, 0))
    {
        v5 = 4294967295;
        if (!armg_calculate_condition(2, v4, 2, 0))
            goto LABEL_11912;
LABEL_11911:
        v5 += v7;
    }
    else
    {
        v5 = v6;
        if (armg_calculate_condition(2, v4, 2, 0))
            goto LABEL_11911;
LABEL_11912:
    }
    __printf_chk(1, 0x13b20, v5);
    fp = fopen("/etc/passwd", "r");
    if (fp)
    {
        v9 = fileno(fp);
        fclose(fp);
        if (0 <= v9)
        {
            v10 = 42;
            if (!((char)armg_calculate_condition(178, v9, 0, 0)))
                goto LABEL_11954;
        }
        else if (!((char)armg_calculate_condition(178, v9, 0, 0)))
        {
            goto LABEL_11954;
        }
    }
    v10 = 4294967295;
LABEL_11954:
    __printf_chk(1, 0x13b40, v10);
    __printf_chk(1, 0x13b5c, param_fread_fwrite("/tmp/binbench_test.tmp"));
    ptr = malloc(40);
    if (ptr)
    {
        i = 0;
        p = &ptr[1];
        do
        {
            v15 = &p[1];
            p[1] = i;
            i += 10;
            p = v15;
        } while (i != 100);
        v16 = ptr[0] + ptr[9];
        free(ptr);
    }
    else
    {
        v16 = 4294967295;
    }
    __printf_chk(1, 0x13b78, v16);
    __printf_chk(1, 0x13b94, call_memset());
    if ((v0 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    v18 = __printf_chk(1, 0x13bb0, 15);
    return __printf_chk(1, 0x13bb0, 15);
}


// Function: param_linux_syscall at 0x11a6c
unsigned int param_linux_syscall(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = syscall(5);
    if (v0 < 0)
        return -(*(__errno_location()));
    syscall(6);
    return v0;
}


// Function: call_linux_syscall at 0x11ab0
unsigned int * call_linux_syscall()
{
    unsigned int *err;  // r0
    unsigned int *v2;  // r0

    if (syscall(5) >= 0)
    {
        syscall(6);
        return 0x2a;
    }
    err = __errno_location();
    if (*(err) <= 0)
    {
        v2 = 0x2a;
        if (!armg_calculate_condition(194, *(err), 0, 0))
            return v2;
    }
    else
    {
        v2 = err;
        if (!armg_calculate_condition(194, *(v2), 0, 0))
            return v2;
    }
    return 0xffffffff;
}


// Function: param_win32_api at 0x11af8
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_win32_api()
{
    unsigned int v3;  // lr
    unsigned int v4;  // r0
    char v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = GLIBC_2.4::__stack_chk_guard;
    v4 = stat();
    if (v4 < 0)
    {
        v4 = 4294967295;
    }
    else if (0 < *((int *)&v0))
    {
        v4 = 42;
        if (!armg_calculate_condition(210, *((int *)&v0), 0, 0))
            goto LABEL_11b2e;
LABEL_11b2d:
        v4 = 4294967294;
    }
    else
    {
        if (armg_calculate_condition(210, *((int *)&v0), 0, 0))
            goto LABEL_11b2d;
LABEL_11b2e:
    }
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v4;
}


// Function: call_win32_api at 0x11b60
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_win32_api()
{
    unsigned int v4;  // lr
    unsigned int v5;  // r0
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = GLIBC_2.4::__stack_chk_guard;
    v5 = stat("/etc/passwd", &v0);
    if (v5 < 0)
    {
        v5 = 4294967295;
    }
    else if (0 < *((int *)&v1))
    {
        v5 = 42;
        if (!armg_calculate_condition(210, *((int *)&v1), 0, 0))
            goto LABEL_11b9a;
LABEL_11b99:
        v5 = 4294967294;
    }
    else
    {
        if (armg_calculate_condition(210, *((int *)&v1), 0, 0))
            goto LABEL_11b99;
LABEL_11b9a:
    }
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v5;
}


// Function: param_fork_exec at 0x11bd0
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_fork_exec(char *a0, unsigned int a1)
{
    unsigned int pid;  // r0
    unsigned int v3;  // r0
    unsigned int v5;  // r0
    unsigned int v0[1];  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]

    v1 = GLIBC_2.4::__stack_chk_guard;
    pid = fork();
    if (pid < 0)
    {
        v5 = 4294967295;
    }
    else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
    {
        v3 = waitpid(pid, &v0, 0);
        if (v3 < 0)
        {
            v5 = 4294967294;
            if (!((char)armg_calculate_condition(178, v3, 0, 0)))
                goto LABEL_11c18;
        }
        else
        {
            v5 = v3;
            if (!((char)armg_calculate_condition(178, v5, 0, 0)))
            {
LABEL_11c18:
                v5 = (!(*(v0) & 127) ? (!(*(v0) & 127) ? ((*(v0) & 127) ? 4294967293 : *(v0)) >> 8 : 4294967293) & 255 : (!(*(v0) & 127) ? ((*(v0) & 127) ? 4294967293 : *(v0)) >> 8 : 4294967293));
            }
        }
    }
    else
    {
        execl(a0, a0);
        _exit(127); /* do not return */
    }
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v5;
}


// Function: call_fork_exec at 0x11c74
unsigned int call_fork_exec()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int pid;  // r0
    unsigned int v6;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    pid = param_fork_exec("/bin/true", 0);
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


// Function: param_pipe_communication at 0x11c98
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
                    goto LABEL_11d3e;
LABEL_11d3d:
                v6 = 4294967293;
            }
            else
            {
                if (armg_calculate_condition(210, count, 0, 0))
                    goto LABEL_11d3d;
LABEL_11d3e:
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
    if ((v3 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: call_pipe_communication at 0x11d7c
unsigned int call_pipe_communication()
{
    unsigned int v0;  // r0

    v0 = param_pipe_communication();
    return param_pipe_communication();
}


// Function: param_socket_create at 0x11d80
typedef struct sockaddr {
    unsigned short sin_family;
    char sa_data[14];
} sockaddr;

extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_socket_create()
{
    unsigned int sock;  // r4
    unsigned int v8;  // r0
    unsigned int v9;  // r0
    unsigned int flag3;  // [bp-0x20]
    sockaddr v1;  // [bp-0x1c]
    unsigned int v6;  // [bp-0xc]

    v6 = GLIBC_2.4::__stack_chk_guard;
    sock = socket(2, 1, 0);
    if (sock >= 0)
    {
        flag3 = 1;
        if (setsockopt(sock, 1, 2, &flag3, 4) >= 0)
        {
            *((unsigned int *)&v1.sin_family) = 0;
            *((unsigned int *)&v1.sa_data[2]) = 0;
            v1.sin_family = 2;
            *((unsigned int *)&v1.sa_data[6]) = 0;
            *((unsigned int *)&v1.sa_data[10]) = 0;
            if (bind(sock, &v1, 16) >= 0)
            {
                v8 = sock;
                if (listen(sock, 5) >= 0)
                {
                    close(v8);
                    v9 = 42;
                }
                else
                {
                    close(v8);
                    v9 = 0xfffffffc;
                }
            }
            else
            {
                close(sock);
                v9 = 4294967293;
            }
        }
        else
        {
            close(sock);
            v9 = 4294967294;
        }
    }
    else
    {
        v9 = 4294967295;
    }
    if ((v6 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v9;
}


// Function: call_socket_create at 0x11e84
unsigned int call_socket_create()
{
    unsigned int sock;  // r0

    sock = param_socket_create();
    return param_socket_create();
}


// Function: param_shmget_shmat at 0x11e88
unsigned int param_shmget_shmat()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0
    void* v2;  // r0

    v0 = open("/tmp/binbench_shm", 66, 438);
    if (v0 < 0)
        return 4294967295;
    close(v0);
    if (ftok("/tmp/binbench_shm", 42) < 0)
        return 4294967295;
    v1 = shmget();
    if (v1 < 0)
        return 4294967294;
    v2 = shmat();
    if (v2 == 0xffffffff)
        return 4294967293;
    memcpy(v2, "SharedMemory", 13);
    shmdt(v2);
    shmctl(v1, 0, 0);
    return 12;
}


// Function: call_shmget_shmat at 0x11f3c
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


// Function: param_signal_handling at 0x11f54
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    unsigned int v0;  // r0
    unsigned int v1;  // r4
    unsigned int result;  // r4
    unsigned int v3;  // r4
    unsigned int v4;  // r4
    unsigned int flag1;  // r4
    unsigned int v6;  // r4

    v0 = signal(10, signal_handler);
    if (v0 != 4294967295)
        goto LABEL_11f6c;
    return v0;
LABEL_11f6c:
    if (signal(14, signal_handler) == 4294967295)
        return 4294967294;
    signal_received = 0;
    raise(10);
    if (!signal_received)
    {
        v1 = 1000;
        do
        {
            result = v1;
            usleep(1000);
        } while (!signal_received && (v3 = result - 1, v1 = result - 1, result != 1));
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
                flag1 = v4;
                usleep(1000);
            } while (!signal_received && (v6 = flag1 - 1, v4 = flag1 - 1, flag1 != 1));
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


// Function: call_signal_handling at 0x1207c
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


// Function: test_system_calls at 0x12080
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char g_13c08;
extern char g_13c24;
extern char g_13c40;
extern char g_13c5c;
extern char g_13c78;
extern char g_13c94;
extern char g_13cb0;
extern char g_13ccc;

int test_system_calls()
{
    unsigned int v6;  // r2
    unsigned int *err;  // r0
    unsigned int v16;  // r1
    unsigned int v17;  // r2
    unsigned int v18;  // r3
    unsigned int v19;  // r0
    unsigned int v20;  // r0
    unsigned int v8;  // r2
    unsigned int pid;  // r3
    unsigned int v10;  // r2
    unsigned int v13;  // r3
    unsigned int v14;  // r2
    unsigned int v15;  // r0
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x64]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x5c]
    char v4;  // [bp-0x3c]
    unsigned int v5;  // [bp-0xc]

    v5 = GLIBC_2.4::__stack_chk_guard;
    puts(0x13c08);
    if (syscall(5) >= 0)
    {
        syscall(6);
        v6 = 42;
    }
    else
    {
        err = __errno_location();
        if (*(err) <= 0)
        {
            v6 = 42;
            if (!armg_calculate_condition(194, *(err), 0, 0))
                goto LABEL_121b6;
LABEL_121b5:
            v6 = 4294967295;
        }
        else
        {
            if (armg_calculate_condition(194, *(err), 0, 0))
                goto LABEL_121b5;
LABEL_121b6:
        }
    }
    __printf_chk(1, 0x13c24, v6);
    if (stat("/etc/passwd", &v0) < 0)
    {
        v8 = 4294967295;
    }
    else if (0 < *((int *)&v4))
    {
        v8 = 42;
        if (!armg_calculate_condition(210, *((int *)&v4), 0, 0))
            goto LABEL_120f2;
LABEL_120f1:
        v8 = 4294967294;
    }
    else
    {
        if (armg_calculate_condition(210, *((int *)&v4), 0, 0))
            goto LABEL_120f1;
LABEL_120f2:
    }
    __printf_chk(1, 0x13c40, v8);
    pid = param_fork_exec("/bin/true", 0);
    if (!pid)
    {
        v10 = 42;
        if (!armg_calculate_condition(18, pid, 0, 0))
            goto LABEL_1211a;
LABEL_12119:
        v10 = 4294967295;
    }
    else
    {
        if (armg_calculate_condition(18, pid, 0, 0))
            goto LABEL_12119;
LABEL_1211a:
    }
    __printf_chk(1, 0x13c5c, v10);
    __printf_chk(1, 0x13c78, param_pipe_communication());
    __printf_chk(1, 0x13c94, param_socket_create());
    v13 = param_shmget_shmat();
    if (0 < v13)
    {
        v14 = 42;
        if (!armg_calculate_condition(210, v13, 0, 0))
            goto LABEL_12162;
LABEL_12161:
        v14 = 4294967295;
    }
    else
    {
        if (armg_calculate_condition(210, v13, 0, 0))
            goto LABEL_12161;
LABEL_12162:
    }
    v15 = __printf_chk(1, 0x13cb0, v14);
    v19 = param_signal_handling(v15, v16, v17, v18, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
    if ((v5 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    v20 = __printf_chk(1, 0x13ccc, v19);
    return __printf_chk(1, 0x13ccc, v19);
}


// Function: param_pthread_create at 0x121f4
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_pthread_create(unsigned int a0)
{
    unsigned int v4;  // r4
    char v0;  // [bp-0x18], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10], Other Possible Types: char
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    v1 = a0;
    if (!pthread_create(&v0, 0, thread_compute, &v1))
    {
        pthread_join(v0, &ptr);
        v4 = *(ptr);
        free(ptr);
    }
    else
    {
        v4 = 4294967295;
    }
    if ((v3 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v4;
}


// Function: call_pthread_create at 0x12280
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_pthread_create()
{
    unsigned int v4;  // r4
    char v0;  // [bp-0x18], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10], Other Possible Types: char
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    v1 = 7;
    if (!pthread_create(&v0, 0, thread_compute, &v1))
    {
        pthread_join(v0, &ptr);
        v4 = *(ptr);
        free(ptr);
    }
    else
    {
        v4 = 4294967295;
    }
    if ((v3 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v4;
}


// Function: param_pthread_join at 0x1230c
typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned int field_8;
} struct_0;

extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_pthread_join()
{
    unsigned int *v12;  // r6
    char *v13;  // r7
    struct_0 *cur;  // r8
    char *v15;  // r5
    unsigned int count;  // r0
    unsigned int *v17;  // r6
    unsigned int v0;  // [bp-0x54]
    unsigned int result;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    unsigned int flag1;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x38]
    unsigned int flag2;  // [bp-0x34]
    unsigned int v8;  // [bp-0x30]
    unsigned int v9;  // [bp-0x2c]
    unsigned int flag3;  // [bp-0x28]
    unsigned int v11;  // [bp-0x24]

    v12 = &v0;
    v13 = &v0;
    v11 = GLIBC_2.4::__stack_chk_guard;
    cur = &result;
    v15 = &result;
    result = 1;
    v3 = 10;
    flag1 = 0;
    v5 = 11;
    v6 = 20;
    flag2 = 0;
    v8 = 21;
    v9 = 30;
    flag3 = 0;
    while (true)
    {
        count = pthread_create(v13, 0, thread_sum, v15);
        if (!count)
        {
            v15 += 12;
            v13 += 4;
            if (v15 == &v11)
            {
                do
                {
                    v17 = v12;
                    if (pthread_join(*(v17), 0))
                    {
                        if (!(v11 ^ GLIBC_2.4::__stack_chk_guard))
                            return 4294967294;
                        __stack_chk_fail(); /* do not return */
                    }
                } while ((count += cur->field_8, cur += 12, v12 = v17 + 4, v12 != &result));
                if ((v11 ^ GLIBC_2.4::__stack_chk_guard))
                    __stack_chk_fail(); /* do not return */
                return count;
            }
        }
        else if (!(v11 ^ GLIBC_2.4::__stack_chk_guard))
        {
            return 4294967295;
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
}


// Function: call_pthread_join at 0x123f8
unsigned int call_pthread_join()
{
    unsigned int count;  // r0

    count = param_pthread_join();
    return param_pthread_join();
}


// Function: param_mutex_lock at 0x123fc
extern unsigned int shared_counter;

int param_mutex_lock(unsigned int a0, unsigned int a1)
{
    unsigned int *ptr;  // r8
    unsigned int i;  // r6
    unsigned int v12;  // r0
    unsigned int v13;  // r7
    unsigned int *v3;  // r5
    unsigned int *v4;  // r5
    unsigned int count;  // r0
    unsigned int v6;  // r3
    unsigned int *v8;  // r5
    unsigned int v9;  // r4
    unsigned int v0;  // [bp-0x24]

    v0 = a1;
    ptr = malloc(a0 * 4);
    if (!ptr)
        return 4294967295;
    i = 0;
    shared_counter = 0;
    if (a0 > 0)
    {
        v3 = ptr;
        while (true)
        {
            v4 = v3;
            v6 = i + 1;
            if (pthread_create(v4, 0, thread_increment, &v0))
            {
                free(ptr);
                return 4294967294;
            }
            if (a0 == v6)
                break;
            i = v6;
            v3 = v4 + 1;
        }
        v8 = ptr + 1;
        do
        {
            v9 = count;
            pthread_join(v8[1], 0);
            v8 += 1;
            count = v9 + 1;
        } while (i != v9);
    }
    v12 = (unsigned int)free(ptr);
    v13 = v0 * a0;
    if (shared_counter == v13)
    {
        if (!armg_calculate_condition(18, shared_counter, v13, 0))
            return 42;
    }
    else
    {
        if (!armg_calculate_condition(18, shared_counter, v13, 0))
            return v12;
    }
    return 4294967293;
}


// Function: call_mutex_lock at 0x124d4
unsigned int call_mutex_lock()
{
    unsigned int v0;  // r0

    v0 = param_mutex_lock(4, 1000);
    return param_mutex_lock(4, 1000);
}


// Function: param_condition_variable at 0x124e0
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable()
{
    unsigned int count;  // r0
    unsigned int count;  // r0
    unsigned int v6;  // r4
    char v0;  // [bp-0x18], Other Possible Types: unsigned int
    char v1;  // [bp-0x14], Other Possible Types: unsigned int
    unsigned int *ptr;  // [bp-0x10], Other Possible Types: char
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    ready = 0;
    data = 0;
    count = pthread_create(&v1, 0, consumer_thread, 0);
    if (!count)
    {
        count = pthread_create(&v0, count, producer_thread);
        if (!count)
        {
            pthread_join(v1, &ptr);
            pthread_join(v0, count);
            v6 = *(ptr);
            free(ptr);
        }
        else
        {
            pthread_cancel(v1);
            v6 = 4294967294;
        }
    }
    else
    {
        v6 = 4294967295;
    }
    if ((v3 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: call_condition_variable at 0x125a8
unsigned int call_condition_variable()
{
    unsigned int v0;  // r0

    v0 = param_condition_variable();
    return param_condition_variable();
}


// Function: param_atomic_ops at 0x125ac
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x24]

    v1 = GLIBC_2.4::__stack_chk_guard;
    v0 = a1;
    if (malloc(a0 * 4))
    {
        __sync_synchronize(); /* do not return */
    }
    else if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
    {
        return 4294967295;
    }
    else
    {
        __stack_chk_fail(); /* do not return */
    }
}


// Function: sub_125e8 at 0x125e8
typedef struct struct_0 {
    char padding_0[116];
    unsigned int field_74;
} struct_0;

void sub_125e8()
{
    struct_0 *ptr;  // r9
    unsigned int v1;  // r5

    ptr->field_74 = v1;
    __sync_synchronize(); /* do not return */
}


// Function: sub_125f0 at 0x125f0
int sub_125f0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
    unsigned int v0;  // r7
    unsigned int v1;  // r5
    unsigned int *v2;  // r8
    unsigned int *v3;  // r6
    unsigned int v4;  // r5
    unsigned int *v5;  // r6
    unsigned int count;  // r4
    unsigned int *v7;  // r6
    unsigned int *v8;  // r5
    unsigned int *v9;  // r5

    if (v0 > v1)
    {
        v3 = v2;
        do
        {
            count = pthread_create(v3, 0, thread_atomic_increment, &a5);
            if (count)
                free(v2);
        } while ((v4 += 1, v7 = v5 + 4, v3 = v5 + 4, v0 != v4));
        if (!pthread_create(&vvar_6, count, thread_atomic_load_store, count))
            pthread_join(a6, count);
        v8 = v2 + 1;
        do
        {
            v9 = v8 + 1;
            count += 1;
            pthread_join(v8[1], 0);
            v8 = v9;
        } while (count < v0);
    }
    else if (!pthread_create(&vvar_6, v4, thread_atomic_load_store, v4))
    {
        pthread_join(a6);
    }
    __sync_synchronize(); /* do not return */
}


// Function: sub_12698 at 0x12698
void sub_12698()
{
    __sync_synchronize(); /* do not return */
}


// Function: sub_126a0 at 0x126a0
int sub_126a0()
{
    unsigned int *v0;  // r8
    unsigned int v1;  // r4

    free(v0);
    if (0 < v1)
    {
        if (!armg_calculate_condition(210, v1, 0, 0))
            goto LABEL_126b2;
LABEL_126b1:
    }
    else
    {
        if (armg_calculate_condition(210, v1, 0, 0))
            goto LABEL_126b1;
LABEL_126b2:
    }
}


// Function: call_atomic_ops at 0x1270c
unsigned int call_atomic_ops()
{
    unsigned int v0;  // r0

    v0 = param_atomic_ops(4, 500);
    return param_atomic_ops(4, 500);
}


// Function: param_thread_local_storage at 0x12718
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int param_thread_local_storage(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
    unsigned int v6;  // r3
    unsigned int v7;  // r4
    unsigned int *v16;  // cc_dep1
    unsigned int v17;  // cc_dep2
    unsigned int v18;  // cc_ndep
    unsigned int **k;  // r7
    unsigned int **v23;  // r6
    unsigned int v24;  // r4
    unsigned int *ptr;  // r10
    unsigned int **ptr3;  // r6
    unsigned int ptr;  // r0
    unsigned int j;  // r5
    unsigned int v30;  // r4
    unsigned int **v31;  // r11
    unsigned int *v32;  // r6
    unsigned int v33;  // r4
    unsigned int *v34;  // r6
    unsigned int **ptr;  // r0
    unsigned int **v35;  // r11
    unsigned int v40;  // r0
    unsigned int v41;  // r9
    unsigned int v42;  // r6
    unsigned int *v43;  // r11
    unsigned int *v10;  // cc_dep1
    unsigned int v44;  // r6
    unsigned int **v45;  // r7
    unsigned int v49;  // r2
    unsigned int v50;  // r1
    unsigned int v51;  // cc_dep2
    unsigned int v52;  // r2
    unsigned int v53;  // r3
    unsigned int v11;  // cc_dep2
    unsigned int v54;  // cc_dep2
    unsigned int result;  // r3
    unsigned int v12;  // cc_ndep
    unsigned int *v13;  // cc_dep1
    unsigned int v14;  // cc_dep2
    unsigned int v15;  // cc_ndep
    unsigned int *addr;  // [bp-0x3c]
    unsigned int **p;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    unsigned int ptr[2];  // [bp-0x30]
    unsigned int v4;  // [bp-0x2c]
    unsigned int v5;  // [bp-0x8]

    v5 = &vvar_4;
    v4 = GLIBC_2.4::__stack_chk_guard;
    v6 = i * 4;
    v7 = v6;
    v2 = v6;
    ptr = malloc(v6);
    addr = ptr;
    ptr = malloc(v7);
    if (ptr)
    {
        v13 = (armg_calculate_condition(18, v10, v11, v12) ? ptr : v10);
        v14 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v11);
        v15 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v12);
    }
    else
    {
        v13 = (armg_calculate_condition(18, v16, v17, v18) ? ptr : v16);
        v14 = (armg_calculate_condition(18, v16, v17, v18) ? 0 : v17);
        v15 = (armg_calculate_condition(18, v16, v17, v18) ? 0 : v18);
    }
    p = ptr;
    if (armg_calculate_condition(2, v13, v14, v15))
    {
        v7 = 1;
        if (!armg_calculate_condition(18, v13, v14, v15))
            goto LABEL_1276a;
LABEL_12769:
        v7 = 0;
        if ((char)armg_calculate_condition(2, v13, v14, v15))
        {
            if (!(v4 ^ GLIBC_2.4::__stack_chk_guard))
                return 4294967295;
            __stack_chk_fail(); /* do not return */
        }
    }
    else
    {
        if (armg_calculate_condition(18, v13, v14, v15))
            goto LABEL_12769;
LABEL_1276a:
        if ((char)armg_calculate_condition(2, v13, v14, v15))
        {
            if (!(v4 ^ GLIBC_2.4::__stack_chk_guard))
                return 4294967295;
            __stack_chk_fail(); /* do not return */
        }
    }
    if (i > 0)
    {
        k = ptr + 1;
        v23 = k;
        do
        {
            v24 = v7;
            ptr3 = v23;
            ptr = malloc(16);
            ptr3[1] = ptr;
            j = v24;
            __snprintf_chk(ptr, 16, 1, 16, "Thread-%d", v24);
            v23 = ptr3 + 1;
            v7 = v24 + 1;
        } while (i != v7);
        v30 = 0;
        v31 = k;
        v32 = addr;
        do
        {
            v33 = v30;
            v34 = v32;
            v35 = v31;
            if (pthread_create(v34, 0, thread_tls_test, v35[1]))
            {
                do
                {
                    free(k[1]);
                    k += 1;
                } while (&p[v33] != k);
                free(p);
                free(addr);
                if ((v4 ^ GLIBC_2.4::__stack_chk_guard))
                    __stack_chk_fail(); /* do not return */
                return 4294967294;
            }
        } while ((v31 = v35 + 4, v32 = v34 + 4, v30 = v33 + 1, j != v33));
        v41 = 0;
        v42 = 0;
        v7 = 0;
        v43 = addr + 1;
        do
        {
            v44 = v42;
            v45 = k;
            pthread_join(v43[1], &ptr);
            v41 += ptr[0];
            v7 += ptr[1];
            free(ptr);
            free(v45[1]);
            v43 += 1;
            k = v45 + 1;
            v42 = v44 + 1;
        } while (j != v44);
    }
    else
    {
        v41 = v7;
    }
    free(p);
    v40 = (unsigned int)free(addr);
    v49 = v2 + i;
    v50 = v49 * 5;
    v51 = v50 * 4;
    v52 = v49 * 15;
    if (v41 == v50 * 4)
    {
        v53 = 1;
        if (!armg_calculate_condition(18, v41, v51, 0))
            goto LABEL_128ba;
LABEL_128b9:
        v53 = 0;
    }
    else
    {
        v53 = v2;
        if (armg_calculate_condition(18, v41, v51, 0))
            goto LABEL_128b9;
LABEL_128ba:
    }
    v54 = v52 * 2;
    if (v7 != v52 * 2)
    {
        result = 0;
        if (!armg_calculate_condition(2, v7, v54, 0))
            goto LABEL_128c6;
LABEL_128c5:
        result &= 1;
    }
    else
    {
        result = v53;
        if (armg_calculate_condition(2, v7, v54, 0))
            goto LABEL_128c5;
LABEL_128c6:
    }
    if (result)
    {
        v40 = 42;
        if (!armg_calculate_condition(2, result, 0, 0))
            goto LABEL_128d2;
LABEL_128d1:
        v40 = 4294967293;
    }
    else
    {
        if (armg_calculate_condition(2, result, 0, 0))
            goto LABEL_128d1;
LABEL_128d2:
    }
    if ((v4 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v40;
}


// Function: call_thread_local_storage at 0x128f8
unsigned int call_thread_local_storage()
{
    unsigned int v3;  // r1
    unsigned int v4;  // r2
    unsigned int v5;  // r3
    unsigned int count;  // r0
    char v0;  // [bp+0x0]
    char v1;  // [bp+0x4]
    char v2;  // [bp+0x8]

    count = param_thread_local_storage(4, v3, v4, v5, *((int *)&v0), *((int *)&v1), *((int *)&v2));
    return param_thread_local_storage(4, v3, v4, v5, *((int *)&v0), *((int *)&v1), *((int *)&v2));
}


// Function: test_thread_concurrency at 0x12900
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char g_13cf4;
extern char g_13d14;
extern char g_13d30;
extern char g_13d50;
extern char g_13d6c;
extern char g_13d88;
extern char g_13da4;

int test_thread_concurrency()
{
    unsigned int v4;  // r4
    unsigned int v9;  // r1
    unsigned int v10;  // r2
    unsigned int v11;  // r3
    unsigned int count;  // r0
    unsigned int v13;  // r0
    char v0;  // [bp-0x18], Other Possible Types: unsigned int
    char v1;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10], Other Possible Types: char
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    puts(0x13cf4);
    if (!pthread_create(&v0, 0, thread_compute, &v1))
    {
        pthread_join(v0, &ptr);
        v4 = *(ptr);
        free(ptr);
    }
    else
    {
        v4 = 4294967295;
    }
    __printf_chk(1, 0x13d14, v4);
    __printf_chk(1, 0x13d30, param_pthread_join());
    __printf_chk(1, 0x13d50, param_mutex_lock(4, 1000));
    __printf_chk(1, 0x13d6c, param_condition_variable());
    __printf_chk(1, 0x13d88, param_atomic_ops(4, 500));
    count = param_thread_local_storage(4, v9, v10, v11, v0, 7, ptr);
    if ((v3 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    v13 = __printf_chk(1, 0x13da4, count);
    return __printf_chk(1, 0x13da4, count);
}


// Function: __sync_fetch_and_add_4 at 0x12a34
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x12a6c
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x12aa4
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x12adc
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x12b14
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x12b4c
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x12b88
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x12be8
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x12c48
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x12ca8
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x12d08
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x12d68
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x12dcc
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x12e28
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x12e84
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x12ee0
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x12f3c
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x12f98
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x12ff8
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x13030
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x13068
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x130a0
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x130d8
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x13110
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x1314c
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


// Function: __sync_sub_and_fetch_2 at 0x131b4
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


// Function: __sync_or_and_fetch_2 at 0x1321c
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


// Function: __sync_and_and_fetch_2 at 0x13284
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


// Function: __sync_xor_and_fetch_2 at 0x132ec
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


// Function: __sync_nand_and_fetch_2 at 0x13354
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


// Function: __sync_add_and_fetch_1 at 0x133c0
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


// Function: __sync_sub_and_fetch_1 at 0x13424
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


// Function: __sync_or_and_fetch_1 at 0x13488
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


// Function: __sync_and_and_fetch_1 at 0x134ec
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


// Function: __sync_xor_and_fetch_1 at 0x13550
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


// Function: __sync_nand_and_fetch_1 at 0x135b4
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


// Function: __sync_val_compare_and_swap_4 at 0x1361c
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
    while (*(a0) == i)
    {
        if (!4294905792())
            return i;
    }
    return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x1366c
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
    {
        if (!4294905792())
            return a1;
    }
    return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x136e4
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
    {
        if (!4294905792())
            return a1;
    }
    return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x13758
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


// Function: __sync_bool_compare_and_swap_2 at 0x13784
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


// Function: __sync_bool_compare_and_swap_1 at 0x137a0
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


// Function: __sync_synchronize at 0x137bc
int __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x137c8
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x13800
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x13860
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x138bc
void __sync_lock_release_8(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    ptr[1] = 0;
    return;
}


// Function: __sync_lock_release_4 at 0x138e0
void __sync_lock_release_4(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_2 at 0x13900
void __sync_lock_release_2(unsigned short *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_1 at 0x13920
void __sync_lock_release_1(char *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __aeabi_read_tp at 0x13940
void __aeabi_read_tp()
{
}


// Function: _fini at 0x13948
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

