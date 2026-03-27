// Angr Decompilation of 3_gcc_Os_g
// Platform: AARCH64

// Function: _init at 0x400990
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x4009b0
extern unsigned long long g_412f20;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_412f20;
}


// Function: sub_4009c4 at 0x4009c4
long long sub_4009c4()
{
    void* v0;  // x0
    void* v1;  // x1
    unsigned long v2;  // x2
    unsigned long long dst;  // x0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
}


// Function: main at 0x400b00
unsigned int main()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = test_stack_memory();
    v3 = test_static_global(test_heap_memory(v2));
    test_memory_op_functions(v3);
    return 0;
}


// Function: sub_400b24 at 0x400b24
void sub_400b24(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x400b40
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_400b70 at 0x400b70
void sub_400b70()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400b74
extern char g_412fd8;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!*((long long *)&g_412fd8))
        return 0;
    v0 = __gmon_start__(*((long long *)&g_412fd8));
    return __gmon_start__(*((long long *)&g_412fd8));
}


// Function: sub_400b88 at 0x400b88
void sub_400b88()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400b90
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x400bc0
extern char __TMC_END__;
extern unsigned long long g_412ff8;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_412ff8)
    {
        goto g_412ff8;
    }
    else
    {
        return &__TMC_END__;
    }
}


// Function: sub_400bfc at 0x400bfc
void sub_400bfc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400c00
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_412fd0;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_412fd0)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __TMC_END__ = 1;
    return 1;
}


// Function: sub_400c48 at 0x400c48
long long sub_400c48()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400c50
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: double_value at 0x400c54
unsigned int double_value(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: local_vars at 0x400c5c
int local_vars(unsigned int a0)
{
    return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: local_array at 0x400c68
extern char __stack_chk_guard;

long long local_array(unsigned long a0)
{
    unsigned long long v4;  // x2
    unsigned long long idx;  // x1
    char *v0;  // [bp-0x40]
    unsigned long v6;  // [bp-0x30]
    char v1;  // [bp-0x1c]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    v4 = 0;
    idx = 0;
    do
    {
        *((unsigned int *)((char *)&v6 + 4 * idx)) = v4;
        idx += 1;
        v4 += a0;
    } while (idx != 10);
    if (v2 == *((long long *)&__stack_chk_guard))
        return *((int *)&v1);
    __stack_chk_fail(); /* do not return */
}


// Function: local_struct at 0x400ccc
unsigned int local_struct(unsigned int a0)
{
    return a0 * 3;
}


// Function: address_of_local at 0x400cd4
unsigned long long address_of_local(unsigned int *ptr)
{
    *(ptr) = 42;
    return 42;
}


// Function: address_of_array at 0x400ce4
unsigned int address_of_array(unsigned int *a0)
{
    return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: large_stack_frame at 0x400cf0
extern char __stack_chk_guard;

long long large_stack_frame()
{
    unsigned long long i;  // x0
    char *v0;  // [bp-0x820]
    unsigned long v5;  // [bp-0x808]
    char v1;  // [bp-0x408]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    i = 0;
    do
    {
        *(i + (char *)&v5) = i;
        i += 1;
    } while (i != 0x800);
    if (v2 == *((long long *)&__stack_chk_guard))
        return v1;
    __stack_chk_fail(); /* do not return */
}


// Function: vla_stack at 0x400d58
extern char __stack_chk_guard;

long long vla_stack(unsigned long a0)
{
    unsigned long v4;  // x1
    unsigned long long v5;  // x1
    unsigned long long ptr;  // x2
    unsigned long long idx;  // x1
    unsigned long v8;  // x0
    unsigned long long result;  // [bp-0x1fc30]
    unsigned long v9;  // [bp-0x10030]
    unsigned long v10;  // [bp-0x30]
    char *v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v1 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    if (999 >= (unsigned int)a0 - 1)
    {
        for (v4 = (a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15; &v9 != (char *)&v10 - (v4 & 0xffffffffffff0000); result = 0);
        v5 = v4 & 0xfffffffffffffff0 & 65535;
        vvar_48{r264|8b} = (unsigned long *)((char *)&v9 - v5);
        *((unsigned long long *)vvar_48{r264|8b}) = 0;
        if (v5 >= 0x400)
            *((unsigned long *)(vvar_48{r264|8b} + 0x400)) = 0;
        ptr = vvar_48{r264|8b} + 16;
        idx = 0;
        do
        {
            *((unsigned int *)(ptr + idx * 4)) = __ROL__((unsigned int)idx, 1) & 4294967294;
            idx += 1;
        } while ((unsigned int)idx < (unsigned int)a0);
        v8 = *((int *)(ptr + ((unsigned int)a0 >> 31 & 0x80000000 | __ROL__((unsigned int)a0, 31) & 2147483647) * 4));
    }
    else
    {
        v8 = 4294967295;
    }
    if (v2 == *((long long *)&__stack_chk_guard))
        return v8;
    __stack_chk_fail(); /* do not return */
}


// Function: alloca_usage at 0x400e1c
extern char __stack_chk_guard;

long long alloca_usage(unsigned long a0)
{
    unsigned long v4;  // x1
    unsigned long long v5;  // x1
    unsigned long long ptr;  // x2
    unsigned long long idx;  // x1
    unsigned long v8;  // x0
    unsigned long long result;  // [bp-0x1fc30]
    unsigned long v9;  // [bp-0x10030]
    unsigned long v10;  // [bp-0x30]
    char *v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v1 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    if ((unsigned int)a0 > 0)
    {
        for (v4 = (a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15; &v9 != (char *)&v10 - (v4 & 0xffffffffffff0000); result = 0);
        v5 = v4 & 0xfffffffffffffff0 & 65535;
        vvar_47{r264|8b} = (unsigned long *)((char *)&v9 - v5);
        *((unsigned long long *)vvar_47{r264|8b}) = 0;
        if (v5 >= 0x400)
            *((unsigned long *)(vvar_47{r264|8b} + 0x400)) = 0;
        ptr = vvar_47{r264|8b} + 16;
        idx = 0;
        do
        {
            *((unsigned int *)(ptr + idx * 4)) = (unsigned int)idx * 3;
            idx += 1;
        } while ((unsigned int)idx < (unsigned int)a0);
        v8 = *((int *)(ptr + ((unsigned int)a0 >> 31 & 0x80000000 | __ROL__((unsigned int)a0, 31) & 2147483647) * 4));
    }
    else
    {
        v8 = 4294967295;
    }
    if (v2 == *((long long *)&__stack_chk_guard))
        return v8;
    __stack_chk_fail(); /* do not return */
}


// Function: stack_alias at 0x400edc
unsigned long long stack_alias()
{
    return 20;
}


// Function: test_stack_memory at 0x400ee4
extern char g_401d98;

int test_stack_memory()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401d98);
    __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
    __printf_chk(1, "MEM-L1-02 (local_array): %d\n", local_array(2) & 4294967295);
    __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
    __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
    __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
    __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
    __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10) & 4294967295);
    __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
    return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x400fcc
unsigned int heap_basic(unsigned long a0)
{
    void* ptr;  // x0
    unsigned long long idx;  // x1
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
    if (!ptr)
        return 4294967295;
    for (idx = 0; (unsigned int)idx < (unsigned int)a0; idx += 1)
    {
        *((unsigned int *)((char *)ptr + 4 * idx)) = ((unsigned int)idx * 2 | (unsigned int)idx >> 31) & 4294967294;
    }
    free(ptr);
    return *((int *)((char *)ptr + 4 * ((a0 & 4294967295) / 2 & 4294967295)));
}


// Function: heap_calloc at 0x40102c
unsigned int heap_calloc(unsigned long a0)
{
    void* ptr;  // x0
    unsigned long long v3;  // x1
    unsigned long long v4;  // x19
    unsigned long long v5;  // x1
    unsigned long long v6;  // x1
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = calloc(a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295, 4);
    if (!ptr)
        return 4294967295;
    v3 = 0;
    v4 = 0;
    while (true)
    {
        v5 = v3;
        if ((unsigned int)v5 >= (unsigned int)a0)
            break;
        v6 = v5 + 1;
        v4 += *((int *)((char *)ptr + 4 * v5));
        v3 = v6;
    }
    free(ptr);
    return v4;
}


// Function: heap_realloc at 0x401088
typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
} struct_1;

unsigned int heap_realloc()
{
    struct_0 *ptr;  // x0
    struct_1 *ptr;  // x0
    unsigned int v4;  // w19
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(20);
    if (!ptr)
        return 4294967295;
    ptr->field_0 = 8589934593;
    ptr->field_8 = 17179869187;
    ptr->field_10 = 5;
    ptr = realloc(ptr, 40);
    if (!ptr)
    {
        free(ptr);
        return 4294967294;
    }
    if (ptr->field_8 == 3)
        v4 = 50;
    else
        v4 = 4294967293;
    free(ptr);
    return v4;
}


// Function: heap_array at 0x401110
unsigned int heap_array(unsigned long a0)
{
    void* ptr;  // x0
    unsigned long long idx;  // x1
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
    if (!ptr)
        return 4294967295;
    for (idx = 0; (unsigned int)idx < (unsigned int)a0; idx += 1)
    {
        *((unsigned int *)((char *)ptr + 4 * idx)) = (unsigned int)idx * 3;
    }
    free(ptr);
    return *((int *)((char *)ptr + 4 * ((a0 & 4294967295) / 2 & 4294967295)));
}


// Function: heap_struct at 0x401170
unsigned int heap_struct(unsigned int a0)
{
    void* ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(8);
    if (!ptr)
        return 4294967295;
    free(ptr);
    return a0 * 3;
}


// Function: heap_nested at 0x4011ac
typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_2 *field_8;
} struct_3;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_1;

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_4;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

unsigned long long heap_nested(struct_1 **addr)
{
    struct_3 *ptr;  // x0
    struct_3 *ptr;  // x19
    struct_4 *p;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(16);
    *(addr) = ptr;
    if (!ptr)
        return 4294967295;
    ptr = ptr;
    ptr->field_0 = 10;
    p = malloc(16);
    ptr->field_8 = p;
    if (p)
    {
        p->field_0 = 20;
        p->field_8 = 0;
        return 0;
    }
    free(ptr);
    return 4294967294;
}


// Function: linked_list_heap at 0x40121c
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned int linked_list_heap()
{
    struct_0 *v2;  // x0
    unsigned int v3;  // w20
    struct_0 *cur;  // x19
    struct_0 *ptr4;  // x0
    struct_0 *p;  // x0
    unsigned long long v7;  // x20
    struct_0 *ptr;  // x0
    struct_0 *v9;  // x0
    struct_0 *addr;  // x19
    struct_0 *v11;  // x19
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = NULL;
    v3 = 0;
    cur = NULL;
    while (true)
    {
        ptr4 = v2;
        if (!p)
        {
            for (p = malloc(16); cur; cur = cur->field_8)
            {
                free(cur);
            }
            return 4294967295;
        }
        else
        {
            p->field_0 = v3;
            p->field_8 = NULL;
            if (cur)
                ptr4->field_8 = p;
            else
                cur = p;
            v3 += 10;
            v2 = p;
            if (v3 == 50)
            {
                v7 = 0;
                ptr = cur;
                do
                {
                    v9 = ptr->field_8;
                    v7 += ptr->field_0;
                    ptr = v9;
                } while (ptr->field_8);
                do
                {
                    addr = cur;
                    v11 = addr->field_8;
                    free(addr);
                    cur = v11;
                } while (addr->field_8);
                return v7;
            }
        }
    }
}


// Function: create_tree_node at 0x4012c8
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

struct_0 * create_tree_node(unsigned int a0)
{
    struct_0 *ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(24);
    if (!ptr)
        return ptr;
    ptr->field_0 = a0;
    ptr->field_8 = 0;
    ptr->field_10 = 0;
    return ptr;
}


// Function: tree_heap_traversal at 0x4012f8
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
    struct struct_2 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

unsigned int tree_heap_traversal()
{
    struct_0 *v2;  // x0
    struct_0 *ptr;  // x19
    unsigned int *v4;  // x1
    unsigned int *p;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = create_tree_node(10);
    if (!v2)
        return 4294967295;
    ptr = v2;
    ptr->field_8 = create_tree_node(20);
    v4 = create_tree_node(30);
    p = ptr->field_8;
    ptr->field_10 = v4;
    if (p)
    {
        if (!v4)
        {
            free(p);
        }
        else
        {
            free(p);
            free(ptr->field_10);
            free(ptr);
            return ptr->field_0 + *(p) + *(v4);
        }
    }
    if (ptr->field_10)
        free(ptr->field_10);
    free(ptr);
    return 4294967294;
}


// Function: memory_leak at 0x40139c
unsigned long long memory_leak(unsigned long a0)
{
    unsigned long long ptr;  // x0
    unsigned long long idx;  // x1
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
    if (!ptr)
        return 4294967295;
    for (idx = 0; (unsigned int)idx < (unsigned int)a0; idx += 1)
    {
        *((unsigned int *)(ptr + idx * 4)) = idx;
    }
    return *((int *)(ptr + ((a0 & 4294967295) / 2 & 4294967295) * 4));
}


// Function: dangling_pointer at 0x4013f0
unsigned long long dangling_pointer()
{
    unsigned int *ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(4);
    if (!ptr)
        return 4294967295;
    __printf_chk(1, "value before free: %d\n", 42);
    free(ptr);
    return *(ptr);
}


// Function: double_free at 0x401440
unsigned long long double_free(unsigned int *a0)
{
    unsigned long long v4;  // x30
    unsigned long long v5;  // x19
    void* ptr;  // x0
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    if (a0)
        return *(a0);
    v0 = &v3;
    v1 = v4;
    v2 = v5;
    ptr = malloc(4);
    if (!ptr)
        return 4294967295;
    free(ptr);
    free(ptr);
    return 4294967294;
}


// Function: heap_overflow at 0x40148c
unsigned int heap_overflow()
{
    unsigned int *ptr;  // x0
    unsigned long long idx;  // x1
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(40);
    if (!ptr)
        return 4294967295;
    idx = 0;
    do
    {
        ptr[idx] = 100 * (unsigned int)idx;
        idx += 1;
    } while (idx != 11);
    free(ptr);
    return *(ptr);
}


// Function: test_heap_memory at 0x4014e0
typedef struct struct_0 {
    char padding_0[8];
    void* field_8;
} struct_0;

extern char __stack_chk_guard;
extern char g_401ee1;
extern char g_402039;
extern char g_402049;
extern char g_40206e;
extern char g_4020af;

unsigned long long test_heap_memory()
{
    char *v16;  // x1
    unsigned long long pid;  // x0
    char *v0;  // [bp-0x30]
    unsigned int v1[1];  // [bp-0x14]
    struct_0 *result;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    puts(&g_401ee1);
    __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
    __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
    __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
    __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
    __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5) & 4294967295);
    result = NULL;
    __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result) & 4294967295);
    if (result)
    {
        free(result->field_8);
        free(result);
    }
    __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
    __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
    __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5) & 4294967295);
    __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
    pid = fork();
    if (!(unsigned int)pid)
    {
        __printf_chk(1, &g_402039, dangling_pointer() & 4294967295);
        exit(0); /* do not return */
    }
    else if (!((char)arm64g_calculate_condition(211, pid & 4294967295, 0, 0)))
    {
        waitpid(pid, &v1, 0);
        if (!((char)arm64g_calculate_condition(25, (unsigned long long)(*(v1) & 127), 0, 0)))
        {
            v16 = &g_402049;
        }
        else
        {
            if (((unsigned int)(((*(v1) & 127) + 1) * 0x100000000000000 >> 63) & 4294967168 | (unsigned int)(__ROL__((*(v1) & 127) + 1, 63)) & 127) <= 0)
            {
                if (v3 != *((long long *)&__stack_chk_guard))
                    __stack_chk_fail(); /* do not return */
                return &__stack_chk_guard;
            }
            v16 = &g_40206e;
        }
        __printf_chk(1, v16);
        if (v3 == *((long long *)&__stack_chk_guard))
            return &__stack_chk_guard;
        __stack_chk_fail(); /* do not return */
    }
    else
    {
        perror(&g_4020af);
        if (v3 == *((long long *)&__stack_chk_guard))
            return &__stack_chk_guard;
        __stack_chk_fail(); /* do not return */
    }
}


// Function: global_var_access at 0x4016d4
extern unsigned int global_counter;

unsigned int global_var_access()
{
    global_counter = global_counter + 1;
    return global_counter + 1;
}


// Function: global_var_read at 0x4016e8
extern unsigned int global_counter;

unsigned int global_var_read()
{
    return (global_counter * 2 | global_counter >> 31) & 4294967294;
}


// Function: global_array_access at 0x4016f8
extern unsigned int global_array[4];

unsigned long long global_array_access(unsigned int a0)
{
    if (9 < a0)
        return 4294967295;
    return global_array[a0];
}


// Function: static_local at 0x401718
extern unsigned int counter.1;

long long static_local(unsigned int a0)
{
    unsigned long v0;  // x0

    if (!a0)
        v0 = counter.1 + 1;
    else
        v0 = 0;
    counter.1 = v0;
    return v0;
}


// Function: call_static_func at 0x401740
int call_static_func(unsigned int a0)
{
    return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: access_extern_global at 0x40174c
extern unsigned int extern_global_var;

int access_extern_global()
{
    return extern_global_var + 100;
}


// Function: call_extern_func at 0x401760
long long call_extern_func()
{
    unsigned long long v0;  // x0

    v0 = extern_function(5);
    return extern_function(5);
}


// Function: read_const_data at 0x401768
typedef struct struct_0 {
    char padding_0[4];
    char field_4;
} struct_0;

extern struct_0 *const_string;

int read_const_data()
{
    return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x40177c
unsigned long long access_bss_var()
{
    return 0;
}


// Function: access_bss_buffer at 0x401784
unsigned long long access_bss_buffer()
{
    return 0;
}


// Function: global_struct_access at 0x40178c
unsigned long long global_struct_access()
{
    return 30;
}


// Function: set_file_static at 0x401794
extern unsigned int file_scope_static;

long long set_file_static(unsigned long a0)
{
    file_scope_static = a0;
    return a0;
}


// Function: get_file_static at 0x4017a0
extern unsigned int file_scope_static;

int get_file_static()
{
    return file_scope_static;
}


// Function: set_global_callback at 0x4017ac
extern unsigned long long global_func_ptr;

long long set_global_callback(unsigned long a0)
{
    global_func_ptr = a0;
    return a0;
}


// Function: call_global_callback at 0x4017b8
extern unsigned long long global_func_ptr;

unsigned long long call_global_callback()
{
    if (!global_func_ptr)
        return 4294967295;
    goto global_func_ptr;
}


// Function: global_heap_store at 0x4017d4
unsigned long long global_heap_store(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return *(a0);
}


// Function: static_complex_init at 0x4017e8
unsigned long long static_complex_init()
{
    return 15;
}


// Function: tls_access at 0x4017f0
unsigned int tls_access(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: init_order_test at 0x4017f8
unsigned long long init_order_test()
{
    return 20;
}


// Function: test_static_global at 0x401800
extern unsigned int counter.1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_4020ba;
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;

int test_static_global()
{
    unsigned long v3;  // x2
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4020ba);
    __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", global_var_access() & 4294967295);
    __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", (global_counter * 2 | global_counter >> 31) & 4294967294);
    __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
    counter.1 = 1;
    __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
    v3 = counter.1 + 1;
    counter.1 = counter.1 + 1;
    __printf_chk(1, "STM-L1-03 (static_local): %d\n", v3);
    __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
    __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
    __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", call_extern_func() & 4294967295);
    __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", read_const_data() & 4294967295);
    __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
    __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
    __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", global_struct_access() & 4294967295);
    file_scope_static = 50;
    __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
    global_func_ptr = double_value;
    __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", call_global_callback() & 4294967295);
    __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
    __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", static_complex_init() & 4294967295);
    __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
    return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: memop_memset at 0x4019e8
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
    unsigned long v4;  // cc_op
    unsigned long v5;  // cc_dep1
    unsigned long long v16;  // x30
    unsigned long long v17;  // x19
    unsigned long v6;  // cc_dep2
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // cc_op
    unsigned long v9;  // cc_dep1
    unsigned long v10;  // cc_dep2
    unsigned long v11;  // cc_ndep
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    if (a0)
    {
        if ((char)arm64g_calculate_condition(4, ((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? n : 0x40000000), 0, 0))
            return 4294967295;
    }
    else
    {
        if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v8 | 16, v9, v10, v11) ? n : 0x40000000), 0, 0))
            return 4294967295;
    }
    v0 = &v3;
    v1 = v16;
    v2 = v17;
    memset(a0, a2, n);
    return *(a0);
}


// Function: memop_memcpy at 0x401a2c
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
    unsigned long v5;  // cc_op
    unsigned long v6;  // cc_dep1
    unsigned long long v17;  // x30
    unsigned long long v18;  // x19
    unsigned long long v19;  // x20
    unsigned long v7;  // cc_dep2
    unsigned long v8;  // cc_ndep
    unsigned long v9;  // cc_op
    unsigned long v10;  // cc_dep1
    unsigned long v11;  // cc_dep2
    unsigned long v12;  // cc_ndep
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    if (a0)
    {
        if ((char)arm64g_calculate_condition(4, ((char)arm64g_calculate_condition(v5 | 16, v6, v7, v8) ? a1 : 0x40000000), 0, 0))
            return 4294967295;
    }
    else
    {
        if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v9 | 16, v10, v11, v12) ? a1 : 0x40000000), 0, 0))
            return 4294967295;
    }
    v0 = &v4;
    v1 = v17;
    v2 = v18;
    v3 = v19;
    if (!n)
        return 4294967295;
    memcpy(a0, a1, n);
    return *((int *)(-4 + (char *)a0 + (n & 18446744073709551612)));
}


// Function: memop_memmove at 0x401a7c
typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

unsigned long long memop_memmove(struct_0 *a0, unsigned long a1)
{
    unsigned long v4;  // cc_op
    unsigned long v5;  // cc_dep1
    unsigned long long v16;  // x30
    unsigned long long v17;  // x19
    unsigned long v6;  // cc_dep2
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // cc_op
    unsigned long v9;  // cc_dep1
    unsigned long v10;  // cc_dep2
    unsigned long v11;  // cc_ndep
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    if (a0)
    {
        if ((char)arm64g_calculate_condition(148, ((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? a1 : 0), ((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? 1 : 0), 0))
            return 4294967295;
    }
    else
    {
        if ((char)arm64g_calculate_condition(144, ((char)arm64g_calculate_condition(v8 | 16, v9, v10, v11) ? a1 : 0), ((char)arm64g_calculate_condition(v8 | 16, v9, v10, v11) ? 1 : 0), 0))
            return 4294967295;
    }
    v0 = &v3;
    v1 = v16;
    v2 = v17;
    memmove(&a0->field_1, a0, a1 - 1);
    return a0->field_1;
}


// Function: memop_memcmp at 0x401ac0
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    unsigned long long v15;  // x30
    unsigned int result;  // w0
    unsigned long v17;  // cc_dep1
    unsigned int v18;  // w0
    unsigned long v5;  // cc_dep2
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // cc_op
    unsigned long v8;  // cc_dep1
    unsigned long v9;  // cc_dep2
    unsigned long v10;  // cc_ndep
    char *v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    if (a0)
    {
        if ((char)arm64g_calculate_condition(4, ((char)arm64g_calculate_condition(v3 | 16, v4, v5, v6) ? a1 : 0x40000000), 0, 0))
            return 0;
    }
    else
    {
        if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v7 | 16, v8, v9, v10) ? a1 : 0x40000000), 0, 0))
            return 0;
    }
    if (!a2)
        return 0;
    v0 = &v2;
    v1 = v15;
    result = memcmp(a0, a1, a2);
    v17 = result;
    if (!result)
    {
        v18 = 0;
        if (!((char)arm64g_calculate_condition(211, v17, 0, 0)))
            return 1;
    }
    else
    {
        v18 = 4294967295;
        if (!((char)arm64g_calculate_condition(211, v17, 0, 0)))
            return 1;
    }
    return v18;
}


// Function: memop_bzero at 0x401af8
unsigned long long memop_bzero(char *a0, unsigned long n)
{
    unsigned long long v4;  // x30
    unsigned long long v5;  // x19
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    if (!a0)
        return 4294967295;
    v0 = &v3;
    v1 = v4;
    v2 = v5;
    memset(a0, 0, n);
    return *(a0);
}


// Function: memop_bcopy at 0x401b30
unsigned long long memop_bcopy(void* a0, void* a1, unsigned long a2)
{
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    unsigned long long v15;  // x30
    unsigned long v5;  // cc_dep2
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // cc_op
    unsigned long v8;  // cc_dep1
    unsigned long v9;  // cc_dep2
    unsigned long v10;  // cc_ndep
    char *v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    if (a0)
    {
        if ((char)arm64g_calculate_condition(4, ((char)arm64g_calculate_condition(v3 | 16, v4, v5, v6) ? a1 : 0x40000000), 0, 0))
            return 4294967295;
    }
    else
    {
        if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v7 | 16, v8, v9, v10) ? a1 : 0x40000000), 0, 0))
            return 4294967295;
    }
    if (!a2)
        return 4294967295;
    v0 = &v2;
    v1 = v15;
    return *((char *)memmove(a1, a0, a2));
}


// Function: memop_unaligned_access at 0x401b6c
typedef struct struct_0 {
    char padding_0[1];
    unsigned int field_1;
} struct_0;

unsigned long long memop_unaligned_access(struct_0 *a0)
{
    if (!a0)
        return 4294967295;
    return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401b80
unsigned long long memop_memory_barrier(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    [D] MBusEvent-Imbe_Fence()
    return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401ba0
extern char __stack_chk_guard;
extern char g_40231c;

unsigned long long test_memory_op_functions()
{
    unsigned long long v23;  // x0
    unsigned int v24;  // w2
    unsigned long v25;  // x2
    char *v0;  // [bp-0x1b0]
    unsigned int v1[1];  // [bp-0x18c]
    unsigned long v2;  // [bp-0x188]
    unsigned int v3;  // [bp-0x180]
    unsigned long v4;  // [bp-0x178]
    unsigned int v5;  // [bp-0x170]
    unsigned long v6;  // [bp-0x168]
    unsigned long long v7;  // [bp-0x160]
    unsigned int v8;  // [bp-0x158]
    unsigned long flag2;  // [bp-0x150]
    unsigned long long flag3;  // [bp-0x148]
    unsigned int result;  // [bp-0x140]
    unsigned int v12;  // [bp-0x138]
    unsigned int flag1;  // [bp-0x130]
    char v14[16];  // [bp-0x128]
    char v15;  // [bp-0x118]
    char v16[9];  // [bp-0x111]
    char v17[256];  // [bp-0x108]
    unsigned long v18;  // [bp-0x8]
    char v19;  // [bp+0x0]

    v0 = &v19;
    v18 = *((long long *)&__stack_chk_guard);
    puts(&g_40231c);
    flag2 = 0;
    flag3 = 0;
    result = 0;
    v6 = 85899345930;
    v7 = 171798691870;
    v8 = 50;
    __printf_chk(1, "MEMOP-L2-01: %d\n", memop_memset(&v17, 10, 65) & 4294967295);
    __printf_chk(1, "MEMOP-L2-02: %d\n", memop_memcpy(&flag2, &v6, 20) & 4294967295);
    strncpy(&v15, "HelloWor", 8);
    strncpy(v16, "rld", 3);
    __printf_chk(1, "MEMOP-L2-03: %c\n", memop_memmove(&v15, 10) & 4294967295);
    v2 = 8589934593;
    v4 = 8589934593;
    v3 = 3;
    v5 = 4;
    v23 = memcmp(&v2, &v4, 12);
    if (!(unsigned int)v23)
        v24 = 0;
    else
        v24 = 4294967295;
    if ((char)arm64g_calculate_condition(211, v23 & 4294967295, 0, 0))
        v25 = v24;
    else
        v25 = 1;
    __printf_chk(1, "MEMOP-L2-04: %d\n", v25);
    __printf_chk(1, "MEMOP-L2-05: %d\n", memop_bzero(&v14, 10) & 4294967295);
    v12 = 67305985;
    flag1 = 0;
    __printf_chk(1, "MEMOP-L2-06: %d\n", memop_bcopy(&v12, &flag1, 4) & 4294967295);
    __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
    *((unsigned int [1])v1) = 5;
    __printf_chk(1, "MEMOP-L3-02: %d\n", memop_memory_barrier(&v1) & 4294967295);
    if (v18 == *((long long *)&__stack_chk_guard))
        return &__stack_chk_guard;
    __stack_chk_fail(); /* do not return */
}


// Function: extern_function at 0x401d78
unsigned int extern_function(unsigned int a0)
{
    return a0 * 3;
}


// Function: _fini at 0x401d80
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

