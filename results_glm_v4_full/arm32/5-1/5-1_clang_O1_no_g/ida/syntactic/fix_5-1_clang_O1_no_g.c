/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned int size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O1_no_g
 * Processor: arm
 */

/* Stub declarations for decompiled code */
#define JUMPOUT(x) __builtin_unreachable()

/* Helper macros for handling multi-word values */
#define LODWORD(x) (((uint32_t*)&(x))[0])
#define HIDWORD(x) (((uint32_t*)&(x))[1])

/* Forward declarations for type_info */
struct type_info;
struct __class_type_info;

/* External type_info objects */
extern struct type_info typeinfo_for_int;
extern struct __class_type_info typeinfo_for_RT_TIBase;
extern struct __class_type_info typeinfo_for_RTTIDerivedA;
extern struct __class_type_info typeinfo_for_RTTIDerivedB;

/* CRT stub declarations */
extern int call_weak_fn(void);
extern int _cxa_atexit(void (*)(void *), void *, void *);
extern void *_dso_handle;
extern void *_cxa_allocate_exception(size_t);
extern void _cxa_throw(void *, struct type_info *, void *);
extern void *_cxa_begin_catch(void *);
extern void _cxa_end_catch(void);
extern void _cxa_end_cleanup(void);
extern void *_dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, int);
extern void *operator_new(size_t);
extern void *operator_delete(void *);
extern void *operator_new_array(size_t);
extern void *operator_delete_array(void *);
extern int printf(const char *, ...);
extern int puts(const char *);
extern int strcmp(const char *, const char *);
extern char *strcpy(char *, const char *);
extern size_t strlen(const char *);
#define HIBYTE(x) (((x) >> 8) & 0xFF)
#define BYTE1(x) (((x) >> 8) & 0xFF)
#define HIWORD(x) (((x) >> 16) & 0xFFFF)

/* String constants for output */
extern const char asc_1C71[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];

/* ios_base::Init stubs */
extern void _ZNSt8ios_base4InitC1Ev(void *);
extern void _ZNSt8ios_base4InitD1Ev(void *);

/* std namespace stub */
struct std_ios_base_Init {
    char placeholder;
};
extern struct std_ios_base_Init std__ioinit;

/* Forward class declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Function declarations for member functions (as free functions with explicit this parameter) */
int Base_virtual_func(Base *self, int a2);
int Derived_virtual_func(Derived *self, int a2);
int MultiDerived_funcA(MultiDerived *self);
int MultiDerived_funcB(MultiDerived *self);
int DiamondDerived_func(DiamondDerived *self);
int thunk_to_MultiDerived_funcB(MultiDerived *self);
int vthunk_to_DiamondDerived_func(DiamondDerived *self);

struct LifecycleClass {
    int dummy; // placeholder
};

extern int LifecycleClass_instance_count;

/* External data */
extern unsigned int off_12CF0;
extern unsigned int off_12D10;
extern unsigned int off_12D34;
extern unsigned int off_12D4C;
extern unsigned int off_12DF0;
extern unsigned int off_12DBC;
extern unsigned int off_12DD4;
extern unsigned int off_12ED8;
extern unsigned int off_12EEC;
extern unsigned char byte_9;

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
int GLOBAL__sub_I_5_1_cpp()
{
 _ZNSt8ios_base4InitC1Ev(&std__ioinit);
 return _cxa_atexit((void (*)(void *))_ZNSt8ios_base4InitD1Ev, &std__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xE60 */
size_t test_cpp_member_func(void)
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
 *(unsigned char *)((char *)&v1[2] + 1) = 0;
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
int test_cpp_constructor(void)
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
int call_virtual_func(unsigned int *a1)
{
 return (*(int (**)(unsigned int *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xF64 */
int test_cpp_virtual_func(void)
{
 int v0; // r4
 unsigned int v2[2]; // [sp+4h] [bp-14h] BYREF
 void *v3; // [sp+Ch] [bp-Ch] BYREF

 v3 = (void *)&off_12CF0;
 v2[0] = (unsigned int)&off_12D10;
 v2[1] = 3;
 v0 = Base_virtual_func((Base *)v3, 5);
 return v0 + Derived_virtual_func((Derived *)v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xFDC */
int test_cpp_multiple_inheritance(void)
{
 int v0; // r5
 unsigned int v2[2]; // [sp+0h] [bp-20h] BYREF
 unsigned int v3[6]; // [sp+8h] [bp-18h] BYREF

 v3[1] = 200;
 v2[1] = 100;
 v2[0] = (unsigned int)&off_12D34;
 v3[0] = (unsigned int)&off_12D4C;
 v0 = MultiDerived_funcA((MultiDerived *)v2);
 return v0 + MultiDerived_funcB((MultiDerived *)v3) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x104C */
int test_cpp_diamond_inheritance(void)
{
 int v0; // r5
 unsigned int *v2; // [sp+0h] [bp-28h]
 unsigned int *v3; // [sp+8h] [bp-20h]
 unsigned int *v4; // [sp+10h] [bp-18h] BYREF
 int v5; // [sp+14h] [bp-14h]

 v5 = 50;
 v4 = (unsigned int *)&off_12DF0;
 v2 = (unsigned int *)&off_12DBC;
 v3 = (unsigned int *)&off_12DD4;
 v0 = DiamondDerived_func((DiamondDerived *)&v4);
 v5 = 100;
 return DiamondDerived_func((DiamondDerived *)&v4) + v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D0 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D8 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10E0 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10E8 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10F0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: sub_1118 @ 0x1118 */
// positive sp value has been detected, the output may be wrong!
int sub_1118(void *a1, int a2)
{
 int v2; // r4
 int v3; // r6
 int v4; // r5
 bool v5; // zf

 v2 = 0;
 v3 = 0;
 v4 = 100;
 v5 = a2 == 3;
 if ( a2 != 3 )
 {
 v4 = 200;
 v5 = a2 == 2;
 }
 if ( !v5 )
 {
 ((void (*)(void))_cxa_end_cleanup)();
 return v3 + 2 * v2 + v4;
 }
 _cxa_begin_catch(a1);
 _cxa_end_catch();
 return v3 + 2 * v2 + v4;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11C0 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11CC */
size_t test_cpp_rtti(void)
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

 v0 = (void *)&off_12ED8;
 v1 = (void *)&off_12EEC;
 v3 = (char *)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( v3 == (char *)"12RTTIDerivedA" )
 {
 v2 = 10;
 }
 else if ( *v3 != 42 )
 {
 v2 = 0;
 if ( !strcmp(*(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4), "12RTTIDerivedA") )
 v2 = 10;
 }
 v4 = (const char *)(*(unsigned int *)(*(unsigned int *)v1 - 4) + 4);
 if ( v4 == (const char *)"12RTTIDerivedB" )
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
 (const struct __class_type_info *)&typeinfo_for_RT_TIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 v7 = _dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RT_TIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 v8 = v3 + 1;
 if ( *v3 != 42 )
 v8 = v3;
 v9 = strlen(v8);
 (*(void (**)(void *))((unsigned int *)v0 + 4))(v0);
 (*(void (**)(void *))((unsigned int *)v1 + 4))(v1);
 if ( v5 )
 v2 |= 0x14u;
 if ( v6 )
 v2 += 100;
 if ( v7 )
 v2 += 200;
 return v2 + v9;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x136C */
void test_cpp_oo_features(void)
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
 int v9; // r6
 void *v10; // r1
 int v11; // r0
 void *v12; // [sp+0h] [bp-40h]
 unsigned int v13[2]; // [sp+4h] [bp-3Ch] BYREF
 int v14; // [sp+Ch] [bp-34h]
 void *v15; // [sp+10h] [bp-30h]
 int v16; // [sp+14h] [bp-2Ch]
 int v17; // [sp+18h] [bp-28h]
 int v18; // [sp+1Ch] [bp-24h]
 short v19; // [sp+20h] [bp-20h]
 char v20; // [sp+22h] [bp-1Eh]
 char v21; // [sp+23h] [bp-1Dh]
 void *v22; // [sp+24h] [bp-1Ch]

 puts(asc_1C71);
 strcpy((char *)v13, "Test");
 BYTE1(v13[1]) = 0;
 HIWORD(v13[1]) = 0;
 v14 = 0;
 v15 = 0;
 v16 = 0;
 v17 = 0;
 v18 = 0;
 v19 = 0;
 v20 = 0;
 v0 = 0;
 v21 = 0;
 v12 = (void *)(byte_9 + 1);
 v1 = strlen((const char *)v13);
 printf(aCppL301D, v1 + 4700);
 v2 = (unsigned int *)(uintptr_t)operator_new_array(0x14u);
 for ( i = 0; i != -5; --i )
 {
 v2[-i] = v0;
 v0 += 10;
 }
 v12 = v2;
 v4 = ++LifecycleClass_instance_count;
 v5 = v2[2];
 operator_delete_array(v12);
 --LifecycleClass_instance_count;
 printf(aCppL302D, v5 + v4 + 1000 * LifecycleClass_instance_count);
 v22 = (void *)&off_12CF0;
 v13[0] = 3;
 v12 = (void *)&off_12D10;
 v6 = Base_virtual_func((Base *)v22, 5);
 v7 = Derived_virtual_func((Derived *)v12, 5);
 printf(aCppL303D, v6 + v7 + 21);
 v13[1] = (unsigned int)&off_12D4C;
 v14 = 200;
 v13[0] = 100;
 v12 = (void *)&off_12D34;
 v8 = thunk_to_MultiDerived_funcB((MultiDerived *)&v13[1]);
 printf(aCppL304D, v8 + 31);
 v15 = (void *)&off_12DF0;
 v16 = 50;
 v12 = (void *)&off_12DBC;
 v13[1] = (unsigned int)&off_12DD4;
 v9 = vthunk_to_DiamondDerived_func((DiamondDerived *)&v15);
 v10 = v15;
 v11 = ((int (*)(DiamondDerived *))v10)((DiamondDerived *)&v15);
 printf(aCppL305D, v11 + v9);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1648 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x165C */
int Base_virtual_func(Base *self, int a2)
{
 return a2 + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1664 */
int Derived_virtual_func(Derived *self, int a2)
{
 return *((unsigned int *)self + 1) * a2;
}


/* Function: _ZN4BaseD2Ev @ 0x1670 */
void Base_dtor(Base *self)
{
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1674 */
void MultiDerived_dtor(MultiDerived *self)
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1678 */
void DiamondDerived_dtor1(DiamondDerived *self)
{
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x167C */
int template_max_int(int result, int a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1688 */
int template_max_double(double a1, double a2)
{
 int v2; // r5

 v2 = LODWORD(a2);
 if ( a1 > a2 )
 return LODWORD(a1);
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16BC */
int * template_swap_int(int *result, int *a2)
{
 int v2; // r2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16D0 */
int Container_int_Constructor(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16DC */
int Container_int_push(int result, int a2)
{
 int v2; // r2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F4 */
int Container_int_get(int a1, int a2)
{
 int result; // r0

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1714 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x171C */
int Container_double_Constructor(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1728 */
int Container_double_push(int result, int a2, int a3, int a4)
{
 int v4; // r12

 v4 = *(unsigned int *)(result + 80);
 if ( v4 <= 9 )
 {
 *(unsigned int *)(result + 8 * v4) = a3;
 *(unsigned int *)(result + 8 * v4 + 4) = a4;
 *(unsigned int *)(result + 80) = v4 + 1;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x174C */
double Container_double_get(int a1, int a2)
{
 double result; // r0

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1778 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x1780 */
const char * Base_getName(Base *self)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1790 */
void Base_dtor0(Base *self)
{
 operator_delete(self);
}


/* Function: _ZNK7Derived7getNameEv @ 0x17A0 */
const char * Derived_getName(Derived *self)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x17B0 */
void Derived_dtor0(Derived *self)
{
 operator_delete(self);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x17C0 */
int MultiDerived_funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x17C8 */
void MultiDerived_dtor0(MultiDerived *self)
{
 operator_delete(self);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17D8 */
int MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x17E0 */
int thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x17E8 */
void MultiDerived_thunk_dtor1(MultiDerived *self)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x17EC */
void MultiDerived_thunk_dtor0(MultiDerived *self)
{
 operator_delete((char *)self - 8);
}


/* Function: _ZN5BaseA5funcAEv @ 0x1800 */
int BaseA_funcA(BaseA *self)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1808 */
void BaseA_dtor(BaseA *self)
{
}


/* Function: _ZN5BaseAD0Ev @ 0x180C */
void BaseA_dtor0(BaseA *self)
{
 operator_delete(self);
}


/* Function: _ZN5BaseB5funcBEv @ 0x181C */
int BaseB_funcB(BaseB *self)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1824 */
void BaseB_dtor(BaseB *self)
{
}


/* Function: _ZN5BaseBD0Ev @ 0x1828 */
void BaseB_dtor0(BaseB *self)
{
 operator_delete(self);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1838 */
int MiddleA_func(MiddleA *self)
{
 unsigned int *vtable;
 int *base_ptr;
 vtable = *(unsigned int **)self;
 base_ptr = (int *)((char *)self + 4);
 return *base_ptr + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1850 */
void MiddleA_dtor1(MiddleA *self)
{
}


/* Function: _ZN7MiddleAD0Ev @ 0x1854 */
void MiddleA_dtor0(MiddleA *self)
{
 operator_delete(self);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1864 */
int MiddleA_vthunk_func(MiddleA *self)
{
 return *(int *)((char *)self + 4) + 150;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1884 */
void MiddleA_vthunk_dtor1(MiddleA *self)
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1888 */
void vthunk_to_MiddleA_dtor0(MiddleA *self)
{
 operator_delete((void *)((char *)self + *(int *)(*(int *)self - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A4 */
int MiddleB_func(MiddleB *self)
{
 unsigned int *vtable;
 int *base_ptr;
 vtable = *(unsigned int **)self;
 base_ptr = (int *)((char *)self + 4);
 return *base_ptr + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x18BC */
void MiddleB_dtor1(MiddleB *self)
{
}


/* Function: _ZN7MiddleBD0Ev @ 0x18C0 */
void MiddleB_dtor0(MiddleB *self)
{
 operator_delete(self);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x18D0 */
int MiddleB_vththunk_func(MiddleB *self)
{
 return *(int *)((char *)self + 4) + 200;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x18F0 */
void MiddleB_vthunk_dtor1(MiddleB *self)
{
 ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x18F4 */
void MiddleB_vthunk_dtor0(MiddleB *self)
{
 operator_delete((void *)((char *)self + *(int *)(*(int *)self - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1910 */
int DiamondDerived_func(DiamondDerived *self)
{
 unsigned int *vtable;
 int *base_ptr;
 vtable = *(unsigned int **)self;
 base_ptr = (int *)((char *)self + 4);
 return *base_ptr + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1928 */
void DiamondDerived_dtor0(DiamondDerived *self)
{
 operator_delete(self);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1938 */
int thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)self - 8) + 250;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1950 */
void DiamondDerived_thunk_dtor1(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1954 */
void DiamondDerived_thunk_dtor0(DiamondDerived *_this)
{
 operator_delete((void *)((char *)_this - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1968 */
int vthunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)self + 4) + 250;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1D1Ev @ 0x1988 */
void vthunk_to_DiamondDerived_dtor(DiamondDerived *self)
{
}





/* Function: _ZN11VirtualBase4funcEv @ 0x19A8 */
int VirtualBase_func(VirtualBase *self)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x19B0 */
void VirtualBase_dtor(VirtualBase *self)
{
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x19B4 */
void VirtualBase_dtor0(VirtualBase *self)
{
 operator_delete(self);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x19C4 */
void RTTIDerivedA_dtor0(RTTIDerivedA *self)
{
 operator_delete(self);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x19D4 */
int RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x19DC */
void RTTIBase_dtor(RTTIBase *self)
{
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x19E0 */
void RTTIDerivedB_dtor0(RTTIDerivedB *self)
{
 operator_delete(self);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19F0 */
int RTTIDerivedB_getType(RTTIDerivedB *self)
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

/* Total functions decompiled: 86, failed: 25 */
