// Angr Decompilation of 5-1_gcc_O0_no_g
// Platform: ARMEL

// Function: _init at 0x10a5c
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_10a68 at 0x10a68
extern unsigned int g_25008;

int sub_10a68()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_25008;
}


// Function: _start at 0x10bcc
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_10c04 at 0x10c04
void sub_10c04()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x10c10
extern unsigned int g_2508c;

int call_weak_fn()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    if (g_2508c)
        goto LABEL_10c28;
    return v0;
LABEL_10c28:
    v1 = __gmon_start__();
    return __gmon_start__();
}


// Function: deregister_tm_clones at 0x10c34
extern char __bss_start;

int deregister_tm_clones()
{
    if (!(1))
        goto LABEL_10c44;
    return 151704;
LABEL_10c44:
    if (!(1))
        goto LABEL_10c50;
    return 151704;
LABEL_10c50:
}


// Function: register_tm_clones at 0x10c60
extern char __bss_start;

int register_tm_clones()
{
    if (0)
        goto LABEL_10c7c;
    return 151704;
LABEL_10c7c:
    if (!(1))
        goto LABEL_10c88;
    return 151704;
LABEL_10c88:
}


// Function: __do_global_dtors_aux at 0x10c98
extern char __bss_start;

unsigned int __do_global_dtors_aux(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    if (!__bss_start)
        goto LABEL_10cac;
    return a0;
LABEL_10cac:
    v0 = deregister_tm_clones();
    __bss_start = 1;
    return v0;
}


// Function: frame_dummy at 0x10cc0
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: _Z20test_cpp_member_funcv at 0x10cc4
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_member_func()
{
    unsigned int v5;  // r1
    unsigned int v6;  // r2
    unsigned int v7;  // r3
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned int ch;  // [bp-0x34]
    char v3;  // [bp-0x30]
    unsigned int v4;  // [bp-0xc]

    v4 = GLIBC_2.4::__stack_chk_guard;
    SimpleClass::SimpleClass(&v3, 5, "Test", &v3);
    SimpleClass::setValue(&v3, 10);
    v0 = SimpleClass::getValue(&v3);
    v1 = SimpleClass::compute(&v3, 3);
    ch = SimpleClass::getClassID(v1, v5, v6, v7);
    if (!(v4 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x10d74
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_constructor()
{
    unsigned int v4;  // r0
    unsigned int v5;  // r1
    unsigned int v6;  // r0
    unsigned int v7;  // r2
    unsigned int v8;  // r3
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x18]
    char v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    v0 = 0;
    LifecycleClass::LifecycleClass(&v2, 5);
    v4 = LifecycleClass::getData(&v2, 2);
    v1 = v0 + v4;
    v0 = v1 + LifecycleClass::getInstanceCount(v4, v5, v4, v0 + v4);
    v0 += LifecycleClass::getInstanceCount(v6, v5, v7, v8) * 1000;
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x10e48
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    char v0;  // [bp-0xc]

    (*((int *)*((int *)*((int *)&v0))))(arg_0, arg_1);
    return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x10e84
class Base {
} Base;

extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char g_145f0;

void test_cpp_virtual_func()
{
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    Base *v3;  // [bp-0x2c]
    Base *v4;  // [bp-0x28]
    unsigned int v5;  // [bp-0x24]
    unsigned int v6;  // [bp-0x20]
    char v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0x14]

    v8 = GLIBC_2.4::__stack_chk_guard;
    v0 = 83440;
    Derived::Derived(&v7, 3);
    v1 = Base::virtual_func(&v0, 5);
    v2 = Derived::virtual_func(&v7, 5);
    v3 = &v0;
    v4 = &v7;
    v5 = (unsigned int)call_virtual_func(v3, 5);
    v6 = (unsigned int)call_virtual_func(v4, 5);
    if (!(v8 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_10f6c at 0x10f6c
int sub_10f6c()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1
    unsigned int v2;  // r2
    unsigned int v3;  // r3

    __cxa_end_cleanup(v0, v1, v2, v3);
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10fa0
typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_multiple_inheritance()
{
    struct_1 **v10;  // r3
    struct_1 **v12;  // r3
    struct_1 **v0;  // [bp-0x38]
    struct_1 **v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x28]
    char v5;  // [bp-0x24]
    unsigned int v6;  // [bp-0x20]
    char v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0x18]
    unsigned int v9;  // [bp-0x14]

    v9 = GLIBC_2.4::__stack_chk_guard;
    MultiDerived::MultiDerived(&v5);
    v6 = 100;
    v8 = 200;
    v0 = &v5;
    v1 = &v7;
    v2 = *(v0)->field_0(v0);
    v3 = *(v1)->field_0(v1);
    v10 = v1;
    if (v0 != v10)
    {
        v12 = 0x1;
        if (!armg_calculate_condition(2, v0, v10, 0))
            goto LABEL_11036;
LABEL_11035:
        v12 = NULL;
    }
    else
    {
        v12 = v10;
        if (armg_calculate_condition(2, v0, v12, 0))
            goto LABEL_11035;
LABEL_11036:
    }
    v4 = v12 & 255;
    if (!(v9 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_11080 at 0x11080
int sub_11080()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1
    unsigned int v2;  // r2
    unsigned int v3;  // r3

    __cxa_end_cleanup(v0, v1, v2, v3);
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x110a4
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_diamond_inheritance()
{
    struct_1 **v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    char v3;  // [bp-0x2c]
    struct_0 **v4;  // [bp-0x1c]
    unsigned int v5;  // [bp-0x18]
    unsigned int v6;  // [bp-0x14]

    v6 = GLIBC_2.4::__stack_chk_guard;
    DiamondDerived::DiamondDerived(&v3);
    v5 = 50;
    v0 = &v4;
    v1 = *(v0)->field_0(v0);
    v5 = 100;
    v2 = *(v0)->field_0(v0);
    if (!(v6 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_11158 at 0x11158
int sub_11158()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1
    unsigned int v2;  // r2
    unsigned int v3;  // r3

    __cxa_end_cleanup(v0, v1, v2, v3);
}


// Function: _Z26test_cpp_operator_overloadv at 0x1117c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_operator_overload()
{
    char result;  // [bp-0x25]
    char v1;  // [bp-0x24]
    char v2;  // [bp-0x1c]
    char v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0xc]

    v4 = GLIBC_2.4::__stack_chk_guard;
    Point::Point(&v1, 1, 2, &v1);
    Point::Point(&v2, 3, 4, &v2);
    Point::operator+(&v3, &v1, &v2, &v3);
    result = Point::operator==(&v1, &v2, &v2, &v1);
    Point::operator++(&v3);
    if (!(v4 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z22test_cpp_template_funcv at 0x11250
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_template_func()
{
    unsigned int v5;  // r1
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0xc]

    v4 = GLIBC_2.4::__stack_chk_guard;
    v2 = template_max<int>(3, 7);
    v3 = template_max<double>(0, 0x40040000, 0, 0x3ff80000);
    v0 = 10;
    v1 = 20;
    template_swap<int>(&v0, &v1, &v1, &v0);
    __aeabi_d2iz(v3, v5);
    if (!(v4 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x11324
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_template_class()
{
    unsigned int v6;  // r1
    unsigned int v0;  // [bp-0xb0]
    unsigned int size;  // [bp-0xac]
    unsigned int v2;  // [bp-0xa8]
    char v3;  // [bp-0x9c]
    char v4;  // [bp-0x70]
    unsigned int v5;  // [bp-0x14]

    v5 = GLIBC_2.4::__stack_chk_guard;
    Container<int>::Container(&v3);
    Container<int>::push(&v3, 10);
    Container<int>::push(&v3, 20);
    Container<int>::push(&v3, 30);
    v0 = Container<int>::get(&v3, 0);
    size = Container<int>::getSize(&v3);
    Container<double>::Container(&v4);
    Container<double>::push(&v4, &v4, 1374389535, 1074339512);
    v2 = Container<double>::get(&v4, 0);
    __aeabi_d2iz(v2, v6, v0, size);
    if (!(v5 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x1143c
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int test_cpp_lambda()::'lambda'(int)::operator()(int) const(struct_0 *idx, unsigned int a1)
{
    idx->field_4->field_0 = idx->field_4->field_0 + 5;
    return idx->field_0 * a1 + idx->field_4->field_0;
}


// Function: _Z15test_cpp_lambdav at 0x1149c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_lambda()
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0x14]
    char *v5;  // [bp-0x10]
    unsigned int v6;  // [bp-0xc]

    v6 = GLIBC_2.4::__stack_chk_guard;
    v1 = 10;
    v0 = 20;
    v4 = v1;
    v5 = &v0;
    v2 = test_cpp_lambda()::'lambda'(int)::operator()(int) const(&v4, 3);
    v3 = 30;
    if (!(v6 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: _Z18test_cpp_exceptionv at 0x1152c
extern unsigned int CXXABI_1.3::_ZTIi;

void test_cpp_exception()
{
    unsigned int *ptr;  // r3
    unsigned int result;  // [bp-0x24]

    result = 0;
    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    __cxa_throw(ptr, 0x24e70, 0, ptr);
    return;
}


// Function: sub_1156c at 0x1156c
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_1156c(unsigned int a0, unsigned int a1)
{
    unsigned int v6;  // r2
    unsigned int result;  // r3
    unsigned int *ptr;  // r0
    unsigned int v9;  // r2
    unsigned int v10;  // r3
    unsigned int v11;  // r1
    unsigned int *p;  // r0
    unsigned int ptr;  // r0
    unsigned int v14;  // r2
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0x18]
    unsigned int v4;  // [bp-0x14]
    unsigned int v5;  // [bp-0x10]

    v6 = a0;
    if (a1 != 1)
    {
        result = a1;
    }
    else
    {
        ptr = __cxa_begin_catch(v6);
        v2 = *(ptr);
        v1 = v0 + v2;
        v6 = __cxa_rethrow(ptr, a1, v0, v0 + v2);
        __cxa_end_catch(v6, a1, v9, v10);
        result = v11;
    }
    if (result != 1)
        __cxa_end_cleanup();
    p = __cxa_begin_catch(v6);
    v3 = *(p);
    v0 = v1 + v3 * 2;
    __cxa_end_catch(p, a1, v1, v1 + v3 * 2);
    ptr = __cxa_allocate_exception(1);
    v14 = __cxa_throw(ptr, 0x14450, 0, ptr);
    if (v11 != 2)
    {
        if (v11 != 3)
        {
            __cxa_end_cleanup();
        }
        else
        {
            v4 = __cxa_begin_catch(v14);
            v1 = v0 + 200;
            __cxa_end_catch(v4, a1, v9, v0 + 200);
        }
    }
    v5 = __cxa_begin_catch(v14);
    v1 = v0 + 100;
    __cxa_end_catch(v5, a1, v9, v0 + 100);
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x1169c
unsigned int test_cpp_smart_ptr()::'lambda'(int*)::operator()(int*) const(unsigned int a0, unsigned int *ptr)
{
    unsigned int v0;  // [bp-0xc]

    v0 = a0;
    *(ptr) = 4294967295;
    if (ptr)
        a0 = operatordelete(ptr, 4);
    return a0;
}


// Function: _Z18test_cpp_smart_ptrv at 0x116e0
extern unsigned int GLIBC_2.4::__stack_chk_guard;

void test_cpp_smart_ptr()
{
    unsigned int *p;  // r3
    unsigned int v10;  // r0
    unsigned int ptr3[5];  // r3
    unsigned int ptr4[5];  // r3
    unsigned int ptr5[5];  // r3
    unsigned int ptr[5];  // r3
    unsigned int *addr;  // r3
    char v0;  // [bp-0x34]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x2c]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0x18]
    unsigned int v8;  // [bp-0x14]

    v8 = GLIBC_2.4::__stack_chk_guard;
    p = operatornew(4);
    *(p) = 100;
    std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(&v1, p, &v1, p);
    *((unsigned int *)std::unique_ptr<int, std::default_delete<int>>::operator*(&v1)) = 200;
    v10 = std::move<std::unique_ptr<int, std::default_delete<int>>&>(&v1);
    std::unique_ptr<int, std::default_delete<int>>::unique_ptr(&v2, v10, v10, &v2);
    v5 = *((int *)std::unique_ptr<int, std::default_delete<int>>::operator*(&v2));
    ptr3 = operatornew[](20);
    ptr3[0] = 1;
    ptr4 = &ptr3[1];
    ptr4[0] = 2;
    ptr5 = &ptr4[1];
    ptr5[0] = 3;
    ptr = &ptr5[1];
    ptr[0] = 4;
    ptr[1] = 5;
    std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(&v3, ptr3, 5, &v3);
    v6 = *((int *)std::unique_ptr<int[], std::default_delete<int[]>>::operator[](&v3, 2));
    addr = operatornew(4);
    *(addr) = 500;
    std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::unique_ptr<test_cpp_smart_ptr()::'lambda'(int*), void>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(&v4, addr, &v0, addr);
    v7 = *((int *)std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::operator*() const(&v4));
    if (!(v8 ^ GLIBC_2.4::__stack_chk_guard))
        return;
    __stack_chk_fail(); /* do not return */
}


// Function: sub_11884 at 0x11884
int sub_11884()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1
    unsigned int v2;  // r2
    unsigned int v3;  // r3

    __cxa_end_cleanup(v0, v1, v2, v3);
}


// Function: _Z13test_cpp_rttiv at 0x118c4
extern char _ZTI12RTTIDerivedA;
extern char _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;

void test_cpp_rtti()
{
    void* *ptr;  // r4
    void* *p;  // r4
    void* *flag2;  // r3
    unsigned int cur;  // [bp-0x24]
    void* *result;  // [bp-0x20]
    void* *flag1;  // [bp-0x1c]
    unsigned int flag3;  // [bp-0x18]
    unsigned int flag4;  // [bp-0x14]

    ptr = operatornew(4);
    *(ptr) = NULL;
    RTTIDerivedA::RTTIDerivedA(ptr);
    result = ptr;
    p = operatornew(4);
    *(p) = NULL;
    RTTIDerivedB::RTTIDerivedB(p);
    flag1 = p;
    cur = 0;
    if (!result)
    {
        __cxa_bad_typeid();
    }
    else if (!(unsigned int)std::type_info::operator==((int)(*(result))[4], 0x1461c))
    {
        goto LABEL_11960;
    }
    cur += 10;
LABEL_11960:
    if (!flag1)
    {
        __cxa_bad_typeid();
    }
    else if (!(unsigned int)std::type_info::operator==((int)(*(flag1))[4], 0x14600))
    {
        goto LABEL_119a0;
    }
    cur += 20;
LABEL_119a0:
    flag3 = (!result ? NULL : __dynamic_cast(result, 0x14638, 0x1461c, NULL));
    if (flag3)
        cur += RTTIDerivedA::derivedA_data(flag3);
    flag4 = (!flag1 ? NULL : __dynamic_cast(flag1, 0x14638, 0x14600, NULL));
    if (flag4)
        cur += RTTIDerivedB::derivedB_data(flag4);
    if (result)
    {
        cur += strlen(std::type_info::name((int)(*(result))[4]));
        flag2 = result;
        if (!flag2)
            goto LABEL_11aa0;
    }
    else
    {
        __cxa_bad_typeid();
    }
    (int)(*(flag2))[4](flag2);
LABEL_11aa0:
    if (flag1)
        (int)(*(flag1))[4](flag1);
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x11adc
extern char g_1426c;
extern char g_14290;
extern char g_142b0;
extern char g_142cc;
extern char g_142e8;
extern char g_14304;
extern char g_14324;
extern char g_14340;
extern char g_1435c;
extern char g_14378;
extern char g_14394;
extern char g_143b4;

void test_cpp_oo_features()
{
    puts(0x1426c);
    printf(0x14290, (unsigned int)test_cpp_member_func());
    printf(0x142b0, (unsigned int)test_cpp_constructor());
    printf(0x142cc, (unsigned int)test_cpp_virtual_func());
    printf(0x142e8, (unsigned int)test_cpp_multiple_inheritance());
    printf(0x14304, (unsigned int)test_cpp_diamond_inheritance());
    printf(0x14324, (unsigned int)test_cpp_operator_overload());
    printf(0x14340, (unsigned int)test_cpp_template_func());
    printf(0x1435c, (unsigned int)test_cpp_template_class());
    printf(0x14378, (unsigned int)test_cpp_lambda());
    printf(0x14394, (unsigned int)test_cpp_exception());
    printf(0x143b4, (unsigned int)test_cpp_smart_ptr());
    printf("CPP-L4-03: %", (unsigned int)test_cpp_rtti());
    return;
}


// Function: main at 0x11c18
unsigned int main()
{
    test_cpp_oo_features();
    return 0;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ at 0x11c30
unsigned int std::__uniq_ptr_data<int, test_cpp_smart_ptr()::'lambda'(int*), true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned int a0, unsigned int a1, unsigned int a2)
{
    std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::__uniq_ptr_impl<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1, a2, a0);
    return a0;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ at 0x11c6c
int std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::unique_ptr<test_cpp_smart_ptr()::'lambda'(int*), void>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(char *a0, unsigned int *a1, char *a2)
{
    std::__uniq_ptr_data<int, test_cpp_smart_ptr()::'lambda'(int*), true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1, a2);
    return a0;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev at 0x11ca8
unsigned int std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::~unique_ptr()(unsigned int a0)
{
    unsigned int v1;  // r4
    unsigned int **v2;  // r0
    unsigned int *ptr;  // [bp-0x14]

    ptr = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr()(a0);
    if (*(ptr))
    {
        v1 = std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get_deleter()(a0);
        v2 = std::move<int*&>(ptr);
        test_cpp_smart_ptr()::'lambda'(int*)::operator()(int*) const(v1, *(v2));
    }
    *(ptr) = 0;
    return a0;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv at 0x11d1c
int std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::operator*() const()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get() const(v0);
    return std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get() const(v0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ at 0x11d4c
unsigned int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::__uniq_ptr_impl<test_cpp_smart_ptr()::'lambda'(int*) const&>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x18]

    v0 = a1;
    std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>::tuple<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, true>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, &v0, test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(a2), &v0);
    return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x11d94
int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr()(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv at 0x11dc0
int std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get_deleter()(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_deleter()(a0);
    return std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_deleter()(a0);
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv at 0x11dec
int std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get() const(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr() const(a0);
    return std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr() const(a0);
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE at 0x11e18
int test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(unsigned int a0)
{
    return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x11e3c
int std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>::tuple<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, true>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(int a0, unsigned int *a1, int a2)
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v0 = std::forward<int*&>(a1);
    v1 = test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(a2);
    std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, void>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, v0, v1, v1);
    return a0;
}


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x11e90
int std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv at 0x11ebc
int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_deleter()(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<1u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<1u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x11ee8
int std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr() const(unsigned int a0)
{
    return *((int *)std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type const& std::get<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0));
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x11f18
unsigned int std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl<int*&, test_cpp_smart_ptr()::'lambda'(int*) const&, void>(int*&, test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned int a0, unsigned int a1, unsigned int a2)
{
    std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl(test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, test_cpp_smart_ptr()::'lambda'(int*) const& std::forward<test_cpp_smart_ptr()::'lambda'(int*) const&>(std::remove_reference<test_cpp_smart_ptr()::'lambda'(int*) const&>::type&)(a2));
    std::_Head_base<0u, int*, false>::_Head_base<int*&>(a0, std::forward<int*&>(a1));
    return a0;
}


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x11f74
int int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x11f9c
int std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type& std::get<1u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = test_cpp_smart_ptr()::'lambda'(int*)& std::__get_helper<1u, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return test_cpp_smart_ptr()::'lambda'(int*)& std::__get_helper<1u, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x11fc4
int std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)>>::type const& std::get<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::tuple<int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0);
    return int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0);
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ at 0x11ff0
unsigned int std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>::_Tuple_impl(test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned int a0, unsigned int a1)
{
    std::_Head_base<1u, test_cpp_smart_ptr()::'lambda'(int*), true>::_Head_base(test_cpp_smart_ptr()::'lambda'(int*) const&)(a0, a1);
    return a0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ at 0x12020
int std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Head_base<0u, int*, false>::_M_head(a0);
    return std::_Head_base<0u, int*, false>::_M_head(a0);
}


// Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x1204c
int test_cpp_smart_ptr()::'lambda'(int*)& std::__get_helper<1u, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
    return std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>&)(a0);
}


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x12074
int int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0);
    return std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(a0);
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ at 0x1209c
int std::_Head_base<1u, test_cpp_smart_ptr()::'lambda'(int*), true>::_Head_base(test_cpp_smart_ptr()::'lambda'(int*) const&)(unsigned int a0, unsigned int a1)
{
    return a0;
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ at 0x120c4
int std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<1u, test_cpp_smart_ptr()::'lambda'(int*)>&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Head_base<1u, test_cpp_smart_ptr()::'lambda'(int*), true>::_M_head(std::_Head_base<1u, test_cpp_smart_ptr()::'lambda'(int*), true>&)(a0);
    return std::_Head_base<1u, test_cpp_smart_ptr()::'lambda'(int*), true>::_M_head(std::_Head_base<1u, test_cpp_smart_ptr()::'lambda'(int*), true>&)(a0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ at 0x120ec
int std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)>::_M_head(std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::'lambda'(int*)> const&)(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = std::_Head_base<0u, int*, false>::_M_head(a0);
    return std::_Head_base<0u, int*, false>::_M_head(a0);
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ at 0x12118
int std::_Head_base<1u, test_cpp_smart_ptr()::'lambda'(int*), true>::_M_head(std::_Head_base<1u, test_cpp_smart_ptr()::'lambda'(int*), true>&)(unsigned int a0)
{
    return a0;
}


// Function: _Z41__static_initialization_and_destruction_0ii at 0x1213c
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
    if (arg_0 != 1)
    {
        return;
    }
    else if (arg_1 == 65535)
    {
        std::ios_base::Init::Init(0x250a0);
        __aeabi_atexit(0x250a0, std::ios_base::Init::~Init, 0x25094);
        return;
    }
    else
    {
        return;
    }
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x121a0
int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
    unsigned int v0;  // r0

    v0 = (unsigned int)__static_initialization_and_destruction_0(1, 65535);
    return (unsigned int)__static_initialization_and_destruction_0(1, 65535);
}


// Function: _ZNKSt9type_info4nameEv at 0x121bc
void std::type_info::name(void* this)
{
    if (*((char *)(int)this[4]) != 42)
        return;
    return;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x12208
int SimpleClass::SimpleClass(char *ptr, int a1, int a2)
{
    *((int *)&ptr) = a1;
    strncpy(ptr + 4, a2, 31);
    ptr[35] = 0;
    return ptr;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x12260
int SimpleClass::getValue()
{
    unsigned int *v0;  // r0

    return *(v0);
}


// Function: _ZN11SimpleClass8setValueEi at 0x12288
int SimpleClass::setValue()
{
    unsigned int *ptr;  // r0
    unsigned int v1;  // r1

    *(ptr) = v1;
    return ptr;
}


// Function: _ZNK11SimpleClass7computeEi at 0x122b8
int SimpleClass::compute()
{
    unsigned int *v0;  // r0
    unsigned int len;  // r0
    unsigned int v2;  // r1

    len = strlen(v0 + 1);
    return v2 * *(v0) + len;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x12304
void SimpleClass::getClassID(void* this)
{
    return;
}


// Function: _ZN14LifecycleClassC1Ej at 0x12324
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass::LifecycleClass()
{
    unsigned int ptr[2];  // r0
    unsigned int v2;  // r1
    unsigned int i;  // [bp-0xc]

    ptr[1] = v2;
    if (!((char)armg_calculate_condition(129, v2, 3758096386, 0)))
    {
        ptr[0] = operatornew[](v2 * 4);
        i = 0;
    }
    else
    {
        __cxa_throw_bad_array_new_length();
    }
    for (; i < v2; i += 1)
    {
        *((unsigned int *)(ptr[0] + i * 4)) = i * 10;
    }
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
    return ptr;
}


// Function: _ZN14LifecycleClassD1Ev at 0x123f4
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass::~LifecycleClass(void* this)
{
    if (*((int *)this))
        operatordelete[](*((int *)this));
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
    return;
}


// Function: _ZNK14LifecycleClass7getDataEj at 0x1244c
int LifecycleClass::getData()
{
    unsigned int v0[2];  // r0
    unsigned int v1;  // r1

    return (v0[1] <= v1 ? 4294967295 : *((int *)(v0[0] + v1 * 4)));
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x124a4
void LifecycleClass::getInstanceCount(void* this)
{
    return;
}


// Function: _ZN4Base12virtual_funcEi at 0x124c8
int Base::virtual_func()
{
    unsigned int v0;  // r1

    return v0 + 1;
}


// Function: _ZNK4Base7getNameEv at 0x124f4
void Base::getName(void* this)
{
    return;
}


// Function: _ZN4BaseD1Ev at 0x1251c
extern char g_145f0;

int Base::~Base(void* ptr)
{
    *((unsigned int *)ptr) = 83440;
    return;
}


// Function: _ZN4BaseD0Ev at 0x12550
int Base::~Base(void* this)
{
    operatordelete(this, 4);
    return;
}


// Function: _ZN4BaseC2Ev at 0x12584
extern char g_145f0;

int Base::Base(void* ptr)
{
    *((unsigned int *)ptr) = 83440;
    return;
}


// Function: _ZN7DerivedC1Ei at 0x125b8
typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

extern char g_145d8;

int Derived::Derived()
{
    struct_0 *ptr;  // r0
    unsigned int v1;  // r1

    Base::Base(ptr);
    *((unsigned int *)&ptr->padding_0[0]) = 83416;
    ptr->field_4 = v1;
    return ptr;
}


// Function: _ZN7Derived12virtual_funcEi at 0x12604
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


// Function: _ZNK7Derived7getNameEv at 0x12638
void Derived::getName(void* this)
{
    return;
}


// Function: _ZN5BaseA5funcAEv at 0x12660
void BaseA::funcA(void* this)
{
    return;
}


// Function: _ZN5BaseAD2Ev at 0x12684
extern char g_145c4;

int BaseA::~BaseA(void* ptr)
{
    *((unsigned int *)ptr) = 83396;
    return;
}


// Function: _ZN5BaseAD0Ev at 0x126b8
int BaseA::~BaseA(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: _ZN5BaseB5funcBEv at 0x126ec
void BaseB::funcB(void* this)
{
    return;
}


// Function: _ZN5BaseBD1Ev at 0x12710
extern char g_145b0;

int BaseB::~BaseB(void* ptr)
{
    *((unsigned int *)ptr) = 83376;
    return;
}


// Function: _ZN5BaseBD0Ev at 0x12744
int BaseB::~BaseB(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x12778
void MultiDerived::funcA(void* this)
{
    return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x1279c
void MultiDerived::funcB(void* this)
{
    return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x127c0
int non-virtual thunk to MultiDerived::funcB()(void* a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)MultiDerived::funcB(a0 - 8);
    return (unsigned int)MultiDerived::funcB(a0 - 8);
}


// Function: _ZN5BaseAC1Ev at 0x127c8
extern char g_145c4;

int BaseA::BaseA(void* ptr)
{
    *((unsigned int *)ptr) = 83396;
    return;
}


// Function: _ZN5BaseBC2Ev at 0x127fc
extern char g_145b0;

int BaseB::BaseB(void* ptr)
{
    *((unsigned int *)ptr) = 83376;
    return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x12830
extern char g_14584;
extern char g_1459c;

int MultiDerived::MultiDerived()
{
    void* ptr;  // r0

    BaseA::BaseA(ptr);
    BaseB::BaseB(ptr + 8);
    *((unsigned int *)ptr) = 83332;
    *((unsigned int *)&ptr[8]) = 83356;
    return ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x1288c
void VirtualBase::func(void* this)
{
    return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x128b0
extern char g_14570;

int VirtualBase::~VirtualBase(void* ptr)
{
    *((unsigned int *)ptr) = 83312;
    return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x128e4
int VirtualBase::~VirtualBase(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: _ZN7MiddleA4funcEv at 0x12918
void MiddleA::func(void* this)
{
    return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1295c
int thunk to MiddleA::func()(void* *a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)MiddleA::func((char *)a0 + (*(a0))[12]);
    return (unsigned int)MiddleA::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZN7MiddleB4funcEv at 0x12970
void MiddleB::func(void* this)
{
    return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x129b4
int thunk to MiddleB::func()(void* *a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)MiddleB::func((char *)a0 + (*(a0))[12]);
    return (unsigned int)MiddleB::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x129c8
void DiamondDerived::func(void* this)
{
    return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x12a0c
int thunk to DiamondDerived::func()(void* *a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)DiamondDerived::func((char *)a0 + (*(a0))[12]);
    return (unsigned int)DiamondDerived::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x12a20
int non-virtual thunk to DiamondDerived::func()(void* a0)
{
    unsigned int v0;  // r0

    v0 = (unsigned int)DiamondDerived::func(a0 - 8);
    return (unsigned int)DiamondDerived::func(a0 - 8);
}


// Function: _ZN11VirtualBaseC1Ev at 0x12a28
extern char g_14570;

int VirtualBase::VirtualBase(void* ptr)
{
    *((unsigned int *)ptr) = 83312;
    return;
}


// Function: _ZN7MiddleAC2Ev at 0x12a5c
int MiddleA::MiddleA(void* ptr)
{
    unsigned int idx[2];  // r1

    *((unsigned int *)ptr) = idx[0];
    *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
    return;
}


// Function: _ZN7MiddleAD2Ev at 0x12abc
int MiddleA::~MiddleA(void* ptr)
{
    unsigned int idx[2];  // r1

    *((unsigned int *)ptr) = idx[0];
    *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
    return;
}


// Function: _ZN7MiddleBC2Ev at 0x12b1c
int MiddleB::MiddleB(void* ptr)
{
    unsigned int idx[2];  // r1

    *((unsigned int *)ptr) = idx[0];
    *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
    return;
}


// Function: _ZN7MiddleBD2Ev at 0x12b7c
int MiddleB::~MiddleB(void* ptr)
{
    unsigned int idx[2];  // r1

    *((unsigned int *)ptr) = idx[0];
    *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = idx[1];
    return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x12bdc
extern char g_144a4;
extern char g_144bc;
extern char g_144d8;

int DiamondDerived::DiamondDerived()
{
    void* ptr;  // r0

    VirtualBase::VirtualBase(ptr + 16);
    MiddleA::MiddleA(ptr);
    MiddleB::MiddleB(ptr + 8);
    *((unsigned int *)ptr) = 83108;
    *((unsigned int *)&ptr[16]) = 83160;
    *((unsigned int *)&ptr[8]) = 83132;
    return ptr;
}


// Function: _ZN5PointC1Eii at 0x12c74
int Point::Point(void* ptr, int arg_0, int arg_1)
{
    *((int *)ptr) = arg_0;
    *((int *)&ptr[4]) = arg_1;
    return;
}


// Function: _ZNK5PointplERKS_ at 0x12cb8
int Point::operator+(char *a0, char *a1, char *a2)
{
    Point::Point(a0, *((int *)&a1) + *((int *)&a2), *((int *)&a1[4]) + *((int *)&a2[4]));
    return a0;
}


// Function: _ZNK5PointeqERKS_ at 0x12d10
int Point::operator==(char *a0, char *a1, char *a2)
{
    if (*((int *)&a0) == *((int *)&a1) && *((int *)&a0[4]) == *((int *)&a1[4]))
        return 1;
    return 0;
}


// Function: _ZN5PointppEv at 0x12d70
int Point::operator++()
{
    unsigned int ptr[2];  // r0

    ptr[0] = ptr[0] + 1;
    ptr[1] = ptr[1] + 1;
    return ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x12dbc
int template_max<int>(int arg_0, int arg_1)
{
    if (arg_0 <= arg_1)
        return arg_1;
    return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x12dfc
double template_max<double>()
{
    unsigned int v2;  // r0
    unsigned int v3;  // r1
    unsigned int v4;  // r2
    unsigned int v5;  // r3
    char v0;  // [bp-0x4]
    char v1;  // [bp+0x0]

    if (!__aeabi_dcmpgt(v2, v3, v4, v5, v4, v5, v2, v3, &v1, *((int *)&v0)))
        return;
    return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x12e5c
int template_swap<int>(unsigned int *ptr, unsigned int *p, unsigned int *a2)
{
    unsigned int v0;  // [bp-0xc]

    v0 = *(ptr);
    *(ptr) = *(p);
    *(p) = v0;
    return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x12ea8
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


// Function: _ZN9ContainerIiE4pushEi at 0x12ed8
void Container<int>::push(void* ptr, int arg_0)
{
    unsigned int index;  // r3

    if (9 >= (int)ptr[40])
    {
        index = (int)ptr[40];
        *((unsigned int *)&ptr[40]) = index + 1;
        *((int *)((char *)ptr + 4 * index)) = arg_0;
    }
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x12f2c
int Container<int>::get()
{
    unsigned int v0;  // r1
    unsigned int *v1;  // r0

    if (v0 >= 0 && v1[10] > v0)
        return v1[v0];
    return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x12f84
typedef struct struct_0 {
    char padding_0[40];
    unsigned int field_28;
} struct_0;

int Container<int>::getSize()
{
    struct_0 *v0;  // r0

    return v0->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x12fac
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


// Function: _ZN9ContainerIdE4pushEd at 0x12fdc
int Container<double>::push(char *ptr)
{
    unsigned int v0;  // r1
    unsigned int v2;  // r2
    unsigned int v3;  // r3

    if (9 >= *((int *)&ptr[80]))
    {
        v0 = *((int *)&ptr[80]);
        *((unsigned int *)&ptr[80]) = v0 + 1;
        *((unsigned int *)&ptr[8 * v0]) = v2;
        *((unsigned int *)&ptr[4 + 8 * v0]) = v3;
    }
    return ptr;
}


// Function: _ZNK9ContainerIdE3getEi at 0x13040
int Container<double>::get()
{
    unsigned int v0;  // r1
    unsigned int *v1;  // r0

    if (v0 >= 0 && v1[20] > v0)
        return v1[2 * v0];
    return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x130a8
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x130d0
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, class std::__uniq_ptr_data<int, std::default_delete<int>, true, true> &arg_0)
{
    char v0;  // [bp-0x4]
    char v1;  // [bp+0x0]

    std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0, arg_0, this, arg_0, this, &v1, *((int *)&v0));
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x13108
int std::unique_ptr<int, std::default_delete<int>>::unique_ptr(char *a0, int a1, int a2)
{
    std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, a1);
    return a0;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x13140
void RTTIBase::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x13164
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x13188
void RTTIDerivedA::derivedA_data(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x131ac
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x131d0
void RTTIDerivedB::derivedB_data(void* this)
{
    return;
}


// Function: _ZN8RTTIBaseC1Ev at 0x131f4
extern char g_1448c;

int RTTIBase::RTTIBase(void* ptr)
{
    *((unsigned int *)ptr) = 83084;
    return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x13228
extern char g_1448c;

int RTTIBase::~RTTIBase(void* ptr)
{
    *((unsigned int *)ptr) = 83084;
    return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x1325c
int RTTIBase::~RTTIBase(void* this)
{
    operatordelete(this, 4);
    return;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x13290
extern char g_14478;

int RTTIDerivedA::RTTIDerivedA()
{
    void* ptr;  // r0

    RTTIBase::RTTIBase(ptr);
    *((unsigned int *)ptr) = 83064;
    return ptr;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x132cc
extern char g_14464;

int RTTIDerivedB::RTTIDerivedB()
{
    void* ptr;  // r0

    RTTIBase::RTTIBase(ptr);
    *((unsigned int *)ptr) = 83044;
    return ptr;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x13308
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, int *arg_0)
{
    char v0;  // [bp-0x4]
    char v1;  // [bp+0x0]

    std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0, arg_0, this, arg_0, this, &v1, *((int *)&v0));
    return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x13340
int std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(char *a0, unsigned int *a1, char *a2)
{
    std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, a1);
    return a0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x13374
int std::unique_ptr<int, std::default_delete<int>>::~unique_ptr(void* this)
{
    unsigned int v1;  // r4
    unsigned int *v2;  // r0
    unsigned int *ptr;  // [bp-0x14]

    ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(this);
    if (*(ptr))
    {
        v1 = std::unique_ptr<int, std::default_delete<int>>::get_deleter(this);
        v2 = std::move<int*&>(ptr);
        std::default_delete<int>::operator()(v1, *(v2));
    }
    *(ptr) = 0;
    return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x133e8
void std::unique_ptr<int, std::default_delete<int>>::operator*(void* this)
{
    std::unique_ptr<int, std::default_delete<int>>::get(this);
    return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x13418
int std::move<std::unique_ptr<int, std::default_delete<int>>&>()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x1343c
int std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(void* ptr, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl(ptr, arg_0);
    *((int *)ptr) = *((int *)arg_0);
    return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x1347c
int std::tuple<int*, std::default_delete<int>>::tuple(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(this, arg_0);
    return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x134b4
int std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(void* a0, int a1, int a2, void* a3, int a4, void* a5)
{
    unsigned int v0;  // [bp-0x8]

    v0 = &vvar_4;
    std::tuple<int*, std::default_delete<int>>::tuple(a0, std::move<std::tuple<int*, std::default_delete<int>>&>(a1));
    *((unsigned int *)std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(a1)) = 0;
    return a0;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x1350c
int std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(void* this, int *arg_0)
{
    char v0;  // [bp-0x4]
    char v1;  // [bp+0x0]

    std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(this, arg_0, arg_0, this, arg_0, this, &v1, *((int *)&v0));
    return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x13544
int std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(char *a0, unsigned int a1[5], int a2)
{
    std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(a0, a1);
    return a0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x13578
int std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr(void* this)
{
    unsigned int v1;  // r0
    unsigned int *ptr;  // [bp-0xc]

    ptr = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
    if (*(ptr))
    {
        v1 = std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter(this);
        _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(v1, *(ptr), v1, *(ptr));
    }
    *(ptr) = 0;
    return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj at 0x135e4
int std::unique_ptr<int[], std::default_delete<int[]>>::operator[]()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r1

    return std::unique_ptr<int[], std::default_delete<int[]>>::get(v0) + v1 * 4;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x13624
int std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(void* a0, int *a1, int *a2, void* a3, int *a4, void* a5)
{
    unsigned int v0;  // [bp-0x8]

    v0 = &vvar_4;
    std::tuple<int*, std::default_delete<int>>::tuple<true, true>(a0);
    *((int **)std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(a0)) = a1;
    return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x13668
int std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::get<0u, int*, std::default_delete<int>>(v0);
    return std::get<0u, int*, std::default_delete<int>>(v0);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x13694
int std::unique_ptr<int, std::default_delete<int>>::get_deleter()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(v0);
    return std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(v0);
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x136c0
int std::move<int*&>()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x136e4
void std::default_delete<int>::operator()(void* this, int *arg_0)
{
    void* v0;  // [bp-0xc]

    v0 = this;
    if (arg_0)
        operatordelete(arg_0, 4);
    return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x1371c
int std::unique_ptr<int, std::default_delete<int>>::get()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v0);
    return std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(v0);
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x13748
class std::remove_reference<std::tuple<int*, std::default_delete<int>>&>::type & std::move<std::tuple<int*, std::default_delete<int>>&>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    return this;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ at 0x1376c
int std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x13794
int std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(void* a0, int *a1, int *a2, void* a3, int *a4, void* a5)
{
    unsigned int v0;  // [bp-0x8]

    v0 = &vvar_4;
    std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>(a0);
    *((int **)std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(a0)) = a1;
    return a0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x137d8
int std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::get<0u, int*, std::default_delete<int[]>>(v0);
    return std::get<0u, int*, std::default_delete<int[]>>(v0);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x13804
int std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v0);
    return std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v0);
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x13830
unsigned int _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(unsigned int a0, void* a1)
{
    unsigned int v0;  // [bp-0xc]

    v0 = a0;
    if (a1)
        a0 = operatordelete[](a1);
    return a0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x13864
void std::unique_ptr<int[], std::default_delete<int[]>>::get(void* this)
{
    std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
    return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x13890
int std::tuple<int*, std::default_delete<int>>::tuple<true, true>()
{
    unsigned int v0;  // r0

    std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(v0);
    return v0;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x138bc
class std::tuple_element<0u, std::tuple<int*, std::default_delete<int>>>::type & std::get<0u, int*, std::default_delete<int>>(void* this, class std::tuple<int*, std::default_delete<int>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::__get_helper<0u, int*, std::default_delete<int>>(this);
    return std::__get_helper<0u, int*, std::default_delete<int>>(this);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x138e8
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(void* this)
{
    std::get<1u, int*, std::default_delete<int>>(this);
    return;
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x13914
void std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(void* this)
{
    std::get<0u, int*, std::default_delete<int>>(this);
    return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x13944
int std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>()
{
    unsigned int v0;  // r0

    std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_Tuple_impl(v0);
    return v0;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x13970
class std::tuple_element<0u, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0u, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::__get_helper<0u, int*, std::default_delete<int[]>>(this);
    return std::__get_helper<0u, int*, std::default_delete<int[]>>(this);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x1399c
void std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(void* this)
{
    std::get<1u, int*, std::default_delete<int[]>>(this);
    return;
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x139c8
int std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
    unsigned int v0;  // r0

    return *((int *)std::get<0u, int*, std::default_delete<int[]>>(v0));
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC1Ev at 0x139f8
int std::_Tuple_impl<0u, int*, std::default_delete<int>>::_Tuple_impl(void* this)
{
    std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl(this);
    std::_Head_base<0u, int*, false>::_Head_base(this);
    return;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13a2c
int *& std::__get_helper<0u, int*, std::default_delete<int>>(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(this);
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x13a54
int std::get<1u, int*, std::default_delete<int>>()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__get_helper<1u, std::default_delete<int>>(v0);
    return std::__get_helper<1u, std::default_delete<int>>(v0);
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x13a7c
int std::get<0u, int*, std::default_delete<int>>()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__get_helper<0u, int*, std::default_delete<int>>(v0);
    return std::__get_helper<0u, int*, std::default_delete<int>>(v0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev at 0x13aa8
int std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_Tuple_impl(void* this)
{
    std::_Tuple_impl<1u, std::default_delete<int[]>>::_Tuple_impl(this);
    std::_Head_base<0u, int*, false>::_Head_base(this);
    return;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x13adc
int *& std::__get_helper<0u, int*, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x13b04
int std::get<1u, int*, std::default_delete<int[]>>()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v1 = std::__get_helper<1u, std::default_delete<int[]>>(v0);
    return std::__get_helper<1u, std::default_delete<int[]>>(v0);
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x13b2c
class std::tuple_element<0u, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0u, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::__get_helper<0u, int*, std::default_delete<int[]>>(this);
    return std::__get_helper<0u, int*, std::default_delete<int[]>>(this);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x13b58
int std::forward<int*&>()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC1Ev at 0x13b7c
int std::_Tuple_impl<1u, std::default_delete<int>>::_Tuple_impl()
{
    unsigned int v0;  // r0

    std::_Head_base<1u, std::default_delete<int>, true>::_Head_base(v0);
    return v0;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC1Ev at 0x13ba4
int std::_Head_base<0u, int*, false>::_Head_base()
{
    unsigned int *ptr;  // r0

    *(ptr) = 0;
    return ptr;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x13bd4
void std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    std::_Head_base<0u, int*, false>::_M_head(this);
    return;
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x13c00
class std::default_delete<int> & std::__get_helper<1u, std::default_delete<int>>(void* this, class std::_Tuple_impl<1u, std::default_delete<int>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<1u, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<1u, std::default_delete<int>>::_M_head(this);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13c28
int *& std::__get_helper<0u, int*, std::default_delete<int>>(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(this);
    return std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(this);
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC1Ev at 0x13c50
int std::_Tuple_impl<1u, std::default_delete<int[]>>::_Tuple_impl()
{
    unsigned int v0;  // r0

    std::_Head_base<1u, std::default_delete<int[]>, true>::_Head_base(v0);
    return v0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x13c78
void std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int[]>> &arg_0)
{
    std::_Head_base<0u, int*, false>::_M_head(this);
    return;
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13ca4
class std::default_delete<int[]> & std::__get_helper<1u, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<1u, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<1u, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<1u, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x13ccc
int *& std::__get_helper<0u, int*, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int[]>> &arg_0)
{
    unsigned int v0;  // r0

    v0 = std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(this);
    return std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(this);
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ at 0x13cf4
int std::_Head_base<0u, int*, false>::_Head_base<int*&>(void* ptr, int *&arg_0)
{
    unsigned int v0;  // [bp-0x10]

    *((int *&*)&v0) = arg_0;
    *((int *)ptr) = *((int *)std::forward<int*&>());
    return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC1Ev at 0x13d30
int std::_Head_base<1u, std::default_delete<int>, true>::_Head_base(void* this)
{
    return;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ at 0x13d54
int std::_Head_base<0u, int*, false>::_M_head()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x13d78
void std::_Tuple_impl<1u, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<1u, std::default_delete<int>> &arg_0)
{
    std::_Head_base<1u, std::default_delete<int>, true>::_M_head(this);
    return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x13da0
void std::_Tuple_impl<0u, int*, std::default_delete<int>>::_M_head(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int>> &arg_0)
{
    std::_Head_base<0u, int*, false>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev at 0x13dcc
int std::_Head_base<1u, std::default_delete<int[]>, true>::_Head_base(void* this)
{
    return;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x13df0
void std::_Tuple_impl<1u, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<1u, std::default_delete<int[]>> &arg_0)
{
    std::_Head_base<1u, std::default_delete<int[]>, true>::_M_head(this);
    return;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x13e18
void std::_Tuple_impl<0u, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0u, int*, std::default_delete<int[]>> &arg_0)
{
    std::_Head_base<0u, int*, false>::_M_head(this);
    return;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x13e44
int std::_Head_base<1u, std::default_delete<int>, true>::_M_head()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ at 0x13e68
int std::_Head_base<0u, int*, false>::_M_head()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x13e8c
int std::_Head_base<1u, std::default_delete<int[]>, true>::_M_head()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x13eb0
extern char g_14464;

int RTTIDerivedB::~RTTIDerivedB(void* ptr)
{
    *((unsigned int *)ptr) = 83044;
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x13eec
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    operatordelete(this, 4);
    return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x13f20
extern char g_14478;

int RTTIDerivedA::~RTTIDerivedA(void* ptr)
{
    *((unsigned int *)ptr) = 83064;
    return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x13f5c
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    operatordelete(this, 4);
    return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x13f90
extern char g_144a4;
extern char g_144bc;
extern char g_144d8;

int DiamondDerived::~DiamondDerived(void* ptr)
{
    *((unsigned int *)ptr) = 83108;
    *((unsigned int *)&ptr[16]) = 83160;
    *((unsigned int *)&ptr[8]) = 83132;
    return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x14028
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x14030
int thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x14044
int DiamondDerived::~DiamondDerived(void* this)
{
    operatordelete(this, 24);
    return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x14078
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x14080
int thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x14094
extern char g_14584;
extern char g_1459c;

int MultiDerived::~MultiDerived(void* ptr)
{
    *((unsigned int *)ptr) = 83332;
    *((unsigned int *)&ptr[8]) = 83356;
    return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x140f0
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x140f8
int MultiDerived::~MultiDerived(void* this)
{
    operatordelete(this, 16);
    return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x1412c
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
    unsigned int v0;  // r0

    return v0;
}


// Function: _ZN7DerivedD2Ev at 0x14134
extern char g_145d8;

int Derived::~Derived(void* ptr)
{
    *((unsigned int *)ptr) = 83416;
    return;
}


// Function: _ZN7DerivedD0Ev at 0x14170
int Derived::~Derived(void* this)
{
    operatordelete(this, 8);
    return;
}


// Function: _fini at 0x141a4
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

