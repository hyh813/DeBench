// Angr Decompilation of 5-1_clang_O1_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* C++ runtime function declarations */
void* operator_new_array(unsigned int size);
void operator_delete_array(void* ptr);
void* operator_new(unsigned int size);
void operator_delete(void* ptr);

/* C++ runtime function implementations */
void* operator_new(unsigned int size) {
    return malloc(size);
}

void operator_delete(void* ptr) {
    free(ptr);
}

void* operator_new_array(unsigned int size) {
    return malloc(size);
}

void operator_delete_array(void* ptr) {
    free(ptr);
}

/* C++ exception handling declarations */
void* __cxa_allocate_exception(unsigned int size);
void __cxa_throw(void* exception, void* type_info, void* destructor);
void __cxa_begin_catch(void* exception);
void __cxa_end_catch(void* exception);
void __cxa_rethrow(void* exception);
void _Unwind_Resume(void* exception);

/* C++ exception handling dummy implementations */
void* __cxa_allocate_exception(unsigned int size) {
    return malloc(size);
}

void __cxa_throw(void* exception, void* type_info, void* destructor) {
    /* Dummy implementation */
}

void __cxa_begin_catch(void* exception) {
    /* Dummy implementation */
}

void __cxa_end_catch(void* exception) {
    /* Dummy implementation */
}

void __cxa_rethrow(void* exception) {
    /* Dummy implementation */
}

void _Unwind_Resume(void* exception) {
    /* Dummy implementation */
}

/* C++ atexit declaration */
int __cxa_atexit(void* destructor, void* object, void* dso_handle);

/* DSO handle */
void* __dso_handle = NULL;

/* Function declarations for virtual functions */
int Base_virtual_func(void* this, int arg);
void Derived_virtual_func(void* this, int arg);
int MultiDerived_funcA(void* this);
void MultiDerived_funcB(void* this);
int BaseA_destructor(void* this);
int BaseB_destructor(void* this);
int MultiDerived_destructor(void* this);
int DiamondDerived_destructor(void* this);
int Base_deleting_destructor(void* this);
int Derived_deleting_destructor(void* this);
int MultiDerived_deleting_destructor(void* this);
int DiamondDerived_deleting_destructor(void* this);
unsigned int __x86_get_pc_thunk_dx(void);
unsigned int __x86_get_pc_thunk_di(int a0, int a1);

/* CRT function declarations */
void frame_dummy(void);
void _start(int argc, char** argv, char** envp) __attribute__((noreturn));
unsigned int* deregister_tm_clones(void);
void register_tm_clones(void);

/* Diamond inheritance and thunk function declarations */
int DiamondDerived_func_thunk(void* a0);
void MiddleA_func(void* this);
void MiddleB_func(void* this);
void DiamondDerived_func(void* this);
void VirtualBase_func(void* this);
int RTTIBase_destructor(void* this);
int RTTIDerivedA_deleting_destructor(void* this);
void RTTIDerivedA_getType(void* this);
int RTTIDerivedB_deleting_destructor(void* this);
void RTTIDerivedB_getType(void* this);

/* C++ I/O declarations */
struct ios_base_Init {
    void* vtable;
};
void std_ios_base_Init_Init(struct ios_base_Init* init);
void std_ios_base_Init_D1Ev(struct ios_base_Init* init);

/* C++ I/O implementations */
void std_ios_base_Init_Init(struct ios_base_Init* init)
{
    /* Dummy implementation */
}

void std_ios_base_Init_D1Ev(struct ios_base_Init* init)
{
    /* Dummy implementation */
}

void _ZNSt8ios_base4InitD1Ev(struct ios_base_Init* init)
{
    /* Dummy implementation */
}

/* Forward function declarations for test functions */
void test_cpp_member_func(void);
void test_cpp_constructor(void);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_exception(void);
void test_cpp_smart_ptr(void);
void test_cpp_rtti(void);
void test_cpp_oo_features(void);
void call_virtual_func_wrapper(void);

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    char padding_0[1000];
} struct_0;

typedef void (*init_func_t)(void);

extern struct_0 *g_405ff4;
extern init_func_t g_405ff4_func[];
extern unsigned int __do_global_ctors_aux(void);

extern unsigned int __do_global_ctors_aux(void);

void _init(void)
{
 frame_dummy();
 __do_global_ctors_aux();
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


// Function: _GLOBAL__sub_I_5_1_cpp at 0x401170
extern void _ZNSt8ios_base4InitD1Ev(struct ios_base_Init*);
struct ios_base_Init _ZStL8__ioinit;
extern void* __dso_handle;

int _GLOBAL__sub_I_5_1_cpp()
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 std_ios_base_Init_Init(&_ZStL8__ioinit);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 /* _start() is the entry point, should not be called from user code */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
}


// Function: __x86.get_pc_thunk_bx at 0x4011e0
void __x86_get_pc_thunk_bx(void)
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

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void register_tm_clones()
{
 __x86_get_pc_thunk_dx();
 return;
}


// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux(void)
{
 deregister_tm_clones();
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401319
unsigned int __x86_get_pc_thunk_dx(void)
{
 unsigned int v0 = 0; // eax
 return v0;
}


// Function: __x86.get_pc_thunk_di at 0x40131d
unsigned int __x86_get_pc_thunk_di(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401321 at 0x401321
void sub_401321()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401330
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 char v2; // [bp-0x24]
 unsigned int result; // [bp-0xd]
 char flag1; // [bp-0x9]

 strncpy(v1, "Test", 4);
 memset(&v2, 0, 20);
 result = 0;
 flag1 = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: sub_4013a3 at 0x4013a3
int sub_4013a3()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4013b0
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int i; // esi
 unsigned int *ptr; // ecx

 i = 0;
 ptr = operator_new_array(20);
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: sub_401414 at 0x401414
void sub_401414()
{
 call_virtual_func_wrapper();
 return;
}


typedef struct Base {
 void** vtable;
} Base;

typedef int (*virtual_func_t)(void*, int);

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 virtual_func_t vfunc = (virtual_func_t)(arg_0->vtable[0]);
 vfunc(arg_0, arg_1);
 return;
}

void call_virtual_func_wrapper()
{
 Base* obj = (Base*)&g_405ce4;
 call_virtual_func(obj, 5);
}


// Function: sub_401445 at 0x401445
void sub_401445()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401450

void test_cpp_virtual_func()
{
 void **v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 void* (*v2)(void*, int); // [bp-0xc]

 v2 = (void* (*)(void*, int))&g_405ce4;
 v0 = (void **)&g_405d04;
 v1 = 3;
 v2((void*)v2, 5);
 (*((void* (*)(void*, int))v0))(v0, 5);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4014b0

void test_cpp_multiple_inheritance()
{
 void* v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 void **v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v0 = &g_405d28;
 v2 = (void **)&g_405d40;
 v1 = 100;
 v3 = 200;
 MultiDerived_funcA(v0);
 (*((void* (*)(void*))v2))(v2);
 return;
}


// Function: sub_40150e at 0x40150e
void sub_40150e()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401510

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x24]
 char v1; // [bp-0x20]
 void* v2; // [bp-0x1c]
 void **v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // local variable

 v0 = &g_405db0;
 v3 = (void **)&g_405de4;
 v2 = &g_405dc8;
 v4 = 50;
 DiamondDerived_func_thunk(v3);
 ((unsigned int*)((char*)v0 + 12))[0] = 100;
 (*((void* (*)(void*))v3))(v3);
 return;
}


// Function: sub_401578 at 0x401578
void sub_401578()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401580
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401586 at 0x401586
void sub_401586()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401590
void test_cpp_template_func()
{
 return;
}


// Function: sub_401596 at 0x401596
void sub_401596()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4015a0
void test_cpp_template_class()
{
 return;
}


// Function: sub_4015a6 at 0x4015a6
void sub_4015a6()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4015b0
void test_cpp_lambda()
{
 return;
}


// Function: sub_4015b6 at 0x4015b6
void sub_4015b6()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4015c0
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3; // edx

 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch(v2);
 __cxa_end_catch(v2);
 return;
}


// Function: sub_401601 at 0x401601
int sub_401601()
{
 unsigned int result = 0; // edx
 unsigned int v3 = 0; // eax
 unsigned int v5 = 0; // ebx

 if (result != 1)
 {
 if (result != 1)
 {
 __cxa_begin_catch((void*)v3);
 __cxa_end_catch((void*)v3);
 __cxa_throw(__cxa_allocate_exception(1), (void*)(v5 - 848), 0);
 }
 }
 __cxa_begin_catch((void*)v3);
 __cxa_rethrow((void*)v3);
 return 0;
}


// Function: sub_40161f at 0x40161f
void sub_40161f()
{
 __cxa_end_catch();
}


// Function: sub_4016a6 at 0x4016a6
void sub_4016a6()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4016b0
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4016b6 at 0x4016b6
void sub_4016b6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4016c0
typedef struct struct_4 {
 char padding_0[4];
 struct struct_5 *field_4;
} struct_4;

typedef struct struct_5 {
 unsigned int field_0;
} struct_5;

unsigned int _ZTI12RTTIDerivedA;
unsigned int _ZTI12RTTIDerivedB;
char _ZTS12RTTIDerivedB[32];
char g_405ecc[32];
char g_405ee0[32];
char _ZTIi = 0;

void test_cpp_rtti()
{
 void* *ptr; // edi
 void* *p; // ebp
 char *v8; // eax
 char result; // al
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 char *v2; // [bp-0x1c]
 void* *v3; // [bp-0x18]
 struct_4 **v4; // [bp-0x14]

 ptr = operator_new(4);
 *(ptr) = &g_405ecc;
 p = operator_new(4);
 *(p) = &g_405ee0;
 v2 = *((char **)(((int **)*(ptr))[4] + 1));
 v8 = *((char **)(((int **)*(p))[4] + 1));
 if (v8 == &_ZTS12RTTIDerivedB)
 {
 result = 1;
 }
 else if (*(v8) == 42)
 {
 result = 0;
 }
 else
 {
 result = !strcmp(v8, &_ZTS12RTTIDerivedB);
 }
 v1 = 0;
 v0 = &_ZTI12RTTIDerivedA;
 v3 = ptr;
 v1 = 0;
 v0 = &_ZTI12RTTIDerivedB;
 strlen(&v2[*(v2) == 42]);
 ((*(v3))[4])(v3);
 (*(v4)->field_4)(v4);
 return;
}


// Function: sub_40180d at 0x40180d
void sub_40180d()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401810

extern unsigned int _ZN14LifecycleClass14instance_countE;
unsigned int _ZN14LifecycleClass14instance_countE = 0;
char g_403081[32] = "Testing member function\n";
char g_40309f[32] = "Testing constructor\n";
char g_4030bb[32] = "Testing virtual function\n";
char g_4030d7[32] = "Testing multiple inheritance\n";
char g_4030f3[32] = "Testing diamond inheritance\n";
char g_403110[32] = "Testing operator overload\n";
char g_40312c[32] = "Testing template function\n";
char g_403148[32] = "Testing template class\n";
char g_403164[32] = "Testing lambda\n";
char g_403180[32] = "Testing exception\n";
char g_40319d[32] = "Testing smart pointer\n";
char g_4031ba[32] = "Testing RTTI\n";
char g_4031e5[32] = "=== C++ OO Features Test ===\n";
void *g_405ce4 = NULL;
void *g_405d04 = NULL;
unsigned int g_405d28 = 0;
void *g_405d40 = NULL;
char g_405db0[32] = {0};
unsigned int g_405dc8 = 0;
void *g_405de4 = NULL;

void test_cpp_oo_features()
{
 unsigned int i; // esi
 unsigned int *v11; // eax
 unsigned int *ptr; // ecx
 void **v0; // [bp-0x3c], Other Possible Types: void*, unsigned int
 unsigned int v1; // [bp-0x38], Other Possible Types: unsigned int
 void **v2; // [bp-0x34], Other Possible Types: char, unsigned int
 unsigned int v3; // [bp-0x30]
 void **v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int result; // [bp-0x1d]
 char flag1; // [bp-0x19]
 void **v6; // renamed from v8 to avoid conflicts

 puts(&g_4031e5);
 strncpy((char*)&v1, "Test", 4);
 memset((void*)&v2, 0, 20);
 result = 0;
 flag1 = 0;
 v0 = (void**)10;
 strlen((char*)&v1);
 printf(&g_403081);
 i = 0;
 v11 = operator_new_array(20);
 ptr = v11;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(v11);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(&g_40309f);
 v6 = (void **)&g_405ce4;
 v0 = (void **)&g_405d04;
 v1 = 3;
 ((int (*)(void*, int))(*v6))(*v6, 5);
 ((int (*)(void*, int))(*v0))(*v0, 5);
 printf(&g_4030bb);
 v0 = (void **)&g_405d28;
 v2 = (void **)&g_405d40;
 v1 = 100;
 v3 = 200;
 (*((void* (*)(void*))v2))(v2);
 printf(&g_4030d7);
 v0 = (void **)&g_405db0;
 v4 = (void **)&g_405de4;
 v2 = (void **)&g_405dc8;
 v5 = 50;
 (*((void* (*)(void*))v4))(v4);
 ((unsigned int*)((char*)v1 + (unsigned int)v0 + 12))[0] = 100;
 (*((void* (*)(void*))v4))(v4);
 printf(&g_4030f3);
 printf(&g_403110);
 printf(&g_40312c);
 printf(&g_403148);
 printf(&g_403164);
 test_cpp_exception();
 printf(&g_403180);
 printf(&g_40319d);
 test_cpp_rtti();
 printf(&g_4031ba);
 return;
}


// Function: sub_401aa9 at 0x401aa9
int sub_401aa9()
{
 return (int)main();
}


// Function: main at 0x401ab0
int main(int argc, char** argv, char** envp)
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned int a0, unsigned int a1)
{
 Base_virtual_func((void*)a0, (int)a1);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401ad0
int Base_virtual_func(void* this, int arg)
{
 return arg + 1;
}


// Function: sub_401ad8 at 0x401ad8
void sub_401ad8(unsigned int a0, unsigned int a1)
{
 Derived_virtual_func((void*)a0, (int)a1);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401ae0
int Derived_virtual_func(void* this, int arg_0)
{
 return arg_0 + 2;
}


// Function: sub_401aed at 0x401aed
void sub_401aed()
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x401af0
int Base_destructor(void* this)
{
 return 0;
}


// Function: sub_401af1 at 0x401af1
void sub_401af1()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x401b00
int MultiDerived_destructor(void* this)
{
 return 0;
}


// Function: sub_401b01 at 0x401b01
void sub_401b01()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401b10
int DiamondDerived_destructor(void* this)
{
 return 0;
}


// Function: sub_401b11 at 0x401b11
void sub_401b11(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401b20
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: sub_401b2e at 0x401b2e
void sub_401b2e(unsigned int a0)
{
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401b30
// Function: sub_401b41 at 0x401b41
void sub_401b41(unsigned int a0, unsigned int a1)
{
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401b50
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // edx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: sub_401b63 at 0x401b63
void sub_401b63(unsigned int a0)
{
}


// Function: _ZN9ContainerIiEC2Ev at 0x401b70
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&((char *)ptr)[40]) = 0;
 return;
}


// Function: sub_401b7c at 0x401b7c
void sub_401b7c(unsigned int a0)
{
}


// Function: _ZN9ContainerIiE4pushEi at 0x401b80
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = (int)((char *)ptr)[40];
 if (index <= 9)
 {
 *((unsigned int *)&((char *)ptr)[40]) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0, unsigned int a1)
{
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ba0
int Container_int_get(void* this, int arg_0)
{
 return 0;
}


// Function: sub_401bb7 at 0x401bb7
void sub_401bb7(unsigned int a0)
{
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401bc0
int Container_int_getSize(void* this)
{
 return 0;
}


// Function: sub_401bc8 at 0x401bc8
void sub_401bc8(unsigned int a0)
{
}


// Function: _ZN9ContainerIdEC1Ev at 0x401bd0
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&((char *)ptr)[80]) = 0;
 return;
}


// Function: sub_401bdc at 0x401bdc
void sub_401bdc(unsigned int a0)
{
}


// Function: _ZN9ContainerIdE4pushEd at 0x401be0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int idx; // ecx

 
 idx = (int)((char *)ptr)[80];
 if (idx <= 9)
 {
 *((unsigned int *)&((char *)ptr)[80]) = idx + 1;
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 }
 return;
}


// Function: sub_401bfe at 0x401bfe
void sub_401bfe(void* ptr, double arg_0)
{
 Container_double_push(ptr, arg_0);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401c00
double Container_double_get(void* this, int arg_0)
{
 return 0.0;
}


// Function: sub_401c19 at 0x401c19
void sub_401c19(unsigned int a0)
{
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401c20
int Container_double_getSize(void* this)
{
 return 0;
}


// Function: sub_401c28 at 0x401c28
void sub_401c28()
{
}


// Function: _ZNK4Base7getNameEv at 0x401c30
int Base_getName(void* this)
{
 return 0;
}


// Function: sub_401c43 at 0x401c43
int sub_401c43()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401c50
int Base_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_401c71 at 0x401c71
void sub_401c71()
{
}


// Function: _ZNK7Derived7getNameEv at 0x401c80
int Derived_getName(void* this)
{
 return 0;
}


// Function: sub_401c93 at 0x401c93
int sub_401c93()
{
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x401ca0
int Derived_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_401cc1 at 0x401cc1
void sub_401cc1()
{
}


// Function: _ZN12MultiDerived5funcAEv at 0x401cd0
int MultiDerived_funcA(void* this)
{
 return 30;
}


// Function: sub_401cd6 at 0x401cd6
int sub_401cd6()
{
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401ce0
int MultiDerived_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_401d01 at 0x401d01
void sub_401d01()
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401d10
int MultiDerived_funcB(void* this)
{
 return 0;
}


// Function: sub_401d16 at 0x401d16
int sub_401d16()
{
 return 0;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401d20
unsigned int MultiDerived_funcB_thunk()
{
 return 40;
}


// Function: sub_401d26 at 0x401d26
void sub_401d26()
{
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401d30
void MultiDerived_destructor_thunk()
{
 return;
}


// Function: sub_401d31 at 0x401d31
int sub_401d31()
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401d40
unsigned int MultiDerived_deleting_destructor_thunk(void* a0)
{
 return operator_delete(a0 - 8);
}


// Function: sub_401d64 at 0x401d64
void sub_401d64()
{
}


// Function: _ZN5BaseA5funcAEv at 0x401d70
int BaseA_funcA(void* this)
{
 return 0;
}


// Function: sub_401d76 at 0x401d76
void sub_401d76()
{
}


// Function: _ZN5BaseAD2Ev at 0x401d80
int BaseA_destructor(void* this)
{
 return 0;
}


// Function: sub_401d81 at 0x401d81
int sub_401d81()
{
 return 0;
}


// Function: _ZN5BaseAD0Ev at 0x401d90
int BaseA_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_401db1 at 0x401db1
void sub_401db1()
{
}


// Function: _ZN5BaseB5funcBEv at 0x401dc0
int BaseB_funcB(void* this)
{
 return 0;
}


// Function: sub_401dc6 at 0x401dc6
void sub_401dc6()
{
}


// Function: _ZN5BaseBD2Ev at 0x401dd0
int BaseB_destructor(void* this)
{
 return 0;
}


// Function: sub_401dd1 at 0x401dd1
int sub_401dd1()
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x401de0
int BaseB_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_401e01 at 0x401e01
void sub_401e01(unsigned int a0)
{
 MiddleA_func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401e10
int MiddleA_func(void* this)
{
 return 0;
}


// Function: sub_401e23 at 0x401e23
void sub_401e23()
{
}


// Function: _ZN7MiddleAD1Ev at 0x401e30
int MiddleA_destructor(void* this)
{
 return 0;
}


// Function: sub_401e31 at 0x401e31
int sub_401e31()
{
 return 0;
}


// Function: _ZN7MiddleAD0Ev at 0x401e40
int MiddleA_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_401e61 at 0x401e61
void sub_401e61(unsigned int a0)
{
 MiddleA_func(0);
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401e70
int thunk_to_MiddleA_func(void** a0)
{
 return 150 + *((int *)(4 + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)) + (char *)a0 + (*(a0))[12]));
}


// Function: sub_401e8c at 0x401e8c
void sub_401e8c()
{
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401e90
void MiddleA_destructor_thunk()
{
 return;
}


// Function: sub_401e91 at 0x401e91
int sub_401e91()
{
 return 0;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401ea0
unsigned int MiddleA_deleting_destructor_thunk(void** a0)
{
 return operator_delete((char *)a0 + (*(a0))[16]);
}


// Function: sub_401ec6 at 0x401ec6
void sub_401ec6(unsigned int a0)
{
 MiddleB_func(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401ed0
int MiddleB_func(void* this)
{
 return 0;
}


// Function: sub_401ee3 at 0x401ee3
void sub_401ee3()
{
}


// Function: _ZN7MiddleBD1Ev at 0x401ef0
int MiddleB_destructor(void* this)
{
 return 0;
}


// Function: sub_401ef1 at 0x401ef1
int sub_401ef1()
{
 return 0;
}


// Function: _ZN7MiddleBD0Ev at 0x401f00
int MiddleB_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_401f21 at 0x401f21
void sub_401f21(unsigned int a0)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401f30
int thunk_to_MiddleB_func(void** a0)
{
 return 200 + *((int *)(4 + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)) + (char *)a0 + (*(a0))[12]));
}


// Function: sub_401f4c at 0x401f4c
void sub_401f4c()
{
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x401f50
void MiddleB_destructor_thunk()
{
 return;
}


// Function: sub_401f51 at 0x401f51
int sub_401f51()
{
 return 0;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x401f60
unsigned int MiddleB_deleting_destructor_thunk(void** a0)
{
 return operator_delete((char *)a0 + (*(a0))[16]);
}


// Function: sub_401f86 at 0x401f86
void sub_401f86(unsigned int a0)
{
}


// Function: _ZN14DiamondDerived4funcEv at 0x401f90
int DiamondDerived_func(void* this)
{
 return 0;
}


// Function: sub_401fa3 at 0x401fa3
int sub_401fa3()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401fb0
int DiamondDerived_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_401fd1 at 0x401fd1
void sub_401fd1(unsigned int a0)
{
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401fe0
int DiamondDerived_func_thunk(void* a0)
{
 return 250 + *((int *)(-4 + (char *)a0 + *((int *)((int)a0[8] - 12))));
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4()
{
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x402000
void DiamondDerived_destructor_thunk()
{
 return;
}


// Function: sub_402001 at 0x402001
int sub_402001()
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x402010
unsigned int DiamondDerived_deleting_destructor_thunk(void* a0)
{
 return operator_delete(a0 - 8);
}


// Function: sub_402034 at 0x402034
void sub_402034(unsigned int a0)
{
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x402040
int DiamondDerived_func_vtable_thunk()
{
 void* *v1; // eax
 void* *v0; // [bp+0x4]

 v1 = v0;
 return 250 + *((int *)(4 + *((int *)(*((int *)((char *)v1 + (*(v1))[12])) - 12)) + (char *)v1 + (*(v1))[12]));
}


// Function: sub_40205c at 0x40205c
void sub_40205c()
{
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x402060
void DiamondDerived_vtable_destructor_thunk()
{
 return;
}


// Function: sub_402061 at 0x402061
int sub_402061()
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x402070
unsigned int DiamondDerived_vtable_deleting_destructor_thunk(void** a0)
{
 return operator_delete((char *)a0 + (*(a0))[16]);
}


// Function: sub_402096 at 0x402096
void sub_402096()
{
}


// Function: _ZN11VirtualBase4funcEv at 0x4020a0
int VirtualBase_func(void* this)
{
 return 0;
}


// Function: sub_4020a6 at 0x4020a6
void sub_4020a6()
{
}


// Function: _ZN11VirtualBaseD2Ev at 0x4020b0
int VirtualBase_destructor(void* this)
{
 return 0;
}


// Function: sub_4020b1 at 0x4020b1
int sub_4020b1()
{
 return 0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4020c0
int VirtualBase_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_4020e1 at 0x4020e1
int sub_4020e1()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4020f0
int RTTIDerivedA_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_402111 at 0x402111
void sub_402111()
{
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402120
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: sub_402126 at 0x402126
void sub_402126()
{
}


// Function: _ZN8RTTIBaseD2Ev at 0x402130
int RTTIBase_destructor(void* this)
{
 return 0;
}


// Function: sub_402131 at 0x402131
int sub_402131()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402140
int RTTIDerivedB_deleting_destructor(void* this)
{
 operator_delete(this);
 return;
}


// Function: sub_402161 at 0x402161
void sub_402161()
{
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402170
int RTTIDerivedB_getType(void* this)
{
 return 0;
}


// Function: sub_402176 at 0x402176
void sub_402176()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef unsigned int (*ctor_func_t)(void);

unsigned int __do_global_ctors_aux(void)
{
 __x86_get_pc_thunk_dx();
 return 4294967295;
}


// Function: sub_4021c2 at 0x4021c2
void sub_4021c2()
{
}



/* CRT stub function _fini removed by preprocessor */


