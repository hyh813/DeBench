// Angr Decompilation of 5-1_clang_Os_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

struct_0 *g_403fe8;

// Forward declarations
void Container_int_getSize(void* this_ptr);
void RTTIDerivedA_getType(void* this_ptr);
void RTTIDerivedB_getType(void* this_ptr);

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = (unsigned long long *)((unsigned long long(*)())g_403fe8)();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 return;
}


// Function: sub_40102c at 0x40102c
extern void* operatornew_array(unsigned long size);
extern void operatordelete_array(void* ptr);
extern void* operatornew(unsigned long size);
extern void operatordelete(void* ptr);

void* operatornew_array(unsigned long size) { return malloc(size); }
void operatordelete_array(void* ptr) { free(ptr); }
void* operatornew(unsigned long size) { return malloc(size); }
void operatordelete(void* ptr) { free(ptr); }

int sub_40102c()
{
 unsigned int v1 = 0; // rdi

 return (int)(unsigned long)operatornew_array(v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
void _ZNSt8ios_base4InitD1Ev() { }
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle) { return 0; }

void _GLOBAL__sub_I_5_1_cpp()
{
 // std::ios_base::Init::Init(&_ZStL8__ioinit);
 __cxa_atexit((void(*)(void))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, (void*)&__dso_handle);
 return;
}






/* CRT stub function _start removed by preprocessor */



// Function: sub_401195 at 0x401195
void sub_401195()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4198805
}














// Function: sub_401245 at 0x401245
void sub_401245()
{
}






// Function: sub_401259 at 0x401259
extern void test_cpp_member_func();
void sub_401259()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x40125c
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401294
unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = (unsigned int *)operatornew_array(20);
 i = 0;
 ptr = v1;
 do
 {
 *(ptr) = (unsigned int)i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operatordelete_array(v1);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012e5
struct Base {
 void* vtable;
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 void (*func)(void) = (void(*)(void))(*((long long *)arg_0->vtable));
 func();
}


// Function: _Z21test_cpp_virtual_funcv at 0x4012ed
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012f3
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4012f9
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4012ff
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401305
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x40130b
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401311
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401317
extern char _ZTIi;
void* __cxa_allocate_exception(unsigned long size) { return malloc(size); }
void __cxa_throw(void* exc, void* type, void* dest) { }
void _Unwind_Resume(void* exc) { }
void* __cxa_begin_catch(void* exc) { return exc; }
void __cxa_end_catch() { }
void __cxa_rethrow() { }

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // r14
 unsigned int v3; // edx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)&_ZTIi, 0);
 v2 = 0;
 v3 = 0;
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume((void*)v2); /* do not return */
 __cxa_begin_catch((void*)v2);
 __cxa_end_catch();
 return;
}


// Function: sub_401342 at 0x401342
extern char _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_401342(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx
 unsigned long long v3; // rcx
 unsigned long long v4; // r8
 unsigned long long v5; // r9
 unsigned long long v6; // rax
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 result = (unsigned int)a2;
 v6 = 0;
 if (result != 1)
 {
 if (result != 1)
 {
 // goto LABEL_0x4013cf;
 }
 __cxa_begin_catch((void*)v6);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)&_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch((void*)v6);
 __cxa_rethrow();
 return 0;
}





// Function: _Z18test_cpp_smart_ptrv at 0x4013d7
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013dd
extern char g_403d78;
char g_403da0;

void test_cpp_rtti()
{
 void* ptr; // r14
 struct_0 **p; // r12

 ptr = operatornew(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0 **)operatornew(8);
 *(p) = (struct_0 *)&g_403da0;
 operatordelete(ptr);
 ((void(*)())(*p)->field_8)();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40147f
char g_40207d;
char g_40209b;
char g_4020b7;
char g_4020d3;
char g_4020ef;
extern char g_40210c;
char g_402128;
char g_402144;
char g_402160;
char g_40217c;
char g_402199;
char g_4021b6;
char g_4021d4;
char g_40210c;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 puts((char*)&g_4021d4);
 flag1 = 0;
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf((char*)&g_40207d, (unsigned int)strlen(v1) + 4700);
 test_cpp_constructor();
 printf((char*)&g_40209b, 0);
 printf((char*)&g_4020b7, 42);
 printf((char*)&g_4020d3, 71);
 printf((char*)&g_4020ef, 650);
 printf((char*)&g_40210c, 22);
 printf((char*)&g_402128, 39);
 printf((char*)&g_402144, 16);
 printf((char*)&g_402160, 85);
 test_cpp_exception();
 printf((char*)&g_40217c, 0);
 printf((char*)&g_402199, 703);
 test_cpp_rtti();
 printf((char*)&g_4021b6, 0);
 return;
}


// Function: main at 0x4015a8
int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4015b2
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4015ba
unsigned long long MaxV(unsigned long long a, unsigned long long b) { return (a > b) ? a : b; }
double template_max_double(double arg_0, double arg_1)
{
 return (double)MaxV((unsigned long long)arg_0, (unsigned long long)arg_1);
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4015bf
void template_swap_int(int *ptr, int *p)
{
 unsigned int v1; // eax

 v1 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v1;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4015c8
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4015d0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (unsigned int)*((int *)((char*)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4015e4
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_4015f5 at 0x4015f5
void sub_4015f5(unsigned long a0)
{
 Container_int_getSize(0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4015f6
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4015fa
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401602
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (unsigned int)*((int *)((char*)ptr + 80));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401618
void Container_double_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40162c
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401630
int RTTIDerivedA_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_401635 at 0x401635
void sub_401635()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401636
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40163c
int RTTIBase_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_40163d at 0x40163d
void sub_40163d()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40163e
int RTTIDerivedB_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_401643 at 0x401643
void sub_401643()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401644
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


