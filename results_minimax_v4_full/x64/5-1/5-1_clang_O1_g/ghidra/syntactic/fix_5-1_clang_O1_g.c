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
typedef unsigned int uint;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra type definitions */
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef void (*code)();

/* Ghidra macro for 64-bit concatenation */
#define CONCAT44(a,b) ((uint64_t)((uint32_t)(a) | ((uint64_t)(b) << 32)))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */


/* Class and structure definitions */

/* External CRT symbols */
void *__dso_handle = 0;

/* std namespace components */
#include <new>
#include <typeinfo>
#include <string.h>
#include <stdio.h>

namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init() {}
            ~Init() {}
        };
    };
}

std::ios_base::Init __ioinit;

/* Virtual function pointer types */
typedef int (*_func_int)(void *);
typedef int (*_func_int_int)(void *, int);

/* Base class */
class Base {
public:
    _func_int_int *_vptr_Base;
    virtual int virtual_func(int x);
    virtual ~Base();
    virtual char *getName();
};

/* Derived class */
class Derived : public Base {
public:
    int multiplier;
    virtual int virtual_func(int x) override;
    virtual ~Derived();
    virtual char *getName() override;
};

/* LifecycleClass */
class LifecycleClass {
public:
    static int instance_count;
    int data[3];
    LifecycleClass();
    ~LifecycleClass();
};

/* Initialize static member */
int LifecycleClass::instance_count = 0;

/* BaseA for multiple inheritance */
class BaseA {
public:
    _func_int *_vptr_BaseA;
    int dataA;
    virtual int funcA();
    virtual ~BaseA();
};

/* BaseB for multiple inheritance */
class BaseB {
public:
    _func_int *_vptr_BaseB;
    int dataB;
    virtual int funcB();
    virtual ~BaseB();
};

/* MultiDerived class */
class MultiDerived : public BaseA, public BaseB {
public:
    virtual int funcA() override;
    virtual int funcB();
    virtual ~MultiDerived();
};

/* VirtualBase for diamond inheritance */
class VirtualBase {
public:
    virtual int func();
    virtual ~VirtualBase();
};

/* MiddleA class */
class MiddleA : public VirtualBase {
public:
    _func_int *_vptr_MiddleA;
    int dataA;
    virtual int func() override;
    virtual ~MiddleA();
};

/* MiddleB class */
class MiddleB : public VirtualBase {
public:
    _func_int *_vptr_MiddleB;
    int dataB;
    virtual int func() override;
    virtual ~MiddleB();
};

/* DiamondDerived class */
class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func() override;
    virtual ~DiamondDerived();
};

/* SimpleClass */
class SimpleClass {
public:
    int value;
    SimpleClass();
    ~SimpleClass();
};

/* RTTI classes */
class RTTIBase {
public:
    static std::type_info typeinfo;
    virtual ~RTTIBase();
    virtual int getType();
};

class RTTIDerivedA : public RTTIBase {
public:
    static std::type_info typeinfo;
    virtual ~RTTIDerivedA();
    virtual int getType() override;
};

class RTTIDerivedB : public RTTIBase {
public:
    static std::type_info typeinfo;
    virtual ~RTTIDerivedB();
    virtual int getType() override;
};

/* Exception classes */
class BaseException {
public:
    virtual ~BaseException() {}
};

class DerivedException : public BaseException {
public:
    virtual ~DerivedException() {}
};

/* Point class for operator overloading */
class Point {
public:
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    bool operator==(const Point& other) const;
    Point operator+(const Point& other) const;
};

/* Container template class */
template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int idx);
    int getSize();
};

/* External function declarations */
extern "C" {
    void *operator_new(size_t size);
    void operator_delete(void *ptr);
    void *__cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);
    void *__cxa_allocate_exception(size_t size);
    void __cxa_throw(void *exception, std::type_info *typeinfo, void (*destructor)(void *));
    void *__dynamic_cast(const void *sub, const std::type_info *src, const std::type_info *dst, long offset);
}

/* String data */
extern char DAT_0010307d[];
extern char DAT_0010309b[];
extern char DAT_001030b7[];
extern char DAT_001030d3[];
extern char DAT_001030ef[];
extern char DAT_0010310c[];
extern char DAT_00103128[];
extern char DAT_00103144[];
extern char DAT_00103160[];
extern char DAT_0010317c[];
extern char DAT_00103199[];
extern char DAT_001031b6[];
extern char DAT_001031e1[];

/* Virtual function table pointers */
extern _func_int_int *PTR_virtual_func_001059c8;
extern _func_int *PTR_funcA_00105a50;
extern _func_int *PTR__ZThn16_N12MultiDerived5funcBEv_00105a80;
extern _func_int *PTR__ZTv0_n24_N14DiamondDerived4funcEv_00105bc0;
extern void *PTR_virtual_func_00105a08;
extern void *_ZThn16_N12MultiDerived5funcBEv;
extern void *_ZTv0_n24_N14DiamondDerived4funcEv;
extern std::type_info RTTIBase_typeinfo;
extern std::type_info RTTIDerivedA_typeinfo;
extern std::type_info RTTIDerivedB_typeinfo;
extern void *PTR__RTTIBase_00105d78;
extern void *PTR__RTTIBase_00105da0;


/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00102150 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 new (&__ioinit) std::ios_base::Init();
 __cxa_atexit(0,&__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 __builtin_strncpy(local_24,"Test",5);
 local_24[5] = '\0';
 local_24[6] = '\0';
 local_24[7] = '\0';
 local_24[8] = '\0';
 local_24[9] = '\0';
 local_24[10] = '\0';
 local_24[0xb] = '\0';
 local_24[0xc] = '\0';
 local_24[0xd] = '\0';
 local_24[0xe] = '\0';
 local_24[0xf] = 0;
 local_24[0x10] = '\0';
 local_24[0x11] = '\0';
 local_24[0x12] = '\0';
 local_24[0x13] = '\0';
 local_24[0x14] = '\0';
 local_24[0x15] = '\0';
 local_24[0x16] = '\0';
 local_24[0x17] = '\0';
 local_24[0x18] = '\0';
 local_24[0x19] = '\0';
 local_24[0x1a] = '\0';
 local_24[0x1b] = '\0';
 local_24[0x1c] = '\0';
 local_24[0x1d] = '\0';
 local_24[0x1e] = '\0';
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 001022b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 undefined4 *puVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 puVar1 = (undefined4 *)operator_new(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 /* Unresolved local var: size_t i@[???] */
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar4 = LifecycleClass::instance_count + puVar1[2];
 operator_delete(puVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 00102310 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (*obj->_vptr_Base)(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00102320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 _func_int_int *local_20;
 undefined4 local_18;
 Base local_10;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_10._vptr_Base = *(_func_int_int **)&PTR_virtual_func_001059c8;
 local_20 = *(_func_int_int **)PTR_virtual_func_00105a08;
 local_18 = 3;
 iVar1 = (*local_10._vptr_Base)(&local_10,5);
 iVar2 = (*local_20)(&local_10,5);
 return iVar2 + iVar1 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00102380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived local_30;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 local_30._vptr_BaseA = *(_func_int **)&PTR_funcA_00105a50;
 local_30._vptr_BaseB = *(_func_int **)&PTR__ZThn16_N12MultiDerived5funcBEv_00105a80;
 local_30.dataA = 100;
 local_30.dataB = 200;
 iVar1 = MultiDerived::funcA(&local_30);
 iVar2 = (*local_30._vptr_BaseB)((BaseB*)&local_30);
 return iVar2 + iVar1 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 001023e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_EAX;
 int iVar1;
 DiamondDerived *obj;
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 obj = (DiamondDerived *)operator_new(sizeof(DiamondDerived));
 obj->_vptr_MiddleA = (_func_int *)PTR__ZTv0_n24_N14DiamondDerived4funcEv_00105bc0;
 obj->dataA = 0x32;
 iVar1 = DiamondDerived::func(obj);
 return iVar1 + 0x64;
}



/* Function: test_cpp_operator_overload @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00102470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00102480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_16_2_b9b285fb lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 00102490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 001024a5 to 001024b8 has its CatchHandler @ 001024bb */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 char *__s1;
 char *__s1_00;
 uint uVar1;
 int iVar2;
 void **plVar3;
 void **plVar4;
 void *lVar5;
 size_t sVar6;
 uint uVar7;
 bool bVar8;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 plVar3 = (void **)operator_new(8);
 *plVar3 = (void *)&PTR__RTTIBase_00105d78;
 plVar4 = (void **)operator_new(8);
 *plVar4 = (void *)&PTR__RTTIBase_00105da0;
 __s1 = *(char **)(*(long *)(*plVar3 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else {
 uVar7 = 0;
 if (*__s1 != '*') {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 10;
 if (iVar2 != 0) {
 uVar7 = 0;
 }
 }
 }
 __s1_00 = *(char **)(*(long *)(*plVar4 + -8) + 8);
 if (__s1_00 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else if (*__s1_00 == '*') {
 bVar8 = false;
 }
 else {
 iVar2 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar8 = iVar2 == 0;
 }
 uVar1 = uVar7 | 0x14;
 if (!bVar8) {
 uVar1 = uVar7;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 uVar7 = uVar1 + 100;
 if (lVar5 == 0) {
 uVar7 = uVar1;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(*plVar3 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return (int)sVar6 + uVar1;
}



/* Function: test_cpp_oo_features @ 001026a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 int iVar1;
 int extraout_EAX;
 int extraout_EAX_00;
 uint uVar2;
 size_t sVar3;
 undefined4 *puVar4;
 undefined4 *puVar5;
 int iVar6;
 long lVar7;
 undefined4 local_48;
 undefined4 uStack_44;
 undefined4 auStack_40 [10];
 Base local_18;
 
 puts(&DAT_001031e1);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 uStack_44 = 0x74736554;
 auStack_40[0] = 0;
 auStack_40[1] = 0;
 auStack_40[2] = 0;
 auStack_40[3] = 0;
 auStack_40[4] = 0;
 auStack_40[5] = 0;
 auStack_40[6] = 0;
 local_48 = 10;
 sVar3 = strlen((char *)&uStack_44);
 lVar7 = 0;
 printf(&DAT_0010307d,(unsigned long)((int)sVar3 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 puVar4 = (undefined4 *)operator_new(0x14);
 /* Unresolved local var: size_t i@[???] */
 puVar5 = puVar4;
 do {
 *puVar5 = (int)lVar7;
 lVar7 = lVar7 + 10;
 puVar5 = puVar5 + 1;
 } while (lVar7 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar6 = LifecycleClass::instance_count + puVar4[2];
 operator_delete(puVar4);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(&DAT_0010309b,(unsigned long)(uint)(LifecycleClass::instance_count * 1000 + iVar6));
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_18._vptr_Base = *(_func_int_int **)&PTR_virtual_func_001059c8;
 local_48 = 0x105a08;
 uStack_44 = 0;
 auStack_40[0] = 3;
 iVar6 = Base::virtual_func(&local_18,5);
 iVar1 = (**(code **)CONCAT44(uStack_44,local_48))(&local_48,5);
 printf(&DAT_001030b7,(unsigned long)(iVar6 + iVar1 + 0x15));
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 local_48 = 0x105a50;
 uStack_44 = 0;
 auStack_40[2] = 0x105a80;
 auStack_40[3] = 0;
 auStack_40[0] = 100;
 auStack_40[4] = 200;
 _ZThn16_N12MultiDerived5funcBEv((BaseB*)&auStack_40[2]);
 extraout_EAX = MultiDerived::funcA((MultiDerived*)&auStack_40[2]);
 printf(&DAT_001030d3,(unsigned long)(extraout_EAX + 0x1f));
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_48 = 0x105b58;
 uStack_44 = 0;
 auStack_40[6] = 0x105bc0;
 auStack_40[7] = 0;
 auStack_40[2] = 0x105b88;
 auStack_40[3] = 0;
 auStack_40[8] = 0x32;
 _ZTv0_n24_N14DiamondDerived4funcEv((DiamondDerived*)&auStack_40[6]);
 *(undefined4 *)((long)auStack_40 + *(long *)(CONCAT44(uStack_44,local_48) + -0x18)) = 100;
 iVar6 = (**(code **)CONCAT44(auStack_40[7],auStack_40[6]))(auStack_40 + 6);
 printf(&DAT_001030ef,(unsigned long)(uint)(extraout_EAX_00 + iVar6));
 printf("%d",0x16);
 printf("%d",0x27);
 printf("%d",0x10);
 printf("%d",0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_0010317c,(unsigned long)uVar2);
 printf(&DAT_00103199,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_001031b6,(unsigned long)uVar2);
 return;
}



/* Function: main @ 001028f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 00102900 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00102910 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: ~Base @ 00102920 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
 return;
}



/* Function: ~MultiDerived @ 00102930 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00102940 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: template_max<int> @ 00102950 */

int template_max<int>(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00102960 */

double template_max<double>(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00102970 */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00102980 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00102990 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 001029b0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 001029d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 001029e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001029f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00102a10 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00102a30 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: getName @ 00102a40 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00102a50 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 00102a60 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 00102a70 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 00102a80 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00102a90 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00102aa0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 00102ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerived5funcBEv(void)

{
 return;
}



/* Function: _ZThn16_N12MultiDerivedD1Ev @ 00102ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn16_N12MultiDerivedD0Ev @ 00102ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD0Ev(void)

{
 long in_RDI;
 
 operator_delete((void *)((char *)in_RDI - 0x10));
 return;
}



/* Function: funcA @ 00102ae0 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 00102af0 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 00102b00 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 00102b10 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 00102b20 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00102b30 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00102b40 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00102b60 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 00102b70 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00102b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleA4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 00102ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 00102bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD0Ev(void)

{
 long *in_RDI;
 
 operator_delete((void *)((char *)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00102bc0 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 00102be0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 00102bf0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 00102c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleB4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 00102c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 00102c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD0Ev(void)

{
 long *in_RDI;
 
 operator_delete((void *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00102c40 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: ~DiamondDerived @ 00102c60 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 00102c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 00102c90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 00102ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N14DiamondDerivedD0Ev(void)

{
 long in_RDI;
 
 operator_delete((void *)(in_RDI + -0x10));
 return;
}



/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 00102cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 00102cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 00102ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N14DiamondDerivedD0Ev(void)

{
 long *in_RDI;
 
 operator_delete((void *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
 return;
}



/* Function: func @ 00102cf0 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102d00 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 00102d10 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 00102d20 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00102d30 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00102d40 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00102d50 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00102d60 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
