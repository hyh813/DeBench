// Angr Decompilation of 5-1_gcc_O1_g
// Platform: AARCH64

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/* Function declarations */
void *operatornew(unsigned long size);
void *operator_new_array(unsigned long size);
void operatordelete(void *ptr, unsigned long size);
void operator_delete_array(void *ptr);
void operator_delete(void *ptr, unsigned long size);
int arm64g_calculate_condition(int cond, unsigned long op, unsigned long op2, unsigned long op3);
unsigned long long CmpF(unsigned long a, unsigned long b);
int __printf_chk(int flag, const char *format, ...);
int thunk_to_DiamondDerived_func(void* a0);
int non_virtual_thunk_to_DiamondDerived_func(void* a0);

/* Stub implementations for C++ operators */
void *operatornew(unsigned long size)
{
 return malloc(size);
}

void *operator_new_array(unsigned long size)
{
 return calloc(1, size);
}

void operatordelete(void *ptr, unsigned long size)
{
 (void)size;
 free(ptr);
}

void operator_delete_array(void *ptr)
{
 free(ptr);
}

void operator_delete(void *ptr, unsigned long size)
{
 (void)size;
 free(ptr);
}

/* Template function forward declarations */
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(unsigned int *a, unsigned int *b);
unsigned int _ZNK9ContainerIiE7getSizeEv(void* this);
unsigned int _ZNK9ContainerIdE7getSizeEv(void* this);
void __stack_chk_fail(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
unsigned long long frame_dummy(void);
void std_ios_base_Init_Init(void *this);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *obj, void *tinfo, void *dest);
void *__cxa_begin_catch(void);
void __cxa_end_catch(void);
void _Unwind_Resume(void) __attribute__((noreturn));

/* CRT stub function _init removed by preprocessor */

/* Stub implementations for runtime functions */
void __stack_chk_fail(void)
{
 abort();
}

void deregister_tm_clones(void)
{
}

void __do_global_dtors_aux(void)
{
}

unsigned long long frame_dummy(void)
{
 return 0;
}

void std_ios_base_Init_Init(void *this)
{
 (void)this;
}

void _ZNSt8ios_base4InitD1Ev(void *this)
{
 (void)this;
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 (void)func;
 (void)arg;
 (void)dso_handle;
 return 0;
}

void *__cxa_allocate_exception(unsigned long size)
{
 (void)size;
 return malloc(1);
}

void __cxa_throw(void *obj, void *tinfo, void *dest)
{
 (void)obj;
 (void)tinfo;
 (void)dest;
 abort();
}

void *__cxa_begin_catch(void)
{
 return NULL;
}

void __cxa_end_catch(void)
{
}

void _Unwind_Resume(void)
{
 abort();
}

int arm64g_calculate_condition(int cond, unsigned long op, unsigned long op2, unsigned long op3)
{
 (void)cond;
 (void)op;
 (void)op2;
 (void)op3;
 return 0;
}

unsigned long long CmpF(unsigned long a, unsigned long b)
{
 (void)a;
 (void)b;
 return 0;
}

// Function: __dollar_x at 0x401470
unsigned long long g_413ef0 = 0;
char _ZStL8__ioinit[1];
unsigned long long __dso_handle = 0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
g_413ef0:
 return 0;
}


// Function: sub_401484 at 0x401484
void *sub_401484()
{
 unsigned int v0; // x0

 return operator_new_array(v0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401670 at 0x401670
void sub_401670()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401688 at 0x401688
void sub_401688()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4016fc at 0x4016fc
unsigned long long sub_4016fc()
{
 __do_global_dtors_aux();
 return 0;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401748 at 0x401748
void sub_401748()
{
 frame_dummy();
 frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401754
extern unsigned long __stack_chk_guard;

unsigned int test_cpp_member_func()
{
 char *v0; // [bp-0x50]
 char v1[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((unsigned long *)&__stack_chk_guard);
 strncpy(v1, "Test", 31);
 result = 0;
 strlen(v1);
 if (v3 != *((unsigned long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: _Z20test_cpp_constructorv at 0x4017cc
unsigned int _ZN14LifecycleClass14instance_countE = 0;

unsigned int test_cpp_constructor()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (unsigned int *)operator_new_array(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return 0;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401838
typedef struct Base Base;

void call_virtual_func(Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 (*((void (**)(void))((long long *)arg_0)))();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401854
typedef struct Base Base;

extern unsigned long __stack_chk_guard;
void *g_413958 = 0;
void *g_413988 = 0;

struct Base {
 void **vtable;
};

unsigned int test_cpp_virtual_func()
{
 char *v0; // [bp-0x40]
 Base v1; // [bp-0x20]
 Base v2; // [bp-0x18]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((unsigned long *)&__stack_chk_guard);
 *((Base **)&v1) = (Base *)&g_413958;
 *((Base **)&v2) = (Base *)&g_413988;
 call_virtual_func(&v1, 5);
 call_virtual_func(&v2, 5);
 if (v4 != *((unsigned long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4018e4
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4018ec
extern unsigned long __stack_chk_guard;
unsigned long long g_413ac8 = 0;
unsigned long long g_413af8 = 0;
char g_413b30 = 0;

void test_cpp_diamond_inheritance()
{
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x28]
 char *v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *(unsigned long *)&__stack_chk_guard;
 v1 = (unsigned long long)(void *)&g_413ac8;
 v3 = (char *)&g_413b30;
 v2 = (unsigned long long)(void *)&g_413af8;
 v4 = 50;
 (void)thunk_to_DiamondDerived_func(&v3);
 v4 = 100;
 (void)non_virtual_thunk_to_DiamondDerived_func(&v3);
 if (v5 != *(unsigned long *)(void *)&__stack_chk_guard)
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401988
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401990
extern unsigned long __stack_chk_guard;

unsigned int test_cpp_template_func()
{
 unsigned long long v6; // d8
 char *v0; // [bp-0x30]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *(unsigned long *)(unsigned long *)&__stack_chk_guard;
 (void)template_max_double(template_max_int(3, 7), 7);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2, &v3);
 if (v4 != *((unsigned long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
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
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;
char _ZTIi = 0;

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 unsigned long long result; // x1
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 result = (unsigned long long)&_ZTIi;
 __cxa_throw(ptr, &_ZTIi, 0);
 {
 __cxa_begin_catch();
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 _Unwind_Resume(); /* do not return */
 }
 _Unwind_Resume(); /* do not return */
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

char g_413b58 = 0;
char g_413b80 = 0;

void test_cpp_rtti()
{
 void* *p; // x20
 struct_2 **ptr; // x21
 char *v4; // x22
 char *v5; // x0
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = (void* *)operatornew(8);
 *(p) = &g_413b58;
 ptr = (struct_2 **)operatornew(8);
 *(ptr) = (struct_2 *)&g_413b80;
 {
 unsigned long long *temp = (unsigned long long *)((char *)*(p) + 8);
 v4 = (char *)((unsigned long long)*temp + 8);
 }
 if (*(v4) != 42)
 v5 = v4;
 else
 v5 = v4 + 1;
 (void)strlen(v5);
 (void)((void (*)(void*, unsigned long long))(unsigned long long)*(unsigned long long*)((char*)*(p) + 8))((void*)p, (unsigned long long)*(unsigned long long*)((char*)*(p) + 8));
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401c8c
char g_402148 = 0;
char g_402170 = 0;
char g_402190 = 0;
char g_4021b0 = 0;
char g_4021d0 = 0;
char g_4021f0 = 0;
char g_402210 = 0;
char g_402230 = 0;
char g_402250 = 0;
char g_402270 = 0;
char g_402290 = 0;
char g_4022b0 = 0;
char g_4022d0 = 0;

void test_cpp_oo_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_402148);
 __printf_chk(1, &g_402170, (unsigned long long)test_cpp_member_func() & 4294967295);
 __printf_chk(1, &g_402190, (unsigned long long)test_cpp_constructor() & 4294967295);
 __printf_chk(1, &g_4021b0, (unsigned long long)test_cpp_virtual_func() & 4294967295);
 __printf_chk(1, &g_4021d0, 0);
 __printf_chk(1, &g_4021f0, 0);
 __printf_chk(1, &g_402210, 22);
 __printf_chk(1, &g_402230, (unsigned long long)test_cpp_template_func() & 4294967295);
 __printf_chk(1, &g_402250, 16);
 __printf_chk(1, &g_402270, 85);
 __printf_chk(1, &g_402290, 0);
 __printf_chk(1, &g_4022b0, 0);
 __printf_chk(1, &g_4022d0, 0);
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


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401dd4


long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_ios_base_Init_Init(&_ZStL8__ioinit);
 __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x401e18
void _ZN4Base12virtual_funcEi(void* this, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401e20
void _ZNK4Base7getNameEv(void* this)
{
}


// Function: _ZN4BaseD1Ev at 0x401e2c
int _ZN4BaseD1Ev(void* this)
{
 return 0;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401e30
void _ZN7Derived12virtual_funcEi(void* this, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401e3c
void _ZNK7Derived7getNameEv(void* this)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401e48
void _ZN12MultiDerived5funcAEv(void* this)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401e50
void _ZN12MultiDerived5funcBEv(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401e58
unsigned long long non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x401e60
void _ZN7MiddleA4funcEv(void* this)
{
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401e78
int thunk_to_MiddleA_func(void* *a0)
{
 (void)a0;
 return 150;
}


// Function: _ZN7MiddleB4funcEv at 0x401e9c
void _ZN7MiddleB4funcEv(void* this)
{
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401eb4
int thunk_to_MiddleB_func(void* *a0)
{
 (void)a0;
 return 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401ed8
void _ZN14DiamondDerived4funcEv(void* this)
{
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401ef0
int thunk_to_DiamondDerived_func(void* a0)
{
 (void)a0;
 return 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401f14
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 unsigned long long vptr_val;
 unsigned long long voffset;
 char* vptr_loc;
 int* target;
 
 vptr_loc = (char*)a0 + 16;
 memcpy(&vptr_val, vptr_loc, sizeof(vptr_val));
 voffset = vptr_val - 24;
 target = (int*)(-8 + (char*)a0 + voffset);
 return *target + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401f2c
int _ZNK12RTTIDerivedA7getTypeEv(void* this)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401f34
int _ZNK12RTTIDerivedB7getTypeEv(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401f3c
void _ZN12RTTIDerivedBD1Ev(void* this)
{
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401f40
void _ZN12RTTIDerivedAD1Ev(void* this)
{
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401f44
void _ZN14DiamondDerivedD1Ev(void* this)
{
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401f48
long long non_virtual_thunk_to_DiamondDerived_destructor()
{
 unsigned long v0; // x0

 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401f4c
long long thunk_to_DiamondDerived_destructor()
{
 unsigned long v0; // x0

 return 0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401f50
int _ZN12MultiDerivedD1Ev(void* this)
{
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401f54
long long non_virtual_thunk_to_MultiDerived_destructor()
{
 unsigned long v0; // x0

 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x401f58
int _ZN7DerivedD2Ev(void* this)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401f5c
int _ZN4BaseD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x401f74
int _ZN7DerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401f8c
int _ZN12MultiDerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 32);
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401fa4
int non_virtual_thunk_to_MultiDerived_deleting_destructor(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator_delete(a0 - 16, 32);
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401fc0
int _ZN12RTTIDerivedAD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401fd8
int _ZN12RTTIDerivedBD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401ff0
int _ZN14DiamondDerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 48);
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402008
long long thunk_to_DiamondDerived_deleting_destructor(void* *a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator_delete((char *)a0 + ((long long *)a0)[32], 48);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x40202c
int non_virtual_thunk_to_DiamondDerived_deleting_destructor(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator_delete(a0 - 16, 48);
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
void template_swap_int(unsigned int *a, unsigned int *b)
{
 unsigned int v0; // w2

 v0 = *(a);
 *(a) = *(b);
 *(b) = v0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402074
void _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40207c
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned int v0; // w2

 v0 = *(unsigned int *)((char *)ptr + 40);
 if (9 >= v0)
 {
 *((unsigned int *)((char *)ptr + 40)) = v0 + 1;
 *((int *)((char *)ptr + 4 * v0)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402098
int _ZNK9ContainerIiE3getEi(void* this, int arg_0)
{
 return *((int *)((char *)this + 4 * arg_0));
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4020c0
unsigned int _ZNK9ContainerIiE7getSizeEv(void* this)
{
 return *((unsigned int *)((char*)this + 40));
}


// Function: _ZN9ContainerIdEC1Ev at 0x4020c8
void _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4020d0
void _ZN9ContainerIdE4pushEd(void* ptr, double arg_0)
{
 unsigned int v0; // w1
 unsigned long v1; // d0

 v0 = *(unsigned int *)((char *)ptr + 80);
 if (9 >= v0)
 {
 *((unsigned int *)((char *)ptr + 80)) = v0 + 1;
 *(unsigned long *)((char *)ptr + 8 * v0) = v1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4020ec
double _ZNK9ContainerIdE3getEi(void* this, int arg_0)
{
 return *((double *)((char *)this + 8 * arg_0));
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40210c
unsigned int _ZNK9ContainerIdE7getSizeEv(void* this)
{
 return *((unsigned int *)((char*)this + 80));
}



/* CRT stub function _fini removed by preprocessor */


