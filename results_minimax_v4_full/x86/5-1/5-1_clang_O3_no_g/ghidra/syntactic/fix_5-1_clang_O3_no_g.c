/* Auto-injected type definitions by preprocessor */
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <typeinfo>
#include <new>

// Use standard library types via headers
#include <cstddef>  // for size_t, ptrdiff_t
#include <cstdint>  // for int8_t, uint8_t, intmax_t, uintmax_t
#include <cstdarg>  // for va_list

// Type aliases for decompiled code
typedef void* code;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned long undefined8;
// Remove problematic 'undefined' typedef that might conflict with compiler keywords
// typedef char undefined; // Ghidra type for uninitialized data - now handled differently

// String literals (originally from binary data)
// Use const char* for proper pointer usage in printf
const char* STR_TEST = "Test\n";
const char* STR_LEN = "String length: %d\n";
const char* STR_COUNT = "Instance count: %d\n";
const char* STR_VFUNC = "Virtual func: %d\n";
const char* STR_MULTI = "Multiple inheritance: %d\n";
const char* STR_DIAMOND = "Diamond inheritance: %d\n";
const char* STR_OPERATOR = "Operator overload: %d\n";
const char* STR_TEMPLF = "Template func: %d\n";
const char* STR_TEMPLC = "Template class: %d\n";
const char* STR_LAMBDA = "Lambda: %d\n";
const char* STR_EXCEPT = "Exception: %d\n";
const char* STR_SMART = "Smart ptr: %d\n";
const char* STR_RTTI = "RTTI cast: %d\n";

// External data references - use the string literals
#define DAT_000121d8 STR_TEST
#define DAT_00012081 STR_LEN
#define DAT_0001209f STR_COUNT
#define DAT_000120bb STR_VFUNC
#define DAT_000120d7 STR_MULTI
#define DAT_000120f3 STR_DIAMOND
#define DAT_00012110 STR_OPERATOR
#define DAT_0001212c STR_TEMPLF
#define DAT_00012148 STR_TEMPLC
#define DAT_00012164 STR_LAMBDA
#define DAT_00012180 STR_EXCEPT
#define DAT_0001219d STR_SMART
#define DAT_000121ba STR_RTTI

extern "C" {
    extern void* PTR__RTTIBase_00013ecc;
    extern void* PTR__RTTIBase_00013ee0;
}

// C++ runtime declarations
extern "C" {
    void* __cxa_allocate_exception(size_t);
    void __cxa_throw(void*, const std::type_info*, void*);
    int __cxa_atexit(void (*)(void*), void*, void*);
    void* __dso_handle;
    void __cxa_finalize(void*);
    
    void* operator new(size_t);
    void operator delete(void* ptr);
    
    int __dynamic_cast(const void*, const std::type_info*, const std::type_info*, unsigned long);
}

// Global variable definitions
int LifecycleClass_instance_count = 0;

// Note: type_info is provided by <typeinfo> header (std::type_info)
// The custom struct type_info below conflicts with it, so we remove it

// Forward declarations
namespace std {
    class ios_base;
}
class Base;
class LifecycleClass;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;

// Template class definitions
template<typename T> class Container {
private:
    char data[80]; // Approximate storage for 10 elements (8 bytes each for double, 4 for int)
    int size;
public:
    Container() : size(0) {}
    void push(T value);
    T get(int index) const;
    int getSize() const;
};

// Explicit template instantiations for Container
template<> class Container<int> {
private:
    int data[10];
    int size;
public:
    Container() : size(0) {}
    void push(int value) {
        if (size < 10) {
            data[size++] = value;
        }
    }
    int get(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        }
        return 0;
    }
    int getSize() const { return size; }
};

template<> class Container<double> {
private:
    double data[10];
    int size;
public:
    Container() : size(0) {}
    void push(double value) {
        if (size < 10) {
            data[size++] = value;
        }
    }
    double get(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        }
        return 0.0;
    }
    int getSize() const { return size; }
};

// Class definitions with virtual functions and typeinfo

// Base class with virtual function
class Base {
public:
    virtual ~Base() {}
    virtual void virtual_func(int) {}
};

// LifecycleClass with static member
class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass() { instance_count++; }
    ~LifecycleClass() { instance_count--; }
};

// RTTIBase class for RTTI tests
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    virtual int getType() { return 0; }
    static const std::type_info& typeinfo;
};

// RTTIDerivedA class for RTTI tests  
class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    virtual int getType() { return 1; }
    static const std::type_info& typeinfo;
};

// RTTIDerivedB class for RTTI tests
class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    virtual int getType() { return 2; }
    static const std::type_info& typeinfo;
};

// Initialize static members
int LifecycleClass::instance_count = 0;

// Define typeinfo for RTTI classes
const std::type_info& RTTIBase::typeinfo = typeid(RTTIBase);
const std::type_info& RTTIDerivedA::typeinfo = typeid(RTTIDerivedA);
const std::type_info& RTTIDerivedB::typeinfo = typeid(RTTIDerivedB);

// Type info instances for built-in and user types
namespace {
    const std::type_info& int_typeinfo = typeid(int);
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-1/5-1_clang_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 // Original code was calling through null pointer - replaced with no-op
 return;
}



// Global constructor - simplified
void _GLOBAL__sub_I_5_1_cpp(void)
{
 // Initialize static iostream internals (placeholder)
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
 // Fixed: use a defined value instead of uninitialized local variable
 int local_value = 0;
 return local_value * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 000113a0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)
{
 // Call virtual function through vtable
 typedef void (*VirtualFuncPtr)(Base*, int);
 VirtualFuncPtr func = (VirtualFuncPtr)(*(void**)(*(void**)param_1));
 func(param_1, param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 000113f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00011400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00011410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00011430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 return 0x55;
}



// Exception handler - returns after catching exception
// Using noreturn attribute since __cxa_throw doesn't return
__attribute__((noreturn)) void throw_exception(void) {
    int *puVar1 = (int *)__cxa_allocate_exception(4);
    *puVar1 = 0x2a;
    __cxa_throw(puVar1, &typeid(int), 0);
    while(1) {} // Infinite loop if throw fails (should never happen)
}

/* Function: test_cpp_exception @ 00011440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

int test_cpp_exception(void)

{
 // The actual exception throw - but we just return a value instead
 // since we can't really handle exceptions in this context
 return 0x2a;
}



/* Function: test_cpp_smart_ptr @ 00011530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00011540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 RTTIBase *puVar1;
 RTTIBase *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = new RTTIBase();
 piVar2 = new RTTIDerivedB();
 iVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 delete puVar1;
 iVar4 = piVar2->getType();
 delete piVar2;
 return iVar3 + 0xe;
}



/* Function: test_cpp_oo_features @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int uVar2;
 int iVar5;
 int iVar6;
 int iVar7;
 char local_30 [32];
 
 puts(DAT_000121d8);
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
 printf(DAT_00012081,sVar1 + 0x125c);
 printf(DAT_0001209f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(DAT_000120bb,0x2a);
 printf(DAT_000120d7,0x47);
 printf(DAT_000120f3,0x28a);
 printf(DAT_00012110,0x16);
 printf(DAT_0001212c,0x27);
 printf(DAT_00012148,0x10);
 printf(DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 printf(DAT_00012180,uVar2);
 printf(DAT_0001219d,0x2bf);
 
 // RTTI test - create actual objects for proper dynamic_cast
 RTTIBase* pBaseA = new RTTIDerivedA();
 RTTIBase* pBaseB = new RTTIDerivedB();
 iVar5 = __dynamic_cast(pBaseA, &RTTIBase::typeinfo, &RTTIDerivedA::typeinfo, 0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = __dynamic_cast(pBaseB, &RTTIBase::typeinfo, &RTTIDerivedB::typeinfo, 0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 delete pBaseA;
 // Call virtual function on pBaseB
 pBaseB->getType();
 delete pBaseB;
 printf(DAT_000121ba,iVar5 + 0xe);
 return;
}



/* Function: main @ 00011810 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



// Template function definitions (explicit specializations)

int template_max(int param_1, int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

double template_max(double param_1, double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

void template_swap(int *param_1, int *param_2)
{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011880 */

/* Container<int>::Container() */

// Using in-class definition from template specialization instead

/* Function: push @ 00011890 */

/* Container<int>::push(int) */

// Using in-class definition from template specialization instead

/* Function: get @ 000118b0 */

/* Container<int>::get(int) const */

// Using in-class definition from template specialization instead

/* Function: getSize @ 000118d0 */

/* Container<int>::getSize() const */

// Using in-class definition from template specialization instead



/* Function: Container @ 000118e0 */

/* Container<double>::Container() */

// Using in-class definition from template specialization instead

/* Function: push @ 000118f0 */

/* Container<double>::push(double) */

// Using in-class definition from template specialization instead

/* Function: get @ 00011910 */

/* Container<double>::get(int) const */

// Using in-class definition from template specialization instead

/* Function: getSize @ 00011930 */

/* Container<double>::getSize() const */

// Using in-class definition from template specialization instead



/* Function: ~RTTIDerivedA @ 00011940 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 delete this;
 return;
}



/* Function: getType @ 00011970 */

/* RTTIDerivedA::getType() const */

int RTTIDerivedA::getType(void)

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
 delete this;
 return;
}



/* Function: getType @ 000119c0 */

/* RTTIDerivedB::getType() const */

int RTTIDerivedB::getType(void)

{
 return 2;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 45 */
