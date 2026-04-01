// Angr Decompilation of 3_gcc_O1_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

// Define struct_0 once with all fields
typedef struct struct_0 {
 char padding_0[80];
 unsigned int field_50;
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
 unsigned int field_24;
 unsigned int field_28;
 unsigned int field_2c;
 unsigned int field_30;
 unsigned int field_34;
 unsigned int field_38;
 unsigned int field_3c;
 unsigned int field_40;
 unsigned int field_44;
 unsigned int field_48;
} struct_0;

extern void (*g_405ff4)(void);
extern unsigned int g_403008;
extern unsigned int g_4030ea;
extern unsigned int g_4031ba;
extern unsigned int g_4031ca;
extern unsigned int g_4033bc;
extern unsigned int g_4033e4;
extern unsigned int g_403650;
extern unsigned int g_403428;

extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;

#define NULL ((void*)0)

// Forward declarations for x86 thunks (called with different arg counts in different contexts)
void get_pc_thunk_bx(void);
void get_pc_thunk_dx(void);
int get_pc_thunk_di(int);
unsigned int get_pc_thunk_ax(void);

int _init()
{
 if (void (*g_405ff4)(void))
 void (*g_405ff4)(void)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 goto ptr[2];
}


// Function: sub_401040 at 0x401040
int sub_401040()
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
int sub_401050()
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
int sub_401060()
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
int sub_401070()
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
int sub_401080()
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
int sub_401090()
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
int sub_4010a0()
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
int sub_4010b0()
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
int sub_4010c0()
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
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
 return;
}


// Function: sub_40113e at 0x40113e
int sub_40113e()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
int sub_401140(int a0)
{
 return sub_401030(8);
}


// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
int sub_401150()
{
 struct_0 *v1; // ebx

 return v1->field_c;
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 struct_0 *v1; // ebx

 return v1->field_10;
}


// Function: sub_40116a at 0x40116a
int sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170()
{
 struct_0 *v1; // ebx

 return v1->field_14;
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
int sub_401180()
{
 struct_0 *v1; // ebx

 return v1->field_18;
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 struct_0 *v1; // ebx

 return v1->field_1c;
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0()
{
 struct_0 *v1; // ebx

 return v1->field_20;
}


// Function: sub_4011aa at 0x4011aa
int sub_4011aa()
{
 sub_4011b0();
 return;
}


// Function: sub_4011b0 at 0x4011b0
int sub_4011b0()
{
 struct_0 *v1; // ebx

 return v1->field_24;
}


// Function: sub_4011ba at 0x4011ba
int sub_4011ba()
{
 sub_4011c0();
 return;
}


// Function: sub_4011c0 at 0x4011c0
int sub_4011c0()
{
 struct_0 *v1; // ebx

 return v1->field_28;
}


// Function: sub_4011ca at 0x4011ca
int sub_4011ca()
{
 sub_4011d0();
 return;
}


// Function: sub_4011d0 at 0x4011d0
int sub_4011d0()
{
 struct_0 *v1; // ebx

 return v1->field_2c;
}


// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0();
 return;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0()
{
 struct_0 *v1; // ebx

 return v1->field_30;
}


// Function: sub_4011ea at 0x4011ea
int sub_4011ea()
{
 sub_4011f0();
 return;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0()
{
 struct_0 *v1; // ebx

 return v1->field_34;
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 sub_401200();
 return;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 struct_0 *v1; // ebx

 return v1->field_38;
}


// Function: sub_40120a at 0x40120a
int sub_40120a()
{
 sub_401210();
 return;
}


// Function: sub_401210 at 0x401210
int sub_401210()
{
 struct_0 *v1; // ebx

 return v1->field_3c;
}


// Function: sub_40121a at 0x40121a
int sub_40121a()
{
 sub_401220();
 return;
}


// Function: sub_401220 at 0x401220
void sub_401220()
{
 struct_0 *v1; // ebx

 return;
}


// Function: sub_40122a at 0x40122a
int sub_40122a()
{
 sub_401230();
 return;
}


// Function: sub_401230 at 0x401230
int sub_401230()
{
 struct_0 *v1; // ebx

 return v1->field_44;
}


// Function: sub_40123a at 0x40123a
int sub_40123a()
{
 sub_401240();
 return;
}


// Function: sub_401240 at 0x401240
int sub_401240()
{
 struct_0 *v1; // ebx

 return v1->field_48;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40127c at 0x40127c
void sub_40127c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401280
void get_pc_thunk_bx()
{
 return;
}


// Function: sub_401284 at 0x401284
void sub_401284()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 get_pc_thunk_dx();
 return (char *)&ptr[4959] + 3;
}


// Function: sub_4012c3 at 0x4012c3
void sub_4012c3()
{
}


// Function: sub_4012c9 at 0x4012c9
void sub_4012c9()
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

 get_pc_thunk_dx();
 v3 = &v2->padding_0[19659];
 v0 = v4;
 if (!(&v3->padding_0[116] - &v3->padding_0[116] >> 31) + (&v3->padding_0[116] - &v3->padding_0[116] >> 2) >> 1)
 {
 return (&v3->padding_0[116] - &v3->padding_0[116] >> 31) + (&v3->padding_0[116] - &v3->padding_0[116] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[92]))
 {
 return (*((int *)&v3->padding_0[92]))(&v3->padding_0[116], (&v3->padding_0[116] - &v3->padding_0[116] >> 31) + (&v3->padding_0[116] - &v3->padding_0[116] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[116] - &v3->padding_0[116] >> 31) + (&v3->padding_0[116] - &v3->padding_0[116] >> 2) >> 1;
 }
}


// Function: sub_401317 at 0x401317
void sub_401317()
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

 v5 = get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_0[19571];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[116])
 return v5;
 if (*((int *)&ptr->padding_0[80]))
 sub_401140(*((int *)&ptr->padding_0[100]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[120]);
 i = (&ptr->padding_0[220] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[120]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[120]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[120]);
 } while (*((int *)&ptr->padding_0[120]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[116] = 1;
 return v14;
}


// Function: sub_4013aa at 0x4013aa
void sub_4013aa()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x4013b9
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: get_pc_thunk_di at 0x4013bd
int get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: double_value at 0x4013c1
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x4013cc
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x4013d9
unsigned int local_array(unsigned int a0)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int *cur; // eax
 unsigned int v7; // edx
 unsigned int v0; // [bp-0x38]
 char v1; // [bp-0x24]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 cur = &v0;
 v7 = 0;
 do
 {
 *(cur) = v7;
 v7 += a0;
 cur += 1;
 } while (cur != &v2);
 if (v2 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return *((int *)&v1);
 __stack_chk_fail_local();
}


// Function: local_struct at 0x401424
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x401430
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x401444
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x401451
int large_stack_frame()
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int i; // eax
 unsigned long v6; // [bp-0x810]
 unsigned int v0; // [bp-0x10]

 v0 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 i = 0;
 do
 {
 *((char *)&v6 + i) = i;
 i += 1;
 } while (i != 0x800);
 if (v0 == *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 return;
 __stack_chk_fail_local();
}


// Forward declaration for alloca_usage
unsigned int alloca_usage(unsigned int i);

// Function: vla_stack at 0x40149c
unsigned int vla_stack(unsigned int a0)
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int v5; // eax
 unsigned int result; // eax
 unsigned int ptr; // edx
 unsigned int idx; // eax
 unsigned int v9; // eax
 unsigned long v10; // [bp-0x101c]
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x10]
 char *vvar_68;

 char *vvar_35 = &v0;
 v1 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 if (a0 - 1 <= 999)
 {
 v5 = a0 * 4 + 15;
 while (&v10 != &(&v0)[-1 * (v5 & 0xfffff000)])
 ;
 result = v5 & 0xfffffff0 & 4095;
 vvar_68 = (char *)&v10 - result;
 if (result)
 *((int *)(vvar_68 + result - 4)) = *((int *)(vvar_68 + result - 4));
 ptr = vvar_68;
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 2)) = idx;
 idx += 2;
 } while (idx != a0 * 2);
 v9 = *((int *)(ptr + ((a0 >> 31) + a0 >> 1) * 4));
 }
 else
 {
 v9 = 4294967295;
 }
 if (v1 == *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 return v9;
 *((void* *)(vvar_68 - 4)) = alloca_usage;
 __stack_chk_fail_local();
}


// Function: alloca_usage at 0x401537
 unsigned int alloca_usage(unsigned int i)
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int v5; // eax
 unsigned int result; // eax
 unsigned int ptr; // ebx
 unsigned int idx; // eax
 unsigned int v9; // eax
 unsigned long v10; // [bp-0x101c]
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x10]
 char *vvar_68;

 char *vvar_36 = &v0;
 v1 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 if (i > 0)
 {
 v5 = i * 4 + 27;
 while (&v10 != &(&v0)[-1 * (v5 & 0xfffff000)])
 ;
 result = v5 & 0xfffffff0 & 4095;
 vvar_68 = (char *)&v10 - result;
 if (result)
 *((int *)(vvar_68 + result - 4)) = *((int *)(vvar_68 + result - 4));
 ptr = vvar_68 + 15 & 0xfffffff0;
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 idx += 1;
 } while (i != idx);
 v9 = *((int *)(ptr + (idx + (idx >> 31) >> 1) * 4));
 }
 else
 {
 v9 = 4294967295;
 }
 if (v1 == *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 return v9;
 *((void* *)(vvar_68 - 4)) = alloca_usage;
 __stack_chk_fail_local();
}


// Function: stack_alias at 0x4015d1
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x4015db
extern unsigned int g_403008;

int test_stack_memory()
{
 sub_4011f0(&g_403008);
 sub_401220(1, "MEM-L1-01 (local_vars): %d\n", 20);
 sub_401220(1, "MEM-L1-02 (local_array): %d\n", local_array(2));
 sub_401220(1, "MEM-L1-03 (local_struct): %d\n", 15);
 sub_401220(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 sub_401220(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 sub_401220(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame(1, "MEM-L1-05 (address_of_array): %d\n", 2));
 sub_401220(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 sub_401220(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 return sub_401220(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x4016cf
unsigned int heap_basic(unsigned int a0)
{
 unsigned int result; // eax
 unsigned int ptr; // edx
 unsigned int idx; // eax

 result = sub_4011e0(a0 * 4);
 if (!result)
 return 4294967295;
 ptr = result;
 if (a0 > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 2)) = idx;
 idx += 2;
 } while (idx != a0 * 2);
 }
 sub_401170((struct_0*)ptr);
 return *((int *)(ptr + ((a0 >> 31) + a0 >> 1) * 4));
}


// Function: heap_calloc at 0x40173a
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int *result; // eax
 unsigned int v1; // esi
 unsigned int *ptr; // edx

 result = sub_401240(a0, 4);
 if (!result)
 return 4294967295;
 if (a0 > 0)
 {
 v1 = 0;
 ptr = result;
 do
 {
 v1 += *(ptr);
 ptr += 1;
 } while (ptr != &result[a0]);
 }
 else
 {
 v1 = 0;
 }
 sub_401170(result);
 return v1;
}


// Function: heap_realloc at 0x40179a
unsigned int heap_realloc()
{
 unsigned int *ptr; // eax
 unsigned int *p; // eax
 unsigned int v3; // esi

 ptr = (unsigned int*)sub_4011e0(20);
 if (!ptr)
 return 4294967295;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 p = sub_4011d0(ptr, 40);
 if (!p)
 {
 sub_401170(ptr);
 return 4294967294;
 }
 p[5] = 50;
 p[6] = 60;
 p[7] = 70;
 p[8] = 80;
 p[9] = 90;
 v3 = 4294967293;
 if (p[2] == 3)
 v3 = 50;
 sub_401170(p);
 return v3;
}


// Function: heap_array at 0x401859
unsigned int heap_array(unsigned int i)
{
 unsigned int result; // eax
 unsigned int ptr; // ecx
 unsigned int idx; // eax

 result = sub_4011e0(i * 4);
 if (!result)
 return 4294967295;
 ptr = result;
 if (i > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 idx += 1;
 } while (i != idx);
 }
 sub_401170(ptr);
 return *((int *)(ptr + ((i >> 31) + i >> 1) * 4));
}


// Function: heap_struct at 0x4018c4
unsigned int heap_struct(unsigned int a0)
{
 unsigned int result; // eax

 result = sub_4011e0(8);
 if (!result)
 return 4294967295;
 sub_401170(result);
 return a0 * 3;
}


// Function: heap_nested at 0x401908
typedef struct struct_2_inner_inner {
 unsigned int field_0;
 struct struct_3_inner_inner *field_4;
} struct_2_inner_inner;

typedef struct struct_2_inner {
 unsigned int field_0;
 struct struct_3 *field_4;
} struct_2_inner;

typedef struct struct_1_inner {
 unsigned int field_0;
 unsigned int field_4;
} struct_1_inner;

typedef struct struct_3_inner_inner {
 unsigned int field_0;
 unsigned int field_4;
} struct_3_inner_inner;

unsigned int heap_nested(struct_2_inner **addr)
{
 struct_0 *ptr; // esi
 unsigned int p[2]; // eax

 ptr = sub_4011e0(8);
 *(addr) = ptr;
 if (!ptr)
 return 4294967295;
 ptr->field_0 = 10;
 p = sub_4011e0(8);
 ptr->field_4 = p;
 if (!p)
 {
 sub_401170(ptr);
 return 4294967294;
 }
 p[0] = 20;
 p[1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x40197e
typedef struct struct_ll_node {
 unsigned int field_0;
 struct struct_ll_node *field_4;
} struct_ll_node;

unsigned int linked_list_heap()
{
 unsigned int i; // edi
 struct_ll_node *v2; // eax
 struct_ll_node *v10; // esi
 struct_ll_node *ptr4; // esi
 struct_ll_node *v12; // esi
 struct_ll_node *addr; // eax
 struct_ll_node *p; // eax
 struct_ll_node *ptr3; // esi
 struct_ll_node *v6; // esi
 unsigned int v7; // edi
 struct_ll_node *ptr; // eax

 i = 0;
 v2 = NULL;
 v10 = NULL;
 do
 {
 addr = v2;
 p = sub_4011e0(8);
 if (!p)
 {
 if (v10)
 {
 do
 {
 ptr3 = v10;
 v6 = ptr3->field_4;
 sub_401170(ptr3);
 v10 = v6;
 } while (ptr3->field_4);
 return 4294967295;
 }
 else
 {
 return 4294967295;
 }
 }
 p->field_0 = i;
 p->field_4 = NULL;
 if (!v10)
 v10 = p;
 else
 addr->field_4 = p;
 i += 10;
 v2 = p;
 } while (i != 50);
 if (!v10)
 return 0;
 v7 = 0;
 ptr = v10;
 do
 {
 v7 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 do
 {
 ptr4 = v10;
 v12 = ptr4->field_4;
 sub_401170(ptr4);
 v10 = v12;
 } while (ptr4->field_4);
 return v7;
}


// Function: create_tree_node at 0x401a35
void create_tree_node(unsigned int a0)
{
 unsigned int ptr[3]; // eax

 ptr = sub_4011e0(12);
 if (!ptr)
 return;
 ptr[0] = a0;
 ptr[1] = 0;
 ptr[2] = 0;
 return;
}


// Function: tree_heap_traversal at 0x401a6f
typedef struct struct_tree_node {
 unsigned int field_0;
 struct struct_tree_child1 *field_4;
 struct struct_tree_child2 *field_8;
} struct_tree_node;

typedef struct struct_tree_child1 {
 unsigned int field_0;
} struct_tree_child1;

typedef struct struct_tree_child2 {
 unsigned int field_0;
} struct_tree_child2;

unsigned int tree_heap_traversal()
{
 struct_tree_node *flag1; // eax
 struct_tree_node *ptr; // esi
 struct_tree_node *flag2; // eax
 struct_tree_node *result; // edx

 flag1 = (struct_tree_node*)create_tree_node(10);
 if (!flag1)
 return 4294967295;
 ptr = flag1;
 ptr->field_4 = (struct struct_tree_child1*)create_tree_node(20);
 flag2 = (struct_tree_node*)create_tree_node(30);
 ptr->field_8 = (struct struct_tree_child2*)flag2;
 result = ptr->field_4;
 if (flag2 && result)
 {
 sub_401170((struct_0*)result);
 sub_401170((struct_0*)ptr->field_8);
 sub_401170((struct_0*)ptr);
 return *(unsigned int*)result + ptr->field_0 + *(unsigned int*)flag2;
 }
 if (result)
 sub_401170((struct_0*)result);
 if (ptr->field_8)
 sub_401170((struct_0*)ptr->field_8);
 sub_401170((struct_0*)ptr);
 return 4294967294;
}


// Function: memory_leak at 0x401b2a
unsigned int memory_leak(unsigned int i)
{
 unsigned int ptr; // eax
 unsigned int idx; // edx

 ptr = sub_4011e0(i * 4);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return *((int *)(ptr + ((i >> 31) + i >> 1) * 4));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while (i != idx);
 return *((int *)(ptr + ((i >> 31) + i >> 1) * 4));
}


// Function: dangling_pointer at 0x401b82
unsigned int dangling_pointer()
{
 unsigned int *result; // eax

 result = sub_4011e0(4);
 if (!result)
 return 4294967295;
 sub_401220(1, "value before free: %d\n", 42);
 sub_401170(result);
 return *(result);
}


// Function: double_free at 0x401bd3
unsigned int double_free(unsigned int *a0)
{
 unsigned int result; // eax

 if (a0)
 return *(a0);
 result = sub_4011e0(4);
 if (!result)
 return 4294967295;
 sub_401170(result);
 sub_401170(result);
 return 4294967294;
}


// Function: heap_overflow at 0x401c2c
unsigned int heap_overflow()
{
 unsigned int *result; // eax
 unsigned int i; // edx
 unsigned int *ptr; // ecx

 result = sub_4011e0(40);
 if (!result)
 return 4294967295;
 i = 0;
 ptr = result;
 do
 {
 *(ptr) = i;
 i += 100;
 ptr += 1;
 } while (i != 1100);
 sub_401170(result);
 return *(result);
}


// Function: test_heap_memory at 0x401c82

extern unsigned int g_4030ea;
extern unsigned int g_4031ba;
extern unsigned int g_4031ca;
extern unsigned int g_4033bc;
extern unsigned int g_4033e4;

int test_heap_memory()
{
 unsigned int v6; // ebx
 unsigned long v7; // ldt
 unsigned int flag1; // eax
 unsigned int v20; // eax
 unsigned int v21; // edx
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v0; // [bp-0x20]
 struct_0 *result; // [bp-0x18]
 char v2; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0x4]

 v4 = v6;
 v3 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 sub_4011f0(&g_4030ea);
 sub_401220(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 sub_401220(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 sub_401220(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 sub_401220(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 sub_401220(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));
 result = NULL;
 sub_401220(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result));
 if (result)
 {
 sub_401170(result->field_4);
 sub_401170(result);
 }
 sub_401220(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 sub_401220(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 sub_401220(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
 sub_401220(1, "HEAP-L3-04 (dangling_pointer): ");
 flag1 = sub_401230(1, "HEAP-L3-04 (dangling_pointer): ");
 if (!flag1)
 {
 sub_401220(1, &g_4031ba, dangling_pointer());
 v20 = sub_401200(0);
LABEL_401e55:
 sub_401220(1, &g_4033bc, v20 >> 8 & 255);
 }
 else if (!((char)_ccall(14, 15, flag1, 0, 0)))
 {
 sub_4011c0(flag1, &v2, 0);
 v20 = v2;
 v21 = v20;
 if (!(v21 & 127))
 goto LABEL_401e55;
 if (((char)v20 & 127) + 1 > 1)
 sub_401220(1, &g_4033e4, v21 & 127);
 }
 else
 {
 sub_4011b0(&g_4031ca);
 }
 if (v0 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return v0 - *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 __stack_chk_fail_local();
}


// Function: global_var_access at 0x401e98
typedef struct struct_0_gva {
 char padding_0[16775];
 unsigned int field_4187;
} struct_0_gva;

int global_var_access()
{
 struct_0_gva *v1; // edx
 struct_0_gva *ptr; // edx
 unsigned int v3; // eax

 get_pc_thunk_dx();
 ptr = &v1->padding_0[16639];
 v3 = *((int *)&ptr->padding_0[136]);
 *((unsigned int *)&ptr->padding_0[136]) = v3 + 1;
 return v3 + 1;
}


// Function: global_var_read at 0x401eb7
unsigned int global_var_read()
{
 return *((int *)(get_pc_thunk_ax() + 16744)) * 2;
}


// Function: global_array_access at 0x401ece
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // edx

 get_pc_thunk_dx();
 if (a0 > 9)
 return 4294967295;
 return *((int *)(v0 + 16585 + a0 * 4 - 0x2900));
}


// Function: static_local at 0x401ef4
unsigned int static_local(unsigned int a0)
{
 struct_0 *v0; // edx
 struct_0 *ptr; // edx
 unsigned int v2; // eax

 get_pc_thunk_dx();
 ptr = &v0->padding_0[16547];
 v2 = 0;
 if (!a0)
 v2 = *((int *)&ptr->padding_0[128]) + 1;
 *((unsigned int *)&ptr->padding_0[128]) = v2;
 return v2;
}


// Function: call_static_func at 0x401f1f
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x401f2c
int access_extern_global()
{
 return *((int *)(get_pc_thunk_ax() + 16603)) + 100;
}


// Function: call_extern_func at 0x401f46
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: read_const_data at 0x401f65
typedef struct struct_1_read {
 char padding_0[16542];
 struct struct_0_read *field_409e;
} struct_1_read;

typedef struct struct_0_read {
 char padding_0[4];
 char field_4;
} struct_0_read;

int read_const_data()
{
 struct_1_read *v1; // eax

 v1 = get_pc_thunk_ax();
 return *((char *)(*((int *)&(&v1->padding_0)[1]) + 4)) + 42;
}


// Function: access_bss_var at 0x401f81
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401f8b
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401f95
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x401f9f
typedef struct struct_0_sfs {
 char padding_0[16480];
 unsigned int field_4060;
} struct_0_sfs;

struct_0 * set_file_static(unsigned int a0)
{
 *((unsigned int *)(get_pc_thunk_ax() + 16480)) = a0;
 return get_pc_thunk_ax() + 16376;
}


// Function: get_file_static at 0x401fb8
int get_file_static()
{
 return *((int *)(get_pc_thunk_ax() + 16455));
}


// Function: set_global_callback at 0x401fcd
typedef struct struct_0_gcb {
 char padding_0[16462];
 unsigned int field_404e;
} struct_0_gcb;

struct_0_gcb * set_global_callback(unsigned int a0)
{
 *((unsigned int *)(get_pc_thunk_ax() + 16462)) = a0;
 return get_pc_thunk_ax() + 16330;
}


// Function: call_global_callback at 0x401fe6
typedef struct struct_0 {
 char padding_0[16437];
 struct struct_1 *field_4035;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int call_global_callback(unsigned int a0)
{
 struct_0 *v0; // eax

 v0 = get_pc_thunk_ax();
 if (!*((int *)&(&v0->padding_0)[1]))
 return 4294967295;
 return (*((int *)&(&v0->padding_0)[1]))(a0);
}


// Function: global_heap_store at 0x402011
unsigned int global_heap_store(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x402026
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x402030
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x40203b
unsigned int init_order_test()
{
 *((unsigned int *)(get_pc_thunk_ax() + 16344)) = 20;
 return 20;
}


// Function: test_static_global at 0x402059
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned int g_403428;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;

int test_static_global()
{
 sub_4011f0(&g_403428);
 sub_401220(1, "STM-L1-01 (global_var_access): %d\n", global_var_access());
 sub_401220(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 sub_401220(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 sub_401220(1, "STM-L1-03 (static_local): %d\n", 1);
 counter_1 = counter_1 + 1;
 sub_401220(1, "STM-L1-03 (static_local): %d\n", counter_1);
 sub_401220(1, "STM-L1-04 (call_static_func): %d\n", 11);
 sub_401220(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 sub_401220(1, "STM-L2-02 (call_extern_func): %d\n", (unsigned int)call_extern_func());
 sub_401220(1, "STM-L2-03 (read_const_data): %d\n", read_const_data());
 sub_401220(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 sub_401220(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 sub_401220(1, "STM-L2-05 (global_struct_access): %d\n", global_struct_access());
 file_scope_static = 50;
 sub_401220(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 sub_401220(1, "STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5));
 sub_401220(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 sub_401220(1, "STM-L2-09 (static_complex_init): %d\n", static_complex_init());
 sub_401220(1, "STM-L3-01 (tls_access): %d\n", 20);
 return sub_401220(1, "STM-L3-02 (init_order_test): %d\n", init_order_test());
}


// Function: memop_memset at 0x402231
unsigned int memop_memset(char *a0, unsigned int a1, unsigned int a2)
{
 if (a0 && a1)
 {
 sub_401210(a0, a2, a1);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_memcpy at 0x402276
unsigned int memop_memcpy(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a1 && a2 && a0)
 {
 sub_401180(a0, a1, a2);
 return *((int *)(a0 + (a2 & 0xfffffffc) - 4));
 }
 return 4294967295;
}


// Function: memop_memmove at 0x4022c6
typedef struct struct_0_mm {
 char padding_0[1];
 char field_1;
} struct_0_mm;

unsigned int memop_memmove(struct_0 *a0, unsigned int a1)
{
 if (a0 && a1 > 1)
 {
 sub_401160((struct struct_0 *)&a0->field_1, a0, a1 - 1);
 return a0->field_1;
 }
 return 4294967295;
}


// Function: memop_memcmp at 0x402310
unsigned int memop_memcmp(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // eax

 if (a1 && a2 && a0)
 {
 v0 = sub_401190(a0, a1, a2);
 return (v0 <= 0 ? v0 >> 31 : 1);
 }
 return 0;
}


// Function: memop_bzero at 0x402364
unsigned int memop_bzero(char *a0, unsigned int a1)
{
 if (!a0)
 return 4294967295;
 sub_401210(a0, 0, a1);
 return *(a0);
}


// Function: memop_bcopy at 0x4023a2
unsigned int memop_bcopy(unsigned int a0, char *a1, unsigned int a2)
{
 char v0; // [bp-0xc]

 get_pc_thunk_di(*((int *)&v0));
 if (a1 && a2 && a0)
 {
 sub_401160(a1, a0, a2);
 return *(a1);
 }
 return 4294967295;
}


// Function: memop_unaligned_access at 0x4023f0
typedef struct struct_0 {
 char padding_0[1];
 unsigned int field_1;
} struct_0;

unsigned int memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x402406
unsigned int memop_memory_barrier(unsigned int *a0)
{
 char v0; // [bp+0x0]

 if (!a0)
 return 4294967295;
 atomic_exchange(&v0, *((int *)&v0));
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x402424
extern unsigned int g_403650;

int test_memory_op_functions()
{
 unsigned long v21; // ldt
 unsigned long v22; // gdt
 unsigned short v23; // gs
 char v0[20]; // [bp-0x188]
 unsigned int v1[1]; // [bp-0x174]
 unsigned int result; // [bp-0x170]
 unsigned int v3; // [bp-0x16c]
 unsigned int v4; // [bp-0x168]
 unsigned int flag1; // [bp-0x164]
 unsigned int v6; // [bp-0x160]
 unsigned int v7; // [bp-0x15c]
 unsigned int v8; // [bp-0x158]
 unsigned int v9; // [bp-0x154]
 unsigned int v10; // [bp-0x150]
 unsigned int v11; // [bp-0x14c]
 unsigned int v12; // [bp-0x148]
 char v13; // [bp-0x144]
 unsigned int v14; // [bp-0x12d]
 char flag2[4]; // [bp-0x129]
 char v16[10]; // [bp-0x125]
 char v17; // [bp-0x11b]
 char v18[256]; // [bp-0x110]
 unsigned int v19; // [bp-0x10]

 v19 = *((int *)_ccall(v21, v22, (unsigned int)v23, 20));
 sub_4011f0(&g_403650);
 v8 = 10;
 v9 = 20;
 v10 = 30;
 v11 = 40;
 v12 = 50;
 memset(&v13, 0, 20);
 sub_401220(1, "MEMOP-L2-01: %d\n", memop_memset(&v18, 10, 65));
 sub_401220(1, "MEMOP-L2-02: %d\n", memop_memcpy(&v13, &v8, 20));
 strncpy(&v17, "HelloWorld", 10);
 strncpy(v0, "\n", 1);
 sub_401220(1, "MEMOP-L2-03: %c\n", memop_memmove(&v17, 10));
 result = 1;
 v3 = 2;
 v4 = 3;
 flag1 = 1;
 v6 = 2;
 v7 = 4;
 sub_401220(1, "MEMOP-L2-04: %d\n", memop_memcmp(&result, &flag1, 12));
 sub_401220(1, "MEMOP-L2-05: %d\n", memop_bzero(&v16, 10));
 v14 = 67305985;
 *(&flag2) = 0;
 sub_401220(1, "MEMOP-L2-06: %d\n", memop_bcopy(&v14, &flag2, 4));
 sub_401220(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 *((unsigned int [1])v1) = 5;
 sub_401220(1, "MEMOP-L3-02: %d\n", memop_memory_barrier(&v1));
 if (v19 == *((int *)_ccall(v21, v22, (unsigned int)v23, 20)))
 return v19 - *((int *)_ccall(v21, v22, (unsigned int)v23, 20));
 __stack_chk_fail_local();
}


// Function: main at 0x402635
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: __x86.get_pc_thunk_ax at 0x40265a
unsigned int get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: extern_function at 0x40265e
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_40266a at 0x40266a
int sub_40266a()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402670
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4011a0();
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

 get_pc_thunk_dx();
 ptr = &v2[1]_padding_0[227];
 v4 = *((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_4026d2 at 0x4026d2
void sub_4026d2()
{
}



/* CRT stub function _fini removed by preprocessor */


