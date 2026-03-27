// Angr Decompilation of 3_clang_O0_g
// Platform: ARMEL

// Function: _init at 0x40057c
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_400588 at 0x400588
extern unsigned int g_414008;

int sub_400588()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_414008;
}


// Function: _start at 0x400680
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_4006b8 at 0x4006b8
void sub_4006b8()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4006c4
extern unsigned int g_41405c;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_41405c)
        goto LABEL_4006dc;
    return v0;
LABEL_4006dc:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x4006e8
extern char __TMC_END__;
extern unsigned int g_414058;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_400708;
    return &__TMC_END__;
LABEL_400708:
    if (g_414058)
        goto LABEL_400718;
    return &__TMC_END__;
LABEL_400718:
    goto g_414058;
}


// Function: register_tm_clones at 0x40072c
extern char __TMC_END__;
extern unsigned int g_414068;

int register_tm_clones()
{
    if (0)
        goto LABEL_400758;
    return &__TMC_END__;
LABEL_400758:
    if (g_414068)
        goto LABEL_400768;
    return &__TMC_END__;
LABEL_400768:
    goto g_414068;
}


// Function: __do_global_dtors_aux at 0x40077c
extern char __TMC_END__;
extern unsigned int __dso_handle;
extern unsigned int g_414054;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!__TMC_END__)
        goto LABEL_400798;
    return v2;
LABEL_400798:
    v1 = v3;
    v0 = v4;
    if (!g_414054)
    {
        v5 = deregister_tm_clones();
        __TMC_END__ = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4007e4
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: local_vars at 0x4007e8
unsigned int local_vars(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = a0 * 2;
    v0 = v1 + 10;
    return v0;
}


// Function: local_array at 0x40081c
unsigned int local_array(unsigned int a0)
{
    unsigned int idx;  // [bp-0x30]
    unsigned long v2;  // [bp-0x2c]
    char v1;  // [bp-0x18]

    for (idx = 0; 9 >= idx; idx += 1)
    {
        (&v2)[idx] = idx * a0;
    }
    return *((int *)&v1);
}


// Function: local_struct at 0x400874
int local_struct(unsigned int a0)
{
    unsigned int v0;  // [bp-0x8]

    v0 = a0 * 2;
    return a0 + v0;
}


// Function: address_of_local at 0x4008a4
unsigned int address_of_local(unsigned int ptr)
{
    unsigned int v0;  // [bp-0x8]

    v0 = 42;
    *((unsigned int *)ptr) = v0;
    return v0;
}


// Function: address_of_array at 0x4008cc
int address_of_array(unsigned int *a0)
{
    unsigned int *v0;  // [bp-0xc]
    unsigned int *v1;  // [bp-0x8]

    v1 = a0;
    v0 = a0;
    return *(v1) + *(v0);
}


// Function: large_stack_frame at 0x400900
int large_stack_frame()
{
    unsigned int i;  // [bp-0x814]
    unsigned long v2;  // [bp-0x810]
    char v1;  // [bp-0x410]

    for (i = 0; 0x800 > i; i += 1)
    {
        *((char *)&v2 + i) = i;
    }
    return v1;
}


// Function: vla_stack at 0x40095c
unsigned int vla_stack(unsigned int a0)
{
    char *ptr;  // [bp-0x28], Other Possible Types: char
    unsigned int idx;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    char *v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0x14]

    if (a0 >= 1 && a0 <= 1000)
    {
        v3 = &ptr;
        ptr = &(&ptr)[-1 * (7 + a0 * 4 & 0xfffffff8)];
        v2 = a0;
        for (idx = 0; a0 > idx; idx += 1)
        {
            *((unsigned int *)&ptr[4 * idx]) = idx * 2;
        }
        v4 = *((int *)&ptr[4294967293 & (a0 + (a0 >> 31)) * 2]);
        return v4;
    }
    v4 = 4294967295;
    return v4;
}


// Function: alloca_usage at 0x400a40
unsigned int alloca_usage(unsigned int a0)
{
    int <0x400a40[is_1]|Stack bp-0x20, 1 B>;  // [bp-0x20]
    unsigned int idx;  // [bp-0x20]
    char *ptr;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x14]

    if (0 >= a0)
    {
        v2 = 4294967295;
        return v2;
    }
    ptr = (char *)&<0x400a40[is_1]|Stack bp-0x20, 1 B> - (7 + a0 * 4 & 0xfffffff8);
    for (idx = 0; a0 > idx; idx += 1)
    {
        *((unsigned int *)&ptr[4 * idx]) = idx * 3;
    }
    v2 = *((int *)&ptr[4294967293 & (a0 + (a0 >> 31)) * 2]);
    return v2;
}


// Function: stack_alias at 0x400b00
unsigned int stack_alias(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x10]
    char *v1;  // [bp-0xc], Other Possible Types: unsigned int
    char *v2;  // [bp-0x8], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x4]

    v2 = a0;
    v1 = a1;
    v0 = 10;
    v2 = &v0;
    v1 = &v0;
    if (v2 == v1 && v2)
    {
        v0 = 20;
        v3 = v0;
        return v3;
    }
    v3 = 4294967295;
    return v3;
}


// Function: test_stack_memory at 0x400b78
extern char g_4035b4;

int test_stack_memory()
{
    unsigned int v18;  // r0
    unsigned int v19;  // r0
    unsigned int v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x48]
    char *v2;  // [bp-0x44]
    unsigned int v3;  // [bp-0x40]
    unsigned int result;  // [bp-0x3c]
    unsigned int v5;  // [bp-0x38]
    char v6;  // [bp-0x34], Other Possible Types: unsigned int
    unsigned int v7;  // [bp-0x30]
    unsigned int v8;  // [bp-0x2c]
    char v9;  // [bp-0xc]

    printf(&g_4035b4);
    v0 = 5;
    printf("MEM-L1-01 (local_vars): %d\n", local_vars(5));
    v1 = 2;
    printf("MEM-L1-02 (local_array): %d\n", local_array(2));
    printf("MEM-L1-03 (local_struct): %d\n", local_struct(v0));
    printf("MEM-L1-04 (address_of_local): %d\n", address_of_local(&v9));
    v2 = &v6;
    result = 0;
    memset(&v6, 0, 40);
    v6 = 1;
    v7 = v1;
    v8 = 3;
    printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(v2));
    printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
    v3 = 10;
    printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
    printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(v3));
    v5 = result;
    v18 = stack_alias(&v5, &v5);
    v19 = printf("MEM-L2-04 (stack_alias): %d\n", v18);
    return printf("MEM-L2-04 (stack_alias): %d\n", v18);
}


// Function: heap_basic at 0x400ce0
unsigned int heap_basic(unsigned int a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int idx;  // [bp-0x18]
    void* ptr;  // [bp-0x14]
    unsigned int v3;  // [bp-0xc]

    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v3 = 4294967295;
        return v3;
    }
    for (idx = 0; a0 > idx; idx += 1)
    {
        *((unsigned int *)((char *)ptr + 4 * idx)) = idx * 2;
    }
    v0 = *((int *)((char *)ptr + (4294967293 & (a0 + (a0 >> 31)) * 2)));
    free(ptr);
    v3 = v0;
    return v3;
}


// Function: heap_calloc at 0x400da0
unsigned int heap_calloc(unsigned int a0)
{
    unsigned int idx;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    void* ptr;  // [bp-0x14]
    unsigned int v3;  // [bp-0xc]

    ptr = calloc(a0, 4);
    if (!ptr)
    {
        v3 = 4294967295;
        return v3;
    }
    v1 = 0;
    for (idx = 0; a0 > idx; idx += 1)
    {
        v1 += *((int *)((char *)ptr + 4 * idx));
    }
    free(ptr);
    v3 = v1;
    return v3;
}


// Function: heap_realloc at 0x400e50
unsigned int heap_realloc()
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int index;  // [bp-0x20]
    unsigned int ptr[6];  // [bp-0x1c]
    unsigned int v4;  // [bp-0x18]
    unsigned int idx;  // [bp-0x14]
    unsigned int ptr[3];  // [bp-0x10], Other Possible Types: unsigned int [6]
    unsigned int v7;  // [bp-0xc]

    ptr[0] = malloc(20);
    if (!ptr)
    {
        v7 = 4294967295;
        return v7;
    }
    for (idx = 0; 4 >= idx; idx += 1)
    {
        ptr[idx] = idx + 1;
    }
    v4 = ptr[2];
    ptr[0] = realloc(ptr, 40);
    if (!ptr)
    {
        free(ptr);
        v7 = 4294967294;
        return v7;
    }
    ptr[0] = ptr;
    for (index = 5; 9 >= index; index += 1)
    {
        ptr[index] = index * 10;
    }
    v0 = (ptr[2] != v4 ? 4294967293 : ptr[5]);
    v1 = v0;
    free(ptr);
    v7 = v1;
    return v7;
}


// Function: heap_array at 0x400fb0
unsigned int heap_array(unsigned int a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int idx;  // [bp-0x18]
    void* ptr;  // [bp-0x14]
    unsigned int v3;  // [bp-0xc]

    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v3 = 4294967295;
        return v3;
    }
    for (idx = 0; a0 > idx; idx += 1)
    {
        *((unsigned int *)((char *)ptr + 4 * idx)) = idx * 3;
    }
    v0 = *((int *)((char *)ptr + (4294967293 & (a0 + (a0 >> 31)) * 2)));
    free(ptr);
    v3 = v0;
    return v3;
}


// Function: heap_struct at 0x401070
unsigned int heap_struct(unsigned int a0)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int ptr[2];  // [bp-0x14]
    unsigned int v2;  // [bp-0xc]

    ptr[0] = malloc(8);
    if (ptr)
    {
        ptr[0] = a0;
        ptr[1] = a0 * 2;
        v0 = ptr[0] + ptr[1];
        free(ptr);
        v2 = v0;
        return v2;
    }
    v2 = 4294967295;
    return v2;
}


// Function: heap_nested at 0x4010fc
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
} struct_1;

unsigned int heap_nested(struct_0 **ptr)
{
    unsigned int ptr[2];  // r0
    unsigned int v0;  // [bp-0xc]

    *(ptr) = malloc(8);
    if (!*(ptr))
    {
        v0 = 4294967295;
        return v0;
    }
    *(ptr)->field_0 = 10;
    ptr = malloc(8);
    *(ptr)->field_4 = ptr;
    if (*(ptr)->field_4)
    {
        *(ptr)->field_4->field_0 = 20;
        *(ptr)->field_4->field_4 = 0;
        v0 = 0;
        return v0;
    }
    free(*(ptr));
    v0 = 4294967294;
    return v0;
}


// Function: linked_list_heap at 0x4011d0
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int linked_list_heap()
{
    struct_0 *p;  // [bp-0x2c]
    struct_0 *iter;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    struct_0 *addr;  // [bp-0x20]
    struct_0 *ptr;  // [bp-0x1c]
    char i;  // [bp-0x18], Other Possible Types: unsigned int
    struct_0 *ptr5;  // [bp-0x14]
    struct_0 *cur;  // [bp-0x10]
    unsigned int v8;  // [bp-0xc]

    memset(&i, 0, 12);
    for (; 4 >= i; i += 1)
    {
        ptr = malloc(8);
        if (!ptr)
        {
            while (cur)
            {
                addr = cur;
                cur = cur->field_4;
                free(addr);
            }
            v8 = 4294967295;
            return v8;
        }
        ptr->field_0 = i * 10;
        ptr->field_4 = NULL;
        if (!cur)
        {
            cur = ptr;
            ptr5 = ptr;
        }
        else
        {
            ptr5->field_4 = ptr;
            ptr5 = ptr;
        }
    }
    v2 = 0;
    for (iter = cur; iter; iter = iter->field_4)
    {
        v2 += iter->field_0;
    }
    while (cur)
    {
        p = cur;
        cur = cur->field_4;
        free(p);
    }
    v8 = v2;
    return v8;
}


// Function: create_tree_node at 0x401364
unsigned int [3] create_tree_node(unsigned int a0)
{
    unsigned int ptr[3];  // [bp-0x10]

    ptr[0] = malloc(12);
    if (!ptr)
        return ptr;
    ptr[0] = a0;
    ptr[1] = 0;
    ptr[2] = 0;
    return ptr;
}


// Function: tree_heap_traversal at 0x4013c4
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_1 *field_4;
    struct struct_2 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

unsigned int tree_heap_traversal()
{
    unsigned int v0;  // [bp-0x14]
    struct_0 *ptr;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    ptr = create_tree_node(10);
    if (!ptr)
    {
        v2 = 4294967295;
        return v2;
    }
    ptr->field_4 = create_tree_node(20);
    ptr->field_8 = create_tree_node(30);
    if (ptr->field_4 && ptr->field_8)
    {
        v0 = ptr->field_0 + ptr->field_4->field_0 + ptr->field_8->field_0;
        free(ptr->field_4);
        free(ptr->field_8);
        free(ptr);
        v2 = v0;
        return v2;
    }
    if (ptr->field_4)
        free(ptr->field_4);
    if (ptr->field_8)
        free(ptr->field_8);
    free(ptr);
    v2 = 4294967294;
    return v2;
}


// Function: memory_leak at 0x4014fc
unsigned int memory_leak(unsigned int a0)
{
    unsigned int idx;  // [bp-0x18]
    unsigned int ptr;  // [bp-0x14]
    unsigned int v2;  // [bp-0xc]

    ptr = malloc(a0 * 4);
    if (!ptr)
    {
        v2 = 4294967295;
        return v2;
    }
    for (idx = 0; a0 > idx; idx += 1)
    {
        *((unsigned int *)(ptr + idx * 4)) = idx;
    }
    v2 = *((int *)(ptr + (4294967293 & (a0 + (a0 >> 31)) * 2)));
    return v2;
}


// Function: dangling_pointer at 0x4015a8
unsigned int dangling_pointer()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    ptr = malloc(4);
    if (ptr)
    {
        *(ptr) = 42;
        v1 = *(ptr);
        printf("value before free: %d\n", v1);
        free(ptr);
        v0 = *(ptr);
        v3 = v0;
        return v3;
    }
    v3 = 4294967295;
    return v3;
}


// Function: double_free at 0x401638
unsigned int double_free(unsigned int *p)
{
    unsigned int *ptr;  // [bp-0x14]
    unsigned int v1;  // [bp-0xc]

    if (p)
    {
        v1 = *(p);
        return v1;
    }
    ptr = malloc(4);
    if (ptr)
    {
        *(ptr) = 10;
        free(ptr);
        free(ptr);
        v1 = 4294967294;
        return v1;
    }
    v1 = 4294967295;
    return v1;
}


// Function: heap_overflow at 0x4016c8
unsigned int heap_overflow()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int i;  // [bp-0x14]
    unsigned int *ptr;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    ptr = malloc(40);
    if (!ptr)
    {
        v3 = 4294967295;
        return v3;
    }
    for (i = 0; 10 >= i; i += 1)
    {
        ptr[i] = i * 100;
    }
    v0 = *(ptr);
    free(ptr);
    v3 = v0;
    return v3;
}


// Function: test_heap_memory at 0x401770
typedef struct struct_0 {
    char padding_0[4];
    void* field_4;
} struct_0;

extern char g_4036fe;
extern char g_403857;
extern char g_403867;
extern char g_40388c;
extern char g_4038cd;

unsigned int test_heap_memory()
{
    unsigned int msg;  // r0
    unsigned int v16;  // r0
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    char v2;  // [bp-0x18], Other Possible Types: unsigned int
    char v3;  // [bp-0x17]
    unsigned int v4;  // [bp-0x14]
    unsigned int pid;  // [bp-0x10]
    struct_0 *result;  // [bp-0xc]

    printf(&g_4036fe);
    v0 = 10;
    printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
    v1 = 5;
    printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
    printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
    printf("HEAP-L2-04 (heap_array): %d\n", heap_array(v0));
    printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(v1));
    result = NULL;
    printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result));
    if (result)
    {
        free(result->field_4);
        free(result);
    }
    printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
    printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
    printf("HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
    printf("HEAP-L3-04 (dangling_pointer): ");
    pid = fork();
    if (!pid)
    {
        v4 = dangling_pointer();
        printf(&g_403857, v4);
        exit(0); /* do not return */
    }
    else if (pid >= 1)
    {
        waitpid(pid, &v2, 0);
        if (!(v2 & 127))
        {
            v16 = printf(&g_403867, v3);
        }
        else
        {
            v16 = ((*((int *)&v2) & 127) + 1) * 0x1000000 >> 25;
            if (v16 >= 1)
                v16 = printf(&g_40388c, *((int *)&v2) & 127);
        }
        return v16;
    }
    else
    {
        msg = (unsigned int)perror(&g_4038cd);
        return (unsigned int)perror(&g_4038cd);
    }
}


// Function: global_var_access at 0x4019b0
extern unsigned int global_counter;

int global_var_access()
{
    global_counter = global_counter + 1;
    return global_counter;
}


// Function: global_var_read at 0x4019e0
extern unsigned int global_counter;

unsigned int global_var_read()
{
    return global_counter * 2;
}


// Function: global_array_access at 0x4019f4
extern unsigned int global_array[4];

unsigned int global_array_access(unsigned int idx)
{
    unsigned int v0;  // [bp-0x4]

    if (!((char)armg_calculate_condition(66, idx, 0, 0)) && idx < 10)
    {
        v0 = global_array[idx];
        return v0;
    }
    v0 = 4294967295;
    return v0;
}


// Function: static_local at 0x401a50
extern unsigned int static_local.counter;

unsigned int static_local(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    if (!a0)
    {
        static_local.counter = static_local.counter + 1;
        v0 = static_local.counter;
        return v0;
    }
    static_local.counter = 0;
    v0 = 0;
    return v0;
}


// Function: call_static_func at 0x401ac4
int call_static_func(unsigned int a0)
{
    return static_helper(a0) + 1;
}


// Function: static_helper at 0x401aec
unsigned int static_helper(unsigned int a0)
{
    return a0 * 2;
}


// Function: access_extern_global at 0x401b04
extern unsigned int extern_global_var;

int access_extern_global()
{
    return extern_global_var + 100;
}


// Function: call_extern_func at 0x401b1c
int call_extern_func()
{
    unsigned int v0;  // r0

    v0 = extern_function(5);
    return extern_function(5);
}


// Function: read_const_data at 0x401b34
typedef struct struct_0 {
    char padding_0[4];
    char field_4;
} struct_0;

extern struct_0 *const_string;

int read_const_data()
{
    return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401b4c
extern unsigned int bss_var;

int access_bss_var()
{
    return bss_var;
}


// Function: access_bss_buffer at 0x401b5c
extern char bss_buffer;

int access_bss_buffer()
{
    return bss_buffer;
}


// Function: global_struct_access at 0x401b70
extern unsigned int g_4140a4;
extern unsigned int global_point;

int global_struct_access()
{
    return global_point + g_4140a4;
}


// Function: set_file_static at 0x401b94
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
    file_scope_static = a0;
    return a0;
}


// Function: get_file_static at 0x401bb8
extern unsigned int file_scope_static;

int get_file_static()
{
    return file_scope_static;
}


// Function: set_global_callback at 0x401bc8
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
    global_func_ptr = a0;
    return a0;
}


// Function: call_global_callback at 0x401bec
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *global_func_ptr;

unsigned int call_global_callback(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]

    v0 = (!global_func_ptr ? 4294967295 : global_func_ptr(a0, global_func_ptr));
    return v0;
}


// Function: global_heap_store at 0x401c50
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *global_heap_ptr;

unsigned int global_heap_store(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    global_heap_ptr = a0;
    v0 = (!global_heap_ptr ? 4294967295 : global_heap_ptr->field_0);
    return v0;
}


// Function: static_complex_init at 0x401cb4
extern unsigned int complex_init;
extern unsigned int g_4140b4;
extern unsigned int g_4140bc;

int static_complex_init()
{
    return complex_init + g_4140b4 + g_4140bc;
}


// Function: tls_access at 0x401ce0
void tls_access(unsigned int a0)
{
    unsigned int v2;  // lr
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a0;
    __aeabi_read_tp(); /* do not return */
}


// Function: sub_401cfc at 0x401cfc
unsigned int sub_401cfc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    *((unsigned int *)(a0 + a1)) = a2;
    return *((int *)(a0 + a1)) * 2;
}


// Function: init_order_test at 0x401d18
int init_order_test()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0xc]

    v0 = 20;
    v1 = init_depends_on(&v0);
    return init_depends_on(&v0);
}


// Function: init_depends_on at 0x401d40
extern unsigned int init_depends_on.static_depends;

int init_depends_on(unsigned int *a0)
{
    if (a0)
        init_depends_on.static_depends = *(a0);
    return init_depends_on.static_depends;
}


// Function: test_static_global at 0x401d88
extern char g_4038e3;

int test_static_global()
{
    unsigned int v5;  // lr
    unsigned int result;  // [bp-0x18]
    char *v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x4]

    v4 = v5;
    printf(&g_4038e3);
    printf("STM-L1-01 (global_var_access): %d\n", global_var_access());
    printf("STM-L1-01 (global_var_read): %d\n", global_var_read());
    v2 = 5;
    printf("STM-L1-02 (global_array_access): %d\n", global_array_access(5));
    static_local(1);
    result = 0;
    v1 = "STM-L1-03 (static_local): %d\n";
    printf("STM-L1-03 (static_local): %d\n", static_local(0));
    static_local(result);
    printf(v1);
    printf("STM-L1-04 (call_static_func): %d\n", call_static_func(v2));
    printf("STM-L2-01 (access_extern_global): %d\n", access_extern_global());
    printf("STM-L2-02 (call_extern_func): %d\n", call_extern_func());
    printf("STM-L2-03 (read_const_data): %d\n", read_const_data());
    printf("STM-L2-04 (access_bss_var): %d\n", access_bss_var());
    printf("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer());
    printf("STM-L2-05 (global_struct_access): %d\n", global_struct_access());
    set_file_static(50);
    printf("STM-L2-06 (file_static): %d\n", get_file_static());
    set_global_callback($a.42);
    printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(v2));
    v3 = 100;
    printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store(&v3));
    printf("STM-L2-09 (static_complex_init): %d\n", static_complex_init());
    tls_access(10); /* do not return */
}


// Function: sub_401f2c at 0x401f2c
unsigned int sub_401f2c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    printf("STM-L3-01 (tls_access): %d\n", a0);
    v0 = printf("STM-L3-02 (init_order_test): %d\n", init_order_test());
    return printf("STM-L3-02 (init_order_test): %d\n", init_order_test());
}


// Function: $a.42 at 0x401fa8
unsigned int $a.42(unsigned int a0)
{
    return a0 * 2;
}


// Function: memop_memset at 0x401fc0
unsigned int memop_memset(char *ptr, unsigned int n, unsigned int a2)
{
    unsigned int v0;  // [bp-0xc]

    if (ptr && n)
    {
        memset(ptr, a2, n);
        v0 = *(ptr);
        return v0;
    }
    v0 = 4294967295;
    return v0;
}


// Function: memop_memcpy at 0x402034
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n)
{
    unsigned int v0;  // [bp-0xc]

    if (a0 && a1 && n)
    {
        memcpy(a0, a1, n);
        v0 = *((int *)(-4 + (n & 0xfffffffc) + (char *)a0));
        return v0;
    }
    v0 = 4294967295;
    return v0;
}


// Function: memop_memmove at 0x4020c4
typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

unsigned int memop_memmove(struct_0 *ptr, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]

    if (ptr && 1 < a1)
    {
        memmove(&ptr->field_1, ptr, a1 - 1);
        v0 = ptr->field_1;
        return v0;
    }
    v0 = 4294967295;
    return v0;
}


// Function: memop_memcmp at 0x402138
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0xc]

    if (a0 && a1 && a2)
    {
        v1 = memcmp(a0, a1, a2);
        v0 = (v1 < 1 ? v1 >> 31 : 1);
        v2 = v0;
        return v2;
    }
    v2 = 0;
    return v2;
}


// Function: memop_bzero at 0x4021e8
unsigned int memop_bzero(char *ptr, unsigned int n)
{
    unsigned int v0;  // [bp-0xc]

    if (ptr)
    {
        memset(ptr, 0, n);
        v0 = *(ptr);
        return v0;
    }
    v0 = 4294967295;
    return v0;
}


// Function: memop_bcopy at 0x402248
unsigned int memop_bcopy(void* a0, char *ptr, unsigned int a2)
{
    unsigned int v0;  // [bp-0xc]

    if (a0 && ptr && a2)
    {
        bcopy(a0, ptr, a2);
        v0 = *(ptr);
        return v0;
    }
    v0 = 4294967295;
    return v0;
}


// Function: memop_unaligned_access at 0x4022cc
unsigned int memop_unaligned_access(char *ptr)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x4]

    if (ptr)
    {
        v0 = ptr[1] | ptr[2] * 0x100 | (ptr[3] | ptr[4] * 0x100) * 0x10000;
        v1 = v0;
        return v1;
    }
    v1 = 4294967295;
    return v1;
}


// Function: memop_memory_barrier at 0x40232c
unsigned int memop_memory_barrier(unsigned int *ptr)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0xc]

    if (ptr)
    {
        v0 = *(ptr);
        __sync_synchronize(*(ptr)); /* do not return */
    }
    v1 = 4294967295;
    return v1;
}


// Function: test_memory_op_functions at 0x402390
extern char g_403b46;

unsigned int test_memory_op_functions()
{
    unsigned int v32;  // r0
    unsigned int v33;  // r0
    char *v0;  // [bp-0x188]
    unsigned int v1;  // [bp-0x184]
    char result[4];  // [bp-0x180]
    unsigned int v3[1];  // [bp-0x17c]
    char v4[4];  // [bp-0x178]
    unsigned int v5;  // [bp-0x174]
    char v6[4];  // [bp-0x170]
    unsigned int v7;  // [bp-0x16c]
    char v8[10];  // [bp-0x166]
    unsigned int flag2;  // [bp-0x15c]
    unsigned int v10;  // [bp-0x158]
    unsigned int v11;  // [bp-0x154]
    unsigned int flag1;  // [bp-0x150]
    unsigned int v13;  // [bp-0x14c]
    unsigned int v14;  // [bp-0x148]
    char v15;  // [bp-0x144]
    char v16[2];  // [bp-0x13c]
    char v17;  // [bp-0x13a]
    char v18;  // [bp-0x138]
    char v19;  // [bp-0x124], Other Possible Types: unsigned int
    unsigned int v20;  // [bp-0x120]
    unsigned int v21;  // [bp-0x11c]
    unsigned int v22;  // [bp-0x118]
    unsigned int v23;  // [bp-0x114]
    char v24[256];  // [bp-0x110]

    printf(&g_403b46);
    v0 = &v19;
    v19 = 10;
    v20 = 20;
    v21 = 30;
    v22 = 40;
    v23 = 50;
    *(&result) = 0;
    memset(&v18, 0, 20);
    v1 = 10;
    printf("MEMOP-L2-01: %d\n", memop_memset(&v24, 10, 65));
    printf("MEMOP-L2-02: %d\n", memop_memcpy(&v18, v0, 20));
    v17 = (char)*(&result);
    strncpy(v16, "HelloWorld", 10);
    printf("MEMOP-L2-03: %c\n", memop_memmove(&v15, v1));
    v14 = 3;
    v13 = 2;
    flag1 = 1;
    v11 = 4;
    v10 = 2;
    flag2 = 1;
    printf("MEMOP-L2-04: %d\n", memop_memcmp(&flag1, &flag2, 12));
    printf("MEMOP-L2-05: %d\n", memop_bzero(&v8, v1));
    v7 = 67305985;
    *(&v6) = *(&result);
    printf("MEMOP-L2-06: %d\n", memop_bcopy(&v7, &v6, 4));
    v5 = 117835012;
    *(&v4) = 0x3020100;
    printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v4));
    *((unsigned int [1])v3) = 5;
    v32 = memop_memory_barrier(&v3);
    v33 = printf("MEMOP-L3-02: %d\n", v32);
    return printf("MEMOP-L3-02: %d\n", v32);
}


// Function: main at 0x4025b4
int main()
{
    unsigned int v3;  // lr
    unsigned int result;  // [bp-0x10]
    unsigned int flag1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    result = 0;
    flag1 = 0;
    test_stack_memory();
    test_heap_memory();
    test_static_global(); /* do not return */
}


// Function: sub_4025d8 at 0x4025d8
int sub_4025d8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    test_memory_op_functions();
    return a4;
}


// Function: extern_function at 0x4025ec
unsigned int extern_function(unsigned int a0)
{
    return a0 * 3;
}


// Function: __sync_fetch_and_add_4 at 0x402604
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x40263c
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x402674
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x4026ac
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x4026e4
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x40271c
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x402758
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x4027b8
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x402818
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x402878
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x4028d8
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x402938
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x40299c
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x4029f8
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x402a54
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x402ab0
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x402b0c
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x402b68
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x402bc8
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x402c00
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x402c38
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x402c70
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x402ca8
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x402ce0
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x402d1c
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


// Function: __sync_sub_and_fetch_2 at 0x402d84
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


// Function: __sync_or_and_fetch_2 at 0x402dec
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


// Function: __sync_and_and_fetch_2 at 0x402e54
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


// Function: __sync_xor_and_fetch_2 at 0x402ebc
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


// Function: __sync_nand_and_fetch_2 at 0x402f24
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


// Function: __sync_add_and_fetch_1 at 0x402f90
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


// Function: __sync_sub_and_fetch_1 at 0x402ff4
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


// Function: __sync_or_and_fetch_1 at 0x403058
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


// Function: __sync_and_and_fetch_1 at 0x4030bc
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


// Function: __sync_xor_and_fetch_1 at 0x403120
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


// Function: __sync_nand_and_fetch_1 at 0x403184
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


// Function: __sync_val_compare_and_swap_4 at 0x4031ec
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
    while (*(a0) == i)
    {
        if (!4294905792())
            return i;
    }
    return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x40323c
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
    {
        if (!4294905792())
            return a1;
    }
    return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x4032b4
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
    {
        if (!4294905792())
            return a1;
    }
    return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x403328
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


// Function: __sync_bool_compare_and_swap_2 at 0x403354
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


// Function: __sync_bool_compare_and_swap_1 at 0x403370
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


// Function: __sync_synchronize at 0x40338c
int __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x403398
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x4033d0
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x403430
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x40348c
void __sync_lock_release_8(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    ptr[1] = 0;
    return;
}


// Function: __sync_lock_release_4 at 0x4034b0
void __sync_lock_release_4(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_2 at 0x4034d0
void __sync_lock_release_2(unsigned short *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_1 at 0x4034f0
void __sync_lock_release_1(char *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __aeabi_read_tp at 0x403510
void __aeabi_read_tp()
{
}


// Function: _fini at 0x403518
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

