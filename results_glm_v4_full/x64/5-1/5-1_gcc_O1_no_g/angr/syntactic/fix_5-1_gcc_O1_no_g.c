// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: AMD64
#include <string.h>
#include <stdio.h>
#include <new>
#include <exception>
#include <cxxabi.h>
#include <unistd.h>
#include <iostream>

/* CRT stub function _init removed by preprocessor */
struct struct_0 {
    char padding[0];
};

extern struct struct_0 *g_405fe8;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe8;
 if (g_405fe8)
 {
 typedef unsigned long long (*init_func_t)(void);
 v1 = (unsigned long long *)(((init_func_t)g_405fe8)());
 }
 return v1;
}





void sub_402030();
void sub_402040();



// Function: sub_40214f at 0x40214f
extern void __cxa_finalize(void);

void sub_40214f()
{
 __cxa_finalize();
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4022a5 at 0x4022a5
void deregister_tm_clones(void);
void sub_4022a5()
{
 return;
}


// Function: sub_4022a6 at 0x4022a6
void sub_4022a6()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402355 at 0x402355
void sub_402355()
{
}






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

void test_cpp_constructor()
{
 unsigned int *ptr; // rax

 ptr = (unsigned int *)operator new[](20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete[](ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


class Base {
public:
 virtual void virtual_func(int) {}
 virtual const char* getName() { return 0; }
 virtual ~Base() {}
};

typedef void (*virtual_func_t)(void *, int);

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((virtual_func_t)(*(long long *)arg_0))(arg_0, arg_1);
 return;
}


extern Base g_4059a0;
extern Base g_4059d0;

void test_cpp_virtual_func()
{
 Base v0; // [bp-0x30]
 Base v1; // [bp-0x28]
 unsigned int v2; // [bp-0x20]

 *((class Base **)&v0) = &g_4059a0;
 *((class Base **)&v1) = &g_4059d0;
 v2 = 3;
 call_virtual_func(&v0, 5);
 call_virtual_func(&v1, 5);
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
extern void _ZN14DiamondDerived4funcEv(void*);

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
 _ZN14DiamondDerived4funcEv((void*)&v2);
 v3 = 100;
 _ZN14DiamondDerived4funcEv((void*)&v2);
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x40254c
void test_cpp_operator_overload()
{
 return;
}


int _Z12template_maxIiET_S0_S0_(int, int);
double _Z12template_maxIdET_S0_S0_(double, double);
long long _Z13template_swapIiEvRT_S1_(unsigned int *, unsigned int *);

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

 _Z12template_maxIiET_S0_S0_(3, 7);
 _Z12template_maxIdET_S0_S0_(v4, v5);
 v0 = 0x4004000000000000;
 v1 = 10;
 v2 = 20;
 _Z13template_swapIiEvRT_S1_(&v1, &v2);
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


// Function: _Z18test_cpp_exceptionv at 0x4025f9
extern unsigned long long _ZTIi;
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern void *__cxa_begin_catch(void *);
extern void __cxa_end_catch(void);
extern void _Unwind_Resume(void *) __attribute__((noreturn));
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_throw(void *, void *, void *) __attribute__((noreturn));
extern void __cxa_rethrow(void) __attribute__((noreturn));

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 void *v2; // rax
 unsigned long long v3; // rdx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rcx
 unsigned long long v7; // r8
 unsigned long long v8; // r9
 unsigned long long v9; // rdx
 void *v10; // rax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 == 1)
 {
 __cxa_begin_catch(v2);
 __cxa_rethrow();
 __cxa_end_catch();
 }
 if (v9 != 1)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch(v2);
 __cxa_end_catch();
 v10 = __cxa_allocate_exception(1);
 __cxa_throw(v10, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 if (v3 == 2)
 {
 __cxa_begin_catch(v10);
 __cxa_end_catch();
 return;
 }
 else if (v3 != 3)
 {
 _Unwind_Resume(v10); /* do not return */
 }
 else
 {
 __cxa_begin_catch(v10);
 __cxa_end_catch();
 return;
 }
}


// Function: _Z18test_cpp_smart_ptrv at 0x4026d1
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4026db
typedef struct struct_2 {
 char padding_0[8];
 void (*field_8)(struct_2 *);
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

typedef void (*vtable_func_t)(void*);

char g_405ba0[16];
char g_405bc8[16];

void test_cpp_rtti()
{
 void **p; // r12
 struct_2 **ptr; // r13
 const char *v3; // rbp
 void *v0;
 unsigned long long *v1;
 unsigned long long v2;

 p = (void **)operator new(8);
 *(p) = &g_405ba0;
 ptr = (struct_2 **)operator new(8);
 *(ptr) = (struct_2 *)&g_405bc8;
 {
 unsigned long long *vptr = (unsigned long long *)(*(p));
 unsigned long long *vptr2 = (unsigned long long *)vptr[1];
 v3 = *((const char **)((char *)vptr2 + 8));
 }
 if (v3 && v3 != "12RTTIDerivedA" && v3 != (const char *)42)
 strcmp(v3, "12RTTIDerivedA");
 if (v3) strlen((char *)v3);
 v0 = *(void **)(p);
 v1 = (unsigned long long *)v0;
 v2 = v1[1];
 ((vtable_func_t)v2)(p);
 (*(ptr))->field_8(*(ptr));
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402801
extern const char g_403018[];
extern const char g_40303c[];
extern const char g_40305a[];
extern const char g_403076[];
extern const char g_403092[];
extern const char g_4030ae[];
extern const char g_4030cb[];
extern const char g_4030e7[];
extern const char g_403103[];
extern const char g_40311f[];
extern const char g_40313b[];
extern const char g_403158[];
extern const char g_403175[];

// Define missing global strings
const char g_403018[] = "Testing C++ Member Function\n";
const char g_40303c[] = "  Member function test: %d\n";
const char g_40305a[] = "  Constructor test: %d\n";
const char g_403076[] = "  Virtual function test: %d\n";
const char g_403092[] = "  Multiple inheritance test: %d\n";
const char g_4030ae[] = "  Diamond inheritance test: %d\n";
const char g_4030cb[] = "Operator overload test\n";
const char g_4030e7[] = "  Template function test: %d\n";
const char g_403103[] = "Template class test\n";
const char g_40311f[] = "Exception test: %d\n";
const char g_40313b[] = "  Smart pointer test: %d\n";
const char g_403158[] = "  RTTI test: %d\n";
const char g_403175[] = "All OO features tests completed\n";

void test_cpp_oo_features()
{
 unsigned long long dummy;
 puts(&g_403018);
 dummy = 0; test_cpp_member_func();
 __printf_chk(1, &g_40303c, dummy & 4294967295);
 dummy = 0; test_cpp_constructor();
 __printf_chk(1, &g_40305a, dummy & 4294967295);
 dummy = 0; test_cpp_virtual_func();
 __printf_chk(1, &g_403076, dummy & 4294967295);
 dummy = 0; test_cpp_multiple_inheritance();
 __printf_chk(1, &g_403092, dummy & 4294967295);
 dummy = 0; test_cpp_diamond_inheritance();
 __printf_chk(1, &g_4030ae, dummy & 4294967295);
 __printf_chk(1, &g_4030cb, 22);
 dummy = 0; test_cpp_template_func();
 __printf_chk(1, &g_4030e7, dummy & 4294967295);
 __printf_chk(1, &g_403103, 16);
 __printf_chk(1, &g_40311f, 85);
 dummy = 0; test_cpp_exception();
 __printf_chk(1, &g_40313b, dummy & 4294967295);
 dummy = 0; test_cpp_smart_ptr();
 __printf_chk(1, &g_403158, dummy & 4294967295);
 dummy = 0; test_cpp_rtti();
 __printf_chk(1, &g_403175, dummy & 4294967295);
 return;
}


// Function: main at 0x402970
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x402987
extern void _ZNSt8ios_base4InitD1Ev(void*);
extern void *_ZStL8__ioinit;
extern unsigned long long __dso_handle;

extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new ((std::ios_base::Init *)&_ZStL8__ioinit) std::ios_base::Init();
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_4029b3 at 0x4029b3
extern void _ZN4Base12virtual_funcEi(void*, int);

void sub_4029b3(unsigned long a0, unsigned long a1)
{
 _ZN4Base12virtual_funcEi(0, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4029b4
void _ZN4Base12virtual_funcEi(void* self, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4029bc
void _ZNK4Base7getNameEv(void* self)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x4029c8
int _ZN4BaseD1Ev(void* self)
{
 return 0;
}


// Function: sub_4029cd at 0x4029cd
extern void _ZN7Derived12virtual_funcEi(void*, int);

void sub_4029cd(unsigned long a0, unsigned long a1)
{
 _ZN7Derived12virtual_funcEi(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4029ce
void _ZN7Derived12virtual_funcEi(void* self, int arg_0)
{
 return;
}


// Function: sub_4029d9 at 0x4029d9
extern void _ZNK7Derived7getNameEv(void*);

void sub_4029d9()
{
 _ZNK7Derived7getNameEv(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4029da
void _ZNK7Derived7getNameEv(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x4029e6
void _ZN12MultiDerived5funcAEv(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4029f0
void _ZN12MultiDerived5funcBEv(void* self)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x4029fa
unsigned long long thunk_nonvirt_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x402a04
void _ZN7MiddleA4funcEv(void* self)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402a19
int thunk_MiddleA_func(void **a0)
{
 void **v1; // rdi

 v1 = (void* *)((char *)a0 + *(unsigned long long *)((char *)a0 + 24));
 return *((int *)((char *)v1 + 8 + *(unsigned long long *)((char *)v1 + 24))) + 150;
}


// Function: sub_402a35 at 0x402a35
extern void _ZN7MiddleB4funcEv(void*);

void sub_402a35(unsigned long a0)
{
 _ZN7MiddleB4funcEv(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x402a36
void _ZN7MiddleB4funcEv(void* self)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x402a4b
int thunk_MiddleB_func(void **a0)
{
 void **v1; // rdi

 v1 = (void* *)((char *)a0 + *(unsigned long long *)((char *)a0 + 24));
 return *((int *)((char *)v1 + 8 + *(unsigned long long *)((char *)v1 + 24))) + 200;
}


// Function: sub_402a67 at 0x402a67
void sub_402a67(unsigned long a0)
{
 _ZN14DiamondDerived4funcEv(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x402a68
void _ZN14DiamondDerived4funcEv(void* self)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402a7d
int thunk_DiamondDerived_func(void **a0)
{
 void **v1; // rdi

 v1 = (void **)((char *)a0 + *(unsigned long long *)((char *)a0 + 24));
 return *((int *)((char *)v1 + 8 + *(unsigned long long *)((char *)v1 + 24))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x402a99
int thunk_nonvirt_DiamondDerived_func(void* a0)
{
 return *((int *)((char *)a0 - 8 + *(long long *)((char *)((void **)a0)[16] - 24))) + 250;
}


// Function: sub_402aaf at 0x402aaf
extern void _ZNK12RTTIDerivedA7getTypeEv(void*);

void sub_402aaf()
{
 _ZNK12RTTIDerivedA7getTypeEv((void*)0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402ab0
void _ZNK12RTTIDerivedA7getTypeEv(void* self)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402aba
void _ZNK12RTTIDerivedB7getTypeEv(void* self)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x402ac4
int _ZN12RTTIDerivedBD1Ev(void* self)
{
 return 0;
}


// Function: sub_402ac9 at 0x402ac9
void sub_402ac9()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x402aca
int _ZN12RTTIDerivedAD1Ev(void* self)
{
 return 0;
}


// Function: sub_402acf at 0x402acf
void sub_402acf()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402ad0
int _ZN14DiamondDerivedD1Ev(void* self)
{
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402ad5
void thunk_nonvirt_DiamondDerived_D1()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402ada
void thunk_DiamondDerived_D1()
{
 return;
}


// Function: sub_402adf at 0x402adf
void sub_402adf()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x402ae0
int _ZN12MultiDerivedD1Ev(void* self)
{
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402ae5
void thunk_nonvirt_MultiDerived_D1()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x402aea
int _ZN7DerivedD2Ev(void* self)
{
 return 0;
}


// Function: sub_402aef at 0x402aef
void sub_402aef()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x402af0
int _ZN4BaseD0Ev(void* self)
{
 if (self) free((char*)self);
 return 0;
}


// Function: sub_402b07 at 0x402b07
void sub_402b07()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x402b08
int _ZN7DerivedD0Ev(void* self)
{
 if (self) free((char*)self);
 return 0;
}


// Function: sub_402b1f at 0x402b1f
void sub_402b1f()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402b20
int _ZN12MultiDerivedD0Ev(void* self)
{
 if (self) free((char*)self);
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402b37
int thunk_nonvirt_MultiDerived_D0(void* a0)
{
 if (a0) free((void*)((char*)a0 - 16));
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402b52
int _ZN12RTTIDerivedAD0Ev(void* self)
{
 if (self) free((char*)self);
 return 0;
}


// Function: sub_402b69 at 0x402b69
void sub_402b69()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402b6a
int _ZN12RTTIDerivedBD0Ev(void* self)
{
 if (self) free((char*)self);
 return 0;
}


// Function: sub_402b81 at 0x402b81
void sub_402b81()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402b82
int _ZN14DiamondDerivedD0Ev(void* self)
{
 if (self) free((char*)self);
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402b99
int thunk_DiamondDerived_D0(void **a0)
{
 char *ptr = (char *)((char *)a0 + *(unsigned long long *)((char *)a0 + 32));
 if (ptr) free(ptr);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402bb7
int thunk_nonvirt_DiamondDerived_D0(void* a0)
{
 if (a0) free((void*)((char*)a0 - 16));
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402bd2
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402bde
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402be7
long long _Z13template_swapIiEvRT_S1_(unsigned int *ptr, unsigned int *p)
{
 unsigned long v1; // rax

 v1 = *ptr;
 *ptr = *p;
 *p = v1;
 return v1;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402bf4
int _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402c00
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned int v1; // eax

 v1 = *((unsigned int *)((char *)ptr + 40));
 if (v1 <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = v1 + 1;
 *((int*)((char*)ptr + 4 * (size_t)v1)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402c18
int _ZNK9ContainerIiE3getEi(void* self, int arg_0)
{
 return 0;
}


// Function: sub_402c33 at 0x402c33
extern void _ZNK9ContainerIiE7getSizeEv(void*);

void sub_402c33(unsigned long a0)
{
 _ZNK9ContainerIiE7getSizeEv(0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x402c34
void _ZNK9ContainerIiE7getSizeEv(void* self)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x402c3c
int _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402c48
void _ZN9ContainerIdE4pushEd(void* ptr, double arg_0)
{
 unsigned int v1; // eax

 v1 = *((unsigned int *)((char *)ptr + 80));
 if (v1 <= 9)
 {
 *((unsigned int *)((char *)ptr + 80)) = v1 + 1;
 *(double *)((char *)ptr + 8 * v1) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402c62
double _ZNK9ContainerIdE3getEi(void* self, int arg_0)
{
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402c7e
void _ZNK9ContainerIdE7getSizeEv(void* self)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


