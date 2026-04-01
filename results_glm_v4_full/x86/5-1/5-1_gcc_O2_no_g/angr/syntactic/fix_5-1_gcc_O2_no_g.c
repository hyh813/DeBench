// Angr Decompilation of 5-1_gcc_O2_no_g
// Platform: X86

#include <string.h>

/* CRT stub function _init removed by preprocessor */

struct struct_0 {
 char padding[116];
 int field_c;
 int field_10;
 int field_14;
 int field_18;
 int field_1c;
 int field_20;
 int field_24;
 int field_28;
 int field_2c;
 int field_30;
 int field_34;
 int field_38;
 int field_3c;
 int field_40;
 int field_44;
 int field_48;
 int field_4c;
 int field_54;
};

extern struct struct_0 *g_403ff4;

void __stack_chk_fail_local();

struct __x86 {
 static void get_pc_thunk_ax();
 static int get_pc_thunk_si(int a0, int a1);
 static void get_pc_thunk_dx();
 static int get_pc_thunk_di(int a0);
};

void frame_dummy();
unsigned int __do_global_ctors_aux();

class Base {
public:
 virtual void virtual_func(int arg_0);
 void getName();
 virtual ~Base();
};

class Derived : public Base {
public:
 virtual void virtual_func(int arg_0);
 void getName();
 ~Derived();
};

class MiddleA {
public:
 virtual void func();
};

class MiddleB {
public:
 virtual void func();
};

class MultiDerived : public MiddleA, public MiddleB {
public:
 void funcA();
 void funcB();
 ~MultiDerived();
};

class DiamondDerived : public virtual Base {
public:
 virtual void func();
 ~DiamondDerived();
};

class RTTIBase {
public:
 virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
 void getType();
 ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
 void getType();
 ~RTTIDerivedB();
};

template<typename T>
class Container {
public:
 Container();
 void push(T arg_0);
 T get(int arg_0);
 int getSize();
};

int _init();
int test_cpp_oo_features();
int _ccall(unsigned long a0, unsigned long a1, unsigned int a2, int a3);

int _init()
{
 if (g_403ff4)
 ;
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(int arg0)
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 goto ptr[2];
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 sub_401030(8);
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 sub_401030(16);
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 sub_401030(24);
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
}


// Function: sub_401080 at 0x401080
void sub_401080()
{
 sub_401030(32);
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
}


// Function: sub_401090 at 0x401090
void sub_401090()
{
 sub_401030(40);
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
}


// Function: sub_4010a0 at 0x4010a0
void sub_4010a0()
{
 sub_401030(48);
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
}


// Function: sub_4010b0 at 0x4010b0
void sub_4010b0()
{
 sub_401030(56);
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
}


// Function: sub_4010c0 at 0x4010c0
void sub_4010c0()
{
 sub_401030(64);
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
}


// Function: sub_4010d0 at 0x4010d0
void sub_4010d0()
{
 sub_401030(72);
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
}


// Function: sub_4010e0 at 0x4010e0
void sub_4010e0()
{
 sub_401030(80);
}


// Function: sub_4010ee at 0x4010ee
void sub_4010ee()
{
 sub_4010f0();
}


// Function: sub_4010f0 at 0x4010f0
void sub_4010f0()
{
 sub_401030(88);
}


// Function: sub_4010fe at 0x4010fe
void sub_4010fe()
{
 sub_401100();
}


// Function: sub_401100 at 0x401100
void sub_401100()
{
 sub_401030(96);
}


// Function: sub_40110e at 0x40110e
void sub_40110e()
{
 sub_401110();
}


// Function: sub_401110 at 0x401110
void sub_401110()
{
 sub_401030(104);
}


// Function: sub_40111e at 0x40111e
void sub_40111e()
{
 sub_401120();
}


// Function: sub_401120 at 0x401120
void sub_401120()
{
 sub_401030(112);
}


// Function: sub_40112e at 0x40112e
void sub_40112e()
{
 sub_401130();
}


// Function: sub_401130 at 0x401130
void sub_401130()
{
 sub_401030(120);
}


// Function: sub_40113e at 0x40113e
void sub_40113e()
{
 sub_401140();
}


// Function: sub_401140 at 0x401140
void sub_401140()
{
 sub_401030(128);
}


// Function: sub_40114e at 0x40114e
void sub_40114e()
{
 sub_401150();
}


// Function: sub_401150 at 0x401150
int sub_401150()
{
 struct_0 *v1; // ebx

 return v1->field_54;
}


// Function: sub_40115a at 0x40115a
void sub_40115a()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
int sub_401160(int a0, void *a1, int a2)
{
 struct_0 *v1; // ebx

 return v1->field_c;
}


// Function: sub_40116a at 0x40116a
void sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_10;
}


// Function: sub_40117a at 0x40117a
void sub_40117a()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
int sub_401180(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_14;
}


// Function: sub_40118a at 0x40118a
void sub_40118a()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_18;
}


// Function: sub_40119a at 0x40119a
void sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
void sub_4011a0(int a0)
{
 struct_0 *v1; // ebx

 v1->field_1c;
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 sub_4011b0();
 return;
}


// Function: sub_4011b0 at 0x4011b0
int sub_4011b0(int a0, int a1, int a2)
{
 struct_0 *v1; // ebx

 return v1->field_20;
}


// Function: sub_4011ba at 0x4011ba
void sub_4011ba()
{
 sub_4011c0();
 return;
}


// Function: sub_4011c0 at 0x4011c0
int sub_4011c0(int a0, int a1)
{
 struct_0 *v1; // ebx

 return v1->field_24;
}


// Function: sub_4011ca at 0x4011ca
void sub_4011ca()
{
 sub_4011d0();
 return;
}


// Function: sub_4011d0 at 0x4011d0
int sub_4011d0(int a0, int a1)
{
 struct_0 *v1; // ebx

 return v1->field_28;
}


// Function: sub_4011da at 0x4011da
void sub_4011da()
{
 sub_4011e0();
 return;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0()
{
 struct_0 *v1; // ebx

 return v1->field_2c;
}


// Function: sub_4011ea at 0x4011ea
void sub_4011ea()
{
 sub_4011f0();
 return;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_30;
}


// Function: sub_4011fa at 0x4011fa
void sub_4011fa()
{
 sub_401200();
 return;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 struct_0 *v1; // ebx

 return v1->field_34;
}


// Function: sub_40120a at 0x40120a
void sub_40120a()
{
 sub_401210();
 return;
}


// Function: sub_401210 at 0x401210
int sub_401210(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_38;
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 sub_401220();
 return;
}


// Function: sub_401220 at 0x401220
int sub_401220(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_3c;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
 sub_401230();
 return;
}


// Function: sub_401230 at 0x401230
int sub_401230(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_40;
}


// Function: sub_40123a at 0x40123a
void sub_40123a()
{
 sub_401240();
 return;
}


// Function: sub_401240 at 0x401240
int sub_401240(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_44;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 sub_401250();
 return;
}


// Function: sub_401250 at 0x401250
int sub_401250(int a0, int a1, int a2)
{
 struct_0 *v1; // ebx

 return v1->field_48;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 sub_401260();
 return;
}


// Function: sub_401260 at 0x401260
int sub_401260(int a0)
{
 struct_0 *v1; // ebx

 return v1->field_4c;
}


// Function: sub_40126a at 0x40126a
void sub_40126a()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401270
typedef struct struct_1 {
 char padding_0[11622];
 unsigned int field_2d66;
} struct_1;

void test_cpp_exception()
{
 struct_0 *v6; // esi
 struct_0 *v7; // esi
 unsigned int v8; // ebx
 unsigned int *ptr; // eax
 unsigned int v10; // eax
 unsigned int result; // edx
 unsigned int v13; // eax
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 char v2; // [bp-0xc]
 char v3; // [bp-0x8];
 char v4; // [bp+0x0]

 __x86::get_pc_thunk_si(*((int *)&v2), *((int *)&v3));
 v7 = (struct_0 *)((char *)v6 + 11542);
 v1 = v8;
 ptr = (unsigned int *)sub_401190(4);
 *((int *)ptr) = 42;
 sub_401250((int)ptr, *((int *)&v7->padding[80]), 0);
 v10 = 0;
 if (result != 1)
 {
 v0 = 0;
 }
 else
 {
 sub_401180(v10);
 v0 = 0;
 sub_401210();
 sub_401240(v10);
 }
 if (result != 1)
 sub_401260(v10);
 sub_401180(v10);
 sub_401240(v10);
 sub_401250((int)sub_401190(1), (int)((struct struct_0 *)&v7->padding[300]), 0);
 v13 = 0;
 if (result != 2)
 {
 if (result != 3)
 {
 sub_401260(v13);
 }
 else
 {
 sub_401180(v13);
 sub_401240(v13);
 return;
 }
 }
 sub_401180(v13);
 sub_401240(v13);
 return;
}


// Function: sub_40137e at 0x40137e
void sub_40137e()
{
 main();
 return;
}


// Function: main at 0x401380
unsigned int main()
{
 char v0; // [bp+0x0]

 test_cpp_oo_features();
 return 0;
}


// Function: sub_401393 at 0x401393
void sub_401393()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4013a0
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;

void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 sub_401230(&_ZStL8__ioinit);
 sub_4011b0(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4013dc at 0x4013dc
void sub_4013dc()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40140c at 0x40140c
void sub_40140c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401410
void __x86::get_pc_thunk_bx()
{
 return;
}


// Function: sub_401414 at 0x401414
void sub_401414()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

typedef struct struct_1_deregister {
 unsigned int field_0;
} struct_1_deregister;

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86::get_pc_thunk_dx();
 (void)ptr;
 return (unsigned int)((char *)&ptr[2812] + 3);
}


// Function: sub_401453 at 0x401453
void sub_401453()
{
}


// Function: sub_401459 at 0x401459
void sub_401459()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1_register {
 unsigned int field_0;
} struct_1_register;

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]
 unsigned int (*func_ptr)(void *, unsigned int);
 unsigned int diff;

 __x86::get_pc_thunk_dx();
 (void)v2;
 v3 = (struct_0 *)&v2->padding[11055];
 v0 = v4;
 diff = (unsigned int)((int)&v3->padding[132] - (int)&v3->padding[132]);
 if (!((diff >> 31) + ((diff >> 2) >> 1)))
 {
 return (diff >> 31) + ((diff >> 2) >> 1);
 }
 else if (*((int *)&v3->padding[100]))
 {
 func_ptr = (unsigned int (*)(void *, unsigned int))(*((int *)&v3->padding[100]));
 return func_ptr(&v3->padding[132], (diff >> 31) + ((diff >> 2) >> 1));
 }
 else
 {
 return (diff >> 31) + ((diff >> 2) >> 1);
 }
}


// Function: sub_4014a7 at 0x4014a7
void sub_4014a7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

struct_0 * sub_401150(int a0);
unsigned int * deregister_tm_clones();

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]
 void (*func_ptr)();

 v5 = (unsigned int *)__x86::get_pc_thunk_di(*((int *)&v2));
 ptr = (struct_0 *)((char *)&v6->padding[10967]);
 v1 = v8;
 v0 = v9;
 if (ptr->padding[132])
 return v5;
 if (*((int *)&ptr->padding[84]))
 v5 = (unsigned int *)sub_401150(*((int *)&ptr->padding[112]));
 v10 = (struct_0 *)((char *)&ptr->padding[348]);
 v11 = *((int *)&ptr->padding[136]);
 i = ((int)&ptr->padding[344] - (int)v10 >> 2) - 1;
 if (*((int *)&ptr->padding[136]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding[136]) = v13;
 func_ptr = (void (*)())(*((int *)&v10->padding[4 * v13]));
 func_ptr();
 v11 = *((int *)&ptr->padding[136]);
 } while (*((int *)&ptr->padding[136]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding[132] = 1;
 return v14;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401549
void __x86::get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40154d
int __x86::get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401551 at 0x401551
void sub_401551()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401560
void test_cpp_member_func()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 char v0[4]; // [bp-0x30]
 char v1; // [bp-0x2c]
 char v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 (void)_ccall(v5, v6, (unsigned int)v7, 20);
 v3 = 0;
 strncpy(v0, "Test", 4);
 memset(&v1, 0, 24);
 memset(&v2, 0, 4);
 sub_4011a0(&v0);
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 {
 __stack_chk_fail_local();
 test_cpp_constructor();
 }
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401600
void test_cpp_constructor()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: sub_40161c at 0x40161c
void sub_40161c(unsigned int a0)
{
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401620
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401630
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_40163a at 0x40163a
void sub_40163a()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401640
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_40164a at 0x40164a
void sub_40164a()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401650
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_40165a at 0x40165a
void sub_40165a()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401660
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_40166a at 0x40166a
void sub_40166a()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401670
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401720
void test_cpp_template_class();

// Function: sub_40172a at 0x40172a
void sub_40172a()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401730
void test_cpp_lambda()
{
 return;
}


// Function: sub_40173a at 0x40173a
void sub_40173a()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401740
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_40174a at 0x40174a
void sub_40174a()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401750
typedef struct struct_2 {
 char padding_0[4];
 struct struct_3 *field_4;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
} struct_3;

typedef struct struct_5 {
 char field_0;
} struct_5;

typedef struct struct_4 {
 char padding_0[4];
 struct struct_5 *field_4;
} struct_4;

extern unsigned int _ZTI8RTTIBase;
extern struct_4 *addr;
extern char g_403e48;
extern char g_403e5c;

struct_0 * sub_401170(int a0);
void sub_4011d0(int a0, int a1);

void test_cpp_rtti()
{
 void* *ptr; // edi
 char *v5; // ebp
 char *v6; // eax
 struct_2 **p; // [bp-0x28]
 void* v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]

 ptr = (void**)(void*)sub_401170(4);
 *ptr = &g_403e48;
 p = (struct_2 **)(void*)sub_401170(4);
 *p = (struct_2 *)&g_403e5c;
 v1 = *ptr;
 v5 = (char*)(*((int*)((char*)(*(int*)ptr)[4] + 4)));
 if (v5 != (char*)"12RTTIDerivedA")
 sub_4011d0((int)v5, (int)"12RTTIDerivedA");
 v6 = (char*)addr->field_4;
 v2 = &_ZTI8RTTIBase;
 ((void (*)(void*))v1)(ptr);
 (*p)->field_4(*p);
 return;
}


// Function: sub_401878 at 0x401878
void sub_401878()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401880
extern unsigned int g_402018;
extern unsigned int g_40203c;
extern unsigned int g_40205a;
extern unsigned int g_402076;
extern unsigned int g_402092;
extern unsigned int g_4020ae;
extern unsigned int g_4020cb;
extern unsigned int g_4020e7;
extern unsigned int g_402103;
extern unsigned int g_40211f;
extern unsigned int g_40213b;
extern unsigned int g_402158;
extern unsigned int g_402175;

void sub_401220(int a0);
void sub_4011a0(int a0);
int sub_401160(int a0, void *a1, int a2);
void test_cpp_constructor();
void test_cpp_diamond_inheritance();
void test_cpp_template_func();
void test_cpp_exception();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void __stack_chk_fail_local();
void Base::virtual_func(int arg_0);

int test_cpp_oo_features()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 char v0; // [bp-0x30]
 char v1[2]; // [bp-0x12]
 unsigned int v2; // [bp-0x10]
 int stack_val;

 (void)_ccall(v4, v5, (unsigned int)v6, 20);
 v2 = 0;
 sub_401220((int)&g_402018);
 strncpy(v1, "Test", 4);
 sub_4011a0((int)&v0);
 sub_401160(1, &g_40203c, (int)&v0 + 4700);
 sub_401160(1, &g_40205a, (unsigned int)test_cpp_constructor());
 sub_401160(1, &g_402076, 42);
 sub_401160(1, &g_402092, 71);
 sub_401160(1, &g_4020ae, (unsigned int)test_cpp_diamond_inheritance());
 sub_401160(1, &g_4020cb, 22);
 sub_401160(1, &g_4020e7, (unsigned int)test_cpp_template_func());
 sub_401160(1, &g_402103, 16);
 sub_401160(1, &g_40211f, 85);
 sub_401160(1, &g_40213b, (unsigned int)test_cpp_exception());
 sub_401160(1, &g_402158, (unsigned int)test_cpp_smart_ptr());
 sub_401160(1, &g_402175, (unsigned int)test_cpp_rtti());
 stack_val = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 if (v2 != stack_val)
 {
 __stack_chk_fail_local();
 Base::virtual_func(0);
 return 0;
 }
 return v2 - stack_val;
}


// Function: _ZN4Base12virtual_funcEi at 0x401a30
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: sub_401a3c at 0x401a3c
void sub_401a3c()
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401a40
void Base::getName()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: sub_401a55 at 0x401a55
void sub_401a55()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401a60
void Base::~Base()
{
 return;
}


// Function: sub_401a65 at 0x401a65
void sub_401a65(unsigned int a0, unsigned int a1)
{
 Derived::virtual_func();
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401a70
void Derived::virtual_func(int arg_0)
{
 return;
}


// Function: sub_401a81 at 0x401a81
void sub_401a81()
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401a90
void Derived::getName()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: sub_401aa5 at 0x401aa5
void sub_401aa5()
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401ab0
void MultiDerived::funcA()
{
 return;
}


// Function: sub_401aba at 0x401aba
void sub_401aba()
{
 MultiDerived::funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401ac0
void MultiDerived::funcB()
{
 return;
}


// Function: sub_401aca at 0x401aca
void sub_401aca()
{
 _ZThn8_N12MultiDerived5funcBEv();
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401ad0
unsigned int _ZThn8_N12MultiDerived5funcBEv()
{
 return 40;
}


// Function: sub_401ada at 0x401ada
void sub_401ada(unsigned int a0)
{
 MiddleA::func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401ae0
void MiddleA::func()
{
 return;
}


// Function: sub_401af7 at 0x401af7
void sub_401af7(unsigned int a0)
{
 _ZN7MiddleA4funcEv();
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401b00
int _ZTv0_n12_N7MiddleA4funcEv(void* *a0)
{
 return 150;
}


// Function: sub_401b1c at 0x401b1c
void sub_401b1c(unsigned int a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401b20
void MiddleB::func()
{
 return;
}


// Function: sub_401b37 at 0x401b37
void sub_401b37(unsigned int a0)
{
 _ZN7MiddleB4funcEv();
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401b40
int _ZTv0_n12_N7MiddleB4funcEv(void* *a0)
{
 return 200;
}


// Function: sub_401b5c at 0x401b5c
void sub_401b5c(unsigned int a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401b60
void DiamondDerived::func()
{
 return;
}


// Function: sub_401b77 at 0x401b77
void sub_401b77(unsigned int a0)
{
 _ZN14DiamondDerived4funcEv();
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401b80
int _ZTv0_n12_N14DiamondDerived4funcEv(void* *a0)
{
 return 250;
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0)
{
 _ZThn8_N14DiamondDerived4funcEv(a0);
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401ba0
int _ZThn8_N14DiamondDerived4funcEv(void* a0)
{
 return 250;
}


// Function: sub_401bb8 at 0x401bb8
void sub_401bb8()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401bc0
void RTTIDerivedA::getType()
{
 return;
}


// Function: sub_401bca at 0x401bca
void sub_401bca()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401bd0
void RTTIDerivedB::getType()
{
 return;
}


// Function: sub_401bda at 0x401bda
void sub_401bda()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401be0
RTTIDerivedB::~RTTIDerivedB()
{
 return;
}


// Function: sub_401be5 at 0x401be5
void sub_401be5()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401bf0
RTTIDerivedA::~RTTIDerivedA()
{
 return;
}


// Function: sub_401bf5 at 0x401bf5
void sub_401bf5()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401c00
DiamondDerived::~DiamondDerived()
{
 return;
}


// Function: sub_401c05 at 0x401c05
void sub_401c05()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401c10
void _ZTv0_n16_N14DiamondDerivedD1Ev()
{
 return;
}


// Function: sub_401c15 at 0x401c15
void sub_401c15()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401c20
void _ZThn8_N14DiamondDerivedD1Ev()
{
 return;
}


// Function: sub_401c25 at 0x401c25
void sub_401c25()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401c30
MultiDerived::~MultiDerived()
{
 return;
}


// Function: sub_401c35 at 0x401c35
void sub_401c35()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401c40
void _ZThn8_N12MultiDerivedD1Ev()
{
 return;
}


// Function: sub_401c45 at 0x401c45
void sub_401c45()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401c50
Derived::~Derived()
{
}


// Function: sub_401c55 at 0x401c55
void sub_401c55()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401c60
void Base::~Base()
{
 sub_4011c0(4);
 return;
}


// Function: sub_401c83 at 0x401c83
void sub_401c83()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401c90
void Derived::~Derived()
{
 sub_4011c0(8, 0);
 return;
}


// Function: sub_401cb3 at 0x401cb3
void sub_401cb3()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401cc0
void MultiDerived::~MultiDerived()
{
 sub_4011c0(16);
}


// Function: sub_401ce3 at 0x401ce3
void sub_401ce3()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401cf0
int _ZThn8_N12MultiDerivedD0Ev(unsigned int a0)
{
 return sub_4011c0(a0 - 8, 16);
}


// Function: sub_401d17 at 0x401d17
void sub_401d17()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401d20
void RTTIDerivedB::~RTTIDerivedB()
{
 sub_4011c0(4);
}


// Function: sub_401d43 at 0x401d43
void sub_401d43()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401d50
RTTIDerivedA::~RTTIDerivedA()
{
 sub_4011c0(4);
}


// Function: sub_401d73 at 0x401d73
void sub_401d73()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401d80
void DiamondDerived::~DiamondDerived()
{
 sub_4011c0(24);
}


// Function: sub_401da3 at 0x401da3
void sub_401da3()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x401db0
int _ZTv0_n16_N14DiamondDerivedD0Ev(void* *a0)
{
 sub_4011c0(24);
 return 0;
}


// Function: sub_401dd9 at 0x401dd9
void sub_401dd9()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401de0
int _ZThn8_N14DiamondDerivedD0Ev(unsigned int a0)
{
 return sub_4011c0(a0 - 8, 24);
}


// Function: sub_401e07 at 0x401e07
void sub_401e07(unsigned int a0, unsigned int a1)
{
 template_max_int(0, 0);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401e10
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: sub_401e22 at 0x401e22
void sub_401e22(unsigned int a0)
{
 template_max_double(0, 0);
 return;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401e30
// Function: sub_401e43 at 0x401e43
void sub_401e43()
{
 template_swap_int(0, 0);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401e50
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // ecx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: sub_40172a at 0x40172a
void sub_40172a()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401730
void test_cpp_lambda()
{
 return;
}


// Function: sub_40173a at 0x40173a
void sub_40173a()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401740
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_40174a at 0x40174a
void sub_40174a()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401750
typedef struct struct_2 {
 char padding_0[4];
 struct struct_3 *field_4;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
} struct_3;

typedef struct struct_5 {
 char field_0;
} struct_5;

typedef struct struct_4 {
 char padding_0[4];
 struct struct_5 *field_4;
} struct_4;

extern unsigned int _ZTI8RTTIBase;
extern struct_4 *addr;
extern char g_403e48;
extern char g_403e5c;

struct_0 * sub_401170(int a0);
void sub_4011d0(int a0, int a1);

void test_cpp_rtti()
{
 void* *ptr; // edi
 char *v5; // ebp
 struct_2 **p; // [bp-0x28]
 void* v1; // [bp-0x24]

 ptr = (void**)(void*)sub_401170(4);
 *ptr = &g_403e48;
 p = (struct_2 **)(void*)sub_401170(4);
 *p = (struct_2 *)&g_403e5c;
 v1 = *ptr;
 v5 = (char*)(*((int*)((char*)(*(int*)ptr)[4] + 4)));
 if (v5 != (char*)"12RTTIDerivedA")
 sub_4011d0((int)v5, (int)"12RTTIDerivedA");
 ((void (*)(void*))v1)(ptr);
 return;
}


// Function: sub_401878 at 0x401878
void sub_401878()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401880
extern unsigned int g_402018;
extern unsigned int g_40203c;
extern unsigned int g_40205a;
extern unsigned int g_402076;
extern unsigned int g_402092;
extern unsigned int g_4020ae;
extern unsigned int g_4020cb;
extern unsigned int g_4020e7;
extern unsigned int g_402103;
extern unsigned int g_40211f;
extern unsigned int g_40213b;
extern unsigned int g_402158;
extern unsigned int g_402175;

void sub_401220(int a0);
void sub_4011a0(int a0);
int sub_401160(int a0, void *a1, int a2);
void test_cpp_constructor();
void test_cpp_diamond_inheritance();
void test_cpp_template_func();
void test_cpp_exception();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void __stack_chk_fail_local();
void Base::virtual_func(int arg_0);

int test_cpp_oo_features()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 char v0; // [bp-0x30]
 char v1[2]; // [bp-0x12]
 unsigned int v2; // [bp-0x10]
 int stack_val;

 (void)_ccall(v4, v5, (unsigned int)v6, 20);
 v2 = 0;
 sub_401220((int)&g_402018);
 strncpy(v1, "Test", 4);
 sub_4011a0((int)&v0);
 sub_401160(1, &g_40203c, (int)&v0 + 4700);
 sub_401160(1, &g_40205a, (unsigned int)test_cpp_constructor());
 sub_401160(1, &g_402076, 42);
 sub_401160(1, &g_402092, 71);
 sub_401160(1, &g_4020ae, (unsigned int)test_cpp_diamond_inheritance());
 sub_401160(1, &g_4020cb, 22);
 sub_401160(1, &g_4020e7, (unsigned int)test_cpp_template_func());
 sub_401160(1, &g_402103, 16);
 sub_401160(1, &g_40211f, 85);
 sub_401160(1, &g_40213b, (unsigned int)test_cpp_exception());
 sub_401160(1, &g_402158, (unsigned int)test_cpp_smart_ptr());
 sub_401160(1, &g_402175, (unsigned int)test_cpp_rtti());
 stack_val = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 if (v2 != stack_val)
 {
 __stack_chk_fail_local();
 Base::virtual_func(0);
 return 0;
 }
 return v2 - stack_val;
}


// Function: _ZN4Base12virtual_funcEi at 0x401a30
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: sub_401a3c at 0x401a3c
void sub_401a3c()
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401a40
void Base::getName()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: sub_401a55 at 0x401a55
void sub_401a55()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401a60
void Base::~Base()
{
 return;
}


// Function: sub_401a65 at 0x401a65
void sub_401a65(unsigned int a0, unsigned int a1)
{
 Derived::virtual_func();
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401a70
void Derived::virtual_func(int arg_0)
{
 return;
}


// Function: sub_401a81 at 0x401a81
void sub_401a81()
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401a90
void Derived::getName()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: sub_401aa5 at 0x401aa5
void sub_401aa5()
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401ab0
void MultiDerived::funcA()
{
 return;
}


// Function: sub_401aba at 0x401aba
void sub_401aba()
{
 MultiDerived::funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401ac0
void MultiDerived::funcB()
{
 return;
}


// Function: sub_401aca at 0x401aca
void sub_401aca()
{
 _ZThn8_N12MultiDerived5funcBEv();
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401ad0
unsigned int _ZThn8_N12MultiDerived5funcBEv()
{
 return 40;
}


// Function: sub_401ada at 0x401ada
void sub_401ada(unsigned int a0)
{
 MiddleA::func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401ae0
void MiddleA::func()
{
 return;
}


// Function: sub_401af7 at 0x401af7
void sub_401af7(unsigned int a0)
{
 _ZN7MiddleA4funcEv();
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401b00
int _ZTv0_n12_N7MiddleA4funcEv(void* *a0)
{
 return 150;
}


// Function: sub_401b1c at 0x401b1c
void sub_401b1c(unsigned int a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401b20
void MiddleB::func()
{
 return;
}


// Function: sub_401b37 at 0x401b37
void sub_401b37(unsigned int a0)
{
 _ZN7MiddleB4funcEv();
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401b40
int _ZTv0_n12_N7MiddleB4funcEv(void* *a0)
{
 return 200;
}


// Function: sub_401b5c at 0x401b5c
void sub_401b5c(unsigned int a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401b60
void DiamondDerived::func()
{
 return;
}


// Function: sub_401b77 at 0x401b77
void sub_401b77(unsigned int a0)
{
 _ZN14DiamondDerived4funcEv();
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401b80
int _ZTv0_n12_N14DiamondDerived4funcEv(void* *a0)
{
 return 250;
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0)
{
 _ZThn8_N14DiamondDerived4funcEv(a0);
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401ba0
int _ZThn8_N14DiamondDerived4funcEv(void* a0)
{
 return 250;
}


// Function: sub_401bb8 at 0x401bb8
void sub_401bb8()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401bc0
void RTTIDerivedA::getType()
{
 return;
}


// Function: sub_401bca at 0x401bca
void sub_401bca()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401bd0
void RTTIDerivedB::getType()
{
 return;
}


// Function: sub_401bda at 0x401bda
void sub_401bda()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401be0
RTTIDerivedB::~RTTIDerivedB()
{
 return;
}


// Function: sub_401be5 at 0x401be5
void sub_401be5()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401bf0
RTTIDerivedA::~RTTIDerivedA()
{
 return;
}


// Function: sub_401bf5 at 0x401bf5
void sub_401bf5()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401c00
DiamondDerived::~DiamondDerived()
{
 return;
}


// Function: sub_401c05 at 0x401c05
void sub_401c05()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401c10
void _ZTv0_n16_N14DiamondDerivedD1Ev()
{
 return;
}


// Function: sub_401c15 at 0x401c15
void sub_401c15()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401c20
void _ZThn8_N14DiamondDerivedD1Ev()
{
 return;
}


// Function: sub_401c25 at 0x401c25
void sub_401c25()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401c30
MultiDerived::~MultiDerived()
{
 return;
}


// Function: sub_401c35 at 0x401c35
void sub_401c35()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401c40
void _ZThn8_N12MultiDerivedD1Ev()
{
 return;
}


// Function: sub_401c45 at 0x401c45
void sub_401c45()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401c50
Derived::~Derived()
{
}


// Function: sub_401c55 at 0x401c55
void sub_401c55()
{
}


// Function: _ZN4BaseD0Ev at 0x401c60
Base::~Base()
{
 sub_4011c0(4, 0);
}


// Function: sub_401c83 at 0x401c83
void sub_401c83()
{
}


// Function: _ZN7DerivedD0Ev at 0x401c90
Derived::~Derived()
{
 sub_4011c0(8);
}


// Function: sub_401cb3 at 0x401cb3
void sub_401cb3()
{
}


// Function: _ZN12MultiDerivedD0Ev at 0x401cc0
void MultiDerived::~MultiDerived()
{
 sub_4011c0(16);
}


// Function: sub_401ce3 at 0x401ce3
void sub_401ce3()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401cf0
int _ZThn8_N12MultiDerivedD0Ev(unsigned int a0)
{
 return sub_4011c0(a0 - 8, 16);
}


// Function: sub_401d17 at 0x401d17
void sub_401d17()
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401d20
void RTTIDerivedB::~RTTIDerivedB()
{
 sub_4011c0(4);
}


// Function: sub_401d43 at 0x401d43
void sub_401d43()
{
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401d50
RTTIDerivedA::~RTTIDerivedA()
{
 sub_4011c0(4);
}


// Function: sub_401d73 at 0x401d73
void sub_401d73()
{
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401d80
void DiamondDerived::~DiamondDerived()
{
 sub_4011c0(24);
}


// Function: sub_401da3 at 0x401da3
void sub_401da3()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x401db0
int _ZTv0_n16_N14DiamondDerivedD0Ev(void* *a0)
{
 sub_4011c0(24);
 return 0;
}


// Function: sub_401dd9 at 0x401dd9
void sub_401dd9()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401de0
int _ZThn8_N14DiamondDerivedD0Ev(unsigned int a0)
{
 return sub_4011c0(a0 - 8, 24);
}


// Function: sub_401e07 at 0x401e07
void sub_401e07(unsigned int a0, unsigned int a1)
{
 template_max_int(0, 0);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401e10
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: sub_401e22 at 0x401e22
void sub_401e22(unsigned int a0)
{
 template_max_double(0, 0);
 return;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401e30
// Function: sub_401e43 at 0x401e43
void sub_401e43()
{
 template_swap_int(0, 0);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401e50
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // ecx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: sub_401e67 at 0x401e67
void sub_401e67(unsigned int a0)
{
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401e70
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401e80
int Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index;

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return 0;
}


// Function: sub_401e9e at 0x401e9e
void sub_401e9e(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ea0
int Container_int_get(int arg_0)
{
 if (arg_0 < 0)
 return 0;
 return 0;
}


// Function: sub_401eb8 at 0x401eb8
void sub_401eb8()
{
}


// Function: sub_401ec4 at 0x401ec4
void sub_401ec4(unsigned int a0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401ed0
int Container_int_getSize()
{
 return 0;
}


// Function: sub_401edc at 0x401edc
void sub_401edc(unsigned int a0)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401ee0
int Container_double_Container(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401ef0
int Container_double_push(void* ptr)
{
 unsigned int index;

 index = *((unsigned int *)((char *)ptr + 80));
 if (index > 9)
 {
 return 0;
 }
 *((unsigned int *)((char *)ptr + 80)) = index + 1;
 *((unsigned long long *)((char *)ptr + 8 * index)) = 0;
 return 0;
}


// Function: sub_401f0f at 0x401f0f
void sub_401f0f()
{
}


// Function: sub_401f13 at 0x401f13
void sub_401f13(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401f20
int Container_double_get(int arg_0)
{
 if (arg_0 >= 0)
 {
 return 0;
 }
 return 0;
}


// Function: sub_401f38 at 0x401f38
void sub_401f38()
{
}


// Function: sub_401f44 at 0x401f44
void sub_401f44(unsigned int a0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401f50
int Container_double_getSize()
{
 return 0;
}


// Function: __x86.get_pc_thunk_ax at 0x401f5c
unsigned int __x86::get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get_pc_thunk_si at 0x401f60
int __x86::get_pc_thunk_si(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401f64 at 0x401f64
void sub_401f64()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401f70
void __stack_chk_fail_local()
{
 sub_4011f0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1_ctors {
 unsigned int field_0;
} struct_1_ctors;

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]
 void (*func_ptr)();

 __x86::get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)&v2[1].padding[351]);
 v4 = *((unsigned int **)&ptr->padding[356]);
 if (*((unsigned int *)&ptr->padding[356]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = (struct_0 *)((char *)&ptr->padding[356]);
 do
 {
 p = (struct_0 *)((char *)v6);
 func_ptr = (void (*)())v4;
 func_ptr();
 v4 = *((unsigned int **)&p->padding[4]);
 v6 = (struct_0 *)((char *)&p->padding[4]);
 } while (*((unsigned int *)&p->padding[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401fd2 at 0x401fd2
void sub_401fd2()
{
}



/* CRT stub function _fini removed by preprocessor */


