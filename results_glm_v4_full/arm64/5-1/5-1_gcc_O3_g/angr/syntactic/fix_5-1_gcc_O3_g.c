// Angr Decompilation of 5-1_gcc_O3_g
// Platform: AARCH64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* C++ std namespace placeholder for decompiled code */
/* Note: namespace is a C++ keyword - function declarations used instead */
void std_ios_base_Init_Init(void *obj);
void std_ios_base_Init_D1Ev(void *obj);

/* Forward declarations */
int main(int argc, char **argv);
void test_cpp_oo_features();
void test_cpp_member_func();
void test_cpp_constructor();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_lambda();
void test_cpp_smart_ptr();
void test_cpp_rtti();
long long _GLOBAL__sub_I__Z20test_cpp_member_funcv();

/* Implicit function declarations */
int __cxa_atexit(void (*func)(void *), void *obj, void *dso_handle);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void __stack_chk_fail(void);
void call_virtual_func(void *arg_0, int arg_1);
void* operatornew(unsigned long size);
void operatordelete(void *ptr, unsigned long size);
int arm64g_calculate_condition(int cond, unsigned long long arg1, int arg2, int arg3);
void non_virtual_thunk_to_MultiDerived_funcB(void);
int thunk_to_MiddleA_func(void* a0);
int thunk_to_MiddleB_func(void* a0);
int thunk_to_DiamondDerived_func(void* a0);
int CmpF(unsigned long a, unsigned long b);
void Base_virtual_func(void* this, int arg_0);
void Base_getName(void* this);
void Derived_virtual_func(void* this, int arg_0);
void Derived_getName(void* this);
void MultiDerived_funcA(void* this);
void MultiDerived_funcB(void* this);
void MiddleA_func(void* this);
void MiddleB_func(void* this);
void DiamondDerived_func(void* this);
void RTTIDerivedA_getType(void* this);
void RTTIDerivedB_getType(void* this);
void Base_destructor(void* this);
void RTTIDerivedB_destructor(void* this);
void RTTIDerivedA_destructor(void* this);
void DiamondDerived_destructor(void* this);
void Derived_destructor2(void* this);
int Container_int_constructor(void *ptr);
void Container_int_push(void *ptr, int arg_0);
void Container_int_get(void *this, int arg_0);
unsigned int Container_int_getSize(void *this);
int Container_double_constructor(void *ptr);
void Container_double_push(void *ptr, double arg_0);
void Container_double_get(void *this, int arg_0);

struct Base;
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

/* Template instantiations - function declarations */
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_uint(unsigned int *arg_0, unsigned int *arg_1);
long long template_swap_int(unsigned int *arg_0, unsigned int *arg_1);


/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400eb0
extern unsigned long long g_412f00;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_412f00;
}


// Function: sub_400ec4 at 0x400ec4
int sub_400ec4()
{
 char *v0; // x0

 puts(v0);
 return 0;
}


// Function: _Z18test_cpp_exceptionv at 0x401040
extern char _ZTIi;

void* __cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *obj, void *type, void *dest);
void _Unwind_Resume(void);

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 _Unwind_Resume(); /* do not return */
}


// Function: sub_401114 at 0x401114
void sub_401114()
{
 main(0, NULL);
 return;
}


// Function: main at 0x401120
int main(int argc, char **argv)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 (void)argc;
 (void)argv;
 v0 = &v1;
 test_cpp_oo_features();
 return 0;
 return 0;
}


// Function: sub_401138 at 0x401138
void sub_401138()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401140
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_ios_base_Init_Init(&_ZStL8__ioinit);
 v2 = __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return v2;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011b0 at 0x4011b0
void sub_4011b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_4011c8 at 0x4011c8
void sub_4011c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40123c at 0x40123c
void sub_40123c()
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401288 at 0x401288
long long sub_401288()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401294 at 0x401294
void sub_401294()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x4012a0
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
 strncpy(v1, "Test", 31);
 strlen(v1);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: sub_40130c at 0x40130c
void sub_40130c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401310
void test_cpp_constructor()
{
 return;
}


// Function: sub_401328 at 0x401328
void sub_401328(unsigned long a0)
{
 call_virtual_func((struct Base *)0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401330
void call_virtual_func(void *arg_0, int arg_1)
{
 goto *((long long *)*((long long *)&arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401340
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_401348 at 0x401348
void sub_401348()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401350
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_401358 at 0x401358
void sub_401358()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401360
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_401368 at 0x401368
void sub_401368()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401370
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401378 at 0x401378
void sub_401378()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401380
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
 template_max_double(template_max_int(3, 7), 7.0);
 v2 = 10;
 v3 = 20;
 template_swap_uint(&v2, &v3);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
void test_cpp_template_class()
{
 return;
}


// Function: sub_401428 at 0x401428
void sub_401428()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
void test_cpp_lambda()
{
 return;
}


// Function: sub_401438 at 0x401438
void sub_401438()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401440
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_401448 at 0x401448
void sub_401448()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401450
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

typedef struct struct_5 {
 char field_0;
} struct_5;

typedef struct struct_4 {
 char padding_0[8];
 struct struct_5 *field_8;
} struct_4;

typedef struct Base {
    void *vtable;
} Base;

typedef struct Derived {
    Base base;
    void *vtable;
} Derived;

typedef struct MiddleA {
    Base base;
    void *vtable;
} MiddleA;

typedef struct MiddleB {
    Base base;
    void *vtable;
} MiddleB;

typedef struct MultiDerived {
    MiddleA middleA;
    void *vtable;
} MultiDerived;

typedef struct DiamondDerived {
    Base base;
    void *vtable1;
    void *vtable2;
} DiamondDerived;

typedef struct RTTIDerivedA {
    Base base;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    Base base;
} RTTIDerivedB;

typedef struct LifecycleClass {
} LifecycleClass;

extern char g_412c28;
extern char g_412c50;
extern struct_4 *p;

void test_cpp_rtti()
{
 void* *ptr; // x21
 struct_2 *ptr3; // x20
 char *ptr4; // x0
 void* v4; // x24
 char *addr; // x23
 unsigned int v6; // w25
 unsigned int result; // w0
 unsigned long v8; // cc_dep1
 char *v9; // x0
 char *v0; // [bp-0x50]
 char v1; // [bp+0x0]

	v0 = &v1;
	ptr = (void**)operatornew(8);
	*(ptr) = &g_412c28;
	ptr3 = (struct_2 *)operatornew(8);
	v4 = *(ptr);
	addr = *((char **)((long long)*(long long *)v4 + 8));
	ptr3->field_8 = (struct_3 *)&g_412c50;
 if (addr != "12RTTIDerivedA")
 {
 v6 = *(addr);
 if (v6 != 42)
 {
 result = strcmp(addr, "12RTTIDerivedA");
 v8 = result;
 if (result)
 {
 if (!((char)arm64g_calculate_condition(19, v8, 0, 0)))
 goto LABEL_4014de;
LABEL_4014dd:
 }
 else
 {
 if ((char)arm64g_calculate_condition(19, v8, 0, 0))
 goto LABEL_4014dd;
LABEL_4014de:
 }
LABEL_4014e0:
 v9 = (char *)p->field_8;
 if (v9 == "12RTTIDerivedB")
 goto LABEL_4015d0;
LABEL_4014fc:
 }
 else
 {
 v9 = (char *)p->field_8;
 if (v9 != "12RTTIDerivedB")
 goto LABEL_4014fc;
LABEL_4015d0:
 }
 }
 else
 {
 v6 = 49;
 goto LABEL_4014e0;
 }
	if (v6 != 42)
		ptr4 = addr;
	else
		ptr4 = addr + 1;
	strlen(ptr4);
	{
		void (*vfunc)(void*, long long) = (void (*)(void*, long long))*(long long *)((char *)*(long long *)v4 + 8);
		vfunc(ptr, (long long)*(long long *)v4);
	}
	{
		void (*vfunc2)(void*, void*) = (void (*)(void*, void*))ptr3->field_8;
		vfunc2(ptr3, ptr3->field_8);
	}
	return;
}


// Function: sub_4015e8 at 0x4015e8
void sub_4015e8()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015f0
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char __stack_chk_guard;
extern char g_401ba0;
extern char g_401bc8;
extern char g_401be8;
extern char g_401c08;
extern char g_401c28;
extern char g_401c48;
extern char g_401c68;
extern char g_401c88;
extern char g_401ca8;
extern char g_401cc8;
extern char g_401ce8;
extern char g_401d08;
extern char g_401d28;

void test_cpp_oo_features()
{
 unsigned long long v8; // d8
 unsigned long long v10; // x0
 unsigned int v12; // w0
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x48]
 unsigned int v2; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 char v4; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v1 = v8;
 v6 = *((long long *)&__stack_chk_guard);
 puts(&g_401ba0);
 strncpy(&v4, "Test", 31);
 result = 0;
 __printf_chk(1, &g_401bc8, strlen(&v4) + 4700);
 __printf_chk(1, &g_401be8, _ZN14LifecycleClass14instance_countE + 21 + 1000 * _ZN14LifecycleClass14instance_countE);
 __printf_chk(1, &g_401c08, 42);
 __printf_chk(1, &g_401c28, 71);
 __printf_chk(1, &g_401c48, 650);
 __printf_chk(1, &g_401c68, 22);
 v10 = template_max_int(3, 7);
 template_max_double(v10, 7.0);
 v2 = 10;
 v3 = 20;
 template_swap_uint(&v2, &v3);
 __printf_chk(1, &g_401c88, (unsigned int)0x4004000000000000 + (v10 & 4294967295) + v2 + v3);
__printf_chk(1, &g_401ca8, 16);
	__printf_chk(1, &g_401cc8, 85);
	test_cpp_exception();
	__printf_chk(1, &g_401ce8, 0);
	__printf_chk(1, &g_401d08, 703);
 test_cpp_rtti();
 v12 = 0;
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, &g_401d28, v12);
 return;
}


// Function: sub_4017c4 at 0x4017c4
void sub_4017c4(unsigned long a0, unsigned long a1)
{
 Base_virtual_func((void*)0, 0);
}


// Function: _ZN4Base12virtual_funcEi at 0x4017d0
void Base_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: sub_4017d8 at 0x4017d8
void sub_4017d8()
{
 Base_getName((void*)0);
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4017e0
void Base_getName(void* this)
{
 return;
}


// Function: sub_4017ec at 0x4017ec
void sub_4017ec()
{
 Base_destructor(0);
 return;
}


// Function: _ZN4BaseD1Ev at 0x4017f0
void Base_destructor(void* this)
{
}


// Function: sub_4017f4 at 0x4017f4
void sub_4017f4(unsigned long a0, unsigned long a1)
{
 Derived_virtual_func((void*)0, 0);
}


// Function: _ZN7Derived12virtual_funcEi at 0x401800
void Derived_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: sub_40180c at 0x40180c
void sub_40180c()
{
 Derived_getName((void*)0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401810
void Derived_getName(void* this)
{
 return;
}


// Function: sub_40181c at 0x40181c
void sub_40181c()
{
 MultiDerived_funcA((void*)0);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401820
void MultiDerived_funcA(void* this)
{
 return;
}


// Function: sub_401828 at 0x401828
void sub_401828()
{
 MultiDerived_funcB((void*)0);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401830
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: sub_401838 at 0x401838
void sub_401838()
{
 non_virtual_thunk_to_MultiDerived_funcB();
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401840
void non_virtual_thunk_to_MultiDerived_funcB()
{
 return;
}


// Function: sub_401848 at 0x401848
void sub_401848(unsigned long a0)
{
 MiddleA_func((void*)0);
}


// Function: _ZN7MiddleA4funcEv at 0x401850
void MiddleA_func(void* this)
{
 return;
}


// Function: sub_401868 at 0x401868
void sub_401868(unsigned long a0)
{
 thunk_to_MiddleA_func((void*)a0);
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401870
int thunk_to_MiddleA_func(void* a0)
{
 return *((int *)(8 + (char *)a0 + (long long)((void **)a0)[24] + *((long long *)(*((long long *)((char *)a0 + (long long)((void **)a0)[24])) - 24)))) + 150;
}


// Function: sub_401894 at 0x401894
void sub_401894(unsigned long a0)
{
 MiddleB_func(0);
}


// Function: _ZN7MiddleB4funcEv at 0x4018a0
void MiddleB_func(void* this)
{
 return;
}


// Function: sub_4018b8 at 0x4018b8
void sub_4018b8(unsigned long a0)
{
 thunk_to_MiddleB_func((void*)a0);
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x4018c0
int thunk_to_MiddleB_func(void* a0)
{
 return *((int *)(8 + (char *)a0 + (long long)((void **)a0)[24] + *((long long *)(*((long long *)((char *)a0 + (long long)((void **)a0)[24])) - 24)))) + 200;
}


// Function: sub_4018e4 at 0x4018e4
void sub_4018e4(unsigned long a0)
{
 DiamondDerived_func(0);
}


// Function: _ZN14DiamondDerived4funcEv at 0x4018f0
void DiamondDerived_func(void* this)
{
 return;
}


// Function: sub_401908 at 0x401908
void sub_401908(unsigned long a0)
{
 thunk_to_DiamondDerived_func((void*)a0);
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401910
int thunk_to_DiamondDerived_func(void* a0)
{
 return *((int *)(8 + (char *)a0 + (long long)((void **)a0)[24] + *((long long *)(*((long long *)((char *)a0 + (long long)((void **)a0)[24])) - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401934
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24)))) + 250;
}


// Function: sub_40194c at 0x40194c
void sub_40194c()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401950
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: sub_401958 at 0x401958
void sub_401958()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401960
void RTTIDerivedB_getType(void* this)
{
 return;
}


// Function: sub_401968 at 0x401968
void sub_401968()
{
 RTTIDerivedB_destructor(0);
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401970
void RTTIDerivedB_destructor(void* this)
{
}


// Function: sub_401974 at 0x401974
void sub_401974()
{
 RTTIDerivedA_destructor(0);
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401980
void RTTIDerivedA_destructor(void* this)
{
}


// Function: sub_401984 at 0x401984
void sub_401984()
{
 DiamondDerived_destructor(0);
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401990
void DiamondDerived_destructor(void* this)
{
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401994
long long thunk_to_DiamondDerived_destructor()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_401998 at 0x401998
void sub_401998()
{
 thunk_to_DiamondDerived_destructor();
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x4019a0
void non_virtual_thunk_to_DiamondDerived_destructor()
{
}


// Function: sub_4019a4 at 0x4019a4
long long sub_4019a4()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x4019b0
void MultiDerived_destructor(void* this)
{
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x4019b4
void non_virtual_thunk_to_MultiDerived_destructor1()
{
}


// Function: sub_4019b8 at 0x4019b8
void sub_4019b8()
{
 Derived_destructor2(0);
 return;
}


// Function: _ZN7DerivedD2Ev at 0x4019c0
void Derived_destructor2(void* this)
{
}


// Function: sub_4019c4 at 0x4019c4
void sub_4019c4()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x4019d0
int Base_deleting_destructor(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: sub_4019d8 at 0x4019d8
void sub_4019d8()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x4019e0
int Derived_deleting_destructor(void* this)
{
 operatordelete(this, 16);
 return 0;
}


// Function: sub_4019e8 at 0x4019e8
void sub_4019e8()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x4019f0
int MultiDerived_deleting_destructor(void* this)
{
 operatordelete(this, 32);
 return 0;
}


// Function: sub_4019f8 at 0x4019f8
void sub_4019f8(unsigned long a0)
{
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401a00
int non_virtual_thunk_to_MultiDerived_destructor0(void* a0)
{
 operatordelete(a0 - 16, 32);
 return 0;
}


// Function: sub_401a0c at 0x401a0c
void sub_401a0c()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401a10
int RTTIDerivedB_deleting_destructor(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: sub_401a18 at 0x401a18
void sub_401a18()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401a20
int RTTIDerivedA_deleting_destructor(void* this)
{
 operatordelete(this, 8);
 return 0;
}


// Function: sub_401a28 at 0x401a28
void sub_401a28()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401a30
int DiamondDerived_deleting_destructor(void* this)
{
 operatordelete(this, 48);
 return 0;
}


// Function: sub_401a38 at 0x401a38
void sub_401a38(unsigned long a0)
{
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x401a40
int thunk_to_DiamondDerived_destructor0(void* a0)
{
 operatordelete((char *)a0 + (long long)((void **)a0)[32], 48);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x401a54
int non_virtual_thunk_to_DiamondDerived_destructor0(void* a0)
{
 operatordelete(a0 - 16, 48);
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401a60
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401a6c at 0x401a6c
double sub_401a6c()
{
 return template_max_double(0.0, 0.0);
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401a70
double template_max_double(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 v0 = *(unsigned long*)&arg_0;
 v1 = *(unsigned long*)&arg_1;
 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 return *(double*)&v3;
 return *(double*)&v3;
}


// Function: sub_401a7c at 0x401a7c
long long sub_401a7c(unsigned long a0, unsigned long a1)
{
 return template_swap_uint((unsigned int *)a0, (unsigned int *)a1);
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401a80
long long template_swap_int(unsigned int *arg_0, unsigned int *arg_1)
{
 unsigned int v0; // w2

 v0 = *(arg_0);
 *(arg_0) = *(arg_1);
 *(arg_1) = v0;
 return (long long)arg_0;
}


// Function: sub_401a94 at 0x401a94
long long sub_401a94(unsigned long a0)
{
 unsigned long long v0; // x0

 Container_int_constructor((void*)a0);
 v0 = a0;
 return v0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401aa0
int Container_int_constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: sub_401aa8 at 0x401aa8
long long sub_401aa8(unsigned long a0)
{
 Container_int_push((void*)a0, 0);
 return a0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401ab0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v0; // w2

 v0 = *((unsigned int *)((char *)ptr + 40));
 if (9 >= v0)
 {
 *((unsigned int *)((char *)ptr + 40)) = v0 + 1;
 *((int *)((char *)ptr + 4 * v0)) = arg_0;
 }
 return;
}


// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned long a0, unsigned long a1)
{
 Container_int_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ad0
void Container_int_get(void* this, int arg_0)
{
 if (((char)(arg_0 >> 31) & 1))
 {
 return;
 }
 else if (arg_0 >= (int)(*((unsigned int *)((char *)this + 40))))
 {
 return;
 }
 else
 {
 return;
 }
}


// Function: sub_401af8 at 0x401af8
void sub_401af8(unsigned long a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401b00
unsigned int Container_int_getSize(void* this)
{
 return *((unsigned int *)((char *)this + 40));
}


// Function: sub_401b08 at 0x401b08
long long sub_401b08(unsigned long a0)
{
 unsigned long long v0; // x0

 Container_double_constructor((void*)a0);
 v0 = a0;
 return v0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401b10
int Container_double_constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: sub_401b18 at 0x401b18
long long sub_401b18(unsigned long a0)
{
 Container_double_push((void*)a0, 0.0);
 return a0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401b20
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int v0; // w1
 unsigned long v1; // d0

 v0 = *((unsigned int *)((char *)ptr + 80));
 if (9 >= v0)
 {
 *((unsigned int *)((char *)ptr + 80)) = v0 + 1;
 *((unsigned long *)((char *)ptr + 8 * v0)) = v1;
 }
 return;
}


// Function: sub_401b3c at 0x401b3c
void sub_401b3c(unsigned long a0, unsigned long a1)
{
 Container_double_get((void*)a0, (int)a1);
}


// Function: _ZNK9ContainerIdE3getEi at 0x401b40
void Container_double_get(void* this, int arg_0)
{
 if (((char)(arg_0 >> 31) & 1))
 {
 return;
 }
 else if (arg_0 >= (int)(*((unsigned int *)((char *)this + 80))))
 {
 return;
 }
 else
 {
 return;
 }
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401b60
unsigned int Container_double_getSize(void* this)
{
    return *((unsigned int *)((char *)this + 80));
}

// Function: sub_401b5c at 0x401b5c
void sub_401b5c(unsigned long a0)
{
 Container_double_getSize((void*)a0);
}



/* CRT stub function _fini removed by preprocessor */


