/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char undefined;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef int (*code)();
typedef unsigned char byte;

/* Forward declarations for classes */
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct MultiDerived;
struct DiamondDerived;
struct LifecycleClass;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
template<typename T> struct Container;

/* Class definitions */

struct Base {
    virtual int virtual_func(int param_1);
    virtual const char* getName();
    virtual ~Base();
};

struct Derived : public Base {
    int multiplier;
    virtual int virtual_func(int param_1) override;
    virtual const char* getName() override;
    virtual ~Derived();
};

struct MiddleA {
    virtual int func();
};

struct MiddleB {
    virtual int func();
};

struct MultiDerived : public Base, public MiddleA, public MiddleB {
    virtual undefined4 funcA();
    virtual undefined4 funcB();
    virtual ~MultiDerived();
};

struct DiamondDerived : public MiddleA, public MiddleB {
    virtual int func() override;
    virtual ~DiamondDerived();
};

struct LifecycleClass {
    static int instance_count;
};

struct RTTIBase {
    static void* typeinfo;
};

struct RTTIDerivedA : public RTTIBase {
    virtual undefined4 getType();
    virtual ~RTTIDerivedA();
};

struct RTTIDerivedB : public RTTIBase {
    virtual undefined4 getType();
    virtual ~RTTIDerivedB();
};

template<typename T>
struct Container {
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int index) const;
    int getSize() const;
};

/* Function declarations */
extern size_t strlen(const char *s);
void __stack_chk_fail_local(void);
void __stack_chk_fail(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O2_no_g
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



/* Function: test_cpp_exception @ 00011270 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 000112a3 to 000112a7 has its CatchHandler @ 000112a8 */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 00011380 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000113a0 */

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




/* Function: __i686.get_pc_thunk.bx @ 0001140c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011410 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011549 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001154d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011560 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x1156c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 builtin_strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 local_30[0x1e] = 0;
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_constructor @ 00011600 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00011620 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0001162e. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00011650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011670 */

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
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int(&local_18,&local_14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_template_class @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011750 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000117df) */
/* WARNING: Removing unreachable block (ram,0x000117e4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 char *__s1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 size_t sVar6;
 uint uVar7;
 
 uVar7 = 10;
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00013e48;
 piVar3 = operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00013e5c;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar4 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar4 == 0) & 10;
 }
 iVar5 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = uVar7 + 0x14;
 if (iVar5 != 0) {
 iVar4 = uVar7 + 0x78;
 }
 iVar5 = __dynamic_cast(piVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar5 != 0) {
 iVar4 = iVar4 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(code **)(iVar1 + 4))(piVar2);
 (**(code **)(*piVar3 + 4))(piVar3);
 return iVar4 + sVar6;
}



/* Function: test_cpp_oo_features @ 00011880 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 undefined4 uStack_8;
 
 uStack_8 = 0x1188a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puts(&DAT_00012018);
 local_30[0x1e] = 0;
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 builtin_strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 __printf_chk(1,&DAT_0001203c,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001205a,uVar2);
 __printf_chk(1,&DAT_00012076,0x2a);
 __printf_chk(1,&DAT_00012092,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000120ae,uVar2);
 __printf_chk(1,&DAT_000120cb,0x16);
 uVar2 = test_cpp_template_func();
 __printf_chk(1,&DAT_000120e7,uVar2);
 __printf_chk(1,&DAT_00012103,0x10);
 __printf_chk(1,&DAT_0001211f,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_0001213b,uVar2);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00012158,uVar2);
 uVar2 = test_cpp_rtti();
 __printf_chk(1,&DAT_00012175,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: virtual_func @ 00011a30 */

/* Base::virtual_func(int) */

int Base::virtual_func(int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011a40 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

undefined * Base::getName(void)

{
 return &DAT_00012008;
}



/* Function: ~Base @ 00011a60 */

/* Base::~Base() */

Base::~Base()

{
 return;
}



/* Function: virtual_func @ 00011a70 */

/* Derived::virtual_func(int) */

int Derived::virtual_func(int param_1)

{
 return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 00011a90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011ab0 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011ac0 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011ad0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011ae0 */

/* MiddleA::func() */

int MiddleA::func()

{
 return *(int *)(this + 4) + 0x96;
}



/* Function: func @ 00011b00 */

/* virtual thunk to MiddleA::func() */

int MiddleA::func()

{
 MiddleA *this = (MiddleA *)((int)this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)((int)this + *(int *)(*(int *)this + -0xc)) + -0xc));
 return *(int *)((int)this + 4) + 0x96;
}



/* Function: func @ 00011b20 */

/* MiddleB::func() */

int MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00011b40 */

/* virtual thunk to MiddleB::func() */

int MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}



/* Function: func @ 00011b60 */

/* DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011b80 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011ba0 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)this + -8 + -0xc + -4) + 0xfa;
}



/* Function: getType @ 00011bc0 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 00011bd0 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011be0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB::~RTTIDerivedB()

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011bf0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA::~RTTIDerivedA()

{
 return;
}



/* Function: ~DiamondDerived @ 00011c00 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived::~DiamondDerived()

{
 return;
}



/* Function: ~DiamondDerived @ 00011c10 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c20 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00011c30 */

/* MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived()

{
 return;
}



/* Function: ~MultiDerived @ 00011c40 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived()

{
 return;
}



/* Function: ~Derived @ 00011c50 */

/* Derived::~Derived() */

Derived::~Derived()

{
 return;
}



/* Function: ~Base @ 00011c60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void Base::~Base()

{
 operator_delete(this,4);
 return;
}



/* Function: ~Derived @ 00011c90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void Derived::~Derived()

{
 operator_delete(this,8);
 return;
}



/* Function: ~MultiDerived @ 00011cc0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void MultiDerived::~MultiDerived()

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00011d20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB::~RTTIDerivedB()

{
 operator_delete(this,4);
 return;
}



/* Function: ~RTTIDerivedA @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA::~RTTIDerivedA()

{
 operator_delete(this,4);
 return;
}



/* Function: ~DiamondDerived @ 00011d80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011db0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + *(int *)(*(int *)this + -0x10),0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011de0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + -8,0x18);
 return;
}



/* Function definitions */

/* Function: template_max_int @ 00011e10 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011e30 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00011e50 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011e70 */

/* Container<int>::Container() */

void Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00011e80 */

/* Container<int>::push(int) */

void Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011ea0 */

/* Container<int>::get(int) const */

undefined4 Container<int>::get(Container<int> *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(undefined4 *)(this + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00011ed0 */

/* Container<int>::getSize() const */

undefined4 Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00011ee0 */

/* Container<double>::Container() */

void Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00011ef0 */

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



/* Function: get @ 00011f20 */

/* Container<double>::get(int) const */

longdouble Container<double>::get(Container<double> *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return (longdouble)*(double *)(this + param_1 * 8);
 }
 return (longdouble)0;
}



/* Function: getSize @ 00011f50 */

/* Container<double>::getSize() const */

undefined4 Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: __x86.get_pc_thunk.ax @ 00011f5c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00011f60 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011f70 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
