// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x401470
extern unsigned long long g_413ef0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto *(void*)g_413ef0;
}


#include <stddef.h>

/* Forward declaration for Base struct */
typedef struct Base {
	void **vptr;
} Base;

/* Forward declarations for Base virtual functions */
void Base_virtual_func(void* this, int arg_0);
void Base_getName(void* this);

// Static variable for LifecycleClass::instance_count
int _ZN14LifecycleClass14instance_countE = 0;

// Virtual table pointers for Base class
void* _ZTV4Base[4] = {0, 0, (void*)Base_virtual_func, (void*)Base_getName};

// Global Base instances (virtual table objects)
Base g_413958 = { _ZTV4Base + 2 };
Base g_413988 = { _ZTV4Base + 2 };

// Diamond inheritance globals
unsigned long long g_413ac8 = 0;
unsigned long long g_413af8 = 0;
char g_413b30 = 0;

// RTTI globals
char g_413b58 = 0;
char g_413b80 = 0;

// String literals for test_cpp_oo_features
const char g_402148[] = "Testing C++ member functions...\n";
const char g_402170[] = "Testing C++ constructors...\n";
const char g_402190[] = "Testing C++ virtual functions...\n";
const char g_4021b0[] = "Testing C++ multiple inheritance...\n";
const char g_4021d0[] = "Testing C++ diamond inheritance...\n";
const char g_4021f0[] = "Testing C++ templates...\n";
const char g_402210[] = "Template max: %d, swap: %d %d\n";
const char g_402230[] = "Testing C++ exceptions...\n";
const char g_402250[] = "Exception caught: value = %d\n";
const char g_402270[] = "Derived exception caught: code = %d\n";
const char g_402290[] = "Testing C++ smart pointers...\n";
const char g_4022b0[] = "Testing C++ RTTI...\n";
const char g_4022d0[] = "All C++ OO features tested!\n";

// RTTI type info
char _ZTIi = 0;
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;

// Function: sub_401484 at 0x401484
void* operator_new_array(size_t size);
void operator_delete_array(void* ptr);

void sub_401484()
{
 size_t v0; // x0
 v0 = 20;
 (void)operator_new_array(v0);
}



/* CRT stub function _start removed by preprocessor */



#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/* Stack protector function */
void __stack_chk_fail(void)
{
 abort();
}

/* Forward declarations for C++ template functions (C-compatible names) */
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_int(unsigned int *ptr, unsigned int *ptr2);

/* Forward declaration for __cxa_atexit */
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

/* Forward declaration for __printf_chk (glibc function) */
int __printf_chk(int flag, const char *format, ...);

/* Stub function declarations */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* Forward declarations for C++ new/delete operators */
void* operatornew(size_t size);
int operatordelete(void* ptr, size_t size);

/* Forward declaration for Base struct */
typedef struct Base {
	void **vptr;
} Base;

/* Forward declarations for C++ member functions (C-compatible names) */
void call_virtual_func(Base *arg_0, int arg_1);
void Base_virtual_func(void* this, int arg_0);
void Base_getName(void* this);
int Base_destructor(void* this);
void Derived_virtual_func(void* this, int arg_0);
void Derived_getName(void* this);
void MultiDerived_funcA(void* this);
void MultiDerived_funcB(void* this);
unsigned long long MultiDerived_funcB_thunk(void);
void MiddleA_func(void* this);
int MiddleA_func_thunk(void* *a0);
void MiddleB_func(void* this);
int MiddleB_func_thunk(void* *a0);
void DiamondDerived_func(void* this);
int DiamondDerived_func_thunk(void* *a0);
int DiamondDerived_func_thunk16(void* a0);
void RTTIDerivedA_getType(void* this);
void RTTIDerivedB_getType(void* this);
int RTTIDerivedB_destructor(void* this);
int RTTIDerivedA_destructor(void* this);
int DiamondDerived_destructor(void* this);
long long DiamondDerived_destructor_thunk16(void);
long long DiamondDerived_destructor_thunk32(void);
int MultiDerived_destructor(void* this);
long long MultiDerived_destructor_thunk16(void);
int Derived_destructor2(void* this);
int Base_destructor0(void* this);
int Derived_destructor0(void* this);
int MultiDerived_destructor0(void* this);
int MultiDerived_destructor0_thunk16(void* a0);
int RTTIDerivedA_destructor0(void* this);
int RTTIDerivedB_destructor0(void* this);
int DiamondDerived_destructor0(void* this);
int DiamondDerived_destructor0_thunk32(void* *a0);
int DiamondDerived_destructor0_thunk16(void* a0);
int Container_int_Constructor(void* ptr);
void Container_int_push(void* ptr, int arg_0);
int Container_int_get(void* this, int arg_0);
int Container_int_getSize(void* this);
int Container_double_Constructor(void* ptr);
void Container_double_push(void* ptr, double arg_0);
double Container_double_get(void* this, int arg_0);
int Container_double_getSize(void* this);

// Function: sub_401670 at 0x401670
void sub_401670()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



void deregister_tm_clones();

// Function: sub_401688 at 0x401688
void sub_401688()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



void __do_global_dtors_aux();

// Function: sub_4016fc at 0x4016fc
void sub_4016fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void frame_dummy();

// Function: sub_401748 at 0x401748
long long sub_401748()
{
 unsigned long long v0; // x0

 v0 = 0;
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401754
extern char __stack_chk_guard;
void __stack_chk_fail(void);

void test_cpp_member_func()
{
 char *v0; // [bp-0x50]
 char v1[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 strncpy(v1, "Test", 31);
 result = 0;
 (void)strlen(v1);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4017cc
extern int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (unsigned int *)operator_new_array(20);
 ptr[0] = 0;
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401838

void call_virtual_func(Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]
 typedef void (*vfunc_type)(void*, int);

 v0 = &v1;
 ((vfunc_type)(*(void**)(*(void**)arg_0)))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401854
extern char __stack_chk_guard;
Base g_413958;
Base g_413988;

void test_cpp_virtual_func()
{
 char *v0; // [bp-0x40]
 Base v1; // [bp-0x20]
 Base v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 *((Base **)&v1) = &g_413958;
 *((Base **)&v2) = &g_413988;
 v3 = 3;
 call_virtual_func(&v1, 5);
 call_virtual_func(&v2, 5);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4018e4
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4018ec
extern char __stack_chk_guard;
extern unsigned long long g_413ac8;
extern unsigned long long g_413af8;
extern char g_413b30;
int _ZTv0_n24_N14DiamondDerived4funcEv(void* *a0);

void test_cpp_diamond_inheritance()
{
 char *v0; // [bp-0x60]
 void *v1; // [bp-0x38]
 void *v2; // [bp-0x28]
 void *v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v1 = &g_413ac8;
 v3 = &g_413b30;
 v2 = &g_413af8;
 v4 = 50;
 _ZTv0_n24_N14DiamondDerived4funcEv(&v3);
 v4 = 100;
 _ZTv0_n24_N14DiamondDerived4funcEv(&v3);
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401988
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401990
extern char __stack_chk_guard;
void* __cxa_begin_catch(void* thrown_exception);
void _Unwind_Resume(void* unwind_arg);

void test_cpp_template_func()
{
 unsigned long long v6; // d8
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = v6;
 v4 = *((long long *)&__stack_chk_guard);
 template_max_double(template_max_int(3, 7), 7);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2, &v3);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401a38
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401a40
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401a48
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern char _ZTIi;
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* thrown_exception, void* tinfo, void (*dest)(void*));
void __cxa_end_catch();

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 unsigned long long result; // x1
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]
 void *exception_ptr;

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 result = (unsigned long long)&_ZTIi;
 __cxa_throw(ptr, &_ZTIi, 0);
 if (result == 1)
 {
 exception_ptr = __cxa_begin_catch(0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 exception_ptr = __cxa_begin_catch(0);
 _Unwind_Resume(exception_ptr); /* do not return */
 }
 exception_ptr = __cxa_begin_catch(0);
 _Unwind_Resume(exception_ptr); /* do not return */
}


// Function: _Z18test_cpp_smart_ptrv at 0x401b20
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401b28
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_413b58;
extern char g_413b80;

void test_cpp_rtti()
{
 void* *p; // x20
 struct_2 **ptr; // x21
 char *v4; // x22
 char *v5; // x0
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]
 typedef void (*vfunc_type)(void*, unsigned long long);

 v0 = &v1;
 p = operatornew(8);
 (void)p;
 ptr = (struct_2 **)operatornew(8);
 *ptr = (struct_2 *)&g_413b80;
 v4 = (char *)((long long)*(void**)(void*)((char*)p + 8) + 8);
 if (*(char *)v4 != 42)
 v5 = v4;
 else
 v5 = v4 + 1;
 (void)strlen(v5);
 ((vfunc_type)*(void**)(void*)((char*)p + 8))((void*)p, (long long)*(void**)(void*)((char*)p + 8));
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401c8c
extern const char g_402148[];
extern const char g_402170[];
extern const char g_402190[];
extern const char g_4021b0[];
extern const char g_4021d0[];
extern const char g_4021f0[];
extern const char g_402210[];
extern const char g_402230[];
extern const char g_402250[];
extern const char g_402270[];
extern const char g_402290[];
extern const char g_4022b0[];
extern const char g_4022d0[];

void test_cpp_oo_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_402148);
 test_cpp_member_func();
 __printf_chk(1, g_402170);
 test_cpp_constructor();
 __printf_chk(1, g_402190);
 test_cpp_virtual_func();
 __printf_chk(1, g_4021b0);
 test_cpp_multiple_inheritance();
 __printf_chk(1, g_4021d0);
 test_cpp_diamond_inheritance();
 __printf_chk(1, g_4021f0);
 __printf_chk(1, g_402210, 22);
 test_cpp_template_func();
 __printf_chk(1, g_402230);
 __printf_chk(1, g_402250, 16);
 __printf_chk(1, g_402270, 85);
 test_cpp_exception();
 __printf_chk(1, g_402290);
 test_cpp_smart_ptr();
 __printf_chk(1, g_4022b0);
 test_cpp_rtti();
 __printf_chk(1, g_4022d0);
 return;
}


// Function: main at 0x401dbc
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}





// Function: _ZN4Base12virtual_funcEi at 0x401e18
void Base_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401e20
void Base_getName(void* this)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401e2c
int Base_destructor(void* this)
{
 return 0;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401e30
void Derived_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401e3c
void Derived_getName(void* this)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401e48
void MultiDerived_funcA(void* this)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401e50
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401e58
void _ZThn16_N12MultiDerived5funcBEv(void* this)
{
 MultiDerived_funcB((char*)this - 16);
}

// Function: _ZThn16_N12MultiDerived5funcBEv thunk at 0x401e58
unsigned long long MultiDerived_funcB_thunk(void)
{
 return 0;
}


// Function: _ZN7MiddleA4funcEv at 0x401e60
void MiddleA_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401e78
int _ZTv0_n24_N7MiddleA4funcEv(void* *a0)
{
 MiddleA_func((char*)a0 - 24);
 return 0;
}

// Function: MiddleA_func_thunk at 0x401e78
int MiddleA_func_thunk(void* *a0)
{
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x401e9c
void MiddleB_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401eb4
int _ZTv0_n24_N7MiddleB4funcEv(void* *a0)
{
 MiddleB_func((char*)a0 - 24);
 return 0;
}

// Function: MiddleB_func_thunk at 0x401eb4
int MiddleB_func_thunk(void* *a0)
{
 return 0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401ed8
void DiamondDerived_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401ef0
int _ZTv0_n24_N14DiamondDerived4funcEv(void* *a0)
{
 DiamondDerived_func((char*)a0 - 24);
 return 0;
}

// Function: DiamondDerived_func_thunk at 0x401ef0
int DiamondDerived_func_thunk(void* *a0)
{
 return 0;
}

// Function: DiamondDerived_func_thunk16 at 0x401f14
int DiamondDerived_func_thunk16(void* a0)
{
 return 0;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401f14
void _ZThn16_N14DiamondDerived4funcEv(void* a0)
{
 DiamondDerived_func((char*)a0 - 16);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401f2c
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401f34
void RTTIDerivedB_getType(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401f3c
int RTTIDerivedB_destructor(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401f40
int RTTIDerivedA_destructor(void* this)
{
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401f44
int DiamondDerived_destructor(void* this)
{
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401f48
void _ZThn16_N14DiamondDerivedD1Ev()
{
 unsigned long v0; // x0
 v0 = 0;
 return;
}

// Function: DiamondDerived_destructor_thunk16 at 0x401f48
long long DiamondDerived_destructor_thunk16(void)
{
 return 0;
}

// Function: DiamondDerived_destructor_thunk32 at 0x401f4c
long long DiamondDerived_destructor_thunk32(void)
{
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401f4c
int _ZTv0_n32_N14DiamondDerivedD1Ev(void* *this)
{
 return DiamondDerived_destructor((char*)this + 32);
}


// Function: _ZN12MultiDerivedD1Ev at 0x401f50
int MultiDerived_destructor(void* this)
{
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401f54
void _ZThn16_N12MultiDerivedD1Ev(void* this)
{
 MultiDerived_destructor((char*)this - 16);
}

// Function: MultiDerived_destructor_thunk16 at 0x401f54
long long MultiDerived_destructor_thunk16(void)
{
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x401f58
int Derived_destructor2(void* this)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401f5c
int Base_destructor0(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x401f74
int Derived_destructor0(void* this)
{
 operatordelete(this, 16);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401f8c
int MultiDerived_destructor0(void* this)
{
 operatordelete(this, 32);
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401fa4
int _ZThn16_N12MultiDerivedD0Ev(void* a0)
{
 operatordelete((char*)a0 - 16, 32);
 return 0;
}

// Function: MultiDerived_destructor0_thunk16 at 0x401fa4
int MultiDerived_destructor0_thunk16(void* a0)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401fc0
int RTTIDerivedA_destructor0(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401fd8
int RTTIDerivedB_destructor0(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401ff0
int DiamondDerived_destructor0(void* this)
{
 operatordelete(this, 48);
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402008
int _ZTv0_n32_N14DiamondDerivedD0Ev(void* *a0)
{
 operatordelete((char *)a0 + ((char*)*(a0))[32], 48);
 return 0;
}

// Function: DiamondDerived_destructor0_thunk32 at 0x402008
int DiamondDerived_destructor0_thunk32(void* *a0)
{
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x40202c
int non_virtual_thunk_DiamondDerived_destructor(void* a0)
{
 operatordelete((char*)a0 - 16, 48);
 return 0;
}

// Function: DiamondDerived_destructor0_thunk16 at 0x40202c
int DiamondDerived_destructor0_thunk16(void* a0)
{
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402048
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402054
double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402060
long long template_swap_int(unsigned int *ptr, unsigned int *ptr2)
{
 unsigned int v0; // w2

 v0 = *(ptr);
 *(ptr) = *(ptr2);
 *(ptr2) = v0;
 return (long long)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402074
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40207c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v0; // w2

 v0 = *(unsigned int *)((char*)ptr + 40);
 if (9 >= v0)
 {
 *((unsigned int *)((char*)ptr + 40)) = v0 + 1;
 *((int *)((char *)ptr + 4 * v0)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402098
int Container_int_get(void* this, int arg_0)
{
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4020c0
int Container_int_getSize(void* this)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4020c8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4020d0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int v0; // w1
 unsigned long v1; // d0

 v0 = *(unsigned int *)((char*)ptr + 80);
 if (9 >= v0)
 {
 *((unsigned int *)((char*)ptr + 80)) = v0 + 1;
 *((double *)((char *)ptr + 8 * v0)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4020ec
double Container_double_get(void* this, int arg_0)
{
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40210c
int Container_double_getSize(void* this)
{
 return 0;
}


// Implementation of operator new[]
void* operator_new_array(size_t size)
{
 return malloc(size);
}

// Implementation of operator delete[]
void operator_delete_array(void* ptr)
{
 if (ptr)
 free(ptr);
}

// Implementation of operator new
void* operatornew(size_t size)
{
 return malloc(size);
}

// Implementation of operator delete
int operatordelete(void* ptr, size_t size)
{
 if (ptr)
 free(ptr);
 return 0;
}


/* CRT stub function _fini removed by preprocessor */


