/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O1_g
 * Processor: pc
 */

#include <string.h>
#include <stdio.h>
#include <math.h>

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct LifecycleClass LifecycleClass;
typedef struct SimpleClass SimpleClass;
typedef struct type_info type_info;

/* Struct definitions for C++ classes */
struct Base {
 int (**_vptr_Base)(...);
};

struct Derived {
 int (**_vptr_Base)(...);
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

struct MultiDerived {
 Base BaseA;
 Base BaseB;
 int (**_vptr_MultiDerived)(...);
 int data;
};

struct DiamondDerived {
 Base _base;
 MiddleA _middleA;
 int (**_vptr_MiddleA)(...);
 int dataA;
 MiddleB _middleB;
 int (**_vptr_MiddleB)(...);
 int dataB;
};

struct RTTIDerivedA {
 int (**_vptr)(...);
};

struct RTTIDerivedB {
 int (**_vptr)(...);
};

struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

struct SimpleClass {
 char name[32];
};

struct LifecycleClass {
 int instance_count;
};

/* Global static instance count for LifecycleClass */
static int LifecycleClass_instance_count = 0;

struct type_info {
 const char *name;
};

/* C++ RTTI type info stubs */
struct __class_type_info {
 const char *name;
};

static struct type_info typeinfo_for_int = {"int"};
static struct __class_type_info typeinfo_for_RTIBase = {"4Base"};
static struct __class_type_info typeinfo_for_RTIDerivedA = {"12RTTIDerivedA"};
static struct __class_type_info typeinfo_for_RTIDerivedB = {"12RTTIDerivedB"};

/* C++ runtime function declarations */
void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, 
                     const struct __class_type_info *dst_type, int src2dst_offset);
void *__cxa_allocate_exception(unsigned int exception_size);
void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void *));
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *operator new(size_t size);
void operator delete(void *ptr);
void operator delete(void *ptr, size_t size);
void *operator new[](size_t size);
void operator delete[](void *ptr);

/* Forward declarations for functions used before definition */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Additional external declarations */
extern void *_dso_handle;

/* Define _dso_handle as a dummy symbol */
void *_dso_handle = 0;

/* Forward declarations for virtual functions used in vtables */
int Base_virtual_func(Base *_this, int x);
const char *Base_getName(const Base *_this);
void Base_destructor(Base *_this);
void Base_deleting_destructor(Base *_this);
int Derived_virtual_func(Derived *_this, int x);
const char *Derived_getName(const Derived *_this);
void Derived_destructor(Derived *_this);
void Derived_deleting_destructor(Derived *_this);
int RTTIDerivedA_getType(const RTTIDerivedA *_this);
void RTTIDerivedA_destructor(RTTIDerivedA *_this);
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *_this);
int RTTIDerivedB_getType(const RTTIDerivedB *_this);
void RTTIDerivedB_destructor(RTTIDerivedB *_this);
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *_this);
int MiddleB_func(MiddleB *_this);
long long virtual_thunk_to_MiddleB_func(MiddleB *_this);

/* Vtable pointer declarations */
static int (*off_59A0[])(...) = {(int (*)(...))Base_virtual_func, (int (*)(...))Base_getName, (int (*)(...))Base_destructor, (int (*)(...))Base_deleting_destructor};
static int (*off_59D0[])(...) = {(int (*)(...))Derived_virtual_func, (int (*)(...))Derived_getName, (int (*)(...))Derived_destructor, (int (*)(...))Derived_deleting_destructor};
static void *off_5BA0[] = {(void *)RTTIDerivedA_getType, (void *)RTTIDerivedA_destructor, (void *)RTTIDerivedA_deleting_destructor};
static void *off_5BC8[] = {(void *)RTTIDerivedB_getType, (void *)RTTIDerivedB_destructor, (void *)RTTIDerivedB_deleting_destructor};
static void *off_5B78[] = {(void *)MiddleB_func, (void *)virtual_thunk_to_MiddleB_func};

/* C++ std library stubs */
struct ios_base {
  struct Init {
    void (*constructor)(struct Init *);
    void (*destructor)(struct Init *);
  };
};

extern struct ios_base::Init __ioinit;

/* Define __ioinit as a dummy symbol */
struct ios_base::Init __ioinit = {0, 0};

/* String literals for test output */
static const char s[] = "Testing C++ Object-Oriented Features:\n";
static const char unk_303C[] = "  test_cpp_member_func: %d\n";
static const char unk_305A[] = "  test_cpp_constructor: %d\n";
static const char unk_3076[] = "  test_cpp_virtual_func: %d\n";
static const char unk_3092[] = "  test_cpp_multiple_inheritance: %d\n";
static const char unk_30AE[] = "  test_cpp_diamond_inheritance: %d\n";
static const char unk_30CB[] = "  test_cpp_operator_overload: %d\n";
static const char unk_30E7[] = "  test_cpp_template_func: %d\n";
static const char unk_3103[] = "  test_cpp_template_class: %d\n";
static const char unk_311F[] = "  test_cpp_lambda: %d\n";

/* Define JUMPOUT macro */
#define JUMPOUT(x) __builtin_unreachable()

/* printf_chk declaration */
int __printf_chk(int flag, const char *format, ...);

/* Define __readfsqword intrinsic */
static inline unsigned long long __readfsqword(unsigned long long offset)
{
 unsigned long long value;
 __asm__ volatile ("mov %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)(offset)));
 return value;
}

/* C++ runtime function stub implementations */
void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, 
                     const struct __class_type_info *dst_type, int src2dst_offset)
{
    return src_ptr;
}

void *__cxa_allocate_exception(unsigned int exception_size)
{
    return operator new(exception_size);
}

void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void *))
{
    __builtin_unreachable();
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    return 0;
}





/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x2369 */
int test_cpp_member_func()
{
 SimpleClass obj; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 *(unsigned long long *)obj.name = 1953719636;
 memset(&obj.name[8], 0, 24);
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x23DE */
int test_cpp_constructor()
{
 unsigned int *v0; // rdi
 int v1; // eax
 int v2; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 v2 = v1 + 21;
 operator delete[](v0);
 --LifecycleClass_instance_count;
 return v2 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x243C */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x244E */
int test_cpp_virtual_func()
{
 int v0; // ebx
 Base base; // [rsp+8h] [rbp-30h] BYREF
 Derived derived; // [rsp+10h] [rbp-28h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 base._vptr_Base = off_59A0;
 derived._vptr_Base = off_59D0;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + call_virtual_func((Base *)&derived, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24C6 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x24D0 */
int test_cpp_diamond_inheritance()
{
 int v0; // ebx
 DiamondDerived obj; // [rsp+0h] [rbp-58h] BYREF

 *((unsigned long long *)&obj.dataB + 2) = __readfsqword(0x28u);
 obj._vptr_MiddleB = (int (**)(...))&off_5B78;
 obj.dataB = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj._middleB);
 obj.dataB = 100;
 return v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj._middleB);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x254C */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2556 */
int test_cpp_template_func()
{
 double v0; // xmm2_8
 int v1; // ebx
 double r2; // [rsp+8h] [rbp-20h]
 int a; // [rsp+10h] [rbp-18h] BYREF
 int b; // [rsp+14h] [rbp-14h] BYREF
 unsigned long long v6; // [rsp+18h] [rbp-10h]

 v6 = __readfsqword(0x28u);
 v1 = template_max_int(3, 7);
 r2 = template_max_double(1.5, v0);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x25E5 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x25EF */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x25F9 */
int test_cpp_exception()
{
 unsigned int *exception; // rdi

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x26D1 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x26DB */
int test_cpp_rtti()
{
 long long *v0; // r12
 void *v1; // r13
 long long v2; // r14
 const char *v3; // rbp
 int v4; // ebx
 int v5; // ebx
 int v6; // ebx

 v0 = (long long *)operator new(8u);
 *v0 = (long long)off_5BA0;
 v1 = operator new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_5BC8;
 v2 = *v0;
 v3 = *(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 v4 = strcmp(*(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL), "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTIDerivedA,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTIDerivedB,
 0) )
 {
 v5 += 200;
 }
 v6 = strlen(&v3[*v3 == 42]) + v5;
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v6;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2801 */
void test_cpp_oo_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts(s);
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_303C, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_305A, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_3076, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_3092, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_30AE, v4);
 __printf_chk(1, unk_30CB, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, unk_30E7, v5);
 __printf_chk(1, unk_3103, 16);
 __printf_chk(1, unk_311F, 85);
 test_cpp_exception();
}


/* Function: main @ 0x2970 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2987 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __ioinit.constructor(&__ioinit);
 __cxa_atexit((void (*)(void *))__ioinit.destructor, &__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x29B4 */
int Base_virtual_func(Base *_this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x29BC */
const char * Base_getName(const Base *_this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x29C8 */
void Base_destructor(Base *_this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x29CE */
int Derived_virtual_func(Derived *_this, int x)
{
 return _this->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x29DA */
const char * Derived_getName(const Derived *_this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x29E6 */
int MultiDerived_funcA(MultiDerived *_this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x29F0 */
int MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x29FA */
long long non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2A04 */
int MiddleA_func(MiddleA *_this)
{
 return *(int *)((char *)&_this->dataA + *((unsigned long long *)_this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2A19 */
long long virtual_thunk_to_MiddleA_func(MiddleA *_this)
{
 return (unsigned int)(*(int *)((char *)&_this->dataA
 + *((unsigned long long *)_this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&_this->_vptr_MiddleA + *((unsigned long long *)_this->_vptr_MiddleA - 3)) - 3))
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x2A36 */
int MiddleB_func(MiddleB *_this)
{
 return *(int *)((char *)&_this->dataB + *((unsigned long long *)_this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2A4B */
long long virtual_thunk_to_MiddleB_func(MiddleB *_this)
{
 return (unsigned int)(*(int *)((char *)&_this->dataB
 + *((unsigned long long *)_this->_vptr_MiddleB - 3)
 + *(*(unsigned long long **)((char *)&_this->_vptr_MiddleB + *((unsigned long long *)_this->_vptr_MiddleB - 3)) - 3))
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2A68 */
int DiamondDerived_func(DiamondDerived *_this)
{
 return *(int *)((char *)&_this->dataA + *((unsigned long long *)_this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2A7D */
long long virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return (unsigned int)(*(int *)((char *)&_this->dataA
 + *((unsigned long long *)_this->_vptr_MiddleA - 3)
 + *(*(unsigned long long **)((char *)&_this->_vptr_MiddleA + *((unsigned long long *)_this->_vptr_MiddleA - 3)) - 3))
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2A99 */
long long non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return (unsigned int)(*(unsigned int *)((char *)_this + *(unsigned long long *)(*((unsigned long long *)&_this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2AB0 */
int RTTIDerivedA_getType(const RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2ABA */
int RTTIDerivedB_getType(const RTTIDerivedB *_this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2AC4 */
void RTTIDerivedB_destructor(RTTIDerivedB *_this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2ACA */
void RTTIDerivedA_destructor(RTTIDerivedA *_this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2AD0 */
void DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2AD5 */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2ADA */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2AE0 */
void MultiDerived_destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AE5 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2AEA */
void Derived_destructor(Derived *_this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2AF0 */
void Base_deleting_destructor(Base *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2B08 */
void Derived_deleting_destructor(Derived *_this)
{
 operator delete(_this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2B20 */
void MultiDerived_deleting_destructor(MultiDerived *_this)
{
 operator delete(_this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2B37 */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(MultiDerived *_this)
{
 operator delete(&_this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2B52 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2B6A */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2B82 */
void DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 operator delete(_this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2B99 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 operator delete((char *)_this + *((unsigned long long *)_this->_vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2BB7 */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 operator delete(&_this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2BD2 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a >= b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2BDE */
double template_max_double(double a, double b)
{
 return fmax(a, b);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2BE7 */
void template_swap_int(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2BF4 */
void Container_int_Constructor(Container_int *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2C00 */
void Container_int_push(Container_int *_this, int value)
{
 int size; // eax

 size = _this->size;
 if ( size <= 9 )
 {
 _this->size = size + 1;
 _this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2C18 */
int Container_int_get(const Container_int *_this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && _this->size > idx )
 return _this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2C34 */
int Container_int_getSize(const Container_int *_this)
{
 return _this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2C3C */
void Container_double_Constructor(Container_double *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2C48 */
void Container_double_push(Container_double *_this, double a2, double value)
{
 int size; // eax

 size = _this->size;
 if ( size <= 9 )
 {
 _this->size = size + 1;
 _this->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C62 */
double Container_double_get(const Container_double *_this, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && _this->size > idx )
 return _this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7E */
int Container_double_getSize(const Container_double *_this)
{
 return _this->size;
}


/* FAILED to decompile: __printf_chk @ 0x6048 */

/* FAILED to decompile: _Znam @ 0x6050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6058 */

/* FAILED to decompile: strlen @ 0x6060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6068 */

/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: __cxa_atexit @ 0x6080 */

/* FAILED to decompile: _Znwm @ 0x6088 */

/* FAILED to decompile: _ZdlPvm @ 0x6090 */

/* FAILED to decompile: __stack_chk_fail @ 0x6098 */

/* FAILED to decompile: __dynamic_cast @ 0x60A0 */

/* FAILED to decompile: _ZdaPv @ 0x60A8 */

/* FAILED to decompile: strcmp @ 0x60B8 */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: puts @ 0x60D0 */

/* FAILED to decompile: __cxa_end_catch @ 0x60D8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60E0 */

/* FAILED to decompile: __cxa_throw @ 0x60E8 */

/* FAILED to decompile: _Unwind_Resume @ 0x60F8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6100 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6108 */

/* FAILED to decompile: __gmon_start__ @ 0x6118 */

/* Total functions decompiled: 87, failed: 23 */
