// Angr Decompilation of 5-1_clang_Os_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

// C++ runtime function declarations
extern void* operator new(size_t size);
extern void operator delete(void* ptr);
extern void* operator new[](size_t size);
extern void operator delete[](void* ptr);
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void* exc, void* type_info, void* dest);
extern void __cxa_begin_catch(void* exc);
extern void __cxa_end_catch();
extern void __cxa_rethrow(void* exc);
extern void _Unwind_Resume(unsigned int exc);
extern int __cxa_atexit(void (*func)(void), void* arg, void* dso);

// Stub implementation for __cxa_atexit
int __cxa_atexit(void (*func)(void), void* arg, void* dso) { return 0; }

// Stub implementations for C++ exception handling
void* __cxa_allocate_exception(size_t size) { return malloc(size); }
void __cxa_throw(void* exc, void* type_info, void* dest) { }
void __cxa_begin_catch(void* exc) { }
void __cxa_end_catch() { }
void __cxa_rethrow(void* exc) { }
void _Unwind_Resume(unsigned int exc) { }

// Type definitions
typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    char padding_0[4];
    struct struct_1 *field_4;
} struct_0;

// External variable declarations
extern char _ZStL8__ioinit;
extern unsigned int __dso_handle;

unsigned int _ZN14LifecycleClass14instance_countE = 0;
extern char _ZTIi;
extern char g_403ecc;
struct_0 g_403ee0 = {0};
extern char g_402081[];
extern char g_40209f[];
extern char g_4020bb[];
extern char g_4020d7[];
extern char g_4020f3[];
extern char g_402110[];
extern char g_40212c[];
extern char g_402148[];
extern char g_402164[];
extern char g_402180[];
extern char g_40219d[];
extern char g_4021ba[];
extern char g_4021d8[];

// Define global string variables
char g_402081[] = "Constructor test\n";
char g_40209f[] = "Virtual function test\n";
char g_4020bb[] = "Multiple inheritance test\n";
char g_4020d7[] = "Diamond inheritance test\n";
char g_4020f3[] = "Operator overload test\n";
char g_402110[] = "Template function test\n";
char g_40212c[] = "Template class test\n";
char g_402148[] = "Lambda test\n";
char g_402164[] = "Exception test\n";
char g_402180[] = "Smart pointer test\n";
char g_40219d[] = "RTTI test\n";
char g_4021ba[] = "OO features complete\n";
char g_4021d8[] = "Starting OO features test\n";

// Forward function declarations
void _start() { }
void frame_dummy() { }
int __do_global_ctors_aux();
void __do_global_dtors_aux();
void deregister_tm_clones() { }
unsigned int register_tm_clones();
void* __x86_get_pc_thunk_dx();
int __x86_get_pc_thunk_di();
void test_cpp_member_func();

// External C++ function declarations
extern void _ZNSt8ios_base4InitC1Ev(void*);
extern void _ZNSt8ios_base4InitD1Ev(void*);
extern void _ZNK9ContainerIiE7getSizeEv(void*);
extern void _ZNK9ContainerIdE7getSizeEv(void*);
extern void _ZNK12RTTIDerivedA7getTypeEv(void*);
extern void _ZNK12RTTIDerivedB7getTypeEv(void*);

// Stub implementations for C++ runtime functions
void _ZNSt8ios_base4InitC1Ev(void* ptr) { }
void _ZNSt8ios_base4InitD1Ev(void* ptr) { }
void _ZNK9ContainerIiE7getSizeEv(void* ptr) { }
void _ZNK9ContainerIdE7getSizeEv(void* ptr) { }
void _ZNK12RTTIDerivedA7getTypeEv(void* ptr) { }
void _ZNK12RTTIDerivedB7getTypeEv(void* ptr) { }

/* CRT stub function _init removed by preprocessor */
struct_0 *g_403ff4 = 0;

int _init()
{
 if (g_403ff4)
 ((void(*)())g_403ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return;
}


// Function: sub_401160 at 0x401160
void sub_401160()
{
 void* v1; // ebx

 return;
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_5_1_cpp at 0x401170

int _GLOBAL__sub_I_5_1_cpp()
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
 return __cxa_atexit((void (*)(void))_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011e0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4011e4 at 0x4011e4
void sub_4011e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401223 at 0x401223
void sub_401223()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



unsigned int register_tm_clones_impl()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = v2;
 v0 = v4;
 if (!v3)
 {
 return 0;
 }
 else if (*((int *)&v3->field_4))
 {
 return ((int(*)(struct_0*, int))v3->field_4)(v3, 0);
 }
 else
 {
 return 0;
 }
}

unsigned int register_tm_clones()
{
 return register_tm_clones_impl();
}


// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux_impl()
{
 struct_0 *ptr;
 unsigned int v11;
 unsigned int i;

 ptr = (struct_0 *)g_403ff4;
 if (ptr->field_4)
 return;
 if (*((int *)&ptr->field_4))
 ((void(*)())(sub_401160))();
 v11 = 0;
 i = 0;
 if (v11 < i)
 {
 do
 {
 v11 = v11 + 1;
 } while (v11 < i);
 }
 deregister_tm_clones();
}

void __do_global_dtors_aux()
{
 __do_global_dtors_aux_impl();
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401319
void* __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x40131d
int __x86_get_pc_thunk_di()
{
 return 0;
}


// Function: sub_401321 at 0x401321
void sub_401321()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401324
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[31]; // [bp-0x28]
 char result; // [bp-0x9]

 memcpy(v1, "Test", 31);
 result = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401370

void test_cpp_constructor()
{
 unsigned int i; // esi
 unsigned int *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = (unsigned int*)operator new[](20);
 ptr = v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete[](v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013cf
struct Base {
    void* vtable;
};

struct Container {
    unsigned int size;
};

struct RTTIBase {
    void* vtable;
};

struct RTTIDerivedA {
    void* vtable;
};

struct RTTIDerivedB {
    void* vtable;
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 ((void(*)(struct Base*, int))(*((int *)*((int *)arg_0))))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013f4
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013fa
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401400
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401406
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x40140c
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401412
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401418
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x40141e

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3; // edx

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 v2 = 0;
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch((void*)v2);
 __cxa_end_catch();
 return;
}


// Function: sub_40145f at 0x40145f
int sub_40145f()
{
 unsigned int result; // edx
 unsigned int v3; // eax
 unsigned int v5; // ebx

 if (result != 1)
 {
 if (result != 1)
 {
 __cxa_begin_catch((void*)v3);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)(v5 - 360), 0);
 }
 __cxa_begin_catch((void*)v3);
 __cxa_rethrow((void*)v3);
 }
 return 0;
}


// Function: sub_40147d at 0x40147d
void sub_40147d()
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x401502
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401508

void test_cpp_rtti()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x14]

 ptr = (unsigned int*)operator new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0 **)((unsigned int*)operator new(4));
 *p = &g_403ee0;
 operator delete(v0);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015c0

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x2c]
 char v1[31]; // [bp-0x28]
 char result; // [bp-0x9]

 puts(g_4021d8);
 memcpy(&v1, "Test", 31);
 result = 0;
 v0 = 10;
  printf(g_402081);
 test_cpp_constructor();
 printf(g_40209f);
 printf(g_4020bb);
 printf(g_4020d7);
 printf(g_4020f3);
 printf(g_402110);
 printf(g_40212c);
 printf(g_402148);
 printf(g_402164);
 test_cpp_exception();
 printf(g_402180);
 printf(g_40219d);
 test_cpp_rtti();
 printf(g_4021ba);
 return;
}


// Function: main at 0x401722
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x40173e
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x40174c
// Function: _Z13template_swapIiEvRT_S1_ at 0x40175d
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // edx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401770
void Container_int_Constructor(void* ptr)
{
 ((unsigned int*)ptr)[10] = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40177c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index;

 index = ((unsigned int*)ptr)[10];
 if (index <= 9)
 {
 ((unsigned int*)ptr)[10] = index + 1;
 ((int*)ptr)[index] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401798
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_4017af at 0x4017af
void sub_4017af(unsigned int a0)
{
 _ZNK9ContainerIiE7getSizeEv(0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4017b0
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4017b8
void Container_double_Constructor(void* ptr)
{
 ((unsigned int*)ptr)[20] = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4017c4
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int idx;

 idx = ((unsigned int*)ptr)[20];
 if (idx <= 9)
 {
 ((unsigned int*)ptr)[20] = idx + 1;
 ((double*)ptr)[idx] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4017e2
void Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 >= 0 && (int)((unsigned int*)this_ptr)[20] > arg_0)
 {
 }
 return;
}


// Function: sub_4017fb at 0x4017fb
void sub_4017fb(unsigned int a0)
{
 _ZNK9ContainerIdE7getSizeEv(0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4017fc
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401804
void RTTIDerivedA_destructor(void* this_ptr)
{
 operator delete(this_ptr);
 return;
}


// Function: sub_401825 at 0x401825
void sub_401825()
{
 _ZNK12RTTIDerivedA7getTypeEv(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401826
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40182a
void RTTIBase_destructor(void* this_ptr)
{
 return;
}


// Function: sub_40182b at 0x40182b
void sub_40182b()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40182c
void RTTIDerivedB_destructor(void* this_ptr)
{
 operator delete(this_ptr);
 return;
}


// Function: sub_40184d at 0x40184d
void sub_40184d()
{
 _ZNK12RTTIDerivedB7getTypeEv(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40184e
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: sub_401854 at 0x401854
void sub_401854()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux_impl()
{
 return 0;
}

int __do_global_ctors_aux()
{
 return __do_global_ctors_aux_impl();
}


// Function: sub_4018a2 at 0x4018a2
void sub_4018a2()
{
}



/* CRT stub function _fini removed by preprocessor */


