/* Auto-injected type definitions by preprocessor */
#include <cstddef>
#include <memory>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t, intmax_t, uintmax_t are defined in <cstddef>

/* Forward declarations for classes */
class Base;
class Derived;
class SimpleClass;
class LifecycleClass;
class DiamondDerived;
class MiddleA;
class MiddleB;
class VirtualBase;
class MultiDerived;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
template<typename T> class Container;

/* Forward declarations for template functions */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

/* Forward declarations for functions */
void test_cpp_oo_features();
int test_cpp_member_func();

// Forward declarations for template classes
template<typename T> class Container;

// Class definitions (needed for compilation)
class Base {
public:
    virtual ~Base() {}
    virtual int virtual_func(int x) { return x + 1; }
    virtual char* getName() { return (char*)"Base"; }
    void* _vptr_Base;
};

class Derived : public Base {
public:
    int multiplier;
    virtual int virtual_func(int x) { return x * multiplier; }
    virtual char* getName() { return (char*)"Derived"; }
    void* _vptr_Base;
};

class SimpleClass {
public:
    char name[32];
};

class LifecycleClass {
public:
    static int instance_count;
};

class MiddleA {
public:
    void* _vptr_MiddleA;
    char dataA[8];
    char field_0x8[8];
    MiddleA() { _vptr_MiddleA = nullptr; }
    virtual ~MiddleA() {}
    virtual void func() {}
};

class MiddleB {
public:
    void* _vptr_MiddleB;
    char dataB[8];
    char field_0x8[8];
    MiddleB() { _vptr_MiddleB = nullptr; }
    virtual ~MiddleB() {}
    virtual void func() {}
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    int _20_4_;
    int _16_4_;
    char field_0x10[16];
    virtual ~DiamondDerived() {}
    virtual void func() {}
};

class VirtualBase {
public:
    virtual ~VirtualBase() {}
    virtual int func() { return 100; }
};

class MultiDerived : public Base {
public:
    void* _vptr_Base;
    char super_BaseB[16];
    virtual ~MultiDerived() {}
    virtual int funcA() { return 30; }
    virtual int funcB() { return 40; }
};

class RTTIBase {
public:
    static void* typeinfo;
};

class RTTIDerivedA : public RTTIBase {
public:
    static void* typeinfo;
    int getType() { return 1; }
    virtual ~RTTIDerivedA() {}
};

class RTTIDerivedB : public RTTIBase {
public:
    static void* typeinfo;
    int getType() { return 2; }
    virtual ~RTTIDerivedB() {}
};

template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container() : size(0) {}
    void push(T value) {
        if (size < 10) {
            data[size++] = value;
        }
    }
    T get(int idx) {
        if (idx >= 0 && idx < size) {
            return data[idx];
        }
        return T();
    }
    int getSize() { return size; }
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* Stack protector stub function */
void __stack_chk_fail_local(void) __attribute__((weak));
void __stack_chk_fail_local(void) {
    __stack_chk_fail();
}




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 // Invalid function call - null function pointer
 return;
}



/* Function: test_cpp_exception @ 000112d0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 int *puVar1;
 
 puVar1 = (int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011303 to 00011307 has its CatchHandler @ 00011308 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 000113c2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000113d5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

// Global constructor initializer - simplified for compatibility
void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)
{
 // std::ios_base::Init initialization handled by CRT
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001144c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011450 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011589 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001158d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011591 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 size_t sVar2;
 int iVar3;
 SimpleClass obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(obj.name);
 iVar3 = sVar2 + 0x125c;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_constructor @ 000115f1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0001160d */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x0001161f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011621 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 Base base;
 Derived derived;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 derived.multiplier = 3;
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00015c58;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00015c70;
 iVar2 = call_virtual_func(&base,5);
 iVar3 = call_virtual_func(&derived.super_Base,5);
 iVar3 = iVar2 + 0x15 + iVar3;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 0001168f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00011699 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000116a3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int a;
 int b;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max<int>(3,7);
 dVar2 = template_max<double>(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap<int>(&a,&b);
 iVar1 = (int)ROUND(dVar2) + iVar1 + a + b;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00011735 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 Container<int> int_container;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 int_container.size = 1;
 int_container.data[0] = 10;
 Container<int>::push(&int_container,0x14);
 Container<int>::push(&int_container,0x1e);
 iVar2 = 0;
 if (0 < int_container.size) {
 iVar2 = int_container.data[0];
 }
 iVar2 = int_container.size + 3 + iVar2;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_lambda @ 00011797 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 000117a1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x00011836) */
/* WARNING: Removing unreachable block (ram,0x0001183b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 size_t sVar5;
 uint uVar6;
 int iVar7;
 char *__s1;
 pointer_____offset_0x8___ *ppuVar8;
 
 uVar6 = 10;
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00015dd0;
 piVar3 = operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00015de4;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((__s1 != "12RTTIDerivedA") && (uVar6 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar6 = -(uint)(iVar4 == 0) & 10;
 }
 iVar7 = uVar6 + 0x14;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 ppuVar8 = &RTTIBase::typeinfo;
 iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0,&RTTIBase::typeinfo);
 if (iVar4 != 0) {
 iVar7 = uVar6 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast(piVar3,ppuVar8,&RTTIDerivedB::typeinfo,0);
 if (iVar4 != 0) {
 iVar7 = iVar7 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 iVar7 = sVar5 + iVar7;
 (**(code **)(iVar1 + 4))(piVar2);
 (**(code **)(*piVar3 + 4))(piVar3);
 return iVar7;
}



/* Function: test_cpp_smart_ptr @ 000118c9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 int in_stack_ffffffa8;
 int in_stack_ffffffb8;
 std::unique_ptr<int> ptr1;
 std::unique_ptr<int> ptr2;
 std::unique_ptr<int[]> arr;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 ptr2.reset((int*)operator_new(4));
 ptr1.reset((int*)nullptr);
 *ptr2 = 200;
 /* try { // try from 00011918 to 0001191c has its CatchHandler @ 0001196e */
 arr.reset((int*)operator_new(0x14));
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 arr.~unique_ptr();
 ptr2.~unique_ptr();
 ptr1.~unique_ptr();
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar2 = __stack_chk_fail_local();
 /* catch() { ... } // from try @ 00011918 with catch @ 0001196e */
 ptr2.~unique_ptr();
 ptr1.~unique_ptr();
 /* WARNING: Subroutine does not return */
 _Unwind_Resume(uVar2);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0001199d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 DiamondDerived obj;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 obj._20_4_ = 0x32;
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00015d88;
 obj.super_MiddleA._8_4_ = &PTR_func_00015da0;
 obj._16_4_ = &PTR_func_00015dbc;
 iVar2 = DiamondDerived::func((DiamondDerived *)&obj.field_0x10);
 obj._20_4_ = 100;
 iVar3 = DiamondDerived::func((DiamondDerived *)&obj.field_0x10);
 iVar3 = iVar3 + iVar2;
 DiamondDerived::~DiamondDerived(&obj);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar3 = __stack_chk_fail_local();
 }
 return iVar3;
}



/* Function: test_cpp_oo_features @ 00011a22 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined4 extraout_ECX;
 undefined4 extraout_ECX_00;
 undefined4 extraout_EDX;
 undefined4 extraout_EDX_00;
 undefined4 extraout_EDX_01;
 
 puts(&DAT_0001301a);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001303e,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001305c,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00013078,iVar1,extraout_EDX);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00013094,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000130b0,iVar1);
 iVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_000130cd,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000130e9,iVar1,extraout_ECX);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00013105,iVar1);
 iVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_00013121,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_0001313d,iVar1,extraout_EDX_00);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001315a,iVar1,extraout_ECX_00);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00013177,iVar1,extraout_EDX_01);
 return;
}



/* Function: virtual_func @ 00011b66 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 00011b74 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00011b8a */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)
{
 return;
}

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 00011ba4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00011bba */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00011bc4 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00011bce */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011bd8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00011be2 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 return;
}



/* Function: func @ 00011be8 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00011c02 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
 func((MiddleA *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00011c16 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011c30 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
 func((MiddleB *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]));
 return;
}



/* Function: func @ 00011c44 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 00011c5e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00011c71 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: ~MiddleA @ 00011c7c */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00015c94;
 *(undefined ***)&this->field_0x8 = &PTR_func_00015cb0;
 return;
}



/* Function: ~MiddleA @ 00011ca1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-4]);
 *(undefined ***)p_Var1 = &PTR_func_00015c94;
 *(undefined ***)(p_Var1 + 8) = &PTR_func_00015cb0;
 return;
}



/* Function: ~MiddleB @ 00011ccc */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00015cd0;
 *(undefined ***)&this->field_0x8 = &PTR_func_00015cec;
 return;
}



/* Function: ~MiddleB @ 00011cf1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-4]);
 *(undefined ***)p_Var1 = &PTR_func_00015cd0;
 *(undefined ***)(p_Var1 + 8) = &PTR_func_00015cec;
 return;
}



/* Function: getType @ 00011d1c */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 00011d26 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011d30 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011d36 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011d3c */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00011d41 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00011d46 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00011d4c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~Derived @ 00011d74 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MultiDerived @ 00011d9c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011dc4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 int in_stack_00000008;
 
 ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_stack_00000008);
 return;
}



/* Function: ~VirtualBase @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00011df8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,4);
 return;
}



/* Function: ~MiddleA @ 00011e48 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00015c94;
 *(undefined ***)&this->field_0x8 = &PTR_func_00015cb0;
 operator_delete(this,0x10);
 return;
}



/* Function: ~MiddleA @ 00011e7f */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA((MiddleA *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-4]));
 return;
}



/* Function: ~MiddleB @ 00011e92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00015cd0;
 *(undefined ***)&this->field_0x8 = &PTR_func_00015cec;
 operator_delete(this,0x10);
 return;
}



/* Function: ~MiddleB @ 00011ec9 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB((MiddleB *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-4]));
 return;
}



/* Function: MiddleA_destructor @ 00011edc */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA_destructor(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined **ppuVar3;
 
 ppuVar1 = &PTR_func_00015c94;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 this->_vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 ppuVar3 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 else {
 ppuVar3 = &PTR_func_00015cb0;
 p_Var2 = (_func_int_varargs *)0x8;
 }
 *(undefined ***)((int)&this->_vptr_MiddleA + (int)p_Var2) = ppuVar3;
 return;
}



/* Function: ~MiddleA @ 00011f26 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,void **__vtt_parm)

{
 ~MiddleA(this,0,__vtt_parm);
 return;
}



/* Function: ~MiddleB @ 00011f42 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined **ppuVar3;
 
 ppuVar1 = &PTR_func_00015cd0;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 this->_vptr_MiddleB = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 ppuVar3 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 else {
 ppuVar3 = &PTR_func_00015cec;
 p_Var2 = (_func_int_varargs *)0x8;
 }
 *(undefined ***)((int)&this->_vptr_MiddleB + (int)p_Var2) = ppuVar3;
 return;
}



/* Function: ~MiddleB @ 00011f8c */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,void **__vtt_parm)

{
 ~MiddleB(this,0,__vtt_parm);
 return;
}



/* Function: template_max<int> @ 00011fa8 */

/* WARNING: Unknown calling convention */

template<>
int template_max(int a, int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00011fbc */

template<>
double template_max(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00011fd5 */

/* WARNING: Unknown calling convention */

template<>
void template_swap(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011fee */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00012002 */

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



/* Function: get @ 00012022 */

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



/* Function: getSize @ 00012040 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00012050 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00012064 */

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



/* Function: get @ 00012088 */

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



/* Function: getSize @ 000120a8 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~unique_ptr @ 000120b8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~unique_ptr(std::unique_ptr<int, std::default_delete<int>> * this, int
 __in_chrg) */

void __thiscall
std::unique_ptr<int, std::default_delete<int>>::~unique_ptr
 (std::unique_ptr<int, std::default_delete<int>> *this,int __in_chrg)

{
 _Tuple_impl<0, int*, std::default_delete<int>> _Var1;
 
 /* Unresolved local var: int * * __ptr@[???] */
 _Var1 = (this->_M_t).super___uniq_ptr_impl<int,std::default_delete<int>>._M_t.
 super__Tuple_impl<0,int*,std::default_delete<int>>;
 if (_Var1 != (_Tuple_impl<0,int*,std::default_delete<int>>)0x0) {
 operator_delete((void *)_Var1,4);
 }
 return;
}



/* Function: ~unique_ptr @ 000120e8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~unique_ptr(std::unique_ptr<int[], std::default_delete<int[]>> *
 this, int __in_chrg) */

void __thiscall
std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr
 (std::unique_ptr<int[], std::default_delete<int[]>> *this,int __in_chrg)

{
 _Tuple_impl<0, int*, std::default_delete<int[]>> _Var1;
 
 /* Unresolved local var: int * * __ptr@[???] */
 _Var1 = (this->_M_t).super___uniq_ptr_impl<int,std::default_delete<int[]>>_>._M_t.
 super__Tuple_impl<0,int*,std::default_delete<int[]>>_>;
 if (_Var1 != (_Tuple_impl<0,int*,std::default_delete<int[]>>_>)0x0) {
 operator_delete__((void *)_Var1);
 }
 return;
}



/* Function: ~DiamondDerived @ 00012116 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 undefined **ppuVar2;
 _func_int_varargs *p_Var3;
 
 ppuVar1 = &PTR_func_00015d88;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 ppuVar2 = __vtt_parm[5];
 p_Var3 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 else {
 ppuVar2 = &PTR_func_00015dbc;
 p_Var3 = (_func_int_varargs *)0x10;
 }
 *(undefined ***)(p_Var3 + (int)&(this->super_MiddleA)._vptr_MiddleA) = ppuVar2;
 ppuVar1 = &PTR_func_00015da0;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[6];
 }
 *(undefined ***)&(this->super_MiddleA).field_0x8 = ppuVar1;
 ppuVar1 = &PTR_construction_vtable_12__00015d6c;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 3;
 }
 MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,ppuVar1);
 ppuVar1 = &PTR_construction_vtable_12__00015d64;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 1;
 }
 MiddleA::~MiddleA(&this->super_MiddleA,ppuVar1);
 return;
}



/* Function: ~DiamondDerived @ 000121b0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this,2,(void **)0x0);
 return;
}



/* Function: ~DiamondDerived @ 000121cb */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: ~DiamondDerived @ 000121d6 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 000121ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this,0x18);
 return;
}



/* Function: ~DiamondDerived @ 0001221e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10);
 return;
}



/* Function: ~DiamondDerived @ 00012229 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 0001223c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **__vtt_parm)

{
 ~DiamondDerived(this,0,__vtt_parm);
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012258 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 0001225c */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.si @ 00012260 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00012270 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 96 */
