// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* C++ exception handling declarations */
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, void *type, void *dest);
extern void *__cxa_begin_catch(void *exception);
extern void __cxa_end_catch(void);
extern void __cxa_end_cleanup(void);
extern void __cxa_rethrow(void);

/* RTTI support */
void *__dynamic_cast(void *ptr, void *src, void *dst, int offset)
{
    /* Simple stub implementation for RTTI dynamic_cast */
    return ptr;
}
extern unsigned int _ZTIi;

/* ARM EABI helper */
extern int __aeabi_dcmpgt(double a, double b);

/* Implementation of __aeabi_dcmpgt */
int __aeabi_dcmpgt(double a, double b)
{
    return a > b ? 1 : 0;
}

/* Angr ARM condition code helper */
int armg_calculate_condition(int cond, unsigned int arg1, unsigned int arg2, int c_flag)
{
    /* Simplified ARM condition code evaluation */
    switch (cond) {
        case 0: /* EQ - Equal */
            return (arg1 == arg2) ? 1 : 0;
        case 1: /* NE - Not Equal */
            return (arg1 != arg2) ? 1 : 0;
        case 2: /* CS/HS - Carry Set / Unsigned Higher or Same */
            return (arg1 >= arg2) ? 1 : 0;
        case 3: /* CC/LO - Carry Clear / Unsigned Lower */
            return (arg1 < arg2) ? 1 : 0;
        case 4: /* MI - Minus / Negative */
            return ((int)arg1 < 0) ? 1 : 0;
        case 5: /* PL - Plus / Positive or Zero */
            return ((int)arg1 >= 0) ? 1 : 0;
        case 8: /* HI - Unsigned Higher */
            return (arg1 > arg2) ? 1 : 0;
        case 9: /* LS - Unsigned Lower or Same */
            return (arg1 <= arg2) ? 1 : 0;
        case 10: /* GE - Signed Greater or Equal */
            return ((int)arg1 >= (int)arg2) ? 1 : 0;
        case 11: /* LT - Signed Less Than */
            return ((int)arg1 < (int)arg2) ? 1 : 0;
        case 12: /* GT - Signed Greater Than */
            return ((int)arg1 > (int)arg2) ? 1 : 0;
        case 13: /* LE - Signed Less or Equal */
            return ((int)arg1 <= (int)arg2) ? 1 : 0;
        case 14: /* AL - Always */
            return 1;
        case 18: /* Custom Angr condition */
            return (arg1 != 0) ? 1 : 0;
        case 66: /* Custom Angr condition - likely NE for bounds check */
            return (arg1 != 0) ? 1 : 0;
        default:
            return 0;
    }
}

/* C++ new/delete operators */
extern void *operator new(size_t size);
extern void operator delete(void *ptr);

/* CRT stub function _init removed by preprocessor */




/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x400afc
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4; // [bp-0x1c]
 char v5; // [bp-0xc]

 strncpy(v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400b64
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400b80
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((void (*)(class Base *, int))*(void **)(arg_0))(arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x400b8c
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x400b94
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x400b9c
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x400ba8
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x400bb0
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x400bb8
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x400bc0
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x400bc8
void test_cpp_exception()
{
 return;
}


// Function: sub_400bf4 at 0x400bf4
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_400bf4(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: sub_400c1c at 0x400c1c
void sub_400c1c(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x400c98
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x400ca4
typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern unsigned int _ZTIi;

/* RTTI typeinfo definitions */
unsigned int _ZTIi;
unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;
unsigned int _ZTI8RTTIBase;
unsigned int _ZTI12RTTIDerivedA;
unsigned int _ZTI12RTTIDerivedB;

/* Global string constants and variables */
extern char g_40113d[];
extern char g_40115b[];
extern char g_401177[];
extern char g_401193[];
extern char g_4011af[];
extern char g_4011cc[];
extern char g_4011e8[];
extern char g_401204[];
extern char g_401220[];
extern char g_40123c[];
extern char g_401259[];
extern char g_401276[];
extern char g_401294[];

char g_40113d[] = "%d\n";
char g_40115b[] = "%d\n";
char g_401177[] = "%d\n";
char g_401193[] = "%d\n";
char g_4011af[] = "%d\n";
char g_4011cc[] = "%d\n";
char g_4011e8[] = "%d\n";
char g_401204[] = "%d\n";
char g_401220[] = "%d\n";
char g_40123c[] = "%d\n";
char g_401259[] = "%d\n";
char g_401276[] = "%d\n";
char g_401294[] = "Testing C++ OO features\n";
struct RTTIBase_vtable {
    void *type_info;
};
struct RTTIBase_vtable g_411ed8 = {&_ZTI8RTTIBase};
struct RTTIBase_vtable g_411eec = {&_ZTI8RTTIBase};

void test_cpp_rtti()
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 void* p; // r4
 struct_0 **ptr; // r5
 unsigned int result; // r0
 unsigned int flag1; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v1 = v8;
 v0 = v9;
 p = operator new(4);
 *((struct_0 **)p) = (struct_0 *)&g_411ed8;
 ptr = (struct_0 **)operator new(4);
 *ptr = (struct_0 *)&g_411eec;
 result = (unsigned int)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag1 = (unsigned int)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 if (!flag1)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d70
unsigned int _ZN14LifecycleClass14instance_countE = 0;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4; // [bp-0x1c]
 char v5; // [bp-0xc]

 puts(g_401294);
 strncpy(&v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 printf(g_40113d, strlen(&v1) + 4700);
 printf(g_40115b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_401177, 42);
 printf(g_401193, 71);
 printf(g_4011af, 650);
 printf(g_4011cc, 22);
 printf(g_4011e8, 39);
 printf(g_401204, 16);
 printf(g_401220, 85);
 test_cpp_exception();
 printf(g_401259, 703);
 test_cpp_rtti();
 return;
}


// Function: main at 0x400ef4
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x400f08
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x400f14
double template_max_double(double arg_0, double arg_1)
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v1 = v8;
 v0 = v9;
 result = __aeabi_dcmpgt(arg_0, arg_1);
 if (result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return arg_0;
 }
 else
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return arg_1;
 }
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x400f48
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x400f5c
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x400f68
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = (int)((char*)ptr)[40];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&((char*)ptr)[40]) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x400f80
void Container_int_get(void* this_ptr, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_400f90;
 return;
LABEL_400f90:
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x400fa0
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x400fa8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[80]) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x400fb4
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 index = (int)((char*)ptr)[80];
 if (9 >= index)
 goto LABEL_400fc0;
 return;
LABEL_400fc0:
 *((unsigned int *)((char *)ptr + 8 * index)) = v1;
 *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
 *((unsigned int *)&((char*)ptr)[80]) = index + 1;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x400fd8
void Container_double_get(void* this_ptr, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_400ff0;
 return;
LABEL_400ff0:
 if (arg_0 >= (int)((char*)this_ptr)[80])
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401004
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x40100c
int RTTIDerivedA_destructor(void* this_ptr)
{
 operator delete(this_ptr);
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401010
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401018
int RTTIBase_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40101c
int RTTIDerivedB_destructor(void* this_ptr)
{
 operator delete(this_ptr);
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401020
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


