// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>


// Forward declarations
extern void *_ZStL8__ioinit;
extern void _ZNSt8ios_base4InitD1Ev(void);
extern unsigned int __dso_handle;
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char _ZTIi;
extern char g_403ecc;
extern char g_403ee0;
extern char g_402081;
extern char g_40209f;
extern char g_4020bb;
extern char g_4020d7;
extern char g_4020f3;
extern char g_402110;
extern char g_40212c;
extern char g_402148;
extern char g_402164;
extern char g_402180;
extern char g_40219d;
extern char g_4021ba;
extern char g_4021d8;

typedef struct struct_0 {
    char padding_0[4];
    void (*field_4)(void*);
} struct_0;

// Define global variables
char g_402081 = 0;
char g_40209f = 0;
char g_4020bb = 0;
char g_4020d7 = 0;
char g_4020f3 = 0;
char g_402110 = 0;
char g_40212c = 0;
char g_402148 = 0;
char g_402164 = 0;
char g_402180 = 0;
char g_40219d = 0;
char g_4021ba = 0;
char g_4021d8 = 0;
char g_403ecc = 0;
char g_403ee0 = 0;
struct_0 *g_403ff4 = 0;
unsigned int _ZN14LifecycleClass14instance_countE = 0;
void *_ZStL8__ioinit = 0;
char _ZTIi = 0;

// Function declarations
void frame_dummy();
void __do_global_ctors_aux();
void __do_global_dtors_aux();
void deregister_tm_clones();
void register_tm_clones();
void __x86_get_pc_thunk_dx();
int __x86_get_pc_thunk_bx();
void test_cpp_member_func();
void *operator_new(unsigned int size);
void *operator_new_array(unsigned int size);
void operator_delete(void *ptr);
void operator_delete_array(void *ptr);
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exc, void *type, void *dest);

// Stub implementations for C++ runtime functions
void _start()
{
 return;
}

void *operator_new(unsigned int size)
{
 return malloc(size);
}

void *operator_new_array(unsigned int size)
{
 return malloc(size);
}

void operator_delete(void *ptr)
{
 free(ptr);
}

void operator_delete_array(void *ptr)
{
 free(ptr);
}

void __cxa_throw(void *exc, void *type, void *dest)
{
 // Stub - just free and return
 if (exc) free(exc);
}

void *__cxa_allocate_exception(unsigned int size)
{
 return malloc(size);
}

void __cxa_begin_catch(void *exc);
void __cxa_end_catch();
void __cxa_rethrow(void *exc);
void _Unwind_Resume(unsigned int exc);
int __cxa_atexit(void *func, void *arg, void *dso);

void RTTIDerivedA_getType(void* this_ptr);
void RTTIDerivedB_getType(void* this_ptr);
int Container_double_getSize(void* this_ptr);

extern struct_0 *g_403ff4;

int _init_wrapper()
{
 if (g_403ff4)
 g_403ff4->field_4((void*)g_403ff4);
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401170
int _GLOBAL__sub_I_5_1_cpp()
{
 return 0;
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
}


// Function: sub_4011dc at 0x4011dc
int sub_4011dc()
{
 return 0;
}


// Function: __x86_get_pc_thunk_bx at 0x4011e0
int __x86_get_pc_thunk_bx()
{
 return 0;
}


// Function: sub_4011e4 at 0x4011e4
void deregister_tm_clones()
{
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401223 at 0x401223
int sub_401223()
{
 return 0;
}


// Function: sub_401229 at 0x401229
void register_tm_clones()
{
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

// Function: sub_401277 at 0x401277
void __do_global_dtors_aux()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */


// Function: sub_40130a at 0x40130a
void frame_dummy()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401319
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40131d
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}


// Function: sub_401321 at 0x401321
int sub_401321()
{
 test_cpp_member_func();
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401324
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28]
 char result; // [bp-0x9]

 memcpy(&v1, "Test", 31);
 result = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401370
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int i; // esi
 void *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = operator_new_array(20);
 ptr = (unsigned int *)v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013cf
typedef struct Base {
    void *vtable;
} Base;

void call_virtual_func(Base *arg_0, int arg_1)
{
 void (*func)(Base*, int) = (void (*)(Base*, int))((void**)arg_0->vtable)[0];
 func(arg_0, arg_1);
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
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3 = 0; // edx

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 return;
}








// Function: _Z18test_cpp_smart_ptrv at 0x401502
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401508
extern char g_403ecc;
extern char g_403ee0;

void test_cpp_rtti()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x14]

 ptr = operator_new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0 **)operator_new(4);
 *p = (struct_0 *)&g_403ee0;
 operator_delete(v0);
 (*p)->field_4((void*)p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015c0
extern char g_402081;
extern char g_40209f;
extern char g_4020bb;
extern char g_4020d7;
extern char g_4020f3;
extern char g_402110;
extern char g_40212c;
extern char g_402148;
extern char g_402164;
extern char g_402180;
extern char g_40219d;
extern char g_4021ba;
extern char g_4021d8;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x2c]
 char v1[31]; // [bp-0x28]
 char result; // [bp-0x9]

 puts(&g_4021d8);
 memcpy(&v1, "Test", 31);
 result = 0;
 v0 = 10;
 strlen(v1);
 printf(&g_402081);
 test_cpp_constructor();
 printf(&g_40209f);
 printf(&g_4020bb);
 printf(&g_4020d7);
 printf(&g_4020f3);
 printf(&g_402110);
 printf(&g_40212c);
 printf(&g_402148);
 printf(&g_402164);
 test_cpp_exception();
 printf(&g_402180);
 printf(&g_40219d);
 test_cpp_rtti();
 printf(&g_4021ba);
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
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40177c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401798
int Container_int_get(void* this_ptr, int arg_0)
{
 return 0;
}








// Function: _ZN9ContainerIdEC1Ev at 0x4017b8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4017c4
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int idx; // ecx

 idx = *((unsigned int *)((char*)ptr + 80));
 if (idx <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = idx + 1;
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4017e2
int Container_double_get(void* this_ptr, int arg_0)
{
 return 0;
}





// Function: _ZNK9ContainerIdE7getSizeEv at 0x4017fc
int Container_double_getSize(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401804
int RTTIDerivedA_destructor(void* this_ptr)
{
 operator_delete(this_ptr);
 return 0;
}





// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401826
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40182a
int RTTIBase_destructor(void* this_ptr)
{
 return 0;
}





// Function: _ZN12RTTIDerivedBD0Ev at 0x40182c
int RTTIDerivedB_destructor(void* this_ptr)
{
 operator_delete(this_ptr);
 return 0;
}





// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40184e
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: sub_401854 at 0x401854
void __do_global_ctors_aux()
{
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */


// Function: sub_4018a2 at 0x4018a2
int sub_4018a2()
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


