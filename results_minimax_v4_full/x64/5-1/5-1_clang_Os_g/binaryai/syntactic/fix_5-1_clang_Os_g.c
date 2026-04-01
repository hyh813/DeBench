/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
// int64_t is defined in stddef.h
// size_t, ssize_t, uintptr_t, intmax_t, uintmax_t are defined in system headers (stddef.h)
typedef unsigned short undefined3;
typedef unsigned short undefined3;

// Declare __libc_start_main (from libc)
int __libc_start_main(int (*main)(int, char**, char**), void *argc, char** argv, 
                      void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void* stack_end);

// Decompiled by BinaryAI
// SHA256: e85c1c90e0ded39a3ed678a2e38525457a29c6d517dc7232a17d012117a5d612

// External declarations
void __gmon_start__(void);
void *__dso_handle;
char completed_0 = 0;
unsigned long stack0x00000008;  // Stack guard variable

// Forward declarations
int main(void);

// Data section strings
char DAT_001021d4[] = "Testing C++ OO Features:\n";

// Template class Container definition
template<typename T>
class Container {
public:
    T data[10];
    unsigned int size;
    Container();
    void push(T value);
    T get(int index);
    unsigned int getSize();
};

// Type aliases for template instantiations
typedef Container<int> Container_int_;
typedef Container<double> Container_double_;
char DAT_0010207d[] = "test_cpp_member_func: %d\n";
char DAT_0010209b[] = "test_cpp_constructor: %u\n";
char DAT_001020b7[] = "test_cpp_virtual_func: %x\n";
char DAT_001020d3[] = "test_cpp_multiple_inheritance: %x\n";
char DAT_001020ef[] = "test_cpp_diamond_inheritance: %x\n";
char DAT_0010210c[] = "test_cpp_operator_overload: %x\n";
char DAT_00102128[] = "test_cpp_template_func: %x\n";
char DAT_00102144[] = "test_cpp_template_class: %x\n";
char DAT_00102160[] = "test_cpp_lambda: %x\n";
char DAT_0010217c[] = "test_cpp_exception: %u\n";
char DAT_00102199[] = "test_cpp_smart_ptr: %x\n";
char DAT_001021b6[] = "test_cpp_rtti: %u\n";

// C++ standard library namespace
namespace std {
    struct ios_base {
        struct Init {
            void __init();
            void __Destroy();
        };
    };
    ios_base::Init __ioinit;
}

// Base class for virtual function test
class Base {
public:
    virtual void virtualMethod() {}
};

// LifecycleClass for testing constructors
class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// RTTI classes
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    static void *typeinfo;
};
class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    unsigned long long getType(void) { return 1; }
    static void *typeinfo;
};
class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    unsigned long long getType(void) { return 2; }
    static void *typeinfo;
};

// RTTI typeinfo symbols
void *PTR__RTTIBase_00103d78 = &RTTIBase::typeinfo;
void *PTR__RTTIBase_00103da0 = &RTTIDerivedA::typeinfo;
void *PTR__RTTIDerivedA_00103da0 = &RTTIDerivedA::typeinfo;
void *PTR__RTTIDerivedB_00103da8 = &RTTIDerivedB::typeinfo;

// Type info symbols (these are typically compiler-generated)
namespace {
    void *RTTIBase_typeinfo = &RTTIBase::typeinfo;
    void *RTTIDerivedA_typeinfo = &RTTIDerivedA::typeinfo;
    void *RTTIDerivedB_typeinfo = &RTTIDerivedB::typeinfo;
}

// Function: _init @ 0x101000
void _init(void *ctx)
{
 __gmon_start__();
 return;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::operator new[] @ 0x101030
void *operator_new__(unsigned long param_1)
{
 void *ptr = operator new[](param_1);
 return ptr;
}

// Function: <EXTERNAL>::printf @ 0x101040
// Using standard library printf (declared in stdio.h)

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101050
void * __cxa_begin_catch(void)
{
 void *result = __cxa_begin_catch();
 return result;
}

// Function: <EXTERNAL>::strlen @ 0x101060
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101070
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101080
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x101090
void operator_delete(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1010a0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1010b0
void * __dynamic_cast(const void *ptr, const void *src_type, const void *dst_type, ptrdiff_t offset)
{
 void *result = __dynamic_cast(ptr, src_type, dst_type, offset);
 return result;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x1010c0
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1010d0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010e0
void std::ios_base::Init::__init()
{
}

void std::ios_base::Init::__Destroy()
{
}

// Function: <EXTERNAL>::puts @ 0x1010f0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101100
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x101110
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101120
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101130
void __cxa_finalize(void *arg)
{
 __cxa_finalize(arg);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std::ios_base::Init::__init(&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::__Destroy,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101170
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1011a0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011d0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101210
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10125c
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 undefined3 uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 uStack_14 = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 local_5 = 0;
 sVar1 = strlen((char *)&local_24);
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101294
int test_cpp_constructor(void)
{
 unsigned int *puVar1;
 long lVar2;
 unsigned int *puVar3;
 int iVar4;
 puVar1 = (unsigned int *)operator_new__(0x14);
 lVar2 = 0;
 puVar3 = puVar1;
 do {
 *puVar3 = (int)lVar2;
 lVar2 = lVar2 + 10;
 puVar3 = puVar3 + 1;
 } while (lVar2 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar4 = LifecycleClass::instance_count + puVar1[2];
 operator_delete__(puVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar4;
}

// Function: call_virtual_func @ 0x1012e5
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x1012ed
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x1012f3
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1012f9
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1012ff
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101305
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x10130b
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101311
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101317
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x1013d7
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013dd
int test_cpp_rtti(void)
{
 int iVar1;
 unsigned long long *puVar2;
 void **plVar3;
 void *lVar4;
 int iVar5;
 puVar2 = (unsigned long long *)operator_new(8);
 *puVar2 = (unsigned long long)&PTR__RTTIBase_00103d78;
 plVar3 = (void **)operator_new(8);
 *plVar3 = (void *)&PTR__RTTIBase_00103da0;
 lVar4 = __dynamic_cast(puVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
    operator_delete(puVar2);
    // Call destructor through vtable
    RTTIDerivedB *obj = (RTTIDerivedB *)*(void**)plVar3;
    typedef void (RTTIDerivedB::*DtorType)(void);
    DtorType dtor = (DtorType)(*(void**)*(void***)plVar3);
    (obj->*dtor)();
    return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10147f
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 size_t sVar2;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 undefined3 uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 puts(DAT_001021d4);
 uStack_14 = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 local_5 = 0;
 sVar2 = strlen((char *)&local_24);
 printf(DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(DAT_0010209b,(unsigned long)uVar1);
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
 uVar1 = test_cpp_rtti();
 printf(DAT_001021b6,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1015a8
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1015b2
template<>
int template_max<int>(int param_1, int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1015ba
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1015bf
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1015c8
Container<int>::Container(Container_int_ *self)
{
 *(unsigned int *)(self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1015d0
void __thiscall Container<int>::push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1015e4
unsigned int __thiscall Container<int>::get(Container_int_ *self,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(self + 0x28) != param_1 && param_1 <= *(int *)(self + 0x28))) {
 uVar1 = *(unsigned int *)(self + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1015f6
unsigned int __thiscall Container<int>::getSize(Container_int_ *self)
{
 return *(unsigned int *)(self + 0x28);
}

// Function: Container<double>::Container @ 0x1015fa
void __thiscall Container<double>::Container(Container_double_ *self)
{
 *(unsigned int *)(self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101602
void __thiscall Container<double>::push(Container_double_ *self,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(self + 0x50) = iVar1 + 1;
 *(double *)(self + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101618
unsigned long long __thiscall Container<double>::get(Container_double_ *self,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(self + 0x50) != param_1 && param_1 <= *(int *)(self + 0x50))) {
 uVar1 = *(unsigned long long *)(self + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10162c
unsigned int __thiscall Container<double>::getSize(Container_double_ *self)
{
 return *(unsigned int *)(self + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101630
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101636
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10163c
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10163e
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101644
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x10164c
void _fini(void)
{
 return;
}

