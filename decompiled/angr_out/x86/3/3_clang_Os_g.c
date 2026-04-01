// Angr Decompilation of 3_clang_Os_g
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


// Function: sub_401130 at 0x401130
int sub_401130()
{
    void* v1;  // ebx

    goto (int)v1[16];
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
}


// Function: _start at 0x401140
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


// Function: sub_40116b at 0x40116b
void sub_40116b()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198763()
}


// Function: sub_40116c at 0x40116c
void sub_40116c()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x401170
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_401174 at 0x401174
void sub_401174()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401180
unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[5045] + 3;
}


// Function: sub_4011b3 at 0x4011b3
void sub_4011b3()
{
}


// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x4011c0
typedef struct struct_0 {
    char padding_0[20023];
    struct struct_1 *field_4e37;
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
    v3 = (char *)&v2->field_4e37 + 3;
    v0 = v4;
    if (!(&v3->padding_0[92] - &v3->padding_0[92] >> 31) + (&v3->padding_0[92] - &v3->padding_0[92] >> 2) >> 1)
    {
        return (&v3->padding_0[92] - &v3->padding_0[92] >> 31) + (&v3->padding_0[92] - &v3->padding_0[92] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[4]))
    {
        return (*((int *)&v3->padding_0[4]))(&v3->padding_0[92], (&v3->padding_0[92] - &v3->padding_0[92] >> 31) + (&v3->padding_0[92] - &v3->padding_0[92] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[92] - &v3->padding_0[92] >> 31) + (&v3->padding_0[92] - &v3->padding_0[92] >> 2) >> 1;
    }
}


// Function: sub_401207 at 0x401207
void sub_401207()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401210
typedef struct struct_0 {
    char padding_0[19923];
    unsigned int field_4dd3;
    char padding_4dd7[88];
    unsigned int field_4e2f;
    char padding_4e33[12];
    char field_4e3f;
    char padding_4e40[3];
    unsigned int field_4e43;
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
    ptr = &v6->padding_4dd7[11];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[92])
        return v5;
    if (*((int *)&ptr->padding_0[16]))
        sub_401130(*((int *)&ptr->padding_0[76]));
    v10 = &ptr->padding_0[236];
    v11 = *((int *)&ptr->padding_0[96]);
    i = (&ptr->padding_0[232] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[96]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[96]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[96]);
        } while (*((int *)&ptr->padding_0[96]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[92] = 1;
    return v14;
}


// Function: sub_40129a at 0x40129a
void sub_40129a()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x4012a0
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x4012a9
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x4012ad
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: sub_4012b1 at 0x4012b1
void sub_4012b1(unsigned int a0)
{
    local_vars();
    return;
}


// Function: local_vars at 0x4012b4
int local_vars(unsigned int a0)
{
    return a0 * 2 + 10;
}


// Function: local_array at 0x4012be
unsigned int local_array(unsigned int a0)
{
    unsigned int v1;  // ecx
    unsigned int idx;  // edx
    unsigned long v3;  // [bp-0x28]
    char v0;  // [bp-0x14]

    v1 = 0;
    idx = 0;
    do
    {
        (&v3)[idx] = v1;
        idx += 1;
        v1 += a0;
    } while (idx != 10);
    return *((int *)&v0);
}


// Function: local_struct at 0x4012dc
unsigned int local_struct(unsigned int a0)
{
    return a0 * 3;
}


// Function: address_of_local at 0x4012e4
unsigned int address_of_local(unsigned int *ptr)
{
    *(ptr) = 42;
    return 42;
}


// Function: address_of_array at 0x4012f4
unsigned int address_of_array(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: large_stack_frame at 0x4012fd
int large_stack_frame()
{
    unsigned int i;  // eax
    unsigned long v3;  // [bp-0x800]
    char v0;  // [bp-0x400]

    i = 0;
    do
    {
        *((char *)&v3 + i) = i;
        i += 1;
    } while (i != 0x800);
    return v0;
}


// Function: vla_stack at 0x40131f
unsigned int vla_stack(unsigned int a0)
{
    unsigned int v1;  // eax
    unsigned int idx;  // esi
    unsigned int i;  // edi
    char v0;  // [bp-0xc]

    v1 = a0;
    if (v1 - 1001 < 4294966296)
        return 4294967295;
    idx = 0;
    i = v1;
    do
    {
        *((unsigned int *)&(&v0)[2 * idx + -1 * (v1 * 4 + 15 & 0xfffffff0)]) = idx;
        idx += 2;
        i -= 1;
    } while (i != 1);
    return *((int *)&(&v0)[2 * ((v1 >> 31) + v1 & 4294967294) + -1 * (v1 * 4 + 15 & 0xfffffff0)]);
}


// Function: alloca_usage at 0x40136f
unsigned int alloca_usage(unsigned int i)
{
    unsigned int v0;  // edx
    unsigned int idx;  // esi

    if (i <= 0)
        return 4294967295;
    v0 = 0;
    idx = 0;
    do
    {
        *((unsigned int *)((char *)&vvar_24{r8|4b} - (i * 4 + 15 & 0xfffffff0) + 4 * idx)) = v0;
        idx += 1;
        v0 += 3;
    } while (i != idx);
    return *((int *)((char *)&vvar_24{r8|4b} - (i * 4 + 15 & 0xfffffff0) + 2 * ((i >> 31) + i & 4294967294)));
}


// Function: stack_alias at 0x4013b2
unsigned int stack_alias()
{
    return 20;
}


// Function: test_stack_memory at 0x4013b8
extern char g_4014ce;
extern char g_4014e4;
extern char g_4035c1;

int test_stack_memory(unsigned int a0)
{
    unsigned int v12;  // ebx
    unsigned int v13;  // esi
    unsigned int idx;  // eax
    unsigned int j;  // eax
    unsigned int index;  // ecx
    unsigned int *cur;  // esi
    unsigned int l;  // eax
    unsigned int v0;  // [bp-0x828]
    unsigned int v1;  // [bp-0x824]
    int <0x4013b8[is_13]|Stack bp-0x820, 1 B>;  // [bp-0x820]
    unsigned int v2;  // [bp-0x820]
    unsigned int v3;  // [bp-0x81c]
    unsigned int v4;  // [bp-0x818]
    unsigned int v5;  // [bp-0x80c]
    unsigned int v6;  // [bp-0x7fc]
    char v7;  // [bp-0x7f8]
    char v8;  // [bp-0x40c]
    unsigned int v9;  // [bp-0x8]
    unsigned int v10;  // [bp-0x4]
    char v11;  // [bp+0x0]

    v10 = v12;
    v9 = v13;
    puts(&g_4035c1);
    v4 = 20;
    printf("MEM-L1-01 (local_vars): %d\n");
    idx = 0;
    do
    {
        *((unsigned int *)((char *)&v5 + 2 * idx)) = idx;
        idx += 2;
    } while (idx != 20);
    v4 = *((int *)&v7);
    printf("MEM-L1-02 (local_array): %d\n");
    v4 = 15;
    printf("MEM-L1-03 (local_struct): %d\n");
    v4 = 42;
    printf("MEM-L1-04 (address_of_local): %d\n");
    v4 = 2;
    printf("MEM-L1-05 (address_of_array): %d\n");
    j = 0;
    do
    {
        *((char *)&v5 + j) = j;
        j += 1;
    } while (j != 0x800);
    v4 = v8;
    printf("MEM-L2-01 (large_stack_frame): %d\n");
    index = 0;
    do
    {
        *((unsigned int *)((char *)&v5 + 2 * index)) = index;
        index += 2;
    } while (index != 20);
    cur = &v5;
    v4 = *((int *)&v7);
    vvar_94{r24|4b} = &<0x4013b8[is_13]|Stack bp-0x820, 1 B>;
    printf(*((int *)&v11));
    l = 0;
    do
    {
        *(cur) = l;
        l += 3;
        cur += 1;
    } while (l != 30);
    v3 = v6;
    v2 = "MEM-L2-03 (alloca_usage): %d\n";
    vvar_109{r24|4b} = vvar_94{r24|4b} - 4;
    v1 = &g_4014ce;
    printf(*((int *)&v11));
    v1 = "MEM-L2-04 (stack_alias): %d\n";
    v2 = 20;
    v0 = &g_4014e4;
    return printf(*((int *)&v11));
}


// Function: heap_basic at 0x4014ed
unsigned int heap_basic(unsigned int a0)
{
    unsigned int v0;  // esi
    void* ptr;  // eax
    unsigned int idx;  // ecx
    unsigned int i;  // edx

    v0 = a0;
    ptr = malloc(v0 * 4);
    if (!ptr)
        return 4294967295;
    if (v0 > 0)
    {
        idx = 0;
        i = v0;
        do
        {
            *((unsigned int *)((char *)ptr + 2 * idx)) = idx;
            idx += 2;
            i -= 1;
        } while (i != 1);
    }
    free(ptr);
    return *((int *)((char *)ptr + 2 * ((v0 >> 31) + v0 & 4294967294)));
}


// Function: heap_calloc at 0x401546
unsigned int heap_calloc(unsigned int i)
{
    void* ptr;  // eax
    unsigned int v1;  // esi
    unsigned int idx;  // ecx

    ptr = calloc(i, 4);
    if (!ptr)
        return 4294967295;
    v1 = 0;
    if (i >= 2)
    {
        v1 = 0;
        idx = 1;
        do
        {
            v1 += *((int *)((char *)ptr + 4 * idx));
            idx += 1;
        } while (i != idx);
    }
    free(ptr);
    return v1;
}


// Function: heap_realloc at 0x40159a
unsigned int heap_realloc()
{
    unsigned int ptr[6];  // eax
    unsigned int ptr[6];  // esi
    unsigned int i;  // eax
    unsigned int v4;  // ebp
    unsigned int p[6];  // eax
    unsigned int cur[6];  // ecx
    unsigned int j;  // edx
    unsigned int v8;  // edi

    ptr = malloc(20);
    if (!ptr)
        return 4294967295;
    ptr = ptr;
    i = 1;
    do
    {
        ptr[1 + i] = i;
        i += 1;
    } while (i != 6);
    v4 = ptr[2];
    p = realloc(ptr, 40);
    if (p)
    {
        cur = &p[5];
        j = 50;
        do
        {
            cur[0] = j;
            j += 10;
            cur = &cur[1];
        } while (j != 100);
        v8 = 4294967293;
        if (p[2] == v4)
            v8 = p[5];
        ptr = p;
    }
    else
    {
        v8 = 4294967294;
    }
    free(ptr);
    return v8;
}


// Function: heap_array at 0x401627
unsigned int heap_array(unsigned int i)
{
    void* ptr;  // eax
    unsigned int v1;  // ecx
    unsigned int idx;  // edx

    ptr = malloc(i * 4);
    if (!ptr)
        return 4294967295;
    if (i > 0)
    {
        v1 = 0;
        idx = 0;
        do
        {
            *((unsigned int *)((char *)ptr + 4 * idx)) = v1;
            idx += 1;
            v1 += 3;
        } while (i != idx);
    }
    free(ptr);
    return *((int *)((char *)ptr + 2 * ((i >> 31) + i & 4294967294)));
}


// Function: heap_struct at 0x401682
unsigned int heap_struct(unsigned int a0)
{
    return a0 * 3;
}


// Function: heap_nested at 0x40168a
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

unsigned int heap_nested(struct_0 **ptr3)
{
    struct_2 *addr;  // eax
    struct_2 *ptr;  // esi
    unsigned int p[2];  // eax

    addr = malloc(8);
    *(ptr3) = addr;
    if (!addr)
        return 4294967295;
    ptr = addr;
    addr->field_0 = 10;
    p = malloc(8);
    ptr->field_4 = p;
    if (!p)
    {
        free(ptr);
        return 4294967294;
    }
    p[0] = 20;
    p[1] = 0;
    return 0;
}


// Function: linked_list_heap at 0x4016f7
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int linked_list_heap()
{
    struct_0 *p;  // eax
    unsigned int v3;  // ebp
    struct_0 *ptr;  // eax
    struct_0 *addr;  // edi
    unsigned int v4;  // esi
    struct_0 *v5;  // edi
    char result;  // al
    struct_0 *ptr3;  // edi
    unsigned int v9;  // esi
    struct_0 *ptr4;  // [bp-0x14], Other Possible Types: char

    p = malloc(8);
    if (p)
    {
        v3 = 0;
        v4 = 0;
        ptr4 = NULL;
        v5 = NULL;
        do
        {
            p->field_0 = v3;
            p->field_4 = NULL;
            if (v5)
                ptr4->field_4 = p;
            else
                v5 = p;
            if (v4 == 0xfffffffc)
            {
                result = 1;
                goto LABEL_401798;
            }
        } while ((ptr4 = p, p = malloc(8), v4 -= 1, v3 += 10, p));
        result = ~(v4) < 4;
    }
    else
    {
        result = 1;
        v5 = NULL;
    }
    if (v5)
    {
        ptr4 = result;
        do
        {
            ptr3 = v5;
            free(ptr3);
            v5 = ptr3->field_4;
        } while (ptr3->field_4);
        v5 = NULL;
        result = ptr4;
    }
    else
    {
        v5 = NULL;
    }
LABEL_401798:
    if (result)
        return 4294967295;
    v9 = 0;
    if (!v5)
        return 0;
    ptr = v5;
    do
    {
        v9 += ptr->field_0;
        ptr = ptr->field_4;
    } while (ptr->field_4);
    if (!v5)
        return v9;
    do
    {
        addr = v5;
        free(addr);
        v5 = addr->field_4;
    } while (addr->field_4);
    return v9;
}


// Function: create_tree_node at 0x4017d1
unsigned int [3] create_tree_node(unsigned int a0)
{
    unsigned int ptr[3];  // eax

    ptr = malloc(12);
    if (!ptr)
        return ptr;
    ptr[0] = a0;
    ptr[1] = 0;
    ptr[2] = 0;
    return ptr;
}


// Function: tree_heap_traversal at 0x401804
unsigned int tree_heap_traversal()
{
    return 60;
}


// Function: memory_leak at 0x40180a
unsigned int memory_leak(unsigned int i)
{
    unsigned int ptr;  // eax
    unsigned int idx;  // ecx

    ptr = malloc(i * 4);
    if (!ptr)
        return 4294967295;
    if (i <= 0)
        return *((int *)(ptr + ((i >> 31) + i & 4294967294) * 2));
    idx = 0;
    do
    {
        *((unsigned int *)(ptr + idx * 4)) = idx;
        idx += 1;
    } while (i != idx);
    return *((int *)(ptr + ((i >> 31) + i & 4294967294) * 2));
}


// Function: dangling_pointer at 0x401856
unsigned int dangling_pointer()
{
    unsigned int *ptr;  // eax
    unsigned int v0;  // [bp-0x18]

    ptr = malloc(4);
    if (!ptr)
        return 4294967295;
    v0 = 42;
    printf("value before free: %d\n");
    free(ptr);
    return *(ptr);
}


// Function: double_free at 0x4018a4
unsigned int double_free(unsigned int *a0)
{
    if (!a0)
        return 4294967294;
    return *(a0);
}


// Function: heap_overflow at 0x4018b5
unsigned int heap_overflow()
{
    unsigned int *ptr;  // eax
    unsigned int i;  // ecx
    unsigned int *ptr;  // edx

    ptr = malloc(40);
    if (!ptr)
        return 4294967295;
    i = 0;
    ptr = ptr;
    do
    {
        *(ptr) = i;
        i += 100;
        ptr += 1;
    } while (i != 1100);
    free(ptr);
    return *(ptr);
}


// Function: test_heap_memory at 0x4018ff
typedef struct struct_0 {
    char padding_0[4];
    void* field_4;
} struct_0;

extern char g_40326d;
extern char g_40327d;
extern char g_4032a2;
extern char g_4032e3;
extern char g_4035df;

unsigned int test_heap_memory()
{
    unsigned int ptr;  // eax
    unsigned int idx;  // ecx
    unsigned int pid;  // eax
    char *v0;  // [bp-0x1c]
    unsigned int v1[1];  // [bp-0x10]
    struct_0 *result;  // [bp-0xc]

    puts(&g_4035df);
    heap_basic(10);
    printf("HEAP-L2-01 (heap_basic): %d\n");
    heap_calloc(5);
    printf("HEAP-L2-02 (heap_calloc): %d\n");
    heap_realloc();
    printf("HEAP-L2-03 (heap_realloc): %d\n");
    heap_array(10);
    printf("HEAP-L2-04 (heap_array): %d\n");
    printf("HEAP-L2-05 (heap_struct): %d\n");
    result = NULL;
    heap_nested(&result);
    printf("HEAP-L2-06 (heap_nested): %d\n");
    if (result)
    {
        free(result->field_4);
        free(result);
    }
    linked_list_heap();
    printf("HEAP-L3-01 (linked_list_heap): %d\n");
    printf("HEAP-L3-02 (tree_heap_traversal): %d\n");
    ptr = malloc(20);
    if (ptr)
    {
        idx = 0;
        do
        {
            *((unsigned int *)(ptr + idx * 4)) = idx;
            idx += 1;
        } while (idx != 5);
    }
    printf("HEAP-L3-03 (memory_leak): %d\n");
    printf("HEAP-L3-04 (dangling_pointer): ");
    pid = fork();
    if (!pid)
    {
        dangling_pointer();
        printf(&g_40326d);
        exit(0); /* do not return */
    }
    else if (!((char)_ccall(14, 15, pid, 0, 0)))
    {
        waitpid(pid, &v1, 0);
        if (!((char)*(v1) & 127))
        {
            v0 = &g_40327d;
        }
        else if ((*(v1) & 127) * 0x1000000 + 0x1000000 >= 0x2000000)
        {
            v0 = &g_4032a2;
        }
        else
        {
            return *(v1) & 127;
        }
        return printf(v0);
    }
    else
    {
        return (unsigned int)perror(&g_4032e3);
    }
}


// Function: global_var_access at 0x401aeb
extern unsigned int global_counter;

unsigned int global_var_access()
{
    global_counter = global_counter + 1;
    return global_counter + 1;
}


// Function: global_var_read at 0x401b05
extern unsigned int global_counter;

unsigned int global_var_read()
{
    return global_counter * 2;
}


// Function: global_array_access at 0x401b1a
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int global_array_access(unsigned int a0)
{
    if (a0 <= 9)
        return *((int *)&(&_GLOBAL_OFFSET_TABLE_)[10684 + 4 * a0]);
    return 4294967295;
}


// Function: static_local at 0x401b3b
extern unsigned int static_local.counter;

unsigned int static_local(unsigned int a0)
{
    unsigned int v0;  // edx

    v0 = static_local.counter + 1;
    if (a0)
        v0 = 0;
    static_local.counter = v0;
    return v0;
}


// Function: call_static_func at 0x401b5f
int call_static_func(unsigned int a0)
{
    return a0 * 2 + 1;
}


// Function: access_extern_global at 0x401b67
extern unsigned int extern_global_var;

int access_extern_global()
{
    return extern_global_var + 100;
}


// Function: call_extern_func at 0x401b7f
void call_extern_func()
{
    extern_function(5);
    return;
}


// Function: read_const_data at 0x401ba0
typedef struct struct_0 {
    char padding_0[4];
    char field_4;
} struct_0;

extern struct_0 *const_string;

int read_const_data()
{
    return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401bba
unsigned int access_bss_var()
{
    return 0;
}


// Function: access_bss_buffer at 0x401bbd
unsigned int access_bss_buffer()
{
    return 0;
}


// Function: global_struct_access at 0x401bc0
unsigned int global_struct_access()
{
    return 30;
}


// Function: set_file_static at 0x401bc6
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
    file_scope_static = a0;
    return &_GLOBAL_OFFSET_TABLE_;
}


// Function: get_file_static at 0x401bdd
extern unsigned int file_scope_static;

int get_file_static()
{
    return file_scope_static;
}


// Function: set_global_callback at 0x401bf0
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
    global_func_ptr = a0;
    return &_GLOBAL_OFFSET_TABLE_;
}


// Function: call_global_callback at 0x401c07
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *global_func_ptr;

unsigned int call_global_callback(unsigned int a0)
{
    return (!global_func_ptr ? 4294967295 : global_func_ptr(a0));
}


// Function: global_heap_store at 0x401c34
extern unsigned int global_heap_ptr;

unsigned int global_heap_store(unsigned int *a0)
{
    global_heap_ptr = a0;
    if (!a0)
        return 4294967295;
    return *(a0);
}


// Function: static_complex_init at 0x401c55
unsigned int static_complex_init()
{
    return 15;
}


// Function: tls_access at 0x401c5b
unsigned int tls_access(unsigned int a0)
{
    return a0 * 2;
}


// Function: init_order_test at 0x401c62
unsigned int init_order_test()
{
    return 20;
}


// Function: test_static_global at 0x401c68
typedef struct struct_0 {
    char padding_0[4];
    char field_4;
} struct_0;

extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_4035fd;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;
extern unsigned int global_heap_ptr;
extern struct_0 *ptr;
extern unsigned int static_local.counter;

unsigned int test_static_global()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x10]

    puts(&g_4035fd);
    global_counter = global_counter + 1;
    v0 = global_counter;
    printf("STM-L1-01 (global_var_access): %d\n");
    v0 = global_counter * 2;
    printf("STM-L1-01 (global_var_read): %d\n");
    v0 = 5;
    printf("STM-L1-02 (global_array_access): %d\n");
    static_local.counter = 1;
    v0 = 1;
    printf("STM-L1-03 (static_local): %d\n");
    static_local.counter = static_local.counter + 1;
    v0 = static_local.counter;
    printf("STM-L1-03 (static_local): %d\n");
    v0 = 11;
    printf("STM-L1-04 (call_static_func): %d\n");
    v0 = extern_global_var + 100;
    printf("STM-L2-01 (access_extern_global): %d\n");
    v0 = extern_function(5);
    printf("STM-L2-02 (call_extern_func): %d\n");
    v0 = ptr->field_4 + 42;
    printf("STM-L2-03 (read_const_data): %d\n");
    v0 = 0;
    printf("STM-L2-04 (access_bss_var): %d\n");
    v0 = 0;
    printf("STM-L2-04 (access_bss_buffer): %d\n");
    v0 = 30;
    printf("STM-L2-05 (global_struct_access): %d\n");
    file_scope_static = 50;
    v0 = 50;
    printf("STM-L2-06 (file_static): %d\n");
    global_func_ptr = double_value;
    v0 = 10;
    printf("STM-L2-07 (global_func_ptr): %d\n");
    v1 = 100;
    global_heap_ptr = &v1;
    v0 = 100;
    printf("STM-L2-08 (global_heap_store): %d\n");
    v0 = 15;
    printf("STM-L2-09 (static_complex_init): %d\n");
    v0 = 20;
    printf("STM-L3-01 (tls_access): %d\n");
    v0 = 20;
    return printf("STM-L3-02 (init_order_test): %d\n");
}


// Function: double_value at 0x401e5b
unsigned int double_value(unsigned int a0)
{
    return a0 * 2;
}


// Function: memop_memset at 0x401e62
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v1;
    if (!a0)
    {
        return 4294967295;
    }
    else if (n)
    {
        memset(a0, a2, n);
        return *(a0);
    }
    else
    {
        return 4294967295;
    }
}


// Function: memop_memcpy at 0x401e9e
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n)
{
    if (!a0)
    {
        return 4294967295;
    }
    else if (!a1)
    {
        return 4294967295;
    }
    else if (n)
    {
        memcpy(a0, a1, n);
        return *((int *)(-4 + (n & 0xfffffffc) + (char *)a0));
    }
    else
    {
        return 4294967295;
    }
}


// Function: memop_memmove at 0x401ee1
typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

unsigned int memop_memmove(struct_0 *a0, unsigned int a1)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v1;
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


// Function: memop_memcmp at 0x401f20
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v1;
    if (!a0)
    {
        return 0;
    }
    else if (!a1)
    {
        return 0;
    }
    else if (a2)
    {
        v2 = memcmp(a0, a1, a2);
        if (v2 > 0)
            return 1;
        return -(v2);
    }
    else
    {
        return 0;
    }
}


// Function: memop_bzero at 0x401f70
unsigned int memop_bzero(char *a0, unsigned int n)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v1;
    if (!a0)
        return 4294967295;
    memset(a0, 0, n);
    return *(a0);
}


// Function: memop_bcopy at 0x401fa7
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v1;
    if (!a0)
    {
        return 4294967295;
    }
    else if (!a1)
    {
        return 4294967295;
    }
    else if (n)
    {
        memmove(a1, a0, n);
        return *(a1);
    }
    else
    {
        return 4294967295;
    }
}


// Function: memop_unaligned_access at 0x401fe8
typedef struct struct_0 {
    char padding_0[1];
    unsigned int field_1;
} struct_0;

unsigned int memop_unaligned_access(struct_0 *a0)
{
    if (!a0)
        return 4294967295;
    return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401ff8
unsigned int memop_memory_barrier(unsigned int *a0)
{
    char v0;  // [bp+0x0]

    if (!a0)
        return 4294967295;
    atomic_exchange(&v0, *((int *)&v0));
    return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x40200e
extern char g_403621;

unsigned int test_memory_op_functions()
{
    char v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x14]
    char v2[1];  // [bp-0x10]
    char v3[3];  // [bp-0xf]
    char v4[4];  // [bp-0xc]
    unsigned short v5;  // [bp-0x8]

    puts(&g_403621);
    printf("MEMOP-L2-01: %d\n");
    printf("MEMOP-L2-02: %d\n");
    strncpy(&v4, "oWor", 4);
    strncpy(&v2, "Hell", 4);
    v5 = 25708;
    strncpy(&v3, "HelloWorl", 9);
    printf("MEMOP-L2-03: %c\n");
    printf("MEMOP-L2-04: %d\n");
    printf("MEMOP-L2-05: %d\n");
    printf("MEMOP-L2-06: %d\n");
    printf("MEMOP-L3-01: 0x%x\n");
    v1 = 5;
    atomic_exchange(&v0, *((int *)&v0));
    return printf("MEMOP-L3-02: %d\n");
}


// Function: main at 0x402128
unsigned int main()
{
    char v0;  // [bp-0xc]

    test_stack_memory(*((int *)&v0));
    test_heap_memory();
    test_static_global();
    test_memory_op_functions();
    return 0;
}


// Function: sub_402153 at 0x402153
void sub_402153(unsigned int a0)
{
    extern_function();
    return;
}


// Function: extern_function at 0x402154
unsigned int extern_function(unsigned int a0)
{
    return a0 * 3;
}


// Function: sub_40215c at 0x40215c
void sub_40215c()
{
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x402160
typedef struct struct_0 {
    char padding_0[15775];
    struct struct_1 *field_3d9f;
    struct struct_1 *field_3da3;
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


// Function: sub_4021a2 at 0x4021a2
void sub_4021a2()
{
}


// Function: _fini at 0x4021ac
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

