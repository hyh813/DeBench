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
typedef uint32_t undefined4;
typedef uint8_t undefined;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Forward declarations for classes used before definition */
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
struct Container_int;
struct Container_double;

/* Complete struct definitions */
struct Base {
    void *vtable;
};

struct Derived {
    void *vtable;
    int multiplier;
};

struct MiddleA {
    void *vtable;
    int value;
};

struct MiddleB {
    void *vtable;
    int value;
};

struct MultiDerived {
    void *vtable;
    int value_a;
    int value_b;
    struct Base base;
};

struct DiamondDerived {
    void *vtable;
    struct MiddleA middle_a;
    struct MiddleB middle_b;
};

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

struct LifecycleClass {
    int instance_count;
};

struct RTTIBase {
    void *vtable;
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

/* Standard library function declarations */
void __stack_chk_fail_local(void);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception_object, void *type_info, void *destructor);
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *s);
char *puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
void **__cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
int __dynamic_cast(const void *ptr, const void *src_type, const void *dst_type, int vtable_offset);

/* Builtin functions */
char *builtin_strncpy(char *dest, const char *src, size_t n);
int ROUND(double x);
typedef void (*code)();

/* RTTI type info structures */
struct type_info {
    char *name;
};

/* Global variables */
int LifecycleClass_instance_count = 0;

/* Data pointers */
undefined4 PTR_virtual_func_00014cd4;
undefined4 PTR_virtual_func_00014cec;
undefined4 PTR__RTTIDerivedA_00014dd4;
undefined4 PTR__RTTIDerivedB_00014de8;

/* Type info for RTTI */
struct type_info int__typeinfo = { "int" };
struct type_info RTTIBase__typeinfo = { "10RTTIBase" };
struct type_info RTTIDerivedA__typeinfo = { "12RTTIDerivedA" };
struct type_info RTTIDerivedB__typeinfo = { "12RTTIDerivedB" };

/* Reference to type info */
struct type_info *int__typeinfo_ptr = &int__typeinfo;
struct type_info *RTTIBase__typeinfo_ptr = &RTTIBase__typeinfo;
struct type_info *RTTIDerivedA__typeinfo_ptr = &RTTIDerivedA__typeinfo;
struct type_info *RTTIDerivedB__typeinfo_ptr = &RTTIDerivedB__typeinfo;

/* GS_OFFSET canary - used for stack protection checks */
#define in_GS_OFFSET 0




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000112dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000112e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011419 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001141d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Forward declarations for member functions */
/* Base class methods */
int Base__virtual_func(struct Base *self, int param_1);
undefined * Base__getName(struct Base *self);
void Base__destructor(struct Base *self);

/* Derived class methods */
int Derived__virtual_func(struct Derived *self, int param_1);
char * Derived__getName(void);
void Derived__destructor(struct Derived *self);

/* MultiDerived class methods */
undefined4 MultiDerived__funcA(struct MultiDerived *self);
undefined4 MultiDerived__funcB(struct MultiDerived *self);
void MultiDerived__destructor(struct MultiDerived *self);

/* MiddleA class methods */
int MiddleA__func(struct MiddleA *self);

/* MiddleB class methods */
int MiddleB__func(struct MiddleB *self);

/* DiamondDerived class methods */
int DiamondDerived__func(struct DiamondDerived *self);
void DiamondDerived__destructor(struct DiamondDerived *self);

/* RTTIDerivedA class methods */
undefined4 RTTIDerivedA__getType(void);
void RTTIDerivedA__destructor(struct RTTIDerivedA *self);

/* RTTIDerivedB class methods */
undefined4 RTTIDerivedB__getType(void);
void RTTIDerivedB__destructor(struct RTTIDerivedB *self);

/* Container<int> class methods */
void Container_int__Constructor(struct Container_int *self);
void Container_int__push(struct Container_int *self, int param_1);
undefined4 Container_int__get(struct Container_int *self, int param_1);
undefined4 Container_int__getSize(struct Container_int *self);

/* Container<double> class methods */
void Container_double__Constructor(struct Container_double *self);
void Container_double__push(struct Container_double *self, double param_1);
longdouble Container_double__get(struct Container_double *self, int param_1);
undefined4 Container_double__getSize(struct Container_double *self);

/* Template function declarations */
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);

/* Function: test_cpp_member_func @ 00011421 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 
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



/* Function: test_cpp_constructor @ 000114b5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 
 pvVar1 = operator_new__(0x14);
 *(undefined4 *)((int)pvVar1 + 4) = 10;
 *(undefined4 *)((int)pvVar1 + 8) = 0x14;
 *(undefined4 *)((int)pvVar1 + 0xc) = 0x1e;
 *(undefined4 *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete(pvVar1, 0x14);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar2;
}



/* Function: call_virtual_func @ 00011523 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(struct Base *param_1, int param_2)

{
 (*(code *)**(undefined4 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 0001153b */

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
 local_1c = &PTR_virtual_func_00014cd4;
 local_18 = &PTR_virtual_func_00014cec;
 local_14 = 3;
 iVar1 = call_virtual_func((struct Base *)&local_1c, 5);
 iVar2 = call_virtual_func((struct Base *)&local_18, 5);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x15 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_multiple_inheritance @ 000115b1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000115bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 0x14dc0;
 local_14 = 0x32;
 iVar1 = DiamondDerived__func((struct DiamondDerived *)&local_18);
 local_14 = 100;
 iVar2 = DiamondDerived__func((struct DiamondDerived *)&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: test_cpp_operator_overload @ 00011634 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 0001163e */

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



/* Function: test_cpp_template_class @ 000116e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 000116ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 000116f6 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00011729 to 0001172d has its CatchHandler @ 0001172e */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011806 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011810 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Removing unreachable block (ram,0x000118a2) */
/* WARNING: Removing unreachable block (ram,0x000118a7) */
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
 
 piVar2 = operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00014dd4;
 piVar3 = operator_new(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00014de8;
 iVar1 = *piVar2;
 __s1 = *(char **)(*(int *)(iVar1 + -4) + 4);
 uVar7 = 10;
 if ((__s1 != (char *)"12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
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



/* Function: test_cpp_oo_features @ 0001193a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012018);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001203c,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0001205a,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00012076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00012092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000120ae,uVar1);
 __printf_chk(1,&DAT_000120cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000120e7,uVar1);
 __printf_chk(1,&DAT_00012103,0x10);
 __printf_chk(1,&DAT_0001211f,0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_0001213b,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00012158,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00012175,uVar1);
 return;
}



/* Function: main @ 00011a75 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00011a8b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 00011ac8 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *self,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011ad4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

undefined * Base::getName(void)

{
 return &DAT_00012008;
}



/* Function: ~Base @ 00011aea */

/* Base::~Base() */

void __thiscall Base::~Base(struct Base *self)

{
 return;
}



/* Function: virtual_func @ 00011af0 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(struct Derived *this, int param_1)

{
 return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 00011b02 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: MultiDerived__funcA @ 00011b18 */

/* MultiDerived::funcA() */

undefined4 MultiDerived__funcA(struct MultiDerived *self)
{
 return 0x1e;
}



/* Function: funcB @ 00011b22 */

/* MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB(struct MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00011b2c */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 __thiscall MultiDerived::funcB_thunk(struct MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011b36 */

/* MiddleA::func() */

int __thiscall MiddleA__func(struct MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b4d */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA__func__thunk_v(struct MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}



/* Function: func @ 00011b6a */

/* MiddleB::func() */

int __thiscall MiddleB::func(struct MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00011b81 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB__func__thunk_v(struct MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}



/* Function: func @ 00011b9e */

/* DiamondDerived::func() */

int __thiscall DiamondDerived__func(struct DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011bb5 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived__func__thunk_v(struct DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011bd1 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived__func__thunk(struct DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 00011bea */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 00011bf4 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00011bfe */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00011c04 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c0a */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(struct DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c0f */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__dtor_thunk(struct DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011c14 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived__dtor_thunk_v(struct DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00011c1a */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(struct MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00011c1f */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived__dtor_thunk_nonvirt(struct MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00011c24 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 return;
}



/* Function: ~Base @ 00011c2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void __thiscall Base::~Base(Base *self)

{
 operator_delete(this,4);
 return;
}



/* Function: ~Derived @ 00011c4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MultiDerived @ 00011c72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(struct MultiDerived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00011c95 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(struct MultiDerived *this)

{
 operator_delete(this + -8,0x10);
 return;
}



/* Function: ~RTTIDerivedA @ 00011cbc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this,4);
 return;
}



/* Function: ~RTTIDerivedB @ 00011ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this,4);
 return;
}



/* Function: ~DiamondDerived @ 00011d04 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(struct DiamondDerived *this)

{
 operator_delete(this,0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011d27 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(struct DiamondDerived *this)

{
 operator_delete(this + *(int *)(*(int *)this + -0x10),0x18);
 return;
}



/* Function: ~DiamondDerived @ 00011d50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(struct DiamondDerived *this)

{
 operator_delete(this + -8,0x18);
 return;
}



/* Function: template_max_int @ 00011d77 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011d89 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00011d9c */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011db4 */

/* Container<int>::Container() */

void __thiscall Container_int::Container(struct Container_int *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00011dc4 */

/* Container<int>::push(int) */

void __thiscall Container_int::push(struct Container_int *self, int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011de2 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container_int::get(struct Container_int *self, int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
 uVar1 = *(undefined4 *)(self + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00011e02 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container_int__getSize(struct Container_int *self)

{
 return *(undefined4 *)(self + 0x28);
}



/* Function: Container @ 00011e0e */

/* Container<double>::Container() */

void __thiscall Container_double::Container(Container_double *self)

{
 self->size = 0;
 return;
}



/* Function: push @ 00011e1e */

/* Container<double>::push(double) */

void __thiscall Container_double::push(Container_double *self, double param_1)

{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = param_1;
 }
 return;
}



/* Function: get @ 00011e40 */

/* Container<double>::get(int) const */

double __thiscall Container_double::get(Container_double *self, int param_1)

{
 if (param_1 < 0) {
 return 0.0;
 }
 if (self->size <= param_1) {
 return 0.0;
 }
 return self->data[param_1];
}



/* Function: getSize @ 00011e60 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container_double::getSize(Container_double *self)

{
 return self->size;
}



/* Function: __x86.get_pc_thunk.ax @ 00011e6c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00011e70 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 76 */
