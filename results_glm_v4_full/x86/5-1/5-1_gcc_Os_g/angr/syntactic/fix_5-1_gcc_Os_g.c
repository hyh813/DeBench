// Angr Decompilation of 5-1_gcc_Os_g
// Platform: X86

#include <stdint.h>

/* CRT stub function _init removed by preprocessor */

void __stack_chk_fail_local(void);

namespace __x86 {
 unsigned int get_pc_thunk_ax();
 void get_pc_thunk_bx();
 void get_pc_thunk_cx();
 unsigned int get_pc_thunk_dx();
 int get_pc_thunk_di(int a0, int a1);
 int get_pc_thunk_si(int a0, int a1);
}

void frame_dummy();

// Stub for undefined _ccall function
void* _ccall(unsigned long a0, unsigned long a1, unsigned int a2, int a3);

typedef struct struct_0 {
 char padding_0[16000];
} struct_0;

extern struct_0 *g_405ff4;

// Forward declarations
int sub_401030(unsigned int arg0);
void sub_401040();
void sub_40104e();
void sub_401050();
void sub_40105e();
void sub_401060();
void sub_40106e();
void sub_401070();
void sub_40107e();
void sub_401080();
void sub_40108e();
void sub_401090();
void sub_40109e();
void sub_4010a0();
void sub_4010ae();
void sub_4010b0();
void sub_4010be();
void sub_4010c0();
void sub_4010ce();
int sub_4010d0();
void sub_4010de();
int sub_4010e0();
void sub_4010ee();
int sub_4010f0();
void sub_4010fe();
int sub_401100();
void sub_40110e();
void sub_401110();
void sub_40111e();
void sub_401120();
void sub_40112e();
void sub_401130();
void sub_40113e();
void sub_401140();
void sub_40114e();
void sub_401150();
void sub_40115e();
void sub_401160();
void sub_40116e();
void sub_401170();
void sub_40117e();
void sub_401180();
void sub_40118a();
void sub_401190(void* ptr, unsigned int val);
void sub_40119a();
void sub_4011a0();
void sub_4011aa();
void sub_4011b0(void* ptr);
void sub_4011ba();
void sub_4011c0(int size);
void sub_4011ca();
void sub_4011d0();
void sub_4011da();
int sub_4011e0();
void sub_4011ea();
void sub_4011f0(void* ptr, unsigned int size);
void sub_4011fa();
void sub_401200();
void sub_40120a();
void sub_401210();
void sub_40121a();
void sub_401220(int size);
void sub_40122a();
void sub_401230();
void sub_40123a();
void sub_401240();
void sub_40124a();
void sub_401250();
void sub_40125a();
void sub_401260();
void sub_40126a();
void sub_401270();
void sub_40127a();
void sub_401280();
void sub_40128a();
int sub_401290();
void sub_40129a();
void sub_4012a0(void* ptr);
void sub_4012aa();
void sub_4012b0();
void sub_4012ba();
void sub_4012c0();
void sub_4012ca();
void test_cpp_exception();
void test_cpp_oo_features();
int _ZN9ContainerIiEC2Ev(void* ptr);
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0);
void _ZN9ContainerIdEC1Ev(void* ptr);
int _ZN14DiamondDerivedD4Ev(void* p);
int _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(void* self);
void _ZN14DiamondDerived4funcEv(void* self);
unsigned int __do_global_ctors_aux();

int _init()
{
 if (g_405ff4)
 (void)g_405ff4;
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int arg0)
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
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
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 sub_401030(8);
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
void sub_401110()
{
 sub_401030(104);
 return;
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
 return;
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
 return;
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
 return;
}


// Function: sub_40114e at 0x40114e
void sub_40114e()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
void sub_401150()
{
 sub_401030(136);
 return;
}


// Function: sub_40115e at 0x40115e
void sub_40115e()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
void sub_401160()
{
 sub_401030(144);
 return;
}


// Function: sub_40116e at 0x40116e
void sub_40116e()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
void sub_401170()
{
 sub_401030(152);
 return;
}


// Function: sub_40117e at 0x40117e
void sub_40117e()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
void* sub_401180(void* func_ptr)
{
 void *v1; // ebx

 goto *v1;
}


// Function: sub_40118a at 0x40118a
void sub_40118a()
{
 sub_401190(NULL, 0);
 return;
}


// Function: sub_401190 at 0x401190
void sub_401190(void* ptr, unsigned int val)
{
 return;
}


// Function: sub_40119a at 0x40119a
void sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
void* sub_4011a0(int size)
{
 void *v1; // ebx

 return v1;
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 sub_4011b0(NULL);
 return;
}


// Function: sub_4011b0 at 0x4011b0
void sub_4011b0(void* ptr)
{
 return;
}


// Function: sub_4011ba at 0x4011ba
void sub_4011ba()
{
 sub_4011c0(0);
 return;
}


// Function: sub_4011c0 at 0x4011c0
void sub_4011c0(int size)
{
 return;
}


// Function: sub_4011ca at 0x4011ca
void sub_4011ca()
{
 sub_4011d0();
 return;
}


// Function: sub_4011d0 at 0x4011d0
void sub_4011d0()
{
 return;
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
 return 0;
}


// Function: sub_4011ea at 0x4011ea
void sub_4011ea()
{
 sub_4011f0();
 return;
}


// Function: sub_4011f0 at 0x4011f0
void sub_4011f0(void* ptr, unsigned int size)
{
 return;
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
 return 0;
}


// Function: sub_40120a at 0x40120a
void sub_40120a()
{
 sub_401210();
 return;
}


// Function: sub_401210 at 0x401210
int sub_401210()
{
 return 0;
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 sub_401220();
 return;
}


// Function: sub_401220 at 0x401220
void* sub_401220(int size)
{
 void *v1; // ebx;

 return v1;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
 sub_401230();
 return;
}


// Function: sub_401230 at 0x401230
int sub_401230()
{
 return 0;
}


// Function: sub_40123a at 0x40123a
void sub_40123a()
{
 sub_401240();
 return;
}


// Function: sub_401240 at 0x401240
int sub_401240()
{
 return 0;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 sub_401250();
 return;
}


// Function: sub_401250 at 0x401250
int sub_401250()
{
 return 0;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 sub_401260();
 return;
}


// Function: sub_401260 at 0x401260
int sub_401260()
{
 return 0;
}


// Function: sub_40126a at 0x40126a
void sub_40126a()
{
 sub_401270();
 return;
}


// Function: sub_401270 at 0x401270
int sub_401270()
{
 return 0;
}


// Function: sub_40127a at 0x40127a
void sub_40127a()
{
 sub_401280();
 return;
}


// Function: sub_401280 at 0x401280
int sub_401280()
{
 return 0;
}


// Function: sub_40128a at 0x40128a
void sub_40128a()
{
 sub_401290();
 return;
}


// Function: sub_401290 at 0x401290
int sub_401290()
{
 return 0;
}


// Function: sub_40129a at 0x40129a
void sub_40129a()
{
 sub_4012a0();
 return;
}


// Function: sub_4012a0 at 0x4012a0
void sub_4012a0(void* ptr)
{
 return;
}


// Function: sub_4012aa at 0x4012aa
void sub_4012aa()
{
 sub_4012b0();
 return;
}


// Function: sub_4012b0 at 0x4012b0
int sub_4012b0()
{
 return 0;
}


// Function: sub_4012ba at 0x4012ba
void sub_4012ba()
{
 sub_4012c0();
 return;
}


// Function: sub_4012c0 at 0x4012c0
int sub_4012c0()
{
 return 0;
}


// Function: sub_4012ca at 0x4012ca
void sub_4012ca()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4012d0


void test_cpp_exception()
{
 struct_0 *v6; // esi
 struct_0 *v7; // esi
 unsigned int v8; // ebx
 unsigned int *ptr; // eax
 unsigned int v10; // eax
 unsigned int result; // edx
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 char v2; // [bp-0xc]
 char v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v8 = __x86::get_pc_thunk_si(*((int *)&v2), *((int *)&v3));
 v7 = (struct_0 *)&v4;
 v1 = v8;
 ptr = sub_4011c0(4);
 *(ptr) = 42;
 sub_4012b0(ptr, *((int *)&v7->padding_0[92]), 0);
 result = 0;
 if (result == 1)
 {
 sub_4011b0((void*)v10);
 sub_401270();
 v10 = (void*)sub_4012a0((void*)v10);
 }
 }
 if (result == 1)
 {
 sub_4011b0((void*)v10);
 sub_4012a0((void*)v10);
 sub_4012b0(sub_4011c0(1), (struct struct_0 *)&v7->padding_0[300], 0);
 result = 0;
 if (result == 2)
 goto LABEL_40138f;
 if (result != 3)
 goto LABEL_401384;
 sub_4011b0((void*)v10);
 }
 else
 {
LABEL_401384:
 sub_4012c0((void*)v10);
LABEL_40138f:
 sub_4011b0((void*)v10);
 }
 (void)sub_4012a0((void*)0);
 return;
}


// Function: main at 0x4013c2
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4013d5
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 sub_401290(&_ZStL8__ioinit);
 return sub_4011e0(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_401418 at 0x401418
void sub_401418()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40144c at 0x40144c
void sub_40144c()
{
 return;
}


// Function: __x86::get_pc_thunk_bx at 0x401450
void __x86::get_pc_thunk_bx()
{
 return;
}


// Function: sub_401454 at 0x401454
void sub_401454()
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

 ptr = (unsigned int *)__x86::get_pc_thunk_dx();
 return (unsigned int *)((char *)ptr + 4844 * 4 + 3);
}


// Function: sub_401493 at 0x401493
void sub_401493()
{
}


// Function: sub_401499 at 0x401499
void sub_401499()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]
 unsigned int diff1, diff2, count;

 v3 = (struct_0 *)__x86::get_pc_thunk_dx();
 v0 = v4;
 diff1 = (unsigned int)&v3->padding_0[144];
 diff2 = (unsigned int)&v3->padding_0[144];
 count = ((diff1 - diff2) >> 31) + ((diff1 - diff2) >> 2) >> 1;
 if (!count)
 {
 return count;
 }
 else if (*((int *)&v3->padding_0[112]))
 {
 return (*((int *)&v3->padding_0[112]))(&v3->padding_0[144], count);
 }
 else
 {
 return count;
 }
}


// Function: sub_4014e7 at 0x4014e7
void sub_4014e7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

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

 v5 = (unsigned int *)__x86::get_pc_thunk_di(*((int *)&v2), (int)&v3);
 ptr = (struct_0 *)((char *)__x86::get_pc_thunk_di(*((int *)&v2), (int)&v3) + 19083);
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[144])
 return v5;
 if (*((int *)&ptr->padding_0[96]))
 sub_401180(*((int *)&ptr->padding_0[124]));
 v10 = &ptr->padding_0[832];
 v11 = *((int *)&ptr->padding_0[148]);
 i = ((&ptr->padding_0[828] - (char *)v10) >> 2) - 1;
 if (*((int *)&ptr->padding_0[148]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[148]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[148]);
 } while (*((int *)&ptr->padding_0[148]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[144] = 1;
 return v14;
}


// Function: sub_40157a at 0x40157a
void sub_40157a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86::get_pc_thunk_dx at 0x401589
void __x86::get_pc_thunk_dx()
{
 return;
}


// Function: __x86::get_pc_thunk_di at 0x40158d
int __x86::get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: _Z20test_cpp_member_funcv at 0x401591
void test_cpp_member_func()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 char v0; // [bp-0x30]
 char result; // [bp-0x11]
 unsigned int v2; // [bp-0x10]

 v2 = (unsigned int)(uintptr_t)_ccall(v4, v5, (unsigned int)v6, 20);
 sub_401230(&v0, "Test", 31);
 result = 0;
 sub_4011d0(&v0);
 if (v2 == (unsigned int)(uintptr_t)_ccall(v4, v5, (unsigned int)v6, 20))
 return;
 __stack_chk_fail_local();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4015f1
void test_cpp_constructor()
{
 __x86::get_pc_thunk_ax();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40160d
typedef struct Base {
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 void* v0; // [bp+0x4]

 v0 = arg_0;
 goto *((int *)*((int *)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401621
typedef struct Base {
} Base;

void test_cpp_virtual_func()
{
 Base v6; // eax
 unsigned int v7; // ebx
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 Base v0; // [bp-0x1c]
 Base v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0x8]

 v6 = __x86::get_pc_thunk_ax() + 18782;
 v4 = v7;
 v3 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 v1 = v6 - 792;
 v0 = v6 - 816;
 v2 = 3;
 call_virtual_func(&v0, 5);
 call_virtual_func(&v1, 5);
 if (v3 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 return;
 __stack_chk_fail_local();
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x40168f
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401699
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4016a3
void test_cpp_template_func()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // eax
 unsigned int v11; // fpround
 double v0; // [bp-0x2c], Other Possible Types: unsigned long, unsigned int
 unsigned short v1; // [bp-0x20]
 unsigned short v2; // [bp-0x1e]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 _Z12template_maxIiET_S0_S0_(3, 7);
 _Z12template_maxIdET_S0_S0_((double)(uintptr_t)0x40040000, (double)(uintptr_t)0x3ff80000);
 *((unsigned long long *)&v0) = 0x7ff8000000000000ULL;
 v3 = 10;
 v4 = 20;
 _Z13template_swapIiEvRT_S1_((int*)&v3, (int*)&v4);
 v2 = (unsigned short)_ccall(v11);
 v1 = v2 & 255 | ((char)((v10 & 0xffff0000 | v2) >> 8) | 12) * 0x100;
 (void)nan;
 __stack_chk_fail_local();
}


// Function: _Z23test_cpp_template_classv at 0x401735
void test_cpp_template_class()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v0; // [bp-0x3c]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 result = 1;
 v0 = 10;
 _ZN9ContainerIiE4pushEi(&v0, 20);
 Container<int>::push(&v0, 30);
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 __stack_chk_fail_local();
}


// Function: _Z15test_cpp_lambdav at 0x401797
void test_cpp_lambda()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4017a1
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

extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern struct_4 *addr;
extern char g_405dd0;
extern char g_405de4;

void test_cpp_rtti()
{
 unsigned int cur; // esi
 char *v6; // edi
 char *v7; // eax
 void* v0; // [bp-0x2c]
 void* v1; // [bp-0x28]
 struct_2** p; // [bp-0x24]
 void** ptr; // [bp-0x20]

 cur = 10;
 ptr = (void**)sub_4011a0(4);
 *ptr = (void*)&g_405dd0;
 p = (struct_2**)sub_4011a0(4);
 *p = (struct_2*)&g_405de4;
 v1 = *ptr;
 v6 = *(char **)((*(unsigned int **)ptr)[1] + 1);
 if (v6 != (char*)"12RTTIDerivedA")
 {
 cur = 0;
 if (*(v6) != 42)
 cur = -(sub_401200(v6, (char*)"12RTTIDerivedA", 0, 0) < 1) & 10;
 }
 v7 = addr->field_4;
 if (v7 == (char*)"12RTTIDerivedB" || *(char*)v7 != 42 && !sub_401200(v7, (char*)"12RTTIDerivedB", p, p))
 cur += 20;
 v0 = &_ZTI8RTTIBase;
 if (sub_401250((void*)ptr, (void*)&_ZTI8RTTIBase, (void*)&_ZTI12RTTIDerivedA, 0))
 cur += 100;
 if (sub_401250((void*)p, (void*)v0, (void*)&_ZTI12RTTIDerivedB, 0))
 cur += 200;
 if (*(char*)v6 == 42)
 v6 += 1;
 sub_4011d0();
 ((void (*)(void**))((*(void***)ptr)[1]))(ptr);
 ((void (*)(void**))((*(void***)p)[1]))(p);
 sub_4011d0();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4018c9
void test_cpp_smart_ptr()
{
 unsigned long v12; // ldt
 unsigned long v13; // gdt
 unsigned short v14; // gs
 unsigned int *p; // eax
 unsigned int *ptr; // eax
 unsigned int v0; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned int *v2; // [bp-0x28]
 unsigned int v3[5]; // [bp-0x24]
 unsigned int v4; // [bp-0x20]
 unsigned int v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]
 unsigned int v7; // [bp-0x8]
 v0 = __x86::get_pc_thunk_ax() + 18102;
 v4 = (unsigned int)(uintptr_t)_ccall(v12, v13, (unsigned int)v14, 20);
 p = (unsigned int*)sub_4011a0(4);
 result = 0;
 *p = 200;
 v2 = p;
 ptr = (unsigned int*)sub_401220(20);
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 ((unsigned int *)v3)[0] = (unsigned int)ptr;
 _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(v2);
 if (v4 == (unsigned int)(uintptr_t)_ccall(v12, v13, (unsigned int)v14, 20))
 return;
 __stack_chk_fail_local();
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x40199d
void test_cpp_diamond_inheritance()
{
 unsigned int v13; // eax
 unsigned long v14; // ldt
 unsigned long v15; // gdt
 unsigned short v16; // gs
 unsigned int v17; // eax
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 unsigned int v5; // [bp-0x20]
 unsigned int v6; // [bp-0x10]
 unsigned int v7; // [bp-0xc]
 unsigned int v8; // [bp-0x8]
 void *v3_ptr; // [bp-0x28]
 v13 = __x86::get_pc_thunk_ax() - -17378;
 v5 = (unsigned int)(uintptr_t)_ccall(v14, v15, (unsigned int)v16, 20);
 v1 = v13;
 v3_ptr = (void*)(v13 + 52);
 v2 = v13 + 24;
 v4 = 50;
 _ZN14DiamondDerived4funcEv(v3_ptr);
 v4 = 100;
 v0 = 50 + (unsigned int)(uintptr_t)v17;
 if (v5 == (unsigned int)(uintptr_t)_ccall(v14, v15, (unsigned int)v16, 20))
 return;
 __stack_chk_fail_local();
}


// Function: _Z20test_cpp_oo_featuresv at 0x401a22
extern unsigned int g_40301a;
extern unsigned int g_40303e;
extern unsigned int g_40305c;
extern unsigned int g_403078;
extern unsigned int g_403094;
extern unsigned int g_4030b0;
extern unsigned int g_4030cd;
extern unsigned int g_4030e9;
extern unsigned int g_403105;
extern unsigned int g_403121;
extern unsigned int g_40313d;
extern unsigned int g_40315a;
extern unsigned int g_403177;

int test_cpp_oo_features()
{
 unsigned int v4; // edx
 unsigned int v9; // ecx

 sub_401280(&g_40301a);
 test_cpp_member_func();
 sub_401190(&g_40305c, (unsigned int)test_cpp_constructor());
 test_cpp_virtual_func();
 test_cpp_multiple_inheritance();
 sub_401190(&g_4030b0, (unsigned int)test_cpp_diamond_inheritance());
 test_cpp_operator_overload();
 test_cpp_template_func();
 test_cpp_template_class();
 test_cpp_lambda();
 test_cpp_exception();
 test_cpp_smart_ptr();
 return sub_401190(&g_403177, (unsigned int)test_cpp_rtti());
}


// Function: sub_401b65 at 0x401b65
void sub_401b65(unsigned int a0, unsigned int a1)
{
 _ZN4Base12virtual_funcEi(0, a1);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401b66
void _ZN4Base12virtual_funcEi(void* self, int arg_0)
{
}


// Function: sub_401b73 at 0x401b73
void sub_401b73()
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401b74
void _ZNK4Base7getNameEv(void* self)
{
 __x86::get_pc_thunk_ax();
}


// Function: sub_401b89 at 0x401b89
void sub_401b89()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401b8a
int _ZN4BaseD1Ev(void* self)
{
 return 0;
}


// Function: sub_401b8f at 0x401b8f
void sub_401b8f(unsigned int a0, unsigned int a1)
{
 _ZN7Derived12virtual_funcEi(0, a1);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401b90
void _ZN7Derived12virtual_funcEi(void* self, int arg_0)
{
}


// Function: sub_401ba3 at 0x401ba3
void sub_401ba3()
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401ba4
void _ZNK7Derived7getNameEv(void* self)
{
 __x86::get_pc_thunk_ax();
}


// Function: sub_401bb9 at 0x401bb9
void sub_401bb9()
{
 _ZN12MultiDerived5funcAEv();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401bba
void _ZN12MultiDerived5funcAEv(void* self)
{
}


// Function: _ZN12MultiDerived5funcBEv at 0x401bc4
void _ZN12MultiDerived5funcBEv(void* self)
{
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401bce
unsigned int _ZThn8_N12MultiDerived5funcBEv(void* self)
{
 return 40;
}


// Function: _ZN11VirtualBase4funcEv at 0x401bd8
void _ZN11VirtualBase4funcEv(void* self)
{
}


// Function: _ZN11VirtualBaseD2Ev at 0x401be2
int _ZN11VirtualBaseD2Ev(void* self)
{
 return 0;
}


// Function: sub_401be7 at 0x401be7
void sub_401be7(unsigned int a0)
{
 _ZN7MiddleA4funcEv();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401be8
void _ZN7MiddleA4funcEv(void* self)
{
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401c02
int _ZTv0_n12_N7MiddleA4funcEv(void** a0)
{
 char v0; // [bp+0x0]

 a0 = (void**)((char*)a0 + ((int*)(*(a0)))[12]);
 _ZN7MiddleA4funcEv((void*)((int *)&v0));
 return 0;
}


// Function: sub_401c15 at 0x401c15
void sub_401c15(unsigned int a0)
{
 _ZN7MiddleB4funcEv();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401c16
void _ZN7MiddleB4funcEv(void* self)
{
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401c30
int _ZTv0_n12_N7MiddleB4funcEv(void** a0)
{
 char v0; // [bp+0x0]

 a0 = (void**)((char*)a0 + ((int*)(*(a0)))[12]);
 _ZN7MiddleB4funcEv((void*)((int *)&v0));
 return 0;
}


// Function: sub_401c43 at 0x401c43
void sub_401c43(unsigned int a0)
{
 _ZN14DiamondDerived4funcEv();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401c44
void _ZN14DiamondDerived4funcEv(void* self)
{
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401c5e
int _ZTv0_n12_N14DiamondDerived4funcEv(void** a0)
{
 char v0; // [bp+0x0]

 a0 = (void**)((char*)a0 + ((int*)(*(a0)))[12]);
 _ZN14DiamondDerived4funcEv((void*)((int *)&v0));
 return 0;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401c71
int _ZThn8_N14DiamondDerived4funcEv(void* self)
{
 return 0;
}


// Function: _ZN7MiddleAD1Ev at 0x401c7c
int _ZN7MiddleAD1Ev(void* ptr)
{
 unsigned int v0; // edx
 unsigned int v1; // edx

 (void)__x86::get_pc_thunk_dx();
 v1 = v0 - -16399;
 *((void **)ptr) = (void*)v1;
 *((void **)&((char*)ptr)[8]) = (void*)(v1 + 28);
 return 0;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401ca1
void** _ZTv0_n16_N7MiddleAD1Ev(void** a0)
{
 unsigned int v0; // edx
 unsigned int v1; // edx
 void* ptr[3]; // eax

 (void)__x86::get_pc_thunk_dx();
 v1 = v0 - -16362;
 ptr = (void**)((char*)a0 + ((int*)(*(a0)))[16]);
 ptr[0] = (void*)v1;
 ptr[2] = (void*)(v1 + 28);
 return (void**)ptr;
}


// Function: sub_401ccb at 0x401ccb
void sub_401ccb()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x401ccc
int _ZN7MiddleBD1Ev(void* ptr)
{
 unsigned int v0; // edx
 unsigned int v1; // edx

 (void)__x86::get_pc_thunk_dx();
 v1 = v0 - -16379;
 *((void **)ptr) = (void*)v1;
 *((void **)&((char*)ptr)[8]) = (void*)(v1 + 28);
 return 0;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x401cf1
void** _ZTv0_n16_N7MiddleBD1Ev(void** a0)
{
 unsigned int v0; // edx
 unsigned int v1; // edx
 void* ptr[3]; // eax

 (void)__x86::get_pc_thunk_dx();
 v1 = v0 - -16342;
 ptr = (void**)((char*)a0 + ((int*)(*(a0)))[16]);
 ptr[0] = (void*)v1;
 ptr[2] = (void*)(v1 + 28);
 return (void**)ptr;
}


// Function: sub_401d1b at 0x401d1b
void sub_401d1b()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401d1c
void _ZNK12RTTIDerivedA7getTypeEv(void* self)
{
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401d26
void _ZNK12RTTIDerivedB7getTypeEv(void* self)
{
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401d30
void _ZN12RTTIDerivedBD1Ev(void* self)
{
}


// Function: sub_401d35 at 0x401d35
void sub_401d35()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401d36
void _ZN12RTTIDerivedAD1Ev(void* self)
{
}


// Function: sub_401d3b at 0x401d3b
void sub_401d3b()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401d3c
void _ZN12MultiDerivedD1Ev(void* self)
{
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401d41
void _ZThn8_N12MultiDerivedD1Ev(void* self)
{
 self = (char*)self - 8;
}


// Function: _ZN7DerivedD2Ev at 0x401d46
void _ZN7DerivedD2Ev(void* self)
{
}


// Function: sub_401d4b at 0x401d4b
int sub_401d4b()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401d4c
void _ZN4BaseD0Ev(void* self)
{
 sub_4011f0(self, 4);
}


// Function: _ZN7DerivedD0Ev at 0x401d74
void _ZN7DerivedD0Ev(void* self)
{
 sub_4011f0(self, 8);
}


// Function: _ZN12MultiDerivedD0Ev at 0x401d9c
void _ZN12MultiDerivedD0Ev(void* self)
{
 sub_4011f0(self, 16);
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401dc4
void _ZThn8_N12MultiDerivedD0Ev(void* self)
{
 char* v0; // [bp+0x4]

 v0 = (char*)self - 8;
}


// Function: sub_401dcf at 0x401dcf
int sub_401dcf()
{
 return 0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x401dd0
void _ZN11VirtualBaseD0Ev(void* self)
{
 sub_4011f0(self, 8);
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401df8
void _ZN12RTTIDerivedBD0Ev(void* self)
{
 sub_4011f0(self, 4);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401e20
void _ZN12RTTIDerivedAD0Ev(void* self)
{
 sub_4011f0(self, 4);
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x401e48
extern char g_405c94;
extern char g_405cb0;

void _ZN7MiddleAD0Ev(void* ptr)
{
 *((char **)ptr) = &g_405c94;
 *((char **)&((char*)ptr)[8]) = &g_405cb0;
 sub_4011f0(ptr, 16);
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401e7f
void _ZTv0_n16_N7MiddleAD0Ev(void** self)
{
 void** v0; // [bp+0x4]

 v0 = (void**)((char*)self + ((int*)(*(self)))[4]);
}


// Function: _ZN7MiddleBD0Ev at 0x401e92
extern char g_405cd0;
extern char g_405cec;

void _ZN7MiddleBD0Ev(void* ptr)
{
 *((char **)ptr) = &g_405cd0;
 *((char **)&((char*)ptr)[8]) = &g_405cec;
 sub_4011f0(ptr, 16);
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x401ec9
void _ZTv0_n16_N7MiddleBD0Ev(void** self)
{
 void** v0; // [bp+0x4]

 v0 = (void**)((char*)self + ((int*)(*(self)))[4]);
}


// Function: _ZN7MiddleAD4Ev at 0x401edc


int _ZN7MiddleAD4Ev(void* p)
{
 struct_0 *v4; // ecx
 struct_0 *v5; // ecx
 unsigned int v6; // esi
 unsigned int v7; // ebx
 struct struct_1 **ptr; // ebx
 struct_0 *addr; // eax
 struct_0 *v10; // ecx
 unsigned int v11; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int result; // [bp+0x8]
 char v3; // [bp+0xc]

 (void)__x86::get_pc_thunk_cx();
 v5 = (struct_0 *)((char *)v4 + 764);
 v1 = v6;
 v0 = v7;
 ptr = (struct struct_1 **)((int *)&v3);
 addr = (struct_0 *)((char *)v5 + 756);
 if (!result)
 addr = (struct_0 *)ptr[0];
 *((struct_0 **)p) = addr;
 if (!result)
 {
 v10 = (struct_0 *)ptr[1];
 v11 = *((int *)&addr->padding_0[12]);
 }
 else
 {
 v10 = (struct_0 *)((char *)v5 + 728);
 v11 = 8;
 }
 *((struct_0 **)((char *)p + v11)) = v10;
 return 0;
}


// Function: sub_401f25 at 0x401f25
void sub_401f25(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x401f26
void _ZN7MiddleAD2Ev(void* self)
{
}


// Function: _ZN7MiddleBD4Ev at 0x401f42
typedef struct struct_0 {
 char padding_0[15737];
 unsigned int field_3d79;
} struct_0;

int _ZN7MiddleBD4Ev(void* p)
{
 struct_0 *v4; // ecx
 struct_0 *v5; // ecx
 unsigned int v6; // esi
 unsigned int v7; // ebx
 struct struct_1 **ptr; // ebx
 struct_0 *addr; // eax
 struct_0 *v10; // ecx
 unsigned int v11; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp+0x8]
 char v3; // [bp+0xc]

 (void)__x86::get_pc_thunk_cx();
 v5 = (struct_0 *)((char *)v4 + 702);
 v1 = v6;
 v0 = v7;
 ptr = (struct struct_1 **)((int *)&v3);
 addr = (struct_0 *)((char *)v5 + 696);
 if (!v2)
 addr = (struct_0 *)ptr[0];
 *((struct_0 **)p) = addr;
 if (!v2)
 {
 v10 = (struct_0 *)ptr[1];
 v11 = *((int *)&addr->padding_0[12]);
 }
 else
 {
 v10 = (struct_0 *)((char *)v5 + 668);
 v11 = 8;
 }
 *((struct_0 **)((char *)p + v11)) = v10;
 return 0;
}


// Function: sub_401f8b at 0x401f8b
void sub_401f8b(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x401f8c
void _ZN7MiddleBD2Ev(void* self)
{
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401fa8
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}

// Function: _Z12template_maxIdET_S0_S0_ at 0x401fbc
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}
// Function: _Z13template_swapIiEvRT_S1_ at 0x401fd5
void _Z13template_swapIiEvRT_S1_(int *ptr, int *p)
{
 unsigned int v0; // ecx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401fee
void _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
}


// Function: sub_402001 at 0x402001
void sub_402001(unsigned int a0)
{
 _ZN9ContainerIiE4pushEi(0, a0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402002
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned int index; // edx

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402022
void _ZNK9ContainerIiE3getEi(void* self, int arg_0)
{
}


// Function: sub_40203f at 0x40203f
void sub_40203f(unsigned int a0)
{
 _ZNK9ContainerIiE7getSizeEv();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x402040
unsigned int _ZNK9ContainerIiE7getSizeEv(void* self)
{
 return 0;
}


// Function: sub_40204f at 0x40204f
void sub_40204f(unsigned int a0)
{
 _ZN9ContainerIdEC1Ev();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x402050
void _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
}


// Function: sub_402063 at 0x402063
void sub_402063(unsigned int a0)
{
 _ZN9ContainerIdE4pushEd(0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402064
void _ZN9ContainerIdE4pushEd(void* ptr)
{
 unsigned int index; // edx

 index = *((unsigned int *)((char *)ptr + 80));
 if (index > 9)
 {
 return;
 }
 *((unsigned int *)((char *)ptr + 80)) = index + 1;
 *((unsigned long long *)((char *)ptr + 8 * index)) = 0;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402088
double _ZNK9ContainerIdE3getEi(void* self, int arg_0)
{
 return 0.0;
}


// Function: sub_4020a7 at 0x4020a7
void sub_4020a7(unsigned int a0)
{
 _ZNK9ContainerIdE7getSizeEv();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4020a8
unsigned int _ZNK9ContainerIdE7getSizeEv(void* self)
{
 return 0;
}


// Function: sub_4020b7 at 0x4020b7
int sub_4020b7()
{
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x4020b8
int _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev(void* self)
{
 unsigned int v1; // ecx
 unsigned int v2; // edx
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!*((int *)self))
 return 0;
 sub_4011f0(*((int *)self), 4);
 return 0;
}


// Function: sub_4020e7 at 0x4020e7
int sub_4020e7()
{
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x4020e8
int _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(void* self)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!*((int *)self))
 return;
 sub_401260(*((int *)self));
 return;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x402116


int _ZN14DiamondDerivedD4Ev(void* p)
{
 void *v9; // eax
 unsigned int v10; // edi
 void *addr; // dx
 void *ptr; // esi
 void *v15; // ecx
 unsigned int v16; // dx
 void *v17; // dx
 void *v19; // dx
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 void *v7; // [bp+0x8], Other Possible Types: unsigned int
 char v8; // [bp+0xc]

 v9 = (void *)((uintptr_t)__x86::get_pc_thunk_ax() + 15977);
 v6 = v10;
 addr = (void *)((char *)v9 + 484 + 28);
 ptr = (void *)(*((void **)&v8));
 if (!v7)
 addr = (void *)*(void**)ptr;
 *((void **)p) = addr;
 if (!v7)
 {
 v15 = *(void**)((char*)ptr + 4);
 }
 else
 {
 v15 = (void *)((char *)v9 + 432 + 28);
 v16 = 16;
 }
 *((void **)((char *)p + v16)) = v15;
 v17 = (void *)((char *)v9 + 460 + 28);
 if (!v7)
 v17 = *(void**)((char*)ptr + 8);
 *((void **)((char *)p + 8)) = v17;
 v19 = (void *)((char *)v9 + 520 + 28);
 if (!v7)
 v19 = *(void**)((char*)ptr + 4);
 return 0;
 v16 = *((int *)((char *)addr + 8));
 }
 else
 {
 v15 = (void *)((char *)v9 + 432 + 28);
 v16 = 16;
 }
 *((void **)((char *)p + v16)) = v15;
 v17 = (void *)((char *)v9 + 460 + 28);
 if (!v7)
 v17 = *(void**)((char*)ptr + 8);
 *((void **)((char *)p + 8)) = v17;
 v19 = (void *)((char *)v9 + 520 + 28);
 if (!v7)
 v19 = (void *)((char *)ptr + 4);
 v7 = v19;
 return 0;
}


// Function: sub_4021af at 0x4021af
void sub_4021af(unsigned int a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x4021b0
int _ZN14DiamondDerivedD1Ev(void* self)
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x4021cb
int _ZThn8_N14DiamondDerivedD1Ev(void* self)
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x4021d6
int _ZTv0_n16_N14DiamondDerivedD1Ev(void** a0)
{
 void* v0; // eax

 a0 = (void**)((char*)a0 + ((int*)(*(a0)))[4]);
 return 0;
}


// Function: sub_4021e9 at 0x4021e9
int sub_4021e9()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x4021ea
void _ZN14DiamondDerivedD0Ev(void* self)
{
 sub_4011f0(self, 24);
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x40221e
void _ZThn8_N14DiamondDerivedD0Ev(void* self)
{
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x402229
void _ZTv0_n16_N14DiamondDerivedD0Ev(void** self)
{
 void** v0; // [bp+0x4]

 v0 = (void**)((char*)self + ((int*)(*(self)))[4]);
}


// Function: _ZN14DiamondDerivedD2Ev at 0x40223c
void _ZN14DiamondDerivedD2Ev(void* self)
{
}


// Function: __x86::get_pc_thunk_ax at 0x402258
unsigned int __x86::get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86::get_pc_thunk_cx at 0x40225c
void __x86::get_pc_thunk_cx()
{
 return;
}


// Function: __x86::get_pc_thunk_si at 0x402260
int __x86::get_pc_thunk_si(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_402264 at 0x402264
int sub_402264()
{
 return __stack_chk_fail_local();
}


// Function: __stack_chk_fail_local at 0x402270
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401240();
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

 __x86::get_pc_thunk_dx();
 ptr = (struct_0 *)((char *)__x86::get_pc_thunk_dx() + 835);
 v4 = *((unsigned int **)&ptr->padding_0[840]);
 if (v4 == (unsigned int *)0xffffffff)
 return 0xffffffff;
 v0 = v5;
 v6 = &ptr->padding_0[840];
 do
 {
 p = v6;
 ((void (*)())v4)();
 v4 = *((unsigned int **)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((unsigned int **)&p->padding_0[4]) != (unsigned int *)0xffffffff);
 return 0xffffffff;
}


// Function: sub_4022d2 at 0x4022d2
void sub_4022d2()
{
}



/* CRT stub function _fini removed by preprocessor */


