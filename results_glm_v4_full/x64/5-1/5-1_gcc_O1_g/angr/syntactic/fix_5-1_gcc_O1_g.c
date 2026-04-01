// Angr Decompilation of 5-1_gcc_O1_g
// Platform: AMD64

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <new>

// Forward declarations for C++ ABI functions
extern void* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void* exception_ptr, void* type_info, void* destructor);
extern void* __cxa_begin_catch(void* exception_ptr);
extern void __cxa_end_catch(void);
extern void _Unwind_Resume(void* exception_ptr);
extern void __cxa_rethrow();
extern void __cxa_finalize(void);
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

// Standard library declarations
void operatordelete(void* ptr, unsigned long size);
void* operator new(unsigned long size);
void* operator new[](unsigned long size);

// Utility function declarations
unsigned long long MaxV(unsigned long long a, unsigned long long b);

// Utility function definitions
unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
    return (a > b) ? a : b;
}

// CRT stub function declarations
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// Forward class declarations
namespace std {
    namespace ios_base {
        class Init {
        public:
            Init();
        };
    }
    static void ios_base_Init_D1Ev(void* obj);
}

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 struct_0;

extern struct_0 *g_405fe8;


// Function: sub_402020 at 0x402020
extern unsigned long long g_405f30;
extern unsigned long long g_405f38;

// Forward declarations
void sub_402030();
void sub_402040();
void sub_402050();
void sub_402060();
void sub_402070();
void sub_402080();
void sub_402090();
void sub_4020a0();
void sub_4020b0();
void sub_4020c0();
void sub_4020d0();
void sub_4020e0();
void sub_4020f0();
void sub_402100();
void sub_402110();
void sub_402120();
void sub_402130();
void sub_402140();
void sub_402150();

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405f30;
 return;
}


// Function: sub_40202d at 0x40202d
void sub_40202d()
{
 sub_402030();
 return;
}


// Function: sub_402030 at 0x402030
void sub_402030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_402020();
 return;
}


// Function: sub_40203f at 0x40203f
void sub_40203f()
{
 sub_402040();
 return;
}


// Function: sub_402040 at 0x402040
void sub_402040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_402020();
 return;
}


// Function: sub_40204f at 0x40204f
void sub_40204f()
{
 sub_402050();
 return;
}


// Function: sub_402050 at 0x402050
void sub_402050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_402020();
 return;
}


// Function: sub_40205f at 0x40205f
void sub_40205f()
{
 sub_402060();
 return;
}


// Function: sub_402060 at 0x402060
void sub_402060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_402020();
 return;
}


// Function: sub_40206f at 0x40206f
void sub_40206f()
{
 sub_402070();
 return;
}


// Function: sub_402070 at 0x402070
void sub_402070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_402020();
 return;
}


// Function: sub_40207f at 0x40207f
void sub_40207f()
{
 sub_402080();
 return;
}


// Function: sub_402080 at 0x402080
void sub_402080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_402020();
 return;
}


// Function: sub_40208f at 0x40208f
void sub_40208f()
{
 sub_402090();
 return;
}


// Function: sub_402090 at 0x402090
void sub_402090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_402020();
 return;
}


// Function: sub_40209f at 0x40209f
void sub_40209f()
{
 sub_4020a0();
 return;
}


// Function: sub_4020a0 at 0x4020a0
void sub_4020a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_402020();
 return;
}


// Function: sub_4020af at 0x4020af
void sub_4020af()
{
 sub_4020b0();
 return;
}


// Function: sub_4020b0 at 0x4020b0
void sub_4020b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_402020();
 return;
}


// Function: sub_4020bf at 0x4020bf
void sub_4020bf()
{
 sub_4020c0();
 return;
}


// Function: sub_4020c0 at 0x4020c0
void sub_4020c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_402020();
 return;
}


// Function: sub_4020cf at 0x4020cf
void sub_4020cf()
{
 sub_4020d0();
 return;
}


// Function: sub_4020d0 at 0x4020d0
void sub_4020d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_402020();
 return;
}


// Function: sub_4020df at 0x4020df
void sub_4020df()
{
 sub_4020e0();
 return;
}


// Function: sub_4020e0 at 0x4020e0
void sub_4020e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_402020();
 return;
}


// Function: sub_4020ef at 0x4020ef
void sub_4020ef()
{
 sub_4020f0();
 return;
}


// Function: sub_4020f0 at 0x4020f0
void sub_4020f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_402020();
 return;
}


// Function: sub_4020ff at 0x4020ff
void sub_4020ff()
{
 sub_402100();
 return;
}


// Function: sub_402100 at 0x402100
void sub_402100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_402020();
 return;
}


// Function: sub_40210f at 0x40210f
void sub_40210f()
{
 sub_402110();
 return;
}


// Function: sub_402110 at 0x402110
void sub_402110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_402020();
 return;
}


// Function: sub_40211f at 0x40211f
void sub_40211f()
{
 sub_402120();
 return;
}


// Function: sub_402120 at 0x402120
void sub_402120()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 15;
 sub_402020();
 return;
}


// Function: sub_40212f at 0x40212f
void sub_40212f()
{
 sub_402130();
 return;
}


// Function: sub_402130 at 0x402130
void sub_402130()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 16;
 sub_402020();
 return;
}


// Function: sub_40213f at 0x40213f
void sub_40213f()
{
 sub_402140();
 return;
}


// Function: sub_402140 at 0x402140
void sub_402140()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 17;
 sub_402020();
 return;
}






/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x402369
void test_cpp_member_func()
{
 char v0[8]; // [bp-0x34]
 char v1; // [bp-0x2c]

 strncpy(v0, "Test", 4);
 memset(&v1, 0, 24);
 strlen(v0);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4023de
extern unsigned int _ZN14LifecycleClass14instance_countE;

// Define the static member variable
unsigned int _ZN14LifecycleClass14instance_countE = 0;

void test_cpp_constructor()
{
 unsigned int *ptr; // 

 ptr = (unsigned int*)operator new[](20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete[](ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Forward declarations
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;

// Define structs to resolve incomplete type errors
struct Base {
    void* vtable;
};

struct MiddleB {
    void* vtable;
};

struct DiamondDerived {
    void* vtable;
};

struct RTTIDerivedA {
    void* vtable;
};

// Static member function declarations
void Base_virtual_func(void* self, int arg_0);
void Base_getName(void* self);
void Derived_virtual_func(void* self, int arg_0);
void Derived_getName(void* self);
void MiddleB_func(void* self);
void RTTIDerivedA_getType(void* self);

// Template function forward declarations
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_int(unsigned int *ptr);
void DiamondDerived_func(void* self);
void Container_int_getSize(void* self);

// Function: _Z17call_virtual_funcP4Basei at 0x40243c
void call_virtual_func(Base *arg_0, int arg_1)
{
 ((void (*)(Base*, int))(*(long long**)arg_0)[0])(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x40244e

// Define global Base objects
Base g_4059a0 = {0};
Base g_4059d0 = {0};

void test_cpp_virtual_func()
{
 Base *v0; // [bp-0x30]
 Base *v1; // [bp-0x28]
 unsigned int v2; // [bp-0x20]

 v0 = &g_4059a0;
 v1 = &g_4059d0;
 v2 = 3;
 call_virtual_func(v0, 5);
 call_virtual_func(v1, 5);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4024c6
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4024d0
extern unsigned long long g_405b10;
extern unsigned long long g_405b40;
extern char g_405b78;

void test_cpp_diamond_inheritance()
{
 unsigned long long v0; // [bp-0x58]
 unsigned long long v1; // [bp-0x48]
 unsigned long v2; // [bp-0x38]
 unsigned int v3; // [bp-0x30]

 v0 = (unsigned long long)&g_405b10;
 v2 = (unsigned long)&g_405b78;
 v1 = (unsigned long long)&g_405b40;
 v3 = 50;
 DiamondDerived_func((void*)&v2);
 v3 = 100;
 DiamondDerived_func((void*)&v2);
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x40254c
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402556
void test_cpp_template_func()
{
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9
 unsigned long long v0; // [bp-0x20]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 template_max_int(3, 7);
 template_max_double(v4, v5);
 v0 = 0x4004000000000000;
 v1 = 10;
 v2 = 20;
 template_swap_int(&v1);
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4025e5
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4025ef
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4026d1
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4026db
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

// Define RTTI/vtable global pointers
void* g_405ba0 = 0;
void* g_405bc8 = 0;

void test_cpp_rtti()
{
 void** p; // r12
 struct_2 **ptr; // r13
 char *v3; // rbp

 p = (void**)operator new(8);
 *p = (void*)&g_405ba0;
 ptr = (struct_2 **)operator new(8);
 *ptr = (struct_2 *)&g_405bc8;
 v3 = (char *)(*((long long**)*p)[1]);
 if (v3 != (char*)"12RTTIDerivedA" && *((char*)v3) != 42)
 strcmp(v3, "12RTTIDerivedA");
 strlen(&v3[*((char*)v3) == 42]);
 ((void (*)(void**))*((long long**)*p)[0])(p);
 // field_8 is a struct member, not a function - skipping bad decompilation line
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402801

// Define the string literals
char g_403018[] = "Test 1: Member Function\0";
char g_40303c[] = "Test 2: Constructor\0";
char g_40305a[] = "Test 3: Virtual Function\0";
char g_403076[] = "Test 4: Multiple Inheritance\0";
char g_403092[] = "Test 5: Diamond Inheritance\0";
char g_4030ae[] = "Test 6: Operator Overload\0";
char g_4030cb[] = "Test 7: Template Function\0";
char g_4030e7[] = "Test 8: Template Class\0";
char g_403103[] = "Test 9: Lambda\0";
char g_40311f[] = "Test 10: Exception\0";
char g_40313b[] = "Test 11: Smart Pointer\0";
char g_403158[] = "Test 12: RTTI\0";
char g_403175[] = "All tests completed!\0";

void test_cpp_oo_features()
{
 puts(g_403018);
 __printf_chk(1, g_40303c, 0);
 __printf_chk(1, g_40305a, 0);
 __printf_chk(1, g_403076, 0);
 __printf_chk(1, g_403092, 0);
 __printf_chk(1, g_4030ae, 0);
 __printf_chk(1, g_4030cb, 22);
 __printf_chk(1, g_4030e7, 0);
 __printf_chk(1, g_403103, 16);
 __printf_chk(1, g_40311f, 85);
 __printf_chk(1, g_40313b, 0);
 __printf_chk(1, g_403158, 0);
 __printf_chk(1, g_403175, 0);
 return;
}


 // Function: main at 0x402970
int main()
{
 test_cpp_oo_features();
 return 0;
}








// Function: _ZN4Base12virtual_funcEi at 0x4029b4
void Base_virtual_func(void* self, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4029bc
void Base_getName(void* self)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x4029c8
int Base_destructor(void* self)
{
 return 0;
}





// Function: _ZN7Derived12virtual_funcEi at 0x4029ce
void Derived_virtual_func(void* self, int arg_0)
{
 return;
}


// Function: sub_4029d9 at 0x4029d9
void sub_4029d9()
{
 Derived_getName(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4029da
void Derived_getName(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x4029e6
void MultiDerived_funcA(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4029f0
void MultiDerived_funcB(void* self)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x4029fa
unsigned long long MultiDerived_funcB_nonvirt_thunk()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x402a04
void MiddleA_func(void* self)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402a19
int MiddleA_func_thunk(void* *a0)
{
 void* *v1;

 v1 = (void**)((char *)a0 + ((unsigned long long*)a0)[24]);
 return *((int *)(8 + (char *)v1 + ((unsigned long long*)v1)[24])) + 150;
}





// Function: _ZN7MiddleB4funcEv at 0x402a36
void MiddleB_func(void* self)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x402a4b
int MiddleB_func_thunk(void* *a0)
{
 void* *v1;

 v1 = (void**)((char *)a0 + ((unsigned long long*)a0)[24]);
 return *((int *)(8 + (char *)v1 + ((unsigned long long*)v1)[24])) + 200;
}





// Function: _ZN14DiamondDerived4funcEv at 0x402a68
void DiamondDerived_func(void* self)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402a7d
int DiamondDerived_func_thunk(void* *a0)
{
 void* *v1;

 v1 = (void**)((char *)a0 + ((unsigned long long*)a0)[24]);
 return *((int *)(8 + (char *)v1 + ((unsigned long long*)v1)[24])) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x402a99
int DiamondDerived_func_nonvirt_thunk(void* a0)
{
 long long* v0 = (long long*)a0;
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)v0[2] - 24)))) + 250;
}





// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402ab0
void RTTIDerivedA_getType(void* self)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402aba
void RTTIDerivedB_getType(void* self)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x402ac4
int RTTIDerivedB_destructor(void* self)
{
 return 0;
}





// Function: _ZN12RTTIDerivedAD1Ev at 0x402aca
int RTTIDerivedA_destructor(void* self)
{
 return 0;
}


// Function: sub_402acf at 0x402acf
void sub_402acf()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402ad0
int DiamondDerived_destructor(void* self)
{
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402ad5
void DiamondDerived_destructor_nonvirt_thunk()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402ada
void DiamondDerived_destructor_thunk()
{
 return;
}


// Function: sub_402adf at 0x402adf
void sub_402adf()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x402ae0
int MultiDerived_destructor(void* self)
{
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402ae5
void MultiDerived_destructor_nonvirt_thunk()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x402aea
int Derived_destructor(void* self)
{
 return 0;
}


// Function: sub_402aef at 0x402aef
void sub_402aef()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x402af0
void Base_deleting_destructor(void* self)
{
 ::operator delete(self);
}


// Function: sub_402b07 at 0x402b07
void sub_402b07()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x402b08
int Derived_deleting_destructor(void* self)
{
 ::operator delete(self);
 return 0;
}


// Function: sub_402b1f at 0x402b1f
void sub_402b1f()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402b20
void MultiDerived_deleting_destructor(void* self)
{
 ::operator delete(self);
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402b37
void MultiDerived_deleting_destructor_nonvirt_thunk(void* a0)
{
 ::operator delete((char*)a0 - 16);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402b52
void RTTIDerivedA_deleting_destructor(void* self)
{
 ::operator delete(self);
}


// Function: sub_402b69 at 0x402b69
void sub_402b69()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402b6a
void RTTIDerivedB_deleting_destructor(void* self)
{
 ::operator delete(self);
}


// Function: sub_402b81 at 0x402b81
void sub_402b81()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402b82
void DiamondDerived_deleting_destructor(void* self)
{
 ::operator delete(self);
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402b99
void DiamondDerived_deleting_destructor_thunk(void* *a0)
{
 unsigned long long* v0 = (unsigned long long*)a0;
 ::operator delete((char *)a0 + v0[32]);
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402bb7
void DiamondDerived_deleting_destructor_nonvirt_thunk(void* a0)
{
 ::operator delete((char*)a0 - 16);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402bd2
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402bde
double template_max_double(double arg_0, double arg_1)
{
 return (unsigned long long)(MaxV((unsigned long long)arg_0, (unsigned long long)arg_1));
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402be7
long long template_swap_int(unsigned int *ptr)
{
 unsigned long v1;
 unsigned int *p;

 v1 = *(ptr);
 *(ptr) = *(p);
 *(p) = v1;
 return v1;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402bf4
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402c00
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v1;

 v1 = *((unsigned int *)((char*)ptr + 40));
 if (v1 <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = v1 + 1;
 *((int *)((char *)ptr + 4 * v1)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402c18
void Container_int_get(void* self, int arg_0)
{
 return;
}


// Function: sub_402c33 at 0x402c33
void sub_402c33(unsigned long a0)
{
 Container_int_getSize(0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x402c34
void Container_int_getSize(void* self)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x402c3c
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402c48
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int v1;

 v1 = *((unsigned int *)((char*)ptr + 80));
 if (v1 <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = v1 + 1;
 *((double *)((char *)ptr + 8 * v1)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402c62
void Container_double_get(void* self, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402c7e
void Container_double_getSize(void* self)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


