/* Auto-injected type definitions by preprocessor */
#include <stdint.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* External declarations for CRT functions */
extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
extern void *_dso_handle;

/* External C++ runtime functions */
extern void *operator new(size_t size);
extern void *operator new[](size_t size);
extern void operator delete(void *ptr);
extern void operator delete[](void *ptr);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, void *type_info, void *dest);
extern void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags);

/* External library functions */
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern char *strcpy(char *dest, const char *src);
extern void *memset(void *s, int c, size_t n);
extern int strcmp(const char *s1, const char *s2);

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* Forward declarations for C++ member functions */
int Base_virtual_func(Base *this, int x);
int Derived_virtual_func(Derived *this, int x);
int MultiDerived_funcA(MultiDerived *this);

/* C++ class definitions */
struct Base {
    int (**_vptr$Base)(void);
    int multiplier;
};

struct Derived {
    int (**_vptr$Base)(void);
    int multiplier;
};

struct BaseA {
    int (**_vptr$BaseA)(void);
    int dataA;
};

struct BaseB {
    int (**_vptr$BaseB)(void);
    int dataB;
};

struct MiddleA {
    int (**_vptr$MiddleA)(void);
    int dataA;
};

struct MiddleB {
    int (**_vptr$MiddleB)(void);
    int dataB;
};

struct DiamondDerived {
    int (**_vptr$MiddleA)(void);
    int dataA;
};

struct MultiDerived {
    int (**_vptr$BaseA)(void);
    int dataA;
    int (**_vptr$BaseB)(void);
    int dataB;
};

struct VirtualBase {
    int (**_vptr$VirtualBase)(void);
};

struct RTTIBase {
    int (**_vptr$RTTIBase)(void);
};

struct RTTIDerivedA {
    int (**_vptr$RTTIBase)(void);
};

struct RTTIDerivedB {
    int (**_vptr$RTTIBase)(void);
};

struct LifecycleClass {
    int data;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* External global variables */
extern int LifecycleClass_instance_count;
extern void *std___ioinit;
extern void *off_5CE4;
extern void *off_5D04;
extern void *off_5D28;
extern void *off_5D40;
extern void *off_5DB0;
extern void *off_5DC8;
extern void *off_5DE4;
extern void *off_5ECC;
extern void *off_5EE0;
extern int dword_0;
extern char *asc_31E5;
extern char *aCppL301D;
extern char *aCppL302D;
extern char *aCppL303D;
extern char *aCppL304D;
extern char *aCppL305D;
extern char *aCppL306D;
extern char *aCppL307D;
extern char *aCppL308D;
extern char *aCppL309D;
extern char *byte_9;

/* Type info structures */
struct __class_type_info {
    void *vptr;
    const char *name;
};
extern void *typeinfo_for_int;
extern void *typeinfo_for_RTTIBase;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;

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
 __asm__ volatile ("jmp dword ptr [ebx+8]");
}


/* Function: sub_1160 @ 0x1160 */
int sub_1160(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
void GLOBAL__sub_I_5_1_cpp()
{
 /* C++ iostream initialization stub - removed for C compilation */
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
size_t test_cpp_member_func()
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

  strcpy((char *)s, "Test");
  ((unsigned char *)s)[5] = 0;
  s[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 memset(v6, 0, sizeof(v6));
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x13B0 */
int test_cpp_constructor()
{
 int v0; // esi
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int v3; // esi

 v0 = 0;
 v1 = (unsigned int *)operator new[](0x14u);
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
 operator delete[](v1);
 --LifecycleClass_instance_count;
 return v3 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1420 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1450 */
int test_cpp_virtual_func()
{
 int v0; // esi
 Base v2[2]; // [esp+8h] [ebp-14h] BYREF
 Base v3; // [esp+10h] [ebp-Ch] BYREF

 v3._vptr$Base = (int (**)(void))&off_5CE4;
 v2[1]._vptr$Base = (int (**)(void))(&dword_0 + 3);
 v0 = Base_virtual_func(&v3, 5);
 return v0 + Derived_virtual_func((Derived *)v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x14B0 */
int test_cpp_multiple_inheritance()
{
 int v0; // eax
 MultiDerived v2; // [esp+10h] [ebp-1Ch] BYREF

 v2._vptr$BaseA = (int (**)(void))&off_5D28;
 v2._vptr$BaseB = (int (**)(void))&off_5D40;
 v2.dataA = 100;
 v2.dataB = 200;
 v0 = MultiDerived_funcA(&v2);
 return v0 + (*(int ( **)(BaseB *))v2._vptr$BaseB)((BaseB *)&v2) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1510 */
int test_cpp_diamond_inheritance()
{
 int v0; // eax
 unsigned int v2[3]; // [esp+Ch] [ebp-20h]
 unsigned int v3[5]; // [esp+18h] [ebp-14h] BYREF

  v3[0] = (unsigned int)&off_5DE4;
  v2[1] = (unsigned int)&off_5DC8;
  v3[1] = 50;
  /* virtual thunk to DiamondDerived::func */
 *(unsigned int *)((char *)v2 + (unsigned int)*(&off_5DB0 - 3)) = 100;
 v0 = 0;
 return v0 + (*(int ( **)(unsigned int *))v3[0])(v3);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1580 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1590 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x15A0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15B0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x15C0 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x16B0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x16C0 */
size_t test_cpp_rtti()
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

 v0 = (unsigned int *)operator new(4u);
 *v0 = &off_5ECC;
 v1 = (unsigned int *)operator new(4u);
 *v1 = &off_5EE0;
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
 (const struct __class_type_info *)typeinfo_for_RTTIBase,
 (const struct __class_type_info *)typeinfo_for_RTTIDerivedA,
 0);
 v15 = v0;
 v8 = v6 + 100;
 if ( !v7 )
 v8 = v6;
 v9 = __dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)typeinfo_for_RTTIBase,
 (const struct __class_type_info *)typeinfo_for_RTTIDerivedB,
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
void test_cpp_oo_features()
{
 size_t v0; // eax
 int v1; // esi
 unsigned int *v2; // eax
 unsigned int *v3; // ecx
 int v4; // esi
 int v5; // esi
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // esi
 int v10; // eax
 unsigned int s[2]; // [esp+14h] [ebp-38h] BYREF
 int v13; // [esp+1Ch] [ebp-30h]
 int (*v14)(DiamondDerived *); // [esp+24h] [ebp-28h]
 int v15; // [esp+30h] [ebp-20h]
 int v16; // [esp+34h] [ebp-18h]
 unsigned int *v11; // [esp+20h] [ebp-2Ch]
 unsigned char v17[8]; // [esp+2Ch] [ebp-1Ch] BYREF
 Base v18; // [esp+38h] [ebp-14h] BYREF
 Derived v19; // [esp+3Ch] [ebp-10h] BYREF
 DiamondDerived v20; // [esp+40h] [ebp-Ch] BYREF

 (void)v11;
 (void)v13;
 (void)v15;
 (void)v16;
 (void)v17;

 puts(asc_31E5);
 strcpy((char *)s, "Test");
 ((unsigned char *)s)[5] = 0;
 s[1] &= 0xFFFFu;
 v13 = 0;
 v14 = 0;
 v15 = 0;
 v16 = 0;
 memset(v17, 0, sizeof(v17));
 v0 = strlen((const char *)s);
 printf(aCppL301D, v0 + 4700);
 v1 = 0;
 v2 = (unsigned int *)operator new[](0x14u);
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
 operator delete[](v2);
 --LifecycleClass_instance_count;
 printf(aCppL302D, v4 + 1000 * LifecycleClass_instance_count);
 v18._vptr$Base = (int (**)(void))&off_5CE4;
 s[0] = 3;
 v5 = Base_virtual_func(&v18, 5);
 v19._vptr$Base = (int (**)(void))&off_5D04;
 v19.multiplier = 3;
 v6 = Derived_virtual_func(&v19, 5);
 printf(aCppL303D, v5 + v6 + 21);
 s[1] = (unsigned int)&off_5D40;
 s[0] = 100;
 v13 = 200;
  /* non-virtual thunk to MultiDerived::funcB */
  v7 = 0;
  printf(aCppL304D, v7 + 31);
  v14 = (int (*)(DiamondDerived *))off_5DE4;
 s[1] = (unsigned int)&off_5DC8;
 v15 = 50;
  /* virtual thunk to DiamondDerived::func */
 v20._vptr$MiddleA = (int (**)(void))&off_5DE4;
 v20.dataA = 50;
 v8 = 0;
  v9 = v8;
 v11 = s;
 s[1] = 100;
 v10 = (*v14)(&v20);
 printf(aCppL305D, v9 + v10);
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
int Base_virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AE0 */
int Derived_virtual_func(Derived *this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZN4BaseD2Ev @ 0x1AF0 */
void Base_destructor(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B00 */
void MultiDerived_destructor(MultiDerived *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B10 */
void DiamondDerived_destructor(DiamondDerived *this)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1B20 */
int template_max<int>(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1B30 */
double template_max<double>(double a, double b)
{
 long double v2; // fst6

 v2 = b;
 if ( a > (long double)b )
 return a;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1B50 */
void template_swap<int>(int *a, int *b)
{
 int v2; // edx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1B70 */
void Container_int_Constructor(Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1B80 */
void Container_int_push(Container_int *this, int value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1BA0 */
int Container_int_get(const Container_int *this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1BC0 */
int Container_int_getSize(const Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1BD0 */
void Container_double_Constructor(Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1BE0 */
void Container_double_push(Container_double *this, double value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C00 */
double Container_double_get(const Container_double *this, int idx)
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1C20 */
int Container_double_getSize(const Container_double *this)
{
 return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x1C30 */
const char * Base_getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1C50 */
void Base_deleting_destructor(Base *this)
{
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1C80 */
const char * Derived_getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x1CA0 */
void Derived_deleting_destructor(Derived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1CD0 */
int MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CE0 */
void MultiDerived_deleting_destructor(MultiDerived *this)
{
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1D10 */
int MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1D20 */
void MultiDerived_thunk_funcB()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D30 */
void MultiDerived_thunk_D1()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1D40 */
void MultiDerived_thunk_D0(int a1)
{
 operator delete((void *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x1D70 */
int BaseA_funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1D80 */
void BaseA_destructor(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x1D90 */
void BaseA_deleting_destructor(BaseA *this)
{
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x1DC0 */
int BaseB_funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1DD0 */
void BaseB_destructor(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1DE0 */
void BaseB_deleting_destructor(BaseB *this)
{
 operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E10 */
int MiddleA_func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1E30 */
void MiddleA_destructor(MiddleA *this)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E40 */
void MiddleA_deleting_destructor(MiddleA *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1E70 */
void MiddleA_virtual_thunk_func()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1E90 */
void MiddleA_virtual_thunk_D1()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1EA0 */
void MiddleA_virtual_thunk_D0(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1ED0 */
int MiddleB_func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned int *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1EF0 */
void MiddleB_destructor(MiddleB *this)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x1F00 */
void MiddleB_deleting_destructor(MiddleB *this)
{
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1F30 */
void MiddleB_virtual_thunk_func()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1F50 */
void MiddleB_virtual_thunk_D1()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1F60 */
void MiddleB_virtual_thunk_D0(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1F90 */
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FB0 */
void DiamondDerived_deleting_destructor(DiamondDerived *this)
{
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1FE0 */
void DiamondDerived_thunk_func()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x2000 */
void DiamondDerived_thunk_D1()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x2010 */
void DiamondDerived_thunk_D0(int a1)
{
 operator delete((void *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2040 */
void DiamondDerived_virtual_thunk_func()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x2060 */
void DiamondDerived_virtual_thunk_D1()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2070 */
void DiamondDerived_virtual_thunk_D0(unsigned int *a1)
{
 operator delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x20A0 */
int VirtualBase_func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x20B0 */
void VirtualBase_destructor(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x20C0 */
void VirtualBase_deleting_destructor(VirtualBase *this)
{
 operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x20F0 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2120 */
int RTTIDerivedA_getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2130 */
void RTTIBase_destructor(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2140 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2170 */
int RTTIDerivedB_getType(const RTTIDerivedB *this)
{
 return 2;
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
