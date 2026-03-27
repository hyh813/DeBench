// Angr Decompilation of 5-1_gcc_O3_no_g
// Platform: AARCH64

// Function: _init at 0x400e90
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400eb0
extern unsigned long long g_412f00;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_412f00;
}


// Function: sub_400ec4 at 0x400ec4
int sub_400ec4()
{
    char *v0;  // x0

    return puts(v0);
}


// Function: _Z18test_cpp_exceptionv at 0x401040
extern char _ZTIi;

void test_cpp_exception()
{
    unsigned int *ptr;  // x0
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    __cxa_throw(ptr, &_ZTIi, 0, 42);
    _Unwind_Resume(); /* do not return */
}


// Function: sub_401114 at 0x401114
void sub_401114()
{
    main();
    return;
}


// Function: main at 0x401120
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_cpp_oo_features();
    return 0;
}


// Function: sub_401138 at 0x401138
void sub_401138()
{
    _GLOBAL__sub_I__Z20test_cpp_member_funcv();
    return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401140
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


// Function: _start at 0x401180
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_4011b0 at 0x4011b0
void sub_4011b0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4011b4
extern unsigned long long g_412fe8;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_412fe8)
        return 0;
    v0 = __gmon_start__(g_412fe8);
    return __gmon_start__(g_412fe8);
}


// Function: sub_4011c8 at 0x4011c8
void sub_4011c8()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4011d0
extern char __bss_start;

long long deregister_tm_clones()
{
    return &__bss_start;
}


// Function: register_tm_clones at 0x401200
extern char __bss_start;
extern unsigned long long g_412ff0;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__bss_start;
    }
    else if (g_412ff0)
    {
        goto g_412ff0;
    }
    else
    {
        return &__bss_start;
    }
}


// Function: sub_40123c at 0x40123c
void sub_40123c()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401240
extern char __bss_start;
extern unsigned long long __dso_handle;
extern unsigned long long g_412fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __bss_start;
    if ((unsigned int)v2)
        return v2;
    if (g_412fd8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __bss_start = 1;
    return 1;
}


// Function: sub_401288 at 0x401288
long long sub_401288()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x401290
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: sub_401294 at 0x401294
void sub_401294()
{
    test_cpp_member_func();
    return;
}


// Function: _Z20test_cpp_member_funcv at 0x4012a0
extern char __stack_chk_guard;

void test_cpp_member_func()
{
    char *v0;  // [bp-0x40]
    char v1[31];  // [bp-0x2c]
    char result;  // [bp-0xd]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    result = 0;
    strlen(strncpy(&v1, "Test", 31));
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return;
}


// Function: sub_40130c at 0x40130c
void sub_40130c()
{
    test_cpp_constructor();
    return;
}


// Function: _Z20test_cpp_constructorv at 0x401310
void test_cpp_constructor()
{
    return;
}


// Function: sub_401328 at 0x401328
long long sub_401328(unsigned long a0)
{
    unsigned long long v0;  // x0

    v0 = call_virtual_func();
    return call_virtual_func();
}


// Function: _Z17call_virtual_funcP4Basei at 0x401330
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    goto *((long long *)*((long long *)&arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401340
void test_cpp_virtual_func()
{
    return;
}


// Function: sub_401348 at 0x401348
void sub_401348()
{
    test_cpp_multiple_inheritance();
    return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401350
void test_cpp_multiple_inheritance()
{
    return;
}


// Function: sub_401358 at 0x401358
void sub_401358()
{
    test_cpp_diamond_inheritance();
    return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401360
void test_cpp_diamond_inheritance()
{
    return;
}


// Function: sub_401368 at 0x401368
void sub_401368()
{
    test_cpp_operator_overload();
    return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401370
void test_cpp_operator_overload()
{
    return;
}


// Function: sub_401378 at 0x401378
void sub_401378()
{
    test_cpp_template_func();
    return;
}


// Function: _Z22test_cpp_template_funcv at 0x401380
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
    template_max<double>(template_max<int>(3, 7, &__stack_chk_guard, 0), 7, &__stack_chk_guard, 0);
    v2 = 10;
    v3 = 20;
    template_swap<int>(&v2, &v3, 20, 10);
    if (v4 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
void test_cpp_template_class()
{
    return;
}


// Function: sub_401428 at 0x401428
void sub_401428()
{
    test_cpp_lambda();
    return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
void test_cpp_lambda()
{
    return;
}


// Function: sub_401438 at 0x401438
void sub_401438()
{
    test_cpp_smart_ptr();
    return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401440
void test_cpp_smart_ptr()
{
    return;
}


// Function: sub_401448 at 0x401448
void sub_401448()
{
    test_cpp_rtti();
    return;
}


// Function: _Z13test_cpp_rttiv at 0x401450
typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
} struct_4;

extern char g_412c28;
extern char g_412c50;
extern struct_4 *p;

void test_cpp_rtti()
{
    void* *ptr;  // x21
    struct_2 **ptr3;  // x20
    char *ptr4;  // x0
    void* v4;  // x24
    char *addr;  // x23
    unsigned int v6;  // w25
    unsigned int result;  // w0
    unsigned long v8;  // cc_dep1
    char *v9;  // x0
    char *v0;  // [bp-0x50]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = operatornew(8);
    *(ptr) = &g_412c28;
    ptr3 = operatornew(8);
    v4 = *(ptr);
    addr = *((long long *)((long long)v4[8] + 8));
    *(ptr3) = &g_412c50;
    if (addr != "12RTTIDerivedA")
    {
        v6 = *(addr);
        if (v6 != 42)
        {
            result = strcmp(addr, "12RTTIDerivedA");
            v8 = result;
            if (result)
            {
                if (!((char)arm64g_calculate_condition(19, v8, 0, 0)))
                    goto LABEL_4014de;
LABEL_4014dd:
            }
            else
            {
                if ((char)arm64g_calculate_condition(19, v8, 0, 0))
                    goto LABEL_4014dd;
LABEL_4014de:
            }
LABEL_4014e0:
            v9 = p->field_8;
            if (v9 == "12RTTIDerivedB")
                goto LABEL_4015d0;
LABEL_4014fc:
        }
        else
        {
            v9 = p->field_8;
            if (v9 != "12RTTIDerivedB")
                goto LABEL_4014fc;
LABEL_4015d0:
        }
    }
    else
    {
        v6 = 49;
        goto LABEL_4014e0;
    }
    if (v6 != 42)
        ptr4 = addr;
    else
        ptr4 = addr + 1;
    strlen(ptr4);
    (long long)v4[8](ptr, (long long)v4[8]);
    *(ptr3)->field_8(ptr3, *(ptr3)->field_8);
    return;
}


// Function: sub_4015e8 at 0x4015e8
void sub_4015e8()
{
    test_cpp_oo_features();
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015f0
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char __stack_chk_guard;
extern char g_401ba0;
extern char g_401bc8;
extern char g_401be8;
extern char g_401c08;
extern char g_401c28;
extern char g_401c48;
extern char g_401c68;
extern char g_401c88;
extern char g_401ca8;
extern char g_401cc8;
extern char g_401ce8;
extern char g_401d08;
extern char g_401d28;

void test_cpp_oo_features()
{
    unsigned long long v8;  // d8
    unsigned long long v10;  // x0
    unsigned int v12;  // w0
    char *v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x34]
    char v4;  // [bp-0x2c]
    char result;  // [bp-0xd]
    unsigned long v6;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v0 = &v7;
    v1 = v8;
    v6 = *((long long *)&__stack_chk_guard);
    puts(&g_401ba0);
    strncpy(&v4, "Test", 31);
    result = 0;
    __printf_chk(1, &g_401bc8, strlen(&v4) + 4700);
    __printf_chk(1, &g_401be8, _ZN14LifecycleClass14instance_countE + 21 + 1000 * _ZN14LifecycleClass14instance_countE);
    __printf_chk(1, &g_401c08, 42);
    __printf_chk(1, &g_401c28, 71);
    __printf_chk(1, &g_401c48, 650);
    __printf_chk(1, &g_401c68, 22);
    v10 = template_max<int>(3, 7);
    template_max<double>(v10, 7);
    v2 = 10;
    v3 = 20;
    template_swap<int>(&v2, &v3, 20, 10);
    __printf_chk(1, &g_401c88, (unsigned int)0x4004000000000000 + (v10 & 4294967295) + v2 + v3);
    __printf_chk(1, &g_401ca8, 16);
    __printf_chk(1, &g_401cc8, 85);
    __printf_chk(1, &g_401ce8, (unsigned long long)test_cpp_exception() & 4294967295);
    __printf_chk(1, &g_401d08, 703);
    v12 = (unsigned long long)test_cpp_rtti();
    if (v6 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    __printf_chk(1, &g_401d28, v12);
    return;
}


// Function: sub_4017c4 at 0x4017c4
void sub_4017c4(unsigned long a0, unsigned long a1)
{
    Base::virtual_func();
    return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4017d0
void Base::virtual_func(void* this, int arg_0)
{
    return;
}


// Function: sub_4017d8 at 0x4017d8
void sub_4017d8()
{
    Base::getName();
    return;
}


// Function: _ZNK4Base7getNameEv at 0x4017e0
void Base::getName(void* this)
{
    return;
}


// Function: sub_4017ec at 0x4017ec
long long sub_4017ec()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN4BaseD1Ev at 0x4017f0
int Base::~Base(void* this)
{
    return;
}


// Function: sub_4017f4 at 0x4017f4
void sub_4017f4(unsigned long a0, unsigned long a1)
{
    Derived::virtual_func();
    return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401800
void Derived::virtual_func(void* this, int arg_0)
{
    return;
}


// Function: sub_40180c at 0x40180c
void sub_40180c()
{
    Derived::getName();
    return;
}


// Function: _ZNK7Derived7getNameEv at 0x401810
void Derived::getName(void* this)
{
    return;
}


// Function: sub_40181c at 0x40181c
void sub_40181c()
{
    MultiDerived::funcA();
    return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401820
void MultiDerived::funcA(void* this)
{
    return;
}


// Function: sub_401828 at 0x401828
void sub_401828()
{
    MultiDerived::funcB();
    return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401830
void MultiDerived::funcB(void* this)
{
    return;
}


// Function: sub_401838 at 0x401838
void sub_401838()
{
    non-virtual thunk to MultiDerived::funcB()();
    return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401840
unsigned long long non-virtual thunk to MultiDerived::funcB()()
{
    return 40;
}


// Function: sub_401848 at 0x401848
void sub_401848(unsigned long a0)
{
    MiddleA::func();
    return;
}


// Function: _ZN7MiddleA4funcEv at 0x401850
void MiddleA::func(void* this)
{
    return;
}


// Function: sub_401868 at 0x401868
void sub_401868(unsigned long a0)
{
    thunk to MiddleA::func()();
    return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401870
int thunk to MiddleA::func()(void* *a0)
{
    return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 150;
}


// Function: sub_401894 at 0x401894
void sub_401894(unsigned long a0)
{
    MiddleB::func();
    return;
}


// Function: _ZN7MiddleB4funcEv at 0x4018a0
void MiddleB::func(void* this)
{
    return;
}


// Function: sub_4018b8 at 0x4018b8
void sub_4018b8(unsigned long a0)
{
    thunk to MiddleB::func()();
    return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x4018c0
int thunk to MiddleB::func()(void* *a0)
{
    return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 200;
}


// Function: sub_4018e4 at 0x4018e4
void sub_4018e4(unsigned long a0)
{
    DiamondDerived::func();
    return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x4018f0
void DiamondDerived::func(void* this)
{
    return;
}


// Function: sub_401908 at 0x401908
void sub_401908(unsigned long a0)
{
    thunk to DiamondDerived::func()();
    return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401910
int thunk to DiamondDerived::func()(void* *a0)
{
    return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401934
int non-virtual thunk to DiamondDerived::func()(void* a0)
{
    return *((int *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24)))) + 250;
}


// Function: sub_40194c at 0x40194c
void sub_40194c()
{
    RTTIDerivedA::getType();
    return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401950
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: sub_401958 at 0x401958
void sub_401958()
{
    RTTIDerivedB::getType();
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401960
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: sub_401968 at 0x401968
long long sub_401968()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401970
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    return;
}


// Function: sub_401974 at 0x401974
long long sub_401974()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401980
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    return;
}


// Function: sub_401984 at 0x401984
long long sub_401984()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401990
int DiamondDerived::~DiamondDerived(void* this)
{
    return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401994
long long thunk to DiamondDerived::~DiamondDerived()()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: sub_401998 at 0x401998
long long sub_401998()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x4019a0
long long non-virtual thunk to DiamondDerived::~DiamondDerived()()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: sub_4019a4 at 0x4019a4
long long sub_4019a4()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x4019b0
int MultiDerived::~MultiDerived(void* this)
{
    return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x4019b4
long long non-virtual thunk to MultiDerived::~MultiDerived()()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: sub_4019b8 at 0x4019b8
long long sub_4019b8()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN7DerivedD2Ev at 0x4019c0
int Derived::~Derived(void* this)
{
    return;
}


// Function: sub_4019c4 at 0x4019c4
long long sub_4019c4()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN4BaseD0Ev at 0x4019d0
int Base::~Base(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: sub_4019d8 at 0x4019d8
long long sub_4019d8()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN7DerivedD0Ev at 0x4019e0
int Derived::~Derived(void* this)
{
    operatordelete(this, 16);
    return;
}


// Function: sub_4019e8 at 0x4019e8
long long sub_4019e8()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x4019f0
int MultiDerived::~MultiDerived(void* this)
{
    operatordelete(this, 32);
    return;
}


// Function: sub_4019f8 at 0x4019f8
void sub_4019f8(unsigned long a0)
{
    return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401a00
int non-virtual thunk to MultiDerived::~MultiDerived()(void* a0)
{
    return operatordelete(a0 - 16, 32);
}


// Function: sub_401a0c at 0x401a0c
long long sub_401a0c()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401a10
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: sub_401a18 at 0x401a18
long long sub_401a18()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401a20
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: sub_401a28 at 0x401a28
long long sub_401a28()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401a30
int DiamondDerived::~DiamondDerived(void* this)
{
    operatordelete(this, 48);
    return;
}


// Function: sub_401a38 at 0x401a38
void sub_401a38(unsigned long a0)
{
    return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x401a40
int thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
    return operatordelete((char *)a0 + (*(a0))[32], 48);
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x401a54
int non-virtual thunk to DiamondDerived::~DiamondDerived()(void* a0)
{
    return operatordelete(a0 - 16, 48);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401a60
int template_max<int>(int arg_0, int arg_1)
{
    if (arg_1 > arg_0)
        return arg_1;
    return arg_0;
}


// Function: sub_401a6c at 0x401a6c
long long sub_401a6c()
{
    unsigned long long v0;  // x0

    v0 = template_max<double>();
    return template_max<double>();
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401a70
double template_max<double>(double arg_0, double arg_1)
{
    unsigned long v0;  // d0
    unsigned long v1;  // d1
    unsigned long v3;  // x0

    if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
        return v3;
    return v3;
}


// Function: sub_401a7c at 0x401a7c
long long sub_401a7c(unsigned long a0, unsigned long a1)
{
    unsigned long v0;  // x0

    v0 = template_swap<int>();
    return template_swap<int>();
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401a80
long long template_swap<int>(unsigned int *ptr)
{
    unsigned int v0;  // w2
    unsigned int *p;  // x1

    v0 = *(ptr);
    *(ptr) = *(p);
    *(p) = v0;
    return ptr;
}


// Function: sub_401a94 at 0x401a94
long long sub_401a94(unsigned long a0)
{
    unsigned long long v0;  // x0

    v0 = Container<int>::Container();
    return Container<int>::Container();
}


// Function: _ZN9ContainerIiEC2Ev at 0x401aa0
int Container<int>::Container(void* ptr)
{
    *((unsigned int *)&ptr[40]) = 0;
    return;
}


// Function: sub_401aa8 at 0x401aa8
long long sub_401aa8(unsigned long a0)
{
    unsigned long long v0;  // x0

    v0 = Container<int>::push();
    return Container<int>::push();
}


// Function: _ZN9ContainerIiE4pushEi at 0x401ab0
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


// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned long a0, unsigned long a1)
{
    Container<int>::get();
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ad0
void Container<int>::get(void* this, int arg_0)
{
    if (((char)(arg_0 >> 31) & 1))
    {
        return;
    }
    else if (arg_0 >= (int)this[40])
    {
        return;
    }
    else
    {
        return;
    }
}


// Function: sub_401af8 at 0x401af8
void sub_401af8(unsigned long a0)
{
    Container<int>::getSize();
    return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401b00
void Container<int>::getSize(void* this)
{
    return;
}


// Function: sub_401b08 at 0x401b08
long long sub_401b08(unsigned long a0)
{
    unsigned long long v0;  // x0

    v0 = Container<double>::Container();
    return Container<double>::Container();
}


// Function: _ZN9ContainerIdEC1Ev at 0x401b10
int Container<double>::Container(void* ptr)
{
    *((unsigned int *)&ptr[80]) = 0;
    return;
}


// Function: sub_401b18 at 0x401b18
long long sub_401b18(unsigned long a0)
{
    unsigned long long v0;  // x0

    v0 = Container<double>::push();
    return Container<double>::push();
}


// Function: _ZN9ContainerIdE4pushEd at 0x401b20
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


// Function: sub_401b3c at 0x401b3c
long long sub_401b3c(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // x0

    v0 = Container<double>::get();
    return Container<double>::get();
}


// Function: _ZNK9ContainerIdE3getEi at 0x401b40
void Container<double>::get(void* this, int arg_0)
{
    if (((char)(arg_0 >> 31) & 1))
    {
        return;
    }
    else if (arg_0 >= (int)this[80])
    {
        return;
    }
    else
    {
        return;
    }
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401b60
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _fini at 0x401b68
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

