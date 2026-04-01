/* Auto-injected type definitions by preprocessor */
#include <cstdint>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra types for uninitialized data */
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned int undefined;  /* Generic undefined type */

/* Forward declarations for classes used in the code */
class Base;
class Derived;
class BaseA;
class BaseB;
class MultiDerived;
class DiamondDerived;
class MiddleA;
class MiddleB;
class VirtualBase;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

/* Function pointer types for virtual tables */
typedef int (*_func_int_Base)(Base*, int);
typedef int (*_func_int_BaseA)();
typedef int (*_func_int_BaseB)();
typedef int (*_func_int_MiddleA)(MiddleA*);
typedef int (*_func_int_MiddleB)(MiddleB*);
typedef int (*_func_int_VirtualBase)(VirtualBase*);
typedef int (*code)(void*);
typedef int (*code2)(void*, int);

/* CRT/memory functions */
#include <cstddef>
#include <cstring>
void* operator_new(size_t);
void operator_delete(void*);
void* memset(void* str, int c, size_t n);

/* Virtual function thunks */
void _ZTv0_n12_N14DiamondDerived4funcEv(void);

/* String constants */
static const char DAT_00011c71[] = "Testing C++ OO Features\n";
static const char DAT_00011b0d[] = "String length: %d\n";
static const char DAT_00011b2b[] = "Instance count: %d\n";
static const char DAT_00011b47[] = "Virtual func result: %d\n";
static const char DAT_00011b63[] = "Multiple inheritance: %d\n";
static const char DAT_00011b7f[] = "Diamond inheritance: %d\n";
static const char DAT_00011b9c[] = "Operator overload: %d\n";
static const char DAT_00011bb8[] = "Template func: %d\n";
static const char DAT_00011bd4[] = "Template class: %d\n";
static const char DAT_00011bf0[] = "Lambda: %d\n";
static const char DAT_00011c0c[] = "Exception result: %d\n";
static const char DAT_00011c29[] = "Smart ptr: %d\n";
static const char DAT_00011c46[] = "RTTI result: %d\n";

/* C++ exception handling functions */
void* __cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void* thrown_exception, void* type_info, void* destructor);
void* __cxa_get_exception_ptr(void* exception_object);

/* String functions */
size_t strlen(const char* str);
int strcmp(const char* s1, const char* s2);
int puts(const char* s);
int printf(const char* format, ...);

/* C++ RTTI and casting */
void* __dynamic_cast(void* obj, void* src_typeinfo, void* dst_typeinfo, ptrdiff_t src2dst);

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
static std::ios_base::Init __ioinit;
static void* __dso_handle;  /* CRT handle for dynamic symbol objects */

/* Forward declarations for classes used in the code */
class Base {
public:
    int multiplier;
    int (**_vptr_Base)(Base*, int);
    virtual int virtual_func(int x);
    virtual ~Base();
    char* getName();
};

class Derived : public Base {
public:
    virtual int virtual_func(int x);
    virtual ~Derived();
    char* getName();
};

class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass();
    ~LifecycleClass();
};

class SimpleClass {
public:
    char name[8];
};

class ContainerInt;
class ContainerDouble;

/* Forward declarations for classes used in the code */
class BaseA;
class BaseB;
class MultiDerived;
class DiamondDerived;
class MiddleA;
class MiddleB;
class VirtualBase;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

/* Function pointer types for virtual tables */
typedef int (*_func_int)(Base*, int);

class BaseA {
public:
    int dataA;
    int (**_vptr_BaseA)(BaseA*, int);
    virtual int funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    int dataB;
    int (**_vptr_BaseB)(BaseB*, int);
    virtual int funcB();
    virtual ~BaseB();
};

class MultiDerived : public BaseA, public BaseB {
public:
    BaseA super_BaseA;
    BaseB super_BaseB;
    virtual int funcA();
    virtual int funcB();
    virtual ~MultiDerived();
};

class MiddleA {
public:
    int dataA;
    int (*_vptr_MiddleA)();
    virtual int func();
    virtual ~MiddleA();
};

class MiddleB {
public:
    int dataB;
    int (*_vptr_MiddleB)();
    virtual int func();
    virtual ~MiddleB();
};

class VirtualBase {
public:
    int data;
    virtual int func();
    virtual ~VirtualBase();
};

class DiamondDerived : public VirtualBase, public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

class RTTIBase {
public:
    static void* typeinfo;
    virtual ~RTTIBase();
    virtual int getType();
};

class RTTIDerivedA : public RTTIBase {
public:
    static void* typeinfo;
    virtual ~RTTIDerivedA();
    virtual int getType();
};

class RTTIDerivedB : public RTTIBase {
public:
    static void* typeinfo;
    virtual ~RTTIDerivedB();
    virtual int getType();
};

template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int idx);
    int getSize();
};

/* Virtual function table pointers - these would normally be provided by the linker */
void* PTR_virtual_func_00022cf0;
void* PTR_virtual_func_00022d10;
void* PTR_funcA_00022d34;
void* PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
void* PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
void* PTR_func_00022dbc;
void* PTR__ZThn8_N14DiamondDerived4funcEv_00022dd4;
void* PTR__RTTIBase_00022ed8;
void* PTR__RTTIBase_00022eec;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010cb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [16];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 memset(local_28, 0, sizeof(local_28));
 local_28[0] = 'T';
 local_28[1] = 'e';
 local_28[2] = 's';
 local_28[3] = 't';
 sVar1 = strlen(local_28);
 return (int)(sVar1 + 0x125c);
}



/* Function: test_cpp_constructor @ 00010ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 iVar2 = LifecycleClass::instance_count + 1;
 iVar3 = *(int *)((int)pvVar1 + 8);
 LifecycleClass::instance_count = iVar2;
 operator_delete(pvVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar3 + iVar2;
}



/* Function: call_virtual_func @ 00010f48 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 iVar1 = (*obj->_vptr_Base)(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 void **local_14;
 undefined4 local_10;
 Base local_c;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_c._vptr_Base = (_func_int_Base)&PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = (undefined **)(void**)&PTR_virtual_func_00022d10;
 iVar1 = local_c.virtual_func(5);
 iVar2 = (*(code *)*local_14)((void*)local_14,5);
 return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00010fdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived local_20;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: BaseB * pb@[???] */
 local_20.super_BaseB.dataB = 200;
 local_20.super_BaseA.dataA = 100;
 local_20.super_BaseA._vptr_BaseA = (_func_int **)&PTR_funcA_00022d34;
 local_20.super_BaseB._vptr_BaseB = (_func_int **)&PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
 iVar1 = local_20.super_BaseA.funcA();
 iVar2 = local_20.super_BaseB.funcB();
 return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_r0;
 int iVar1;
 undefined **local_18;
 undefined4 local_14;
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 local_14 = 0x32;
 local_18 = &PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
 _ZTv0_n12_N14DiamondDerived4funcEv();
 local_14 = 100;
 iVar1 = (*(code *)*local_18)(&local_18);
 return iVar1 + extraout_r0;
}



/* Function: test_cpp_operator_overload @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 000110d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 000110e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 000110e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 000110f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 /* Unresolved local var: int e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000111c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 000111cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 uint32_t uVar7;
 bool bVar8;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00022ed8;
 piVar2 = (int *)operator_new(4);
 uVar7 = 0;
 *piVar2 = 0;
 *piVar2 = (int)&PTR__RTTIBase_00022eec;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 0;
 if (iVar3 == 0) {
 uVar7 = 10;
 }
 }
 pcVar4 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (pcVar4 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else {
 bVar8 = false;
 if (*pcVar4 != '*') {
 iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
 bVar8 = iVar3 == 0;
 }
 }
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 (**(code **)(*piVar1 + 4))(piVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
 if (bVar8) {
 uVar7 = uVar7 | 0x14;
 }
 if (iVar3 != 0) {
 uVar7 = uVar7 + 100;
 }
 if (iVar5 != 0) {
 uVar7 = uVar7 + 200;
 }
 return uVar7 + sVar6;
}



/* Function: test_cpp_oo_features @ 0001136c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 undefined **ppuVar1;
 size_t sVar2;
 void *pvVar3;
 int extraout_r0;
 int extraout_r0_00;
 int iVar4;
 int iVar5;
 undefined **local_40;
 undefined **local_3c [4];
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined2 local_20;
 undefined1 local_1e;
 undefined1 local_1d;
 Base local_1c;
 
 puts(&DAT_00011c71);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 local_3c[0] = (undefined **)0x74736554;
 local_3c[1] = (undefined **)0x0;
 local_3c[2] = (undefined **)0x0;
 local_3c[3] = (undefined **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar5 = 0;
 local_1d = 0;
 local_40 = (undefined **)0xa;
 sVar2 = strlen((char *)local_3c);
 printf(&DAT_00011b0d,sVar2 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 pvVar3 = operator_new(0x14);
 iVar4 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((int)pvVar3 + iVar4 * -4) = iVar5;
 iVar5 = iVar5 + 10;
 iVar4 = iVar4 + -1;
 } while (iVar4 != -5);
 iVar4 = LifecycleClass::instance_count + 1;
 iVar5 = *(int *)((int)pvVar3 + 8);
 LifecycleClass::instance_count = iVar4;
 operator_delete(pvVar3);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(&DAT_00011b2b,LifecycleClass::instance_count * 1000 + iVar5 + iVar4);
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_1c._vptr_Base = (_func_int **)&PTR_virtual_func_00022cf0;
 local_3c[0] = (undefined **)0x3;
 local_40 = (undefined **)(void**)&PTR_virtual_func_00022d10;
 iVar4 = local_1c.virtual_func(5);
 iVar5 = (*(code *)*local_40)(&local_40,5);
 printf(&DAT_00011b47,iVar4 + iVar5 + 0x15);
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 local_3c[1] = &PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
 local_3c[2] = (undefined **)0xc8;
 local_3c[0] = (undefined **)0x64;
 local_40 = &PTR_funcA_00022d34;
 _ZThn8_N12MultiDerived5funcBEv();
 printf(&DAT_00011b63,extraout_r0 + 0x1f);
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_3c[3] = &PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
 local_2c = 0x32;
 local_40 = &PTR_func_00022dbc;
 local_3c[1] = &PTR__ZThn8_N14DiamondDerived4funcEv_00022dd4;
 _ZTv0_n12_N14DiamondDerived4funcEv();
 ppuVar1 = local_3c[3];
 *(undefined4 *)((int)local_3c + (int)local_40[-3]) = 100;
 iVar4 = (*(code *)*ppuVar1)(local_3c + 3);
 printf(&DAT_00011b7f,iVar4 + extraout_r0_00);
 printf(&DAT_00011b9c,0x16);
 printf(&DAT_00011bb8,0x27);
 printf(&DAT_00011bd4,0x10);
 printf(&DAT_00011bf0,0x55);
 iVar4 = test_cpp_exception();
 printf(&DAT_00011c0c,iVar4);
 printf(&DAT_00011c29,0x2bf);
 iVar4 = test_cpp_rtti();
 printf(&DAT_00011c46,iVar4);
 return;
}



/* Function: main @ 00011648 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 0001165c */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00011664 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
 return this->multiplier * x;
}



/* Function: ~Base @ 00011670 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
 return;
}



/* Function: ~MultiDerived @ 00011674 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011678 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: template_max<int> @ 0001167c */

int template_max<int>(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00011688 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001169c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max<double>(double a,double b)

{
 __aeabi_dcmpgt(SUB84(a,0),(int)((ulonglong)a >> 0x20),SUB84(b,0));
 return a;
}



/* Function: template_swap<int> @ 000116bc */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 000116d0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 000116dc */

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



/* Function: get @ 000116f4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < this->size) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00011714 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 0001171c */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00011728 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 iVar1 = this->size;
 if (9 < iVar1) {
 return;
 }
 *(undefined4 *)(this->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
 this->size = iVar1 + 1;
 return;
}



/* Function: get @ 0001174c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double in_d0;
 
 if (-1 < idx) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011778 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: getName @ 00011780 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00011790 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 000117a0 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 000117b0 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 000117c0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 000117c8 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 000117d8 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn8_N12MultiDerived5funcBEv @ 000117e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerived5funcBEv(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD1Ev @ 000117e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD0Ev @ 000117ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD0Ev(void)

{
 int in_r0;
 
 operator_delete((void *)(in_r0 + -8));
 return;
}



/* Function: funcA @ 00011800 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 00011808 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 0001180c */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 0001181c */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 00011824 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00011828 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011838 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00011850 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 00011854 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 00011864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleA4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 00011884 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 00011888 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD0Ev(void)

{
 int *in_r0;
 
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 000118a4 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 000118bc */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 000118c0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 000118d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleB4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 000118f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 000118f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD0Ev(void)

{
 int *in_r0;
 
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 00011910 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: ~DiamondDerived @ 00011928 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZThn8_N14DiamondDerived4funcEv @ 00011938 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 00011950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 00011954 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD0Ev(void)

{
 int in_r0;
 
 operator_delete((void *)(in_r0 + -8));
 return;
}



/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 00011968 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 00011988 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0001198c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD0Ev(void)

{
 int *in_r0;
 
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 000119a8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 000119b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 000119b4 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 000119c4 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 000119d4 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 000119dc */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 000119e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 000119f0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
