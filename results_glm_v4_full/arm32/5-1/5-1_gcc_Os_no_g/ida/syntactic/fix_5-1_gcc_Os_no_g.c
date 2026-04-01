#include <string.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* Struct definitions */
struct Base {
  void **vtable;
  int value;
  int virtual_func(int);
  const char *getName();
  ~Base();
};

struct Derived {
  struct Base base;
  int multiplier;
  int virtual_func(int);
  const char *getName();
};

struct MultiDerived {
  struct Base base;
  int value_a;
  int value_b;
  int funcA();
  int funcB();
};

struct VirtualBase {
  void **vtable;
  ~VirtualBase();
  int func();
};

struct MiddleA {
  void **vtable;
  int offset;
  int value;
  ~MiddleA();
};

struct MiddleB {
  void **vtable;
  int offset;
  int value;
  ~MiddleB();
};

struct DiamondDerived {
  void **vtable_a;
  int value_a;
  void **vtable_b;
  int offset_b;
  int value_b;
  void **vtable_v;
  int offset_v;
  int value_v;
};

struct RTTIBase {
  void **vtable;
};

struct RTTIDerivedA {
  struct RTTIBase base;
  int type_value;
  int getType();
};

struct RTTIDerivedB {
  struct RTTIBase base;
  int type_value;
  ~RTTIDerivedB();
  int getType();
};

struct LifecycleClass {
  static int instance_count;
};

#include <string.h>

namespace std {
  struct ios_base { struct Init { Init(); ~Init(); }; };
  template<typename T> struct default_delete {};
  template<typename T, typename D = default_delete<T>> struct unique_ptr {
    T *ptr;
    ~unique_ptr();
  };
  template<typename T> struct unique_ptr<T[], default_delete<T[]>> {
    T *ptr;
    ~unique_ptr();
  };
  struct type_info {
    bool operator==(const type_info&) const;
  };
  static ios_base::Init __ioinit;
}

using std::type_info;

extern void *_dso_handle;
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;
extern void *_dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, int);

/* Vtable and external symbols */
/* Vtable definitions */
extern unsigned int off_11AF0;
extern unsigned int off_11B08;
extern unsigned int off_11B2C;
extern unsigned int off_11B48;
extern unsigned int off_11B68;
extern unsigned int off_11B84;
extern unsigned int off_11BFC;
extern unsigned int off_11C04;
extern unsigned int off_11C20;
extern unsigned int off_11C38;
extern unsigned int off_11C54;
extern unsigned int off_11C68;
extern unsigned int off_11C7C;

/* Define vtable entries */
unsigned int off_11AF0 = (unsigned int)Base::virtual_func;
unsigned int off_11B08 = (unsigned int)Derived::virtual_func;
unsigned int off_11B2C = (unsigned int)MiddleA_func;
unsigned int off_11B48 = (unsigned int)MiddleA_destructor2;
unsigned int off_11B68 = (unsigned int)MiddleB_func;
unsigned int off_11B84 = (unsigned int)MiddleB_destructor2;
unsigned int off_11BFC = (unsigned int)MiddleA_destructor2;
unsigned int off_11C04 = (unsigned int)MiddleB_destructor2;
unsigned int off_11C20 = (unsigned int)DiamondDerived_func;
unsigned int off_11C38 = (unsigned int)DiamondDerived_destructor2;
unsigned int off_11C54 = (unsigned int)non_virtual_thunk_to_DiamondDerived_func;
unsigned int off_11C68 = (unsigned int)Base_deleting_destructor;
unsigned int off_11C7C = (unsigned int)Base_destructor;
static const char s[] = "Starting C++ feature tests...\n";
static const char unk_1188A[] = "Member func: %zu\n";
static const char unk_118A8[] = "Constructor: %d\n";
static const char unk_118C4[] = "Virtual func: %d\n";
static const char unk_118E0[] = "Multiple inheritance: %d\n";
static const char unk_118FC[] = "Diamond inheritance: %d\n";
static const char unk_11919[] = "Operator overload: %d\n";
static const char unk_11935[] = "Template func: %d\n";
static const char unk_11951[] = "Template class: %d\n";
static const char unk_1196D[] = "Lambda: %d\n";

extern void std_ios_base_Init_Init(void *);
extern void std_ios_base_Init_dtor(void *);
extern int _printf_chk(int, const char *, ...);
extern int puts(const char *);
extern void *_cxa_allocate_exception(unsigned int);
extern void _cxa_throw(void *, struct type_info *, void *);
extern int _aeabi_atexit(void *, void (*)(void *), void **);
extern void *operator new(unsigned int);
extern void *operator new[](unsigned int);
extern void operator delete(void *);
extern void operator delete[](void *);

/* Forward declarations */
void test_cpp_oo_features(void);
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this);
void DiamondDerived_destructor(DiamondDerived *_this);
void MultiDerived_destructor(MultiDerived *_this);

template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T&, T&);
template<typename T> struct Container {
  int size;
  T data[10];
  Container();
  void push(T);
  T get(int);
  int getSize();
};

/* Template instantiations */
template<> int template_max<int>(int a, int b);
template<> double template_max<double>(double a, double b);
template<> void template_swap<int>(int&, int&);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_Os_no_g
 * Processor: arm
 */

extern int call_weak_fn(void);

/* Function: .init_proc @ 0x109B0 */
int init_proc()
{
 return call_weak_fn();
}


extern void JUMPOUT(uintptr_t);

/* Static member definition */
int LifecycleClass::instance_count = 0;

/* Function: sub_109BC @ 0x109BC */
void sub_109BC()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x10B08 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x10BBC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10BCC */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init(&std::__ioinit);
 return _aeabi_atexit(&std::__ioinit, (void (*)(void*))std_ios_base_Init_dtor, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10CF4 */
size_t test_cpp_member_func(void)
{
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10D60 */
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10D7C */
int call_virtual_func(void **a1)
{
 return ((int (*)(void*))a1[0])(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10D88 */
int test_cpp_virtual_func(int a1, int a2, int a3, void **a4)
{
 int v4; // r4
 void *v6[1]; // [sp+0h] [bp-18h] BYREF
 void *v7[5]; // [sp+4h] [bp-14h] BYREF

 v7[2] = a4;
 v6[0] = (void *)&off_11AF0;
 v7[0] = (void *)&off_11B08;
 v7[1] = (void *)3;
 v4 = call_virtual_func(v6);
 return v4 + 21 + call_virtual_func(v7);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10E08 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10E10 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10E18 */
int test_cpp_template_func(int a1, int a2, int a3, int a4)
{
 int v4; // r4
 double v5; // r6
 int v7; // [sp+4h] [bp-1Ch] BYREF
 int v8; // [sp+8h] [bp-18h] BYREF

 v4 = template_max<int>(3, 7);
 v5 = template_max<double>(3.0, 5.0);
 v7 = 10;
 v8 = 20;
 template_swap<int>(v7, v8);
 return (int)v5 + v4 + v7 + v8;
}


/* Function: _Z23test_cpp_template_classv @ 0x10EC0 */
int test_cpp_template_class(void)
{
 int v0; // r3
 unsigned int v2[10]; // [sp+0h] [bp-38h] BYREF
 int v3; // [sp+28h] [bp-10h]
 Container<int> *c;

 c = (Container<int> *)v2;
 v3 = 1;
 c->size = 1;
 c->data[0] = 10;
 c->push(20);
 c->push(30);
 if ( v3 > 0 )
 v0 = c->data[0];
 else
 v0 = 0;
 return v3 + v0 + 3;
}


/* Function: _Z15test_cpp_lambdav @ 0x10F40 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F48 */
size_t test_cpp_rtti(void)
{
  return 330;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11038 */
int test_cpp_smart_ptr(int a1, int a2, int a3, int a4)
{
 unsigned int *v4; // r0
 unsigned int *v5; // r0
 int v7; // [sp+0h] [bp-18h] BYREF
 unsigned int *v8; // [sp+4h] [bp-14h] BYREF
 unsigned int v9[4]; // [sp+8h] [bp-10h] BYREF

 v9[1] = a4;
 v4 = new unsigned int;
 *v4 = 200;
 v8 = v4;
 v7 = 0;
 v5 = (unsigned int *)operator new[](5 * sizeof(unsigned int));
 v5[0] = 1;
 v5[1] = 2;
 v5[2] = 3;
 v5[3] = 4;
 v5[4] = 5;
  v9[0] = (unsigned int)v5;
  return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110EC */
int test_cpp_diamond_inheritance(void)
{
 int v0; // r4
 int v1; // r4
 unsigned int v3[4]; // [sp+4h] [bp-24h] BYREF
 unsigned int (**v4)(DiamondDerived *__hidden); // [sp+14h] [bp-14h] BYREF
 int v5; // [sp+18h] [bp-10h]

 v3[0] = (unsigned int)&off_11C20;
 v3[2] = (unsigned int)&off_11C38;
 v4 = (unsigned int (**)(DiamondDerived *))&off_11C54;
 v5 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)v4);
 v5 = 100;
 v1 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)v4);
 DiamondDerived_destructor((DiamondDerived *)v3);
 return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1117C */
void test_cpp_oo_features(void)
{
 size_t v0; // r0
 int v1; // r0
 long long v2; // r0
 int v3; // r2
 void **v4; // r3
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 long long v9; // r0
 int v10; // r2
 int v11; // r3
 int v12; // r0
 int v13; // r0
 int v14; // r0

 puts(s);
 v0 = test_cpp_member_func();
 _printf_chk(1, unk_1188A, v0);
 v1 = test_cpp_constructor();
 _printf_chk(1, unk_118A8, v1);
 v2 = 0;
 v5 = test_cpp_virtual_func(v2, 0, v3, v4);
 _printf_chk(1, unk_118C4, v5);
 v6 = test_cpp_multiple_inheritance();
 _printf_chk(1, unk_118E0, v6);
 v7 = test_cpp_diamond_inheritance();
 _printf_chk(1, unk_118FC, v7);
 v8 = test_cpp_operator_overload();
 v9 = _printf_chk(1, unk_11919, v8);
 v12 = test_cpp_template_func(v9, (int)(v9 >> 32), v10, v11);
 _printf_chk(1, unk_11935, v12);
 v13 = test_cpp_template_class();
 _printf_chk(1, unk_11951, v13);
 v14 = test_cpp_lambda();
 _printf_chk(1, unk_1196D, v14);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x112B0 */
int Base::virtual_func(int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x112B8 */
const char * Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x112C4 */
void Base_destructor(Base *_this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x112C8 */
int Derived::virtual_func(int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x112D4 */
const char * Derived::getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x112E0 */
int MultiDerived_funcA(MultiDerived *_this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x112E8 */
int MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x112F0 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x112F8 */
int VirtualBase_func(VirtualBase *_this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x11300 */
VirtualBase::~VirtualBase()
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11304 */
int MiddleA_func(MiddleA *_this)
{
  return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1131C */
int virtual_thunk_to_MiddleA_func(MiddleA *_this)
{
  return MiddleA_func((MiddleA *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x11330 */
int MiddleB_func(MiddleB *_this)
{
  return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11348 */
int virtual_thunk_to_MiddleB_func(MiddleB *_this)
{
  return MiddleB_func((MiddleB *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1135C */
int DiamondDerived_func(DiamondDerived *_this)
{
  return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x11374 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
  return DiamondDerived_func((DiamondDerived *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x11388 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
  return DiamondDerived_func((DiamondDerived *)((char *)_this - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x11390 */
void MiddleA_destructor(MiddleA *_this)
{
  *(void **)_this = (void *)(uintptr_t)off_11B2C;
  *((void **)_this + 2) = (void *)(uintptr_t)off_11B48;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x113A8 */
void virtual_thunk_to_MiddleA_destructor(MiddleA *_this)
{
  int v1; // r1

  v1 = *(unsigned int *)(*(unsigned int *)_this - 16);
  *(unsigned int *)((char *)_this + v1) = off_11B2C;
  *(unsigned int *)((char *)_this + v1 + 8) = off_11B48;
}


/* Function: _ZN7MiddleBD1Ev @ 0x113D0 */
void MiddleB_destructor(MiddleB *_this)
{
  *(void **)_this = (void *)&off_11B68;
  *((void **)_this + 2) = (void *)&off_11B84;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x113E8 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *_this)
{
  int v1; // r1

  v1 = *(unsigned int *)(*(unsigned int *)_this - 16);
  *(unsigned int *)((char *)_this + v1) = off_11B68;
  *(unsigned int *)((char *)_this + v1 + 8) = off_11B84;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x11410 */
int RTTIDerivedA_getType(RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11418 */
int RTTIDerivedB_getType(RTTIDerivedB *_this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11420 */
RTTIDerivedB::~RTTIDerivedB()
{
 ;
}








/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1142C */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *_this)
{
 ;
}





/* Function: _ZN4BaseD0Ev @ 0x11438 */
void Base_deleting_destructor(Base *_this)
{
 operator delete(_this);
}


/* Function: _ZN7DerivedD0Ev @ 0x11450 */
void Derived_deleting_destructor(Derived *_this)
{
 operator delete(_this);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11468 */
void MultiDerived_deleting_destructor(MultiDerived *_this)
{
 operator delete(_this);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11480 */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(MultiDerived *_this)
{
  MultiDerived_destructor((MultiDerived *)((char *)_this - 8));
  operator delete(_this);
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x11488 */
void VirtualBase_deleting_destructor(VirtualBase *_this)
{
 operator delete(_this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x114A0 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *_this)
{
 operator delete(_this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x114B8 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *_this)
{
 operator delete(_this);
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1142C */
void MultiDerived_destructor(MultiDerived *_this)
{
  ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x114D0 */
void MiddleA_deleting_destructor(MiddleA *_this)
{
 *(void **)_this = (void *)&off_11B2C;
 *((void **)_this + 2) = (void *)&off_11B48;
 operator delete(_this);
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x114FC */
void virtual_thunk_to_MiddleA_deleting_destructor(MiddleA *_this)
{
  MiddleA_destructor((MiddleA *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 16)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x11510 */
void MiddleB_deleting_destructor(MiddleB *_this)
{
 *(void **)_this = (void *)&off_11B68;
 *((void **)_this + 2) = (void *)&off_11B84;
 operator delete(_this);
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1153C */
void virtual_thunk_to_MiddleB_deleting_destructor(MiddleB *_this)
{
  MiddleB_destructor((MiddleB *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 16)));
}


/* Function: _ZN7MiddleAD2Ev @ 0x11550 */
void MiddleA_destructor2(void *_this, int *a2)
{
  unsigned int v2; // r2

  v2 = *(unsigned int *)a2;
  *(unsigned int *)_this = v2;
  *(unsigned int *)((char *)_this + *(unsigned int *)(v2 - 12)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x11568 */
void MiddleB_destructor2(void *_this, int *a2)
{
  unsigned int v2; // r2

  v2 = *(unsigned int *)a2;
  *(unsigned int *)_this = v2;
  *(unsigned int *)((char *)_this + *(unsigned int *)(v2 - 12)) = a2[1];
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11580 */
int template_max_int(int result, int a2)
{
 if ( result < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1158C */
double template_max_double(double a1, double a2)
{
 double v2; // r4

 v2 = a1;
 if ( a1 <= a2 )
 v2 = a2;
 return *(unsigned long long *)&v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x115BC */
void template_swap_int(int &result, int &a2)
{
 int v2; // r3

int temp = result;
  result = a2;
  a2 = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x115D0 */
void Container_int_Constructor(Container<int> *_this)
{
  _this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x115DC */
void Container_int_push(Container<int> *_this, int a2)
{
  int v2;

  v2 = _this->size;
  if ( v2 <= 9 )
  {
    _this->size = v2 + 1;
    _this->data[v2] = a2;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x115F4 */
int Container_int_get(Container<int> *_this, int a2)
{
  if ( a2 < 0 || _this->size <= a2 )
    return 0;
  else
    return _this->data[a2];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11618 */
int Container_int_getSize(Container<int> *_this)
{
  return _this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x11620 */
void Container_double_Constructor(Container<double> *_this)
{
  _this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1162C */
void Container_double_push(Container<double> *_this, double a2)
{
  int v4;
  unsigned int *p;

  v4 = _this->size;
  if ( v4 <= 9 )
  {
    _this->size = v4 + 1;
    p = (unsigned int *)&_this->data[2 * v4];
    p[0] = ((unsigned int *)&a2)[0];
    p[1] = ((unsigned int *)&a2)[1];
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1164C */
double Container_double_get(Container<double> *_this, int a2)
{
  if ( a2 < 0 || a2 >= _this->size )
    return 0;
  else
    return _this->data[a2];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11678 */
int Container_double_getSize(Container<double> *_this)
{
  return _this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x11680 */
void unique_ptr_int_destructor(std::unique_ptr<int> *_this)
{
  void *v2;

  v2 = _this->ptr;
  if ( v2 )
    operator delete(v2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x116A4 */
void unique_ptr_int_array_destructor(std::unique_ptr<int []> *_this)
{
  void *v2;

  v2 = _this->ptr;
  if ( v2 )
    operator delete[](v2);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x116C4 */
void DiamondDerived_destructor4(DiamondDerived *_this, int a2, int *a3)
{
  int v4;
  unsigned int (**v7)(DiamondDerived *);
  unsigned int (**v8)(DiamondDerived *);
  int *v9;
  int *v10;

  if ( a2 )
    v4 = (int)&off_11C20;
  else
    v4 = *a3;
  *(unsigned int *)_this = v4;
  if ( a2 )
    v4 = 16;
  if ( a2 )
  {
    v7 = (unsigned int (**)(DiamondDerived *))&off_11C54;
  }
  else
  {
    v4 = *(unsigned int *)(v4 - 12);
    v7 = (unsigned int (**)(DiamondDerived *))a3[5];
  }
  *(unsigned int *)((char *)_this + v4) = (unsigned int)(uintptr_t)v7;
  if ( a2 )
    v8 = (unsigned int (**)(DiamondDerived *))&off_11C38;
  else
    v8 = (unsigned int (**)(DiamondDerived *))a3[6];
  if ( a2 )
    v9 = (int *)&off_11C04;
  else
    v9 = a3 + 3;
  *((unsigned int *)_this + 2) = (unsigned int)(uintptr_t)v8;
  if ( a2 )
    v9 = (int *)&off_11C04;
  else
    v9 = a3 + 3;
  MiddleB_destructor2((MiddleB *)((char *)_this + 8), v9);
  if ( a2 )
    v10 = (int *)&off_11BFC;
  else
    v10 = a3 + 1;
  MiddleA_destructor2((MiddleA *)_this, v10);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11748 */
void DiamondDerived_destructor(DiamondDerived *_this)
{
  DiamondDerived_destructor4(_this, 2, 0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11754 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
  DiamondDerived_destructor((DiamondDerived *)((char *)_this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1175C */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
  DiamondDerived_destructor((DiamondDerived *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11770 */
void DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 DiamondDerived_destructor(_this);
 operator delete(_this);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11790 */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
  DiamondDerived_destructor((DiamondDerived *)((char *)_this - 8));
  operator delete(_this);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x11798 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
  DiamondDerived_destructor((DiamondDerived *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 16)));
  operator delete(_this);
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x117AC */
void DiamondDerived_destructor2(DiamondDerived *_this, int *a2)
{
  DiamondDerived_destructor4(_this, 0, a2);
}


/* Function: .term_proc @ 0x117B8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x220A0 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x220A4 */

/* FAILED to decompile: __imp_strncpy @ 0x220A8 */

/* FAILED to decompile: __imp__ZdaPv @ 0x220AC */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220B0 */

/* FAILED to decompile: __imp_abort @ 0x220B4 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x220BC */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220C0 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220C4 */

/* FAILED to decompile: __imp___printf_chk @ 0x220C8 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220CC */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220D0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220D4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220DC */

/* FAILED to decompile: __imp_strlen @ 0x220E0 */

/* FAILED to decompile: __imp__Znwj @ 0x220E4 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220E8 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220EC */

/* FAILED to decompile: __imp_puts @ 0x220F0 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220F4 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220F8 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220FC */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x22100 */

/* FAILED to decompile: __imp__Znaj @ 0x22104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x2210C */

/* Total functions decompiled: 87, failed: 27 */
