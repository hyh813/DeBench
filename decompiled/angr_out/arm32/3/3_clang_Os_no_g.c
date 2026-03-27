// Angr Decompilation of 3_clang_Os_no_g
// Platform: ARMEL

// Function: _init at 0x40055c
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_400568 at 0x400568
extern unsigned int g_413008;

int sub_400568()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_413008;
}


// Function: _start at 0x400654
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_40068c at 0x40068c
void sub_40068c()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400698
extern unsigned int g_41305c;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_41305c)
        goto LABEL_4006b0;
    return v0;
LABEL_4006b0:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x4006bc
extern char __TMC_END__;
extern unsigned int g_413058;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_4006dc;
    return &__TMC_END__;
LABEL_4006dc:
    if (g_413058)
        goto LABEL_4006ec;
    return &__TMC_END__;
LABEL_4006ec:
    goto g_413058;
}


// Function: register_tm_clones at 0x400700
extern char __TMC_END__;
extern unsigned int g_413068;

int register_tm_clones()
{
    if (0)
        goto LABEL_40072c;
    return &__TMC_END__;
LABEL_40072c:
    if (g_413068)
        goto LABEL_40073c;
    return &__TMC_END__;
LABEL_40073c:
    goto g_413068;
}


// Function: __do_global_dtors_aux at 0x400750
extern char __TMC_END__;
extern unsigned int __dso_handle;
extern unsigned int g_413054;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!__TMC_END__)
        goto LABEL_40076c;
    return v2;
LABEL_40076c:
    v1 = v3;
    v0 = v4;
    if (!g_413054)
    {
        v5 = deregister_tm_clones();
        __TMC_END__ = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4007b8
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: local_vars at 0x4007bc
int local_vars(unsigned int a0)
{
    return 10 + a0 * 2;
}


// Function: local_array at 0x4007c8
unsigned int local_array(unsigned int a0)
{
    unsigned int v1;  // r1
    unsigned int i;  // r3
    unsigned long v3;  // [bp-0x28]
    char v0;  // [bp-0x14]

    v1 = 0;
    i = 0;
    do
    {
        (&v3)[-1 * i] = v1;
        i -= 1;
        v1 += a0;
    } while (i != 4294967286);
    return *((int *)&v0);
}


// Function: local_struct at 0x4007f8
unsigned int local_struct(unsigned int a0)
{
    return a0 * 3;
}


// Function: address_of_local at 0x400800
unsigned int address_of_local(unsigned int *ptr)
{
    *(ptr) = 42;
    return 42;
}


// Function: address_of_array at 0x400810
unsigned int address_of_array(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: large_stack_frame at 0x40081c
int large_stack_frame()
{
    unsigned int i;  // r0
    unsigned long v2;  // [bp-0x808]
    char v0;  // [bp-0x408]

    i = 0;
    do
    {
        *((char *)&v2 + i) = i;
        i += 1;
    } while (i != 0x800);
    return v0;
}


// Function: vla_stack at 0x40084c
unsigned int vla_stack(unsigned int a0)
{
    unsigned int v3;  // r5
    unsigned int v4;  // r4
    unsigned int idx;  // r3
    unsigned int result;  // r2
    char v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    if ((char)armg_calculate_condition(49, a0 + 4294966295, 1000, 0))
        return 4294967295;
    v2 = v3;
    v1 = v4;
    idx = 0;
    result = a0;
    do
    {
        *((unsigned int *)&(&v0)[2 * idx + -1 * (7 + a0 * 4 & 0xfffffff8)]) = idx;
        idx += 2;
        result -= 1;
    } while (result != 1);
    return *((int *)&(&v0)[(4294967293 & (a0 + (a0 >> 31)) * 2) + -1 * (7 + a0 * 4 & 0xfffffff8)]);
}


// Function: alloca_usage at 0x4008c0
unsigned int alloca_usage(unsigned int a0)
{
    unsigned int v2;  // r0
    unsigned int i;  // r0
    unsigned int v4;  // r5
    unsigned int v5;  // r4
    unsigned int v6;  // r2
    unsigned int idx;  // r3
    unsigned int v8;  // [bp-0x10]
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    if (a0 < 1)
    {
        v2 = 4294967295;
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_4008cc;
        return 4294967295;
        i = v2;
    }
    else
    {
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_4008cc;
        return a0;
        i = a0;
    }
LABEL_4008cc:
    v1 = v4;
    v0 = v5;
    v6 = 0;
    idx = 0;
    do
    {
        *((unsigned int *)((char *)&v8 - (7 + i * 4 & 0xfffffff8) + 4 * idx)) = v6;
        idx += 1;
        v6 += 3;
    } while (i != idx);
    return *((int *)((char *)&v8 - (7 + i * 4 & 0xfffffff8) + (4294967293 & (i + (i >> 31)) * 2)));
}


// Function: stack_alias at 0x400924
unsigned int stack_alias()
{
    return 20;
}


// Function: test_stack_memory at 0x40092c
extern char g_402cfe;

int test_stack_memory()
{
    unsigned int v7;  // lr
    unsigned int v8;  // r6
    unsigned int v17;  // r0
    unsigned int v9;  // r5
    unsigned int v10;  // r4
    unsigned int idx;  // r0
    unsigned int *ptr;  // r4
    unsigned int j;  // r0
    unsigned int index;  // r1
    unsigned int l;  // r0
    unsigned int *v16;  // r4
    unsigned int v0;  // [bp-0x810]
    char v1;  // [bp-0x7fc]
    char v2;  // [bp-0x410]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0x8]
    unsigned int v6;  // [bp-0x4]

    v6 = v7;
    v5 = v8;
    v4 = v9;
    v3 = v10;
    puts(&g_402cfe);
    printf("MEM-L1-01 (local_vars): %d\n", 20);
    idx = 0;
    ptr = &v0;
    do
    {
        *((unsigned int *)((char *)&v0 + 2 * idx)) = idx;
        idx += 2;
    } while (idx != 20);
    printf("MEM-L1-02 (local_array): %d\n", *((int *)&v1));
    printf("MEM-L1-03 (local_struct): %d\n", 15);
    printf("MEM-L1-04 (address_of_local): %d\n", 42);
    printf("MEM-L1-05 (address_of_array): %d\n", 2);
    j = 0;
    do
    {
        *((char *)&v0 + j) = j;
        j += 1;
    } while (j != 0x800);
    printf("MEM-L2-01 (large_stack_frame): %d\n", v2);
    index = 0;
    do
    {
        *((unsigned int *)((char *)&v0 + 2 * index)) = index;
        index += 2;
    } while (index != 20);
    printf("MEM-L2-02 (vla_stack): %d\n", *((int *)&v1));
    l = 0;
    do
    {
        v16 = ptr + 1;
        *(ptr) = l;
        l += 3;
        ptr = v16;
    } while (l != 30);
    printf("MEM-L2-03 (alloca_usage): %d\n", *((int *)&v1));
    v17 = printf("MEM-L2-04 (stack_alias): %d\n", 20);
    return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x400a5c
unsigned int heap_basic(unsigned int a0)
{
    unsigned int v0;  // r4
    void* ptr;  // r0
    unsigned int idx;  // r1
    unsigned int result;  // r2

    v0 = a0;
    ptr = malloc(a0 * 4);
    if (!ptr)
        return 4294967295;
    if (v0 >= 1)
    {
        idx = 0;
        result = v0;
        do
        {
            *((unsigned int *)((char *)ptr + 2 * idx)) = idx;
            idx += 2;
            result -= 1;
        } while (result != 1);
    }
    free(ptr);
    return *((int *)((char *)ptr + (4294967293 & (v0 + (v0 >> 31)) * 2)));
}


// Function: heap_calloc at 0x400abc
typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

unsigned int heap_calloc(unsigned int a0)
{
    struct_0 *ptr;  // r0
    unsigned int v1;  // r4
    struct_0 *ptr;  // r1
    unsigned int result;  // r2
    struct_0 *v4;  // r1
    unsigned int v5;  // r2

    ptr = calloc(a0, 4);
    if (!ptr)
        return 4294967295;
    v1 = 0;
    if (a0 >= 2)
    {
        ptr = &ptr->field_4;
        result = a0 - 1;
        v1 = 0;
        do
        {
            v4 = &ptr->field_4;
            v5 = result - 1;
            v1 += ptr->padding_0;
            ptr = v4;
            result = v5;
        } while (result != 1);
    }
    free(ptr);
    return v1;
}


// Function: heap_realloc at 0x400b14
unsigned int heap_realloc()
{
    unsigned int ptr[10];  // r0
    unsigned int p[10];  // r4
    unsigned int index;  // r0
    unsigned int v3;  // r1
    unsigned int v4;  // r6
    unsigned int ptr[10];  // r0
    unsigned int v6;  // r1
    unsigned int v7;  // r5

    ptr = malloc(20);
    if (!ptr)
        return 4294967295;
    p = ptr;
    index = 0;
    do
    {
        v3 = index + 1;
        p[index] = v3;
        index = v3;
    } while (index != 5);
    v4 = p[2];
    ptr = realloc(p, 40);
    if (ptr)
    {
        ptr[9] = 90;
        v6 = ptr[2];
        ptr[6] = 60;
        ptr[5] = 50;
        p = ptr;
        ptr[7] = 70;
        ptr[8] = 80;
        v7 = (v6 == v4 ? 50 : 4294967293);
    }
    else
    {
        v7 = 4294967294;
    }
    free(p);
    return v7;
}


// Function: heap_array at 0x400bbc
unsigned int heap_array(unsigned int a0)
{
    unsigned int v0;  // r4
    unsigned int *ptr;  // r0
    unsigned int v2;  // r1
    unsigned int *ptr;  // r2
    unsigned int result;  // r3
    unsigned int *v5;  // r2

    v0 = a0;
    ptr = malloc(a0 * 4);
    if (!ptr)
        return 4294967295;
    if (v0 >= 1)
    {
        v2 = 0;
        ptr = ptr;
        result = v0;
        do
        {
            v5 = ptr + 1;
            *(ptr) = v2;
            v2 += 3;
            ptr = v5;
            result -= 1;
        } while (result != 1);
    }
    free(ptr);
    return *((int *)((char *)ptr + (4294967293 & (v0 + (v0 >> 31)) * 2)));
}


// Function: heap_struct at 0x400c20
unsigned int heap_struct(unsigned int a0)
{
    return a0 * 3;
}


// Function: heap_nested at 0x400c28
typedef struct struct_2 {
    unsigned int field_0;
    struct struct_3 *field_4;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_3 {
    unsigned int field_0;
    unsigned int field_4;
} struct_3;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
} struct_1;

unsigned int heap_nested(struct_0 **addr)
{
    struct_2 *ptr;  // r0
    struct_2 *ptr;  // r4
    unsigned int ptr[2];  // r0
    unsigned int p[2];  // r1

    ptr = malloc(8);
    *(addr) = ptr;
    if (!ptr)
        return 4294967295;
    ptr = ptr;
    ptr->field_0 = 10;
    ptr = malloc(8);
    ptr->field_4 = ptr;
    if (!ptr)
    {
        free(ptr);
        return 4294967294;
    }
    p = ptr;
    p[0] = 20;
    p[1] = 0;
    return 0;
}


// Function: linked_list_heap at 0x400c98
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int linked_list_heap()
{
    struct_0 *addr;  // r0
    unsigned int v1;  // r7
    unsigned int v9;  // r5
    struct_0 *p;  // r0
    struct_0 *v11;  // r0
    struct_0 *ptr3;  // r4
    unsigned int v2;  // r6
    struct_0 *v4;  // r4
    struct_0 *ptr4;  // r1
    unsigned int result;  // r6
    struct_0 *ptr;  // r4

    addr = malloc(8);
    if (addr)
    {
        v1 = 0;
        v2 = 0;
        v4 = NULL;
        addr = NULL;
        do
        {
            ptr4 = addr;
            addr->field_0 = v1;
            addr->field_4 = NULL;
            ptr4->field_4 = addr;
            if (!v4)
                v4 = addr;
            if (v2 == 4)
            {
                result = (armg_calculate_condition(50, v2, 4, 0) ? 1 : 0);
                goto LABEL_400d48;
            }
        } while ((addr = malloc(8), v2 += 1, v1 += 10, addr));
        result = (v2 - 1 < 4 ? 1 : 0);
    }
    else
    {
        result = 1;
        v4 = NULL;
    }
    if (v4)
    {
        do
        {
            ptr = v4;
            free(ptr);
            v4 = ptr->field_4;
        } while (ptr->field_4);
    }
    v4 = NULL;
LABEL_400d48:
    if (result)
        return 4294967295;
    v9 = 0;
    if (!v4)
        return 0;
    p = v4;
    do
    {
        v11 = p->field_4;
        v9 += p->field_0;
        p = v11;
    } while (p->field_4);
    if (!v4)
        return v9;
    do
    {
        ptr3 = v4;
        free(ptr3);
        v4 = ptr3->field_4;
    } while (ptr3->field_4);
    return v9;
}


// Function: create_tree_node at 0x400da4
unsigned int [3] create_tree_node(unsigned int a0)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int ptr[3];  // r0
    unsigned int v5;  // r1
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    ptr = malloc(12);
    if (ptr)
        v5 = 0;
    ptr[0] = a0;
    ptr[1] = v5;
    ptr[2] = v5;
    return ptr;
}


// Function: tree_heap_traversal at 0x400dd0
unsigned int tree_heap_traversal()
{
    return 60;
}


// Function: memory_leak at 0x400dd8
unsigned int memory_leak(unsigned int i)
{
    unsigned int ptr;  // r0
    unsigned int idx;  // r1

    ptr = malloc(i * 4);
    if (!ptr)
        return 4294967295;
    if (i < 1)
        return *((int *)(ptr + (4294967293 & (i + (i >> 31)) * 2)));
    idx = 0;
    do
    {
        *((unsigned int *)(ptr + idx * 4)) = idx;
        idx += 1;
    } while (i != idx);
    return *((int *)(ptr + (4294967293 & (i + (i >> 31)) * 2)));
}


// Function: dangling_pointer at 0x400e2c
unsigned int dangling_pointer()
{
    unsigned int *ptr;  // r0

    ptr = malloc(4);
    if (!ptr)
        return 4294967295;
    printf("value before free: %d\n", 42);
    free(ptr);
    return *(ptr);
}


// Function: double_free at 0x400e74
unsigned int double_free(unsigned int *a0)
{
    if (a0)
        return *(a0);
    return 4294967294;
}


// Function: heap_overflow at 0x400e84
unsigned int heap_overflow()
{
    unsigned int *ptr;  // r0
    unsigned int v1;  // r1
    unsigned int i;  // r2

    ptr = malloc(40);
    if (!ptr)
        return 4294967295;
    v1 = 0;
    i = 0;
    do
    {
        ptr[-1 * i] = v1;
        i -= 1;
        v1 += 100;
    } while (i != 4294967285);
    free(ptr);
    return *(ptr);
}


// Function: test_heap_memory at 0x400ed0
typedef struct struct_0 {
    char padding_0[4];
    void* field_4;
} struct_0;

extern char g_4029b5;
extern char g_4029c5;
extern char g_4029ea;
extern char g_402a2b;
extern char g_402d1c;

int test_heap_memory()
{
    char *v12;  // r0
    unsigned int v13;  // r0
    unsigned int msg;  // r0
    unsigned int ptr[3];  // r0
    unsigned int index;  // r1
    unsigned int v10;  // r1
    unsigned int pid;  // r0
    unsigned int v0[1];  // [bp-0x10]
    struct_0 *result;  // [bp-0xc]

    puts(&g_402d1c);
    printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
    printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
    printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
    printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10));
    printf("HEAP-L2-05 (heap_struct): %d\n", 15);
    result = NULL;
    printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result));
    if (result)
    {
        free(result->field_4);
        free(result);
    }
    printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
    printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
    ptr = malloc(20);
    if (ptr)
    {
        index = 0;
        do
        {
            ptr[index] = index;
            index += 1;
        } while (index != 5);
        v10 = ptr[2];
    }
    else
    {
        v10 = 4294967295;
    }
    printf("HEAP-L3-03 (memory_leak): %d\n", v10);
    printf("HEAP-L3-04 (dangling_pointer): ");
    pid = fork();
    if (!pid)
    {
        printf(&g_4029b5, dangling_pointer());
        exit(0); /* do not return */
    }
    else if (pid >= 1)
    {
        waitpid(pid, &v0, 0);
        if (!((char)*(v0) & 127))
        {
            v12 = &g_4029c5;
        }
        else if (0x1000000 + (*(v0) & 127) * 0x1000000 >= 0x2000000)
        {
            v12 = &g_4029ea;
        }
        else
        {
            return 0x1000000 + (*(v0) & 127) * 0x1000000;
        }
        v13 = printf(v12);
        return printf(v12);
    }
    else
    {
        msg = (unsigned int)perror(&g_402a2b);
        return (unsigned int)perror(&g_402a2b);
    }
}


// Function: global_var_access at 0x4010cc
extern unsigned int global_counter;

unsigned int global_var_access()
{
    global_counter = global_counter + 1;
    return global_counter + 1;
}


// Function: global_var_read at 0x4010f0
extern unsigned int global_counter;

unsigned int global_var_read()
{
    return global_counter * 2;
}


// Function: global_array_access at 0x401104
extern unsigned int global_array;

int global_array_access(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = 7268;
    if (a0 <= 9)
        v0 = &global_array;
    return *((int *)(v0 + a0 * 4));
}


// Function: static_local at 0x401124
extern unsigned int static_local.counter;

int static_local(unsigned int a0)
{
    static_local.counter = (!a0 ? static_local.counter + 1 : 0);
    return static_local.counter;
}


// Function: call_static_func at 0x401154
unsigned int call_static_func(unsigned int a0)
{
    return 1 | a0 * 2;
}


// Function: access_extern_global at 0x401160
extern unsigned int extern_global_var;

int access_extern_global()
{
    return extern_global_var + 100;
}


// Function: call_extern_func at 0x401178
int call_extern_func()
{
    unsigned int v0;  // r0

    v0 = extern_function(5);
    return extern_function(5);
}


// Function: read_const_data at 0x401180
typedef struct struct_0 {
    char padding_0[4];
    char field_4;
} struct_0;

extern struct_0 *const_string;

int read_const_data()
{
    return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401198
unsigned int access_bss_var()
{
    return 0;
}


// Function: access_bss_buffer at 0x4011a0
unsigned int access_bss_buffer()
{
    return 0;
}


// Function: global_struct_access at 0x4011a8
unsigned int global_struct_access()
{
    return 30;
}


// Function: set_file_static at 0x4011b0
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
    file_scope_static = a0;
    return a0;
}


// Function: get_file_static at 0x4011c4
extern unsigned int file_scope_static;

int get_file_static()
{
    return file_scope_static;
}


// Function: set_global_callback at 0x4011d4
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
    global_func_ptr = a0;
    return a0;
}


// Function: call_global_callback at 0x4011e8
extern unsigned int global_func_ptr;

unsigned int call_global_callback(unsigned int a0)
{
    if (!global_func_ptr)
    {
        if (!((char)armg_calculate_condition(2, global_func_ptr, 0, 0)))
            goto LABEL_4011fc;
        return 4294967295;
    }
    else
    {
        if (!((char)armg_calculate_condition(2, global_func_ptr, 0, 0)))
            goto LABEL_4011fc;
        return a0;
    }
LABEL_4011fc:
    goto global_func_ptr;
}


// Function: global_heap_store at 0x401204
extern unsigned int global_heap_ptr;

unsigned int global_heap_store(unsigned int *a0)
{
    global_heap_ptr = a0;
    if (a0)
        return *(a0);
    return 4294967295;
}


// Function: static_complex_init at 0x401224
unsigned int static_complex_init()
{
    return 15;
}


// Function: tls_access at 0x40122c
unsigned int tls_access(unsigned int a0)
{
    return a0 * 2;
}


// Function: init_order_test at 0x401234
unsigned int init_order_test()
{
    return 20;
}


// Function: test_static_global at 0x40123c
typedef struct struct_0 {
    char padding_0[4];
    char field_4;
} struct_0;

extern struct_0 *const_string;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_402d3a;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;
extern unsigned int global_heap_ptr;
extern unsigned int static_local.counter;

int test_static_global()
{
    unsigned int v1;  // r1
    unsigned int v2;  // r1
    unsigned int v4;  // r0
    int <0x40123c[is_0]|Stack bp-0x14, 1 B>;  // [bp-0x14]
    unsigned int v0;  // [bp-0x14]

    puts(&g_402d3a);
    v1 = global_counter + 1;
    global_counter = global_counter + 1;
    printf("STM-L1-01 (global_var_access): %d\n", v1);
    printf("STM-L1-01 (global_var_read): %d\n", global_counter * 2);
    printf("STM-L1-02 (global_array_access): %d\n", 5);
    static_local.counter = 1;
    printf("STM-L1-03 (static_local): %d\n", 1);
    v2 = static_local.counter + 1;
    static_local.counter = static_local.counter + 1;
    printf("STM-L1-03 (static_local): %d\n", v2);
    printf("STM-L1-04 (call_static_func): %d\n", 11);
    printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
    printf("STM-L2-02 (call_extern_func): %d\n", extern_function(5));
    printf("STM-L2-03 (read_const_data): %d\n", const_string->field_4 + 42);
    printf("STM-L2-04 (access_bss_var): %d\n", 0);
    printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
    printf("STM-L2-05 (global_struct_access): %d\n", 30);
    file_scope_static = 50;
    printf("STM-L2-06 (file_static): %d\n", 50);
    global_func_ptr = $a.30;
    printf("STM-L2-07 (global_func_ptr): %d\n", 10);
    global_heap_ptr = &<0x40123c[is_0]|Stack bp-0x14, 1 B>;
    v0 = 100;
    printf("STM-L2-08 (global_heap_store): %d\n", 100);
    printf("STM-L2-09 (static_complex_init): %d\n", 15);
    printf("STM-L3-01 (tls_access): %d\n", 20);
    v4 = printf("STM-L3-02 (init_order_test): %d\n", 20);
    return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: $a.30 at 0x401484
unsigned int $a.30(unsigned int a0)
{
    return a0 * 2;
}


// Function: memop_memset at 0x40148c
unsigned int memop_memset(char *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int n;  // r3

    if (a0)
    {
        n = a1;
        if (!armg_calculate_condition(18, a0, 0, 0))
            goto LABEL_4014a2;
LABEL_4014a1:
        if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a0, 0, 0) ? a1 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0)))
            return 4294967295;
    }
    else
    {
        n = a3;
        if (armg_calculate_condition(18, a0, 0, 0))
            goto LABEL_4014a1;
LABEL_4014a2:
        if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a0, 0, 0) ? a1 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0)))
            return 4294967295;
    }
    memset(a0, a2, n);
    return *(a0);
}


// Function: memop_memcpy at 0x4014c4
unsigned int memop_memcpy(void* a0, void* a1, unsigned int a2)
{
    unsigned int n;  // r4
    unsigned int v1;  // r4

    if (!a0)
        return 4294967295;
    if (a1)
    {
        n = a2;
        if (!armg_calculate_condition(18, a1, 0, 0))
            goto LABEL_4014e2;
LABEL_4014e1:
        if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a1, 0, 0) ? a2 : a1), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0)))
            return 4294967295;
    }
    else
    {
        n = v1;
        if (armg_calculate_condition(18, a1, 0, 0))
            goto LABEL_4014e1;
LABEL_4014e2:
        if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a1, 0, 0) ? a2 : a1), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a1, 0, 0) ? 0 : 0)))
            return 4294967295;
    }
    memcpy(a0, a1, n);
    return *((int *)(-4 + (n & 0xfffffffc) + (char *)a0));
}


// Function: memop_memmove at 0x401508
typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

unsigned int memop_memmove(struct_0 *a0, unsigned int a1)
{
    if (!a0)
    {
        return 4294967295;
    }
    else if (a1 >= 2)
    {
        memmove(&a0->field_1, a0, a1 - 1);
        return a0->field_1;
    }
    else
    {
        return 4294967295;
    }
}


// Function: memop_memcmp at 0x401540
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v1;  // lr
    unsigned int v2;  // r0
    unsigned int v0;  // [bp-0x4]

    if (a0)
        goto LABEL_401550;
    return 0;
LABEL_401550:
    if (a1)
    {
        if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? a2 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
            return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(18, (armg_calculate_condition(18, a0, 0, 0) ? a2 : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0))))
            return 0;
    }
    v0 = v1;
    v2 = memcmp(a0, a1, a2);
    if (1 > v2)
        return (v2 ? 4294967295 : 0);
    return 1;
}


// Function: memop_bzero at 0x401588
char * memop_bzero(char *a0, unsigned int n)
{
    char *v2;  // r0
    char *v3;  // r0
    unsigned int v4;  // r4
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!a0)
    {
        v2 = 0xffffffff;
        if (!((char)armg_calculate_condition(2, a0, 0, 0)))
            goto LABEL_401594;
        return 0xffffffff;
        v3 = v2;
    }
    else
    {
        if (!((char)armg_calculate_condition(2, a0, 0, 0)))
            goto LABEL_401594;
        return a0;
        v3 = a0;
    }
LABEL_401594:
    v1 = vvar_4{r64|4b};
    v0 = v4;
    memset(v3, 0, n);
    return *(v3);
}


// Function: memop_bcopy at 0x4015b4
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n)
{
    if (!a0)
        return 4294967295;
    if (a1)
    {
        if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a0, 0, 0) ? n : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0)))
            return 4294967295;
    }
    else
    {
        if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, a0, 0, 0) ? n : a0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0), (armg_calculate_condition(18, a0, 0, 0) ? 0 : 0)))
            return 4294967295;
    }
    memmove(a1, a0, n);
    return *(a1);
}


// Function: memop_unaligned_access at 0x4015ec
char [5] memop_unaligned_access(char *a0)
{
    char v0[5];  // r0
    char v1[5];  // r0
    char v2[5];  // r0

    if (!a0)
    {
        v0 = 0xffffffff;
        if (!((char)armg_calculate_condition(2, a0, 0, 0)))
            goto LABEL_4015f8;
        return 0xffffffff;
        v1 = v0;
    }
    else
    {
        if (!((char)armg_calculate_condition(2, a0, 0, 0)))
            goto LABEL_4015f8;
        return a0;
        v1 = a0;
    }
LABEL_4015f8:
    v2 = &v1[1];
    return v1[1] | v2[1] * 0x100 | (v2[2] | v2[3] * 0x100) * 0x10000;
}


// Function: memop_memory_barrier at 0x401618
unsigned int memop_memory_barrier(unsigned int a0)
{
    unsigned int v3;  // r0
    unsigned int v4;  // r0
    unsigned int v5;  // r5
    unsigned int v6;  // r4
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    if (!a0)
    {
        v3 = 4294967295;
        if (!((char)armg_calculate_condition(2, a0, 0, 0)))
            goto LABEL_401624;
        return 4294967295;
        v4 = v3;
    }
    else
    {
        if (!((char)armg_calculate_condition(2, a0, 0, 0)))
            goto LABEL_401624;
        return a0;
        v4 = a0;
    }
LABEL_401624:
    v2 = vvar_3{r64|4b};
    v1 = v5;
    v0 = v6;
    __sync_synchronize(v4); /* do not return */
}


// Function: test_memory_op_functions at 0x401644
extern char g_402d5e;
extern void g_402dac;
extern void g_402db8;

int test_memory_op_functions()
{
    unsigned int v5;  // lr
    unsigned int v6;  // r4
    unsigned int result;  // r0
    unsigned int v9;  // r1
    unsigned int v10;  // r1
    unsigned int v0;  // [bp-0x18]
    char v1;  // [bp-0x14]
    char v2;  // [bp-0x13]
    unsigned int v3;  // [bp-0x8]
    unsigned int v4;  // [bp-0x4]

    v4 = v5;
    v3 = v6;
    puts(&g_402d5e);
    printf("MEMOP-L2-01: %d\n", 65);
    printf("MEMOP-L2-02: %d\n", 50);
    strncpy(&v1, "HelloWorld", 10);
    memmove(&v1 | 1, &v1, 9);
    printf("MEMOP-L2-03: %c\n", v2);
    result = memcmp(&g_402dac, &g_402db8, 12);
    if (result)
        v9 = 4294967295;
    else
        v9 = result;
    v10 = v9;
    if (1 <= result)
        v10 = 1;
    printf("MEMOP-L2-04: %d\n", v10);
    printf("MEMOP-L2-05: %d\n", 0);
    printf("MEMOP-L2-06: %d\n", 1);
    printf("MEMOP-L3-01: 0x%x\n", 67305985);
    v0 = 5;
    __sync_synchronize(5); /* do not return */
}


// Function: main at 0x401780
unsigned int main()
{
    test_stack_memory();
    test_heap_memory();
    test_static_global();
    test_memory_op_functions();
    return 0;
}


// Function: extern_function at 0x4017a0
unsigned int extern_function(unsigned int a0)
{
    return a0 * 3;
}


// Function: __sync_fetch_and_add_4 at 0x4017a8
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x4017e0
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x401818
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x401850
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x401888
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x4018c0
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x4018fc
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x40195c
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x4019bc
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x401a1c
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x401a7c
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x401adc
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x401b40
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x401b9c
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x401bf8
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x401c54
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x401cb0
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x401d0c
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x401d6c
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x401da4
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x401ddc
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x401e14
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x401e4c
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x401e84
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x401ec0
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


// Function: __sync_sub_and_fetch_2 at 0x401f28
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


// Function: __sync_or_and_fetch_2 at 0x401f90
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


// Function: __sync_and_and_fetch_2 at 0x401ff8
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


// Function: __sync_xor_and_fetch_2 at 0x402060
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


// Function: __sync_nand_and_fetch_2 at 0x4020c8
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


// Function: __sync_add_and_fetch_1 at 0x402134
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


// Function: __sync_sub_and_fetch_1 at 0x402198
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


// Function: __sync_or_and_fetch_1 at 0x4021fc
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


// Function: __sync_and_and_fetch_1 at 0x402260
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


// Function: __sync_xor_and_fetch_1 at 0x4022c4
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


// Function: __sync_nand_and_fetch_1 at 0x402328
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


// Function: __sync_val_compare_and_swap_4 at 0x402390
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
    while (*(a0) == i)
    {
        if (!4294905792())
            return i;
    }
    return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x4023e0
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
    {
        if (!4294905792())
            return a1;
    }
    return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x402458
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
    {
        if (!4294905792())
            return a1;
    }
    return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x4024cc
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


// Function: __sync_bool_compare_and_swap_2 at 0x4024f8
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


// Function: __sync_bool_compare_and_swap_1 at 0x402514
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


// Function: __sync_synchronize at 0x402530
int __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x40253c
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x402574
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x4025d4
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x402630
void __sync_lock_release_8(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    ptr[1] = 0;
    return;
}


// Function: __sync_lock_release_4 at 0x402654
void __sync_lock_release_4(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_2 at 0x402674
void __sync_lock_release_2(unsigned short *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_1 at 0x402694
void __sync_lock_release_1(char *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: _fini at 0x4026b4
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

