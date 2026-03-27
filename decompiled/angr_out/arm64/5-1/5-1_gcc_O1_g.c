// Angr Decompilation of 5-1_gcc_O1_g
// Platform: AARCH64

// Function: _init at 0x401458
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x401470
extern unsigned long long g_413ef0;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_413ef0;
}


// Function: sub_401484 at 0x401484
int sub_401484()
{
    unsigned int v0;  // x0

    return operatornew[](v0);
}


// Function: _start at 0x401640
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_401670 at 0x401670
void sub_401670()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x401674
extern unsigned long long g_413fe8;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_413fe8)
        return 0;
    v0 = __gmon_start__(g_413fe8);
    return __gmon_start__(g_413fe8);
}


// Function: sub_401688 at 0x401688
void sub_401688()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401690
extern char __bss_start;

long long deregister_tm_clones()
{
    return &__bss_start;
}


// Function: register_tm_clones at 0x4016c0
extern char __bss_start;
extern unsigned long long g_413ff0;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__bss_start;
    }
    else if (g_413ff0)
    {
        goto g_413ff0;
    }
    else
    {
        return &__bss_start;
    }
}


// Function: sub_4016fc at 0x4016fc
void sub_4016fc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401700
extern char __bss_start;
extern unsigned long long __dso_handle;
extern unsigned long long g_413fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __bss_start;
    if ((unsigned int)v2)
        return v2;
    if (g_413fd8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __bss_start = 1;
    return 1;
}


// Function: sub_401748 at 0x401748
long long sub_401748()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x401750
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: _Z20test_cpp_member_funcv at 0x401754
extern char __stack_chk_guard;

void test_cpp_member_func()
{
    char *v0;  // [bp-0x50]
    char v1[31];  // [bp-0x2c]
    char result;  // [bp-0xd]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    strncpy(&v1, "Test", 31);
    result = 0;
    strlen(&v1);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return;
}


// Function: _Z20test_cpp_constructorv at 0x4017cc
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
    unsigned int ptr[5];  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = operatornew[](20);
    ptr[1] = 10;
    ptr[2] = 20;
    ptr[3] = 30;
    ptr[4] = 40;
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
    operatordelete[](ptr);
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
    return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401838
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    (*((long long *)*((long long *)&arg_0)))();
    return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401854
class Base {
} Base;

extern char __stack_chk_guard;
extern Base g_413958;
extern Base g_413988;

void test_cpp_virtual_func()
{
    char *v0;  // [bp-0x40]
    Base v1;  // [bp-0x20]
    Base v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    *((class Base **)&v1) = &g_413958;
    *((class Base **)&v2) = &g_413988;
    v3 = 3;
    call_virtual_func(&v1, 5);
    call_virtual_func(&v2, 5);
    if (v4 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4018e4
void test_cpp_multiple_inheritance()
{
    return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4018ec
extern char __stack_chk_guard;
extern unsigned long long g_413ac8;
extern unsigned long long g_413af8;
extern char g_413b30;

void test_cpp_diamond_inheritance()
{
    char *v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    v1 = &g_413ac8;
    v3 = &g_413b30;
    v2 = &g_413af8;
    v4 = 50;
    thunk to DiamondDerived::func()(&v3, 0);
    v4 = 100;
    thunk to DiamondDerived::func()(&v3);
    if (v5 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401988
void test_cpp_operator_overload()
{
    return;
}


// Function: _Z22test_cpp_template_funcv at 0x401990
extern char __stack_chk_guard;

void test_cpp_template_func()
{
    unsigned long long v6;  // d8
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v1 = v6;
    v4 = *((long long *)&__stack_chk_guard);
    template_max<double>(template_max<int>(3, 7), 7);
    v2 = 10;
    v3 = 20;
    template_swap<int>(&v2, &v3);
    if (v4 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return;
}


// Function: _Z23test_cpp_template_classv at 0x401a38
void test_cpp_template_class()
{
    return;
}


// Function: _Z15test_cpp_lambdav at 0x401a40
void test_cpp_lambda()
{
    return;
}


// Function: _Z18test_cpp_exceptionv at 0x401a48
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern char _ZTIi;

void test_cpp_exception()
{
    unsigned int *ptr;  // x0
    unsigned long long result;  // x1
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    result = &_ZTIi;
    __cxa_throw(ptr, &_ZTIi, 0);
    if (result == 1)
    {
        __cxa_end_catch(__cxa_begin_catch());
        __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
        _Unwind_Resume(); /* do not return */
    }
    _Unwind_Resume(); /* do not return */
}


// Function: _Z18test_cpp_smart_ptrv at 0x401b20
void test_cpp_smart_ptr()
{
    return;
}


// Function: _Z13test_cpp_rttiv at 0x401b28
typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern char g_413b58;
extern char g_413b80;

void test_cpp_rtti()
{
    void* *p;  // x20
    struct_2 **ptr;  // x21
    char *v4;  // x22
    char *v5;  // x0
    char *v0;  // [bp-0x40]
    char v1;  // [bp+0x0]

    v0 = &v1;
    p = operatornew(8);
    *(p) = &g_413b58;
    ptr = operatornew(8);
    *(ptr) = &g_413b80;
    v4 = *((long long *)((long long)(*(p))[8] + 8));
    if (*(v4) != 42)
        v5 = v4;
    else
        v5 = v4 + 1;
    strlen(v5);
    (long long)(*(p))[8](p, (long long)(*(p))[8]);
    *(ptr)->field_8(ptr, *(ptr)->field_8);
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401c8c
extern char g_402148;
extern char g_402170;
extern char g_402190;
extern char g_4021b0;
extern char g_4021d0;
extern char g_4021f0;
extern char g_402210;
extern char g_402230;
extern char g_402250;
extern char g_402270;
extern char g_402290;
extern char g_4022b0;
extern char g_4022d0;

void test_cpp_oo_features()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_402148);
    __printf_chk(1, &g_402170, (unsigned long long)test_cpp_member_func() & 4294967295);
    __printf_chk(1, &g_402190, (unsigned long long)test_cpp_constructor() & 4294967295);
    __printf_chk(1, &g_4021b0, (unsigned long long)test_cpp_virtual_func() & 4294967295);
    __printf_chk(1, &g_4021d0, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
    __printf_chk(1, &g_4021f0, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
    __printf_chk(1, &g_402210, 22);
    __printf_chk(1, &g_402230, (unsigned long long)test_cpp_template_func() & 4294967295);
    __printf_chk(1, &g_402250, 16);
    __printf_chk(1, &g_402270, 85);
    __printf_chk(1, &g_402290, (unsigned long long)test_cpp_exception() & 4294967295);
    __printf_chk(1, &g_4022b0, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
    __printf_chk(1, &g_4022d0, (unsigned long long)test_cpp_rtti() & 4294967295);
    return;
}


// Function: main at 0x401dbc
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_cpp_oo_features();
    return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401dd4
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::ios_base::Init::Init(&_ZStL8__ioinit);
    v2 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
    return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: _ZN4Base12virtual_funcEi at 0x401e18
void Base::virtual_func(void* this, int arg_0)
{
    return;
}


// Function: _ZNK4Base7getNameEv at 0x401e20
void Base::getName(void* this)
{
    return;
}


// Function: _ZN4BaseD1Ev at 0x401e2c
int Base::~Base(void* this)
{
    return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401e30
void Derived::virtual_func(void* this, int arg_0)
{
    return;
}


// Function: _ZNK7Derived7getNameEv at 0x401e3c
void Derived::getName(void* this)
{
    return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401e48
void MultiDerived::funcA(void* this)
{
    return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401e50
void MultiDerived::funcB(void* this)
{
    return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401e58
unsigned long long non-virtual thunk to MultiDerived::funcB()()
{
    return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x401e60
void MiddleA::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401e78
int thunk to MiddleA::func()(void* *a0)
{
    return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x401e9c
void MiddleB::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401eb4
int thunk to MiddleB::func()(void* *a0)
{
    return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401ed8
void DiamondDerived::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401ef0
int thunk to DiamondDerived::func()(void* *a0)
{
    return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401f14
int non-virtual thunk to DiamondDerived::func()(void* a0)
{
    return *((int *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401f2c
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401f34
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401f3c
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401f40
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401f44
int DiamondDerived::~DiamondDerived(void* this)
{
    return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401f48
long long non-virtual thunk to DiamondDerived::~DiamondDerived()()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401f4c
long long thunk to DiamondDerived::~DiamondDerived()()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401f50
int MultiDerived::~MultiDerived(void* this)
{
    return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401f54
long long non-virtual thunk to MultiDerived::~MultiDerived()()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN7DerivedD2Ev at 0x401f58
int Derived::~Derived(void* this)
{
    return;
}


// Function: _ZN4BaseD0Ev at 0x401f5c
int Base::~Base(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 8);
    return;
}


// Function: _ZN7DerivedD0Ev at 0x401f74
int Derived::~Derived(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 16);
    return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401f8c
int MultiDerived::~MultiDerived(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 32);
    return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401fa4
int non-virtual thunk to MultiDerived::~MultiDerived()(void* a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return operatordelete(a0 - 16, 32);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401fc0
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 8);
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401fd8
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 8);
    return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401ff0
int DiamondDerived::~DiamondDerived(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 48);
    return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402008
int thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return operatordelete((char *)a0 + (*(a0))[32], 48);
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x40202c
int non-virtual thunk to DiamondDerived::~DiamondDerived()(void* a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return operatordelete(a0 - 16, 48);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402048
int template_max<int>(int arg_0, int arg_1)
{
    if (arg_1 > arg_0)
        return arg_1;
    return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402054
double template_max<double>(double arg_0, double arg_1)
{
    unsigned long v0;  // d0
    unsigned long v1;  // d1
    unsigned long v3;  // x0

    if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
        return v3;
    return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402060
long long template_swap<int>(unsigned int *ptr)
{
    unsigned int v0;  // w2
    unsigned int *p;  // x1

    v0 = *(ptr);
    *(ptr) = *(p);
    *(p) = v0;
    return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402074
int Container<int>::Container(void* ptr)
{
    *((unsigned int *)&ptr[40]) = 0;
    return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40207c
void Container<int>::push(void* ptr, int arg_0)
{
    unsigned int v0;  // w2

    v0 = (int)ptr[40];
    if (9 >= v0)
    {
        *((unsigned int *)&ptr[40]) = v0 + 1;
        *((int *)((char *)ptr + 4 * v0)) = arg_0;
    }
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402098
void Container<int>::get(void* this, int arg_0)
{
    return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4020c0
void Container<int>::getSize(void* this)
{
    return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4020c8
int Container<double>::Container(void* ptr)
{
    *((unsigned int *)&ptr[80]) = 0;
    return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4020d0
void Container<double>::push(void* ptr, double arg_0)
{
    unsigned int v0;  // w1
    unsigned long v1;  // d0

    v0 = (int)ptr[80];
    if (9 >= v0)
    {
        *((unsigned int *)&ptr[80]) = v0 + 1;
        *((unsigned long *)((char *)ptr + 8 * v0)) = v1;
    }
    return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4020ec
void Container<double>::get(void* this, int arg_0)
{
    return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40210c
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _fini at 0x402114
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

