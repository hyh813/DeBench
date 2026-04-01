// Angr Decompilation of 5-1_clang_O1_g
// Platform: AARCH64

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Function declarations for C++ operators
void *cpp_operator_new(unsigned long long size);
void *cpp_operator_new_array(unsigned long long size);
void cpp_operator_delete(void *ptr);
void cpp_operator_delete_array(void *ptr);

// Global operator new/delete functions (return pointers)
void *operatornew(unsigned long long size);
void *operatornew_arr(unsigned long long size);
void operatordelete(void *ptr);
void operatordelete_arr(void *ptr);

// CRT stub function declarations
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// C++ runtime functions
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void abort(void);

// C++ exception handling functions
void *__cxa_allocate_exception(unsigned long long size);
void __cxa_throw(void *exception, void *type_info, void *dest);
void *__cxa_begin_catch(void *exception);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void _Unwind_Resume(void);

// Forward declarations for C++ functions
long long _ZN4Base12virtual_funcEi(void* this, int arg_0);

// ARM64 helper functions
int arm64g_calculate_condition(int cond, unsigned long long cc_dep1_formal, unsigned long long cc_dep2_formal, unsigned long long cc_ndep_formal);
int CmpF(unsigned long long a, unsigned long long b);


/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x401630
long long __dollar_x()
{
 return 0;
}


// Function: sub_401644 at 0x401644
void* sub_401644()
{
 return operatornew_arr(16);
}


// Function: __dollar_x_62 at 0x4017c0
extern void __dollar_d_63;
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned long long __dso_handle;

long long __dollar_x_62()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 /* std::ios_base::Init::Init(&__dollar_d_63); */
 v2 = __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, (void *)&__dollar_d_63, (void *)&__dso_handle);
 return v2;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401830 at 0x401830
void sub_401830()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401848 at 0x401848
void sub_401848()
{
 deregister_tm_clones();
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4018bc at 0x4018bc
void sub_4018bc()
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401908 at 0x401908
long long sub_401908()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401914
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x38]
 char v1[15]; // [bp-0x34]
 unsigned long long flag1; // [bp-0x25]
 char result; // [bp-0x15]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 result = 0;
 v0 = 10;
 strncpy((char *)&v1, "Test", 4);
 flag1 = 0;
}


// Function: _Z20test_cpp_constructorv at 0x401964
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 void* v2; // x0
 unsigned int v3; // w8
 unsigned long long i; // x9
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = operatornew_arr(20);
 v3 = 0;
 i = 0;
 do
 {
 *((unsigned int *)((char *)v2 + i)) = v3;
 i += 4;
 v3 += 10;
 } while (i != 20);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operatordelete_arr(v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4019d0
struct Base {
} Base;
struct Derived;
struct MultiDerived;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ((void (*)(void*, int))(*(long long *)((void **)arg_0)))((void *)arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x4019ec
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

extern unsigned long long g_4139a8;
extern struct_0 *g_4139e8;

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 char *v2; // [bp-0x20]
 struct_0 *v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v2 = &v4;
 v3 = (struct_0 *)&g_4139a8;
 v0 = &g_4139e8;
 v1 = 3;
 ((void (*)(void*, int))(*v0))(v3, 5);
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401a5c
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

extern char g_413a30;
extern char g_413a60;

void test_cpp_multiple_inheritance()
{
 struct_0 *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x38]
 struct_0 **v2; // [bp-0x30]
 unsigned int v3; // [bp-0x28]
 char *v4; // [bp-0x20]
 char v5; // [bp+0x0]

 v4 = &v5;
 v0 = (struct_0 *)&g_413a30;
 v2 = (struct_0 **)&g_413a60;
 v1 = 100;
 v3 = 200;
 /* MultiDerived::funcA(&v0); */
 ((void (*)(void*))(*v2))(v0);
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401acc
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern void g_413b38;
extern struct_1 g_413b68;
extern struct_1 *g_413ba0;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x60]
 char v1; // [bp-0x58]
 struct_0 *v2; // [bp-0x50]
 struct_1 **v3; // [bp-0x40]
 unsigned int v4; // [bp-0x38]
 char *v5; // [bp-0x30]
 char v6; // [bp+0x0]

 v5 = &v6;
 v0 = &g_413b38;
 v3 = (struct_1 **)&g_413ba0;
 v2 = (struct_0 *)&g_413b68;
 v4 = 50;
 /* thunk to DiamondDerived::func()(&v3); */
 *((unsigned int *)((char *)&v1 + *((unsigned long long *)((char *)v0 + 24)))) = 100;
 ((void (*)(void*))(*v3))((void*)v3);
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401b54
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401b5c
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401b64
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401b6c
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401b74
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 _Unwind_Resume(); /* do not return */
}


// Function: sub_401ba8 at 0x401ba8
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_401ba8(unsigned long long a0, unsigned int a1)
{
 void *v0;
 void *v1;
 if (a1 != 1)
 {
 v0 = __cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 v1 = __cxa_begin_catch((void*)a0);
 __cxa_rethrow();
 return 0;
}


// Function: sub_401bd0 at 0x401bd0
void sub_401bd0(unsigned long a0, unsigned long a1)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x401c64
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401c6c
extern char g_413d58;
extern void g_413d80;

void test_cpp_rtti()
{
 void* *ptr; // x19
 void* *addr; // x0
 void* v4; // x8
 void* *p; // x20
 char *v6; // x21
 unsigned int result; // w8
 char *v8; // x8
 char *v9; // x0
 void *v2;
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (void**)operatornew(8);
 *(ptr) = &g_413d58;
 addr = (void**)operatornew(8);
 v4 = *(ptr);
 *(addr) = NULL;
 p = addr;
 *(p) = &g_413d80;
 v6 = (char*)v4 + 8;
 v2 = (void*)(*(unsigned long long*)((unsigned long long)*(p) + 8));
 if ((const char*)v2 == "12RTTIDerivedB")
 {
 result = 1;
 }
 else if (*((char *)((unsigned long long)*(p) + 8)) == 42)
 {
 result = 0;
 }
 else if (strcmp((char *)((unsigned long long)*(p) + 8), "12RTTIDerivedB"))
 {
 result = 0;
 }
 else
 {
 result = 1;
 }
 v8 = v6;
 if (*(v8) != 42)
 v9 = v6;
 else
 v9 = v8 + 1;
 strlen(v9);
 {
   void (*destructor)(void*) = (void (*)(void*))(*((unsigned long long**)ptr)[1]);
   if (destructor) { destructor(ptr); }
 }
 {
   void (*destructor)(void*) = (void (*)(void*))(*((unsigned long long**)p)[1]);
   if (destructor) { destructor(p); }
 }
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401e04
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
 unsigned long long field_0;
} struct_2;

extern char __dollar_d_72;
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_4024b3;
extern char g_4024cf;
extern char g_4024eb;
extern char g_402507;
extern char g_402524;
extern char g_402540;
extern char g_40255c;
extern char g_402578;
extern char g_402594;
extern char g_4025b1;
extern char g_4025ce;
extern char g_4025f9;
extern unsigned long long g_4139a8;
extern struct_0 *g_4139e8;
extern char g_413a30;
extern char g_413a60;
extern void g_413b38;
extern struct_1 g_413b68;
extern struct_1 *g_413ba0;

void test_cpp_oo_features()
{
 unsigned int *ptr; // x0
 char *v25; // x19
 unsigned long long v26; // x0
 unsigned int v17; // w8
 unsigned long long i; // x9
 unsigned int v19; // w9
 unsigned int v20; // w8
 unsigned int v21; // w8
 unsigned int v22; // w0
 unsigned long long v0; // [bp-0x68]
 void **v1; // [bp-0x60]
 unsigned long long* v2; // [bp-0x60]
 struct_0 **v4; // [bp-0x60]
 char v5[4]; // [bp-0x5c]
 unsigned int v6; // [bp-0x58]
 void **v7; // [bp-0x50]
 unsigned long long v8; // [bp-0x4d]
 unsigned int v9; // [bp-0x48]
 struct_1 **v10; // [bp-0x40]
 char result; // [bp-0x3d]
 unsigned int v12; // [bp-0x38]
 char *v13; // [bp-0x30]
 char v14; // [bp+0x0]

 v13 = &v14;
 result = 0;
 v4 = (struct_0 **)(void *)0x10;
 strncpy(v5, "Test", 4);
 v8 = 0;
 printf(&__dollar_d_72, strlen((char *)(((unsigned long long)&v4) | 4)) + 4700);
 operatordelete_arr(v4);
 ptr = (unsigned int*)operatornew_arr(20);
 v17 = 0;
 i = 0;
 do
 {
 *((unsigned int *)((char *)ptr + i)) = v17;
 i += 4;
 v17 += 10;
 } while (i != 20);
 v19 = ptr[2];
 v20 = _ZN14LifecycleClass14instance_countE + 1;
 _ZN14LifecycleClass14instance_countE = v20;
 v21 = _ZN14LifecycleClass14instance_countE - 1;
 operatordelete_arr(ptr);
 _ZN14LifecycleClass14instance_countE = v21;
 printf(&g_4024b3, v19 + v20 + 1000 * v21);
 v6 = 3;
 v0 = (unsigned long long)&g_4139a8;
 v4 = &g_4139e8;
 v22 = _ZN4Base12virtual_funcEi((void*)v0, 5);
 printf(&g_4024cf, v22 + (long long)((int (*)(void*, int))(*v4))((void*)v0, 5) + 21);
 v1 = (void **)&g_413a30;
 v7 = (void **)&g_413a60;
 v6 = 100;
 v9 = 200;
  /* non-virtual thunk to MultiDerived::funcB() */
 ((void (*)(void*))(*v7))((void*)v7);
 printf(&g_4024eb, 31);
 v25 = (char*)&v8;
 v2 = (unsigned long long*)&g_413b38;
 v10 = (struct_1 **)g_413ba0;
 v7 = (void **)&g_413b68;
 v12 = 50;
 v26 = /* thunk to DiamondDerived::func() */ 250;
 *((unsigned int *)((char *)&v6 + *(v2 + 3))) = 100;
 ((void (*)(void*))(*(void**)v10))((void*)v25);
 printf(&g_402507, v26 & 4294967295);
 printf(&g_402524, 22);
 printf(&g_402540, 39);
 printf(&g_40255c, 16);
 printf(&g_402578, 85);
 printf(&g_402594, 0);
 printf(&g_4025b1, 703);
 printf(&g_4025ce, 0);
 return;
}


// Function: main at 0x402050
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x402068
long long _ZN4Base12virtual_funcEi(void* this, int arg_0)
{
 return (long long)(arg_0 + 1);
}


// Function: _ZN7Derived12virtual_funcEi at 0x402070
int _ZN7Derived12virtual_funcEi(void* this, int arg_0)
{
 return arg_0 + 2;
}


// Function: _ZN4BaseD2Ev at 0x40207c
void _ZN4BaseD2Ev(void* this)
{
 (void)this;
}


// Function: _ZN12MultiDerivedD2Ev at 0x402080
void _ZN12MultiDerivedD2Ev(void* this)
{
 (void)this;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402084
void _ZN14DiamondDerivedD1Ev(void* this)
{
 (void)this;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402088
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402094
double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4020a0
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4020b4
void _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4020bc
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = (int)ptr[40];
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4020d8
int _ZNK9ContainerIiE3getEi(void* this, int arg_0)
{
 return *((int *)((char *)this + 4 * arg_0));
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4020f8
int _ZNK9ContainerIiE7getSizeEv(void* this)
{
 return *((unsigned int *)((char *)this + 40));
}


// Function: _ZN9ContainerIdEC1Ev at 0x402100
void _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402108
void _ZN9ContainerIdE4pushEd(void* ptr, double arg_0)
{
 unsigned long idx; // x8

 idx = (int)ptr[80];
 if (9 >= (unsigned int)idx)
 {
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 *((unsigned int *)&ptr[80]) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402124
double _ZNK9ContainerIdE3getEi(void* this, int arg_0)
{
 (void)this;
 (void)arg_0;
 double v1 = 0.0; 
 return v1;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402140
int _ZNK9ContainerIdE7getSizeEv(void* this)
{
 return *((unsigned int *)((char *)this + 80));
}


// Function: _ZNK4Base7getNameEv at 0x402148
char *_ZNK4Base7getNameEv(void* this)
{
 return (char*)"Base";
}


// Function: _ZN4BaseD0Ev at 0x402154
void _ZN4BaseD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZNK7Derived7getNameEv at 0x402168
char *_ZNK7Derived7getNameEv(void* this)
{
 return (char*)"Derived";
}


// Function: _ZN7DerivedD0Ev at 0x402174
void _ZN7DerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZN12MultiDerived5funcAEv at 0x402188
void _ZN12MultiDerived5funcAEv(void* this)
{
}


// Function: _ZN12MultiDerivedD0Ev at 0x402190
void _ZN12MultiDerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZN12MultiDerived5funcBEv at 0x4021a4
int _ZN12MultiDerived5funcBEv(void* this)
{
 return 40;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x4021ac
int _ZThn16_N12MultiDerived5funcBEv(void* this)
{
 return 40;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x4021b4
void _ZThn16_N12MultiDerivedD1Ev(void* this)
{
 (void)this;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x4021b8
void _ZThn16_N12MultiDerivedD0Ev(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete((char *)a0 - 16);
}


// Function: _ZN5BaseA5funcAEv at 0x4021d0
int _ZN5BaseA5funcAEv(void* this)
{
 return 50;
}


// Function: _ZN5BaseAD2Ev at 0x4021d8
void _ZN5BaseAD2Ev(void* this)
{
 (void)this;
}


// Function: _ZN5BaseAD0Ev at 0x4021dc
void _ZN5BaseAD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZN5BaseB5funcBEv at 0x4021f0
int _ZN5BaseB5funcBEv(void* this)
{
 return 60;
}


// Function: _ZN5BaseBD2Ev at 0x4021f8
void _ZN5BaseBD2Ev(void* this)
{
 (void)this;
}


// Function: _ZN5BaseBD0Ev at 0x4021fc
void _ZN5BaseBD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZN7MiddleA4funcEv at 0x402210
int _ZN7MiddleA4funcEv(void* this)
{
 return 150;
}


// Function: _ZN7MiddleAD1Ev at 0x402228
void _ZN7MiddleAD1Ev(void* this)
{
 (void)this;
}


// Function: _ZN7MiddleAD0Ev at 0x40222c
void _ZN7MiddleAD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402240
int thunk_to_MiddleA_func(void* *a0)
{
 long long *v0; // x8

 v0 = (long long *)((char *)a0 + ((long long *)a0)[3]);
 return *((int *)(8 + (char *)v0 + v0[3])) + 150;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x402264
void thunk_to_MiddleA_destructor(void* this)
{
 (void)this;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x402268
void thunk_to_MiddleA_destructor0(void* *a0)
{
 operatordelete((void*)((char *)a0 + ((long long *)a0)[3]));
}


// Function: _ZN7MiddleB4funcEv at 0x402288
int _ZN7MiddleB4funcEv(void* this)
{
 return 200;
}


// Function: _ZN7MiddleBD1Ev at 0x4022a0
void _ZN7MiddleBD1Ev(void* this)
{
 (void)this;
}


// Function: _ZN7MiddleBD0Ev at 0x4022a4
void _ZN7MiddleBD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x4022b8
int thunk_to_MiddleB_func(void* *a0)
{
 long long *v0; // x8

 v0 = (long long *)((char *)a0 + ((long long *)a0)[3]);
 return *((int *)(8 + (char *)v0 + v0[3])) + 200;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x4022dc
void thunk_to_MiddleB_destructor(void* this)
{
 (void)this;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x4022e0
void thunk_to_MiddleB_destructor0(void* *a0)
{
 operatordelete((void*)((char *)a0 + ((long long *)a0)[3]));
}


// Function: _ZN14DiamondDerived4funcEv at 0x402300
int _ZN14DiamondDerived4funcEv(void* this)
{
 return 250;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402318
void _ZN14DiamondDerivedD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x40232c
int nonvirtual_thunk_to_DiamondDerived_func(void* a0)
{
 long long offset = *((long long*)((char*)a0 + 16));
 offset = *((long long*)((char*)offset - 24));
 return *((int *)((char *)a0 - 8 + offset)) + 250;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402344
void _ZThn16_N14DiamondDerivedD1Ev(void* this)
{
 (void)this;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402348
void _ZThn16_N14DiamondDerivedD0Ev(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete((char *)a0 - 16);
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402360
long long thunk_to_DiamondDerived_func(void* *a0)
{
 long long *v0 = (long long *)a0;
 long long *v1 = (long long *)((char *)a0 + v0[3]);
 return *((int *)(8 + (char *)v1 + v1[3])) + 250;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402384
void thunk_to_DiamondDerived_destructor(void* this)
{
 (void)this;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402388
void thunk_to_DiamondDerived_destructor0(void* *a0)
{
 operatordelete((void*)((char *)a0 + ((long long *)a0)[3]));
}


// Function: _ZN11VirtualBase4funcEv at 0x4023a8
int _ZN11VirtualBase4funcEv(void* this)
{
 return 300;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4023b0
void _ZN11VirtualBaseD2Ev(void* this)
{
}


// Function: _ZN11VirtualBaseD0Ev at 0x4023b4
void _ZN11VirtualBaseD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4023c8
void _ZN12RTTIDerivedAD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4023dc
int _ZNK12RTTIDerivedA7getTypeEv(void* this)
{
 return 42;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4023e4
void _ZN8RTTIBaseD2Ev(void* this)
{
 (void)this;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4023e8
void _ZN12RTTIDerivedBD0Ev(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4023fc
int _ZNK12RTTIDerivedB7getTypeEv(void* this)
{
 return 43;
}



/* CRT stub function _fini removed by preprocessor */


