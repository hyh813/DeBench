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
// typedef long intptr_t; // Already defined by standard library

typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char undefined;
typedef unsigned int undefined4;
typedef void (*code)(void);


/* Standard library includes */
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <new>

/* Use standard type_info from <typeinfo> */
#include <typeinfo>

extern "C" {
    void* __cxa_allocate_exception(size_t);
    void __cxa_throw(void*, void*, void*);
    int __cxa_atexit(void(*)(void*), void*, void*);
    void* __dynamic_cast(void*, const std::type_info*, const std::type_info*, int);
}

/* Global C++ objects */


/* Base class definition */
struct Base {
    void** _vptr_Base;
};

/* Additional class definitions */
struct SimpleClass {
    char data[36];
};

struct Derived : Base {
    virtual ~Derived() {}
};

struct BaseA {
    void** _vptr_BaseA;
};

struct BaseB {
    void** _vptr_BaseB;
};

struct MultiDerived : BaseA, BaseB {
};

struct VirtualBase {
    virtual ~VirtualBase() {}
};

struct DiamondDerived : VirtualBase {
};

struct Point {
    int x, y;
    bool operator==(const Point& other);
};

bool Point::operator==(const Point& other) {
    return x == other.x && y == other.y;
}

/* Container template definition */
template<typename T>
struct Container {
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx);
    int getSize();
};

/* Global string constants */
extern const char* DAT_000121d8;
extern const char* DAT_00012081;
extern const char* DAT_0001209f;
extern const char* DAT_000120bb;
extern const char* DAT_000120d7;
extern const char* DAT_000120f3;
extern const char* DAT_00012110;
extern const char* DAT_0001212c;
extern const char* DAT_00012148;
extern const char* DAT_00012164;
extern const char* DAT_00012180;
extern const char* DAT_0001219d;
extern const char* DAT_000121ba;

/* Vtable pointers */
extern void* PTR__RTTIBase_00013ecc;
extern void* PTR__RTTIBase_00013ee0;

/* Define global string constants */
const char* DAT_000121d8 = "Testing C++ OO Features:\n";
const char* DAT_00012081 = "  test_cpp_member_func: %d\n";
const char* DAT_0001209f = "  test_cpp_constructor: %d\n";
const char* DAT_000120bb = "  test_cpp_virtual_func: %d\n";
const char* DAT_000120d7 = "  test_cpp_multiple_inheritance: %d\n";
const char* DAT_000120f3 = "  test_cpp_diamond_inheritance: %d\n";
const char* DAT_00012110 = "  test_cpp_operator_overload: %d\n";
const char* DAT_0001212c = "  test_cpp_template_func: %d\n";
const char* DAT_00012148 = "  test_cpp_template_class: %d\n";
const char* DAT_00012164 = "  test_cpp_lambda: %d\n";
const char* DAT_00012180 = "  test_cpp_exception: %d\n";
const char* DAT_0001219d = "  test_cpp_smart_ptr: %d\n";
const char* DAT_000121ba = "  test_cpp_rtti: %d\n";

/* Define vtable pointers */
void* PTR__RTTIBase_00013ecc = nullptr;
void* PTR__RTTIBase_00013ee0 = nullptr;



/* LifecycleClass with static member */
struct LifecycleClass {
    static int instance_count;
};

/* Template function declarations */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T* a, T* b);

/* Forward declaration of std::ios_base::Init */
namespace std {
    namespace ios_base {
        class Init {
        public:
            Init();
            ~Init();
        };
    }
    extern ios_base::Init __ioinit;
}

/* Implement std::ios_base::Init stubs */
namespace std {
    namespace ios_base {
        Init::Init() {}
        Init::~Init() {}
    }
    ios_base::Init __ioinit;
}



/* RTTI classes */
struct RTTIBase {
    void** _vptr;
    static const std::type_info* typeinfo;
    virtual ~RTTIBase();
};
RTTIBase::~RTTIBase() {}

struct RTTIDerivedA : RTTIBase {
    static const std::type_info* typeinfo;
    virtual ~RTTIDerivedA();
    virtual int getType();
};

struct RTTIDerivedB : RTTIBase {
    static const std::type_info* typeinfo;
    virtual ~RTTIDerivedB();
    virtual int getType();
};

/* Type info for int */
struct int_typeinfo {
    static const std::type_info* typeinfo;
};

/* Initialize static members */
int LifecycleClass::instance_count = 0;
const std::type_info* RTTIBase::typeinfo = &typeid(RTTIBase);
const std::type_info* RTTIDerivedA::typeinfo = &typeid(RTTIDerivedA);
const std::type_info* RTTIDerivedB::typeinfo = &typeid(RTTIDerivedB);
const std::type_info* int_typeinfo::typeinfo = &typeid(int);



/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* (*(code *)(undefined *)0x0)(); */  // Null function call - removed
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00011140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

static void _GLOBAL__sub_I_5_1_cpp(void)

{
 std::__ioinit.~Init();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000111ac */

/* WARNING: This is an inlined function */

static void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111b0 */

/* WARNING: This is an inlined function */

static void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000112e9 */

/* WARNING: This is an inlined function */

static void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000112ed */

/* WARNING: This is an inlined function */

static void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: test_cpp_member_func @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_28 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 000113a0 */

typedef int (*VirtualFunc)(Base*, int);

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 VirtualFunc vfunc;
 
 vfunc = (VirtualFunc)(*obj->_vptr_Base);
 iVar1 = vfunc(obj,x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 000113d0 */

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



/* Function: test_cpp_multiple_inheritance @ 000113e0 */

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



/* Function: test_cpp_diamond_inheritance @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011420 */

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



/* Function: test_cpp_lambda @ 00011430 */

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



/* Function: test_cpp_exception @ 00011440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(sizeof(int));
 *puVar1 = 0x2a;
 /* try { // try from 00011465 to 0001147e has its CatchHandler @ 00011481 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011530 */

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



/* Function: test_cpp_rtti @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar1 = (undefined4 *)operator new(sizeof(void*));
 *(void**)puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = (int *)operator new(sizeof(void*));
 *(void**)piVar2 = &PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = (int)__dynamic_cast(puVar1,RTTIBase::typeinfo,RTTIDerivedA::typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar4 = (int)__dynamic_cast(piVar2,RTTIBase::typeinfo,RTTIDerivedB::typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator delete(puVar1);
 delete piVar2;
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 char local_30 [32];
 
 puts(DAT_000121d8);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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
 printf("%s%d",DAT_00012081,(int)(sVar1 + 0x125c));
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf("%s%d",DAT_0001209f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf("%s%d",DAT_000120bb,0x2a);
 printf("%s%d",DAT_000120d7,0x47);
 printf("%s%d",DAT_000120f3,0x28a);
 printf("%s%d",DAT_00012110,0x16);
 printf("%s%d",DAT_0001212c,0x27);
 printf("%s%d",DAT_00012148,0x10);
 printf("%s%d",DAT_00012164,0x55);
 iVar2 = test_cpp_exception();
 printf("%s%d",DAT_00012180,iVar2);
 printf("%s%d",DAT_0001219d,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: RTTIBase * obj2@[???] */
 puVar3 = (undefined4 *)operator new(sizeof(void*));
 *(void**)puVar3 = &PTR__RTTIBase_00013ecc;
 piVar4 = (int *)operator new(sizeof(void*));
 *(void**)piVar4 = &PTR__RTTIBase_00013ee0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar2 = (int)__dynamic_cast(puVar3,RTTIBase::typeinfo,RTTIDerivedA::typeinfo,0);
 iVar6 = 0x82;
 if (iVar2 == 0) {
 iVar6 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = (int)__dynamic_cast(piVar4,RTTIBase::typeinfo,RTTIDerivedB::typeinfo,0);
 iVar2 = iVar6 + 200;
 if (iVar5 == 0) {
 iVar2 = iVar6;
 }
 operator delete(puVar3);
 delete piVar4;
 printf("%s%d",DAT_000121ba,iVar2 + 0xe);
 return;
}



/* Function: main @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00011830 */

template<>
inline int template_max<int>(int a,int b)

{
 if (b < a) {
 return a;
 }
 return b;
}



/* Function: template_max<double> @ 00011840 */

template<>
inline double template_max<double>(double a,double b)

{
 if (b < a) {
 return a;
 }
 return b;
}



/* Function: template_swap<int> @ 00011860 */

template<>
inline void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 00011880 */

/* DWARF original prototype: void Container(Container<int> * this) */

template<>
inline Container<int>::Container()

{
 size = 0;
}



/* Function: push @ 00011890 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

template<>
inline void Container<int>::push(int value)

{
 int iVar1;
 
 iVar1 = size;
 if (iVar1 < 10) {
 size = iVar1 + 1;
 data[iVar1] = value;
 }
}



/* Function: get @ 000118b0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

template<>
inline int Container<int>::get(int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (idx < size)) {
 iVar1 = data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 000118d0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

template<>
inline int Container<int>::getSize()

{
 return size;
}



/* Function: Container @ 000118e0 */

/* DWARF original prototype: void Container(Container<double> * this) */

template<>
inline Container<double>::Container()

{
 size = 0;
}



/* Function: push @ 000118f0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

template<>
inline void Container<double>::push(double value)

{
 int iVar1;
 
 iVar1 = size;
 if (iVar1 < 10) {
 size = iVar1 + 1;
 data[iVar1] = value;
 }
}



/* Function: get @ 00011910 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

template<>
inline double Container<double>::get(int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < size)) {
 dVar1 = data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 00011930 */

/* DWARF original prototype: int getSize(Container<double> * this) */

template<>
inline int Container<double>::getSize()

{
 return size;
}



/* Function: ~RTTIDerivedA @ 00011940 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

RTTIDerivedA::~RTTIDerivedA()
{
 return;
}



/* Function: getType @ 00011970 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA::getType()
{
 return 1;
}







/* Function: ~RTTIDerivedB @ 00011990 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

RTTIDerivedB::~RTTIDerivedB()
{
 return;
}



/* Function: getType @ 000119c0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB::getType()
{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 44 */
