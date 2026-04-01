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
typedef unsigned int uint;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char undefined3;

// External declarations
void __gmon_start__(void);
extern unsigned long __dso_handle;
extern unsigned char completed_0;
void *__dso_handle_ptr(void) { return &__dso_handle; }

// std namespace declarations
namespace std {
    struct ios_base {
        struct Init {
            Init() {}
            void _Init() {}
        };
    };
}
extern std::ios_base::Init __ioinit;

// Base class declaration for virtual function test
class Base {
public:
    virtual void virtual_func() {}
};

// LifecycleClass declaration
class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Forward declaration for type_info
struct type_info;

// RTTI class declarations
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    static type_info typeinfo;
};
class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    virtual unsigned long long getType();
    static type_info typeinfo;
};
class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    virtual unsigned long long getType();
    static type_info typeinfo;
};

// Type info declarations
extern "C" {
    void * PTR__RTTIBase_00103d78;
    void * PTR__RTTIBase_00103da0;
    struct type_info {
        const char *name;
    };
}

namespace std {
    struct type_info {
        const char *name;
    };
    struct Init {
        Init() {}
    };
}
std::ios_base::Init __ioinit;

// Data declarations for string literals
char DAT_0010207d[] = "strlen: %zu\n";
char DAT_0010209b[] = "constructor: %u\n";
char DAT_001020b7[] = "virtual func: %u\n";
char DAT_001020d3[] = "multiple inheritance: %llu\n";
char DAT_001020ef[] = "diamond inheritance: %llu\n";
char DAT_0010210c[] = "operator overload: %llu\n";
char DAT_00102128[] = "template func: %llu\n";
char DAT_00102144[] = "template class: %llu\n";
char DAT_00102160[] = "lambda: %llu\n";
char DAT_0010217c[] = "exception: %u\n";
char DAT_00102199[] = "smart ptr: %llu\n";
char DAT_001021b6[] = "rtti: %u\n";
char DAT_001021d4[] = "Testing C++ features\n";

extern type_info typeinfo;
type_info typeinfo = { "int" };

// Decompiled by BinaryAI
// SHA256: ab9bb528a91221b32fa049eb4a600782fb1f0b2bb8f2b86bec46db2198bcdfaf

// Function: _init @ 0x101000
int _init(void *ctx)
{
 __gmon_start__();
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Forward declaration for operator_new
void * operator_new(unsigned long param_1);

// Function: <EXTERNAL>::operator.new[] @ 0x101030
void * operator_new__(unsigned long param_1)
{
 return operator_new(param_1);
}

// Function: <EXTERNAL>::printf @ 0x101040
#include <stdarg.h>
#include <stdio.h>

extern "C" int vprintf(const char *__format, va_list __args);

int printf(const char *__format, ...)
{
 va_list args;
 va_start(args, __format);
 int result = vprintf(__format, args);
 va_end(args);
 return result;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101050
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
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
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1010b0
void * __dynamic_cast(const void *ptr, const type_info *src_type, const type_info *dst_type, int offset)
{
 void *result;
 result = __dynamic_cast(ptr, src_type, dst_type, offset);
 return result;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x1010c0
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Forward declarations
void * operator_new(unsigned long);
void operator_delete(void *);
void operator_delete__(void *);
int main(void);

// RTTI typeinfo declarations - add static typeinfo members to classes
extern "C" {
    extern type_info RTTIBase_typeinfo;
    extern type_info RTTIDerivedA_typeinfo;
    extern type_info RTTIDerivedB_typeinfo;
}
char stack0x00000008[8];
void __libc_start_main(unsigned long long (*main)(void), int, char**, void*, void*, void*, void*);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1010d0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010e0
void std_ios_base_Init_Init(std::ios_base::Init *param_1)
{
 (void)param_1;
 return;
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
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std::ios_base::Init::Init((std::ios_base::Init *)&__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101170
void _start(void)
{
 __libc_start_main(main,0,&stack0x00000008,0,0,0,0);
 for(;;);
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
 unsigned int uStack_14;
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
 __cxa_throw(puVar1,&typeinfo,0);
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
 void **puVar2;
 void **plVar3;
 long lVar4;
 int iVar5;
 puVar2 = (void **)operator_new(8);
 *puVar2 = PTR__RTTIBase_00103d78;
 plVar3 = (void **)operator_new(8);
 *plVar3 = PTR__RTTIBase_00103da0;
 lVar4 = (long)__dynamic_cast(puVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = (long)__dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 operator_delete(puVar2);
 (*(void (**)(void **))(*(void ***)plVar3 + 1))(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10147f
void test_cpp_oo_features(void)
{
 uint uVar1;
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
 puts(&DAT_001021d4);
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
 printf(&DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(&DAT_0010209b,(unsigned long)uVar1);
 printf(&DAT_001020b7,0x2a);
 printf(&DAT_001020d3,0x47);
 printf(&DAT_001020ef,0x28a);
 printf(&DAT_0010210c,0x16);
 printf(&DAT_00102128,0x27);
 printf(&DAT_00102144,0x10);
 printf(&DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_0010217c,(unsigned long)uVar1);
 printf(&DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 printf(&DAT_001021b6,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1015a8
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1015b2
int template_max_int_(int param_1,int param_2)
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
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1015d0
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

// Function: Container<int>::get @ 0x1015e4
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1015f6
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1015fa
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101602
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

// Function: Container<double>::get @ 0x101618
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10162c
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
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

