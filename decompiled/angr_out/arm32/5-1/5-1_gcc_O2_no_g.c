// Angr Decompilation of 5-1_gcc_O2_no_g
// Platform: ARMEL

// Function: _init at 0x10920
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_1092c at 0x1092c
extern unsigned int g_22008;

int sub_1092c()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_22008;
}


// Function: _Z18test_cpp_exceptionv at 0x10a60
extern unsigned int CXXABI_1.3::_ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
    unsigned int *ptr;  // r0
    unsigned int flag1;  // r1
    unsigned int v14;  // r2
    unsigned int v15;  // r1
    unsigned int v16;  // r0
    unsigned int v6;  // r2
    unsigned int v7;  // r3
    unsigned int result;  // r4
    unsigned int *v10;  // r0
    unsigned int v11;  // r0
    unsigned int v13;  // r3
    char v0;  // [bp-0x10]
    char v1;  // [bp-0xc]
    char v2;  // [bp-0x8]
    char v3;  // [bp-0x4]

    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    __cxa_throw(ptr, 0x21e98, 0, 42, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
    if (flag1 != 1)
    {
        if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
            goto LABEL_10a90;
    }
    else
    {
        if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
        {
LABEL_10a90:
            result = flag1;
            __cxa_end_catch(__cxa_rethrow(__cxa_begin_catch(), flag1, v6, v7), flag1, v6, v7);
        }
    }
    if (result == 1)
    {
        v10 = __cxa_begin_catch();
        __cxa_end_catch(v10, flag1, v6, *(v10));
        v11 = __cxa_throw(__cxa_allocate_exception(1), 0x1164c, 0, v7);
        if (flag1 == 2)
        {
            v16 = __cxa_begin_catch(v11, flag1, v14, v13);
            __cxa_end_catch(v16, flag1, v6, v7);
            return;
        }
        else if (flag1 == 3)
        {
            __cxa_end_catch(__cxa_begin_catch(), flag1, v6, v7);
            return;
        }
    }
    v11 = __cxa_end_cleanup();
    __cxa_end_catch(__cxa_begin_catch(v11, v15, v14, v13), flag1, v6, v7);
    return;
}


// Function: main at 0x10b18
unsigned int main()
{
    test_cpp_oo_features();
    return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10b28
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
    unsigned int v0;  // r0

    std::ios_base::Init::Init(0x22090);
    v0 = __aeabi_atexit(0x22090, std::ios_base::Init::~Init, 0x22084);
    return __aeabi_atexit(0x22090, std::ios_base::Init::~Init, 0x22084);
}


// Function: _start at 0x10b58
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_10b90 at 0x10b90
void sub_10b90()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x10b9c
extern unsigned int g_2207c;

int call_weak_fn()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    if (g_2207c)
        goto LABEL_10bb4;
    return v0;
LABEL_10bb4:
    v1 = __gmon_start__();
    return __gmon_start__();
}


// Function: deregister_tm_clones at 0x10bc0
extern char __bss_start;

int deregister_tm_clones()
{
    if (!(1))
        goto LABEL_10bd0;
    return 139400;
LABEL_10bd0:
    if (!(1))
        goto LABEL_10bdc;
    return 139400;
LABEL_10bdc:
}


// Function: register_tm_clones at 0x10bec
extern char __bss_start;

int register_tm_clones()
{
    if (0)
        goto LABEL_10c08;
    return 139400;
LABEL_10c08:
    if (!(1))
        goto LABEL_10c14;
    return 139400;
LABEL_10c14:
}


// Function: __do_global_dtors_aux at 0x10c24
extern char __bss_start;

unsigned int __do_global_dtors_aux(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    if (!__bss_start)
        goto LABEL_10c38;
    return a0;
LABEL_10c38:
    v0 = deregister_tm_clones();
    __bss_start = 1;
    return v0;
}


// Function: frame_dummy at 0x10c4c
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: _Z20test_cpp_member_funcv at 0x10c50
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_member_func()
{
    unsigned int v4;  // lr
    char v0[31];  // [bp-0x2c]
    char result;  // [bp-0xd]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = GLIBC_2.4::__stack_chk_guard;
    strncpy(&v0, "Test", 31);
    result = 0;
    strlen(&v0);
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return;
}


// Function: _Z20test_cpp_constructorv at 0x10cbc
void test_cpp_constructor()
{
    return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cdc
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    goto *((int *)*((int *)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x10ce8
void test_cpp_virtual_func()
{
    return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10cf0
void test_cpp_multiple_inheritance()
{
    return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x10cf8
void test_cpp_diamond_inheritance()
{
    return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10d04
void test_cpp_operator_overload()
{
    return;
}


// Function: _Z22test_cpp_template_funcv at 0x10d0c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_template_func()
{
    unsigned int v3;  // r0
    unsigned int v4;  // r1
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    v2 = GLIBC_2.4::__stack_chk_guard;
    template_max<int>(3, 7);
    v3 = template_max<double>(0, 0x40040000, 0, 0x3ff80000);
    v0 = 10;
    v1 = 20;
    template_swap<int>(&v0, &v1, 10, 20);
    __aeabi_d2iz(v3, v4);
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return;
}


// Function: _Z23test_cpp_template_classv at 0x10db4
void test_cpp_template_class()
{
    return;
}


// Function: _Z15test_cpp_lambdav at 0x10dbc
void test_cpp_lambda()
{
    return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x10dc4
void test_cpp_smart_ptr()
{
    return;
}


// Function: _Z13test_cpp_rttiv at 0x10dd0
typedef struct struct_0 {
    char padding_0[4];
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

extern char _ZTI12RTTIDerivedA;
extern char g_1162c;
extern char g_11640;

void test_cpp_rtti()
{
    void* *ptr;  // r5
    void* *p;  // r4
    struct_0 *v2;  // r0
    unsigned int result;  // r3
    char *cur;  // r0

    ptr = operatornew(4);
    *(ptr) = 71212;
    p = operatornew(4);
    v2 = (int)(*(ptr))[4];
    *(p) = 71232;
    result = (unsigned int)std::type_info::operator==(v2, 0x115fc);
    if (result)
    {
        if (!armg_calculate_condition(2, result, 0, 0))
            goto LABEL_10e26;
LABEL_10e25:
    }
    else
    {
        if (armg_calculate_condition(2, result, 0, 0))
            goto LABEL_10e25;
LABEL_10e26:
    }
    cur = *((int *)((int)(*(ptr))[4] + 4));
    if (*(cur) == 42)
        cur += 1;
    strlen(cur);
    (int)(*(ptr))[4](ptr);
    (int)(*(p))[4](p);
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x10ec8
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char g_11474;
extern char g_11494;
extern char g_114b0;
extern char g_114cc;
extern char g_114e8;
extern char g_11508;
extern char g_11524;
extern char g_11540;
extern char g_1155c;
extern char g_11578;
extern char g_11598;
extern char g_115b8;

void test_cpp_oo_features()
{
    unsigned int v9;  // r0
    char v0[1][31];  // [bp-0x2c]
    char result;  // [bp-0xd]
    unsigned int v2;  // [bp-0xc]

    v2 = GLIBC_2.4::__stack_chk_guard;
    puts("=== ");
    strncpy(&v0, "Test", 31);
    result = 0;
    __printf_chk(1, 0x11474, strlen(&v0) + 4700);
    __printf_chk(1, 0x11494, (unsigned int)test_cpp_constructor());
    __printf_chk(1, 0x114b0, 42);
    __printf_chk(1, 0x114cc, 71);
    __printf_chk(1, 0x114e8, (unsigned int)test_cpp_diamond_inheritance());
    __printf_chk(1, 0x11508, 22);
    __printf_chk(1, 0x11524, (unsigned int)test_cpp_template_func());
    __printf_chk(1, 0x11540, 16);
    __printf_chk(1, 0x1155c, 85);
    __printf_chk(1, 0x11578, (unsigned int)test_cpp_exception());
    __printf_chk(1, 0x11598, (unsigned int)test_cpp_smart_ptr());
    v9 = (unsigned int)test_cpp_rtti();
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    __printf_chk(1, 0x115b8, v9);
    return;
}


// Function: _ZN4Base12virtual_funcEi at 0x11048
void Base::virtual_func(void* this, int arg_0)
{
    return;
}


// Function: _ZNK4Base7getNameEv at 0x11050
void Base::getName(void* this)
{
    return;
}


// Function: _ZN4BaseD1Ev at 0x1105c
int Base::~Base(void* this)
{
    return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x11060
void Derived::virtual_func(void* this, int arg_0)
{
    return;
}


// Function: _ZNK7Derived7getNameEv at 0x1106c
void Derived::getName(void* this)
{
    return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x11078
void MultiDerived::funcA(void* this)
{
    return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11080
void MultiDerived::funcB(void* this)
{
    return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x11088
unsigned int non-virtual thunk to MultiDerived::funcB()()
{
    return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x11090
void MiddleA::func(void* this)
{
    return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x110a8
int thunk to MiddleA::func()(void* *a0)
{
    return *((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x110cc
void MiddleB::func(void* this)
{
    return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x110e4
int thunk to MiddleB::func()(void* *a0)
{
    return *((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x11108
void DiamondDerived::func(void* this)
{
    return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11120
int thunk to DiamondDerived::func()(void* *a0)
{
    return *((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11144
int non-virtual thunk to DiamondDerived::func()(void* a0)
{
    return *((int *)(-4 + (char *)a0 + *((int *)((int)a0[8] - 12)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x1115c
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11164
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x1116c
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11170
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11174
int DiamondDerived::~DiamondDerived(void* this)
{
    return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x11178
void* * thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
    return (char *)a0 + (*(a0))[16];
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11188
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11190
int MultiDerived::~MultiDerived(void* this)
{
    return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11194
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
    return a0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x1119c
int Derived::~Derived(void* this)
{
    return;
}


// Function: _ZN4BaseD0Ev at 0x111a0
int Base::~Base(void* this)
{
    operatordelete(this, 4);
    return;
}


// Function: _ZN7DerivedD0Ev at 0x111b8
int Derived::~Derived(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x111d0
int MultiDerived::~MultiDerived(void* this)
{
    operatordelete(this, 16);
    return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x111e8
void* non-virtual thunk to MultiDerived::~MultiDerived()(void* a0)
{
    operatordelete(a0 - 8, 16);
    return a0 - 8;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x11204
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    operatordelete(this, 4);
    return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x1121c
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    operatordelete(this, 4);
    return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11234
int DiamondDerived::~DiamondDerived(void* this)
{
    operatordelete(this, 24);
    return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x1124c
void* * thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
    void* *v0;  // r4

    v0 = (char *)a0 + (*(a0))[16];
    operatordelete(v0, 24);
    return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11270
void* non-virtual thunk to DiamondDerived::~DiamondDerived()(void* a0)
{
    operatordelete(a0 - 8, 24);
    return a0 - 8;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x1128c
int template_max<int>(int arg_0, int arg_1)
{
    if (arg_0 >= arg_1)
        return arg_0;
    return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x11298
double template_max<double>()
{
    unsigned int v6;  // lr
    unsigned int v7;  // r8
    unsigned int v8;  // r7
    unsigned int v9;  // r6
    unsigned int v10;  // r5
    unsigned int v11;  // r4
    unsigned int result;  // r0
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x8]
    unsigned int v5;  // [bp-0x4]

    v5 = v6;
    v4 = v7;
    v3 = v8;
    v2 = v9;
    v1 = v10;
    v0 = v11;
    result = __aeabi_dcmpgt();
    if (!result)
    {
        if (!armg_calculate_condition(2, result, 0, 0))
            return;
    }
    else
    {
        if (!armg_calculate_condition(2, result, 0, 0))
            return;
    }
    return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x112c8
int template_swap<int>(unsigned int *ptr)
{
    unsigned int v0;  // r3
    unsigned int *p;  // r1

    v0 = *(ptr);
    *(ptr) = *(p);
    *(p) = v0;
    return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x112dc
int Container<int>::Container(void* ptr)
{
    *((unsigned int *)&ptr[40]) = 0;
    return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x112e8
void Container<int>::push(void* ptr, int arg_0)
{
    unsigned int index;  // r3
    unsigned int v1;  // r2

    index = (int)ptr[40];
    if (index <= 9)
        v1 = index + 1;
    *((unsigned int *)&ptr[40]) = v1;
    *((int *)((char *)ptr + 4 * index)) = arg_0;
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11300
void Container<int>::get(void* this, int arg_0)
{
    if (arg_0 < 0)
        return;
    return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11324
void Container<int>::getSize(void* this)
{
    return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x1132c
int Container<double>::Container(void* ptr)
{
    *((unsigned int *)&ptr[80]) = 0;
    return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x11338
void Container<double>::push(void* p)
{
    unsigned int v0;  // r3
    unsigned int ptr[2];  // r3
    unsigned int v2;  // r2
    unsigned int v3;  // r3

    v0 = (int)p[80];
    if (9 >= v0)
    {
        ptr = p + v0 * 8;
        *((unsigned int *)&p[80]) = v0 + 1;
        ptr[0] = v2;
        ptr[1] = v3;
    }
    return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x11368
void Container<double>::get(void* this, int arg_0)
{
    if (arg_0 < 0)
        return;
    return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11394
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _fini at 0x1139c
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

