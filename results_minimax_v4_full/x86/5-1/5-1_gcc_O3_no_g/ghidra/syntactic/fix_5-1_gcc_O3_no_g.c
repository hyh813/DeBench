/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* CRT function pointer typedef */
typedef void (*code)();

/* Calling convention macro - used by some decompilers to mark thiscall conventions - disabled for C++ */
#define __thiscall

/* Math function macro */
#define ROUND(x) floor((x) + 0.5)

/* std library functions needed */
#define builtin_strncpy strncpy

/* Forward declarations for CRT functions */
size_t strlen(const char *);
void __stack_chk_fail_local(void);

/* std namespace components needed */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    static std::ios_base::Init __ioinit;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00011270 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 000112a3 to 000112a7 has its CatchHandler @ 000112a8 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 00011380 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000113a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001140c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011410 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011549 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001154d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Forward class declarations */
class Base;
class Derived;
class MiddleA;
class MiddleB;
class MultiDerived;
class DiamondDerived;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class LifecycleClass;

/* Template function declarations */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T* a, T* b);

template<typename T>
class Container;

/* Class definitions */
class Base {
public:
    virtual int virtual_func(int);
    virtual ~Base();
    const char* getName() const;
    static int typeinfo;
};

class Derived : public Base {
public:
    virtual int virtual_func(int);
    virtual ~Derived();
    static int typeinfo;
};

class MiddleA {
public:
    virtual int func();
    static int typeinfo;
};

class MiddleB {
public:
    virtual int func();
    static int typeinfo;
};

class MultiDerived : public MiddleA, public MiddleB {
public:
    virtual int funcA();
    virtual int funcB();
    virtual ~MultiDerived();
    static int typeinfo;
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
    static int typeinfo;
};

class RTTIBase {
public:
    static int typeinfo;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual int getType();
    virtual ~RTTIDerivedA();
    static int typeinfo;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual int getType();
    virtual ~RTTIDerivedB();
    static int typeinfo;
};

class LifecycleClass {
public:
    static int instance_count;
};

template<typename T>
class Container {
public:
    Container();
    void push(T);
    T get(int) const;
    int getSize() const;
    T data[10];
    int size;
};

/* Static member variable definitions */
int Base::typeinfo = 0;
int Derived::typeinfo = 0;
int MiddleA::typeinfo = 0;
int MiddleB::typeinfo = 0;
int MultiDerived::typeinfo = 0;
int DiamondDerived::typeinfo = 0;
int RTTIBase::typeinfo = 0;
int RTTIDerivedA::typeinfo = 0;
int RTTIDerivedB::typeinfo = 0;
int LifecycleClass::instance_count = 0;

/* Template implementations */
template<typename T>
Container<T>::Container() {
    size = 0;
}

template<typename T>
void Container<T>::push(T value) {
    if (size < 10) {
        data[size++] = value;
    }
}

template<typename T>
T Container<T>::get(int index) const {
    if (index >= 0 && index < size) {
        return data[index];
    }
    return T();
}

template<typename T>
int Container<T>::getSize() const {
    return size;
}



/* Explicit template instantiations - must be inside a namespace */
namespace {
template int template_max<int>(int, int);
template double template_max<double>(double, double);
template void template_swap<int>(int*, int*);
template class Container<int>;
template class Container<double>;
}

/* Function: test_cpp_member_func @ 00011560 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 int uStack_8;
 
 uStack_8 = 0x1156c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 builtin_strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 local_30[0x1e] = 0;
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_constructor @ 00011600 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00011620 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0001162e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(int **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max<int>(3,7);
 dVar2 = template_max<double>(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap<int>(&local_18,&local_14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_template_class @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011750 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000117ef) */
/* WARNING: Removing unreachable block (ram,0x000117f8) */
/* WARNING: Removing unreachable block (ram,0x0001180b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 char *__s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00014e48;
 piVar3 = operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00014e5c;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 iVar4 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar4 = 0x14;
 }
 else {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 iVar4 = (-(uint)(iVar4 == 0) & 10) + 0x14;
 }
 iVar5 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 100;
 }
 iVar5 = __dynamic_cast(piVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(iVar1 + 4))(piVar2);
 (**(code **)(*piVar3 + 4))(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 000118c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 int uVar3;
 int in_GS_OFFSET;
 double dVar4;
 int local_3c;
 int local_38 [2];
 char local_30 [32];
 int local_10;
 int uStack_c;
 
 uStack_c = 0x118cb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00013018);
 local_30[0x1e] = 0;
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 builtin_strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 __printf_chk(1,&DAT_0001303c,sVar1 + 0x125c);
 __printf_chk(1,&DAT_0001305a,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,&DAT_00013076,0x2a);
 __printf_chk(1,&DAT_00013092,0x47);
 __printf_chk(1,&DAT_000130ae,0x28a);
 __printf_chk(1,&DAT_000130cb,0x16);
 iVar2 = template_max<int>(3,7);
 dVar4 = template_max<double>(2.5,1.5);
 local_3c = 10;
 local_38[0] = 0x14;
 template_swap<int>(&local_3c,local_38);
 __printf_chk(1,&DAT_000130e7,(int)ROUND(dVar4) + iVar2 + local_3c + local_38[0]);
 __printf_chk(1,&DAT_00013103,0x10);
 __printf_chk(1,&DAT_0001311f,0x55);
 uVar3 = test_cpp_exception();
 __printf_chk(1,&DAT_0001313b,uVar3);
 __printf_chk(1,&DAT_00013158,0x2bf);
 uVar3 = test_cpp_rtti();
 __printf_chk(1,&DAT_00013175,uVar3);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011ae0 */

/* Base::virtual_func(int) */

int Base::virtual_func(int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011af0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

void * Base::getName(void)

{
 return (void *)&DAT_00013008;
}



/* Base::~Base() */

Base::~Base(void)

{
 return;
}



/* Function: virtual_func @ 00011b20 */

/* Derived::virtual_func(int) */

int Derived::virtual_func(int param_1)

{
 return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 00011b40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011b60 */

/* MultiDerived::funcA() */

int MultiDerived::funcA()

{
 return 0x1e;
}



/* Function: funcB @ 00011b70 */

/* MultiDerived::funcB() */

int MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011b80 */

/* non-virtual thunk to MultiDerived::funcB() */

int MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011b90 */

/* MiddleA::func() */

int MiddleA::func()

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011bb0 */

/* virtual thunk to MiddleA::func() */

int MiddleA::func()

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011bd0 */

/* MiddleB::func() */

int MiddleB::func()

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00011bf0 */

/* MiddleB::func() - vtable adjusted */

int MiddleB::func()

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}



/* Function: func @ 00011c10 */

/* DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c30 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c50 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011c70 */

/* RTTIDerivedA::getType() const */

int RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 00011c80 */

/* RTTIDerivedB::getType() const */

int RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011c90 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB::~RTTIDerivedB()

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011ca0 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA::~RTTIDerivedA()

{
 return;
}



/* Function: ~DiamondDerived @ 00011cb0 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived::~DiamondDerived()

{
 return;
}



/* Function: ~DiamondDerived @ 00011cc0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived::~DiamondDerived()

{
 return;
}



/* Function: ~DiamondDerived @ 00011cd0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived::~DiamondDerived()

{
 return;
}



/* Function: ~MultiDerived @ 00011ce0 */

/* MultiDerived::~MultiDerived() */

MultiDerived::~MultiDerived()

{
 return;
}



/* Function: ~Derived @ 00011d00 */

/* Derived::~Derived() */

Derived::~Derived()

{
 return;
}



/* Function: ~Base @ 00011d10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

Base::~Base()

{
 operator_delete(this,4);
 return;
}



/* Derived::~Derived() */

Derived::~Derived()

{
 operator_delete(this,8);
 return;
}



/* Function: ~MultiDerived @ 00011d70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

MultiDerived::~MultiDerived()

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived::~MultiDerived()

{
 operator_delete((char*)this - 8,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB::~RTTIDerivedB()

{
 operator_delete(this,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011e00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA::~RTTIDerivedA()

{
 operator_delete(this,4);
 return;
}



/* Function: ~DiamondDerived @ 00011e30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

DiamondDerived::~DiamondDerived()

{
 operator_delete(this,0x18);
 return;
}



/* Function: template_max<int> @ 00011ec0 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011ee0 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00011f00 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011f20 */

/* Container<int>::Container() */

Container<int>::Container(Container<int> *this)

{
 *(int *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00011f30 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this, int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011f50 */

/* Container<int>::get(int) const */

int Container<int>::get(Container<int> *this, int param_1) const

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(int *)(this + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00011f80 */

/* Container<int>::getSize() const */

int Container<int>::getSize(Container<int> *this) const

{
 return *(int *)(this + 0x28);
}



/* Function: Container @ 00011f90 */

/* Container<double>::Container() */

Container<double>::Container(Container<double> *this)

{
 *(int *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00011fa0 */

/* Container<double>::push(double) */

void Container<double>::push(Container<double> *this, double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00011fd0 */

/* Container<double>::get(int) const */

longdouble Container<double>::get(Container<double> *this, int param_1) const

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return (longdouble)*(double *)(this + param_1 * 8);
 }
 return (longdouble)0;
}



/* Function: getSize @ 00012000 */

/* Container<double>::getSize() const */

int Container<double>::getSize(Container<double> *this) const

{
 return *(int *)(this + 0x50);
}



/* Function: __x86.get_pc_thunk.ax @ 0001200c */

/* WARNING: This is an inlined function */

int __x86_get_pc_thunk_ax(void)

{
 int unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00012010 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012020 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */



