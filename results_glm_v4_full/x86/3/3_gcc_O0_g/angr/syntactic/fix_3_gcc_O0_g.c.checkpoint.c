// Angr Decompilation of 3_gcc_O0_g
// Platform: X86

#define NULL ((void*)0)

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 char padding_0[80];
 unsigned int field_50;
 char padding_1[4];
 unsigned int field_c;
 char padding_2[4];
 unsigned int field_10;
 char padding_3[4];
 unsigned int field_14;
 char padding_4[4];
 unsigned int field_18;
 char padding_5[4];
 unsigned int field_1c;
 char padding_6[4];
 unsigned int field_20;
 char padding_7[4];
 unsigned int field_24;
 char padding_8[4];
 unsigned int field_28;
 char padding_9[4];
 unsigned int field_2c;
 char padding_10[4];
 unsigned int field_30;
 char padding_11[4];
 unsigned int field_34;
 char padding_12[4];
 unsigned int field_38;
 char padding_13[4];
 unsigned int field_3c;
 char padding_14[4];
 unsigned int field_40;
 char padding_15[4];
 unsigned int field_44;
 char padding_16[4];
 unsigned int field_48;
} struct_0;

void (*g_405ff4)() = NULL;
unsigned int vvar_97;
unsigned int vvar_39;
unsigned int vvar_86;
unsigned int vvar_2;
#define NULL ((void*)0)

/* TLS/stack canary access function */
void *_ccall(unsigned long ldt, unsigned long gdt, unsigned short gs, unsigned int offset)
{
	(void)ldt;
	(void)gdt;
	(void)gs;
	(void)offset;
	return NULL;
}

/* Global string literals */
const char g_403158[] = "Testing heap memory operations";
const char g_403008[] = "Testing stack memory operations";
const char g_4032b4[] = "%d\n";
const char g_4032c4[] = "Dangling pointer result: %d\n";
const char g_4032ec[] = "%d\n";
const char g_40332d[] = "Error: invalid value\n";
const char g_403348[] = "Testing static and global memory operations";
const char g_4035c4[] = "Testing memory operation functions";
const char g_40175d[] = "stack_chk_fail";

/* Atomic exchange function */
int atomic_exchange(int *ptr, int value)
{
	int old = *ptr;
	*ptr = value;
	return old;
}

static int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
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
int sub_401140()
{
 struct_0 *v1; // ebx

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
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

 return 0;
}


// Function: sub_40121a at 0x40121a
int sub_40121a()
{
 sub_401220();
 return;
}


// Function: sub_401220 at 0x401220
int sub_401220()
{
 struct_0 *v1; // ebx

 return 0;
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

 return 0;
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

 return 0;
}

// Function: extern_function at 0x402eb9
static unsigned int extern_function(unsigned int a0)
{
 __x86_get_pc_thunk_ax();
 return a0 * 3;
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
void __x86_get_pc_thunk_bx()
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

void deregister_tm_clones()
{
	return;
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
 struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void register_tm_clones()
{
	return;
}


// Function: sub_401317 at 0x401317
void sub_401317()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
 struct_0;

void __do_global_dtors_aux()
{
	unsigned int *v5; // eax
	struct_0 *v6; // edi
	char *ptr; // edi
	unsigned int v8; // esi
	unsigned int v9; // ebx
	char *v10; // esi
	unsigned int v11; // eax
	unsigned int i; // ebx
	unsigned int v13; // eax
	unsigned int v0; // [bp-0x10]
	unsigned int v1; // [bp-0xc]
	char v2; // [bp-0x8]
	char v3; // [bp+0x0]

	v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
	ptr = (char *)&v6->padding_0[19571];
	v1 = v8;
	v0 = v9;
	if (ptr[224])
	return;
	if (*((int *)&ptr[80]))
	sub_401140(*((int *)&ptr[100]));
	v10 = &ptr[224];
	v11 = *((int *)&ptr[228]);
	i = (&ptr[220] - v10 >> 2) - 1;
	if (*((int *)&ptr[228]) < i)
	{
		do
		{
			v13 = v11 + 1;
			*((unsigned int *)&ptr[228]) = v13;
			((void (*)())(*((int *)&v10[4 * v13])))();
			v11 = *((int *)&ptr[228]);
		} while (*((int *)&ptr[228]) < i);
	}
	deregister_tm_clones();
	ptr[224] = 1;
	return;
}


// Function: sub_4013aa at 0x4013aa
void sub_4013aa()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */

void frame_dummy()
{
	return;
}


// Function: __x86.get_pc_thunk_dx at 0x4013b9
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4013bd
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: double_value at 0x4013c1
unsigned int double_value(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2;
}


// Function: local_vars at 0x4013d9
unsigned int local_vars(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a0 * 2;
 v1 = v0 + 10;
 return v1;
}


// Function: local_array at 0x401409
unsigned int local_array(unsigned int a0)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 unsigned int idx; // [bp-0x3c]
 unsigned long v7; // [bp-0x38]
 char v1; // [bp-0x24]
 unsigned int v2; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 for (idx = 0; idx <= 9; idx += 1)
 {
 (&v7)[idx] = a0 * idx;
 }
 v6 = *((int *)&v1);
 if (v2 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 v6 = __stack_chk_fail_local();
 return v6;
}


// Function: local_struct at 0x401461
int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = a0 * 2;
 return v0 + a0;
}


// Function: address_of_local at 0x40148d
unsigned int address_of_local(unsigned int ptr)
{
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 v0 = 42;
 *((unsigned int *)ptr) = v0;
 return v0;
}


// Function: address_of_array at 0x4014b5
unsigned int address_of_array(unsigned int *a0)
{
 __x86_get_pc_thunk_ax();
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x4014e3
int large_stack_frame()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 unsigned int i; // [bp-0x814]
 unsigned long v8; // [bp-0x810]
 char v1; // [bp-0x410]
 unsigned int v2; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 for (i = 0; i <= 2047; i += 1)
 {
 *(i + (char *)&v8) = i;
 }
 v7 = v1;
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 v7 = __stack_chk_fail_local();
 return v7;
}


// Function: vla_stack at 0x401559
unsigned int vla_stack(unsigned int a0)
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned long v9; // [bp-0x101c]
 unsigned int idx; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int ptr; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 if (a0 <= 0 || a0 > 1000)
 {
 v8 = 4294967295;
 }
 else
 {
 v1 = a0 - 1;
 v7 = ((15 + a0 * 4 + 15) / 16) * 16;
 while (&v9 != (char *)&idx - (v7 & 0xfffff000))
 ;
 vvar_97 = (char *)&v9 - (v7 & 4095);
 if (((unsigned short)v7 & 4095))
 *((int *)((v7 & 4095) - 4 + vvar_97)) = *((int *)((v7 & 4095) - 4 + vvar_97));
 ptr = (vvar_97 + 3 >> 2) * 4;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 2;
 }
 v8 = *((int *)(ptr + (a0 + (a0 >> 31) >> 1) * 4));
 }
 if (v3 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 v8 = __stack_chk_fail_local();
 return v8;
}


// Function: alloca_usage at 0x401660
extern const char g_40175d[];

unsigned int alloca_usage(unsigned int a0)
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned long v9; // [bp-0x101c]
 char v0; // [bp-0x20]
 unsigned int v10; // [bp-0x1c]
 unsigned int idx; // [bp-0x18]
 unsigned int ptr; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 vvar_39 = (unsigned int)&v0;
 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 if (a0 <= 0)
 {
 v7 = 4294967295;
 }
 else
 {
 v8 = ((15 + a0 * 4 + 12) * 16);
 while (&v9 != (char *)&v10 - (v8 & 0xfffff000))
 ;
 vvar_86 = (char *)&v9 - (v8 & 4095);
 if (((unsigned short)v8 & 4095))
 *((int *)((v8 & 4095) - 4 + vvar_2)) = *((int *)((v8 & 4095) - 4 + vvar_2));
 ptr = (vvar_86 + 15 >> 4) * 16;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(idx * 4 + ptr)) = idx * 3;
 }
 v7 = *((int *)(ptr + (a0 + (a0 >> 31) >> 1) * 4));
 }
 if (v3 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 *((char **)(vvar_2 - 4)) = &g_40175d;
 v7 = __stack_chk_fail_local();
 }
 return v7;
}


// Function: stack_alias at 0x40175f
unsigned int stack_alias(unsigned int a0, unsigned int a1)
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 char *v0; // [bp-0x24], Other Possible Types: unsigned int
 char *v1; // [bp-0x20], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v1 = a0;
 v0 = a1;
 v3 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v2 = 10;
 v1 = &v2;
 v0 = &v2;
 if (v1 == v0 && v1)
 {
 v2 = 20;
 v7 = v2;
 }
 else
 {
 v7 = 4294967295;
 }
 if (v3 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 v7 = __stack_chk_fail_local();
 return v7;
}


// Function: test_stack_memory at 0x4017d3
int test_stack_memory()
{
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 unsigned int flag2; // ecx
 unsigned int *cur; // edi
 char v0; // [bp-0x40]
 unsigned int flag1; // [bp-0x3c]
 unsigned int v2[1]; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned int v5; // [bp-0x30]
 unsigned int v6; // [bp-0x10]

 v6 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 sub_401200(&g_403008);
 sub_401160("MEM-L1-01 (local_vars): %d\n", local_vars(5));
 sub_401160("MEM-L1-02 (local_array): %d\n", local_array(2));
 sub_401160("MEM-L1-03 (local_struct): %d\n", local_struct(5));
 sub_401160("MEM-L1-04 (address_of_local): %d\n", address_of_local(&v0));
 flag2 = 10;
 for (cur = &v2; flag2; cur += 1)
 {
 flag2 -= 1;
 *(cur) = 0;
 }
 *(v2) = 1;
 v4 = 2;
 v5 = 3;
 sub_401160("MEM-L1-05 (address_of_array): %d\n", address_of_array(&v2));
 sub_401160("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 sub_401160("MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 sub_401160("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 flag1 = 0;
 sub_401160("MEM-L2-04 (stack_alias): %d\n", stack_alias(&flag1, &flag1));
 if (v6 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 return v6 - *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 return __stack_chk_fail_local();
}


// Function: heap_basic at 0x40196f
unsigned int heap_basic(unsigned int a0)
{
 unsigned int idx; // [bp-0x18]
 unsigned int ptr; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 ptr = sub_4011f0(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 2;
 }
 v2 = *((int *)(ptr + (a0 + (a0 >> 31) >> 1) * 4));
 sub_401180(ptr);
 return v2;
}


// Function: heap_calloc at 0x401a05
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int ptr; // [bp-0x10]

 ptr = sub_401240(a0, 4);
 if (!ptr)
 return 4294967295;
 v0 = 0;
 for (idx = 0; idx < a0; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 sub_401180(ptr);
 return v0;
}


// Function: heap_realloc at 0x401a82
unsigned int heap_realloc()
{
 unsigned int idx; // [bp-0x24]
 unsigned int index; // [bp-0x20]
	unsigned int *ptr; // [bp-0x1c]
	unsigned int v3; // [bp-0x18]
	unsigned int result; // [bp-0x14]
	unsigned int v5; // [bp-0x10]

	ptr = sub_4011f0(20);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx <= 4; idx += 1)
 {
 ptr[idx] = idx + 1;
 }
 v3 = ptr[2];
 result = sub_4011e0(ptr, 40);
 if (!result)
 {
 sub_401180(ptr);
 return 4294967294;
 }
 ptr = result;
 for (index = 5; index <= 9; index += 1)
 {
 ptr[index] = index * 10;
 }
 v5 = (v3 == ptr[2] ? ptr[5] : 4294967293);
 sub_401180(ptr);
 return v5;
}


// Function: heap_array at 0x401b83
unsigned int heap_array(unsigned int a0)
{
 unsigned int idx; // [bp-0x18]
 unsigned int ptr; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 ptr = sub_4011f0(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(idx * 4 + ptr)) = idx * 3;
 }
 v2 = *((int *)(ptr + (a0 + (a0 >> 31) >> 1) * 4));
 sub_401180(ptr);
 return v2;
}


// Function: heap_struct at 0x401c1e
unsigned int heap_struct(unsigned int a0)
{
 unsigned int *ptr; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 ptr = sub_4011f0(8);
 if (ptr)
 {
 ptr[0] = a0;
 ptr[1] = a0 * 2;
 v1 = ptr[1] + ptr[0];
 sub_401180(ptr);
 return v1;
 }
 return 4294967295;
}


// Function: heap_nested at 0x401c8b
typedef struct struct_0_heap_nested {
 unsigned int field_0;
 struct struct_1_heap_nested *field_4;
} struct_0_heap_nested;

typedef struct struct_1_heap_nested {
 unsigned int field_0;
 unsigned int field_4;
} struct_1_heap_nested;

unsigned int heap_nested(struct_0_heap_nested **ptr)
{
 unsigned int *v0; // eax

 *(ptr) = sub_4011f0(8);
 if (!*(ptr))
 return 4294967295;
 (*(ptr))->field_0 = 10;
 v0 = sub_4011f0(8);
 (*(ptr))->field_4 = (struct struct_1_heap_nested *)v0;
 if ((*(ptr))->field_4)
 {
 (*(ptr))->field_4->field_0 = 20;
 (*(ptr))->field_4->field_4 = 0;
 return 0;
 }
 sub_401180(*(ptr));
 return 4294967294;
}


// Function: linked_list_heap at 0x401d30
typedef struct struct_0_linked_list {
 unsigned int field_0;
 struct struct_0_linked_list *field_4;
} struct_0_linked_list;

unsigned int linked_list_heap()
{
 struct struct_0_linked_list *k; // [bp-0x2c]
 struct struct_0_linked_list *p; // [bp-0x28]
 unsigned int i; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 struct struct_0_linked_list *iter; // [bp-0x1c]
 struct struct_0_linked_list *v5; // [bp-0x18]
 struct struct_0_linked_list *ptr; // [bp-0x14]
 struct struct_0_linked_list *v7; // [bp-0x10]

 k = NULL;
 p = NULL;
 for (i = 0; i <= 4; i += 1)
 {
 ptr = sub_4011f0(8);
 if (!ptr)
 {
 while (k)
 {
 v7 = k;
 k = k->field_4;
 sub_401180(v7);
 }
 return 4294967295;
 }
 ptr->field_0 = i * 10;
 ptr->field_4 = NULL;
 if (!k)
 {
 k = ptr;
 p = ptr;
 }
 else
 {
 p->field_4 = ptr;
 p = ptr;
 }
 }
 v3 = 0;
 for (iter = k; iter; iter = iter->field_4)
 {
 v3 += iter->field_0;
 }
 while (k)
 {
 v5 = k;
 k = k->field_4;
 sub_401180(v5);
 }
 return v3;
}


// Function: create_tree_node at 0x401e46
unsigned int * create_tree_node(unsigned int a0)
{
	unsigned int *ptr; // [bp-0x10]

	__x86_get_pc_thunk_ax();
	ptr = sub_4011f0(12);
	if (!ptr)
		return ptr;
	ptr[0] = a0;
	ptr[1] = 0;
	ptr[2] = 0;
	return ptr;
}


// Function: tree_heap_traversal at 0x401e97
typedef struct struct_0_tree {
 unsigned int field_0;
 struct struct_1_tree *field_4;
 struct struct_2_tree *field_8;
} struct_0_tree;

typedef struct struct_1_tree {
 unsigned int field_0;
} struct_1_tree;

typedef struct struct_2_tree {
 unsigned int field_0;
} struct_2_tree;

unsigned int tree_heap_traversal()
{
 struct_0 *ptr; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 ptr = create_tree_node(10);
 if (!ptr)
 return 4294967295;
 ((struct struct_0_tree *)ptr)->field_4 = create_tree_node(20);
 ((struct struct_0_tree *)ptr)->field_8 = create_tree_node(30);
 if (((struct struct_0_tree *)ptr)->field_4 && ((struct struct_0_tree *)ptr)->field_8)
 {
 v1 = ((struct struct_2_tree *)((struct struct_0_tree *)ptr)->field_8)->field_0 + ((struct struct_0_tree *)ptr)->field_0 + ((struct struct_1_tree *)((struct struct_0_tree *)ptr)->field_4)->field_0;
 sub_401180(((struct struct_0_tree *)ptr)->field_4);
 sub_401180(((struct struct_0_tree *)ptr)->field_8);
 sub_401180(ptr);
 return v1;
 }
 if (((struct struct_0_tree *)ptr)->field_4)
 sub_401180(((struct struct_0_tree *)ptr)->field_4);
 if (((struct struct_0_tree *)ptr)->field_8)
 sub_401180(((struct struct_0_tree *)ptr)->field_8);
 sub_401180(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x401faa
unsigned int memory_leak(unsigned int a0)
{
 unsigned int idx; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v1 = sub_4011f0(a0 * 4);
 if (!v1)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(idx * 4 + v1)) = idx;
 }
 return *((int *)(v1 + (a0 + (a0 >> 31) >> 1) * 4));
}


// Function: dangling_pointer at 0x40202b
unsigned int dangling_pointer()
{
 unsigned int *ptr; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 ptr = sub_4011f0(4);
 if (ptr)
 {
 *(ptr) = 42;
 v1 = *(ptr);
 sub_401160("value before free: %d\n", v1);
 sub_401180(ptr);
 v2 = *(ptr);
 return v2;
 }
 return 4294967295;
}


// Function: double_free at 0x4020a2
unsigned int double_free(unsigned int *a0)
{
 unsigned int *ptr; // [bp-0x10]

 if (a0)
 return *(a0);
 ptr = sub_4011f0(4);
 if (ptr)
 {
 *(ptr) = 10;
 sub_401180(ptr);
 sub_401180(ptr);
 return 4294967294;
 }
 return 4294967295;
}


// Function: heap_overflow at 0x402111
unsigned int heap_overflow()
{
 unsigned int idx; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 ptr = sub_4011f0(40);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx <= 10; idx += 1)
 {
 ptr[idx] = idx * 100;
 }
 v2 = *(ptr);
 sub_401180(ptr);
 return v2;
}


// Function: test_heap_memory at 0x40218c
typedef struct struct_0_test_heap {
 char padding_0[4];
 unsigned int field_4;
} struct_0_test_heap;

unsigned int test_heap_memory()
{
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned int v18; // eax
 unsigned short v8; // gs
 struct_0 *result; // [bp-0x20]
 char v1; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int flag1; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 sub_401200(&g_403158);
 sub_401160("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 sub_401160("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 sub_401160("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 sub_401160("HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 sub_401160("HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));
 result = NULL;
 sub_401160("HEAP-L2-06 (heap_nested): %d\n", heap_nested((struct struct_0_heap_nested **)&result));
 if (result)
 {
 sub_401180(((struct struct_0_heap_nested *)result)->field_4);
 sub_401180(result);
 }
 sub_401160("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 sub_401160("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 sub_401160("HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
 sub_401160("HEAP-L3-04 (dangling_pointer): ");
 flag1 = sub_401230();
 if (!flag1)
 {
 v3 = dangling_pointer();
 sub_401160(&g_4032b4, v3);
 sub_401210(0);
 }
 if (flag1 > 0)
 {
 sub_4011d0(flag1, &v1, 0);
 if (!((char)v1 & 127))
 {
 sub_401160(&g_4032c4, v1 >> 8 & 255);
 }
else if (!((char)_ccall(14, 13, ((v1 & 127) + 1 & 255) >> 1 & 255, 20)))
	{
		sub_401160(&g_4032ec, v1 & 127);
	}
 }
 else
 {
 sub_4011c0(&g_40332d);
 }
 v18 = v4 - *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 if (v4 != *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 v18 = __stack_chk_fail_local();
 return v18;
}


// Function: global_var_access at 0x4023d4
typedef struct struct_0_global_var {
 char padding_0[15552];
 unsigned int field_3cc0;
} struct_0_global_var;

int global_var_access()
{
 struct_0_global_var *ptr; // eax
 char v0; // [bp+0x0]

 ptr = (struct struct_0_global_var *)__x86_get_pc_thunk_ax(&v0);
 ptr->field_3cc0 = ptr->field_3cc0 + 1;
 return ptr->field_3cc0;
}


// Function: global_var_read at 0x4023fc
unsigned int global_var_read()
{
 char v0; // [bp+0x0]

 return *((int *)(__x86_get_pc_thunk_ax(&v0) + 15512)) * 2;
}


// Function: global_array_access at 0x402417
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v1; // eax
 char v0; // [bp+0x0]

 v1 = __x86_get_pc_thunk_ax(&v0);
 if (a0 >= 0 && a0 <= 9)
 return *((int *)(v1 + 15229 + a0 * 4 + 128));
 return 4294967295;
}


// Function: static_local at 0x402447
typedef struct struct_0_static_local {
 char padding_0[15577];
 unsigned int field_3cd9;
} struct_0_static_local;

unsigned int static_local(unsigned int a0)
{
 struct_0 *ptr; // eax
 char v0; // [bp+0x0]

 ptr = __x86_get_pc_thunk_ax(&v0) + 15181;
 if (!a0)
 {
 *((unsigned int *)&ptr->padding_0[396]) = *((int *)&ptr->padding_0[396]) + 1;
 return *((int *)&ptr->padding_0[396]);
 }
 *((unsigned int *)&ptr->padding_0[396]) = 0;
 return 0;
}


// Function: static_helper at 0x402486
unsigned int static_helper(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return a0 * 2;
}


// Function: call_static_func at 0x40249e
unsigned int call_static_func(unsigned int a0)
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 return static_helper(a0) + 1;
}


// Function: access_extern_global at 0x4024bf
int access_extern_global()
{
 char v0; // [bp+0x0]

 return *((int *)(__x86_get_pc_thunk_ax(&v0) + 15265)) + 100;
}


// Function: call_extern_func at 0x4024dd
int call_extern_func()
{
 __x86_get_pc_thunk_ax();
 return extern_function(5);
}


// Function: read_const_data at 0x402506
typedef struct struct_1_read_const {
 char padding_0[15190];
 struct struct_0_read_const *field_3b56;
} struct_1_read_const;

typedef struct struct_0_read_const {
 char padding_0[4];
 char field_4;
} struct_0_read_const;

int read_const_data()
{
 struct struct_1_read_const *v2; // eax
 char v0; // [bp+0x0]

 v2 = (struct struct_1_read_const *)__x86_get_pc_thunk_ax(&v0);
 return *((char *)(*((int *)&v2->padding_0[1]) + 4)) + 42;
}


// Function: access_bss_var at 0x40252f
int access_bss_var()
{
 char v0; // [bp+0x0]

 return *((int *)(__x86_get_pc_thunk_ax(&v0) + 15209));
}


// Function: access_bss_buffer at 0x402548
int access_bss_buffer()
{
 char v0; // [bp+0x0]

 return *((char *)(__x86_get_pc_thunk_ax(&v0) + 15212));
}


// Function: global_struct_access at 0x402565
typedef struct struct_0_global_struct {
 char padding_0[15063];
 unsigned int field_3ad7;
 unsigned int field_3adb;
} struct_0_global_struct;

int global_struct_access()
{
 struct_0 *v2; // eax
 char v0; // [bp+0x0]

 v2 = __x86_get_pc_thunk_ax(&v0) + 14895;
 return *((int *)&v2->padding_0[172]) + *((int *)&v2->padding_0[168]);
}


// Function: set_file_static at 0x402586
typedef struct struct_0_file_static {
 char padding_0[15038];
 unsigned int field_3abe;
} struct_0_file_static;

struct_0 * set_file_static(unsigned int a0)
{
 char v0; // [bp+0x0]

 *((unsigned int *)(__x86_get_pc_thunk_ax(&v0) + 15038)) = a0;
 return __x86_get_pc_thunk_ax(&v0) + 14862;
}


// Function: get_file_static at 0x4025a3
int get_file_static()
{
 char v0; // [bp+0x0]

 return *((int *)(__x86_get_pc_thunk_ax(&v0) + 15009));
}


// Function: set_global_callback at 0x4025bc
typedef struct struct_0_callback {
 char padding_0[15196];
 unsigned int field_3b5c;
} struct_0_callback;

struct_0 * set_global_callback(unsigned int a0)
{
 char v0; // [bp+0x0]

 *((unsigned int *)(__x86_get_pc_thunk_ax(&v0) + 15196)) = a0;
 return __x86_get_pc_thunk_ax(&v0) + 14808;
}


// Function: call_global_callback at 0x4025d9
typedef struct struct_0_callback_call {
 char padding_0[15164];
 struct struct_1_callback_call *field_3b3c;
} struct_0_callback_call;

typedef struct struct_1_callback_call {
 unsigned int field_0;
} struct_1_callback_call;

unsigned int call_global_callback(unsigned int a0)
{
 struct struct_0_callback_call *v0; // eax
 unsigned int (*callback)(unsigned int);

 v0 = (struct struct_0_callback_call *)__x86_get_pc_thunk_ax() + 14776;
 callback = (unsigned int (*)(unsigned int))*((int *)&v0->padding_0[388]);
 return (!callback ? 4294967295 : callback(a0));
}


// Function: global_heap_store at 0x402611
typedef struct struct_0_global_heap {
 char padding_0[15115];
 struct struct_1_global_heap *field_3b0b;
} struct_0_global_heap;

typedef struct struct_1_global_heap {
 unsigned int field_0;
} struct_1_global_heap;

unsigned int global_heap_store(unsigned int *a0)
{
 struct_0 *ptr; // eax
 char v0; // [bp+0x0]

 ptr = (struct struct_0_global_heap *)__x86_get_pc_thunk_ax(&v0) + 14723;
 *((unsigned int **)&ptr->padding_0[392]) = a0;
 return (!*((int *)&ptr->padding_0[392]) ? 4294967295 : *((int *)*((int *)&ptr->padding_0[392])));
}


// Function: static_complex_init at 0x402646
typedef struct struct_0_static_complex {
 char padding_0[14850];
 unsigned int field_3a02;
 char padding_3a06[4];
 unsigned int field_3a0a;
 char padding_3a0e[4];
 unsigned int field_3a12;
} struct_0_static_complex;

int static_complex_init()
{
 struct_0 *v2; // eax
 char v0; // [bp+0x0]

 v2 = __x86_get_pc_thunk_ax(&v0) + 14670;
 return *((int *)&v2->padding_0[196]) + *((int *)&v2->padding_0[188]) + *((int *)&v2->padding_0[180]);
}


// Function: tls_access at 0x40266f
unsigned int tls_access(unsigned int a0)
{
 unsigned long v1; // ldt
 unsigned long v2; // gdt
 unsigned short v3; // gs
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 *((unsigned int *)_ccall(v1, v2, v3, 0xfffffffc)) = a0;
 return *((int *)_ccall(v1, v2, v3, 0xfffffffc)) * 2;
}


// Function: init_depends_on at 0x402693
typedef struct struct_0_init_depends {
 char padding_0[14993];
 unsigned int field_3a91;
} struct_0_init_depends;

int init_depends_on(unsigned int *a0)
{
 struct_0 *ptr; // eax
 char v0; // [bp+0x0]

 ptr = __x86_get_pc_thunk_ax(&v0);
 if (a0)
 *((unsigned int *)&(&ptr->padding_0)[1]) = *(a0);
 return *((int *)&(&ptr->padding_0)[1]);
}


// Function: init_order_test at 0x4026bd
unsigned int init_order_test()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 unsigned int v0[1]; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 v0[0] = 20;
 v6 = init_depends_on(&v0);
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return v6;
 return __stack_chk_fail_local();
}


// Function: test_static_global at 0x402702
extern const char g_403348[];

int test_static_global()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v0[1]; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 sub_401200(&g_403348);
 sub_401160("STM-L1-01 (global_var_access): %d\n", global_var_access());
 sub_401160("STM-L1-01 (global_var_read): %d\n", global_var_read());
 sub_401160("STM-L1-02 (global_array_access): %d\n", global_array_access(5));
 static_local(1);
 sub_401160("STM-L1-03 (static_local): %d\n", static_local(0));
 sub_401160("STM-L1-03 (static_local): %d\n", static_local(0));
 sub_401160("STM-L1-04 (call_static_func): %d\n", call_static_func(5));
 sub_401160("STM-L2-01 (access_extern_global): %d\n", access_extern_global());
 sub_401160("STM-L2-02 (call_extern_func): %d\n", call_extern_func());
 sub_401160("STM-L2-03 (read_const_data): %d\n", read_const_data());
 sub_401160("STM-L2-04 (access_bss_var): %d\n", access_bss_var());
 sub_401160("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer());
 sub_401160("STM-L2-05 (global_struct_access): %d\n", global_struct_access());
 set_file_static(50);
 sub_401160("STM-L2-06 (file_static): %d\n", get_file_static());
 set_global_callback(double_value);
 sub_401160("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5));
 v0[0] = 100;
 sub_401160("STM-L2-08 (global_heap_store): %d\n", global_heap_store(&v0));
 sub_401160("STM-L2-09 (static_complex_init): %d\n", static_complex_init());
 sub_401160("STM-L3-01 (tls_access): %d\n", tls_access(10));
 sub_401160("STM-L3-02 (init_order_test): %d\n", init_order_test());
 if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 return v1 - *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 return __stack_chk_fail_local();
}


// Function: memop_memset at 0x402969
unsigned int memop_memset(char *a0, unsigned int a1, unsigned int a2)
{
 __x86_get_pc_thunk_ax();
 if (a0 && a1)
 {
 sub_401220(a0, a2, a1);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_memcpy at 0x4029b5
unsigned int memop_memcpy(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __x86_get_pc_thunk_ax();
 if (a0 && a1 && a2)
 {
 sub_401190(a0, a1, a2);
 return *((int *)(a0 + (a2 & 0xfffffffc) - 4));
 }
 return 4294967295;
}


// Function: memop_memmove at 0x402a0e
typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

unsigned int memop_memmove(struct_0_memmove *a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 if (a0 && a1 > 1)
 {
 sub_401170((struct struct_0 *)&a0->field_1, a0, a1 - 1);
 return a0->field_1;
 }
 return 4294967295;
}


// Function: memop_memcmp at 0x402a65
unsigned int memop_memcmp(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 if (a0 && a1 && a2)
 {
 v0 = sub_4011a0(a0, a1, a2);
 return (v0 <= 0 ? (v0 - 0 < 0 ? 4294967295 : 0) : 1);
 }
 return 0;
}


// Function: memop_bzero at 0x402ad0
unsigned int memop_bzero(char *a0, unsigned int a1)
{
 __x86_get_pc_thunk_ax();
 if (a0)
 {
 sub_401220(a0, 0, a1);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_bcopy at 0x402b19
unsigned int memop_bcopy(unsigned int a0, char *a1, unsigned int a2)
{
 __x86_get_pc_thunk_ax();
 if (a0 && a1 && a2)
 {
 sub_401170(a1, a0, a2);
 return *(a1);
 }
 return 4294967295;
}


// Function: memop_unaligned_access at 0x402b6b
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

unsigned int memop_unaligned_access(struct_0_unaligned *a0)
{
 unsigned long v1; // ldt
 unsigned long v2; // gdt
 unsigned short v3; // gs
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = *((int *)_ccall(v1, v2, (unsigned int)v3, 20));
 v4 = (!a0 ? 4294967295 : *((int *)&(a0->padding_0)[1]));
 if (v0 != *((int *)_ccall(v1, v2, (unsigned int)v3, 20)))
 v4 = __stack_chk_fail_local();
 return v4;
}


// Function: memop_memory_barrier at 0x402bbe
unsigned int memop_memory_barrier(unsigned int *ptr)
{
 char v0; // [bp-0x14]
 unsigned int v1; // [bp-0x8]

 __x86_get_pc_thunk_ax();
 if (ptr)
 {
 v1 = *(ptr);
 atomic_exchange(&v0, *((int *)&v0));
 return v1 + *(ptr);
 }
 return 4294967295;
}


// Function: test_memory_op_functions at 0x402bf8
extern const char g_4035c4[];

int test_memory_op_functions()
{
 unsigned long v23; // ldt
 unsigned long v24; // gdt
 unsigned short v25; // gs
 char v0[12]; // [bp-0x188]
 unsigned int v1[1]; // [bp-0x17c]
 unsigned int result; // [bp-0x178]
 unsigned int v3; // [bp-0x174]
 unsigned int v4; // [bp-0x170]
 unsigned int flag1; // [bp-0x16c]
 unsigned int v6; // [bp-0x168]
 unsigned int v7; // [bp-0x164]
 unsigned int v8; // [bp-0x160]
 unsigned int v9; // [bp-0x15c]
 unsigned int v10; // [bp-0x158]
 unsigned int v11; // [bp-0x154]
 unsigned int v12; // [bp-0x150]
 char v13; // [bp-0x14c]
 unsigned int v14; // [bp-0x135]
 char flag2[4]; // [bp-0x131]
 unsigned int v16; // [bp-0x12d]
 unsigned int v17; // [bp-0x129]
 char v18[10]; // [bp-0x125]
 char v19; // [bp-0x11b]
 char v20[256]; // [bp-0x110]
 unsigned int v21; // [bp-0x10]

 v21 = *((int *)_ccall(v23, v24, (unsigned int)v25, 20));
 sub_401200(&g_4035c4);
 v8 = 10;
 v9 = 20;
 v10 = 30;
 v11 = 40;
 v12 = 50;
 memset(&v13, 0, 20);
 sub_401160("MEMOP-L2-01: %d\n", memop_memset(&v20, 10, 65));
 sub_401160("MEMOP-L2-02: %d\n", memop_memcpy(&v13, &v8, 20));
 strncpy(&v19, "HelloWorld", 10);
 strncpy(v0, "\n", 1);
 sub_401160("MEMOP-L2-03: %c\n", memop_memmove(&v19, 10));
 result = 1;
 v3 = 2;
 v4 = 3;
 flag1 = 1;
 v6 = 2;
 v7 = 4;
 sub_401160("MEMOP-L2-04: %d\n", memop_memcmp(&result, &flag1, 12));
 sub_401160("MEMOP-L2-05: %d\n", memop_bzero(&v18, 10));
 v14 = 67305985;
 flag2[0] = 0;
 sub_401160("MEMOP-L2-06: %d\n", memop_bcopy(&v14, &flag2, 4));
 v16 = 0x3020100;
 v17 = 117835012;
 sub_401160("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v16));
 v1[0] = 5;
 sub_401160("MEMOP-L3-02: %d\n", memop_memory_barrier(&v1));
 if (v21 == *((int *)_ccall(v23, v24, (unsigned int)v25, 20)))
 return v21 - *((int *)_ccall(v23, v24, (unsigned int)v25, 20));
 return __stack_chk_fail_local();
}


// Function: main at 0x402e86
unsigned int main()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: __x86.get_pc_thunk_ax at 0x402eb5
int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_402ed5 at 0x402ed5
int sub_402ed5()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402ee0
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4011b0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

int __do_global_ctors_aux()
{
	void (**ctors)();
	void **p;
	void (*ctor)();

	__x86_get_pc_thunk_dx();
	ctors = (void (**)(void))-1;
	if (*(unsigned int*)ctors == 0xffffffff)
		return -1;
	p = (void **)ctors;
	do
	{
		ctor = (void (*)())*p;
		ctor();
		p++;
	} while (*(unsigned int*)p != 0xffffffff);
	return -1;
}


// Function: sub_402f42 at 0x402f42
void sub_402f42()
{
}



/* CRT stub function _fini removed by preprocessor */


