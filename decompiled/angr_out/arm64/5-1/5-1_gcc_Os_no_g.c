// Angr Decompilation of 5-1_gcc_Os_no_g
// Platform: AARCH64

// Function: _init at 0x401638
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x401650
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


// Function: sub_401664 at 0x401664
int sub_401664()
{
    unsigned int v0;  // x0

    return operatornew[](v0);
}


// Function: _Z18test_cpp_exceptionv at 0x401800
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
    }
    _Unwind_Resume(); /* do not return */
}


// Function: main at 0x4018d0
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_cpp_oo_features();
    return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4018e8
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


// Function: sub_401928 at 0x401928
void sub_401928(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x401940
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_401970 at 0x401970
void sub_401970()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x401974
extern unsigned long long g_413fe8;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_413fe8)
        return 0;
    v0 = __gmon_start__(g_413fe8);
    return __gmon_start__(g_413fe8);
}


// Function: sub_401988 at 0x401988
void sub_401988()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401990
extern char __bss_start;

long long deregister_tm_clones()
{
    return &__bss_start;
}


// Function: register_tm_clones at 0x4019c0
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


// Function: sub_4019fc at 0x4019fc
void sub_4019fc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401a00
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


// Function: sub_401a48 at 0x401a48
long long sub_401a48()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x401a50
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: _Z20test_cpp_member_funcv at 0x401a54
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
    if (v3 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x401ac0
void test_cpp_constructor()
{
    return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401ad8
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    goto *((long long *)*((long long *)&arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401ae8
class Base {
} Base;

extern char __stack_chk_guard;
extern Base g_413868;
extern Base g_413898;

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
    *((class Base **)&v1) = &g_413868;
    *((class Base **)&v2) = &g_413898;
    v3 = 3;
    call_virtual_func(&v1, 5);
    call_virtual_func(&v2, 5);
    if (v4 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401b78
void test_cpp_multiple_inheritance()
{
    return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401b80
void test_cpp_operator_overload()
{
    return;
}


// Function: _Z22test_cpp_template_funcv at 0x401b88
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
    if (v4 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x401c30
extern char __stack_chk_guard;

void test_cpp_template_class()
{
    char *v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x38]
    unsigned int result;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    result = 1;
    v1 = 10;
    Container<int>::push(&v1, 20);
    Container<int>::push(&v1, 30);
    if (v3 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z15test_cpp_lambdav at 0x401cc0
void test_cpp_lambda()
{
    return;
}


// Function: _Z13test_cpp_rttiv at 0x401cc8
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
    void* *ptr;  // x21
    struct_2 **p;  // x20
    void* v4;  // x23
    char *cur;  // x22
    char *v0;  // [bp-0x50]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = operatornew(8);
    *(ptr) = &g_413b58;
    p = operatornew(8);
    v4 = *(ptr);
    *(p) = &g_413b80;
    cur = *((long long *)((long long)v4[8] + 8));
    if (*(cur) == 42)
        cur += 1;
    strlen(cur);
    (long long)v4[8](ptr, (long long)v4[8]);
    *(p)->field_8(p, *(p)->field_8);
    return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401e24
typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
} struct_0;

extern char __stack_chk_guard;

void test_cpp_smart_ptr()
{
    char *v0;  // [bp-0x50]
    unsigned long long result;  // [bp-0x20]
    unsigned int *p;  // [bp-0x18]
    struct_0 *ptr;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    result = 0;
    p = operatornew(4);
    *(p) = 200;
    ptr = operatornew[](20);
    ptr->field_0 = 8589934593;
    ptr->field_8 = 17179869187;
    ptr->field_10 = 5;
    if (v4 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_401ec8 at 0x401ec8
long long sub_401ec8(unsigned long long a0)
{
    _Unwind_Resume(a0); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401ef8
extern char __stack_chk_guard;
extern unsigned long long g_413ac8;
extern unsigned long long g_413af8;
extern unsigned long long g_413b30;

void test_cpp_diamond_inheritance()
{
    char *v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x18]
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
    if (v5 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_oo_featuresv at 0x401fa0
extern char g_4025b2;
extern char g_4025d6;
extern char g_4025f4;
extern char g_402610;
extern char g_40262c;
extern char g_402648;
extern char g_402665;
extern char g_402681;
extern char g_40269d;
extern char g_4026b9;
extern char g_4026d5;
extern char g_4026f2;
extern char g_40270f;

void test_cpp_oo_features()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4025b2);
    __printf_chk(1, &g_4025d6, (unsigned long long)test_cpp_member_func() & 4294967295);
    __printf_chk(1, &g_4025f4, (unsigned long long)test_cpp_constructor() & 4294967295);
    __printf_chk(1, &g_402610, (unsigned long long)test_cpp_virtual_func() & 4294967295);
    __printf_chk(1, &g_40262c, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
    __printf_chk(1, &g_402648, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
    __printf_chk(1, &g_402665, (unsigned long long)test_cpp_operator_overload() & 4294967295);
    __printf_chk(1, &g_402681, (unsigned long long)test_cpp_template_func() & 4294967295);
    __printf_chk(1, &g_40269d, (unsigned long long)test_cpp_template_class() & 4294967295);
    __printf_chk(1, &g_4026b9, (unsigned long long)test_cpp_lambda() & 4294967295);
    __printf_chk(1, &g_4026d5, (unsigned long long)test_cpp_exception() & 4294967295);
    __printf_chk(1, &g_4026f2, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
    __printf_chk(1, &g_40270f, (unsigned long long)test_cpp_rtti() & 4294967295);
    return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4020d8
void Base::virtual_func(void* this, int arg_0)
{
    return;
}


// Function: _ZNK4Base7getNameEv at 0x4020e0
void Base::getName(void* this)
{
    return;
}


// Function: _ZN4BaseD1Ev at 0x4020ec
int Base::~Base(void* this)
{
    return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4020f0
void Derived::virtual_func(void* this, int arg_0)
{
    return;
}


// Function: _ZNK7Derived7getNameEv at 0x4020fc
void Derived::getName(void* this)
{
    return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402108
void MultiDerived::funcA(void* this)
{
    return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x402110
void MultiDerived::funcB(void* this)
{
    return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x402118
unsigned long long non-virtual thunk to MultiDerived::funcB()()
{
    return 40;
}


// Function: _ZN11VirtualBase4funcEv at 0x402120
void VirtualBase::func(void* this)
{
    return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x402128
int VirtualBase::~VirtualBase(void* this)
{
    return;
}


// Function: _ZN7MiddleA4funcEv at 0x40212c
void MiddleA::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402144
long long thunk to MiddleA::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)MiddleA::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)MiddleA::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZN7MiddleB4funcEv at 0x402154
void MiddleB::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x40216c
long long thunk to MiddleB::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)MiddleB::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)MiddleB::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x40217c
void DiamondDerived::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402194
long long thunk to DiamondDerived::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)DiamondDerived::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)DiamondDerived::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4021a4
long long non-virtual thunk to DiamondDerived::func()(void* a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)DiamondDerived::func(a0 - 16);
    return (unsigned long long)DiamondDerived::func(a0 - 16);
}


// Function: _ZN7MiddleAD1Ev at 0x4021ac
extern char g_4138e0;
extern char g_413918;

int MiddleA::~MiddleA(void* ptr)
{
    *((char **)ptr) = &g_4138e0;
    *((char **)&ptr[16]) = &g_413918;
    return;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x4021c8
extern char g_4138e0;
extern char g_413918;

long long thunk to MiddleA::~MiddleA()(void* *a0)
{
    unsigned long long v0;  // x2

    v0 = (long long)(*(a0))[32];
    *((char **)((char *)a0 + (*(a0))[32])) = &g_4138e0;
    *((char **)(16 + (char *)a0 + v0)) = &g_413918;
    return &g_413918;
}


// Function: _ZN7MiddleBD1Ev at 0x4021f0
extern char g_413958;
extern char g_413990;

int MiddleB::~MiddleB(void* ptr)
{
    *((char **)ptr) = &g_413958;
    *((char **)&ptr[16]) = &g_413990;
    return;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x40220c
extern char g_413958;
extern char g_413990;

long long thunk to MiddleB::~MiddleB()(void* *a0)
{
    unsigned long long v0;  // x2

    v0 = (long long)(*(a0))[32];
    *((char **)((char *)a0 + (*(a0))[32])) = &g_413958;
    *((char **)(16 + (char *)a0 + v0)) = &g_413990;
    return &g_413990;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402234
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40223c
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x402244
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x402248
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x40224c
int MultiDerived::~MultiDerived(void* this)
{
    return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402250
long long non-virtual thunk to MultiDerived::~MultiDerived()()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN7DerivedD2Ev at 0x402254
int Derived::~Derived(void* this)
{
    return;
}


// Function: _ZN4BaseD0Ev at 0x402258
int Base::~Base(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: _ZN7DerivedD0Ev at 0x402260
int Derived::~Derived(void* this)
{
    operatordelete(this, 16);
    return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402268
int MultiDerived::~MultiDerived(void* this)
{
    operatordelete(this, 32);
    return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402270
long long non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x402278
int VirtualBase::~VirtualBase(void* this)
{
    operatordelete(this, 16);
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402280
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402288
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: _ZN7MiddleAD0Ev at 0x402290
extern char g_4138e0;
extern char g_413918;

int MiddleA::~MiddleA(void* ptr)
{
    *((char **)ptr) = &g_4138e0;
    *((char **)&ptr[16]) = &g_413918;
    operatordelete(ptr, 32);
    return;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x4022b0
long long thunk to MiddleA::~MiddleA()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN7MiddleBD0Ev at 0x4022c0
extern char g_413958;
extern char g_413990;

int MiddleB::~MiddleB(void* ptr)
{
    *((char **)ptr) = &g_413958;
    *((char **)&ptr[16]) = &g_413990;
    operatordelete(ptr, 32);
    return;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x4022e0
long long thunk to MiddleB::~MiddleB()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN7MiddleAD4Ev at 0x4022f0
typedef struct struct_0 {
    void* field_0;
    unsigned long long field_8;
} struct_0;

extern void g_4138e0;
extern char g_413918;

int MiddleA::~MiddleA(void* p)
{
    unsigned int result;  // w1
    struct_0 *ptr;  // x2
    void* ptr3;  // x3
    struct_0 *addr;  // x2
    unsigned long v4;  // x1
    unsigned long long v5;  // x2

    if (!result)
        ptr3 = ptr->field_0;
    else
        ptr3 = &g_4138e0;
    *((void* *)p) = ptr3;
    if (!result)
    {
        v4 = addr->field_8;
        v5 = (long long)ptr3[24];
    }
    else
    {
        v5 = 16;
        v4 = &g_413918;
    }
    *((unsigned long *)((char *)p + v5)) = v4;
    return;
}


// Function: _ZN7MiddleAD2Ev at 0x40232c
int MiddleA::~MiddleA(void* this)
{
    return;
}


// Function: _ZN7MiddleBD4Ev at 0x402338
typedef struct struct_0 {
    void* field_0;
    unsigned long long field_8;
} struct_0;

extern void g_413958;
extern unsigned long long g_413990;

int MiddleB::~MiddleB(void* p)
{
    unsigned int result;  // w1
    struct_0 *ptr;  // x2
    void* ptr3;  // x3
    struct_0 *addr;  // x2
    unsigned long long v4;  // x1
    unsigned long v5;  // x2

    if (!result)
        ptr3 = ptr->field_0;
    else
        ptr3 = &g_413958;
    *((void* *)p) = ptr3;
    if (!result)
    {
        v4 = addr->field_8;
        v5 = (long long)ptr3[24];
    }
    else
    {
        v5 = 16;
        v4 = &g_413990;
    }
    *((unsigned long long *)((char *)p + v5)) = v4;
    return;
}


// Function: _ZN7MiddleBD2Ev at 0x402374
int MiddleB::~MiddleB(void* this)
{
    return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402380
int template_max<int>(int arg_0, int arg_1)
{
    if (arg_1 > arg_0)
        return arg_1;
    return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x40238c
double template_max<double>(double arg_0, double arg_1)
{
    unsigned long v0;  // d0
    unsigned long v1;  // d1
    unsigned long v3;  // x0

    if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
        return v3;
    return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402398
long long template_swap<int>(unsigned int *ptr)
{
    unsigned int v0;  // w2
    unsigned int *p;  // x1

    v0 = *(ptr);
    *(ptr) = *(p);
    *(p) = v0;
    return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4023ac
int Container<int>::Container(void* ptr)
{
    *((unsigned int *)&ptr[40]) = 0;
    return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4023b4
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


// Function: _ZNK9ContainerIiE3getEi at 0x4023d0
void Container<int>::get(void* this, int arg_0)
{
    if (!((char)(arg_0 >> 31) & 1) && (int)this[40] > arg_0)
        return;
    return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4023f0
void Container<int>::getSize(void* this)
{
    return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4023f8
int Container<double>::Container(void* ptr)
{
    *((unsigned int *)&ptr[80]) = 0;
    return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402400
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


// Function: _ZNK9ContainerIdE3getEi at 0x40241c
void Container<double>::get(void* this, int arg_0)
{
    if (!((char)(arg_0 >> 31) & 1) && (int)this[80] > arg_0)
        return;
    return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40243c
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x402444
int std::unique_ptr<int, std::default_delete<int>>::~unique_ptr(void* this)
{
    if (!*((long long *)this))
        return;
    operatordelete(*((long long *)this), 4);
    return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x402458
int std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr(void* this)
{
    if (!*((long long *)this))
        return;
    operatordelete[](*((long long *)this));
    return;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x402468
typedef struct struct_0 {
    void* field_0;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern void g_413ac8;
extern unsigned long long g_413af8;
extern unsigned long long g_413b30;

int DiamondDerived::~DiamondDerived(void* p)
{
    unsigned long long v6;  // x30
    unsigned long long v7;  // x19
    unsigned long long v8;  // x20
    unsigned long long v9;  // x21
    unsigned int result;  // w1
    struct_0 *ptr;  // x2
    void* addr;  // x0
    unsigned long long v13;  // x0
    unsigned long long v14;  // x1
    unsigned long long v15;  // x1
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v1 = v6;
    v2 = v7;
    v3 = v8;
    v4 = v9;
    if (!result)
        addr = ptr->field_0;
    else
        addr = &g_413ac8;
    *((void* *)p) = addr;
    if (!result)
    {
        v13 = (long long)addr[24];
        v14 = ptr->field_28;
    }
    else
    {
        v13 = 32;
        v14 = &g_413b30;
    }
    *((unsigned long long *)((char *)p + v13)) = v14;
    if (!result)
        v15 = ptr->field_30;
    else
        v15 = &g_413af8;
    *((unsigned long long *)&p[16]) = v15;
    if (!result)
        return;
    return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402518
int DiamondDerived::~DiamondDerived(void* this)
{
    return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402524
long long non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x40252c
long long thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x40253c
int DiamondDerived::~DiamondDerived(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 48);
    return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402564
long long non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x40256c
long long thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x40257c
int DiamondDerived::~DiamondDerived(void* this)
{
    return;
}


// Function: _fini at 0x402588
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

