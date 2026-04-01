// Angr Decompilation of 5-1_clang_O1_no_g
// Platform: AARCH64


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Using malloc/free instead of C++ operators for C compatibility
extern void *malloc(unsigned long);
extern void free(void *);
extern int __cxa_atexit(void *arg0, void *arg1, void *arg2);
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_throw(void *arg0, void *arg1, void *arg2);
extern void *__cxa_begin_catch(void *);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void *);

// C++ operator declarations - using regular function names for C compatibility
void *cpp_operator_new(unsigned long);
void *cpp_operator_new_array(unsigned long);
void cpp_operator_delete(void *);
void cpp_operator_delete_array(void *);
#define operator new cpp_operator_new
#define operator new[] cpp_operator_new_array
#define operator delete cpp_operator_delete
#define operator delete[] cpp_operator_delete_array
#define delete cpp_operator_delete
#define delete[] cpp_operator_delete_array

typedef struct {
    unsigned long long field_0;
} std_ios_base_Init;

// Forward declarations
struct Base {
    unsigned long long field_0;
};

struct Derived {
    unsigned long long field_0;
};

struct MultiDerived {
    unsigned long long field_0;
};
// Forward declarations for all classes
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIDerivedA;
struct RTTIBase;
struct RTTIDerivedB;

// Forward declarations for all virtual function wrappers
long long Base_virtual_func(void *this_ptr, int arg);
long long Derived_virtual_func(void *this_ptr, int arg);
int Base_destructor(void *this_ptr);
int Derived_destructor(void *this_ptr);
int MultiDerived_destructor(void *this_ptr);
int DiamondDerived_destructor(void *this_ptr);
long long MultiDerived_funcA(void *this_ptr);
void MultiDerived_funcB(void *this_ptr);
long long non_virtual_thunk_to_MultiDerived_funcB(void);
long long non_virtual_thunk_to_MultiDerived_destr(void);
int non_virtual_thunk_to_MultiDerived_destr_v2(void *a0);
void BaseA_funcA(void *this_ptr);
int BaseA_destructor(void *this_ptr);
void BaseB_funcB(void *this_ptr);
int BaseB_destructor(void *this_ptr);
void MiddleA_func(void *this_ptr);
int MiddleA_destructor(void *this_ptr);
long long thunk_to_MiddleA_func(void **a0);
long long thunk_to_MiddleA_destruct(void);
int thunk_to_MiddleA_destruct_v2(void **a0);
void MiddleB_func(void *this_ptr);
int MiddleB_destructor(void *this_ptr);
int thunk_to_MiddleB_func(void **a0);
long long thunk_to_MiddleB_destruct(void);
int thunk_to_MiddleB_destruct_v2(void **a0);
void DiamondDerived_func(void *this_ptr);
int DiamondDerived_destructor(void *this_ptr);
int non_virtual_thunk_to_DiamondDerived_func(void *a0);
long long non_virtual_thunk_to_DiamondDerived_destr(void);
int non_virtual_thunk_to_DiamondDerived_destr_v2(void *a0);
long long thunk_to_DiamondDerived_func(void);
long long thunk_to_DiamondDerived_destruct(void);
int thunk_to_DiamondDerived_destruct_v2(void **a0);
void VirtualBase_func(void *this_ptr);
int VirtualBase_destructor(void *this_ptr);
int RTTIDerivedA_destructor(void *this_ptr);
void RTTIDerivedA_getType(void *this_ptr);
int RTTIBase_destructor(void *this_ptr);
int RTTIDerivedB_destructor(void *this_ptr);
void RTTIDerivedB_getType(void *this_ptr);

// Forward declarations for thunk functions
long long non_virtual_thunk_to_MultiDerived_funcB(void*);
long long non_virtual_thunk_to_MultiDerived_funcB(void);
long long thunk_to_DiamondDerived_func(void);

// Stub functions for CRT
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);
extern void abort(void);



// Function: __dollar_x at 0x401630
extern unsigned long long g_413ff8;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto g_413ff8;
}


// Function: sub_401644 at 0x401644
void* sub_401644(unsigned int v0)
{
 return (void*)operator new[](v0);
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
 std_ios_base_Init(&__dollar_d_63);
 v2 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &__dollar_d_63, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &__dollar_d_63, &__dso_handle);
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
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4018bc at 0x4018bc
void sub_4018bc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401908 at 0x401908
long long sub_401908()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
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
 strncpy(&v1, "Test", 4);
 flag1 = 0;
 strlen((char*)&v0 + 4);
 return;
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
 v2 = operator new[](20);
 v3 = 0;
 i = 0;
 do
 {
 *((unsigned int *)((char *)v2 + i)) = v3;
 i += 4;
 v3 += 10;
 } while (i != 20);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete[](v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4019d0
void call_virtual_func(struct Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 // Call virtual function via vtable
 (*(long long *)*(long long *)arg_0)(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4019ec
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

struct Base {
    unsigned long long field_0;
};

extern unsigned long long g_4139a8;
extern struct_0 *g_4139e8;

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 char *v2; // [bp-0x20]
 unsigned long long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v2 = &v4;
 v3 = &g_4139a8;
 v0 = &g_4139e8;
 v1 = 3;
 Base_virtual_func(&v3, 5);
 (*(v0))(&v0, 5);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401a5c
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

extern unsigned long long g_413a30;
extern struct_0 *g_413a60;

void test_cpp_multiple_inheritance()
{
 unsigned long long v0; // [bp-0x40]
 unsigned int v1; // [bp-0x38]
 struct_0 **v2; // [bp-0x30]
 unsigned int v3; // [bp-0x28]
 char *v4; // [bp-0x20]
 char v5; // [bp+0x0]

 v4 = &v5;
 v0 = &g_413a30;
 v2 = &g_413a60;
 v1 = 100;
 v3 = 200;
 MultiDerived::funcA(&v0);
 (*(v2))(&v2);
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401acc
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

extern void g_413b38;
extern unsigned long long g_413b68;
extern struct_0 *g_413ba0;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x60]
 char v1; // [bp-0x58]
 unsigned long long v2; // [bp-0x50]
 struct_0 **v3; // [bp-0x40]
 unsigned int v4; // [bp-0x38]
 char *v5; // [bp-0x30]
 char v6; // [bp+0x0]

 v5 = &v6;
 v0 = &g_413b38;
 v3 = &g_413ba0;
 v2 = &g_413b68;
 v4 = 50;
 thunk_to_DiamondDerived_func()(&v3);
 *((unsigned int *)&(&v1)[v0[24]]) = 100;
 (*(v3))(&v3);
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
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 _Unwind_Resume(__cxa_throw(ptr, &_ZTIi, 0)); /* do not return */
}


// Function: sub_401ba8 at 0x401ba8
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_401ba8(unsigned long long a0, unsigned int a1)
{
 if (a1 != 1)
 {
 if (a1 != 1)
 goto LABEL_0x401c5c;
 __cxa_end_catch(__cxa_begin_catch(a0));
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_rethrow(__cxa_begin_catch(a0));
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
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = operator new(8);
 *(ptr) = &g_413d58;
 addr = operator new(8);
 v4 = *(ptr);
 *(addr) = NULL;
 p = addr;
 *(p) = &g_413d80;
 v6 = *((long long *)((long long)v4[8] + 8));
 if (*((long long *)((long long)(*(p))[8] + 8)) == "12RTTIDerivedB")
 {
 result = 1;
 }
 else if (*((char *)*((long long *)((long long)(*(p))[8] + 8))) == 42)
 {
 result = 0;
 }
 else if (strcmp(*((long long *)((long long)(*(p))[8] + 8)), "12RTTIDerivedB"))
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
 (long long)(*(ptr))[8](ptr);
 (long long)(*(p))[8](p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401e04
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

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
extern char g_413b68;
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
 unsigned long v1; // [bp-0x60]
 void* v2; // [bp-0x60]
 struct_0 **v4; // [bp-0x60]
 char v5[4]; // [bp-0x5c]
 unsigned int v6; // [bp-0x58]
 unsigned long v7; // [bp-0x50]
 unsigned long long v8; // [bp-0x4d]
 unsigned int v9; // [bp-0x48]
 struct_1 **v10; // [bp-0x40]
 char result; // [bp-0x3d]
 unsigned int v12; // [bp-0x38]
 char *v13; // [bp-0x30]
 char v14; // [bp+0x0]

 v13 = &v14;
 puts(&g_4025f9);
 result = 0;
 *((unsigned int *)&v4) = 10;
 strncpy(&v5, "Test", 4);
 v8 = 0;
 printf(&__dollar_d_72, strlen(&v4 | 4) + 4700);
 ptr = operator new[](20);
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
 operator delete[](ptr);
 v21 = _ZN14LifecycleClass14instance_countE - 1;
 _ZN14LifecycleClass14instance_countE = v21;
 printf(&g_4024b3, v19 + v20 + 1000 * v21);
 v6 = 3;
 v0 = &g_4139a8;
 v4 = &g_4139e8;
 v22 = Base_virtual_func(&v0, 5);
 printf(&g_4024cf, v22 + (*(v4))(&v4, 5) + 21);
 v1 = &g_413a30;
 v7 = &g_413a60;
 v6 = 100;
 v9 = 200;
 printf(&g_4024eb, (int)non_virtual_thunk_to_MultiDerived_funcB(&v7) + 31);
 v25 = &v8;
 v2 = &g_413b38;
 v10 = &g_413ba0;
 v7 = &g_413b68;
 v12 = 50;
 v26 = thunk_to_DiamondDerived_func(v25);
 *((unsigned int *)((char *)&v6 + v2[24])) = 100;
 printf(&g_402507, (*(v10))(v25) + (v26 & 4294967295));
 printf(&g_402524, 22);
 printf(&g_402540, 39);
 printf(&g_40255c, 16);
 printf(&g_402578, 85);
 printf(&g_402594, (unsigned long long)test_cpp_exception() & 4294967295);
 printf(&g_4025b1, 703);
 printf(&g_4025ce, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: main at 0x402050
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x402068
long long Base_virtual_func()
{
 unsigned int v0; // w1

 return v0 + 1;
}


// Function: _ZN7Derived12virtual_funcEi at 0x402070
void Derived_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x40207c
int Base::~Base(void* this)
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x402080
int MultiDerived::~MultiDerived(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402084
int DiamondDerived::~DiamondDerived(void* this)
{
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402088
int template_max<int>(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402094
double template_max<double>(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 return v3;
 return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4020a0
void template_swap<int>(int &ptr, int &p)
{
 unsigned int v0; // w9

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4020b4
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4020bc
void Container<int>::push(void* ptr, int arg_0)
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
void Container<int>::get(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4020f8
void Container<int>::getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x402100
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402108
void Container<double>::push(void* ptr, double arg_0)
{
 unsigned long idx; // x8
 unsigned long v1; // d0

 idx = (int)ptr[80];
 if (9 >= (unsigned int)idx)
 {
 *((unsigned long *)((char *)ptr + 8 * idx)) = v1;
 *((unsigned int *)&ptr[80]) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402124
void Container<double>::get(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402140
void Container<double>::getSize(void* this)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x402148
void Base::getName(void* this)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x402154
int Base::~Base(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x402168
void Derived::getName(void* this)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x402174
int Derived::~Derived(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402188
long long MultiDerived_funcA(void *this_ptr)
{
 return 30;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402190
int MultiDerived::~MultiDerived(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4021a4
void MultiDerived::funcB(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x4021ac
long long non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x4021b4
long long non_virtual_thunk_to_MultiDerived_destr()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x4021b8
int non_virtual_thunk_to_MultiDerived_destr(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return operator delete(a0 - 16);
}


// Function: _ZN5BaseA5funcAEv at 0x4021d0
void BaseA::funcA(void* this)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x4021d8
int BaseA::~BaseA(void* this)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x4021dc
int BaseA::~BaseA(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x4021f0
void BaseB::funcB(void* this)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x4021f8
int BaseB::~BaseB(void* this)
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x4021fc
int BaseB::~BaseB(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x402210
void MiddleA::func(void* this)
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x402228
int MiddleA::~MiddleA(void* this)
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x40222c
int MiddleA::~MiddleA(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402240
int thunk_to_MiddleA_func(void* *a0)
{
 void* *v0; // x8

 v0 = (char *)a0 + (*(a0))[24];
 return *((int *)(8 + (char *)v0 + (*(v0))[24])) + 150;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x402264
long long thunk_to_MiddleA_destruct()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x402268
int thunk_to_MiddleA_destruct_v2(void* *a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return operator delete((char *)a0 + (*(a0))[32]);
}


// Function: _ZN7MiddleB4funcEv at 0x402288
void MiddleB::func(void* this)
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x4022a0
int MiddleB::~MiddleB(void* this)
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x4022a4
int MiddleB::~MiddleB(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x4022b8
int thunk_to_MiddleB_func(void* *a0)
{
 void* *v0; // x8

 v0 = (char *)a0 + (*(a0))[24];
 return *((int *)(8 + (char *)v0 + (*(v0))[24])) + 200;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x4022dc
long long thunk_to_MiddleB_destruct(void)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x4022e0
int thunk_to_MiddleB_destruct_v2(void* *a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return operator delete((char *)a0 + (*(a0))[32]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x402300
void DiamondDerived::func(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402318
int DiamondDerived::~DiamondDerived(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x40232c
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402344
long long non-virtual thunk_to DiamondDerived::~DiamondDerived()()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402348
int non-virtual thunk_to DiamondDerived::~DiamondDerived()(void* a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return operator delete(a0 - 16);
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402360
long long thunk_to_DiamondDerived_func()
{
 void* *v0; // x0
 void* *v1; // x8

 v1 = (char *)v0 + (*(v0))[24];
 return *((int *)(8 + (char *)v1 + (*(v1))[24])) + 250;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402384
long long thunk_to_DiamondDerived_destruct()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402388
int thunk_to_DiamondDerived_destruct_v2(void* *a0)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return operator delete((char *)a0 + (*(a0))[32]);
}


// Function: _ZN11VirtualBase4funcEv at 0x4023a8
void VirtualBase::func(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4023b0
int VirtualBase::~VirtualBase(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4023b4
int VirtualBase::~VirtualBase(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4023c8
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4023dc
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4023e4
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4023e8
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 operator delete(this);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4023fc
void RTTIDerivedB::getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


