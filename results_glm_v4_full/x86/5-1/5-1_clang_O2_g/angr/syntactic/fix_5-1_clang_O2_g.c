// Angr Decompilation of 5-1_clang_O2_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include <new>
#include <typeinfo>
#include <exception>
#include <cxxabi.h>

// Minimal type_info stub for RTTI support - use custom namespace to avoid conflict
namespace __custom_std {
    class type_info {
    public:
        virtual ~type_info();
        bool operator==(const type_info& rhs) const {
            return name() == rhs.name();
        }
        const char* name() const {
            return "minimal_type_info";
        }
    };
    type_info::~type_info() {}
}

// C++ ABI function stubs
extern "C" {
    void* __cxa_allocate_exception(size_t size) {
        return malloc(size);
    }
    
    // __cxa_throw is already declared in <cxxabi.h>
    
    void* __cxa_begin_catch(void* exc) {
        return exc;
    }
    
    void __cxa_end_catch(void) {
        // Stub
    }
    
    void __cxa_rethrow(void) {
        // Stub
        abort();
    }
    
    void _Unwind_Resume(void* exc) {
        // Stub
        abort();
    }
    
    int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) {
        return 0;  // Stub - always succeed
    }
}

/* CRT stub function _init removed by preprocessor */

// Forward declarations of structs used before definition
typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void (*g_403ff4)(void) = NULL;

// Forward declarations
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void deregister_tm_clones(void);
void *register_tm_clones(void);
void _start(void);
void test_cpp_member_func(void);
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
void test_cpp_smart_ptr(void);
void test_cpp_rtti(void);
void test_cpp_oo_features(void);
int main(void);
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(int *ptr, int *p);
void Container_int_Constructor(void *ptr);
void Container_int_push(void *ptr, int arg_0);
void Container_int_get(void *this_ptr, int arg_0);
void Container_int_getSize(void *this_ptr);
void Container_double_Constructor(void *ptr);
void Container_double_push(void *ptr, double arg_0);
void Container_double_get(void *this_ptr, int arg_0);
void Container_double_getSize(void *this_ptr);
int RTTIDerivedA_destructor(void *this_ptr);
void RTTIDerivedA_getType(void *this_ptr);
int RTTIBase_destructor(void *this_ptr);
int RTTIDerivedB_destructor(void *this_ptr);
void RTTIDerivedB_getType(void *this_ptr);
void ios_base_Init_Init(void *obj);

typedef struct Base {
    void **vtable;
} Base;

int _init()
{
 if (g_403ff4)
 (*g_403ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}





// Function: sub_401130 at 0x401130
int sub_401130()
{
 // Stub: computed goto not supported in C
 abort();
 return 0;
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
extern char _ZNSt8ios_base4InitD1Ev;
extern char _ZStL8__ioinit;
unsigned int __dso_handle = 0;

namespace std {
    namespace ios_base {
        struct Init {
        };
    }
}

int _GLOBAL__sub_I_5_1_cpp()
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 ios_base_Init_Init(&_ZStL8__ioinit);
 return __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, (void *)&__dso_handle);
}


// Function: sub_40117b at 0x40117b
void sub_40117b()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */

void _start(void)
{
 // Stub
}



// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4198827
}


// Function: sub_4011ac at 0x4011ac
void sub_4011ac()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4011b0
void __x86_get_pc_thunk_bx(void)
{
 return;
}


// Function: sub_4011b4 at 0x4011b4
void sub_4011b4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones()
{
 return;
}


// Function: sub_4011f3 at 0x4011f3
void sub_4011f3()
{
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void *register_tm_clones()
{
 return NULL;
}


// Function: sub_401247 at 0x401247
void sub_401247()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 deregister_tm_clones();
}


// Function: sub_4012da at 0x4012da
void sub_4012da()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */

void frame_dummy()
{
 return;
}


// Function: __x86.get_pc_thunk_dx at 0x4012e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4012ed
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_4012f1 at 0x4012f1
int sub_4012f1()
{
 test_cpp_member_func();
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401300
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 char v2; // [bp-0x24]
 unsigned int v3; // [bp-0x10]
 unsigned int result; // [bp-0xd]
 char flag1; // [bp-0x9]

 result = 0;
 v3 = 0;
 memset(&v2, 0, 20);
 strncpy(v1, "Test", 4);
 flag1 = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: sub_401373 at 0x401373
void sub_401373()
{
 test_cpp_constructor();
 return;
}

// Implement operator new/delete
void* operator new(size_t size)
{
 return malloc(size);
}

void operator delete(void* ptr)
{
 free(ptr);
}

// Define operatordelete (used by destructors) - wrapper for operator delete
void operatordelete(void* ptr)
{
 operator delete(ptr);
}

// Implement ios_base_Init_Init
void ios_base_Init_Init(void* obj)
{
 // Stub
}


// Function: _Z20test_cpp_constructorv at 0x401380
void test_cpp_constructor()
{
 return;
}


// Function: sub_40139e at 0x40139e
int sub_40139e()
{
 // call_virtual_func();
 return 0;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013a0

// Define vtable function type for better type safety
typedef void (*VTableFunc)(struct Base *, int);
typedef struct VTable {
    VTableFunc func0;  // First virtual function
} VTable;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 if (arg_0 && arg_0->vtable) {
     VTable *vtable = (VTable *)arg_0->vtable;
     if (vtable->func0) {
         vtable->func0(arg_0, arg_1);
     }
 }
 return;
}


// Function: sub_4013c5 at 0x4013c5
void sub_4013c5()
{
 test_cpp_virtual_func();
 return;
}

// Implement template_max for int
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}

// Implement template_max for double
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}

// Implement template_swap for int
void template_swap_int(int *ptr, int *p)
{
 int v0;

 v0 = *ptr;
 *ptr = *p;
 *p = v0;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013d0
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013e0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4013f0
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_4013f6 at 0x4013f6
void sub_4013f6()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401400
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401406 at 0x401406
void sub_401406()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401410
void test_cpp_template_func()
{
 return;
}


// Function: sub_401416 at 0x401416
void sub_401416()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
void test_cpp_template_class()
{
 return;
}


// Function: sub_401426 at 0x401426
void sub_401426()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
void test_cpp_lambda()
{
 return;
}


// Function: sub_401436 at 0x401436
void sub_401436()
{
 test_cpp_exception();
 return;
}




// Function: _Z18test_cpp_exceptionv at 0x401440

// Define RTTI type_info for int to satisfy linker
namespace __cxxabiv1 {
    extern __custom_std::type_info __si_type_info_int;
}
char _ZTIi[sizeof(__custom_std::type_info)] = {};

void test_cpp_exception()
{
 unsigned int *ptr; // eax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *ptr = 42;
 __cxxabiv1::__cxa_throw(ptr, (std::type_info*)&_ZTIi, 0);
}


// Function: sub_401481 at 0x401481
int sub_401481()
{
 // Exception handling stub - implementation unclear from decompilation
 return 0;
}


// Function: sub_40149f at 0x40149f
void sub_40149f()
{
 __cxa_end_catch();
}


// Function: sub_401526 at 0x401526
void sub_401526()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401530
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_401536 at 0x401536
void sub_401536()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401540

char g_403ecc[sizeof(void*)] = {};
char g_403ee0[sizeof(struct_0*)] = {};

void test_cpp_rtti()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x14]

 ptr = operator new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0 **)operator new(4);
 *p = (struct_0 *)&g_403ee0;
 operator delete(v0);
 return;
}


// Function: sub_4015f3 at 0x4015f3
int sub_4015f3()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401600

char g_402081[] = "";
char g_4020bb[] = "";
char g_4020f3[] = "";
char g_40209f[] = "";
char g_4020d7[] = "";
char g_402110[] = "";
char g_40212c[] = "";
char g_402148[] = "";
char g_402164[] = "";
char g_402180[] = "";
char g_40219d[] = "";
char g_4021ba[] = "";
char g_4021d8[] = "";

void test_cpp_oo_features()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 char v2[4]; // [bp-0x30]
 char v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x18]
 unsigned int result; // [bp-0x15]
 char flag1; // [bp-0x11]

 puts(g_4021d8);
 result = 0;
 v4 = 0;
 memset(&v3, 0, 20);
 strncpy(v2, "Test", 4);
 flag1 = 0;
 v1 = 10;
 strlen((const char*)v2);
 printf(g_402081);
 printf(g_40209f);
 printf(g_4020bb);
 printf(g_4020d7);
 printf(g_4020f3);
 printf(g_402110);
 printf(g_40212c);
 printf(g_402148);
 printf(g_402164);
 test_cpp_exception();
 printf((const char*)&g_402180);
 printf((const char*)&g_40219d);
 ptr = operator new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0 **)operator new(4);
 *(p) = (struct_0 *)&g_403ee0;
 operator delete(v0);
 // *(p)->field_4(p);  // Invalid syntax removed
 printf((const char*)&g_4021ba);
 return;
}


// Function: sub_40180f at 0x40180f
int sub_40180f()
{
 main();
 return 0;
}


// Function: main at 0x401810
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40182c at 0x40182c
void sub_40182c(unsigned int a0, unsigned int a1)
{
 template_max_int((int)a0, (int)a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401830 (wrapper)
int template_max_int_wrapper(int arg_0, int arg_1)
{
 return template_max_int(arg_0, arg_1);
}


// Function: sub_40183e at 0x40183e
void sub_40183e(unsigned int a0)
{
 // template_max_double();
 return;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401840
// Function: sub_401851 at 0x401851
void sub_401851(unsigned int a0, unsigned int a1)
{
 template_swap_int((int*)a0, (int*)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401860 (wrapper)
void template_swap_int_wrapper(int *ptr, int *p)
{
 template_swap_int(ptr, p);
}


// Function: sub_401873 at 0x401873
void sub_401873(unsigned int a0)
{
 Container_int_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401880
void Container_int_Constructor(void* ptr)
{
 if (ptr) {
 *((unsigned int *)((char*)ptr + 40)) = 0;
 }
}


// Function: sub_40188c at 0x40188c
void sub_40188c(unsigned int a0)
{
 // Container_int_push();
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401890
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index;
 char *p = (char*)ptr;

 index = *((unsigned int*)(p + 40));
 if (index <= 9)
 {
 *((unsigned int*)(p + 40)) = index + 1;
 *((int*)(p + 4 * index)) = arg_0;
 }
}


// Function: sub_4018ac at 0x4018ac
void sub_4018ac(unsigned int a0, unsigned int a1)
{
 // Container_int_get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4018b0
void Container_int_get(void* this_ptr, int arg_0)
{
 (void)this_ptr;
 (void)arg_0;
}


// Function: sub_4018c7 at 0x4018c7
void sub_4018c7(unsigned int a0)
{
 // Container_int_getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4018d0
void Container_int_getSize(void* this_ptr)
{
 (void)this_ptr;
}


// Function: sub_4018d8 at 0x4018d8
void sub_4018d8(unsigned int a0)
{
 Container_double_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4018e0
void Container_double_Constructor(void* ptr)
{
 if (ptr) {
 *((unsigned int *)((char*)ptr + 80)) = 0;
 }
}


// Function: sub_4018ec at 0x4018ec
void sub_4018ec(unsigned int a0)
{
 // Container_double_push();
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4018f0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int idx;
 char *p = (char*)ptr;

 idx = *((unsigned int*)(p + 80));
 if (idx <= 9)
 {
 *((unsigned int*)(p + 80)) = idx + 1;
 *((double*)(p + 8 * idx)) = arg_0;
 }
}


// Function: sub_40190e at 0x40190e
void sub_40190e(unsigned int a0, unsigned int a1)
{
 // Container_double_get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401910
void Container_double_get(void* this_ptr, int arg_0)
{
 (void)this_ptr;
 (void)arg_0;
}


// Function: sub_401929 at 0x401929
void sub_401929(unsigned int a0)
{
 Container_double_getSize((void*)a0);
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401930
void Container_double_getSize(void* this_ptr)
{
 (void)this_ptr;
}


// Function: sub_401938 at 0x401938
int sub_401938()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401940
int RTTIDerivedA_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_401961 at 0x401961
void sub_401961(void* this_ptr)
{
 RTTIDerivedA_getType(this_ptr);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401970
void RTTIDerivedA_getType(void* this_ptr)
{
 (void)this_ptr;
}


// Function: sub_401976 at 0x401976
void sub_401976()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401980
int RTTIBase_destructor(void* this_ptr)
{
 (void)this_ptr;
 return 0;
}


// Function: sub_401981 at 0x401981
int sub_401981()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401990
int RTTIDerivedB_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_4019b1 at 0x4019b1
void sub_4019b1(void* this_ptr)
{
 RTTIDerivedB_getType(this_ptr);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019c0
void RTTIDerivedB_getType(void* this_ptr)
{
 (void)this_ptr;
}


// Function: sub_4019c6 at 0x4019c6
void sub_4019c6()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0xffffffff;
}


// Function: sub_401a12 at 0x401a12
void sub_401a12()
{
}



/* CRT stub function _fini removed by preprocessor */


