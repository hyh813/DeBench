// Angr Decompilation of 5-1_gcc_Os_no_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */

#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

// Function declarations for stdio functions
int puts(const char *s);
int printf(const char *format, ...);

// Forward declarations - struct definitions (must be before use)
struct Base {
    void *vtable;
};
typedef struct Base Base;

struct Derived {
    void *vtable;
    char padding[8];
};
typedef struct Derived Derived;

struct MiddleA {
    void *vtable;
    char padding[24];
};
typedef struct MiddleA MiddleA;

struct MiddleB {
    void *vtable;
    char padding[24];
};
typedef struct MiddleB MiddleB;

struct VirtualBase {
    void *vtable;
    char padding[8];
};
typedef struct VirtualBase VirtualBase;

struct MultiDerived {
    void *vtable;
    char padding[24];
};
typedef struct MultiDerived MultiDerived;

struct DiamondDerived {
    void *vtable;
    char padding[40];
};
typedef struct DiamondDerived DiamondDerived;

struct RTTIDerivedA {
    void *vtable;
    char padding[8];
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    void *vtable;
    char padding[8];
};
typedef struct RTTIDerivedB RTTIDerivedB;

// Global variable definitions for linking
unsigned long long g_413ef0 = 0;
void* g_413ac8 = NULL;
void* g_413af8 = NULL;
void* g_413b30 = NULL;
void* g_4138e0 = NULL;
void* g_413918 = NULL;
void* g_413958 = NULL;
void* g_413990 = NULL;
char __stack_chk_guard[16] = {0};
char _ZStL8__ioinit = 0;
unsigned long long __dso_handle = 0;
Base g_413868 = {NULL};
Base g_413898 = {NULL};
char g_413b58 = 0;
char g_413b80 = 0;
void test_cpp_oo_features();
void _Unwind_Resume(void *exception_object);
void __stack_chk_fail(void);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);

// C++ std::ios_base::Init stub for C
typedef struct std_ios_base_Init std_ios_base_Init;

// String constants used by test_cpp_oo_features
const char g_4025b2[] = "Testing C++ OO Features\n";
const char g_4025d6[] = "  member_func: %d\n";
const char g_4025f4[] = "  constructor: %d\n";
const char g_402610[] = "  virtual_func: %d\n";
const char g_40262c[] = "  multiple_inheritance: %d\n";
const char g_402648[] = "  diamond_inheritance: %d\n";
const char g_402665[] = "  operator_overload: %d\n";
const char g_402681[] = "  template_func: %d\n";
const char g_40269d[] = "  template_class: %d\n";
const char g_4026b9[] = "  lambda: %d\n";
const char g_4026d5[] = "  exception: %d\n";
const char g_4026f2[] = "  smart_ptr: %d\n";
const char g_40270f[] = "  rtti: %d\n";

// ARM64 floating point comparison helper
static inline unsigned int CmpF(unsigned long a, unsigned long b) {
    double da = *(double *)&a;
    double db = *(double *)&b;
    if (da > db) return 0x45;  // GT
    if (da < db) return 0x45;  // LT  
    if (da == db) return 0x40; // EQ
    return 0x00;
}

// ARM64 condition code evaluation helper
static inline unsigned char arm64g_calculate_condition(unsigned int cond, unsigned long value, unsigned long zero, unsigned long overflow) {
    switch (cond & 0xF) {
        case 0: return (value >> 31) & 1;             // EQ: Z set
        case 1: return !((value >> 31) & 1);           // NE: Z clear
        case 2: return (value >> 29) & 1;             // CS: C set
        case 3: return !((value >> 29) & 1);           // CC: C clear
        case 4: return (value >> 30) & 1;             // MI: N set
        case 5: return !((value >> 30) & 1);           // PL: N clear
        case 6: return (value >> 28) & 1;             // VS: V set
        case 7: return !((value >> 28) & 1);           // VC: V clear
        case 8: return ((value >> 31) & 1) && !((value >> 30) & 1); // HI
        case 9: return !((value >> 31) & 1) || ((value >> 30) & 1); // LS
        case 10: return ((value >> 30) & 1) == ((value >> 28) & 1); // GE
        case 11: return ((value >> 30) & 1) != ((value >> 28) & 1); // LT
        case 12: return ((value >> 30) & 1) == ((value >> 28) & 1) && !((value >> 31) & 1); // GT
        case 13: return ((value >> 30) & 1) != ((value >> 28) & 1) || ((value >> 31) & 1); // LE
        case 14: return 1;                           // AL: always
        default: return 0;
    }
}

// Forward declarations for template functions
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_int(unsigned int *ptr);

// Forward declaration for Container
typedef struct Container_int Container_int;
void Container_int_push(void* ptr, int arg_0);
void DiamondDerived_func(void* this);

// CRT stub function declarations
void _start(void);
void abort(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// std namespace for ios_base (C-compatible)
struct std_ios_base_Init;
void std_ios_base_Init_Init(void *ptr);

// C++ ABI function declarations
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

// Function: __dollar_x at 0x401650
extern unsigned long long g_413ef0;

long long __dollar_x()
{
 return 0;
}


// Function: sub_401664 at 0x401664
void *cpp_operator_new(unsigned long long);
void *cpp_operator_new_array(unsigned long long);
void cpp_operator_delete(void *, unsigned long long);
void cpp_operator_delete_array(void *);
void *malloc(unsigned long long);
void free(void *);

void *cpp_operator_new(unsigned long long size)
{
 return malloc(size);
}

void *cpp_operator_new_array(unsigned long long size)
{
 return malloc(size);
}

void cpp_operator_delete(void *ptr, unsigned long long size)
{
 (void)size;
 free(ptr);
}

void cpp_operator_delete_array(void *ptr)
{
 free(ptr);
}

int sub_401664()
{
 return 0;
}


// C++ ABI function stubs for exception handling
void *__cxa_allocate_exception(unsigned long long size)
{
 return malloc(size);
}

void __cxa_throw(void *obj, void *type, void *destructor)
{
 (void)obj;
 (void)type;
 (void)destructor;
 _Unwind_Resume(obj);
}

void *__cxa_begin_catch(void)
{
 return NULL;
}

void __cxa_end_catch(void *obj)
{
 (void)obj;
}

// Function: _Z18test_cpp_exceptionv at 0x401800
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern char _ZTIi;

int test_cpp_exception()
{
 unsigned int *ptr; // x0
 void *exception_obj; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 exception_obj = __cxa_begin_catch();
 __cxa_end_catch(exception_obj);
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 _Unwind_Resume(exception_obj); /* do not return */
 return 0;
}


// Function: main at 0x4018d0
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4018e8
extern char _ZNSt8ios_base4InitD1Ev;
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_ios_base_Init_Init(&_ZStL8__ioinit);
 return __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_401928 at 0x401928
void sub_401928(unsigned long a0)
{
 (void)_start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401970 at 0x401970
void sub_401970()
{
 (void)abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401988 at 0x401988
void sub_401988()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4019fc at 0x4019fc
void sub_4019fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401a48 at 0x401a48
long long sub_401a48()
{
 frame_dummy();
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401a54
extern char __stack_chk_guard[16];

int test_cpp_member_func()
{
 char v1[31]; // [bp-0x2c]
 unsigned long v3; // [bp-0x8]

 v3 = *((long long *)&__stack_chk_guard);
 (void)strlen(strncpy((char *)v1, "Test", 31));
 if (v3 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x401ac0
int test_cpp_constructor()
{
 return 0;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401ad8

void call_virtual_func(void *arg_0, int arg_1)
{
 void (**vptr)(void *, int);
 vptr = (void (**)(void *, int))arg_0;
 (*vptr)(arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x401ae8

int test_cpp_virtual_func()
{
 char *v0; // [bp-0x40]
 Base v1; // [bp-0x20]
 Base v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 long long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 *((void **)&v1) = &g_413868;
 *((void **)&v2) = &g_413898;
 v3 = 3;
 call_virtual_func(&v1, 5);
 call_virtual_func(&v2, 5);
 if (v4 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401b78
int test_cpp_multiple_inheritance()
{
 return 0;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401b80
int test_cpp_operator_overload()
{
 return 0;
}


// Function: _Z22test_cpp_template_funcv at 0x401b88
extern char __stack_chk_guard[16];

int test_cpp_template_func()
{
 unsigned long long v6; // d8
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 long long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = v6;
 v4 = *((long long *)&__stack_chk_guard);
 template_max_double(template_max_int(3, 7), 7);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2);
 (void)v3;
 if (v4 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x401c30
extern char __stack_chk_guard[16];

int test_cpp_template_class()
{
 char *v0; // [bp-0x60]
 unsigned int v1; // [bp-0x38]
 unsigned int result; // [bp-0x10]
 long long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 result = 1;
 v1 = 10;
 Container_int_push(&v1, 20);
 Container_int_push(&v1, 30);
 if (v3 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z15test_cpp_lambdav at 0x401cc0
int test_cpp_lambda()
{
 return 0;
}


// Function: _Z13test_cpp_rttiv at 0x401cc8
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_413b58;
extern char g_413b80;

int test_cpp_rtti()
{
 void* *ptr; // x21
 struct_2 **p; // x20
 void* v4; // x23
 char *cur; // x22
 char *v0; // [bp-0x50]

 v0 = (char *)&v4;
 ptr = (void**)cpp_operator_new(8);
 *(ptr) = &g_413b58;
 p = (struct_2 **)cpp_operator_new(8);
 v4 = *(ptr);
 *(p) = (struct_2 *)&g_413b80;
 cur = (char *)(*(unsigned long long*)((unsigned long long)v4 + 16));
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 ((void (*)(void*, long long))(*((void ***)v4)[8]))(ptr, *(unsigned long long*)((unsigned long long)v4 + 8));
 return 0;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401e24
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_0;

extern char __stack_chk_guard[16];

int test_cpp_smart_ptr()
{
 char *v0; // [bp-0x50]
 unsigned long long result; // [bp-0x20]
 unsigned int *p; // [bp-0x18]
 struct_0 *ptr; // [bp-0x10]
 long long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 result = 0;
 p = (unsigned int *)cpp_operator_new(4);
 *(p) = 200;
 ptr = (struct_0 *)cpp_operator_new_array(20);
 ptr->field_0 = 8589934593;
 ptr->field_8 = 17179869187;
 ptr->field_10 = 5;
 if (v4 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_401ec8 at 0x401ec8
long long sub_401ec8(unsigned long long a0)
{
 _Unwind_Resume((void*)a0); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401ef8
extern char __stack_chk_guard[16];
extern void* g_413ac8;
extern void* g_413af8;
extern void* g_413b30;

int test_cpp_diamond_inheritance()
{
 char *v0; // [bp-0x60]
 void *v1; // [bp-0x38]
 void *v2; // [bp-0x28]
 void *v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 long long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v1 = &g_413ac8;
 v3 = &g_413b30;
 v2 = &g_413af8;
 v4 = 50;
 DiamondDerived_func(&v3);
 v4 = 100;
 DiamondDerived_func(&v3);
 if (v5 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401fa0

void test_cpp_oo_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4025b2);
 printf((char *)&g_4025d6, (unsigned long long)test_cpp_member_func() & 4294967295);
 printf((char *)&g_4025f4, (unsigned long long)test_cpp_constructor() & 4294967295);
 printf((char *)&g_402610, (unsigned long long)test_cpp_virtual_func() & 4294967295);
 printf((char *)&g_40262c, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
 printf((char *)&g_402648, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
 printf((char *)&g_402665, (unsigned long long)test_cpp_operator_overload() & 4294967295);
 printf((char *)&g_402681, (unsigned long long)test_cpp_template_func() & 4294967295);
 printf((char *)&g_40269d, (unsigned long long)test_cpp_template_class() & 4294967295);
 printf((char *)&g_4026b9, (unsigned long long)test_cpp_lambda() & 4294967295);
 printf((char *)&g_4026d5, (unsigned long long)test_cpp_exception() & 4294967295);
 printf((char *)&g_4026f2, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
 printf((char *)&g_40270f, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4020d8
void Base_virtual_func(void* this, int arg_0)
{
 (void)this;
 (void)arg_0;
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4020e0
int Base_getName(void* _this)
{
 (void)_this;
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x4020ec
int Base_dtor(void* this)
{
 return 0;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4020f0
void Derived_virtual_func(void* this, int arg_0)
{
 (void)this;
 (void)arg_0;
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4020fc
int Derived_getName(void* _this)
{
 (void)_this;
 return 0;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402108
void MultiDerived_funcA(void* this)
{
 (void)this;
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x402110
void MultiDerived_funcB(void* this)
{
 (void)this;
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x402118
unsigned long long MultiDerived_funcB_non_virtual_thunk()
{
 return (unsigned long long)((void*)MultiDerived_funcB);
}


// Function: _ZN11VirtualBase4funcEv at 0x402120
void VirtualBase_func(void* this)
{
 (void)this;
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x402128
int VirtualBase_dtor(void* this)
{
 return 0;
}


// Function: _ZN7MiddleA4funcEv at 0x40212c
void MiddleA_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402144
void MiddleA_func_virtual_thunk(void* *a0)
{
 MiddleA_func((char *)a0 + ((unsigned long long*)(*(a0)))[3]);
}


// Function: _ZN7MiddleB4funcEv at 0x402154
void MiddleB_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x40216c
void MiddleB_func_virtual_thunk(void* *a0)
{
 MiddleB_func((char *)a0 + ((unsigned long long*)(*(a0)))[3]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x40217c
void DiamondDerived_func(void* this)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402194
void DiamondDerived_func_virtual_thunk(void* *a0)
{
 DiamondDerived_func((char *)a0 + ((unsigned long long*)(*(a0)))[3]);
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4021a4
void DiamondDerived_func_non_virtual_thunk(void* a0)
{
 DiamondDerived_func(a0 - 16);
}


// Function: _ZN7MiddleAD1Ev at 0x4021ac
extern void* g_4138e0;
extern void* g_413918;

void MiddleA_dtor(void* ptr)
{
 *((char **)ptr) = (char *)g_4138e0;
 *((char **)((char *)ptr + 16)) = (char *)g_413918;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x4021c8
extern void* g_4138e0;
extern void* g_413918;

void MiddleA_destructor_virtual_thunk(void* *a0)
{
 unsigned long long v0;

 v0 = ((unsigned long long*)(*(a0)))[4];
 *((char **)((char *)a0 + v0)) = (char *)g_4138e0;
 *((char **)(16 + (char *)a0 + v0)) = (char *)g_413918;
}


// Function: _ZN7MiddleBD1Ev at 0x4021f0
extern void* g_413958;
extern void* g_413990;

void MiddleB_dtor(void* ptr)
{
 *((char **)ptr) = (char *)g_413958;
 *((char **)((char *)ptr + 16)) = (char *)g_413990;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x40220c
extern void* g_413958;
extern void* g_413990;

void MiddleB_destructor_virtual_thunk(void* *a0)
{
 unsigned long long v0;

 v0 = ((unsigned long long*)(*(a0)))[4];
 *((char **)((char *)a0 + v0)) = (char *)g_413958;
 *((char **)(16 + (char *)a0 + v0)) = (char *)g_413990;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402234
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40223c
int RTTIDerivedB_getType(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x402244
int RTTIDerivedB_dtor(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x402248
int RTTIDerivedA_dtor(void* this)
{
 return 0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x40224c
int MultiDerived_dtor(void* this)
{
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402250
int MultiDerived_destructor_non_virtual_thunk()
{
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x402254
int Derived_dtor(void* this)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x402258
int Base_deleting_dtor(void* this)
{
 cpp_operator_delete(this, 8);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x402260
int Derived_deleting_dtor(void* this)
{
 cpp_operator_delete(this, 16);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402268
int MultiDerived_deleting_dtor(void* this)
{
 cpp_operator_delete(this, 32);
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402270
int MultiDerived_deleting_destructor_non_virtual_thunk(unsigned long a0)
{
 return 0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x402278
int VirtualBase_deleting_dtor(void* this)
{
 cpp_operator_delete(this, 16);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402280
int RTTIDerivedB_deleting_dtor(void* this)
{
 cpp_operator_delete(this, 8);
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402288
int RTTIDerivedA_deleting_dtor(void* this)
{
 cpp_operator_delete(this, 8);
 return 0;
}


// Function: _ZN7MiddleAD0Ev at 0x402290
extern void* g_4138e0;
extern void* g_413918;

void MiddleA_deleting_dtor(void* ptr)
{
 *((char **)ptr) = (char *)g_4138e0;
 *((char **)((char *)ptr + 16)) = (char *)g_413918;
 cpp_operator_delete(ptr, 32);
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x4022b0
int MiddleA_deleting_destructor_virtual_thunk(unsigned long a0)
{
 return 0;
}


// Function: _ZN7MiddleBD0Ev at 0x4022c0
extern void* g_413958;
extern void* g_413990;

void MiddleB_deleting_dtor(void* ptr)
{
 *((char **)ptr) = (char *)g_413958;
 *((char **)((char *)ptr + 16)) = (char *)g_413990;
 cpp_operator_delete(ptr, 32);
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x4022e0
int MiddleB_deleting_destructor_virtual_thunk(unsigned long a0)
{
 return 0;
}


// Function: _ZN7MiddleAD4Ev at 0x4022f0
typedef struct struct_0_MiddleA {
 void* field_0;
 unsigned long long field_8;
} struct_0_MiddleA;

extern void* g_4138e0;
extern void* g_413918;

int MiddleA_base_dtor(void* p)
{
 struct_0_MiddleA *ptr = (struct_0_MiddleA *)p;
 void* ptr3;
 unsigned long v4;
 unsigned long long v5;

 ptr3 = ptr->field_0;
 *((void* *)p) = ptr3;
 v4 = (unsigned long)ptr->field_8;
 v5 = (unsigned long long)(uintptr_t)(*((unsigned long long **)ptr3)[3]);
 *((unsigned long *)((char *)p + v5)) = v4;
 return 0;
}


// Function: _ZN7MiddleAD2Ev at 0x40232c
int MiddleA_complete_dtor(void* this)
{
 return 0;
}


// Function: _ZN7MiddleBD4Ev at 0x402338
typedef struct struct_0_MiddleB {
 void* field_0;
 unsigned long long field_8;
} struct_0_MiddleB;

extern void* g_413958;
extern void* g_413990;

int MiddleB_base_dtor(void* p)
{
 unsigned int result; // w1
 struct_0_MiddleB *ptr; // x2
 void* ptr3; // x3
 struct_0_MiddleB *addr; // x2
 unsigned long long v4; // x1
 unsigned long v5; // x2

 result = 0;
 if (!result)
 ptr3 = ptr->field_0;
 else
 ptr3 = &g_413958;
 *((void* *)p) = ptr3;
 if (!result)
 {
 v4 = addr->field_8;
 v5 = (unsigned long long)(uintptr_t)(*((unsigned long long **)ptr3)[24]);
 }
 else
 {
 v5 = 16;
 v4 = (unsigned long long)&g_413990;
 }
 *((unsigned long long *)((char *)p + v5)) = v4;
 return 0;
}


// Function: _ZN7MiddleBD2Ev at 0x402374
int MiddleB_complete_dtor(void* this)
{
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402380
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x40238c
double template_max_double(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 v0 = *(unsigned long *)&arg_0;
 v1 = *(unsigned long *)&arg_1;
 v3 = *(unsigned long *)&arg_1;
 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 return v3;
 v3 = *(unsigned long *)&arg_0;
 return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402398
long long template_swap_int(unsigned int *ptr)
{
 unsigned int *p = ptr + 1;
 unsigned int v0;

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return (long long)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4023ac
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4023b4
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int v0; // w2
 char* p = (char*)ptr;

 v0 = *(unsigned int*)&p[40];
 if (9 >= v0)
 {
 *(unsigned int*)&p[40] = v0 + 1;
 *(int*)(p + 4 * v0) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4023d0
void Container_int_get(void* this, int arg_0)
{
 char* p = (char*)this;
 if (!((char)(arg_0 >> 31) & 1) && *(int*)&p[40] > arg_0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4023f0
int Container_int_getSize(void* this)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4023f8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402400
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int v0; // w1
 unsigned long v1; // d0
 char* p = (char*)ptr;

 v0 = *(unsigned int*)&p[80];
 if (9 >= v0)
 {
 *(unsigned int*)&p[80] = v0 + 1;
 *(unsigned long*)(p + 8 * v0) = v1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40241c
void Container_double_get(void* this, int arg_0)
{
 char* p = (char*)this;
 if (!((char)(arg_0 >> 31) & 1) && *(int*)&p[80] > arg_0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40243c
int Container_double_getSize(void* this)
{
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x402444
int std_unique_ptr_int_dtor(void* this)
{
 if (!*((long long *)this))
 return 0;
 cpp_operator_delete(*((void **)(this)), 4);
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x402458
int std_unique_ptr_int_array_dtor(void* this)
{
 if (!*((long long *)this))
 return 0;
 cpp_operator_delete_array(*((void **)(this)));
 return 0;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x402468
typedef struct struct_0_DiamondDerived {
 void* field_0;
 char padding_8[32];
 unsigned long long field_28;
 unsigned long long field_30;
} struct_0_DiamondDerived;

extern void* g_413ac8;
extern void* g_413af8;
extern void* g_413b30;

int DiamondDerived_base_dtor(void* p)
{
 struct_0_DiamondDerived *ptr = (struct_0_DiamondDerived *)p;
 void* addr;
 unsigned long long v13;
 unsigned long long v14;
 unsigned long long v15;

 addr = ptr->field_0;
 *((void* *)p) = addr;
 v13 = (unsigned long long)(uintptr_t)(*((unsigned long long **)addr)[3]);
 v14 = ptr->field_28;
 *((unsigned long long *)((char *)p + v13)) = v14;
 v15 = ptr->field_30;
 *((unsigned long long *)((char *)p + 16)) = v15;
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402518
int DiamondDerived_dtor(void* this)
{
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402524
int DiamondDerived_destructor_non_virtual_thunk(unsigned long a0)
{
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x40252c
int DiamondDerived_destructor_virtual_thunk(unsigned long a0)
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x40253c
int DiamondDerived_deleting_dtor(void* this)
{
 cpp_operator_delete(this, 48);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402564
int DiamondDerived_deleting_destructor_non_virtual_thunk(unsigned long a0)
{
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x40256c
int DiamondDerived_deleting_destructor_virtual_thunk(unsigned long a0)
{
 return 0;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x40257c
int DiamondDerived_complete_dtor(void* this)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


