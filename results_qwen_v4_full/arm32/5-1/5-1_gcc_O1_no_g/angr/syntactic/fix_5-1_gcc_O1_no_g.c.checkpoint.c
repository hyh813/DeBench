// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */


// Stub implementations for undefined symbols
void* operatornew(int size) { return (void*)0; }
void* operatornew_array(int size) { return (void*)0; }
void operatordelete(void* ptr, int size) { }
unsigned int _ZN14LifecycleClass14instance_countE = 0;
int type_info_operator_equal(int a0, int a1) { return 0; }
int armg_calculate_condition(int a0, int a1, int a2, int a3) { return 0; }
void __stack_chk_fail(void) { }
int __aeabi_dcmpgt(void) { return 0; }
int __printf_chk(int flag, const char *format, ...) { return 0; }
int puts(const char *s) { return 0; }
unsigned int strlen(const char *s) { return 0; }
void abort(void) { }
char* strncpy(char* dest, const char* src, unsigned int n) { return dest; }


// Function: sub_109bc at 0x109bc
unsigned int g_22008 = 0;
typedef unsigned int size_t;
extern size_t strlen(const char *s);
extern char* strncpy(char* dest, const char* src, size_t n);
extern void* operatornew(int size);
extern void* operatornew_array(int size);
extern void operatordelete(void* ptr, int size);
extern int armg_calculate_condition(int a0, int a1, int a2, int a3);
extern void* __cxa_allocate_exception(int size);
extern void __cxa_throw(void* exc, void* type);
extern void* __cxa_begin_catch(void** exc_ptr);
extern int __aeabi_dcmpgt();
extern void abort();
extern int type_info_operator_equal(int a0, int a1);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);

int sub_109bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_22008;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10b40 at 0x10b40
void sub_10b40()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10c00
unsigned int __glibc___stack_chk_guard = 0;

void __stack_chk_fail(void);

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


// Function: _Z20test_cpp_constructorv at 0x10c6c
extern unsigned int _ZN14LifecycleClass14instance_countE;

void operatordelete(void* ptr, int size);

void test_cpp_constructor()
{
 unsigned int *ptr; // r0

 ptr = (unsigned int *)operatornew_array(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operatordelete(ptr, 20);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10cd0
class Base {
};
extern Base g_1187c;
extern Base g_11894;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((void(*)(void*))(*((int *)arg_0)))(arg_0);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x10ce4
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0 = 71804;
 v1 = 71828;
 v2 = 3;
 call_virtual_func((class Base *)&v0, 5);
 call_virtual_func((class Base *)&v1, 5);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10d68
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x10d70
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11934;
extern unsigned int g_1194c;
extern char g_11968;

int thunk_DiamondDerived_func(void* a0);

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = 71988;
 v2 = 72040;
 v1 = 72012;
 v3 = 50;
 thunk_DiamondDerived_func(&v2);
 v3 = 100;
 thunk_DiamondDerived_func(&v2);
 if ((v4 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10df4
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10dfc
extern unsigned int __glibc___stack_chk_guard;

int template_max_int(int arg_0, int arg_1);
int template_swap_int(unsigned int *ptr, unsigned int *p);

void test_cpp_template_func()
{
 unsigned int v3; // r0
 unsigned int v4; // r1
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v2 = __glibc___stack_chk_guard;
 template_max_int(3, 7);
 v3 = 0;
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x10eac
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x10eb4
void test_cpp_lambda()
{
 return;
}





// Function: _Z18test_cpp_smart_ptrv at 0x10f78
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10f84
extern char _ZTI12RTTIDerivedA;
extern char g_1197c;
extern char g_11990;

int armg_calculate_condition(int a0, int a1, int a2, int a3);

void test_cpp_rtti()
{
 void* p; // r5
 void* ptr; // r4
 unsigned int result; // r0
 char *cur; // r0

 p = operatornew(4);
 *(int*)p = 72060;
 ptr = operatornew(4);
 *(int*)ptr = 72080;
 result = (unsigned int)type_info_operator_equal((int)((int*)p)[1], 0x1184c);
 if (!result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10fca;
 }
 else
 {
 if (armg_calculate_condition(18, result, 0, 0))
 goto LABEL_10fc9;
 }
LABEL_10fc9:
LABEL_10fca:
 cur = (char *)*((int *)((int)((int*)p)[1] + 4));
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 ((void(*)(void*))((int)((int*)p)[1]))(p);
 ((void(*)(void*))((int)((int*)ptr)[1]))(ptr);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x11074
extern char g_115e4;
extern char g_11608;
extern char g_11644;
extern char g_11660;
extern char g_1167c;
extern char g_1169c;
extern char g_116b8;
extern char g_116d4;
extern char g_116f0;
extern char g_1170c;
extern char g_1172c;
extern char g_1174c;

void test_cpp_oo_features()
{
 puts((const char*)0x115e4);
 test_cpp_member_func();
 __printf_chk(1, (const char*)0x11608, 0);
 test_cpp_constructor();
 __printf_chk(1, "CPP-L3-02: %d", 0);
 test_cpp_virtual_func();
 __printf_chk(1, (const char*)0x11644, 0);
 test_cpp_multiple_inheritance();
 __printf_chk(1, (const char*)0x11660, 0);
 test_cpp_diamond_inheritance();
 __printf_chk(1, (const char*)0x1167c, 22);
 test_cpp_template_func();
 __printf_chk(1, (const char*)0x116b8, 0);
 __printf_chk(1, (const char*)0x116d4, 16);
 __printf_chk(1, (const char*)0x116f0, 85);
 __printf_chk(1, (const char*)0x1170c, 0);
 test_cpp_smart_ptr();
 __printf_chk(1, (const char*)0x1172c, 0);
 test_cpp_rtti();
 __printf_chk(1, (const char*)0x1174c, 0);
 return;
}


// Function: main at 0x1119c
int main()
{
 test_cpp_oo_features();
 return 0;
}





// Function: _ZN4Base12virtual_funcEi at 0x111dc
void Base_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x111e4
void Base_getName(void* this_ptr)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x111f0
int Base_Destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN7Derived12virtual_funcEi at 0x111f4
void Derived_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x11200
void Derived_getName(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x1120c
void MultiDerived_funcA(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x11214
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x1121c
unsigned int thunk_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x11224
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1123c
int thunk_MiddleA_func(void* a0)
{
 return *((int *)(4 + (char *)a0 + ((int*)a0)[3] + *((int *)(*((int *)((char *)a0 + ((int*)a0)[3])) - 12)))) + 150;
}


// Function: _ZN7MiddleB4funcEv at 0x11260
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x11278
int thunk_MiddleB_func(void* a0)
{
 return *((int *)(4 + (char *)a0 + ((int*)a0)[3] + *((int *)(*((int *)((char *)a0 + ((int*)a0)[3])) - 12)))) + 200;
}


// Function: _ZN14DiamondDerived4funcEv at 0x1129c
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x112b4
int thunk_DiamondDerived_func(void* a0)
{
 return *((int *)(4 + (char *)a0 + ((int*)a0)[3] + *((int *)(*((int *)((char *)a0 + ((int*)a0)[3])) - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x112d8
int thunk_DiamondDerived_func_nonvirtual(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)((int*)a0)[2] - 12)))) + 250;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x112f0
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x112f8
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x11300
int RTTIDerivedB_Destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11304
int RTTIDerivedA_Destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11308
int DiamondDerived_Destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x1130c
void* thunk_DiamondDerived_Destructor(void* a0)
{
 return (char *)a0 + ((int *)a0)[4];
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x1131c
int thunk_DiamondDerived_Destructor_nonvirtual(int a0)
{
 return a0 - 8;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11324
int MultiDerived_Destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x11328
int thunk_MultiDerived_Destructor_nonvirtual(int a0)
{
 return a0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x11330
int Derived_Destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x11334
int Base_Destructor0(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x1134c
int Derived_Destructor0(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11364
int MultiDerived_Destructor0(void* this_ptr)
{
 operatordelete(this_ptr, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x1137c
void* thunk_MultiDerived_Destructor0_nonvirtual(void* a0)
{
 operatordelete((char *)a0 - 8, 16);
 return (char *)a0 - 8;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x11398
int RTTIDerivedA_Destructor0(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x113b0
int RTTIDerivedB_Destructor0(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x113c8
int DiamondDerived_Destructor0(void* this_ptr)
{
 operatordelete(this_ptr, 24);
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x113e0
void* thunk_DiamondDerived_Destructor0(void* a0)
{
 void* v0; // r4

 v0 = (char *)a0 + ((int *)a0)[4];
 operatordelete(v0, 24);
 return v0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11404
void* thunk_DiamondDerived_Destructor0_nonvirtual(void* a0)
{
 operatordelete((char *)a0 - 8, 24);
 return (char *)a0 - 8;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11420
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x1142c
int armg_calculate_condition(int a0, int a1, int a2, int a3);

double template_max_double()
{
 unsigned int v6; // lr
 unsigned int v7; // r8
 unsigned int v8; // r7
 unsigned int v9; // r6
 unsigned int v10; // r5
 unsigned int v11; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v2 = v9;
 v1 = v10;
 v0 = v11;
 result = __aeabi_dcmpgt();
 if (!result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return 0.0;
 }
 else
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return 0.0;
 }
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x1145c
int template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // r3

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return 0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x11470
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x1147c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = (int)((int*)ptr)[40];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&((char*)ptr)[40]) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x11494
void Container_int_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x114c0
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x114c8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[80]) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x114d4
int armg_calculate_condition(int a0, int a1, int a2, int a3);

void Container_double_push(void* ptr)
{
 unsigned int v0; // r1
 unsigned int v1; // r12
 unsigned int v3; // r2
 unsigned int v4; // r3
 unsigned int v5; // r2
 unsigned int v6; // r3

 v0 = ((int*)ptr)[80];
 if (v0 <= 9)
 v1 = v0 + 1;
 ((unsigned int *)ptr)[80] = v1;
 if (!armg_calculate_condition(210, v0, 9, 0))
 {
 if (!((char)armg_calculate_condition(210, v0, 9, 0)))
 {
 *((unsigned int *)ptr) = v5;
 *((unsigned int *)&((char*)ptr)[4]) = v6;
 }
 else
 {
 *((unsigned int *)ptr) = v5;
 *((unsigned int *)&((char*)ptr)[4]) = v6;
 }
 }
 else
 {
 if (!((char)armg_calculate_condition(210, v0, 9, 0)))
 {
 *((unsigned int *)((char *)ptr + 8 * v0)) = v3;
 *((unsigned int *)(4 + (char *)ptr + 8 * v0)) = v4;
 }
 else
 {
 *((unsigned int *)((char *)ptr + 8 * v0)) = v3;
 *((unsigned int *)(4 + (char *)ptr + 8 * v0)) = v4;
 }
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x114f0
void Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11528
void Container_double_getSize(void* this_ptr)
{
 return;
}






/* CRT stub function _fini removed by preprocessor */


