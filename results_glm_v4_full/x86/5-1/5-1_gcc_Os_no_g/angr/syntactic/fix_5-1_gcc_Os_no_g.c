// Angr Decompilation of 5-1_gcc_Os_no_g
// Platform: X86
#include <stddef.h>

void __stack_chk_fail_local();
unsigned int __x86_get_pc_thunk_ax();
void __x86_get_pc_thunk_dx();
void frame_dummy();
unsigned int __do_global_ctors_aux();

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char padding_0[19718];
 unsigned int field_4d06;
} struct_0;

extern struct_0 *g_405ff4;

int _init()
{
 if (g_405ff4)
 ((void (*)())g_405ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int arg_0)
{
 unsigned int *ptr; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 goto *(void*)ptr[2];
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return 0;
}


// Function: sub_40104e at 0x40104e
int sub_401050();

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
int sub_401060();

void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return 0;
}


// Function: sub_40106e at 0x40106e
int sub_401070();

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


int sub_401080();
int sub_4010a0();
int sub_4010b0();
int sub_4010c0();
int sub_4010d0();
int sub_4010e0();
int sub_4010f0();
int sub_401100();
int sub_401110();
int sub_401120();
int sub_401130();
int sub_401140();
int sub_401150();
int sub_401160();
int sub_401170();
void sub_401180(void* a0);
void* sub_4011a0();
int sub_4011b0(unsigned int a0);
unsigned int* sub_4011c0(unsigned int size);
void sub_4011d0(unsigned int arg_0, void* arg_1);
void sub_4011e0(void* arg_0, void* arg_1, void* arg_2);
int sub_401200(char* arg_0, char* arg_1, void* arg_2, void* arg_3);
int sub_401220();
int sub_401250(void* ptr, void* v0, void* v1, void* v2);
int sub_401270();

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


int sub_401090();

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
 sub_401030(136);
 return 0;
}


// Function: sub_40115e at 0x40115e
void sub_40115e()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 sub_401030(144);
 return 0;
}


// Function: sub_40116e at 0x40116e
void sub_40116e()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170()
{
 sub_401030(152);
 return 0;
}


// Function: sub_40117e at 0x40117e
void sub_40117e()
{
 sub_401180(0);
 return;
}


// Function: sub_401180 at 0x401180

void sub_401180(void* a0)
{
 void *v1; // ebx
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 return 0;
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return 0;
}


// Function: sub_4011a0 at 0x4011a0

void* sub_4011a0()
{
 return 0;
}


// Function: sub_4011aa at 0x4011aa
int sub_4011aa()
{
 sub_4011b0(0);
 return 0;
}


// Function: sub_4011b0 at 0x4011b0

int sub_4011b0(unsigned int a0)
{
 return 0;
}


// Function: sub_4011ba at 0x4011ba
int sub_4011ba()
{
 sub_4011c0(0);
 return 0;
}


// Function: sub_4011c0 at 0x4011c0

unsigned int* sub_4011c0(unsigned int size)
{
 return (unsigned int*)0;
}


// Function: sub_4011ca at 0x4011ca
int sub_4011ca()
{
 sub_4011d0(0, NULL);
 return 0;
}


// Function: sub_4011d0 at 0x4011d0

void sub_4011d0(unsigned int arg_0, void* arg_1)
{
 return;
}


// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0(NULL, NULL, NULL);
 return 0;
}


// Function: sub_4011e0 at 0x4011e0

void sub_4011e0(void* arg_0, void* arg_1, void* arg_2)
{
 return;
}


// Function: sub_4011ea at 0x4011ea
int sub_4011ea()
{
 sub_4011f0();
 return 0;
}


// Function: sub_4011f0 at 0x4011f0

void sub_4011f0(void* ptr, unsigned int size)
{
 return;
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 sub_401200();
 return 0;
}


// Function: sub_401200 at 0x401200

int sub_401200(char* arg_0, char* arg_1, void* arg_2, void* arg_3)
{
 return 0;
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
 return 0;
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 sub_401220();
 return;
}


// Function: sub_401220 at 0x401220

int sub_401220()
{
 return 0;
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
 return 0;
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
 return 0;
}


// Function: sub_40124a at 0x40124a
int sub_40124a()
{
 sub_401250();
 return 0;
}


// Function: sub_401250 at 0x401250

int sub_401250(void* ptr, void* v0, void* v1, void* v2)
{
 return 0;
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
 return 0;
}


// Function: sub_40126a at 0x40126a
int sub_40126a()
{
 sub_401270();
 return 0;
}


// Function: sub_401270 at 0x401270

int sub_401270()
{
 return 0;
}


// Function: sub_40127a at 0x40127a
int sub_40127a()
{
 sub_401280();
 return 0;
}


// Function: sub_401280 at 0x401280

int sub_401280()
{
 return 0;
}


// Function: sub_401290 at 0x401290

int sub_401290()
{
 return 0;
}


// Function: sub_40128a at 0x40128a
int sub_40128a()
{
 sub_401290();
 return 0;
}


// Function: sub_401290 at 0x401290

int sub_401290()
{
 return 0;
}


// Function: sub_40129a at 0x40129a
int sub_40129a()
{
 sub_4012a0();
 return 0;
}


// Function: sub_4012a0 at 0x4012a0

int sub_4012a0()
{
 return 0;
}


// Function: sub_4012aa at 0x4012aa
int sub_4012aa()
{
 sub_4012b0();
 return 0;
}


// Function: sub_4012b0 at 0x4012b0

unsigned int sub_4012b0(unsigned int* ptr, unsigned int size, unsigned int arg_2)
{
 return 0;
}


// Function: sub_4012ba at 0x4012ba
int sub_4012ba()
{
 sub_4012c0();
 return 0;
}


// Function: sub_4012c0 at 0x4012c0

unsigned int sub_4012c0(unsigned int arg_0)
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
typedef struct struct_0 {
 char padding_0[19718];
 unsigned int field_4d06;
} struct_0;

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

 v6 = (struct_0 *)__x86_get_pc_thunk_ax();
 v8 = 0;
 v7 = (struct_0 *)((char *)v6 + 19626);
 v1 = v8;
 result = 0;
 ptr = sub_4011c0(4);
 *(ptr) = 42;
 v10 = sub_4012b0(ptr, (unsigned int)(*((int *)&v7->padding_0[92])), 0);
 if (result == 1)
 {
 sub_4011b0(v10);
 sub_4011b0(v10);
 sub_401270();
 sub_4012a0();
 }
 if (result == 1)
 {
 sub_4011b0(v10);
 sub_4012a0(v10);
 v10 = sub_4012b0(sub_4011c0(1), (unsigned int)(*((int *)&v7->padding_0[300])), 0);
 if (result == 2)
 goto LABEL_40138f;
 if (result != 3)
 goto LABEL_401384;
 sub_4011b0(v10);
 }
 else
 {
LABEL_401384:
 sub_4012c0(v10);
 v10 = 0;
LABEL_40138f:
 sub_4011b0(v10);
 }
 sub_4012a0();
 return;
}


// Function: main at 0x4013c2
int main(char* arg)
{
 test_cpp_oo_features(arg);
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x4013d5
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 sub_401290(&_ZStL8__ioinit);
 sub_4011e0(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return 0;
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


// Function: __x86.get_pc_thunk_bx at 0x401450
void __x86.get_pc_thunk_bx()
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

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return (unsigned int *)((char *)&ptr[4844] + 3);
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

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = (struct_0 *)((char *)__x86_get_pc_thunk_dx() + 19171);
 v0 = v4;
 if (!(&v3->padding_0[144] - &v3->padding_0[144] >> 31) + (&v3->padding_0[144] - &v3->padding_0[144] >> 2) >> 1)
 {
 return (unsigned int)((&v3->padding_0[144] - &v3->padding_0[144] >> 31) + (&v3->padding_0[144] - &v3->padding_0[144] >> 2) >> 1);
 }
 else if (*((int *)&v3->padding_0[112]))
 {
 return ((unsigned int (*)(void *, unsigned int))(*((int *)&v3->padding_0[112])))(&v3->padding_0[144], (unsigned int)((&v3->padding_0[144] - &v3->padding_0[144] >> 31) + (&v3->padding_0[144] - &v3->padding_0[144] >> 2) >> 1));
 }
 else
 {
 return (unsigned int)((&v3->padding_0[144] - &v3->padding_0[144] >> 31) + (&v3->padding_0[144] - &v3->padding_0[144] >> 2) >> 1);
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

 v5 = (unsigned int *)__x86_get_pc_thunk_di2(*((int *)&v2), &v3);
 ptr = &v6->padding_0[19083];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[144])
 return v5;
 if (*((int *)&ptr->padding_0[96]))
 sub_401180((void*)*((int *)&ptr->padding_0[124]));
 v10 = (struct_0 *)&ptr->padding_0[832];
 v11 = *((int *)&ptr->padding_0[148]);
 i = (&ptr->padding_0[828] - v10 >> 2) - 1;
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



// Function: __x86.get_pc_thunk_dx at 0x401589
void __x86_get_pc_thunk_dx()
{
 return;
}

void* sub_4011a0();
int sub_4011b0(unsigned int a0);

// Stub for _ccall - missing declaration
unsigned int _ccall(unsigned long a0, unsigned long a1, unsigned int a2, int a3)
{
 return 0;
}


// Function: __x86.get_pc_thunk_di at 0x40158d
unsigned int __x86_get_pc_thunk_di(int a0)
{
 return 0;
}


// Function: __x86.get_pc_thunk_di2 at 0x40158e
unsigned int __x86_get_pc_thunk_di2(int a0, void* a1)
{
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401591
void sub_401230();
void sub_4011d0(unsigned int arg_0, void* arg_1);
void sub_4011e0(void* arg_0, void* arg_1, void* arg_2);

void test_cpp_member_func()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 char v0; // [bp-0x30]
 char result; // [bp-0x11]
 unsigned int v2; // [bp-0x10]

 v2 = 0;
 sub_401230(&v0, "Test", 31);
 result = 0;
 sub_4011d0(0, NULL);
 if (v2 == 0)
 return;
 __stack_chk_fail_local();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4015f1
void test_cpp_constructor()
{
 __x86_get_pc_thunk_ax();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40160d
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 void* v0; // [bp+0x4]

 v0 = arg_0;
 goto *((int *)*((int *)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401621
class Base {
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

 v6 = __x86_get_pc_thunk_ax() + 18782;
 v4 = v7;
 v3 = 0;
 v1 = v6 - 792;
 v0 = v6 - 816;
 v2 = 3;
 call_virtual_func(&v0, 5);
 call_virtual_func(&v1, 5);
 if (v3 == 0)
 return;
 __stack_chk_fail_local();
 return;
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

 v5 = 0;
 v3 = 10;
 v4 = 20;
 v2 = _ccall(v11);
 v1 = v2 & 255 | ((char)((v10 & 0xffff0000 | v2) >> 8) | 12) * 0x100;
 if (v5 != 0)
 __stack_chk_fail_local();
 return;
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

 v2 = 0;
 result = 1;
 v0 = 10;
 // Container<int>::push(&v0, 20); // Invalid statement
 // Container<int>::push(&v0, 30); // Invalid statement
 if (v2 != 0)
 __stack_chk_fail_local();
 return;
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
 unsigned int v0; // [bp-0x2c]
 void* v1; // [bp-0x28]
 struct_2 **p; // [bp-0x24]
 void* *ptr; // [bp-0x20]

 cur = 10;
 sub_4011a0();
 ptr = (void **)sub_4011a0();
 *(ptr) = (void *)&g_405dd0;
 p = (struct_2 **)sub_4011a0();
 *(void **)p = (void *)&g_405dd0;
 p = (struct_2 **)sub_4011a0();
 *(void **)p = (void *)&g_405de4;
 v1 = *(ptr);
 v6 = (char *)(*((int *)((char *)((void **)ptr)[4] + 4)));
 if (v6 != (char*)"12RTTIDerivedA")
 if (v6 != (char*)"12RTTIDerivedA")
 {
 cur = 0;
 if (*((int *)v6) != 42)
 cur = -(sub_401200(v6, "12RTTIDerivedA", 0, 0) < 1) & 10;
 }
 v7 = (char *)addr->field_4;
 if (v7 == (char*)"12RTTIDerivedB" || *((int *)v7) != 42 && !sub_401200(v7, (char*)"12RTTIDerivedB", p, p))
 cur += 20;
 v0 = &_ZTI8RTTIBase;
 if (sub_401250(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 cur += 100;
 if (sub_401250(p, v0, &_ZTI12RTTIDerivedB, 0))
 cur += 200;
 if (*((int *)v6) == 42)
 v6 = (char *)((int *)v6 + 1);
 sub_4011d0((unsigned int)v6, p);
 v0 = cur;
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4018c9
void test_cpp_smart_ptr()
{
 unsigned int v9; // edi
 unsigned int v10; // esi
 unsigned int v11; // ebx
 unsigned long v12; // ldt
 unsigned long v13; // gdt
 unsigned short v14; // gs
 unsigned int *p; // eax
 unsigned int *ptr;
 unsigned int v0; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned int *v2; // [bp-0x28]
 unsigned int v3[5]; // [bp-0x24]
 unsigned int v4; // [bp-0x20]
 unsigned int v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]
 unsigned int v7; // [bp-0x8]

 v7 = v9;
 v6 = v10;
 v5 = v11;
 v0 = __x86_get_pc_thunk_ax() + 18102;
 v4 = 0;
 p = (unsigned int *)sub_4011a0(4);
 result = 0;
 *(p) = 200;
 v2 = p;
 ptr = (unsigned int *)sub_401220();
 if (ptr != NULL)
 {
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 }
 v3[0] = (unsigned int)ptr;
 if (v4 == 0)
 return;
 __stack_chk_fail_local();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x40199d
void test_cpp_diamond_inheritance()
{
 unsigned long v10; // edi
 unsigned long v11; // esi
 unsigned long v12; // ebx
 unsigned long v13; // eax
 unsigned long v14; // ldt
 unsigned long v15; // gdt
 unsigned short v16; // gs
 unsigned int v17; // eax
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x30]
 unsigned long v3; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 unsigned int v5; // [bp-0x20]
 unsigned int v6; // [bp-0x10]
 unsigned int v7; // [bp-0xc]
 unsigned int v8; // [bp-0x8]

 v8 = v10;
 v7 = v11;
 v6 = v12;
 v13 = __x86_get_pc_thunk_ax() + 17378;
 v5 = 0;
 v1 = v13;
 v3 = v13 + 52;
 v2 = v13 + 24;
 v4 = 50;
 thunk_to_DiamondDerived_func(&v3);
 v4 = 100;
 v0 = v17;
 if (v5 == 0)
 return;
 __stack_chk_fail_local();
 return;
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

void test_cpp_oo_features()
{
 unsigned int v4; // edx
 unsigned int v9; // ecx;

 sub_401280();
 return;
}


// Function: sub_401b65 at 0x401b65
void sub_401b65(unsigned int a0, unsigned int a1)
{
 // Base::virtual_func(); // Invalid call
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401b66
void Base_virtual_func(int arg_0)
{
 return;
}


// Function: sub_401b73 at 0x401b73
void sub_401b73()
{
 // Base::getName(); // Invalid call
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401b74
void Base_getName()
{
 __x86_get_pc_thunk_ax();
 return;
}


// Function: sub_401b89 at 0x401b89
void sub_401b89()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401b8a
void Base_destructor()
{
 return;
}


// Function: sub_401b8f at 0x401b8f
void sub_401b8f(unsigned int a0, unsigned int a1)
{
 // Derived::virtual_func(); // Invalid call
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401b90
void Derived_virtual_func(int arg_0)
{
 return;
}


// Function: sub_401ba3 at 0x401ba3
void sub_401ba3()
{
 // Derived::getName(); // Invalid call
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401ba4
void Derived_getName()
{
 __x86_get_pc_thunk_ax();
 return;
}


// Function: sub_401bb9 at 0x401bb9
void sub_401bb9()
{
 // MultiDerived::funcA(); // Invalid call
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401bba
void MultiDerived_funcA()
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401bc4
void MultiDerived_funcB()
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401bce
unsigned int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN11VirtualBase4funcEv at 0x401bd8
void VirtualBase_func()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x401be2
void VirtualBase_destructor()
{
 return;
}


// Function: sub_401be7 at 0x401be7
void sub_401be7(unsigned int a0)
{
 // MiddleA::func(); // Invalid call
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401be8
int MiddleA_func()
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401c02
int thunk_to_MiddleA_func(void* a0)
{
 char v0; // [bp+0x0];
 unsigned int offset = ((unsigned int *)a0)[12];
 a0 = (char *)a0 + offset;
 return (unsigned int)MiddleA_func(a0);
}


// Function: sub_401c15 at 0x401c15
void sub_401c15(unsigned int a0)
{
 // MiddleB::func(); // Invalid call
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401c16
int MiddleB_func()
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401c30
int thunk_to_MiddleB_func(void* a0)
{
 char v0; // [bp+0x0]

 a0 = (char *)a0 + ((unsigned int *)a0)[12];
 return (unsigned int)MiddleB_func(a0);
}


// Function: sub_401c43 at 0x401c43
void sub_401c43(unsigned int a0)
{
 // DiamondDerived::func(); // Invalid call
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401c44
void DiamondDerived_func(void* ptr)
{
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401c5e
void thunk_to_DiamondDerived_func(void* a0)
{
 char v0; // [bp+0x0]

 a0 = (char *)a0 + ((unsigned int *)a0)[12];
 DiamondDerived_func(a0);
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401c71
void non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 a0 = (char *)a0 - 8;
 DiamondDerived_func(a0);
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x401c7c
void MiddleA_destructor(void* ptr)
{
 unsigned int v0; // edx
 unsigned int v1; // edx

 v1 = v0 - -16399;
 *((unsigned int *)ptr) = v1;
 *((unsigned int *)((char *)ptr + 8)) = v1 + 28;
 return;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401ca1
void thunk_to_MiddleA_destructor(void* a0)
{
 unsigned int v0; // edx
 unsigned int v1; // edx
 void** ptr; // eax

 v1 = v0 - -16362;
 ptr = (void**)((char *)a0 + ((unsigned int *)a0)[4]);
 ptr[0] = (void*)v1;
 ptr[2] = (void*)(v1 + 28);
}


// Function: sub_401ccb at 0x401ccb
void sub_401ccb()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x401ccc
void MiddleB_destructor(void* ptr)
{
 unsigned int v0; // edx
 unsigned int v1; // edx

 v1 = v0 - -16379;
 *((unsigned int *)ptr) = v1;
 *((unsigned int *)((char *)ptr + 8)) = v1 + 28;
 return;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x401cf1
void thunk_to_MiddleB_destructor(void* a0)
{
 unsigned int v0; // edx
 unsigned int v1; // edx
 void** ptr; // eax

 v1 = v0 - -16342;
 ptr = (void**)((char *)a0 + ((unsigned int *)a0)[4]);
 ptr[0] = (void*)v1;
 ptr[2] = (void*)(v1 + 28);
}


// Function: sub_401d1b at 0x401d1b
void sub_401d1b()
{
 // RTTIDerivedA::getType(); // Invalid call
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401d1c
void RTTIDerivedA_getType()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401d26
void RTTIDerivedB_getType()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401d30
void RTTIDerivedB_destructor()
{
 return;
}


// Function: sub_401d35 at 0x401d35
void sub_401d35()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401d36
void RTTIDerivedA_destructor()
{
 return;
}


// Function: sub_401d3b at 0x401d3b
void sub_401d3b()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401d3c
void MultiDerived_destructor()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401d41
void non_virtual_thunk_to_MultiDerived_destructor()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401d46
void Derived_destructor()
{
 return;
}


// Function: sub_401d4b at 0x401d4b
int sub_401d4b()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401d4c
void* Base_destructor_with_delete(void* ptr)
{
 sub_4011f0(ptr, 4);
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x401d74
int Derived_destructor_with_delete(void* ptr)
{
 sub_4011f0(ptr, 8);
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401d9c
int MultiDerived_destructor_with_delete(void* ptr)
{
 sub_4011f0(ptr, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401dc4
int non_virtual_thunk_to_MultiDerived_D0()
{
 unsigned int v0; // [bp+0x4]

 v0 -= 8;
 return 0;
}


// Function: sub_401dcf at 0x401dcf
int sub_401dcf()
{
 return 0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x401dd0
int VirtualBase_destructor_with_delete(void* ptr)
{
 sub_4011f0(ptr, 8);
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401df8
int RTTIDerivedB_destructor_with_delete(void* ptr)
{
 sub_4011f0(ptr, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401e20
int RTTIDerivedA_destructor_with_delete(void* ptr)
{
 sub_4011f0(ptr, 4);
 return 0;
}


// Function: _ZN7MiddleAD0Ev at 0x401e48
extern char g_405c94;
extern char g_405cb0;

void* MiddleA_D0(void* ptr)
{
 char **v1 = (char **)ptr;
 v1[0] = &g_405c94;
 char **v2 = (char **)((char *)ptr + 8);
 v2[0] = &g_405cb0;
 sub_4011f0(ptr, 16);
 return 0;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401e7f
void* thunk_to_MiddleA_D0(void* a0)
{
 unsigned int offset = ((unsigned int *)a0)[16];
 a0 = (char *)a0 + offset;
 return a0;
}


// Function: _ZN7MiddleBD0Ev at 0x401e92
extern char g_405cd0;
extern char g_405cec;

int MiddleB_D0(void* ptr)
{
 char **v1 = (char **)ptr;
 v1[0] = &g_405cd0;
 char **v2 = (char **)((char *)ptr + 8);
 v2[0] = &g_405cec;
 sub_4011f0(ptr, 16);
 return 0;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x401ec9
void* thunk_to_MiddleB_D0(void* a0)
{
 a0 = (char *)a0 + ((unsigned int *)a0)[4];
 return a0;
}


// Function: _ZN7MiddleAD4Ev at 0x401edc
typedef struct struct_1 {
 char padding_0[15779];
 unsigned int field_3da3;
} struct_1;

int MiddleA_D4(void* p)
{
 struct_1 *v4; // ecx
 struct_1 *v5; // ecx
 unsigned int v6; // esi
 unsigned int v7; // ebx
 struct struct_0 **ptr; // ebx
 struct_1 *addr; // eax
 struct_1 *v10; // ecx
 unsigned int v11; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int result; // [bp+0x8]
 char v3; // [bp+0xc]

 v5 = (struct_1 *)&((char *)(&v4[1]))[763];
 v1 = v6;
 v0 = v7;
 ptr = (struct struct_0 **)(void*)(*((int *)&v3));
 addr = (struct_1 *)&((char *)v5)[756];
 if (!result)
 addr = (struct_1 *)ptr[0];
 *((struct_1 **)p) = addr;
 if (!result)
 {
 v10 = (struct_1 *)ptr[1];
 v11 = *((int *)&addr->padding_0[12]);
 }
 else
 {
 v10 = (struct_1 *)&((char *)v5)[728];
 v11 = 8;
 }
 *((struct_1 **)((char *)p + v11)) = v10;
 return 0;
}


// Function: sub_401f25 at 0x401f25
void sub_401f25(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x401f26
int MiddleA_D2(void* _this)
{
 unsigned int result; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char v2; // [bp+0x8]

 v1 = *((int *)&v2);
 result = 0;
 return 0;
}


// Function: _ZN7MiddleBD4Ev at 0x401f42
typedef struct struct_1 {
 char padding_0[15737];
 unsigned int field_3d79;
} struct_1;

int MiddleB_D4(void* p)
{
 struct_1 *v4; // ecx
 struct_1 *v5; // ecx
 unsigned int v6; // esi
 unsigned int v7; // ebx
 struct struct_0 **ptr; // ebx
 struct_1 *addr; // eax
 struct_1 *v10; // ecx
 unsigned int v11; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp+0x8]
 char v3; // [bp+0xc]

 v5 = (struct_1 *)&((char *)(&v4[1]))[701];
 v1 = v6;
 v0 = v7;
 ptr = (struct struct_0 **)(void*)(*((int *)&v3));
 addr = (struct_1 *)&((char *)v5)[696];
 if (!v2)
 addr = (struct_1 *)(void*)ptr[0];
 *((struct_1 **)p) = addr;
 if (!v2)
 {
 v10 = (struct_1 *)ptr[1];
 v11 = *((int *)&addr->padding_0[12]);
 }
 else
 {
 v10 = (struct_1 *)&((char *)v5)[668];
 v11 = 8;
 }
 *((struct_1 **)((char *)p + v11)) = v10;
 return 0;
}


// Function: sub_401f8b at 0x401f8b
void sub_401f8b(unsigned int a0, unsigned int a1)
{
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x401f8c
int MiddleB_D2(void* _this)
{
 unsigned int result; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char v2; // [bp+0x8]

 v1 = *((int *)&v2);
 result = 0;
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401fa8
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401fbc
// Function: _Z13template_swapIiEvRT_S1_ at 0x401fd5
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // ecx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401fee
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return;
}


// Function: sub_402001 at 0x402001
void sub_402001(unsigned int a0)
{
 // Container<int>::push(); // Invalid call
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402002
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // edx

 index = *((unsigned int *)ptr);
 if (index <= 9)
 {
 *((unsigned int *)ptr) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x402022
void Container_int_get(void* ptr, int arg_0)
{
}


// Function: sub_40203f at 0x40203f
void sub_40203f(unsigned int a0)
{
 // Container<int>::getSize(); // Invalid call
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x402040
void Container_int_getSize(void* ptr)
{
}


// Function: sub_40204f at 0x40204f
void sub_40204f(unsigned int a0)
{
 // Container<double>::Container(); // Invalid call
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x402050
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return;
}


// Function: sub_402063 at 0x402063
void sub_402063(unsigned int a0)
{
 // Container<double>::push(); // Invalid call
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x402064
void Container_double_push(void* ptr)
{
 unsigned int index; // edx
 double arg_0;

 index = *((unsigned int *)ptr);
 if (index > 9)
 {
 return;
 }
 *((unsigned int *)ptr) = index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402088
void Container_double_get(void* this, int arg_0)
{
 if (arg_0 >= 0 && arg_0 < *((int *)this))
 {
 }
 return;
}


// Function: sub_4020a7 at 0x4020a7
void sub_4020a7(unsigned int a0)
{
 // Container<double>::getSize(); // Invalid call
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4020a8
void Container_double_getSize(void* ptr)
{
}


// Function: sub_4020b7 at 0x4020b7
int sub_4020b7()
{
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x4020b8
void std_unique_ptr_int_destructor(void* _this)
{
 unsigned int v1; // ecx
 unsigned int v2; // edx
 unsigned int v0; // [bp-0xc]

 (void)v1;
 (void)v0;
 if (!*((int *)_this))
 return;
 sub_4011f0(*((unsigned int *)_this), 4);
 return;
}


// Function: sub_4020e7 at 0x4020e7
int sub_4020e7()
{
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x4020e8
void std_unique_ptr_int_array_destructor(void* _this)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!*((int *)_this))
 return;
 sub_401260(*((unsigned int *)_this));
 return;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x402116
typedef struct struct_diamond_derived {
 struct struct_diamond_derived *field_0;
 char padding_4[16];
 struct struct_diamond_derived *field_14;
 struct struct_diamond_derived *field_18;
 char padding_1c[15425];
 unsigned int field_3c5d;
} struct_diamond_derived;

int DiamondDerived_D4(void* p)
{
 struct_diamond_derived *v9; // eax
 unsigned int v10; // edi
 struct_diamond_derived *v19; // eax
 unsigned int v11; // esi
 unsigned int v12; // ebx
 struct_diamond_derived *addr; // edx
 struct_diamond_derived *ptr; // esi
 struct_diamond_derived *v15; // ecx
 unsigned int v16; // edx
 struct_diamond_derived *v17; // edx
 struct_diamond_derived *v18; // edx
 struct_diamond_derived *v0; // [bp-0x38]
 struct_diamond_derived *v1; // [bp-0x34]
 struct_diamond_derived *v2; // [bp-0x30]
 struct_diamond_derived *v3; // [bp-0x20]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp+0x8]
 char v8; // [bp+0xc]

 v9 = (struct_diamond_derived *)(__x86_get_pc_thunk_ax() + 15977);
 v6 = v10;
 v5 = v11;
 v4 = v12;
 addr = (struct_diamond_derived *)&((char *)v9)[484];
 ptr = (struct_diamond_derived *)(*((int *)&v8));
 if (!v7)
 addr = (struct_diamond_derived *)ptr->field_0;
 if (!v7)
 addr = ptr->field_0;
 *((struct_diamond_derived **)p) = addr;
 if (!v7)
 {
 v15 = ptr->field_14;
 v16 = *((int *)((char *)&addr->padding_4[8]));
 }
 else
 else
 {
 v15 = (struct_diamond_derived *)&((char *)v9)[432];
 v16 = 16;
 }
 *((struct_diamond_derived **)((char *)p + v16)) = v15;
 v17 = (struct_diamond_derived *)&((char *)v9)[460];
 if (!v7)
 v17 = ptr->field_18;
 *((struct_diamond_derived **)((char *)p + 8)) = v17;
 v18 = (struct_diamond_derived *)&((char *)v9)[512];
 if (!v7)
 v18 = (struct_diamond_derived *)((char *)p + 8);
 v3 = v9;
 v2 = v9;
 v1 = v9;
 v0 = v18;
 v19 = (struct_diamond_derived *)&((char *)v3)[520];
 if (!v7)
 v19 = (struct_diamond_derived *)p;
 v7 = v19;
 return 0;
}


// Function: sub_4021af at 0x4021af
void sub_4021af(void* a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x4021b0
void DiamondDerived_D1(void* ptr)
{
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]

 (void)ptr;
 result = 0;
 v0 = 2;
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x4021cb
void non_virtual_thunk_to_DiamondDerived_D1(unsigned int a0)
{
 a0 -= 8;
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x4021d6
void* thunk_to_DiamondDerived_D1(void* a0)
{
 unsigned int v0; // eax

 a0 = (char *)a0 + ((unsigned int *)a0)[4];
 return a0;
}


// Function: sub_4021e9 at 0x4021e9
int sub_4021e9()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x4021ea
void* DiamondDerived_destructor_with_delete(void* ptr)
{
 (void)sub_4011f0(ptr, 24);
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x40221e
int non_virtual_thunk_to_DiamondDerived_D0(void* v0)
{
 v0 = (char*)v0 - 8;
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x402229
void* thunk_to_DiamondDerived_D0_final(void* a0)
{
 a0 = (char *)a0 + ((unsigned int *)a0)[4];
 return a0;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x40223c
void DiamondDerived_D2(void* ptr)
{
 unsigned int result; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char v2; // [bp+0x8]

 v1 = *((int *)&v2);
 result = 0;
 return;
}


// Function: __x86.get_pc_thunk_ax at 0x402258
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __x86.get_pc_thunk_cx at 0x40225c
void __x86_get_pc_thunk_cx()
{
 return;
}


// Function: __x86.get_pc_thunk_si at 0x402260
int __x86_get_pc_thunk_si(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_402264 at 0x402264
int sub_402264()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402270
void __stack_chk_fail_local();

void __stack_chk_fail_local_impl()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401240();
 __do_global_ctors_aux();
 (void)v0;
 (void)v2;
}

void _start() {
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]
 void (*ctor_func)();

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)0;
 v4 = (unsigned int *)__x86_get_pc_thunk_dx();
 v5 = 0;
 ctor_func = (void (*)())v4;
 if (v4 == (unsigned int *)0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = ptr;
 do
 {
 p = v6;
 ctor_func();
 v4 = (unsigned int *)0xffffffff;
 ctor_func = (void (*)())v4;
 v6 = ptr;
 } while (v4 != (unsigned int *)0xffffffff);
 return 4294967295;
}


// Function: sub_4022d2 at 0x4022d2
void sub_4022d2()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function _fini removed by preprocessor */


