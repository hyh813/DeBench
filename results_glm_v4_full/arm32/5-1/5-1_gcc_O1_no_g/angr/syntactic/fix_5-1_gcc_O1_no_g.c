// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: ARMEL

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// C++ ABI function declarations
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
void* __cxa_begin_catch();
void __cxa_end_catch(void*);
void __cxa_rethrow(void*, unsigned int, unsigned int, unsigned int);
void __cxa_end_cleanup();
int __aeabi_d2iz(unsigned int, unsigned int);
int __aeabi_dcmpgt(void);

// Forward declarations for Base class
typedef struct Base Base;

void operatordelete(void *ptr, size_t size);
void __stack_chk_fail(void);
int armg_calculate_condition(int, int, int, int);

// Function declarations for operators
void *operatornew(size_t size);
void* operatornew_array(size_t size);

// Forward declarations for functions used before definition
int DiamondDerived_func(void* _this);
int template_max_int(int arg_0, int arg_1);
double template_max_double();
int template_swap_int(unsigned int *ptr);


/* CRT stub function _init removed by preprocessor */



// Function: sub_109bc at 0x109bc
extern unsigned int g_22008;

int sub_109bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10b40 at 0x10b40
void sub_10b40()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10c00
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


// Function: _Z20test_cpp_constructorv at 0x10c6c
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *ptr; // r0

 ptr = operatornew_array(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 free(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cd0

void call_virtual_func(Base *arg_0, int arg_1)
{
 void (**vtable)(Base*) = (void (**)(Base*))*((void**)arg_0);
 (*vtable)(arg_0);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x10ce4
extern unsigned int __glibc___stack_chk_guard;
extern Base g_1187c;
extern Base g_11894;

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0 = 71804;
 v1 = 71828;
 v2 = 3;
 call_virtual_func((Base*)&v0, 5);
 call_virtual_func((Base*)&v1, 5);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10d68
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x10d70
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11934;
extern unsigned int g_1194c;
extern char g_11968;

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = 71988;
 v2 = 72040;
 v1 = 72012;
 v3 = 50;
 DiamondDerived_func(&v2);
 v3 = 100;
 DiamondDerived_func(&v2);
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10df4
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10dfc
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
 v3 = template_max_double();
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0);
 __aeabi_d2iz(v3, v4);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10eac
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x10eb4
void test_cpp_lambda()
{
 return;
}


// Function: _ZZ18test_cpp_exceptionv at 0x10ebc
extern unsigned int _ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 unsigned int *ptr; // r0

 ptr = (unsigned int*)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)0x21e70, NULL);
}


// Function: _Z18test_cpp_smart_ptrv at 0x10f78
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10f84
extern char _ZTI12RTTIDerivedA;
extern char g_1197c;
extern char g_11990;

void test_cpp_rtti()
{
 unsigned int* p; // r5
 unsigned int* ptr; // r4
 unsigned int result; // r0
 char *cur; // r0
 void* temp_p; // temporary for conversion

 temp_p = operatornew(4);
 p = (unsigned int*)temp_p;
 *p = 72060;
 temp_p = operatornew(4);
 ptr = (unsigned int*)temp_p;
 *ptr = 72080;
 result = *(unsigned int*)((char*)p + 16) == (unsigned int)0x1184c;
   if (!result)
   {
    if (!armg_calculate_condition(18, result, 0, 0))
    goto LABEL_10fca;
LABEL_10fc9:
    ;
   }
   else
   {
    if (armg_calculate_condition(18, result, 0, 0))
    goto LABEL_10fc9;
LABEL_10fca:
    ;
   }
 cur = *(char**)((char*)p + 20);
 if (cur != NULL) {
 if (*((int*)cur) == 42)
 *((int*)cur) += 1;
 strlen(cur);
 }
 (*(void (*)(void*))p)((void*)p);
 (*(void (*)(void*))ptr)((void*)ptr);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x11074
extern char g_115e4;
extern char g_11608;
extern char g_11644;
extern char g_11660;
extern char g_1167c;
extern char g_1169c;
extern char g_116b8;
extern char g_116d4;
extern char g_116f0;
extern char g_1170c;
extern char g_1172c;
extern char g_1174c;

void test_cpp_oo_features()
{
 test_cpp_member_func();
 test_cpp_constructor();
 test_cpp_virtual_func();
 test_cpp_multiple_inheritance();
 test_cpp_diamond_inheritance();
 test_cpp_operator_overload();
 test_cpp_template_func();
 test_cpp_template_class();
 test_cpp_lambda();
 test_cpp_exception();
 test_cpp_smart_ptr();
 test_cpp_rtti();
}




// Function: main at 0x1119c
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x111ac
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 (void)(0x22098);
 (void)(0x2208c);
 v0 = 0;
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x111dc
void Base_virtual_func(void* _this, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x111e4
void Base_getName(void* _this)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x111f0
int Base_destructor(void* _this)
{
 return 0;
}





// Function: _ZNK7Derived7getNameEv at 0x11200
int Derived_getName(void* _this)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcAEv at 0x1120c
int MultiDerived_funcA(void* _this)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11214
int MultiDerived_funcB(void* _this)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x1121c
unsigned int MultiDerived_funcB_non_virtual_thunk()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x11224
int MiddleA_func(void* _this)
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1123c
int MiddleA_func_thunk(void* a0)
{
 return *((int *)(4 + (char *)a0 + ((unsigned int*)a0)[12] + *((int *)(*((int *)((char *)a0 + ((unsigned int*)a0)[12])) - 12)))) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x11260
int MiddleB_func(void* _this)
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x11278
int MiddleB_func_thunk(void* a0)
{
 return *((int *)(4 + (char *)a0 + ((unsigned int*)a0)[12] + *((int *)(*((int *)((char *)a0 + ((unsigned int*)a0)[12])) - 12)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x1129c
int DiamondDerived_func(void* _this)
{
 return 0;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x112b4
int DiamondDerived_func_thunk(void* a0)
{
 return *((int *)(4 + (char *)a0 + ((unsigned int*)a0)[12] + *((int *)(*((int *)((char *)a0 + ((unsigned int*)a0)[12])) - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x112d8
int DiamondDerived_func_non_virtual_thunk(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)((unsigned int*)a0)[8] - 12)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x112f0
int RTTIDerivedA_getType(void* _this)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x112f8
int RTTIDerivedB_getType(void* _this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x11300
int RTTIDerivedB_destructor(void* _this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11304
int RTTIDerivedA_destructor(void* _this)
{
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11308
int DiamondDerived_destructor(void* _this)
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x1130c
void* DiamondDerived_destructor_thunk(void* a0)
{
 return (char *)a0 + ((unsigned int*)a0)[16];
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x1131c
int DiamondDerived_destructor_non_virtual_thunk(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11324
int MultiDerived_destructor(void* _this)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11328
int MultiDerived_destructor_non_virtual_thunk(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x11330
int Derived_deleting_destructor(void* _this)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x113344
int Base_deleting_destructor(void* _this)
{
 operatordelete((void*)_this, 4);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x1134c
int Derived_deleting_destructor2(void* _this)
{
 operatordelete((void*)_this, 8);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11364
int MultiDerived_deleting_destructor(void* _this)
{
 operatordelete((void*)_this, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x1137c
void* MultiDerived_deleting_destructor_non_virtual_thunk(void* a0)
{
 operatordelete((void*)(a0 - 8), 16);
 return a0 - 8;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x11398
int RTTIDerivedA_deleting_destructor(void* _this)
{
 operatordelete((void*)_this, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x113b0
int RTTIDerivedB_deleting_destructor(void* _this)
{
 operatordelete((void*)_this, 4);
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x113c8
int DiamondDerived_deleting_destructor(void* _this)
{
 operatordelete((void*)_this, 24);
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x113e0
void* thunk_to_DiamondDerived_destructor(void* a0)
{
 void* v0; // r4

 v0 = (char *)a0 + ((unsigned int*)a0)[16];
 operatordelete(v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11404
void* DiamondDerived_deleting_destructor_non_virtual_thunk(void* a0)
{
 operatordelete((void*)(a0 - 8), 24);
 return a0 - 8;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11411420
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x1142c
double template_max_double(double arg_0, double arg_1)
{
 unsigned int v6; // lr
 unsigned int v7; // r8
 unsigned int v8; // r7
 unsigned int v9; // r6
 unsigned int v10; // r5
 unsigned int v11; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v2 = v9;
 v1 = v10;
 v0 = v11;
 result = __aeabi_dcmpgt();
 if (!result) {
 if (!armg_calculate_condition(2, result, 0, 0))
 return 0.0;
 }
 else {
 if (!armg_calculate_condition(2, result, 0, 0))
 return 0.0;
 }
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x1145c
int template_swap_int(unsigned int *ptr)
{
 unsigned int v0; // r3
 unsigned int *p; // r1

 v0 = *ptr;
 p = ptr + 1;
 *ptr = *p;
 *p = v0;
 return 0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x11470
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x1147c
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


// Function: _ZNK9ContainerIiE3getEi at 0x11494
void Container_int_get(void* _this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x114c0
void Container_int_getSize(void* _this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x114c8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x114d4
void Container_double_push(void* ptr)
{
 unsigned int v0; // r1
 unsigned int v1; // r12
 unsigned int v3; // r2
 unsigned int v4; // r3
 unsigned int v5; // r2
 unsigned int v6; // r3

 v0 = *((unsigned int *)((char*)ptr + 80));
 if (v0 <= 9)
 v1 = v0 + 1;
 *((unsigned int *)((char*)ptr + 80)) = v1;
 if (!armg_calculate_condition(210, v0, 9, 0))
 {
 *((unsigned int *)ptr) = v5;
 *((unsigned int *)((char*)ptr + 4)) = v6;
 return;
 }
 *((unsigned int *)((char *)ptr + 8 * v0)) = v3;
 *((unsigned int *)(4 + (char *)ptr + 8 * v0)) = v4;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x114f0
void Container_double_get(void* _this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11528
void Container_double_getSize(void* _this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */



