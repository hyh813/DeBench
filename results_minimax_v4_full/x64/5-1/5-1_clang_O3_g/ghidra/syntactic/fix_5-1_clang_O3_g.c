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

/* Format strings for printf */
const char* DAT_0010207d = "%d\n";
const char* DAT_0010209b = "%d\n";
const char* DAT_001020b7 = "%d\n";
const char* DAT_001020d3 = "%d\n";
const char* DAT_001020ef = "%d\n";
const char* DAT_0010210c = "%d\n";
const char* DAT_00102128 = "%d\n";
const char* DAT_00102144 = "%d\n";
const char* DAT_00102160 = "%d\n";
const char* DAT_0010217c = "%d\n";
const char* DAT_00102199 = "%d\n";
const char* DAT_001021b6 = "%d\n";

/* Ghidra types */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned int uint;
typedef void (*code)();

/* CRT symbols */
extern void* __dso_handle;

/* Standard library globals */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    static ios_base::Init __ioinit;
}

/* libc functions */
extern "C" {
    int printf(const char* format, ...);
    int puts(const char* s);
    size_t strlen(const char* s);
    void* __cxa_atexit(void (*destructor)(void*), void* arg, void* dso);
    void* __cxa_allocate_exception(size_t size);
    void __cxa_throw(void* thrown_exception, void* typeinfo, void* destructor);
    void* __dynamic_cast(const void* ptr, const void* src_type, const void* dst_type, ptrdiff_t offset);
}

/* Function stubs for operator new/delete */
void* operator new(size_t size);
void operator delete(void* ptr);
void* operator new[](size_t size);
void operator delete[](void* ptr);

/* Forward declaration for Base class - complete definition needed */
class Base {
public:
    virtual ~Base();
    virtual int getType();
    static void* _vptr_Base[];
};

/* Forward declarations for Container template */
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

/* Forward declarations for RTTI classes */
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

/* Typeinfo structures - define in anonymous namespace */
namespace {
    struct typeinfo {
        void* vtable;
        const char* name;
    };
}

/* Forward declarations for typeinfo - use proper struct tag */
namespace typeinfo_RTTIBase { extern ::typeinfo typeinfo; }
namespace typeinfo_RTTIDerivedA { extern ::typeinfo typeinfo; }
namespace typeinfo_RTTIDerivedB { extern ::typeinfo typeinfo; }

/* Forward declaration for LifecycleClass */
class LifecycleClass {
public:
    static int instance_count;
};

/* Define RTTI classes with typeinfo */
class RTTIBase {
public:
    static ::typeinfo typeinfo;
    virtual ~RTTIBase();
    virtual int getType();
};

class RTTIDerivedA : public RTTIBase {
public:
    static ::typeinfo typeinfo;
    virtual ~RTTIDerivedA();
    virtual int getType() override;
};

class RTTIDerivedB : public RTTIBase {
public:
    static ::typeinfo typeinfo;
    virtual ~RTTIDerivedB();
    virtual int getType() override;
};

/* RTTI typeinfo definitions */
namespace typeinfo_RTTIBase {
    ::typeinfo typeinfo = {nullptr, "RTTIBase"};
}

namespace typeinfo_RTTIDerivedA {
    ::typeinfo typeinfo = {nullptr, "RTTIDerivedA"};
}

namespace typeinfo_RTTIDerivedB {
    ::typeinfo typeinfo = {nullptr, "RTTIDerivedB"};
}

namespace typeinfo_int_ {
    ::typeinfo typeinfo = {nullptr, "int"};
}

/* Typeinfo symbols for RTTI - these are vtable pointers */
extern "C" {
    void* PTR__RTTIBase_00103d78;
    void* PTR__RTTIBase_00103da0;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 ((void (*)(void))0x0)();
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

/* Wrapper function for std::ios_base::Init destructor */
void std_ios_base_Init_destructor(void* ptr) {
    ((std::ios_base::Init*)ptr)->~Init();
}

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std::ios_base::Init init;
 __cxa_atexit(std_ios_base_Init_destructor,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 typedef int (*VirtualFn)(Base*);
 iVar1 = ((VirtualFn)obj->_vptr_Base[0])(obj);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???]
 Unresolved local var: Base base@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_16_2_b9b285fb lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00101335 to 00101348 has its CatchHandler @ 0010134b */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&typeinfo_int_::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined8 *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 void* ptr1 = operator new(8);
 *(void**)ptr1 = PTR__RTTIBase_00103d78;
 void* ptr2 = operator new(8);
 *(void**)ptr2 = PTR__RTTIBase_00103da0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 void* derivedA = __dynamic_cast(ptr1,(void*)&RTTIBase::typeinfo,(void*)&RTTIDerivedA::typeinfo,0);
 iVar4 = 0x82;
 if (derivedA == 0) {
 iVar4 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 void* derivedB = __dynamic_cast(ptr2,(void*)&RTTIBase::typeinfo,(void*)&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar4 + 200;
 if (derivedB == 0) {
 iVar5 = iVar4;
 }
 operator delete(ptr1);
 typedef void (*DestructorFn)(void*);
 void* vtable2 = *(void**)ptr2;
 ((DestructorFn)((char*)vtable2 + 8))(ptr2);
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 void* puVar3;
 void* plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts("Testing C++ features\n");
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
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
 printf(DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(DAT_0010209b,(unsigned long)(LifecycleClass::instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_0010217c,(unsigned long)uVar1);
 printf(DAT_00102199,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar3 = operator new(8);
 *(void**)puVar3 = PTR__RTTIBase_00103d78;
 plVar4 = operator new(8);
 *(void**)plVar4 = PTR__RTTIBase_00103da0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = (long)__dynamic_cast(puVar3,(void*)&RTTIBase::typeinfo,(void*)&RTTIDerivedA::typeinfo,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = (long)__dynamic_cast(plVar4,(void*)&RTTIBase::typeinfo,(void*)&RTTIDerivedB::typeinfo,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 operator delete(puVar3);
 typedef void (*DestructorFn)(void*);
 void* vtable = *(void**)plVar4;
 ((DestructorFn)((char*)vtable + 8))(plVar4);
 printf(DAT_001021b6,(unsigned long)(iVar7 + 0xe));
 return;
}



/* Function: main @ 00101680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101690 */

int template_max(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 001016a0 */

double template_max(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 001016b0 */

/* Template declaration needed */
template<typename T>
void template_swap(T* a, T* b);

template<>
void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container<int> @ 001016c0 */
template<>
Container<int>::Container()

{
 this->size = 0;
 return;
}



/* Function: push @ 001016d0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

template<>
void Container<int>::push(int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 001016f0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

template<>
int Container<int>::get(int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
 iVar1 = this->data[(uint)idx];
 }
 return iVar1;
}



/* Function: getSize @ 00101710 */

/* DWARF original prototype: int getSize(Container<int> * this) */

template<>
int Container<int>::getSize()

{
 return this->size;
}



/* Function: Container<double> @ 00101720 */
template<>
Container<double>::Container()

{
 this->size = 0;
 return;
}



/* Function: push @ 00101730 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

template<>
void Container<double>::push(double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00101750 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

template<>
double Container<double>::get(int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data[(uint)idx];
 }
 return dVar1;
}



/* Function: getSize @ 00101770 */

/* DWARF original prototype: int getSize(Container<double> * this) */

template<>
int Container<double>::getSize()

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 00101790 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 001017a0 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIDerivedB @ 001017b0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator delete(this);
 return;
}



/* Function: getType @ 001017c0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
