// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char padding_0[14556];
 unsigned int field_38dc;
} struct_0;

/* Helper function declarations */
int __x86_get_pc_thunk_bx();
int __x86_get_pc_thunk_dx();
int __x86_get_pc_thunk_di(int a0);
int __x86_get_pc_thunk_si();
int __x86_get_pc_thunk_ax();
void __stack_chk_fail();
void* _ccall(unsigned long ldt, unsigned long gdt, unsigned int gs, int size);
void frame_dummy();
unsigned int __do_global_ctors_aux();
void _start();
unsigned int * deregister_tm_clones();
unsigned int register_tm_clones();
unsigned int *__do_global_dtors_aux();

extern struct_0 *g_404ff4;

int _init()
{
 if (g_404ff4)
 ((void(*)())g_404ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(int arg)
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
}


// Function declarations
void template_swap_int(int *ptr, int *p);
void sub_401040();
void sub_401050();
void sub_401060();
void sub_401070();
void sub_401080();
void sub_401090();
void sub_4010a0();
void sub_4010b0();
void sub_4010c0();
void sub_4010d0();
void sub_4010e0();
void sub_4010f0();
void sub_401100();
void sub_401110();
void sub_401120();
void sub_401130();
void sub_401140();
void sub_401150();
void sub_401160();
int sub_401170();
int sub_401180(int a0, void* a1, int a2);
int sub_401190(unsigned int a0);
int sub_4011a0(unsigned int a0);
int sub_4011b0(unsigned int a0);
int sub_4011c0();
int sub_4011d0();
int sub_4011e0(void* a0, int a1);
int sub_4011f0();
int sub_401200();
void* sub_401210(unsigned int a0);
int sub_401220();
int sub_401230();
int sub_401240(void* a0);
int sub_401250();
int sub_401260(void* a0);
int sub_401270(void* a0);
int sub_401280(unsigned int a0);
int sub_401290(void* a0, int a1, int a2);
int sub_4012a0(unsigned int a0);
void DiamondDerived_func(void* this_ptr);
void Derived_virtual_func(void* this_ptr, int arg_0);
int template_max_int(int arg_0, int arg_1);
void Base_virtual_func(void* this_ptr, int arg_0);
int Derived_getName(void* this_ptr);
void MultiDerived_funcA(void* this_ptr);
void RTTIDerivedA_getType(void* this_ptr);
int Container_double_getSize(void* this_ptr);

// Function: sub_40103c at 0x40103c
void sub_40103c()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 sub_401030(0);
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
 return;
}


// Function: sub_401150 at 0x401150
void sub_401150()
{
 sub_401030(136);
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
}


// Function: sub_40116e at 0x40116e
int sub_40116e()
{
 sub_401170();
 return 0;
}


// Function: sub_401170 at 0x401170
int sub_401170()
{
 struct_0 *v1; // ebx

 return ((int (*)())(&v1->padding_0[92]))();
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180(0, 0, 0);
 return 0;
}


// Function: sub_401180 at 0x401180
int sub_401180(int a0, void* a1, int a2)
{
 struct_0 *v1; // ebx

 return ((int (*)(int, void*, int))(&v1->padding_0[12]))(a0, a1, a2);
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190(0);
 return 0;
}


// Function: sub_401190 at 0x401190
int sub_401190(unsigned int a0)
{
 struct_0 *v1; // ebx

 return ((int (*)(unsigned int))(&v1->padding_0[16]))(a0);
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0(0);
 return 0;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0(unsigned int a0)
{
 struct_0 *v1; // ebx

 return ((int (*)(unsigned int))(&v1->padding_0[20]))(a0);
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
 struct_0 *v1; // ebx

 return ((int (*)(unsigned int))(&v1->padding_0[24]))(a0);
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

 return ((int (*)())(&v1->padding_0[28]))();
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

 return ((int (*)())(&v1->padding_0[32]))();
}


// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0(0, 0);
 return 0;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0(void* a0, int a1)
{
 struct_0 *v1; // ebx

 return ((int (*)(void*, int))(&v1->padding_0[36]))(a0, a1);
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

 return ((int (*)())(&v1->padding_0[40]))();
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

 return ((int (*)())(&v1->padding_0[44]))();
}


// Function: sub_40120a at 0x40120a
int sub_40120a()
{
 sub_401210(0);
 return 0;
}


// Function: sub_401210 at 0x401210
void* sub_401210(unsigned int a0)
{
 struct_0 *v1; // ebx

 return ((void* (*)())(&v1->padding_0[48]))();
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

 return ((int (*)())(&v1->padding_0[52]))();
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

 return ((int (*)())(&v1->padding_0[56]))();
}


// Function: sub_40123a at 0x40123a
int sub_40123a()
{
 sub_401240(0);
 return 0;
}


// Function: sub_401240 at 0x401240
int sub_401240(void* a0)
{
 struct_0 *v1; // ebx

 return ((int (*)(void*))(&v1->padding_0[60]))(a0);
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

 return ((int (*)())(&v1->padding_0[64]))();
}


// Function: sub_40125a at 0x40125a
int sub_40125a()
{
 sub_401260(0);
 return 0;
}


// Function: sub_401260 at 0x401260
int sub_401260(void* a0)
{
 struct_0 *v1; // ebx

 return ((int (*)(void*))(&v1->padding_0[68]))(a0);
}


// Function: sub_40126a at 0x40126a
int sub_40126a()
{
 sub_401270(0);
 return 0;
}


// Function: sub_401270 at 0x401270
int sub_401270()
{
 struct_0 *v1; // ebx

 return ((int (*)())(&v1->padding_0[72]))();
}


// Function: sub_40127a at 0x40127a
int sub_40127a()
{
 sub_401280(0);
 return 0;
}


// Function: sub_401280 at 0x401280
int sub_401280(unsigned int a0)
{
 struct_0 *v1; // ebx

 return ((int (*)(unsigned int))(&v1->padding_0[76]))(a0);
}


// Function: sub_40128a at 0x40128a
int sub_40128a()
{
 sub_401290(0, 0, 0);
 return 0;
}


// Function: sub_401290 at 0x401290
int sub_401290(void* a0, int a1, int a2)
{
 struct_0 *v1; // ebx

 return ((int (*)(void*, int, int))(&v1->padding_0[80]))(a0, a1, a2);
}


// Function: sub_40129a at 0x40129a
int sub_40129a()
{
 sub_4012a0(0);
 return 0;
}


// Function: sub_4012a0 at 0x4012a0
int sub_4012a0(unsigned int a0)
{
 struct_0 *v1; // ebx

 return ((int (*)(unsigned int))(&v1->padding_0[84]))(a0);
}


// Function: sub_4012aa at 0x4012aa
void sub_4012aa()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4012dc at 0x4012dc
void sub_4012dc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4012e0
int __x86_get_pc_thunk_bx()
{
 return 0;
}


// Function: sub_4012e4 at 0x4012e4
void sub_4012e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return (unsigned int *)((char *)&ptr[3912] + 3);
}


// Function: sub_401323 at 0x401323
void sub_401323()
{
}


// Function: sub_401329 at 0x401329
void sub_401329()
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

 __x86_get_pc_thunk_dx();
 v3 = (struct_0 *)&v2->padding_0[15447];
 v0 = v4;
 if (!v4)
 {
 return 0;
 }
 else if (*((int *)&v3->padding_0[108]))
 {
 return (*((int (*)(void*, int))&v3->padding_0[108]))(v3->padding_0[140], v4);
 }
 else
 {
 return v4;
 }
}


// Function: sub_401377 at 0x401377
void sub_401377()
{
 __do_global_dtors_aux();
 return;
}

/* Helper function declarations */
unsigned int *__do_global_dtors_aux();



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

 v5 = (unsigned int *)__x86_get_pc_thunk_di(*((int *)&v2));
 ptr = (struct_0 *)&v6->padding_0[15359];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[140])
 return v5;
 if (*((int *)&ptr->padding_0[92]))
 sub_401170();
 v10 = (struct_0 *)&ptr->padding_0[712];
 v11 = *((int *)&ptr->padding_0[144]);
 i = (&ptr->padding_0[708] - (char *)v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[144]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[144]) = v13;
 ((void (*)())&v10->padding_0[4 * v13])();
 v11 = *((int *)&ptr->padding_0[144]);
 } while (*((int *)&ptr->padding_0[144]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[140] = 1;
 return v14;
}


// Function: sub_40140a at 0x40140a
void sub_40140a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401419
int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86.get_pc_thunk_di at 0x40141d
int __x86_get_pc_thunk_di(int a0)
{
 return 0;
}


/* Helper function declarations */
char* strncpy(char* dest, const char* src, unsigned int n);
void* memset(void* s, int c, unsigned int n);
void __stack_chk_fail();
void __stack_chk_fail_local();

// Function: _Z20test_cpp_member_funcv at 0x401421
void test_cpp_member_func()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 char v0[4]; // [bp-0x30]
 char v1; // [bp-0x2c]
 unsigned int v2; // [bp-0x10]

  v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 strncpy(v0, "Test", 4);
 memset(&v1, 0, 28);
 sub_4011c0();
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return;
 __stack_chk_fail();
}


// Function: _Z20test_cpp_constructorv at 0x4014b5
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 int *ptr; // eax

 ptr = (int *)(void*)sub_401210(20);
 ptr[1] = 10;
 ptr[2] = 20;
 ptr[3] = 30;
 ptr[4] = 40;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 sub_401240(ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401523
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((void (*)(void*, int))(*((int *)arg_0)))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x40153b
void test_cpp_virtual_func()
{
 unsigned int v5; // eax
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

  v5 = __x86_get_pc_thunk_ax() + 14916;
 v3 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 v0 = v5 - 696;
 v1 = v5 - 672;
 v2 = 3;
  call_virtual_func((class Base *)&v0, 5);
  call_virtual_func((class Base *)&v1, 5);
 if (v3 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return;
 __stack_chk_fail();
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4015b1
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4015bb
void test_cpp_diamond_inheritance()
{
 unsigned int v6; // eax
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // eax
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

  v6 = __x86_get_pc_thunk_ax();
 v4 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 v10 = v6 - -14275;
 v0 = v10;
 v2 = v10 + 52;
 v1 = v10 + 24;
 v3 = 50;
 DiamondDerived_func(&v2);
 v3 = 100;
 DiamondDerived_func(&v2);
 if (v4 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return;
 __stack_chk_fail();
}


// Function: _Z26test_cpp_operator_overloadv at 0x401634
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x40163e
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
 template_max_int(3, 7);
 v3 = 10;
 v4 = 20;
 template_swap_int(&v3, &v4);
 v2 = (unsigned int)_ccall(v7, v8, (unsigned int)v9, 2);
 v1 = (unsigned short)(v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100);
 if (v5 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return;
 __stack_chk_fail();
}


// Function: _Z23test_cpp_template_classv at 0x4016e2
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4016ec
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4016f6
 void test_cpp_exception()
{
 struct_0 *v2; // esi
 struct_0 *v3; // esi
 unsigned int *ptr; // eax
 int v5; // eax
 unsigned int result; // edx
 unsigned int flag1; // edx
 unsigned int v8; // eax
 unsigned int v0; // [bp-0x20]

 __x86_get_pc_thunk_si();
 v3 = (struct_0 *)&v2->padding_0[14468];
  ptr = (unsigned int *)sub_4011b0(4);
  *(ptr) = 42;
  v5 = sub_401290((void*)ptr, *((int *)&v3->padding_0[88]), 0);
  if (result != 1)
  if (result != 1)
  v0 = 0;
  for (; flag1 != 1; flag1 = result)
  {
  v5 = sub_4012a0((unsigned int)v5);
  v0 = *((int *)sub_4011a0((unsigned int)v5));
  v5 = sub_401250();
  sub_401280(0);
  }
  sub_4011a0((unsigned int)v5);
  sub_401280((unsigned int)v5);
  v8 = sub_401290((void*)sub_4011b0(1), (int)&v3->padding_0[300], 0);
 if (result != 2)
 {
 if (result != 3)
 {
 v8 = sub_4012a0(v8);
 }
 else
 {
 sub_4011a0(v8);
 sub_401280(v8);
 return;
 }
 }
 sub_4011a0(v8);
 sub_401280(v8);
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401806
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401810
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
 void *field_4;
} struct_4;

extern struct_4 *addr;
extern void *g_404dd4;
extern void *g_404de8;

void test_cpp_rtti()
{
 void **ptr; // edi
 struct_2 **p; // ebp
 int v5; // edi
 void *v6; // eax
 void **v0; // [bp-0x24]
 void *v1; // [bp-0x20]

 ptr = (void **)sub_401190(4);
 v0 = ptr;
 *(ptr) = (void*)&g_404dd4;
 p = (struct_2 **)sub_401190(4);
 *(p) = (struct_2 *)&g_404de8;
  v1 = *(ptr);
  v5 = *((int *)(((char*)(*(ptr))) + 4));
  if (v5 != (int)"12RTTIDerivedA" && *((int*)v5) != 42)
  sub_4011f0();
  v6 = (void*)addr->field_4;
  sub_4011c0();
 ((int(*)(void*))((int**)v1)[1])(v0);
 ((int(*)(void*))((int**)(*(p)))[1])(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40193a
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

void test_cpp_oo_features()
{
 sub_401260(&g_402018);
 sub_401180(1, &g_40203c, 0);
 sub_401180(1, &g_40205a, 0);
 sub_401180(1, &g_402076, 0);
 sub_401180(1, &g_402092, 0);
 sub_401180(1, &g_4020ae, 0);
 sub_401180(1, &g_4020cb, 22);
 sub_401180(1, &g_4020e7, 0);
 sub_401180(1, &g_402103, 16);
 sub_401180(1, &g_40211f, 85);
 sub_401180(1, &g_40213b, 0);
 sub_401180(1, &g_402158, 0);
 sub_401180(1, &g_402175, 0);
 return;
}


// Function: main at 0x401a75
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401a8b
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned int _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 sub_401270(&_ZStL8__ioinit);
 return sub_4011d0();
}


// Function: sub_401ac7 at 0x401ac7
void sub_401ac7(unsigned int a0, unsigned int a1)
{
 ((void(*)(void*, int))Base_virtual_func)(0, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401ac8
void Base_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401ad4
int Base_getName(void* this_ptr)
{
 __x86_get_pc_thunk_ax();
 return 0;
}





// Function: sub_401ae9 at 0x401ae9
void sub_401ae9()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401aea
void Base_destructor(void* this_ptr)
{
 return;
}


// Function: sub_401aef at 0x401aef
void sub_401aef(unsigned int a0, unsigned int a1)
{
 Derived_virtual_func(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401af0
void Derived_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401b01 at 0x401b01
void sub_401b01()
{
 Derived_getName(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401b02
int Derived_getName(void* this_ptr)
{
 __x86_get_pc_thunk_ax();
 return 0;
}


// Function: sub_401b17 at 0x401b17
void sub_401b17()
{
 MultiDerived_funcA(0);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401b18
void MultiDerived_funcA(void* this_ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401b22
void MultiDerived_funcB(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401b2c
int thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: _ZN7MiddleA4funcEv at 0x401b36
void MiddleA_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401b4d
int thunk_to_MiddleA_func(void **a0)
{
 void **v0; // eax
 int *vtable; // eax

 vtable = (int*)*(a0);
 v0 = (void **)((char *)a0 + vtable[12]);
 vtable = (int*)*(v0);
 return ((int*)((char *)v0 + 4 + vtable[12]))[0] + 150;
}


// Function: sub_401b69 at 0x401b69
void MiddleB_func(void* this_ptr);

void sub_401b69(unsigned int a0)
{
 MiddleB_func(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401b6a
void MiddleB_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401b81
int thunk_to_MiddleB_func(void **a0)
{
 void **v0; // eax
 int *vtable; // eax

 vtable = (int*)*(a0);
 v0 = (void **)((char *)a0 + vtable[12]);
 vtable = (int*)*(v0);
 return ((int*)((char *)v0 + 4 + vtable[12]))[0] + 200;
}


// Function: sub_401b9d at 0x401b9d
void sub_401b9d(unsigned int a0)
{
 DiamondDerived_func(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401b9e
void DiamondDerived_func(void* this_ptr)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401bb5
int thunk_to_DiamondDerived_func(void **a0)
{
 void **v0; // eax
 int *vtable; // eax

 vtable = (int*)*(a0);
 v0 = (void **)((char *)a0 + vtable[12]);
 vtable = (int*)*(v0);
 return ((int*)(4 + (char *)v0 + vtable[12]))[0] + 250;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401bd1
int thunk_to_DiamondDerived_func2(void *a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)((char **)((char *)a0 - 8))[8] - 12)))) + 250;
}


// Function: sub_401be9 at 0x401be9
void sub_401be9()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401bea
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401bf4
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401bfe
void RTTIDerivedB_destructor(void* this_ptr)
{
 return;
}


// Function: sub_401c03 at 0x401c03
void sub_401c03()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401c04
void RTTIDerivedA_destructor(void* this_ptr)
{
 return;
}


// Function: sub_401c09 at 0x401c09
void sub_401c09()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401c0a
void DiamondDerived_destructor(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401c0f
void thunk_to_DiamondDerived_destructor()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401c14
void thunk_to_DiamondDerived_destructor2()
{
 return;
}


// Function: sub_401c19 at 0x401c19
void sub_401c19()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401c1a
void MultiDerived_destructor(void* this_ptr)
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401c1f
void thunk_to_MultiDerived_destructor()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401c24
void Derived_destructor(void* this_ptr)
{
 return;
}


// Function: sub_401c29 at 0x401c29
void sub_401c29()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401c2a
void Base_destructor_delete(void* this_ptr)
{
 sub_4011e0(this_ptr, 4);
 return;
}


// Function: sub_401c4d at 0x401c4d
void sub_401c4d()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401c4e
void Derived_destructor_delete(void* this_ptr)
{
 sub_4011e0(this_ptr, 8);
 return;
}


// Function: sub_401c71 at 0x401c71
void sub_401c71()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401c72
void MultiDerived_destructor_delete(void* this_ptr)
{
 sub_4011e0(this_ptr, 16);
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401c95
int thunk_to_MultiDerived_destructor_delete(unsigned int a0)
{
 return sub_4011e0((void *)(a0 - 8), 16);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401cbc
void RTTIDerivedA_destructor_delete(void* this_ptr)
{
 sub_4011e0(this_ptr, 4);
 return;
}


// Function: sub_401cdf at 0x401cdf
void sub_401cdf()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401ce0
void RTTIDerivedB_destructor_delete(void* this_ptr)
{
 sub_4011e0(this_ptr, 4);
 return;
}


// Function: sub_401d03 at 0x401d03
void sub_401d03()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401d04
void DiamondDerived_destructor_delete(void* this_ptr)
{
 sub_4011e0(this_ptr, 24);
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x401d27
int thunk_to_DiamondDerived_destructor_delete(void **a0)
{
 int *vtable; // eax
 vtable = (int*)*(a0);
 return sub_4011e0((void *)((char *)a0 + vtable[16]), 24);
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401d50
int thunk_to_DiamondDerived_destructor_delete2(unsigned int a0)
{
 return sub_4011e0((void *)(a0 - 8), 24);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401d77
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401d89
// Function: _Z13template_swapIiEvRT_S1_ at 0x401d9c
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // ecx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((int *)p) = v0;
 return;
}


void Container_int_Constructor(void* ptr);

// Function: sub_401db3 at 0x401db3
void sub_401db3(unsigned int a0)
{
 Container_int_Constructor(0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401db4
void Container_int_Constructor(void* ptr)
{
 ((int *)ptr)[10] = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401dc4
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // edx

 index = ((int *)ptr)[10];
 if (index <= 9)
 {
 ((int *)ptr)[10] = index + 1;
 ((int *)ptr)[index] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401de2
int Container_int_get(void* this_ptr, int arg_0)
{
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401e02
int Container_int_getSize(void* this_ptr)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401e0e
void Container_double_Constructor(void* ptr)
{
 ((int *)ptr)[20] = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401e1e
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int index; // edx

 index = ((unsigned int *)ptr)[20];
 if (index > 9)
 {
 return;
 }
 ((int *)ptr)[20] = index + 1;
 ((double *)ptr)[index] = arg_0;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401e40
double Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 < 0)
 {
 return 0.0;
 }
 else if ((int)((int *)this_ptr)[20] <= arg_0)
 {
 return 0.0;
 }
 else
 {
 return ((double *)this_ptr)[arg_0];
 }
}


// Function: sub_401e5f at 0x401e5f
void sub_401e5f(unsigned int a0)
{
 Container_double_getSize(0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401e60
int Container_double_getSize(void* this_ptr)
{
 return 0;
}


// Function: __x86.get_pc_thunk_ax at 0x401e6c
int __x86_get_pc_thunk_ax()
{
 return 0;
}


// Function: __x86.get_pc_thunk_si at 0x401e70
int __x86_get_pc_thunk_si()
{
 return 0;
}


// Function: sub_401e74 at 0x401e74
void sub_401e74()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x401e80
void __stack_chk_fail_local();

void __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401220();
 __do_global_ctors_aux();
 return;
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

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)&v2->padding_0[715];
 v4 = (unsigned int *)*((int *)&ptr->padding_0[720]);
 if (*((int *)&ptr->padding_0[720]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = (struct_0 *)&ptr->padding_0[720];
 do
 {
 p = v6;
 ((void (*)())v4)();
 v4 = (unsigned int *)*((int *)&p->padding_0[4]);
 v6 = (struct_0 *)&p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401ee2 at 0x401ee2
void sub_401ee2()
{
}



/* CRT stub function _fini removed by preprocessor */


