// Angr Decompilation of 5-1_gcc_O3_no_g
// Platform: ARMEL

#include <stdint.h>

// Forward declarations
int armg_calculate_condition(int a, int b, int c, int d);
void operator_delete(void* ptr);
void operator_delete_sized(void* ptr, unsigned int size);
void* operator_new(unsigned int size);
int __aeabi_d2iz(double d);
int __printf_chk(int flag, const char *format, ...);
int __aeabi_atexit(void* obj, void* dtor, void* dso_handle);
void* __cxa_begin_catch();
void __cxa_end_catch();
void* __cxa_allocate_exception(unsigned int size);
void __cxa_throw(void* ptr, void* type_info, void (*dest)(void*), ...);
void __cxa_rethrow();
void* __cxa_end_cleanup();
unsigned int strlen(const char *s);
void __stack_chk_fail(void);
char* strncpy(char* dest, const char* src, unsigned int n);
int puts(const char *s);
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
int template_swap_int(unsigned int *ptr, unsigned int *p);
void test_cpp_oo_features(void);
void abort(void);
void* operator_new_placement(void* ptr, unsigned int size);

/* CRT stub function _init removed by preprocessor */



// Function: sub_1092c at 0x1092c
extern unsigned int g_22008;

int sub_1092c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 goto *(void*)(uintptr_t)g_22008;
}


// Function: _Z18test_cpp_exceptionv at 0x10a60

/* C++ namespace converted to C extern declaration */
extern void* _ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 unsigned int *ptr; // r0
 unsigned int flag1 = 0; // r1
 unsigned int v14; // r2
 unsigned int v15; // r1
 void* v16; // r0
 unsigned int v6; // r2
 unsigned int v7; // r3
 void* result = 0; // r4
 unsigned int *v10; // r0
 void* v11; // r0
 unsigned int v13; // r3
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (unsigned int*)__cxa_allocate_exception(4);
 *((int*)ptr) = 42;
 __cxa_throw(ptr, (void*)(uintptr_t)_ZTIi, (void (*)(void*))0);
 if (flag1 != 1)
 {
 if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
 goto LABEL_10a90;
 }
 else
 {
 if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
 {
LABEL_10a90:
 result = flag1;
 __cxa_rethrow();
 }
 }
 if ((unsigned int)result == 1)
 {
 v10 = (unsigned int*)__cxa_begin_catch();
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)(uintptr_t)0x116d4, (void (*)(void*))0);
 if (flag1 == 2)
 {
 v16 = (unsigned int*)__cxa_begin_catch();
 __cxa_end_catch();
 return;
 }
 else if (flag1 == 3)
 {
 __cxa_end_catch();
 return;
 }
 }
 v11 = __cxa_end_cleanup();
 __cxa_end_catch();
 return;
}


// Function: main at 0x10b18
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10b28
extern void* _ZStL8__ioinit;
extern unsigned int __dso_handle;

/* Dummy struct for sizeof */
struct std_ios_base_Init {
    char dummy[64];
};

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 operator_new_placement((void*)(uintptr_t)&_ZStL8__ioinit, sizeof(struct std_ios_base_Init));
 v0 = __aeabi_atexit((void*)(uintptr_t)0x22090, (void*)(uintptr_t)0, (void*)(uintptr_t)0x22084);
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10b90 at 0x10b90
void sub_10b90()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10c50
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_member_func()
{
 unsigned int v4; // lr
 char v0[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 strncpy(v0, "Test", 31);
 result = 0;
 strlen(v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z20test_cpp_constructorv at 0x10cbc
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cdc
void call_virtual_func(void *arg_0, int arg_1)
{
 goto *((int *)*((int *)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x10ce8
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10cf0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x10cf8
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10d04
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10d0c
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_func()
{
 unsigned int v3; // r0
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = __glibc___stack_chk_guard;
 template_max_int(3, 7);
 v3 = __aeabi_d2iz(template_max_double(0.0, 0.0));
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 v4 = __aeabi_d2iz(v3);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10db4
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x10dbc
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x10dc4
void test_cpp_smart_ptr()
{
 return;
}


// Struct definitions for RTTI
typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 char field_0;
} struct_1;

// Function: _Z13test_cpp_rttiv at 0x10dd0
extern char _ZTI12RTTIDerivedA;
extern char g_116b4;
extern char g_116c8;

void test_cpp_rtti()
{
 unsigned int *ptr; // r6
 unsigned int *p; // r5
 struct_0 *v2; // r0
 unsigned int result; // r3
 char *cur; // r0

 ptr = (unsigned int*)operatornew(4);
 *(ptr) = 71348;
 p = (unsigned int*)operatornew(4);
 v2 = (struct_0*)(uintptr_t)(*(unsigned int**)((uintptr_t)ptr + 4));
 *((int*)p) = 71368;
 result = ((unsigned int)((uintptr_t)v2 == (uintptr_t)(void*)&_ZTI12RTTIDerivedA));
 if (result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10e26;
LABEL_10e25:
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e2a;
LABEL_10e29:
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e2e;
LABEL_10e2d:
 {
 if (armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10e25;
LABEL_10e26:
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e29;
LABEL_10e2a:
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e2d;
LABEL_10e2e:
 cur = (char*)*(const char**)(((uintptr_t)ptr) + 4);
 if (*((const char*)cur) == 42)
 cur = (char*)cur + 1;
 if (*((char*)cur) == 42)
 cur += 1;
 strlen((const char*)cur);
 ((void (*)(void*))(ptr[4]))((void*)ptr);
 ((void (*)(void*))(p[4]))((void*)p);
 }
 }
}


// Function: _Z20test_cpp_oo_featuresv at 0x10ed4
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_114d8;
extern char g_114fc;
extern char g_1151c;
extern char g_11538;
extern char g_11554;
extern char g_11570;
extern char g_11590;
extern char g_115ac;
extern char g_115c8;
extern char g_115e4;
extern char g_11600;
extern char g_11620;
extern char g_11640;

void test_cpp_oo_features()
{
 unsigned int v6; // r0
 unsigned int v7; // r0
 unsigned int v8; // r1
 unsigned int v9; // r0
 unsigned int v11; // r0
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 char v2[1][31]; // [bp-0x34]
 char result; // [bp-0x15]
 unsigned int v4; // [bp-0x14]

 v4 = __glibc___stack_chk_guard;
 puts((const char*)(uintptr_t)0x114d8);
 strncpy(v2[0], "Test", 31);
 result = 0;
 __printf_chk(1, (const char*)(uintptr_t)0x114fc, strlen(v2[0]) + 4700);
 __printf_chk(1, (const char*)(uintptr_t)0x1151c, _ZN14LifecycleClass14instance_countE + 21 + _ZN14LifecycleClass14instance_countE * 1000);
 __printf_chk(1, (const char*)(uintptr_t)0x11538, 42);
 __printf_chk(1, (const char*)(uintptr_t)0x11554, 71);
 __printf_chk(1, (const char*)(uintptr_t)0x11570, 650);
 __printf_chk(1, (const char*)(uintptr_t)0x11590, 22);
 v6 = template_max_int(3, 7);
 v7 = (unsigned int)(uintptr_t)template_max_double(0.0, 0.0);
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 v9 = __aeabi_d2iz(v7);
 __printf_chk(1, (const char*)0x115ac, v9 + v6 + v0 + v1);
 __printf_chk(1, (const char*)0x115c8, 16);
 __printf_chk(1, (const char*)0x115e4, 85);
 test_cpp_exception();
 __printf_chk(1, (const char*)(uintptr_t)0x11620, 703);
 test_cpp_rtti();
 v11 = 703;
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, (const char*)(uintptr_t)0x11640, v11);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x110d0
int Base_virtual_func(void* this_ptr, int arg_0)
{
 return 0;
}


// Function: _ZNK4Base7getNameEv at 0x110d8
int Base_getName_const(void* this_ptr)
{
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x110e4
int Base_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN7Derived12virtual_funcEi at 0x110e8
int Derived_virtual_func(void* this_ptr, int arg_0)
{
 return 0;
}


// Function: _ZNK7Derived7getNameEv at 0x110f4
int Derived_getName(const void* this_ptr)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcAEv at 0x11100
int MultiDerived_funcA(void* this_ptr)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11108
int MultiDerived_funcB(void* this_ptr)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x11110
unsigned int thunk_non_virtual_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x11130
int thunk_MiddleA_func(void** a0)
{
 void** vtbl = (void**)((char*)a0 + (*(a0))[12]);
 return *((int*)((char*)vtbl + *((int*)((char*)vtbl - 12)) + 4)) + 150;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x1116c
int thunk_MiddleB_func(void** a0)
{
 void** vtbl = (void**)((char*)a0 + (*(a0))[12]);
 return *((int*)((char*)vtbl + *((int*)((char*)vtbl - 12)) + 4)) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x11190
int DiamondDerived_func(void* this_ptr)
{
 return 0;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x111a8
int thunk_DiamondDerived_func(void** a0)
{
 void** vtbl = (void**)((char*)a0 + (*(a0))[12]);
 return *((int*)((char*)vtbl + *((int*)((char*)vtbl - 12)) + 4)) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x111cc
int thunk_non_virtual_DiamondDerived_func(void* a0)
{
 void** vtbl = (void**)a0;
 return *((int*)((char*)a0 + *((int*)((char*)vtbl[8] - 12)) - 4)) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x111e4
int RTTIDerivedA_getType(void* this_ptr)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x111ec
int RTTIDerivedB_getType(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x111f4
int RTTIDerivedB_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x111f8
int RTTIDerivedA_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x111fc
int DiamondDerived_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x11200
void** thunk_DiamondDerived_destructor(void** a0)
{
 return (void**)((char *)a0 + (*(a0))[16]);
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11210
int thunk_non_virtual_DiamondDerived_destructor(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11218
int MultiDerived_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x1121c
int thunk_non_virtual_MultiDerived_destructor(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x11224
int Derived_deleting_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x11228
int Base_deleting_destructor(void* this_ptr)
{
 operator_delete((void*)this_ptr);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x11240
int Derived_deleting_destructor_with_delete(void* this_ptr)
{
 operator_delete((void*)this_ptr);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11258
int MultiDerived_deleting_destructor(void* this_ptr)
{
 operator_delete((void*)this_ptr);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x11270
void* thunk_non_virtual_MultiDerived_deleting_destructor(void* a0)
{
 operator_delete_sized(a0 - 8, 16);
 return a0 - 8;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x1128c
int RTTIDerivedB_deleting_destructor(void* this_ptr)
{
 operator_delete((void*)this_ptr);
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x112a4
int RTTIDerivedA_deleting_destructor(void* this_ptr)
{
 operator_delete_sized(this_ptr, 4);
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x112bc
int DiamondDerived_deleting_destructor(void* this_ptr)
{
 operator_delete_delete(this_ptr, 24);
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x112d4
void** thunk_DiamondDerived_deleting_destructor(void** a0)
{
 void** v0 = (void**)((char *)a0 + a0[16]);
 operator_delete_delete((void*)v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x112f8
void* thunk_non_virtual_DiamondDerived_deleting_destructor(void* a0)
{
 operator_delete_delete(a0 - 8, 24);
 return a0 - 8;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11314
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x11320
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x11350
int template_swap_int(unsigned int *ptr, unsigned int *other_ptr)
{
 unsigned int v0; // r3

 v0 = *(ptr);
 *(ptr) = *(other_ptr);
 *(other_ptr) = v0;
 return (int)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x11364
int Container_int_Constructor(void* ptr)
{
 *((unsigned int*)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x11370
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = ((unsigned int*)ptr)[10];
 if (index <= 9)
 v1 = index + 1;
 ((unsigned int*)ptr)[10] = v1;
 ((int*)ptr)[index] = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11388
void Container_int_get(void* ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x113ac
void Container_int_getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x113b4
int Container_double_Constructor(void* ptr)
{
 *((unsigned int*)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x113c0
void Container_double_push(void* p, double arg_0)
{
 unsigned int v0; // r3
 unsigned int v1; // r2
 unsigned int v2; // r3

 v0 = ((unsigned int*)p)[20];
 if (9 >= v0)
 {
 ((unsigned int*)p)[20] = v0 + 1;
 ((double*)p)[v0] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x113f0
void Container_double_get(void* ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x1141c
void Container_double_getSize(void* ptr)
{
 return;
}


// Function: _ZN9ContainerIiED2Ev at 0x11420
int Container_int_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN9ContainerIdED2Ev at 0x11424
int Container_double_destructor(void* this_ptr)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */

