// Angr Decompilation of 5-1_gcc_O2_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

// Global struct definition
typedef struct struct_0 {
 char padding_0[84];
 unsigned int field_54;
} struct_0;

// Class declarations for C++ classes
class Base {
public:
    virtual void virtual_func(int arg_0);
    void getName();
    ~Base();
};

class Derived : public Base {
public:
    void virtual_func(int arg_0);
    void getName();
    ~Derived();
};

class MultiDerived : public Derived {
public:
    void funcA();
    void funcB();
    ~MultiDerived();
};

class MiddleA {
public:
    void func();
};

class MiddleB {
public:
    void func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    void func();
    ~DiamondDerived();
};

class RTTIDerivedA {
public:
    char* getType();
    ~RTTIDerivedA();
};

class RTTIDerivedB {
public:
    char* getType();
    ~RTTIDerivedB();
};

extern void (*g_403ff4)();

// Declaration for __x86 helper functions
void __x86_get_pc_thunk_bx();
void __x86_get_pc_thunk_dx();
void __x86_get_pc_thunk_di();
unsigned int __x86_get_pc_thunk_ax();
int __x86_get_pc_thunk_si(int a0, int a1);

int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int arg0)
{
 return arg0;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 return sub_401030(0);
}

// Fix: return_45


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return 0;
}


// Function: sub_40105e at 0x40105e
int sub_40105e()
{
 return sub_401060();
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return 0;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return 0;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return 0;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return 0;
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 sub_401030(48);
 return 0;
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 sub_401030(56);
 return 0;
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 sub_401030(64);
 return 0;
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 sub_401030(72);
 return 0;
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 sub_401030(80);
 return 0;
}


// Function: sub_4010ee at 0x4010ee
void sub_4010ee()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 sub_401030(88);
 return 0;
}


// Function: sub_4010fe at 0x4010fe
void sub_4010fe()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 sub_401030(96);
 return 0;
}


// Function: sub_40110e at 0x40110e
void sub_40110e()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
int sub_401110()
{
 sub_401030(104);
 return 0;
}


// Function: sub_40111e at 0x40111e
void sub_40111e()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
int sub_401120()
{
 sub_401030(112);
 return 0;
}


// Function: sub_40112e at 0x40112e
void sub_40112e()
{
 sub_401130();
 return;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 sub_401030(120);
 return 0;
}


// Function: sub_40113e at 0x40113e
void sub_40113e()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
int sub_401140()
{
 sub_401030(128);
 return 0;
}


// Function: sub_40114e at 0x40114e
void sub_40114e()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
int sub_401150()
{
 return 0;
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return 0;
}


// Function: sub_401160 at 0x401160
void sub_401160()
{
 return;
}


// Function: sub_40116a at 0x40116a
void sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
void* sub_401170()
{
 struct_0 *v1; // ebx

 return v1;
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return 0;
}


// Function: sub_401180 at 0x401180
int sub_401180()
{
 struct_0 *v1; // ebx

 return v1->field_14;
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return 0;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 struct_0 *v1; // ebx

 return v1->field_18;
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return 0;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0()
{
 struct_0 *v1; // ebx

 return v1->field_1c;
}


// Function: sub_4011aa at 0x4011aa
int sub_4011aa()
{
 sub_4011b0();
 return 0;
}


// Function: sub_4011b0 at 0x4011b0
int sub_4011b0()
{
 struct_0 *v1; // ebx

 return v1->field_20;
}


// Function: sub_4011ba at 0x4011ba
int sub_4011ba()
{
 sub_4011c0();
 return 0;
}


// Function: sub_4011c0 at 0x4011c0
int sub_4011c0()
{
 struct_0 *v1; // ebx

 return v1->field_24;
}


// Function: sub_4011ca at 0x4011ca
int sub_4011ca()
{
 sub_4011d0();
 return 0;
}


// Function: sub_4011d0 at 0x4011d0
int sub_4011d0()
{
 struct_0 *v1; // ebx

 return v1->field_28;
}


// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0();
 return 0;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0()
{
 struct_0 *v1; // ebx

 return v1->field_2c;
}


// Function: sub_4011ea at 0x4011ea
int sub_4011ea()
{
 sub_4011f0();
 return 0;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0()
{
 struct_0 *v1; // ebx

 return v1->field_30;
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 sub_401200();
 return 0;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 struct_0 *v1; // ebx

 return v1->field_34;
}


// Function: sub_40120a at 0x40120a
int sub_40120a()
{
 sub_401210();
 return 0;
}


// Function: sub_401210 at 0x401210
int sub_401210()
{
 struct_0 *v1; // ebx

 return v1->field_38;
}


// Function: sub_40121a at 0x40121a
int sub_40121a()
{
 sub_401220();
 return 0;
}


// Function: sub_401220 at 0x401220
int sub_401220()
{
 struct_0 *v1; // ebx

 return v1->field_3c;
}


// Function: sub_40122a at 0x40122a
int sub_40122a()
{
 sub_401230();
 return 0;
}


// Function: sub_401230 at 0x401230
int sub_401230()
{
 struct_0 *v1; // ebx

 return v1->field_40;
}


// Function: sub_40123a at 0x40123a
int sub_40123a()
{
 sub_401240();
 return 0;
}


// Function: sub_401240 at 0x401240
int sub_401240()
{
 struct_0 *v1; // ebx

 return v1->field_44;
}


// Function: sub_40124a at 0x40124a
int sub_40124a()
{
 sub_401250();
 return 0;
}


// Function: sub_401250 at 0x401250
int sub_401250()
{
 struct_0 *v1; // ebx

 return v1->field_48;
}


// Function: sub_40125a at 0x40125a
int sub_40125a()
{
 sub_401260();
 return 0;
}


// Function: sub_401260 at 0x401260
int sub_401260()
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
typedef struct struct_0 {
 char padding_0[11622];
 unsigned int field_2d66;
} struct_0;

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
 char v3; // [bp-0x8]
 char v4; // [bp+0x0]

 __x86_get_pc_thunk_si(*((int *)&v2), *((int *)&v3), &v4);
 v7 = &v6->padding_0[11542];
 v1 = v8;
 ptr = sub_401190(4);
 *(ptr) = 42;
 v10 = sub_401250(ptr, *((int *)&v7->padding_0[80]), 0);
 if (result != 1)
 {
 v0 = 0;
 }
 else
 {
 v0 = *((int *)sub_401180(v10));
 v10 = sub_401210();
 sub_401240();
 }
 if (result != 1)
 sub_401260(v10);
 sub_401180(v10);
 sub_401240(v10);
 v13 = sub_401250(sub_401190(1), (struct struct_0 *)&v7->padding_0[300], 0);
 if (result != 2)
 {
 if (result != 3)
 {
 v13 = sub_401260(v13);
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

 test_cpp_oo_features(&v0);
 return 0;
}


// Function: sub_401393 at 0x401393
int sub_401393()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4013a0
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 sub_401230(&_ZStL8__ioinit);
 return sub_4011b0(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
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


// Function: __x86_get_pc_thunk_bx at 0x401410
void __x86_get_pc_thunk_bx()
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
 struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return (char *)&ptr[2812] + 3;
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
 struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = &v2->padding_0[11055];
 v0 = v4;
 if (!(&v3->padding_0[132] - &v3->padding_0[132] >> 31) + (&v3->padding_0[132] - &v3->padding_0[132] >> 2) >> 1)
 {
 return (&v3->padding_0[132] - &v3->padding_0[132] >> 31) + (&v3->padding_0[132] - &v3->padding_0[132] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[100]))
 {
 return (*((int *)&v3->padding_0[100]))(&v3->padding_0[132], (&v3->padding_0[132] - &v3->padding_0[132] >> 31) + (&v3->padding_0[132] - &v3->padding_0[132] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[132] - &v3->padding_0[132] >> 31) + (&v3->padding_0[132] - &v3->padding_0[132] >> 2) >> 1;
 }
}


// Function: sub_4014a7 at 0x4014a7
void sub_4014a7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
 struct_0;

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

 v5 = __x86.get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_0[10967];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[132])
 return v5;
 if (*((int *)&ptr->padding_0[84]))
 sub_401150(*((int *)&ptr->padding_0[112]));
 v10 = &ptr->padding_0[348];
 v11 = *((int *)&ptr->padding_0[136]);
 i = (&ptr->padding_0[344] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[136]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[136]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[136]);
 } while (*((int *)&ptr->padding_0[136]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[132] = 1;
 return v14;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401549
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40154d
int __x86.get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401551 at 0x401551
int sub_401551()
{
 test_cpp_member_func();
 return 0;
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

 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
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
 __x86.get_pc_thunk_ax();
 return;
}


// Function: sub_40161c at 0x40161c
void sub_40161c(unsigned int a0)
{
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401620
void call_virtual_func(void* arg_0, int arg_1)
{
 void* v0; // [bp+0x4]

 v0 = arg_0;
 goto *((int *)*((int *)arg_0));
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
int sub_40166a()
{
 test_cpp_template_func();
 return 0;
}


// Function: _Z22test_cpp_template_funcv at 0x401670
void test_cpp_template_func()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // fpround
 unsigned int v0; // [bp-0x2c]
 unsigned short v1; // [bp-0x20]
 unsigned short v2; // [bp-0x1e]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 template_max(3, 7);
 template_max(0, 0x40040000, 0, 0x3ff80000);
 v3 = 10;
 if ([D] unsupported_<class 'pyvex_expr_GetI'>())
 [D] PutI(136:I8x8)[t6,0] = 0x00()
 else
 [D] PutI(136:I8x8)[t6,0] = 0x00()
 v4 = 20;
 template_swap();
 if ([D] unsupported_<class 'pyvex_expr_GetI'>())
 {
 [D] PutI(72:F64x8)[t3,0] = t6()
 [D] PutI(136:I8x8)[t3,0] = 0x01()
 }
 else
 {
 [D] PutI(72:F64x8)[t3,0] = t6()
 [D] PutI(136:I8x8)[t3,0] = 0x01()
 }
 v2 = _ccall(v10);
 v1 = v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100;
 if ([D] unsupported_<class 'pyvex_expr_GetI'>())
 {
 v0 = [D] unsupported_<class 'pyvex_expr_GetI'>();
 [D] PutI(136:I8x8)[t9,0] = 0x00()
 }
 else
 {
 v0 = nan;
 [D] PutI(136:I8x8)[t9,0] = 0x00()
 }
 if (v5 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 {
 __stack_chk_fail_local(v0);
 test_cpp_template_class();
 }
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401720
void test_cpp_template_class()
{
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
int sub_40174a()
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

void test_cpp_rtti()
{
 void* *ptr; // edi
 char *v5; // ebp
 char *v6; // eax
 struct_2 **p; // [bp-0x28]
 void* v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]

 ptr = sub_401170(4);
 *(ptr) = &g_403e48;
 p = sub_401170(4);
 *(p) = &g_403e5c;
 v1 = *(ptr);
 v5 = *((int *)((int)(*(ptr))[4] + 4));
 if (v5 != "12RTTIDerivedA" && *(v5) != 42)
 sub_4011d0(v5, "12RTTIDerivedA");
 v6 = addr->field_4;
 v2 = &_ZTI8RTTIBase;
 sub_4011a0();
 (int)v1[4](ptr);
 *(p)->field_4(p);
 return;
}


// Function: sub_401878 at 0x401878
int sub_401878()
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

int test_cpp_oo_features()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 char v0; // [bp-0x30]
 char v1[2]; // [bp-0x12]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 sub_401220(&g_402018);
 strncpy(v1, "Test", 4);
 sub_401160(1, &g_40203c, sub_4011a0(&v0) + 4700);
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
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return Base::virtual_func();
 }
 return v2 - *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
}


// Function: _ZN4Base12virtual_funcEi at 0x401a30
void Base::virtual_func(void* this_ptr, int arg_0)
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
void Base::getName(void* this_ptr)
{
 __x86.get_pc_thunk_ax();
 return;
}


// Function: sub_401a55 at 0x401a55
int sub_401a55()
{
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x401a60
int Base::~Base(void* this_ptr)
{
 return 0;
}


// Function: sub_401a65 at 0x401a65
void sub_401a65(unsigned int a0, unsigned int a1)
{
 Derived::virtual_func();
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401a70
void Derived::virtual_func(void* this_ptr, int arg_0)
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
void Derived::getName(void* this_ptr)
{
 __x86.get_pc_thunk_ax();
 return;
}


// Function: sub_401aa5 at 0x401aa5
void sub_401aa5()
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401ab0
void MultiDerived::funcA(void* this_ptr)
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
void MultiDerived::funcB(void* this_ptr)
{
 return;
}


// Function: sub_401aca at 0x401aca
void sub_401aca()
{
 non-virtual thunk to MultiDerived::funcB()();
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401ad0
unsigned int non-virtual thunk to MultiDerived::funcB()()
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
void MiddleA::func(void* this)
{
 return;
}


// Function: sub_401af7 at 0x401af7
void sub_401af7(unsigned int a0)
{
 thunk to MiddleA::func()();
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401b00
int thunk to MiddleA::func()(void* *a0)
{
 void* *v0; // eax

 v0 = (char *)a0 + (*(a0))[12];
 return *((int *)(4 + (char *)v0 + (*(v0))[12])) + 150;
}


// Function: sub_401b1c at 0x401b1c
void sub_401b1c(unsigned int a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401b20
void MiddleB::func(void* this)
{
 return;
}


// Function: sub_401b37 at 0x401b37
void sub_401b37(unsigned int a0)
{
 thunk to MiddleB::func()();
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401b40
int thunk to MiddleB::func()(void* *a0)
{
 void* *v0; // eax

 v0 = (char *)a0 + (*(a0))[12];
 return *((int *)(4 + (char *)v0 + (*(v0))[12])) + 200;
}


// Function: sub_401b5c at 0x401b5c
void sub_401b5c(unsigned int a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401b60
void DiamondDerived::func(void* this)
{
 return;
}


// Function: sub_401b77 at 0x401b77
void sub_401b77(unsigned int a0)
{
 thunk to DiamondDerived::func()();
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401b80
int thunk to DiamondDerived::func()(void* *a0)
{
 void* *v0; // eax

 v0 = (char *)a0 + (*(a0))[12];
 return *((int *)(4 + (char *)v0 + (*(v0))[12])) + 250;
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0)
{
 non-virtual thunk to DiamondDerived::func()();
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401ba0
int non-virtual thunk to DiamondDerived::func()(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)a0[8] - 12)))) + 250;
}


// Function: sub_401bb8 at 0x401bb8
void sub_401bb8()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401bc0
void RTTIDerivedA::getType(void* this)
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
void RTTIDerivedB::getType(void* this)
{
 return;
}


// Function: sub_401bda at 0x401bda
void sub_401bda()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401be0
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 return;
}


// Function: sub_401be5 at 0x401be5
void sub_401be5()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401bf0
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 return;
}


// Function: sub_401bf5 at 0x401bf5
void sub_401bf5()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401c00
int DiamondDerived::~DiamondDerived(void* this)
{
 return;
}


// Function: sub_401c05 at 0x401c05
void sub_401c05()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401c10
void thunk to DiamondDerived::~DiamondDerived()()
{
 return;
}


// Function: sub_401c15 at 0x401c15
void sub_401c15()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401c20
void non-virtual thunk to DiamondDerived::~DiamondDerived()()
{
 return;
}


// Function: sub_401c25 at 0x401c25
void sub_401c25()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401c30
int MultiDerived::~MultiDerived(void* this)
{
 return;
}


// Function: sub_401c35 at 0x401c35
void sub_401c35()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401c40
void non-virtual thunk to MultiDerived::~MultiDerived()()
{
 return;
}


// Function: sub_401c45 at 0x401c45
void sub_401c45()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401c50
int Derived::~Derived(void* this)
{
 return;
}


// Function: sub_401c55 at 0x401c55
int sub_401c55()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401c60
int Base::~Base(void* this)
{
 sub_4011c0(this, 4);
 return;
}


// Function: sub_401c83 at 0x401c83
int sub_401c83()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401c90
int Derived::~Derived(void* this)
{
 sub_4011c0(this, 8);
 return;
}


// Function: sub_401cb3 at 0x401cb3
int sub_401cb3()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401cc0
int MultiDerived::~MultiDerived(void* this)
{
 sub_4011c0(this, 16);
 return;
}


// Function: sub_401ce3 at 0x401ce3
int sub_401ce3()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401cf0
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
 return sub_4011c0(a0 - 8, 16);
}


// Function: sub_401d17 at 0x401d17
int sub_401d17()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401d20
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 sub_4011c0(this, 4);
 return;
}


// Function: sub_401d43 at 0x401d43
int sub_401d43()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401d50
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 sub_4011c0(this, 4);
 return;
}


// Function: sub_401d73 at 0x401d73
int sub_401d73()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401d80
int DiamondDerived::~DiamondDerived(void* this)
{
 sub_4011c0(this, 24);
 return;
}


// Function: sub_401da3 at 0x401da3
int sub_401da3()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x401db0
int thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
 return sub_4011c0((void* *)((char *)a0 + (*(a0))[16]), 24);
}


// Function: sub_401dd9 at 0x401dd9
int sub_401dd9()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401de0
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 return sub_4011c0(a0 - 8, 24);
}


// Function: sub_401e07 at 0x401e07
void sub_401e07(unsigned int a0, unsigned int a1)
{
 template_max<int>();
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401e10
int template_max(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: sub_401e22 at 0x401e22
void sub_401e22(unsigned int a0)
{
 template_max<double>();
 return;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401e30
// Function: sub_401e43 at 0x401e43
int sub_401e43()
{
 template_swap<int>();
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401e50
void template_swap<int>(int &ptr, int &p)
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
 Container<int>::Container();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401e70
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401e80
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // edx

 index = (int)ptr[40];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[40]) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_401e9e at 0x401e9e
void sub_401e9e(unsigned int a0, unsigned int a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ea0
void Container<int>::get(void* this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: sub_401eb8 at 0x401eb8
void sub_401eb8()
{
}


// Function: sub_401ec4 at 0x401ec4
void sub_401ec4(unsigned int a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401ed0
void Container<int>::getSize(void* this)
{
 return;
}


// Function: sub_401edc at 0x401edc
void sub_401edc(unsigned int a0)
{
 Container<double>::Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401ee0
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401ef0
void Container<double>::push(void* ptr)
{
 unsigned int index; // edx

 if ([D] unsupported_<class 'pyvex_expr_GetI'>())
 {
 [D] PutI(72:F64x8)[t3,0] = t6()
 [D] PutI(136:I8x8)[t3,0] = 0x01()
 }
 else
 {
 [D] PutI(72:F64x8)[t3,0] = t6()
 [D] PutI(136:I8x8)[t3,0] = 0x01()
 }
 index = (int)ptr[80];
 if (index > 9)
 {
 [D] PutI(72:F64x8)[t0,0] = t1()
 [D] PutI(136:I8x8)[t0,0] = 0x01()
 [D] PutI(136:I8x8)[t0,0] = 0x00()
 return;
 }
 *((unsigned int *)&ptr[80]) = index + 1;
 if ([D] unsupported_<class 'pyvex_expr_GetI'>())
 {
 *((int *)((char *)ptr + 8 * index)) = [D] unsupported_<class 'pyvex_expr_GetI'>();
 [D] PutI(136:I8x8)[t8,0] = 0x00()
 }
 else
 {
 *((unsigned long long *)((char *)ptr + 8 * index)) = nan;
 [D] PutI(136:I8x8)[t8,0] = 0x00()
 }
 return;
}


// Function: sub_401f0f at 0x401f0f
void sub_401f0f()
{
}


// Function: sub_401f13 at 0x401f13
void sub_401f13(unsigned int a0, unsigned int a1)
{
 Container<double>::get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401f20
void Container<double>::get(void* this, int arg_0)
{
 if (arg_0 >= 0 && arg_0 < (int)this[80])
 {
 if ([D] unsupported_<class 'pyvex_expr_GetI'>())
 {
 [D] PutI(72:F64x8)[t5,0] = t8()
 [D] PutI(136:I8x8)[t5,0] = 0x01()
 return;
 }
 [D] PutI(72:F64x8)[t5,0] = t8()
 [D] PutI(136:I8x8)[t5,0] = 0x01()
 return;
 }
 [D] PutI(72:F64x8)[t2,0] = t5()
 [D] PutI(136:I8x8)[t2,0] = 0x01()
 return;
}


// Function: sub_401f38 at 0x401f38
void sub_401f38()
{
}


// Function: sub_401f44 at 0x401f44
void sub_401f44(unsigned int a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401f50
void Container<double>::getSize(void* this)
{
 return;
}


// Function: __x86.get_pc_thunk_ax at 0x401f5c
unsigned int __x86.get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86_get_pc_thunk_si at 0x401f60
int __x86_get_pc_thunk_si(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401f64 at 0x401f64
int sub_401f64()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401f70
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4011f0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
 struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2[1]_padding_0[351];
 v4 = *((int *)&ptr->padding_0[356]);
 if (*((int *)&ptr->padding_0[356]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[356];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401fd2 at 0x401fd2
void sub_401fd2()
{
}



/* CRT stub function _fini removed by preprocessor */


