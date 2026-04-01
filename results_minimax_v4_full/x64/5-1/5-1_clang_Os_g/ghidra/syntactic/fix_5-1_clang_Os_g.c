/* Auto-injected type definitions by preprocessor */
// Note: uint8_t, uint16_t, uint32_t, uint64_t, intmax_t, uintmax_t are already defined in <cstdint>
// Note: size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t are already defined in <cstddef>
typedef int undefined4;
typedef unsigned long long undefined8;

/* String constants from binary */
static const char DAT_001021d4[] = "Testing C++ Features:\n";
static const char DAT_0010207d[] = "test_cpp_member_func: %d\n";
static const char DAT_0010209b[] = "test_cpp_constructor: %u\n";
static const char DAT_001020b7[] = "test_cpp_virtual_func: %d\n";
static const char DAT_001020d3[] = "test_cpp_multiple_inheritance: %d\n";
static const char DAT_001020ef[] = "test_cpp_diamond_inheritance: %d\n";
static const char DAT_0010210c[] = "test_cpp_operator_overload: %d\n";
static const char DAT_00102128[] = "test_cpp_template_func: %d\n";
static const char DAT_00102144[] = "test_cpp_template_class: %d\n";
static const char DAT_00102160[] = "test_cpp_lambda: %d\n";
static const char DAT_0010217c[] = "test_cpp_exception: %d\n";
static const char DAT_00102199[] = "test_cpp_smart_ptr: %d\n";
static const char DAT_001021b6[] = "test_cpp_rtti: %d\n";

/* Standard library declarations */
#include <cstdio>
#include <cstring>
#include <cstdint>
#include <cstdarg>
#include <new>
#include <stdexcept>

/* Remove using namespace std and use explicit std:: prefix */
/* printf and puts come from stdio.h in global namespace */

/* Remove duplicate typedefs - using cstdint definitions */
/* Also define ulong since it's used in the code */
typedef unsigned long ulong;

/* External CRT symbols */
extern "C" {
    void *__dso_handle;
    int __cxa_atexit(void (*destructor)(void *), void *arg, void *dsod);
    void *__cxa_allocate_exception(size_t thrown_size);
    void __cxa_throw(void *thrown_exception, void *typeinfo, void (*dest)(void *));
    void *operator_new(size_t size);
    void operator_delete(void *ptr);
    void *operator_new__(size_t size);
    void operator_delete__(void *ptr);
    void *__dynamic_cast(const void *src, const void *src_typeinfo, const void *dst_typeinfo, ptrdiff_t src2dst);
}

/* printf wrapper - use std::printf from cstdio */
#include <stdio.h>

/* RTTI typeinfo pointers from binary - using custom stub type */
struct RTTITypeInfo {};
extern RTTITypeInfo int_typeinfo;
extern RTTITypeInfo RTTIBase_typeinfo;
extern RTTITypeInfo RTTIDerivedA_typeinfo;
extern RTTITypeInfo RTTIDerivedB_typeinfo;

/* Define global typeinfo for built-in types */
RTTITypeInfo int_typeinfo = {};
RTTITypeInfo RTTIBase_typeinfo = {};
RTTITypeInfo RTTIDerivedA_typeinfo = {};
RTTITypeInfo RTTIDerivedB_typeinfo = {};

/* Global stdio initialization object */
static int __ioinit;

/* std namespace helpers */
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

/* Helper to initialize stdio - placement new for Init object */
void __init_stdios() {
    new (&__ioinit) std::ios_base::Init();
}

/* Destructor helper function for ios_base::Init */
void __ios_base_init_destructor(void *ptr) {
    ((std::ios_base::Init*)ptr)->~Init();
}

/* printf wrapper to avoid namespace issues - using C-style printf */
inline int cprintf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int result = vprintf(fmt, args);
    va_end(args);
    return result;
}

/* Class definitions needed by the code */
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

class Base {
public:
    virtual ~Base() {}
    virtual int getType() { return 0; }
    void **_vptr_Base;
};

class Derived : public Base {
public:
    virtual ~Derived() {}
    virtual int getType() { return 1; }
};

class RTTIBase {
public:
    static RTTITypeInfo typeinfo;
    virtual ~RTTIBase() {}
    virtual int getType() { return 0; }
};

class RTTIDerivedA : public RTTIBase {
public:
    static RTTITypeInfo typeinfo;
    virtual ~RTTIDerivedA() {}
    virtual int getType() { return 1; }
};

class RTTIDerivedB : public RTTIBase {
public:
    static RTTITypeInfo typeinfo;
    virtual ~RTTIDerivedB() {}
    virtual int getType() { return 2; }
};

/* Type info structures for exceptions and RTTI */
struct __class_type_info {};
struct __si_class_type_info {};
struct __pbase_type_info {};

/* RTTI typeinfo definitions - using struct typeinfo instead of std::type_info */
// Note: typeinfo is a stub for RTTI - actual typeinfo would be provided by compiler
// Removing static typeinfo members from classes to avoid linker errors with empty struct

// RTTITypeInfo already defined above, removing duplicate

/* Forward declarations for classes used in code */
class MultiDerived;
class BaseA;
class BaseB;
class VirtualBase;
class DiamondDerived;
class Point;
class BaseException;
class DerivedException;

/* Primary template declarations for template functions */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

/* Template Container class */
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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(void (*)(void))0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 new (&__ioinit) std::ios_base::Init();
 __cxa_atexit(&__ios_base_init_destructor, &__ioinit, &__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 0010125c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101294 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 long lVar2;
 undefined4 *puVar3;
 int iVar4;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new__(0x14);
 undefined4 *puVar1 = (undefined4 *)pvVar1;
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
 operator_delete__(puVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar4;
}



/* Function: call_virtual_func @ 001012e5 */

int call_virtual_func(Base *obj, int x)

{
 int iVar1;
 
 /* Virtual function call - dereference vtable to get function pointer */
 typedef int (*VirtualFn)();
 VirtualFn fn = (VirtualFn)(*obj->_vptr_Base);
 iVar1 = fn();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001012ed */

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



/* Function: test_cpp_multiple_inheritance @ 001012f3 */

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



/* Function: test_cpp_diamond_inheritance @ 001012f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101305 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 0010130b */

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



/* Function: test_cpp_lambda @ 00101311 */

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



/* Function: test_cpp_exception @ 00101317 */

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
 /* try { // try from 0010132c to 0010133f has its CatchHandler @ 00101342 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013d7 */

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



/* Stub vtable addresses for RTTI test */
static const void* const PTR__RTTIBase_00103d78 = (void*)0x00103d78;
static const void* const PTR__RTTIBase_00103da0 = (void*)0x00103da0;

/* Function: test_cpp_rtti @ 001013dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 void **plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar1 = (undefined8 *)operator_new(8);
 *puVar1 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar2 = (void **)operator_new(8);
 *plVar2 = (void*)&PTR__RTTIBase_00103da0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar3 = (long)__dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar3 = (long)__dynamic_cast(plVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete(puVar1);
 (**(void (***)(void))(plVar2))(plVar2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 0010147f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 char local_24 [36];
 
 puts(&DAT_001021d4);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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
 local_24[0x1f] = 0;
 sVar2 = strlen(local_24);
 std::printf(DAT_0010207d,(ulong)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 std::printf(DAT_0010209b,(ulong)uVar1);
 std::printf(DAT_001020b7,0x2a);
 std::printf(DAT_001020d3,0x47);
 std::printf(DAT_001020ef,0x28a);
 std::printf(DAT_0010210c,0x16);
 std::printf(DAT_00102128,0x27);
 std::printf(DAT_00102144,0x10);
 std::printf(DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 std::printf(DAT_0010217c,(ulong)uVar1);
 std::printf(DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 std::printf(DAT_001021b6,(ulong)uVar1);
 return;
}



/* Function: main @ 001015a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 001015b2 */

template<> int template_max<int>(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 001015ba */

template<> double template_max<double>(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 001015bf */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 001015c8 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container_int_Constructor(Container<int> *this_ptr)

{
 this_ptr->size = 0;
 return;
}



/* Function: push @ 001015d0 */

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



/* Function: get @ 001015e4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: getSize @ 001015f6 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 001015fa */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101602 */

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



/* Function: get @ 00101618 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: getSize @ 0010162c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00101630 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101636 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 0010163c */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 0010163e */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101644 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
