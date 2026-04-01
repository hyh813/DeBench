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

/* Forward declarations and stub definitions */
#define JUMPOUT(x) return

int call_weak_fn() { return 0; }

/* String function declarations */
 char *strcpy(char *dest, const char *src);
 size_t strlen(const char *s);
 int strcmp(const char *s1, const char *s2);
 int printf(const char *format, ...);
 int puts(const char *s);

/* HIBYTE macro */
#define HIBYTE(x) (*((uint8_t*)&(x) + 1))
#define BYTE1(x) (*((uint8_t*)&(x) + 1))
#define HIWORD(x) (*((uint16_t*)&(x) + 1))
#define LODWORD(x) (*((uint32_t*)&(x)))

/* External vtable pointers */
extern int off_12CF0;
extern int off_12D34;
extern int off_12D4C;
extern int off_12DBC;
extern int off_12DD4;
extern int off_12DF0;
extern int off_12D10;
extern int off_12ED8;
extern int off_12EEC;

/* Vtable pointer types */
typedef int (*vtable_ptr)(void);

/* External strings */
extern char asc_1C71[];

/* C++ class structures */
struct Base {
 int (**_vptr$Base)(void);
};
int Base_virtual_func(Base *obj, int x);

struct Derived {
 int (**_vptr$Base)(void);
 int multiplier;
};
int Derived_virtual_func(Derived *obj, int x);

struct BaseA {
 int (**_vptr$BaseA)(void);
 int dataA;
};

struct BaseB {
 int (**_vptr$BaseB)(void);
 int dataB;
};

struct MultiDerived {
 int (**_vptr$BaseA)(void);
 int (**_vptr$BaseB)(void);
 int dataA;
 int dataB;
};
int MultiDerived_funcA(MultiDerived *obj);
int MultiDerived_funcB(MultiDerived *obj);

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
 int (**_vptr$MiddleB)(void);
 int dataA;
 int dataB;
};

/* DiamondDerived method declarations */
int DiamondDerived_func(DiamondDerived *obj);

struct LifecycleClass {
 int dummy;
};
int LifecycleClass_instance_count = 0;

struct RTTIBase {
 int (**_vptr$RTTIBase)(void);
};

struct RTTIDerivedA {
 int (**_vptr$RTTIBase)(void);
};

struct RTTIDerivedB {
 int (**_vptr$RTTIBase)(void);
};

struct VirtualBase {
 int (**_vptr$VirtualBase)(void);
};

struct Container_int {
 int size;
 int data[10];
};

struct Container_double {
 int size;
 double data[10];
};

/* std namespace stubs */
void* std___ioinit;
void* _dso_handle;

int _cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) { return 0; }
void *_cxa_allocate_exception(size_t size);
void _cxa_throw(void *exception, void *type_info, void *dest);
void *_dynamic_cast(void *obj, const void *src_type, const void *dst_type, int flags);
void *operator_new_array(size_t size);
void operator_delete_array(void *ptr);
void *operator_new(size_t size);
void operator_delete(void *ptr);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0xB84 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_B90 @ 0xB90 */
void sub_B90()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xCB8 */
void GLOBAL__sub_I_5_1_cpp()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xE60 */
size_t test_cpp_member_func()
{
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 strcpy((char *)v1, "Test");
 HIBYTE(v1[2]) = 0;
 v1[3] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 return strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xED0 */
int test_cpp_constructor()
{
 unsigned int *v0; // r0
 int v1; // r1
 int i; // r2
 int v3; // r4
 int v4; // r6

 v0 = (unsigned int *)operator_new_array(0x14u);
 v1 = 0;
 for ( i = 0; i != -5; --i )
 {
 v0[-i] = v1;
 v1 += 10;
 }
 v3 = ++LifecycleClass_instance_count;
 v4 = v0[2];
 operator_delete_array(v0);
 --LifecycleClass_instance_count;
 return v4 + v3 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xF48 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xF64 */
int test_cpp_virtual_func()
{
 int v0; // r4
 Derived v2; // [sp+4h] [bp-14h] BYREF
 Base v3; // [sp+Ch] [bp-Ch] BYREF

 v3._vptr$Base = (int (**)(void))&off_12CF0;
 v2.multiplier = 3;
 v0 = Base_virtual_func(&v3, 5);
 return v0 + Derived_virtual_func(&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xFDC */
int test_cpp_multiple_inheritance()
{
 int v0; // r5
 int v1; // r0
 MultiDerived v3; // [sp+0h] [bp-20h] BYREF

 v3.dataB = 200;
 v3.dataA = 100;
 v3._vptr$BaseA = (int (**)(void))&off_12D34;
 v3._vptr$BaseB = (int (**)(void))&off_12D4C;
 v0 = MultiDerived_funcA(&v3);
 v1 = MultiDerived_funcB(&v3);
 return v0 + v1 + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x104C */
int test_cpp_diamond_inheritance()
{
 int v0; // r0
 int v1; // r5
 int v2; // r0
 int *v4; // [sp+0h] [bp-28h]
 int *v5; // [sp+8h] [bp-20h]
 int *v6; // [sp+10h] [bp-18h]
 int v7; // [sp+14h] [bp-14h]

 v6 = (int *)&off_12DF0;
 v4 = (int *)&off_12DBC;
 v5 = (int *)&off_12DD4;
 v0 = DiamondDerived_func((DiamondDerived *)v6);
 v1 = v0;
 v7 = 100;
 v2 = DiamondDerived_func((DiamondDerived *)v6);
 return v2 + v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D8 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10E0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10E8 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10F0 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11C0 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11CC */
size_t test_cpp_rtti()
{
 void *v0; // r4
 void *v1; // r5
 int v2; // r7
 char *v3; // r6
 const char *v4; // r0
 int v5; // r10
 void *v6; // r8
 void *v7; // r9
 const char *v8; // r0
 size_t v9; // r6

 v0 = (unsigned int *)operator_new(4u);
 *(unsigned int *)v0 = (unsigned int)&off_12ED8;
 v1 = operator_new(4u);
 v2 = 0;
 *(unsigned int *)v1 = 0;
 *(unsigned int *)v1 = (unsigned int)&off_12EEC;
 v3 = *(char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( strcmp(v3, "12RTTIDerivedA") == 0 )
 {
 v2 = 10;
 }
 else if ( *v3 != 42 )
 {
 v2 = 0;
 if ( !strcmp(*(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4), "12RTTIDerivedA") )
 v2 = 10;
 }
 v4 = *(const char **)(*(unsigned int *)(*(unsigned int *)v1 - 4) + 4);
 if ( strcmp(v4, "12RTTIDerivedB") == 0 )
 {
 v5 = 1;
 }
 else
 {
 v5 = 0;
 if ( *v4 != 42 )
 v5 = strcmp(v4, "12RTTIDerivedB") == 0;
 }
 v6 = _dynamic_cast(
 v0,
 (const struct __class_type_info *)0,
 (const struct __class_type_info *)0,
 0);
 v7 = _dynamic_cast(
 v1,
 (const struct __class_type_info *)0,
 (const struct __class_type_info *)0,
 0);
 v8 = v3 + 1;
 if ( *v3 != 42 )
 v8 = v3;
 v9 = strlen(v8);
 ((void (*)(void *))(*(unsigned int *)v0 + 4))(v0);
 ((void (*)(void *))(*(unsigned int *)v1 + 4))(v1);
 if ( v5 )
 v2 |= 0x14u;
 if ( v6 )
 v2 += 100;
 if ( v7 )
 v2 += 200;
 return v2 + v9;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x136C */
void test_cpp_oo_features()
{
 int v0; // r4
 size_t v1; // r0
 unsigned int *v2; // r0
 int i; // r1
 int v4; // r4
 int v5; // r6
 int v6; // r5
 int v7; // r0
 int v8; // r0
 int v9; // r0
 int v10; // r6
 void ( **v11)(); // r1
 int v12; // r0
 unsigned int *v13; // [sp+0h] [bp-40h] BYREF
 unsigned int v14[2]; // [sp+4h] [bp-3Ch] BYREF
 int v15; // [sp+Ch] [bp-34h]
 void ( **v16)(); // [sp+10h] [bp-30h]
 int v17; // [sp+14h] [bp-2Ch]
 int v18; // [sp+18h] [bp-28h]
 int v19; // [sp+1Ch] [bp-24h]
 short v20; // [sp+20h] [bp-20h]
 char v21; // [sp+22h] [bp-1Eh]
 char v22; // [sp+23h] [bp-1Dh]
 Base v23; // [sp+24h] [bp-1Ch] BYREF

 puts(asc_1C71);
 strcpy((char *)v14, "Test");
 BYTE1(v14[1]) = 0;
 HIWORD(v14[1]) = 0;
 v15 = 0;
 v16 = 0;
 v17 = 0;
 v18 = 0;
 v19 = 0;
 v20 = 0;
 v21 = 0;
 v0 = 0;
 v22 = 0;
 v13 = 0;
 v1 = strlen((const char *)v14);
 printf("Test length: %d\n", v1 + 4700);
  v2 = (unsigned int *)operator_new_array(0x14u);
 for ( i = 0; i != -5; --i )
 {
 ((unsigned int *)v2)[-i] = v0;
 v0 += 10;
 }
 v4 = ++LifecycleClass_instance_count;
 v5 = v2[2];
 operator_delete_array(v2);
 --LifecycleClass_instance_count;
 printf("Constructor test: %d\n", v5 + v4 + 1000 * LifecycleClass_instance_count);
 v23._vptr$Base = (int (**)(void))&off_12CF0;
 v14[0] = 3;
 v13 = (unsigned int *)&off_12D10;
 v6 = Base_virtual_func(&v23, 5);
 v7 = Derived_virtual_func((Derived *)v14, 5);
 printf("Virtual func test: %d\n", v6 + v7 + 21);
 v14[1] = (unsigned int)&off_12D4C;
 v15 = 200;
 v14[0] = 100;
 v13 = (unsigned int *)&off_12D34;
 v8 = MultiDerived_funcB((MultiDerived *)v13);
 printf("Multiple inheritance test: %d\n", v8 + 31);
 v16 = (void ( **)())&off_12DF0;
 v17 = 50;
 v13 = (unsigned int *)&off_12DBC;
 v14[1] = (unsigned int)&off_12DD4;
 v9 = DiamondDerived_func((DiamondDerived *)v13);
 v10 = v9;
  v11 = v16;
 *(unsigned int *)((char *)v14 + *(unsigned int *)((char *)v13 + 0xFFFFFFF4)) = 100;
 v12 = DiamondDerived_func((DiamondDerived *)v13);
 v12 = v10 + 100;
 printf("Diamond inheritance test: %d\n", v12 + v10);
 printf("Operator overload test: %d\n", 22);
 printf("Template func test: %d\n", 39);
 printf("Template class test: %d\n", 16);
 printf("Lambda test: %d\n", 85);
 test_cpp_exception();
}


/* Function: main @ 0x1648 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x165C */
int Base_virtual_func(Base *obj, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1664 */
int Derived_virtual_func(Derived *obj, int x)
{
 return obj->multiplier * x;
}


/* Function: _ZN4BaseD2Ev @ 0x1670 */
void Base_dtor(Base *obj)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1674 */
void MultiDerived_dtor(MultiDerived *obj)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1678 */
void DiamondDerived_dtor(DiamondDerived *obj)
{
 ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x167C */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1688 */
int template_max_double(double a, double b)
{
 int v2; // r5

 v2 = LODWORD(b);
 if ( a > b )
 return LODWORD(a);
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16BC */
void template_swap_int(int *a, int *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16D0 */
void Container_int_ctor(Container_int *obj)
{
 obj->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16DC */
void Container_int_push(Container_int *obj, int val)
{
 int size; // r2

 size = obj->size;
 if ( size <= 9 )
 {
 obj->size = size + 1;
 obj->data[size] = val;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F4 */
int Container_int_get(const Container_int *obj, int index)
{
 int result; // r0

 result = 0;
 if ( index >= 0 && obj->size > index )
 return obj->data[index];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1714 */
int Container_int_getSize(const Container_int *obj)
{
 return obj->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x171C */
void Container_double_ctor(Container_double *obj)
{
 obj->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1728 */
void Container_double_push(Container_double *obj, double val)
{
 int size; // r12

 size = obj->size;
 if ( size <= 9 )
 {
 obj->data[size] = val;
 obj->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x174C */
double Container_double_get(const Container_double *obj, int index)
{
 double result; // r0

 result = 0.0;
 if ( index >= 0 && obj->size > index )
 return obj->data[index];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1778 */
int Container_double_getSize(const Container_double *obj)
{
 return obj->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x1780 */
const char * Base_getName(const Base *obj)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1790 */
void Base_dtor_delete(Base *obj)
{
 operator_delete(obj);
}


/* Function: _ZNK7Derived7getNameEv @ 0x17A0 */
const char * Derived_getName(const Derived *obj)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x17B0 */
void Derived_dtor_delete(Derived *obj)
{
 operator_delete(obj);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x17C0 */
int MultiDerived_funcA(MultiDerived *obj)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x17C8 */
void MultiDerived_dtor_delete(MultiDerived *obj)
{
 operator_delete(obj);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17D8 */
int MultiDerived_funcB(MultiDerived *obj)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x17E0 */
void MultiDerived_funcB_thunk()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x17E8 */
void MultiDerived_dtor_thunk()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x17EC */
void MultiDerived_dtor_delete_thunk(int a1)
{
 operator_delete((void *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x1800 */
int BaseA_funcA(BaseA *obj)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1808 */
void BaseA_dtor(BaseA *obj)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x180C */
void BaseA_dtor_delete(BaseA *obj)
{
 operator_delete(obj);
}


/* Function: _ZN5BaseB5funcBEv @ 0x181C */
int BaseB_funcB(BaseB *obj)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1824 */
void BaseB_dtor(BaseB *obj)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1828 */
void BaseB_dtor_delete(BaseB *obj)
{
 operator_delete(obj);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1838 */
int MiddleA_func(MiddleA *obj)
{
 return *(int *)((char *)&obj->dataA + *((unsigned int *)obj->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1850 */
void MiddleA_dtor(MiddleA *obj)
{
 ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1854 */
void MiddleA_dtor_delete(MiddleA *obj)
{
 operator_delete(obj);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1864 */
void MiddleA_func_thunk()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1884 */
void MiddleA_dtor_thunk()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1888 */
void MiddleA_dtor_delete_thunk(unsigned int *a1)
{
 operator_delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A4 */
int MiddleB_func(MiddleB *obj)
{
 return *(int *)((char *)&obj->dataB + *((unsigned int *)obj->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x18BC */
void MiddleB_dtor(MiddleB *obj)
{
 ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x18C0 */
void MiddleB_dtor_delete(MiddleB *obj)
{
 operator_delete(obj);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x18D0 */
void MiddleB_func_thunk()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x18F0 */
void MiddleB_dtor_thunk()
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x18F4 */
void MiddleB_dtor_delete_thunk(unsigned int *a1)
{
 operator_delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1910 */
int DiamondDerived_func(DiamondDerived *obj)
{
 return *(int *)((char *)&obj->dataA + *((unsigned int *)obj->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1928 */
void DiamondDerived_dtor_delete(DiamondDerived *obj)
{
 operator_delete(obj);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1938 */
void DiamondDerived_func_thunk()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1950 */
void DiamondDerived_dtor_thunk()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1954 */
void DiamondDerived_dtor_delete_thunk(int a1)
{
 operator_delete((void *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1968 */
void DiamondDerived_func_thunk2()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1988 */
void DiamondDerived_dtor_thunk2()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x198C */
void DiamondDerived_dtor_delete_thunk2(unsigned int *a1)
{
 operator_delete((char *)a1 + *(unsigned int *)(*a1 - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x19A8 */
int VirtualBase_func(VirtualBase *obj)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x19B0 */
void VirtualBase_dtor(VirtualBase *obj)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x19B4 */
void VirtualBase_dtor_delete(VirtualBase *obj)
{
 operator_delete(obj);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x19C4 */
void RTTIDerivedA_dtor_delete(RTTIDerivedA *obj)
{
 operator_delete(obj);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x19D4 */
int RTTIDerivedA_getType(const RTTIDerivedA *obj)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x19DC */
void RTTIBase_dtor(RTTIBase *obj)
{
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x19E0 */
void RTTIDerivedB_dtor_delete(RTTIDerivedB *obj)
{
 operator_delete(obj);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19F0 */
int RTTIDerivedB_getType(const RTTIDerivedB *obj)
{
 return 2;
}


/* Function: .term_proc @ 0x19F8 */
void term_proc()
{
 ;
}



/* FAILED to decompile: __imp__Znwj @ 0x130CC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x130D0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x130D4 */

/* FAILED to decompile: __imp_printf @ 0x130D8 */

/* FAILED to decompile: __imp_puts @ 0x130DC */

/* FAILED to decompile: __imp___libc_start_main @ 0x130E4 */

/* FAILED to decompile: __imp__Znaj @ 0x130E8 */

/* FAILED to decompile: __imp_abort @ 0x130EC */

/* FAILED to decompile: __imp__ZdlPv @ 0x130F0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x130F4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x130F8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x130FC */

/* FAILED to decompile: __imp__ZdaPv @ 0x13100 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x13108 */

/* FAILED to decompile: __imp_strlen @ 0x1310C */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x13110 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x13114 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x13118 */

/* FAILED to decompile: __imp_strcmp @ 0x1311C */

/* FAILED to decompile: __imp___cxa_throw @ 0x13120 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x13124 */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x1312C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13130 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13134 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1313C */

/* Total functions decompiled: 85, failed: 25 */
