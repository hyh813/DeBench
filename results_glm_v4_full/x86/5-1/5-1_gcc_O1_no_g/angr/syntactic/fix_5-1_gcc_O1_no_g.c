// Angr Decompilation of 5-1_gcc_O1_no_g
// Platform: X86
#include <stdint.h>

void* _ccall(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3);

unsigned int __x86_get_pc_thunk_ax(void);
unsigned int __x86_get_pc_thunk_dx(void);
void __stack_chk_fail_local(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void* sub_4011b0(unsigned int arg_0);
int sub_4011c0(void *arg_0);
int sub_4011d0(void *arg_0, void *arg_1, void *arg_2);
int sub_401040(void);
int sub_401050(void);
int sub_401060(void);
int sub_401070(void);
int sub_401080(void);
int sub_401090(void);
int sub_4010a0(void);
int sub_4010b0(void);
int sub_4010c0(void);
int sub_4010d0(void);
int sub_4010e0(void);
int sub_4010f0(void);
int sub_401100(void);
int sub_401110(void);
int sub_401120(void);
int sub_401130(void);
int sub_401140(void);
int sub_401150(void);
int sub_401160(void);
int sub_401170(void* arg_0);
int sub_401180(void *arg_0, void *arg_1, unsigned int arg_2);
void* sub_401190();
void* sub_4011a0(void *arg_0);
int sub_4011f0(void *arg_0, void *arg_1);
int sub_401200(void *arg_0, void *arg_1);
void *sub_401210(void *arg_0);
int sub_401220();
int sub_401230();

/* CRT stub function _init removed by preprocessor */

typedef union struct_0 {
    struct {
        char padding_0[92];
        unsigned int field_5c;
    } _off_5c;
    struct {
        char padding_0[12];
        unsigned int field_c;
    } _off_c;
    struct {
        char padding_0[16];
        unsigned int field_10;
    } _off_10;
    struct {
        char padding_0[20];
        unsigned int field_14;
    } _off_14;
    struct {
        char padding_0[24];
        unsigned int field_18;
    } _off_18;
    struct {
        char padding_0[28];
        unsigned int field_1c;
    } _off_1c;
    struct {
        char padding_0[32];
        unsigned int field_20;
    } _off_20;
    struct {
        char padding_0[36];
        unsigned int field_24;
    } _off_24;
    struct {
        char padding_0[40];
        unsigned int field_28;
    } _off_28;
    struct {
        char padding_0[44];
        unsigned int field_2c;
    } _off_2c;
    struct {
        char padding_0[48];
        unsigned int field_30;
    } _off_30;
    struct {
        char padding_0[52];
        unsigned int field_34;
    } _off_34;
    struct {
        char padding_0[56];
        unsigned int field_38;
    } _off_38;
    struct {
        char padding_0[60];
        unsigned int field_3c;
    } _off_3c;
    struct {
        char padding_0[64];
        unsigned int field_40;
    } _off_40;
    struct {
        char padding_0[68];
        unsigned int field_44;
    } _off_44;
    struct {
        char padding_0[72];
        unsigned int field_48;
    } _off_48;
    struct {
        char padding_0[76];
        unsigned int field_4c;
    } _off_4c;
    struct {
        char padding_0[80];
        unsigned int field_50;
    } _off_50;
    struct {
        char padding_0[84];
        unsigned int field_54;
    } _off_54;
} struct_0;

extern struct_0 *g_404ff4;
int sub_4011e0(void *arg_0, unsigned int arg_1);

int _init()
{
 if (g_404ff4)
 ((void (*)())g_404ff4)();
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030(int arg_0)
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_40103c at 0x40103c
void sub_40103c()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return 0;
}


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
int sub_40116e()
{
 sub_401170(g_404ff4);
 return 0;
}


// Function: sub_401170 at 0x401170
int sub_401170(void* arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 goto *v1->_off_5c.field_5c;
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180(0, 0, 0);
 return 0;
}


// Function: sub_401180 at 0x401180
int sub_401180(void *arg_0, void *arg_1, unsigned int arg_2)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return ((int (*)(void*, void*, unsigned int))v1->_off_c.field_c)(arg_0, arg_1, arg_2);
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return 0;
}


// Function: sub_401190 at 0x401190
void *sub_401190()
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return (void *)(uintptr_t)v1->_off_10.field_10;
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0(0);
 return 0;
}


// Function: sub_4011a0 at 0x4011a0
void *sub_4011a0(void *arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return (void *)(uintptr_t)v1->_off_14.field_14;
}


// Function: sub_4011aa at 0x4011aa
int sub_4011aa()
{
 sub_4011b0(0);
 return 0;
}


// Function: sub_4011b0 at 0x4011b0
void* sub_4011b0(unsigned int arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return (void*)(uintptr_t)v1->_off_18.field_18;
}


// Function: sub_4011ba at 0x4011ba
int sub_4011ba()
{
 sub_4011c0(0);
 return 0;
}


// Function: sub_4011c0 at 0x4011c0
int sub_4011c0(void *arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return v1->_off_1c.field_1c;
}


// Function: sub_4011ca at 0x4011ca
int sub_4011ca()
{
 sub_4011d0(0, 0, 0);
 return 0;
}


// Function: sub_4011d0 at 0x4011d0
int sub_4011d0(void *arg_0, void *arg_1, void *arg_2)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return v1->_off_20.field_20;
}


// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0(0, 0);
 return 0;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0(void *arg_0, unsigned int arg_1)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return v1->_off_24.field_24;
}


// Function: sub_4011ea at 0x4011ea
int sub_4011ea()
{
 sub_4011f0();
 return 0;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0(void *arg_0, void *arg_1)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return ((int (*)(void*, void*))v1->_off_28.field_28)(arg_0, arg_1);
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 sub_401200();
 return 0;
}


// Function: sub_401200 at 0x401200
int sub_401200(void *arg_0, void *arg_1)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return v1->_off_2c.field_2c;
}


// Function: sub_40120a at 0x40120a
int sub_40120a()
{
 sub_401210();
 return 0;
}


// Function: sub_401210 at 0x401210
void *sub_401210(void *arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return (void *)v1->_off_30.field_30;
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

 v1 = g_404ff4;
 return v1->_off_34.field_34;
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

 v1 = g_404ff4;
 return v1->_off_38.field_38;
}


// Function: sub_40123a at 0x40123a
int sub_40123a()
{
 sub_401240();
 return 0;
}


// Function: sub_401240 at 0x401240
int sub_401240(void *arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return v1->_off_3c.field_3c;
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

 v1 = g_404ff4;
 return v1->_off_40.field_40;
}


// Function: sub_40125a at 0x40125a
int sub_40125a()
{
 sub_401260();
 return 0;
}


// Function: sub_401260 at 0x401260
int sub_401260(void *arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return v1->_off_44.field_44;
}


// Function: sub_40126a at 0x40126a
int sub_40126a()
{
 sub_401270();
 return 0;
}


// Function: sub_401270 at 0x401270
int sub_401270(void *arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return v1->_off_48.field_48;
}


// Function: sub_40127a at 0x40127a
int sub_40127a()
{
 sub_401280();
 return 0;
}


// Function: sub_401280 at 0x401280
int sub_401280(void *arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return v1->_off_4c.field_4c;
}


// Function: sub_40128a at 0x40128a
int sub_40128a()
{
 sub_401290();
 return 0;
}


// Function: sub_401290 at 0x401290
void sub_401290(void *arg_0, void *arg_1, int arg_2)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 v1->_off_54.field_54 = arg_2;
 return;
}


// Function: sub_40129a at 0x40129a
int sub_40129a()
{
 sub_4012a0();
 return 0;
}


// Function: sub_4012a0 at 0x4012a0
void* sub_4012a0(void *arg_0)
{
 struct_0 *v1; // ebx

 v1 = g_404ff4;
 return (void*)(unsigned int)v1->_off_50.field_50;
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
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4012e4 at 0x4012e4
void sub_4012e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void deregister_tm_clones()
{
 unsigned int *ptr; // edx

 (void)__x86_get_pc_thunk_dx();
 (void)((char *)&ptr[3912] + 3);
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

typedef struct struct_2 {
 unsigned int field_0;
} struct_2;

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 v4 = __x86_get_pc_thunk_dx();
 v2 = (struct_0 *)0;
 v3 = (struct_0 *)((char *)v2 + 15447);
 v0 = v4;
 if (!((char *)v3 - (char *)v3 >> 31) + ((char *)v3 - (char *)v3 >> 2) >> 1)
 {
 return ((char *)v3 - (char *)v3 >> 31) + ((char *)v3 - (char *)v3 >> 2) >> 1;
 }
 else if (*((int *)((char *)v3 + 108)))
 {
 return ((int (*)(void*, int))(*((int *)((char *)v3 + 108))))((void*)((char *)v3 + 140), ((char *)v3 - (char *)v3 >> 31) + ((char *)v3 - (char *)v3 >> 2) >> 1);
 }
 else
 {
 return ((char *)v3 - (char *)v3 >> 31) + ((char *)v3 - (char *)v3 >> 2) >> 1;
 }
}


// Function: sub_401377 at 0x401377
void sub_401377()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int __do_global_dtors_aux()
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

 v5 = (unsigned int *)__x86_get_pc_thunk_di(*((int *)&v2), &v3);
 v9 = (unsigned int)v5;
 v8 = v9;
 v6 = (struct_0 *)0;
 ptr = (struct_0 *)((char *)v6 + 15359);
 v1 = v8;
 v0 = v9;
 if (*((unsigned char *)((char *)ptr + 140)))
 return v5;
 if (*((int *)((char *)ptr + 92)))
 sub_401170(g_404ff4);
 v10 = (struct_0 *)((char *)ptr + 712);
 v11 = *((int *)((char *)ptr + 144));
 i = ((char *)ptr + 708 - (char *)v10 >> 2) - 1;
 if (*((int *)((char *)ptr + 144)) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)((char *)ptr + 144)) = v13;
 (*((int *)&((char *)v10)[4 * v13]))();
 v11 = *((int *)((char *)ptr + 144));
 } while (*((int *)((char *)ptr + 144)) < i);
 }
 deregister_tm_clones();
 return 0;
}

// Function: sub_40140a at 0x40140a
void sub_40140a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401419
unsigned int __x86_get_pc_thunk_dx()
{
 unsigned int v0; // eax

 return v0;
}


// Function: __x86.get_pc_thunk_di at 0x40141d
unsigned int __x86_get_pc_thunk_di(int a0, void* a1)
{
 unsigned int v0; // eax

 return v0;
}


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
 sub_4011c0(&v0);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return;
 __stack_chk_fail_local();
}


// Function: _Z20test_cpp_constructorv at 0x4014b5
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *ptr; // eax

 ptr = sub_401210(20);
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

class Derived {
} Derived;

typedef void (*virtual_func_t)(void*, int);

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((virtual_func_t)(*(unsigned int*)*(unsigned int*)arg_0))(arg_0, arg_1);
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
 call_virtual_func((class Base*)(void*)v0, 5);
 call_virtual_func((class Base*)(void*)v1, 5);
 if (v3 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return;
 __stack_chk_fail_local();
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
 void *v0; // [bp-0x28]
 void *v1; // [bp-0x20]
 void *v2; // [bp-0x18]
 int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v6 = __x86_get_pc_thunk_ax();
 v4 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 v10 = v6 + 14275;
 v0 = (void *)v10;
 v2 = (void *)(v10 + 52);
 v1 = (void *)(v10 + 24);
 v3 = 50;
 thunk_to_DiamondDerived_func(&v2);
 v3 = 100;
 thunk_to_DiamondDerived_func(&v2);
 if (v4 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return;
 __stack_chk_fail_local();
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
 v2 = (unsigned int)(unsigned long)_ccall(v7, v8, v9, v10);
 v1 = v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100;
 if (v5 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return;
 __stack_chk_fail_local();
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
typedef union struct_0_ex {
 char padding_0[14556];
 unsigned int field_38dc;
} struct_0_ex;

void test_cpp_exception()
{
 struct_0_ex *v2; // esi
 struct_0_ex *v3; // esi
 unsigned int *ptr; // eax
 unsigned int v5; // eax
 unsigned int result; // edx
 unsigned int flag1; // edx
 unsigned int v8; // eax
 unsigned int v0; // [bp-0x20]

 __x86_get_pc_thunk_si();
 v2 = (struct_0_ex *)0;
 v3 = (struct_0_ex *)((char *)v2 + 14468);
 ptr = (unsigned int*)(void*)sub_4011b0(0);
 *(ptr) = 42;
 sub_401290((void*)ptr, (void*)(uintptr_t)*((int *)((char *)v3 + 88)), 0);
 if (result != 1)
 v0 = 0;
 for (; flag1 != 1; flag1 = result)
 {
 sub_4012a0((void*)(uintptr_t)v5);
 v0 = *((int *)sub_4011a0((void*)(uintptr_t)v5));
 sub_401250();
 sub_401280((void*)&v5);
 }
 sub_4011a0((void *)(uintptr_t)v5);
 sub_401280((void*)&v5);
 sub_401290((void*)sub_4011b0(0), (void *)((char *)v3 + 300), 0);
 if (result != 2)
 {
 if (result != 3)
 {
 sub_4012a0((void*)(uintptr_t)v8);
 }
 else
 {
 sub_4011a0((void *)(uintptr_t)v8);
 sub_401280((void*)&v8);
 return;
 }
 }
 sub_4011a0((void *)(uintptr_t)v8);
 sub_401280((void*)&v8);
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401806
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401810
typedef struct struct_2_t {
 char padding_0[4];
 struct struct_3_t *field_4;
} struct_2_t;

typedef struct struct_3_t {
 unsigned int field_0;
} struct_3_t;

typedef struct struct_5_t {
 char field_0;
} struct_5_t;

typedef struct struct_4_t {
 char padding_0[4];
 struct struct_5_t *field_4;
} struct_4_t;

extern struct_4 *addr;
extern char g_404dd4;
extern char g_404de8;
void __stack_chk_fail_local(void);

void test_cpp_rtti()
{
 void* *ptr; // edi
 struct_2_t **p; // ebp
 char *v5; // edi
 char *v6; // eax
 void* *v0; // [bp-0x24]
 void* v1; // [bp-0x20]

 ptr = (void* *)sub_401190();
 v0 = (void*)ptr;
 *(ptr) = (void*)&g_404dd4;
 p = (struct_2_t **)sub_401190();
 *(p) = (struct_2_t *)(void*)&g_404de8;
 v1 = *(ptr);
 v5 = *((char **)((char *)(unsigned long)*(ptr) + 4) + 4);
 if (v5 != (char*)"12RTTIDerivedA" && *(v5) != 42)
 {
 sub_4011f0((void*)v5, (char*)"12RTTIDerivedA");
 }
 v6 = addr->field_4;
 ((void (*)(void*))((char *)(unsigned long)v1 + 4))(v0);
 ((void (*)(void*))((char *)(unsigned long)*(p) + 8))((void*)p);
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
 sub_401180((void*)1, (void*)&g_40203c, (unsigned int)(void*)test_cpp_member_func);
 sub_401180((void*)1, (void*)&g_40205a, (unsigned int)(void*)test_cpp_constructor);
 sub_401180((void*)1, (void*)&g_402076, (unsigned int)(void*)test_cpp_virtual_func);
 sub_401180((void*)1, (void*)&g_402092, (unsigned int)(void*)test_cpp_multiple_inheritance);
 sub_401180((void*)1, (void*)&g_4020ae, (unsigned int)(void*)test_cpp_diamond_inheritance);
 sub_401180((void*)1, (void*)&g_4020cb, 22);
 sub_401180((void*)1, (void*)&g_4020e7, (unsigned int)(void*)test_cpp_template_func);
 sub_401180((void*)1, (void*)&g_402103, 16);
 sub_401180((void*)1, (void*)&g_40211f, 85);
 sub_401180((void*)1, (void*)&g_40213b, (unsigned int)(void*)test_cpp_exception);
 sub_401180((void*)1, (void*)&g_402158, (unsigned int)(void*)test_cpp_smart_ptr);
 sub_401180((void*)1, (void*)&g_402175, (unsigned int)(void*)test_cpp_rtti);
 return;
}


// Function: main at 0x401a75
unsigned int main()
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
 return sub_401180((void*)&_ZNSt8ios_base4InitD1Ev, (void*)&_ZStL8__ioinit, __dso_handle);
}


// Function: sub_401ac7 at 0x401ac7
void sub_401ac7(unsigned int a0, unsigned int a1)
{
 Base_virtual_func(0, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401ac8
void Base_virtual_func(void* _this, int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401ad4
void Base_getName(void* _this)
{
 __x86_get_pc_thunk_ax();
 return;
}


// Function: sub_401ae9 at 0x401ae9
void sub_401ae9()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401aea
int Base_destructor(void* _this)
{
 return 0;
}


// Function: sub_401aef at 0x401aef
void sub_401aef(unsigned int a0, unsigned int a1)
{
 Derived_virtual_func(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401af0
void Derived_virtual_func(void* _this, int arg_0)
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
void Derived_getName(void* _this)
{
 __x86_get_pc_thunk_ax();
 return;
}


// Function: sub_401b17 at 0x401b17
void sub_401b17()
{
 MultiDerived_funcA(0);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401b18
void MultiDerived_funcA(void* _this)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401b22
void MultiDerived_funcB(void* _this)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401b2c
void non_virtual_thunk_to_MultiDerived_funcB(void* _this)
{
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401b36
void MiddleA_func(void* _this)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401b4d
void thunk_to_MiddleA_func(void* *a0)
{
 (void)a0;
 return;
}


// Function: sub_401b69 at 0x401b69
void sub_401b69(unsigned int a0)
{
 MiddleB_func(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401b6a
void MiddleB_func(void* _this)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401b81
void thunk_to_MiddleB_func(void* *a0)
{
 (void)a0;
 return;
}


// Function: sub_401b9d at 0x401b9d
void sub_401b9d(unsigned int a0)
{
 DiamondDerived_func(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401b9e
void DiamondDerived_func(void* _this)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401bb5
void thunk_to_DiamondDerived_func(void* *a0)
{
 (void)a0;
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401bd1
void non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 (void)*((int *)((char*)a0 - 4 + *((int *)((char*)a0 + *((int*)((char*)a0 + 8) - 12))))) + 250;
 return;
}


// Function: sub_401be9 at 0x401be9
void sub_401be9()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401bea
void RTTIDerivedA_getType(void* _this)
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401bf4
void RTTIDerivedB_getType(void* _this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401bfe
int RTTIDerivedB_destructor(void* _this)
{
 return 0;
}


// Function: sub_401c03 at 0x401c03
void sub_401c03()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401c04
int RTTIDerivedA_destructor(void* _this)
{
 return 0;
}


// Function: sub_401c09 at 0x401c09
void sub_401c09()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401c0a
int DiamondDerived_destructor(void* _this)
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401c0f
void non_virtual_thunk_to_DiamondDerived_destructor(void* a0)
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401c14
void thunk_to_DiamondDerived_destructor(void)
{
 return;
}


// Function: sub_401c19 at 0x401c19
void sub_401c19()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401c1a
int MultiDerived_destructor(void* _this)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401c1f
void non_virtual_thunk_to_MultiDerived_destructor(void* a0)
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401c24
int Derived_destructor(void* _this)
{
 return 0;
}


// Function: sub_401c29 at 0x401c29
int sub_401c29()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401c2a
int Base_deleting_destructor(void* _this)
{
 sub_4011e0(_this, 4);
 return 0;
}


// Function: sub_401c4d at 0x401c4d
int sub_401c4d()
{
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x401c4e
int Derived_deleting_destructor(void* _this)
{
 sub_4011e0(_this, 8);
 return 0;
}


// Function: sub_401c71 at 0x401c71
int sub_401c71()
{
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401c72
int MultiDerived_deleting_destructor(void* _this)
{
 sub_4011e0(_this, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401c95
void non_virtual_thunk_to_MultiDerived_deleting_destructor(void* a0)
{
 sub_4011e0((void*)((char*)a0 - 8), 16);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401cbc
void RTTIDerivedA_deleting_destructor(void* _this)
{
 sub_4011e0(_this, 4);
 return;
}


// Function: sub_401cdf at 0x401cdf
int sub_401cdf()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401ce0
void RTTIDerivedB_deleting_destructor(void* _this)
{
 sub_4011e0(_this, 4);
 return;
}


// Function: sub_401d03 at 0x401d03
int sub_401d03()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401d04
void DiamondDerived_deleting_destructor(void* _this)
{
 sub_4011e0(_this, 24);
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x401d27
void thunk_to_DiamondDerived_deleting_destructor(void* *a0)
{
 sub_4011e0((void *)((char *)a0 + ((unsigned int*)(*(a0)))[16]), 24);
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401d50
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(void* a0)
{
 sub_4011e0((void*)((char*)a0 - 8), 24);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401d77
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}

double template_max_double(double arg_0, double arg_1)
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

 v0 = *((unsigned int *)ptr);
 *((unsigned int *)ptr) = *((unsigned int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: sub_401db3 at 0x401db3
void sub_401db3(unsigned int a0)
{
 Container<int>::Container();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401db4
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401dc4
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int* data = (unsigned int*)ptr;
 unsigned int index = *((unsigned int*)(void*)data[10]);

 if (index <= 9)
 {
 *((unsigned int*)(void*)data[10]) = index + 1;
 ((int*)((char*)ptr + 4 * index))[0] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401de2
int Container_int_get(void* this_ptr, int arg_0)
{
 unsigned int* data = (unsigned int*)this_ptr;
 unsigned int size = data[10];

 if (arg_0 < 0 || (int)size <= arg_0)
 {
 return 0;
 }
 return ((int*)((char*)this_ptr + 4 * arg_0))[0];
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401e02
int Container_int_getSize(void* this_ptr)
{
 return *((unsigned int *)((char *)this_ptr + 40));
}


// Function: _ZN9ContainerIdEC1Ev at 0x401e0e
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401e1e
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int* data = (unsigned int*)ptr;
 unsigned int index = *((unsigned int*)(void*)data[20]);

 if (index <= 9)
 {
 *((unsigned int*)(void*)data[20]) = index + 1;
 *(double*)((unsigned char*)ptr + 8 * index) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401e40
double Container_double_get(void* this_ptr, int arg_0)
{
 unsigned int* data = (unsigned int*)this_ptr;
 unsigned int size = *((unsigned int*)(void*)data[20]);

 if (arg_0 < 0 || (int)size <= arg_0)
 {
 return 0.0;
 }
 return *(double*)((unsigned char*)this_ptr + 8 * arg_0);
}


// Function: sub_401e5f at 0x401e5f
void sub_401e5f(unsigned int a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401e60
int Container_double_getSize(void* this_ptr)
{
 return *((unsigned int *)((char *)this_ptr + 80));
}


// Function: __x86.get_pc_thunk_ax at 0x401e6c
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return (unsigned int)*((int *)&v0);
}


// Function: __x86.get_pc_thunk_si at 0x401e70
unsigned int __x86_get_pc_thunk_si()
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401e74 at 0x401e74
int sub_401e74()
{
 __stack_chk_fail_local();
 return 0;
}


// Function: __stack_chk_fail_local at 0x401e80
void __stack_chk_fail_local()
{
 sub_401220();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_3 {
 unsigned int field_0;
} struct_3;

void __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v2 = (struct_0 *)0;
 ptr = (struct_0 *)((char *)v2 + 715);
 v4 = (unsigned int *)(*((int *)((char *)ptr + 720)));
 if (*((int *)((char *)ptr + 720)) == 0xffffffff)
 return;
 v0 = v5;
 v6 = (struct_0 *)((char *)ptr + 720);
 do
 {
 p = v6;
 ((void (*)(void))v4)();
 v4 = (unsigned int *)(*((int *)((char *)p + 4)));
 v6 = (struct_0 *)((char *)p + 4);
 } while (*((int *)((char *)p + 4)) != 0xffffffff);
 return;
}


// Function: sub_401ee2 at 0x401ee2
void sub_401ee2()
{
}



/* CRT stub function _fini removed by preprocessor */


