/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t and ssize_t provided by stdio.h */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Decompiled by BinaryAI
// SHA256: 2d30ca918c988c991626fbdfe5e79602d879e129a79b40457aff8cfc8de768cb

using namespace std;

// Forward declarations
class Base;
class LifecycleClass {
public:
    static int instance_count;
};
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
int main(void);
void * operator_new(unsigned int);
void operator_delete(void *);
void __cxa_atexit(void *, void *, void *);
void __cxa_finalize(void *);
void __gmon_start__(void);
namespace std { 
    class ios_base { 
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
}
std::ios_base::Init __ioinit;

// Global variables
char completed_0 = 0;

// Typeinfo structures
void * PTR__RTTIBase_00021ed8;
void * PTR__RTTIBase_00021eec;
struct RTTI_typeinfo { void *vtable; };

class RTTIBase {
public:
    virtual ~RTTIBase();
    static RTTI_typeinfo typeinfo;
};
RTTI_typeinfo RTTIBase::typeinfo;

class RTTIDerivedA {
public:
    virtual ~RTTIDerivedA();
    virtual unsigned int getType();
    static RTTI_typeinfo typeinfo;
};
RTTI_typeinfo RTTIDerivedA::typeinfo;

class RTTIDerivedB {
public:
    virtual ~RTTIDerivedB();
    virtual unsigned int getType();
    static RTTI_typeinfo typeinfo;
};
RTTI_typeinfo RTTIDerivedB::typeinfo;

// String constants (from binary data)
char DAT_00011358[] = "Testing C++ OO Features:\n";
char DAT_00011201[] = "String length: %u\n";
char DAT_0001121f[] = "Instance count: %u\n";
char DAT_0001123b[] = "Virtual func: %u\n";
char DAT_00011257[] = "Multiple inheritance: %u\n";
char DAT_00011273[] = "Diamond inheritance: %u\n";
char DAT_00011290[] = "Operator overload: %u\n";
char DAT_000112ac[] = "Template func: %u\n";
char DAT_000112c8[] = "Template class: %u\n";
char DAT_000112e4[] = "Lambda: %u\n";
char DAT_00011300[] = "Exception: %u\n";
char DAT_0001131d[] = "Smart pointer: %u\n";
char DAT_0001133a[] = "RTTI: %u\n";

// External declarations
void __gmon_start__(void);
void call_weak_fn(void);
void *__dso_handle;
void * __dynamic_cast(void *, const RTTI_typeinfo *, const RTTI_typeinfo *, int);

// Function: _init @ 0x10848
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10868
void * operator_new(unsigned int param_1);

// Wrapper to avoid recursion
void * __operator_new(unsigned int param_1)
{
 return operator_new(param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
void * __cxa_begin_catch_impl(void);

// Wrapper for __cxa_begin_catch
void * __cxa_begin_catch(void)
{
 void *result = __cxa_begin_catch_impl();
 return result;
}

// External declaration for __cxa_allocate_exception
void * __cxa_allocate_exception_impl(unsigned int);

// Wrapper for __cxa_allocate_exception
void * __cxa_allocate_exception(unsigned int size)
{
 void *result = __cxa_allocate_exception_impl(size);
 return result;
}

// Function: <EXTERNAL>::printf @ 0x1088c
int printf_wrapper(char *__format, ...);

// Internal wrapper to call actual printf
int printf_impl(char *__format, ...);

// Alias for printf - use impl version
#define printf printf_impl

// External puts declaration
int puts(const char *__s);

// Function: <EXTERNAL>::puts @ 0x10898
int puts_wrapper(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
// Forward declaration only - implemented in libc
void __libc_start_main(void (*main)(int, char**, char**), void *arg, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::abort @ 0x108b0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::operator.delete @ 0x108bc
void operator_delete_impl(void *param_1);

// Wrapper for operator_delete
void operator_delete(void *param_1)
{
 operator_delete_impl(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x108f8
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
std::ios_base::Init::Init()
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
void __aeabi_dcmpgt(void)
{
 __aeabi_dcmpgt();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void _GLOBAL__sub_I_5_1_cpp(void)
{
 // Use placement new to initialize the static ios_base::Init object
 std::ios_base::Init* init_ptr = new (&std::__ioinit) std::ios_base::Init();
 // Register destructor - cast to the expected function pointer type
 __cxa_atexit((void (*)(void *))__dtor_ios_base_Init, (void *)&std::__ioinit, &__dso_handle);
 return;
}

// Destructor wrapper for ios_base::Init
void __dtor_ios_base_Init(void *obj)
{
 std::ios_base::Init *init = (std::ios_base::Init *)obj;
 init->~Init();
}

// Function: _start @ 0x10994
void _start(unsigned int param_1, unsigned int param_2)
{
 __libc_start_main(main, param_2, 0, 0, param_1);
 abort();
}

// Function: call_weak_fn @ 0x109d8
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x109fc
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10a40
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10a90
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: test_cpp_member_func @ 0x10afc
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned short local_c;
 char local_a;
 char local_9;
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x10b64
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10b80
void call_virtual_func(Base *param_1,int param_2)
{
 (**(void(**)())param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x10b8c
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10b94
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10b9c
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10ba8
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10bb0
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x10bb8
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10bc0
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x10bc8
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&RTTIBase::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x10ca4
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10cb0
int test_cpp_rtti(void)
{
 void *puVar1;
 void *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = operator_new(4);
 *(void **)puVar1 = &PTR__RTTIBase_00021ed8;
 piVar2 = operator_new(4);
 *(void **)piVar2 = &PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 operator_delete(puVar1);
 (**(void **)(*(int *)piVar2 + 4))(piVar2);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10d7c
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 void *puVar3;
 void *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 unsigned int local_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned short local_1c;
 char local_1a;
 char local_19;
 puts(DAT_00011358);
 local_38 = 0x74736554;
 uStack_34 = 0;
 uStack_30 = 0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 local_1a = 0;
 local_19 = 0;
 sVar1 = strlen((char *)&local_38);
 ::printf(DAT_00011201,sVar1 + 0x125c);
 ::printf(DAT_0001121f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 ::printf(DAT_0001123b,0x2a);
 ::printf(DAT_00011257,0x47);
 ::printf(DAT_00011273,0x28a);
 ::printf(DAT_00011290,0x16);
 ::printf(DAT_000112ac,0x27);
 ::printf(DAT_000112c8,0x10);
 ::printf(DAT_000112e4,0x55);
 uVar2 = test_cpp_exception();
 ::printf(DAT_00011300,uVar2);
 ::printf(DAT_0001131d,0x2bf);
 puVar3 = operator_new(4);
 *(void **)puVar3 = &PTR__RTTIBase_00021ed8;
 piVar4 = operator_new(4);
 *(void **)piVar4 = &PTR__RTTIBase_00021eec;
 iVar5 = (int)__dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar6 = (int)__dynamic_cast(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 operator_delete(puVar3);
 (**(void **)(*(int *)piVar4 + 4))(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 ::printf(&DAT_0001133a,iVar7 + 0xe);
 return;
}

// Function: main @ 0x10fb8
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x10fcc
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10fd8
double template_max_double_(double param_1,double param_2)
{
 double extraout_d0;
 __aeabi_dcmpgt();
 return extraout_d0;
}

// Function: template_swap<int> @ 0x1100c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11020
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1102c
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11044
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < *(int *)(this + 0x28)) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11064
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1106c
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11078
void Container<double>::push(double param_1)
{
 int in_r0;
 unsigned int *puVar1;
 unsigned int in_r2;
 unsigned int in_r3;
 int iVar2;
 iVar2 = *(int *)(in_r0 + 0x50);
 if (9 < iVar2) {
 return;
 }
 puVar1 = (unsigned int *)(in_r0 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 *(int *)(in_r0 + 0x50) = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x1109c
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this + 0x50)) {
 uVar1 = *(unsigned int *)(this + param_1 * 8);
 uVar2 = *(unsigned int *)((int)(this + param_1 * 8) + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x110c8
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x110d0
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x110d4
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x110dc
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x110e0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x110e4
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x110ec
void _fini(void)
{
 return;
}

