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

/* Ghidra types */
typedef char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined4u;
typedef unsigned long long undefined8;
typedef int undefined4s;  /* Signed version of undefined4 */
typedef int (*code)();

/* Fix: also provide signed version for pointer usage - removed duplicate typedefs, using the ones from auto-injected types */

#include <cstddef>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <typeinfo>

/* External C++ runtime functions */
void* operator new(size_t size);
void* operator new[](size_t size);
void operator delete(void* ptr);
void operator delete[](void* ptr);

/* Aliases for operator new/delete used in code */
void* operator_new(size_t size) { return ::operator new(size); }
void* operator_new__(size_t size) { return ::operator new(size); }
void operator_delete(void* ptr) { ::operator delete(ptr); }
void operator_delete__(void* ptr) { ::operator delete(ptr); }

/* C library functions */
size_t strlen(const char* str);
void* memcpy(void* dest, const void* src, size_t n);
int puts(const char* s);
int printf(const char* format, ...);
void* malloc(size_t size);
void free(void* ptr);

/* Forward declarations for classes used in the code */
class SimpleClass {};
class LifecycleClass {
public:
    static int instance_count;
};

/* Define static member */
int LifecycleClass::instance_count = 0;
class Base {
public:
    virtual int dummy(int x) { return x; }
    virtual ~Base() {}
    /* Base vtable type - pointer to array of virtual function pointers */
    typedef void* (*vtable_t)[];
    vtable_t _vptr_Base;
};
class Derived : public Base {};
class BaseA {};
class BaseB {};
class MultiDerived : public BaseA, public BaseB {};
class VirtualBase {};
class DiamondDerived : public VirtualBase {};
class Point {
public:
    int x, y;
    bool operator==(const Point& other) { return x == other.x && y == other.y; }
};
class BaseException {};
class DerivedException : public BaseException {};

/* RTTI classes */
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    static const std::type_info& typeinfo;
    virtual int getType() { return 0; }
};
class RTTIDerivedA : public RTTIBase {
public:
    static const std::type_info& typeinfo;
    virtual int getType() { return 1; }
};
class RTTIDerivedB : public RTTIBase {
public:
    static const std::type_info& typeinfo;
    virtual int getType() { return 2; }
};

/* Define the typeinfo objects - static member definitions */
const std::type_info& RTTIBase::typeinfo = typeid(RTTIBase);
const std::type_info& RTTIDerivedA::typeinfo = typeid(RTTIDerivedA);
const std::type_info& RTTIDerivedB::typeinfo = typeid(RTTIDerivedB);

/* Namespace for int type info used in exception handling */
namespace int_ {
    const std::type_info& typeinfo = typeid(int);
}
template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container() : size(0) {}
    void push(T value);
    T get(int idx);
    int getSize();
};

/* Template function declarations */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T* a, T* b);

/* Exception handling */
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* thrown_exception, void* typeinfo, void* destructor);
void __cxa_atexit(void (*destructor)(void*), void* arg, void* dso_handle);

/* RTTI */
void* __dynamic_cast(const void* subobj, const std::type_info* base_typeinfo, const std::type_info* target_typeinfo, long src2dst);

/* Global variables for exception handling */
void* __dso_handle;

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

/* I/O init for static initialization - use std::ios_base::Init to match construction */
std::ios_base::Init __ioinit;

/* Simple vtable placeholder */
typedef void (*vfptr)();

/* Base class vtable type */
typedef int (*Base_vfn)(Base*, int);

/* Data declarations from binary */
extern "C" {
    extern char DAT_000121fc[32];
    extern char DAT_000121d8[32];
    extern char DAT_00012081[32];
    extern char DAT_0001209f[32];
    extern char DAT_000120bb[32];
    extern char DAT_000120d7[32];
    extern char DAT_000120f3[32];
    extern char DAT_00012110[32];
    extern char DAT_0001212c[32];
    extern char DAT_00012148[32];
    extern char DAT_00012164[32];
    extern char DAT_00012180[32];
    extern char DAT_0001219d[32];
    extern char DAT_000121ba[32];
    extern void* PTR__RTTIBase_00013ecc;
    extern void* PTR__RTTIBase_00013ee0;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 // Original code: (*(code *)(undefined *)0x0)();
 // This was calling a null function pointer - fixing to a no-op
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit([](void*){ std::__ioinit.~Init(); },&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011319 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001131d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011324 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [32];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_28[0x1f] = '\0';
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00011370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 iVar3 = 0;
 piVar1 = operator_new__(0x14);
 piVar2 = piVar1;
 do {
 /* Unresolved local var: size_t i@[???] */
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar3 = LifecycleClass::instance_count + piVar1[2];
 operator_delete__(piVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar3;
}



/* Function: call_virtual_func @ 000113cf */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (*obj->_vptr_Base)(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 000113f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???]
 Unresolved local var: Base base@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113fa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011406 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001140c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 0001141e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 int *piVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 piVar1 = (int *)__cxa_allocate_exception(4);
 *piVar1 = 0x2a;
 /* try { // try from 00011443 to 0001145c has its CatchHandler @ 0001145f */
 /* WARNING: Subroutine does not return */
 __cxa_throw(piVar1,&int_::typeinfo,0);
 /* Control flow reaches end of non-void function */
 return 0;
}



/* Function: test_cpp_smart_ptr @ 00011502 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011508 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 void **ppvVar1;
 void **ppvVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 ppvVar1 = (void **)operator_new(sizeof(void*));
 *ppvVar1 = PTR__RTTIBase_00013ecc;
 ppvVar2 = (void **)operator_new(sizeof(void*));
 *ppvVar2 = PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = __dynamic_cast(ppvVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast(ppvVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(ppvVar1);
 (**(code **)(*ppvVar2 + 4))(ppvVar2);
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 000115c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 char local_28 [31];
 undefined1 local_9;
 
 puts(&DAT_000121d8);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 printf(&DAT_00012081,sVar1 + 0x125c);
 iVar2 = test_cpp_constructor();
 printf(&DAT_0001209f,iVar2);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);
 iVar2 = test_cpp_exception();
 printf(&DAT_00012180,iVar2);
 printf(&DAT_0001219d,0x2bf);
 iVar2 = test_cpp_rtti();
 printf(&DAT_000121ba,iVar2);
 return;
}



/* Function: main @ 00011722 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 0001173e */

template<> int template_max<int>(int a, int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 0001174c */

template<> double template_max<double>(double a,double b)

{
 if (b <= a || a != b) {
 b = a;
 }
 return b;
}



/* Function: template_swap<int> @ 0001175d */

template<> void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011770 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 0001177c */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011798 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < this->size)) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 000117b0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 000117b8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 000117c4 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 000117e2 */

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



/* Function: getSize @ 000117fc */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00011804 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00011826 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 0001182a */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0001182c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 0001184e */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
