#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long long ulonglong;
/* ssize_t is defined in system headers, removing duplicate typedef */

/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef undefined1 undefined;

/* Additional types for decompiled code */
typedef void (*code)(void);

/* Helper macro for ARM floating point operations */
#define SUB84(x, y) (y)

/* C++ standard library stubs */
namespace std {
    struct ios_base {
        int dummy;
    };
    
    struct Init {
        int dummy;
    };
    
    extern ios_base __ioinit;
}

/* Stub classes for method definitions */
typedef struct Init Init;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct RTTIBase RTTIBase;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* LifecycleClass definition with static member */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* Template function name mangling fixes */
#define template_max_int template_max_int
#define template_max_double template_max_double
#define template_swap_int template_swap_int

/* Forward declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct MiddleA;
struct MiddleB;

/* Struct definitions for class types */
struct Base {
    void **vtable;  // vptr
};

struct Derived {
    void **vtable;  // vptr
    int member;     // additional member
};

struct MultiDerived {
    Base *base1;
    void **vtable2;
};

struct DiamondDerived {
    void **vtable;  // 4 bytes
};

struct MiddleA {
    void **vtable;
};

struct MiddleB {
    void **vtable;
};

struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* Function prototypes */
void test_cpp_oo_features(void);

/* RTTI type_info structure definition (standard C++ layout) */
struct type_info {
    void **vptr;  // Virtual function table pointer for type_info
    const char *name;
};

/* RTTI type info objects */
static type_info typeinfo_RTITIDerivedA = { NULL, "RTTIDerivedA" };
static type_info typeinfo_RTITIDerivedB = { NULL, "RTTIDerivedB" };

/* RTTI type info pointers */
type_info *PTR__RTTIDerivedA_0001162c = &typeinfo_RTITIDerivedA;
type_info *PTR__RTTIDerivedB_00011640 = &typeinfo_RTITIDerivedB;

/* Template function prototypes */
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);

/* Data string declarations from binary */
const char DAT_00011438[] = "Base";
const char DAT_00011450[] = "Testing C++ OO Features\n";
const char DAT_00011474[] = "%d\n";
const char DAT_00011494[] = "%d\n";
const char DAT_000114b0[] = "%d\n";
const char DAT_000114cc[] = "%d\n";
const char DAT_000114e8[] = "%d\n";
const char DAT_00011508[] = "%d\n";
const char DAT_00011524[] = "%d\n";
const char DAT_00011540[] = "%d\n";
const char DAT_0001155c[] = "%d\n";
const char DAT_00011578[] = "%d\n";
const char DAT_00011598[] = "%d\n";
const char DAT_000115b8[] = "%d\n";

/* Runtime functions */
void __aeabi_atexit(void *object, void (*dtor)(void *), void *dso_handle);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception, void *type, void *dest);
void *operator_new(size_t size);
void *operator_delete(void *ptr, size_t size);
void *__aeabi_d2iz(double d);
int __aeabi_dcmpgt(double a_hi, double a_lo, double b_hi);

/* Implementations of runtime functions */
void *__cxa_allocate_exception(size_t size)
{
    return operator_new(size);
}

void __cxa_throw(void *exception, void *type, void *dest)
{
    /* Simple stub - in real code this would unwind and call terminate */
    for(;;);
}

void *operator_new(size_t size)
{
    extern void *malloc(size_t);
    return malloc(size);
}

void *operator_delete(void *ptr, size_t size)
{
    extern void free(void *);
    free(ptr);
    return NULL;
}

void *__aeabi_d2iz(double d)
{
    union { double d; uint64_t i; } u;
    u.d = d;
    return (void *)(int64_t)(u.i); /* Simple truncation */
}

/* ARM EABI double comparison implementation */
int __aeabi_dcmpgt(double a_hi, double a_lo, double b_hi)
{
    union { double d; uint64_t i; } u;
    
    /* Reconstruct the double from high/low parts */
    /* Note: The parameters are actually just the two doubles to compare */
    /* The naming convention is confusing - these are full doubles, not split parts */
    u.d = a_hi;
    uint64_t a_bits = u.i;
    u.d = a_lo;
    uint64_t b_bits = u.i;
    
    /* Extract sign and exponent for comparison */
    uint64_t a_sign = a_bits & 0x8000000000000000ULL;
    uint64_t b_sign = b_bits & 0x8000000000000000ULL;
    
    uint64_t a_exp = a_bits & 0x7FF0000000000000ULL;
    uint64_t b_exp = b_bits & 0x7FF0000000000000ULL;
    
    /* Handle NaN */
    if (a_exp == 0x7FF0000000000000ULL && (a_bits & 0x000FFFFFFFFFFFFFULL) != 0) return 0;
    if (b_exp == 0x7FF0000000000000ULL && (b_bits & 0x000FFFFFFFFFFFFFULL) != 0) return 0;
    
    /* Different signs */
    if (a_sign != b_sign) {
        return (a_sign == 0) ? 1 : 0;  /* Positive > Negative */
    }
    
    /* Same sign - compare bits directly (works for IEEE 754) */
    if (a_sign == 0) {
        /* Both positive - direct comparison */
        return (a_bits > b_bits) ? 1 : 0;
    } else {
        /* Both negative - reverse comparison */
        return (a_bits < b_bits) ? 1 : 0;
    }
}

/* Type info comparison implementation */
int std_type_info_operator_eq(struct type_info *a, struct type_info *b)
{
    return a == b;
}

/* Dynamic cast stub implementation */
void *__dynamic_cast(void *src, const struct type_info *src_type, const struct type_info *dst_type)
{
    return NULL;
}

/* RTTI Base class */
struct RTTIBase {
    static type_info *typeinfo;
};

/* RTTI Derived class definitions */
struct RTTIDerivedA {
    static type_info *typeinfo;
};

struct RTTIDerivedB {
    static type_info *typeinfo;
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_0001092c @ 0001092c */

void __stack_chk_fail(void);

void FUN_0001092c(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,0,0);
}



/* Function: main @ 00010b18 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 /* std::ios_base::Init::Init((Init *)&std::__ioinit); */
 /* __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle); */
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *_this,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)_this)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 undefined8 uVar2;
 int iStack_1c;
 int iStack_18;
 int local_14;
 
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 template_max_double(extraout_d0,extraout_d1);
 iStack_1c = 10;
 iStack_18 = 0x14;
 template_swap_int(&iStack_1c,&iStack_18);
 uVar2 = (undefined8)__aeabi_d2iz(extraout_d0);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00010db4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 struct type_info *type_info_ptr;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001162c;
 piVar2 = (int *)operator_new(4);
 type_info_ptr = *(struct type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011640;
 iVar3 = std_type_info_operator_eq(type_info_ptr,(struct type_info *)0);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_eq
 (*(struct type_info **)(*piVar2 + -4),(struct type_info *)0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = __dynamic_cast(piVar1,RTTIBase::typeinfo,RTTIDerivedA::typeinfo) != NULL;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = __dynamic_cast(piVar2,RTTIBase::typeinfo,RTTIDerivedB::typeinfo) != NULL;
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ec8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 char acStack_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 puts(DAT_00011450);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 __printf_chk(1,DAT_00011474,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 __printf_chk(1,DAT_00011494,uVar2);
 __printf_chk(1,DAT_000114b0,0x2a);
 __printf_chk(1,DAT_000114cc,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000114e8,uVar2);
 __printf_chk(1,DAT_00011508,0x16);
 test_cpp_template_func();
 uVar2 = 0;
 __printf_chk(1,DAT_00011524,0);
 __printf_chk(1,DAT_00011540,0x10);
 __printf_chk(1,DAT_0001155c,0x55);
 uVar2 = 0;
 test_cpp_exception();
 __printf_chk(1,DAT_00011578,uVar2);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00011598,uVar2);
 uVar2 = test_cpp_rtti();
 if (local_c == 0) {
 __printf_chk(1,DAT_000115b8,uVar2);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 00011048 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *_this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011050 */

/* Base::getName() const */

const char * Base_getName(const Base *_this)

{
 return DAT_00011438;
}



/* Function: ~Base @ 0001105c */

/* Base::~Base() */

Base * Base_destructor(Base *_this)

{
 return _this;
}



/* Function: virtual_func @ 00011060 */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *_this,int param_1)

{
 return param_1 * *(int *)(_this + 4);
}



/* Function: getName @ 0001106c */

/* Derived::getName() const */

char * Derived_getName(Derived *_this)

{
 return "Derived";
}



/* Function: funcA @ 00011078 */

/* MultiDerived::funcA() */

 undefined4 MultiDerived_funcA(MultiDerived *_this)

{
 return 0x1e;
}



/* Function: funcB @ 00011080 */

/* MultiDerived::funcB() */

 undefined4 MultiDerived_funcB(MultiDerived *_this)

{
 return 0x28;
}



/* Function: funcB @ 00011088 */

/* non-virtual thunk to MultiDerived::funcB() */

 undefined4 MultiDerived_funcB_nonvirtual_thunk(MultiDerived *_this)

{
 return 0x28;
}



/* Function: func @ 00011090 */

/* MiddleA::func() */

 int MiddleA_func(MiddleA *_this)

{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 0x96;
}



/* Function: func @ 000110a8 */

/* virtual thunk to MiddleA::func() */

 int MiddleA_func_virtual_thunk(MiddleA *_this)

{
 return *(int *)(_this + *(int *)(*(int *)(_this + *(int *)(*(int *)_this + -0xc)) + -0xc) +
 *(int *)(*(int *)_this + -0xc) + 4) + 0x96;
}



/* Function: func @ 000110cc */

/* MiddleB::func() */

 int MiddleB_func(MiddleB *_this)

{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 200;
}



/* Function: func @ 000110e4 */

/* virtual thunk to MiddleB::func() */

 int MiddleB_func_virtual_thunk(MiddleB *_this)

{
 return *(int *)(_this + *(int *)(*(int *)(_this + *(int *)(*(int *)_this + -0xc)) + -0xc) +
 *(int *)(*(int *)_this + -0xc) + 4) + 200;
}



/* Function: func @ 00011108 */

/* DiamondDerived::func() */

 int DiamondDerived_func(DiamondDerived *_this)

{
 return *(int *)(_this + *(int *)(*(int *)_this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011120 */

/* virtual thunk to DiamondDerived::func() */

 int DiamondDerived_func_virtual_thunk(DiamondDerived *_this)

{
 return *(int *)(_this + *(int *)(*(int *)(_this + *(int *)(*(int *)_this + -0xc)) + -0xc) +
 *(int *)(*(int *)_this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011144 */

/* non-virtual thunk to DiamondDerived::func() */

 int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *_this)

{
 return *(int *)(_this + *(int *)(*(int *)(_this + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 0001115c */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType(RTTIDerivedA *_this)

{
 return 1;
}



/* Function: getType @ 00011164 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType(RTTIDerivedB *_this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 0001116c */

/* RTTIDerivedB::~RTTIDerivedB() */

 RTTIDerivedB * RTTIDerivedB_destructor(RTTIDerivedB *_this)

{
 return _this;
}



/* Function: ~RTTIDerivedA @ 00011170 */

/* RTTIDerivedA::~RTTIDerivedA() */

 RTTIDerivedA * RTTIDerivedA_destructor(RTTIDerivedA *_this)

{
 return _this;
}



/* Function: ~DiamondDerived @ 00011174 */

/* DiamondDerived::~DiamondDerived() */

 DiamondDerived * DiamondDerived_destructor(DiamondDerived *_this)

{
 return _this;
}



/* Function: ~DiamondDerived @ 00011178 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

 DiamondDerived * DiamondDerived_destructor_virtual_thunk(DiamondDerived *_this)

{
 return _this + *(int *)(*(int *)_this + -0x10);
}



/* Function: ~DiamondDerived @ 00011188 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

 DiamondDerived * DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *_this)

{
 return _this + -8;
}



/* Function: ~MultiDerived @ 00011190 */

/* MultiDerived::~MultiDerived() */

 MultiDerived * MultiDerived_destructor(MultiDerived *_this)

{
 return _this;
}



/* Function: ~MultiDerived @ 00011194 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

 MultiDerived * MultiDerived_destructor_nonvirtual_thunk(MultiDerived *_this)

{
 return _this + -8;
}



/* Function: ~Derived @ 0001119c */

/* Derived::~Derived() */

Derived * Derived_destructor(Derived *_this)

{
 return _this;
}



/* Function: ~Base @ 000111a0 */

/* Base::~Base() */

Base * Base_deleting_destructor(Base *_this)

{
 operator_delete(_this,4);
 return _this;
}



/* Function: ~Derived @ 000111b8 */

/* Derived::~Derived() */

Derived * Derived_deleting_destructor(Derived *_this)

{
 operator_delete(_this,8);
 return _this;
}



/* Function: ~MultiDerived @ 000111d0 */

/* MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_deleting_destructor(MultiDerived *_this)

{
 operator_delete(_this,0x10);
 return _this;
}



/* Function: ~MultiDerived @ 000111e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_deleting_destructor_nonvirtual_thunk(MultiDerived *_this)

{
 operator_delete(_this + -8,0x10);
 return _this + -8;
}



/* Function: ~RTTIDerivedB @ 00011204 */

/* RTTIDerivedB::~RTTIDerivedB() */

 RTTIDerivedB * RTTIDerivedB_deleting_destructor(RTTIDerivedB *_this)

{
 operator_delete(_this,4);
 return _this;
}



/* Function: ~RTTIDerivedA @ 0001121c */

/* RTTIDerivedA::~RTTIDerivedA() */

 RTTIDerivedA * RTTIDerivedA_deleting_destructor(RTTIDerivedA *_this)

{
 operator_delete(_this,4);
 return _this;
}



/* Function: ~DiamondDerived @ 00011234 */

/* DiamondDerived::~DiamondDerived() */

 DiamondDerived * DiamondDerived_deleting_destructor(DiamondDerived *_this)

{
 operator_delete(_this,0x18);
 return _this;
}



/* Function: ~DiamondDerived @ 0001124c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

 DiamondDerived * DiamondDerived_deleting_destructor_virtual_thunk(DiamondDerived *_this)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)_this + -0x10);
 operator_delete(_this + iVar1,0x18);
 return _this + iVar1;
}



/* Function: ~DiamondDerived @ 00011270 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

 DiamondDerived * DiamondDerived_deleting_destructor_nonvirtual_thunk(DiamondDerived *_this)

{
 operator_delete(_this + -8,0x18);
 return _this + -8;
}



/* Function: template_max<int> @ 0001128c */

/* int template_max<int>(int, int) */

 int template_max_int(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011298 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000112ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

 double template_max_double(double param_1,double param_2)

{
 int cmp_result;
 cmp_result = __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
 if (cmp_result != 0) {
 return param_1;
 }
 return param_2;
}



/* Function: template_swap<int> @ 000112c8 */

/* void template_swap<int>(int&, int&) */

 void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 000112dc */

/* Container<int>::Container() */

 void Container_int_Constructor(Container_int *_this)

{
 *(undefined4 *)(_this + 0x28) = 0;
 return;
}



/* Function: push @ 000112e8 */

/* Container<int>::push(int) */

 void Container_int_push(Container_int *_this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(_this + 0x28);
 if (iVar1 < 10) {
 *(int *)(_this + 0x28) = iVar1 + 1;
 *(int *)(_this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011300 */

/* Container<int>::get(int) const */

 undefined4 Container_int_get(Container_int *_this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(_this + 0x28))) {
 return *(undefined4 *)(_this + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00011324 */

/* Container<int>::getSize() const */

 undefined4 Container_int_getSize(Container_int *_this)

{
 return *(undefined4 *)(_this + 0x28);
}



/* Function: Container @ 0001132c */

/* Container<double>::Container() */

 void Container_double_Constructor(Container_double *_this)

{
 *(undefined4 *)(_this + 0x50) = 0;
 return;
}



/* Function: push @ 00011338 */

/* Container<double>::push(double) */

 void Container_double_push(Container_double *_this,double param_1)

{
 int iVar1;
 undefined4 *puVar2;
 
 iVar1 = *(int *)(_this + 0x50);
 if (iVar1 < 10) {
 puVar2 = (undefined4 *)(_this + iVar1 * 8);
 *(int *)(_this + 0x50) = iVar1 + 1;
 *puVar2 = *(undefined4 *)&param_1;
 puVar2[1] = *(undefined4 *)((char *)&param_1 + 4);
 }
}



/* Function: get @ 00011368 */

/* Container<double>::get(int) const */

 undefined8 Container_double_get(Container_double *_this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(_this + 0x50))) {
 return *(undefined8 *)(_this + param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 00011394 */

/* Container<double>::getSize() const */

 undefined4 Container_double_getSize(Container_double *_this)

{
 return *(undefined4 *)(_this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
