// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: X86
// Note: This file must be compiled as C++ (use g++, not gcc)

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>

/* C++ exception handling declarations */
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void*));
extern void *__cxa_begin_catch(void);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void *exception);
extern int __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle);

/* CRT stub function _init removed by preprocessor */

struct struct_0 {
 char padding_0[400];
};

/* Global typeinfo for int - needed for exception handling */
const void* _ZTIi = (const void*)0x403020;

/* Global function pointer */
void (*g_403ff4)(void) = NULL;

/* C++ std::ios_base::Init object */
char _ZStL8__ioinit = 0;

/* LifecycleClass instance count global */
unsigned int _ZN14LifecycleClass14instance_countE = 0;

/* RTTI global data */
char g_403ecc = 0;
char g_403ee0 = 0;

/* DSO handle for atexit */
void* __dso_handle = (void*)0;

// Forward declarations
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void* deregister_tm_clones(void);
unsigned int register_tm_clones(void);
void test_cpp_member_func(void);
unsigned int __x86_get_pc_thunk_dx(void);
unsigned int* __x86_get_pc_thunk_di(int a0, void* a1);
int _GLOBAL__sub_I_5_1_cpp(void);
const char* RTTIDerivedA_getType(void);
const char* RTTIDerivedB_getType(void);
void sub_401166(void);
void sub_401160(void* arg_0);
int sub_401030(void);
void sub_4011ab(void);
void sub_4011db(void);
void sub_4011dc(void);
unsigned int __x86_get_pc_thunk_bx(void);
void sub_4011e4(void);
void sub_401223(void);
void sub_401229(void);
void sub_401277(void);
void sub_40130a(void);
void sub_401321(void);
void test_cpp_constructor(void);
void call_virtual_func(struct Base *arg_0, int arg_1);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_exception(void);
void sub_40147d(void);
void test_cpp_smart_ptr(void);
void test_cpp_rtti(void);
void test_cpp_oo_features(void);
int main(void);
int template_max_int(int arg_0, int arg_1);
void template_swap_int(int *ptr, int *p);
int Container_int_Constructor(void* ptr);
void Container_int_push(void* ptr, int arg_0);
int Container_int_get(void* this, int arg_0);
unsigned int Container_int_getSize(void* this);
void sub_4017af(unsigned int a0);
int Container_double_Constructor(void* ptr);
void Container_double_push(void* ptr);
double Container_double_get(void* this, int arg_0);
unsigned int Container_double_getSize(void* this);
void sub_4017fb(unsigned int a0);
int RTTIDerivedA_destructor(void* this);
void sub_401825(void* a0);
int RTTIBase_destructor(void* this);
int sub_40182b(void);
int RTTIDerivedB_destructor(void* this);
void sub_40184d(void* a0);
void sub_401854(void);
void sub_4018a2(void);
int sub_40145f(void);

int _init()
{
 if (g_403ff4)
 (*g_403ff4)();
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int *ptr = 0; // ebx
 unsigned int v0 = 0; // [bp-0x4]

 if (ptr)
 v0 = ptr[1];
 /* Indirect goto stub - invalid C syntax removed */
 return 0;
}


// Function: sub_401160 at 0x401160
int sub_401160(void* arg_0)
{
 void* v1; // ebx
 void (*func)(void);
 
 v1 = arg_0;
 if (v1) {
 func = (void (*)(void))((unsigned int*)v1)[6];
 func();
 }
 return 0;
}


// Function: sub_401166 at 0x401166
void sub_401166(void)
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401170
extern void _ZNSt8ios_base4InitD1Ev(void*);
extern char _ZStL8__ioinit;
extern void* __dso_handle;

struct ios_base_Init {
    void (*dtor)(void*);
    char data[32];
};

void ios_base_Init_Init(struct ios_base_Init *init);
int __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle);

int _GLOBAL__sub_I_5_1_cpp()
{
 /* ios_base_Init_Init removed */
 return __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab(void)
{
 /* _start() call removed - CRT stub function */
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011db at 0x4011db
void sub_4011db(void)
{
 /* Unreachable code marker */
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc(void)
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011e0
unsigned int __x86_get_pc_thunk_bx()
{
 return 0;
}


// Function: sub_4011e4 at 0x4011e4
void sub_4011e4(void)
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void* deregister_tm_clones() { return 0; }


// Function: sub_401223 at 0x401223
void sub_401223(void)
{
 __x86_get_pc_thunk_dx();
 return;
}


// Function: sub_401229 at 0x401229
void sub_401229(void)
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 struct_0 *v2 = 0;
 struct_0 *v3;
 unsigned int v4 = 0;
 unsigned int v0;
 unsigned int (*func)(void *, unsigned int);

 v3 = v2;
 v0 = v4;
 if (!0)
 {
 return 0;
 }
 else if (v3 && *((int *)&v3->padding_0[8]))
 {
 func = (unsigned int (*)(void *, unsigned int))*((int *)&v3->padding_0[8]);
 return func(&v3->padding_0[0], 0);
 }
 else
 {
 return 0;
 }
}


// Function: sub_401277 at 0x401277
void sub_401277(void)
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 /* Stub implementation - original was incorrectly decompiled with uninitialized variables */
 deregister_tm_clones();
 return;
}


// Function: sub_40130a at 0x40130a
void sub_40130a(void)
{
 __x86_get_pc_thunk_dx();
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy() { }


// Function: __x86_get_pc_thunk_dx at 0x401319
unsigned int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x40131d
unsigned int* __x86_get_pc_thunk_di(int a0, void* a1)
{
 return (unsigned int*)0;
}


// Function: sub_401321 at 0x401321
void sub_401321(void)
{
 test_cpp_member_func();
 return;
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
 unsigned int *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = (unsigned int *)malloc(5 * sizeof(unsigned int));
 ptr = v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 free(v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013cf
struct Base {
    void *vtable;  // Virtual function table pointer
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 void (*func)(struct Base *, int);
 func = (void (*)(struct Base *, int))(*(unsigned int *)arg_0);
 func(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013f4
void test_cpp_virtual_func(void)
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013fa
void test_cpp_multiple_inheritance(void)
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401400
void test_cpp_diamond_inheritance(void)
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401406
void test_cpp_operator_overload(void)
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x40140c
void test_cpp_template_func(void)
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401412
void test_cpp_template_class(void)
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401418
void test_cpp_lambda(void)
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x40141e
extern const void* _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3; // edx

 ptr = __cxa_allocate_exception(sizeof(int));
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 return;
}


// Function: sub_40145f at 0x40145f


int sub_40145f()
{
 unsigned int result = 0; // edx
 unsigned int v3 = 0; // eax
 unsigned int v5 = 0; // ebx

 if (result != 1)
 {
 if (result != 1)
 goto LABEL_0x4014fa;
 __cxa_begin_catch();
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (const void*)(v5 - 360), 0);
 }
 __cxa_begin_catch();
 __cxa_rethrow();
LABEL_0x4014fa:
 return 0;
}


// Function: sub_40147d at 0x40147d
void sub_40147d(void)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x401502
void test_cpp_smart_ptr(void)
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401508
typedef struct struct_rtti {
 char padding_0[4];
 struct struct_rtti *field_4;
} struct_rtti;

extern char g_403ecc;
extern char g_403ee0;

void test_cpp_rtti()
{
 void* ptr; // eax
 struct_rtti **p; // edi
 void* v0; // [bp-0x14]

 ptr = malloc(sizeof(void*));
 *((void **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_rtti **)malloc(sizeof(struct_rtti*));
 *(p) = (struct_rtti *)&g_403ee0;
 free(v0);
 return;
}


/* String data globals for test_cpp_oo_features */
char g_402081[] = "Test";
char g_40209f[] = " passed\n";
char g_4020bb[] = " failed\n";
char g_4020d7[] = "Constructor test\n";
char g_4020f3[] = "Exception test\n";
char g_402110[] = "Exception caught\n";
char g_40212c[] = "RTTI test\n";
char g_402148[] = "Type: ";
char g_402164[] = "\n";
char g_402180[] = "Smart ptr test\n";
char g_40219d[] = " passed\n";
char g_4021ba[] = " completed\n";
char g_4021d8[] = "Starting C++ OO features test\n";

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x2c]
 char v1[31]; // [bp-0x28]
 char result; // [bp-0x9]

 puts(&g_4021d8);
 memcpy(&v1, "Test", 31);
 result = 0;
 v0 = 10;
 strlen(&v1);
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

 v0 = *(ptr);
 *(ptr) = *(p);
 *(unsigned int *)p = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401770
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40177c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401798
int Container_int_get(void* this, int arg_0)
{
 return *((int *)((char *)this + 4 * arg_0));
}

unsigned int Container_int_getSize(void* this) {
 return *((unsigned int *)((char *)this + 40));
}


// Function: sub_4017af at 0x4017af
void sub_4017af(unsigned int a0)
{
 (void)Container_int_getSize((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4017b8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4017c4
void Container_double_push(void* ptr)
{
 unsigned int idx; // ecx

 idx = *((unsigned int *)((char *)ptr + 80));
 if (idx <= 9)
 {
 *((unsigned int *)((char *)ptr + 80)) = idx + 1;
 *((double *)((char *)ptr + 8 * idx)) = 0.0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4017e2
double Container_double_get(void* this, int arg_0)
{
 if (arg_0 >= 0 && *((int *)((char *)this + 80)) > arg_0)
 {
 return *((double *)((char *)this + 8 * arg_0));
 }
 return 0.0;
}

unsigned int Container_double_getSize(void* this) {
 return *((unsigned int *)((char *)this + 80));
}


// Function: sub_4017fb at 0x4017fb
void sub_4017fb(unsigned int a0)
{
 (void)Container_double_getSize((void*)a0);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401804
int RTTIDerivedA_destructor(void* this)
{
 free(this);
 return 0;
}


// Function: sub_401825 at 0x401825
void sub_401825(void* a0)
{
 RTTIDerivedA_getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401826
const char* RTTIDerivedA_getType(void)
{
 return "RTTIDerivedA";
}


// Function: _ZN8RTTIBaseD2Ev at 0x40182a
int RTTIBase_destructor(void* this)
{
 return 0;
}


// Function: sub_40182b at 0x40182b
int sub_40182b()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40182c
int RTTIDerivedB_destructor(void* this)
{
 free(this);
 return 0;
}


// Function: sub_40184d at 0x40184d
void sub_40184d(void* a0)
{
 RTTIDerivedB_getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40184e
const char* RTTIDerivedB_getType(void)
{
 return "RTTIDerivedB";
}


// Function: sub_401854 at 0x401854
void sub_401854(void)
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux()
{
 struct_0 *v2 = 0;
 struct_0 *ptr;
 unsigned int *v4;
 unsigned int v5 = 0;
 struct_0 *v6;
 struct_0 *p;
 unsigned int v0;

 ptr = v2;
 if (!ptr) return;
 v4 = (unsigned int *)*((int *)&ptr->padding_0[0]);
 if (*((int *)&ptr->padding_0[0]) == 0xffffffff)
 return;
 v0 = v5;
 v6 = (struct_0 *)&ptr->padding_0[0];
 do
 {
 p = v6;
 ((void (*)(void))v4)();
 v4 = (unsigned int *)*((int *)&p->padding_0[4]);
 v6 = (struct_0 *)&p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return;
}


// Function: sub_4018a2 at 0x4018a2
void sub_4018a2(void)
{
}



/* CRT stub function _fini removed by preprocessor */


