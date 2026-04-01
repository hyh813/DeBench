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
typedef uint8_t undefined;
typedef uint32_t undefined4;

// Forward declarations for template functions
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

// Forward declarations for functions
void test_cpp_oo_features(void);

// Forward declarations for classes
class Base;
class Derived;
class MultiDerived;
class MiddleA;
class MiddleB;
class DiamondDerived;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
template<typename T> class Container;
class LifecycleClass;

// Class definitions
class Base {
public:
    virtual int virtual_func(int param_1);
    virtual ~Base();
    const char* getName() const;
};

class Derived : public Base {
public:
    int value;
    virtual int virtual_func(int param_1) override;
    virtual ~Derived();
    const char* getName() const;
};

class MultiDerived : public Base, public Derived {
public:
    virtual ~MultiDerived();
    uint64_t funcA();
    uint64_t funcB();
};

class MiddleA {
public:
    int func();
};

class MiddleB {
public:
    int func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual uint64_t getType() const;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual uint64_t getType() const;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual uint64_t getType() const;
};

template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int index) const;
    int getSize() const;
};

class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass();
    virtual ~LifecycleClass();
};

// Data section symbols
extern "C" {
    extern char DAT_00102018;
    extern char DAT_0010203c;
    extern char DAT_0010205a;
    extern char DAT_00102076;
    extern char DAT_00102092;
    extern char DAT_001020ae;
    extern char DAT_001020cb;
    extern char DAT_001020e7;
    extern char DAT_00102103;
    extern char DAT_0010211f;
    extern char DAT_0010213b;
    extern char DAT_00102158;
    extern char DAT_00102175;
    extern char DAT_00102004;
    extern void* PTR__RTTIDerivedA_00103c70;
    extern void* PTR__RTTIDerivedB_00103c98;
}

// RTTI typeinfo declarations
namespace int {
    extern void* typeinfo;
}

namespace Base {
    extern void* typeinfo;
}

namespace Derived {
    extern void* typeinfo;
}

namespace RTTIBase {
    void* typeinfo;
}

namespace RTTIDerivedA {
    void* typeinfo;
}

namespace RTTIDerivedB {
    void* typeinfo;
}

// Define std::__ioinit for iostream initialization
namespace std {
    extern char __ioinit;
}

// Standard library functions
#include <cstring>
#include <cstdio>
#include <ios>

// GCC stack protection
extern "C" void __stack_chk_fail(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00101264 to 00101268 has its CatchHandler @ 00101269 */
 __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: main @ 00101310 */

uint64_t main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std::ios_base::Init init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34[0x1e] = 0;
 __builtin_strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1f] = 0;
 sVar1 = strlen(local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001014d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001014f0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001014f7. Too many branches */
 /* WARNING: Treating indirect jump as call */
 param_1->virtual_func(param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

uint64_t test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

uint64_t test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

uint64_t test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

uint64_t test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max<int>(3,7);
 dVar2 = template_max<double>(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap<int>(&local_18,&local_14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001015e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

uint64_t test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001015f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

uint64_t test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

uint64_t test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101610 */

/* WARNING: Removing unreachable block (ram,0x001016b2) */
/* WARNING: Removing unreachable block (ram,0x001016b7) */
/* WARNING: Removing unreachable block (ram,0x001016be) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
 plVar4 = operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 iVar2 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = (-(uint)(iVar2 == 0) & 10) + 0x14;
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 100;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(lVar1 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t sVar3;
 long in_FS_OFFSET;
 double dVar4;
 int local_40;
 int local_3c [2];
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102018);
 __builtin_strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1e] = 0;
 local_34[0x1f] = 0;
 sVar3 = strlen(local_34);
 __printf_chk(1,&DAT_0010203c,(int)sVar3 + 0x125c);
 __printf_chk(1,&DAT_0010205a,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,&DAT_00102076,0x2a);
 __printf_chk(1,&DAT_00102092,0x47);
 __printf_chk(1,&DAT_001020ae,0x28a);
 __printf_chk(1,&DAT_001020cb,0x16);
 iVar1 = template_max<int>(3,7);
 dVar4 = template_max<double>(2.5,1.5);
 local_40 = 10;
 local_3c[0] = 0x14;
 template_swap<int>(&local_40,&local_3c[0]);
 __printf_chk(1,&DAT_001020e7,(int)dVar4 + iVar1 + local_40 + local_3c[0]);
 __printf_chk(1,&DAT_00102103,0x10);
 __printf_chk(1,&DAT_0010211f,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_0010213b,uVar2);
 __printf_chk(1,&DAT_00102158,0x2bf);
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102175);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 00101990 */

/* Base::virtual_func(int) */

int Base::virtual_func(int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001019a0 */

/* Base::getName() const */

undefined * Base::getName(void)

{
 return &DAT_00102004;
}



/* Function: ~Base @ 001019b0 */

/* Base::~Base() */

Base::~Base()

{
 return;
}



/* Function: virtual_func @ 001019c0 */

/* Derived::virtual_func(int) */

int Derived::virtual_func(int param_1)

{
 return *(int *)(this + 8) * param_1;
}



/* Function: getName @ 001019d0 */

/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: funcA @ 001019e0 */

/* MultiDerived::funcA() */

uint64_t MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 001019f0 */

/* MultiDerived::funcB() */

uint64_t MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00101a00 */

/* non-virtual thunk to MultiDerived::funcB() */

uint64_t MultiDerived::funcB_thunk()

{
 return 0x28;
}



/* Function: func @ 00101a10 */

/* MiddleA::func() */

int MiddleA::func()

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101a30 */

/* virtual thunk to MiddleA::func() */

int MiddleA::func_thunk()

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101a50 */

/* MiddleB::func() */

int MiddleB::func()

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101a70 */

/* virtual thunk to MiddleB::func() */

int MiddleB::func_thunk()

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}



/* Function: func @ 00101a90 */

/* DiamondDerived::func() */

int DiamondDerived::func()

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ab0 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived::func_virtual_thunk()

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ad0 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived::func_thunk_nv()

{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101af0 */

/* RTTIDerivedA::getType() const */

uint64_t RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 00101b00 */

/* RTTIDerivedB::getType() const */

uint64_t RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101b10 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB::~RTTIDerivedB()

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101b20 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA::~RTTIDerivedA()

{
 return;
}



/* Function: ~DiamondDerived @ 00101b30 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived::~DiamondDerived()
{
 return;
}



/* Function: func @ 00101a90 */

/* Derived::~Derived() */

Derived::~Derived()

{
 return;
}



/* Function: ~Base @ 00101b90 */

/* Base::~Base() */

Base::~Base()
{
 operator delete(this, 8);
 return;
}



/* Function: ~Derived @ 00101ba0 */

/* Derived::~Derived() */

Derived::~Derived()

{
 operator delete(this, 0x10);
 return;
}



/* Function: ~MultiDerived @ 00101bc0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived_nvthunk2()

{
 operator_delete(this + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101be0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __attribute__((thiscall)) RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator delete(this, 8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101bf0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __attribute__((thiscall)) RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator delete(this, 8);
 return;
}



/* Function: ~DiamondDerived @ 00101c00 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived::~DiamondDerived()

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101c10 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived_vthunk2()

{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101c30 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived_nvthunk2()

{
 operator_delete(this + -0x10,0x30);
 return;
}



/* Function: template_max<int> @ 00101c50 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00101c60 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00101c70 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101c80 */

/* Container<int>::Container() */

Container<int>::Container()

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00101c90 */

/* Container<int>::push(int) */

void Container<int>::push(int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00101cb0 */

/* Container<int>::get(int) const */

int Container<int>::get(int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(int *)(this + (long)param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101cd0 */

/* Container<int>::getSize() const */

int Container<int>::getSize()

{
 return *(int *)(this + 0x28);
}



/* Function: Container @ 00101ce0 */

/* Container<double>::Container() */

Container<double>::Container()

{
 *(int *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101cf0 */

/* Container<double>::push(double) */

void Container<double>::push(double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101d10 */

/* Container<double>::get(int) const */

uint64_t Container<double>::get(int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(uint64_t *)(this + (long)param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 00101d40 */

/* Container<double>::getSize() const */

int Container<double>::getSize()

{
 return *(int *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
