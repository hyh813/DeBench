// Angr Decompilation of 5-1_gcc_Os_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_109bc at 0x109bc
extern unsigned int g_22008;

int sub_109bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: _Z18test_cpp_exceptionv at 0x10b08
extern unsigned int _ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern int armg_calculate_condition(int, unsigned int, unsigned int, unsigned int);
extern void* __cxa_begin_catch();
extern void __cxa_end_catch(void*);
extern void __cxa_rethrow();
extern void* __cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void*, void*, void (*)(void*));
extern void __cxa_end_cleanup();
extern int strlen(const char*);
extern char* strncpy(char*, const char*, unsigned int);
extern void null_destructor(void*);
typedef void (*destructor_func_t)(void*);
extern int __aeabi_d2iz(double, unsigned int);
extern int __aeabi_dcmpgt(double, double);

void test_cpp_exception()
{
 unsigned int *ptr; // r0
 unsigned int flag1; // r1
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int result; // r4
 unsigned int *v10; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw((void*)ptr, (void*)&_ZTIi, (void (*)(void*))null_destructor);
 if (flag1 != 1)
 {
 if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
 goto LABEL_10b38;
 }
 else
 {
 if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
 {
LABEL_10b38:
 result = flag1;
 __cxa_rethrow();
 void* catch_ptr = __cxa_begin_catch();
 __cxa_end_catch(catch_ptr);
 }
 }
 if (result == 1)
 goto LABEL_10b60;
 while (true)
 {
 __cxa_end_cleanup();
LABEL_10b60:
 v10 = (unsigned int *)__cxa_begin_catch();
 __cxa_end_catch((void*)v10);
 __cxa_throw(__cxa_allocate_exception(result), (void*)&_ZTIZ18test_cpp_exceptionvE16DerivedException, (void (*)(void*))null_destructor);
 if (flag1 == 2)
 {
 __cxa_begin_catch();
 __cxa_end_catch((void*)0);
 return;
 }
 else if (flag1 == 3)
 {
 __cxa_begin_catch();
 __cxa_end_catch((void*)0);
 return;
 }
 }
}


// Function: main at 0x10bbc
extern void test_cpp_oo_features();
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10bcc
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;
extern void std_ios_base_Init_Init(unsigned int);
extern void std_ios_base_Init_destroy(unsigned int);
extern int __aeabi_atexit(void*, void (*)(void*), void*);

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 std_ios_base_Init_Init(0x22098);
 v0 = __aeabi_atexit((void*)0x22098, std_ios_base_Init_destroy, (void*)0x2208c);
 return __aeabi_atexit((void*)0x22098, std_ios_base_Init_destroy, (void*)0x2208c);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10c34 at 0x10c34
extern void abort(void);
void sub_10c34()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10cf4
extern unsigned int __glibc___stack_chk_guard;
extern void __stack_chk_fail(void);

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
 if (!(v2 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x10d60
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10d7c
typedef struct {
 unsigned int vtable;
} Base;

extern Base g_11b08;

void call_virtual_func(Base *arg_0, int arg_1)
{
 unsigned int vtable = *((int *)arg_0);
 ((void (*)(void*, int))vtable)((void*)arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x10d88
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11af0;
extern Base g_11b08;
extern void __stack_chk_fail(void);

void test_cpp_virtual_func()
{
 unsigned int v5; // r3
 unsigned int v6; // r2
 unsigned int v7; // r1
 Base v8; // r0
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v1 = (unsigned int)&v8;
 v4 = __glibc___stack_chk_guard;
 v1 = 72432;
 v2 = 72456;
 v3 = 3;
 call_virtual_func((Base *)&v1, 5);
 call_virtual_func((Base *)&v2, 5);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10e08
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10e10
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10e18
extern unsigned int __glibc___stack_chk_guard;
extern int template_max_int(int, int);
extern double template_max_double(double, double);
extern void template_swap_int(unsigned int *, unsigned int *);
extern void __stack_chk_fail(void);

void test_cpp_template_func()
{
 unsigned int v6; // r3
 unsigned int v7; // r2
 unsigned int v8; // r1
 unsigned int v9; // r0
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]

 v5 = v6;
 v4 = v7;
 v2 = v8;
 v0 = v9;
 v5 = __glibc___stack_chk_guard;
 template_max_int(3, 7);
 v10 = (unsigned int)template_max_double(0, 0x40040000);
 v2 = 10;
 v4 = 20;
 template_swap_int(&v2, &v4);
 __aeabi_d2iz(v10, v8);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x10ec0
extern unsigned int __glibc___stack_chk_guard;
extern void Container_int_push(unsigned int *, int);
extern void __stack_chk_fail(void);

void test_cpp_template_class()
{
 unsigned int v4; // lr
 unsigned int v0; // [bp-0x38]
 unsigned int result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 result = 1;
 v0 = 10;
 Container_int_push(&v0, 20);
 Container_int_push(&v0, 30);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z15test_cpp_lambdav at 0x10f40
void test_cpp_lambda()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10f48
extern char _ZTI12RTTIDerivedA;
extern char g_11c68;
extern char g_11c7c;
extern void* operatornew(unsigned int);
extern int std_type_info_operator_eq(int, int);

void test_cpp_rtti()
{
 void* *p; // r6
 void* *ptr; // r5
 unsigned int result; // r0
 char *cur; // r0

 p = (void* *)operatornew(4);
 *(p) = (void*)((unsigned int)72808);
 ptr = (void* *)operatornew(4);
 *(ptr) = (void*)((unsigned int)72828);
 result = (unsigned int)std_type_info_operator_eq((int)((unsigned int *)(*(p)))[4], 0x11ac0);
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10f9a;
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 {
LABEL_10f99:
 goto LABEL_10f9a;
 }
 }
LABEL_10f9a:
 cur = (char *)*((int *)((int)((unsigned int *)(*(p)))[4] + 4));
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 ((void (*)(void*))((unsigned int *)(*(p)))[4])(p);
 ((void (*)(void*))((unsigned int *)(*(ptr)))[4])(ptr);
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x11038
extern unsigned int __glibc___stack_chk_guard;
extern void* operatornew(unsigned int);
extern void* operatornew_array(unsigned int);
extern void __stack_chk_fail(void);

void test_cpp_smart_ptr()
{
 unsigned int v6; // lr
 unsigned int v7; // r4
 unsigned int v8; // r3
 unsigned int v9; // r2
 unsigned int v10; // r1
 unsigned int v11; // r0
 unsigned int *addr; // r0
 unsigned int *ptr; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int *v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int p[5]; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v0 = v9;
 v1 = (unsigned int *)v10;
 v0 = v11;
 v3 = __glibc___stack_chk_guard;
 addr = (unsigned int *)operatornew(4);
 *(addr) = 200;
 v1 = addr;
 v0 = 0;
 ptr = (unsigned int *)operatornew_array(20);
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 p[0] = (unsigned int)ptr;
 p[4] = 5;
 if (!(v3 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_110c4 at 0x110c4
int sub_110c4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
 unsigned int v0; // r0

 __cxa_end_cleanup();
 return 0;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x110ec
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11c20;
extern unsigned int g_11c38;
extern unsigned int g_11c54;
extern void DiamondDerived_func(unsigned int *);
extern void __stack_chk_fail(void);

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = 72736;
 v1 = 72760;
 v2 = 72788;
 v3 = 50;
 DiamondDerived_func(&v2);
 v3 = 100;
 DiamondDerived_func(&v2);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_oo_featuresv at 0x1117c
extern char g_11866;
extern char g_1188a;
extern char g_118a8;
extern char g_118c4;
extern char g_118e0;
extern char g_118fc;
extern char g_11919;
extern char g_11935;
extern char g_11951;
extern char g_1196d;
extern char g_11989;
extern char g_119a6;
extern char g_119c3;

extern int puts(const char*);
extern int __printf_chk(int, const char*);

void test_cpp_oo_features()
{
 puts((const char*)0x11866);
 test_cpp_member_func();
 __printf_chk(1, (const char*)0x1188a);
 test_cpp_constructor();
 __printf_chk(1, (const char*)0x118a8);
 test_cpp_virtual_func();
 __printf_chk(1, (const char*)0x118c4);
 test_cpp_multiple_inheritance();
 __printf_chk(1, (const char*)0x118e0);
 test_cpp_diamond_inheritance();
 __printf_chk(1, (const char*)0x118fc);
 test_cpp_operator_overload();
 __printf_chk(1, (const char*)0x11919);
 test_cpp_template_func();
 __printf_chk(1, (const char*)0x11935);
 test_cpp_template_class();
 __printf_chk(1, (const char*)0x11951);
 test_cpp_lambda();
 __printf_chk(1, (const char*)0x1196d);
 test_cpp_exception();
 __printf_chk(1, (const char*)0x11989);
 test_cpp_smart_ptr();
 __printf_chk(1, (const char*)0x119a6);
 test_cpp_rtti();
 __printf_chk(1, (const char*)0x119c3);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x112b0
void Base_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x112b8
void Base_getName(void* this_ptr)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x112c4
int Base_destroy(void* this_ptr)
{
 return 0;
}


// Function: _ZN7Derived12virtual_funcEi at 0x112c8
void Derived_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x112d4
void Derived_getName(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x112e0
void MultiDerived_funcA(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x112e8
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x112f0
unsigned int thunk_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN11VirtualBase4funcEv at 0x112f8
void VirtualBase_func(void* this_ptr)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x11300
int VirtualBase_destroy(void* this_ptr)
{
 return 0;
}


// Function: _ZN7MiddleA4funcEv at 0x11304
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1131c
int thunk_MiddleA_func(void* a0)
{
 unsigned int v0; // r0

 MiddleA_func((void*)((char *)a0 + ((unsigned int*)((unsigned int*)a0)[0])[12]));
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x11330
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x11348
int thunk_MiddleB_func(void* a0)
{
 unsigned int v0; // r0

 MiddleB_func((void*)((char *)a0 + ((unsigned int*)((unsigned int*)a0)[0])[12]));
 return 0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x1135c
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11374
int thunk_DiamondDerived_func(void* a0)
{
 unsigned int v0; // r0

 DiamondDerived_func((void*)((char *)a0 + ((unsigned int*)((unsigned int*)a0)[0])[12]));
 return 0;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11388
int thunk_DiamondDerived_func_nonvirtual(void* a0)
{
 unsigned int v0; // r0

 DiamondDerived_func((void*)((char *)a0 - 8));
 return 0;
}


// Function: _ZN7MiddleAD1Ev at 0x11390
extern char g_11b2c;
extern char g_11b48;

int MiddleA_D1Ev(void* ptr)
{
 *((unsigned int *)ptr) = 72492;
 *((unsigned int *)((char*)ptr + 8)) = 72520;
 return 0;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x113a8
extern char g_11b2c;
extern char g_11b48;

void* thunk_MiddleA_D1Ev(void* a0)
{
 unsigned int v0; // r1

 v0 = ((unsigned int*)((unsigned int*)a0)[0])[16];
 *((unsigned int *)((char *)a0 + v0)) = 72492;
 *((unsigned int *)((char *)a0 + 8 + v0)) = 72520;
 return a0;
}


// Function: _ZN7MiddleBD1Ev at 0x113d0
extern char g_11b68;
extern char g_11b84;

int MiddleB_D1Ev(void* ptr)
{
 *((unsigned int *)ptr) = 72552;
 *((unsigned int *)((char*)ptr + 8)) = 72580;
 return 0;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x113e8
extern char g_11b68;
extern char g_11b84;

void* thunk_MiddleB_D1Ev(void* a0)
{
 unsigned int v0; // r1

 v0 = ((unsigned int*)((unsigned int*)a0)[0])[16];
 *((unsigned int *)((char *)a0 + v0)) = 72552;
 *((unsigned int *)((char *)a0 + 8 + v0)) = 72580;
 return a0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x11410
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11418
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x11420
int RTTIDerivedB_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11424
int RTTIDerivedA_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11428
int MultiDerived_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x1142c
void* thunk_MultiDerived_D1Ev(void* a0)
{
 return (void*)((char*)a0 - 8);
}


// Function: _ZN7DerivedD2Ev at 0x11434
int Derived_D2Ev(void* this_ptr)
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x11438
extern void operatordelete(void*, unsigned int);
int Base_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x11450
int Derived_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11468
int MultiDerived_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x11480
void* thunk_MultiDerived_D0Ev(void* a0)
{
 return a0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x11488
int VirtualBase_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x114a0
int RTTIDerivedB_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x114b8
int RTTIDerivedA_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN7MiddleAD0Ev at 0x114d0
extern char g_11b2c;
extern char g_11b48;
extern void operatordelete(void*, unsigned int);

int MiddleA_D0Ev(void* ptr)
{
 *((unsigned int *)ptr) = 72492;
 *((unsigned int *)&ptr[8]) = 72520;
 operatordelete(ptr, 16);
 return 0;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x114fc
int thunk_MiddleA_D0Ev(void* a0)
{
 return 0;
}


// Function: _ZN7MiddleBD0Ev at 0x11510
extern char g_11b68;
extern char g_11b84;
extern void operatordelete(void*, unsigned int);

int MiddleB_D0Ev(void* ptr)
{
 *((unsigned int *)ptr) = 72552;
 *((unsigned int *)&ptr[8]) = 72580;
 operatordelete(ptr, 16);
 return 0;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x1153c
int thunk_MiddleB_D0Ev(void* a0)
{
 return 0;
}


// Function: _ZN7MiddleAD2Ev at 0x11550
typedef struct struct_0 {
 unsigned int* field_0;
 unsigned int field_4;
} struct_0;

int MiddleA_D2Ev(void* p)
{
 struct_0 *ptr = (struct_0*)p; // r1
 unsigned int* v1; // r2

 v1 = ptr->field_0;
 *((unsigned int *)p) = (unsigned int)v1;
 *((unsigned int *)((char *)p + v1[12])) = ptr->field_4;
 return 0;
}


// Function: _ZN7MiddleBD2Ev at 0x11568

int MiddleB_D2Ev(void* p)
{
 struct_0 *ptr = (struct_0*)p; // r1
 unsigned int* v1; // r2

 v1 = ptr->field_0;
 *((unsigned int *)p) = (unsigned int)v1;
 *((unsigned int *)((char *)p + v1[12])) = ptr->field_4;
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11580
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x1158c
double template_max_double(double arg_0, double arg_1)
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
 double v2; // [bp-0x10]
 double v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v2 = v9;
 v1 = v10;
 v0 = v11;
 result = __aeabi_dcmpgt(arg_0, arg_1);
 if (!result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return arg_1;
 }
 else
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 return arg_1;
 }
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x115bc
void template_swap_int(unsigned int *arg_0, unsigned int *arg_1)
{
 unsigned int v0; // r3
 unsigned int *p; // r1

 v0 = *(arg_0);
 *(arg_0) = *(arg_1);
 *(arg_1) = v0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x115d0
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&((unsigned int*)ptr)[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x115dc
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = (int)((unsigned int*)ptr)[40];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&((unsigned int*)ptr)[40]) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
}


// Function: _ZNK9ContainerIiE3getEi at 0x115f4
void Container_int_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11618
void Container_int_getSize(void* this_ptr)
{
}


// Function: _ZN9ContainerIdEC1Ev at 0x11620
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&((unsigned int*)ptr)[80]) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x1162c
void Container_double_push(void* p, double arg_0)
{
 unsigned int v0; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3

 v0 = (int)((unsigned int*)p)[80];
 if (9 >= v0)
 goto LABEL_11638;
 return;
LABEL_11638:
 *((unsigned int *)&((unsigned int*)p)[80]) = v0 + 1;
 *((unsigned int *)((char *)p + 8 * v0)) = *(unsigned int*)&v2;
 *((unsigned int *)((char *)p + 4 + 8 * v0)) = *((unsigned int*)&v2 + 1);
}


// Function: _ZNK9ContainerIdE3getEi at 0x1164c
void Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11678
void Container_double_getSize(void* this_ptr)
{
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x11680
extern void operatordelete(void*, unsigned int);
int unique_ptr_int_destructor(void* this_ptr)
{
 if (*((int *)this_ptr))
 operatordelete(*((int *)this_ptr), 4);
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x116a4
extern void operatordelete_array(void*);
int unique_ptr_int_array_destructor(void* this_ptr)
{
 if (*((int *)this_ptr))
 operatordelete_array(*((int *)this_ptr));
 return 0;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x116c4
extern unsigned int g_11c20;
extern unsigned int g_11c38;
extern unsigned int g_11c54;

int DiamondDerived_D4Ev(void* ptr)
{
 unsigned int v0; // r3
 unsigned int result; // r1

 v0 = g_11c20;
 *((unsigned int *)ptr) = g_11c20;
 result = 0;
 if (result)
 v0 = 0x10;
 *((unsigned int *)((char *)ptr + v0)) = g_11c54;
 *((unsigned int *)((char*)ptr + 8)) = g_11c38;
 if (result)
 return 0;
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11748
int DiamondDerived_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11754
void* thunk_DiamondDerived_D1Ev(void* a0)
{
 return (void*)((char*)a0 - 8);
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x1175c
void* thunk_DiamondDerived_D1Ev_virtual(void* a0)
{
 unsigned int* vtable_ptr = (unsigned int*)a0;
 unsigned int* vtable = (unsigned int*)*vtable_ptr;
 int offset = (int)vtable[16];
 char* adjusted = (char*)a0 + offset;
 return (void*)adjusted;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11770
extern void operatordelete(void*, unsigned int);
int DiamondDerived_D0Ev(void* this_ptr)
{
 operatordelete(this_ptr, 24);
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11790
void* thunk_DiamondDerived_D0Ev(void* a0)
{
 DiamondDerived_D0Ev((void*)((char*)a0 - 8));
 return (void*)((char*)a0 - 8);
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x11798
void* thunk_DiamondDerived_D0Ev_virtual(void* a0)
{
 unsigned int* vtable_ptr = (unsigned int*)a0;
 unsigned int* vtable = (unsigned int*)*vtable_ptr;
 int offset = (int)vtable[16];
 char* adjusted = (char*)a0 + offset;
 DiamondDerived_D0Ev(adjusted);
 return (void*)adjusted;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x117ac
int DiamondDerived_D2Ev(void* this_ptr)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


