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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Define __thiscall as empty for compatibility */
#define __thiscall

/* Class forward declarations and definitions */
struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    static int instance_count;
};

/* Forward declarations for vtable types */
struct Base_vtable;
struct Derived_vtable;
struct MiddleA_vtable;
struct MiddleB_vtable;

struct Base {
    struct Base_vtable *_vptr_Base;
    char name[32];
};

struct Derived {
    struct Base super_Base;
    int multiplier;
};

struct MiddleA {
    struct MiddleA_vtable *_vptr_MiddleA;
    int dataA;
    int _vptr_MiddleA_offset;  /* placeholder for vtable offset */
};

struct MiddleB {
    struct MiddleB_vtable *_vptr_MiddleB;
    int dataB;
};

struct DiamondDerived {
    struct MiddleA super_MiddleA;
    int field_0x10;  /* vtable pointer for MiddleB */
    int _20_4_;
    /* overlapping field ignored: MiddleB super_MiddleB */
};

struct MultiDerived {
    struct Base super_BaseA;
    struct Base super_BaseB;
    int field_0x20;
};

struct RTTIBase {
    int type;
};

struct RTTIDerivedA {
    struct RTTIBase base;
};

struct RTTIDerivedB {
    struct RTTIBase base;
};

/* Vtable type definitions */
struct Base_vtable {
    _func_int_varargs *virtual_func;
    _func_int_varargs *getName;
    _func_int_varargs *destructor;
};

struct Derived_vtable {
    _func_int_varargs *virtual_func;
    _func_int_varargs *getName;
    _func_int_varargs *destructor;
};

struct MiddleA_vtable {
    _func_int_varargs *func;
};

struct MiddleB_vtable {
    _func_int_varargs *func;
};

/* Template class Container */
template<typename T>
struct Container {
    int size;
    T data[10];
};

/* Global variables */
int LifecycleClass::instance_count = 0;

/* Function pointers for vtables */
_func_int_varargs *PTR_virtual_func_0001187c;
_func_int_varargs *PTR_virtual_func_00011894;
_func_int_varargs *PTR_func_00011934;
_func_int_varargs *PTR_func_0001194c;
_func_int_varargs *PTR_func_00011968;

/* External declarations */
extern "C" {
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
int __cxa_allocate_exception(size_t size);
void __cxa_throw(void *thrown_exception, void *typeinfo, void (*dest)(void *));
int __dynamic_cast(const void *, const void *, const void *, long);
}

/* Standard library */
namespace std {
struct type_info {
    bool operator==(const type_info& other) const;
};
struct ios_base {
    struct Init {
        Init();
        ~Init();
    };
};
}

/* Forward declarations for C linkage */
extern "C" {
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
int test_cpp_lambda(void);
int test_cpp_exception(void);
int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void test_cpp_oo_features(void);
int main(void);
}

/* Template functions - forward declarations */
/* Removed template declarations to avoid conflicts with wrapper functions */

/* Explicit template instantiations - using wrapper functions instead */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void template_swap_double(double *a, double *b);

/* Class member functions - use function pointers instead of method syntax */
typedef int (*Base_virtual_func_t)(void*, int);
typedef char* (*Base_getName_t)(void*);
typedef void (*Base_destructor_t)(void*);
typedef int (*Derived_virtual_func_t)(void*, int);
typedef char* (*Derived_getName_t)(void*);
typedef void (*Derived_destructor_t)(void*);
typedef int (*MiddleA_func_t)(void*);
typedef int (*MiddleB_func_t)(void*);
typedef int (*DiamondDerived_func_t)(void*);
typedef int (*MultiDerived_funcA_t)(void*);
typedef int (*MultiDerived_funcB_t)(void*);
typedef void (*MultiDerived_destructor_t)(void*);
typedef int (*RTTIDerivedA_getType_t)(void*);
typedef void (*RTTIDerivedA_destructor_t)(void*);
typedef int (*RTTIDerivedB_getType_t)(void*);
typedef void (*RTTIDerivedB_destructor_t)(void*);
typedef void (*DiamondDerived_destructor_t)(void*);


/* Function: FUN_000109bc @ 000109bc */

void FUN_000109bc(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c00 */

/* WARNING: Removing unreachable block (ram,0x00010c60) */
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



/* Function: test_cpp_constructor @ 00010c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new(0x14);
 /* Unresolved local var: size_t i@[???] */
 *(undefined4 *)((int)pvVar1 + 4) = 10;
 *(undefined4 *)((int)pvVar1 + 8) = 0x14;
 *(undefined4 *)((int)pvVar1 + 0xc) = 0x1e;
 *(undefined4 *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass::instance_count + 0x15;
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator_delete(pvVar1, 0x14);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return iVar2 + LifecycleClass::instance_count * 1000;
}



/* Function: call_virtual_func @ 00010cd0 */

int call_virtual_func(Base *obj, int x)

{
 int iVar1;
 
 iVar1 = (int)(*(obj->_vptr_Base->virtual_func))(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010ce4 */

/* WARNING: Removing unreachable block (ram,0x00010d58) */
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
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_0001187c;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00011894;
 derived.multiplier = 3;
 iVar1 = call_virtual_func(&base,5);
 iVar2 = call_virtual_func(&derived.super_Base,5);
 return iVar1 + 0x15 + iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 00010d68 */

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



/* Function: test_cpp_diamond_inheritance @ 00010d70 */

/* WARNING: Removing unreachable block (ram,0x00010de8) */
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
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00011934;
 obj._20_4_ = 0x32;
 obj.super_MiddleA._8_4_ = &PTR_func_0001194c;
 obj._16_4_ = &PTR_func_00011968;
 iVar1 = DiamondDerived::func((DiamondDerived *)&obj.field_0x10);
 obj._20_4_ = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&obj.field_0x10);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00010df4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010dfc */

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
 iVar1 = template_max_int(3,7);
 template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
 if (local_14 == 0) {
 return iVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00010eac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010eb4 */

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



/* Function: test_cpp_exception @ 00010ebc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010f78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int_[],_std::default_delete<int_[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010f84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001197c;
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011990;
 iVar3 = std::type_info::operator==
 (*(type_info **)(*piVar1 + -4),(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std::type_info::operator==
 (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar4 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 iVar4 = *piVar1;
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (**(code **)(iVar4 + 4))(piVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00011074 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_000115e4);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_00011608,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_00011628,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00011644,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00011660,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_0001167c,iVar1);
 __printf_chk(1,&DAT_0001169c,0x16);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000116b8,iVar1);
 __printf_chk(1,&DAT_000116d4,0x10);
 __printf_chk(1,&DAT_000116f0,0x55);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_0001170c,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001172c,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0001174c,iVar1);
 return;
}



/* Function: main @ 0001119c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std::ios_base::Init::Init(&std::__ioinit);
 __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
 return;
}



/* Function: virtual_func @ 000111dc */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base::virtual_func(Base *this_ptr,int x)

{
 return x + 1;
}



/* Function: getName @ 000111e4 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this_ptr)

{
 return "Base";
}



/* Function: ~Base @ 000111f0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void Base::~Base(Base *this_ptr)

{
 return;
}



/* Function: virtual_func @ 000111f4 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this_ptr,int x)

{
 return x * this_ptr->multiplier;
}



/* Function: getName @ 00011200 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 0001120c */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00011214 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 0001121c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011224 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 0001123c */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((int)&this->dataA +
 (int)(this->_vptr_MiddleA[-3] +
 *(int *)(*(int *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]) +
 -0xc))) + 0x96;
}



/* Function: func @ 00011260 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00011278 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((int)&this->dataB +
 (int)(this->_vptr_MiddleB[-3] +
 *(int *)(*(int *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]) +
 -0xc))) + 200;
}



/* Function: func @ 0001129c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: func @ 000112b4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (this->super_MiddleA)._vptr_MiddleA[-3];
 return *(int *)((int)&(this->super_MiddleA).dataA +
 (int)(p_Var1 + *(int *)(*(int *)((int)&(this->super_MiddleA)._vptr_MiddleA +
 (int)p_Var1) + -0xc))) + 0xfa;
}



/* Function: func @ 000112d8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)this + *(int *)(*(int *)&this[-1].field_0x10 + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 000112f0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 000112f8 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011300 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 return this;
}



/* Function: ~RTTIDerivedA @ 00011304 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 return this;
}



/* Function: ~DiamondDerived @ 00011308 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 return this;
}



/* Function: ~DiamondDerived @ 0001130c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

_func_int_varargs * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return (_func_int_varargs *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-4]);
}



/* Function: ~DiamondDerived @ 0001131c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined1 * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return &this[-1].field_0x10;
}



/* Function: ~MultiDerived @ 00011324 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 return this;
}



/* Function: ~MultiDerived @ 00011328 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return &this[-1].super_BaseB;
}



/* Function: ~Derived @ 00011330 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 return this;
}



/* Function: ~Base @ 00011334 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * __thiscall Base::~Base(Base *this,int __in_chrg)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~Derived @ 0001134c */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,8);
 return this;
}



/* Function: ~MultiDerived @ 00011364 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return this;
}



/* Function: ~MultiDerived @ 0001137c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

BaseB * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(&this[-1].super_BaseB,0x10);
 return &this[-1].super_BaseB;
}



/* Function: ~RTTIDerivedA @ 00011398 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~RTTIDerivedB @ 000113b0 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~DiamondDerived @ 000113c8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void * __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 operator_delete(this,0x18);
 return this;
}



/* Function: ~DiamondDerived @ 000113e0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

_func_int_varargs * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)
 ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-4]
 );
 operator_delete(p_Var1,0x18);
 return p_Var1;
}



/* Function: ~DiamondDerived @ 00011404 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

undefined1 * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(&this[-1].field_0x10,0x18);
 return &this[-1].field_0x10;
}



/* Function: template_max_int @ 00011420 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max_double @ 0001142c */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00011440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 __aeabi_dcmpgt(SUB84(a,0),(int)((ulonglong)a >> 0x20),SUB84(b,0));
 return a;
}



/* Function: template_swap_int @ 0001145c */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011470 */

/* DWARF original prototype: Container<int> * Container(Container<int> * this) */

Container_int * Container_int_Constructor(Container_int *this)

{
 this->size = 0;
 return this;
}



/* Function: push @ 0001147c */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011494 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(Container_int *this,int idx)

{
 if (idx < 0) {
 return 0;
 }
 if (this->size <= idx) {
 return 0;
 }
 return this->data[idx];
}



/* Function: getSize @ 000114c0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 000114c8 */

/* DWARF original prototype: Container<double> * Container(Container<double> * this) */

Container_double * Container_double_Constructor(Container_double *this)

{
 this->size = 0;
 return this;
}



/* Function: push @ 000114d4 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(Container_double *this,double value)

{
 int iVar1;
 undefined4 in_r2;
 undefined4 in_r3;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 *(undefined4 *)(this->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: get @ 000114f0 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(Container_double *this,int idx)

{
 double in_d0;
 
 if (idx < 0) {
 return in_d0;
 }
 if (this->size <= idx) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011528 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(Container_double *this)

{
 return this->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
