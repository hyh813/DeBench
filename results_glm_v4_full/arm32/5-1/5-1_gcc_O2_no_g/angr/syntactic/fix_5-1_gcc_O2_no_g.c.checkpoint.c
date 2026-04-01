// Angr Decompilation of 5-1_gcc_O2_no_g
// Platform: ARMEL

#include <string.h>
#include <stdint.h>

/* Forward declarations */
extern void _ZdlPvj(void*, unsigned int);
static inline void custom_delete(void* a, unsigned int b) 
{ 
  _ZdlPvj(a, b); 
}
extern int armg_calculate_condition(int, unsigned int, int, int);
extern unsigned int g_22008;
unsigned int g_22008 = 0;

int armg_calculate_condition(int a, unsigned int b, int c, int d)
{
 return (a != 0);
}
extern void *__cxa_begin_catch(void);
extern void __cxa_end_catch(void *);
extern void __stack_chk_fail(void) __attribute__((noreturn));
extern void *__cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void*, void*, void*);
extern void __cxa_rethrow(void*);
extern void *__aeabi_atexit(void*, void(*)(void*), void*);
extern int __aeabi_dcmpgt(double, double);
extern void *__aeabi_d2iz(double, double);
extern void *operatornew(unsigned int);
extern void abort(void);
extern int puts(const char*);
extern int __printf_chk(int, const char*, ...);
extern void __stack_chk_fail(void);
extern unsigned int __glibc___stack_chk_guard;
extern void test_cpp_oo_features(void);
extern void test_cpp_exception(void);
extern int template_max_int(int, int);
extern double template_max_double(void);
extern int template_swap_int(unsigned int*, unsigned int*);

/* Implementations for standard library functions */
unsigned int __glibc___stack_chk_guard = 0;

void __stack_chk_fail(void)
{
 abort();
}

void abort(void)
{
 while(1);
}

int puts(const char *s)
{
 return 0;
}

int __aeabi_dcmpgt(double a, double b)
{
 return (a > b) ? 1 : 0;
}


/* CRT stub function _init removed by preprocessor */



// Function: sub_1092c at 0x1092c
extern unsigned int g_22008;

int sub_1092c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 ((void (*)(void))(uintptr_t)g_22008)();
 return (int)v0;
}





// Function: main at 0x10b18
int main()
{
 test_cpp_oo_features();
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
class Base;

void call_virtual_func(Base *arg_0, int arg_1)
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
 v3 = template_max_int(3, 7);
 v3 = template_max_double();
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1); v1 = v1;
 __aeabi_d2iz(v3, v4);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10db4
void test_cpp_template_class()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x10de4
void test_cpp_exception()
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
extern char g_1162c;
extern char g_11640;

void test_cpp_rtti()
{
 unsigned int *ptr; // r5
 unsigned int *p; // r4
 struct_0 *v2; // r0
 unsigned int result; // r3
 char *cur; // r0

 ptr = (unsigned int *)operatornew(4);
 *(ptr) = 71212;
 p = (unsigned int *)operatornew(4);
 v2 = (struct_0 *)ptr;
 *(p) = 71232;
 result = (unsigned int)(v2 == (void*)0x115fc);
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e26;
LABEL_10e25:
 ;
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10e25;
LABEL_10e26:
 ;
 }
 cur = (char *)((int)v2->field_4 + 4);
 if (*(char *)cur == 42)
 cur = (char *)cur + 1;
 strlen(cur);
 ((void (*)(void*))v2->field_4)(ptr);
 ((void (*)(void*))v2->field_4)(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x10ec8
extern unsigned int __glibc___stack_chk_guard;
extern char g_11474;
extern char g_11494;
extern char g_114b0;
extern char g_114cc;
extern char g_114e8;
extern char g_11508;
extern char g_11524;
extern char g_11540;
extern char g_1155c;
extern char g_11578;
extern char g_11598;
extern char g_115b8;

void test_cpp_oo_features()
{
 unsigned int v9; // r0
 char v0[1][31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 puts("=== ");
 strncpy(v0[0], "Test", 31);
 result = 0;
 __printf_chk(1, (const char*)0x11474, strlen(v0[0]) + 4700);
 test_cpp_constructor();
 __printf_chk(1, (const char*)0x114b0, 42);
 __printf_chk(1, (const char*)0x114cc, 71);
 test_cpp_diamond_inheritance();
 __printf_chk(1, (const char*)0x11508, 22);
 test_cpp_template_func();
 __printf_chk(1, (const char*)0x11540, 16);
 __printf_chk(1, (const char*)0x1155c, 85);
 test_cpp_exception();
 test_cpp_smart_ptr();
 test_cpp_rtti();
 v9 = 0;
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, (const char*)0x115b8, (unsigned int)v9);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x11048
void Base_virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x11050
void Base_getName()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x1105c
int Base_dtor()
{
 return 0;
}


// Function: _ZN7Derived12virtual_funcEi at 0x11060
void Derived_virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x1106c
void Derived_getName()
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x11078
void MultiDerived_funcA()
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11080
void MultiDerived_funcB()
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x11088
int thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x11090
void MiddleA_func()
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x110a8
int thunk_to_MiddleA_func(void *a0)
{
 void *vptr = a0;
 int *vptr_int = (int *)vptr;
 void *adjusted = (void *)((char *)vptr + vptr_int[12]);
 int *adjusted_int = (int *)adjusted;
 int offset = adjusted_int[0] - 12;
 void *vtable_ptr = (void *)((uintptr_t)vptr + vptr_int[12] + offset);
 return *((int *)((char *)vtable_ptr + 4)) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x110cc
void MiddleB_func()
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x110e4
int thunk_to_MiddleB_func(void *a0)
{
 void *vptr = a0;
 int *vptr_int = (int *)vptr;
 void *adjusted = (void *)((char *)vptr + vptr_int[12]);
 int *adjusted_int = (int *)adjusted;
 int offset = adjusted_int[0] - 12;
 void *vtable_ptr = (void *)((uintptr_t)vptr + vptr_int[12] + offset);
 return *((int *)((char *)vtable_ptr + 4)) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x11108
void DiamondDerived_func()
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11120
int thunk_to_DiamondDerived_func(void *a0)
{
 void *vptr = a0;
 char *adjusted = (char *)vptr + ((int*)vptr)[12];
 int offset = *((int *)((char *)((int*)adjusted - 12))) - 12;
 void *vtable_ptr = (void *)((char *)adjusted + offset);
 return *((int *)((char *)vtable_ptr + 4)) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11144
int non_virtual_thunk_to_DiamondDerived_func(void *a0)
{
 void *vptr = (void *)((char *)a0 + 8);
 int *vptr_int = (int *)vptr;
 int offset = *vptr_int - 12;
 return *((int *)((char *)a0 - 4 + offset)) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x1115c
void RTTIDerivedA_getType()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11164
void RTTIDerivedB_getType()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x1116c
int RTTIDerivedB_dtor()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11170
int RTTIDerivedA_dtor()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11174
int DiamondDerived_dtor()
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x11178
void * thunk_to_DiamondDerived_dtor(void *a0)
{
 void *vptr = (void *)a0;
 int *vptr_int = (int *)vptr;
 return (void *)((char *)vptr + (uintptr_t)vptr_int[16]);
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11188
void * non_virtual_thunk_to_DiamondDerived_dtor(void *a0)
{
 return (void *)((char *)a0 - 8);
}


// Function: _ZN12MultiDerivedD1Ev at 0x11190
int MultiDerived_dtor()
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11194
void * non_virtual_thunk_to_MultiDerived_dtor(void *a0)
{
 return (void *)((char *)a0 - 8);
}


// Function: _ZN7DerivedD2Ev at 0x1119c
int Derived_dtor2()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x111a0
int Base_dtor0(void *self)
{
 custom_delete((unsigned int*)self, 4);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x111b8
int Derived_dtor0(void *self)
{
 custom_delete(self, 8);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x111d0
int MultiDerived_dtor0(void *self)
{
 custom_delete(self, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x111e8
void * non_virtual_thunk_to_MultiDerived_dtor0(void *a0)
{
 custom_delete((char*)a0 - 8, 16);
 return (void*)((char*)a0 - 8);
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x11204
int RTTIDerivedB_dtor0(void *self)
{
 custom_delete((unsigned int*)self, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x1121c
int RTTIDerivedA_dtor0(void *self)
{
 custom_delete(self, 4);
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11234
int DiamondDerived_dtor0(void *self)
{
 custom_delete(self, 24);
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x1124c
void * thunk_to_DiamondDerived_dtor0(void *a0)
{
 void *v0; // r4
 int *vptr = (int *)a0;
 int offset = vptr[16];
 v0 = (void *)((char *)a0 + (uintptr_t)offset);
 custom_delete(v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11270
void * non_virtual_thunk_to_DiamondDerived_dtor0(void *a0)
{
 custom_delete((void*)((char*)a0 - 8), 24);
 return (void*)((char*)a0 - 8);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x1128c
int template_max_int(int arg_0, int arg_1)
{
 return (arg_0 >= arg_1) ? arg_0 : arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x11298
double template_max_double(double arg_0, double arg_1)
{
 unsigned int result;
 result = (unsigned int)__aeabi_dcmpgt(arg_0, arg_1);
 if (result != 0)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return arg_0;
 }
 else
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return arg_0;
 }
 return arg_0;
}

// Function: template_max_double (no-arg overload) at 0x112d4
double template_max_double(void)
{
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x112c8
int template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // r3

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = (unsigned int)v0;
 return 0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x112dc
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((unsigned char *)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x112e8
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = *((unsigned int *)((unsigned char *)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((unsigned char *)ptr + 40)) = v1;
 *((int *)((unsigned char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11300
void Container_int_get(void* _this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11324
void Container_int_getSize(void* _this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x1132c
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((unsigned char *)ptr + 80)) = 0;
 return 0;
}



// Function: Container_double_push at 0x11340
void Container_double_push(unsigned char* p, unsigned int v2, unsigned int v3)
{
 unsigned int v0; // r3
 unsigned int *ptr; // r3

 v0 = *((unsigned int *)(p + 80));
 if (9 >= v0)
 {
 ptr = (unsigned int *)(p + v0 * 8);
 *((unsigned int *)(p + 80)) = v0 + 1;
 ptr[0] = v2;
 ptr[1] = v3;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x11368
void Container_double_get(void* _this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11394
void Container_double_getSize(void* _this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


