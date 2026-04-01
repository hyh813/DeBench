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

/* Ghidra decompiler type definitions */
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
#define __thiscall

/* Forward declarations for C++ classes */
struct Base;
typedef struct Base Base;
struct Container_int;
typedef struct Container_int Container_int;
struct Container_double;
typedef struct Container_double Container_double;
struct LifecycleClass;
typedef struct LifecycleClass LifecycleClass;
struct Derived;
typedef struct Derived Derived;
struct MultiDerived;
typedef struct MultiDerived MultiDerived;
struct MiddleA;
typedef struct MiddleA MiddleA;
struct MiddleB;
typedef struct MiddleB MiddleB;
struct DiamondDerived;
typedef struct DiamondDerived DiamondDerived;
struct RTTIDerivedA;
typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedB;
typedef struct RTTIDerivedB RTTIDerivedB;
extern int LifecycleClass_instance_count;

/* Base, Derived, MultiDerived, MiddleA, MiddleB, DiamondDerived class definitions */
struct Base {
    void *vptr;
};

struct Derived {
    void *vptr;
    int multiplier;
};

struct MultiDerived {
    void *vptr1;
    void *vptr2;
    char data[1];
};

struct MiddleA {
    void *vptr;
    char data[1];
};

struct MiddleB {
    void *vptr;
    char data[1];
};

struct DiamondDerived {
    void *vptr;
    char data[1];
};

struct RTTIDerivedA {
    void *vptr;
};

struct RTTIDerivedB {
    void *vptr;
};

struct LifecycleClass {
    int data;
};

/* Container template class definitions */
struct Container_int {
    int data[10];
    int size;
    char padding[8];
};

struct Container_double {
    double data[10];
    int size;
    char padding[12];
};

/* Function pointer type definitions */
typedef void (*code)(void);
typedef int (*virtual_func_type)(Base *, int);

/* C++ runtime function declarations */
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, const void *, void (*)(void *));
void __cxa_atexit(void (*)(void *), void *, void *);
void __cxa_finalize(void *);
void *__dynamic_cast(void *, const void *, const void *, ptrdiff_t);
void *operator_new(size_t);
void operator_delete(void *, size_t);

/* Standard library function declarations */
int puts(const char *);
int __printf_chk(int, const char *, ...);
char *strncpy(char *, const char *, size_t);
size_t strlen(const char *);
int strcmp(const char *, const char *);

/* Other function declarations */
void test_cpp_oo_features(void);
void deregister_tm_clones(void);
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int *, int *);
void *malloc(size_t);
void free(void *);

/* Stack protection globals */
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;
void __stack_chk_fail(void);

/* C++ typeinfo declarations */
struct std_ios_base_Init {
    void (*Init)(struct std_ios_base_Init *);
    void (*_Init)(struct std_ios_base_Init *);
};
extern struct std_ios_base_Init __ioinit;

/* RTTI typeinfo declarations */
extern const struct std__type_info RTTIBase_typeinfo;
extern const struct std__type_info RTTIDerived_typeinfo;
extern const struct std__type_info RTTIDerivedA_typeinfo;
extern const struct std__type_info RTTIDerivedB_typeinfo;
extern const struct std__type_info RTTIMultiDerived_typeinfo;
extern const struct std__type_info RTTIMiddleA_typeinfo;
extern const struct std__type_info RTTIMiddleB_typeinfo;
extern const struct std__type_info RTTIDiamondDerived_typeinfo;
extern const struct std__type_info int_typeinfo;

/* Vtable pointer declarations */
extern const void *PTR__RTTIDerivedA_00112c28[];
extern const void *PTR__RTTIDerivedB_00112c50[];

/* Other globals */
extern char completed_0;
extern void *__dso_handle;

extern const char DAT_00101b10[];
extern const char DAT_00101b38[];
extern const char DAT_00101b58[];
extern const char DAT_00101b78[];
extern const char DAT_00101b98[];
extern const char DAT_00101bb8[];
extern const char DAT_00101bd8[];
extern const char DAT_00101bf8[];
extern const char DAT_00101c18[];
extern const char DAT_00101c38[];
extern const char DAT_00101c58[];
extern const char DAT_00101c78[];
extern const char DAT_00101af8[];
extern const char DAT_00101c98[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100eb0 @ 00100eb0 */

void FUN_00100eb0(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010106c to 0010106f has its CatchHandler @ 00101070 */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: main @ 00101120 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00101140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 __ioinit.Init(&__ioinit);
 __cxa_atexit((void (*)(void *))__ioinit._Init,&__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: deregister_tm_clones @ 00101220 */

void deregister_tm_clones(void)
{
    return;
}

/* Function: register_tm_clones @ 00101228 */

void register_tm_clones(void)
{
    return;
}

/* Function: FUN_0010123c @ 0010123c */

void FUN_0010123c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 001012a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101330 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0010133c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(virtual_func_type *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int local_10;
 int iStack_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int(&local_10,&iStack_c);
 if (local_8 == ___stack_chk_guard) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101450 */

/* WARNING: Removing unreachable block (ram,0x001014f8) */
/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 
 iVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (intptr_t)&PTR__RTTIDerivedA_00112c28;
 plVar4 = (long *)operator_new(8);
 lVar8 = (intptr_t)*plVar3;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 *plVar4 = (intptr_t)&PTR__RTTIDerivedB_00112c50;
 cVar1 = *__s1;
 if ((__s1 != "12RTTIDerivedA") && (iVar7 = 0, cVar1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar2 = iVar7 + 0x78;
 if (lVar5 == 0) {
 iVar2 = iVar7 + 0x14;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar7 = iVar2 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar2;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 ((void (*)(void *))(*(code **)(lVar8 + 8)))(plVar3);
 ((void (*)(void *))(*(code **)(*plVar4 + 8)))(plVar4);
 return iVar7 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 001015b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 size_t sVar2;
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(DAT_00101b10);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar2 = strlen(acStack_2c);
 __printf_chk(1,DAT_00101b38,(int)sVar2 + 0x125c);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_00101b58,uVar1);
 __printf_chk(1,DAT_00101b78,0x2a);
 __printf_chk(1,DAT_00101b98,0x47);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_00101bb8,uVar1);
 __printf_chk(1,DAT_00101bd8,0x16);
 test_cpp_template_func();
 __printf_chk(1,DAT_00101bf8,0);
 __printf_chk(1,DAT_00101c18,0x10);
 __printf_chk(1,DAT_00101c38,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_00101c58,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00101c78,uVar1);
 uVar1 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00101c98);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 00101740 */

/* Base::virtual_func(int) */

int __thiscall Base_virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00101750 */

/* Base::getName() const */

const char * Base_getName(Base *this)

{
 return DAT_00101af8;
}



/* Function: ~Base @ 00101760 */

/* Base::~Base() */

void __thiscall Base_destructor(Base *this)

{
 return;
}



/* Function: virtual_func @ 00101770 */

/* Derived::virtual_func(int) */

int __thiscall Derived_virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 00101780 */

/* Derived::getName() const */

char * Derived_getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00101790 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 001017a0 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 001017b0 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived_funcB_thunk(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 001017c0 */

/* MiddleA::func() */

int __thiscall MiddleA_func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 001017e0 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA_func_thunk(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101810 */

/* MiddleB::func() */

int __thiscall MiddleB_func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101830 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB_func_thunk(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00101860 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived_func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101880 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived_func_thunk(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 001018a4 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived_func_thunk2(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 001018c0 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 001018d0 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 001018e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_destructor(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 001018f0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_destructor(RTTIDerivedA *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101900 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101904 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_thunk(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101910 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor_thunk2(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00101920 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor(MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 00101924 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor_thunk(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00101930 */

/* Derived::~Derived() */

void __thiscall Derived_destructor(Derived *this)

{
 return;
}



/* Function: ~Base @ 00101940 */

/* Base::~Base() */

void __thiscall Base_destructor2(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00101950 */

/* Derived::~Derived() */

void __thiscall Derived_destructor2(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00101960 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor2(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101970 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived_destructor2_thunk(MultiDerived *this)

{
 operator_delete(this + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101980 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB_destructor2(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101990 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA_destructor2(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 001019a0 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor2(DiamondDerived *this)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 001019b0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor2_thunk(DiamondDerived *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 001019c4 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived_destructor2_thunk2(DiamondDerived *this)

{
 operator_delete(this + -0x10,0x30);
 return;
}



/* Function: template_max<int> @ 001019d0 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 001019e0 */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001019f0 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101a10 */

/* Container<int>::Container() */

void __thiscall Container_int__Container(Container_int *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00101a20 */

/* Container<int>::push(int) */

void __thiscall Container_int__push(Container_int *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00101a40 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container_int__get(Container_int *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(undefined4 *)(this + (long)param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101a70 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container_int__getSize(Container_int *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101a80 */

/* Container<double>::Container() */

void __thiscall Container_double__Container(Container_double *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101a90 */

/* Container<double>::push(double) */

void __thiscall Container_double__push(Container_double *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101ab0 */

/* Container<double>::get(int) const */

double __thiscall Container_double__get(Container_double *this,int param_1)

{
 
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(double *)(this + (long)param_1 * 8);
 }
 return 0.0;
}



/* Function: getSize @ 00101ad0 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container_double__getSize(Container_double *this)

{
 return *(undefined4 *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */

/* RTTI type_info structure definition */
struct std__type_info {
    const void *vptr;
    const char *name;
};

/* std::type_info destructor declaration */
void __thiscall std__type_info_destructor(struct std__type_info *this);

/* Typeinfo vtable placeholder */
const void *typeinfo_vtable[] = {
    (const void *)0,  /* offset_to_top */
    (const void *)0,  /* typeinfo pointer */
    (const void *)(void (*)(void))std__type_info_destructor   /* virtual destructor */
};

/* std::type_info destructor */
void __thiscall std__type_info_destructor(struct std__type_info *this)
{
    return;
}

/* Vtable definitions for class hierarchy */
const void *Base_vtable[] = {
    (const void *)0,
    (const void *)&RTTIBase_typeinfo,
    (const void *)(void (*)(void))Base_destructor,
    (const void *)(void (*)(void))Base_destructor2,
    (const void *)(void (*)(void))Base_virtual_func,
    (const void *)(void (*)(void))Base_getName
};

const void *Derived_vtable[] = {
    (const void *)0,
    (const void *)&RTTIDerived_typeinfo,
    (const void *)(void (*)(void))Derived_destructor,
    (const void *)(void (*)(void))Derived_destructor2,
    (const void *)(void (*)(void))Derived_virtual_func,
    (const void *)(void (*)(void))Derived_getName
};

const void *MultiDerived_vtable[] = {
    (const void *)0,
    (const void *)&RTTIMultiDerived_typeinfo,
    (const void *)(void (*)(void))MultiDerived_destructor,
    (const void *)(void (*)(void))MultiDerived_destructor2,
    (const void *)(void (*)(void))MultiDerived_funcA,
    (const void *)(void (*)(void))MultiDerived_funcB
};

const void *MultiDerived_vtable2[] = {
    (const void *)-16,
    (const void *)&RTTIMultiDerived_typeinfo,
    (const void *)(void (*)(void))MultiDerived_destructor_thunk,
    (const void *)(void (*)(void))MultiDerived_destructor2_thunk,
    (const void *)0,
    (const void *)(void (*)(void))MultiDerived_funcB_thunk
};

const void *MiddleA_vtable[] = {
    (const void *)0,
    (const void *)&RTTIMiddleA_typeinfo,
    (const void *)0,
    (const void *)0,
    (const void *)(void (*)(void))MiddleA_func
};

const void *MiddleA_vtable2[] = {
    (const void *)0,
    (const void *)&RTTIMiddleA_typeinfo,
    (const void *)0,
    (const void *)0,
    (const void *)(void (*)(void))MiddleA_func_thunk
};

const void *MiddleB_vtable[] = {
    (const void *)0,
    (const void *)&RTTIMiddleB_typeinfo,
    (const void *)0,
    (const void *)0,
    (const void *)(void (*)(void))MiddleB_func
};

const void *MiddleB_vtable2[] = {
    (const void *)0,
    (const void *)&RTTIMiddleB_typeinfo,
    (const void *)0,
    (const void *)0,
    (const void *)(void (*)(void))MiddleB_func_thunk
};

const void *DiamondDerived_vtable[] = {
    (const void *)0,
    (const void *)&RTTIDiamondDerived_typeinfo,
    (const void *)(void (*)(void))DiamondDerived_destructor,
    (const void *)(void (*)(void))DiamondDerived_destructor2,
    (const void *)(void (*)(void))DiamondDerived_func
};

const void *DiamondDerived_vtable2[] = {
    (const void *)0,
    (const void *)&RTTIDiamondDerived_typeinfo,
    (const void *)(void (*)(void))DiamondDerived_destructor_thunk,
    (const void *)(void (*)(void))DiamondDerived_destructor2_thunk,
    (const void *)(void (*)(void))DiamondDerived_func_thunk
};

const void *DiamondDerived_vtable3[] = {
    (const void *)-16,
    (const void *)&RTTIDiamondDerived_typeinfo,
    (const void *)(void (*)(void))DiamondDerived_destructor_thunk2,
    (const void *)(void (*)(void))DiamondDerived_destructor2_thunk2,
    (const void *)(void (*)(void))DiamondDerived_func_thunk2
};

/* RTTI typeinfo object definitions */
const struct std__type_info RTTIBase_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "4Base"
};

const struct std__type_info RTTIDerived_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "7Derived"
};

const struct std__type_info RTTIMultiDerived_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "12MultiDerived"
};

const struct std__type_info RTTIMiddleA_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "7MiddleA"
};

const struct std__type_info RTTIMiddleB_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "7MiddleB"
};

const struct std__type_info RTTIDiamondDerived_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "14DiamondDerived"
};

const struct std__type_info RTTIDerivedA_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "12RTTIDerivedA"
};

const struct std__type_info RTTIDerivedB_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "12RTTIDerivedB"
};

const struct std__type_info int_typeinfo = {
    (const void **)(uintptr_t)typeinfo_vtable,
    "i"
};

/* std::ios_base initialization object definition */
struct std_ios_base_Init __ioinit = {
    (void (*)(struct std_ios_base_Init *))0,
    (void (*)(struct std_ios_base_Init *))0
};

/* LifecycleClass instance count definition */
int LifecycleClass_instance_count = 0;

/* DSO handle definition for C++ runtime */
void *__dso_handle = (void *)&__dso_handle;

/* Global completion flag definition */
char completed_0 = '\0';

/* Data string constants definitions */
const char DAT_00101b10[] = "Testing C++ Object-Oriented Features\n";
const char DAT_00101b38[] = "String length: %d\n";
const char DAT_00101b58[] = "Constructor test: %d\n";
const char DAT_00101b78[] = "Virtual function: %d\n";
const char DAT_00101b98[] = "Multiple inheritance: %d\n";
const char DAT_00101bb8[] = "Diamond inheritance: %d\n";
const char DAT_00101bd8[] = "Operator overload: %d\n";
const char DAT_00101bf8[] = "Template function: %d\n";
const char DAT_00101c18[] = "Template class: %d\n";
const char DAT_00101c38[] = "Lambda: %d\n";
const char DAT_00101c58[] = "Exception test: %d\n";
const char DAT_00101c78[] = "Smart pointer: %d\n";
const char DAT_00101c98[] = "RTTI test completed\n";
const char DAT_00101af8[] = "Base";

/* Vtable pointer placeholders for RTTI classes */
const void *RTTIDerivedA_vtable[] = {
    (const void *)0,
    (const void *)&RTTIDerivedA_typeinfo,
    (const void *)(uintptr_t)RTTIDerivedA_destructor,
    (const void *)(uintptr_t)RTTIDerivedA_getType
};

const void *RTTIDerivedB_vtable[] = {
    (const void *)0,
    (const void *)&RTTIDerivedB_typeinfo,
    (const void *)(uintptr_t)RTTIDerivedB_destructor,
    (const void *)(uintptr_t)RTTIDerivedB_getType
};

/* Vtable pointer definitions - declared as arrays to match usage */
const void *PTR__RTTIDerivedA_00112c28[4] = {
    (const void *)0,
    (const void *)&RTTIDerivedA_typeinfo,
    (const void *)(void (*)(void))RTTIDerivedA_destructor,
    (const void *)(void (*)(void))RTTIDerivedA_getType
};

const void *PTR__RTTIDerivedB_00112c50[4] = {
    (const void *)0,
    (const void *)&RTTIDerivedB_typeinfo,
    (const void *)(void (*)(void))RTTIDerivedB_destructor,
    (const void *)(void (*)(void))RTTIDerivedB_getType
};
