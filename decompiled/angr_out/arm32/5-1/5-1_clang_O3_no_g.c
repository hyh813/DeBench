// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: ARMEL

// Function: _init at 0x400848
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_400854 at 0x400854
extern unsigned int g_412008;

int sub_400854()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_412008;
}


// Function: $a.27 at 0x400958
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

int $a.27()
{
    unsigned int v0;  // r0

    std::ios_base::Init::Init(&_ZStL8__ioinit);
    v0 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
    return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: _start at 0x400994
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_4009cc at 0x4009cc
void sub_4009cc()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4009d8
extern unsigned int g_412070;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_412070)
        goto LABEL_4009f0;
    return v0;
LABEL_4009f0:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x4009fc
extern char __bss_start;
extern char g_41206c;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_400a1c;
    return &__bss_start;
LABEL_400a1c:
    if (*((int *)&g_41206c))
        goto LABEL_400a2c;
    return &__bss_start;
LABEL_400a2c:
    goto *((int *)&g_41206c);
}


// Function: register_tm_clones at 0x400a40
extern char __bss_start;
extern unsigned int g_412074;

int register_tm_clones()
{
    if (0)
        goto LABEL_400a6c;
    return &__bss_start;
LABEL_400a6c:
    if (g_412074)
        goto LABEL_400a7c;
    return &__bss_start;
LABEL_400a7c:
    goto g_412074;
}


// Function: __do_global_dtors_aux at 0x400a90
extern char __bss_start;
extern unsigned int __dso_handle;
extern unsigned int g_412078;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!__bss_start)
        goto LABEL_400aac;
    return v2;
LABEL_400aac:
    v1 = v3;
    v0 = v4;
    if (!g_412078)
    {
        v5 = deregister_tm_clones();
        __bss_start = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x400af8
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: _Z20test_cpp_member_funcv at 0x400afc
void test_cpp_member_func()
{
    unsigned int v0;  // [bp-0x2c]
    char v1[4];  // [bp-0x28]
    unsigned int result;  // [bp-0x24]
    unsigned int flag1;  // [bp-0x20]
    char v4;  // [bp-0x1c]
    char v5;  // [bp-0xc]

    strncpy(v1, "Test", 4);
    result = 0;
    flag1 = 0;
    memset(&v4, 0, 16);
    memset(&v5, 0, 4);
    v0 = 10;
    strlen(&v1);
    return;
}


// Function: _Z20test_cpp_constructorv at 0x400b64
void test_cpp_constructor()
{
    return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400b80
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    goto *((int *)*((int *)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x400b8c
void test_cpp_virtual_func()
{
    return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x400b94
void test_cpp_multiple_inheritance()
{
    return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x400b9c
void test_cpp_diamond_inheritance()
{
    return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x400ba8
void test_cpp_operator_overload()
{
    return;
}


// Function: _Z22test_cpp_template_funcv at 0x400bb0
void test_cpp_template_func()
{
    return;
}


// Function: _Z23test_cpp_template_classv at 0x400bb8
void test_cpp_template_class()
{
    return;
}


// Function: _Z15test_cpp_lambdav at 0x400bc0
void test_cpp_lambda()
{
    return;
}


// Function: _Z18test_cpp_exceptionv at 0x400bc8
extern char _ZTIi;

void test_cpp_exception()
{
    unsigned int *ptr;  // r0
    unsigned int v5;  // r3
    unsigned int v6;  // r1
    unsigned int v7;  // r4
    char v0;  // [bp-0x10]
    char v1;  // [bp-0xc]
    char v2;  // [bp-0x8]
    char v3;  // [bp-0x4]

    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    __cxa_throw(ptr, &_ZTIi, 0, v5, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
    if (v6 != 3)
    {
        if (!armg_calculate_condition(18, v6, 3, 0))
            goto LABEL_400c76;
LABEL_400c75:
        if ((char)armg_calculate_condition(18, (armg_calculate_condition(18, v6, 3, 0) ? v6 : v6), (armg_calculate_condition(18, v6, 3, 0) ? 2 : 3), (armg_calculate_condition(18, v6, 3, 0) ? 0 : 0)))
            __cxa_end_cleanup();
    }
    else
    {
        if (armg_calculate_condition(18, v6, 3, 0))
            goto LABEL_400c75;
LABEL_400c76:
        if ((char)armg_calculate_condition(18, (armg_calculate_condition(18, v6, 3, 0) ? v6 : v6), (armg_calculate_condition(18, v6, 3, 0) ? 2 : 3), (armg_calculate_condition(18, v6, 3, 0) ? 0 : 0)))
            __cxa_end_cleanup();
    }
    __cxa_begin_catch();
    __cxa_end_catch(0 + v7 * 2);
    return;
}


// Function: sub_400bf4 at 0x400bf4
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_400bf4(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // r2
    unsigned int v2;  // r3
    unsigned int v4;  // r2
    unsigned int v5;  // r3

    if (a1 == 1)
    {
        __cxa_rethrow(__cxa_begin_catch(a0), a1, v1, v2);
    }
    else if (a1 == 1)
    {
        __cxa_end_catch(__cxa_begin_catch(a0), a1, v4, v5);
        __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0, v5);
    }
}


// Function: sub_400c28 at 0x400c28
int sub_400c28(unsigned int a0, unsigned int a1)
{
    __cxa_end_catch();
    if (a1 != 1)
        goto LABEL_0x400c98;
    else
        goto LABEL_0x400c40;
}


// Function: _Z18test_cpp_smart_ptrv at 0x400ca4
void test_cpp_smart_ptr()
{
    return;
}


// Function: _Z13test_cpp_rttiv at 0x400cb0
typedef struct struct_0 {
    char padding_0[4];
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern char g_411ed8;
extern char g_411eec;

void test_cpp_rtti()
{
    unsigned int v5;  // lr
    unsigned int v6;  // r7
    unsigned int v7;  // r6
    unsigned int v8;  // r5
    unsigned int v9;  // r4
    void* p;  // r4
    struct_0 **ptr;  // r5
    unsigned int result;  // r0
    unsigned int flag1;  // r0
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x4]

    v4 = v5;
    v3 = v6;
    v2 = v7;
    v1 = v8;
    v0 = v9;
    p = operatornew(4);
    *((char **)p) = &g_411ed8;
    ptr = operatornew(4);
    *(ptr) = &g_411eec;
    result = __dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
    flag1 = __dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
    operatordelete(p);
    *(ptr)->field_4(ptr, *(ptr)->field_4);
    if (!flag1)
        return;
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d7c
typedef struct struct_0 {
    char padding_0[4];
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern char g_401201;
extern char g_40121f;
extern char g_40123b;
extern char g_401257;
extern char g_401273;
extern char g_401290;
extern char g_4012ac;
extern char g_4012c8;
extern char g_4012e4;
extern char g_401300;
extern char g_40131d;
extern char g_40133a;
extern char g_401358;
extern char g_411ed8;
extern char g_411eec;

void test_cpp_oo_features()
{
    unsigned int v13;  // lr
    unsigned int v14;  // r7
    unsigned int flag5;  // r0
    unsigned int v24;  // r0
    unsigned int v15;  // r6
    unsigned int v16;  // r5
    unsigned int v17;  // r4
    void* p;  // r4
    struct_0 **ptr;  // r5
    unsigned int v22;  // r0
    unsigned int v0;  // [bp-0x3c]
    char v1;  // [bp-0x38]
    unsigned int result;  // [bp-0x34]
    unsigned int flag1;  // [bp-0x30]
    char v4;  // [bp-0x2c]
    unsigned short flag3;  // [bp-0x1c]
    char flag2;  // [bp-0x1a]
    char flag4;  // [bp-0x19]
    unsigned int v8;  // [bp-0x18]
    unsigned int v9;  // [bp-0x14]
    unsigned int v10;  // [bp-0x10]
    unsigned int v11;  // [bp-0xc]
    unsigned int v12;  // [bp-0x4]

    v12 = v13;
    v11 = v14;
    v10 = v15;
    v9 = v16;
    v8 = v17;
    puts(&g_401358);
    strncpy(&v1, "Test", 4);
    result = 0;
    flag1 = 0;
    memset(&v4, 0, 16);
    flag2 = 0;
    flag3 = 0;
    v0 = 10;
    flag4 = 0;
    printf(&g_401201, strlen(&v1) + 4700);
    printf(&g_40121f, _ZN14LifecycleClass14instance_countE * 1001 + 21);
    printf(&g_40123b, 42);
    printf(&g_401257, 71);
    printf(&g_401273, 650);
    printf(&g_401290, 22);
    printf(&g_4012ac, 39);
    printf(&g_4012c8, 16);
    printf(&g_4012e4, 85);
    printf(&g_401300, (unsigned int)test_cpp_exception());
    printf(&g_40131d, 703);
    p = operatornew(4);
    *((char **)p) = &g_411ed8;
    ptr = operatornew(4);
    *(ptr) = &g_411eec;
    v22 = __dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
    flag5 = __dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
    operatordelete(p);
    *(ptr)->field_4(ptr, *(ptr)->field_4);
    v24 = (!v22 ? 30 : 130);
    if (flag5)
        v24 += 200;
    printf(&g_40133a, v24 + 14);
    return;
}


// Function: main at 0x400fb8
unsigned int main()
{
    test_cpp_oo_features();
    return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x400fcc
int template_max<int>(int arg_0, int arg_1)
{
    if (arg_0 > arg_1)
        return arg_0;
    return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x400fd8
double template_max<double>()
{
    unsigned int v5;  // lr
    unsigned int v6;  // r7
    unsigned int v7;  // r6
    unsigned int v8;  // r5
    unsigned int v9;  // r4
    unsigned int result;  // r0
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x4]

    v4 = v5;
    v3 = v6;
    v2 = v7;
    v1 = v8;
    v0 = v9;
    result = __aeabi_dcmpgt();
    if (result)
    {
        if (!armg_calculate_condition(18, result, 0, 0))
            return;
    }
    else
    {
        if (!armg_calculate_condition(18, result, 0, 0))
            return;
    }
    return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x40100c
void template_swap<int>(int &ptr, int &p)
{
    unsigned int v0;  // r2

    v0 = *((int *)ptr);
    *((int *)ptr) = *((int *)p);
    *((unsigned int *)p) = v0;
    return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401020
int Container<int>::Container(void* ptr)
{
    *((unsigned int *)&ptr[40]) = 0;
    return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40102c
void Container<int>::push(void* ptr, int arg_0)
{
    unsigned int index;  // r2
    unsigned int v1;  // r3

    index = (int)ptr[40];
    if (index <= 9)
        v1 = index + 1;
    *((unsigned int *)&ptr[40]) = v1;
    *((int *)((char *)ptr + 4 * index)) = arg_0;
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401044
void Container<int>::get(void* this, int arg_0)
{
    if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
        goto LABEL_401054;
    return;
LABEL_401054:
    return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401064
void Container<int>::getSize(void* this)
{
    return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x40106c
int Container<double>::Container(void* ptr)
{
    *((unsigned int *)&ptr[80]) = 0;
    return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401078
void Container<double>::push(void* ptr)
{
    unsigned int index;  // r12
    unsigned int v1;  // r2
    unsigned int v2;  // r3

    index = (int)ptr[80];
    if (9 >= index)
        goto LABEL_401084;
    return;
LABEL_401084:
    *((unsigned int *)((char *)ptr + 8 * index)) = v1;
    *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
    *((unsigned int *)&ptr[80]) = index + 1;
    return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40109c
void Container<double>::get(void* this, int arg_0)
{
    if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
        goto LABEL_4010b4;
    return;
LABEL_4010b4:
    if (arg_0 >= (int)this[80])
        return;
    return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4010c8
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4010d0
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4010d4
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4010dc
int RTTIBase::~RTTIBase(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4010e0
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4010e4
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: _fini at 0x4010ec
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

