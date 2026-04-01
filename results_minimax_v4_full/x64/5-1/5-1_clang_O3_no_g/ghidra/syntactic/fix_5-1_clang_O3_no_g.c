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

/* Ghidra type definitions */
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef int (*code)();

/* C++ standard library stubs */
namespace std {
    struct __ioinit;
    namespace ios_base {
        struct Init {
            Init() {}
            ~Init() {}
        };
    }
    extern __ioinit __ioinit;
}
typedef std::ios_base::Init Init;
struct std::__ioinit {};

/* CRT/compiler builtins */
#include <stdio.h>
extern "C" void *__dso_handle;
extern "C" size_t strlen(const char *s);
extern "C" int printf(const char *format, ...);
extern "C" int puts(const char *s);
void *operator new(size_t);
void *operator new[](size_t);
void operator delete(void *ptr);
void operator delete[](void *ptr);
extern "C" int __cxa_atexit(void (*dtor)(void *), void *arg, void *dso);
extern "C" void *__cxa_allocate_exception(size_t size);
extern "C" void __cxa_throw(void *exc, void *typeinfo, void *dest);
extern "C" void *__dynamic_cast(const void *ptr, const void *src_type, const void *dst_type, long offset);

/* LifecycleClass for testing */
struct LifecycleClass {
    static int instance_count;
    LifecycleClass() { instance_count++; }
    ~LifecycleClass() { instance_count--; }
};
int LifecycleClass::instance_count = 0;

/* RTTI typeinfo structures */
struct typeinfo {
    const char *name;
};

typeinfo RTTIBase_typeinfo = {"RTTIBase"};
typeinfo RTTIDerivedA_typeinfo = {"RTTIDerivedA"};
typeinfo RTTIDerivedB_typeinfo = {"RTTIDerivedB"};

/* Base class for virtual function testing */
struct Base {
    virtual ~Base() {}
    virtual void virtual_func() {}
};

/* RTTI classes */
struct RTTIBase {
    virtual ~RTTIBase() {}
    virtual undefined8 getType() const { return 0; }
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA() {}
    virtual undefined8 getType() const { return 1; }
};

struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB() {}
    virtual undefined8 getType() const { return 2; }
};

/* RTTI typeinfo pointers */
typeinfo *PTR__RTTIBase_00103d78 = &RTTIBase_typeinfo;
typeinfo *PTR__RTTIBase_00103da0 = &RTTIDerivedA_typeinfo;

/* String literals referenced in code */
const char DAT_001021d4[] = "Testing C++ OO Features:\n";
const char DAT_0010207d[] = "test_cpp_member_func: %d\n";
const char DAT_0010209b[] = "test_cpp_constructor: %d\n";
const char DAT_001020b7[] = "test_cpp_virtual_func: %d\n";
const char DAT_001020d3[] = "test_cpp_multiple_inheritance: %d\n";
const char DAT_001020ef[] = "test_cpp_diamond_inheritance: %d\n";
const char DAT_0010210c[] = "test_cpp_operator_overload: %d\n";
const char DAT_00102128[] = "test_cpp_template_func: %d\n";
const char DAT_00102144[] = "test_cpp_template_class: %d\n";
const char DAT_00102160[] = "test_cpp_lambda: %d\n";
const char DAT_0010217c[] = "test_cpp_exception: %u\n";
const char DAT_00102199[] = "test_cpp_smart_ptr: %d\n";
const char DAT_001021b6[] = "test_cpp_rtti: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 // Stub function - original code called null pointer
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 // Skip the std::ios_base::Init initialization to avoid complex C++ runtime issues
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 local_24[0x10] = '\0';
 local_24[0x11] = '\0';
 local_24[0x12] = '\0';
 local_24[0x13] = '\0';
 local_24[0x14] = '\0';
 local_24[0x15] = '\0';
 local_24[0x16] = '\0';
 local_24[0x17] = '\0';
 local_24[0x18] = '\0';
 local_24[0x19] = '\0';
 local_24[0x1a] = '\0';
 local_24[0x1b] = '\0';
 local_24[0x1c] = '\0';
 local_24[0x1d] = '\0';
 local_24[0x1e] = '\0';
 __builtin_strncpy(local_24,"Test",5);
 local_24[5] = '\0';
 local_24[6] = '\0';
 local_24[7] = '\0';
 local_24[8] = '\0';
 local_24[9] = '\0';
 local_24[10] = '\0';
 local_24[0xb] = '\0';
 local_24[0xc] = '\0';
 local_24[0xd] = '\0';
 local_24[0xe] = '\0';
 local_24[0xf] = 0;
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x001012a6. Too many branches */
 /* WARNING: Treating indirect jump as call */
 ((void (*)())param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined8 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined8 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined8 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined8 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined8 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined8 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined8 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

/* Fake typeinfo for int */
typeinfo int_typeinfo = {"int"};

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00101335 to 00101348 has its CatchHandler @ 0010134b */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0; /* Never reached but needed for return type */
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined8 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined8 *)operator new(8);
 *(undefined8 *)puVar1 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar2 = (long *)operator new(8);
 *(undefined8 *)plVar2 = (undefined8)&PTR__RTTIBase_00103da0;
 lVar3 = (long)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 lVar3 = (long)__dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator delete(puVar1);
 // Call virtual function through vtable
 {
     undefined8 *vtable = (undefined8 *)*plVar2;
     void (*virt_func)(void *) = (void (*)(void *))vtable[1];
     virt_func((void *)plVar2);
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 undefined8 *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts(&DAT_001021d4);
 local_4c[0x10] = '\0';
 local_4c[0x11] = '\0';
 local_4c[0x12] = '\0';
 local_4c[0x13] = '\0';
 local_4c[0x14] = '\0';
 local_4c[0x15] = '\0';
 local_4c[0x16] = '\0';
 local_4c[0x17] = '\0';
 local_4c[0x18] = '\0';
 local_4c[0x19] = '\0';
 local_4c[0x1a] = '\0';
 local_4c[0x1b] = '\0';
 local_4c[0x1c] = '\0';
 local_4c[0x1d] = '\0';
 local_4c[0x1e] = '\0';
 __builtin_strncpy(local_4c,"Test",5);
 local_4c[5] = '\0';
 local_4c[6] = '\0';
 local_4c[7] = '\0';
 local_4c[8] = '\0';
 local_4c[9] = '\0';
 local_4c[10] = '\0';
 local_4c[0xb] = '\0';
 local_4c[0xc] = '\0';
 local_4c[0xd] = '\0';
 local_4c[0xe] = '\0';
 local_4c[0xf] = 0;
 local_4c[0x1f] = 0;
 sVar2 = strlen(local_4c);
 printf(&DAT_0010207d, (int)sVar2 + 0x125c);
 printf(&DAT_0010209b, LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(&DAT_001020b7, 0x2a);
 printf(&DAT_001020d3, 0x47);
 printf(&DAT_001020ef, 0x28a);
 printf(&DAT_0010210c, 0x16);
 printf(&DAT_00102128, 0x27);
 printf(&DAT_00102144, 0x10);
 printf(&DAT_00102160, 0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_0010217c,uVar1);
 printf(&DAT_00102199,0x2bf);
 puVar3 = (undefined8 *)operator new(8);
 *(undefined8 *)puVar3 = (undefined8)&PTR__RTTIBase_00103d78;
 plVar4 = (long *)operator new(8);
 *(undefined8 *)plVar4 = (undefined8)&PTR__RTTIBase_00103da0;
 lVar5 = __dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 operator delete(puVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 printf(&DAT_001021b6,(ulong)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00101680 */

undefined8 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101690 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}



/* Function: template_max<double> @ 001016a0 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 001016b0 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 001016c0 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 001016d0 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 001016f0 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(undefined4 *)(this + (ulong)(uint)param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize @ 00101710 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00101720 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00101730 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00101750 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(undefined8 *)(this + (ulong)(uint)param_1 * 8);
 }
 return uVar1;
}



/* Function: getSize @ 00101770 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 00101790 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 001017a0 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001017b0 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 001017c0 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
