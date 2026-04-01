/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_Os_g
 * Processor: arm
 */

#include <string.h>
#include <stdio.h>

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct MultiDerived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct std_unique_ptr_int;
struct std_unique_ptr_int_array;

/* Function forward declarations */
void test_cpp_oo_features();
void std_unique_ptr_int_destructor(struct std_unique_ptr_int *const this);
void std_unique_ptr_int_array_destructor(struct std_unique_ptr_int_array *const this);
long long virtual_thunk_DiamondDerived_func(struct DiamondDerived *this);
void DiamondDerived_destructor1(struct DiamondDerived *const this);
void MiddleA_D2(struct MiddleA *const this, const void **const __vtt_parm);
void MiddleB_D2(struct MiddleB *const this, const void **const __vtt_parm);

/* Container template class definition */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* Template function declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Container function declarations */
void Container_int_push(struct Container_int *const this, int value);

/* RTTI typeinfo declaration */
struct __class_type_info {
    void *dummy;
};

/* External vtable offsets */
extern void *off_13AC8;
extern void *off_13AF8;
extern void *off_13B30;
extern void *off_13868;
extern void *off_13898;
extern void *off_138E0;
extern void *off_13918;
extern void *off_13958;
extern void *off_13990;
extern const void **off_13A80;
extern const void **off_13A90;
extern void *off_13B58;
extern void *off_13B80;

/* External string declarations */
extern const char *asc_25B2;
extern const char *unk_25D6;
extern const char *unk_25F4;
extern const char *unk_2610;
extern const char *unk_262C;
extern const char *unk_2648;
extern const char *unk_2665;
extern const char *unk_2681;
extern const char *unk_269D;
extern const char *unk_26B9;

/* RTTI typeinfo externs */
extern struct __class_type_info typeinfo_for_RTTIBase;
extern struct __class_type_info typeinfo_for_RTTIDerivedA;
extern struct __class_type_info typeinfo_for_RTTIDerivedB;

/* SimpleClass definition */
struct SimpleClass {
    char name[32];
};

/* Base class definition */
struct Base {
    int (**_vptr_Base)(...);
};

/* Derived class definition */
struct Derived {
    int (**_vptr_Base)(...);
    int multiplier;
};

/* LifecycleClass definition */
struct LifecycleClass {
    int instance_count;
};
int LifecycleClass_instance_count = 0;

/* MultiDerived definition */
struct MultiDerived {
    int (**_vptr_MultiDerived)(...);
};

/* VirtualBase definition */
struct VirtualBase {
    int (**_vptr_VirtualBase)(...);
    int data;
};

/* MiddleA definition */
struct MiddleA {
    int (**_vptr_MiddleA)(...);
    int dataA;
};

/* MiddleB definition */
struct MiddleB {
    int (**_vptr_MiddleB)(...);
    int dataB;
};

/* DiamondDerived definition */
struct DiamondDerived {
    int (**_vptr_MiddleA)(...);
    int dataA;
};

/* RTTI classes */
struct RTTIBase {
    int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedA {
    int (**_vptr_RTTIDerivedA)(...);
};

struct RTTIDerivedB {
    int (**_vptr_RTTIDerivedB)(...);
};

/* std namespace stubs - flattened for C compatibility */
struct std_ios_base_Init {
    void *dummy;
};
struct std_ios_base_Init std___ioinit;

struct std_unique_ptr_int {
    struct {
        struct {
            union {
                void *gap0;
                int *_M_head_impl;
            };
        } _M_t;
    } _M_t;
};

struct std_unique_ptr_int_array {
    struct {
        struct {
            union {
                void *gap0;
                int *_M_head_impl;
            };
        } _M_t;
    } _M_t;
};

void *_dso_handle = 0;

/* C++ operator declarations - flattened for C */
void *operator_new(unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete(void *ptr, unsigned long size);
void operator_delete_array(void *ptr);

/* Additional C++ function declarations */
void MiddleA_destructor(struct MiddleA *const this);
void MiddleB_destructor(struct MiddleB *const this);

/* CRT stub function declarations */
long long call_weak_fn();
void JUMPOUT(int);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, void *type_info, void *dest);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
int __dynamic_cast(void *src, const void *src_type, const void *dst_type, long src_flags);



/* Function: .init_proc @ 0x1638 */
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
 __cxa_throw(exception, 0, 0);
}


/* Function: main @ 0x18D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x18E8 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std___ioinit.dummy = 0;
 __cxa_atexit((void (*)(void *))&std___ioinit, &std___ioinit, &_dso_handle);
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
 return LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1AD8 */
int call_virtual_func(struct Base *obj, int x)
{
 return ((int (*)(struct Base *, int))(*obj->_vptr_Base))(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1AE8 */
int test_cpp_virtual_func()
{
 int v0; // w19
 struct Base base; // [xsp+20h] [xbp+20h] BYREF
 struct Derived derived; // [xsp+28h] [xbp+28h] BYREF

 base._vptr_Base = (int (**)(...))&off_13868;
 derived._vptr_Base = (int (**)(...))&off_13898;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + 21 + call_virtual_func((struct Base *)&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1B78 */
int test_cpp_multiple_inheritance()
{
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

 v0 = template_max_int(3, 7);
 v1 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return (int)v1 + v0 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x1C30 */
int test_cpp_template_class()
{
 int v0; // w1
 int v3; // [xsp+50h] [xbp+50h]
 struct Container_int r2_storage; // [xsp+28h] [xbp+28h] BYREF

 v3 = 1;
 r2_storage.data[0] = 10;
 Container_int_push(&r2_storage, 20);
 Container_int_push(&r2_storage, 30);
 v0 = r2_storage.data[0];
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
 unsigned long long v2; // x23
 char *v3; // x22
 int v4; // w24
 int v5; // w19
 int v6; // w19
 int v7; // w19

 v0 = (long long *)operator_new(8u);
 *v0 = (long long)(unsigned long long)off_13B58;
 v1 = (void *)operator_new(8u);
 v2 = (unsigned long long)(unsigned long)v1;
 *(unsigned long long *)v1 = (unsigned long long)off_13B80;
 v3 = *(char **)(v2 - 8 + 8LL);
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
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v6 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
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
 struct std_unique_ptr_int ptr2; // [xsp+30h] [xbp+30h] BYREF
 struct std_unique_ptr_int_array arr; // [xsp+40h] [xbp+40h] BYREF

 ptr2._M_t._M_t._M_head_impl = 0;
 ptr2._M_t._M_t._M_head_impl = (int *)operator_new(4u);
 *ptr2._M_t._M_t._M_head_impl = 200;
 v0 = operator_new_array(0x14u);
 arr._M_t._M_t._M_head_impl = (int *)v0;
 *(unsigned long long *)v0 = 0x200000001LL;
 *(unsigned long long *)(v0 + 8) = 0x400000003LL;
 *(unsigned int *)(v0 + 16) = 5;
 std_unique_ptr_int_array_destructor(&arr);
 std_unique_ptr_int_destructor(&ptr2);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1EF8 */
int test_cpp_diamond_inheritance()
{
 int v0; // w19
 int v1; // w19
 unsigned char obj[44]; // [xsp+28h] [xbp+28h] BYREF

 *(unsigned long long *)obj = (unsigned long long)&off_13AC8;
 *(unsigned long long *)&obj[32] = (unsigned long long)&off_13B30;
 *(unsigned long long *)&obj[16] = (unsigned long long)&off_13AF8;
 *(unsigned int *)&obj[40] = 50;
 v0 = virtual_thunk_DiamondDerived_func((struct DiamondDerived *)&obj[32]);
 *(unsigned int *)&obj[40] = 100;
 v1 = v0 + virtual_thunk_DiamondDerived_func((struct DiamondDerived *)&obj[32]);
 DiamondDerived_destructor1((struct DiamondDerived *const)obj);
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
 __printf_chk(1, unk_25D6, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_25F4, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_2610, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_262C, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_2648, v4);
 v5 = test_cpp_operator_overload();
 __printf_chk(1, unk_2665, v5);
 v6 = test_cpp_template_func();
 __printf_chk(1, unk_2681, v6);
 v7 = test_cpp_template_class();
 __printf_chk(1, unk_269D, v7);
 v8 = test_cpp_lambda();
 __printf_chk(1, unk_26B9, v8);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x20D8 */
int Base_virtual_func(struct Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x20E0 */
const char * Base_getName(const struct Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x20EC */
void Base_destructor(struct Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x20F0 */
int Derived_virtual_func(struct Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x20FC */
const char * Derived_getName(const struct Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2108 */
int MultiDerived_funcA(struct MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2110 */
int MultiDerived_funcB(struct MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2118 */
long long non_virtual_thunk_MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2120 */
int VirtualBase_func(struct VirtualBase *const this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2128 */
void VirtualBase_destructor(struct VirtualBase *const this)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x212C */
int MiddleA_func(struct MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + (long long)*((unsigned long long *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2144 */
long long virtual_thunk_MiddleA_func(struct MiddleA *this)
{
 return MiddleA_func((struct MiddleA *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2154 */
int MiddleB_func(struct MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x216C */
long long virtual_thunk_MiddleB_func(struct MiddleB *this)
{
 return MiddleB_func((struct MiddleB *)((char *)this + *((unsigned long long *)this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x217C */
int DiamondDerived_func(struct DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2194 */
long long virtual_thunk_DiamondDerived_func(struct DiamondDerived *this)
{
 return DiamondDerived_func((struct DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x21A4 */
long long non_virtual_thunk_DiamondDerived_func(struct DiamondDerived *this)
{
 return DiamondDerived_func((struct DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN7MiddleAD1Ev @ 0x21AC */
void MiddleA_destructor1(struct MiddleA *const this)
{
 this->_vptr_MiddleA = (int (**)(...))&off_138E0;
 *((unsigned long long *)&this->dataA + 1) = &off_13918;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x21C8 */
void virtual_thunk_MiddleA_destructor(struct MiddleA *this)
{
 unsigned long long *v1; // x3

 v1 = (unsigned long long *)((char *)&this->_vptr_MiddleA + *((unsigned long long *)this->_vptr_MiddleA - 4));
 *v1 = (unsigned long long)&off_138E0;
 v1[2] = (unsigned long long)&off_13918;
}


/* Function: _ZN7MiddleBD1Ev @ 0x21F0 */
void MiddleB_destructor1(struct MiddleB *const this)
{
 this->_vptr_MiddleB = (int (**)(...))&off_13958;
 *((unsigned long long *)&this->dataB + 1) = &off_13990;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x220C */
void virtual_thunk_MiddleB_destructor(struct MiddleB *this)
{
 unsigned long long *v1; // x3

 v1 = (unsigned long long *)((char *)&this->_vptr_MiddleB + *((unsigned long long *)this->_vptr_MiddleB - 4));
 *v1 = (unsigned long long)&off_13958;
 v1[2] = (unsigned long long)&off_13990;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2234 */
int RTTIDerivedA_getType(const struct RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x223C */
int RTTIDerivedB_getType(const struct RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2244 */
void RTTIDerivedB_destructor(struct RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2248 */
void RTTIDerivedA_destructor(struct RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x224C */
void MultiDerived_destructor(struct MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2250 */
void non_virtual_thunk_MultiDerived_destructor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2254 */
void Derived_destructor(struct Derived *const this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2258 */
void Base_D0(struct Base *const this)
{
 operator_delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2260 */
void Derived_D0(struct Derived *const this)
{
 operator_delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2268 */
void MultiDerived_D0(struct MultiDerived *const this)
{
 operator_delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2270 */
void non_virtual_thunk_MultiDerived_destructor0(struct MultiDerived *this)
{
 MultiDerived_destructor((struct MultiDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2278 */
void VirtualBase_D0(struct VirtualBase *const this)
{
 operator_delete(this, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2280 */
void RTTIDerivedB_D0(struct RTTIDerivedB *const this)
{
 operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2288 */
void RTTIDerivedA_D0(struct RTTIDerivedA *const this)
{
 operator_delete(this, 8u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x2290 */
void MiddleA_D0(struct MiddleA *const this)
{
 this->_vptr_MiddleA = (int (**)(...))&off_138E0;
 *((unsigned long long *)&this->dataA + 1) = (unsigned long long)&off_13918;
 operator_delete(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x22B0 */
void virtual_thunk_MiddleA_destructor0(struct MiddleA *this)
{
 MiddleA_destructor((struct MiddleA *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x22C0 */
void MiddleB_D0(struct MiddleB *const this)
{
 this->_vptr_MiddleB = (int (**)(...))&off_13958;
 *((unsigned long long *)&this->dataB + 1) = (unsigned long long)&off_13990;
 operator_delete(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x22E0 */
void virtual_thunk_MiddleB_destructor0(struct MiddleB *this)
{
 MiddleB_destructor((struct MiddleB *)((char *)this + *((unsigned long long *)this->_vptr_MiddleB - 4)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x22F0 */
void MiddleA_D4(struct MiddleA *const this, const int __in_chrg, const void **const __vtt_parm)
{
 int (**v3)(...); // x3
 int (**v4)(...); // x1
 long long v5; // x2

 if ( __in_chrg )
 v3 = (int (**)(...))&off_138E0;
 else
 v3 = (int (**)(...))*__vtt_parm;
 this->_vptr_MiddleA = v3;
 if ( __in_chrg )
 {
 v5 = 16;
 v4 = (int (**)(...))&off_13918;
 }
 else
 {
 v4 = (int (**)(...))__vtt_parm[1];
 v5 = (long long)(unsigned long long)*(v3 - 3);
 }
 *(unsigned long long *)((char *)&this->_vptr_MiddleA + v5) = (unsigned long long)v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x232C */
void MiddleA_D2(struct MiddleA *const this, const void **const __vtt_parm)
{
 MiddleA_D4(this, 0, __vtt_parm);
}


/* Function: _ZN7MiddleBD4Ev @ 0x2338 */
void MiddleB_D4(struct MiddleB *const this, const int __in_chrg, const void **const __vtt_parm)
{
 int (**v3)(...); // x3
 int (**v4)(...); // x1
 long long v5; // x2

 if ( __in_chrg )
 v3 = (int (**)(...))&off_13958;
 else
 v3 = (int (**)(...))*__vtt_parm;
 this->_vptr_MiddleB = v3;
 if ( __in_chrg )
 {
 v5 = 16;
 v4 = (int (**)(...))&off_13990;
 }
 else
 {
 v4 = (int (**)(...))__vtt_parm[1];
 v5 = (long long)(unsigned long long)*(v3 - 3);
 }
 *(unsigned long long *)((char *)&this->_vptr_MiddleB + v5) = (unsigned long long)v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x2374 */
void MiddleB_D2(struct MiddleB *const this, const void **const __vtt_parm)
{
 MiddleB_D4(this, 0, __vtt_parm);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2380 */
int template_max_int_impl(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x238C */
double template_max_double_impl(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2398 */
void template_swap_int_impl(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x23AC */
void Container_int_Constructor(struct Container_int *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x23B4 */
void Container_int_push(struct Container_int *const this, int value)
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
int Container_int_get(const struct Container_int *const this, int idx)
{
 if ( idx < 0 || this->size <= idx )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x23F0 */
int Container_int_getSize(const struct Container_int *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x23F8 */
void Container_double_Constructor(struct Container_double *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2400 */
void Container_double_push(struct Container_double *const this, double value)
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
double Container_double_get(const struct Container_double *const this, int idx)
{
 if ( idx < 0 || this->size <= idx )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x243C */
int Container_double_getSize(const struct Container_double *const this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2444 */
void std_unique_ptr_int_destructor(struct std_unique_ptr_int *const this)
{
 void *v1; // x0

 v1 = (void *)this->_M_t._M_t._M_head_impl;
 if ( v1 )
 operator_delete(v1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2458 */
void std_unique_ptr_int_array_destructor(struct std_unique_ptr_int_array *const this)
{
 void *v1; // x0

 v1 = (void *)this->_M_t._M_t._M_head_impl;
 if ( v1 )
 operator_delete_array(v1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2468 */
void DiamondDerived_D4(
 struct DiamondDerived *const this,
 const int __in_chrg,
 const void **const __vtt_parm)
{
 int (**v6)(...); // x0
 unsigned long long v7; // x0
 int (**v8)(...); // x1
 void *v9; // x1
 const void **v10; // x2
 const void **v11; // x19
 const void **v12; // x1
 const void **v13; // x1

 if ( __in_chrg )
 v6 = (int (**)(...))&off_13AC8;
 else
 v6 = (int (**)(...))*__vtt_parm;
 this->_vptr_MiddleA = v6;
 if ( __in_chrg )
 {
 v7 = 32;
 v8 = (int (**)(...))&off_13B30;
 }
 else
 {
 v7 = (unsigned long long)(long long)*(v6 - 3);
 v8 = (int (**)(...))__vtt_parm[5];
 }
 *(unsigned long long *)((char *)&this->_vptr_MiddleA + v7) = (unsigned long long)v8;
 if ( __in_chrg )
 v9 = (void *)&off_13AF8;
 else
 v9 = __vtt_parm[6];
 v10 = __vtt_parm + 3;
 v11 = __vtt_parm + 1;
 *((unsigned long long *)&this->dataA + 1) = (unsigned long long)v9;
 v12 = (const void **)off_13A90;
 if ( !__in_chrg )
 v12 = v10;
 MiddleB_D2((struct MiddleB *const)(&this->dataA + 2), (const void **)v12);
 v13 = (const void **)off_13A80;
 if ( !__in_chrg )
 v13 = v11;
 MiddleA_D2((struct MiddleA *)this, (const void **)v13);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2518 */
void DiamondDerived_destructor1(struct DiamondDerived *const this)
{
 DiamondDerived_D4(this, 2, 0);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2524 */
void non_virtual_thunk_DiamondDerived_destructor(struct DiamondDerived *this)
{
 DiamondDerived_D4((struct DiamondDerived *)((char *)this - 16), 2, 0);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x252C */
void virtual_thunk_DiamondDerived_destructor(struct DiamondDerived *this)
{
 DiamondDerived_D4((struct DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)), 2, 0);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x253C */
void DiamondDerived_destructor0(struct DiamondDerived *const this)
{
 DiamondDerived_destructor1(this);
 operator_delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2564 */
void non_virtual_thunk_DiamondDerived_destructor0(struct DiamondDerived *this)
{
 DiamondDerived_destructor1((struct DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x256C */
void virtual_thunk_DiamondDerived_destructor0(struct DiamondDerived *this)
{
 DiamondDerived_destructor1((struct DiamondDerived *)((char *)this + *((unsigned long long *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x257C */
void DiamondDerived_destructor2(struct DiamondDerived *const this, const void **const __vtt_parm)
{
 DiamondDerived_D4(this, 0, __vtt_parm);
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
