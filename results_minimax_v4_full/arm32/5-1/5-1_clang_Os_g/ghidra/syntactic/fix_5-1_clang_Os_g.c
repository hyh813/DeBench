/* Auto-injected type definitions by preprocessor */
#include <cstdint>

/* Ghidra undefined types */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;

/* Standard library includes */
#include <cstddef>
#include <cstring>
#include <cstdio>
#include <new>

/* String constants from binary data */
const char DAT_00011294[] = "Testing C++ OO Features:\n";
const char DAT_0001113d[] = "test_cpp_member_func: %d\n";
const char DAT_0001115b[] = "test_cpp_constructor: %d\n";
const char DAT_00011177[] = "test_cpp_virtual_func: %d\n";
const char DAT_00011193[] = "test_cpp_multiple_inheritance: %d\n";
const char DAT_000111af[] = "test_cpp_diamond_inheritance: %d\n";
const char DAT_000111cc[] = "test_cpp_operator_overload: %d\n";
const char DAT_000111e8[] = "test_cpp_template_func: %d\n";
const char DAT_00011204[] = "test_cpp_template_class: %d\n";
const char DAT_00011220[] = "test_cpp_lambda: %d\n";
const char DAT_0001123c[] = "test_cpp_exception: %d\n";
const char DAT_00011259[] = "test_cpp_smart_ptr: %d\n";
const char DAT_00011276[] = "test_cpp_rtti: %d\n";

/* C++ Runtime declarations */
extern "C" {
    void* __dso_handle;
    void* __cxa_allocate_exception(size_t);
    void __cxa_throw(void*, void*, void*);
    int __cxa_atexit(void (*)(void*), void*, void*);
}

/* C++ operator delete */
void operator delete(void*);
void operator_delete(void* p) { operator delete(p); }

#include <typeinfo>
extern "C" int __dynamic_cast(void*, const std::type_info*, const std::type_info*, long);

/* C++ Standard Library declarations */
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

// Make printf explicitly from std to avoid ambiguity
#define printf std::printf

/* External vtable/typeinfo pointers - linked from binary data */
extern void* PTR__RTTIBase_00021ed8;
extern void* PTR__RTTIBase_00021eec;

/* Forward class declaration */
class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass();
    ~LifecycleClass();
};

/* LifecycleClass static member definition */
int LifecycleClass::instance_count = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 static std::ios_base::Init ioinit_instance;
 __cxa_atexit([](void*){},&ioinit_instance,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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



/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



class Base {
public:
    virtual int method();
    virtual ~Base();
    static void** _vptr_Base;
    typedef int (*VirtualFn)(Base*);
};

// Placeholder implementations for vtable entries
int Base_method_impl(Base*);
void Base_destructor_impl(Base*);

// Virtual table for Base - first entry is destructor, second is method
void* _vtable_Base[] = {
    (void*)&Base_destructor_impl,
    (void*)&Base_method_impl
};

int Base_method_impl(Base*) { return 0; }
void Base_destructor_impl(Base*) {}

// Define the static vptr for Base
void** Base::_vptr_Base = _vtable_Base;

class RTTIBase {
public:
    virtual ~RTTIBase();
    static const std::type_info& typeinfo;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual int getType();
    static const std::type_info& typeinfo;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual int getType();
    static const std::type_info& typeinfo;
};

int test_cpp_exception(void);

/* Function: call_virtual_func @ 00010b80 */

int call_virtual_func(Base *obj, int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 // Cast the vtable entry to a function pointer and call it
 typedef int (*VirtualFn)();
 iVar1 = ((VirtualFn)(*obj->_vptr_Base))();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

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



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

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



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

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



/* Function: test_cpp_lambda @ 00010bc0 */

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



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 /* Unresolved local var: int e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 // Use typeid(int).name() to get the type info name string
 // std::type_info has private copy constructor, so we need to use name() which returns const char*
 __cxa_throw(puVar1,(void*)typeid(int).name(),0);
}



/* Function: test_cpp_smart_ptr @ 00010c98 */

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



/* Typeinfo declarations for RTTI classes - use standard typeinfo header */
#include <typeinfo>

/* External typeinfo definitions from runtime */
// Forward declarations of type_info objects (defined elsewhere in runtime)
extern std::type_info _ZTI9RTTIBase;
extern std::type_info _ZTI12RTTIDerivedA;
extern std::type_info _ZTI12RTTIDerivedB;

/* Define the typeinfo for RTTIBase using external linkage */
const std::type_info& RTTIBase::typeinfo = _ZTI9RTTIBase;

/* Also declare typeinfo for derived classes */
const std::type_info& RTTIDerivedA::typeinfo = _ZTI12RTTIDerivedA;
const std::type_info& RTTIDerivedB::typeinfo = _ZTI12RTTIDerivedB;

/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 typedef int (*VirtualFn)(int*);
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (undefined4 *)operator new(4);
 *(void**)puVar1 = &PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator new(4);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *piVar2 = (int)&PTR__RTTIBase_00021eec;
 iVar3 = __dynamic_cast(puVar1,(const std::type_info*)&RTTIBase::typeinfo,(const std::type_info*)&RTTIDerivedA::typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast(piVar2,(const std::type_info*)&RTTIBase::typeinfo,(const std::type_info*)&RTTIDerivedB::typeinfo,0);
 operator_delete(puVar1);
 iVar5 = ((VirtualFn)(*(int **)(*piVar2 + 4)))(piVar2);
 iVar5 = 0x1e;
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
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
 
 std::puts(DAT_00011294);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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
 printf(DAT_0001113d,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_0001115b,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(DAT_00011177,0x2a);
 printf(DAT_00011193,0x47);
 printf(DAT_000111af,0x28a);
 printf(DAT_000111cc,0x16);
 printf(DAT_000111e8,0x27);
 printf(DAT_00011204,0x10);
 printf(DAT_00011220,0x55);
 iVar2 = test_cpp_exception();
 printf(DAT_0001123c,iVar2);
 printf(DAT_00011259,0x2bf);
 iVar2 = test_cpp_rtti();
 printf(DAT_00011276,iVar2);
 return;
}



/* Function: main @ 00010ef4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010f08 */

int template_max_int(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00010f14 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010f28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

/* ARM double comparison helper - extract high 32 bits of double */
static inline uint32_t get_high_double(double d) {
    union { double d; uint64_t i; } u;
    u.d = d;
    return (uint32_t)(u.i >> 32);
}

double template_max_double(double a,double b)

{
 /* Compare doubles: return a if a > b, else b */
 if (a > b) {
 return a;
 }
 return b;
}



/* Function: template_swap<int> @ 00010f48 */

void template_swap(int *a, int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00010f5c */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00010f68 */

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



/* Function: get @ 00010f80 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < this->size) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00010fa0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00010fa8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00010fb4 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 iVar1 = this->size;
 if (9 < iVar1) {
 return;
 }
 *(undefined4 *)(this->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
 this->size = iVar1 + 1;
 return;
}



/* Function: get @ 00010fd8 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double in_d0;
 
 if (-1 < idx) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011004 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 0001100c */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00011010 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 00011018 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0001101c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00011020 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
