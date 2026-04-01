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

/* Forward declarations for all types - must be before any usage */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct RTTIBase;
struct Init;

/* Full typeinfo definition for RTTI - must be before extern declaration */
struct typeinfo {
    virtual ~typeinfo();
};
extern struct typeinfo typeinfo_for_int;

/* Template function forward declarations */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

/* Ghidra type definitions */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long undefined;
typedef void code;
typedef uint64_t ulong;

/* External stack guard variables */
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;

/* Forward struct declarations for all classes */
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct RTTIBase;
struct Init;

/* Forward declaration for typeinfo */
struct typeinfo;

/* Forward declaration for Base */
struct Base;

/* Forward declaration for template functions */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

/* Forward declaration for typeinfo */
struct typeinfo;
/* typeinfo_for_int declaration - will be defined elsewhere */
extern struct typeinfo typeinfo_for_int;

/* Base class definition - must be before use */
struct Base {
    virtual int virtual_func(int);
    virtual ~Base();
};

/* Full typeinfo definition for RTTI */
struct typeinfo {
    virtual ~typeinfo();
};

/* Template function declarations */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

/* Forward declarations for classes */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct LifecycleClass;
struct Init;

/* Template function declarations */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

/* C++ Runtime function declarations */
extern "C" {
void* __cxa_allocate_exception(size_t) __attribute__((__nothrow__, __leaf__));
void __cxa_throw(void*, void*, void*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void* __cxa_begin_catch(void*) __attribute__((__nothrow__, __leaf__));
void __cxa_end_catch() __attribute__((__nothrow__, __leaf__));
int __cxa_atexit(void (*)(void*), void*, void*) __attribute__((__nothrow__, __leaf__));
void __cxa_finalize(void*) __attribute__((__nothrow__, __leaf__));
void __dynamic_cast() __attribute__((__nothrow__, __leaf__));
void* operator_new(unsigned long) __attribute__((__nothrow__, __leaf__));
void operator_delete(void*, unsigned long) __attribute__((__nothrow__, __leaf__));
void* __dso_handle;
}

/* Standard library functions */
extern "C" {
char* strncpy(char*, const char*, size_t);
size_t strlen(const char*);
int strcmp(const char*, const char*);
int puts(const char*);
int printf(const char*, ...);
int __printf_chk(int, const char*, ...);
void __stack_chk_fail();
}

/* Forward function declarations */
void test_cpp_oo_features(void);
int test_cpp_rtti(void);
int test_cpp_exception(void);
int test_cpp_member_func(void);
undefined8 test_cpp_virtual_func(void);
undefined8 test_cpp_multiple_inheritance(void);
undefined8 test_cpp_diamond_inheritance(void);
undefined8 test_cpp_operator_overload(void);
void test_cpp_template_func(void);
undefined8 test_cpp_template_class(void);
undefined8 test_cpp_lambda(void);
undefined8 test_cpp_smart_ptr(void);

/* Class definitions with virtual tables */
struct Base {
    virtual int virtual_func(int);
    virtual ~Base();
};

struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct RTTIBase;
struct Init;

/* Full typeinfo definition for RTTI */
struct typeinfo {
    virtual ~typeinfo();
};
extern struct typeinfo typeinfo_for_int;

/* Template function declarations */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

/* Forward function declarations */
void test_cpp_oo_features(void);
int test_cpp_rtti(void);

/* Class definitions */
struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Base class definition */
struct Base {
    virtual int virtual_func(int);
    virtual ~Base();
};

/* Template function implementations */
template<typename T> T template_max(T a, T b) {
    return (a > b) ? a : b;
}

template<typename T> void template_swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}


/* Function: FUN_00100eb0 @ 00100eb0 */

void FUN_00100eb0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Forward declarations for C++ types and templates */
struct Base;
struct LifecycleClass;
template<typename T> T template_max(T, T);
template<typename T> void template_swap(T*, T*);

/* C++ Runtime function declarations */
extern "C" {
void* __cxa_allocate_exception(size_t) __attribute__((__nothrow__, __leaf__));
void __cxa_throw(void*, void*, void*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void* __cxa_begin_catch(void*);
void __cxa_end_catch();
int __cxa_atexit(void (*)(void*), void*, void*);
void __cxa_finalize(void*);
void __dynamic_cast();
void *operator_new(unsigned long);
void operator_delete(void*, unsigned long);
}

/* C++ Runtime function declarations */
extern "C" {
void* __cxa_allocate_exception(size_t) __attribute__((__nothrow__, __leaf__));
void __cxa_throw(void*, void*, void*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
void* __cxa_begin_catch(void*);
void __cxa_end_catch();
int __cxa_atexit(void (*)(void*), void*, void*);
void __cxa_finalize(void*);
void __dynamic_cast();
void *operator_new(unsigned long);
void operator_delete(void*, unsigned long);
}

/* Forward declarations for C++ types and templates */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct RTTIBase;
struct Init;

/* Template function declarations */
template<typename T> T template_max(T, T);
template<typename T> void template_swap(T*, T*);

/* Full typeinfo definition for RTTI - must be before any usage */
struct typeinfo {
    virtual ~typeinfo();
};
extern struct typeinfo typeinfo_for_int;

/* Forward struct declarations */
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;

/* C++ Runtime function declarations */
extern "C" {
void* __cxa_allocate_exception(size_t) __attribute__((__nothrow__, __leaf__));
void __cxa_throw(void*, void*, void*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
}

/* C++ Runtime function declarations - needed by test_cpp_exception */
extern "C" {
void* __cxa_allocate_exception(size_t) __attribute__((__nothrow__, __leaf__));
void __cxa_throw(void*, void*, void*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
}

/* Forward declaration for typeinfo needed by this function */
struct typeinfo;

/* C++ Runtime function declarations - needed by test_cpp_exception */
extern "C" {
void* __cxa_allocate_exception(size_t) __attribute__((__nothrow__, __leaf__));
void __cxa_throw(void*, void*, void*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
}

/* Forward declaration for typeinfo needed by this function */
struct typeinfo;

/* C++ Runtime function declarations - needed by test_cpp_exception */
extern "C" {
void* __cxa_allocate_exception(size_t) __attribute__((__nothrow__, __leaf__));
void __cxa_throw(void*, void*, void*) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));
}

/* Forward declaration for typeinfo needed by this function */
struct typeinfo;

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
 __cxa_throw(puVar1,(void*)&typeinfo_for_int,(void*)0);
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
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




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
 __stack_chk_fail(sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: test_cpp_constructor @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Forward struct declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct RTTIBase;
struct Init;

/* Template function declarations */
template<typename T> T template_max(T, T);
template<typename T> void template_swap(T*, T*);

/* Forward struct declarations */
struct Base;

/* Forward struct declarations */
struct Base;

/* Function: call_virtual_func @ 00101330 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x0010133c. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
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
 iVar1 = template_max<int>(3,7);
 dVar2 = template_max<double>(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap<int>(&local_10,&iStack_c);
 if (local_8 == ___stack_chk_guard) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)dVar2 + iVar1 + local_10 + iStack_c);
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



/* Forward declarations for test_cpp_rtti */
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct typeinfo;
struct Base;
struct LifecycleClass;
template<typename T> T template_max(T, T);
template<typename T> void template_swap(T*, T*);

/* Function: test_cpp_rtti @ 00101450 */

/* WARNING: Removing unreachable block (ram,0x001014fc) */
/* WARNING: Removing unreachable block (ram,0x00101508) */
/* WARNING: Removing unreachable block (ram,0x00101510) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 char *__s1;
 long lVar7;
 char cVar8;
 
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = operator_new(8);
 lVar7 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
 if (__s1 == "12RTTIDerivedA") {
 cVar8 = '1';
 iVar2 = 0x1e;
 }
 else {
 cVar8 = *__s1;
 if (cVar8 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = 0x14;
 if (iVar1 == 0) {
 iVar2 = 0x1e;
 }
 }
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar1 = iVar2 + 100;
 if (lVar5 == 0) {
 iVar1 = iVar2;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar2 = iVar1 + 200;
 if (lVar5 == 0) {
 iVar2 = iVar1;
 }
 if (cVar8 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(code **)(lVar7 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Forward declarations for test_cpp_oo_features */
struct Base;
struct LifecycleClass;
template<typename T> T template_max(T, T);
template<typename T> void template_swap(T*, T*);

/* Forward declarations for test_cpp_oo_features */
struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct RTTIBase;
struct Init;
struct typeinfo;
template<typename T> T template_max(T, T);
template<typename T> void template_swap(T*, T*);

/* Forward declarations for test_cpp_rtti */
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct typeinfo;
struct Base;
struct LifecycleClass;
template<typename T> T template_max(T, T);
template<typename T> void template_swap(T*, T*);

/* Function: test_cpp_oo_features @ 001015f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t sVar3;
 double dVar4;
 int local_38;
 int aiStack_34 [2];
 char acStack_2c [31];
 undefined1 local_d;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 puts(&DAT_00101ba0);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar3 = strlen(acStack_2c);
 __printf_chk(1,&DAT_00101bc8,(int)sVar3 + 0x125c);
 __printf_chk(1,&DAT_00101be8,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,&DAT_00101c08,0x2a);
 __printf_chk(1,&DAT_00101c28,0x47);
 __printf_chk(1,&DAT_00101c48,0x28a);
 __printf_chk(1,&DAT_00101c68,0x16);
 iVar1 = template_max<int>(3,7);
 dVar4 = template_max<double>(2.5,1.5);
 local_38 = 10;
 aiStack_34[0] = 0x14;
 template_swap<int>(&local_38,aiStack_34);
 __printf_chk(1,&DAT_00101c88,(int)dVar4 + iVar1 + local_38 + aiStack_34[0]);
 __printf_chk(1,&DAT_00101ca8,0x10);
 __printf_chk(1,&DAT_00101cc8,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_00101ce8,uVar2);
 __printf_chk(1,&DAT_00101d08,0x2bf);
 uVar2 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00101d28);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,uVar2,0);
}



/* Function: virtual_func @ 001017d0 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 001017e0 */

/* Base::getName() const */

undefined1 * Base::getName(void)

{
 return &DAT_00101b88;
}



/* Function: ~Base @ 001017f0 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 return;
}



/* Function: virtual_func @ 00101800 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: getName @ 00101810 */

/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00101820 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00101830 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00101840 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00101850 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101870 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 001018a0 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 001018c0 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 001018f0 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101910 */

/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101934 */

/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101950 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 00101960 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00101970 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00101980 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101990 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00101994 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 001019a0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 001019b0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~MultiDerived @ 001019b4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 001019c0 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 return;
}



/* Function: ~Base @ 001019d0 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 001019e0 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 001019f0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00101a00 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this + -0x10,0x20);
 return;
}



/* Function: ~RTTIDerivedB @ 00101a10 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00101a20 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this,8);
 return;
}



/* Function: ~DiamondDerived @ 00101a30 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101a40 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}



/* Function: ~DiamondDerived @ 00101a54 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + -0x10,0x30);
 return;
}



/* Function: template_max<int> @ 00101a60 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00101a70 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 00101a80 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00101aa0 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00101ab0 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00101ad0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(undefined4 *)(this + (long)param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00101b00 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101b10 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101b20 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101b40 */

/* Container<double>::get(int) const */

undefined1 [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 undefined1 auVar1 [16];
 
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 auVar1._0_8_ = *(ulong *)(this + (long)param_1 * 8);
 auVar1._8_8_ = 0;
 return auVar1;
 }
 return ZEXT816(0);
}



/* Function: getSize @ 00101b60 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
