// Angr Decompilation of 5-1_gcc_Os_g
// Platform: AMD64

#include <string.h>
#include <stdint.h>
#include <stdio.h>

/* Forward declaration for exception handling */
extern void _Unwind_Resume(void*);

/* Forward declaration for type_info */
typedef struct type_info {
    void** vptr;
    const char* name;
} type_info;

/* Forward declarations for C++ ABI and exception handling */
namespace CXXABI_1_3 {
    extern type_info _ZTIi;
}

extern void* __cxa_allocate_exception(unsigned int);
extern void* __cxa_throw(void*, type_info*, void (*)(void*));
extern void* __cxa_begin_catch(void*);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __cxa_finalize(void);
extern int __cxa_atexit(void (*)(void*), void*, void*);
extern void* operatornew(unsigned long);
extern void operator delete(void*, unsigned long);
extern void operator delete(void*);
extern void operator delete(void*, unsigned long);
extern void operator delete[](void*);
extern void operator delete[](void*, unsigned long);
extern void operator delete[](void*, unsigned long);

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
} struct_0;

extern struct_0 *g_405fe8;




// Function: sub_402020 at 0x402020
extern unsigned long long g_405f28;
extern unsigned long long g_405f30;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405f28;
 /* goto g_405f30; */ // Removed - function pointer call not supported
}


// Forward
void DiamondDerived_func(void* arg_this);
int DiamondDerived_base_destructor(void* ptr);
void Base_virtual_func(void* arg_this, int arg_0);
void Derived_virtual_func(void* arg_this, int arg_0);
void Derived_getName(void* arg_this);
void MiddleA_func(void* arg_this);
void RTTIDerivedA_getType(void* arg_this);
void test_cpp_oo_features();
void sub_402030();
void sub_402040();
void sub_402050();
void sub_402060();
void sub_402070();
void sub_402080();
void sub_402090();
void sub_4020a0();
void sub_4020b0();
void sub_4020c0();
void sub_4020d0();
void sub_4020e0();
void sub_4020f0();
void sub_402100();
void sub_402110();
void sub_402120();
void sub_402130();
void sub_402140();
void sub_402150();

// Function: sub_40202d at 0x40202d
void sub_40202d()
{
 sub_402030();
 return;
}


// Function: sub_402030 at 0x402030
void sub_402030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_402020();
 return;
}


// Function: sub_40203f at 0x40203f
void sub_40203f()
{
 sub_402040();
 return;
}


// Function: sub_402040 at 0x402040
void sub_402040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_402020();
 return;
}


// Function: sub_40204f at 0x40204f
void sub_40204f()
{
 sub_402050();
 return;
}


// Function: sub_402050 at 0x402050
void sub_402050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_402020();
 return;
}


// Function: sub_40205f at 0x40205f
void sub_40205f()
{
 sub_402060();
 return;
}


// Function: sub_402060 at 0x402060
void sub_402060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_402020();
 return;
}


// Function: sub_40206f at 0x40206f
void sub_40206f()
{
 sub_402070();
 return;
}


// Function: sub_402070 at 0x402070
void sub_402070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_402020();
 return;
}


// Function: sub_40207f at 0x40207f
void sub_40207f()
{
 sub_402080();
 return;
}


// Function: sub_402080 at 0x402080
void sub_402080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_402020();
 return;
}


// Function: sub_40208f at 0x40208f
void sub_40208f()
{
 sub_402090();
 return;
}


// Function: sub_402090 at 0x402090
void sub_402090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_402020();
 return;
}


// Function: sub_40209f at 0x40209f
void sub_40209f()
{
 sub_4020a0();
 return;
}


// Function: sub_4020a0 at 0x4020a0
void sub_4020a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_402020();
 return;
}


// Function: sub_4020af at 0x4020af
void sub_4020af()
{
 sub_4020b0();
 return;
}


// Function: sub_4020b0 at 0x4020b0
void sub_4020b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_402020();
 return;
}


// Function: sub_4020bf at 0x4020bf
void sub_4020bf()
{
 sub_4020c0();
 return;
}


// Function: sub_4020c0 at 0x4020c0
void sub_4020c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_402020();
 return;
}


// Function: sub_4020cf at 0x4020cf
void sub_4020cf()
{
 sub_4020d0();
 return;
}


// Function: sub_4020d0 at 0x4020d0
void sub_4020d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_402020();
 return;
}


// Function: sub_4020df at 0x4020df
void sub_4020df()
{
 sub_4020e0();
 return;
}


// Function: sub_4020e0 at 0x4020e0
void sub_4020e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_402020();
 return;
}


// Function: sub_4020ef at 0x4020ef
void sub_4020ef()
{
 sub_4020f0();
 return;
}


// Function: sub_4020f0 at 0x4020f0
void sub_4020f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_402020();
 return;
}


// Function: sub_4020ff at 0x4020ff
void sub_4020ff()
{
 sub_402100();
 return;
}


// Function: sub_402100 at 0x402100
void sub_402100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_402020();
 return;
}


// Function: sub_40210f at 0x40210f
void sub_40210f()
{
 sub_402110();
 return;
}


// Function: sub_402110 at 0x402110
void sub_402110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_402020();
 return;
}


// Function: sub_40211f at 0x40211f
void sub_40211f()
{
 sub_402120();
 return;
}


// Function: sub_402120 at 0x402120
void sub_402120()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 15;
 sub_402020();
 return;
}


// Function: sub_40212f at 0x40212f
void sub_40212f()
{
 sub_402130();
 return;
}


// Function: sub_402130 at 0x402130
void sub_402130()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 16;
 sub_402020();
 return;
}


// Function: sub_40213f at 0x40213f
void sub_40213f()
{
 return;
}


// Function: sub_40214f at 0x40214f
void sub_40214f()
{
 return;
}


// Function: sub_40215f at 0x40215f
void sub_40215f()
{
 __cxa_finalize();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4022a0
extern type_info _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // rax
 unsigned long long v3; // rdx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rcx
 unsigned long long v7; // r8
 unsigned long long v8; // r9
 unsigned long long v9; // rdx
 unsigned long long v10; // rax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = (unsigned long long)__cxa_throw(ptr, &CXXABI_1_3::_ZTIi, 0);
 if (v3 == 1)
 {
 __cxa_begin_catch((void*)v2);
 __cxa_rethrow();
 __cxa_end_catch();
 }
 if (v9 != 1)
 _Unwind_Resume(0); /* do not return */
 __cxa_begin_catch((void*)0);
 __cxa_end_catch();
 v10 = (unsigned long long)__cxa_throw(__cxa_allocate_exception(1), (type_info*)&_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 if (v3 != 2)
 {
 if (v3 != 3)
 _Unwind_Resume(0); /* do not return */
 __cxa_begin_catch((void*)0);
 }
 else
 {
 __cxa_begin_catch((void*)v10);
 }
 __cxa_end_catch();
 return;
}


int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_cpp_oo_features();
 return 0;
}


// Function: _ _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x402375
extern void _ZNSt8ios_base4InitD1Ev(void*);
namespace std {
  namespace ios_base {
    struct Init {
      Init(void*);
      ~Init();
    };
  }
}
extern std::ios_base::Init _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 /* Constructor call removed - not supported in decompiled C */
 __cxa_atexit((void (*)(void*))_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4023c5 at 0x4023c5
void sub_4023c5()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4203461 */
}


/* Forward declarations */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_int(unsigned int *ptr);
void Container_int_push(void* ptr, int arg_0);
void Container_int_get(void* ptr, int arg_0);
void Container_double_get(void* ptr, int arg_0);
void Container_double_getSize(void* ptr);

// Function: sub_4023c6 at 0x4023c6
void sub_4023c6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void)
{
}

// Function: sub_4023f9 at 0x4023f9
void sub_4023f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones(void)
{
}



// Function: sub_402439 at 0x402439
void sub_402439()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402475 at 0x402475
void sub_402475()
{
}


// Function: sub_402479 at 0x402479
void sub_402479()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x402489
void test_cpp_member_func()
{
 char v0[31]; // [bp-0x30]
 char result; // [bp-0x11]

 result = 0;
 strlen(strncpy(v0, "Test", 31));
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4024e3
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4024f5
typedef struct Base {
    void** vptr;
} Base;

void call_virtual_func(Base *arg_0, int arg_1)
{
 ((void (*)(Base*, int))(*(long long *)*(long long **)&arg_0))(arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x4024fe
extern unsigned long long g_4058a8;
extern Base g_4058d8;

void test_cpp_virtual_func()
{
 Base* v0; // [bp-0x28]
 Base* v1; // [bp-0x20]
 unsigned int v2; // [bp-0x18]

 v2 = 3;
 v0 = (Base*)&g_4058a8;
 v1 = &g_4058d8;
 call_virtual_func(v0, 5);
 call_virtual_func(v1, 5);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x402571
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x40257b
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402585
void test_cpp_template_func()
{
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9
 unsigned long long v0; // [bp-0x20]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 template_max_int(3, 7);
 template_max_double(v4, v5);
 v1 = 10;
 v0 = 0x4004000000000000;
 v2 = 20;
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402618
void test_cpp_template_class()
{
 unsigned int v0; // [bp-0x3c]
 unsigned int result; // [bp-0x14]

 result = 1;
 v0 = 10;
 Container_int_push(&v0, 20);
 Container_int_push(&v0, 30);
 if (result <= 0)
 return;
 return;
}


// Function: _Z15test_cpp_lambdav at 0x40268d
void test_cpp_lambda()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x402697
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_405b98;
extern char g_405bc0;

void test_cpp_rtti()
{
 unsigned long long v2; // rcx
 void* *ptr; // r13
 struct_2 **v4; // rax
 void* v5; // r14
 struct_2 **p; // rbp
 char *cur; // r12
 unsigned long long v0; // [bp-0x38]

 v0 = v2;
 ptr = (void* *)operatornew(8);
 *(ptr) = &g_405b98;
 v4 = (struct_2 **)operatornew(8);
 v5 = *(ptr);
 p = v4;
 *(p) = (struct_2 *)&g_405bc0;
 cur = *((char **)((char *)v5 + 2));
 if (cur != "12RTTIDerivedA" && *(cur) != 42)
 strcmp(cur, "12RTTIDerivedA");
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
  (*(void (*)(void*))(*((void**)v5 + 1)))(ptr);
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4027ac
typedef struct struct_1 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_1;

void test_cpp_smart_ptr()
{
 unsigned int *p; // rax
 unsigned long long result; // [bp-0x38]
 unsigned int *v1; // [bp-0x30]
 struct_0 *ptr; // [bp-0x28]

 p = (unsigned int *)operatornew(4);
 result = 0;
 *(p) = 200;
 v1 = p;
 ptr = operatornew[](20);
 ptr->field_0 = 8589934593;
 ptr->field_8 = 17179869187;
 ptr->field_10 = 5;
 return;
}


// Function: sub_40284e at 0x40284e
void sub_40284e()
{
 unsigned long long v1; // rax

 _Unwind_Resume(v1); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x40287c
extern unsigned long long g_405b08;
extern unsigned long long g_405b38;
extern unsigned long long g_405b70;

void test_cpp_diamond_inheritance()
{
 unsigned long long v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x40]
 unsigned long long v2; // [bp-0x30]
 unsigned int v3; // [bp-0x28]

 v3 = 50;
 v0 = (unsigned long long)&g_405b08;
 v2 = (unsigned long long)&g_405b70;
 v1 = (unsigned long long)&g_405b38;
 DiamondDerived_func(&v2);
 v3 = 100;
 DiamondDerived_func(&v2);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40290d
extern char g_403016;
extern char g_40303a;
extern char g_403074;
extern char g_4030ac;
extern char g_4030e5;
extern char g_403101;
extern char g_403139;
extern char g_403156;
extern char g_403173;

void test_cpp_oo_features()
{
 unsigned long long v2; // rax
 unsigned int v4; // edi
 char *v5; // rsi
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(&g_403016);
 (test_cpp_member_func(), (void)0);
 __printf_chk(1, &g_40303a, 0);
 test_cpp_constructor();
 __printf_chk(v4, v5);
 test_cpp_virtual_func();
 test_cpp_multiple_inheritance();
 __printf_chk(v4, v5);
 test_cpp_diamond_inheritance();
 test_cpp_operator_overload();
 __printf_chk(v4, v5);
 test_cpp_template_func();
 test_cpp_template_class();
 test_cpp_lambda();
 __printf_chk(v4, v5);
 test_cpp_exception();
 test_cpp_smart_ptr();
 test_cpp_rtti();
 return;
}


// Function: sub_402a57 at 0x402a57
void sub_402a57(unsigned long a0, unsigned long a1)
{
 Base_virtual_func(0, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x402a58
void Base_virtual_func(void* arg_this, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x402a60
void Base_getName(void* arg_this)
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x402a6c
void Base_destructor(void* arg_this)
{
 return;
}


// Function: sub_402a71 at 0x402a71
void sub_402a71(unsigned long a0, unsigned long a1)
{
 Derived_virtual_func(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x402a72
void Derived_virtual_func(void* arg_this, int arg_0)
{
 return;
}


// Function: sub_402a7d at 0x402a7d
void sub_402a7d()
{
 Derived_getName(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x402a7e
void Derived_getName(void* arg_this)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402a8a
void MultiDerived_funcA(void* arg_this)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x402a94
void MultiDerived_funcB(void* arg_this)
{
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x402a9e
unsigned long long MultiDerived_nonvirtual_thunk_funcB()
{
 return 40;
}


// Function: _ZN11VirtualBase4funcEv at 0x402aa8
void VirtualBase_func(void* arg_this)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x402ab2
void VirtualBase_destructor(void* arg_this)
{
 return;
}


// Function: sub_402ab7 at 0x402ab7
void sub_402ab7(unsigned long a0)
{
 MiddleA_func((void*)a0);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x402ab8
void MiddleA_func(void* arg_this)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402acd
void MiddleA_thunk_func(void* *a0)
{
 MiddleA_func((char *)a0 + (long long)(*(unsigned long long*)((char*)*(a0) + 24)));
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x402ada
void MiddleB_func(void* arg_this)
{
 return;
}





// Function: _ZN14DiamondDerived4funcEv at 0x402afc
void DiamondDerived_func(void* arg_this)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402b11
void DiamondDerived_thunk_func(void* *a0)
{
 DiamondDerived_func((char *)a0 + (long long)(*(unsigned long long*)((char*)*(a0) + 24)));
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x402b1e
void DiamondDerived_nonvirtual_thunk_func(void* a0)
{
 DiamondDerived_func(a0 - 16);
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x402b28
extern char g_405920;
extern char g_405958;

void MiddleA_destructor(void* ptr)
{
 *((char **)ptr) = (char *)&g_405920;
 *((char **)((char *)ptr + 16)) = (char *)&g_405958;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x402b3f
typedef struct struct_0_middle_a {
 void* field_0;
 char padding_8[8];
 unsigned long long field_10;
} struct_0_middle_a;

extern char g_405920;
extern char g_405958;

void* MiddleA_thunk_destructor(struct_0_middle_a *a0)
{
 struct_0_middle_a *ptr; // rdi

 ptr = (struct_0_middle_a *)((char *)a0 + (unsigned long long)*(unsigned int*)((unsigned char*)(&a0->field_0) + 32));
 ptr->field_0 = (void *)&g_405920;
 ptr->field_10 = (unsigned long long)&g_405958;
 return ptr;
}


// Function: sub_402b5d at 0x402b5d
void sub_402b5d(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x402b5e
extern char g_405998;
extern char g_4059d0;

void MiddleB_destructor(void* ptr)
{
 *((char **)ptr) = (char *)&g_405998;
 *((char **)((char *)ptr + 16)) = (char *)&g_4059d0;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x402b75
typedef struct struct_0_middle_b {
 void* field_0;
 char padding_8[8];
 unsigned long long field_10;
} struct_0_middle_b;

extern char g_405998;
extern char g_4059d0;

void* MiddleB_thunk_destructor_impl(struct_0_middle_b *a0)
{
 struct_0_middle_b *ptr; // rdi

 ptr = (struct_0_middle_b *)((char *)a0 + (unsigned long long)*(unsigned int*)((unsigned char*)(&a0->field_0) + 32));
 ptr->field_0 = (void *)&g_405998;
 ptr->field_10 = (unsigned long long)&g_4059d0;
 return ptr;
}


// Function: sub_402b93 at 0x402b93
void sub_402b93()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402b94
void RTTIDerivedA_getType(void* arg_this)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402b9e
void RTTIDerivedB_getType(void* arg_this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x402ba8
void RTTIDerivedB_destructor(void* arg_this)
{
 return;
}


// Function: sub_402bad at 0x402bad
void sub_402bad()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x402bae
void RTTIDerivedA_destructor(void* arg_this)
{
 return;
}


// Function: sub_402bb3 at 0x402bb3
void sub_402bb3()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x402bb4
void MultiDerived_destructor(void* arg_this)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402bb9
int MultiDerived_nonvirtual_thunk_destructor()
{
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x402bbe
int Derived_destructor(void* arg_this)
{
 return;
}


// Function: sub_402bc3 at 0x402bc3
void sub_402bc3()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x402bc4
void Base_deleting_destructor(void* arg_this)
{
 operator delete(arg_this);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x402bd2
void Derived_deleting_destructor(void* arg_this)
{
 operator delete(arg_this);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402be0
void MultiDerived_deleting_destructor(void* arg_this)
{
 operator delete(arg_this);
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402bee
void MultiDerived_nonvirtual_thunk_deleting_destructor(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x402bf8
void VirtualBase_deleting_destructor(void* arg_this)
{
 operator delete(arg_this);
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402c06
void RTTIDerivedB_deleting_destructor(void* arg_this)
{
 operator delete(arg_this);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402c14
int RTTIDerivedA_deleting_destructor(void* arg_this)
{
 operator delete(arg_this);
 return 0;
}


// Function: _ZN7MiddleAD0Ev at 0x402c22
extern char g_405920;
extern char g_405958;

void MiddleA_deleting_destructor(void* ptr)
{
 *((char **)ptr) = (char *)&g_405920;
 *((char **)((char *)ptr + 16)) = (char *)&g_405958;
 operator delete(ptr);
 return;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x402c42
int MiddleA_thunk_deleting_destructor(unsigned long a0)
{
 return 0;
}


// Function: sub_402c4f at 0x402c4f
void sub_402c4f(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x402c50
extern char g_405998;
extern char g_4059d0;

void MiddleB_deleting_destructor(void* ptr)
{
 *((char **)ptr) = (char *)&g_405998;
 *((char **)((char *)ptr + 16)) = (char *)&g_4059d0;
 operator delete(ptr);
 return;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x402c70
int MiddleB_thunk_deleting_destructor(unsigned long a0)
{
 return 0;
}


// Function: sub_402c7d at 0x402c7d
int sub_402c7d(unsigned long a0, unsigned long a1)
{
 return 0;
}





// Function: _ZN7MiddleAD2Ev at 0x402cb0
int MiddleA_base_destructor(void* arg_this)
{
 return 0;
}





// Function: _ZN7MiddleBD2Ev at 0x402cf0
int MiddleB_base_destructor(void* arg_this)
{
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402cfe
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402d0a
double template_max_double(double arg_0, double arg_1)
{
 unsigned long long result = (arg_0 > arg_1) ? *(unsigned long long*)&arg_0 : *(unsigned long long*)&arg_1;
 return *(double*)&result;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402d13
long long template_swap_int(unsigned int *ptr)
{
 unsigned long v1; // rax
 unsigned int *p; // rsi

 v1 = *(ptr);
 *(ptr) = *(p);
 *(p) = v1;
 return v1;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402d20
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402d2c
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = *(unsigned int *)((char *)ptr + 40);
 if ((unsigned int)index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_402d43 at 0x402d43
void sub_402d43(unsigned long a0, unsigned long a1)
{
 Container_int_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402d44
void Container_int_get(void* ptr, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x402d5a
void Container_int_getSize(void* ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x402d62
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402d6e
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = *(unsigned int *)((char *)ptr + 80);
 if ((unsigned int)index <= 9)
 {
 *((unsigned int *)((char *)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_402d87 at 0x402d87
void sub_402d87(unsigned long a0, unsigned long a1)
{
 Container_double_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402d88
void Container_double_get(void* ptr, int arg_0)
{
 return;
}


// Function: sub_402da1 at 0x402da1
void sub_402da1(unsigned long a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402da2
void Container_double_getSize(void* ptr)
{
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x402daa
int std_unique_ptr_int_destructor(void* ptr)
{
 if (*((long long *)ptr))
 operator delete((void*)*(long long *)ptr, 4);
 return 0;
}


// Function: sub_402dc1 at 0x402dc1
void sub_402dc1(unsigned long a0)
{
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x402dc2
int std_unique_ptr_int_array_destructor(void* ptr)
{
 void* p;
 if (*((long long *)ptr)) {
 p = (void*)(*((unsigned long long *)ptr));
 operator delete(p);
 }
 return 0;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x402dd4
typedef struct struct_0_diamond {
 void* field_0;
 char padding_8[32];
 unsigned long long field_28;
 unsigned long long field_30;
} struct_0_diamond;

extern unsigned long long g_405b08;
extern unsigned long long g_405b38;
extern unsigned long long g_405b70;

int DiamondDerived_destructor_complete(void* p)
{
 void* addr; // rax
 unsigned int result; // esi
 struct_0 *ptr; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // rdx
 unsigned long long v6; // raxx

 addr = (void*)&g_405b08;
 result = 0;
 ptr = (struct_0*)p;
 if (!result)
 return 0;
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402e5e
int DiamondDerived_destructor(void* ptr)
{
 DiamondDerived_base_destructor(ptr);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402e6e
void DiamondDerived_nonvirtual_thunk_destructor(unsigned long a0)
{
 DiamondDerived_destructor((void*)((char*)(void*)a0 - 16));
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402e78
void DiamondDerived_thunk_destructor(unsigned long a0)
{
 DiamondDerived_destructor((void*)((char*)(void*)a0 + 32));
}


// Function: sub_402e85 at 0x402e85
void sub_402e85(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402e86
int DiamondDerived_deleting_destructor(void* arg_this)
{
 operator delete(arg_this);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402eab
int DiamondDerived_nonvirtual_thunk_deleting_destructor(unsigned long a0)
{
 DiamondDerived_deleting_destructor((void*)((char*)(void*)a0 - 16));
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402eb5
int DiamondDerived_thunk_deleting_destructor(unsigned long a0)
{
 void* ptr = (void*)((char*)a0 + 32);
 DiamondDerived_deleting_destructor(ptr);
 return 0;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x402ec2
int DiamondDerived_base_destructor(void* ptr)
{
 MiddleA_base_destructor(ptr);
 MiddleB_base_destructor((void*)((char*)ptr + 16));
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


