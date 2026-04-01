// Angr Decompilation of 5-1_gcc_Os_no_g
// Platform: AARCH64

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* CRT stub function _init removed by preprocessor */

// Forward declarations
void test_cpp_oo_features();
void test_cpp_member_func();
void test_cpp_constructor();
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_exception();
void test_cpp_smart_ptr();
void test_cpp_rtti();
extern int __cxa_atexit(void*, void*, void*);
extern void _start();
extern void ios_base_Init_Init(void*);
extern void deregister_tm_clones();
extern void __do_global_dtors_aux();
extern unsigned long long frame_dummy();
extern void __stack_chk_fail();

// Template function forward declarations
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_int(unsigned int *ptr, unsigned int *p);
void Container_int_push(void* ptr, int arg_0);

// Operator declarations
extern void* operator_new(unsigned int);
extern void* operator_new_array(unsigned int);
extern void operator_delete(void*);
extern void operator_delete_array(void*);

// ARM64 helper declarations
extern unsigned long long arm64g_calculate_condition(unsigned int, unsigned long long, unsigned long long, unsigned long long);
extern unsigned long long CmpF(unsigned long, unsigned long);

// Middle class function forward declarations
void MiddleA_func(void* this);
void MiddleB_func(void* this);

// DiamondDerived function forward declaration
void DiamondDerived_func(void* this);



// Function: __dollar_x at 0x401650
extern unsigned long long g_413ef0;
extern unsigned long long g_4138e0;
extern unsigned long long g_413918;
extern unsigned long long g_413958;
extern unsigned long long g_413990;
extern unsigned long long g_413ac8;
extern unsigned long long g_413af8;
extern unsigned long long g_413b30;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return 0;
}


// Function: sub_401664 at 0x401664
extern void* operator_new_array(unsigned int);
extern void* __cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void*, void*, void*);
extern void* __cxa_begin_catch();
extern void __cxa_end_catch();
extern void _Unwind_Resume();

void* sub_401664()
{
 unsigned int v0; // x0

 return operator_new_array(v0);
}


// Function: _Z18test_cpp_exceptionv at 0x401800
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
}


// Function: main at 0x4018d0
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4018e8
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ios_base_Init_Init(&_ZStL8__ioinit);
 v2 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_401928 at 0x401928
void sub_401928(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401970 at 0x401970
void sub_401970()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401988 at 0x401988
void sub_401988()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4019fc at 0x4019fc
void sub_4019fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401a48 at 0x401a48
long long sub_401a48()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401a54
extern char __stack_chk_guard;

void test_cpp_member_func()
{
 char *v0; // [bp-0x40]
 char v1[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 result = 0;
 strlen(strncpy(v1, "Test", 31));
 if (v3 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x401ac0
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401ad8
struct Base {
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 goto *((long long *)*((long long *)&arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401ae8
struct Base {
} Base;

extern char __stack_chk_guard;
extern struct Base g_413868;
extern struct Base g_413898;

void test_cpp_virtual_func()
{
 char *v0; // [bp-0x40]
 struct Base v1; // [bp-0x20]
 struct Base v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 *((struct Base **)&v1) = &g_413868;
 *((struct Base **)&v2) = &g_413898;
 v3 = 3;
 call_virtual_func(&v1, 5);
 call_virtual_func(&v2, 5);
 if (v4 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401b78
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401b80
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401b88
extern char __stack_chk_guard;

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
 if (v4 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x401c30
extern char __stack_chk_guard;

void test_cpp_template_class()
{
 char *v0; // [bp-0x60]
 unsigned int v1; // [bp-0x38]
 unsigned int result; // [bp-0x10]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 result = 1;
 v1 = 10;
 Container_int_push(&v1, 20);
 Container_int_push(&v1, 30);
 if (v3 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z15test_cpp_lambdav at 0x401cc0
void test_cpp_lambda()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401cc8
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_413b58;
extern struct_2 g_413b80;

void test_cpp_rtti()
{
 void* *ptr; // x21
 struct_2 **p; // x20
 void* v4; // x23
 char *cur; // x22
 char *v0; // [bp-0x50]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (void* *)operator_new(8);
 *(ptr) = &g_413b58;
 p = (struct_2 **)operator_new(8);
 v4 = *(ptr);
 *(p) = &g_413b80;
 cur = (char *)((long long)v4 + 8);
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401e24
extern char __stack_chk_guard;

typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_0;

void test_cpp_smart_ptr()
{
 char *v0; // [bp-0x50]
 unsigned long long result; // [bp-0x20]
 unsigned int *p; // [bp-0x18]
 struct_0 *ptr; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 result = 0;
 p = operator_new(4);
 *(p) = 200;
 ptr = operator_new_array(20);
 ptr->field_0 = 8589934593;
 ptr->field_8 = 17179869187;
 ptr->field_10 = 5;
 if (v4 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_401ec8 at 0x401ec8
long long sub_401ec8(unsigned long long a0)
{
 _Unwind_Resume(); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401ef8
extern char __stack_chk_guard;
extern unsigned long long g_413ac8;
extern unsigned long long g_413af8;
extern unsigned long long g_413b30;

void test_cpp_diamond_inheritance()
{
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v1 = (unsigned long long)&g_413ac8;
 v3 = (unsigned long long)&g_413b30;
 v2 = (unsigned long long)&g_413af8;
 v4 = 50;
 v4 = 100;
 if (v5 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_oo_featuresv at 0x401fa0
extern char g_4025b2;
extern char g_4025d6;
extern char g_4025f4;
extern char g_402610;
extern char g_40262c;
extern char g_402648;
extern char g_402665;
extern char g_402681;
extern char g_40269d;
extern char g_4026b9;
extern char g_4026d5;
extern char g_4026f2;
extern char g_40270f;

void test_cpp_oo_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_4025b2);
 test_cpp_member_func();
 __printf_chk(1, &g_4025d6, 0);
 test_cpp_constructor();
 __printf_chk(1, &g_4025f4, 0);
 test_cpp_virtual_func();
 __printf_chk(1, &g_402610, 0);
 test_cpp_multiple_inheritance();
 __printf_chk(1, &g_40262c, 0);
 test_cpp_diamond_inheritance();
 __printf_chk(1, &g_402648, 0);
 test_cpp_operator_overload();
 __printf_chk(1, &g_402665, 0);
 test_cpp_template_func();
 __printf_chk(1, &g_402681, 0);
 test_cpp_template_class();
 __printf_chk(1, &g_40269d, 0);
 test_cpp_lambda();
 __printf_chk(1, &g_4026b9, 0);
 test_cpp_exception();
 __printf_chk(1, &g_4026d5, 0);
 test_cpp_smart_ptr();
 __printf_chk(1, &g_4026f2, 0);
 test_cpp_rtti();
 __printf_chk(1, &g_40270f, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4020d8
void Base_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4020e0
void Base_getName(void* this)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x4020ec
void Base_destructor(void* this)
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4020f0
void Derived_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4020fc
void Derived_getName(void* this)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402108
void MultiDerived_funcA(void* this)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x402110
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x402118
unsigned long long thunk_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN11VirtualBase4funcEv at 0x402120
void VirtualBase_func(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x402128
void VirtualBase_destructor(void* this)
{
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x40212c
void MiddleA_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402144
long long thunk_MiddleA_func(void* *a0)
{
 unsigned long v0; // x0
 unsigned long offset;

 offset = ((unsigned long *)(*(a0)))[24];
 MiddleA_func((char *)a0 + offset);
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x402154
void MiddleB_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x40216c
long long thunk_MiddleB_func(void* *a0)
{
 unsigned long v0; // x0
 unsigned long offset;

 offset = ((unsigned long *)(*(a0)))[24];
 MiddleB_func((char *)a0 + offset);
 return 0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x40217c
void DiamondDerived_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402194
long long thunk_DiamondDerived_func(void* *a0)
{
 unsigned long v0; // x0
 unsigned long offset;

 offset = ((unsigned long *)(*(a0)))[24];
 DiamondDerived_func((char *)a0 + offset);
 return 0;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4021a4
long long thunk_DiamondDerived_func_nonvirtual(void* a0)
{
 unsigned long v0; // x0

 DiamondDerived_func((char *)a0 - 16);
 return 0;
}


// Function: _ZN7MiddleAD1Ev at 0x4021ac
extern unsigned long long g_4138e0;
extern unsigned long long g_413918;

void MiddleA_destructor(void* ptr)
{
 *((unsigned long long **)ptr) = &g_4138e0;
 *((unsigned long long **)((char *)ptr + 16)) = &g_413918;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x4021c8
extern unsigned long long g_4138e0;
extern unsigned long long g_413918;

void thunk_MiddleA_destructor(void* *a0)
{
 unsigned long long v0; // x2
 unsigned long *vtable;

 vtable = (unsigned long *)(*(a0));
 v0 = vtable[32];
 *((unsigned long long **)((char *)a0 + v0)) = &g_4138e0;
 *((unsigned long long **)(16 + (char *)a0 + v0)) = &g_413918;
}


// Function: _ZN7MiddleBD1Ev at 0x4021f0
extern unsigned long long g_413958;
extern unsigned long long g_413990;

void MiddleB_destructor(void* ptr)
{
 *((unsigned long long **)ptr) = &g_413958;
 *((unsigned long long **)((char *)ptr + 16)) = &g_413990;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x40220c
extern unsigned long long g_413958;
extern unsigned long long g_413990;

void thunk_MiddleB_destructor(void* *a0)
{
 unsigned long long v0; // x2
 unsigned long *vtable;

 vtable = (unsigned long *)(*(a0));
 v0 = vtable[32];
 *((unsigned long long **)((char *)a0 + v0)) = &g_413958;
 *((unsigned long long **)(16 + (char *)a0 + v0)) = &g_413990;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402234
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40223c
void RTTIDerivedB_getType(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x402244
void RTTIDerivedB_destructor(void* this)
{
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x402248
void RTTIDerivedA_destructor(void* this)
{
}


// Function: _ZN12MultiDerivedD1Ev at 0x40224c
void MultiDerived_destructor(void* this)
{
}





// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402250
void thunk_MultiDerived_destructor()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x402254
void Derived_destructor(void* this)
{
}


// Function: _ZN4BaseD0Ev at 0x402258
void Base_destructor0(void* this)
{
 operator_delete(this);
}


// Function: _ZN7DerivedD0Ev at 0x402260
void Derived_destructor0(void* this)
{
 operator_delete(this);
}


// Function: _ZN12MultiDerivedD0Ev at 0x402268
void MultiDerived_destructor0(void* this)
{
 operator_delete(this);
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402270
void thunk_MultiDerived_destructor0(unsigned long a0)
{
 MultiDerived_destructor0((void *)(a0 - 16));
}


// Function: _ZN11VirtualBaseD0Ev at 0x402278
void VirtualBase_destructor0(void* this)
{
 operator_delete(this);
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402280
void RTTIDerivedB_destructor0(void* this)
{
 operator_delete(this);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402288
void RTTIDerivedA_destructor0(void* this)
{
 operator_delete(this);
}


// Function: _ZN7MiddleAD0Ev at 0x402290
extern unsigned long long g_4138e0;
extern unsigned long long g_413918;

void MiddleA_destructor0(void* ptr)
{
 *((unsigned long long **)ptr) = &g_4138e0;
 *((unsigned long long **)((char *)ptr + 16)) = &g_413918;
 operator_delete(ptr);
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x4022b0
void thunk_MiddleA_destructor0(unsigned long a0)
{
 unsigned long offset;
 offset = ((unsigned long *)a0)[32];
 MiddleA_destructor0((void *)(a0 + offset));
}


// Function: _ZN7MiddleBD0Ev at 0x4022c0
extern unsigned long long g_413958;
extern unsigned long long g_413990;

void MiddleB_destructor0(void* ptr)
{
 *((unsigned long long **)ptr) = &g_413958;
 *((unsigned long long **)((char *)ptr + 16)) = &g_413990;
 operator_delete(ptr);
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x4022e0
void thunk_MiddleB_destructor0(unsigned long a0)
{
 unsigned long offset;
 offset = ((unsigned long *)a0)[32];
 MiddleB_destructor0((void *)(a0 + offset));
}


// Function: _ZN7MiddleAD4Ev at 0x4022f0
extern unsigned long long g_4138e0;
extern unsigned long long g_413918;

void MiddleA_destructor1(void* p)
{
 unsigned long long ptr3; // x3
 unsigned long v4; // x1
 unsigned long long v5; // x2

 ptr3 = g_4138e0;
 *((unsigned long long *)p) = ptr3;
 v5 = 16;
 v4 = g_413918;
 *((unsigned long *)((char *)p + v5)) = v4;
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x40232c
void MiddleA_destructor2(void* this)
{
}


// Function: _ZN7MiddleBD4Ev at 0x402338
extern unsigned long long g_413958;
extern unsigned long long g_413990;

void MiddleB_destructor1(void* p)
{
 *((unsigned long long *)p) = (unsigned long long)&g_413958;
 *((unsigned long long *)((char *)p + 16)) = (unsigned long long)&g_413990;
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x402374
void MiddleB_destructor2(void* this)
{
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402380
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x40238c
double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402398
long long template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // w2

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return (long long)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4023ac
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4023b4
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v0; // w2

 v0 = (int)ptr[40];
 if (9 >= v0)
 {
 *((unsigned int *)&ptr[40]) = v0 + 1;
 *((int *)((char *)ptr + 4 * v0)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4023d0
int Container_int_get(void* this, int arg_0)
{
 if (!((char)(arg_0 >> 31) & 1) && (int)((unsigned int *)this)[40] > arg_0)
 return 1;
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4023f0
unsigned int Container_int_getSize(void* this)
{
 return ((unsigned int *)this)[40];
}


// Function: _ZN9ContainerIdEC1Ev at 0x4023f8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402400
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int v0; // w1
 double v1; // d0

 v0 = (int)ptr[80];
 if (9 >= v0)
 {
 *((unsigned int *)&ptr[80]) = v0 + 1;
 v1 = arg_0;
 *((unsigned long *)((char *)ptr + 8 * v0)) = *(unsigned long *)&v1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40241c
int Container_double_get(void* this, int arg_0)
{
 if (!((char)(arg_0 >> 31) & 1) && (int)((unsigned int *)this)[80] > arg_0)
 return 1;
 return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40243c
unsigned int Container_double_getSize(void* this)
{
 return ((unsigned int *)this)[80];
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x402444
void std_unique_ptr_destructor(void* this)
{
 if (!*((long long *)this))
 return;
 operator_delete((void *)(*((long long *)this)));
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x402458
void std_unique_ptr_array_destructor(void* this)
{
 if (!*((long long *)this))
 return;
 operator_delete_array((void *)(*((long long *)this)));
}


// Function: _ZN14DiamondDerivedD4Ev at 0x402468
extern unsigned long long g_413ac8;
extern unsigned long long g_413af8;
extern unsigned long long g_413b30;

void DiamondDerived_destructor1(void* p)
{
 *((unsigned long long *)p) = g_413ac8;
 *((unsigned long long *)((char *)p + 32)) = g_413b30;
 *((unsigned long long *)((char *)p + 16)) = g_413af8;
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402518
void DiamondDerived_destructor(void* this)
{
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402524
void thunk_DiamondDerived_destructor(unsigned long a0)
{
 DiamondDerived_destructor((void *)(a0 - 16));
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x40252c
void thunk_DiamondDerived_destructor0(unsigned long a0)
{
 unsigned long offset;
 offset = ((unsigned long *)a0)[32];
 DiamondDerived_destructor((void *)(a0 + offset));
}


// Function: _ZN14DiamondDerivedD0Ev at 0x40253c
void DiamondDerived_destructor0(void* this)
{
 operator_delete(this);
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402564
void thunk_DiamondDerived_destructor1(unsigned long a0)
{
 DiamondDerived_destructor0((void *)(a0 - 16));
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x40256c
void thunk_DiamondDerived_destructor2(unsigned long a0)
{
 unsigned long offset;
 offset = ((unsigned long *)a0)[32];
 DiamondDerived_destructor0((void *)(a0 + offset));
 return;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x40257c
void DiamondDerived_destructor2(void* this)
{
}



/* CRT stub function _fini removed by preprocessor */


