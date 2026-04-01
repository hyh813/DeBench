// Angr Decompilation of 5-1_gcc_O3_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

extern void* operatornew(unsigned long size);
extern void operatordelete(void* ptr, unsigned long size);

extern int __printf_chk(int flag, const char* format, ...);

// Define missing global variables
static struct_0 *g_403fe8 = 0;
static unsigned long long (*g_403fe8_func)() = 0;
static char g_402018[] = "Testing C++ OO features\n";
static char g_40203c[] = "String length: %d\n";
static char g_40205a[] = "Instance count: %d\n";
static char g_402076[] = "Value: %d\n";
static char g_402092[] = "Another value: %d\n";
static char g_4020ae[] = "More values: %d\n";
static char g_4020cb[] = "Count: %d\n";
static char g_4020e7[] = "Total: %d\n";
static char g_402103[] = "Size: %d\n";
static char g_40211f[] = "Result: %d\n";
static char g_40213b[] = "Status: %d\n";
static char g_402158[] = "Output: %d\n";
static char g_402175[] = "Final: %d\n";
static char g_403c70[] = "RTTI Data A";
static char g_403c98[] = "RTTI Data B";
static unsigned int _ZN14LifecycleClass14instance_countE = 0;
static char _ZStL8__ioinit = 0;
static unsigned long long __dso_handle = 0;
static unsigned long long g_403f40 = 0;
static void (*g_403f48_func)() = 0;
static unsigned long long _ZTIi = 0;
static unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;

// Forward declarations
void test_cpp_oo_features();
void _GLOBAL__sub_I__Z20test_cpp_member_funcv();
void test_cpp_member_func();
void test_cpp_constructor();
void call_virtual_func(class Base *arg_0, int arg_1);
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void sub_401020();
void Base_getName(void* arg_this);
void Derived_virtual_func(void* arg_this, int arg_0);
void Derived_getName(void* arg_this);
void MultiDerived_funcA(void* arg_this);
void MultiDerived_funcB(void* arg_this);
void MiddleA_func(void* arg_this);
void MiddleB_func(void* arg_this);
void DiamondDerived_func(void* arg_this);
void RTTIDerivedA_getType(void* arg_this);
void __cxa_finalize(void);
void deregister_tm_clones();
void register_tm_clones();
void __do_global_dtors_aux();
void frame_dummy();
void sub_40102d();
void sub_401030();
void sub_40103f();
void sub_401040();
void sub_40104f();
void sub_401050();
void sub_40105f();
void sub_401060();
void sub_40106f();
void sub_401070();
void sub_40107f();
void sub_401080();
void sub_40108f();
void sub_401090();
void sub_40109f();
void sub_4010a0();
void sub_4010af();
void sub_4010b0();
void sub_4010bf();
void sub_4010c0();
void sub_4010cf();
void sub_4010d0();
void sub_4010df();
void sub_4010e0();
void sub_4010ef();
void sub_4010f0();
void sub_4010ff();
void sub_401100();
void sub_40110f();
void sub_401110();
void sub_40111f();
void sub_401120();
void sub_40112f();
void Container_int_push(void* ptr, int arg_0);
void Container_int_get(void* this_ptr, int arg_0);
void Container_int_getSize(void* this_ptr);
int Container_double_Container(void* ptr);
void Container_double_push(void* ptr, double arg_0);
void Container_double_get(void* this_ptr, int arg_0);
void Container_double_getSize(void* this_ptr);

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = (unsigned long long *)g_403fe8_func();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_403f40;
extern void (*g_403f48_func)();

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f40;
 g_403f48_func();
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_401020();
 return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_401020();
 return;
}


// Function: sub_40107f at 0x40107f
void sub_40107f()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
void sub_401080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_401020();
 return;
}


// Function: sub_40108f at 0x40108f
void sub_40108f()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
void sub_401090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_401020();
 return;
}


// Function: sub_40109f at 0x40109f
void sub_40109f()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
void sub_4010a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_401020();
 return;
}


// Function: sub_4010af at 0x4010af
void sub_4010af()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
void sub_4010b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_401020();
 return;
}


// Function: sub_4010bf at 0x4010bf
void sub_4010bf()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
void sub_4010c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_401020();
 return;
}


// Function: sub_4010cf at 0x4010cf
void sub_4010cf()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
void sub_4010d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_401020();
 return;
}


// Function: sub_4010df at 0x4010df
void sub_4010df()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
void sub_4010e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_401020();
 return;
}


// Function: sub_4010ef at 0x4010ef
void sub_4010ef()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
void sub_4010f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_401020();
 return;
}


// Function: sub_4010ff at 0x4010ff
void sub_4010ff()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
void sub_401100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_401020();
 return;
}


// Function: sub_40110f at 0x40110f
void sub_40110f()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
void sub_401110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_401020();
 return;
}


// Function: sub_40111f at 0x40111f
void sub_40111f()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
void sub_401120()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 15;
 sub_401020();
 return;
}


// Function: sub_40112f at 0x40112f - REMOVED (CRT stub)



// Function: _Z18test_cpp_exceptionv at 0x401240
extern unsigned long long _ZTIi;
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

extern void* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void* thrown_exception, void* tinfo, void* dest);
extern void __cxa_rethrow();
extern void* __cxa_begin_catch(void* exception_object);
extern void __cxa_end_catch();
extern void _Unwind_Resume();
// extern void __cxa_finalize(void); - CRT function, removed
extern int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle);

// Stub for __cxa_finalize
void __cxa_finalize(void) { }

// Stub for _Unwind_Resume
void _Unwind_Resume() { }

// Stub for __cxa_throw
void __cxa_throw(void* thrown_exception, void* tinfo, void* dest) { }

// Stub for __cxa_allocate_exception
void* __cxa_allocate_exception(unsigned long size) { return malloc(size); }

// Stub for __cxa_atexit
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle) { return 0; }

// Stub for __cxa_begin_catch
void* __cxa_begin_catch(void* exception_object) { return exception_object; }

// Stub for __cxa_end_catch
void __cxa_end_catch() { }

// Stub for __cxa_rethrow
void __cxa_rethrow() { }

// Define operatordelete
void operatordelete(void* ptr, unsigned long size) { free(ptr); }

// Stub for _ZNSt8ios_base4InitD1Ev
void _ZNSt8ios_base4InitD1Ev(void) { }

// Stub for operatornew
void* operatornew(unsigned long size) { return malloc(size); }

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
 unsigned long long v10; // rax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 == 1)
 {
 __cxa_begin_catch((void*)v2);
 __cxa_rethrow();
 __cxa_end_catch();
 }
 if (v3 == 1)
 {
 __cxa_begin_catch(0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 if (v3 == 2)
 {
 __cxa_begin_catch((void*)v10);
 __cxa_end_catch();
 return;
 }
 else if (v3 == 3)
 {
 __cxa_begin_catch(0);
 __cxa_end_catch();
 return;
 }
 }
 _Unwind_Resume(); /* do not return */
}


// Function: sub_40130c at 0x40130c
extern int main();
void sub_40130c()
{
 main();
 return;
}


// Function: main at 0x401310
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_401324 at 0x401324
void sub_401324()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401330
extern void _ZNSt8ios_base4InitD1Ev(void);
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_40135b at 0x40135b - REMOVED (CRT stub)




/* CRT stub function _start removed by preprocessor */



// Function: sub_401385 at 0x401385
void sub_401385()
{
 // [D] Unsupported jumpkind Ijk_SigTRAP at address 4199301
}


// Function: sub_401386 at 0x401386 - REMOVED (CRT stub)




/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4013b9 at 0x4013b9 - REMOVED (CRT stub)




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4013f9 at 0x4013f9 - REMOVED (CRT stub)




/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401435 at 0x401435
void sub_401435()
{
}


// Function: sub_401439 at 0x401439 - REMOVED (CRT stub)




/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401449 at 0x401449
void sub_401449()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401450
void test_cpp_member_func()
{
 char v0[30]; // [bp-0x34]
 char v1[6]; // [bp-0x16]

 strncpy(v1, "Test", 4);
 strlen(v0);
 return;
}


// Function: sub_4014c5 at 0x4014c5
void sub_4014c5()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4014d0
void test_cpp_constructor()
{
 return;
}


// Function: sub_4014e2 at 0x4014e2
void sub_4014e2(unsigned long a0)
{
 call_virtual_func((class Base *)a0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4014f0
struct Base {
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 goto *((long long *)*((long long *)&arg_0));
}


// Function: sub_4014f9 at 0x4014f9
void sub_4014f9()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401500
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_40150a at 0x40150a
void sub_40150a()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401510
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_40151a at 0x40151a
void sub_40151a()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401520
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_40152a at 0x40152a
void sub_40152a()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401530
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401540
extern int template_max_int(int arg_0, int arg_1);
extern double template_max_double(double arg_0, double arg_1);
extern long long template_swap_int(unsigned int *ptr, unsigned int *p);

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
 v1 = 10;
 v0 = 0x4004000000000000;
 v2 = 20;
 template_swap_int(&v1, &v2);
 return;
}


// Function: sub_4015d3 at 0x4015d3
void sub_4015d3()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4015e0
void test_cpp_template_class()
{
 return;
}


// Function: sub_4015ea at 0x4015ea
void sub_4015ea()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4015f0
void test_cpp_lambda()
{
 return;
}


// Function: sub_4015fa at 0x4015fa
void sub_4015fa()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401600
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_40160a at 0x40160a
void sub_40160a()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401610
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_403c70[];
extern char g_403c98[];

void test_cpp_rtti()
{
 void* *ptr; // r13
 struct_2 **v2; // rax
 void* v3; // r15
 struct_2 **p; // rbp
 char *v5; // r12

 ptr = (void* *)operatornew(8);
 *(ptr) = &g_403c70;
 v2 = (struct_2 **)operatornew(8);
 v3 = *(ptr);
 p = v2;
 *(p) = (struct_2 *)&g_403c98;
 v5 = (char *)*((long long *)((long long)((char**)v3)[8] + 8));
 if (v5 != "12RTTIDerivedA" && *(v5) != 42)
 strcmp(v5, "12RTTIDerivedA");
 strlen(&v5[*(v5) == 42]);
 ((void(*)(void*))((long long)((char**)v3)[8]))(ptr);
 return;
}


// Function: sub_401748 at 0x401748
void sub_401748()
{
}


// Function: sub_40175d at 0x40175d
void sub_40175d()
{
}


// Function: sub_401768 at 0x401768
void sub_401768()
{
}


// Function: _Z20test_cpp_oo_featuresv at 0x401780
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_402018[];
extern int template_max_int(int arg_0, int arg_1);
extern double template_max_double(double arg_0, double arg_1);
extern long long template_swap_int(unsigned int *ptr, unsigned int *p);
extern char g_40203c[];
extern char g_40205a[];
extern char g_402076[];
extern char g_402092[];
extern char g_4020ae[];
extern char g_4020cb[];
extern char g_4020e7[];
extern char g_402103[];
extern char g_40211f[];
extern char g_40213b[];
extern char g_402158[];
extern char g_402175[];

void test_cpp_oo_features()
{
 unsigned int v7; // eax
 unsigned long long v8; // rdi
 unsigned long long v9; // rsi
 unsigned long long v10; // rdx
 unsigned long long v11; // rcx
 unsigned long long v12; // r8
 unsigned long long v13; // r9
 unsigned long long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 char v3; // [bp-0x34]
 char v4; // [bp-0x2c]

 puts(g_402018);
 strncpy(&v3, "Test", 4);
 memset(&v4, 0, 24);
 __printf_chk(1, g_40203c, (unsigned int)strlen(&v3) + 4700);
 __printf_chk(1, g_40205a, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 __printf_chk(1, g_402076, 42);
 __printf_chk(1, g_402092, 71);
 __printf_chk(1, g_4020ae, 650);
 __printf_chk(1, g_4020cb, 22);
 v7 = template_max_int(3, 7);
 template_max_double(v8, v9);
 v1 = 10;
 v0 = 0x4004000000000000;
 v2 = 20;
 template_swap_int(&v1, &v2);
 __printf_chk(1, g_4020e7, (unsigned int)v0 + v7 + v1 + v2);
 __printf_chk(1, g_402103, 16);
 __printf_chk(1, g_40211f, 85);
 __printf_chk(1, g_40213b, 0);
 __printf_chk(1, g_402158, 703);
 __printf_chk(1, g_402175, 0);
 return;
}


// Function: sub_401984 at 0x401984
extern void Base_virtual_func(void* arg_this, int arg_0);
void sub_401984(unsigned long a0, unsigned long a1)
{
 Base_virtual_func(0, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401990
void Base_virtual_func(void* arg_this, int arg_0)
{
 return;
}


// Function: sub_401998 at 0x401998
void sub_401998()
{
 Base_getName(0);
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4019a0
void Base_getName(void* arg_this)
{
 return;
}


// Function: sub_4019ac at 0x4019ac
void sub_4019ac()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x4019b0
int Base_Destructor(void* arg_this)
{
 return 0;
}


// Function: sub_4019b5 at 0x4019b5
void sub_4019b5(unsigned long a0, unsigned long a1)
{
 Derived_virtual_func(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4019c0
void Derived_virtual_func(void* arg_this, int arg_0)
{
 return;
}


// Function: sub_4019cb at 0x4019cb
void sub_4019cb()
{
 Derived_getName(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4019d0
void Derived_getName(void* arg_this)
{
 return;
}


// Function: sub_4019dc at 0x4019dc
void sub_4019dc()
{
 MultiDerived_funcA(0);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x4019e0
void MultiDerived_funcA(void* arg_this)
{
 return;
}


// Function: sub_4019ea at 0x4019ea
void sub_4019ea()
{
 MultiDerived_funcB(0);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4019f0
void MultiDerived_funcB(void* arg_this)
{
 return;
}


// Function: sub_4019fa at 0x4019fa
void sub_4019fa()
{
 // non-virtual thunk to MultiDerived::funcB()()
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401a00
unsigned long long non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: sub_401a0a at 0x401a0a
void sub_401a0a(unsigned long a0)
{
 MiddleA_func(0);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401a10
void MiddleA_func(void* arg_this)
{
 return;
}


// Function: sub_401a25 at 0x401a25
void sub_401a25(unsigned long a0)
{
 // thunk to MiddleA::func()()
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401a30
int thunk_to_MiddleA_func(char **a0)
{
 char **v1; // rdi

 v1 = (char **)a0 + (*(a0))[24];
 return *((int *)(8 + (char *)v1 + (*(v1))[24])) + 150;
}


// Function: sub_401a4c at 0x401a4c
void sub_401a4c(unsigned long a0)
{
 MiddleB_func(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401a50
void MiddleB_func(void* arg_this)
{
 return;
}


// Function: sub_401a65 at 0x401a65
void sub_401a65(unsigned long a0)
{
 // thunk to MiddleB::func()()
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401a70
int thunk_to_MiddleB_func(char **a0)
{
 char **v1; // rdi

 v1 = (char **)a0 + (*(a0))[24];
 return *((int *)(8 + (char *)v1 + (*(v1))[24])) + 200;
}


// Function: sub_401a8c at 0x401a8c
void sub_401a8c(unsigned long a0)
{
 DiamondDerived_func(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401a90
void DiamondDerived_func(void* arg_this)
{
 return;
}


// Function: sub_401aa5 at 0x401aa5
void sub_401aa5(unsigned long a0)
{
 // thunk to DiamondDerived::func()()
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401ab0
int thunk_to_DiamondDerived_func(char **a0)
{
 char **v1; // rdi

 v1 = (char **)a0 + (*(a0))[24];
 return *((int *)(8 + (char *)v1 + (*(v1))[24])) + 250;
}


// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned long a0)
{
 // non-virtual thunk to DiamondDerived::func()()
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401ad0
int non_virtual_thunk_to_DiamondDerived_func(char *a0)
{
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)((char**)a0)[16] - 24)))) + 250;
}


// Function: sub_401ae6 at 0x401ae6
void sub_401ae6()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401af0
void RTTIDerivedA_getType(void* arg_this)
{
 return;
}


// Function: sub_401afa at 0x401afa
void RTTIDerivedB_getType(void* arg_this);
void sub_401afa()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401b00
void RTTIDerivedB_getType(void* arg_this)
{
 return;
}


// Function: sub_401b0a at 0x401b0a
void sub_401b0a()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401b10
int RTTIDerivedB_Destructor(void* arg_this)
{
 return 0;
}


// Function: sub_401b15 at 0x401b15
void sub_401b15()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401b20
int RTTIDerivedA_Destructor(void* arg_this)
{
 return 0;
}


// Function: sub_401b25 at 0x401b25
void sub_401b25()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401b30
int DiamondDerived_Destructor(void* arg_this)
{
 return 0;
}


// Function: sub_401b35 at 0x401b35
void sub_401b35()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401b40
void thunk_to_DiamondDerived_Destructor(void)
{
 return;
}


// Function: sub_401b45 at 0x401b45
void sub_401b45()
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401b50
void non_virtual_thunk_to_DiamondDerived_Destructor(void)
{
 return;
}


// Function: sub_401b55 at 0x401b55
void sub_401b55()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401b60
int MultiDerived_Destructor(void* arg_this)
{
 return 0;
}


// Function: sub_401b65 at 0x401b65
void sub_401b65()
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401b70
void non_virtual_thunk_to_MultiDerived_Destructor(void)
{
 return;
}


// Function: sub_401b75 at 0x401b75
void sub_401b75()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401b80
int Derived_Destructor(void* arg_this)
{
 return 0;
}


// Function: sub_401b85 at 0x401b85
void sub_401b85()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401b90
int Base_Destructor0(void* arg_this)
{
 operatordelete(arg_this, 8);
 return 0;
}


// Function: sub_401b9e at 0x401b9e
void sub_401b9e()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401ba0
int Derived_Destructor0(void* arg_this)
{
 operatordelete(arg_this, 16);
 return 0;
}


// Function: sub_401bae at 0x401bae
void sub_401bae()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401bb0
int MultiDerived_Destructor0(void* arg_this)
{
 operatordelete(arg_this, 32);
 return 0;
}


// Function: sub_401bbe at 0x401bbe
void sub_401bbe(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401bc0
int non_virtual_thunk_to_MultiDerived_Destructor0(char *a0)
{
 operatordelete(a0 - 16, 32);
 return 0;
}


// Function: sub_401bd2 at 0x401bd2
void sub_401bd2()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401be0
int RTTIDerivedB_Destructor0(void* arg_this)
{
 operatordelete(arg_this, 8);
 return 0;
}


// Function: sub_401bee at 0x401bee
void sub_401bee()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401bf0
int RTTIDerivedA_Destructor0(void* arg_this)
{
 operatordelete(arg_this, 8);
 return 0;
}


// Function: sub_401bfe at 0x401bfe
void sub_401bfe()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401c00
int DiamondDerived_Destructor0(void* arg_this)
{
 operatordelete(arg_this, 48);
 return 0;
}


// Function: sub_401c0e at 0x401c0e
void sub_401c0e(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x401c10
int thunk_to_DiamondDerived_Destructor0(char **a0)
{
 operatordelete((char *)a0 + (*(a0))[32], 48);
 return 0;
}


// Function: sub_401c25 at 0x401c25
void sub_401c25(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x401c30
int non_virtual_thunk_to_DiamondDerived_Destructor0(char *a0)
{
 operatordelete(a0 - 16, 48);
 return 0;
}


// Function: sub_401c42 at 0x401c42
void sub_401c42(unsigned long a0, unsigned long a1)
{
 template_max_int(0, 0);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401c50
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401c5c at 0x401c5c
void sub_401c5c()
{
 template_max_double(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401c60
unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
 return (a > b) ? a : b;
}

double template_max_double(double arg_0, double arg_1)
{
 return (double)MaxV((unsigned long long)arg_0, (unsigned long long)arg_1);
}


// Function: sub_401c69 at 0x401c69
void sub_401c69(unsigned long a0, unsigned long a1)
{
 template_swap_int((unsigned int*)a0, (unsigned int*)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401c70
long long template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned long v1; // rax

 v1 = *(ptr);
 *(ptr) = *(p);
 *(p) = v1;
 return v1;
}


// Function: sub_401c7d at 0x401c7d
int Container_int_Container(void* ptr);
void sub_401c7d(unsigned long a0)
{
 Container_int_Container((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401c80
typedef struct Container_int {
 unsigned int data[10];
 unsigned int size;
} Container_int;

int Container_int_Container(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[40]) = 0;
 return 0;
}


// Function: sub_401c8c at 0x401c8c
void sub_401c8c(unsigned long a0)
{
 Container_int_push((void*)a0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401c90
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)((char*)ptr)[40];
 if ((unsigned int)index <= 9)
 {
 *((unsigned int *)&((char*)ptr)[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_401ca7 at 0x401ca7
void sub_401ca7(unsigned long a0, unsigned long a1)
{
 Container_int_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401cb0
void Container_int_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: sub_401cc7 at 0x401cc7
void sub_401cc7(unsigned long a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401cd0
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: sub_401cd8 at 0x401cd8
void sub_401cd8(unsigned long a0)
{
 Container_double_Container((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401ce0
typedef struct Container_double {
 double data[10];
 unsigned int size;
} Container_double;

int Container_double_Container(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[80]) = 0;
 return 0;
}


// Function: sub_401cec at 0x401cec
void sub_401cec(unsigned long a0)
{
 Container_double_push((void*)a0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401cf0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)((char*)ptr)[80];
 if ((unsigned int)index <= 9)
 {
 *((unsigned int *)&((char*)ptr)[80]) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_401d09 at 0x401d09
void sub_401d09(unsigned long a0, unsigned long a1)
{
 Container_double_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401d10
void Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: sub_401d22 at 0x401d22
void sub_401d22()
{
}


// Function: sub_401d31 at 0x401d31
void sub_401d31(unsigned long a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401d40
void Container_double_getSize(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


