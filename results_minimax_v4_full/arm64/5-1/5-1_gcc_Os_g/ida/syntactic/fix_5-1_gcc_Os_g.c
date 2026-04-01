#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// Forward declarations for all classes - MUST come before any usage
struct SimpleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct LifecycleClass;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct Container_double;
struct type_info;

// Class definitions

// SimpleClass
struct SimpleClass {
    char name[32];
};

struct Base {
    int (**_vptr_Base)(...);
    const char* getName() const;
    int virtual_func(int x);
    ~Base();
};

struct Derived {
    int (**_vptr_Base)(...);
    int multiplier;
    const char* getName() const;
    int virtual_func(int x);
    ~Derived();
};

struct MultiDerived {
    int (**_vptr_Base)(...);
    int funcA();
    int funcB();
    ~MultiDerived();
    void _ZN12MultiDerivedD1Ev();
    void _ZN12MultiDerivedD0Ev();
    void _ZN12MultiDerivedD2Ev();
};

struct VirtualBase {
    int (**_vptr_VirtualBase)(...);
    int func();
    ~VirtualBase();
};

struct MiddleA {
    int (**_vptr_MiddleA)(...);
    int dataA;
    int func();
    ~MiddleA();
};

struct MiddleB {
    int (**_vptr_MiddleB)(...);
    int dataB;
    int func();
    ~MiddleB();
};

struct DiamondDerived {
    int (**_vptr_MiddleA)(...);
    int dataA;
    int dataB;
    int func();
    ~DiamondDerived();
    void _ZN14DiamondDerivedD1Ev();
    void _ZN14DiamondDerivedD0Ev();
    void _ZN14DiamondDerivedD2Ev();
    void _ZN14DiamondDerivedD4Ev();
};

struct LifecycleClass {
    static int instance_count;
};

struct RTTIBase {
    virtual ~RTTIBase() {}
};

struct RTTIDerivedA : virtual RTTIBase {
    int getType() const;
    ~RTTIDerivedA();
};

struct RTTIDerivedB : virtual RTTIBase {
    int getType() const;
    ~RTTIDerivedB();
};

struct Container_int {
    int size;
    int data[10];
    Container_int();
    void push(int value);
    int get(int idx) const;
    int getSize() const;
};

struct Container_double {
    int size;
    double data[10];
    Container_double();
    void push(double value);
    double get(int idx) const;
    int getSize() const;
};

template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T* a, T* b);

// Thunk function declarations - moved after class definitions
// These will be defined later in the file

extern "C" {
void* __cxa_allocate_exception(unsigned long long size);
void __cxa_throw(void* thrown_exception, void* type_info, void (*dest)(void*));
void* __cxa_begin_catch(void* exception_header);
void __cxa_end_catch();
void __cxa_rethrow();
void* __dynamic_cast(const void* sub, const void* base_type_info, const void* target_type_info, long long src2long);
int __gxx_personality_v0(int version, int actions, unsigned long long exception_class, void* exception_object, void* context);
}
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1650 @ 0x1650 */
void sub_1650()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1800 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)"typeinfo for int", 0);
}


/* Function: main @ 0x18D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x18E8 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init(&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1A54 */
int test_cpp_member_func()
{
 char *v0; // x0
 struct SimpleClass obj; // [xsp+10h] [xbp+10h] BYREF

 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1AC0 */
int test_cpp_constructor()
{
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


// Forward declaration for call_virtual_func
int call_virtual_func(struct Base *obj, int x);

/* Function: _Z17call_virtual_funcP4Basei @ 0x1AD8 */
int call_virtual_func(struct Base *obj, int x)
{
 return (*obj->_vptr.Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1AE8 */
int test_cpp_virtual_func()
{
 int v0; // w19
 struct Base base; // [xsp+20h] [xbp+20h] BYREF
 struct Derived derived; // [xsp+28h] [xbp+28h] BYREF

 base._vptr.Base = (int (**)(...))&off_13868;
 derived._vptr.Base = (int (**)(...))&off_13898;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + 21 + call_virtual_func(&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1B78 */
int test_cpp_multiple_inheritance()
{
 struct MultiDerived *obj; // x0
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1B80 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1B88 */
int test_cpp_template_func()
{
 int v0; // w19
 double v1; // d8
 int a; // [xsp+20h] [xbp+20h] BYREF
 int b; // [xsp+24h] [xbp+24h] BYREF

 v0 = template_max<int>(3, 7);
 v1 = template_max<double>(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 return (int)v1 + v0 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x1C30 */
int test_cpp_template_class()
{
 int v0; // w1
 int r2[10]; // [xsp+28h] [xbp+28h] BYREF
 int v3; // [xsp+50h] [xbp+50h]

 v3 = 1;
 r2[0] = 10;
 Container<int>::push((Container<int> *const)r2, 20);
 Container<int>::push((Container<int> *const)r2, 30);
 v0 = r2[0];
 if ( v3 <= 0 )
 v0 = 0;
 return v3 + v0 + 3;
}


/* Function: _Z15test_cpp_lambdav @ 0x1CC0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x1CC8 */
int test_cpp_rtti()
{
 long long *v0; // x21
 void *v1; // x20
 long long v2; // x23
 char *v3; // x22
 int v4; // w24
 int v5; // w19
 int v6; // w19
 int v7; // w19

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_13B58;
 v1 = (void *)operator new(8u);
 v2 = *v0;
 *(unsigned long long *)v1 = off_13B80;
 v3 = *(char **)(*(unsigned long long *)(v2 - 8) + 8LL);
 v4 = (unsigned char)*v3;
 if ( v3 == "12RTTIDerivedA" )
 {
 v5 = 10;
 }
 else if ( v4 == 42 )
 {
 v5 = 0;
 }
 else if ( !strcmp(*(const char **)(*(unsigned long long *)(v2 - 8) + 8LL), "12RTTIDerivedA") )
 {
 v5 = 10;
 }
 else
 {
 v5 = 0;
 }
 v6 = v5 + 20;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v6 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v4 == 42 )
 ++v3;
 v7 = v6 + strlen(v3);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v7;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1E24 */
int test_cpp_smart_ptr()
{
 long long v0; // x0
 std::unique_ptr<int> ptr2; // [xsp+30h] [xbp+30h] BYREF
 std::unique_ptr<int []> arr; // [xsp+40h] [xbp+40h] BYREF

 *(unsigned long long *)&ptr2._M_t._M_t._M_head_impl.gap0 = 0;
 ptr2._M_t._M_t._M_head_impl = (int *)operator new(4u);
 *ptr2._M_t._M_t._M_head_impl = 200;
 v0 = operator new[](0x14u);
 *(unsigned long long *)&arr._M_t._M_t._M_head_impl.gap0 = v0;
 *(unsigned long long *)v0 = 0x200000001LL;
 *(unsigned long long *)(v0 + 8) = 0x400000003LL;
 *(unsigned int *)(v0 + 16) = 5;
 std::unique_ptr<int []>::~unique_ptr(&arr);
 std::unique_ptr<int>::~unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
 std::unique_ptr<int>::~unique_ptr(&ptr2);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1EF8 */
int test_cpp_diamond_inheritance()
{
 int v0; // w19
 int v1; // w19
 unsigned char obj[44]; // [xsp+28h] [xbp+28h] BYREF

 *(unsigned long long *)obj = &off_13AC8;
 *(unsigned long long *)&obj[32] = &off_13B30;
 *(unsigned long long *)&obj[16] = &off_13AF8;
 *(unsigned int *)&obj[40] = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)&obj[32]);
 *(unsigned int *)&obj[40] = 100;
 v1 = v0 + virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)&obj[32]);
 DiamondDerived::~DiamondDerived((DiamondDerived *const)obj);
 return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1FA0 */
void test_cpp_oo_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0

 puts(asc_25B2);
 v0 = test_cpp_member_func();
 __printf_chk(1, &unk_25D6, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_25F4, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, &unk_2610, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, &unk_262C, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_2648, v4);
 v5 = test_cpp_operator_overload();
 __printf_chk(1, &unk_2665, v5);
 v6 = test_cpp_template_func();
 __printf_chk(1, &unk_2681, v6);
 v7 = test_cpp_template_class();
 __printf_chk(1, &unk_269D, v7);
 v8 = test_cpp_lambda();
 __printf_chk(1, &unk_26B9, v8);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x20D8 */
int Base::virtual_func(Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x20E0 */
const char * Base::getName(const Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x20EC */
void Base::~Base(Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x20F0 */
int Derived::virtual_func(Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x20FC */
const char * Derived::getName(const Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2108 */
int MultiDerived::funcA(MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2110 */
int MultiDerived::funcB(MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2118 */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2120 */
int VirtualBase::func(VirtualBase *const this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2128 */
void VirtualBase::~VirtualBase(VirtualBase *const this)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x212C */
int MiddleA::func(struct MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr.MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2144 */
long long virtual_thunk_to_MiddleA_func(void *this_ptr)
{
 struct MiddleA *this = (struct MiddleA *)((char *)this_ptr + *((unsigned long long *)*(void **)this_ptr - 3));
 return MiddleA::func(this);
}


/* Function: _ZN7MiddleB4funcEv @ 0x2154 */
int MiddleB::func(struct MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr.MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x216C */
long long virtual_thunk_to_MiddleB_func(struct MiddleB *this)
{
 return MiddleB::func((struct MiddleB *)((char *)this + *((unsigned long long *)this->_vptr.MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x217C */
int DiamondDerived::func(struct DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2194 */
long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return DiamondDerived::func((struct DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x21A4 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN7MiddleAD1Ev @ 0x21AC */
void MiddleA::~MiddleA(struct MiddleA *const this)
{
 this->_vptr.MiddleA = (int (**)(...))&off_138E0;
 *((unsigned long long *)&this->dataA + 1) = &off_13918;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x21C8 */
void virtual_thunk_to_MiddleA_dtor(MiddleA *this)
{
 unsigned long long *v1; // x3

 v1 = (int (***)(...))((char *)&this->_vptr.MiddleA + *((unsigned long long *)this->_vptr.MiddleA - 4));
 *v1 = &off_138E0;
 v1[2] = &off_13918;
}


/* Function: _ZN7MiddleBD1Ev @ 0x21F0 */
void MiddleB::~MiddleB(MiddleB *const this)
{
 this->_vptr.MiddleB = (int (**)(...))&off_13958;
 *((unsigned long long *)&this->dataB + 1) = &off_13990;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x220C */
void virtual_thunk_to_MiddleB_dtor(MiddleB *this)
{
 unsigned long long *v1; // x3

 v1 = (int (***)(...))((char *)&this->_vptr.MiddleB + *((unsigned long long *)this->_vptr.MiddleB - 4));
 *v1 = &off_13958;
 v1[2] = &off_13990;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2234 */
int RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x223C */
int RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2244 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2248 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x224C */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2250 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2254 */
void Derived::~Derived(Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2258 */
void Base::~Base(Base *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2260 */
void Derived::~Derived(Derived *const this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2268 */
void MultiDerived::~MultiDerived(MultiDerived *const this)
{
 operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2270 */
void non_virtual_thunk_to_MultiDerived_dtor(MultiDerived *this)
{
 MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2278 */
void VirtualBase::~VirtualBase(VirtualBase *const this)
{
 operator delete(this, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2280 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2288 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
 operator delete(this, 8u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x2290 */
void MiddleA::~MiddleA(MiddleA *const this)
{
 this->_vptr.MiddleA = (int (**)(...))&off_138E0;
 *((unsigned long long *)&this->dataA + 1) = &off_13918;
 operator delete(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x22B0 */
void virtual_thunk_to_MiddleA_dtor(MiddleA *this)
{
 MiddleA::~MiddleA((MiddleA *)((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x22C0 */
void MiddleB::~MiddleB(MiddleB *const this)
{
 this->_vptr.MiddleB = (int (**)(...))&off_13958;
 *((unsigned long long *)&this->dataB + 1) = &off_13990;
 operator delete(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x22E0 */
void virtual_thunk_to_MiddleB_dtor(MiddleB *this)
{
 MiddleB::~MiddleB((MiddleB *)((char *)this + *((unsigned long long *)this->_vptr.MiddleB - 4)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x22F0 */
void MiddleA::~MiddleA(MiddleA *const this, const int __in_chrg, const void **const __vtt_parm)
{
 int (**v3)(...); // x3
 int (**v4)(...); // x1
 long long v5; // x2

 if ( __in_chrg )
 v3 = (int (**)(...))&off_138E0;
 else
 v3 = (int (**)(...))*__vtt_parm;
 this->_vptr.MiddleA = v3;
 if ( __in_chrg )
 {
 v5 = 16;
 v4 = (int (**)(...))&off_13918;
 }
 else
 {
 v4 = (int (**)(...))__vtt_parm[1];
 v5 = (long long)*(v3 - 3);
 }
 *(int (***)(...))((char *)&this->_vptr.MiddleA + v5) = v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x232C */
void MiddleA::~MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
 MiddleA::~MiddleA(this, 0, __vtt_parm);
}


/* Function: _ZN7MiddleBD4Ev @ 0x2338 */
void MiddleB::~MiddleB(MiddleB *const this, const int __in_chrg, const void **const __vtt_parm)
{
 int (**v3)(...); // x3
 int (**v4)(...); // x1
 long long v5; // x2

 if ( __in_chrg )
 v3 = (int (**)(...))&off_13958;
 else
 v3 = (int (**)(...))*__vtt_parm;
 this->_vptr.MiddleB = v3;
 if ( __in_chrg )
 {
 v5 = 16;
 v4 = (int (**)(...))&off_13990;
 }
 else
 {
 v4 = (int (**)(...))__vtt_parm[1];
 v5 = (long long)*(v3 - 3);
 }
 *(int (***)(...))((char *)&this->_vptr.MiddleB + v5) = v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x2374 */
void MiddleB::~MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
 MiddleB::~MiddleB(this, 0, __vtt_parm);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2380 */
int template_max<int>(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x238C */
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2398 */
void template_swap<int>(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x23AC */
void Container<int>::Container(Container<int> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x23B4 */
void Container<int>::push(Container<int> *const this, int value)
{
 int size; // w2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x23D0 */
int Container<int>::get(const Container<int> *const this, int idx)
{
 if ( idx < 0 || this->size <= idx )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x23F0 */
int Container<int>::getSize(const Container<int> *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x23F8 */
void Container<double>::Container(Container<double> *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2400 */
void Container<double>::push(Container<double> *const this, double value)
{
 int size; // w1

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x241C */
double Container<double>::get(const Container<double> *const this, int idx)
{
 if ( idx < 0 || this->size <= idx )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x243C */
int Container<double>::getSize(const Container<double> *const this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2444 */
void std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *const this)
{
 void *v1; // x0

 v1 = *(void **)&this->_M_t._M_t._M_head_impl.gap0;
 if ( v1 )
 operator delete(v1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2458 */
void std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int []> *const this)
{
 void *v1; // x0

 v1 = *(void **)&this->_M_t._M_t._M_head_impl.gap0;
 if ( v1 )
 operator delete[](v1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2468 */
void DiamondDerived::~DiamondDerived(
 DiamondDerived *const this,
 const int __in_chrg,
 const void **const __vtt_parm)
{
 int (**v6)(...); // x0
 long long v7; // x0
 int (**v8)(...); // x1
 long long ( **v9)(DiamondDerived *__hidden); // x1
 const void **v10; // x2
 const void **v11; // x19
 const void **v12; // x1
 const void **v13; // x1

 if ( __in_chrg )
 v6 = (int (**)(...))&off_13AC8;
 else
 v6 = (int (**)(...))*__vtt_parm;
 this->_vptr.MiddleA = v6;
 if ( __in_chrg )
 {
 v7 = 32;
 v8 = (int (**)(...))&off_13B30;
 }
 else
 {
 v7 = (long long)*(v6 - 3);
 v8 = (int (**)(...))__vtt_parm[5];
 }
 *(int (***)(...))((char *)&this->_vptr.MiddleA + v7) = v8;
 if ( __in_chrg )
 v9 = &off_13AF8;
 else
 v9 = (long long ( **)(DiamondDerived *__hidden))__vtt_parm[6];
 v10 = __vtt_parm + 3;
 v11 = __vtt_parm + 1;
 *((unsigned long long *)&this->dataA + 1) = v9;
 v12 = (const void **)off_13A90;
 if ( !__in_chrg )
 v12 = v10;
 MiddleB::~MiddleB((MiddleB *const)(&this->dataA + 2), v12);
 v13 = (const void **)off_13A80;
 if ( !__in_chrg )
 v13 = v11;
 MiddleA::~MiddleA(this, v13);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2518 */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 DiamondDerived::~DiamondDerived(this, 2, 0);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2524 */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x252C */
void virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x253C */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2564 */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x256C */
void virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x257C */
void DiamondDerived::~DiamondDerived(DiamondDerived *const this, const void **const __vtt_parm)
{
 DiamondDerived::~DiamondDerived(this, 0, __vtt_parm);
}


/* Function: .term_proc @ 0x2588 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14090 */

/* FAILED to decompile: puts @ 0x140A0 */

/* FAILED to decompile: strlen @ 0x140A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x140B0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x140B8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x140C8 */

/* FAILED to decompile: __cxa_finalize @ 0x140D0 */

/* FAILED to decompile: __libc_start_main @ 0x140E0 */

/* FAILED to decompile: _Znwm @ 0x140E8 */

/* FAILED to decompile: _ZdlPvm @ 0x140F0 */

/* FAILED to decompile: strncpy @ 0x140F8 */

/* FAILED to decompile: __dynamic_cast @ 0x14100 */

/* FAILED to decompile: __cxa_atexit @ 0x14108 */

/* FAILED to decompile: _ZdaPv @ 0x14110 */

/* FAILED to decompile: strcmp @ 0x14120 */

/* FAILED to decompile: __cxa_rethrow @ 0x14128 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x14130 */

/* FAILED to decompile: abort @ 0x14138 */

/* FAILED to decompile: __cxa_end_catch @ 0x14140 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x14148 */

/* FAILED to decompile: __cxa_throw @ 0x14150 */

/* FAILED to decompile: _Unwind_Resume @ 0x14160 */

/* FAILED to decompile: __printf_chk @ 0x14168 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14170 */

/* FAILED to decompile: __gmon_start__ @ 0x14180 */

/* Total functions decompiled: 89, failed: 25 */
