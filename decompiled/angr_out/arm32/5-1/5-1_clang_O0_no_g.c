// Angr Decompilation of 5-1_clang_O0_no_g
// Platform: ARMEL

// Function: _init at 0x400d2c
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_400d38 at 0x400d38
extern unsigned int g_415008;

int sub_400d38()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_415008;
}


// Function: $a.0 at 0x400e84
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

int $a.0()
{
    unsigned int v1;  // r0
    void* v0;  // [bp-0xc]

    v0 = &_ZStL8__ioinit;
    std::ios_base::Init::Init(&_ZStL8__ioinit);
    v1 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, v0, &__dso_handle);
    return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, v0, &__dso_handle);
}


// Function: $a.193 at 0x400ed0
unsigned int $a.193()
{
    unsigned int v0;  // r0

    v0 = $a.0();
    return $a.0();
}


// Function: _start at 0x400ee4
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_400f1c at 0x400f1c
void sub_400f1c()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400f28
extern unsigned int g_415088;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_415088)
        goto LABEL_400f40;
    return v0;
LABEL_400f40:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x400f4c
extern char __bss_start;
extern unsigned int g_415084;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_400f6c;
    return &__bss_start;
LABEL_400f6c:
    if (g_415084)
        goto LABEL_400f7c;
    return &__bss_start;
LABEL_400f7c:
    goto g_415084;
}


// Function: register_tm_clones at 0x400f90
extern char __bss_start;
extern unsigned int g_41508c;

int register_tm_clones()
{
    if (0)
        goto LABEL_400fbc;
    return &__bss_start;
LABEL_400fbc:
    if (g_41508c)
        goto LABEL_400fcc;
    return &__bss_start;
LABEL_400fcc:
    goto g_41508c;
}


// Function: __do_global_dtors_aux at 0x400fe0
extern char __bss_start;
extern unsigned int __dso_handle;
extern unsigned int g_415090;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!__bss_start)
        goto LABEL_400ffc;
    return v2;
LABEL_400ffc:
    v1 = v3;
    v0 = v4;
    if (!g_415090)
    {
        v5 = deregister_tm_clones();
        __bss_start = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x401048
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: _Z20test_cpp_member_funcv at 0x40104c
void test_cpp_member_func()
{
    unsigned int v4;  // r1
    unsigned int v5;  // r2
    unsigned int v6;  // r3
    char *v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    char v3;  // [bp-0x2c]

    v0 = &v3;
    SimpleClass::SimpleClass(&v3, 5, "Test");
    SimpleClass::setValue(v0, 10);
    v2 = SimpleClass::getValue(v0);
    v1 = SimpleClass::compute(v0, 3);
    SimpleClass::getClassID(v1, v4, v5, v6);
    return;
}


// Function: _Z20test_cpp_constructorv at 0x4010c8
void test_cpp_constructor()
{
    unsigned int v6;  // r0
    unsigned int v7;  // r1
    unsigned int v8;  // r2
    unsigned int v9;  // r3
    unsigned int count;  // [bp-0x28]
    char *v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    char v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0xc]

    v4 = 0;
    v1 = &v3;
    LifecycleClass::LifecycleClass(&v3, 5);
    v2 = LifecycleClass::getData(v1, 2);
    v5 = v4 + v2;
    count = LifecycleClass::getInstanceCount(v4 + v2, v2);
    v4 = v5 + count;
    LifecycleClass::getInstanceCount(v6, v7, v8, v9);
    return;
}


// Function: sub_40115c at 0x40115c
int sub_40115c(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp+0xc]
    unsigned int v1;  // [bp+0x10]

    v1 = a0;
    v0 = a1;
    __cxa_end_cleanup();
}


// Function: _Z17call_virtual_funcP4Basei at 0x401174
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    char v0;  // [bp-0xc]

    (*((int *)*((int *)*((int *)&v0))))(arg_0, arg_1, *((int *)*((int *)arg_0)));
    return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4011ac
class Base {
} Base;

void test_cpp_virtual_func()
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    unsigned int v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x34]
    unsigned int v6;  // [bp-0x30]
    Base *v7;  // [bp-0x2c]
    Base *v8;  // [bp-0x28]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    char v11;  // [bp-0x14]
    char v12;  // [bp-0xc]

    Base::Base(&v12);
    Derived::Derived(&v11, 3);
    v4 = Base::virtual_func(&v12, 5);
    v10 = v4;
    v3 = Derived::virtual_func(&v11, 5);
    v9 = v3;
    v8 = &v12;
    v7 = &v11;
    v2 = (unsigned int)call_virtual_func(v8, 5);
    v6 = v2;
    v1 = (unsigned int)call_virtual_func(v7, 5);
    v5 = v1;
    v0 = v10 + v9 + v6 + v5;
    return;
}


// Function: sub_401290 at 0x401290
int sub_401290(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    v1 = a0;
    v0 = a1;
    __cxa_end_cleanup();
}


// Function: sub_40129c at 0x40129c
int sub_40129c(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    v1 = a0;
    v0 = a1;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012c0
typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

void test_cpp_multiple_inheritance()
{
    struct_1 **v14;  // r0
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    struct_1 **result;  // [bp-0x3c]
    struct_1 **v4;  // [bp-0x38]
    struct_1 **v5;  // [bp-0x34]
    unsigned int v6;  // [bp-0x30]
    unsigned int v7;  // [bp-0x24]
    struct_1 **v8;  // [bp-0x20]
    struct_1 **v9;  // [bp-0x1c]
    char v10;  // [bp-0x18]
    unsigned int v11;  // [bp-0x14]
    char v12;  // [bp-0x10]
    unsigned int v13;  // [bp-0xc]

    result = &v10;
    MultiDerived::MultiDerived(&v10);
    v11 = 100;
    v13 = 200;
    v9 = result;
    v4 = NULL;
    if (result)
        v4 = &v12;
    v8 = v4;
    v2 = *(v9)->field_0(v9, *((int *)*((int *)&v10)));
    v7 = v2;
    v1 = *(v8)->field_0(v8, *(v8)->field_0);
    v6 = v1;
    v14 = v9 - v8;
    if (v9 != v8)
        v14 = 0x1;
    v5 = v14;
    v0 = v7 + v6 + (char *)v5;
    return;
}


// Function: sub_4013a8 at 0x4013a8
int sub_4013a8(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp+0x1c]
    unsigned int v1;  // [bp+0x20]

    v1 = a0;
    v0 = a1;
    __cxa_end_cleanup();
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4013c0
typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

void test_cpp_diamond_inheritance()
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    char *result;  // [bp-0x3c]
    struct_1 **v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x34]
    unsigned int v6;  // [bp-0x28]
    struct_1 **v7;  // [bp-0x24]
    void* ptr;  // [bp-0x20], Other Possible Types: char
    char v9;  // [bp-0x1c]

    result = &ptr;
    DiamondDerived::DiamondDerived(&ptr);
    *((unsigned int *)&result[4 + ptr[12]]) = 50;
    v4 = NULL;
    if (result)
        v4 = &(&ptr)[ptr[12]];
    v7 = v4;
    v2 = *(v7)->field_0(v7, *(v7)->field_0);
    v6 = v2;
    *((unsigned int *)&(&v9)[ptr[12]]) = 100;
    v1 = *(v7)->field_0(v7, *(v7)->field_0);
    v5 = v1;
    v0 = v6 + v5;
    return;
}


// Function: sub_4014ac at 0x4014ac
int sub_4014ac(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp+0x18]
    unsigned int v1;  // [bp+0x1c]

    v1 = a0;
    v0 = a1;
    __cxa_end_cleanup();
}


// Function: _Z26test_cpp_operator_overloadv at 0x4014c4
void test_cpp_operator_overload()
{
    char *v0;  // [bp-0x30]
    char *v1;  // [bp-0x2c]
    char *v2;  // [bp-0x28]
    char v3;  // [bp-0x21]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    char v6;  // [bp-0x10]

    v0 = &v6;
    Point::Point(&v6, 1, 2);
    v1 = &v5;
    Point::Point(&v5, 3, 4);
    v2 = &v4;
    Point::operator+(&v4, v0, v1);
    v3 = Point::operator==(v0, v1);
    Point::operator++(v2, v3);
    if (!(v3 & 1))
        return;
    return;
}


// Function: _Z22test_cpp_template_funcv at 0x401550
void test_cpp_template_func()
{
    unsigned int v5;  // r1
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0xc]

    v4 = template_max<int>(3, 7);
    v3 = template_max<double>(0, 0x40040000, 0, 0x3ff80000);
    v2 = 10;
    v1 = 20;
    template_swap<int>(&v2, &v1);
    v0 = v4;
    __aeabi_d2iz(v3, v5);
    return;
}


// Function: _Z23test_cpp_template_classv at 0x4015e8
void test_cpp_template_class()
{
    unsigned int v9;  // r1
    char *v0;  // [bp-0xb0]
    char *v1;  // [bp-0xac]
    unsigned int result;  // [bp-0xa8]
    unsigned int v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    unsigned int size;  // [bp-0x3c]
    unsigned int v7;  // [bp-0x38]
    char v8;  // [bp-0x34]

    v0 = &v8;
    Container<int>::Container(&v8);
    Container<int>::push(v0, 10);
    Container<int>::push(v0, 20);
    Container<int>::push(v0, 30);
    result = 0;
    v7 = Container<int>::get(v0, 0);
    size = Container<int>::getSize(v0, v7);
    v1 = &v5;
    Container<double>::Container(&v5);
    Container<double>::push(v1);
    v4 = Container<double>::get(v1, result);
    v3 = v7 + size;
    __aeabi_d2iz(v4, v9);
    return;
}


// Function: _Z15test_cpp_lambdav at 0x4016b4
void test_cpp_lambda()
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x20]
    char v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0x18]
    char *v5;  // [bp-0x14]
    unsigned int v6;  // [bp-0x10]
    unsigned int v7;  // [bp-0xc]

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


// Function: _ZZ15test_cpp_lambdavENK3$_1clEi at 0x401724
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int test_cpp_lambda()::$_1::operator()(int) const()
{
    struct_0 *idx;  // r0
    unsigned int v1;  // r1

    idx->field_4->field_0 = idx->field_4->field_0 + 5;
    return idx->field_4->field_0 + v1 * idx->field_0;
}


// Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ at 0x401760
int _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_()
{
    unsigned int v0;  // r1
    unsigned int v1;  // r2

    return v0 + v1;
}


// Function: _Z18test_cpp_exceptionv at 0x401784
extern char _ZTIi;

void test_cpp_exception()
{
    unsigned int v3;  // lr
    unsigned int *ptr;  // r0
    unsigned int v5;  // r3
    unsigned int result;  // [bp-0x28]
    unsigned int flag1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    result = 0;
    flag1 = 0;
    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    __cxa_throw(ptr, &_ZTIi, result, v5);
}


// Function: sub_4017c1 at 0x4017c1
void sub_4017c1(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017c5 at 0x4017c5
int sub_4017c5(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017cd at 0x4017cd
int sub_4017cd(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017d1 at 0x4017d1
int sub_4017d1(unsigned int a0)
{
}


// Function: sub_4017d5 at 0x4017d5
void sub_4017d5(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017dd at 0x4017dd
void sub_4017dd(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4017e1 at 0x4017e1
int sub_4017e1()
{
}


// Function: sub_4017e9 at 0x4017e9
void sub_4017e9(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_4017ed at 0x4017ed
void sub_4017ed(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_4017f1 at 0x4017f1
int sub_4017f1(unsigned int a0)
{
}


// Function: sub_4017f5 at 0x4017f5
int sub_4017f5(unsigned int a0)
{
}


// Function: sub_4017f9 at 0x4017f9
int sub_4017f9(unsigned int a0)
{
}


// Function: sub_4017fd at 0x4017fd
void sub_4017fd(unsigned int a0)
{
}


// Function: sub_401809 at 0x401809
int sub_401809(unsigned int a0, unsigned int a1)
{
}


// Function: sub_40180d at 0x40180d
int sub_40180d()
{
}


// Function: sub_401815 at 0x401815
int sub_401815(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401819 at 0x401819
int sub_401819(unsigned int a0)
{
}


// Function: sub_40181d at 0x40181d
void sub_40181d(unsigned int a0)
{
}


// Function: sub_401825 at 0x401825
void sub_401825(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401829 at 0x401829
int sub_401829()
{
}


// Function: sub_401831 at 0x401831
int sub_401831(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_401835 at 0x401835
int sub_401835(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_401839 at 0x401839
int sub_401839(unsigned int a0)
{
}


// Function: sub_40183d at 0x40183d
int sub_40183d(unsigned int a0)
{
}


// Function: sub_401841 at 0x401841
int sub_401841(unsigned int a0)
{
}


// Function: sub_401844 at 0x401844
void sub_401844()
{
    __cxa_end_catch();
}


// Function: sub_40184d at 0x40184d
int sub_40184d(unsigned int a0)
{
}


// Function: sub_401851 at 0x401851
int sub_401851(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_401859 at 0x401859
int sub_401859(unsigned int a0)
{
}


// Function: sub_40185d at 0x40185d
void sub_40185d()
{
}


// Function: sub_401861 at 0x401861
void sub_401861()
{
}


// Function: sub_40186d at 0x40186d
int sub_40186d(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401875 at 0x401875
int sub_401875(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401879 at 0x401879
int sub_401879(unsigned int a0)
{
}


// Function: sub_40187d at 0x40187d
int sub_40187d(unsigned int a0)
{
}


// Function: sub_401881 at 0x401881
void sub_401881(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401889 at 0x401889
void sub_401889(unsigned int a0, unsigned int a1)
{
}


// Function: sub_40188d at 0x40188d
int sub_40188d(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401895 at 0x401895
int sub_401895(unsigned int a0)
{
}


// Function: sub_401899 at 0x401899
int sub_401899()
{
}


// Function: sub_40189d at 0x40189d
int sub_40189d(unsigned int a0)
{
}


// Function: sub_4018a0 at 0x4018a0
unsigned int sub_4018a0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    char v0;  // [bp-0x4]

    __cxa_end_catch();
    return *((int *)&v0);
}


// Function: sub_4018b9 at 0x4018b9
int sub_4018b9(unsigned int a0)
{
}


// Function: sub_4018c4 at 0x4018c4
void sub_4018c4()
{
    sub_4018c8();
    return;
}


// Function: sub_4018c8 at 0x4018c8
int sub_4018c8()
{
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]
    unsigned int v2;  // [bp-0x4]
    unsigned int v3;  // [bp+0x10]

    v3 = __cxa_begin_catch(v0);
    v2 = v1 + 200;
    __cxa_end_catch(v1 + 200);
}


// Function: sub_4018e9 at 0x4018e9
int sub_4018e9()
{
}


// Function: sub_4018f1 at 0x4018f1
int sub_4018f1(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: _Z18test_cpp_smart_ptrv at 0x4018f4
void test_cpp_smart_ptr()
{
    unsigned int *addr;  // r0
    unsigned int v0;  // [bp-0x60]
    char *v1;  // [bp-0x5c]
    unsigned int *p;  // [bp-0x58]
    unsigned int *ptr4;  // [bp-0x54]
    char *v4;  // [bp-0x50]
    unsigned int v5;  // [bp-0x4c]
    unsigned int *ptr6;  // [bp-0x48]
    unsigned int ptr[5];  // [bp-0x44]
    char *v8;  // [bp-0x40]
    unsigned int *ptr5;  // [bp-0x3c]
    char *v10;  // [bp-0x38]
    unsigned int *ptr3;  // [bp-0x34]
    unsigned int v12;  // [bp-0x30]
    char v13;  // [bp-0x2c]
    char v14;  // [bp-0x28]
    unsigned int v15;  // [bp-0x24]
    char v16;  // [bp-0x20]
    unsigned int v17;  // [bp-0x1c]
    char v18;  // [bp-0x18]
    char v19;  // [bp-0xc]

    addr = operatornew(4);
    *(addr) = 100;
    v10 = &v19;
    std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(&v19, addr);
    ptr3 = std::unique_ptr<int, std::default_delete<int>>::operator*(v10);
    *(ptr3) = 200;
    v8 = &v18;
    std::unique_ptr<int, std::default_delete<int>>::unique_ptr(&v18, std::move<std::unique_ptr<int, std::default_delete<int>>&>(&v19, ptr3));
    ptr5 = std::unique_ptr<int, std::default_delete<int>>::operator*(v8);
    v17 = *(ptr5);
    ptr[0] = operatornew[](20);
    ptr[0] = 1;
    v5 = 2;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    v4 = &v16;
    std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(&v16, ptr);
    ptr6 = std::unique_ptr<int[], std::default_delete<int[]>>::operator[](v4, v5);
    v15 = *(ptr6);
    ptr4 = operatornew(4);
    *(ptr4) = 500;
    v1 = &v13;
    std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2, void>(int*, test_cpp_smart_ptr()::$_2 const&)(&v13, ptr4, &v14);
    p = std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::operator*() const(v1);
    v12 = *(p);
    v0 = v17 + v15 + v12;
    return;
}


// Function: sub_401a6c at 0x401a6c
int sub_401a6c(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = a0;
    v0 = a1;
    __cxa_end_cleanup();
}


// Function: sub_401a78 at 0x401a78
int sub_401a78(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = a0;
    v0 = a1;
}


// Function: sub_401a84 at 0x401a84
int sub_401a84(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = a0;
    v0 = a1;
}


// Function: sub_401a90 at 0x401a90
int sub_401a90(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = a0;
    v0 = a1;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ at 0x401acc
int std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2, void>(int*, test_cpp_smart_ptr()::$_2 const&)(char *a0, unsigned int *a1)
{
    unsigned int v0;  // r2

    std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(a0, a1, v0);
    return a0;
}


// Function: sub_401b0c at 0x401b0c
void sub_401b0c()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv at 0x401b10
int std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::operator*() const()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const(v0);
    return std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const(v0);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev at 0x401b44
unsigned int std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::~unique_ptr()(unsigned int a0)
{
    unsigned int *v5;  // r0
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int *v2;  // [bp-0x18]
    unsigned int *ptr;  // [bp-0x14]
    unsigned int v4;  // [bp-0xc]

    v1 = a0;
    v4 = a0;
    v2 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr()(a0);
    ptr = v2;
    if (*(ptr))
    {
        v0 = std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get_deleter()(v1);
        v5 = std::move<int*&>(ptr);
        test_cpp_smart_ptr()::$_2::operator()(int*) const(v0, *(v5));
    }
    *(ptr) = 0;
    return v4;
}


// Function: sub_401bd0 at 0x401bd0
void sub_401bd0()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _Z13test_cpp_rttiv at 0x401bd4
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;

void test_cpp_rtti()
{
    unsigned int v18;  // r2
    unsigned int v19;  // r3
    void* *v0;  // [bp-0x50]
    void* *v1;  // [bp-0x4c]
    void* *v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    void* *v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    void* *v6;  // [bp-0x38]
    void* *v7;  // [bp-0x34]
    unsigned int v8;  // [bp-0x30]
    void* *ptr;  // [bp-0x2c]
    unsigned int flag2;  // [bp-0x28]
    void* *p;  // [bp-0x24]
    void* *v12;  // [bp-0x20]
    unsigned int flag4;  // [bp-0x1c]
    unsigned int flag3;  // [bp-0x18]
    unsigned int cur;  // [bp-0x14]
    void* *flag1;  // [bp-0x10]
    void* *result;  // [bp-0xc]

    v8 = 4;
    ptr = operatornew(4);
    flag2 = 0;
    *(ptr) = 0;
    RTTIDerivedA::RTTIDerivedA(ptr, 0, v18, v19);
    result = ptr;
    p = operatornew(v8);
    *(p) = flag2;
    RTTIDerivedB::RTTIDerivedB(p, flag2, v18, v19);
    flag1 = p;
    cur = flag2;
    v12 = result;
    if (!result)
        __cxa_bad_typeid();
    if (std::type_info::operator==((int)(*(v12))[4], &_ZTI12RTTIDerivedA))
        cur += 10;
    v7 = flag1;
    if (!flag1)
        __cxa_bad_typeid();
    if (std::type_info::operator==((int)(*(v7))[4], &_ZTI12RTTIDerivedB))
        cur += 20;
    v6 = result;
    v5 = (!result ? NULL : __dynamic_cast(v6, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, NULL));
    flag3 = v5;
    if (flag3)
        cur += RTTIDerivedA::derivedA_data(flag3);
    v4 = flag1;
    v3 = (!flag1 ? NULL : __dynamic_cast(v4, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, NULL));
    flag4 = v3;
    if (flag4)
        cur += RTTIDerivedB::derivedB_data(flag4);
    v2 = result;
    if (!result)
        __cxa_bad_typeid();
    cur += strlen(std::type_info::name((int)(*(v2))[4]));
    v1 = result;
    if (result)
        (int)(*(v1))[4](v1, (int)(*(v1))[4]);
    v0 = flag1;
    if (!flag1)
        return;
    (int)(*(v0))[4](v0, (int)(*(v0))[4]);
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401e74
extern char g_404221;
extern char g_404246;
extern char g_404264;
extern char g_404280;
extern char g_40429c;
extern char g_4042b8;
extern char g_4042d5;
extern char g_4042f1;
extern char g_40430d;
extern char g_404329;

void test_cpp_oo_features()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    printf(&g_404221);
    printf(&g_404246, (unsigned int)test_cpp_member_func());
    printf(&g_404264, (unsigned int)test_cpp_constructor());
    printf(&g_404280, (unsigned int)test_cpp_virtual_func());
    printf(&g_40429c, (unsigned int)test_cpp_multiple_inheritance());
    printf(&g_4042b8, (unsigned int)test_cpp_diamond_inheritance());
    printf(&g_4042d5, (unsigned int)test_cpp_operator_overload());
    printf(&g_4042f1, (unsigned int)test_cpp_template_func());
    printf(&g_40430d, (unsigned int)test_cpp_template_class());
    printf(&g_404329, (unsigned int)test_cpp_lambda());
    test_cpp_exception(); /* do not return */
}


// Function: sub_401f40 at 0x401f40
extern char g_404345;
extern char g_404362;
extern char g_40437f;

int sub_401f40(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v1;  // r0
    unsigned int v2;  // r0

    printf(&g_404345, a0);
    printf(&g_404362, (unsigned int)test_cpp_smart_ptr());
    v1 = (unsigned int)test_cpp_rtti();
    v2 = printf(&g_40437f, v1);
    return printf(&g_40437f, v1);
}


// Function: main at 0x401fb4
int main()
{
    unsigned int v3;  // lr
    unsigned int result;  // [bp-0x10]
    unsigned int flag1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    result = 0;
    flag1 = 0;
    test_cpp_oo_features(); /* do not return */
}


// Function: sub_401fd3 at 0x401fd3
int sub_401fd3()
{
}


// Function: sub_401fd5 at 0x401fd5
int sub_401fd5()
{
    unsigned int v0;  // cc_op
    unsigned int v1;  // cc_dep1
    unsigned int v2;  // cc_dep2
    unsigned int v3;  // cc_ndep

    if ((char)armg_calculate_condition(v0, v1, v2, v3))
        goto LABEL_0x401fef;
}


// Function: sub_401fd8 at 0x401fd8
int sub_401fd8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ at 0x401fe0
int std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(char *a0)
{
    unsigned int v0;  // r1
    unsigned int v1;  // r2

    std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)(a0, v0, v1);
    return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ at 0x40201c
int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)()
{
    unsigned int v0;  // r2
    unsigned int v2;  // r0

    std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&, true>(int*&, test_cpp_smart_ptr()::$_2 const&)(v2, &vvar_8{r12|4b}, test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&)(v0));
    return v2;
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE at 0x402064
int test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&)(unsigned int a0)
{
    return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x402078
unsigned int std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&, true>(int*&, test_cpp_smart_ptr()::$_2 const&)(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x1c]

    v0 = std::forward<int*&>(a1);
    std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&, test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&)(a0, v0, test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&)(a2));
    return a0;
}


// Function: sub_4020d0 at 0x4020d0
void sub_4020d0()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x4020d4
unsigned int std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&, test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&)(unsigned int a0, unsigned int a1, unsigned int a2)
{
    std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_Tuple_impl(test_cpp_smart_ptr()::$_2 const&)(a0, test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&)(a2));
    std::_Head_base<0u, int*, false>::_Head_base<int*&>(a0, std::forward<int*&>(a1));
    return a0;
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ at 0x40212c
unsigned int std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_Tuple_impl(test_cpp_smart_ptr()::$_2 const&)(unsigned int a0, unsigned int a1)
{
    std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2 const&)(a0, a1);
    return a0;
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ at 0x402160
int std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2 const&)(unsigned int a0, unsigned int a1)
{
    return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv at 0x402178
int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr()(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<0u, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(a0);
    return std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<0u, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv at 0x40219c
unsigned int std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get_deleter()(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]

    v0 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_deleter()(a0);
    return v0;
}


// Function: sub_4021cc at 0x4021cc
void sub_4021cc()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi at 0x4021d0
unsigned int * test_cpp_smart_ptr()::$_2::operator()(int*) const(unsigned int a0, unsigned int *ptr)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0xc]

    v0 = a0;
    *(ptr) = 4294967295;
    if (!ptr)
        return ptr;
    v1 = operatordelete(ptr);
    return operatordelete(ptr);
}


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x40221c
int std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<0u, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>&)(a0);
    return int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402240
int int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>&)(a0);
    return std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ at 0x402264
int std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Head_base<0u, int*, false>::_M_head(a0);
    return std::_Head_base<0u, int*, false>::_M_head(a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv at 0x402288
int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_deleter()(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<1u, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(a0);
    return std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<1u, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x4022ac
int std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type& std::get<1u, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = test_cpp_smart_ptr()::$_2& std::__get_helper<1u, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>&)(a0);
    return test_cpp_smart_ptr()::$_2& std::__get_helper<1u, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE at 0x4022d0
int test_cpp_smart_ptr()::$_2& std::__get_helper<1u, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>&)(a0);
    return std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>&)(a0);
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ at 0x4022f4
int std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>&)(a0);
    return std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>&)(a0);
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ at 0x402318
int std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>&)(unsigned int a0)
{
    return a0;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv at 0x40232c
unsigned int std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]

    v0 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const(a0);
    return v0;
}


// Function: sub_40235c at 0x40235c
void sub_40235c()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv at 0x402360
int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const(unsigned int a0)
{
    return *((int *)std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type const& std::get<0u, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2> const&)(a0));
}


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x402388
int std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2>>::type const& std::get<0u, int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2> const&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2> const&)(a0);
    return int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2> const&)(a0);
}


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4023ac
int int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2> const&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2> const&)(a0);
    return std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2> const&)(a0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ at 0x4023d0
int std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2> const&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Head_base<0u, int*, false>::_M_head(a0);
    return std::_Head_base<0u, int*, false>::_M_head(a0);
}


// Function: _ZN11SimpleClassC2EiPKc at 0x4023f4
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[31];
    char field_23;
} struct_0;

int SimpleClass::SimpleClass()
{
    struct_0 *ptr;  // r0
    unsigned int v1;  // r1
    char *v2;  // r2

    ptr->field_0 = v1;
    strncpy(&ptr->padding_4, v2, 31);
    ptr->field_23 = 0;
    return ptr;
}


// Function: _ZN11SimpleClass8setValueEi at 0x402444
int SimpleClass::setValue()
{
    unsigned int *ptr;  // r0
    unsigned int v1;  // r1

    *(ptr) = v1;
    return v1;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x402464
int SimpleClass::getValue()
{
    unsigned int *v0;  // r0

    return *(v0);
}


// Function: _ZNK11SimpleClass7computeEi at 0x40247c
int SimpleClass::compute()
{
    unsigned int *ptr;  // r0
    unsigned int v2;  // r1
    unsigned int v0;  // [bp-0x14]

    v0 = *(ptr);
    return strlen(ptr + 1) + v0 * v2;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x4024c4
void SimpleClass::getClassID(void* this)
{
    return;
}


// Function: _ZN14LifecycleClassC2Ej at 0x4024d0
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass::LifecycleClass()
{
    unsigned int ptr[2];  // r0
    unsigned int v2;  // r1
    unsigned int v3;  // r1
    unsigned int result;  // r1
    unsigned int v5;  // r0
    unsigned int idx;  // [bp-0x18]

    ptr[1] = v2;
    v3 = v2 & 1073741823;
    result = v2 - v3;
    if (v2 != v3)
        result = 1;
    v5 = v2 * 4;
    if (result)
        v5 = 4294967295;
    ptr[0] = operatornew[](v5);
    for (idx = 0; v2 > idx; idx += 1)
    {
        *((unsigned int *)(ptr[0] + idx * 4)) = idx * 10;
    }
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
    return ptr;
}


// Function: _ZNK14LifecycleClass7getDataEj at 0x40259c
int LifecycleClass::getData()
{
    unsigned int v1[2];  // r0
    unsigned int v2;  // r1
    unsigned int v0;  // [bp-0x10]

    v0 = (v1[1] <= v2 ? 4294967295 : *((int *)(v1[0] + v2 * 4)));
    return v0;
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x4025f4
void LifecycleClass::getInstanceCount(void* this)
{
    return;
}


// Function: _ZN14LifecycleClassD2Ev at 0x402604
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass::~LifecycleClass(void* ptr)
{
    unsigned int v0;  // [bp-0x14]

    v0 = *((int *)ptr);
    if (*((int *)ptr))
        operatordelete[](v0);
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
    return;
}


// Function: _ZN4BaseC2Ev at 0x40266c
extern char g_414c48;

int Base::Base()
{
    unsigned int ptr;  // r0

    *((char **)ptr) = &g_414c48;
    return ptr;
}


// Function: _ZN7DerivedC2Ei at 0x402694
typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

extern char g_414c68;

int Derived::Derived()
{
    struct_0 *ptr;  // r0
    unsigned int v1;  // r1

    Base::Base();
    *((char **)&ptr->padding_0[0]) = &g_414c68;
    ptr->field_4 = v1;
    return ptr;
}


// Function: _ZN4Base12virtual_funcEi at 0x4026e0
int Base::virtual_func()
{
    unsigned int v0;  // r1

    return v0 + 1;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4026fc
typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int Derived::virtual_func()
{
    unsigned int v0;  // r1
    struct_0 *v1;  // r0

    return v0 * v1->field_4;
}


// Function: _ZN7DerivedD2Ev at 0x402720
int Derived::~Derived(void* this)
{
    void* v0;  // [bp-0x10]

    v0 = this;
    return;
}


// Function: _ZN4BaseD2Ev at 0x40274c
int Base::~Base(void* this)
{
    return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x402760
extern char g_414c8c;
extern char g_414ca4;

int MultiDerived::MultiDerived()
{
    unsigned int ptr;  // r0

    BaseA::BaseA(ptr);
    BaseB::BaseB(ptr + 8);
    *((char **)ptr) = &g_414c8c;
    *((char **)(ptr + 8)) = &g_414ca4;
    return ptr;
}


// Function: _ZN12MultiDerivedD2Ev at 0x4027b4
int MultiDerived::~MultiDerived(void* this)
{
    void* v0;  // [bp-0x10]

    v0 = this;
    return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x4027ec
extern unsigned int _ZTT14DiamondDerived;
extern char g_414d14;
extern char g_414d2c;
extern char g_414d48;
extern unsigned int g_414d58;

int DiamondDerived::DiamondDerived()
{
    unsigned int ptr;  // r0
    unsigned int v0;  // [bp-0x14]

    VirtualBase::VirtualBase(ptr + 16);
    v0 = &_ZTT14DiamondDerived;
    MiddleA::MiddleA(ptr, &g_414d58);
    MiddleB::MiddleB(ptr + 8, v0 + 12);
    *((char **)ptr) = &g_414d14;
    *((char **)(ptr + 16)) = &g_414d48;
    *((char **)(ptr + 8)) = &g_414d2c;
    return ptr;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402870
int DiamondDerived::~DiamondDerived(void* this)
{
    void* v0;  // [bp-0x10]

    v0 = this;
    return;
}


// Function: _ZN5PointC2Eii at 0x4028b4
int Point::Point(void* ptr, int arg_0, int arg_1)
{
    *((int *)ptr) = arg_0;
    *((int *)&ptr[4]) = arg_1;
    return;
}


// Function: _ZNK5PointplERKS_ at 0x4028e0
int Point::operator+(char *a0, char *a1)
{
    unsigned int v0[2];  // r2
    unsigned int v1;  // r0

    v1 = (unsigned int)Point::Point(a0, *((int *)&a1) + v0[0], *((int *)&a1[4]) + v0[1]);
    return (unsigned int)Point::Point(a0, *((int *)&a1) + v0[0], *((int *)&a1[4]) + v0[1]);
}


// Function: _ZNK5PointeqERKS_ at 0x402924
typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int Point::operator==(char *ptr)
{
    struct_0 *p;  // r1
    unsigned int v2;  // r0
    unsigned int v0;  // [bp-0xc]

    v0 = 0;
    if (*((int *)&ptr) == p->padding_0)
    {
        v2 = *((int *)&ptr[4]) - p->field_4;
        v0 = v2 + -(v2) + (v2 <= 0);
    }
    return v0 & 1;
}


// Function: _ZN5PointppEv at 0x40298c
int Point::operator++()
{
    unsigned int ptr[2];  // r0

    ptr[0] = ptr[0] + 1;
    ptr[1] = ptr[1] + 1;
    return ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4029b8
int template_max<int>(int arg_0, int arg_1)
{
    unsigned int v0;  // [bp-0xc]

    v0 = (arg_0 <= arg_1 ? arg_1 : arg_0);
    return v0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4029fc
double template_max<double>()
{
    unsigned int v2;  // r0
    unsigned int v3;  // r1
    unsigned int v4;  // r2
    unsigned int v5;  // r3
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]

    if (!__aeabi_dcmpgt(v2, v3, v4, v5))
    {
        v0 = v4;
        v1 = v5;
        return;
    }
    v0 = v2;
    v1 = v3;
    return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402a74
int template_swap<int>(unsigned int *ptr)
{
    unsigned int *p;  // r1
    unsigned int v0;  // [bp-0xc]

    v0 = *(ptr);
    *(ptr) = *(p);
    *(p) = v0;
    return v0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402ab0
typedef struct struct_0 {
    char padding_0[40];
    unsigned int field_28;
} struct_0;

int Container<int>::Container()
{
    struct_0 *ptr;  // r0

    ptr->field_28 = 0;
    return ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402acc
void Container<int>::push(void* ptr, int arg_0)
{
    unsigned int index;  // r2

    if (9 >= (int)ptr[40])
    {
        index = (int)ptr[40];
        *((unsigned int *)&ptr[40]) = index + 1;
        *((int *)((char *)ptr + 4 * index)) = arg_0;
    }
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402b14
int Container<int>::get()
{
    unsigned int idx;  // r1
    unsigned int *ptr;  // r0
    unsigned int v0;  // [bp-0x4]

    if (!((char)armg_calculate_condition(66, idx, 0, 0)) && ptr[10] > idx)
    {
        v0 = ptr[idx];
        return v0;
    }
    v0 = 0;
    return v0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x402b7c
typedef struct struct_0 {
    char padding_0[40];
    unsigned int field_28;
} struct_0;

int Container<int>::getSize()
{
    struct_0 *v0;  // r0

    return v0->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x402b94
typedef struct struct_0 {
    char padding_0[80];
    unsigned int field_50;
} struct_0;

int Container<double>::Container()
{
    struct_0 *ptr;  // r0

    ptr->field_50 = 0;
    return ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402bb0
int Container<double>::push()
{
    unsigned int ptr[21];  // r0
    unsigned int v1;  // r0
    unsigned int v2;  // r3
    unsigned int index;  // r3
    unsigned int v4;  // r2

    v1 = ptr[20];
    if (9 >= v1)
    {
        v1 = v2;
        index = ptr[20];
        ptr[20] = index + 1;
        ptr[2 * index] = v4;
        ptr[1 + 2 * index] = v1;
    }
    return v1;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402c04
int Container<double>::get()
{
    unsigned int idx;  // r1
    unsigned int *ptr;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!((char)armg_calculate_condition(66, idx, 0, 0)) && ptr[20] > idx)
    {
        v1 = ptr[1 + 2 * idx];
        v0 = ptr[2 * idx];
        return v0;
    }
    v1 = 0;
    v0 = 0;
    return v0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402c7c
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x402c94
int std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(char *a0)
{
    unsigned int v0;  // r1

    std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, v0);
    return a0;
}


// Function: sub_402ccc at 0x402ccc
void sub_402ccc()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x402cd0
void std::unique_ptr<int, std::default_delete<int>>::operator*(void* this)
{
    std::unique_ptr<int, std::default_delete<int>>::get(this);
    return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x402d04
int std::move<std::unique_ptr<int, std::default_delete<int>>&>(char *a0)
{
    return a0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ at 0x402d18
int std::unique_ptr<int, std::default_delete<int>>::unique_ptr()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1

    std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(v0, v1);
    return v0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x402d4c
int std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(char *a0)
{
    unsigned int v0;  // r1

    std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(a0, v0);
    return a0;
}


// Function: sub_402d84 at 0x402d84
void sub_402d84()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj at 0x402d88
int std::unique_ptr<int[], std::default_delete<int[]>>::operator[]()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1

    return std::unique_ptr<int[], std::default_delete<int[]>>::get(v0) + v1 * 4;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x402dc8
int std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr(void* this)
{
    unsigned int v3;  // r0
    unsigned int v4;  // r2
    unsigned int v5;  // r3
    void* v0;  // [bp-0x18]
    unsigned int *ptr;  // [bp-0x14]
    void* v2;  // [bp-0xc]

    v0 = this;
    v2 = this;
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
    if (*(ptr))
    {
        v3 = std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter(v0);
        std::default_delete<int[]>::operator()<int>(v3, *(ptr), v4, v5);
    }
    *(ptr) = 0;
    return;
}


// Function: sub_402e38 at 0x402e38
void sub_402e38()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev at 0x402e3c
int std::unique_ptr<int, std::default_delete<int>>::~unique_ptr(void* this)
{
    unsigned int *v4;  // r0
    unsigned int v0;  // [bp-0x1c]
    void* v1;  // [bp-0x18]
    unsigned int *v2;  // [bp-0x14]
    void* v3;  // [bp-0xc]

    v1 = this;
    v3 = this;
    v2 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(this);
    if (*(v2))
    {
        v0 = std::unique_ptr<int, std::default_delete<int>>::get_deleter(v1);
        v4 = std::move<int*&>(v2);
        std::default_delete<int>::operator()(v0, *(v4));
    }
    *(v2) = 0;
    return;
}


// Function: sub_402ebc at 0x402ebc
void sub_402ebc()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZN12RTTIDerivedAC2Ev at 0x402ec0
extern char g_414ec4;

int RTTIDerivedA::RTTIDerivedA()
{
    unsigned int ptr;  // r0

    RTTIBase::RTTIBase(ptr);
    *((char **)ptr) = &g_414ec4;
    return ptr;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x402f00
extern char g_414eec;

int RTTIDerivedB::RTTIDerivedB()
{
    unsigned int ptr;  // r0

    RTTIBase::RTTIBase(ptr);
    *((char **)ptr) = &g_414eec;
    return ptr;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x402f40
void std::type_info::operator==(void* this, class std::type_info &arg_0)
{
    unsigned int v2;  // r0
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x14]

    v1 = 1;
    if ((int)this[4] == *((int *)(arg_0 + 4)))
        return;
    v0 = 0;
    if (*((char *)(int)this[4]) != 42)
    {
        v2 = strcmp((int)this[4], *((int *)(arg_0 + 4)));
        v0 = v2 + -(v2) + (v2 <= 0);
    }
    v1 = v0;
    return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x402fe0
void RTTIDerivedA::derivedA_data(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x402ff4
void RTTIDerivedB::derivedB_data(void* this)
{
    return;
}


// Function: _ZNKSt9type_info4nameEv at 0x403008
void std::type_info::name(void* ptr)
{
    char *v0;  // [bp-0xc], Other Possible Types: unsigned int

    if (*((char *)(int)ptr[4]) != 42)
    {
        v0 = (int)ptr[4];
        return;
    }
    v0 = (int)ptr[4] + 1;
    return;
}


// Function: _ZNK4Base7getNameEv at 0x40305c
void Base::getName(void* this)
{
    return;
}


// Function: _ZN4BaseD0Ev at 0x403078
int Base::~Base(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZNK7Derived7getNameEv at 0x4030a8
void Derived::getName(void* this)
{
    return;
}


// Function: _ZN7DerivedD0Ev at 0x4030c4
int Derived::~Derived(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZN5BaseAC2Ev at 0x4030f4
extern char g_414ce8;

int BaseA::BaseA(void* ptr)
{
    *((char **)ptr) = &g_414ce8;
    return;
}


// Function: _ZN5BaseBC2Ev at 0x40311c
extern char g_414cfc;

int BaseB::BaseB(void* ptr)
{
    *((char **)ptr) = &g_414cfc;
    return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403144
void MultiDerived::funcA(void* this)
{
    return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x403158
int MultiDerived::~MultiDerived(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x403188
void MultiDerived::funcB(void* this)
{
    return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x40319c
int non-virtual thunk to MultiDerived::funcB()(void* a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)MultiDerived::funcB(a0 - 8);
    return (unsigned int)MultiDerived::funcB(a0 - 8);
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x4031b4
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x4031d0
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZN5BaseA5funcAEv at 0x4031e8
void BaseA::funcA(void* this)
{
    return;
}


// Function: _ZN5BaseAD2Ev at 0x4031fc
int BaseA::~BaseA(void* this)
{
    return;
}


// Function: _ZN5BaseAD0Ev at 0x403210
int BaseA::~BaseA(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZN5BaseB5funcBEv at 0x403240
void BaseB::funcB(void* this)
{
    return;
}


// Function: _ZN5BaseBD2Ev at 0x403254
int BaseB::~BaseB(void* this)
{
    return;
}


// Function: _ZN5BaseBD0Ev at 0x403268
int BaseB::~BaseB(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZN11VirtualBaseC2Ev at 0x403298
extern char g_414e38;

int VirtualBase::VirtualBase(void* ptr)
{
    *((char **)ptr) = &g_414e38;
    return;
}


// Function: _ZN7MiddleAC2Ev at 0x4032c0
int MiddleA::MiddleA(void* ptr)
{
    unsigned int idx[2];  // r1

    *((unsigned int *)ptr) = idx[0];
    *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
    return;
}


// Function: _ZN7MiddleBC2Ev at 0x4032f4
int MiddleB::MiddleB(void* ptr)
{
    unsigned int idx[2];  // r1

    *((unsigned int *)ptr) = idx[0];
    *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
    return;
}


// Function: _ZN7MiddleA4funcEv at 0x403328
void MiddleA::func(void* this)
{
    return;
}


// Function: _ZN7MiddleAD1Ev at 0x403350
int MiddleA::~MiddleA(void* this)
{
    void* v0;  // [bp-0x10]

    v0 = this;
    return;
}


// Function: _ZN7MiddleAD0Ev at 0x403394
int MiddleA::~MiddleA(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x4033c4
int thunk to MiddleA::func()(void* *a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)MiddleA::func((char *)a0 + (*(a0))[12]);
    return (unsigned int)MiddleA::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x4033e4
int thunk to MiddleA::~MiddleA()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x403408
int thunk to MiddleA::~MiddleA()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZN7MiddleB4funcEv at 0x403428
void MiddleB::func(void* this)
{
    return;
}


// Function: _ZN7MiddleBD1Ev at 0x403450
int MiddleB::~MiddleB(void* this)
{
    void* v0;  // [bp-0x10]

    v0 = this;
    return;
}


// Function: _ZN7MiddleBD0Ev at 0x403494
int MiddleB::~MiddleB(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x4034c4
int thunk to MiddleB::func()(void* *a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)MiddleB::func((char *)a0 + (*(a0))[12]);
    return (unsigned int)MiddleB::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x4034e4
int thunk to MiddleB::~MiddleB()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x403508
int thunk to MiddleB::~MiddleB()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZN14DiamondDerived4funcEv at 0x403528
void DiamondDerived::func(void* this)
{
    return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x403550
int DiamondDerived::~DiamondDerived(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x403580
int non-virtual thunk to DiamondDerived::func()(void* a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)DiamondDerived::func(a0 - 8);
    return (unsigned int)DiamondDerived::func(a0 - 8);
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x403598
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x4035b4
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x4035cc
int thunk to DiamondDerived::func()(void* *a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)DiamondDerived::func((char *)a0 + (*(a0))[12]);
    return (unsigned int)DiamondDerived::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x4035ec
int thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x403610
int thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    return v1;
}


// Function: _ZN11VirtualBase4funcEv at 0x403630
void VirtualBase::func(void* this)
{
    return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x403644
int VirtualBase::~VirtualBase(void* this)
{
    return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x403658
int VirtualBase::~VirtualBase(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZN7MiddleAD2Ev at 0x403688
int MiddleA::~MiddleA(void* this)
{
    return;
}


// Function: _ZN7MiddleBD2Ev at 0x4036a0
int MiddleB::~MiddleB(void* this)
{
    return;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x4036b8
int DiamondDerived::~DiamondDerived(void* this)
{
    unsigned int v2;  // r1
    unsigned int v0;  // [bp-0x18]
    void* v1;  // [bp-0x14]

    v1 = this;
    v0 = v2;
    return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403708
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, class std::__uniq_ptr_data<int, std::default_delete<int>, true, true> &arg_0)
{
    void* v0;  // [bp-0x14]

    v0 = this;
    std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0);
    return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ at 0x40373c
int std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl()
{
    unsigned int v1;  // r1
    unsigned int v3;  // r0
    unsigned int *ptr;  // [bp-0x14]

    std::tuple<int*, std::default_delete<int>>::tuple(v3, std::move<std::tuple<int*, std::default_delete<int>>&>(v1));
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v1);
    *(ptr) = 0;
    return v3;
}


// Function: sub_403798 at 0x403798
void sub_403798()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x40379c
class std::remove_reference<std::tuple<int*, std::default_delete<int>>&>::type & std::move<std::tuple<int*, std::default_delete<int>>&>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    return this;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ at 0x4037b0
int std::tuple<int*, std::default_delete<int>>::tuple(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    void* v0;  // [bp-0x14]

    v0 = this;
    std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(this, arg_0);
    return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x4037e4
int std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::get<0u, int*, std::default_delete<int>>(v0);
    return std::get<0u, int*, std::default_delete<int>>(v0);
}


// Function: __clang_call_terminate at 0x403808
void __clang_call_terminate()
{
    std::terminate(__cxa_begin_catch()); /* do not return */
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x403810
int std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl()
{
    unsigned int *ptr;  // r0
    unsigned int *v2;  // r1
    unsigned int v0;  // [bp-0x10]

    std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl(ptr, v0);
    *(ptr) = *(v2);
    return ptr;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ at 0x403850
int std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x403868
class std::tuple_element<0u, std::tuple<int*, std::default_delete<int>>>::type & std::get<0u, int*, std::default_delete<int>>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::__get_helper<0u, int*, std::default_delete<int>>(this);
    return std::__get_helper<0u, int*, std::default_delete<int>>(this);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40388c
int *& std::__get_helper<0u, int*, std::default_delete<int>>(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x4038b0
void std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    std::_Head_base<0u, int*, false>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ at 0x4038d4
int std::_Head_base<0u, int*, false>::_M_head()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZN8RTTIBaseC2Ev at 0x4038e8
extern char g_414ed8;

int RTTIBase::RTTIBase(void* ptr)
{
    *((char **)ptr) = &g_414ed8;
    return;
}


// Function: _ZN12RTTIDerivedAD2Ev at 0x403910
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    void* v0;  // [bp-0x10]

    v0 = this;
    return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x40393c
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x40396c
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x403980
int RTTIBase::~RTTIBase(void* this)
{
    return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x403994
int RTTIBase::~RTTIBase(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x4039c4
void RTTIBase::getType(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedBD2Ev at 0x4039d8
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    void* v0;  // [bp-0x10]

    v0 = this;
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x403a04
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    operatordelete(this);
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x403a34
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x403a48
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1

    std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(v0, v1);
    return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x403a7c
int std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(void* this, int *arg_0)
{
    void* v0;  // [bp-0x14]

    v0 = this;
    std::tuple<int*, std::default_delete<int>>::tuple<true, true>(this);
    *((int **)std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr()) = arg_0;
    return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv at 0x403ac8
int std::tuple<int*, std::default_delete<int>>::tuple<true, true>()
{
    unsigned int v0;  // r0

    std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(v0);
    return v0;
}


// Function: sub_403af8 at 0x403af8
void sub_403af8()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev at 0x403afc
int std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(void* this)
{
    std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl(this);
    std::_Head_base<0u, int*, false>::_Head_base(this);
    return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev at 0x403b30
int std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl()
{
    unsigned int v0;  // r0

    std::_Head_base<1u, std::default_delete<int>, true>::_Head_base(v0);
    return v0;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev at 0x403b5c
int std::_Head_base<0u, int*, false>::_Head_base()
{
    unsigned int *ptr;  // r0

    *(ptr) = 0;
    return ptr;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev at 0x403b78
int std::_Head_base<1u, std::default_delete<int>, true>::_Head_base(void* this)
{
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x403b8c
int std::unique_ptr<int, std::default_delete<int>>::get_deleter()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x10]

    v0 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(v1);
    return v0;
}


// Function: sub_403bbc at 0x403bbc
void sub_403bbc()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x403bc0
void std::default_delete<int>::operator()(void* this, int *arg_0)
{
    void* v0;  // [bp-0xc]

    v0 = this;
    if (!arg_0)
        return;
    operatordelete(arg_0);
    return;
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x403c00
int std::move<int*&>()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x403c14
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(void* this)
{
    std::get<1u, int*, std::default_delete<int>>(this);
    return;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x403c38
int std::get<1u, int*, std::default_delete<int>>()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__get_helper<1u, std::default_delete<int>>(v0);
    return std::__get_helper<1u, std::default_delete<int>>(v0);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x403c5c
class std::default_delete<int> & std::__get_helper<1u, std::default_delete<int>>(void* this, class std::_Tuple_impl<1u, std::default_delete<int>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<1u, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<1u, std::default_delete<int>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x403c80
void std::_Tuple_impl<1u, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<1u, std::default_delete<int>> &arg_0)
{
    std::_Head_base<1u, std::default_delete<int>, true>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x403ca4
int std::_Head_base<1u, std::default_delete<int>, true>::_M_head()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x403cb8
int std::unique_ptr<int, std::default_delete<int>>::get()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x10]

    v0 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v1);
    return v0;
}


// Function: sub_403ce8 at 0x403ce8
void sub_403ce8()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403cec
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(void* this)
{
    std::get<0u, int*, std::default_delete<int>>(this);
    return;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x403d14
int std::get<0u, int*, std::default_delete<int>>()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__get_helper<0u, int*, std::default_delete<int>>(v0);
    return std::__get_helper<0u, int*, std::default_delete<int>>(v0);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x403d38
int *& std::__get_helper<0u, int*, std::default_delete<int>>(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x403d5c
void std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    std::_Head_base<0u, int*, false>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ at 0x403d80
int std::_Head_base<0u, int*, false>::_M_head()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi at 0x403d94
int std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1

    std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(v0, v1);
    return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x403dc8
int std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(void* this, int *arg_0)
{
    std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>(this);
    *((int **)std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this, arg_0)) = arg_0;
    return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x403e14
int std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>()
{
    unsigned int v0;  // r0

    std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_Tuple_impl(v0);
    return v0;
}


// Function: sub_403e44 at 0x403e44
void sub_403e44()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x403e48
int std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::get<0u, int*, std::default_delete<int[]>>(v0);
    return std::get<0u, int*, std::default_delete<int[]>>(v0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev at 0x403e6c
int std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_Tuple_impl(void* this)
{
    void* v0;  // [bp-0x10]

    v0 = this;
    std::_Tuple_impl<1u, std::default_delete<int[]>>::_Tuple_impl(this);
    std::_Head_base<0u, int*, false>::_Head_base();
    return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev at 0x403ea0
int std::_Tuple_impl<1u, std::default_delete<int[]>>::_Tuple_impl()
{
    unsigned int v0;  // r0

    std::_Head_base<1u, std::default_delete<int[]>, true>::_Head_base(v0);
    return v0;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev at 0x403ecc
int std::_Head_base<1u, std::default_delete<int[]>, true>::_Head_base(void* this)
{
    return;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x403ee0
class std::tuple_element<0u, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0u, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::__get_helper<0u, int*, std::default_delete<int[]>>(this);
    return std::__get_helper<0u, int*, std::default_delete<int[]>>(this);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x403f04
int *& std::__get_helper<0u, int*, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x403f28
void std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int[]>> &arg_0)
{
    void* v0;  // [bp-0xc]

    v0 = this;
    std::_Head_base<0u, int*, false>::_M_head();
    return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x403f4c
int std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x10]

    v0 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v1);
    return v0;
}


// Function: sub_403f7c at 0x403f7c
void sub_403f7c()
{
    __clang_call_terminate(); /* do not return */
}


// Failed to decompile function _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ at 0x403f80
// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x403fc0
void std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(void* this)
{
    std::get<1u, int*, std::default_delete<int[]>>(this);
    return;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x403fe4
int std::get<1u, int*, std::default_delete<int[]>>()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__get_helper<1u, std::default_delete<int[]>>(v0);
    return std::__get_helper<1u, std::default_delete<int[]>>(v0);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404008
class std::default_delete<int[]> & std::__get_helper<1u, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<1u, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<1u, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<1u, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x40402c
void std::_Tuple_impl<1u, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<1u, std::default_delete<int[]>> &arg_0)
{
    std::_Head_base<1u, std::default_delete<int[]>, true>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404050
int std::_Head_base<1u, std::default_delete<int[]>, true>::_M_head()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404064
void std::unique_ptr<int[], std::default_delete<int[]>>::get(void* this)
{
    unsigned int v0;  // [bp-0x10]

    v0 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
    return;
}


// Function: sub_404094 at 0x404094
void sub_404094()
{
    __clang_call_terminate(); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404098
int std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
    unsigned int v0;  // r0

    return *((int *)std::get<0u, int*, std::default_delete<int[]>>(v0));
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x4040c0
class std::tuple_element<0u, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0u, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::__get_helper<0u, int*, std::default_delete<int[]>>(this);
    return std::__get_helper<0u, int*, std::default_delete<int[]>>(this);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x4040e4
int *& std::__get_helper<0u, int*, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404108
void std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int[]>> &arg_0)
{
    void* v0;  // [bp-0xc]

    v0 = this;
    std::_Head_base<0u, int*, false>::_M_head();
    return;
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x40412c
int *& std::forward<int*&>(void* this, class std::remove_reference<int*&>::type &arg_0)
{
    return this;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ at 0x404140
int std::_Head_base<0u, int*, false>::_Head_base<int*&>(void* ptr, int *&arg_0)
{
    *((int *)ptr) = *((int *)std::forward<int*&>(arg_0, arg_0));
    return;
}


// Function: _fini at 0x404180
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

