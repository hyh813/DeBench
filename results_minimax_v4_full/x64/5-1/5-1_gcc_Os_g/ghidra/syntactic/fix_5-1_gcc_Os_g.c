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

/* Standard C library functions */
int puts(const char *s);
int printf(const char *format, ...);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
int __printf_chk(int flag, const char *format, ...);
void __stack_chk_fail(void);

/* C++ runtime functions */
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
void *operator_delete(void *ptr);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void * thrown_exception, void * typeinfo, void * destructor);
int __cxa_atexit(void (*f)(void *), void *arg, void *dso);
void *__dynamic_cast(const void *ptr, const void *src_type, const void *dst_type, long paths);

typedef int (*_func_int_varargs)(int, ...);

/* Forward declarations for classes */
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct SimpleClass;
struct LifecycleClass;

/* Forward declare unique_ptr specializations needed */
template<typename T, typename Deleter> struct unique_ptr;
template<typename T> struct Container;

typedef int* int_;
typedef int int_array_[10];

template<typename T>
struct _std_delete {
    void operator()(T *p) {}
};

struct _std {
    struct default_delete_int_ {
        void operator()(int *p) {}
    };
    struct default_delete_int_array_ {
        void operator()(int *p) {}
    };
    template<typename T>
    struct default_delete {
        void operator()(T *p) {}
    };
};

/* Template declarations */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T *a, T *b);

template<typename T>
struct Container {
    int size;
    T data[10];
};

template<typename T, typename Deleter>
struct __uniq_ptr_data {
    T* _M_t;
    Deleter _M_del;
};

template<typename T, typename Deleter = _std::default_delete<T> >
struct unique_ptr {
    __uniq_ptr_data<T, Deleter> _M_t;
};

template<typename T, typename Deleter>
struct _Tuple_impl {
    T _M_t;
};

/* Type info structures */
struct typeinfo {
    virtual ~typeinfo() {}
};

namespace int_ {
    static typeinfo typeinfo;
}

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

struct Base {
    int (*_vptr_Base)(int, ...);
    virtual int virtual_func(int x) { return x + 1; }
    virtual char *getName() { return (char*)"Base"; }
    virtual ~Base() {}
};

struct Derived : public Base {
    int multiplier;
    virtual int virtual_func(int x) { return multiplier * x; }
    virtual char *getName() { return (char*)"Derived"; }
};

struct VirtualBase {
    int (*_vptr_VirtualBase)(int, ...);
    int field_0x8;
    virtual int func() { return 100; }
    virtual ~VirtualBase() {}
};

struct MiddleA {
    int (*_vptr_MiddleA)(int, ...);
    int dataA;
    void *field_0x10;
    virtual int func() { return dataA + 0x96; }
    virtual ~MiddleA() {}
};

struct MiddleB {
    int (*_vptr_MiddleB)(int, ...);
    int dataB;
    void *field_0x10;
    virtual int func() { return dataB + 200; }
    virtual ~MiddleB() {}
};

struct MultiDerived : public Base, public VirtualBase {
    int field_0x18;
    int funcA() { return 0x1e; }
    int funcB() { return 0x28; }
    virtual ~MultiDerived() {}
};

struct DiamondDerived : public MiddleA, public MiddleB {
    int field_0x40;
};

struct RTTIBase {
    static typeinfo typeinfo;
    virtual ~RTTIBase() {}
};

struct RTTIDerivedA : public RTTIBase {
    static typeinfo typeinfo;
    int getType() { return 1; }
    virtual ~RTTIDerivedA() {}
};

struct RTTIDerivedB : public RTTIBase {
    static typeinfo typeinfo;
    int getType() { return 2; }
    virtual ~RTTIDerivedB() {}
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 001022a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 001022c4 to 001022c8 has its CatchHandler @ 001022c9 */
 __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: main @ 00102367 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00102375 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102489 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 char *__s;
 size_t sVar2;
 long in_FS_OFFSET;
 SimpleClass obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __s = strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(__s);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)sVar2 + 0x125c;
}



/* Function: test_cpp_constructor @ 001024e3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001024f5 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x001024fc. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)();
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001024fe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 Base base;
 Derived derived;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 derived.multiplier = 3;
 base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_001058a8;
 derived.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_001058d8;
 iVar2 = call_virtual_func(&base,5);
 iVar3 = call_virtual_func(&derived.super_Base,5);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + 0x15 + iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 00102571 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 0010257b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102585 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int a;
 int b;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max<int>(3,7);
 dVar2 = template_max<double>(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap<int>(&a,&b);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (int)dVar2 + iVar1 + a + b;
}



/* Function: test_cpp_template_class @ 00102618 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 Container<int> int_container;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 int_container.size = 1;
 int_container.data[0] = 10;
 Container<int>::push(&int_container,0x14);
 Container<int>::push(&int_container,0x1e);
 iVar2 = 0;
 if (0 < int_container.size) {
 iVar2 = int_container.data[0];
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return int_container.size + 3 + iVar2;
}



/* Function: test_cpp_lambda @ 0010268d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 00102697 */

/* WARNING: Removing unreachable block (ram,0x00102723) */
/* WARNING: Removing unreachable block (ram,0x00102728) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 long lVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 char *__s1;
 
 uVar7 = 10;
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105b98;
 plVar4 = operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc0;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 iVar2 = uVar7 + 0x14;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(code **)(lVar1 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 001027ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 long lVar1;
 int in_ESI;
 long in_FS_OFFSET;
 unique_ptr<int, _std::default_delete<int>> ptr1;
 unique_ptr<int, _std::default_delete<int>> ptr2;
 unique_ptr<int[]> arr;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 ptr2._M_t._M_t = operator_new(4);
 ptr1._M_t._M_t = 0;
 *(undefined4 *)ptr2._M_t._M_t = 200;
 /* try { // try from 001027f3 to 001027f7 has its CatchHandler @ 0010284e */
 arr._M_t._M_t = operator_new(0x14);
 *(undefined8 *)
 *(undefined8 *)arr._M_t._M_t = 0x200000001;
 *(undefined8 *)((long)arr._M_t._M_t + 8) = 0x400000003;
 *(undefined4 *)((long)arr._M_t._M_t + 0x10) = 5;
 unique_ptr<int[], _std::default_delete<int[]>>::~unique_ptr(&arr);
 unique_ptr<int, _std::default_delete<int>>::~unique_ptr(&ptr2);
 unique_ptr<int, _std::default_delete<int>>::~unique_ptr(&ptr1);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0010287c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 DiamondDerived obj;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 obj._40_4_ = 0x32;
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00105b08;
 obj._32_8_ = &PTR_func_00105b70;
 obj.super_MiddleA._16_8_ = &PTR_func_00105b38;
 iVar2 = DiamondDerived::func((MiddleA *)&obj);
 obj._40_4_ = 100;
 iVar3 = DiamondDerived::func((DiamondDerived *)&obj.field_0x20);
 DiamondDerived::~DiamondDerived(&obj);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar3;
}



/* Function: test_cpp_oo_features @ 0010290d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined8 in_RAX;
 
 puts(&DAT_00103016);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0010303a,iVar1);
 test_cpp_constructor();
 __printf_chk();
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00103074,iVar1);
 test_cpp_multiple_inheritance();
 __printf_chk();
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_001030ac,iVar1);
 test_cpp_operator_overload();
 __printf_chk();
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_001030e5,iVar1);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00103101,iVar1);
 test_cpp_lambda();
 __printf_chk();
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00103139,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00103156,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00103173,iVar1,in_RAX);
 return;
}



/* Function: virtual_func @ 00102a58 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 00102a60 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00102a6c */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 00102a72 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
 return this->multiplier * x;
}



/* Function: getName @ 00102a7e */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00102a8a */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00102a94 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00102a9e */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00102aa8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102ab2 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 return;
}



/* Function: func @ 00102ab8 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102acd */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
 func((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]));
 return;
}



/* Function: func @ 00102ada */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00102aef */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
 func((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]));
 return;
}



/* Function: func @ 00102afc */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00102b11 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]))
 ;
 return;
}



/* Function: func @ 00102b1e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~MiddleA @ 00102b28 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00105920;
 *(undefined ***)&this->field_0x10 = &PTR_func_00105958;
 return;
}



/* Function: ~MiddleA @ 00102b3f */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-4]);
 *(undefined ***)p_Var1 = &PTR_func_00105920;
 *(undefined ***)(p_Var1 + 0x10) = &PTR_func_00105958;
 return;
}



/* Function: ~MiddleB @ 00102b5e */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00105998;
 *(undefined ***)&this->field_0x10 = &PTR_func_001059d0;
 return;
}



/* Function: ~MiddleB @ 00102b75 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = (_func_int_varargs *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-4]);
 *(undefined ***)p_Var1 = &PTR_func_00105998;
 *(undefined ***)(p_Var1 + 0x10) = &PTR_func_001059d0;
 return;
}



/* Function: getType @ 00102b94 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 00102b9e */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102ba8 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102bae */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102bb4 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102bb9 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00102bbe */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00102bc4 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00102bd2 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102be0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102bee */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 int in_ESI;
 
 ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_ESI);
 return;
}



/* Function: ~VirtualBase @ 00102bf8 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102c06 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102c14 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MiddleA @ 00102c22 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_00105920;
 *(undefined ***)&this->field_0x10 = &PTR_func_00105958;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleA @ 00102c42 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-4]));
 return;
}



/* Function: ~MiddleB @ 00102c50 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00105998;
 *(undefined ***)&this->field_0x10 = &PTR_func_001059d0;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleB @ 00102c70 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-4]));
 return;
}



/* Function: ~MiddleA @ 00102c7e */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined **ppuVar3;
 
 ppuVar1 = &PTR_func_00105920;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 this->_vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 ppuVar3 = &PTR_func_00105958;
 p_Var2 = (_func_int_varargs *)0x10;
 if (__in_chrg == 0) {
 ppuVar3 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 *(undefined ***)((long)&this->_vptr_MiddleA + (long)p_Var2) = ppuVar3;
 return;
}



/* Function: ~MiddleA @ 00102cb0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,void **__vtt_parm)

{
 ~MiddleA(this,0,__vtt_parm);
 return;
}



/* Function: ~MiddleB @ 00102cbe */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined **ppuVar3;
 
 ppuVar1 = &PTR_func_00105998;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 this->_vptr_MiddleB = (_func_int_varargs **)ppuVar1;
 ppuVar3 = &PTR_func_001059d0;
 p_Var2 = (_func_int_varargs *)0x10;
 if (__in_chrg == 0) {
 ppuVar3 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 *(undefined ***)((long)&this->_vptr_MiddleB + (long)p_Var2) = ppuVar3;
 return;
}



/* Function: ~MiddleB @ 00102cf0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,void **__vtt_parm)

{
 ~MiddleB(this,0,__vtt_parm);
 return;
}



/* Function: template_max<int> @ 00102cfe */

template<>
int template_max<int>(int a,int b)

{
 if (b <= a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 00102d0a */

template<>
double template_max<double>(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00102d13 */

template<>
void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00102d20 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: Container<int>::push @ 00102d2c */

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



/* Function: get @ 00102d44 */

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



/* Function: getSize @ 00102d5a */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 00102d62 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00102d6e */

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



/* Function: get @ 00102d88 */

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



/* Function: getSize @ 00102da2 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~unique_ptr<int> @ 00102daa */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int, _std::default_delete<int> > * this, int
 __in_chrg) */

void __thiscall
unique_ptr<int, _std::default_delete<int>>::~unique_ptr
 (unique_ptr<int, _std::default_delete<int>> *this,int __in_chrg)

{
 _Tuple_impl<int*, _std::default_delete<int>> _Var1;
 
 /* Unresolved local var: int * * __ptr@[???] */
 _Var1 = this->_M_t._M_t;
 if (_Var1 != (int*)0x0) {
 if (_Var1 != (_Tuple_impl<int*, _std::default_delete<int>>)0x0) {
 operator_delete((void *)_Var1,4);
 return;
 }
 }
}



/* Function: ~unique_ptr @ 00102dc2 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
 this, int __in_chrg) */

void __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr
 (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,int __in_chrg)

{
 _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> _Var1;
 
 /* Unresolved local var: int * * __ptr@[???] */
 _Var1 = (this->_M_t).super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>;
 if (_Var1 != (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>)0x0) {
 operator_delete((void *)_Var1);
 return;
 }
 return;
}



/* Function: DiamondDerived::~DiamondDerived @ 00102dd4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 undefined **ppuVar2;
 _func_int_varargs *p_Var3;
 
 ppuVar1 = &PTR_func_00105b08;
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 ppuVar2 = &PTR_func_00105b70;
 p_Var3 = (_func_int_varargs *)0x20;
 if (__in_chrg == 0) {
 ppuVar2 = __vtt_parm[5];
 p_Var3 = ((_func_int_varargs **)ppuVar1)[-3];
 }
 *(undefined ***)(p_Var3 + (long)&(this->super_MiddleA)._vptr_MiddleA) = ppuVar2;
 ppuVar1 = &PTR_func_00105b38;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[6];
 }
 *(undefined ***)&(this->super_MiddleA).field_0x10 = ppuVar1;
 ppuVar1 = &PTR_construction_vtable_24__00105ad0;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 3;
 }
 MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x10,ppuVar1);
 ppuVar1 = &PTR_construction_vtable_24__00105ac0;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 1;
 }
 MiddleA::~MiddleA(&this->super_MiddleA,ppuVar1);
 return;
}



/* Function: ~DiamondDerived @ 00102e5e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this,2,(void **)0x0);
 return;
}



/* Function: ~DiamondDerived @ 00102e6e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 00102e78 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 00102e86 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102eab */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 00102eb5 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 00102ec2 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **__vtt_parm)

{
 ~DiamondDerived(this,0,__vtt_parm);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
