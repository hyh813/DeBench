// Angr Decompilation of 5-1_gcc_Os_no_g
// Platform: ARMEL
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */

// Forward declarations for functions used in the code
void *operator_new(size_t size);
void *operator_new_array(size_t size);
void operator_delete(void *ptr);
void operator_delete_array(void *ptr);
int puts(const char *s);
void test_cpp_oo_features(void);
int __printf_chk(int flag, const char *fmt, ...);
void __stack_chk_fail(void);
char armg_calculate_condition(int cond, unsigned int a, unsigned int b, unsigned int c);
int __aeabi_dcmpgt(void);
int __aeabi_d2iz(void);
int __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso_handle);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, void *type_info, void *dest, ...);
void *__cxa_begin_catch(void);
void __cxa_rethrow(void);
void __cxa_end_catch(...);
void __cxa_end_cleanup(...);
int std_type_info_operator_eq(void *info1, void *info2);
int std_ios_base_Init_Init(void *obj);
int std_ios_base_Init_dtor(void *obj);

// Forward declarations for complete destructors
int MiddleA_complete_dtor(void* p);
int MiddleB_complete_dtor(void* p);

// Forward declarations for template functions
int template_max_int(int a0, int a1);
double template_max_double(unsigned int arg0_hi, unsigned int arg0_lo, unsigned int arg1_hi, unsigned int arg1_lo);
unsigned int* template_swap_int(unsigned int *ptr, unsigned int *p, unsigned int unused1, unsigned int unused2);
void Container_int_push(void* ptr, int arg_0);
int thunk_to_DiamondDerived_func(void* a0);




// Function: sub_109bc at 0x109bc
extern unsigned int g_22008;

int sub_109bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}


// Function: _Z18test_cpp_exceptionv at 0x10b08
void test_cpp_exception()
{
 unsigned int *ptr; // r0
 unsigned int flag1; // r1
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int result; // r4
 unsigned int *v10; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 result = 0;
 ptr = (unsigned int *)(uintptr_t)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)(uintptr_t)0x21e70, (void*)(uintptr_t)0);
}


// Function: main at 0x10bbc
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10bcc
extern int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 std_ios_base_Init_Init((void*)(uintptr_t)0x22098);
 v0 = __aeabi_atexit((void*)(uintptr_t)0x22098, (void(*)(void*))std_ios_base_Init_dtor, (void*)(uintptr_t)0x2208c);
 return __aeabi_atexit((void*)(uintptr_t)0x22098, (void(*)(void*))std_ios_base_Init_dtor, (void*)(uintptr_t)0x2208c);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10c34 at 0x10c34
void sub_10c34()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10cf4
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
 if (!(v2 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x10d60
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10d7c
struct Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 goto *((int *)*((int *)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x10d88
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11af0;
extern unsigned int g_11b08;

void test_cpp_virtual_func()
{
 unsigned int v5; // r3
 unsigned int v6; // r2
 unsigned int v7; // r1
 struct Base *v8; // r0
 unsigned int v1; // [bp-0x18]
 struct Base *v2; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v4 = __glibc___stack_chk_guard;
 v1 = 72432;
 v2;
 v3 = 3;
 v2 = (struct Base *)(uintptr_t)v1; (void)v2;
 call_virtual_func(v2, 5);
 v2 = (struct Base *)(uintptr_t)&g_11af0;
 call_virtual_func(v2, 5);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10e08
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10e10
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10e18
extern unsigned int __glibc___stack_chk_guard;

// Forward declaration for template function
int template_max_int(int arg_0, int arg_1);
double template_max_double(unsigned int arg0_hi, unsigned int arg0_lo, unsigned int arg1_hi, unsigned int arg1_lo);

void test_cpp_template_func()
{
 unsigned int v6; // r3
 unsigned int v7; // r2
 unsigned int v8; // r1
 unsigned int v9; // r0
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]

 v5 = v6;
 v4 = v7;
 v2 = v8;
 v0 = v9;
 v5 = (unsigned int)__glibc___stack_chk_guard;
 template_max_int(3, 7);
 v10 = template_max_double(0, 0x40040000, 0, 0x3ff80000);
 v2 = 10;
 v4 = 20;
 template_swap_int(&v2, &v4, 10, 20);
 (void)v10; (void)v8; // __aeabi_d2iz called via assembly
 if (!(v5 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x10ec0
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_class()
{
 unsigned int v4; // lr
 unsigned int v0; // [bp-0x38]
 unsigned int result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 result = 1;
 v0 = 10;
 Container_int_push(&v0, 20);
 Container_int_push(&v0, 30);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z15test_cpp_lambdav at 0x10f40
void test_cpp_lambda()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10f48
extern char _ZTI12RTTIDerivedA;
extern char g_11c68;
extern char g_11c7c;

void test_cpp_rtti()
{
 void* *p; // r6
 void* *ptr; // r5
 unsigned int result; // r0
 char *cur; // r0

 p = (void**)operator_new(4);
 *(p) = (void*)(uintptr_t)72808;
 ptr = (void**)operator_new(4);
 *(ptr) = (void*)(uintptr_t)72828;
 result = (unsigned int)std_type_info_operator_eq((void*)*(void**)((char*)*(void**)p + 16), (void*)(uintptr_t)0x11ac0);
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10f9a;
LABEL_10f99:
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10f99;
LABEL_10f9a:
 }
 cur = *(char**)((char*)*(void**)p + 20);
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 ((void (*)(void*))*(void**)((char*)*(void**)p + 16))(p);
 ((void (*)(void*))*(void**)((char*)*(void**)ptr + 16))(ptr);
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x11038
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_smart_ptr()
{
 unsigned int v6; // lr
 unsigned int v7; // r4
 unsigned int v8; // r3
 unsigned int v9; // r2
 unsigned int v10; // r1
 unsigned int v11; // r0
 unsigned int *addr; // r0
 unsigned int *ptr; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int *v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int *p; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 p = v9;
 v1 = v10;
 v0 = v11;
 v3 = __glibc___stack_chk_guard;
 addr = (unsigned int*)operator_new(4);
 *(addr) = 200;
 v1 = addr;
 v0 = 0;
 ptr = (unsigned int*)operator_new_array(20);
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 p = ptr;
 p[4] = 5;
 if (!(v3 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_110c4 at 0x110c4
int sub_110c4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
 unsigned int v0; // r0

 __cxa_end_cleanup(v0, a1, a2, a3);
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x110ec
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11c20;
extern unsigned int g_11c38;
extern unsigned int g_11c54;

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = 72736;
 v1 = 72760;
 v2 = 72788;
 v3 = 50;
 thunk_to_DiamondDerived_func((void*)((uintptr_t)&v2 + *((unsigned int*)&v2 + 12)));
 v3 = 100;
 thunk_to_DiamondDerived_func((void*)((uintptr_t)&v2 + *((unsigned int*)&v2 + 12)));
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_oo_featuresv at 0x1117c
extern char g_11866;
extern char g_1188a;
extern char g_118a8;
extern char g_118c4;
extern char g_118e0;
extern char g_118fc;
extern char g_11919;
extern char g_11935;
extern char g_11951;
extern char g_1196d;
extern char g_11989;
extern char g_119a6;
extern char g_119c3;

void test_cpp_oo_features()
{
 puts((const char*)0x11866);
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
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x112b0
void Base_virtual_func(void* self, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x112b8
void Base_getName(void* self)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x112c4
int Base_dtor(void* self)
{
 return 0;
}


// Function: _ZN7Derived12virtual_funcEi at 0x112c8
void Derived_virtual_func(void* self, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x112d4
void Derived_getName(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x112e0
void MultiDerived_funcA(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x112e8
void MultiDerived_funcB(void* self)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x112f0
unsigned int non_virtual_thunk_to_MultiDerived_funcB(void* a0)
{
 (void)a0;
 return 40;
}


// Function: _ZN11VirtualBase4funcEv at 0x112f8
void VirtualBase_func(void* self)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x11300
int VirtualBase_dtor(void* self)
{
 return 0;
}


// Function: _ZN7MiddleA4funcEv at 0x113044
void MiddleA_func(void* self)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1131c
int thunk_to_MiddleA_func(void* *a0)
{
 MiddleA_func((char *)a0 + ((unsigned int*)(*a0))[12]);
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x11330
void MiddleB_func(void* self)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x11348
int thunk_to_MiddleB_func(void* *a0)
{
 MiddleB_func((char *)a0 + ((unsigned int*)(*a0))[12]);
 return 0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x1135c
void DiamondDerived_func(void* self)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11374
int thunk_to_DiamondDerived_func(void* a0)
{
 DiamondDerived_func((char*)a0 + ((unsigned int*)a0)[12]);
 return 0;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11388
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 DiamondDerived_func(a0 - 8);
 return 0;
}


// Function: _ZN7MiddleAD1Ev at 0x11390

int MiddleA_dtor(void* ptr)
{
 unsigned int *temp_ptr;
 ((unsigned int *)ptr)[0] = 72492;
 temp_ptr = (unsigned int *)((uintptr_t)ptr + 8);
 *temp_ptr = 72520;
 return 0;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x113a8

void* thunk_to_MiddleA_dtor(void* a0)
{
 unsigned int v0;
 unsigned int* temp;

 temp = (unsigned int*)a0;
 v0 = temp[16];
 temp[16] = (unsigned int)(uintptr_t)72492;
 ((unsigned int*)((char*)a0 + v0 + 8))[0] = (unsigned int)(uintptr_t)72520;
 return (void*)((uintptr_t)a0 + v0);
}


// Function: _ZN7MiddleBD1Ev at 0x113d0

int MiddleB_dtor(void* ptr)
{
 unsigned int *temp_ptr;
 ((unsigned int *)ptr)[0] = 72552;
 temp_ptr = (unsigned int *)((char *)ptr + 8);
 *temp_ptr = 72580;
 return 0;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x113e8

void* thunk_to_MiddleB_dtor(void* a0)
{
 unsigned int v0;
 unsigned int* temp;

 temp = (unsigned int*)a0;
 v0 = temp[16];
 temp[16] = (unsigned int)(uintptr_t)72552;
 ((unsigned int*)((char*)a0 + v0 + 8))[0] = (unsigned int)(uintptr_t)72580;
 return (void*)((uintptr_t)a0 + v0);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x11410
void RTTIDerivedA_getType(void* self)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11418
void RTTIDerivedB_getType(void* self)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x11420
int RTTIDerivedB_dtor(void* self)
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11424
int RTTIDerivedA_dtor(void* self)
{
 return 0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11428
int MultiDerived_dtor(void* self)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x1142c
int non_virtual_thunk_to_MultiDerived_dtor(void* a0)
{
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x11434
int Derived_dtor(void* self)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x11438
int Base_deleting_dtor(void* self)
{
 operator_delete(self);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x11450
int Derived_deleting_dtor(void* self)
{
 operator_delete(self);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11468
int MultiDerived_deleting_dtor(void* self)
{
 operator delete(self);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x11480
int non_virtual_thunk_to_MultiDerived_deleting_dtor(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x11488
int VirtualBase_deleting_dtor(void* self)
{
 operator delete(self);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x114a0
int RTTIDerivedB_deleting_dtor(void* self)
{
 operator delete(self);
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x114b8
int RTTIDerivedA_deleting_dtor(void* self)
{
 operator delete(self);
 return 0;
}


// Function: _ZN7MiddleAD0Ev at 0x114d0

void MiddleA_deleting_dtor(void* self)
{
 void* result = (void*)((uintptr_t)self + ((unsigned int*)self)[16]);
 (void)MiddleA_complete_dtor(result);
 operator delete(result);
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x114fc
void thunk_to_MiddleA_deleting_dtor(void* a0)
{
 unsigned int v0;
 unsigned int* temp;
 temp = (unsigned int*)a0;
 v0 = temp[16];
 temp[16] = (unsigned int)(uintptr_t)72492;
 (void)MiddleA_complete_dtor((void*)((uintptr_t)a0 + v0));
 operator delete((void*)((uintptr_t)a0 + v0));
}


// Function: _ZN7MiddleBD0Ev at 0x11510

void MiddleB_deleting_dtor(void* self)
{
 void* result = (void*)((uintptr_t)self + ((unsigned int*)self)[16]);
 (void)MiddleB_complete_dtor(result);
 operator delete(result);
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x1153c
void thunk_to_MiddleB_deleting_dtor(void* a0)
{
 unsigned int v0;
 unsigned int* temp;
 temp = (unsigned int*)a0;
 v0 = temp[16];
 temp[16] = (unsigned int)(uintptr_t)72552;
 (void)MiddleB_complete_dtor((void*)((uintptr_t)a0 + v0));
 operator delete((void*)((uintptr_t)a0 + v0));
}


// Function: _ZN7MiddleAD2Ev at 0x11550
int MiddleA_complete_dtor(void* p)
{
 void* v1; // r2

 v1 = *(void **)p;
 *(void **)p = v1;
 *((unsigned int *)((char *)p + *((unsigned int*)v1 + 12))) = *(unsigned int*)((char *)p + 4);
 return 0;
}


// Function: _ZN7MiddleBD2Ev at 0x11568
int MiddleB_complete_dtor(void* p)
{
 void* v1; // r2

 v1 = *(void **)p;
 *(void **)p = v1;
 *((unsigned int *)((char *)p + *((unsigned int*)v1 + 12))) = *(unsigned int*)((char *)p + 4);
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11580
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x1158c
double template_max_double(unsigned int arg0_hi, unsigned int arg0_lo, unsigned int arg1_hi, unsigned int arg1_lo)
{
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x115bc
unsigned int* template_swap_int(unsigned int *ptr, unsigned int *p, unsigned int unused1, unsigned int unused2)
{
 unsigned int v0; // r3

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x115d0
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x115dc
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((char *)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x115f4
void Container_int_get(void* self, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11618
void Container_int_getSize(void* self)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x11620
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x1162c
void Container_double_push(void* p, unsigned int v2, unsigned int v3)
{
 unsigned int v0; // r1

 v0 = *((unsigned int *)((char *)p + 80));
 if (9 >= v0)
 goto LABEL_11638;
 return;
LABEL_11638:
 *((unsigned int *)((char *)p + 80)) = v0 + 1;
 *((unsigned int *)((char *)p + 8 * v0)) = v2;
 *((unsigned int *)((char *)p + 4 + 8 * v0)) = v3;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x1164c
void Container_double_get(void* self, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11678
int Container_double_getSize(void* self)
{
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x11680
int std_unique_ptr_int_dtor(void* self)
{
 if (*((int *)self))
 operator delete((void*)(uintptr_t)*((int *)self));
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x116a4
int std_unique_ptr_int_array_dtor(void* self)
{
 if (*((int *)self))
 operator delete[]((void*)(uintptr_t)*((int *)self));
 return 0;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x116c4
extern unsigned int g_11c20;
extern unsigned int g_11c38;
extern char g_11c54;

int DiamondDerived_dtor4(void* self)
{
 return 0;
}
// Function: _ZN14DiamondDerivedD1Ev at 0x11748
int DiamondDerived_dtor1(void* self)
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11754
int non_virtual_thunk_to_DiamondDerived_dtor1(unsigned int a0)
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x1175c
int thunk_to_DiamondDerived_dtor1(unsigned int a0)
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11770
int DiamondDerived_deleting_dtor(void* self)
{
 operator delete(self);
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11790
int non_virtual_thunk_to_DiamondDerived_dtor0(void* a0)
{
 DiamondDerived_deleting_dtor((void*)((uintptr_t)a0 - 8));
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x11798
int thunk_to_DiamondDerived_dtor0(void* a0)
{
 unsigned int v0;
 v0 = ((unsigned int*)a0)[16];
 DiamondDerived_deleting_dtor((void*)((uintptr_t)a0 + v0));
 return 0;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x117ac
int DiamondDerived_dtor2(void* self)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


