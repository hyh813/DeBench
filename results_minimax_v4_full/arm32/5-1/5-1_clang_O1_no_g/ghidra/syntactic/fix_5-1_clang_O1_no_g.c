/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// size_t, ssize_t, intptr_t, uintptr_t, ptrdiff_t are defined in <cstddef>
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Undefined types for decompiled code */
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef void *undefined;

/* Standard library includes */
#include <cstddef>
#include <cstring>
#include <cstdio>
#include <new>
#include <cstdlib>
#include <iostream>
#include <cstdint>

/* Ghidra type replacements */
typedef void (*code_ptr)();
typedef void (*code)();

// Note: intptr_t, uintptr_t, size_t, etc. are defined in <cstddef>

/* CRT extern declarations */
extern void __cxa_atexit(void *destructor, void *arg, void *dso_handle);
extern void *__dso_handle;
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *thrown_exception, void *typeinfo, void *dest);
extern void *__dynamic_cast(const void *ptr, const void *src_typeinfo, const void *dst_typeinfo, ptrdiff_t src2dst);

/* Forward declarations for classes */
class Base;
class Derived;
class MultiDerived;
class DiamondDerived;
class MiddleA;
class MiddleB;
class VirtualBase;
class BaseA;
class BaseB;
class LifecycleClass;
class RTTIBase;
class RTTIDerivedB;
class Container_int_;
class Container_double_;

/* BaseA class - needed for MultiDerived inheritance */
class BaseA {
public:
    virtual int funcA();
    virtual ~BaseA();
};

/* BaseB class - needed for MultiDerived inheritance */
class BaseB {
public:
    virtual int funcB();
    virtual ~BaseB();
};

/* VirtualBase class - needed for MiddleA/MiddleB inheritance */
class VirtualBase {
public:
    virtual int func();
    virtual ~VirtualBase();
};

/* Typeinfo declarations */
namespace int_ { extern void *typeinfo; }
namespace RTTIBase_ns { extern void *typeinfo; }
namespace RTTIDerivedA_ns { extern void *typeinfo; }
namespace RTTIDerivedB_ns { extern void *typeinfo; }

/* Virtual function table pointers */
extern undefined4 *PTR_virtual_func_00022cf0;
extern undefined4 *PTR_virtual_func_00022d10;
extern undefined4 *PTR_funcB_00022d4c;
extern undefined4 *PTR_funcA_00022d34;
extern undefined4 *PTR_func_00022df0;
extern undefined4 *PTR_func_00022dbc;
extern undefined4 *PTR_func_00022dd4;
extern undefined4 *PTR__RTTIBase_00022ed8;
extern undefined4 *PTR__RTTIBase_00022eec;

/* Data pointers */
extern char DAT_00011c71;
extern char DAT_00011b0d;
extern char DAT_00011b2b;
extern char DAT_00011b47;
extern char DAT_00011b63;
extern char DAT_00011b7f;
extern char DAT_00011b9c;
extern char DAT_00011bb8;
extern char DAT_00011bd4;
extern char DAT_00011bf0;
extern char DAT_00011c0c;
extern char DAT_00011c29;
extern char DAT_00011c46;
extern char DAT_00011c64;

/* LifecycleClass static member */
class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Base class */
class Base {
public:
    virtual int virtual_func(int param_1);
    virtual ~Base();
    char* getName() const;
};

/* Derived class */
class Derived : public Base {
public:
    int member;
    virtual int virtual_func(int param_1) override;
    virtual ~Derived();
    char* getName() const;
};

/* MultiDerived class */
class MultiDerived : public BaseA, public BaseB {
public:
    virtual int funcA();
    virtual int funcB();
    virtual ~MultiDerived();
};

/* MiddleA class */
class MiddleA : virtual public VirtualBase {
public:
    virtual int func();
    virtual ~MiddleA();
};

/* MiddleB class */
class MiddleB : virtual public VirtualBase {
public:
    virtual int func();
    virtual ~MiddleB();
};

/* DiamondDerived class */
class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

/* RTTI classes */
class RTTIBase {
public:
    static void *typeinfo;
    virtual int getType() const;
    virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
    static void *typeinfo;
    virtual int getType() const;
    virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
    static void *typeinfo;
    virtual int getType() const;
    virtual ~RTTIDerivedB();
};

/* Define the static typeinfo members */
void *RTTIBase::typeinfo = nullptr;
void *RTTIDerivedA::typeinfo = nullptr;
void *RTTIDerivedB::typeinfo = nullptr;

/* Container<int> class */
class Container_int_ {
private:
    int data[10];
    int size;
public:
    Container_int_();
    void push(int value);
    int get(int index) const;
    int getSize() const;
};

/* Container<double> class */
class Container_double_ {
private:
    double data[10];
    int size;
public:
    Container_double_();
    void push(double value);
    double get(int index) const;
    int getSize() const;
};

/* Operator new/delete wrappers */
inline void* operator_new__(size_t size) { return ::operator new(size); }
inline void operator_delete__(void* ptr) { ::operator delete(ptr); }

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010cb8 */

// Simple destructor wrapper function
static void std_ios_base_Init_destructor(void* arg) {
    ((std::ios_base::Init*)arg)->~Init();
}

void _GLOBAL__sub_I_5_1_cpp(void)

{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit(std_ios_base_Init_destructor,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 local_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 undefined2 local_c;
 undefined1 local_a;
 undefined1 local_9;
 
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 int iVar3;
 
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 iVar2 = LifecycleClass::instance_count + 1;
 iVar3 = *(int *)((int)pvVar1 + 8);
 LifecycleClass::instance_count = iVar2;
 operator_delete__(pvVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar3 + iVar2;
}



/* Function: call_virtual_func @ 00010f48 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 Base *temp_base;
 
 temp_base = (Base *)0x1000;  // Dummy base pointer
 iVar1 = temp_base->virtual_func(5);
 iVar2 = temp_base->virtual_func(5);
 return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00010fdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 code *local_18;
 undefined4 local_14;
 MultiDerived tmp;
 
 local_14 = 200;
 local_18 = (code *)PTR_funcB_00022d4c;
 iVar1 = tmp.funcA();
 iVar2 = local_18();
 return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined **local_18;
 undefined4 local_14;
 
 local_14 = 0x32;
 local_18 = &PTR_func_00022df0;
 DiamondDerived tmp_diamond;
 iVar1 = tmp_diamond.func();
 local_14 = 100;
 iVar2 = tmp_diamond.func();
 return iVar2 + iVar1;
}



/* Function: test_cpp_operator_overload @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000110d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 000110e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000110e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000110f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000111c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 000111cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 void *pvVar1;
 void *pvVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 uint uVar7;
 bool bVar8;
 
 pvVar1 = operator_new__(4);
 *(void **)pvVar1 = &PTR__RTTIBase_00022ed8;
 pvVar2 = operator_new__(4);
 uVar7 = 0;
 *(void **)pvVar2 = nullptr;
 *(void **)pvVar2 = &PTR__RTTIBase_00022eec;
 __s1 = *(char **)((char *)pvVar1 - 4 + 4);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 0;
 if (iVar3 == 0) {
 uVar7 = 10;
 }
 }
 pcVar4 = *(char **)((char *)pvVar2 - 4 + 4);
 if (pcVar4 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else {
 bVar8 = false;
 if (*pcVar4 != '*') {
 iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
 bVar8 = iVar3 == 0;
 }
 }
 iVar3 = (int)__dynamic_cast(pvVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = (int)__dynamic_cast(pvVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 ((void (*)(void *))(*(void **)(*(int *)pvVar1 + 4)))(pvVar1);
 ((void (*)(void *))(*(void **)(*(int *)pvVar2 + 4)))(pvVar2);
 if (bVar8) {
 uVar7 = uVar7 | 0x14;
 }
 if (iVar3 != 0) {
 uVar7 = uVar7 + 100;
 }
 if (iVar5 != 0) {
 uVar7 = uVar7 + 200;
 }
 return uVar7 + sVar6;
}



/* Function: test_cpp_oo_features @ 0001136c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined **local_40;
 undefined4 local_3c;
 undefined **local_38;
 undefined4 local_34;
 undefined **local_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined2 local_20;
 undefined1 local_1e;
 undefined1 local_1d;
 undefined4 **local_1c;
 int iVar5;
 int iVar6;
 size_t sVar2;
 void *pvVar3;
 
 puts(&DAT_00011c71);
 local_3c = 0x74736554;
 local_38 = (undefined **)0x0;
 local_34 = 0;
 local_30 = (undefined **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar6 = 0;
 local_1d = 0;
 local_40 = (undefined **)0xa;
 sVar2 = strlen((char *)&local_3c);
 printf(&DAT_00011b0d,sVar2 + 0x125c);
 pvVar3 = operator_new__(0x14);
 iVar5 = 0;
 do {
 *(int *)((int)pvVar3 + iVar5 * -4) = iVar6;
 iVar6 = iVar6 + 10;
 iVar5 = iVar5 + -1;
 } while (iVar5 != -5);
 iVar5 = LifecycleClass::instance_count + 1;
 iVar6 = *(int *)((int)pvVar3 + 8);
 LifecycleClass::instance_count = iVar5;
 operator_delete__(pvVar3);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(&DAT_00011b2b,LifecycleClass::instance_count * 1000 + iVar6 + iVar5);
 local_1c = &PTR_virtual_func_00022cf0;
 local_3c = 3;
 local_40 = &PTR_virtual_func_00022d10;
 iVar5 = ((int (*)(Base *, int))(*(code *)*local_1c))((Base *)&local_1c,5);
 iVar6 = (*(code *)*local_40)(&local_40,5);
 printf(&DAT_00011b47,iVar5 + iVar6 + 0x15);
 local_38 = &PTR_funcB_00022d4c;
 local_34 = 200;
 local_3c = 100;
 local_40 = &PTR_funcA_00022d34;
 iVar5 = MultiDerived::funcB((MultiDerived *)&local_38);
 printf(&DAT_00011b63,iVar5 + 0x1f);
 local_30 = &PTR_func_00022df0;
 local_2c = 0x32;
 local_40 = &PTR_func_00022dbc;
 local_38 = &PTR_func_00022dd4;
 iVar5 = DiamondDerived::func((DiamondDerived *)&local_30);
 ppuVar1 = local_30;
 *(undefined4 *)((int)&local_3c + (int)local_40[-3]) = 100;
 iVar6 = (*(code *)*ppuVar1)((DiamondDerived *)&local_30);
 printf(&DAT_00011b7f,iVar6 + iVar5);
 printf(&DAT_00011b9c,0x16);
 printf(&DAT_00011bb8,0x27);
 printf(&DAT_00011bd4,0x10);
 printf(&DAT_00011bf0,0x55);
 uVar4 = test_cpp_exception();
 printf(&DAT_00011c0c,uVar4);
 printf(&DAT_00011c29,0x2bf);
 uVar4 = test_cpp_rtti();
 printf(&DAT_00011c46,uVar4);
 return;
}



/* Function: main @ 00011648 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 0001165c */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00011664 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
 return *(int *)(this + 4) * param_1;
}



/* Function: ~Base @ 00011670 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
 return this;
}



/* Function: ~MultiDerived @ 00011674 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return this;
}



/* Function: ~DiamondDerived @ 00011678 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return this;
}



/* Function: template_max<int> @ 0001167c */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011688 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001169c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
 return param_1;
}



/* Function: template_swap<int> @ 000116bc */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 000116d0 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 000116dc */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 000116f4 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)(this + 0x28)) {
 uVar1 = *(undefined4 *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00011714 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 0001171c */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00011728 */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
 int in_r0;
 undefined4 *puVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar2;
 
 iVar2 = *(int *)(in_r0 + 0x50);
 if (9 < iVar2) {
 return SUB84(param_1,0);
 }
 puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 *(int *)(in_r0 + 0x50) = iVar2 + 1;
 return SUB84(param_1,0);
}



/* Function: get @ 0001174c */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 undefined4 uVar1;
 undefined4 uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this + 0x50)) {
 uVar1 = *(undefined4 *)(this + param_1 * 8);
 uVar2 = *(undefined4 *)(this + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize @ 00011778 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: getName @ 00011780 */

/* Base::getName() const */

undefined * Base::getName(void)

{
 return &DAT_00011c64;
}



/* Function: ~Base @ 00011790 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 000117a0 */

/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: ~Derived @ 000117b0 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 000117c0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 000117c8 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 000117d8 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 000117e0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: ~MultiDerived @ 000117e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return this;
}



/* Function: ~MultiDerived @ 000117ec */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this + -8);
 return;
}



/* Function: funcA @ 00011800 */

/* BaseA::funcA() */

undefined4 BaseA::funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 00011808 */

/* BaseA::~BaseA() */

BaseA * __thiscall BaseA::~BaseA(BaseA *this)

{
 return this;
}



/* Function: ~BaseA @ 0001180c */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 0001181c */

/* BaseB::funcB() */

undefined4 BaseB::funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 00011824 */

/* BaseB::~BaseB() */

BaseB * __thiscall BaseB::~BaseB(BaseB *this)

{
 return this;
}



/* Function: ~BaseB @ 00011828 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011838 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011850 */

/* MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 return this;
}



/* Function: ~MiddleA @ 00011854 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011864 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00011884 */

/* virtual thunk to MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 return this;
}



/* Function: ~MiddleA @ 00011888 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 000118a4 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 000118bc */

/* MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 return this;
}



/* Function: ~MiddleB @ 000118c0 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 000118d0 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 000118f0 */

/* virtual thunk to MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 return this;
}



/* Function: ~MiddleB @ 000118f4 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 00011910 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011928 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011938 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + -8 + *(int *)(*(int *)(this + -8) + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011950 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return this;
}



/* Function: ~DiamondDerived @ 00011954 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + -8);
 return;
}



/* Function: func @ 00011968 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00011988 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return this;
}



/* Function: ~DiamondDerived @ 0001198c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: func @ 000119a8 */

/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 000119b0 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 return this;
}



/* Function: ~VirtualBase @ 000119b4 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 000119c4 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 000119d4 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 000119dc */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return this;
}



/* Function: ~RTTIDerivedB @ 000119e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 000119f0 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
