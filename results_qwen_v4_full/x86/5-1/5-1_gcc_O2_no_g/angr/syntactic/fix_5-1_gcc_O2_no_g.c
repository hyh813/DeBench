// Angr Decompilation of 5-1_gcc_O2_no_g
// Platform: X86

#include <string.h>

// External function declarations
void __stack_chk_fail_local(void);
unsigned int _ccall(unsigned long a0, unsigned long a1, unsigned int a2, int a3);
unsigned int __do_global_ctors_aux(void);

/* CRT stub function _init removed by preprocessor */

void frame_dummy(void);

typedef struct struct_0 {
 char padding_0[132];
 unsigned int field_84;
 unsigned int field_88;
 unsigned int field_8c;
 unsigned int field_90;
 unsigned int field_94;
 unsigned int field_98;
 unsigned int field_9c;
 unsigned int field_a0;
 unsigned int field_a4;
 unsigned int field_a8;
 unsigned int field_ac;
 unsigned int field_b0;
 unsigned int field_b4;
 unsigned int field_b8;
 unsigned int field_bc;
 unsigned int field_c0;
 unsigned int field_c4;
 unsigned int field_c8;
 unsigned int field_cc;
 unsigned int field_d0;
 unsigned int field_d4;
 unsigned int field_d8;
 unsigned int field_dc;
 unsigned int field_e0;
 unsigned int field_e4;
 unsigned int field_e8;
 unsigned int field_ec;
 unsigned int field_f0;
 unsigned int field_f4;
 unsigned int field_f8;
 unsigned int field_fc;
 unsigned int field_100;
 unsigned int field_104;
 unsigned int field_108;
 unsigned int field_10c;
 unsigned int field_110;
 unsigned int field_114;
 unsigned int field_118;
 unsigned int field_11c;
 unsigned int field_120;
 unsigned int field_124;
 unsigned int field_128;
 unsigned int field_12c;
 unsigned int field_130;
 unsigned int field_134;
 unsigned int field_138;
 unsigned int field_13c;
 unsigned int field_140;
 unsigned int field_144;
 unsigned int field_148;
 unsigned int field_14c;
 unsigned int field_150;
 unsigned int field_154;
 unsigned int field_158;
 unsigned int field_15c;
 unsigned int field_160;
 unsigned int field_164;
 unsigned int field_168;
 unsigned int field_16c;
 unsigned int field_170;
 unsigned int field_174;
 unsigned int field_178;
 unsigned int field_17c;
 unsigned int field_180;
 unsigned int field_184;
 unsigned int field_188;
 unsigned int field_18c;
 unsigned int field_190;
 unsigned int field_194;
 unsigned int field_198;
 unsigned int field_19c;
 unsigned int field_1a0;
 unsigned int field_1a4;
 unsigned int field_1a8;
 unsigned int field_1ac;
 unsigned int field_1b0;
 unsigned int field_1b4;
 unsigned int field_1b8;
 unsigned int field_1bc;
 unsigned int field_1c0;
 unsigned int field_1c4;
 unsigned int field_1c8;
 unsigned int field_1cc;
 unsigned int field_1d0;
 unsigned int field_1d4;
 unsigned int field_1d8;
 unsigned int field_1dc;
 unsigned int field_1e0;
 unsigned int field_1e4;
 unsigned int field_1e8;
 unsigned int field_1ec;
 unsigned int field_1f0;
 unsigned int field_1f4;
 unsigned int field_1f8;
 unsigned int field_1fc;
 unsigned int field_200;
 unsigned int field_204;
 unsigned int field_208;
 unsigned int field_20c;
 unsigned int field_210;
 unsigned int field_214;
 unsigned int field_218;
 unsigned int field_21c;
 unsigned int field_220;
 unsigned int field_224;
 unsigned int field_228;
 unsigned int field_22c;
 unsigned int field_230;
 unsigned int field_234;
 unsigned int field_238;
 unsigned int field_23c;
 unsigned int field_240;
 unsigned int field_244;
 unsigned int field_248;
 unsigned int field_24c;
 unsigned int field_250;
 unsigned int field_254;
 unsigned int field_258;
 unsigned int field_25c;
 unsigned int field_260;
 unsigned int field_264;
 unsigned int field_268;
 unsigned int field_26c;
 unsigned int field_270;
 unsigned int field_274;
 unsigned int field_278;
 unsigned int field_27c;
 unsigned int field_280;
 unsigned int field_284;
 unsigned int field_288;
 unsigned int field_28c;
 unsigned int field_290;
 unsigned int field_294;
 unsigned int field_298;
 unsigned int field_29c;
 unsigned int field_2a0;
 unsigned int field_2a4;
 unsigned int field_2a8;
 unsigned int field_2ac;
 unsigned int field_2b0;
 unsigned int field_2b4;
 unsigned int field_2b8;
 unsigned int field_2bc;
 unsigned int field_2c0;
 unsigned int field_2c4;
 unsigned int field_2c8;
 unsigned int field_2cc;
 unsigned int field_2d0;
 unsigned int field_2d4;
 unsigned int field_2d66;
} struct_0;

extern struct_0 *g_403ff4;

int _init()
{
 if (g_403ff4)
 ((void(*)())g_403ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
void sub_401030(unsigned int idx)
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 ((void(*)())(ptr[2]))();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 sub_401030(0);
}


// Forward declarations
void sub_401050(void);
void sub_401060(void);
void sub_401070(void);
void sub_401080(void);
void sub_401090(void);
void sub_4010a0(void);
void sub_4010b0(void);
void sub_4010c0(void);
void sub_4010d0(void);
void sub_4010e0(void);
void sub_4010f0(void);
void sub_401100(void);
void sub_401110(void);
void sub_401120(void);
void sub_401130(void);
void sub_401140(void);
void sub_401150(void);
void sub_401160(unsigned int a0, void* a1, void* a2);
void* sub_401170(unsigned int size);
void* sub_401180(unsigned int a0);
void* sub_401190(unsigned int size);
unsigned int sub_4011a0();
int sub_4011b0();
void sub_4011c0(void* this_ptr, unsigned int size);
void sub_4011d0(void* a0, char* a1);
void sub_4011e0(void);
void sub_4011f0(void);
void sub_401200(void);
unsigned int sub_401210(void);
void sub_401220(unsigned int* a0);
void sub_401230(unsigned int* a0);
void sub_401240(unsigned int a0);
unsigned int sub_401250(void* a0, unsigned int a1, unsigned int a2);
unsigned int sub_401260(unsigned int a0);
void* __x86_get_pc_thunk_si(int a0, int a1, char* a2);
void* __x86_get_pc_thunk_di(int a0, char* a1);
void __x86_get_pc_thunk_di(void);
int main();
void* deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int* __do_global_dtors_aux(void);

// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
int sub_401150(void* a0)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_84)();
 return 0;
}


// Function: sub_40115a at 0x40115a
void sub_40115a()
{
 sub_401160(0, (void*)0, (void*)0);
}


// Function: sub_401160 at 0x401160
void sub_401160(unsigned int a0, void* a1, void* a2)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_8c)();
}


// Function: sub_40116a at 0x40116a
void sub_40116a()
{
 sub_401170(4);
}


// Function: sub_401170 at 0x401170
void* sub_401170(unsigned int size)
{
 struct_0 *v1 = g_403ff4; // ebx

 return (void*)((void*(*)())v1->field_90)();
}


// Function: sub_40117a at 0x40117a
void sub_40117a()
{
 sub_401180(0);
}


// Function: sub_401180 at 0x401180
void* sub_401180(unsigned int a0)
{
 struct_0 *v1 = g_403ff4; // ebx

 return (void*)((void*(*)(unsigned int))v1->field_84)(a0);
}


// Function: sub_40118a at 0x40118a
void sub_40118a()
{
 sub_401190(0);
}


// Function: sub_401190 at 0x401190
void* sub_401190(unsigned int size)
{
 struct_0 *v1 = g_403ff4; // ebx

 return (void*)((void*(*)(unsigned int))v1->field_88)(size);
}


// Function: sub_40119a at 0x40119a
void sub_40119a()
{
 sub_4011a0();
}


// Function: sub_4011a0 at 0x4011a0
unsigned int sub_4011a0()
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_84)();
 return 0;
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 sub_4011b0();
}


// Function: sub_4011b0 at 0x4011b0
int sub_4011b0(void* a0, void* a1, void* a2)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_88)();
 return 0;
}


// Function: sub_4011ba at 0x4011ba
void sub_4011ba()
{
 sub_4011c0((void*)0, 0);
}


// Function: sub_4011c0 at 0x4011c0
void sub_4011c0(void* this_ptr, unsigned int size)
{
 return;
}


// Function: sub_4011ca at 0x4011ca
void sub_4011ca()
{
 sub_4011d0((void*)0, (char*)0);
}


// Function: sub_4011d0 at 0x4011d0
void sub_4011d0(void* a0, char* a1)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_84)();
}


// Function: sub_4011da at 0x4011da
void sub_4011da()
{
 sub_4011e0();
}


// Function: sub_4011e0 at 0x4011e0
void sub_4011e0()
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_88)();
}


// Function: sub_4011ea at 0x4011ea
void sub_4011ea()
{
 sub_4011f0();
}


// Function: sub_4011f0 at 0x4011f0
void sub_4011f0()
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_84)();
}


// Function: sub_4011fa at 0x4011fa
void sub_4011fa()
{
 sub_401200();
}


// Function: sub_401200 at 0x401200
void sub_401200()
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_88)();
}


// Function: sub_40120a at 0x40120a
void sub_40120a()
{
 sub_401210();
}


// Function: sub_401210 at 0x401210
unsigned int sub_401210()
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_8c)();
 return 0;
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 sub_401220((unsigned int*)0);
}


// Function: sub_401220 at 0x401220
void sub_401220(unsigned int* a0)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_90)();
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
 sub_401230((unsigned int*)0);
}


// Function: sub_401230 at 0x401230
void sub_401230(unsigned int* a0)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_94)();
}


// Function: sub_40123a at 0x40123a
void sub_40123a()
{
 sub_401240(0);
}


// Function: sub_401240 at 0x401240
void sub_401240(unsigned int a0)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_98)();
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 sub_401250((void*)0, 0, 0);
}


// Function: sub_401250 at 0x401250
unsigned int sub_401250(void* a0, unsigned int a1, unsigned int a2)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_9c)();
 return 0;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 sub_401260(0);
}


// Function: sub_401260 at 0x401260
unsigned int sub_401260(unsigned int a0)
{
 struct_0 *v1 = g_403ff4; // ebx

 ((void(*)())v1->field_a0)();
 return 0;
}


// Forward declarations
int test_cpp_exception(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
int test_cpp_lambda(void);
int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void call_virtual_func(class Base *arg_0, int arg_1);

// Function: sub_40126a at 0x40126a
void sub_40126a()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401270
int test_cpp_exception()
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
 v6 = (struct_0*)0;
 v7 = (struct_0*)((char*)v6 + 11542);
 v1 = v8;
 ptr = (int*)sub_401190(4);
 *(ptr) = 42;
 v10 = sub_401250((void*)ptr, (unsigned int)&v7->padding_0[80], 0);
 if (v10 != 1)
 {
 v0 = 0;
 }
 else
 {
 v0 = *((int *)sub_401180(4));
 v10 = sub_401210();
 sub_401240(0);
 }
 if (v10 != 1)
 sub_401260(v10);
 sub_401180(4);
 sub_401240(0);
 v13 = sub_401250(sub_401190(4), (unsigned int)((char*)v7 + 300), 0);
 if (v13 != 2)
 {
 if (v13 != 3)
 {
 sub_401260(v13);
 sub_401240(0);
 }
 else
 {
 sub_401180(v13);
 sub_401240(0);
 return 0;
 }
 }
 sub_401180(v13);
 sub_401240(0);
 return 0;
}


// Function: sub_40137e at 0x40137e
void sub_40137e()
{
 main();
}


// Function: main at 0x401380
int test_cpp_oo_features();
int main()
{
 char v0; // [bp+0x0]

 test_cpp_oo_features();
 return 0;
}


// Forward declaration
int _GLOBAL__sub_I__Z20test_cpp_member_funcv();

// Function: sub_401393 at 0x401393
void sub_401393()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
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


// Forward declaration
void _start(void);

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
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401414 at 0x401414
void sub_401414()
{
 deregister_tm_clones();
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void __x86_get_pc_thunk_dx(void);
void* __x86_get_pc_thunk_si(int a0, int a1, char* a2);

void* deregister_tm_clones()
{
 __x86_get_pc_thunk_dx();
 return (void*)0;
}


// Function: sub_401453 at 0x401453
void sub_401453()
{
}


// Function: sub_401459 at 0x401459
void sub_401459()
{
 register_tm_clones();
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 __x86_get_pc_thunk_dx();
 return 0;
}


// Function: sub_4014a7 at 0x4014a7
void sub_4014a7()
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

typedef void (*dtor_func_t)(void);

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
 dtor_func_t func_ptr; // temporary
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 (void)__x86_get_pc_thunk_di(*((int *)&v2), &v3);
 v5 = (unsigned int*)0;
 ptr = (struct_0 *)((char *)(unsigned int)v5 + 10967);
 v1 = v8;
 v0 = v9;
 if (ptr->field_2d66)
 return v5;
 if (*((int *)&ptr->field_84))
 sub_401150((void*)*((int *)&ptr->field_88));
 v10 = (struct_0 *)((char *)ptr + 348);
 v11 = *((int *)&ptr->field_8c);
 i = ((char *)&ptr->field_88 - (char *)v10 >> 2) - 1;
 if (*((int *)&ptr->field_8c) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->field_8c) = v13;
 func_ptr = (dtor_func_t)*((int *)((char *)v10 + 4 * v13));
 func_ptr();
 v11 = *((int *)&ptr->field_8c);
 } while (*((int *)&ptr->field_8c) < i);
 }
 (void)deregister_tm_clones();
 ptr->field_2d66 = 1;
 return v5;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401549
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40154d
void __x86_get_pc_thunk_di()
{
 return;
}


// Function: sub_401551 at 0x401551
int sub_401551()
{
 test_cpp_member_func();
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401560
int test_cpp_member_func()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 char v0[4]; // [bp-0x30]
 char v1; // [bp-0x2c]
 char v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v3 = _ccall(v5, v6, (unsigned int)v7, 20);
 strncpy(v0, "Test", 4);
 memset(&v1, 0, 24);
 memset(&v2, 0, 4);
 sub_4011a0();
 if (v3 != _ccall(v5, v6, (unsigned int)v7, 20))
 {
 __stack_chk_fail_local();
 return 0;
 }
 return 0;
}


// Function: _Z20test_cpp_constructorv at 0x401600
int test_cpp_constructor()
{
 return 0;
}


// Function: sub_40161c at 0x40161c
void sub_40161c(unsigned int a0)
{
 call_virtual_func((class Base*)0, 0);
}


// Function: _Z17call_virtual_funcP4Basei at 0x401620
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 void* v0; // [bp+0x4]

 v0 = arg_0;
 ((void(*)())*((int *)arg_0))();
}


// Function: _Z21test_cpp_virtual_funcv at 0x401630
int test_cpp_virtual_func()
{
 return 0;
}


// Function: sub_40163a at 0x40163a
void sub_40163a()
{
 test_cpp_multiple_inheritance();
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401640
int test_cpp_multiple_inheritance()
{
 return 0;
}


// Function: sub_40164a at 0x40164a
void sub_40164a()
{
 test_cpp_diamond_inheritance();
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401650
int test_cpp_diamond_inheritance()
{
 return 0;
}


// Function: sub_40165a at 0x40165a
void sub_40165a()
{
 test_cpp_operator_overload();
}


// Function: _Z26test_cpp_operator_overloadv at 0x401660
int test_cpp_operator_overload()
{
 return 0;
}


// Function: sub_40166a at 0x40166a
int sub_40166a()
{
 return (int)test_cpp_template_func();
}


// Forward declarations
int template_max_int(int arg_0, int arg_1);
void template_swap_int(int *ptr, int *p);

// Function: _Z22test_cpp_template_funcv at 0x401670
int test_cpp_template_func()
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

 v5 = _ccall(v7, v8, (unsigned int)v9, 20);
 (void)template_max_int(3, 7);
 v3 = 10;
 v4 = 20;
 template_swap_int(&v3, &v4);
 v2 = 0;
 v1 = v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100;
 if (v5 != _ccall(v7, v8, (unsigned int)v9, 20))
 {
 __stack_chk_fail_local();
 test_cpp_template_class();
 }
 return 0;
}


// Function: _Z23test_cpp_template_classv at 0x401720
int test_cpp_template_class()
{
 return 0;
}


// Function: sub_40172a at 0x40172a
void sub_40172a()
{
 test_cpp_lambda();
}


// Function: _Z15test_cpp_lambdav at 0x401730
int test_cpp_lambda()
{
 return 0;
}


// Function: sub_40173a at 0x40173a
void sub_40173a()
{
 test_cpp_smart_ptr();
}


// Function: _Z18test_cpp_smart_ptrv at 0x401740
int test_cpp_smart_ptr()
{
 return 0;
}


// Function: sub_40174a at 0x40174a
int sub_40174a()
{
 return (int)test_cpp_rtti();
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

int test_cpp_rtti()
{
 void* *ptr; // edi
 char *v5; // ebp
 char *v6; // eax
 struct_2 **p; // [bp-0x28]
 void* v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]

 ptr = (void* *)sub_401170(4);
 *ptr = (void*)&g_403e48;
 p = (struct_2 **)sub_401170(4);
 *p = (struct_2*)(void*)&g_403e5c;
 v1 = *ptr;
 v5 = (char *)*((int **)((char *)(v1) + 4));
 if (v5 != "12RTTIDerivedA" && *(v5) != 42)
 sub_4011d0(v5, "12RTTIDerivedA");
 v6 = (char *)addr->field_4;
 v2 = (unsigned int)&_ZTI8RTTIBase;
 sub_4011a0();
 ((void(*)(void*))((int*)v1)[1])(ptr);
 ((void(*)(struct_2 **))((struct_3 *)(*p)->field_4))(p);
 return 0;
}


// Function: sub_401878 at 0x401878
int sub_401878()
{
 (void)test_cpp_oo_features();
 return 0;
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

 v2 = _ccall(v4, v5, (unsigned int)v6, 20);
 sub_401220((unsigned int*)&g_402018);
 strncpy(v1, "Test", 4);
 sub_401160(1, (void*)&g_40203c, (void*)4700);
 test_cpp_constructor();
 sub_401160(1, (void*)&g_40205a, (void*)0);
 sub_401160(1, (void*)&g_402076, (void*)42);
 sub_401160(1, (void*)&g_402092, (void*)71);
 sub_401160(1, (void*)&g_4020ae, (void*)0);
 sub_401160(1, (void*)&g_4020cb, (void*)22);
 test_cpp_template_func();
 sub_401160(1, (void*)&g_4020e7, (void*)0);
 sub_401160(1, (void*)&g_402103, (void*)16);
 sub_401160(1, (void*)&g_40211f, (void*)85);
 test_cpp_exception();
 sub_401160(1, (void*)&g_40213b, (void*)0);
 sub_401160(1, (void*)&g_402158, (void*)0);
 sub_401160(1, (void*)&g_402175, (void*)0);
 if (v2 != _ccall(v4, v5, (unsigned int)v6, 20))
 {
 __stack_chk_fail_local();
 }
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x401a30
int Base_virtual_func(void* this_ptr, int arg_0)
{
 return 0;
}


// Forward declarations
void Base_getName(void* this_ptr);
int MultiDerived_funcA(void* this_ptr);
int MultiDerived_funcB(void* this_ptr);
int MiddleA_func(void* this_ptr);
int MiddleB_func(void* this_ptr);
int DiamondDerived_func(void* this_ptr);
int RTTIDerivedA_getType(void* this_ptr);

// Function: sub_401a3c at 0x401a3c
void sub_401a3c()
{
 Base_getName((void*)0);
}


// Function: _ZNK4Base7getNameEv at 0x401a40
void Base_getName(void* this_ptr)
{
 return;
}


// Function: sub_401a55 at 0x401a55
void sub_401a55()
{
}


// Function: _ZN4BaseD1Ev at 0x401a60
int Base_destructor(void* this_ptr)
{
 return 0;
}


// Forward declaration
int Derived_virtual_func(void* this_ptr, int arg_0);

// Function: sub_401a65 at 0x401a65
void sub_401a65(unsigned int a0, unsigned int a1)
{
 Derived_virtual_func((void*)0, 0);
}


// Function: _ZN7Derived12virtual_funcEi at 0x401a70
int Derived_virtual_func(void* this_ptr, int arg_0)
{
 return 0;
}


// Forward declaration
void Derived_getName(void* this_ptr);

// Function: sub_401a81 at 0x401a81
void sub_401a81()
{
 Derived_getName((void*)0);
}


// Function: _ZNK7Derived7getNameEv at 0x401a90
void Derived_getName(void* this_ptr)
{
 return;
}


// Function: sub_401aa5 at 0x401aa5
void sub_401aa5()
{
 MultiDerived_funcA((void*)0);
}


// Function: _ZN12MultiDerived5funcAEv at 0x401ab0
int MultiDerived_funcA(void* this_ptr)
{
 return 0;
}


// Function: sub_401aba at 0x401aba
void sub_401aba()
{
 MultiDerived_funcB((void*)0);
}


// Function: _ZN12MultiDerived5funcBEv at 0x401ac0
int MultiDerived_funcB(void* this_ptr)
{
 return 0;
}


// Function: sub_401aca at 0x401aca
void sub_401aca()
{
 // non-virtual thunk to MultiDerived::funcB()()
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401ad0
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: sub_401ada at 0x401ada
void sub_401ada(unsigned int a0)
{
 MiddleA_func((void*)0);
}


// Function: _ZN7MiddleA4funcEv at 0x401ae0
int MiddleA_func(void* this_ptr)
{
 return 0;
}


// Function: sub_401af7 at 0x401af7
void sub_401af7(unsigned int a0)
{
 // thunk to MiddleA::func()()
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401b00
int thunk_to_MiddleA_func(void* a0)
{
 void* v0; // eax

 v0 = (void*)((char *)a0 + ((int*)(*(void**)a0))[12]);
 return (int)*((int *)(4 + (char *)v0 + ((int*)(*(void**)v0))[12])) + 150;
}


// Function: sub_401b1c at 0x401b1c
void sub_401b1c(unsigned int a0)
{
 MiddleB_func((void*)0);
}


// Function: _ZN7MiddleB4funcEv at 0x401b20
int MiddleB_func(void* this_ptr)
{
 return 0;
}


// Function: sub_401b37 at 0x401b37
void sub_401b37(unsigned int a0)
{
 // thunk to MiddleB::func()()
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401b40
int thunk_to_MiddleB_func(void* a0)
{
 void* v0; // eax

 v0 = (void*)((char *)a0 + ((int*)(*(void**)a0))[12]);
 return (int)*((int *)(4 + (char *)v0 + ((int*)(*(void**)v0))[12])) + 200;
}


// Function: sub_401b5c at 0x401b5c
void sub_401b5c(unsigned int a0)
{
 DiamondDerived_func((void*)0);
}


// Function: _ZN14DiamondDerived4funcEv at 0x401b60
int DiamondDerived_func(void* this_ptr)
{
 return 0;
}


// Function: sub_401b77 at 0x401b77
void sub_401b77(unsigned int a0)
{
 // thunk to DiamondDerived::func()()
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401b80
int thunk_to_DiamondDerived_func(void* a0)
{
 void* v0; // eax

 v0 = (void*)((char *)a0 + ((int*)(*(void**)a0))[12]);
 return (int)*((int *)(4 + (char *)v0 + ((int*)(*(void**)v0))[12])) + 250;
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0)
{
 // non-virtual thunk to DiamondDerived::func()()
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401ba0
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return (int)*((int *)(-4 + (char *)a0 + ((int*)((int*)a0)[8] - 12))) + 250;
}


// Function: sub_401bb8 at 0x401bb8
void sub_401bb8()
{
 RTTIDerivedA_getType((void*)0);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401bc0
int RTTIDerivedA_getType(void* this_ptr)
{
 return 0;
}


// Function: sub_401bca at 0x401bca
void sub_401bca()
{
 RTTIDerivedB_getType((void*)0);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401bd0
int RTTIDerivedB_getType(void* this_ptr)
{
 return 0;
}


// Function: sub_401bda at 0x401bda
void sub_401bda()
{
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401be0
int RTTIDerivedB_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_401be5 at 0x401be5
void sub_401be5()
{
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401bf0
int RTTIDerivedA_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_401bf5 at 0x401bf5
void sub_401bf5()
{
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401c00
int DiamondDerived_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_401c05 at 0x401c05
void sub_401c05()
{
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401c10
int thunk_to_DiamondDerived_D1Ev(void* a0)
{
 return 0;
}


// Function: sub_401c15 at 0x401c15
void sub_401c15()
{
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401c20
int non_virtual_thunk_to_DiamondDerived_D1Ev(void* a0)
{
 return 0;
}


// Function: sub_401c25 at 0x401c25
void sub_401c25()
{
}


// Function: _ZN12MultiDerivedD1Ev at 0x401c30
int MultiDerived_D1Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_401c35 at 0x401c35
void sub_401c35()
{
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401c40
int non_virtual_thunk_to_MultiDerived_D1Ev(void* a0)
{
 return 0;
}


// Function: sub_401c45 at 0x401c45
void sub_401c45()
{
}


// Function: _ZN7DerivedD2Ev at 0x401c50
int Derived_D2Ev(void* this_ptr)
{
 return 0;
}


// Function: sub_401c55 at 0x401c55
void sub_401c55()
{
}


// Function: _ZN4BaseD0Ev at 0x401c60
int Base_D0Ev(void* this_ptr)
{
 sub_4011c0(this_ptr, 4);
 return 0;
}


// Function: sub_401c83 at 0x401c83
void sub_401c83()
{
}


// Function: sub_401c83 at 0x401c83
void sub_401c83()
{
}


// Function: _ZN7DerivedD0Ev at 0x401c90
int Derived_D0Ev(void* this_ptr)
{
 sub_4011c0(this_ptr, 8);
 return 0;
}


// Function: sub_401cb3 at 0x401cb3
void sub_401cb3()
{
}


// Function: _ZN12MultiDerivedD0Ev at 0x401cc0
int MultiDerived_D0Ev(void* this_ptr)
{
 sub_4011c0(this_ptr, 16);
 return 0;
}


// Function: sub_401ce3 at 0x401ce3
void sub_401ce3()
{
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401cf0
int non_virtual_thunk_to_MultiDerived_D0Ev(unsigned int a0)
{
 sub_4011c0((void*)(a0 - 8), 16);
 return 0;
}


// Function: sub_401d17 at 0x401d17
void sub_401d17()
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401d20
int RTTIDerivedB_D0Ev(void* this_ptr)
{
 sub_4011c0(this_ptr, 4);
 return 0;
}


// Function: sub_401d43 at 0x401d43
void sub_401d43()
{
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401d50
int RTTIDerivedA_D0Ev(void* this_ptr)
{
 sub_4011c0(this_ptr, 4);
 return 0;
}


// Function: sub_401d73 at 0x401d73
void sub_401d73()
{
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401d80
int DiamondDerived_D0Ev(void* this_ptr)
{
 sub_4011c0(this_ptr, 24);
 return 0;
}


// Function: sub_401da3 at 0x401da3
void sub_401da3()
{
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x401db0
int thunk_to_DiamondDerived_D0Ev(void* a0)
{
 sub_4011c0((void*)((char *)a0 + ((int*)(*(int**)a0))[16]), 24);
 return 0;
}


// Function: sub_401dd9 at 0x401dd9
void sub_401dd9()
{
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401de0
int non_virtual_thunk_to_DiamondDerived_D0Ev(unsigned int a0)
{
 sub_4011c0((void*)(a0 - 8), 24);
 return 0;
}


// Function: sub_401e07 at 0x401e07
void sub_401e07(unsigned int a0, unsigned int a1)
{
 (void)template_max_int(0, 0);
}


// Forward declaration
int template_max_int(int arg_0, int arg_1);

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
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401e30
// Function: sub_401e43 at 0x401e43
int sub_401e43()
{
 template_swap_int((int*)0, (int*)0);
 return 0;
}


// Forward declaration
void template_swap_int(int *ptr, int *p);

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
 Container_int_Constructor((void*)0);
}


// Function: _ZN9ContainerIiEC2Ev at 0x401e70
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401e80
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // edx

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
}


// Function: sub_401e9e at 0x401e9e
void sub_401e9e(unsigned int a0, unsigned int a1)
{
 Container_int_get((void*)0, 0);
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ea0
int Container_int_get(void* this_ptr, int arg_0)
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
 Container_int_getSize((void*)0);
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401ed0
unsigned int Container_int_getSize(void* this_ptr)
{
 return 0;
}


// Function: sub_401edc at 0x401edc
void sub_401edc(unsigned int a0)
{
 Container_double_Constructor((void*)0);
}


// Function: _ZN9ContainerIdEC1Ev at 0x401ee0
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401ef0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int index; // edx

 index = *((unsigned int *)((char *)ptr + 80));
 if (index > 9)
 {
 return;
 }
 *((unsigned int *)((char *)ptr + 80)) = index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
}


// Function: sub_401f0f at 0x401f0f
void sub_401f0f()
{
}


// Function: sub_401f13 at 0x401f13
void sub_401f13(unsigned int a0, unsigned int a1)
{
 Container_double_get((void*)0, 0);
}


// Function: _ZNK9ContainerIdE3getEi at 0x401f20
int Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 >= 0 && arg_0 < (int)*((unsigned int *)((char *)this_ptr + 80)))
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
 Container_double_getSize((void*)0);
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401f50
unsigned int Container_double_getSize(void* this_ptr)
{
 return 0;
}


// Function: __x86.get_pc_thunk_ax at 0x401f5c
void __x86_get_pc_thunk_ax()
{
 return;
}


// Function: __x86.get_pc_thunk_si at 0x401f60
void* __x86_get_pc_thunk_si(int a0, int a1, char* a2)
{
 return a2;
}


// Function: sub_401f64 at 0x401f64
void sub_401f64()
{
 __stack_chk_fail_local();
}

void __stack_chk_fail_local(void);


// Function: __x86.get_pc_thunk_ax at 0x401f5c
void __x86_get_pc_thunk_ax()
{
 return;
}


// Function: __x86.get_pc_thunk_si at 0x401f60
void* __x86_get_pc_thunk_si(int a0, int a1, char* a2)
{
 return a2;
}


// Function: __stack_chk_fail_local at 0x401f70
void __stack_chk_fail_local();

// Function: __stack_chk_fail_local at 0x401f70
void __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4011f0();
 __do_global_ctors_aux();
}


// Function: __do_global_ctors_aux at 0x401fb0
typedef void (*ctor_func_t)(void);

unsigned int __do_global_ctors_aux()
{
 struct_1 *v2; // edx
 struct_1 *ptr; // edx
 ctor_func_t v4; // eax
 unsigned int v5; // ebx
 struct_1 *v6; // ebx
 struct_1 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_1 *)((char *)v2 + 351);
 v4 = (ctor_func_t)*((int *)&ptr->field_0);
 if (*((int *)&ptr->field_0) == 0xffffffff)
 return 4294967295;
 v0 = 0;
 v6 = (struct_1 *)&ptr->field_0;
 do
 {
 p = v6;
 v4();
 v4 = (ctor_func_t)*((int *)&p->field_0);
 v6 = (struct_1 *)&p->field_0;
 } while (*((int *)&p->field_0) != 0xffffffff);
 return 4294967295;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef void (*ctor_func_t)(void);

unsigned int __do_global_ctors_aux()
{
 struct_1 *v2; // edx
 struct_1 *ptr; // edx
 ctor_func_t v4; // eax
 unsigned int v5; // ebx
 struct_1 *v6; // ebx
 struct_1 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_1 *)((char *)v2 + 351);
 v4 = (ctor_func_t)*((int *)&ptr->field_0);
 if (*((int *)&ptr->field_0) == 0xffffffff)
 return 4294967295;
 v0 = 0;
 v6 = (struct_1 *)&ptr->field_0;
 do
 {
 p = v6;
 v4();
 v4 = (ctor_func_t)*((int *)&p->field_0);
 v6 = (struct_1 *)&p->field_0;
 } while (*((int *)&p->field_0) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401fd2 at 0x401fd2
void sub_401fd2()
{
}



/* CRT stub function _fini removed by preprocessor */


