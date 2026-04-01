#include <string.h>
#include <stdarg.h>

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
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef unsigned int uint;
typedef void (*code)(void);

/* Forward declarations for C++ classes */
struct Base {
    void *vtable;
};

struct Derived {
    void *vtable;
    int value;
};

struct MultiDerived {
    void *vtable;
    int value;
};

struct MiddleA {
    void *vtable;
    int value;
};

struct MiddleB {
    void *vtable;
    int value;
};

struct DiamondDerived {
    void *vtable;
    int value;
};

struct LifecycleClass;
struct RTTIBase { static void *typeinfo; };
struct RTTIDerivedA { static void *typeinfo; };
struct RTTIDerivedB { static void *typeinfo; };
template<typename T> struct Container {
    char data[sizeof(T) * 10 + sizeof(int)];
};

/* C++ standard library forward declarations */
namespace std {
    struct ios_base {
        struct Init {
            Init() {}
            ~Init() {}
        };
    };
    struct basic_ios;
    template<typename> class basic_ostream;
}



/* C++ memory operators */
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr, size_t size);

/* External declarations for global symbols */
extern undefined8 *PTR_virtual_func_001059a0;
extern undefined8 *PTR_virtual_func_001059d0;
extern int LifecycleClass_instance_count;
extern const char *DAT_00103004;
extern const char *DAT_00103018;
extern const char *DAT_0010303c;
extern const char *DAT_0010305a;
extern const char *DAT_00103076;
extern const char *DAT_00103092;
extern const char *DAT_001030ae;
extern const char *DAT_001030cb;
extern const char *DAT_001030e7;
extern const char *DAT_00103103;
extern const char *DAT_0010311f;
extern const char *DAT_0010313b;
extern const char *DAT_00103158;
extern const char *DAT_00103175;
extern void *PTR__RTTIDerivedA_00105ba0;
extern void *PTR__RTTIDerivedB_00105bc8;
namespace std {
    extern ios_base::Init __ioinit;
}

/* Definitions for string literals and vtable pointers */
const char *DAT_00103004 = "Base";
const char *DAT_00103018 = "Testing C++ member function...";
const char *DAT_0010303c = "Result: %d\n";
const char *DAT_0010305a = "Constructor result: %d\n";
const char *DAT_00103076 = "Virtual function result: %d\n";
const char *DAT_00103092 = "Multiple inheritance result: %d\n";
const char *DAT_001030ae = "Diamond inheritance result: %d\n";
const char *DAT_001030cb = "Operator overload result: %d\n";
const char *DAT_001030e7 = "Template function result: %d\n";
const char *DAT_00103103 = "Template class result: %d\n";
const char *DAT_0010311f = "Lambda result: %d\n";
const char *DAT_0010313b = "Exception handled: %d\n";
const char *DAT_00103158 = "Smart pointer result: %d\n";
const char *DAT_00103175 = "RTTI result: %d\n";

/* Vtable pointers */
undefined8 *PTR_virtual_func_001059a0;
undefined8 *PTR_virtual_func_001059d0;
void *PTR__RTTIDerivedA_00105ba0;
void *PTR__RTTIDerivedB_00105bc8;
int LifecycleClass_instance_count = 0;

/* RTTI typeinfo definitions */
void *RTTIBase::typeinfo = (void *)0x0;
void *RTTIDerivedA::typeinfo = (void *)0x0;
void *RTTIDerivedB::typeinfo = (void *)0x0;

/* Standard IO initialization */
namespace std {
    ios_base::Init __ioinit;
}

/* malloc implementation */
void *malloc(size_t size) {
    /* Simple stub - in a real implementation this would allocate memory */
    (void)size;
    return (void *)0;
}

/* operator_new implementation */
void *operator_new(size_t size) {
    return malloc(size);
}

/* free implementation */
void free(void *ptr) {
    /* Simple stub - in a real implementation this would deallocate memory */
    (void)ptr;
}

/* operator_delete implementation */
void operator_delete(void *ptr, size_t size) {
    (void)size;
    free(ptr);
}

/* Forward declarations for standard library functions */
typedef __builtin_va_list va_list;
extern int printf(const char *format, ...);
extern int vprintf(const char *format, va_list args);
extern int vsprintf(char *str, const char *format, va_list ap);
extern void abort(void);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *));
extern int puts(const char *s);

/* abort implementation */
void abort(void) {
    /* Simple infinite loop for stub */
    while(1) {}
}

/* puts implementation */
int puts(const char *s) {
    return printf("%s\n", s);
}

/* printf implementation */
int printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

/* vprintf implementation */
int vprintf(const char *format, va_list args) {
    /* Stub - minimal implementation */
    return 0;
}

/* __cxa_allocate_exception implementation - stub */
void *__cxa_allocate_exception(size_t size) {
    /* Stub for exception allocation */
    return malloc(size);
}

/* __cxa_throw implementation - stub */
void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *)) {
    /* Stub for exception handling */
    abort();
}

/* __dynamic_cast implementation - stub */
void *__dynamic_cast(void *source_ptr, void *src_type, void *target_type, ptrdiff_t src2dst_offset) {
    /* Stub for dynamic_cast - just return the source pointer */
    (void)src_type;
    (void)target_type;
    (void)src2dst_offset;
    return source_ptr;
}

/* __stack_chk_fail implementation */
void __stack_chk_fail(void) {
    abort();
}

/* __printf_chk implementation */
int __printf_chk(int flag, const char *format, ...) {
    (void)flag;
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

/* __cxa_atexit implementation - stub */
extern "C" int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
    /* Stub for atexit registration */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

/* C++ runtime declarations */
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *));
extern void *__dynamic_cast(void *source_ptr, void *src_type, void *target_type, ptrdiff_t src2dst_offset);
extern int __printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dso_handle;

/* Forward declarations for template and member functions */
int DiamondDerived_func(DiamondDerived *this_ptr);
int template_max_int(int param_1, int param_2);
double template_max_double(double param_1, double param_2);
void template_swap_int(int *param_1, int *param_2);

/* Function declaration */
void __stack_chk_fail(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_gcc_O1_no_g
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




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00102369 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 long in_FS_OFFSET;
 char local_34 [36];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 strncpy(local_34,"Test",5);
 local_34[5] = '\0';
 local_34[6] = '\0';
 local_34[7] = '\0';
 local_34[8] = '\0';
 local_34[9] = '\0';
 local_34[10] = '\0';
 local_34[0xb] = '\0';
 local_34[0xc] = '\0';
 local_34[0xd] = '\0';
 local_34[0xe] = '\0';
 local_34[0xf] = '\0';
 local_34[0x10] = '\0';
 local_34[0x11] = '\0';
 local_34[0x12] = '\0';
 local_34[0x13] = '\0';
 local_34[0x14] = '\0';
 local_34[0x15] = '\0';
 local_34[0x16] = '\0';
 local_34[0x17] = '\0';
 local_34[0x18] = '\0';
 local_34[0x19] = '\0';
 local_34[0x1a] = '\0';
 local_34[0x1b] = '\0';
 local_34[0x1c] = '\0';
 local_34[0x1d] = '\0';
 local_34[0x1e] = 0;
 local_34[0x1f] = 0;
 sVar1 = strlen(local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001023de */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 void *pvVar2;
 
 pvVar2 = operator_new(0x14);
 *(undefined4 *)((long)pvVar2 + 4) = 10;
 *(undefined4 *)((long)pvVar2 + 8) = 0x14;
 *(undefined4 *)((long)pvVar2 + 0xc) = 0x1e;
 *(undefined4 *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete(pvVar2, 0x14);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar1;
}



/* Function: call_virtual_func @ 0010243c */

/* call_virtual_func(Base*, int) */

int call_virtual_func(Base *param_1,int param_2)

{
 return (*(int (*)(Base *,int))**(undefined8 **)param_1)(param_1, param_2);
}



/* Function: test_cpp_virtual_func @ 0010244e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined8 **local_30;
 undefined8 **local_28;
 undefined4 local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = &PTR_virtual_func_001059a0;
 local_28 = &PTR_virtual_func_001059d0;
 local_20 = 3;
 iVar1 = call_virtual_func((Base *)&local_30,5);
 iVar2 = call_virtual_func((Base *)&local_28,5);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + 0x15 + iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_multiple_inheritance @ 001024c6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001024d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 undefined8 local_38;
 undefined4 local_30;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_38 = 0x105b78;
 local_30 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_38);
 local_30 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_38);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_operator_overload @ 0010254c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00102556 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int(&local_18,&local_14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001025e5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 001025ef */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 001025f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 00102620 to 00102624 has its CatchHandler @ 00102625 */
 __cxa_throw(puVar1,0,0);
}



/* Function: test_cpp_smart_ptr @ 001026d1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001026db */

/* WARNING: Removing unreachable block (ram,0x00102769) */
/* WARNING: Removing unreachable block (ram,0x0010276e) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 void *lVar5;
 size_t sVar6;
 uint uVar7;
 
 plVar3 = (long *)(long)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105ba0;
 plVar4 = (long *)(long)operator_new(8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc8;
 lVar1 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (*(undefined8 (**)(void *))(lVar1 + 8))(plVar3);
 (*(undefined8 (**)(void *))(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00102801 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 undefined4 uVar1;
 
 puts(DAT_00103018);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303c,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_0010305a,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00103092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ae,uVar1);
 __printf_chk(1,DAT_001030cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e7,uVar1);
 __printf_chk(1,DAT_00103103,0x10);
 __printf_chk(1,DAT_0010311f,0x55);
 test_cpp_exception();
 uVar1 = 0;
 __printf_chk(1,DAT_0010313b,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103158,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103175,uVar1);
 return;
}



/* Function: main @ 00102970 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00102987 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std::ios_base::Init();
 __cxa_atexit((void (*)(void *))std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}



/* Function: virtual_func @ 001029b4 */

/* Base::virtual_func(int) */

int Base_virtual_func(Base *this_ptr,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001029bc */

/* Base::getName() const */

const char * Base_getName(Base *this_ptr)

{
 return DAT_00103004;
}



/* Function: ~Base @ 001029c8 */

/* Base::~Base() */

void Base_destructor(Base *this_ptr)

{
 return;
}



/* Function: virtual_func @ 001029ce */

/* Derived::virtual_func(int) */

int Derived_virtual_func(Derived *this_ptr,int param_1)

{
 return param_1 * *(int *)(this_ptr + 8);
}



/* Function: getName @ 001029da */

/* Derived::getName() const */

char * Derived_getName(Derived *this_ptr)

{
 return "Derived";
}



/* Function: funcA @ 001029e6 */

/* MultiDerived::funcA() */

undefined8 MultiDerived_funcA(MultiDerived *this_ptr)

{
 return 0x1e;
}



/* Function: funcB @ 001029f0 */

/* MultiDerived::funcB() */

undefined8 MultiDerived_funcB(MultiDerived *this_ptr)

{
 return 0x28;
}



/* Function: funcB @ 001029fa */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 MultiDerived_funcB_nonvirtual_thunk(MultiDerived *this_ptr)

{
  return 0x28;
}



/* Function: func @ 00102a04 */

/* MiddleA::func() */

int MiddleA_func(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a19 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_virtual_thunk(MiddleA *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8) + 0x96;
}



/* Function: func @ 00102a36 */

/* MiddleB::func() */

int MiddleB_func(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}



/* Function: func @ 00102a4b */

/* virtual thunk to MiddleB::func() */

int MiddleB_func_virtual_thunk(MiddleB *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8) + 200;
}



/* Function: func @ 00102a68 */

/* DiamondDerived::func() */

int DiamondDerived_func(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a7d */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_virtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18) +
 *(long *)(*(long *)(this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00102a99 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return *(int *)(this_ptr + *(long *)(*(long *)(this_ptr + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00102ab0 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA_getType(RTTIDerivedA *this_ptr)

{
 return 1;
}



/* Function: getType @ 00102aba */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB_getType(RTTIDerivedB *this_ptr)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102ac4 */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102aca */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ad0 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ad5 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 return;
}



/* Function: ~DiamondDerived @ 00102ada */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_destructor_virtual_thunk(DiamondDerived *this_ptr)

{
  return;
}



/* Function: ~MultiDerived @ 00102ae0 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_destructor(MultiDerived *this_ptr)

{
  return;
}



/* Function: ~MultiDerived @ 00102ae5 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_destructor_nonvirtual_thunk(MultiDerived *this_ptr)

{
  return;
}



/* Function: ~Derived @ 00102aea */

/* Derived::~Derived() */

void Derived_destructor(Derived *this_ptr)

{
  return;
}



/* Function: ~Base @ 00102af0 */

/* Base::~Base() */

void Base_deleting_destructor(Base *this_ptr)

{
  operator_delete(this_ptr,8);
  return;
}



/* Function: ~Derived @ 00102b08 */

/* Derived::~Derived() */

void Derived_deleting_destructor(Derived *this_ptr)

{
 operator_delete(this_ptr,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102b20 */

/* MultiDerived::~MultiDerived() */

void MultiDerived_deleting_destructor(MultiDerived *this_ptr)

{
 operator_delete(this_ptr,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102b37 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void MultiDerived_deleting_destructor_nonvirtual_thunk(MultiDerived *this_ptr)

{
 operator_delete(this_ptr + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedA @ 00102b52 */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_deleting_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~RTTIDerivedB @ 00102b6a */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_deleting_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr,8);
 return;
}



/* Function: ~DiamondDerived @ 00102b82 */

/* DiamondDerived::~DiamondDerived() */

void DiamondDerived_deleting_destructor(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102b99 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_deleting_destructor_virtual_thunk(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr + *(long *)(*(long *)this_ptr + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102bb7 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void DiamondDerived_deleting_destructor_nonvirtual_thunk(DiamondDerived *this_ptr)

{
 operator_delete(this_ptr + -0x10,0x30);
 return;
}



/* Function: template_max<int> @ 00102bd2 */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00102bde */

/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00102be7 */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00102bf4 */

/* Container<int>::Container() */

void Container_int_Container(Container<int> *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x28) = 0;
 return;
}



/* Function: push @ 00102c00 */

/* Container<int>::push(int) */

void Container_int_push(Container<int> *this_ptr,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00102c18 */

/* Container<int>::get(int) const */

undefined4 Container_int_get(Container<int> *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 uVar1 = *(undefined4 *)(this_ptr + (long)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00102c34 */

/* Container<int>::getSize() const */

undefined4 Container_int_getSize(Container<int> *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x28);
}



/* Function: Container @ 00102c3c */

/* Container<double>::Container() */

void Container_double_Container(Container<double> *this_ptr)

{
 *(undefined4 *)(this_ptr + 0x50) = 0;
 return;
}



/* Function: push @ 00102c48 */

/* Container<double>::push(double) */

void Container_double_push(Container<double> *this_ptr,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00102c62 */

/* Container<double>::get(int) const */

undefined8 Container_double_get(Container<double> *this_ptr,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 uVar1 = *(undefined8 *)(this_ptr + (long)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 00102c7e */

/* Container<double>::getSize() const */

undefined4 Container_double_getSize(Container<double> *this_ptr)

{
 return *(undefined4 *)(this_ptr + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
