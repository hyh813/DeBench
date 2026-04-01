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

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O1_no_g
 * Processor: pc
 */

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

/* Macro definitions */
#define HIBYTE(x) (((x) >> 8) & 0xFF)
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define HIWORD(x) (((x) >> 16) & 0xFFFF)
#define LOBYTE(x) ((x) & 0xFF)

/* Type definitions */
struct type_info {
  const void *vtable;
  const char *name;
};

struct __class_type_info {
  const void *vtable;
  const char *name;
};

/* External variables */
extern char std___ioinit;
extern void *_dso_handle;
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;

/* External function declarations */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void *__cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void *, struct type_info *, void (*)(void *));
extern void *__dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, int);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern char *strcpy(char *dest, const char *src);
extern void *memset(void *s, int c, size_t n);
extern void *malloc(size_t size);
extern void free(void *ptr);
/* C++ operator wrappers for C compilation */
void *operator_new(size_t size) { return malloc(size); }
void *operator_new_array(size_t size) { return malloc(size); }
void operator_delete(void *ptr) { free(ptr); }
void operator_delete_array(void *ptr) { free(ptr); }
extern void _do_global_dtors_aux(void);

/* Global vtable/offset references */
extern const void *off_5CE4;
extern const void *off_5D04;
extern const void *off_5D28;
extern const void *off_5D40;
extern const void *off_5DB0;
extern const void *off_5DE4;
extern const void *off_5DC8;
extern const void *off_5ECC;
extern const void *off_5EE0;
extern char byte_9;
char byte_9 = 0;
extern const char *asc_31E5;
extern const char *aCppL301D;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;

/* C++ std namespace stubs */
struct std_ios_base_Init {
  /* Constructor placeholder */
};

/* LifecycleClass definition */
struct LifecycleClass {
  int instance_count;
};

extern int LifecycleClass_instance_count;
int LifecycleClass_instance_count = 0;

/* C++ class forward declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct Container_int;
struct Container_double;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* C++ class definitions - minimal for compilation */
struct Base {
  const void **vtable;
  int data;
};

struct Derived {
  const void **vtable;
  int data;
};

struct MultiDerived {
  const void **vtable;
  int data;
};

struct DiamondDerived {
  const void **vtable;
  int data;
};

struct Container_int {
  int data[10];
  unsigned int size;
};

struct Container_double {
  double data[10];
  unsigned int size;
};

struct BaseA {
  const void **vtable;
};

struct BaseB {
  const void **vtable;
};

struct MiddleA {
  const void **vtable;
};

struct MiddleB {
  const void **vtable;
};

struct VirtualBase {
  const void **vtable;
};

struct RTTIBase {
  const void **vtable;
};

struct RTTIDerivedA {
  const void **vtable;
};

struct RTTIDerivedB {
  const void **vtable;
};

/* C++ class method declarations - converted to C */
int Base_virtual_func(struct Base *this, int a2);
const char *Base_getName(struct Base *this);
void Base_destructor(struct Base *this);
void Base_deleting_destructor(struct Base *this);
void Base_destructor_1(struct Base *this);

int Derived_virtual_func(struct Derived *this, int a2);
const char *Derived_getName(struct Derived *this);
void Derived_destructor(struct Derived *this);
void Derived_deleting_destructor(struct Derived *this);
void Derived_destructor_1(struct Derived *this);

int MultiDerived_funcA(struct MultiDerived *this);
int MultiDerived_funcB(struct MultiDerived *this);
void MultiDerived_destructor(struct MultiDerived *this);
void MultiDerived_deleting_destructor(struct MultiDerived *this);
void MultiDerived_destructor_1(struct MultiDerived *this);
int non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *this);
void non_virtual_thunk_to_MultiDerived_destructor_1(struct MultiDerived *this);
void non_virtual_thunk_to_MultiDerived_destructor_0(struct MultiDerived *this);

int DiamondDerived_func(struct DiamondDerived *this);
void DiamondDerived_destructor(struct DiamondDerived *this);
void DiamondDerived_deleting_destructor(struct DiamondDerived *this);
void DiamondDerived_destructor_1(struct DiamondDerived *this);
int non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this);
void non_virtual_thunk_to_DiamondDerived_destructor_1(struct DiamondDerived *this);
void non_virtual_thunk_to_DiamondDerived_destructor_0(struct DiamondDerived *this);
int virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this);
void virtual_thunk_to_DiamondDerived_destructor_1(struct DiamondDerived *this);
void virtual_thunk_to_DiamondDerived_destructor_0(struct DiamondDerived *this);

int Container_int_Constructor(struct Container_int *this);
int Container_int_push(struct Container_int *this, int a2);
int Container_int_get(struct Container_int *this, int a2);
int Container_int_getSize(struct Container_int *this);

int Container_double_Constructor(struct Container_double *this);
int Container_double_push(struct Container_double *this, double a2);
double Container_double_get(struct Container_double *this, int a2);
int Container_double_getSize(struct Container_double *this);

int BaseA_funcA(struct BaseA *this);
void BaseA_destructor(struct BaseA *this);
void BaseA_deleting_destructor(struct BaseA *this);
void BaseA_destructor_1(struct BaseA *this);

int BaseB_funcB(struct BaseB *this);
void BaseB_destructor(struct BaseB *this);
void BaseB_deleting_destructor(struct BaseB *this);
void BaseB_destructor_1(struct BaseB *this);

int MiddleA_func(struct MiddleA *this);
void MiddleA_destructor(struct MiddleA *this);
void MiddleA_destructor_1(struct MiddleA *this);
void MiddleA_deleting_destructor(struct MiddleA *this);
int virtual_thunk_to_MiddleA_func(struct MiddleA *this);
void virtual_thunk_to_MiddleA_destructor_1(struct MiddleA *this);
void virtual_thunk_to_MiddleA_destructor_0(struct MiddleA *this);

int MiddleB_func(struct MiddleB *this);
void MiddleB_destructor(struct MiddleB *this);
void MiddleB_destructor_1(struct MiddleB *this);
void MiddleB_deleting_destructor(struct MiddleB *this);
int virtual_thunk_to_MiddleB_func(struct MiddleB *this);
void virtual_thunk_to_MiddleB_destructor_1(struct MiddleB *this);
void virtual_thunk_to_MiddleB_destructor_0(struct MiddleB *this);

int VirtualBase_func(struct VirtualBase *this);
void VirtualBase_destructor(struct VirtualBase *this);
void VirtualBase_deleting_destructor(struct VirtualBase *this);

void RTTIDerivedA_deleting_destructor(struct RTTIDerivedA *this);
int RTTIDerivedA_getType(struct RTTIDerivedA *this);
void RTTIBase_destructor(struct RTTIBase *this);
void RTTIDerivedB_deleting_destructor(struct RTTIDerivedB *this);
int RTTIDerivedB_getType(struct RTTIDerivedB *this);
void RTTIBase_destructor_1(struct RTTIBase *this);

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 /* Stub function - indirect jump through vtable */
}


/* Function: sub_1160 @ 0x1160 */
int sub_1160(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
int GLOBAL__sub_I_5_1_cpp()
{
 /* C++ constructor stub */
 return __cxa_atexit(0, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1330 */
size_t test_cpp_member_func(void)
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 strcpy((char *)s, "Test");
 s[2] = (s[2] & 0xFF) | (0 << 8);
 s[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 memset(v6, 0, sizeof(v6));
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x13B0 */
int test_cpp_constructor(void)
{
 int v0; // esi
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int v3; // esi

 v0 = 0;
 v1 = (unsigned int *)operator_new_array(0x14u);
 v2 = v1;
 do
 {
 *v2 = v0;
 v0 += 10;
 ++v2;
 }
 while ( v0 != 50 );
 ++LifecycleClass_instance_count;
 v3 = v1[2] + LifecycleClass_instance_count;
 operator_delete_array(v1);
 --LifecycleClass_instance_count;
 return v3 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1420 */
int call_virtual_func(struct Base *a1, int a2)
{
 return (*(int (**)(struct Base *, int))a1->vtable)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1450 */
int test_cpp_virtual_func(void)
{
 int v0; // esi
 struct Base base_temp;
 struct Derived derived_temp;

 base_temp.vtable = (const void **)&off_5CE4;
 base_temp.data = 0;
 derived_temp.vtable = (const void **)&off_5D04;
 derived_temp.data = 3;
 v0 = Base_virtual_func(&base_temp, 5);
 return v0 + Derived_virtual_func(&derived_temp, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x14B0 */
int test_cpp_multiple_inheritance(void)
{
 int v0; // eax
 unsigned int v2[2]; // [esp+10h] [ebp-1Ch] BYREF
 unsigned int v3[5]; // [esp+18h] [ebp-14h] BYREF

 v2[0] = (unsigned int)&off_5D28;
 v3[0] = (unsigned int)&off_5D40;
 v2[1] = 100;
 v3[1] = 200;
 v0 = MultiDerived_funcA((MultiDerived *)v2);
 return v0 + 31;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1510 */
int test_cpp_diamond_inheritance(void)
{
 int v0; // esi
 const void *v2[3]; // [esp+Ch] [ebp-20h]
 const void *v3[5]; // [esp+18h] [ebp-14h] BYREF

 v3[0] = &off_5DE4;
 v2[1] = &off_5DC8;
 v3[1] = (const void *)50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)v3);
 *(unsigned int *)((char *)v2 + (unsigned int)*(&off_5DB0 - 3)) = 100;
 return v0 + (*(int ( **)(DiamondDerived *))v3[0])((DiamondDerived *)v3);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1580 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1590 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x15A0 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15B0 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x15C0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x16B0 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x16C0 */
size_t test_cpp_rtti(void)
{
 unsigned int *v0; // edi
 unsigned int *v1; // ebp
 const char *v2; // ecx
 int v3; // esi
 char *v4; // eax
 bool v5; // al
 int v6; // ebp
 void *v7; // eax
 int v8; // edi
 void *v9; // eax
 int v10; // ecx
 int v11; // edi
 size_t v12; // ebp
 char *s1; // [esp+0h] [ebp-1Ch]
 unsigned int *v15; // [esp+4h] [ebp-18h]
 void *lpsrc; // [esp+8h] [ebp-14h]

 v0 = (unsigned int *)operator_new(4u);
 *v0 = (unsigned int)off_5ECC;
 v1 = (unsigned int *)operator_new(4u);
 *v1 = (unsigned int)off_5EE0;
 v2 = *(const char **)(*(unsigned int *)(*v0 - 4) + 4);
 s1 = (char *)v2;
 if ( v2 == "12RTTIDerivedA" )
 {
 v3 = 10;
 }
 else
 {
 v3 = 0;
 if ( *v2 != 42 )
 {
 v3 = 10;
 if ( strcmp(v2, "12RTTIDerivedA") )
 v3 = 0;
 }
 }
 v4 = *(char **)(*(unsigned int *)(*v1 - 4) + 4);
 lpsrc = v1;
 v5 = v4 == "12RTTIDerivedB" || *v4 != 42 && strcmp(v4, "12RTTIDerivedB") == 0;
 v6 = v3 | 0x14;
 if ( !v5 )
 v6 = v3;
 v7 = __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 v15 = v0;
 v8 = v6 + 100;
 if ( !v7 )
 v8 = v6;
 v9 = __dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 v10 = v8 + 200;
 if ( !v9 )
 v10 = v8;
 v11 = v10;
 v12 = strlen(&s1[*s1 == 42]);
 (*(void ( **)(unsigned int *))(*v15 + 4))(v15);
 (*(void ( **)(void *))(*(unsigned int *)lpsrc + 4))(lpsrc);
 return v11 + v12;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1810 */
void test_cpp_oo_features(void)
{
 size_t v0; // eax
 int v1; // esi
 unsigned int *v2; // eax
 unsigned int *v3; // ecx
 int v4; // esi
 int v5; // esi
 int v6; // eax
 int v7; // eax
 int v8; // esi
 int v9; // eax
 unsigned int ( **v10)(MultiDerived *__hidden); // [esp+10h] [ebp-3Ch] BYREF
 unsigned int s[5]; // [esp+14h] [ebp-38h] BYREF
 int v12; // [esp+1Ch] [ebp-30h]
 unsigned int ( **v13)(DiamondDerived *__hidden); // [esp+20h] [ebp-2Ch] BYREF
 int v14; // [esp+24h] [ebp-28h]
 int v15; // [esp+28h] [ebp-24h]
 unsigned char v16[8]; // [esp+2Ch] [ebp-20h] BYREF
 unsigned int ( **v17)(Base *__hidden, int); // [esp+40h] [ebp-Ch] BYREF
 struct Base *v17_ptr;
 struct Derived *v10_ptr;
 struct MultiDerived *v10_ptr2;
 struct DiamondDerived *v13_ptr;

 puts(asc_31E5);
 strcpy((char *)s, "Test");
 BYTE1(s[1]) = 0;
 HIWORD(s[1]) = 0;
 v12 = 0;
 v13 = 0;
 v14 = 0;
 v15 = 0;
 memset(v16, 0, sizeof(v16));
 v10 = (unsigned int ( **)(MultiDerived *__hidden))(byte_9 + 1);
 v0 = strlen((const char *)s);
 printf(aCppL301D, v0 + 4700);
 v1 = 0;
 v2 = (unsigned int *)operator_new_array(0x14u);
 v3 = v2;
 do
 {
 *v3 = v1;
 v1 += 10;
 ++v3;
 }
 while ( v1 != 50 );
 ++LifecycleClass_instance_count;
 v4 = v2[2] + LifecycleClass_instance_count;
 operator_delete_array(v2);
 --LifecycleClass_instance_count;
 printf(aCppL302D, v4 + 1000 * LifecycleClass_instance_count);
 v17 = (const void **)&off_5CE4;
 v10 = (unsigned int ( **)(MultiDerived *__hidden))&off_5D04;
 s[0] = 3;
 v17_ptr = (struct Base *)&v17;
 v10_ptr = (struct Derived *)&v10;
 v5 = Base_virtual_func(v17_ptr, 5);
 v6 = Derived_virtual_func(v10_ptr, 5);
 printf(aCppL303D, v5 + v6 + 21);
 v10 = &off_5D28;
 s[1] = (unsigned int)&off_5D40;
 s[0] = 100;
 v12 = 200;
 v10_ptr2 = (struct MultiDerived *)&s[1];
 v7 = non_virtual_thunk_to_MultiDerived_funcB(v10_ptr2);
 printf(aCppL304D, v7 + 31);
 v10 = &off_5DB0;
 v13 = &off_5DE4;
 s[1] = (unsigned int)&off_5DC8;
 v14 = 50;
 v13_ptr = (struct DiamondDerived *)&v13;
 v8 = virtual_thunk_to_DiamondDerived_func(v13_ptr);
 *(unsigned int *)((char *)s + (unsigned int)*(v10 - 3)) = 100;
 v9 = (*(int (**)(struct DiamondDerived *))v13)(v13_ptr);
 printf(aCppL305D, v8 + v9);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1AB0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AD0 */
int Base_virtual_func(struct Base *this, int a2)
{
 return a2 + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AE0 */
int Derived_virtual_func(struct Derived *this, int a2)
{
 return a2 * *((unsigned int *)this + 1);
}


/* Function: _ZN4BaseD1Ev @ 0x1AF0 */
void Base_destructor_1(struct Base *this)
{
}

/* Function: _ZN4BaseD2Ev @ 0x1AF0 */
void Base_destructor(struct Base *this)
{
}

/* Function: _ZN7DerivedD1Ev @ 0x1AF8 */
void Derived_destructor_1(struct Derived *this)
{
}

/* Function: _ZN7DerivedD2Ev @ 0x1AF8 */
void Derived_destructor(struct Derived *this)
{
}

/* Function: _ZN12MultiDerivedD1Ev @ 0x1B00 */
void MultiDerived_destructor_1(struct MultiDerived *this)
{
}

/* Function: _ZN12MultiDerivedD2Ev @ 0x1B00 */
void MultiDerived_destructor(struct MultiDerived *this)
{
}

/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B10 */
void DiamondDerived_destructor_1(struct DiamondDerived *this)
{
}

/* Function: _ZN14DiamondDerivedD2Ev @ 0x1B10 */
void DiamondDerived_destructor(struct DiamondDerived *this)
{
}

/* Function: _ZN5BaseAD1Ev @ 0x1D80 */
void BaseA_destructor_1(struct BaseA *this)
{
}

/* Function: _ZN5BaseBD1Ev @ 0x1DD0 */
void BaseB_destructor_1(struct BaseB *this)
{
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1B20 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1B30 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a2;
 if ( a1 > (long double)a2 )
 return a1;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1B50 */
unsigned int * template_swap_int(int *a1, unsigned int *a2)
{
 unsigned int *result; // eax
 int v3; // edx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1B70 */
int Container_int_Constructor(struct Container_int *this)
{
 this->size = 0;
 return 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1B80 */
int Container_int_push(struct Container_int *this, int a2)
{
 if ( this->size <= 9 )
 {
 this->data[this->size] = a2;
 this->size++;
 }
 return 0;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1BA0 */
int Container_int_get(struct Container_int *this, int a2)
{
 if ( a2 >= 0 && this->size > a2 )
 return this->data[a2];
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1BC0 */
int Container_int_getSize(struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1BD0 */
int Container_double_Constructor(struct Container_double *this)
{
 this->size = 0;
 return 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1BE0 */
int Container_double_push(struct Container_double *this, double a2)
{
 if ( this->size <= 9 )
 {
 this->data[this->size] = a2;
 this->size++;
 }
 return 0;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C00 */
double Container_double_get(struct Container_double *this, int a2)
{
 if ( a2 >= 0 && this->size > a2 )
 return this->data[a2];
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1C20 */
int Container_double_getSize(struct Container_double *this)
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x1C30 */
const char *Base_getName(struct Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1C50 */
void Base_deleting_destructor(struct Base *this)
{
 operator_delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1C80 */
const char *Derived_getName(struct Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x1CA0 */
void Derived_deleting_destructor(struct Derived *this)
{
 operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1CD0 */
int MultiDerived_funcA(struct MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CE0 */
void MultiDerived_deleting_destructor(struct MultiDerived *this)
{
 operator_delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1D10 */
int MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1D20 */
int non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *this)
{
 return 4040;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D30 */
void non_virtual_thunk_to_MultiDerived_destructor_1(struct MultiDerived *this)
{
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1D40 */
void non_virtual_thunk_to_MultiDerived_destructor_0(struct MultiDerived *this)
{
 operator_delete((char *)this - 8);
}


/* Function: _ZN5BaseA5funcAEv @ 0x1D70 */
int BaseA_funcA(struct BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1D80 */
void BaseA_destructor(struct BaseA *this)
{
}


/* Function: _ZN5BaseAD0Ev @ 0x1D90 */
void BaseA_deleting_destructor(struct BaseA *this)
{
 operator_delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x1DC0 */
int BaseB_funcB(struct BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1DD0 */
void BaseB_destructor(struct BaseB *this)
{
}


/* Function: _ZN5BaseBD0Ev @ 0x1DE0 */
void BaseB_deleting_destructor(struct BaseB *this)
{
 operator_delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E10 */
int MiddleA_func(struct MiddleA *this)
{
 const void *vptr = *this;
 const unsigned int *vtable = (const unsigned int *)vptr;
 unsigned int offset = vtable[-3];
 const char *adjusted_this = (const char *)this + offset;
 return *(unsigned int *)(adjusted_this + 4) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1E30 */
void MiddleA_destructor_1(struct MiddleA *this)
{
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E40 */
void MiddleA_deleting_destructor(struct MiddleA *this)
{
 operator_delete(this);
}

/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1E70 */
int virtual_thunk_to_MiddleA_func(struct MiddleA *this)
{
 const void *vptr = *this;
 const unsigned int *vtable = (const unsigned int *)vptr;
 unsigned int offset1 = vtable[-3];
 const void *vptr2 = *(const void **)((const char *)this + offset1);
 const unsigned int *vtable2 = (const unsigned int *)vptr2;
 unsigned int offset2 = vtable2[-3];
 const char *adjusted_this = (const char *)this + offset1 + offset2;
 return *(unsigned int *)(adjusted_this + 4) + 150;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1E90 */
void virtual_thunk_to_MiddleA_destructor_1(struct MiddleA *this)
{
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1EA0 */
void virtual_thunk_to_MiddleA_destructor_0(struct MiddleA *this)
{
 operator_delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1ED0 */
int MiddleB_func(struct MiddleB *this)
{
 const void *vptr = *this;
 const unsigned int *vtable = (const unsigned int *)vptr;
 unsigned int offset = vtable[-3];
 const char *adjusted_this = (const char *)this + offset;
 return *(unsigned int *)(adjusted_this + 4) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1EF0 */
void MiddleB_destructor_1(struct MiddleB *this)
{
}


/* Function: _ZN7MiddleBD0Ev @ 0x1F00 */
void MiddleB_deleting_destructor(struct MiddleB *this)
{
 operator_delete(this);
}

/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1F30 */
int virtual_thunk_to_MiddleB_func(struct MiddleB *this)
{
 const void *vptr = *this;
 const unsigned int *vtable = (const unsigned int *)vptr;
 unsigned int offset1 = vtable[-3];
 const void *vptr2 = *(const void **)((const char *)this + offset1);
 const unsigned int *vtable2 = (const unsigned int *)vptr2;
 unsigned int offset2 = vtable2[-3];
 const char *adjusted_this = (const char *)this + offset1 + offset2;
 return *(unsigned int *)(adjusted_this + 4) + 200;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1F50 */
void virtual_thunk_to_MiddleB_destructor_1(struct MiddleB *this)
{
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1F60 */
void virtual_thunk_to_MiddleB_destructor_0(struct MiddleB *this)
{
 operator_delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1F90 */
int DiamondDerived_func(struct DiamondDerived *this)
{
 const void *vptr = *this;
 const unsigned int *vtable = (const unsigned int *)vptr;
 unsigned int offset = vtable[-3];
 const char *adjusted_this = (const char *)this + offset;
 return *(unsigned int *)(adjusted_this + 4) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FB0 */
void DiamondDerived_deleting_destructor(struct DiamondDerived *this)
{
 operator_delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1FE0 */
int non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 const unsigned int *vtable = (const unsigned int *)this;
 const unsigned int *vtable2 = (const unsigned int *)vtable[-2];
 unsigned int offset = vtable2[-3];
 const char *adjusted_this = (const char *)this + offset - 4;
 return *(unsigned int *)adjusted_this + 250;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x2000 */
void non_virtual_thunk_to_DiamondDerived_destructor_1(struct DiamondDerived *this)
{
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x2010 */
void non_virtual_thunk_to_DiamondDerived_destructor_0(struct DiamondDerived *this)
{
 operator_delete((char *)this - 8);
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2040 */
int virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 const void *vptr = *this;
 const unsigned int *vtable = (const unsigned int *)vptr;
 unsigned int offset1 = vtable[-3];
 const void *vptr2 = *(const void **)((const char *)this + offset1);
 const unsigned int *vtable2 = (const unsigned int *)vptr2;
 unsigned int offset2 = vtable2[-3];
 const char *adjusted_this = (const char *)this + offset1 + offset2;
 return *(unsigned int *)(adjusted_this + 4) + 250;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x2060 */
void virtual_thunk_to_DiamondDerived_destructor_1(struct DiamondDerived *this)
{
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2070 */
void virtual_thunk_to_DiamondDerived_destructor_0(struct DiamondDerived *this)
{
 operator_delete((char *)this + *(unsigned int *)(*(unsigned int *)this - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x20A0 */
int VirtualBase_func(struct VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x20B0 */
void VirtualBase_destructor(struct VirtualBase *this)
{
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x20C0 */
void VirtualBase_deleting_destructor(struct VirtualBase *this)
{
 operator_delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x20F0 */
void RTTIDerivedA_deleting_destructor(struct RTTIDerivedA *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2120 */
int RTTIDerivedA_getType(struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2130 */
void RTTIBase_destructor(struct RTTIBase *this)
{
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2140 */
void RTTIDerivedB_deleting_destructor(struct RTTIDerivedB *this)
{
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2170 */
int RTTIDerivedB_getType(struct RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN8RTTIBaseD1Ev @ 0x2180 */
void RTTIBase_destructor_1(struct RTTIBase *this)
{
}


/* Function: _ZN7MiddleAD2Ev @ 0x2190 */
void MiddleA_destructor(struct MiddleA *this)
{
}


/* Function: _ZN7MiddleBD2Ev @ 0x21A0 */
void MiddleB_destructor(struct MiddleB *this)
{
}


/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x21CC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x6084 */

/* FAILED to decompile: __cxa_finalize @ 0x6088 */

/* FAILED to decompile: __cxa_begin_catch @ 0x608C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6090 */

/* FAILED to decompile: strlen @ 0x6094 */

/* FAILED to decompile: __cxa_atexit @ 0x6098 */

/* FAILED to decompile: strcmp @ 0x60A0 */

/* FAILED to decompile: __libc_start_main @ 0x60A4 */

/* FAILED to decompile: _Znaj @ 0x60A8 */

/* FAILED to decompile: _ZdlPv @ 0x60AC */

/* FAILED to decompile: __dynamic_cast @ 0x60B0 */

/* FAILED to decompile: _ZdaPv @ 0x60B4 */

/* FAILED to decompile: printf @ 0x60BC */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: puts @ 0x60C4 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: __cxa_end_catch @ 0x60CC */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60D0 */

/* FAILED to decompile: __cxa_throw @ 0x60D4 */

/* FAILED to decompile: _Unwind_Resume @ 0x60DC */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x60E0 */

/* Total functions decompiled: 90, failed: 21 */
