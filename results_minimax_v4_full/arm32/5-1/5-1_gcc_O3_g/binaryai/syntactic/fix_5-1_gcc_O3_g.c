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

// Calling convention macro for member functions - __thiscall is handled by compiler
#define __thiscall

// Decompiled by BinaryAI
// SHA256: a29c7b093f703bf8ac9e895ddf3d476d71c279c690821901c3573f900a7c056c

// Forward declare ALL classes BEFORE any function definitions that use them
// This must come first, before ANY code that references these types

// Forward declare type_info
struct type_info;

// Forward declare all classes in dependency order
struct Base;
struct Derived;
struct MultiDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct LifecycleClass;
struct Init;
struct std;

// Forward declare template functions BEFORE they are used
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

// Full definition of type_info
struct type_info {
    char *_name;
    type_info(const char* n) : _name(const_cast<char*>(n)) {}
};

// Full definitions for classes
struct Base { int virtual_func(int); char* getName(); };
struct Derived { int value; int virtual_func(int); };
struct MultiDerived { unsigned int funcA(); unsigned int funcB(); };
struct RTTIBase {};
struct RTTIDerivedA { unsigned int getType(); };
struct RTTIDerivedB { unsigned int getType(); };

// MiddleA class definition
struct MiddleA {
    int value;
    int func();
};

// MiddleB class definition  
struct MiddleB {
    int value;
    int func();
};

// Full definition of DiamondDerived
struct DiamondDerived {
    int value;
    int func();
    int func(int*);
    int func(int*, int*);
    ~DiamondDerived();
    DiamondDerived* _DiamondDerived(DiamondDerived*);
    DiamondDerived* _DiamondDerived(DiamondDerived*, int);
};

struct LifecycleClass { static int instance_count; };
int LifecycleClass::instance_count = 0;

struct Init;
struct std {
 struct ios_base {
   struct Init { Init(); };
 };
};

Init std::__ioinit;
void * __dso_handle;

// Type info structures
type_info RTTIDerivedA_typeinfo = { (char*)"RTTIDerivedA" };
type_info RTTIDerivedB_typeinfo = { (char*)"RTTIDerivedB" };
type_info RTTIBase_typeinfo = { (char*)"RTTIBase" };
type_info int_typeinfo = { (char*)"int" };

// Template class Container - full definition with member functions
// MUST be defined BEFORE any functions that use it
template<typename T>
struct Container {
    T data[10];
    unsigned int size;
    
    // Constructor
    Container() {
        size = 0;
    }
    
    // push method
    void push(T param_1) {
        if (size < 10) {
            data[size] = param_1;
            size = size + 1;
        }
    }
    
    // get method
    T get(int param_1) {
        if ((-1 < param_1) && (param_1 < (int)size)) {
            return data[param_1];
        }
        return 0;
    }
    
    // getSize method
    unsigned int getSize() {
        return size;
    }
};

// Typedef for Container<int>
typedef Container<int> Container_int_;

// Function: _init @ 0x10920
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: operator_new
void *operator_new(size_t param_1);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
void * __cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
void * __cxa_allocate_exception(uint param_1);

// Function: <EXTERNAL>::puts @ 0x10970
int puts(char *__s);

// Function: operator_delete
void operator_delete(void *param_1, size_t param_2);

// Function: __aeabi_atexit
int __aeabi_atexit(void *arg1, void *arg2, void *arg3);

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
int __libc_start_main(void *main, void *stack, void *init, void *fini, void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::abort @ 0x10994
void abort(void);

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
bool __thiscall std::type_info_operator_eq(type_info *this, type_info *param_1);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
void __stack_chk_fail(void);

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
void __cxa_end_cleanup(void);

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
void * __dynamic_cast(const void *src, const type_info *src_type, const type_info *dst_type, ptrdiff_t src2dst);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
void __cxa_rethrow(void);

// Function: <EXTERNAL>::strlen @ 0x109dc
size_t strlen(char *__s);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x109e8
void __thiscall std_ios_base_Init_Init(void *this);

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
int __aeabi_d2iz(double param_1);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
void __gxx_personality_v0(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x10a18
void __cxa_throw(void *thrown_exception, const type_info *tinfo, void (*dest)(void *));

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
void __aeabi_dcmpgt(void);

// Function: <EXTERNAL>::strncpy @ 0x10a30
char * strncpy(char *__dest, char *__src, size_t __n);

// Function: <EXTERNAL>::__printf_chk @ 0x10a48
int __printf_chk(int flag, const char *format, ...);

// Function: test_cpp_exception @ 0x10a60
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: main @ 0x10b18
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10b28
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __aeabi_atexit(&std::__ioinit,std::ios_base::Init::_Init,&__dso_handle);
 return;
}

// Function: _start @ 0x10b58
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10b9c
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10bc0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10bec
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10c24
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10c50
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x10cbc
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10cdc
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x10ce8
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10cf0
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10cf8
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10d04
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10d0c
void test_cpp_template_func(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int extraout_r1;
 int iVar3;
 unsigned long long uVar4;
 unsigned int in_stack_ffffffe0;
 int in_stack_ffffffe4;
 int iVar5;
 int in_stack_ffffffe8;
 int iVar6;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 ((double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0),
 (double)CONCAT44(iVar3,in_stack_ffffffe8));
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe8);
 uVar4 = __aeabi_d2iz(uVar2,extraout_r1);
 if (iVar3 == 0) {
 return;
 }
 __stack_chk_fail((int)uVar4 + iVar1 + iVar5 + iVar6,(int)((ulonglong)uVar4 >> 0x20),iVar3,0);
}

// Function: test_cpp_template_class @ 0x10db4
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10dbc
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x10dc4
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10dd0
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 type_info *this;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_000116b4;
 piVar2 = (int *)operator_new(4);
 this = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_000116c8;
 iVar3 = std::type_info::operator__(this,(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0x14;
 iVar6 = 0;
 }
 else {
 iVar6 = 10;
 iVar3 = 0x1e;
 }
 iVar4 = std::type_info::operator__
 (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
 iVar3 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo);
 if (iVar3 != 0) {
 iVar6 = iVar6 + 100;
 }
 iVar3 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar4 = *piVar1;
 if (iVar3 != 0) {
 iVar6 = iVar6 + 200;
 }
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (**(void **)(iVar4 + 4))(piVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
 return iVar6 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ed4
void test_cpp_oo_features(void)
{
 size_t sVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 unsigned int extraout_r1;
 int in_stack_ffffffc0;
 int iVar5;
 int in_stack_ffffffc4;
 int iVar6;
 double in_stack_ffffffc8;
 puts(&DAT_000114d8);
 strncpy(&stack0xffffffcc,"Test",0x1f);
 sVar1 = strlen(&stack0xffffffcc);
 __printf_chk(1,&DAT_000114fc,sVar1 + 0x125c);
 __printf_chk(1,&DAT_0001151c,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,&DAT_00011538,0x2a);
 __printf_chk(1,&DAT_00011554,0x47);
 __printf_chk(1,&DAT_00011570,0x28a);
 __printf_chk(1,&DAT_00011590,0x16);
 iVar2 = template_max_int_(3,7);
 uVar3 = 0;
 template_max_double_((double)CONCAT44(in_stack_ffffffc4,in_stack_ffffffc0),in_stack_ffffffc8);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_((int *)&stack0xffffffc0,(int *)&stack0xffffffc4);
 iVar4 = __aeabi_d2iz(uVar3,extraout_r1);
 __printf_chk(1,&DAT_000115ac,iVar4 + iVar2 + iVar5 + iVar6);
 __printf_chk(1,&DAT_000115c8,0x10);
 __printf_chk(1,&DAT_000115e4,0x55);
 uVar3 = test_cpp_exception();
 __printf_chk(1,&DAT_00011600,uVar3);
 __printf_chk(1,&DAT_00011620,0x2bf);
 uVar3 = test_cpp_rtti();
 __printf_chk(1,&DAT_00011640,uVar3);
 return;
}

// Function: Base::virtual_func @ 0x110d0
int Base::virtual_func(Base *param_this, int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x110d8
unsigned char * Base::getName(void)
{
 return &DAT_000114c0;
}

// Function: Base::~Base @ 0x110e4
void Base::_Base(Base *param_this)
{
 return;
}

// Function: Derived::virtual_func @ 0x110e8
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived::getName @ 0x110f4
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11100
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11108
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11110
unsigned int __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11118
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11130
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11154
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x1116c
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11190
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111a8
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111cc
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x111e4
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x111ec
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x111f4
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x111f8
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x111fc
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11200
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return this + *(int *)(*(int *)this + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11210
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return this + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11218
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1121c
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return this + -8;
}

// Function: Derived::~Derived @ 0x11224
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x11228
Base * __thiscall Base::_Base(Base *this)
{
 operator_delete(this,4);
 return this;
}

// Function: Derived::~Derived @ 0x11240
Derived * __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,8);
 return this;
}

// Function: MultiDerived::~MultiDerived @ 0x11258
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x10);
 return this;
}

// Function: MultiDerived::~MultiDerived @ 0x11270
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -8,0x10);
 return this + -8;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1128c
RTTIDerivedB * __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this,4);
 return this;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x112a4
RTTIDerivedA * __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this,4);
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112bc
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x18);
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112d4
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this + -0x10);
 operator_delete(this + iVar1,0x18);
 return this + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112f8
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -8,0x18);
 return this + -8;
}

// Function: template_max<int> @ 0x11314
template<typename T>
T template_max(T param_1, T param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Explicit template instantiations
template int template_max<int>(int, int);
template double template_max<double>(double, double);

// Function: template_max<double> @ 0x11320
double template_max_double_(double param_1,double param_2)
{
 if (param_1 < param_2) {
 return param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11350
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



// Typedef for Container<int>
typedef Container<int> Container_int_;
// Typedef for Container<double>
typedef Container<double> Container_double_;

// Function: Container<int>::Container @ 0x11364
void Container<int>::Container(Container<int> *this)
{
 *(unsigned int *)((uintptr_t)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11370
void Container<int>::push(Container<int> *this, int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11388
unsigned int Container<int>::get(Container<int> *this, int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x113ac
unsigned int Container<int>::getSize(Container<int> *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x113b4
void Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x113c0
void Container<double>::push(double param_1)
{
 int in_r0;
 unsigned int in_r2;
 unsigned int in_r3;
 int iVar1;
 unsigned int *puVar2;
 iVar1 = *(int *)(in_r0 + 0x50);
 if (iVar1 < 10) {
 puVar2 = (unsigned int *)(in_r0 + iVar1 * 8);
 *(int *)(in_r0 + 0x50) = iVar1 + 1;
 *puVar2 = in_r2;
 puVar2[1] = in_r3;
 }
 return;
}

// Function: Container<double>::get @ 0x113f0
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(unsigned long long *)(this + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x1141c
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x11424
void _fini(void)
{
 return;
}

