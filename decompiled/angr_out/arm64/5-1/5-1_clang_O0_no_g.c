// Angr Decompilation of 5-1_clang_O0_no_g
// Platform: AARCH64

// Function: _init at 0x401988
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x4019a0
extern unsigned long long g_417ff8;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_417ff8;
}


// Function: sub_4019b4 at 0x4019b4
int sub_4019b4()
{
    unsigned int v0;  // x0

    return operatornew[](v0);
}


// Function: $x.0 at 0x401b40
extern void $d.177;
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned long long __dso_handle;

long long $x.0()
{
    unsigned long long v3;  // x0
    void* v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = &$d.177;
    std::ios_base::Init::Init(&$d.177);
    v3 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, v0, &__dso_handle);
    return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, v0, &__dso_handle);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401b80
unsigned long long _GLOBAL__sub_I_5_1.cpp()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = $x.0();
    return $x.0();
}


// Function: sub_401b94 at 0x401b94
void sub_401b94(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x401bc0
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_401bf0 at 0x401bf0
void sub_401bf0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x401bf4
extern unsigned long long g_417fd0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_417fd0)
        return 0;
    v0 = __gmon_start__(g_417fd0);
    return __gmon_start__(g_417fd0);
}


// Function: sub_401c08 at 0x401c08
void sub_401c08()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401c10
extern char __bss_start;

long long deregister_tm_clones()
{
    return &__bss_start;
}


// Function: register_tm_clones at 0x401c40
extern char __bss_start;
extern unsigned long long g_417fd8;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__bss_start;
    }
    else if (g_417fd8)
    {
        goto g_417fd8;
    }
    else
    {
        return &__bss_start;
    }
}


// Function: sub_401c7c at 0x401c7c
void sub_401c7c()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401c80
extern char __bss_start;
extern unsigned long long __dso_handle;
extern unsigned long long g_417fc0;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __bss_start;
    if ((unsigned int)v2)
        return v2;
    if (g_417fc0)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __bss_start = 1;
    return 1;
}


// Function: sub_401cc8 at 0x401cc8
long long sub_401cc8()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x401cd0
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: _Z20test_cpp_member_funcv at 0x401cd4
void test_cpp_member_func()
{
    char *v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0x38]
    char v3;  // [bp-0x34]
    char *v4;  // [bp-0x10]
    char v5;  // [bp+0x0]

    v4 = &v5;
    v0 = &v3;
    SimpleClass::SimpleClass(&v3, 5, "Test");
    SimpleClass::setValue(v0, 10);
    v2 = SimpleClass::getValue(v0);
    v1 = SimpleClass::compute(v0, 3);
    SimpleClass::getClassID(v1, 3);
    return;
}


// Function: _Z20test_cpp_constructorv at 0x401d4c
void test_cpp_constructor()
{
    unsigned long long v7;  // x0
    unsigned int v0;  // [bp-0x44]
    char *v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x14]
    char *v5;  // [bp-0x10]
    char v6;  // [bp+0x0]

    v5 = &v6;
    v4 = 0;
    v1 = &v3;
    LifecycleClass::LifecycleClass(&v3, 5);
    v2 = LifecycleClass::getData(v1, 2);
    v4 += v2;
    v0 = LifecycleClass::getInstanceCount();
    v4 += v0;
    LifecycleClass::getInstanceCount(v7);
    return;
}


// Function: sub_401ddc at 0x401ddc
long long sub_401ddc(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp+0x1c]

    v0 = a1;
    _Unwind_Resume(a0); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x401dfc
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    char v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    (*((long long *)*((long long *)*((long long *)&v0))))(arg_0, arg_1);
    return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401e30
class Base {
} Base;

void test_cpp_virtual_func()
{
    unsigned int v0;  // [bp-0x6c]
    unsigned int v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x64]
    unsigned int v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x5c]
    unsigned int v5;  // [bp-0x58]
    unsigned int v6;  // [bp-0x54]
    Base *v7;  // [bp-0x50]
    Base *v8;  // [bp-0x48]
    unsigned int v9;  // [bp-0x3c]
    unsigned int v10;  // [bp-0x38]
    char v11;  // [bp-0x28]
    char v12;  // [bp-0x18]
    char *v13;  // [bp-0x10]
    char v14;  // [bp+0x0]

    v13 = &v14;
    Base::Base(&v12);
    Derived::Derived(&v11, 3);
    v4 = Base::virtual_func(&v12, 5);
    v10 = v4;
    v3 = Derived::virtual_func(&v11, 5);
    v9 = v3;
    v8 = &v12;
    v7 = &v11;
    v2 = (unsigned long long)call_virtual_func(v8, 5);
    v6 = v2;
    v1 = (unsigned long long)call_virtual_func(v7, 5);
    v5 = v1;
    v0 = v10 + v9 + v6 + v5;
    return;
}


// Function: sub_401f14 at 0x401f14
long long sub_401f14(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x24]

    v0 = a1;
    _Unwind_Resume(a0); /* do not return */
}


// Function: sub_401f24 at 0x401f24
long long sub_401f24(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned long long v1;  // [bp-0x20]

    v1 = a0;
    v0 = a1;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401f50
typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void test_cpp_multiple_inheritance()
{
    unsigned int v16;  // w8
    unsigned int v0;  // [bp-0x7c]
    unsigned int v1;  // [bp-0x78]
    unsigned int v2;  // [bp-0x74]
    struct_1 **v3;  // [bp-0x70]
    struct_1 **v4;  // [bp-0x68]
    unsigned int v5;  // [bp-0x5c]
    unsigned int v6;  // [bp-0x58]
    unsigned int v7;  // [bp-0x44]
    struct_1 **v8;  // [bp-0x40]
    struct_1 **v9;  // [bp-0x38]
    char v10;  // [bp-0x30]
    unsigned int v11;  // [bp-0x28]
    char v12;  // [bp-0x20]
    unsigned int v13;  // [bp-0x18]
    char *v14;  // [bp-0x10]
    char v15;  // [bp+0x0]

    v14 = &v15;
    v3 = &v10;
    MultiDerived::MultiDerived(&v10);
    v11 = 100;
    v13 = 200;
    v9 = v3;
    v4 = NULL;
    if (v3)
        v4 = &v12;
    v8 = v4;
    v2 = *(v9)->field_0(v9);
    v7 = v2;
    v1 = *(v8)->field_0(v8);
    v6 = v1;
    if (v9 == v8)
        v16 = 0;
    else
        v16 = 1;
    v5 = v16;
    v0 = v7 + v6 + v5;
    return;
}


// Function: sub_402030 at 0x402030
long long sub_402030(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp+0x2c]

    v0 = a1;
    _Unwind_Resume(a0); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x402050
typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

void test_cpp_diamond_inheritance()
{
    unsigned int v0;  // [bp-0x7c]
    unsigned int v1;  // [bp-0x78]
    unsigned int v2;  // [bp-0x74]
    char *v3;  // [bp-0x70]
    struct_1 **v4;  // [bp-0x68]
    unsigned int v5;  // [bp-0x60]
    unsigned int v6;  // [bp-0x4c]
    struct_1 **v7;  // [bp-0x48]
    void* ptr;  // [bp-0x40], Other Possible Types: char
    char v9;  // [bp-0x38]
    char *v10;  // [bp-0x10]
    char v11;  // [bp+0x0]

    v10 = &v11;
    v3 = &ptr;
    DiamondDerived::DiamondDerived(&ptr);
    *((unsigned int *)&v3[8 + ptr[24]]) = 50;
    v4 = NULL;
    if (v3)
        v4 = &(&ptr)[ptr[24]];
    v7 = v4;
    v2 = *(v7)->field_0(v7);
    v6 = v2;
    *((unsigned int *)&(&v9)[ptr[24]]) = 100;
    v1 = *(v7)->field_0(v7);
    v5 = v1;
    v0 = v6 + v5;
    return;
}


// Function: sub_402134 at 0x402134
long long sub_402134(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp+0x24]

    v0 = a1;
    _Unwind_Resume(a0); /* do not return */
}


// Function: _Z26test_cpp_operator_overloadv at 0x402154
void test_cpp_operator_overload()
{
    unsigned long long v11;  // x30
    char *v0;  // [bp-0x50]
    char *v1;  // [bp-0x48]
    unsigned int result;  // [bp-0x3c]
    char *v3;  // [bp-0x38]
    char v4;  // [bp-0x29]
    char v5;  // [bp-0x28], Other Possible Types: unsigned long long
    char v6;  // [bp-0x20]
    char v7;  // [bp-0x18]
    char *v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v8 = &v10;
    v9 = v11;
    v1 = &v7;
    result = 1;
    Point::Point(&v7, 1, 2);
    v0 = &v6;
    Point::Point(&v6, 3, 4);
    v3 = &v5;
    v5 = Point::operator+(v1, v0);
    v4 = (char)Point::operator==(v1, v0) & (char)result;
    Point::operator++(v3);
    if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v4 & 1), 0, 0)))
        return;
    return;
}


// Function: _Z22test_cpp_template_funcv at 0x4021fc
void test_cpp_template_func()
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned long long v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x14]
    char *v4;  // [bp-0x10]
    char v5;  // [bp+0x0]

    v4 = &v5;
    v3 = template_max<int>(3, 7);
    template_max<double>(v3, 7);
    v2 = 0x4004000000000000;
    v1 = 10;
    v0 = 20;
    template_swap<int>(&v1, &v0);
    return;
}


// Function: _Z23test_cpp_template_classv at 0x402270
void test_cpp_template_class()
{
    char *v0;  // [bp-0xc0]
    char *v1;  // [bp-0xb8]
    unsigned int result;  // [bp-0xac]
    char v3;  // [bp-0xa0]
    unsigned int v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0x40]
    char v6;  // [bp-0x3c]
    char *v7;  // [bp-0x10]
    char v8;  // [bp+0x0]

    v7 = &v8;
    v0 = &v6;
    Container<int>::Container(&v6);
    Container<int>::push(v0, 10);
    Container<int>::push(v0, 20);
    Container<int>::push(v0, 30);
    result = 0;
    v5 = Container<int>::get(v0, 0);
    v4 = Container<int>::getSize(v0);
    v1 = &v3;
    Container<double>::Container(&v3);
    Container<double>::push(v1);
    Container<double>::get(v1, result);
    return;
}


// Function: _Z15test_cpp_lambdav at 0x402330
void test_cpp_lambda()
{
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x30]
    char v3;  // [bp-0x29]
    unsigned int v4;  // [bp-0x28]
    char *v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x18]
    unsigned int v7;  // [bp-0x14]
    char *v8;  // [bp-0x10]
    char v9;  // [bp+0x0]

    v8 = &v9;
    v0 = 10;
    v7 = 10;
    v1 = 20;
    v6 = 20;
    v4 = v7;
    v5 = &v6;
    v2 = test_cpp_lambda()::$_1::operator()(int) const(&v4, 3);
    _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_(&v3, v0, v1);
    return;
}


// Function: _ZZ15test_cpp_lambdavENK3$_1clEi at 0x4023a0
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

long long test_cpp_lambda()::$_1::operator()(int) const()
{
    struct_0 *idx;  // x0
    unsigned int v1;  // w1

    idx->field_8->field_0 = idx->field_8->field_0 + 5;
    return idx->field_0 * v1 + idx->field_8->field_0;
}


// Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ at 0x4023e0
long long _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_()
{
    unsigned int v0;  // w1
    unsigned int v1;  // w2

    return v0 + v1;
}


// Function: _Z18test_cpp_exceptionv at 0x402404
extern char _ZTIi;

void test_cpp_exception()
{
    unsigned long long v4;  // x30
    unsigned int *ptr;  // x0
    unsigned int result;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v1 = &v3;
    v2 = v4;
    result = 0;
    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    test_cpp_smart_ptr(__cxa_throw(ptr, &_ZTIi, 0), &_ZTIi, 0);
    return;
}


// Function: sub_402438 at 0x402438
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_402438(unsigned long long a0, unsigned int a1)
{
    unsigned int *p;  // x0
    unsigned long long v4;  // x0
    unsigned int *ptr;  // x0
    unsigned long long v6;  // x0
    unsigned long long v7;  // x0
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x4]

    if (a1 == 1)
    {
        p = __cxa_begin_catch(a0);
        v1 = *(p);
        v2 += v1;
        v4 = test_cpp_smart_ptr(__cxa_rethrow(p));
        return test_cpp_smart_ptr(__cxa_rethrow(p));
    }
    else if (a1 == 1)
    {
        ptr = __cxa_begin_catch(a0);
        v0 = *(ptr);
        v2 += v0 * 2;
        __cxa_end_catch(ptr);
        v6 = __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
        v7 = test_cpp_smart_ptr(v6, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
        return test_cpp_smart_ptr(v6, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
    }
    else
    {
        _Unwind_Resume(a0); /* do not return */
    }
}


// Function: sub_402480 at 0x402480
void sub_402480(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned long long v1;  // [bp-0x10]

    v1 = a0;
    v0 = a1;
    __cxa_end_catch();
}


// Function: sub_4024e8 at 0x4024e8
int sub_4024e8(unsigned long long a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17)
{
    unsigned int v0;  // [bp-0x4]

    if (a1 != 3)
    {
        if (a1 != 2)
            goto LABEL_0x40256c;
        a11 = __cxa_begin_catch(a0);
        v0 += 200;
        __cxa_end_catch(a11);
        return v0;
    }
    a10 = __cxa_begin_catch(a0);
    v0 += 100;
    __cxa_end_catch(a10);
    return v0;
}


// Function: _Z18test_cpp_smart_ptrv at 0x402574
void test_cpp_smart_ptr()
{
    unsigned int *addr;  // x0
    unsigned int v0;  // [bp-0xac]
    char *v1;  // [bp-0xa8]
    unsigned int *p;  // [bp-0xa0]
    unsigned int *ptr4;  // [bp-0x98]
    char *v4;  // [bp-0x90]
    unsigned int *ptr6;  // [bp-0x88]
    unsigned int ptr[5];  // [bp-0x80]
    char *v7;  // [bp-0x78]
    unsigned int *ptr5;  // [bp-0x70]
    char *v9;  // [bp-0x68]
    unsigned int *ptr3;  // [bp-0x60]
    unsigned int v11;  // [bp-0x54]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x45]
    unsigned int v14;  // [bp-0x44]
    char v15;  // [bp-0x40]
    unsigned int v16;  // [bp-0x34]
    char v17;  // [bp-0x30]
    char v18;  // [bp-0x18]
    char *v19;  // [bp-0x10]
    char v20;  // [bp+0x0]

    v19 = &v20;
    addr = operatornew(4);
    *(addr) = 100;
    v9 = &v18;
    std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(&v18, addr);
    ptr3 = std::unique_ptr<int, std::default_delete<int>>::operator*(v9);
    *(ptr3) = 200;
    v7 = &v17;
    std::unique_ptr<int, std::default_delete<int>>::unique_ptr(&v17, std::move<std::unique_ptr<int, std::default_delete<int>>&>(&v18));
    ptr5 = std::unique_ptr<int, std::default_delete<int>>::operator*(v7);
    v16 = *(ptr5);
    *((long long *)&ptr[0]) = operatornew[](20);
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    v4 = &v15;
    std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(&v15, ptr);
    ptr6 = std::unique_ptr<int[], std::default_delete<int[]>>::operator[](v4, 2);
    v14 = *(ptr6);
    ptr4 = operatornew(4);
    *(ptr4) = 500;
    v1 = &v12;
    std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2, void>(int*, test_cpp_smart_ptr()::$_2 const&)(&v12, ptr4, &v13);
    p = std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::operator*() const(v1);
    v11 = *(p);
    v0 = v16 + v14 + v11;
    return;
}


// Function: sub_4026e8 at 0x4026e8
long long sub_4026e8(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]

    v0 = a1;
    _Unwind_Resume(a0); /* do not return */
}


// Function: sub_4026f8 at 0x4026f8
long long sub_4026f8(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned long long v1;  // [bp-0x10]

    v1 = a0;
    v0 = a1;
}


// Function: sub_402708 at 0x402708
long long sub_402708(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned long long v1;  // [bp-0x10]

    v1 = a0;
    v0 = a1;
}


// Function: sub_402718 at 0x402718
long long sub_402718(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned long long v1;  // [bp-0x10]

    v1 = a0;
    v0 = a1;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ at 0x40275c
long long std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2, void>(int*, test_cpp_smart_ptr()::$_2 const&)(char *a0, unsigned int *a1)
{
    unsigned long long v2;  // x2
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(a0, a1, v2);
    return std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(a0, a1, v2);
}


// Function: sub_402794 at 0x402794
void sub_402794()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv at 0x402798
long long std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::operator*() const()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const(v2);
    return std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const(v2);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev at 0x4027cc
unsigned long long * std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::~unique_ptr()(unsigned long long a0)
{
    unsigned long long *v5;  // x0
    unsigned long long v0;  // [bp-0x38]
    unsigned long long *v1;  // [bp-0x28]
    unsigned long long *ptr;  // [bp-0x20]
    char *v3;  // [bp-0x10]
    char v4;  // [bp+0x0]

    v3 = &v4;
    v5 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr()(a0);
    v1 = v5;
    ptr = v1;
    if (*(ptr))
    {
        v0 = std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get_deleter()(a0);
        v5 = test_cpp_smart_ptr()::$_2::operator()(int*) const(v0, *((long long *)std::move<int*&>(ptr)));
    }
    *(ptr) = 0;
    return v5;
}


// Function: sub_402848 at 0x402848
void sub_402848()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _Z13test_cpp_rttiv at 0x40284c
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI12RTTIDerivedB;
extern unsigned long long _ZTI8RTTIBase;

void test_cpp_rtti()
{
    void* *v0;  // [bp-0x98]
    void* *v1;  // [bp-0x90]
    void* *v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    void* *v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    void* *v6;  // [bp-0x68]
    void* *v7;  // [bp-0x60]
    void* *ptr;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    void* *p;  // [bp-0x48]
    void* *v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x30]
    unsigned int cur;  // [bp-0x24]
    void* *flag1;  // [bp-0x20]
    void* *result;  // [bp-0x18]
    char *v17;  // [bp-0x10]
    char v18;  // [bp+0x0]

    v17 = &v18;
    v9 = 8;
    ptr = operatornew(8);
    *(ptr) = NULL;
    RTTIDerivedA::RTTIDerivedA(ptr);
    result = ptr;
    p = operatornew(v9);
    *(p) = NULL;
    RTTIDerivedB::RTTIDerivedB(p);
    flag1 = p;
    cur = 0;
    v11 = result;
    if (!result)
        __cxa_bad_typeid();
    if (((char)std::type_info::operator==((long long)(*(v11))[8], &_ZTI12RTTIDerivedA) & 1))
        cur += 10;
    v7 = flag1;
    if (!flag1)
        __cxa_bad_typeid();
    if (((char)std::type_info::operator==((long long)(*(v7))[8], &_ZTI12RTTIDerivedB) & 1))
        cur += 20;
    v6 = result;
    if (result)
        v5 = __dynamic_cast(v6, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
    else
        v5 = 0;
    v13 = v5;
    if (v13)
        cur += RTTIDerivedA::derivedA_data(v13);
    v4 = flag1;
    if (flag1)
        v3 = __dynamic_cast(v4, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
    else
        v3 = 0;
    v12 = v3;
    if (v12)
        cur += RTTIDerivedB::derivedB_data(v12);
    v2 = result;
    if (!result)
        __cxa_bad_typeid();
    cur += (unsigned int)strlen(std::type_info::name((long long)(*(v2))[8]));
    v1 = result;
    if (result)
        (long long)(*(v1))[8](v1);
    v0 = flag1;
    if (!flag1)
        return;
    (long long)(*(v0))[8](v0);
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402a84
extern char g_404bd5;
extern char g_404bfa;
extern char g_404c18;
extern char g_404c34;
extern char g_404c50;
extern char g_404c6c;
extern char g_404c89;
extern char g_404ca5;
extern char g_404cc1;
extern char g_404cdd;
extern char g_404cf9;
extern char g_404d16;
extern char g_404d33;

void test_cpp_oo_features()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    printf(&g_404bd5);
    printf(&g_404bfa, (unsigned long long)test_cpp_member_func() & 4294967295);
    printf(&g_404c18, (unsigned long long)test_cpp_constructor() & 4294967295);
    printf(&g_404c34, (unsigned long long)test_cpp_virtual_func() & 4294967295);
    printf(&g_404c50, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
    printf(&g_404c6c, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
    printf(&g_404c89, (unsigned long long)test_cpp_operator_overload() & 4294967295);
    printf(&g_404ca5, (unsigned long long)test_cpp_template_func() & 4294967295);
    printf(&g_404cc1, (unsigned long long)test_cpp_template_class() & 4294967295);
    printf(&g_404cdd, (unsigned long long)test_cpp_lambda() & 4294967295);
    printf(&g_404cf9, (unsigned long long)test_cpp_exception() & 4294967295);
    printf(&g_404d16, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
    printf(&g_404d33, (unsigned long long)test_cpp_rtti() & 4294967295);
    return;
}


// Function: main at 0x402b90
unsigned int main()
{
    unsigned int result;  // [bp-0x18]
    unsigned int flag1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    result = 0;
    flag1 = 0;
    test_cpp_oo_features();
    return result;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ at 0x402bbc
long long std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(a0, a1, a2);
    return std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(a0, a1, a2);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ at 0x402bf0
long long std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v4;  // x0
    unsigned long long v5;  // x0
    char *v0;  // [bp-0x38]
    char v1;  // [bp-0x20], Other Possible Types: unsigned long long
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = &v1;
    v1 = a1;
    v4 = test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&)(a2);
    v5 = std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&, true>(int*&, test_cpp_smart_ptr()::$_2 const&)(a0, v0, v4);
    return std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&, true>(int*&, test_cpp_smart_ptr()::$_2 const&)(a0, v0, v4);
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE at 0x402c3c
long long test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&)(unsigned long a0)
{
    return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x402c50
long long std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&, true>(int*&, test_cpp_smart_ptr()::$_2 const&)(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v3;  // x0
    unsigned long long v4;  // x0
    unsigned long long v0;  // [bp-0x38]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = std::forward<int*&>(a1);
    v3 = test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&)(a2);
    v4 = std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&, test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&)(a0, v0, v3);
    return std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&, test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&)(a0, v0, v3);
}


// Function: sub_402ca4 at 0x402ca4
void sub_402ca4()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x402ca8
long long std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&, test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&)(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_Tuple_impl(test_cpp_smart_ptr()::$_2 const&)(a0, test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&)(a2));
    v3 = std::_Head_base<0ul, int*, false>::_Head_base<int*&>(a0, std::forward<int*&>(a1));
    return std::_Head_base<0ul, int*, false>::_Head_base<int*&>(a0, std::forward<int*&>(a1));
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ at 0x402cfc
long long std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_Tuple_impl(test_cpp_smart_ptr()::$_2 const&)(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2 const&)(a0, a1);
    return std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2 const&)(a0, a1);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ at 0x402d28
long long std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2 const&)(unsigned long a0, unsigned long a1)
{
    return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv at 0x402d3c
long long std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr()(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<0ul, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(a0);
    return std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<0ul, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv at 0x402d60
unsigned long long std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get_deleter()(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_deleter()(a0);
    return v0;
}


// Function: sub_402d90 at 0x402d90
void sub_402d90()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi at 0x402d94
int test_cpp_smart_ptr()::$_2::operator()(int*) const(unsigned long long a0, unsigned int *ptr)
{
    unsigned long long v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = a0;
    *(ptr) = 4294967295;
    if (!ptr)
        return a0;
    return operatordelete(ptr);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402ddc
long long std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<0ul, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>&)(a0);
    return int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402e00
long long int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>&)(a0);
    return std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ at 0x402e24
long long std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Head_base<0ul, int*, false>::_M_head(a0);
    return std::_Head_base<0ul, int*, false>::_M_head(a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv at 0x402e48
long long std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_deleter()(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<1ul, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(a0);
    return std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<1ul, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402e6c
long long std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<1ul, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = test_cpp_smart_ptr()::$_2& std::__get_helper<1ul, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>&)(a0);
    return test_cpp_smart_ptr()::$_2& std::__get_helper<1ul, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE at 0x402e90
long long test_cpp_smart_ptr()::$_2& std::__get_helper<1ul, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>&)(a0);
    return std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ at 0x402eb4
long long std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>&)(a0);
    return std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>&)(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ at 0x402ed8
long long std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>&)(unsigned long a0)
{
    return a0;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv at 0x402eec
unsigned long long std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const(a0);
    return v0;
}


// Function: sub_402f1c at 0x402f1c
void sub_402f1c()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv at 0x402f20
long long std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const(unsigned long long a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *((long long *)std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type const& std::get<0ul, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2> const&)(a0));
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x402f48
long long std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type const& std::get<0ul, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2> const&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2> const&)(a0);
    return int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2> const&)(a0);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402f6c
long long int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2> const&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2> const&)(a0);
    return std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2> const&)(a0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ at 0x402f90
long long std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2> const&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Head_base<0ul, int*, false>::_M_head(a0);
    return std::_Head_base<0ul, int*, false>::_M_head(a0);
}


// Function: _ZN11SimpleClassC2EiPKc at 0x402fb4
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[31];
    char field_23;
} struct_0;

long long SimpleClass::SimpleClass()
{
    struct_0 *ptr;  // x0
    unsigned int v3;  // w1
    char *v4;  // x2
    unsigned long long dst;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr->field_0 = v3;
    dst = strncpy(&ptr->padding_4, v4, 31);
    ptr->field_23 = 0;
    return dst;
}


// Function: _ZN11SimpleClass8setValueEi at 0x403000
long long SimpleClass::setValue()
{
    unsigned int *ptr;  // x0
    unsigned int v1;  // w1

    *(ptr) = v1;
    return ptr;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x403020
long long SimpleClass::getValue()
{
    unsigned int *v0;  // x0

    return *(v0);
}


// Function: _ZNK11SimpleClass7computeEi at 0x403038
long long SimpleClass::compute()
{
    unsigned int v3;  // w1
    unsigned int *ptr;  // x0
    unsigned int v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = v3 * *(ptr);
    return (strlen(ptr + 1) & 4294967295) + v0 & 4294967295;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x403080
void SimpleClass::getClassID(void* this)
{
    return;
}


// Function: _ZN14LifecycleClassC2Em at 0x403088
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass::LifecycleClass()
{
    unsigned long long ptr[2];  // x0
    unsigned long long v4;  // x1
    unsigned long long v5;  // x0
    unsigned long long v6;  // x0
    unsigned long long idx;  // [bp-0x28]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    ptr[1] = v4;
    if (!v4 * 4 >> 64)
        v5 = 4 * v4;
    else
        v5 = 18446744073709551615;
    v6 = operatornew[](v5);
    ptr[0] = v6;
    for (idx = 0; v4 > idx; idx += 1)
    {
        *((unsigned int *)(ptr[0] + idx * 4)) = 10 * (unsigned int)idx;
    }
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
    return v6;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x403138
long long LifecycleClass::getData()
{
    unsigned long long v1[2];  // x0
    unsigned long idx;  // x1
    unsigned int v0;  // [bp-0x1c]

    if (v1[1] <= idx)
    {
        v0 = 4294967295;
        return v0;
    }
    v0 = *((int *)(v1[0] + idx * 4));
    return v0;
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x403190
void LifecycleClass::getInstanceCount(void* this)
{
    return;
}


// Function: _ZN14LifecycleClassD2Ev at 0x40319c
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass::~LifecycleClass(void* ptr)
{
    unsigned long v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = *((long long *)ptr);
    if (*((long long *)ptr))
        operatordelete[](v0);
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
    return;
}


// Function: _ZN4BaseC2Ev at 0x4031e8
extern char g_417858;

long long Base::Base()
{
    unsigned long ptr;  // x0

    *((char **)ptr) = &g_417858;
    return ptr;
}


// Function: _ZN7DerivedC2Ei at 0x40320c
typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

extern unsigned long long g_417898;

long long Derived::Derived()
{
    unsigned long long v3;  // x0
    struct_0 *ptr;  // x0
    unsigned int v5;  // w1
    unsigned long long v0;  // [bp-0x30]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = &g_417898;
    v3 = Base::Base();
    *((unsigned long long *)&ptr->padding_0[0]) = v0;
    ptr->field_8 = v5;
    return v3;
}


// Function: _ZN4Base12virtual_funcEi at 0x40325c
long long Base::virtual_func()
{
    unsigned int v0;  // w1

    return v0 + 1;
}


// Function: _ZN7Derived12virtual_funcEi at 0x403278
typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

long long Derived::virtual_func()
{
    struct_0 *v0;  // x0
    unsigned int v1;  // w1

    return v0->field_8 * v1;
}


// Function: _ZN7DerivedD2Ev at 0x40329c
int Derived::~Derived(void* this)
{
    void* v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    return;
}


// Function: _ZN4BaseD2Ev at 0x4032c0
int Base::~Base(void* this)
{
    return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x4032d0
extern unsigned long long g_4178e0;
extern unsigned long long g_417910;

long long MultiDerived::MultiDerived()
{
    unsigned long long ptr;  // x0
    unsigned long long v5;  // x0
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = &g_4178e0;
    v1 = &g_417910;
    BaseA::BaseA(ptr);
    v5 = BaseB::BaseB(ptr + 16);
    *((unsigned long long *)ptr) = v0;
    *((unsigned long long *)(ptr + 16)) = v1;
    return v5;
}


// Function: _ZN12MultiDerivedD2Ev at 0x403330
int MultiDerived::~MultiDerived(void* this)
{
    void* v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x403364
extern unsigned long long g_4179e8;
extern unsigned long long g_417a18;
extern unsigned long long g_417a50;
extern unsigned long long g_417a70;
extern unsigned long long g_417a80;

long long DiamondDerived::DiamondDerived()
{
    unsigned long long ptr;  // x0
    unsigned long long v8;  // x0
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v5;  // [bp-0x10]
    char v6;  // [bp+0x0]

    v5 = &v6;
    v0 = &g_417a70;
    v1 = &g_417a80;
    v2 = &g_4179e8;
    v3 = &g_417a50;
    v4 = &g_417a18;
    VirtualBase::VirtualBase(ptr + 32);
    MiddleA::MiddleA(ptr, v0);
    v8 = MiddleB::MiddleB(ptr + 16, v1);
    *((unsigned long long *)ptr) = v2;
    *((unsigned long long *)(ptr + 32)) = v3;
    *((unsigned long long *)(ptr + 16)) = v4;
    return v8;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x403400
int DiamondDerived::~DiamondDerived(void* this)
{
    void* v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    return;
}


// Function: _ZN5PointC2Eii at 0x40343c
int Point::Point(void* ptr, int arg_0, int arg_1)
{
    *((int *)ptr) = arg_0;
    *((int *)&ptr[4]) = arg_1;
    return;
}


// Function: _ZNK5PointplERKS_ at 0x403468
long long Point::operator+(char *a0)
{
    unsigned int v3[2];  // x1
    char v0;  // [bp-0x18], Other Possible Types: unsigned long
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    Point::Point(&v0, *((int *)&a0) + v3[0], *((int *)&a0[4]) + v3[1]);
    return v0;
}


// Function: _ZNK5PointeqERKS_ at 0x4034b8
long long Point::operator==(char *a0)
{
    unsigned long v1;  // x1
    unsigned int v2;  // w8
    unsigned int v0;  // [bp-0x14]

    v0 = 0;
    if (*((int *)&a0) == *((int *)v1))
    {
        if (*((int *)&a0[4]) != *((int *)(v1 + 4)))
            v2 = 0;
        else
            v2 = 1;
        v0 = v2;
    }
    return v0 & 1;
}


// Function: _ZN5PointppEv at 0x40351c
long long Point::operator++()
{
    unsigned int ptr[2];  // x0

    ptr[0] = ptr[0] + 1;
    ptr[1] = ptr[1] + 1;
    return ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403548
int template_max<int>(int arg_0, int arg_1)
{
    unsigned int v0;  // [bp-0xc]

    if (arg_0 <= arg_1)
    {
        v0 = arg_1;
        return v0;
    }
    v0 = arg_0;
    return v0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x40358c
double template_max<double>(double arg_0, double arg_1)
{
    unsigned long long v1;  // d0
    unsigned long long v2;  // d1
    unsigned long v3;  // x0
    unsigned long long v0;  // [bp-0x18]

    if ((char)arm64g_calculate_condition(208, (((((unsigned long long)(char)(CmpF(v1, v2)) >> 5 & 3 | (unsigned long long)(CmpF(v1, v2) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v1, v2)) >> 5 & 3 | (unsigned long long)(CmpF(v1, v2) & 1)) & ((unsigned long long)(char)(CmpF(v1, v2)) >> 5 & 3 | (unsigned long long)(CmpF(v1, v2) & 1)) >> 1 & 1)) * 0x10000000, 0, 0))
    {
        v0 = v2;
        return v3;
    }
    v0 = v1;
    return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4035d4
long long template_swap<int>(unsigned int *ptr)
{
    unsigned int *p;  // x1
    unsigned int v0;  // [bp-0x14]

    v0 = *(ptr);
    *(ptr) = *(p);
    *(p) = v0;
    return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x403610
typedef struct struct_0 {
    char padding_0[40];
    unsigned int field_28;
} struct_0;

long long Container<int>::Container()
{
    struct_0 *ptr;  // x0

    ptr->field_28 = 0;
    return ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x403628
void Container<int>::push(void* ptr, int arg_0)
{
    unsigned long index;  // x10

    if (10 > (int)ptr[40])
    {
        index = (int)ptr[40];
        *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
        *((int *)((char *)ptr + 4 * index)) = arg_0;
    }
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x403674
long long Container<int>::get()
{
    unsigned int v1;  // w1
    unsigned int *ptr;  // x0
    unsigned int v0;  // [bp-0x4]

    if (!((char)(v1 >> 31) & 1) && ptr[10] > v1)
    {
        v0 = ptr[v1];
        return v0;
    }
    v0 = 0;
    return v0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4036d4
typedef struct struct_0 {
    char padding_0[40];
    unsigned int field_28;
} struct_0;

long long Container<int>::getSize()
{
    struct_0 *v0;  // x0

    return v0->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4036ec
typedef struct struct_0 {
    char padding_0[80];
    unsigned int field_50;
} struct_0;

long long Container<double>::Container()
{
    struct_0 *ptr;  // x0

    ptr->field_50 = 0;
    return ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403704
typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[72];
    unsigned int field_50;
} struct_0;

long long Container<double>::push()
{
    struct_0 *ptr;  // x0
    unsigned long index;  // x10
    unsigned long v2;  // d0

    if (10 > ptr->field_50)
    {
        index = ptr->field_50;
        ptr->field_50 = (unsigned int)index + 1;
        (&ptr->field_0)[index] = v2;
    }
    return ptr;
}


// Function: _ZNK9ContainerIdE3getEi at 0x403750
long long Container<double>::get()
{
    unsigned int v1;  // w1
    unsigned long long *ptr;  // x0
    unsigned long v0;  // [bp-0x8], Other Possible Types: unsigned long long

    if (!((char)(v1 >> 31) & 1) && (int)ptr[10] > v1)
    {
        v0 = ptr[v1];
        return ptr;
    }
    v0 = 0;
    return ptr;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4037b4
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x4037cc
long long std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(char *a0)
{
    unsigned long long v2;  // x1
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, v2);
    return std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, v2);
}


// Function: sub_4037fc at 0x4037fc
void sub_4037fc()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x403800
void std::unique_ptr<int, std::default_delete<int>>::operator*(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::unique_ptr<int, std::default_delete<int>>::get(this);
    return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x403834
long long std::move<std::unique_ptr<int, std::default_delete<int>>&>()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ at 0x403848
long long std::unique_ptr<int, std::default_delete<int>>::unique_ptr()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x1
    unsigned long long v4;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v4 = std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(v2, v3);
    return std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(v2, v3);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x403874
long long std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(char *a0)
{
    unsigned long long v2;  // x1
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(a0, v2);
    return std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(a0, v2);
}


// Function: sub_4038a4 at 0x4038a4
void sub_4038a4()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x4038a8
long long std::unique_ptr<int[], std::default_delete<int[]>>::operator[]()
{
    unsigned long long v2;  // x0
    unsigned long v3;  // x1
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return std::unique_ptr<int[], std::default_delete<int[]>>::get(v2) + v3 * 4;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x4038e8
int std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr(void* this)
{
    unsigned long long v3;  // x0
    unsigned long long *ptr;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
    if (*(ptr))
    {
        v3 = std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter(this);
        std::default_delete<int[]>::operator()<int>(v3, *(ptr));
    }
    *(ptr) = 0;
    return;
}


// Function: sub_403948 at 0x403948
void sub_403948()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev at 0x40394c
int std::unique_ptr<int, std::default_delete<int>>::~unique_ptr(void* this)
{
    unsigned long long *v4;  // x0
    unsigned long long v0;  // [bp-0x30]
    unsigned long long *v1;  // [bp-0x20]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(this);
    if (*(v1))
    {
        v0 = std::unique_ptr<int, std::default_delete<int>>::get_deleter(this);
        v4 = std::move<int*&>(v1);
        std::default_delete<int>::operator()(v0, *(v4));
    }
    *(v1) = 0;
    return;
}


// Function: sub_4039bc at 0x4039bc
void sub_4039bc()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZN12RTTIDerivedAC2Ev at 0x4039c0
extern unsigned long long g_417d30;

long long RTTIDerivedA::RTTIDerivedA()
{
    unsigned long long ptr;  // x0
    unsigned long long v4;  // x0
    unsigned long long v0;  // [bp-0x28]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = &g_417d30;
    v4 = RTTIBase::RTTIBase(ptr);
    *((unsigned long long *)ptr) = v0;
    return v4;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x403a04
extern unsigned long long g_417d80;

long long RTTIDerivedB::RTTIDerivedB()
{
    unsigned long long ptr;  // x0
    unsigned long long v4;  // x0
    unsigned long long v0;  // [bp-0x28]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = &g_417d80;
    v4 = RTTIBase::RTTIBase(ptr);
    *((unsigned long long *)ptr) = v0;
    return v4;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x403a48
void std::type_info::operator==(void* this, class std::type_info &arg_0)
{
    unsigned int v4;  // w8
    unsigned int v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x24]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = 1;
    if ((long long)this[8] == *((long long *)(arg_0 + 8)))
        return;
    v0 = 0;
    if (*((char *)(long long)this[8]) != 42)
    {
        if (strcmp((long long)this[8], *((long long *)(arg_0 + 8))))
            v4 = 0;
        else
            v4 = 1;
        v0 = v4;
    }
    v1 = v0;
    return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x403ae8
void RTTIDerivedA::derivedA_data(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x403afc
void RTTIDerivedB::derivedB_data(void* this)
{
    return;
}


// Function: _ZNKSt9type_info4nameEv at 0x403b10
void std::type_info::name(void* ptr)
{
    char *v0;  // [bp-0x18], Other Possible Types: unsigned long

    if (*((char *)(long long)ptr[8]) != 42)
    {
        v0 = (long long)ptr[8];
        return;
    }
    v0 = (long long)ptr[8] + 1;
    return;
}


// Function: _ZNK4Base7getNameEv at 0x403b64
void Base::getName(void* this)
{
    return;
}


// Function: _ZN4BaseD0Ev at 0x403b7c
int Base::~Base(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZNK7Derived7getNameEv at 0x403bac
void Derived::getName(void* this)
{
    return;
}


// Function: _ZN7DerivedD0Ev at 0x403bc4
int Derived::~Derived(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZN5BaseAC2Ev at 0x403bf4
extern char g_417990;

int BaseA::BaseA(void* ptr)
{
    *((char **)ptr) = &g_417990;
    return;
}


// Function: _ZN5BaseBC2Ev at 0x403c18
extern char g_4179b8;

int BaseB::BaseB(void* ptr)
{
    *((char **)ptr) = &g_4179b8;
    return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403c3c
void MultiDerived::funcA(void* this)
{
    return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x403c50
int MultiDerived::~MultiDerived(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x403c80
void MultiDerived::funcB(void* this)
{
    return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x403c94
long long non-virtual thunk to MultiDerived::funcB()(void* a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)MultiDerived::funcB(a0 - 16);
    return (unsigned long long)MultiDerived::funcB(a0 - 16);
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x403cac
long long non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x403cc4
long long non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZN5BaseA5funcAEv at 0x403cdc
void BaseA::funcA(void* this)
{
    return;
}


// Function: _ZN5BaseAD2Ev at 0x403cf0
int BaseA::~BaseA(void* this)
{
    return;
}


// Function: _ZN5BaseAD0Ev at 0x403d00
int BaseA::~BaseA(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZN5BaseB5funcBEv at 0x403d30
void BaseB::funcB(void* this)
{
    return;
}


// Function: _ZN5BaseBD2Ev at 0x403d44
int BaseB::~BaseB(void* this)
{
    return;
}


// Function: _ZN5BaseBD0Ev at 0x403d54
int BaseB::~BaseB(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZN11VirtualBaseC2Ev at 0x403d84
extern char g_417c18;

int VirtualBase::VirtualBase(void* ptr)
{
    *((char **)ptr) = &g_417c18;
    return;
}


// Function: _ZN7MiddleAC2Ev at 0x403da8
int MiddleA::MiddleA(void* ptr)
{
    unsigned long long idx[2];  // x1

    *((unsigned long long *)ptr) = idx[0];
    *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx[1];
    return;
}


// Function: _ZN7MiddleBC2Ev at 0x403ddc
int MiddleB::MiddleB(void* ptr)
{
    unsigned long long idx[2];  // x1

    *((unsigned long long *)ptr) = idx[0];
    *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx[1];
    return;
}


// Function: _ZN7MiddleA4funcEv at 0x403e10
void MiddleA::func(void* this)
{
    return;
}


// Function: _ZN7MiddleAD1Ev at 0x403e38
int MiddleA::~MiddleA(void* this)
{
    void* v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    return;
}


// Function: _ZN7MiddleAD0Ev at 0x403e74
int MiddleA::~MiddleA(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x403ea4
long long thunk to MiddleA::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)MiddleA::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)MiddleA::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x403ec4
long long thunk to MiddleA::~MiddleA()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x403ee4
long long thunk to MiddleA::~MiddleA()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZN7MiddleB4funcEv at 0x403f04
void MiddleB::func(void* this)
{
    return;
}


// Function: _ZN7MiddleBD1Ev at 0x403f2c
int MiddleB::~MiddleB(void* this)
{
    void* v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    return;
}


// Function: _ZN7MiddleBD0Ev at 0x403f68
int MiddleB::~MiddleB(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x403f98
long long thunk to MiddleB::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)MiddleB::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)MiddleB::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x403fb8
long long thunk to MiddleB::~MiddleB()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x403fd8
long long thunk to MiddleB::~MiddleB()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZN14DiamondDerived4funcEv at 0x403ff8
void DiamondDerived::func(void* this)
{
    return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x404020
int DiamondDerived::~DiamondDerived(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x404050
long long non-virtual thunk to DiamondDerived::func()(void* a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)DiamondDerived::func(a0 - 16);
    return (unsigned long long)DiamondDerived::func(a0 - 16);
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x404068
long long non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404080
long long non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x404098
long long thunk to DiamondDerived::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)DiamondDerived::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)DiamondDerived::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x4040b8
long long thunk to DiamondDerived::~DiamondDerived()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x4040d8
long long thunk to DiamondDerived::~DiamondDerived()(unsigned long long a0)
{
    unsigned long v1;  // x0
    unsigned long long v0;  // [bp-0x8]

    v0 = a0;
    return v1;
}


// Function: _ZN11VirtualBase4funcEv at 0x4040f8
void VirtualBase::func(void* this)
{
    return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x40410c
int VirtualBase::~VirtualBase(void* this)
{
    return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x40411c
int VirtualBase::~VirtualBase(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZN7MiddleAD2Ev at 0x40414c
int MiddleA::~MiddleA(void* this)
{
    return;
}


// Function: _ZN7MiddleBD2Ev at 0x404160
int MiddleB::~MiddleB(void* this)
{
    return;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x404174
int DiamondDerived::~DiamondDerived(void* this)
{
    unsigned long long v4;  // x1
    unsigned long long v0;  // [bp-0x30]
    void* v1;  // [bp-0x28]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = this;
    v0 = v4;
    return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x4041c0
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, class std::__uniq_ptr_data<int, std::default_delete<int>, true, true> &arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0);
    return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ at 0x4041ec
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl()
{
    unsigned long long v3;  // x1
    unsigned long long v5;  // x0
    unsigned long long *ptr;  // [bp-0x28]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    std::tuple<int*, std::default_delete<int>>::tuple(v5, std::move<std::tuple<int*, std::default_delete<int>>&>(v3));
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v3);
    *(ptr) = 0;
    return ptr;
}


// Function: sub_404240 at 0x404240
void sub_404240()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x404244
class std::remove_reference<std::tuple<int*, std::default_delete<int>>&>::type & std::move<std::tuple<int*, std::default_delete<int>>&>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    return this;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ at 0x404258
int std::tuple<int*, std::default_delete<int>>::tuple(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(this, arg_0);
    return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x404284
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::get<0ul, int*, std::default_delete<int>>(v2);
    return std::get<0ul, int*, std::default_delete<int>>(v2);
}


// Function: __clang_call_terminate at 0x4042a8
void __clang_call_terminate()
{
    unsigned long long v1;  // x30
    unsigned long long v0;  // [bp-0x10]

    v0 = v1;
    std::terminate(__cxa_begin_catch()); /* do not return */
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x4042b4
long long std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl()
{
    unsigned long long *ptr;  // x0
    unsigned long long *v3;  // x1
    unsigned long long v4;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v4 = std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl(ptr, v3);
    *(ptr) = *(v3);
    return v4;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x4042f4
long long std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl(unsigned long long *a0)
{
    return a0;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404308
class std::tuple_element<0ul, std::tuple<int*, std::default_delete<int>>>::type & std::get<0ul, int*, std::default_delete<int>>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__get_helper<0ul, int*, std::default_delete<int>>(this);
    return std::__get_helper<0ul, int*, std::default_delete<int>>(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40432c
int *& std::__get_helper<0ul, int*, std::default_delete<int>>(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x404350
void std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<0ul, int*, false>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x404374
long long std::_Head_base<0ul, int*, false>::_M_head()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN8RTTIBaseC2Ev at 0x404388
extern char g_417d58;

int RTTIBase::RTTIBase(void* ptr)
{
    *((char **)ptr) = &g_417d58;
    return;
}


// Function: _ZN12RTTIDerivedAD2Ev at 0x4043ac
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    void* v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4043d0
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x404400
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x404414
int RTTIBase::~RTTIBase(void* this)
{
    return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x404424
int RTTIBase::~RTTIBase(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x404454
void RTTIBase::getType(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedBD2Ev at 0x404468
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    void* v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40448c
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this);
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4044bc
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x4044d0
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, int *arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0);
    return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x4044fc
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(void* a0)
{
    unsigned long long *ptr;  // x0
    unsigned long v4;  // x1
    void* v0;  // [bp-0x30]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = a0;
    std::tuple<int*, std::default_delete<int>>::tuple<true, true>(a0);
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr();
    *(ptr) = v4;
    return ptr;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv at 0x404540
long long std::tuple<int*, std::default_delete<int>>::tuple<true, true>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(v2);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(v2);
}


// Function: sub_404568 at 0x404568
void sub_404568()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev at 0x40456c
int std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl(this);
    std::_Head_base<0ul, int*, false>::_Head_base(this);
    return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x40459c
long long std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base(v2);
    return std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base(v2);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev at 0x4045c0
long long std::_Head_base<0ul, int*, false>::_Head_base()
{
    unsigned long long *ptr;  // x0

    *(ptr) = 0;
    return ptr;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x4045d8
int std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base(void* this)
{
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x4045e8
long long std::unique_ptr<int, std::default_delete<int>>::get_deleter()
{
    unsigned long long v3;  // x0
    unsigned long long v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(v3);
    return v0;
}


// Function: sub_404618 at 0x404618
void sub_404618()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x40461c
void std::default_delete<int>::operator()(void* this, int *arg_0)
{
    void* v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    if (!arg_0)
        return;
    operatordelete(arg_0);
    return;
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x404658
long long std::move<int*&>()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x40466c
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::get<1ul, int*, std::default_delete<int>>(this);
    return;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404690
long long std::get<1ul, int*, std::default_delete<int>>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__get_helper<1ul, std::default_delete<int>>(v2);
    return std::__get_helper<1ul, std::default_delete<int>>(v2);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4046b4
class std::default_delete<int> & std::__get_helper<1ul, std::default_delete<int>>(void* this, class std::_Tuple_impl<1ul, std::default_delete<int>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x4046d8
void std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<1ul, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x4046fc
long long std::_Head_base<1ul, std::default_delete<int>, true>::_M_head()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x404710
long long std::unique_ptr<int, std::default_delete<int>>::get()
{
    unsigned long long v3;  // x0
    unsigned long long v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v3);
    return v0;
}


// Function: sub_404740 at 0x404740
void sub_404740()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x404744
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::get<0ul, int*, std::default_delete<int>>(this);
    return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x40476c
long long std::get<0ul, int*, std::default_delete<int>>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__get_helper<0ul, int*, std::default_delete<int>>(v2);
    return std::__get_helper<0ul, int*, std::default_delete<int>>(v2);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404790
int *& std::__get_helper<0ul, int*, std::default_delete<int>>(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x4047b4
void std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<0ul, int*, false>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x4047d8
long long std::_Head_base<0ul, int*, false>::_M_head()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi at 0x4047ec
int std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(void* this, int *arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(this, arg_0);
    return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x404818
long long std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(void* a0)
{
    unsigned long long *ptr;  // x0
    unsigned long v3;  // x1
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>(a0);
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(a0);
    *(ptr) = v3;
    return ptr;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x40485c
long long std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl(v2);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl(v2);
}


// Function: sub_404884 at 0x404884
void sub_404884()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404888
long long std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::get<0ul, int*, std::default_delete<int[]>>(v2);
    return std::get<0ul, int*, std::default_delete<int[]>>(v2);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x4048ac
int std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl(void* this)
{
    void* v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    std::_Tuple_impl<1ul, std::default_delete<int[]>>::_Tuple_impl(this);
    std::_Head_base<0ul, int*, false>::_Head_base();
    return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x4048dc
long long std::_Tuple_impl<1ul, std::default_delete<int[]>>::_Tuple_impl()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base(v2);
    return std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base(v2);
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev at 0x404900
int std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base(void* this)
{
    return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404910
class std::tuple_element<0ul, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0ul, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
    return std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404934
int *& std::__get_helper<0ul, int*, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x404958
void std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
    void* v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    std::_Head_base<0ul, int*, false>::_M_head();
    return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x40497c
long long std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter()
{
    unsigned long long v3;  // x0
    unsigned long long v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v3);
    return v0;
}


// Function: sub_4049ac at 0x4049ac
void sub_4049ac()
{
    __clang_call_terminate(); /* do not return */
}


// Failed to decompile function _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ at 0x4049b0
// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x4049ec
void std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(void* this)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::get<1ul, int*, std::default_delete<int[]>>(this);
    return;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404a10
long long std::get<1ul, int*, std::default_delete<int[]>>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__get_helper<1ul, std::default_delete<int[]>>(v2);
    return std::__get_helper<1ul, std::default_delete<int[]>>(v2);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404a34
class std::default_delete<int[]> & std::__get_helper<1ul, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<1ul, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x404a58
void std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<1ul, std::default_delete<int[]>> &arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<1ul, std::default_delete<int[]>, true>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404a7c
long long std::_Head_base<1ul, std::default_delete<int[]>, true>::_M_head()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404a90
void std::unique_ptr<int[], std::default_delete<int[]>>::get(void* this)
{
    unsigned long long v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
    return;
}


// Function: sub_404ac0 at 0x404ac0
void sub_404ac0()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404ac4
long long std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *((long long *)std::get<0ul, int*, std::default_delete<int[]>>(v2));
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x404aec
class std::tuple_element<0ul, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0ul, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
    return std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404b10
int *& std::__get_helper<0ul, int*, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404b34
void std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
    void* v0;  // [bp-0x18]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = this;
    std::_Head_base<0ul, int*, false>::_M_head();
    return;
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x404b58
int *& std::forward<int*&>(void* this, class std::remove_reference<int*&>::type &arg_0)
{
    return this;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x404b6c
int std::_Head_base<0ul, int*, false>::_Head_base<int*&>(void* ptr, int *&arg_0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    *((long long *)ptr) = *((long long *)std::forward<int*&>(arg_0, arg_0));
    return;
}


// Function: _fini at 0x404ba8
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

