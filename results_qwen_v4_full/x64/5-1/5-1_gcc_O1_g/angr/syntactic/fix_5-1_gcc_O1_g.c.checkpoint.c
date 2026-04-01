// Angr Decompilation of 5-1_gcc_O1_g
// Platform: AMD64

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct struct_0 {
    unsigned long long (*func)();
} struct_0;

typedef struct Base {
    int dummy;
} Base;

// Forward declarations for C++ functions
void DiamondDerived_func(void* this_ptr);
void Base_virtual_func(void* this_ptr, int arg_0);
void Derived_virtual_func(void* this_ptr, int arg_0);
void Derived_getName(void* this_ptr);
void MiddleB_func(void* this_ptr);

struct_0 g_405fe8 = {0};

// Define missing global variables
Base g_4059a0 = {0};
Base g_4059d0 = {0};
char g_405ba0 = 0;
char g_405bc8 = 0;
unsigned long long g_405b10 = 0;
unsigned long long g_405b40 = 0;
char g_405b78 = 0;
unsigned long g_405f30 = 0;
void (*g_405f38)() = 0;

// C++ type info and exception handling symbols
unsigned long long _ZTIi = 0;
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;
char _ZNSt8ios_base4InitD1Ev = 0;

// C++ static initialization
static char _ZStL8__ioinit = 0;
static unsigned long long __dso_handle = 0;

// String globals
char g_403018[] = "Test member func";
char g_40303c[] = "Test constructor";
char g_40305a[] = "Test virtual func";
char g_403076[] = "Test multiple inheritance";
char g_403092[] = "Test diamond inheritance";
char g_4030ae[] = "Test operator overload";
char g_4030cb[] = "Test template func: %d";
char g_4030e7[] = "Test template class";
char g_403103[] = "Test lambda: %d";
char g_40311f[] = "Test exception: %d";
char g_40313b[] = "Test smart ptr";
char g_403158[] = "Test RTTI";
char g_403175[] = "Test OO features done";




extern int __printf_chk(int flag, const char *format, ...);
extern int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);

static unsigned long long * my_init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)&g_405fe8;
 if (g_405fe8.func)
 v1 = (unsigned long long *)g_405fe8.func();
 return v1;
}


// Function: sub_402020 at 0x402020
void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405f30;
 if (g_405f38) g_405f38();
}


// Function: sub_40202d at 0x40202d
void sub_402030();
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
void sub_402040();
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
void sub_402050();
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
void sub_402060();
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
void sub_402070();
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
void sub_402080();
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
void sub_402090();
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
void sub_4020a0();
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
void sub_4020b0();
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
void sub_4020c0();
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
void sub_4020d0();
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
void sub_4020e0();
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
void sub_4020f0();
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
void sub_402100();
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
void sub_402110();
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
void sub_402120();
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
void sub_402130();
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
void sub_402140();
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



// Function: sub_4022a5 at 0x4022a5
void sub_4022a5()
{
 return;
}


// Function: sub_4022a6 at 0x4022a6
void sub_4022a6()
{
 return;
}



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
static unsigned int _ZN14LifecycleClass14instance_countE = 0;

void* operator_new(unsigned long size) { return malloc(size); }
void* operator_new_array(unsigned long size) { return malloc(size); }
void operator_delete(void* ptr) { free(ptr); }
void operator_delete_array(void* ptr) { free(ptr); }

void test_cpp_constructor()
{
 unsigned int *ptr; // rax

 ptr = (unsigned int*)operator_new_array(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40243c
void call_virtual_func(Base *arg_0, int arg_1)
{
 ((void(*)())(*(long long *)arg_0))();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x40244e
void test_cpp_virtual_func()
{
 Base v0; // [bp-0x30]
 Base v1; // [bp-0x28]
 unsigned int v2; // [bp-0x20]

 *((Base **)&v0) = &g_4059a0;
 *((Base **)&v1) = &g_4059d0;
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
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_int(unsigned int *ptr, unsigned int *ptr2);

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
 template_max_double((double)v4, (double)v5);
 v0 = 0x4004000000000000;
 v1 = 10;
 v2 = 20;
 template_swap_int(&v1, &v2);
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

void* __cxa_allocate_exception(unsigned long size) { return malloc(size); }
void __cxa_throw(void* exc, void* type, void* dest) { free(exc); }
void* __cxa_begin_catch(void* exc) { return exc; }
void __cxa_end_catch() { }
void __cxa_rethrow() { }
void _Unwind_Resume() { }
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle) { return 0; }

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // rax
 unsigned long long v3; // rdx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rcx
 unsigned long long v7; // r8
 unsigned long long v8; // r9
 unsigned long long v9; // rdx
 unsigned long long v10; // rax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 == 1)
 {
 __cxa_begin_catch(ptr);
 __cxa_rethrow();
 __cxa_end_catch();
 }
 if (v9 != 1)
 _Unwind_Resume(); /* do not return */
 __cxa_begin_catch(ptr);
 __cxa_end_catch();
 v10 = (unsigned long long)__cxa_allocate_exception(1);
 __cxa_throw((void*)v10, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 if (v3 == 2)
 {
 __cxa_begin_catch((void*)v10);
 __cxa_end_catch();
 return;
 }
 else if (v3 != 3)
 {
 _Unwind_Resume(); /* do not return */
 }
 else
 {
 __cxa_begin_catch((void*)v10);
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
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

void test_cpp_rtti()
{
 void **p; // r12
 struct_2 **ptr; // r13
 char *v3; // rbp

 p = (void**)operator_new(8);
 *(p) = &g_405ba0;
 ptr = (struct_2**)operator_new(8);
 *(ptr) = (struct_2*)&g_405bc8;
 v3 = (char*)((long long)((long long*)(*(p)))[8] + 8);
 if (v3 != (char*)"12RTTIDerivedA" && *(v3) != 42)
 strcmp(v3, "12RTTIDerivedA");
 strlen(&v3[*(v3) == 42]);
 ((void(*)(void*))((long long*)(*(p)))[8])(p);
 ((void(*)(struct_2*))(*ptr)->field_8)(*ptr);
 return;
}





// Function: _Z20test_cpp_oo_featuresv at 0x402801
void test_cpp_oo_features()
{
 puts(g_403018);
 test_cpp_member_func();
 __printf_chk(1, g_40303c, 0);
 test_cpp_constructor();
 __printf_chk(1, g_40305a, 0);
 test_cpp_virtual_func();
 __printf_chk(1, g_403076, 0);
 test_cpp_multiple_inheritance();
 __printf_chk(1, g_403092, 0);
 test_cpp_diamond_inheritance();
 __printf_chk(1, g_4030ae, 0);
 __printf_chk(1, g_4030cb, 22);
 test_cpp_template_func();
 __printf_chk(1, g_4030e7, 0);
 __printf_chk(1, g_403103, 16);
 __printf_chk(1, g_40311f, 85);
 test_cpp_exception();
 __printf_chk(1, g_40313b, 0);
 test_cpp_smart_ptr();
 __printf_chk(1, g_403158, 0);
 test_cpp_rtti();
 __printf_chk(1, g_403175, 0);
 return;
}


// Function: main at 0x402970
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x402987
extern char _ZNSt8ios_base4InitD1Ev;
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, (void*)&__dso_handle);
 return;
}


// Function: sub_4029b3 at 0x4029b3
typedef struct Derived {
} Derived;

void sub_4029b3(unsigned long a0, unsigned long a1)
{
 Base_virtual_func(0, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4029b4
void Base_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4029bc
void Base_getName(void* this_ptr)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x4029c8
int Base_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_4029cd at 0x4029cd
void sub_4029cd(unsigned long a0, unsigned long a1)
{
 Derived_virtual_func(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4029ce
void Derived_virtual_func(void* this_ptr, int arg_0)
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
void Derived_getName(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x4029e6
void MultiDerived_funcA(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4029f0
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x4029fa
unsigned long long thunk_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x402a04
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402a19
int thunk_MiddleA_func(void **a0)
{
 void **v1; // rdi

 v1 = (void **)((char **)a0 + ((long long*)(*(a0)))[24]);
 return *((int *)(8 + (char *)v1 + ((long long*)(*(v1)))[24])) + 150;
}


// Function: sub_402a35 at 0x402a35
void sub_402a35(unsigned long a0)
{
 MiddleB_func(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x402a36
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x402a4b
int thunk_MiddleB_func(void **a0)
{
 void **v1; // rdi

 v1 = (void **)((char **)a0 + ((long long*)(*(a0)))[24]);
 return *((int *)(8 + (char *)v1 + ((long long*)(*(v1)))[24])) + 200;
}


// Function: sub_402a67 at 0x402a67
void sub_402a67(unsigned long a0)
{
 DiamondDerived_func(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x402a68
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402a7d
int thunk_DiamondDerived_func(void **a0)
{
 void **v1; // rdi

 v1 = (void **)((char **)a0 + ((long long*)(*(a0)))[24]);
 return *((int *)(8 + (char *)v1 + ((long long*)(*(v1)))[24])) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x402a99
int thunk_DiamondDerived_func_nonvirtual(void *a0)
{
 return *((int *)(-8 + (char *)a0 + ((long long*)((char*)a0)[16])[24])) + 250;
}


// Function: sub_402aaf at 0x402aaf
void RTTIDerivedA_getType(void* this_ptr);

void sub_402aaf()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402ab0
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402aba
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x402ac4
int RTTIDerivedB_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_402ac9 at 0x402ac9
void sub_402ac9()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x402aca
int RTTIDerivedA_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_402acf at 0x402acf
void sub_402acf()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402ad0
int DiamondDerived_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402ad5
void thunk_DiamondDerived_destructor_nonvirtual()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402ada
void thunk_DiamondDerived_destructor()
{
 return;
}


// Function: sub_402adf at 0x402adf
void sub_402adf()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x402ae0
int MultiDerived_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402ae5
void thunk_MultiDerived_destructor_nonvirtual()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x402aea
int Derived_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_402aef at 0x402aef
void sub_402aef()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x402af0
void operator_delete_size(void* ptr, unsigned long size) { free(ptr); }

int Base_destructor_delete(void* this_ptr)
{
 operator_delete_size(this_ptr, 8);
 return 0;
}


// Function: sub_402b07 at 0x402b07
void sub_402b07()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x402b08
int Derived_destructor_delete(void* this_ptr)
{
 operator_delete_size(this_ptr, 16);
 return 0;
}


// Function: sub_402b1f at 0x402b1f
void sub_402b1f()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402b20
int MultiDerived_destructor_delete(void* this_ptr)
{
 operator_delete_size(this_ptr, 32);
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402b37
int thunk_MultiDerived_destructor_delete_nonvirtual(void *a0)
{
 operator_delete_size((char*)a0 - 16, 32);
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402b52
int RTTIDerivedA_destructor_delete(void* this_ptr)
{
 operator_delete_size(this_ptr, 8);
 return 0;
}


// Function: sub_402b69 at 0x402b69
void sub_402b69()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402b6a
int RTTIDerivedB_destructor_delete(void* this_ptr)
{
 operator_delete_size(this_ptr, 8);
 return 0;
}


// Function: sub_402b81 at 0x402b81
void sub_402b81()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402b82
int DiamondDerived_destructor_delete(void* this_ptr)
{
 operator_delete_size(this_ptr, 48);
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402b99
int thunk_DiamondDerived_destructor_delete(void **a0)
{
 operator_delete_size((char *)a0 + ((long long*)(*(a0)))[32], 48);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402bb7
int thunk_DiamondDerived_destructor_delete_nonvirtual(void *a0)
{
 operator_delete_size((char*)a0 - 16, 48);
 return 0;
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
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402be7
long long template_swap_int(unsigned int *ptr, unsigned int *ptr2)
{
 unsigned long v1; // rax
 unsigned int temp; // 

 v1 = *(ptr);
 *(ptr) = *(ptr2);
 *(ptr2) = v1;
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
 unsigned int v1; // eax

 v1 = ((unsigned int*)((char*)ptr + 40))[0];
 if (v1 <= 9)
 {
 ((unsigned int*)((char*)ptr + 40))[0] = v1 + 1;
 ((int *)((char *)ptr + 4 * v1))[0] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402c18
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_402c33 at 0x402c33
void Container_int_getSize(void* this_ptr);
void sub_402c33(unsigned long a0)
{
 Container_int_getSize(0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x402c34
void Container_int_getSize(void* this_ptr)
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
 unsigned int v1; // eax

 v1 = ((unsigned int*)((char*)ptr + 80))[0];
 if (v1 <= 9)
 {
 ((unsigned int*)((char*)ptr + 80))[0] = v1 + 1;
 ((double *)((char *)ptr + 8 * v1))[0] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402c62
void Container_double_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402c7e
void Container_double_getSize(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


