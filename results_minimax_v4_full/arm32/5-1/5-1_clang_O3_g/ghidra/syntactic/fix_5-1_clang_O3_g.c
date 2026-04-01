/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* Forward declarations for C++ runtime */
namespace std { 
    class Init {}; 
    class ios_base { public: class Init {}; }; 
    class __ioinit { public: std::Init init; }; 
}
typedef std::Init Init;
void* __dso_handle;

/* Forward declarations for classes */
class Base;
class SimpleClass;
class Derived;
class MultiDerived;
class DiamondDerived;
class Point;
template<typename T> class Container;
class BaseException;
class DerivedException;

/* LifecycleClass - used for constructor testing */
class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass() { instance_count++; }
    ~LifecycleClass() { instance_count--; }
};
int LifecycleClass::instance_count = 0;

/* SimpleClass - used for member function testing */
class SimpleClass {
public:
    int value;
    int getValue() { return value; }
};

/* Base class for virtual function testing */
class Base {
public:
    void** __vptr_Base;
    virtual int virtualFunc() { return 42; }
    virtual ~Base() {}
};

/* Derived class */
class Derived : public Base {
public:
    virtual int virtualFunc() { return 10; }
};

/* Multiple inheritance classes */
class BaseA {
public:
    int a;
};

class BaseB {
public:
    int b;
};

class MultiDerived : public BaseA, public BaseB {
public:
    int c;
};

/* Diamond inheritance */
class VirtualBase {
public:
    int v;
};

class DiamondLeft : virtual public VirtualBase {
public:
    int left;
};

class DiamondRight : virtual public VirtualBase {
public:
    int right;
};

class DiamondDerived : public DiamondLeft, public DiamondRight {
public:
    int data;
};

/* Point class for operator overloading */
class Point {
public:
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    bool operator==(const Point& other) { return x == other.x && y == other.y; }
};

/* Exception classes */
class BaseException {
public:
    const char* msg;
    BaseException(const char* m) : msg(m) {}
};

class DerivedException : public BaseException {
public:
    DerivedException(const char* m) : BaseException(m) {}
};

/* RTTI test classes */
class RTTIBase {
public:
    static void* vtable_ptr;
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    int getType() { return 1; }
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    int getType() { return 2; }
};

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
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;

/* Forward declaration for typeinfo */
struct typeinfo;

/* Standard library declarations */
size_t strlen(const char* str);
int printf(const char* format, ...);
int puts(const char* s);
void* operator_new(unsigned long size);
void operator_delete(void* ptr);
void* __cxa_allocate_exception(unsigned long size);
void __cxa_throw(void* obj, void* typeinfo, void* dest);
int __cxa_atexit(void (*destructor)(void*), void* arg, void* dso_handle);
void* __dynamic_cast(const void* sub, const typeinfo* from, const typeinfo* to, long offset);
typedef int (*code)(void*);

/* RTTI typeinfo structures */
struct typeinfo {
    void* vtable;
    char* name;
};

/* RTTI typeinfo pointers */
void* PTR__RTTIBase_00021ed8;
void* PTR__RTTIBase_00021eec;

/* Typeinfo instances for RTTI classes */
namespace RTTIBase_ns {
    typeinfo typeinfo = {0, (char*)"RTTIBase"};
}
namespace RTTIDerivedA_ns {
    typeinfo typeinfo = {0, (char*)"RTTIDerivedA"};
}
namespace RTTIDerivedB_ns {
    typeinfo typeinfo = {0, (char*)"RTTIDerivedB"};
}
namespace int_ {
    typeinfo typeinfo = {0, (char*)"int"};
}

/* String literals from binary */
const char DAT_00011358[] = "Testing C++ Features:\n";
const char DAT_00011201[] = "test_cpp_member_func: %d\n";
const char DAT_0001121f[] = "test_cpp_constructor: %d\n";
const char DAT_0001123b[] = "test_cpp_virtual_func: %d\n";
const char DAT_00011257[] = "test_cpp_multiple_inheritance: %d\n";
const char DAT_00011273[] = "test_cpp_diamond_inheritance: %d\n";
const char DAT_00011290[] = "test_cpp_operator_overload: %d\n";
const char DAT_000112ac[] = "test_cpp_template_func: %d\n";
const char DAT_000112c8[] = "test_cpp_template_class: %d\n";
const char DAT_000112e4[] = "test_cpp_lambda: %d\n";
const char DAT_00011300[] = "test_cpp_exception: %d\n";
const char DAT_0001131d[] = "test_cpp_smart_ptr: %d\n";
const char DAT_0001133a[] = "test_cpp_rtti: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 new (&std::__ioinit) Init();
 // __cxa_atexit((void(*)(void*))(void(*)(void*))&std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
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



/* Function: call_virtual_func @ 00010b80 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*(code*)*obj->__vptr_Base)(obj, 0);
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
 __cxa_throw(puVar1,(void*)&int_::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010ca4 */

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



/* Function: test_cpp_rtti @ 00010cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (undefined4*)operator_new(4);
 *(void**)puVar1 = PTR__RTTIBase_00021ed8;
 piVar2 = (int*)operator_new(4);
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 *(void**)piVar2 = PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase_ns::typeinfo,&RTTIDerivedA_ns::typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_ns::typeinfo,&RTTIDerivedB_ns::typeinfo,0);
 operator_delete(puVar1);
 iVar5 = (*(code **)((char**)*(void**)piVar2 + 4))(piVar2);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined2 local_1c;
 undefined1 local_1a;
 undefined1 local_19;
 
 puts(DAT_00011358);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 local_38 = 0x74736554;
 uStack_34 = 0;
 uStack_30 = 0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 local_1a = 0;
 local_19 = 0;
 sVar1 = strlen((char *)&local_38);
 printf(DAT_00011201,sVar1 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_0001121f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(DAT_0001123b,0x2a);
 printf(DAT_00011257,0x47);
 printf(DAT_00011273,0x28a);
 printf(DAT_00011290,0x16);
 printf(DAT_000112ac,0x27);
 printf(DAT_000112c8,0x10);
 printf(DAT_000112e4,0x55);
 iVar2 = test_cpp_exception();
 printf(DAT_00011300,iVar2);
 printf(DAT_0001131d,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined4*)operator_new(4);
 *(void**)puVar3 = PTR__RTTIBase_00021ed8;
 piVar4 = (int*)operator_new(4);
 *(void**)piVar4 = PTR__RTTIBase_00021eec;
 iVar2 = (int)__dynamic_cast(puVar3,&RTTIBase_ns::typeinfo,&RTTIDerivedA_ns::typeinfo,0);
 iVar5 = (int)__dynamic_cast(piVar4,&RTTIBase_ns::typeinfo,&RTTIDerivedB_ns::typeinfo,0);
 operator_delete(puVar3);
 (**(code **)(*piVar4 + 4))(piVar4);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 if (iVar5 != 0) {
 iVar6 = iVar6 + 200;
 }
 printf(DAT_0001133a,iVar6 + 0xe);
 return;
}



/* Function: main @ 00010fb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010fcc */

int template_max<int>(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00010fd8 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max<double>(double a,double b)

{
 __aeabi_dcmpgt(SUB84(a,0),(int)((ulonglong)a >> 0x20),SUB84(b,0));
 return a;
}



/* Function: template_swap<int> @ 0001100c */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011020 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 0001102c */

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



/* Function: get @ 00011044 */

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



/* Function: getSize @ 00011064 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 0001106c */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011078 */

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



/* Function: get @ 0001109c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double in_d0;
 
 if (-1 < idx) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 000110c8 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 000110d0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 000110d4 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 000110dc */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 000110e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 000110e4 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
