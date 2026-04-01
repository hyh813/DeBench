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
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)();

/* Forward declarations for template functions */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T& a, T& b);

/* Forward declarations for template classes */
template<typename T> class Container;

/* Function declarations */
void __stack_chk_fail_local(void);

/* Class definitions */

/* Base class */
class Base {
public:
    virtual int virtual_func(int param_1);
    virtual ~Base();
    virtual undefined * getName(void);
};

/* Derived class */
class Derived : public Base {
public:
    int member;
    virtual int virtual_func(int param_1);
    virtual ~Derived();
    virtual undefined * getName(void);
};

/* VirtualBase class */
class VirtualBase {
public:
    virtual undefined4 func(void);
    virtual ~VirtualBase();
};

/* MiddleA class */
class MiddleA : virtual public VirtualBase {
public:
    undefined *vtable[2];
    int value;
    virtual undefined4 func(void);
    virtual ~MiddleA();
};

/* MiddleB class */
class MiddleB : virtual public VirtualBase {
public:
    undefined *vtable[2];
    int value;
    virtual undefined4 func(void);
    virtual ~MiddleB();
};

/* DiamondDerived class */
class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual undefined4 func(void);
    virtual ~DiamondDerived();
};

/* MultiDerived class */
class MultiDerived : public Base, public Derived {
public:
    virtual undefined4 funcA(void);
    virtual undefined4 funcB(void);
    virtual ~MultiDerived();
};

/* RTTIBase class */
class RTTIBase {
public:
    undefined *vtable;
};

/* RTTIDerivedA class */
class RTTIDerivedA : public RTTIBase {
public:
    virtual undefined4 getType(void);
    virtual ~RTTIDerivedA();
};

/* RTTIDerivedB class */
class RTTIDerivedB : public RTTIBase {
public:
    virtual undefined4 getType(void);
    virtual ~RTTIDerivedB();
};

/* LifecycleClass for constructor test */
class LifecycleClass {
public:
    static int instance_count;
};

/* Container class template - int specialization */
class Container_int {
public:
    int data[10];
    int size;
    Container_int();
    void push(int value);
    int get(int index) const;
    int getSize() const;
};

/* Container class template - double specialization */
class Container_double {
public:
    double data[10];
    int size;
    Container_double();
    void push(double value);
    long double get(int index) const;
    int getSize() const;
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 000112d0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011303 to 00011307 has its CatchHandler @ 00011308 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 000113c2 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000113d5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
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
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_30 [31];
 undefined1 local_11;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(local_30,"Test",0x1f);
 local_11 = 0;
 sVar1 = strlen(local_30);
 iVar2 = sVar1 + 0x125c;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_constructor @ 000115f1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 0001160d */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1, int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0001161f. Too many branches */
 /* WARNING: Treating indirect jump as call */
 int (*virtual_func_ptr)(Base*, int) = (int (*)(Base*, int))(**(int **)param_1);
 virtual_func_ptr(param_1, param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00011621 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined **local_1c;
 undefined **local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &PTR_virtual_func_00015c58;
 local_18 = &PTR_virtual_func_00015c70;
 local_14 = 3;
 iVar1 = call_virtual_func((Base *)&local_1c,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 iVar2 = iVar1 + 0x15 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 0001168f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_operator_overload @ 00011699 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 000116a3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max<int>(3,7);
 dVar2 = template_max<double>(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap<int>(&local_18,&local_14);
 iVar1 = (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00011735 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_3c [10];
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 1;
 local_3c[0] = 10;
 Container_int::push(local_3c,0x14);
 Container_int::push(local_3c,0x1e);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c[0];
 }
 iVar1 = local_14 + 3 + iVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: test_cpp_lambda @ 00011797 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_rtti @ 000117a1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x00011836) */
/* WARNING: Removing unreachable block (ram,0x0001183b) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

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
 ppuVar8 = &RTTIBase::typeinfo;
 iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0,&RTTIBase::typeinfo);
 if (iVar4 != 0) {
 iVar7 = uVar6 + 0x78;
 }
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
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined4 local_2c;
 undefined4 *local_28;
 undefined4 *local_24;
 int local_20;
 
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = operator_new(4);
 local_2c = 0;
 *local_28 = 200;
 /* try { // try from 00011918 to 0001191c has its CatchHandler @ 0001196e */
 local_24 = operator_new__(0x14);
 *local_24 = 1;
 local_24[1] = 2;
 local_24[2] = 3;
 local_24[3] = 4;
 local_24[4] = 5;
 std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
 ((unique_ptr<int[],std::default_delete<int[]>> *)&local_24);
 std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
 ((unique_ptr<int,std::default_delete<int>> *)&local_28);
 std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
 ((unique_ptr<int,std::default_delete<int>> *)&local_2c);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = __stack_chk_fail_local();
 /* catch() { ... } // from try @ 00011918 with catch @ 0001196e */
 std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
 ((unique_ptr<int,std::default_delete<int>> *)&local_28);
 std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
 ((unique_ptr<int,std::default_delete<int>> *)&local_2c);
 /* WARNING: Subroutine does not return */
 _Unwind_Resume(uVar1);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 0001199d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined **local_38 [2];
 undefined **local_30;
 undefined **local_28;
 undefined4 local_24;
 int local_20;
 
 local_38[0] = &PTR_func_00015d88;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = &PTR_func_00015dbc;
 local_30 = &PTR_func_00015da0;
 local_24 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_28);
 local_24 = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&local_28);
 iVar2 = iVar2 + iVar1;
 DiamondDerived::~DiamondDerived((DiamondDerived *)local_38);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: test_cpp_oo_features @ 00011a22 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 undefined4 extraout_ECX;
 undefined4 extraout_ECX_00;
 undefined8 uVar2;
 
 puts(&DAT_0001301a);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001303e,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001305c,uVar1);
 uVar2 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00013078,uVar2);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00013094,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000130b0,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_000130cd,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000130e9,uVar1,extraout_ECX);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00013105,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_00013121,uVar1);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_0001313d,uVar2);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001315a,uVar1,extraout_ECX_00);
 uVar2 = test_cpp_rtti();
 __printf_chk(1,&DAT_00013177,uVar2);
 return;
}



/* Function: virtual_func @ 00011b66 */

/* Base::virtual_func(int) */

int Base::virtual_func(int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011b74 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

undefined * Base::getName(void)

{
 return &DAT_00013008;
}



/* Function: ~Base @ 00011b8a */

/* Base::~Base() */

Base::~Base()
{
}



/* Function: virtual_func @ 00011b90 */

/* Derived::virtual_func(int) */

int Derived::virtual_func(int param_1)

{
 return param_1 * this->member;
}



/* Function: getName @ 00011ba4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011bba */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011bc4 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011bce */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011bd8 */

/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 00011be2 */

/* VirtualBase::~VirtualBase() */

VirtualBase::~VirtualBase()
{
 return;
}



/* Function: func @ 00011be8 */

/* MiddleA::func() */

int MiddleA::func()

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011c02 */

/* virtual thunk to MiddleA::func() */

int MiddleA::func()

{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: func @ 00011c16 */

/* MiddleB::func() */

int MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00011c30 */

/* virtual thunk to MiddleB::func() */

int MiddleB::func(MiddleB *this)

{
 MiddleB::func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: func @ 00011c44 */

/* DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011c5e */

/* virtual thunk to DiamondDerived::func() */

void DiamondDerived::func(DiamondDerived *this)

{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}



/* Function: func @ 00011c71 */

/* non-virtual thunk to DiamondDerived::func() */

void DiamondDerived::func(DiamondDerived *this)

{
 func(this + -8);
 return;
}



/* Function: ~MiddleA @ 00011c7c */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* MiddleA::~MiddleA() */

MiddleA::~MiddleA()

{
 *(undefined ***)this = &PTR_func_00015c94;
 *(undefined ***)(this + 8) = &PTR_func_00015cb0;
 return;
}



/* Function: ~MiddleA @ 00011ca1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleA::~MiddleA() */

MiddleA::~MiddleA()

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)this + -0x10);
 *(undefined ***)(this + iVar1) = &PTR_func_00015c94;
 *(undefined ***)(this + iVar1 + 8) = &PTR_func_00015cb0;
 return;
}



/* MiddleB::~MiddleB() */

MiddleB::~MiddleB()

{
 *(undefined ***)this = &PTR_func_00015cd0;
 *(undefined ***)(this + 8) = &PTR_func_00015cec;
 return;
}



/* Function: ~MiddleB @ 00011cf1 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB::~MiddleB()

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)this + -0x10);
 *(undefined ***)(this + iVar1) = &PTR_func_00015cd0;
 *(undefined ***)(this + iVar1 + 8) = &PTR_func_00015cec;
 return;
}



/* Function: getType @ 00011d1c */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 00011d26 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011d30 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB::~RTTIDerivedB()

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011d36 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA::~RTTIDerivedA()

{
 return;
}



/* Function: ~MultiDerived @ 00011d3c */

/* MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived()

{
 return;
}



/* Function: ~MultiDerived @ 00011d41 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived()

{
 return;
}



/* Function: ~Derived @ 00011d46 */

/* Derived::~Derived() */

void Derived::~Derived()

{
 return;
}



/* Function: ~Base @ 00011d4c */

/* Base::~Base() */

void Base::~Base()

{
 operator_delete(this,4);
 return;
}



/* Function: ~Derived @ 00011d74 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void Derived::~Derived()

{
 operator_delete(this,8);
 return;
}



/* Function: ~MultiDerived @ 00011d9c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived()

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011dc4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived()

{
 ~MultiDerived(this + -8);
 return;
}



/* Function: ~VirtualBase @ 00011dd0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* VirtualBase::~VirtualBase() */

void VirtualBase::~VirtualBase()

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00011df8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB::~RTTIDerivedB()

{
 operator_delete(this,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA::~RTTIDerivedA()

{
 operator_delete(this,4);
 return;
}



/* Function: ~MiddleA @ 00011e48 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MiddleA::~MiddleA() */

MiddleA::~MiddleA()

{
 *(undefined ***)this = &PTR_func_00015c94;
 *(undefined ***)(this + 8) = &PTR_func_00015cb0;
 operator_delete(this,0x10);
 return;
}



/* Function: ~MiddleA @ 00011e7f */

/* virtual thunk to MiddleA::~MiddleA() */

void MiddleA::~MiddleA()

{
 ~MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~MiddleB @ 00011e92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MiddleB::~MiddleB() */

void MiddleB::~MiddleB()

{
 *(undefined ***)this = &PTR_func_00015cd0;
 *(undefined ***)(this + 8) = &PTR_func_00015cec;
 operator_delete(this,0x10);
 return;
}



/* Function: ~MiddleB @ 00011ec9 */

/* virtual thunk to MiddleB::~MiddleB() */

void MiddleB::~MiddleB()

{
 ~MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~MiddleA @ 00011edc */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* MiddleA::~MiddleA() */

void MiddleA::~MiddleA()

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 int in_stack_00000008;
 undefined4 *in_stack_0000000c;
 
 ppuVar1 = &PTR_func_00015c94;
 if (in_stack_00000008 == 0) {
 ppuVar1 = (undefined **)*in_stack_0000000c;
 }
 *(undefined ***)this = ppuVar1;
 if (in_stack_00000008 == 0) {
 ppuVar3 = (undefined **)in_stack_0000000c[1];
 puVar2 = ppuVar1[-3];
 }
 else {
 ppuVar3 = &PTR_func_00015cb0;
 puVar2 = (undefined *)0x8;
 }
 *(undefined ***)(this + (int)puVar2) = ppuVar3;
 return;
}



/* Function: ~MiddleA @ 00011f26 */

/* MiddleA::~MiddleA() */

void MiddleA::~MiddleA()

{
 ~MiddleA(this);
 return;
}



/* Function: ~MiddleB @ 00011f42 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* MiddleB::~MiddleB() */

void MiddleB::~MiddleB()

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 int in_stack_00000008;
 undefined4 *in_stack_0000000c;
 
 ppuVar1 = &PTR_func_00015cd0;
 if (in_stack_00000008 == 0) {
 ppuVar1 = (undefined **)*in_stack_0000000c;
 }
 *(undefined ***)this = ppuVar1;
 if (in_stack_00000008 == 0) {
 ppuVar3 = (undefined **)in_stack_0000000c[1];
 puVar2 = ppuVar1[-3];
 }
 else {
 ppuVar3 = &PTR_func_00015cec;
 puVar2 = (undefined *)0x8;
 }
 *(undefined ***)(this + (int)puVar2) = ppuVar3;
 return;
}



/* Function: ~MiddleB @ 00011f8c */

/* MiddleB::~MiddleB() */

void MiddleB::~MiddleB()

{
 ~MiddleB(this);
 return;
}



/* Function: template_max @ 00011fa8 */

/* int template_max<int>(int, int) */

template<typename T> T template_max(T param_1,T param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011fbc */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00011fd5 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011fee */

/* Container<int>::Container() */

void Container_int::Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00012002 */

/* Container_int::push(int) */

void Container_int::push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00012022 */

/* Container<int>::get(int) const */

undefined4 Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00012040 */

/* Container<int>::getSize() const */

undefined4 Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00012050 */

/* Container<double>::Container() */

void Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00012064 */

/* Container<double>::push(double) */

void Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00012088 */

/* Container<double>::get(int) const */

longdouble Container<double>::get(Container<double> *this,int param_1)

{
 longdouble lVar1;
 
 lVar1 = (longdouble)0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 lVar1 = (longdouble)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}



/* Function: getSize @ 000120a8 */

/* Container<double>::getSize() const */

undefined4 Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~unique_ptr @ 000120b8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(void)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete(*(void **)this,4);
 }
 return;
}



/* Function: ~unique_ptr @ 000120e8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr(void)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 return;
}



/* Function: ~DiamondDerived @ 00012116 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 undefined **ppuVar1;
 undefined *puVar2;
 undefined **ppuVar3;
 int in_stack_00000008;
 undefined4 *in_stack_0000000c;
 
 ppuVar3 = &PTR_func_00015d88;
 if (in_stack_00000008 == 0) {
 ppuVar3 = (undefined **)*in_stack_0000000c;
 }
 *(undefined ***)this = ppuVar3;
 if (in_stack_00000008 == 0) {
 ppuVar1 = (undefined **)in_stack_0000000c[5];
 puVar2 = ppuVar3[-3];
 }
 else {
 ppuVar1 = &PTR_func_00015dbc;
 puVar2 = (undefined *)0x10;
 }
 *(undefined ***)(this + (int)puVar2) = ppuVar1;
 ppuVar3 = &PTR_func_00015da0;
 if (in_stack_00000008 == 0) {
 ppuVar3 = (undefined **)in_stack_0000000c[6];
 }
 *(undefined ***)(this + 8) = ppuVar3;
 MiddleB::~MiddleB((MiddleB *)(this + 8));
 MiddleA::~MiddleA((MiddleA *)this);
 return;
}



/* Function: ~DiamondDerived @ 000121b0 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 ~DiamondDerived(this);
 return;
}



/* Function: ~DiamondDerived @ 000121cb */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 ~DiamondDerived(this + -8);
 return;
}



/* Function: ~DiamondDerived @ 000121d6 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 000121ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 ~DiamondDerived(this);
 operator_delete(this,0x18);
 return;
}



/* Function: ~DiamondDerived @ 0001221e */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 ~DiamondDerived(this + -8);
 return;
}



/* Function: ~DiamondDerived @ 00012229 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}



/* Function: ~DiamondDerived @ 0001223c */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived()

{
 ~DiamondDerived(this);
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
