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

#include <cstddef>
#include <cstring>
#include <memory>
#include <typeinfo>

// Forward declarations for standard library functions
void* operator_new(size_t size);
void operator_delete(void* ptr, size_t size);
void operator_delete(void* ptr);

// Forward declarations for C++ runtime functions
extern "C" {
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* thrown_exception, std::type_info* type_info, void (*destructor)(void*));
int __aeabi_atexit(void* object, void (*destructor)(void*), void* dso_handle);
int __dynamic_cast(const void* src, const std::type_info* src_type, const std::type_info* dst_type, int is_virtual);
void __stack_chk_fail();
int __printf_chk(int flag, const char* format, ...);
}

// Type info declarations
struct type_info {
    virtual ~type_info();
    bool operator==(const type_info& rhs) const;
    bool operator!=(const type_info& rhs) const;
    int before(const type_info& rhs) const;
    const char* name() const;
    // Make public for initialization
    type_info() : _m_d_name{0} {}
protected:
    type_info(const type_info&);
    void operator=(const type_info&);
    char _m_d_name[1];
};

namespace {
char _ZTS10SimpleClass[] = "10SimpleClass";
char _ZTS13LifecycleClass[] = "13LifecycleClass";
char _ZTS4BaseE[] = "4Base";
char _ZTS7DerivedE[] = "7Derived";
char _ZTS11MultiDerivedE[] = "11MultiDerived";
char _ZTS10VirtualBaseE[] = "10VirtualBase";
char _ZTS7MiddleAE[] = "7MiddleA";
char _ZTS7MiddleBE[] = "7MiddleB";
char _ZTS13DiamondDerivedE[] = "13DiamondDerived";
char _ZTS9RTTIBaseE[] = "9RTTIBase";
char _ZTS12RTTIDerivedA[] = "12RTTIDerivedA";
char _ZTS12RTTIDerivedB[] = "12RTTIDerivedB";
}

type_info _ZTS10SimpleClass_typeinfo = {};
type_info _ZTS13LifecycleClass_typeinfo = {};
type_info _ZTS4Base_typeinfo = {};
type_info _ZTS7Derived_typeinfo = {};
type_info _ZTS11MultiDerived_typeinfo = {};
type_info _ZTS10VirtualBase_typeinfo = {};
type_info _ZTS7MiddleA_typeinfo = {};
type_info _ZTS7MiddleB_typeinfo = {};
type_info _ZTS13DiamondDerived_typeinfo = {};
type_info _ZTS9RTTIBase_typeinfo = {};
type_info _ZTS12RTTIDerivedA_typeinfo = {};
type_info _ZTS12RTTIDerivedB_typeinfo = {};

// Forward declarations for all classes
// Note: Order matters - base classes must be declared before derived classes
template<typename T> struct Container;
struct SimpleClass;
struct LifecycleClass;

// Base classes first
struct Base;
struct VirtualBase;

// Middle base classes (must come before DiamondDerived)
struct MiddleA;
struct MiddleB;

// Derived classes
struct Derived;
struct MultiDerived;
struct DiamondDerived;

// RTTI classes
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Simple class definition
struct SimpleClass {
    char name[32];
};

// Lifecycle class definition
struct LifecycleClass {
    int instance_count;
};

// Base class for virtual function tests
struct Base {
    int (**_vptr_Base)(Base*, int, ...);
    virtual int virtual_func(int x);
    virtual char* getName();
    virtual ~Base();
};

// Derived class
struct Derived : Base {
    int multiplier;
    virtual int virtual_func(int x);
    virtual char* getName();
    virtual ~Derived();
};

// MultiDerived for multiple inheritance
struct MultiDerived {
    Base super_BaseA;
    Base super_BaseB;
    virtual int funcA();
    virtual int funcB();
    virtual ~MultiDerived();
};

// Virtual base class for diamond inheritance
struct VirtualBase {
    int (**_vptr_VirtualBase)(VirtualBase*, int, ...);
    virtual int func();
    virtual ~VirtualBase();
};

// MiddleA class
struct MiddleA {
    int (**_vptr_MiddleA)(MiddleA*, int, ...);
    void* field_0x8;
    int dataA;
    virtual int func();
    virtual ~MiddleA();
};

// MiddleB class
struct MiddleB {
    int (**_vptr_MiddleB)(MiddleB*, int, ...);
    void* field_0x8;
    int dataB;
    virtual int func();
    virtual ~MiddleB();
};

// DiamondDerived class
struct DiamondDerived : MiddleA, MiddleB {
    int _20_4_;
    int field_0x10;
    int _16_4_;
    virtual int func();
    virtual ~DiamondDerived();
};

// RTTI classes
struct RTTIBase {
    int (**_vptr_RTTIBase)(RTTIBase*, int, ...);
    virtual int getType();
    virtual ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB : RTTIBase {
    virtual int getType();
    virtual ~RTTIDerivedB();
};

// Template functions
template<typename T>
T template_max(T a, T b) {
    return (a > b) ? a : b;
}

template<typename T>
void template_swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

// Template class Container
template<typename T>
struct Container {
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx);
    int getSize();
};

template<typename T>
Container<T>::Container() : size(0) {}

template<typename T>
void Container<T>::push(T value) {
    if (size < 10) {
        data[size++] = value;
    }
}

template<typename T>
T Container<T>::get(int idx) {
    if (idx >= 0 && idx < size) {
        return data[idx];
    }
    return T();
}

template<typename T>
int Container<T>::getSize() {
    return size;
}

// Template specialization for Container<int>
template<>
struct Container<int> {
    int size;
    int data[10];
    Container();
    void push(int value);
    int get(int idx);
    int getSize();
};

template<>
Container<int>::Container() : size(0) {}

template<>
void Container<int>::push(int value) {
    if (size < 10) {
        data[size++] = value;
    }
}

template<>
int Container<int>::get(int idx) {
    if (idx >= 0 && idx < size) {
        return data[idx];
    }
    return 0;
}

template<>
int Container<int>::getSize() {
    return size;
}
extern void* PTR_virtual_func_00011af0;
extern void* PTR_virtual_func_00011b08;
extern void* PTR_func_00011c20;
extern void* PTR_func_00011c38;
extern void* PTR_func_00011c54;
extern void* PTR__RTTIDerivedA_00011c68;
extern void* PTR__RTTIDerivedB_00011c7c;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010b08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&_ZTS10SimpleClass_typeinfo,0);
}



/* Function: main @ 00010bbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00010bcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std::ios_base::Init::Init(&std::__ioinit);
 __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010cf4 */

/* WARNING: Removing unreachable block (ram,0x00010d44) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010d7c */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010d84. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (*obj->_vptr_Base)(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010d88 */

/* WARNING: Removing unreachable block (ram,0x00010df0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 Base base;
 Derived derived;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00011af0;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00011b08;
 derived.multiplier = 3;
 iVar1 = call_virtual_func(&base,5);
 iVar2 = call_virtual_func(&derived.super_Base,5);
 return iVar1 + 0x15 + iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 00010e08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00010e10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 int iVar2;
 undefined4 extraout_r1;
 double a_00;
 double b_00;
 int a;
 int b;
 int local_14;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_14 = 0;
 iVar1 = template_max<int>(3,7);
 template_max<double>(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap<int>(&a,&b);
 iVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar1 + a + b;
}



/* Function: test_cpp_template_class @ 00010ec0 */

/* WARNING: Removing unreachable block (ram,0x00010f30) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 Container<int> int_container;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 int_container.size = 1;
 int_container.data[0] = 10;
 Container<int>::push(&int_container,0x14);
 Container<int>::push(&int_container,0x1e);
 if (int_container.size < 1) {
 int_container.data[0] = 0;
 }
 return int_container.size + int_container.data[0] + 3;
}



/* Function: test_cpp_lambda @ 00010f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_8_2_35feab7f lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_rtti @ 00010f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_00011c68;
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011c7c;
 iVar3 = ((*(type_info **)(*piVar1 + -4)) != (type_info *)&_ZTS12RTTIDerivedA_typeinfo) ? 0 : 10;
 iVar4 = ((*(type_info **)(*piVar2 + -4)) != (type_info *)&_ZTS12RTTIDerivedB_typeinfo) ? 0 : 1;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = __dynamic_cast(piVar1,&_ZTS9RTTIBase_typeinfo,&_ZTS12RTTIDerivedA_typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = __dynamic_cast(piVar2,&_ZTS9RTTIBase_typeinfo,&_ZTS12RTTIDerivedB_typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (**(code **)(iVar6 + 4))(piVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
 return iVar3 + sVar5;
}



/* Function: test_cpp_smart_ptr @ 00011038 */

/* WARNING: Removing unreachable block (ram,0x000110c0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 int __in_chrg;
 int __in_chrg_00;
 int *ptr1;
 int *ptr2;
 int *arr;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 ptr2 = (int*)operator_new(4);
 *ptr2 = 200;
 ptr1 = nullptr;
 arr = (int*)operator_new(0x14);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 operator_delete(arr);
 operator_delete(ptr2);
 operator_delete(ptr1);
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 000110ec */

/* WARNING: Removing unreachable block (ram,0x00011164) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 DiamondDerived obj;
 
 /* Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011c20;
 obj._20_4_ = 0x32;
 obj.super_MiddleA._8_4_ = &PTR_func_00011c38;
 obj._16_4_ = &PTR_func_00011c54;
 iVar1 = DiamondDerived::func((DiamondDerived *)&obj.field_0x10);
 obj._20_4_ = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&obj.field_0x10);
 DiamondDerived::~DiamondDerived(&obj);
 return iVar1 + iVar2;
}



/* Function: test_cpp_oo_features @ 0001117c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_00011866);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001188a,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_000118a8,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_000118c4,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_000118e0,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000118fc,iVar1);
 iVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00011919,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00011935,iVar1);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00011951,iVar1);
 iVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_0001196d,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00011989,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_000119a6,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_000119c3,iVar1);
 return;
}



/* Function: virtual_func @ 000112b0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 000112b8 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 000112c4 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * __thiscall Base::~Base(Base *this,int __in_chrg)

{
 return this;
}



/* Function: virtual_func @ 000112c8 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 000112d4 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 000112e0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 000112e8 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 000112f0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 000112f8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00011300 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this, int __in_chrg) */

void * __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 return this;
}



/* Function: func @ 00011304 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 0001131c */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
 func((MiddleA *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00011330 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011348 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
 func((MiddleB *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]));
 return;
}



/* Function: func @ 0001135c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011374 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00011388 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: ~MiddleA @ 00011390 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this) */

void * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011b2c;
 *(undefined ***)&this->field_0x8 = &PTR_func_00011b48;
 return this;
}



/* Function: ~MiddleA @ 000113a8 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = this->_vptr_MiddleA[-4];
 *(undefined ***)((int)&this->_vptr_MiddleA + (int)p_Var1) = &PTR_func_00011b2c;
 *(undefined ***)(&this->field_0x8 + (int)p_Var1) = &PTR_func_00011b48;
 return;
}



/* Function: ~MiddleB @ 000113d0 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this) */

void * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00011b68;
 *(undefined ***)&this->field_0x8 = &PTR_func_00011b84;
 return this;
}



/* Function: ~MiddleB @ 000113e8 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = this->_vptr_MiddleB[-4];
 *(undefined ***)((int)&this->_vptr_MiddleB + (int)p_Var1) = &PTR_func_00011b68;
 *(undefined ***)(&this->field_0x8 + (int)p_Var1) = &PTR_func_00011b84;
 return;
}



/* Function: getType @ 00011410 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 00011418 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011420 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 return this;
}



/* Function: ~RTTIDerivedA @ 00011424 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 return this;
}



/* Function: ~MultiDerived @ 00011428 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 return this;
}



/* Function: ~MultiDerived @ 0001142c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return (MultiDerived *)((char *)this - sizeof(MultiDerived));
}



/* Function: ~Derived @ 00011434 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 return this;
}



/* Function: ~Base @ 00011438 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * __thiscall Base::~Base(Base *this,int __in_chrg)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~Derived @ 00011450 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,8);
 return this;
}



/* Function: ~MultiDerived @ 00011468 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return this;
}



/* Function: ~MultiDerived @ 00011480 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 int in_r1;
 
 ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_r1);
 return;
}



/* Function: ~VirtualBase @ 00011488 */

/* DWARF original prototype: void * ~VirtualBase(VirtualBase * this, int __in_chrg) */

void * __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 operator_delete(this,8);
 return this;
}



/* Function: ~RTTIDerivedB @ 000114a0 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~RTTIDerivedA @ 000114b8 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~MiddleA @ 000114d0 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this) */

void * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011b2c;
 *(undefined ***)&this->field_0x8 = &PTR_func_00011b48;
 operator_delete(this,0x10);
 return this;
}



/* Function: ~MiddleA @ 000114fc */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA((MiddleA *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-4]));
 return;
}



/* Function: ~MiddleB @ 00011510 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this) */

void * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00011b68;
 *(undefined ***)&this->field_0x8 = &PTR_func_00011b84;
 operator_delete(this,0x10);
 return this;
}



/* Function: ~MiddleB @ 0001153c */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB((MiddleB *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-4]));
 return;
}



/* Function: ~MiddleA @ 00011550 */

/* DWARF original prototype: void * ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void * __thiscall MiddleA::~MiddleA(MiddleA *this,void **__vtt_parm)

{
 _func_int_varargs **pp_Var1;
 
 pp_Var1 = *__vtt_parm;
 this->_vptr_MiddleA = pp_Var1;
 *(void **)((int)&this->_vptr_MiddleA + (int)pp_Var1[-3]) = __vtt_parm[1];
 return this;
}



/* Function: ~MiddleB @ 00011568 */

/* DWARF original prototype: void * ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void * __thiscall MiddleB::~MiddleB(MiddleB *this,void **__vtt_parm)

{
 _func_int_varargs **pp_Var1;
 
 pp_Var1 = *__vtt_parm;
 this->_vptr_MiddleB = pp_Var1;
 *(void **)((int)&this->_vptr_MiddleB + (int)pp_Var1[-3]) = __vtt_parm[1];
 return this;
}



/* Function: template_max<int> @ 00011580 */

int template_max<int>(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 0001158c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000115a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max<double>(double a,double b)

{
 __aeabi_dcmpgt(SUB84(a,0),(int)((ulonglong)a >> 0x20),SUB84(b,0));
 return a;
}



/* Function: template_swap<int> @ 000115bc */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 000115d0 */

/* DWARF original prototype: Container<int> * Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: Container<int>::push @ 000115dc */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container<int>::get @ 000115f4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container<int>::get(Container<int> *this,int idx)

{
 if ((-1 < idx) && (idx < this->size)) {
 return this->data[idx];
 }
 return 0;
}



/* Function: Container<int>::getSize @ 00011618 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00011620 */

/* DWARF original prototype: Container<double> * Container(Container<double> * this) */

Container<double> * __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return this;
}



/* Function: push @ 0001162c */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 
 iVar1 = this->size;
 if (9 < iVar1) {
 return;
 }
 this->size = iVar1 + 1;
 *(undefined4 *)(this->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
 return;
}



/* Function: get @ 0001164c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double in_d0;
 
 if ((-1 < idx) && (idx < this->size)) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011678 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~unique_ptr @ 00011680 */

/* DWARF original prototype: void * ~unique_ptr(std::unique_ptr<int, std::default_delete<int>> * this,
 int __in_chrg) */

void * __thiscall
std::unique_ptr<int, std::default_delete<int>>::~unique_ptr
 (std::unique_ptr<int, std::default_delete<int>> *this,int __in_chrg)

{
 std::tuple<int*, std::default_delete<int>> _Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(r0)] */
 _Var1 = (this->_M_t)._M_t;
 if (_Var1 != (_Tuple_impl<0, int*, std::default_delete<int>>)0x0) {
 operator_delete((void *)_Var1,4);
 }
 return this;
}



/* Function: ~unique_ptr @ 000116a4 */

/* DWARF original prototype: void * ~unique_ptr(unique_ptr<int_[],std::default_delete<int_[]>_> *
 this, int __in_chrg) */

void * __thiscall
std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr
 (std::unique_ptr<int[], std::default_delete<int[]>> *this,int __in_chrg)

{
 _Tuple_impl<0, int*, std::default_delete<int[]>> _Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(r0)] */
 _Var1 = (this->_M_t)._M_t;
 if (_Var1 != (_Tuple_impl<0, int*, std::default_delete<int[]>>)0x0) {
 operator_delete((void *)_Var1);
 }
 return this;
}



/* Function: ~DiamondDerived @ 000116c4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void * __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 undefined **__vtt_parm_00;
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 else {
 ppuVar1 = &PTR_func_00011c20;
 }
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 ppuVar1 = __vtt_parm[5];
 }
 else {
 p_Var2 = (_func_int_varargs *)0x10;
 ppuVar1 = &PTR_func_00011c54;
 }
 *(undefined ***)(p_Var2 + (int)&(this->super_MiddleA)._vptr_MiddleA) = ppuVar1;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[6];
 __vtt_parm_00 = __vtt_parm + 3;
 }
 else {
 ppuVar1 = &PTR_func_00011c38;
 __vtt_parm_00 = &PTR_DAT_00011c04;
 }
 {
 void *this_00;
 
 this_00 = &(this->super_MiddleA).field_0x8;
 *(undefined ***)this_00 = ppuVar1;
 MiddleB::~MiddleB((MiddleB *)this_00,__vtt_parm_00);
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 1;
 }
 else {
 ppuVar1 = &PTR_DAT_00011bfc;
 }
 MiddleA::~MiddleA(&this->super_MiddleA,ppuVar1);
 }
 return this;
}



/* Function: ~DiamondDerived @ 00011748 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this) */

void * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 void *pvVar1;
 
 pvVar1 = ~DiamondDerived(this,2,(void **)0x0);
 return pvVar1;
}



/* Function: ~DiamondDerived @ 00011754 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: ~DiamondDerived @ 0001175c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 00011770 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this) */

void * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this,0x18);
 return this;
}



/* Function: ~DiamondDerived @ 00011790 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: ~DiamondDerived @ 00011798 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 000117ac */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **__vtt_parm)

{
 void *pvVar1;
 
 pvVar1 = ~DiamondDerived(this,0,__vtt_parm);
 return pvVar1;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
