// Angr Decompilation of 5-1_gcc_O0_no_g
// Platform: AARCH64

// Function: _init at 0x401820
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x401840
extern unsigned long long g_416ee0;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_416ee0;
}


// Function: sub_401854 at 0x401854
int sub_401854()
{
    unsigned int v0;  // x0

    return operatornew[](v0);
}


// Function: _start at 0x401a00
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_401a30 at 0x401a30
void sub_401a30()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x401a34
extern unsigned long long g_416fe8;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_416fe8)
        return 0;
    v0 = __gmon_start__(g_416fe8);
    return __gmon_start__(g_416fe8);
}


// Function: sub_401a48 at 0x401a48
void sub_401a48()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401a50
extern char __bss_start;

long long deregister_tm_clones()
{
    return &__bss_start;
}


// Function: register_tm_clones at 0x401a80
extern char __bss_start;
extern unsigned long long g_416ff0;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__bss_start;
    }
    else if (g_416ff0)
    {
        goto g_416ff0;
    }
    else
    {
        return &__bss_start;
    }
}


// Function: sub_401abc at 0x401abc
void sub_401abc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401ac0
extern char __bss_start;
extern unsigned long long __dso_handle;
extern unsigned long long g_416fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __bss_start;
    if ((unsigned int)v2)
        return v2;
    if (g_416fd8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __bss_start = 1;
    return 1;
}


// Function: sub_401b08 at 0x401b08
long long sub_401b08()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x401b10
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: _Z20test_cpp_member_funcv at 0x401b14
extern char __stack_chk_guard;

void test_cpp_member_func()
{
    char *v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x34]
    char v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    SimpleClass::SimpleClass(&v4, 5, "Test", &v4);
    SimpleClass::setValue(&v4, 10);
    v1 = SimpleClass::getValue(&v4);
    v2 = SimpleClass::compute(&v4, 3);
    v3 = SimpleClass::getClassID(v2, 3);
    if (v5 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x401bbc
extern char __stack_chk_guard;

void test_cpp_constructor()
{
    unsigned long long v6;  // x0
    unsigned int v7;  // w0
    unsigned long long v8;  // x0
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x1c]
    char v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v1 = 0;
    LifecycleClass::LifecycleClass(&v3, 5);
    v6 = LifecycleClass::getData(&v3, 2);
    v2 = v1 + (unsigned int)v6;
    v7 = LifecycleClass::getInstanceCount(v1 + (v6 & 4294967295), v6 & 4294967295);
    v1 = v2 + v7;
    v1 += 1000 * LifecycleClass::getInstanceCount(v8, v7);
    if (v4 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x401c70
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    (*((long long *)*((long long *)*((long long *)&v1))))(arg_0, arg_1, *((long long *)*((long long *)&arg_0)));
    return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401ca0
class Base {
} Base;

extern char __stack_chk_guard;
extern char g_416b10;

void test_cpp_virtual_func()
{
    char *v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x40]
    unsigned int v2;  // [bp-0x3c]
    unsigned int v3;  // [bp-0x38]
    unsigned int v4;  // [bp-0x34]
    unsigned long v5;  // [bp-0x30]
    Base *v6;  // [bp-0x28]
    Base *v7;  // [bp-0x20]
    char v8;  // [bp-0x18]
    unsigned long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = &v10;
    v9 = *((long long *)&__stack_chk_guard);
    v5 = &g_416b10;
    Derived::Derived(&v8, 3);
    v1 = Base::virtual_func(&v5, 5);
    v2 = Derived::virtual_func(&v8, 5);
    v6 = &v5;
    v7 = &v8;
    v3 = (unsigned long long)call_virtual_func(v6, 5);
    v4 = (unsigned long long)call_virtual_func(v7, 5);
    if (v9 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_401d78 at 0x401d78
long long sub_401d78(unsigned long long a0)
{
    _Unwind_Resume(a0); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401da8
typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char __stack_chk_guard;

void test_cpp_multiple_inheritance()
{
    char v12;  // x0
    char *v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    struct_1 **v4;  // [bp-0x38]
    struct_1 **v5;  // [bp-0x30]
    char v6;  // [bp-0x28]
    unsigned int v7;  // [bp-0x20]
    char v8;  // [bp-0x18]
    unsigned int v9;  // [bp-0x10]
    unsigned long v10;  // [bp-0x8]
    char v11;  // [bp+0x0]

    v0 = &v11;
    v10 = *((long long *)&__stack_chk_guard);
    MultiDerived::MultiDerived(&v6, 0);
    v7 = 100;
    v9 = 200;
    v4 = &v6;
    v5 = &v8;
    v1 = *(v4)->field_0(v4, *((long long *)*((long long *)&v6)));
    v2 = *(v5)->field_0(v5, *((long long *)*((long long *)&v8)));
    if (v4 == v5)
        v12 = 0;
    else
        v12 = 1;
    v3 = v12;
    if (v10 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_401e7c at 0x401e7c
long long sub_401e7c(unsigned long long a0)
{
    _Unwind_Resume(a0); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401ea4
typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

extern char __stack_chk_guard;

void test_cpp_diamond_inheritance()
{
    char *v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    struct_1 **v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    struct_0 **v5;  // [bp-0x18]
    unsigned int v6;  // [bp-0x10]
    unsigned long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = &v8;
    v7 = *((long long *)&__stack_chk_guard);
    DiamondDerived::DiamondDerived(&v4, 0);
    v6 = 50;
    v3 = &v5;
    v1 = *(v3)->field_0(v3, *(v5));
    v6 = 100;
    v2 = *(v3)->field_0(v3, *(v5));
    if (v7 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_401f50 at 0x401f50
long long sub_401f50(unsigned long long a0)
{
    _Unwind_Resume(a0); /* do not return */
}


// Function: _Z26test_cpp_operator_overloadv at 0x401f78
extern char __stack_chk_guard;

void test_cpp_operator_overload()
{
    char *v0;  // [bp-0x40]
    char result;  // [bp-0x21]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    Point::Point(&v2, 1, 2);
    Point::Point(&v3, 3, 4);
    v4 = Point::operator+(&v2, &v3);
    result = Point::operator==(&v2, &v3);
    Point::operator++(&v4);
    if (v5 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z22test_cpp_template_funcv at 0x402034
extern char __stack_chk_guard;

void test_cpp_template_func()
{
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    unsigned long long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    v3 = template_max<int>(3, 7);
    template_max<double>(v3, 7);
    v4 = 0x4004000000000000;
    v1 = 10;
    v2 = 20;
    template_swap<int>(&v1, &v2);
    if (v5 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x4020dc
extern char __stack_chk_guard;
extern unsigned long long g_404000;

void test_cpp_template_class()
{
    char *v0;  // [bp-0xb0]
    unsigned int v1;  // [bp-0xa0]
    unsigned int v2;  // [bp-0x9c]
    unsigned long long v3;  // [bp-0x98]
    char v4;  // [bp-0x90]
    char v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v0 = &v7;
    v6 = *((long long *)&__stack_chk_guard);
    Container<int>::Container(&v4, 0);
    Container<int>::push(&v4, 10);
    Container<int>::push(&v4, 20);
    Container<int>::push(&v4, 30);
    v1 = Container<int>::get(&v4, 0);
    v2 = Container<int>::getSize(&v4);
    Container<double>::Container(&v5);
    Container<double>::push(&v5, &g_404000);
    Container<double>::get(&v5, 0);
    v3 = 4614253070214989087;
    if (v6 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x4021b0
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int test_cpp_lambda()::'lambda'(int)::operator()(int) const(struct_0 *idx, unsigned int a1)
{
    idx->field_8->field_0 = idx->field_8->field_0 + 5;
    return a1 * idx->field_0 + idx->field_8->field_0;
}


// Function: _Z15test_cpp_lambdav at 0x402200
extern char __stack_chk_guard;

void test_cpp_lambda()
{
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned int v3;  // [bp-0x20]
    unsigned int v4;  // [bp-0x1c]
    unsigned int v5;  // [bp-0x18]
    char *v6;  // [bp-0x10]
    unsigned long v7;  // [bp-0x8]
    char v8;  // [bp+0x0]

    v0 = &v8;
    v7 = *((long long *)&__stack_chk_guard);
    v2 = 10;
    v1 = 20;
    v5 = v2;
    v6 = &v1;
    v3 = test_cpp_lambda()::'lambda'(int)::operator()(int) const(&v5, 3);
    v4 = 30;
    if (v7 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z18test_cpp_exceptionv at 0x402290
extern char _ZTIi;

void test_cpp_exception()
{
    unsigned int *ptr;  // x0
    char *v0;  // [bp-0x40]
    unsigned int result;  // [bp-0x1c]
    char v2;  // [bp+0x0]

    v0 = &v2;
    result = 0;
    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    __cxa_throw(ptr, &_ZTIi, 0);
    return;
}


// Function: sub_4022c8 at 0x4022c8
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_4022c8()
{
    unsigned long long v6;  // x1
    unsigned long v7;  // x1
    unsigned long long ptr;  // x0
    unsigned int v0;  // [bp+0x24]
    unsigned int v1;  // [bp+0x24]
    unsigned int v2;  // [bp+0x28]
    unsigned int v3;  // [bp+0x2c]

    if (v6 == 1)
    {
        v2 = *((int *)__cxa_begin_catch());
        v7 = v0;
        v0 = (unsigned int)v7 + v2;
        __cxa_end_catch(__cxa_rethrow(v7 + v2, v7), v7);
    }
    if (v6 == 1)
    {
        v3 = *((int *)__cxa_begin_catch());
        v1 = v0 + ((v3 * 2 | v3 >> 31) & 4294967294);
        __cxa_end_catch(v0 + ((v3 * 2 | v3 >> 31) & 4294967294), v0);
        ptr = __cxa_allocate_exception(1);
        __cxa_throw(ptr, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0, ptr);
        _Unwind_Resume(); /* do not return */
    }
    _Unwind_Resume(); /* do not return */
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x4023b4
unsigned int * test_cpp_smart_ptr()::'lambda'(int*)::operator()(int*) const(unsigned long long a0, unsigned int *ptr)
{
    unsigned int *v3;  // x0
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = a0;
    *(ptr) = 4294967295;
    v3 = ptr;
    if (ptr)
        v3 = operatordelete(v3, 4);
    return v3;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4023f0
extern char __stack_chk_guard;

void test_cpp_smart_ptr()
{
    unsigned int *p;  // x0
    unsigned int *ptr3;  // x0
    unsigned int ptr4[5];  // x0
    unsigned int ptr5[5];  // x0
    unsigned int ptr6[5];  // x0
    unsigned int ptr[5];  // x0
    unsigned int *addr;  // x0
    char *v0;  // [bp-0x60]
    char v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    unsigned int v3;  // [bp-0x30]
    unsigned int v4;  // [bp-0x2c]
    char v5;  // [bp-0x28]
    char v6;  // [bp-0x20]
    char v7;  // [bp-0x18]
    char v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = &v10;
    v9 = *((long long *)&__stack_chk_guard);
    p = operatornew(4);
    *(p) = 100;
    std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(&v5, p, &v5);
    ptr3 = std::unique_ptr<int, std::default_delete<int>>::operator*(&v5);
    *(ptr3) = 200;
    std::unique_ptr<int, std::default_delete<int>>::unique_ptr(&v6, std::move<std::unique_ptr<int, std::default_delete<int>>&>(&v5, ptr3));
    v2 = *((int *)std::unique_ptr<int, std::default_delete<int>>::operator*(&v6));
    ptr4 = operatornew[](20);
    ptr4[0] = 1;
    ptr5 = &ptr4[1];
    ptr5[0] = 2;
    ptr6 = &ptr5[1];
    ptr6[0] = 3;
    ptr = &ptr6[1];
    ptr[0] = 4;
    ptr[1] = 5;
    std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(&v7, ptr4, ptr4);
    v3 = *((int *)std::unique_ptr<int[], std::default_delete<int[]>>::operator[](&v7, 2));
    addr = operatornew(4);
    *(addr) = 500;
    std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::unique_ptr<test_cpp_smart_ptr()::'lambda'(int*), void>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(&v8, addr, &v1, &v8);
    v4 = *((int *)std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::operator*() const(&v8));
    if (v9 == *((long long *)&__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_402560 at 0x402560
long long sub_402560(unsigned long long a0)
{
    _Unwind_Resume(a0); /* do not return */
}


// Function: sub_402570 at 0x402570
long long sub_402570(unsigned long a0)
{
}


// Function: _Z13test_cpp_rttiv at 0x4025a0
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI12RTTIDerivedB;
extern unsigned long long _ZTI8RTTIBase;

void test_cpp_rtti()
{
    void* *ptr;  // x19
    void* *p;  // x19
    unsigned long long v10;  // x0
    unsigned long long v11;  // x0
    void* *v12;  // x0
    char *v0;  // [bp-0x50]
    unsigned int v1;  // [sp-0x24]
    unsigned int cur;  // [bp-0x24]
    void* *result;  // [bp-0x20]
    void* *flag1;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v0 = &v7;
    ptr = operatornew(8);
    *(ptr) = NULL;
    RTTIDerivedA::RTTIDerivedA(ptr);
    result = ptr;
    p = operatornew(8);
    *(p) = NULL;
    RTTIDerivedB::RTTIDerivedB(p);
    flag1 = p;
    cur = 0;
    if (!result)
    {
        __cxa_bad_typeid(result);
    }
    else if (!(std::type_info::operator==((long long)(*(result))[8], &_ZTI12RTTIDerivedA, (long long)(*(result))[8]) & 255))
    {
        goto LABEL_40262c;
    }
    cur += 10;
LABEL_40262c:
    if (!flag1)
    {
        __cxa_bad_typeid(flag1);
    }
    else if (!(std::type_info::operator==((long long)(*(flag1))[8], &_ZTI12RTTIDerivedB, (long long)(*(flag1))[8]) & 255))
    {
        goto LABEL_402670;
    }
    cur += 20;
LABEL_402670:
    if (result)
        v10 = __dynamic_cast(result, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
    else
        v10 = 0;
    v5 = v10;
    if (v5)
        cur += RTTIDerivedA::derivedA_data(v5);
    if (flag1)
        v11 = __dynamic_cast(flag1, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
    else
        v11 = 0;
    v6 = v11;
    if (v6)
        cur += RTTIDerivedB::derivedB_data(v6);
    if (result)
    {
        v1 = (unsigned int)strlen(std::type_info::name((long long)(*(result))[8])) + cur;
        v12 = result;
        if (!v12)
            goto LABEL_402768;
    }
    else
    {
        v12 = __cxa_bad_typeid(result);
    }
    (long long)(*(v12))[8](v12, (long long)(*(v12))[8]);
LABEL_402768:
    if (flag1)
        (long long)(*(flag1))[8](flag1, (long long)(*(flag1))[8]);
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402794
extern char g_4045e8;
extern char g_404610;
extern char g_404630;
extern char g_404650;
extern char g_404670;
extern char g_404690;
extern char g_4046b0;
extern char g_4046d0;
extern char g_4046f0;
extern char g_404710;
extern char g_404730;
extern char g_404750;
extern char g_404770;

void test_cpp_oo_features()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4045e8);
    printf(&g_404610, (unsigned long long)test_cpp_member_func() & 4294967295);
    printf(&g_404630, (unsigned long long)test_cpp_constructor() & 4294967295);
    printf(&g_404650, (unsigned long long)test_cpp_virtual_func() & 4294967295);
    printf(&g_404670, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
    printf(&g_404690, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
    printf(&g_4046b0, (unsigned long long)test_cpp_operator_overload() & 4294967295);
    printf(&g_4046d0, (unsigned long long)test_cpp_template_func() & 4294967295);
    printf(&g_4046f0, (unsigned long long)test_cpp_template_class() & 4294967295);
    printf(&g_404710, (unsigned long long)test_cpp_lambda() & 4294967295);
    printf(&g_404730, (unsigned long long)test_cpp_exception() & 4294967295);
    printf(&g_404750, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
    printf(&g_404770, (unsigned long long)test_cpp_rtti() & 4294967295);
    return;
}


// Function: main at 0x4028a4
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_cpp_oo_features();
    return 0;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ at 0x4028bc
long long std::__uniq_ptr_data<int, test_cpp_smart_ptr()::'lambda'(int*), true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::__uniq_ptr_impl<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1, a2);
    return std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::__uniq_ptr_impl<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1, a2);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ at 0x4028ec
long long std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::unique_ptr<test_cpp_smart_ptr()::'lambda'(int*), void>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(char *a0, unsigned int *a1, char *a2)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__uniq_ptr_data<int, test_cpp_smart_ptr()::'lambda'(int*), true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1, a2);
    return std::__uniq_ptr_data<int, test_cpp_smart_ptr()::'lambda'(int*), true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1, a2);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev at 0x40291c
unsigned long long * std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::~unique_ptr()(unsigned long long a0)
{
    unsigned long long v3;  // x19
    unsigned int **v4;  // x0
    char *v0;  // [bp-0x40]
    unsigned long long *ptr;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    ptr = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr()(a0);
    if (*(ptr))
    {
        v3 = std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get_deleter()(a0);
        v4 = std::move<int*&>(ptr);
        test_cpp_smart_ptr()::'lambda'(int*)::operator()(int*) const(v3, *(v4));
    }
    *(ptr) = 0;
    return ptr;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv at 0x402984
long long std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::operator*() const()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get() const(v2);
    return std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get() const(v2);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ at 0x4029a8
long long std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::__uniq_ptr_impl<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = a1;
    v3 = std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>::tuple<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, true>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, &v1, test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(a2));
    return std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>::tuple<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, true>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, &v1, test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(a2));
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x4029f4
long long std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr()(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv at 0x402a10
long long std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get_deleter()(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_deleter()(a0);
    return std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_deleter()(a0);
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv at 0x402a2c
long long std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get() const(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr() const(a0);
    return std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr() const(a0);
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE at 0x402a48
long long test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(unsigned long a0)
{
    return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x402a5c
long long std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>::tuple<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, true>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    unsigned long long v4;  // x0
    char *v0;  // [bp-0x40]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::forward<int*&>(a1);
    v3 = test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(a2);
    v4 = std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, void>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, v2, v3);
    return std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, void>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, v2, v3);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402aac
long long std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv at 0x402ac8
long long std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_deleter()(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<1ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<1ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x402ae4
long long std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr() const(unsigned long long a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *((long long *)std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type const& std::get<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0));
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x402b04
long long std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, void>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v3;  // x0
    unsigned long long v4;  // x0
    char *v0;  // [bp-0x40]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl(test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(a2));
    v3 = std::forward<int*&>(a1);
    v4 = std::_Head_base<0ul, int*, false>::_Head_base<int*&>(a0, v3);
    return std::_Head_base<0ul, int*, false>::_Head_base<int*&>(a0, v3);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402b58
long long int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402b74
long long std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<1ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = test_cpp_smart_ptr()::'lambda'(int*)& std::__get_helper<1ul, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return test_cpp_smart_ptr()::'lambda'(int*)& std::__get_helper<1ul, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x402b90
long long std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type const& std::get<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0);
    return int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0);
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ at 0x402bac
long long std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl(test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>::_Head_base(test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1);
    return std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>::_Head_base(test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ at 0x402bd4
long long std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Head_base<0ul, int*, false>::_M_head(a0);
    return std::_Head_base<0ul, int*, false>::_M_head(a0);
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402bf0
long long test_cpp_smart_ptr()::'lambda'(int*)& std::__get_helper<1ul, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402c0c
long long int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0);
    return std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ at 0x402c28
long long std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>::_Head_base(test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned long a0, unsigned long a1)
{
    return a0;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ at 0x402c40
long long std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>&)(a0);
    return std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>&)(a0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ at 0x402c5c
long long std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(unsigned long long a0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Head_base<0ul, int*, false>::_M_head(a0);
    return std::_Head_base<0ul, int*, false>::_M_head(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ at 0x402c78
long long std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::'lambda'(int*), true>&)(unsigned long a0)
{
    return a0;
}


// Function: _Z41__static_initialization_and_destruction_0ii at 0x402c8c
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (arg_0 != 1)
    {
        return;
    }
    else if (arg_1 == 65535)
    {
        std::ios_base::Init::Init(&_ZStL8__ioinit);
        __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
        return;
    }
    else
    {
        return;
    }
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x402cec
long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
    unsigned long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = (unsigned long long)__static_initialization_and_destruction_0(1, 65535);
    return (unsigned long long)__static_initialization_and_destruction_0(1, 65535);
}


// Function: _ZNKSt9type_info4nameEv at 0x402d08
void std::type_info::name(void* this)
{
    if (*((char *)(long long)this[8]) != 42)
        return;
    return;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x402d44
void std::type_info::operator==(void* this, class std::type_info &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if ((long long)this[8] != *((long long *)(arg_0 + 8)) && (*((char *)(long long)this[8]) == 42 || strcmp((long long)this[8], *((long long *)(arg_0 + 8)))))
        return;
    return;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x402db8
long long SimpleClass::SimpleClass(char *ptr, long long a1, long long a2)
{
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    *((long long *)&ptr) = a1;
    strncpy(ptr + 4, a2, 31);
    ptr[35] = 0;
    return ptr;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x402e00
long long SimpleClass::getValue()
{
    unsigned int *v0;  // x0

    return *(v0);
}


// Function: _ZN11SimpleClass8setValueEi at 0x402e18
long long SimpleClass::setValue()
{
    unsigned int *ptr;  // x0
    unsigned int v1;  // w1

    *(ptr) = v1;
    return ptr;
}


// Function: _ZNK11SimpleClass7computeEi at 0x402e3c
long long SimpleClass::compute()
{
    unsigned int *v2;  // x0
    unsigned long long len;  // x0
    unsigned int v4;  // w1
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    len = strlen(v2 + 1);
    return (v4 * *(v2) & 4294967295) + len;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x402e80
void SimpleClass::getClassID(void* this)
{
    return;
}


// Function: _ZN14LifecycleClassC1Em at 0x402e88
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass::LifecycleClass()
{
    unsigned long long ptr[2];  // x0
    unsigned long long v4;  // x1
    char *v0;  // [bp-0x30]
    unsigned long long i;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    ptr[1] = v4;
    if (2305843009213693950 >= v4)
    {
        ptr[0] = operatornew[](__ROL__(v4, 2) & 18446744073709551612);
        i = 0;
    }
    else
    {
        __cxa_throw_bad_array_new_length(v4, 2305843009213693950);
    }
    for (; i < v4; i += 1)
    {
        *((unsigned int *)(ptr[0] + (__ROL__(i, 2) & 18446744073709551612))) = (((((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i) * 2 | (((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i >> 31) & 4294967294;
    }
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
    return &_ZN14LifecycleClass14instance_countE;
}


// Function: _ZN14LifecycleClassD1Ev at 0x402f50
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass::~LifecycleClass(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (*((long long *)this))
        operatordelete[](*((long long *)this));
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
    return;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x402fa0
long long LifecycleClass::getData()
{
    unsigned long long v0[2];  // x0
    unsigned long v1;  // x1

    if (v0[1] <= v1)
        return 4294967295;
    return *((int *)(v0[0] + (__ROL__(v1, 2) & 18446744073709551612)));
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x402fe8
void LifecycleClass::getInstanceCount(void* this)
{
    return;
}


// Function: _ZN4Base12virtual_funcEi at 0x402ff8
long long Base::virtual_func()
{
    unsigned int v0;  // w1

    return v0 + 1;
}


// Function: _ZNK4Base7getNameEv at 0x403014
void Base::getName(void* this)
{
    return;
}


// Function: _ZN4BaseD1Ev at 0x40302c
extern char g_416b10;

int Base::~Base(void* ptr)
{
    *((char **)ptr) = &g_416b10;
    return;
}


// Function: _ZN4BaseD0Ev at 0x403050
int Base::~Base(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 8);
    return;
}


// Function: _ZN4BaseC2Ev at 0x403078
extern char g_416b10;

int Base::Base(void* ptr)
{
    *((char **)ptr) = &g_416b10;
    return;
}


// Function: _ZN7DerivedC1Ei at 0x40309c
typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

extern char g_416ae0;

long long Derived::Derived()
{
    struct_0 *ptr;  // x0
    unsigned int v3;  // w1
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    Base::Base(ptr);
    *((char **)&ptr->padding_0[0]) = &g_416ae0;
    ptr->field_8 = v3;
    return ptr;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4030dc
typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

long long Derived::virtual_func()
{
    unsigned int v0;  // w1
    struct_0 *v1;  // x0

    return v0 * v1->field_8;
}


// Function: _ZNK7Derived7getNameEv at 0x403100
void Derived::getName(void* this)
{
    return;
}


// Function: _ZN5BaseA5funcAEv at 0x403118
void BaseA::funcA(void* this)
{
    return;
}


// Function: _ZN5BaseAD2Ev at 0x40312c
extern char g_416ab8;

int BaseA::~BaseA(void* ptr)
{
    *((char **)ptr) = &g_416ab8;
    return;
}


// Function: _ZN5BaseAD0Ev at 0x403150
int BaseA::~BaseA(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 16);
    return;
}


// Function: _ZN5BaseB5funcBEv at 0x403178
void BaseB::funcB(void* this)
{
    return;
}


// Function: _ZN5BaseBD1Ev at 0x40318c
extern char g_416a90;

int BaseB::~BaseB(void* ptr)
{
    *((char **)ptr) = &g_416a90;
    return;
}


// Function: _ZN5BaseBD0Ev at 0x4031b0
int BaseB::~BaseB(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 16);
    return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x4031d8
void MultiDerived::funcA(void* this)
{
    return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4031ec
void MultiDerived::funcB(void* this)
{
    return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x403200
long long non-virtual thunk to MultiDerived::funcB()(void* a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)MultiDerived::funcB(a0 - 16);
    return (unsigned long long)MultiDerived::funcB(a0 - 16);
}


// Function: _ZN5BaseAC1Ev at 0x403208
extern char g_416ab8;

int BaseA::BaseA(void* ptr)
{
    *((char **)ptr) = &g_416ab8;
    return;
}


// Function: _ZN5BaseBC2Ev at 0x40322c
extern char g_416a90;

int BaseB::BaseB(void* ptr)
{
    *((char **)ptr) = &g_416a90;
    return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x403250
extern char g_416a38;
extern char g_416a68;

long long MultiDerived::MultiDerived()
{
    void* ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    BaseA::BaseA(ptr);
    BaseB::BaseB(ptr + 16);
    *((char **)ptr) = &g_416a38;
    *((char **)&ptr[16]) = &g_416a68;
    return ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x40329c
void VirtualBase::func(void* this)
{
    return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4032b0
extern char g_416a10;

int VirtualBase::~VirtualBase(void* ptr)
{
    *((char **)ptr) = &g_416a10;
    return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4032d4
int VirtualBase::~VirtualBase(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 16);
    return;
}


// Function: _ZN7MiddleA4funcEv at 0x4032fc
void MiddleA::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x403330
long long thunk to MiddleA::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)MiddleA::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)MiddleA::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZN7MiddleB4funcEv at 0x403340
void MiddleB::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x403374
long long thunk to MiddleB::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)MiddleB::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)MiddleB::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x403384
void DiamondDerived::func(void* this)
{
    return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x4033b8
long long thunk to DiamondDerived::func()(void* *a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)DiamondDerived::func((char *)a0 + (*(a0))[24]);
    return (unsigned long long)DiamondDerived::func((char *)a0 + (*(a0))[24]);
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4033c8
long long non-virtual thunk to DiamondDerived::func()(void* a0)
{
    unsigned long v0;  // x0

    v0 = (unsigned long long)DiamondDerived::func(a0 - 16);
    return (unsigned long long)DiamondDerived::func(a0 - 16);
}


// Function: _ZN11VirtualBaseC1Ev at 0x4033d0
extern char g_416a10;

int VirtualBase::VirtualBase(void* ptr)
{
    *((char **)ptr) = &g_416a10;
    return;
}


// Function: _ZN7MiddleAC2Ev at 0x4033f4
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int MiddleA::MiddleA(void* ptr)
{
    struct_0 *idx;  // x1
    unsigned long long *v0;  // [bp-0x10]

    *((unsigned long long *)ptr) = *(v0);
    *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx->field_8;
    return;
}


// Function: _ZN7MiddleAD2Ev at 0x403444
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int MiddleA::~MiddleA(void* ptr)
{
    struct_0 *idx;  // x1
    unsigned long long *v0;  // [bp-0x10]

    *((unsigned long long *)ptr) = *(v0);
    *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx->field_8;
    return;
}


// Function: _ZN7MiddleBC2Ev at 0x403494
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int MiddleB::MiddleB(void* ptr)
{
    struct_0 *idx;  // x1
    unsigned long long *v0;  // [bp-0x10]

    *((unsigned long long *)ptr) = *(v0);
    *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx->field_8;
    return;
}


// Function: _ZN7MiddleBD2Ev at 0x4034e4
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int MiddleB::~MiddleB(void* ptr)
{
    struct_0 *idx;  // x1
    unsigned long long *v0;  // [bp-0x10]

    *((unsigned long long *)ptr) = *(v0);
    *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx->field_8;
    return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x403534
extern char g_416878;
extern char g_4168a8;
extern char g_4168e0;

long long DiamondDerived::DiamondDerived()
{
    void* ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    VirtualBase::VirtualBase(ptr + 32);
    MiddleA::MiddleA(ptr);
    MiddleB::MiddleB(ptr + 16);
    *((char **)ptr) = &g_416878;
    *((char **)&ptr[32]) = &g_4168e0;
    *((char **)&ptr[16]) = &g_4168a8;
    return ptr;
}


// Function: _ZN5PointC1Eii at 0x4035c0
int Point::Point(void* ptr, int arg_0, int arg_1)
{
    *((int *)ptr) = arg_0;
    *((int *)&ptr[4]) = arg_1;
    return;
}


// Function: _ZNK5PointplERKS_ at 0x4035f4
extern char __stack_chk_guard;

long long Point::operator+(char *a0)
{
    unsigned int v4[2];  // x1
    char *v0;  // [bp-0x30]
    char v1;  // [bp-0x10], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    Point::Point(&v1, *((int *)&a0) + v4[0], *((int *)&a0[4]) + v4[1]);
    if (v2 == *((long long *)&__stack_chk_guard))
        return v1;
    __stack_chk_fail(); /* do not return */
}


// Function: _ZNK5PointeqERKS_ at 0x403684
long long Point::operator==(char *a0)
{
    unsigned long v0;  // x1

    if (*((int *)&a0) == *((int *)v0) && *((int *)&a0[4]) == *((int *)(v0 + 4)))
        return 1;
    return 0;
}


// Function: _ZN5PointppEv at 0x4036d4
long long Point::operator++()
{
    unsigned int ptr[2];  // x0

    ptr[0] = ptr[0] + 1;
    ptr[1] = ptr[1] + 1;
    return ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403710
int template_max<int>(int arg_0, int arg_1)
{
    if (arg_0 <= arg_1)
        return arg_1;
    return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x403740
double template_max<double>(double arg_0, double arg_1)
{
    unsigned long v0;  // d0
    unsigned long v1;  // d1
    unsigned long v3;  // x0

    if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
        return v3;
    return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x403774
long long template_swap<int>(unsigned int *ptr)
{
    unsigned int *p;  // x1
    unsigned int v0;  // [bp-0x4]

    v0 = *(ptr);
    *(ptr) = *(p);
    *(p) = v0;
    return p;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4037b4
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


// Function: _ZN9ContainerIiE4pushEi at 0x4037d0
void Container<int>::push(void* ptr, int arg_0)
{
    unsigned long v0;  // x0

    if (9 >= (int)ptr[40])
    {
        v0 = (int)ptr[40];
        *((unsigned int *)&ptr[40]) = (unsigned int)v0 + 1;
        *((int *)((char *)ptr + 4 * (v0 * 0x100000000 >> 63 & 0xffffffff00000000 | v0 & 4294967295))) = arg_0;
    }
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x40381c
long long Container<int>::get()
{
    unsigned int v0;  // w1
    unsigned int *v1;  // x0

    if (v0 >= 0 && v1[10] > v0)
        return v1[v0];
    return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403864
typedef struct struct_0 {
    char padding_0[40];
    unsigned int field_28;
} struct_0;

long long Container<int>::getSize()
{
    struct_0 *v0;  // x0

    return v0->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x40387c
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


// Function: _ZN9ContainerIdE4pushEd at 0x403898
typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[72];
    unsigned int field_50;
} struct_0;

long long Container<double>::push()
{
    struct_0 *ptr;  // x0
    unsigned long index;  // x0
    unsigned long v2;  // x0
    unsigned long v3;  // d0

    index = ptr->field_50;
    if (9 >= (unsigned int)index)
    {
        v2 = ptr->field_50;
        ptr->field_50 = (unsigned int)v2 + 1;
        index = v2 * 0x100000000 >> 63 & 0xffffffff00000000 | v2 & 4294967295;
        (&ptr->field_0)[index] = v3;
    }
    return index;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4038e4
typedef struct struct_0 {
    char padding_0[80];
    unsigned int field_50;
} struct_0;

long long Container<double>::get()
{
    unsigned int v0;  // w1
    struct_0 *v1;  // x0
    struct_0 *ptr;  // x0

    v1 = v0;
    if ((unsigned int)v1 >= 0)
    {
        v1 = ptr->field_50;
        if ((unsigned int)v1 > v0)
            return ptr;
    }
    return v1;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40392c
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403944
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, class std::__uniq_ptr_data<int, std::default_delete<int>, true, true> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0);
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x40396c
long long std::unique_ptr<int, std::default_delete<int>>::unique_ptr()
{
    void* v2;  // x0
    unsigned long v3;  // x1
    unsigned long v4;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v4 = (unsigned long long)std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(v2, v3);
    return (unsigned long long)std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(v2, v3);
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x403994
void RTTIBase::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4039a8
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x4039bc
void RTTIDerivedA::derivedA_data(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4039d0
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x4039e4
void RTTIDerivedB::derivedB_data(void* this)
{
    return;
}


// Function: _ZN8RTTIBaseC1Ev at 0x4039f8
extern char g_416848;

int RTTIBase::RTTIBase(void* ptr)
{
    *((char **)ptr) = &g_416848;
    return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x403a1c
extern char g_416848;

int RTTIBase::~RTTIBase(void* ptr)
{
    *((char **)ptr) = &g_416848;
    return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x403a40
int RTTIBase::~RTTIBase(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 8);
    return;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x403a68
extern char g_416820;

long long RTTIDerivedA::RTTIDerivedA()
{
    void* ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    RTTIBase::RTTIBase(ptr);
    *((char **)ptr) = &g_416820;
    return ptr;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x403a98
extern char g_4167f8;

long long RTTIDerivedB::RTTIDerivedB()
{
    void* ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    RTTIBase::RTTIBase(ptr);
    *((char **)ptr) = &g_4167f8;
    return ptr;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x403ac8
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, int *arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0);
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x403af0
long long std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(char *a0, unsigned int *a1)
{
    unsigned long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = (unsigned long long)std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, a1);
    return (unsigned long long)std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, a1);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x403b18
int std::unique_ptr<int, std::default_delete<int>>::~unique_ptr(void* this)
{
    unsigned long long v3;  // x19
    unsigned long long *v4;  // x0
    char *v0;  // [bp-0x40]
    unsigned long long *ptr;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(this);
    if (*(ptr))
    {
        v3 = std::unique_ptr<int, std::default_delete<int>>::get_deleter(this);
        v4 = std::move<int*&>(ptr);
        std::default_delete<int>::operator()(v3, *(v4));
    }
    *(ptr) = 0;
    return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x403b80
void std::unique_ptr<int, std::default_delete<int>>::operator*(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::unique_ptr<int, std::default_delete<int>>::get(this);
    return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x403ba4
long long std::move<std::unique_ptr<int, std::default_delete<int>>&>(char *a0)
{
    return a0;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_ at 0x403bb8
int std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(void* ptr, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl(ptr, arg_0);
    *((long long *)ptr) = *((long long *)arg_0);
    return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x403bf0
int std::tuple<int*, std::default_delete<int>>::tuple(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(this, arg_0);
    return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x403c18
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl()
{
    unsigned long long v2;  // x1
    void* v4;  // x0
    unsigned long long *ptr;  // x0
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::tuple<int*, std::default_delete<int>>::tuple(v4, std::move<std::tuple<int*, std::default_delete<int>>&>(v2));
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v2);
    *(ptr) = 0;
    return ptr;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x403c60
int std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(void* this, int *arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(this, arg_0);
    return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x403c88
long long std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(char *a0, unsigned int a1[5])
{
    unsigned long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = (unsigned long long)std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(a0, a1);
    return (unsigned long long)std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(a0, a1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x403cb0
int std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr(void* this)
{
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x30]
    unsigned long long *v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
    if (*(v1))
    {
        v3 = std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter(this);
        _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(v3, *(v1), v3);
    }
    *(v1) = 0;
    return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x403d0c
long long std::unique_ptr<int[], std::default_delete<int[]>>::operator[]()
{
    unsigned long long v2;  // x0
    unsigned long v3;  // x1
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return std::unique_ptr<int[], std::default_delete<int[]>>::get(v2) + (__ROL__(v3, 2) & 18446744073709551612);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x403d44
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(void* a0)
{
    unsigned long long *ptr;  // x0
    unsigned long v3;  // x1
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::tuple<int*, std::default_delete<int>>::tuple<true, true>(a0);
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(a0);
    *(ptr) = v3;
    return ptr;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403d80
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::get<0ul, int*, std::default_delete<int>>(v2);
    return std::get<0ul, int*, std::default_delete<int>>(v2);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x403d9c
long long std::unique_ptr<int, std::default_delete<int>>::get_deleter()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(v2);
    return std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(v2);
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x403db8
long long std::move<int*&>()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x403dcc
void std::default_delete<int>::operator()(void* this, int *arg_0)
{
    char *v0;  // [bp-0x20]
    void* v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = this;
    if (arg_0)
        operatordelete(arg_0, 4);
    return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x403dfc
long long std::unique_ptr<int, std::default_delete<int>>::get()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v2);
    return std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v2);
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x403e18
class std::remove_reference<std::tuple<int*, std::default_delete<int>>&>::type & std::move<std::tuple<int*, std::default_delete<int>>&>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    return this;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x403e2c
long long std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x403e44
long long std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(void* a0)
{
    unsigned long long *ptr;  // x0
    unsigned long v3;  // x1
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>(a0);
    ptr = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(a0);
    *(ptr) = v3;
    return ptr;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x403e80
long long std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::get<0ul, int*, std::default_delete<int[]>>(v2);
    return std::get<0ul, int*, std::default_delete<int[]>>(v2);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x403e9c
long long std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v2);
    return std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v2);
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x403eb8
void* _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(unsigned long long a0, void* a1)
{
    void* v3;  // x0
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = a0;
    v3 = a1;
    if (v3)
        v3 = operatordelete[](a1);
    return v3;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x403ee8
void std::unique_ptr<int[], std::default_delete<int[]>>::get(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
    return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x403f04
long long std::tuple<int*, std::default_delete<int>>::tuple<true, true>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(v2);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(v2);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x403f24
class std::tuple_element<0ul, std::tuple<int*, std::default_delete<int>>>::type & std::get<0ul, int*, std::default_delete<int>>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__get_helper<0ul, int*, std::default_delete<int>>(this);
    return std::__get_helper<0ul, int*, std::default_delete<int>>(this);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x403f40
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::get<1ul, int*, std::default_delete<int>>(this);
    return;
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403f5c
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::get<0ul, int*, std::default_delete<int>>(this);
    return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x403f7c
long long std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl(v2);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl(v2);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x403f9c
class std::tuple_element<0ul, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0ul, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
    return std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x403fb8
void std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::get<1ul, int*, std::default_delete<int[]>>(this);
    return;
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x403fd4
long long std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return *((long long *)std::get<0ul, int*, std::default_delete<int[]>>(v2));
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev at 0x403ff4
int std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl(this);
    std::_Head_base<0ul, int*, false>::_Head_base(this);
    return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40401c
int *& std::__get_helper<0ul, int*, std::default_delete<int>>(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(this);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404038
long long std::get<1ul, int*, std::default_delete<int>>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__get_helper<1ul, std::default_delete<int>>(v2);
    return std::__get_helper<1ul, std::default_delete<int>>(v2);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x404054
long long std::get<0ul, int*, std::default_delete<int>>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__get_helper<0ul, int*, std::default_delete<int>>(v2);
    return std::__get_helper<0ul, int*, std::default_delete<int>>(v2);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x404070
int std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Tuple_impl<1ul, std::default_delete<int[]>>::_Tuple_impl(this);
    std::_Head_base<0ul, int*, false>::_Head_base(this);
    return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404098
int *& std::__get_helper<0ul, int*, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x4040b4
long long std::get<1ul, int*, std::default_delete<int[]>>()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::__get_helper<1ul, std::default_delete<int[]>>(v2);
    return std::__get_helper<1ul, std::default_delete<int[]>>(v2);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x4040d0
class std::tuple_element<0ul, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0ul, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
    return std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x4040ec
int *& std::forward<int*&>(void* this, class std::remove_reference<int*&>::type &arg_0)
{
    return this;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x404100
long long std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base(v2);
    return std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base(v2);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC1Ev at 0x404120
long long std::_Head_base<0ul, int*, false>::_Head_base()
{
    unsigned long long *ptr;  // x0

    *(ptr) = 0;
    return ptr;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x40413c
void std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<0ul, int*, false>::_M_head(this);
    return;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x404158
class std::default_delete<int> & std::__get_helper<1ul, std::default_delete<int>>(void* this, class std::_Tuple_impl<1ul, std::default_delete<int>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404174
int *& std::__get_helper<0ul, int*, std::default_delete<int>>(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x404190
long long std::_Tuple_impl<1ul, std::default_delete<int[]>>::_Tuple_impl()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base(v2);
    return std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base(v2);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x4041b0
void std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<0ul, int*, false>::_M_head(this);
    return;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x4041cc
class std::default_delete<int[]> & std::__get_helper<1ul, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<1ul, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x4041e8
int *& std::__get_helper<0ul, int*, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x404204
int std::_Head_base<0ul, int*, false>::_Head_base<int*&>(void* ptr, int *&arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    *((long long *)ptr) = *((long long *)std::forward<int*&>(arg_0, arg_0));
    return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x404234
int std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base(void* this)
{
    return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x404248
long long std::_Head_base<0ul, int*, false>::_M_head()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x40425c
void std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<1ul, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(this);
    return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x404278
void std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<0ul, int*, false>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev at 0x404294
int std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base(void* this)
{
    return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x4042a8
void std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<1ul, std::default_delete<int[]>> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<1ul, std::default_delete<int[]>, true>::_M_head(this);
    return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x4042c4
void std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    std::_Head_base<0ul, int*, false>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x4042e0
long long std::_Head_base<1ul, std::default_delete<int>, true>::_M_head()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x4042f4
long long std::_Head_base<0ul, int*, false>::_M_head()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404308
long long std::_Head_base<1ul, std::default_delete<int[]>, true>::_M_head()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x40431c
extern char g_4167f8;

int RTTIDerivedB::~RTTIDerivedB(void* ptr)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    *((char **)ptr) = &g_4167f8;
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40434c
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 8);
    return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x404374
extern char g_416820;

int RTTIDerivedA::~RTTIDerivedA(void* ptr)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    *((char **)ptr) = &g_416820;
    return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4043a4
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 8);
    return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x4043cc
extern char g_416878;
extern char g_4168a8;
extern char g_4168e0;

int DiamondDerived::~DiamondDerived(void* ptr)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    *((char **)ptr) = &g_416878;
    *((char **)&ptr[32]) = &g_4168e0;
    *((char **)&ptr[16]) = &g_4168a8;
    return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x404458
long long non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x404460
long long thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x404470
int DiamondDerived::~DiamondDerived(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 48);
    return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404498
long long non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x4044a0
long long thunk to DiamondDerived::~DiamondDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x4044b0
extern char g_416a38;
extern char g_416a68;

int MultiDerived::~MultiDerived(void* ptr)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    *((char **)ptr) = &g_416a38;
    *((char **)&ptr[16]) = &g_416a68;
    return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x4044fc
long long non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x404504
int MultiDerived::~MultiDerived(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 32);
    return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x40452c
long long non-virtual thunk to MultiDerived::~MultiDerived()(unsigned long a0)
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _ZN7DerivedD2Ev at 0x404534
extern char g_416ae0;

int Derived::~Derived(void* ptr)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    *((char **)ptr) = &g_416ae0;
    return;
}


// Function: _ZN7DerivedD0Ev at 0x404564
int Derived::~Derived(void* this)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    operatordelete(this, 16);
    return;
}


// Function: _fini at 0x40458c
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

