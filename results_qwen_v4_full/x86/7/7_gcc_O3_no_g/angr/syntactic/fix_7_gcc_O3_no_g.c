// Angr Decompilation of 7_gcc_O3_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 char padding_0[256];
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
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
 unsigned int field_4c;
 unsigned int field_50;
 unsigned int field_54;
 unsigned int field_58;
 unsigned int field_5c;
 unsigned int field_60;
 unsigned int field_64;
 unsigned int field_68;
 unsigned int field_6c;
 unsigned int field_70;
 unsigned int field_74;
 unsigned int field_78;
 unsigned int field_7c;
 unsigned int field_80;
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
} struct_0;

extern struct_0 *g_403ff4;

extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;
extern unsigned int segv_buffer;
extern unsigned int segv_caught;
extern char encrypted_0[];
extern unsigned int g_402008;
extern unsigned int g_402038;
extern unsigned int g_402064;
extern unsigned int g_40208c;
extern unsigned int g_4020b4;
extern unsigned int g_4020d4;
extern unsigned int g_402108;
extern unsigned int g_40212f;
extern unsigned int g_402167;
extern unsigned int g_402184;
extern unsigned int g_4021a0;
extern unsigned int g_4021bc;
extern unsigned int g_4021d9;
extern unsigned int g_4021f6;

extern int _ccall(unsigned long, unsigned long, unsigned int, unsigned int);

// Forward declarations for CRT functions
void frame_dummy(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);

int _init()
{
 if (g_403ff4)
 ((void(*)())g_403ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int a0)
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
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
int sub_4010ee()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_3c))();
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_c))();
}


// Function: sub_40110a at 0x40110a
int sub_40110a()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
int sub_401110(unsigned int *a0)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_10))();
}


// Function: sub_40111a at 0x40111a
int sub_40111a()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
int sub_401120(unsigned int a0)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_14))();
}


// Function: sub_40112a at 0x40112a
int sub_40112a()
{
 sub_401130();
 return;
}


// Function: sub_401130 at 0x401130
int sub_401130(unsigned int a0, void *a1)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_18))();
}


// Function: sub_40113a at 0x40113a
int sub_40113a()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
int sub_401140(void)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_1c))();
}


// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
int sub_401150(unsigned int a0)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_20))();
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
int sub_401160(unsigned int *a0)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_24))();
}


// Function: sub_40116a at 0x40116a
int sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170(char *a0)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_28))();
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
int sub_401180(char *a0, char *a1, unsigned int a2)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_2c))();
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190(unsigned int a0, unsigned int *a1, unsigned int a2)
{
 struct_0 *v1; // ebx

 v1 = g_403ff4;
 return ((int(*)())(v1->field_30))();
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

 v1 = g_403ff4;
 return ((int(*)())(v1->field_34))();
}


// Function: sub_4011aa at 0x4011aa
void sub_4011aa()
{
 main();
 return;
}


// Function: main at 0x4011b0
int main()
{
 char v0; // [bp+0x0]

 test_obf_opt_edge(&v0);
 return 0;
}


// Function: sub_4011c3 at 0x4011c3
void sub_4011c3()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011fc at 0x4011fc
void sub_4011fc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401200
void __x86.get_pc_thunk_bx()
{
 return;
}


// Function: sub_401204 at 0x401204
void sub_401204()
{
 deregister_tm_clones();
 return;
}






// Function: sub_401243 at 0x401243
void sub_401243()
{
}


// Function: sub_401249 at 0x401249
void sub_401249()
{
 register_tm_clones();
 return;
}


// Function: sub_401297 at 0x401297
void sub_401297()
{
 __do_global_dtors_aux();
 return;
}


// Function: sub_40132a at 0x40132a
void sub_40132a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401339
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40133d
int __x86.get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401341 at 0x401341
int sub_401341()
{
 div_zero_handler();
 return;
}


// Function: div_zero_handler at 0x401350
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int sub_4011a0(unsigned int *a0, unsigned int a1);
int segv_handler(unsigned int *a0, unsigned int a1);
int div_zero_handler(void);

int div_zero_handler(void)
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 div_zero_caught = 1;
 sub_4011a0((unsigned int *)&jmp_buffer, 1);
 segv_handler((unsigned int *)&jmp_buffer, 1);
 return;
}


// Function: segv_handler at 0x401380
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int sub_4011a0(unsigned int *a0, unsigned int a1);
int param_division_by_zero_constprop_0(unsigned int *a0, unsigned int a1);

int segv_handler(unsigned int *a0, unsigned int a1)
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 segv_caught = 1;
 sub_4011a0((unsigned int *)&segv_buffer, 1);
 param_division_by_zero_constprop_0((unsigned int *)&segv_buffer, 1);
 return;
}


// Function: param_division_by_zero_constprop_0 at 0x4013b0
extern unsigned int jmp_buffer;

int sub_401130(unsigned int a0, void *a1);
int sub_401110(unsigned int *a0);

int param_division_by_zero_constprop_0(unsigned int *a0, unsigned int a1)
{
 sub_401130(8, div_zero_handler);
 if (!sub_401110(&jmp_buffer))
 return 0;
 return 4294967295;
}


// Function: sub_4013e7 at 0x4013e7
void sub_4013e7()
{
 char *ptr; // eax

 *(ptr) = *(ptr) + (char)ptr;
}


// Function: sub_4013fa at 0x4013fa
int sub_4013fa()
{
 param_division_by_zero_constprop_1();
 return;
}


// Function: param_division_by_zero_constprop_1 at 0x401400
extern unsigned int jmp_buffer;

int param_division_by_zero_constprop_1()
{
 sub_401130(8, div_zero_handler);
 return (-(sub_401110(&jmp_buffer) < 1) & 3) - 1;
}


// Function: sub_40143f at 0x40143f
void sub_40143f(unsigned int a0)
{
 param_fake_branch();
 return;
}


// Function: param_fake_branch at 0x401440
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: sub_401449 at 0x401449
void sub_401449()
{
 call_fake_branch();
 return;
}


// Function: call_fake_branch at 0x401450
int call_fake_branch()
{
 return 10;
}


// Function: sub_40145a at 0x40145a
int sub_40145a()
{
 param_opaque_predicate();
 return;
}


// Function: param_opaque_predicate at 0x401460
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v0; // ebx
 unsigned int flag2; // edx
 unsigned int v2; // eax
 unsigned int flag1; // edx
 unsigned int result; // ecx

 v0 = a0;
 flag2 = v0 + 1;
 if (flag2)
 {
 v2 = v0;
 flag1 = flag2;
 do
 {
 result = flag1;
 v2 = result;
 flag1 = ((int)((v2 >> 31) % result)) >> 32;
 } while (flag1);
 if (result == 1 && v0 * 2 + v0 * v0 + 1 == flag2 * flag2)
 return v0 * 2 + 10;
 }
 return v0 * 3 + 20;
}


// Function: sub_4014ae at 0x4014ae
void sub_4014ae()
{
}


// Function: sub_4014b9 at 0x4014b9
int sub_4014b9()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x4014c0
int call_opaque_predicate()
{
 unsigned int flag1; // edx
 unsigned int v2; // eax
 unsigned int result; // ecx

 flag1 = 6;
 v2 = 5;
 do
 {
 result = flag1;
 flag1 = v2 % result;
 v2 = result;
 } while (flag1);
 if (result == 1)
 return 20;
 return 35;
}


// Function: sub_4014ed at 0x4014ed
void sub_4014ed(unsigned int a0)
{
 param_instruction_substitution();
 return;
}


// Function: param_instruction_substitution at 0x4014f0
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: sub_401512 at 0x401512
void sub_401512()
{
 call_instruction_substitution();
 return;
}


// Function: call_instruction_substitution at 0x401520
int call_instruction_substitution()
{
 return 225;
}


// Function: sub_40152a at 0x40152a
int sub_40152a()
{
 decrypt_string();
 return;
}


// Function: decrypt_string at 0x401530
int decrypt_string(void)
{
 return 0;
}


// Function: sub_401589 at 0x401589
int sub_401589()
{
 param_string_encryption();
 return;
}


// Function: param_string_encryption at 0x401590
int param_string_encryption(void)
{
 unsigned long v5 = 0;
 unsigned long v6 = 0;
 unsigned int v7 = 0;
 char *cur;
 char v9;
 char flag1;
 unsigned int v11;
 char v0;
 char buffer[32];
 char result;
 unsigned int v3;

 v3 = _ccall(v5, v6, v7, 20);
 cur = buffer;
 sub_401180(buffer, encrypted_0, 31);
 v9 = buffer[0];
 result = 0;
 flag1 = v9;
 if (flag1)
 {
  do
  {
   cur = cur + 1;
   *cur = v9 ^ 90;
   v9 = *cur;
  } while (*cur);
  flag1 = buffer[0];
 }
 v0 = flag1;
 v11 = sub_401170(buffer);
 if (v3 != _ccall(v5, v6, v7, 20))
 {
  __stack_chk_fail_local();
  return call_string_encryption();
 }
 return v11 + v0;
}


// Function: call_string_encryption at 0x401630
int call_string_encryption(void)
{
 unsigned long v5 = 0;
 unsigned long v6 = 0;
 unsigned int v7 = 0;
 char *cur;
 char v9;
 char flag1;
 unsigned int v11;
 char v0;
 char buffer[32];
 char result;
 unsigned int v3;

 v3 = _ccall(v5, v6, v7, 20);
 cur = buffer;
 sub_401180(buffer, (char *)encrypted_0, 31);
 v9 = buffer[0];
 result = 0;
 flag1 = v9;
 if (flag1)
 {
  do
  {
   cur = cur + 1;
   *cur = v9 ^ 90;
   v9 = *cur;
  }
  while (*cur);
  flag1 = buffer[0];
 }
 v0 = flag1;
 v11 = sub_401170(buffer);
 if (v3 != _ccall(v5, v6, v7, 20))
 {
  __stack_chk_fail_local();
  return param_tail_call_optimized();
 }
 return v11 + v0;
}


// Forward declarations
int param_tail_call_optimized(void);
int call_tail_call_optimized(void);
unsigned int param_non_tail_call(void);
unsigned int call_non_tail_call(void);
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int i);
unsigned int call_vectorized_loop(void);
unsigned int call_link_time_optimization(void);
unsigned int param_division_by_zero(void);
int param_null_pointer_deref(void);
int call_null_pointer_deref(void);
int param_buffer_overflow_heap(unsigned int a0);
int call_buffer_overflow(void);
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1);
unsigned int call_integer_overflow(unsigned int a0, unsigned int a1);
unsigned int param_undefined_behavior(void);
unsigned int call_undefined_behavior(void);
unsigned int param_implementation_defined(void);
unsigned int call_implementation_defined(void);
int sub_401180(char *a0, char *a1, unsigned int a2);
int sub_401170(char *a0);
int sub_401160(unsigned int *a0);
int sub_401190(unsigned int a0, unsigned int *a1, unsigned int a2);
int sub_401130(unsigned int a0, void *a1);
int sub_401110(unsigned int *a0);
int sub_401150(unsigned int a0);
int sub_401120(unsigned int a0);
int sub_401140(void);
int __do_global_ctors_aux(void);
int param_division_by_zero_constprop_0(unsigned int *a0, unsigned int a1);
int segv_handler(unsigned int *a0, unsigned int a1);
int div_zero_handler(void);
int __stack_chk_fail_local(void);
int param_buffer_overflow_stack(unsigned int a0);
int param_division_by_zero_constprop_1(void);

// Function: param_tail_call_optimized at 0x4016d0
int param_tail_call_optimized(void)
{
 return 500500;
}


// Function: sub_4016ea at 0x4016ea
void sub_4016ea()
{
 call_tail_call_optimized();
 return;
}


// Function: call_tail_call_optimized at 0x4016f0
int call_tail_call_optimized(void)
{
 return 500500;
}


// Function: sub_4016fa at 0x4016fa
void sub_4016fa(unsigned int a0)
{
 param_non_tail_call();
 return;
}


// Function: param_non_tail_call at 0x401700
unsigned int param_non_tail_call(void)
{
 return 5050;
}


// Function: sub_40171a at 0x40171a
void sub_40171a()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x401720
unsigned int call_non_tail_call()
{
 return 5050;
}


// Function: sub_40172a at 0x40172a
int sub_40172a()
{
 call_vectorized_loop();
 return;
}


// Function: param_vectorized_loop at 0x401730
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int *a2, unsigned int i)
{
 unsigned int *p;
 unsigned int idx;
 unsigned int v2;
 unsigned int *ptr;

 p = a2;
 if (i <= 0)
 return 0;
 idx = 0;
 do
 {
 p[idx] = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 idx += 1;
 } while (i != idx);
 v2 = 0;
 ptr = p;
 do
 {
 v2 += *(ptr);
 ptr += 1;
 } while (&p[i] != ptr);
 return v2;
}


// Function: sub_40177f at 0x40177f
void sub_40177f()
{
}


// Function: sub_401788 at 0x401788
void sub_401788()
{
 call_vectorized_loop();
 return;
}


// Function: call_vectorized_loop at 0x401790
unsigned int call_vectorized_loop()
{
 return 72;
}


// Function: sub_40179a at 0x40179a
void sub_40179a(unsigned int a0)
{
 param_link_time_optimization();
 return;
}


// Function: param_link_time_optimization at 0x4017a0
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_4017ad at 0x4017ad
void sub_4017ad()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x4017b0
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: sub_4017ba at 0x4017ba
int sub_4017ba()
{
 param_division_by_zero();
 return;
}


// Function: param_division_by_zero at 0x4017c0
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(void)
{
 unsigned int v0;

 sub_401130(8, div_zero_handler);
 return (!sub_401110((unsigned int *)&jmp_buffer) ? (10 % v0) : 4294967295);
}


// Function: sub_401809 at 0x401809
void sub_401809()
{
}


// Function: sub_401817 at 0x401817
int sub_401817()
{
 call_division_by_zero();
 return;
}


// Function: call_division_by_zero at 0x401820
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

  v1 = param_division_by_zero_constprop_1();
  v2 = param_division_by_zero_constprop_0((unsigned int *)&jmp_buffer, 1);
  sub_401130(8, 0);
 return v1 + v2;
}


// Function: sub_401856 at 0x401856
int sub_401856()
{
 param_null_pointer_deref();
 return;
}


// Function: param_null_pointer_deref at 0x401860
extern unsigned int segv_buffer;

int param_null_pointer_deref()
{
 unsigned int *v0; // [bp+0x4]

 sub_401130(11, segv_handler);
 return (!sub_401110((unsigned int *)&segv_buffer) ? *(v0) : 4294967295);
}


// Function: sub_4018a5 at 0x4018a5
void sub_4018a5()
{
}


// Function: sub_4018af at 0x4018af
int sub_4018af()
{
 call_null_pointer_deref();
 return;
}


// Function: call_null_pointer_deref at 0x4018b0
int call_null_pointer_deref()
{
 unsigned long v3 = 0; // ldt
 unsigned long v4 = 0; // gdt
 unsigned int v5 = 0; // gs
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = _ccall(v3, v4, v5, 20);
 v0 = 42;
 v6 = param_null_pointer_deref();
 v7 = param_null_pointer_deref();
 sub_401130(11, 0);
 if (v1 != _ccall(v3, v4, v5, 20))
 {
 __stack_chk_fail_local();
 return param_buffer_overflow_stack(0);
 }
 return v6 + v7;
}


// Function: param_buffer_overflow_stack at 0x401920
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_401929 at 0x401929
int sub_401929()
{
 param_buffer_overflow_heap(0);
 return;
}


// Function: param_buffer_overflow_heap at 0x401930
int param_buffer_overflow_heap(unsigned int a0)
{
 unsigned int result; // eax

 result = sub_401150(16);
 if (!result)
 return 4294967294;
 sub_401120(result);
 return a0;
}


// Function: sub_40196d at 0x40196d
int sub_40196d()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401970
int call_buffer_overflow()
{
 unsigned int result; // eax

 result = sub_401150(16);
 if (!result)
 return 8;
 sub_401120(result);
 return 30;
}


// Function: sub_4019ae at 0x4019ae
void sub_4019ae(unsigned int a0, unsigned int a1)
{
 param_integer_overflow(a0, a1);
 return;
}


// Function: param_integer_overflow at 0x4019b0
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax

 v0 = a0 + a1;
 if (a0 > 0 && a1 > 0)
 {
 if (v0 < 0)
 return 4294967295;
 return v0;
 }
 if ((a1 & a0) >= 0)
 {
 return v0;
 }
 else if (_ccall(15, 15, v0, 0))
 {
 return 4294967294;
 }
 else
 {
 return v0;
 }
}


// Function: sub_4019d2 at 0x4019d2
void sub_4019d2()
{
}


// Function: sub_4019e7 at 0x4019e7
void sub_4019e7()
{
 call_integer_overflow(0, 0);
 return;
}


// Function: call_integer_overflow at 0x4019f0
unsigned int call_integer_overflow(unsigned int a0, unsigned int a1)
{
 return 0x77359400;
}


// Function: sub_4019fa at 0x4019fa
void sub_4019fa(unsigned int a0)
{
 param_undefined_behavior();
 return;
}


// Function: param_undefined_behavior at 0x401a00
unsigned int param_undefined_behavior()
{
 return 0;
}


// Function: sub_401a0b at 0x401a0b
void sub_401a0b()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x401a10
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: sub_401a1a at 0x401a1a
void sub_401a1a()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x401a20
unsigned int param_implementation_defined()
{
 return 43;
}


// Function: sub_401a2a at 0x401a2a
void sub_401a2a()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x401a30
unsigned int call_implementation_defined()
{
 return 43;
}


// Function: sub_401a3a at 0x401a3a
int sub_401a3a()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x401a40
extern unsigned int g_402008;
extern unsigned int g_402038;
extern unsigned int g_402064;
extern unsigned int g_40208c;
extern unsigned int g_4020b4;
extern unsigned int g_4020d4;
extern unsigned int g_402108;
extern unsigned int g_40212f;
extern unsigned int g_402167;
extern unsigned int g_402184;
extern unsigned int g_4021a0;
extern unsigned int g_4021bc;
extern unsigned int g_4021d9;
extern unsigned int g_4021f6;

int test_obf_opt_edge(void)
{
 unsigned long v6 = 0;
 unsigned long v7 = 0;
 unsigned int v17;
 unsigned int v18;
 unsigned int v19;
 unsigned int v20;
 unsigned int flag1;
 unsigned int v22;
 unsigned int v8 = 0;
 unsigned int flag3;
 unsigned int v10;
 unsigned int flag2;
 char *cur;
 char v13;
 char flag4;
 char v0;
 unsigned int v1;
 char v2;
 char result;
 unsigned int v4;

 v4 = _ccall(v6, v7, v8, 20);
 sub_401160(&g_402008);
 sub_401190(1, &g_40212f, 10);
 flag3 = 6;
 v10 = 5;
 do
 {
 flag2 = flag3;
 flag3 = v10 % flag2;
 v10 = flag2;
 } while (flag3);
  sub_401190(1, &g_402108, 0);
  sub_401190(1, &g_402167, 225);
  cur = &v2;
  sub_401180(&v2, (char *)encrypted_0, 31);
  v13 = v2;
  result = 0;
  flag4 = v13;
  if (flag4)
  {
   do
   {
    cur = cur + 1;
    *cur = v13 ^ 90;
    v13 = *cur;
   }
   while (*cur);
   flag4 = v2;
  }
  v0 = flag4;
  sub_401190(1, &g_402184, v0 + sub_401170(&v2));
 sub_401190(1, &g_402038, 500500);
 sub_401190(1, &g_402064, 5050);
 sub_401190(1, &g_40208c, call_vectorized_loop());
 sub_401190(1, &g_4020b4, 20);
  v17 = param_division_by_zero_constprop_1();
  v18 = param_division_by_zero_constprop_0(&jmp_buffer, 1);
  sub_401130(8, 0);
 sub_401190(1, &g_4021a0, v17 + v18);
 v1 = 42;
 v19 = param_null_pointer_deref();
 v20 = param_null_pointer_deref();
 sub_401130(11, 0);
 sub_401190(1, &g_4021bc, v19 + v20);
 flag1 = sub_401150(16);
 if (flag1)
 {
 sub_401120(flag1);
 v22 = 30;
 }
 else
 {
 v22 = 8;
 }
 sub_401190(1, &g_4021d9, v22);
 sub_401190(1, &g_4020d4, 0x77359400);
 sub_401190(1, &g_4021f6, 10);
 sub_401190(1, &g_402108, 43);
 if (v4 != _ccall(v6, v7, v8, 20))
 {
 __stack_chk_fail_local();
 return __stack_chk_fail_local();
 }
 return v4 - _ccall(v6, v7, v8, 20);
}


// Function: __stack_chk_fail_local at 0x401ca0
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401140();
 __do_global_ctors_aux();
 return;
}


// Function: sub_401d02 at 0x401d02
void sub_401d02()
{
}



/* CRT stub function _fini removed by preprocessor */


