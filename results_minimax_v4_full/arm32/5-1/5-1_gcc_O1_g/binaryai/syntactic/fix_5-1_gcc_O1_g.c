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
// SHA256: e887006d2b7cc734b10593330b5a0c94858cad9c019ddee9890acaa73c8d550a

// Function: _init @ 0x109b0
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_000109bc @ 0x109bc
void FUN_000109bc(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x109d0
extern "C" void * operator_new(size_t param_1);

// Forward declarations for classes
struct Base {
    virtual int virtual_func(int);
    virtual ~Base();
    unsigned char *getName();
};

struct Derived : public Base {
    int multiplier;
    virtual int virtual_func(int);
    virtual ~Derived();
    char *getName();
};

// Forward declarations for classes with virtual functions
struct DiamondDerived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;

// Full definitions for classes with virtual functions - MUST be before any function returning these types
struct DiamondDerived {
    int field_0;
    virtual int func();
    virtual ~DiamondDerived();
};

struct MultiDerived {
    int field_0;
    int field_4;
    virtual unsigned int funcA();
    virtual unsigned int funcB();
    virtual ~MultiDerived();
};

struct MiddleA {
    int field_0;
    virtual int func();
    virtual ~MiddleA();
};

struct MiddleB {
    int field_0;
    virtual int func();
    virtual ~MiddleB();
};

struct RTTIBase {
    virtual ~RTTIBase();
};

struct int_ {
    int value;
};

struct double_ {
    double value;
};

struct RTTIDerivedA : public RTTIBase {
    virtual unsigned int getType();
    virtual ~RTTIDerivedA();
    static std::type_info typeinfo;
};

struct RTTIDerivedB : public RTTIBase {
    virtual unsigned int getType();
    virtual ~RTTIDerivedB();
    static std::type_info typeinfo;
};

// Container class template instantiations - MUST be before any member function implementations
struct Container_int_ {
    int data[10];
    unsigned int size;
    Container_int_();
    void push(int);
    unsigned int get(int);
    unsigned int getSize();
};

struct Container_double_ {
    double data[10];
    unsigned int size;
    Container_double_();
    void push(double);
    unsigned long long get(int);
    unsigned int getSize();
};

// Template container forward declarations - these are now fully defined above

// Forward declarations for class member functions that are called before full definitions

// External function declarations - these are provided by the C++ runtime
extern "C" void *malloc(size_t);
extern "C" void free(void *);
extern "C" void __stack_chk_fail(void);
extern "C" void __stack_chk_fail_local(int, int, int, int);



// LifecycleClass declaration
struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// Function: <EXTERNAL>::__aeabi_atexit @ 0x109dc
void __aeabi_atexit(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
void __cxa_allocate_exception(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x10a00
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
void operator_delete(void *param_1,uint param_2)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
void __libc_start_main(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
void * operator_new__(uint param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10a30
void abort(void)
{
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
bool __thiscall std::type_info::operator==(type_info *this,type_info *param_1)
{
 return operator==(this,param_1);
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
void __stack_chk_fail(void)
{
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
void * __dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10a6c
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10a78
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x10a84
size_t strlen(char *__s)
{
 char *p = __s;
 while (*p) p++;
 return p - __s;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void __thiscall std::ios_base::Init::Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
int __aeabi_d2iz(double param_1)
{
 if (param_1 < 0) return (int)(param_1 - 0.99999999999);
 return (int)param_1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
int __aeabi_dcmpgt(double param_1, double param_2)
{
 return param_1 > param_2 ? 1 : 0;
}

// Function: <EXTERNAL>::strncpy @ 0x10ad8
char * strncpy(char *__dest,char *__src,size_t __n)
{
 size_t i;
 for (i = 0; i < __n && __src[i]; i++) {
 __dest[i] = __src[i];
 }
 for (; i < __n; i++) {
 __dest[i] = 0;
 }
 return __dest;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10af0
void __printf_chk(void)
{
 __printf_chk();
 return;
}

// Function: _start @ 0x10b08
void _start(unsigned int param_1, unsigned int param_2)
{
 __libc_start_main(main, param_2, &stack0x00000004, 0, 0, param_1);
 while(1); // Infinite loop if main returns
}

// Function: call_weak_fn @ 0x10b4c
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10b70
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10b9c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10bd4
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10c00
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
 return 0;
}

// Function: test_cpp_constructor @ 0x10c6c
int test_cpp_constructor(void)
{
 void *pvVar1;
 int iVar2;
 pvVar1 = operator_new__(0x14);
 *(unsigned int *)((int)pvVar1 + 4) = 10;
 *(unsigned int *)((int)pvVar1 + 8) = 0x14;
 *(unsigned int *)((int)pvVar1 + 0xc) = 0x1e;
 *(unsigned int *)((int)pvVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass::instance_count + 0x15;
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator_delete__(pvVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return iVar2 + LifecycleClass::instance_count * 1000;
}

// Function: call_virtual_func @ 0x10cd0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x10ce4
void test_cpp_virtual_func(void)
{
 char **local_18;
 char **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_18 = &PTR_virtual_func_0001187c;
 local_14 = &PTR_virtual_func_00011894;
 local_10 = 3;
 call_virtual_func((Base *)&local_18,5);
 call_virtual_func((Base *)&local_14,5);
 if (local_c == 0) {
 return;
 }
}

// Function: test_cpp_multiple_inheritance @ 0x10d68
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10d70
void test_cpp_diamond_inheritance(void)
{
 int iVar1;
 unsigned long long uVar2;
 char **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_14 = &PTR_func_00011968;
 local_10 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_14);
 local_10 = 100;
 uVar2 = DiamondDerived::func((DiamondDerived *)&local_14);
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail(iVar1 + (int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_c,0);
}

// Function: test_cpp_operator_overload @ 0x10df4
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Template forward declarations for types used in test_cpp_template_func
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

// Function: test_cpp_template_func @ 0x10dfc
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

// Function: test_cpp_template_class @ 0x10eac
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10eb4
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x10ebc
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x10f78
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10f84
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001197c;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011990;
 iVar3 = std::type_info::operator==(type_info*)((char*)*(type_info**)(*piVar1 - 4) - 0xc,(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std::type_info::operator==(type_info*)((char*)*(type_info**)(*piVar2 - 4) - 0xc,(type_info *)&RTTIDerivedB::typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 iVar4 = *piVar1;
 __s = *(char **)(*(int *)(iVar4 - 4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 if (iVar4 != 0) {
 (**(void **)(iVar4 + 4))(piVar1);
 }
 if (*piVar2 != 0) {
 (**(void **)(*piVar2 + 4))(piVar2);
 }
 return iVar3 + sVar5;
}

// Function: test_cpp_oo_features @ 0x11074
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(&DAT_000115e4);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_00011608,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_00011628,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00011644,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00011660,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_0001167c,uVar1);
 __printf_chk(1,&DAT_0001169c,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_000116b8,uVar1);
 __printf_chk(1,&DAT_000116d4,0x10);
 __printf_chk(1,&DAT_000116f0,0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_0001170c,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001172c,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0001174c,uVar1);
 return;
}

// Function: main @ 0x1119c
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x111ac
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __aeabi_atexit(&std::__ioinit,std::ios_base::Init::_Init,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x111dc
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x111e4
unsigned char * Base::getName(void)
{
 return &DAT_000115cc;
}

// Function: Base::~Base @ 0x111f0
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x111f4
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived::getName @ 0x11200
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x1120c
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11214
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1121c
unsigned int __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11224
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x1123c
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11260
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11278
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x1129c
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x112b4
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x112d8
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x112f0
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x112f8
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11300
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11304
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11308
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1130c
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return this + *(int *)(*(int *)this + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x1131c
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return this + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11324
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11328
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return this + -8;
}

// Function: Derived::~Derived @ 0x11330
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x11334
Base * __thiscall Base::_Base(Base *this)
{
 operator_delete(this,4);
 return this;
}

// Function: Derived::~Derived @ 0x1134c
Derived * __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,8);
 return this;
}

// Function: MultiDerived::~MultiDerived @ 0x11364
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x10);
 return this;
}

// Function: MultiDerived::~MultiDerived @ 0x1137c
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -8,0x10);
 return this + -8;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11398
RTTIDerivedA * __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this,4);
 return this;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x113b0
RTTIDerivedB * __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this,4);
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x113c8
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x18);
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x113e0
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this + -0x10);
 operator_delete(this + iVar1,0x18);
 return this + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11404
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -8,0x18);
 return this + -8;
}

// Function: template_max<int> @ 0x11420
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x1142c
double template_max_double_(double param_1,double param_2)
{
 int result;
 result = __aeabi_dcmpgt(param_1, param_2);
 return result ? param_1 : param_2;
}

// Function: template_swap<int> @ 0x1145c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11470
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1147c
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

// Function: Container<int>::get @ 0x11494
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 if (param_1 < 0) {
 return 0;
 }
 if (*(int *)(this + 0x28) <= param_1) {
 return 0;
 }
 return *(unsigned int *)(this + param_1 * 4);
}

// Function: Container<int>::getSize @ 0x114c0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x114c8
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x114d4
void Container<double>::push(double param_1)
{
 int in_r0;
 unsigned int *puVar1;
 int iVar2;
 unsigned int in_r2;
 unsigned int in_r3;
 iVar2 = *(int *)(in_r0 + 0x50);
 if (iVar2 < 10) {
 *(int *)(in_r0 + 0x50) = iVar2 + 1;
 puVar1 = (unsigned int *)(in_r0 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 }
 return;
}

// Function: Container<double>::get @ 0x114f0
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 if (param_1 < 0) {
 return 0;
 }
 if (*(int *)(this + 0x50) <= param_1) {
 return 0;
 }
 return *(unsigned long long *)(this + param_1 * 8);
}

// Function: Container<double>::getSize @ 0x11528
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x11530
void _fini(void)
{
 return;
}

