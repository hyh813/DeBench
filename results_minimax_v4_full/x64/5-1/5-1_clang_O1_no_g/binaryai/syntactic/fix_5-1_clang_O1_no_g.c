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

// Decompiled by BinaryAI
// SHA256: 7d2eb3f67d7b79284ccda07814eb56f8d50035e18d0f3d5748618154554cf5d9

// Missing type definitions
typedef unsigned short undefined3;

// Forward declarations for classes
class Base;
class Derived;
class LifecycleClass;
class MultiDerived;
class DiamondDerived;
class BaseA;
class BaseB;
class MiddleA;
class MiddleB;
class VirtualBase;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class Container_int_;
class Container_double_;
template<typename T> class Container;

// Class definitions
class LifecycleClass {
public:
    static int instance_count;
};

class Base {
public:
    virtual int virtual_func(int param_1);
    virtual ~Base();
    char* getName();
};

class Derived : public Base {
public:
    int member;
    virtual int virtual_func(int param_1);
    virtual ~Derived();
    char* getName();
};

// Forward declaration for VirtualBase
class VirtualBase;

class BaseA {
public:
    virtual unsigned long long funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    virtual unsigned long long funcB();
    virtual ~BaseB();
};

class VirtualBase {
public:
    virtual int func();
    virtual ~VirtualBase();
};

class MiddleA : virtual public VirtualBase {
public:
    virtual int func();
    virtual ~MiddleA();
};

class MiddleB : virtual public VirtualBase {
public:
    virtual int func();
    virtual ~MiddleB();
};

class MultiDerived : public BaseA, public BaseB {
public:
    virtual unsigned long long funcA();
    virtual unsigned long long funcB();
    virtual ~MultiDerived();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

// Forward declaration for type_info (needed by RTTI classes)
struct type_info;

class RTTIBase {
public:
    virtual ~RTTIBase();
    static type_info typeinfo;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    static unsigned long long getType();
    static type_info typeinfo;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    static unsigned long long getType();
    static type_info typeinfo;
};

template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int index);
    unsigned int getSize();
};

// Forward declaration for type_info (needed by classes)
struct type_info;

// RTTI type info structure (must be before class definitions that use it)
struct type_info {
    const char* name;
};

// Forward declarations for pointers used in test functions
extern char* PTR_virtual_func_001059c8;
extern void** PTR_virtual_func_00105a08;
extern void** PTR_funcB_00105a80;
extern void** PTR_func_00105bc0;

int LifecycleClass::instance_count = 0;

namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
        };
    };
    static ios_base::Init __ioinit;
}

// Define type_info for int (used in exception handling)
namespace int_ {
    struct typeinfo {
        static const char* name() { return "int"; }
    };
}

// RTTI type info
type_info RTTIBase::typeinfo;
type_info RTTIDerivedA::typeinfo;
type_info RTTIDerivedB::typeinfo;

// External declarations
extern int __gmon_start__(void);
extern void *__dso_handle;
extern char completed_0;

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 return;
}

// Forward declarations for operators (external runtime functions)
extern void* operator_new_array(unsigned long);
extern void operator_delete_array(void*);
extern void* operator_new_scalar(unsigned long);
extern void operator_delete_scalar(void*);

// Function: <EXTERNAL>::operator.new[] @ 0x102030
void* operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new_array(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x102040
// Forward declaration for external printf
#include <stdarg.h>
extern int vprintf(const char *__format, va_list __args);

// Implementation uses external vprintf
int printf(const char *__format,...)
{
 va_list _Args;
 va_start(_Args, __format);
 int iVar1 = vprintf(__format, _Args);
 va_end(_Args);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102050
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x102060
// External strlen declaration
extern size_t __strlen(const char *s);

// Wrapper that calls external strlen
size_t strlen(char *__s)
{
 return __strlen(__s);
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x102070
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x102080
int __cxa_atexit(void (*param_1)(void *), void *param_2, void *param_3)
{
 int iVar1;
 iVar1 = __cxa_atexit(param_1, param_2, param_3);
 return iVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x102090
void operator_delete(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1020a0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1020b0
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x1020c0
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x1020d0
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1020e0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1020f0
void __thiscall std::ios_base::Init::Init(std::ios_base::Init *this)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x102100
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102110
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102120
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102130
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102140
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x102150
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Forward declaration of main
unsigned long long main(void);

// Function: _start @ 0x102180
void _start(unsigned long long param_1, unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main, param_2, &auStack_8, 0, 0, param_1);
 for(;;) { }
}

// Function: deregister_tm_clones @ 0x1021b0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1021e0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102220
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

// Function: test_cpp_member_func @ 0x102270
// Test function for member function calls
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
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_5 = 0;
 sVar1 = strlen((char *)&local_24);
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x1022b0
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

// Function: call_virtual_func @ 0x102310
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x102320
typedef int (*VirtualFuncPtr)(void*, int);
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_20;
 unsigned int local_18;
 char **local_10;
 local_10 = &PTR_virtual_func_001059c8;
 local_20 = (void **)&PTR_virtual_func_00105a08;
 local_18 = 3;
 Base base_obj;
 base_obj.vtable = (void**)local_10;
 iVar1 = Base::virtual_func(&base_obj,5);
 VirtualFuncPtr vfunc = (VirtualFuncPtr)(*local_20);
 iVar2 = vfunc((void*)&base_obj,5);
 return iVar2 + iVar1 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x102380
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_20;
 unsigned int local_18;
 local_20 = (void **)&PTR_funcB_00105a80;
 local_18 = 200;
 iVar1 = MultiDerived::funcA();
 iVar2 = (**local_20)(&local_20);
 return iVar2 + iVar1 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x1023e0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_20;
 unsigned int local_18;
 local_20 = (void **)&PTR_func_00105bc0;
 local_18 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_20);
 local_18 = 100;
 iVar2 = (**local_20)(&local_20);
 return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x102450
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x102460
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x102470
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x102480
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x102490
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x102550
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x102560
int test_cpp_rtti(void)
{
 char *__s1;
 char *__s1_00;
 uint uVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 bool bVar8;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIBase_00105d78;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00105da0;
 __s1 = *(char **)(*(long *)(*plVar3 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else {
 uVar7 = 0;
 if (*__s1 != '*') {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 10;
 if (iVar2 != 0) {
 uVar7 = 0;
 }
 }
 }
 __s1_00 = *(char **)(*(long *)(*plVar4 + -8) + 8);
 if (__s1_00 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else if (*__s1_00 == '*') {
 bVar8 = false;
 }
 else {
 iVar2 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar8 = iVar2 == 0;
 }
 uVar1 = uVar7 | 0x14;
 if (!bVar8) {
 uVar1 = uVar7;
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 uVar7 = uVar1 + 100;
 if (lVar5 == 0) {
 uVar7 = uVar1;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(void **)(*plVar3 + 8))(plVar3);
 (**(void **)(*plVar4 + 8))(plVar4);
 return (int)sVar6 + uVar1;
}

// Function: test_cpp_oo_features @ 0x1026a0
void test_cpp_oo_features(void)
{
 int iVar1;
 uint uVar2;
 size_t sVar3;
 unsigned int *puVar4;
 unsigned int *puVar5;
 int iVar6;
 long lVar7;
 unsigned long long local_48;
 unsigned int auStack_40 [4];
 unsigned int local_30;
 unsigned int uStack_2c;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int local_20;
 char **local_18;
 puts(&DAT_001031e1);
 auStack_40[0] = 0;
 auStack_40[1] = 0;
 auStack_40[2] = 0;
 auStack_40[3] = 0;
 local_30 = 0;
 uStack_2c = 0;
 local_28 = 0;
 local_48 = (char **)0x747365540000000a;
 sVar3 = strlen((char *)((long)&local_48 + 4));
 lVar7 = 0;
 printf(&DAT_0010307d,(unsigned long)((int)sVar3 + 0x125c));
 puVar4 = (unsigned int *)operator_new__(0x14);
 puVar5 = puVar4;
 do {
 *puVar5 = (int)lVar7;
 lVar7 = lVar7 + 10;
 puVar5 = puVar5 + 1;
 } while (lVar7 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar6 = LifecycleClass::instance_count + puVar4[2];
 operator_delete__(puVar4);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(&DAT_0010309b,(unsigned long)(uint)(LifecycleClass::instance_count * 1000 + iVar6));
 local_18 = &PTR_virtual_func_001059c8;
 local_48 = &PTR_virtual_func_00105a08;
 auStack_40[0] = 3;
 iVar6 = Base::virtual_func((Base *)&local_18,5);
 iVar1 = (*(void *)*local_48)(&local_48,5);
 printf(&DAT_001030b7,(unsigned long)(iVar6 + iVar1 + 0x15));
 local_48 = &PTR_funcA_00105a50;
 auStack_40[2] = 0x105a80;
 auStack_40[3] = 0;
 auStack_40[0] = 100;
 local_30 = 200;
 iVar6 = MultiDerived::funcB((MultiDerived *)(auStack_40 + 2));
 printf(&DAT_001030d3,(unsigned long)(iVar6 + 0x1f));
 local_48 = &PTR_func_00105b58;
 local_28 = 0x105bc0;
 uStack_24 = 0;
 auStack_40[2] = 0x105b88;
 auStack_40[3] = 0;
 local_20 = 0x32;
 iVar6 = DiamondDerived::func((DiamondDerived *)&local_28);
 *(unsigned int *)((long)auStack_40 + (long)local_48[-3]) = 100;
 iVar1 = (**(void **)CONCAT44(uStack_24,local_28))(&local_28);
 printf(&DAT_001030ef,(unsigned long)(uint)(iVar6 + iVar1));
 printf(&DAT_0010310c,0x16);
 printf(&DAT_00103128,0x27);
 printf(&DAT_00103144,0x10);
 printf(&DAT_00103160,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_0010317c,(unsigned long)uVar2);
 printf(&DAT_00103199,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_001031b6,(unsigned long)uVar2);
 return;
}

// Function: main @ 0x1028f0
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x102900
int __thiscall Base::virtual_func(Base *pthis, int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x102910
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Base::~Base @ 0x102920
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102930
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102940
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: template_max<int> @ 0x102950
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x102960
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102970
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x102980
void __thiscall Container_int_::Container(Container_int_ *pthis)
{
 *(unsigned int *)(pthis + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x102990
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1029b0
unsigned int __thiscall Container<int>::get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this_ptr + 0x28) != param_1 && param_1 <= *(int *)(this_ptr + 0x28))) {
 uVar1 = *(unsigned int *)(this_ptr + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1029d0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1029e0
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1029f0
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x102a10
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102a30
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base::getName @ 0x102a40
char* Base::getName(void)
{
 return (char*)&DAT_001031d4;
}

// Function: Base::~Base @ 0x102a50
unsigned long long __thiscall Base::_Base(Base *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: Derived::getName @ 0x102a60
char * Derived::getName(void)
{
 return "Derived";
}

// Function: Derived::~Derived @ 0x102a70
unsigned long long __thiscall Derived::_Derived(Derived *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MultiDerived::funcA @ 0x102a80
unsigned long long MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x102a90
unsigned long long __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MultiDerived::funcB @ 0x102aa0
unsigned long long MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x102ab0
unsigned long long __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x102ac0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102ad0
unsigned long long __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 unsigned long long in_RAX;
 operator_delete(this + -0x10);
 return in_RAX;
}

// Function: BaseA::funcA @ 0x102ae0
unsigned long long BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x102af0
void __thiscall BaseA::_BaseA(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x102b00
unsigned long long __thiscall BaseA::_BaseA(BaseA *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: BaseB::funcB @ 0x102b10
unsigned long long BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x102b20
void __thiscall BaseB::_BaseB(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x102b30
unsigned long long __thiscall BaseB::_BaseB(BaseB *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MiddleA::func @ 0x102b40
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102b60
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x102b70
unsigned long long __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MiddleA::func @ 0x102b80
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102ba0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x102bb0
unsigned long long __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 unsigned long long in_RAX;
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return in_RAX;
}

// Function: MiddleB::func @ 0x102bc0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x102be0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x102bf0
unsigned long long __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MiddleB::func @ 0x102c00
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 200;
}

// Function: MiddleB::~MiddleB @ 0x102c20
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x102c30
unsigned long long __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 unsigned long long in_RAX;
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return in_RAX;
}

// Function: DiamondDerived::func @ 0x102c40
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102c60
unsigned long long __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: DiamondDerived::func @ 0x102c70
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102c90
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ca0
unsigned long long __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 unsigned long long in_RAX;
 operator_delete(this + -0x10);
 return in_RAX;
}

// Function: DiamondDerived::func @ 0x102cb0
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102cd0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ce0
unsigned long long __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 unsigned long long in_RAX;
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return in_RAX;
}

// Function: VirtualBase::func @ 0x102cf0
unsigned long long VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102d00
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102d10
unsigned long long __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102d20
unsigned long long __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: RTTIDerivedA::getType @ 0x102d30
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x102d40
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102d50
unsigned long long __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: RTTIDerivedB::getType @ 0x102d60
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x102d68
void _fini(void)
{
 return;
}

