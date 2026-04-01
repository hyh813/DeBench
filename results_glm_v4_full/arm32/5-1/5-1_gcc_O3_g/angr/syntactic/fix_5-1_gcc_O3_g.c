// Angr Decompilation of 5-1_gcc_O3_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <new>
#include <typeinfo>

/* Forward declarations */
char armg_calculate_condition(int, unsigned int, int, int);
void test_cpp_oo_features();
void operatordelete(void*, size_t);
void* __cxa_allocate_exception(unsigned int);
void* __cxa_begin_catch();
void __cxa_end_catch(void*);
void __cxa_throw(void*, void*, void*);
void* __cxa_rethrow();
void __cxa_end_cleanup();
namespace std { class ios_base { public: struct Init { Init(); ~Init(); }; }; }

void* operatornew(size_t);
void __stack_chk_fail(void);
int __printf_chk(int, const char*, ...);
size_t strlen(const char*);
char* strncpy(char*, const char*, size_t);
int template_max_int(int, int);
int __aeabi_dcmpgt();
double template_max_double(void);
int template_swap_int(unsigned int*, unsigned int*);
int __aeabi_d2iz(double);
int __aeabi_atexit(void*, void(*)(void*), void*);

// Function: sub_1092c at 0x1092c
extern unsigned int g_22008;

int sub_1092c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 g_22008:
 return 0;
}


// Function: _Z18test_cpp_exceptionv at 0x10a60
extern unsigned int _ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 unsigned int *ptr; // r0
 unsigned int flag1; // r1
 unsigned int v14; // r2
 unsigned int v15; // r1
 unsigned int v16; // r0
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int result; // r4
 unsigned int *v10; // r0
 unsigned int v11; // r0
 unsigned int v13; // r3
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)(unsigned int)0x21e98, (void*)0);
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
 __cxa_end_catch(0);
 }
 }
 if (result == 1)
 {
 v10 = (unsigned int *)__cxa_begin_catch();
 __cxa_end_catch(0);
 __cxa_throw(__cxa_allocate_exception(1), (void*)(unsigned int)0x116d4, (void*)0);
 if (flag1 == 2)
 {
 v16 = (unsigned int)__cxa_begin_catch();
 __cxa_end_catch(0);
 return;
 }
 else if (flag1 == 3)
 {
 __cxa_end_catch(0);
 return;
 }
 }
 __cxa_end_cleanup();
 __cxa_end_catch(0);
 return;
}


// Function: main at 0x10b18
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10b28
extern std::ios_base::Init _ZStL8__ioinit;
extern unsigned int __dso_handle;

static void std_ios_base_Init_dtor_wrapper(void* obj) {
 ((std::ios_base::Init*)obj)->~Init();
}

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 new (&_ZStL8__ioinit) std::ios_base::Init;
 v0 = (unsigned int)__aeabi_atexit((void*)0x22090, std_ios_base_Init_dtor_wrapper, (void*)0x22084);
 return (unsigned int)__aeabi_atexit((void*)0x22090, std_ios_base_Init_dtor_wrapper, (void*)0x22084);
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
typedef void (*virtual_func_t)(void*, int);

void call_virtual_func(void *arg_0, int arg_1)
{
 (void)arg_1;
 void* vptr = *(void**)arg_0;
 ((virtual_func_t)vptr)(arg_0, arg_1);
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
 v3 = (unsigned int)template_max_double();
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 __aeabi_d2iz(v3);
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


// Function: _Z13test_cpp_rttiv at 0x10dd0
typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 char field_0;
} struct_1;

extern char _ZTI12RTTIDerivedA;
extern char g_116b4;
extern char g_116c8;

typedef void (*func_ptr_t)(void*);

void test_cpp_rtti()
{
 void* *ptr; // r6
 void* *p; // r5
 struct_0 *v2; // r0
 unsigned int result; // r3
 char *cur; // r0

 ptr = (void**)operatornew(4);
 *(ptr) = (void*)71348;
 p = (void**)operatornew(4);
 v2 = (struct_0 *)((*((unsigned int **)ptr))[4]);
 *(p) = (void*)71368;
  std::type_info* ti = (std::type_info*)0x11684;
 result = !ti->before(*((std::type_info*)v2->field_4)) && !((std::type_info*)v2->field_4)->before(*ti);
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
 ;
 }
 else
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
 ;
 }
 cur = (char *)*((int *)((int)(*((unsigned int **)ptr))[4]) + 4);
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 ((void (*)(void*))(void*)(*((unsigned int **)ptr))[4])(ptr);
 ((void (*)(void*))(void*)(*((unsigned int **)p))[4])(p);
 return;
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
 char v2[31]; // [bp-0x34]
 char result; // [bp-0x15]
 unsigned int v4; // [bp-0x14]

 v4 = __glibc___stack_chk_guard;
 puts((const char*)(unsigned int)0x114d8);
 strncpy(v2, "Test", 31);
 result = 0;
 __printf_chk(1, (const char*)0x114fc, (unsigned int)strlen(v2) + 4700);
 __printf_chk(1, (const char*)0x1151c, _ZN14LifecycleClass14instance_countE);
 __printf_chk(1, (const char*)0x11538, 42);
 __printf_chk(1, (const char*)0x11554, 71);
 __printf_chk(1, (const char*)0x11570, 650);
 __printf_chk(1, (const char*)0x11590, 22);
 v6 = (unsigned int)template_max_int(3, 7);
 v7 = (unsigned int)template_max_double();
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 v9 = (unsigned int)__aeabi_d2iz(v7);
 __printf_chk(1, (const char*)0x115ac, v9 + v6 + v0 + v1);
 __printf_chk(1, (const char*)0x115c8, 16);
 __printf_chk(1, (const char*)0x115e4, 85);
 __printf_chk(1, (const char*)0x11600, 0);
 __printf_chk(1, (const char*)0x11620, 703);
 test_cpp_rtti();
 v11 = 0;
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, (const char*)0x11640, v11);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x110d0
void Base_virtual_func(void* self, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x110d8
void Base_getName(void* self)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x110e4
void* _Base_destructor(void* self)
{
 return self;
}


// Function: _ZN7Derived12virtual_funcEi at 0x110e8
void Derived_virtual_func(void* self, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x110f4
void Derived_getName(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x11100
void MultiDerived_funcA(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11108
void MultiDerived_funcB(void* self)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x11110
void MultiDerived_funcB_thunk(void)
{
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x11118
void MiddleA_func(void* self)
{
 (void)self;
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x11130
void MiddleA_func_thunk(void* a0)
{
 (void)a0;
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x11154
void MiddleB_func(void* self)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x1116c
void MiddleB_func_thunk(void* a0)
{
 (void)a0;
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x11190
void DiamondDerived_func(void* self)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x111a8
void DiamondDerived_func_thunk(void* a0)
{
 (void)a0;
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x111cc
void* DiamondDerived_func_thunk2(void* a0)
{
 return (void*)((char *)a0 - 4 + (long)(*((int *)((int)((unsigned char*)a0)[8] - 12)) + 250));
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x111e4
const char* RTTIDerivedA_getType(void* self)
{
 return "RTTIDerivedA";
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x111ec
const char* RTTIDerivedB_getType(void* self)
{
 return "RTTIDerivedB";
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x111f4
void* RTTIDerivedB_destructor(void* self)
{
 return self;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x111f8
void* RTTIDerivedA_destructor(void* self)
{
 return self;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x111fc
void* DiamondDerived_destructor(void* self)
{
 return self;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x11200
void* DiamondDerived_destructor_thunk(void* a0)
{
 return (void*)((char *)a0 + (long)(((*((unsigned int**)a0))[16]));
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11210
void* DiamondDerived_destructor_thunk2(void* a0)
{
 return (void*)((char*)a0 - 8);
}


// Function: _ZN12MultiDerivedD1Ev at 0x11218
void* MultiDerived_destructor(void* self)
{
 return self;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x1121c
void* MultiDerived_destructor_thunk(void* a0)
{
 return (void*)((char*)a0 - 8);
}


// Function: _ZN7DerivedD2Ev at 0x11224
void* Derived_destructor2(void* self)
{
 return self;
}


// Function: _ZN4BaseD0Ev at 0x11228
void _Base_deleting_destructor(void* self)
{
 operatordelete(self, 4);
}


// Function: _ZN7DerivedD0Ev at 0x11240
void Derived_deleting_destructor(void* self)
{
 operatordelete(self, 8);
}


// Function: _ZN12MultiDerivedD0Ev at 0x11258
void MultiDerived_deleting_destructor(void* self)
{
 operatordelete(self, (size_t)16);
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x11270
void MultiDerived_deleting_destructor_thunk(void* a0)
{
 operatordelete((void*)((char*)a0 - 8), (size_t)16);
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x1128c
void RTTIDerivedB_deleting_destructor(void* self)
{
 operatordelete(self, 4);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x112a4
void RTTIDerivedA_deleting_destructor(void* self)
{
 operatordelete(self, 4);
}


// Function: _ZN14DiamondDerivedD0Ev at 0x112bc
void DiamondDerived_deleting_destructor(void* self)
{
 operatordelete(self, 24);
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x112d4
void DiamondDerived_deleting_destructor_thunk(void* a0)
{
 void* v0; // r4

 v0 = (void*)((char *)a0 + (*((unsigned int**)a0))[16]);
 operatordelete(v0, 24);
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x112f8
void DiamondDerived_deleting_destructor_thunk2(void* a0)
{
 operatordelete((void*)((char*)a0 - 8), 24);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11314
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x11320
double template_max_double()
{
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x11350
int template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // r3
 unsigned int temp; // r0

 v0 = *(ptr);
 temp = *(p);
 *(p) = v0;
 *(ptr) = temp;
 return 0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x11364
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x11370
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((char*)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11388
void Container_int_get(void* self, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x113ac
int Container_int_getSize(void* self)
{
 return (int)*(unsigned int*)((char*)self + 40);
}


// Function: _ZN9ContainerIdEC1Ev at 0x113b4
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x113c0
void Container_double_push(void* p, double value)
{
 unsigned int v0; // r3

 v0 = *((unsigned int*)((char*)p + 80));
 if (9 >= v0)
 {
 double* ptr_arr = (double*)((char*)p + v0 * 8);
 *((unsigned int*)((char*)p + 80)) = v0 + 1;
 *ptr_arr = value;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x113f0
double Container_double_get(void* self, int arg_0)
{
 if (arg_0 < 0)
 return 0.0;
 return *(double*)((char*)self + arg_0 * 8);
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x1141c
unsigned int Container_double_getSize(void* self)
{
 return *((unsigned int*)((char*)self + 80));
}



/* CRT stub function _fini removed by preprocessor */


