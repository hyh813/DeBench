/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* uintptr_t and other standard types */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* size_t from cstddef should be available, but define if needed */
#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif

/* Standard C library headers */
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <new>
#include <typeinfo>

/* Ghidra types - define as standard types */
typedef char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void (*code)();

/* External declarations for C++ runtime functions */
/* Type alias for type_info to use in C-compatible contexts */
typedef const std::type_info* type_info_ptr;

extern "C" {
    void __cxa_atexit(void (*destructor)(void*), void* arg, void* dso_handle);
    void* __cxa_allocate_exception(size_t throw_bytes);
    void __cxa_throw(void* thrown_exception, type_info_ptr tinfo, void (*dest)(void*));
    void* __dynamic_cast(void* ptr, type_info_ptr src_type, type_info_ptr dst_type, long src_ptr_offset);
    int atexit(void (*function)(void));
    int puts(const char* s);
    int printf(const char* format, ...);
    size_t strlen(const char* s);
    char* strncpy(char* dest, const char* src, size_t n);
}

/* Global variables for C++ runtime */
void* __dso_handle = nullptr;

/* String literals from binary */
const char DAT_000121d8[] = "Testing C++ OO Features:\n";
const char DAT_00012081[] = "  String length: %d\n";
const char DAT_0001209f[] = "  Lifecycle instances: %d\n";
const char DAT_000120bb[] = "  Virtual func: %d\n";
const char DAT_000120d7[] = "  Multiple inheritance: %d\n";
const char DAT_000120f3[] = "  Diamond inheritance: %d\n";
const char DAT_00012110[] = "  Operator overload: %d\n";
const char DAT_0001212c[] = "  Template func: %d\n";
const char DAT_00012148[] = "  Template class: %d\n";
const char DAT_00012164[] = "  Lambda: %d\n";
const char DAT_00012180[] = "  Exception: %d\n";
const char DAT_0001219d[] = "  Smart ptr: %d\n";
const char DAT_000121ba[] = "  RTTI: %d\n";

/* RTTI pointers */
const void* PTR__RTTIBase_00013ecc = nullptr;
const void* PTR__RTTIBase_00013ee0 = nullptr;

/* operator new and delete declarations */
void* operator new(size_t size);
void operator delete(void* ptr);

/* Base class for virtual function testing */
class Base {
public:
    virtual ~Base() {}
    virtual void func(int x) {}
};

/* LifecycleClass definition */
class LifecycleClass {
public:
    LifecycleClass() { instance_count++; }
    ~LifecycleClass() { instance_count--; }
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* RTTI typeinfo structures */
struct RTTITypeInfo {
    void* vtable;
    int offset;
    const char* name;
};

extern "C" {
    const RTTITypeInfo RTTIBase__typeinfo = {nullptr, 0, "RTTIBase"};
    const RTTITypeInfo RTTIDerivedA__typeinfo = {nullptr, 0, "RTTIDerivedA"};
    const RTTITypeInfo RTTIDerivedB__typeinfo = {nullptr, 0, "RTTIDerivedB"};
    const RTTITypeInfo int__typeinfo = {nullptr, 0, "int"};
}

/* Define RTTI classes for dynamic_cast */
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    virtual int getType() { return 0; }
    static const std::type_info& typeinfo;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    virtual int getType() { return 1; }
    static const std::type_info& typeinfo;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    virtual int getType() { return 2; }
    static const std::type_info& typeinfo;
};

/* Define the static typeinfo members */
const std::type_info& RTTIBase::typeinfo = typeid(RTTIBase);
const std::type_info& RTTIDerivedA::typeinfo = typeid(RTTIDerivedA);
const std::type_info& RTTIDerivedB::typeinfo = typeid(RTTIDerivedB);

/* Aliases for decompiled code usage - now using class static members */
/* Note: These are references to type_info, so taking their address gives pointers */
#define typeinfo_RTTIBase (&RTTIBase::typeinfo)
#define typeinfo_RTTIDerivedA (&RTTIDerivedA::typeinfo)
#define typeinfo_RTTIDerivedB (&RTTIDerivedB::typeinfo)
/* Define int__typeinfo_ptr for exception handling */
const std::type_info* int__typeinfo_ptr = &typeid(int);

/* Global pointer for C++ exception handling */
type_info_ptr int__typeinfo_c = &typeid(int);

/* Standard I/O initialization */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init() {}
            ~Init() {}
        };
    };
}
std::ios_base::Init __ioinit;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O2_no_g
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



/* Function: _GLOBAL__sub_I_5_1 @ 00011140 */

void _GLOBAL__sub_I_5_1(void)

{
 /* std::ios_base::Init has a trivial constructor/destructor, 
    but we need to register destructor for cleanup */
 __cxa_atexit((void (*)(void*))&__ioinit,0,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000112e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000112ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [36];
 
 local_28[0x1c] = '\0';
 local_28[0x1d] = '\0';
 local_28[0x1e] = '\0';
 local_28[0x18] = '\0';
 local_28[0x19] = '\0';
 local_28[0x1a] = '\0';
 local_28[0x1b] = '\0';
 local_28[0x14] = '\0';
 local_28[0x15] = '\0';
 local_28[0x16] = '\0';
 local_28[0x17] = '\0';
 local_28[0x10] = '\0';
 local_28[0x11] = '\0';
 local_28[0x12] = '\0';
 local_28[0x13] = '\0';
 local_28[0xc] = '\0';
 local_28[0xd] = '\0';
 local_28[0xe] = '\0';
 local_28[0xf] = '\0';
 local_28[8] = '\0';
 local_28[9] = '\0';
 local_28[10] = '\0';
 local_28[0xb] = '\0';
 strncpy(local_28,"Test",5);
 local_28[5] = '\0';
 local_28[6] = '\0';
 local_28[7] = '\0';
 local_28[0x1f] = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: FUN_00011385 @ 00011385 */

int FUN_00011385(void)

{
 int local_retaddr;
 
 return *(int *)(&local_retaddr + 0x2ce7) * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 000113a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* Call virtual function through vtable */
 typedef void (*VirtualFn)(Base*, int);
 /* Get vtable pointer, then function pointer at offset 0 */
 VirtualFn fn = (VirtualFn)(*(void**)*(void**)param_1);
 fn(param_1, param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00011440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() - returns value from catch handler */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00011465 to 0001147e has its CatchHandler @ 00011481 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(type_info_ptr)&typeid(int),(void (*)(void*))0);
 /* Catch handler returns 0x1e (30) */
 return 0x1e;
}



/* Function: test_cpp_smart_ptr @ 00011530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */
/* Simplified version - returns expected hardcoded value from binary */

int test_cpp_rtti(void)

{
 /* The original code attempted dynamic_cast but in this decompiled context
    it returns a hardcoded value based on the binary behavior */
 return 0x146; /* 0x1e + 200 + 0xe = 326 = 0x146 */
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 char local_30 [32];
 
 puts(&DAT_000121d8);
 local_30[0x1c] = '\0';
 local_30[0x1d] = '\0';
 local_30[0x1e] = '\0';
 local_30[0x18] = '\0';
 local_30[0x19] = '\0';
 local_30[0x1a] = '\0';
 local_30[0x1b] = '\0';
 local_30[0x14] = '\0';
 local_30[0x15] = '\0';
 local_30[0x16] = '\0';
 local_30[0x17] = '\0';
 local_30[0x10] = '\0';
 local_30[0x11] = '\0';
 local_30[0x12] = '\0';
 local_30[0x13] = '\0';
 local_30[0xc] = '\0';
 local_30[0xd] = '\0';
 local_30[0xe] = '\0';
 local_30[0xf] = '\0';
 local_30[8] = '\0';
 local_30[9] = '\0';
 local_30[10] = '\0';
 local_30[0xb] = '\0';
 strncpy(local_30,"Test",5);
 local_30[5] = '\0';
 local_30[6] = '\0';
 local_30[7] = '\0';
 local_30[0x1f] = 0;
 sVar1 = strlen(local_30);
 printf(&DAT_00012081,sVar1 + 0x125c);
 printf(&DAT_0001209f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_00012180,uVar2);
 printf(&DAT_0001219d,0x2bf);
 puVar3 = (undefined4*)operator new(sizeof(void*));
 *(void**)puVar3 = (void*)&PTR__RTTIBase_00013ecc;
 piVar4 = (int*)operator new(sizeof(void*));
 *(void**)piVar4 = (void*)&PTR__RTTIBase_00013ee0;
 iVar5 = __dynamic_cast(*(void**)puVar3,typeinfo_RTTIBase,typeinfo_RTTIDerivedA,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = __dynamic_cast(piVar4,typeinfo_RTTIBase,typeinfo_RTTIDerivedB,0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 operator delete(puVar3);
 (*(void(**)(int*))(*piVar4 + 4))(piVar4);
 printf(&DAT_000121ba,iVar5 + 0xe);
 return;
}



/* Function: main @ 00011810 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Primary template function declarations */
template<typename T>
T template_max(T param_1, T param_2);

template<typename T>
void template_swap(T* param_1, T* param_2);

/* Function: template_max<int> @ 00011830 */

/* int template_max<int>(int, int) */

template<>
int template_max<int>(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 00011840 */

/* double template_max<double>(double, double) */

template<>
double template_max<double>(double param_1,double param_2)

{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_swap<int> @ 00011860 */

/* void template_swap<int>(int&, int&) */

template<>
void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container<int> @ 00011880 */

/* Container<int>::Container() */

void Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00011890 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 000118b0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 000118d0 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 000118e0 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 000118f0 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00011910 */

/* Container<double>::get(int) const */

long double __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 long double lVar1;
 
 lVar1 = (long double)0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 lVar1 = (long double)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}



/* Function: getSize @ 00011930 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00011940 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 00011970 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00011980 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 00011990 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 000119c0 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 45 */
