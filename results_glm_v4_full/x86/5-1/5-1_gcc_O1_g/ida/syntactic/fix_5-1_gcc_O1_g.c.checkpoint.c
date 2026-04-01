#include <string.h>
#include <stdio.h>
#include <new>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

/* ssize_t is provided by system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Helper macros for register access */
#define LODWORD(x)  (*((uint32_t*)&(x)))
#define HIDWORD(x)  (*(((uint32_t*)&(x)) + 1))


/* Inline assembly helper for reading GS segment */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int value;
    __asm__("movl %%gs:%1,%0" : "=r"(value) : "m"(*(unsigned int*)offset));
    return value;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O1_g
 * Processor: pc
 */

/* Forward declarations for C++ classes */
struct SimpleClass {
  char name[32];
};
struct LifecycleClass;
struct Base;
struct Derived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass {
  static int instance_count;
};
int LifecycleClass::instance_count = 0;
template<typename T> struct Container;
typedef Container<int> Container_int;
typedef Container<double> Container_double;

/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Forward declarations for virtual thunks */
int DiamondDerived_virtual_thunk_func(DiamondDerived *_this);

/* Type definitions based on usage patterns */
struct Base {
  int (**_vptr_Base)(...);
};

struct Derived {
  Base base;
  int multiplier;
};

struct MiddleA {
  int (**_vptr_MiddleA)(...);
  int dataA;
};

struct MiddleB {
  int (**_vptr_MiddleB)(...);
  int dataB;
};

struct DiamondDerived {
  int (**_vptr_MiddleA)(...);
  int (**_vptr_MiddleB)(...);
  struct MiddleA _middleA;
  struct MiddleB _middleB;
  int dataA;
  int dataB;
};

template<typename T>
struct Container {
  int size;
  T data[10];
};

struct RTTIBase {
  int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedA {
  int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedB {
  int (**_vptr_RTTIBase)(...);
};

struct MultiDerived {
  int (**_vptr_MiddleA)(...);
  int (**_vptr_MiddleB)(...);
  struct MiddleA _middleA;
  struct MiddleB _middleB;
  int dataA;
  int dataB;
};

/* C++ type_info structure definition */
struct type_info {
    const char *name;
};

/* type_info vtable and destructor implementation */
extern "C" void type_info_dtor(type_info *_this) {
    /* Stub destructor */
}

/* vtable for type_info */
extern "C" void *type_info_vtable[] = {
    (void *)type_info_dtor
};

/* External typeinfo variables */
struct type_info typeinfo_for_RTITIBase;
struct type_info typeinfo_for_RTITIDerivedA;
struct type_info typeinfo_for_RTITIDerivedB;
struct type_info typeinfo_for_int;

/* Dummy vtable pointers */
void *off_4CD4;
void *off_4CEC;
void *off_4DC0;
void *off_4DD4;
void *off_4DE8;

/* External string data */
const char *asc_2018 = "=== C++ OO Features Test ===";
const char *unk_203C = "  test_cpp_member_func: %lld\n";
const char *unk_205A = "  test_cpp_constructor: %d\n";
const char *unk_2076 = "  test_cpp_virtual_func: %lld\n";
const char *unk_2092 = "  test_cpp_multiple_inheritance: %d\n";
const char *unk_20AE = "  test_cpp_diamond_inheritance: %lld\n";
const char *unk_20CB = "  test_cpp_operator_overload: %d\n";
const char *unk_20E7 = "  test_cpp_template_func: %lld\n";
const char *unk_2103 = "  test_cpp_template_class: %d\n";
const char *unk_211F = "  test_cpp_lambda: %d\n";

/* CRT initialization variables and stubs */
extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
void _do_global_dtors_aux(void) {}

/* C++ runtime declarations */
namespace __cxxabiv1 {
    struct __class_type_info;
}
void *__dynamic_cast(void *src_ptr,
                     const __cxxabiv1::__class_type_info *src_type,
                     const __cxxabiv1::__class_type_info *dst_type,
                     ptrdiff_t src2dst_offset);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, struct type_info *type_info, void *dest);

/* C++ runtime stub implementations */
void *__dynamic_cast(void *src_ptr,
                     const __cxxabiv1::__class_type_info *src_type,
                     const __cxxabiv1::__class_type_info *dst_type,
                     ptrdiff_t src2dst_offset)
{
    /* Stub implementation - returns NULL for failed casts */
    return NULL;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub implementation - always succeeds */
    return 0;
}

void *__cxa_allocate_exception(unsigned int size)
{
    /* Stub implementation - allocate memory for exception */
    return operator new(size);
}

void __cxa_throw(void *exception, struct type_info *type_info, void *dest)
{
    /* Stub implementation - does not actually throw */
    /* In a real implementation, this would unwind the stack */
}

/* Operator new/delete declarations */
void *operator new(unsigned int size);
void *operator new[](unsigned int size);
void operator delete(void *ptr, unsigned int size);
void operator delete[](void *ptr);











/* CRT stub function _start removed by preprocessor */







/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */






/* Function: _Z20test_cpp_member_funcv @ 0x1421 */
long long test_cpp_member_func()
{
 long long result; // rax
 SimpleClass obj; // [esp+8h] [ebp-34h] BYREF
 unsigned int v2; // [esp+2Ch] [ebp-10h]

 v2 = __readgsdword(0x14u);
 strcpy(obj.name, "Test");
 memset(&obj.name[5], 0, 27);
 LODWORD(result) = strlen(obj.name) + 4700;
 HIDWORD(result) = v2 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x14B5 */
int test_cpp_constructor()
{
 unsigned int *v0; // eax
 int v1; // esi

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass::instance_count++;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v1 + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1523 */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x153B */
long long test_cpp_virtual_func()
{
 int v0; // ebx
 long long result; // rax
 Base base; // [esp+8h] [ebp-1Ch] BYREF
 Derived derived; // [esp+Ch] [ebp-18h] BYREF
 unsigned int v4; // [esp+14h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 base._vptr_Base = (int (**)(...))&off_4CD4;
 derived.base._vptr_Base = (int (**)(...))&off_4CEC;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 LODWORD(result) = v0 + call_virtual_func((Base *)&derived, 5) + 21;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x15B1 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x15BB */
long long test_cpp_diamond_inheritance()
{
 int v0; // ebx
 long long result; // rax
 DiamondDerived obj; // [esp+14h] [ebp-28h] BYREF

 *(&obj.dataB + 1) = __readgsdword(0x14u);
 obj._vptr_MiddleB = (int (**)(...))&off_4DC0;
 obj.dataB = 50;
 v0 = DiamondDerived_virtual_thunk_func((DiamondDerived *)&obj._middleB);
 obj.dataB = 100;
 LODWORD(result) = v0 + DiamondDerived_virtual_thunk_func((DiamondDerived *)&obj._middleB);
 HIDWORD(result) = *(&obj.dataB + 1) - __readgsdword(0x14u);
 return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1634 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x163E */
long long test_cpp_template_func()
{
 int v0; // ebx
 long long result; // rax
 double r2; // [esp+8h] [ebp-2Ch]
 int a; // [esp+1Ch] [ebp-18h] BYREF
 int b; // [esp+20h] [ebp-14h] BYREF
 unsigned int v5; // [esp+24h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v0 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 LODWORD(result) = b + a + v0 + (int)r2;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x16E2 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x16EC */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x16F6 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1806 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1810 */
size_t test_cpp_rtti()
{
 void *v0; // ebp
 const char *v1; // edi
 int v2; // esi
 int v3; // esi
 size_t v4; // esi
 RTTIBase *obj1; // [esp+18h] [ebp-24h]
 int (**vptr_RTTIBase)(...); // [esp+1Ch] [ebp-20h]

 obj1 = (RTTIBase *)operator new(4u);
 obj1->_vptr_RTTIBase = (int (**)(...))off_4DD4;
 v0 = (void *)operator new(4u);
 *((unsigned int *)v0) = (unsigned int)off_4DE8;
 vptr_RTTIBase = obj1->_vptr_RTTIBase;
 v1 = *(const char **)(*((unsigned int *)obj1->_vptr_RTTIBase - 1) + 4);
 v2 = 10;
 if ( v1 != "12RTTIDerivedA" )
 {
 v2 = 0;
 if ( *v1 != 42 )
 v2 = strcmp(v1, "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v3 = v2 + 20;
 if ( __dynamic_cast(
 obj1,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTITIBase,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTITIDerivedA,
 0) )
 {
 v3 += 100;
 }
 if ( __dynamic_cast(
 v0,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTITIBase,
 (const __cxxabiv1::__class_type_info *)&typeinfo_for_RTITIDerivedB,
 0) )
 {
 v3 += 200;
 }
 v4 = strlen(&v1[*v1 == 42]) + v3;
 vptr_RTTIBase[1](obj1);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x193A */
void test_cpp_oo_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 puts(asc_2018);
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_203C, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_205A, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_2076, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_2092, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_20AE, v4);
 __printf_chk(1, unk_20CB, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, unk_20E7, v5);
 __printf_chk(1, unk_2103, 16);
 __printf_chk(1, unk_211F, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1A75 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Forward declarations for C++ runtime */
void *_dso_handle = 0;
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init() {}
      ~Init() {}
    };
  };
  ios_base::Init __ioinit;
  static void ios_base_Init_dtor_wrapper(void *obj);
}

/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1A8B */
void std::ios_base_Init_dtor_wrapper(void *obj)
{
 ((std::ios_base::Init *)obj)->~Init();
}

void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit(std::ios_base_Init_dtor_wrapper, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AC8 */
int Base_virtual_func(Base *const _this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AD4 */
const char * Base_getName(const Base *_this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1AEA */
void Base_dtor(Base *_this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AF0 */
int Derived_virtual_func(Derived *_this, int x)
{
 return _this->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B02 */
const char * Derived_getName(const Derived *_this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B18 */
int MultiDerived_funcA(MultiDerived *_this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B22 */
int MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1B2C */
int MultiDerived_nonvirtual_thunk_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B36 */
int MiddleA_func(MiddleA *_this)
{
 return *(int *)((char *)&_this->dataA + *((unsigned int *)_this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1B4D */
int MiddleA_virtual_thunk_func(MiddleA *_this)
{
 return *(int *)((char *)&_this->dataA
 + *((unsigned int *)_this->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&_this->_vptr_MiddleA + *((unsigned int *)_this->_vptr_MiddleA - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B6A */
int MiddleB_func(MiddleB *_this)
{
 return *(int *)((char *)&_this->dataB + *((unsigned int *)_this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1B81 */
int MiddleB_virtual_thunk_func(MiddleB *_this)
{
 return *(int *)((char *)&_this->dataB
 + *((unsigned int *)_this->_vptr_MiddleB - 3)
 + *(*(unsigned int **)((char *)&_this->_vptr_MiddleB + *((unsigned int *)_this->_vptr_MiddleB - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B9E */
int DiamondDerived_func(DiamondDerived *_this)
{
 return *(int *)((char *)&_this->dataA + *((unsigned int *)_this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1BB5 */
int DiamondDerived_virtual_thunk_func(DiamondDerived *_this)
{
 return *(int *)((char *)&_this->dataA
 + *((unsigned int *)_this->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&_this->_vptr_MiddleA + *((unsigned int *)_this->_vptr_MiddleA - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BD1 */
int DiamondDerived_nonvirtual_thunk_func(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*(&_this[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BEA */
int RTTIDerivedA_getType(const RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BF4 */
int RTTIDerivedB_getType(const RTTIDerivedB *_this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BFE */
void RTTIDerivedB_dtor(RTTIDerivedB *_this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1C04 */
void RTTIDerivedA_dtor(RTTIDerivedA *_this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C0A */
void DiamondDerived_dtor1(DiamondDerived *_this)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C0F */
void DiamondDerived_nonvirtual_thunk_dtor1(DiamondDerived *_this)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C14 */
void DiamondDerived_virtual_thunk_dtor1(DiamondDerived *_this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C1A */
void MultiDerived_dtor(MultiDerived *_this)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C1F */
void MultiDerived_nonvirtual_thunk_dtor1(MultiDerived *_this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C24 */
void Derived_dtor(Derived *_this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C2A */
void Base_dtor0(Base *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C4E */
void Derived_dtor0(Derived *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1C72 */
void MultiDerived_dtor0(MultiDerived *_this)
{
 operator delete(_this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1C95 */
void MultiDerived_nonvirtual_thunk_dtor0(MultiDerived *_this)
{
 operator delete((char *)_this - 0x10, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1CBC */
void RTTIDerivedA_dtor0(RTTIDerivedA *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1CE0 */
void RTTIDerivedB_dtor0(RTTIDerivedB *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D04 */
void DiamondDerived_dtor0(DiamondDerived *_this)
{
 operator delete(_this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1D27 */
void DiamondDerived_virtual_thunk_dtor0(DiamondDerived *_this)
{
 operator delete((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1D50 */
void DiamondDerived_nonvirtual_thunk_dtor0(DiamondDerived *_this)
{
 operator delete(&_this[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1D77 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = a;
 if ( a < b )
 return b;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1D89 */
double template_max_double(double a, double b)
{
 long double v2; // fst6

 v2 = a;
 if ( a <= (long double)b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1D9C */
void template_swap_int(int *a, int *b)
{
 int v2; // ecx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1DB4 */
void Container_int_ctor(Container_int *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1DC4 */
void Container_int_push(Container_int *_this, int value)
{
 int size; // edx

 size = _this->size;
 if ( size <= 9 )
 {
 _this->size = size + 1;
 _this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1DE2 */
int Container_int_get(const Container_int *_this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && _this->size > idx )
 return _this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1E02 */
int Container_int_getSize(const Container_int *_this)
{
 return _this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1E0E */
void Container_double_ctor(Container_double *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1E1E */
void Container_double_push(Container_double *_this, double value)
{
 int size; // edx

 size = _this->size;
 if ( size <= 9 )
 {
 _this->size = size + 1;
 _this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1E40 */
double Container_double_get(const Container_double *_this, int idx)
{
 if ( idx < 0 )
 return 0.0;
 if ( _this->size > idx )
 return _this->data[idx];
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1E60 */
int Container_double_getSize(const Container_double *_this)
{
 return _this->size;
}


/* Function: __x86.get_pc_thunk.ax @ 0x1E6C */
void *_x86_get_pc_thunk_ax(void)
{
 void *retaddr; // [esp+0h] [ebp+0h]
 __asm__("movl (%%esp), %0" : "=r"(retaddr));
 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x1E70 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1E80 */
void _stack_chk_fail_local()
{
 __asm__("add $_GLOBAL_OFFSET_TABLE_ - (.), %%ebx" ::: "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1EEC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x502C */

/* FAILED to decompile: _Znwj @ 0x5034 */

/* FAILED to decompile: __cxa_finalize @ 0x5038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x503C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x5040 */

/* FAILED to decompile: strlen @ 0x5044 */

/* FAILED to decompile: __cxa_atexit @ 0x5048 */

/* FAILED to decompile: _ZdlPvj @ 0x504C */

/* FAILED to decompile: strcmp @ 0x5054 */

/* FAILED to decompile: __libc_start_main @ 0x5058 */

/* FAILED to decompile: _Znaj @ 0x505C */

/* FAILED to decompile: __stack_chk_fail @ 0x5060 */

/* FAILED to decompile: __dynamic_cast @ 0x5064 */

/* FAILED to decompile: _ZdaPv @ 0x5068 */

/* FAILED to decompile: __cxa_rethrow @ 0x5070 */

/* FAILED to decompile: puts @ 0x5074 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5078 */

/* FAILED to decompile: __cxa_end_catch @ 0x507C */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5080 */

/* FAILED to decompile: __cxa_throw @ 0x5084 */

/* FAILED to decompile: _Unwind_Resume @ 0x508C */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5090 */

/* Total functions decompiled: 97, failed: 22 */
