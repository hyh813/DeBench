// Angr Decompilation of 5-1_clang_Os_g
// Platform: X86

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *g_403ff4;

int _init()
{
    if (g_403ff4)
        g_403ff4();
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


// Function: sub_401160 at 0x401160
int sub_401160()
{
    void* v1;  // ebx

    goto (int)v1[24];
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401170
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I_5_1.cpp()
{
    unsigned int v2;  // eax
    unsigned int v0;  // [bp-0xc]

    v0 = v2;
    std::ios_base::Init::Init(&_ZStL8__ioinit);
    return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
    _start(); /* do not return */
}


// Function: _start at 0x4011b0
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


// Function: sub_4011db at 0x4011db
void sub_4011db()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198875()
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x4011e0
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_4011e4 at 0x4011e4
void sub_4011e4()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4011f0
unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[2973] + 3;
}


// Function: sub_401223 at 0x401223
void sub_401223()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401230
typedef struct struct_0 {
    char padding_0[11715];
    struct struct_1 *field_2dc3;
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
    v3 = &v2[1].padding_0[3];
    v0 = v4;
    if (!(&v3->padding_0[108] - &v3->padding_0[108] >> 31) + (&v3->padding_0[108] - &v3->padding_0[108] >> 2) >> 1)
    {
        return (&v3->padding_0[108] - &v3->padding_0[108] >> 31) + (&v3->padding_0[108] - &v3->padding_0[108] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[8]))
    {
        return (*((int *)&v3->padding_0[8]))(&v3->padding_0[108], (&v3->padding_0[108] - &v3->padding_0[108] >> 31) + (&v3->padding_0[108] - &v3->padding_0[108] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[108] - &v3->padding_0[108] >> 31) + (&v3->padding_0[108] - &v3->padding_0[108] >> 2) >> 1;
    }
}


// Function: sub_401277 at 0x401277
void sub_401277()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401280
typedef struct struct_0 {
    char padding_0[11611];
    unsigned int field_2d5b;
    char padding_2d5f[108];
    unsigned int field_2dcb;
    char padding_2dcf[16];
    char field_2ddf;
    char padding_2de0[3];
    unsigned int field_2de3;
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
    ptr = &v6->padding_2d5f[19];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[108])
        return v5;
    if (*((int *)&ptr->padding_0[24]))
        sub_401160(*((int *)&ptr->padding_0[88]));
    v10 = &ptr->padding_0[376];
    v11 = *((int *)&ptr->padding_0[112]);
    i = (&ptr->padding_0[372] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[112]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[112]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[112]);
        } while (*((int *)&ptr->padding_0[112]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[108] = 1;
    return v14;
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401310
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x401319
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x40131d
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: sub_401321 at 0x401321
int sub_401321()
{
    test_cpp_member_func();
    return;
}


// Function: _Z20test_cpp_member_funcv at 0x401324
void test_cpp_member_func()
{
    unsigned int v0;  // [bp-0x2c]
    char v1;  // [bp-0x28]
    char result;  // [bp-0x9]

    memcpy(&v1, "Test", 31);
    result = 0;
    v0 = 10;
    strlen(&v1);
    return;
}


// Function: _Z20test_cpp_constructorv at 0x401370
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
    unsigned int i;  // esi
    unsigned int *v2;  // eax
    unsigned int *ptr;  // ecx

    i = 0;
    v2 = operatornew[](20);
    ptr = v2;
    do
    {
        *(ptr) = i;
        i += 10;
        ptr += 1;
    } while (i != 50);
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
    operatordelete[](v2);
    _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
    return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013cf
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
    (*((int *)*((int *)arg_0)))(arg_0, arg_1);
    return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013f4
void test_cpp_virtual_func()
{
    return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013fa
void test_cpp_multiple_inheritance()
{
    return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401400
void test_cpp_diamond_inheritance()
{
    return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401406
void test_cpp_operator_overload()
{
    return;
}


// Function: _Z22test_cpp_template_funcv at 0x40140c
void test_cpp_template_func()
{
    return;
}


// Function: _Z23test_cpp_template_classv at 0x401412
void test_cpp_template_class()
{
    return;
}


// Function: _Z15test_cpp_lambdav at 0x401418
void test_cpp_lambda()
{
    return;
}


// Function: _Z18test_cpp_exceptionv at 0x40141e
extern char _ZTIi;

void test_cpp_exception()
{
    unsigned int *ptr;  // eax
    unsigned int v2;  // esi
    unsigned int v3;  // edx

    ptr = __cxa_allocate_exception(4);
    *(ptr) = 42;
    v2 = __cxa_throw(ptr, &_ZTIi, 0);
    if (v3 != 3 && v3 != 2)
        _Unwind_Resume(v2); /* do not return */
    __cxa_begin_catch(v2);
    __cxa_end_catch(v2);
    return;
}


// Function: sub_40145f at 0x40145f
int sub_40145f()
{
    unsigned int result;  // edx
    unsigned int v3;  // eax
    unsigned int v5;  // ebx

    if (result != 1)
    {
        if (result != 1)
            goto LABEL_0x4014fa;
        __cxa_begin_catch(v3);
        __cxa_end_catch(v3);
        __cxa_throw(__cxa_allocate_exception(1), v5 - 360, 0);
    }
    __cxa_begin_catch(v3);
    __cxa_rethrow(v3);
}


// Function: sub_40147d at 0x40147d
void sub_40147d()
{
    __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x401502
void test_cpp_smart_ptr()
{
    return;
}


// Function: _Z13test_cpp_rttiv at 0x401508
typedef struct struct_0 {
    char padding_0[4];
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char g_403ecc;
extern char g_403ee0;

void test_cpp_rtti()
{
    void* ptr;  // eax
    struct_0 **p;  // edi
    void* v0;  // [bp-0x14]

    ptr = operatornew(4);
    *((char **)ptr) = &g_403ecc;
    v0 = ptr;
    p = operatornew(4);
    *(p) = &g_403ee0;
    operatordelete(v0);
    *(p)->field_4(p);
    return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015c0
extern char g_402081;
extern char g_40209f;
extern char g_4020bb;
extern char g_4020d7;
extern char g_4020f3;
extern char g_402110;
extern char g_40212c;
extern char g_402148;
extern char g_402164;
extern char g_402180;
extern char g_40219d;
extern char g_4021ba;
extern char g_4021d8;

void test_cpp_oo_features()
{
    unsigned int v0;  // [bp-0x2c]
    char v1[31];  // [bp-0x28]
    char result;  // [bp-0x9]

    puts(&g_4021d8);
    memcpy(&v1, "Test", 31);
    result = 0;
    v0 = 10;
    strlen(&v1);
    printf(&g_402081);
    test_cpp_constructor();
    printf(&g_40209f);
    printf(&g_4020bb);
    printf(&g_4020d7);
    printf(&g_4020f3);
    printf(&g_402110);
    printf(&g_40212c);
    printf(&g_402148);
    printf(&g_402164);
    test_cpp_exception();
    printf(&g_402180);
    printf(&g_40219d);
    test_cpp_rtti();
    printf(&g_4021ba);
    return;
}


// Function: main at 0x401722
unsigned int main()
{
    test_cpp_oo_features();
    return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x40173e
int template_max<int>(int arg_0, int arg_1)
{
    if (arg_0 <= arg_1)
        return arg_1;
    return arg_0;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x40174c
// Function: _Z13template_swapIiEvRT_S1_ at 0x40175d
void template_swap<int>(int &ptr, int &p)
{
    unsigned int v0;  // edx

    v0 = *((int *)ptr);
    *((int *)ptr) = *((int *)p);
    *((unsigned int *)p) = v0;
    return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401770
int Container<int>::Container(void* ptr)
{
    *((unsigned int *)&ptr[40]) = 0;
    return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40177c
void Container<int>::push(void* ptr, int arg_0)
{
    unsigned int index;  // ecx

    index = (int)ptr[40];
    if (index <= 9)
    {
        *((unsigned int *)&ptr[40]) = index + 1;
        *((int *)((char *)ptr + 4 * index)) = arg_0;
    }
    return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401798
void Container<int>::get(void* this, int arg_0)
{
    return;
}


// Function: sub_4017af at 0x4017af
void sub_4017af(unsigned int a0)
{
    Container<int>::getSize();
    return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4017b0
void Container<int>::getSize(void* this)
{
    return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4017b8
int Container<double>::Container(void* ptr)
{
    *((unsigned int *)&ptr[80]) = 0;
    return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4017c4
void Container<double>::push(void* ptr)
{
    unsigned int idx;  // ecx

    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    idx = (int)ptr[80];
    if (idx <= 9)
    {
        *((unsigned int *)&ptr[80]) = idx + 1;
        if ([D] unsupported_<class 'pyvex.expr.GetI'>())
        {
            *((int *)((char *)ptr + 8 * idx)) = [D] unsupported_<class 'pyvex.expr.GetI'>();
            [D] PutI(136:I8x8)[t8,0] = 0x00()
        }
        else
        {
            *((unsigned long long *)((char *)ptr + 8 * idx)) = nan;
            [D] PutI(136:I8x8)[t8,0] = 0x00()
        }
        [D] PutI(72:F64x8)[t0,0] = t3()
        [D] PutI(136:I8x8)[t0,0] = 0x01()
    }
    [D] PutI(72:F64x8)[t2,0] = t3()
    [D] PutI(136:I8x8)[t2,0] = 0x01()
    [D] PutI(136:I8x8)[t2,0] = 0x00()
    return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4017e2
void Container<double>::get(void* this, int arg_0)
{
    [D] PutI(72:F64x8)[t7,0] = t10()
    [D] PutI(136:I8x8)[t7,0] = 0x01()
    if (arg_0 >= 0 && (int)this[80] > arg_0)
    {
        [D] PutI(72:F64x8)[t1,0] = t2()
        [D] PutI(136:I8x8)[t1,0] = 0x01()
        [D] PutI(136:I8x8)[t1,0] = 0x00()
        [D] PutI(72:F64x8)[t17,0] = t20()
        [D] PutI(136:I8x8)[t17,0] = 0x01()
    }
    return;
}


// Function: sub_4017fb at 0x4017fb
void sub_4017fb(unsigned int a0)
{
    Container<double>::getSize();
    return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4017fc
void Container<double>::getSize(void* this)
{
    return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401804
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
    operatordelete(this);
    return;
}


// Function: sub_401825 at 0x401825
void sub_401825()
{
    RTTIDerivedA::getType();
    return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401826
void RTTIDerivedA::getType(void* this)
{
    return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40182a
int RTTIBase::~RTTIBase(void* this)
{
    return;
}


// Function: sub_40182b at 0x40182b
int sub_40182b()
{
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40182c
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
    operatordelete(this);
    return;
}


// Function: sub_40184d at 0x40184d
void sub_40184d()
{
    RTTIDerivedB::getType();
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40184e
void RTTIDerivedB::getType(void* this)
{
    return;
}


// Function: sub_401854 at 0x401854
void sub_401854()
{
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x401860
typedef struct struct_0 {
    char padding_0[9747];
    struct struct_1 *field_2613;
    struct struct_1 *field_2617;
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
    ptr = &v2[1].padding_0[379];
    v4 = *((int *)&ptr->padding_0[384]);
    if (*((int *)&ptr->padding_0[384]) == 0xffffffff)
        return 4294967295;
    v0 = v5;
    v6 = &ptr->padding_0[384];
    do
    {
        p = v6;
        v4();
        v4 = *((int *)&p->padding_0[4]);
        v6 = &p->padding_0[4];
    } while (*((int *)&p->padding_0[4]) != 0xffffffff);
    return 4294967295;
}


// Function: sub_4018a2 at 0x4018a2
void sub_4018a2()
{
}


// Function: _fini at 0x4018ac
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

