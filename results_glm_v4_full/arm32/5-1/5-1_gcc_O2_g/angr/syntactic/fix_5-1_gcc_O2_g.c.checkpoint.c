// Angr Decompilation of 5-1_gcc_O2_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Forward declarations for exception handling
extern void* __cxa_begin_catch(void);
extern void __cxa_end_catch(void);
extern void* __cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void* exception, void* type_info, void* dest);
extern void __cxa_rethrow(void);
extern void __cxa_end_cleanup(void);

// Forward declarations for template functions
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(unsigned int *ptr, unsigned int *p);

// Memory operators
void* operatornew(unsigned int size)
{
    return malloc(size);
}

void operatordelete(void* ptr, unsigned int size)
{
    free(ptr);
}

// Printf with format checking
extern int __printf_chk(int flag, const char *format, ...);

// ARM ABI function
extern int __aeabi_atexit(void *object, void (* destructor)(void *), void *dso_handle);
extern int __aeabi_dcmpgt(double a, double b);

// Placement new
extern void* operator new(unsigned int size, void* ptr);

// Stack protection - define the actual symbols
unsigned int __glibc___stack_chk_guard = 0xdeadbeef;

void __stack_chk_fail(void)
{
 abort(); /* do not return */
}

// Forward declarations for std::ios_base
namespace std {
    class type_info {
    public:
        virtual ~type_info();
        bool operator==(const type_info& rhs) const;
        bool operator!=(const type_info& rhs) const;
    };
    
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
}

class Base {
public:
    virtual void virtual_func(int arg_0) {}
    virtual void getName() {}
    virtual ~Base() {}
};

class MiddleA {
public:
    int func();
};

class MiddleB {
public:
    int func();
};

class MultiDerived {
public:
    void funcA();
    void funcB();
    ~MultiDerived();
};

class DiamondDerived {
public:
    void func();
    ~DiamondDerived();
};

class RTTIDerivedA {
public:
    void getType();
    ~RTTIDerivedA();
};

class RTTIDerivedB {
public:
    void getType();
    ~RTTIDerivedB();
};

// Angr-specific function
char armg_calculate_condition(int a, int b, int c, int d)
{
    return 0;
}

/* CRT stub function _init removed by preprocessor */



// Forward declaration for test_cpp_oo_features
void test_cpp_oo_features(void);

// Forward declaration for test_cpp_exception
void test_cpp_exception(void);







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

void call_virtual_func(class Base *arg_0, int arg_1)
{
 goto *((int *)*((int **)arg_0));
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
 extern int template_max_int(int arg_0, int arg_1);
 extern double template_max_double(double arg_0, double arg_1);
 unsigned int v3; // r0
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = __glibc___stack_chk_guard;
 template_max_int(3, 7);
 v3 = (unsigned int)template_max_double(2.0, 1.5);
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 v4 = (unsigned int)v3;
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10db4
void test_cpp_template_class()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x1092c
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
 void* *ptr; // r5
 void* *p; // r4
 struct_0 *v2; // r0
 unsigned int result; // r3
 char *cur; // r0

 ptr = (void **)operatornew(4);
 *ptr = (void *)71212;
 p = (void **)operatornew(4);
 v2 = (struct_0 *)(((void **)ptr)[1]);
 *p = (void *)71232;
 (void)(*(std::type_info *)v2 == *(std::type_info *)0x115fc);
 if (1)
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
 cur = (char *)((int)(((void **)ptr)[1]) + 4);
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 ((void (*)(void**))((void **)ptr)[1])((void **)ptr);
 ((void (*)(void**))((void **)p)[1])((void **)p);
 (void)result;
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

// Forward declarations for template functions
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);

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
 __printf_chk(1, (const char *)0x11474, strlen(v0[0]) + 4700);
 test_cpp_constructor();
 __printf_chk(1, (const char *)0x114b0, 42);
 __printf_chk(1, (const char *)0x114cc, 71);
 test_cpp_diamond_inheritance();
 __printf_chk(1, (const char *)0x11508, 22);
 test_cpp_template_func();
 __printf_chk(1, (const char *)0x11540, 16);
 test_cpp_exception();
 __printf_chk(1, (const char *)0x1155c, 85);
 test_cpp_smart_ptr();
 test_cpp_rtti();
 v9 = 0;
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, (const char *)0x115b8, v9);
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
void Base_destructor(void* self)
{
 return;
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
unsigned int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x11090
int MiddleA::func()
{
 return 150;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x110a8
int thunk_to_MiddleA_func(void* *a0)
{
 unsigned int v0;
 unsigned int v1;
 unsigned int v2;
 v0 = ((unsigned int *)a0)[3];
 v1 = *((unsigned int *)((char *)a0 + v0));
 v2 = *((int *)((char *)v1 - 12));
 return *((int *)((char *)a0 + v0 + v2 + 4)) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x110cc
int MiddleB::func()
{
 return 200;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x110e4
int thunk_to_MiddleB_func(void* *a0)
{
 unsigned int v0;
 unsigned int v1;
 unsigned int v2;
 v0 = ((unsigned int *)a0)[3];
 v1 = *((unsigned int *)((char *)a0 + v0));
 v2 = *((int *)((char *)v1 - 12));
 return *((int *)((char *)a0 + v0 + v2 + 4)) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x11108
void DiamondDerived::func()
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11120
int thunk_to_DiamondDerived_func(void* *a0)
{
 return *((int *)(4 + (char *)a0 + ((unsigned int *)a0)[3] + *((int *)(*((int *)((char *)a0 + ((unsigned int *)a0)[3])) - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11144
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)((unsigned int *)a0)[2] - 12)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x1115c
void RTTIDerivedA::getType()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11164
void RTTIDerivedB::getType()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x1116c
RTTIDerivedB::~RTTIDerivedB()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11170
RTTIDerivedA::~RTTIDerivedA()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11174
DiamondDerived::~DiamondDerived()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x11178
void* * thunk_to_DiamondDerived_destructor(void* *a0)
{
 return (void **)((char *)a0 + ((unsigned int *)a0)[4]);
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11188
int non_virtual_thunk_to_DiamondDerived_destructor(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11190
MultiDerived::~MultiDerived()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11194
int non_virtual_thunk_to_MultiDerived_destructor(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x1119c
void Derived_destructor(void* self)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x111a0
void Base_deleting_destructor(void* self)
{
 operatordelete(self, 4);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x111b8
void Derived_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x111d0
void MultiDerived_deleting_destructor(void* self)
{
 operatordelete(self, 16);
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x111e8
void* non_virtual_thunk_to_MultiDerived_deleting_destructor(void* a0)
{
 operatordelete(a0 - 8, 16);
 return a0 - 8;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x11204
void RTTIDerivedB_deleting_destructor(void* self)
{
 operatordelete(self, 4);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x1121c
void RTTIDerivedA_deleting_destructor(void* self)
{
 operatordelete(self, 4);
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11234
void DiamondDerived_deleting_destructor(void* self)
{
 operatordelete(self, 24);
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x1124c
void* * thunk_to_DiamondDerived_deleting_destructor(void* *a0)
{
 void* *v0; // r4

 v0 = (void **)((char *)a0 + ((unsigned int *)a0)[4]);
 operatordelete(v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11270
void* non_virtual_thunk_to_DiamondDerived_deleting_destructor(void* a0)
{
 operatordelete(a0 - 8, 24);
 return a0 - 8;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x1128c
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}

// Function: _Z12template_maxIdET_S0_S0_ at 0x112a8
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}





// Function: _Z13template_swapIiEvRT_S1_ at 0x112c8
void template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // r3

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x112dc
void Container_int_Container(void* ptr)
{
 *((unsigned int *)((unsigned char *)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x112e8
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = (unsigned int)((unsigned char *)ptr)[40];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&((unsigned char *)ptr)[40]) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11300
void Container_int_get(void* self, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11324
void Container_int_getSize(void* self)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x1132c
void Container_double_Container(void* ptr)
{
 *((unsigned int *)((unsigned char *)ptr + 80)) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x11338
void Container_double_push(void* p)
{
 unsigned int v0; // r3
 unsigned int *ptr_arr; // r3
 unsigned int v2; // r2
 unsigned int v3; // r3

 v0 = (unsigned int)((unsigned char *)p)[80];
 if (9 >= v0)
 {
    ptr_arr = (unsigned int *)((unsigned char *)p + v0 * 8);
    *((unsigned int *)((unsigned char *)p + 80)) = v0 + 1;
 ptr_arr[0] = v2;
 ptr_arr[1] = v3;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x11368
void Container_double_get(void* self, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11394
void Container_double_getSize(void* self)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


