// Angr Decompilation of 2_clang_O3_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */

// Forward declarations for floating-point functions
unsigned int __mulsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int __muldf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11);
int __adddf3(int a0, int a1, int a2, int a3);
int __addsubsf3(int a0, int a1, int a2, int a3);
unsigned int __fixsfsi(unsigned int a0);

// Count Leading Zeros intrinsic
static inline unsigned int Clz(unsigned int x) {
    if (x == 0) return 32;
    unsigned int n = 0;
    if ((x & 0xFFFF0000) == 0) { n += 16; x <<= 16; }
    if ((x & 0xFF000000) == 0) { n += 8; x <<= 8; }
    if ((x & 0xF0000000) == 0) { n += 4; x <<= 4; }
    if ((x & 0xC0000000) == 0) { n += 2; x <<= 2; }
    if ((x & 0x80000000) == 0) { n += 1; }
    return n;
}

// Global constant definitions
unsigned int g_800000 = 0x800000;
unsigned int g_400000 = 0x400000;

// Angr helper function stubs
static inline int arm_g_calculate_condition(int op, unsigned int a, unsigned int b, unsigned int c) {
    (void)op; (void)a; (void)b; (void)c;
    return 0;
}

static inline unsigned int armg_calculate_condition(int op, unsigned int a, unsigned int b, unsigned int c) {
    return arm_g_calculate_condition(op, a, b, c);
}

static inline unsigned int armg_calculate_flag_c(int op, unsigned int a, unsigned int b, unsigned int c) {
    (void)op; (void)a; (void)b; (void)c;
    return 0;
}

static inline unsigned int armg_calculate_flag_v(int op, unsigned int a, unsigned int b, unsigned int c) {
    (void)op; (void)a; (void)b; (void)c;
    return 0;
}

// Function: sub_4003d8 at 0x4003d8
int sub_4003d8()
{
 unsigned int v1; // lr lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40046c at 0x40046c
void sub_40046c()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: process_char at 0x40059c
unsigned int process_char(unsigned int a0)
{
 if ((a0 - 65 & 255) < 26)
 a0 += 32;
 return a0 & 255;
}


// Function: process_short at 0x4005b4
unsigned int process_short(unsigned short a0, unsigned short a1)
{
 return a1 + a0 & 65535;
}


// Function: process_int at 0x4005c4
unsigned int process_int(unsigned int a0)
{
 return 1 | a0 * 2;
}


// Function: process_long at 0x4005d0
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x4005d8
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x4005f0
void process_float()
{
 unsigned int v2; // r0
 unsigned int v3; // r2
 unsigned int v4; // r3
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __mulsf3(0, 0, 0, 0);
 __addsf3(v2, 0x3f000000, v3, v4, 0, 0);
 return;
}


// Function: process_double at 0x40060c
void process_double()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __muldf3(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
 __adddf3(v2, v3, 2576980378, 1069128089);
 return;
}


// Function: process_ld at 0x40063c
void process_ld(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __muldf3(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
 __adddf3(v2, a1, 0, 0x3ff00000);
 return;
}


// Function: process_bool at 0x400664
unsigned int process_bool(unsigned int a0)
{
 unsigned int v0; // r1

 v0 = a0 & 1;
 return (0 < a0 ? 1 : 0) & v0 + -(v0) + (v0 <= 0);
}


// Function: const_param at 0x400684
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x400690
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x4006a0
extern char g_4024fb;

int test_data_types_l1()
{
 unsigned int v1; // r1
 unsigned int v2; // r0
 unsigned int v0; // [bp-0xc]

 puts(&g_4024fb);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", v1);
 printf("DT-L1-06 (process_float): %.2f\n", v1);
 printf("DT-L1-07 (process_double): %.2f\n", v1);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 v2 = printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
 return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: array_1d_stack at 0x4007fc
unsigned int array_1d_stack(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return v0;
}

// Function: array_string at 0x400828
unsigned int array_string(unsigned int a0)
{
 unsigned int v0; // r1
 unsigned int v1; // r1
 unsigned int v2; // r1

 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v0 + 1;
 v0 = v2;
 v1 = v2;
 } while (*((char *)(a0 + v1)));
 return v1 - 0;
}


// Function: array_2d_stack at 0x400844
int array_2d_stack(unsigned int *a0)
{
 return a0[99] + a0[88] + a0[77] + a0[66] + a0[55] + a0[44] + a0[33] + a0[22] + a0[11] + *(a0);
}


// Function: array_3d at 0x400894
unsigned int array_3d(unsigned int a0)
{
 unsigned int i; // r12
 unsigned int v1; // r1
 unsigned int v2; // r12

 i = 0;
 v1 = 0;
 do
 {
 v2 = i + 100;
 v1 = v1;
 i = v2;
 } while (i != 500);
 return v1;
}


// Function: array_vla at 0x40096c
unsigned int array_vla(unsigned int i, unsigned int *a1)
{
 unsigned int v0; // r0
 unsigned int *ptr; // r1
 unsigned int v2; // r0
 unsigned int *v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v2 = v0;
 v3 = a1 + 1;
 v4 = i - 1;
 v5 = *(a1) + v2;
 i = v4;
 v0 = v5;
 a1 = v3;
 } while (i != 1);
 return v0;
}

// Function: array_pointer at 0x400998
unsigned int array_pointer(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 10;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return v0;
}

// Function: pointer_array at 0x4009c4
typedef struct struct_4 {
 unsigned int field_0;
} struct_4;

unsigned int pointer_array(struct_4 **a0, unsigned int a1)
{
 unsigned int v0; // r2
 struct_4 **v1; // r0
 unsigned int result; // r1
 struct_4 **v3; // r0
 unsigned int v4; // r1

 if (a1 < 1)
 return 0;
 v0 = 0;
 if (10 <= a1)
 a1 = 10;
 do
 {
 v1 = a0;
 result = a1;
 v3 = v1 + 1;
 if (*(v1))
 v0 += (*v1)->field_0;
 } while ((v4 = result - 1, a1 = result - 1, a0 = v3, result != 1));
 return v0;
}


// Function: array_complex_index at 0x400a08
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int vvar_26; // decomp artifact
 char v0; // [bp+0x0]

 if ((char)armg_calculate_condition(66, a3, 0, 0))
 return 4294967295;
 vvar_26 = *((int *)&v0);
 if (v0 < a2)
 {
 if (!((char)armg_calculate_condition(178, (armg_calculate_condition(178, a3, 0, 0) ? a3 : a3), (armg_calculate_condition(178, a3, 0, 0) ? a1 : 0), (armg_calculate_condition(178, a3, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, (armg_calculate_condition(178, a3, 0, 0) ? a3 : a3), (armg_calculate_condition(178, a3, 0, 0) ? a1 : 0), (armg_calculate_condition(178, a3, 0, 0) ? 0 : 0))))
 return 4294967295;
 }
 return *((int *)(a0 + (armg_calculate_condition(82, (unsigned int)v0, 0, 0) ? a3 + v0 * a1 : 4294967295) * 4));
}


// Function: array_oob at 0x400a48
unsigned int array_oob(unsigned int *ptr, unsigned int a1)
{
 unsigned int result; // r2
 unsigned int v1; // r1
 unsigned int *v2; // r0
 unsigned int v3; // r2

 if ((char)armg_calculate_condition(66, a1, 0, 0))
 return 0;
 result = a1 + 1;
 v1 = 0;
 do
 {
 v2 = ptr + 1;
 v3 = result - 1;
 v1 += *(ptr);
 result = v3;
 ptr = v2;
 } while (result != 1);
 return v1;
}


// Function: test_array_types at 0x400a7c
extern char g_40251c;

int test_array_types()
{
 unsigned int v126; // r0
 unsigned int flag124; // [bp-0x1fc]
 unsigned int flag123; // [bp-0x1f8]
 unsigned int flag122; // [bp-0x1f4]
 unsigned int flag121; // [bp-0x1f0]
 unsigned int flag120; // [bp-0x1ec]
 unsigned int flag119; // [bp-0x1e8]
 unsigned int flag118; // [bp-0x1e4]
 unsigned int flag117; // [bp-0x1e0]
 unsigned int flag116; // [bp-0x1dc]
 unsigned int flag115; // [bp-0x1d8]
 unsigned int flag114; // [bp-0x1d4]
 unsigned int flag113; // [bp-0x1d0]
 unsigned int flag112; // [bp-0x1cc]
 unsigned int flag111; // [bp-0x1c8]
 unsigned int flag110; // [bp-0x1c4]
 unsigned int flag109; // [bp-0x1c0]
 unsigned int flag108; // [bp-0x1bc]
 unsigned int flag107; // [bp-0x1b8]
 unsigned int flag106; // [bp-0x1b4]
 unsigned int flag105; // [bp-0x1b0]
 unsigned int flag104; // [bp-0x1ac]
 unsigned int flag103; // [bp-0x1a8]
 unsigned int flag102; // [bp-0x1a4]
 unsigned int flag101; // [bp-0x1a0]
 unsigned int flag100; // [bp-0x19c]
 unsigned int flag99; // [bp-0x198]
 unsigned int flag98; // [bp-0x194]
 unsigned int flag97; // [bp-0x190]
 unsigned int flag96; // [bp-0x18c]
 unsigned int flag95; // [bp-0x188]
 unsigned int flag94; // [bp-0x184]
 unsigned int flag93; // [bp-0x180]
 unsigned int flag92; // [bp-0x17c]
 unsigned int flag91; // [bp-0x178]
 unsigned int flag90; // [bp-0x174]
 unsigned int flag89; // [bp-0x170]
 unsigned int flag88; // [bp-0x16c]
 unsigned int flag87; // [bp-0x168]
 unsigned int flag86; // [bp-0x164]
 unsigned int flag85; // [bp-0x160]
 unsigned int flag84; // [bp-0x15c]
 unsigned int flag83; // [bp-0x158]
 unsigned int flag82; // [bp-0x154]
 unsigned int flag81; // [bp-0x150]
 unsigned int flag80; // [bp-0x14c]
 unsigned int flag79; // [bp-0x148]
 unsigned int flag78; // [bp-0x144]
 unsigned int flag77; // [bp-0x140]
 unsigned int flag76; // [bp-0x13c]
 unsigned int flag75; // [bp-0x138]
 unsigned int flag74; // [bp-0x134]
 unsigned int flag73; // [bp-0x130]
 unsigned int flag72; // [bp-0x12c]
 unsigned int flag71; // [bp-0x128]
 unsigned int flag70; // [bp-0x124]
 unsigned int flag69; // [bp-0x120]
 unsigned int flag68; // [bp-0x11c]
 unsigned int flag67; // [bp-0x118]
 unsigned int flag66; // [bp-0x114]
 unsigned int flag65; // [bp-0x110]
 unsigned int flag64; // [bp-0x10c]
 unsigned int flag63; // [bp-0x108]
 unsigned int flag62; // [bp-0x104]
 unsigned int flag61; // [bp-0x100]
 unsigned int flag60; // [bp-0xfc]
 unsigned int flag59; // [bp-0xf8]
 unsigned int flag58; // [bp-0xf4]
 unsigned int flag57; // [bp-0xf0]
 unsigned int flag56; // [bp-0xec]
 unsigned int flag55; // [bp-0xe8]
 unsigned int flag54; // [bp-0xe4]
 unsigned int flag53; // [bp-0xe0]
 unsigned int flag52; // [bp-0xdc]
 unsigned int flag51; // [bp-0xd8]
 unsigned int flag50; // [bp-0xd4]
 unsigned int flag49; // [bp-0xd0]
 unsigned int flag48; // [bp-0xcc]
 unsigned int flag47; // [bp-0xc8]
 unsigned int flag46; // [bp-0xc4]
 unsigned int flag45; // [bp-0xc0]
 unsigned int flag44; // [bp-0xbc]
 unsigned int flag43; // [bp-0xb8]
 unsigned int flag42; // [bp-0xb4]
 unsigned int flag41; // [bp-0xb0]
 unsigned int flag40; // [bp-0xac]
 unsigned int flag39; // [bp-0xa8]
 unsigned int flag38; // [bp-0xa4]
 unsigned int flag37; // [bp-0xa0]
 unsigned int flag36; // [bp-0x9c]
 unsigned int flag35; // [bp-0x98]
 unsigned int flag34; // [bp-0x94]
 unsigned int flag33; // [bp-0x90]
 unsigned int flag32; // [bp-0x8c]
 unsigned int flag31; // [bp-0x88]
 unsigned int flag30; // [bp-0x84]
 unsigned int flag29; // [bp-0x80]
 unsigned int flag28; // [bp-0x7c]
 unsigned int flag27; // [bp-0x78]
 unsigned int flag26; // [bp-0x74]
 unsigned int flag25; // [bp-0x70]
 unsigned int flag24; // [bp-0x6c]
 unsigned int flag23; // [bp-0x68]
 unsigned int flag22; // [bp-0x64]
 unsigned int flag21; // [bp-0x60]
 unsigned int flag20; // [bp-0x5c]
 unsigned int flag19; // [bp-0x58]
 unsigned int flag18; // [bp-0x54]
 unsigned int flag17; // [bp-0x50]
 unsigned int flag16; // [bp-0x4c]
 unsigned int flag15; // [bp-0x48]
 unsigned int flag14; // [bp-0x44]
 unsigned int flag13; // [bp-0x40]
 unsigned int flag12; // [bp-0x3c]
 unsigned int flag11; // [bp-0x38]
 unsigned int flag10; // [bp-0x34]
 unsigned int flag9; // [bp-0x30]
 unsigned int flag8; // [bp-0x2c]
 unsigned int flag7; // [bp-0x28]
 unsigned int flag6; // [bp-0x24]
 unsigned int flag5; // [bp-0x20]
 unsigned int flag4; // [bp-0x1c]
 unsigned int flag3; // [bp-0x18]
 unsigned int flag2; // [bp-0x14]
 unsigned int flag1; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 puts(&g_40251c);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 printf("ARR-L1-03 (array_2d_stack): %d\n", 45);
 result = 1;
 flag1 = 1;
 flag2 = 1;
 flag3 = 1;
 flag4 = 1;
 flag5 = 1;
 flag6 = 1;
 flag7 = 1;
 flag8 = 1;
 flag9 = 1;
 flag10 = 1;
 flag11 = 1;
 flag12 = 1;
 flag13 = 1;
 flag14 = 1;
 flag15 = 1;
 flag16 = 1;
 flag17 = 1;
 flag18 = 1;
 flag19 = 1;
 flag20 = 1;
 flag21 = 1;
 flag22 = 1;
 flag23 = 1;
 flag24 = 1;
 flag25 = 1;
 flag26 = 1;
 flag27 = 1;
 flag28 = 1;
 flag29 = 1;
 flag30 = 1;
 flag31 = 1;
 flag32 = 1;
 flag33 = 1;
 flag34 = 1;
 flag35 = 1;
 flag36 = 1;
 flag37 = 1;
 flag38 = 1;
 flag39 = 1;
 flag40 = 1;
 flag41 = 1;
 flag42 = 1;
 flag43 = 1;
 flag44 = 1;
 flag45 = 1;
 flag46 = 1;
 flag47 = 1;
 flag48 = 1;
 flag49 = 1;
 flag50 = 1;
 flag51 = 1;
 flag52 = 1;
 flag53 = 1;
 flag54 = 1;
 flag55 = 1;
 flag56 = 1;
 flag57 = 1;
 flag58 = 1;
 flag59 = 1;
 flag60 = 1;
 flag61 = 1;
 flag62 = 1;
 flag63 = 1;
 flag64 = 1;
 flag65 = 1;
 flag66 = 1;
 flag67 = 1;
 flag68 = 1;
 flag69 = 1;
 flag70 = 1;
 flag71 = 1;
 flag72 = 1;
 flag73 = 1;
 flag74 = 1;
 flag75 = 1;
 flag76 = 1;
 flag77 = 1;
 flag78 = 1;
 flag79 = 1;
 flag80 = 1;
 flag81 = 1;
 flag82 = 1;
 flag83 = 1;
 flag84 = 1;
 flag85 = 1;
 flag86 = 1;
 flag87 = 1;
 flag88 = 1;
 flag89 = 1;
 flag90 = 1;
 flag91 = 1;
 flag92 = 1;
 flag93 = 1;
 flag94 = 1;
 flag95 = 1;
 flag96 = 1;
 flag97 = 1;
 flag98 = 1;
 flag99 = 1;
 flag100 = 1;
 flag101 = 1;
 flag102 = 1;
 flag103 = 1;
 flag104 = 1;
 flag105 = 1;
 flag106 = 1;
 flag107 = 1;
 flag108 = 1;
 flag109 = 1;
 flag110 = 1;
 flag111 = 1;
 flag112 = 1;
 flag113 = 1;
 flag114 = 1;
 flag115 = 1;
 flag116 = 1;
 flag117 = 1;
 flag118 = 1;
 flag119 = 1;
 flag120 = 1;
 flag121 = 1;
 flag122 = 1;
 flag123 = 1;
 flag124 = 1;
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&flag124));
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 v126 = printf("ARR-L2-04 (array_complex_index): %d\n", 17);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: ptr_single at 0x400d40
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x400d4c
typedef struct struct_ptr_double {
 unsigned int field_0;
} struct_ptr_double;

int ptr_double(struct_ptr_double **a0)
{
 return (*a0)->field_0 + 5;
}


// Define struct_2 globally (used in ptr_triple)
typedef struct struct_2 {
 unsigned int field_0;
 struct struct_2 *field_4;
} struct_2;

// Function: ptr_triple at 0x400d5c
typedef struct struct_3 {
 unsigned int field_0;
} struct_3;

typedef struct struct_triple {
 struct struct_3 *field_0;
} struct_triple;

int ptr_triple(struct_triple **a0)
{
 return (*a0)->field_0->field_0 + 1;
}

// Forward declaration for sub_401640
unsigned int sub_401640(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);


// Function: ptr_increment at 0x400d70
unsigned int ptr_increment(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return *(ptr) + v1;
}


// Function: ptr_offset at 0x400d9c
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x400da4
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x400db0
int ptr_void(void* a0, unsigned int a1)
{
 if (a1 == 1)
 return *((char *)a0);
 if (a1)
 goto LABEL_400dcc;
 return *((int *)a0);
LABEL_400dcc:
 return *((int *)a0);
}


// Function: ptr_const at 0x400dd8
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x400de4
unsigned int ptr_const_ptr(unsigned int *ptr)
{
 unsigned int v0; // r1

 v0 = *(ptr) + 5;
 *(ptr) = v0;
 return v0;
}


// Function: ptr_func_simple at 0x400df8
typedef int (*func_ptr_simple_t)(unsigned int, unsigned int);

int ptr_func_simple(func_ptr_simple_t a0, unsigned int a1)
{
 return a0(a0, a1);
}


// Function: ptr_func_complex at 0x400e04
extern unsigned int g_412f08;
extern unsigned int g_412f0c;

#ifndef NULL
#define NULL ((void*)0)
#endif

typedef int (*func_ptr_t)(unsigned int, void*, void*, unsigned int, unsigned int, unsigned int, void*, int);

int ptr_func_complex(func_ptr_t a0, unsigned int a1)
{
 unsigned int v3; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v3 = a0(a1, &v0, a0, a1, g_412f08, g_412f0c, &v2, *((int *)&v1));
 return a0(a1, &v0, a0, a1, g_412f08, g_412f0c, &v2, *((int *)&v1));
}


// Function: ptr_cast at 0x400e54
int ptr_cast(unsigned int *a0)
{
 return (int)*(a0);
}


// Function: opaque_handle_create at 0x400e5c
int opaque_handle_create()
{
 unsigned int v0; // r0

 return v0;
}


// Function: opaque_handle_op at 0x400e60
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x400e68
extern char g_402537;

int test_pointer_types()
{
 unsigned int v0; // r0

 puts(&g_402537);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 printf("PTR-L2-04 (ptr_increment): %d\n", 15);
 printf("PTR-L2-05 (ptr_offset): %d\n", 30);
 printf("PTR-L2-06 (ptr_diff): %d\n", 4);
 printf("PTR-L2-07 (ptr_void): %d\n", 42);
 printf("PTR-L2-07 (ptr_void): %d\n", 65);
 printf("PTR-L2-08 (ptr_const): %d\n", 20);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 v0 = printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: struct_simple at 0x400f98
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x400fac
unsigned int struct_array(unsigned int *a0, unsigned int i)
{
 unsigned int *v0; // r2
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int *ptr; // r2
 unsigned int *v4; // r2
 unsigned int v5; // r1
 unsigned int v6; // r0

 if (i < 1)
 return 0;
 v0 = a0 + 1;
 v1 = 0;
 do
 {
 v2 = v1;
 ptr = v0;
 v4 = ptr + 1;
 v5 = i - 1;
 v6 = ptr[1] + v2 + ptr[0] + ptr[1];
 v0 = v4;
 v1 = v6;
 i = v5;
 } while (i != 1);
 return ptr[1] + v2 + ptr[0] + ptr[1];
}


// Function: struct_nested at 0x400ff4
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x401004
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x401014
typedef struct struct_ptr_inner {
 unsigned int field_0;
} struct_ptr_inner;

typedef struct struct_ptr_outer {
 unsigned int field_0;
 struct struct_ptr_inner *field_4;
} struct_ptr_outer;

int struct_with_ptr(struct_ptr_outer *idx)
{
 unsigned int v0; // r0

 v0 = idx->field_4->field_0;
 if (!idx->field_4)
 v0 = 0;
 return v0 + idx->field_0;
}


// Function: struct_bitfields at 0x401030
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // r0

 v0 = *(ptr);
 return (v0 & 1) + (v0 >> 6) + (3 & v0 >> 1) + (7 & v0 >> 3);
}


// Function: union_type at 0x401058
int union_type(void* a0, unsigned int a1)
{
 unsigned int v0; // r0

 if (a1 == 1)
 {
 v0 = __fixsfsi(*((int *)a0));
 return __fixsfsi(*((int *)a0));
 }
 return *((int *)*((char *)a0));
}


// Function: union_array at 0x401088
unsigned int union_array(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return *(ptr) + v1;
}


// Function: enum_type at 0x4010b4
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x4010c0
extern unsigned int g_40258c;

int enum_switch(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 5300;
 if (a0 <= 3)
 v0 = &g_40258c;
 return *((int *)(v0 + a0 * 4));
}


// Function: struct_func_ptr at 0x4010e0
typedef struct struct_func_ptr_s {
 char padding_0[4];
 unsigned int field_4;
} struct_func_ptr_s;

int struct_func_ptr(struct_func_ptr_s *a0)
{
 typedef int (*func_t)(void);
 return ((func_t)a0->field_4)();
}


// Function: linked_list at 0x4010ec
typedef struct linked_list_node {
 unsigned int field_0;
 struct linked_list_node *field_4;
} linked_list_node;

linked_list_node * linked_list(linked_list_node *a0)
{
 linked_list_node *result; // r0
 linked_list_node *v1; // r0
 unsigned int v2; // r0
 linked_list_node *ptr; // r1
 unsigned int v4; // r0
 linked_list_node *v5; // r1
 unsigned int v6; // r0

 if (!a0)
 {
 result = NULL;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_4010f8;
 return NULL;
 v1 = result;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_4010f8;
 return a0;
 v1 = a0;
 }
LABEL_4010f8:
 v2 = 0;
 do
 {
 ptr = v1;
 v4 = v2;
 v5 = ptr->field_4;
 v6 = ptr->field_0 + v4;
 v2 = v6;
 v1 = v5;
 } while (ptr->field_4);
 return ptr->field_0 + v4;
}


// Function: doubly_linked_list at 0x401118
typedef struct doubly_linked_list_node {
 unsigned int field_0;
 struct doubly_linked_list_node *field_4;
} doubly_linked_list_node;

doubly_linked_list_node * doubly_linked_list(doubly_linked_list_node *a0)
{
 doubly_linked_list_node *result; // r0
 doubly_linked_list_node *v1; // r0
 unsigned int v2; // r0
 doubly_linked_list_node *ptr; // r1
 unsigned int v4; // r0
 doubly_linked_list_node *v5; // r1
 unsigned int v6; // r0

 if (!a0)
 {
 result = NULL;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401124;
 return NULL;
 v1 = result;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401124;
 return a0;
 v1 = a0;
 }
LABEL_401124:
 v2 = 0;
 do
 {
 ptr = v1;
 v4 = v2;
 v5 = ptr->field_4;
 v6 = ptr->field_0 + v4;
 v2 = v6;
 v1 = v5;
 } while (ptr->field_4);
 return ptr->field_0 + v4;
}


// Function: binary_tree_sum at 0x401144
typedef struct binary_tree_node {
 unsigned int field_0;
 unsigned int field_4;
 struct binary_tree_node *field_8;
} binary_tree_node;

binary_tree_node * binary_tree_sum(binary_tree_node *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 binary_tree_node *result; // r0
 binary_tree_node *v4; // r0
 unsigned int v5; // r0
 binary_tree_node *ptr; // r4
 unsigned int v7; // r5
 unsigned int v8; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 if (!a0)
 {
 result = NULL;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401158;
 return NULL;
 v4 = result;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401158;
 return a0;
 v4 = a0;
 }
LABEL_401158:
 v5 = 0;
 do
 {
 ptr = v4;
 v7 = ptr->field_0 + v5;
 v8 = binary_tree_sum(ptr->field_4, ptr->field_4, ptr->field_0, a3, v0, v1, &v0, v2);
 v5 = v7 + v8;
 v4 = ptr->field_8;
 } while (ptr->field_8);
 return v7 + v8;
}


// Function: binary_tree at 0x40118c
void* binary_tree(void* a0)
{
 unsigned int v4; // r1
 unsigned int v5; // r2
 unsigned int v6; // r3
 void* v7; // r0
 char v0; // [bp+0x0]
 char v1; // [bp+0x4]
 char v2; // [bp+0x8]
 char v3; // [bp+0xc]

 v7 = binary_tree_sum(a0, v4, v5, v6, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
 return binary_tree_sum(a0, v4, v5, v6, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
}


// Function: graph_traverse at 0x401190
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

typedef struct struct_1 {
 struct struct_0 *field_0;
 unsigned int *field_4;
 char padding_8[32];
 unsigned int field_28;
} struct_1;

unsigned int graph_traverse(struct_1 *ptr)
{
 unsigned int v0; // r1
 struct_0 *p; // r2
 struct_2 *v2; // r2
 unsigned int vvar_35;
 unsigned int vvar_49;
 unsigned int vvar_2;

 if (ptr->field_28 < 1)
 return 0;
 vvar_35 = 0;
 v0 = 0;
 p = ptr->field_0;
 if (ptr->field_0)
 goto LABEL_4011cc;
 while (1)
 {
 do
 {
 vvar_49 = vvar_35 + 1;
 if (vvar_2 == ptr->field_28)
 return v0;
 } while ((p = (&ptr->field_0)[vvar_49], !(&ptr->field_0)[vvar_49]));
 do
 {
LABEL_4011cc:
 v2 = p->field_4;
 v0 += p->field_0;
 p = v2;
 } while (p->field_4);
 }
}


// Function: test_composite_types at 0x4011f4


extern char g_402552;

int test_composite_types()
{
 unsigned int v14; // r1
 struct_0 *ptr; // r0
 struct_2 *addr; // r0
 unsigned int v26; // r0
 struct_0 *v16; // r0
 struct_1 *p; // r0
 unsigned int v18; // r1
 struct_1 *v19; // r0
 unsigned int v20; // r2
 unsigned int v21; // r3
 unsigned int v23; // r1
 char v0; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 char v2; // [bp-0x38], Other Possible Types: unsigned int
 char *v3; // [bp-0x34]
 unsigned int flag2; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 unsigned int flag1; // [bp-0x28]
 char *v7; // [bp-0x24]
 unsigned int v8; // [bp-0x20]
 char *v9; // [bp-0x1c]
 unsigned int v10; // [bp-0x18]
 char *v11; // [bp-0x14]
 unsigned int v12; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 puts(&g_402552);
 printf("CMP-L2-01 (struct_simple): %d\n", 6);
 printf("CMP-L2-02 (struct_array): %d\n", 9);
 printf("CMP-L2-03 (struct_nested): %d\n", 105);
 printf("CMP-L2-04 (struct_deep): %d\n", 258);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
 printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
 printf("CMP-L2-07 (union_type): %d\n", 305419896);
 printf("CMP-L2-08 (union_array): %d\n", 60);
 printf("CMP-L2-09 (enum_type): %d\n", 10);
 printf("CMP-L2-10 (enum_switch): %d\n", 50);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
 v14 = 0;
 v8 = 10;
 v12 = 30;
 ptr = &v8;
 result = 0;
 v11 = &v12;
 v10 = 20;
 v9 = &v10;
 do
 {
 v16 = ptr->field_4;
 v14 += ptr->field_0;
 ptr = v16;
 } while (ptr->field_4);
 printf("CMP-L2-12 (linked_list): %d\n", v14);
 p = &v2;
 v18 = 0;
 v5 = 20;
 v7 = &v2;
 flag1 = 0;
 flag2 = 0;
 v2 = 10;
 v3 = &v5;
 do
 {
 v19 = p->field_4;
 v18 += p->field_0;
 p = v19;
 } while (p->field_4);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v18);
 v1 = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v1, 0, v20, v21, *((int *)&v0), 100, 0, 0));
 v23 = 1;
 addr = NULL;
 v26 = printf("CMP-L2-15 (graph_traverse): %d\n", v23);
 return printf("CMP-L2-15 (graph_traverse): %d\n", v23);
}


// Function: main at 0x401440
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: __muldf3 at 0x401460
unsigned int __muldf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11)
{
 unsigned int v2; // r4
 unsigned int v3; // r5
 unsigned int v12; // r5
 unsigned int v13; // cc_op
 unsigned int v14; // cc_dep1
 unsigned int v15; // cc_dep2
 unsigned int v16; // cc_ndep
 unsigned int v21; // cc_op
 unsigned int v4; // cc_op
 unsigned int v22; // cc_dep1
 unsigned int v23; // cc_dep2
 unsigned int v24; // cc_ndep
 unsigned int v5; // cc_dep1
 unsigned int v33; // cc_op
 unsigned int v34; // cc_dep1
 unsigned int v35; // cc_dep2
 unsigned int v36; // cc_ndep
 unsigned int v6; // cc_dep2
 unsigned int v45; // r4
 unsigned int v46; // r6
 unsigned int v47; // r1
 unsigned int v48; // r3
 unsigned int v49; // cc_op
 unsigned int v50; // cc_dep1
 unsigned int v7; // cc_ndep
 unsigned int v51; // cc_dep2
 unsigned int v52; // cc_ndep
 unsigned int v53; // r1
 unsigned int v54; // r3
 unsigned int v55; // r5
 unsigned int v56; // r5
 unsigned int v57; // r6
 unsigned int v58; // r5
 unsigned int v60; // cc_ndep
 unsigned int v8; // cc_op
 unsigned int v61; // r4
 unsigned int v62; // r6
 unsigned int v63; // r5
 unsigned int v64; // cc_dep1
 unsigned int v65; // cc_dep2
 unsigned int v67; // cc_dep1
 unsigned int v68; // r1
 unsigned int v69; // r0
 unsigned int v70; // r12
 unsigned int v9; // cc_dep1
 unsigned int v71; // cc_dep1
 unsigned int v72; // cc_dep2
 unsigned int v73; // cc_ndep
 unsigned int v74; // cc_op
 unsigned int v75; // cc_dep1
 unsigned int v76; // cc_dep2
 unsigned int v77; // cc_ndep
 unsigned int v78; // r1
 unsigned int v79; // r4
 unsigned int v80; // cc_op
 unsigned int v10; // cc_dep2
 unsigned int v81; // cc_dep1
 unsigned int v82; // cc_dep2
 unsigned int v83; // cc_ndep
 unsigned int v84; // r0
 unsigned int v85; // r4
 unsigned int v86; // r4
 unsigned int v87; // r4
 char v88; // r4
 unsigned int v11; // cc_ndep
 unsigned int v93; // r0
 unsigned int vvar_314; // Scope fix
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x10]

 v2 = 2047 & a1 >> 20;
 if ((2047 & a1 >> 20))
 {
 v3 = 2047 & a3 >> 20;
 v8 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 5 : v4);
 v9 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 2047 & a3 >> 20 : v5);
 v10 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? a3 >> 19 & 1 : v6);
 v11 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? armg_calculate_flag_v(v4, v5, v6, v7) : v7);
 if (!armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_401476;
LABEL_401475:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_40147a;
LABEL_401479:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_401640(a0, a1, a2, a3, v34, v35, v36, 0);
 return sub_401640(a0, a1, a2, a3, v34, v35, v36, 0);
 }
 }
 else
 {
 v3 = v12;
 v8 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? 5 : v13);
 v9 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? 2047 & a3 >> 20 : v14);
 v10 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? a3 >> 19 & 1 : v15);
 v11 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? armg_calculate_flag_v(v13, v14, v15, v16) : v16);
 if (armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_401475;
LABEL_401476:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_401479;
LABEL_40147a:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 }
 v45 = v2 + v3;
 v46 = a1 ^ a3;
 v47 = a1 & ~(0xffe00000);
 v48 = a3 & ~(0xffe00000);
 if (a0 || v47 * 0x1000)
 {
 v49 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? 5 : v33);
 v50 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? a2 | v48 * 0x1000 : v34);
 v51 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? v48 >> 20 & 1 : v35);
 v52 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? armg_calculate_flag_v(v33, v34, v35, v36) : v36);
 }
 else
 {
 v49 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? 5 : v33);
 v50 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? a2 | v48 * 0x1000 : v34);
 v51 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? v48 >> 20 & 1 : v35);
 v52 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? armg_calculate_flag_v(v33, v34, v35, v36) : v36);
 }
 v53 = v47 | 0x100000;
 v54 = v48 | 0x100000;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 {
 v55 = ((unsigned long long)a0 * a2 >> 32) + v53 * a2 >> 32;
v56 = v55 + a0 * v54 >> 32;
v57 = v56 + v53 * v54 >> 32;
v58 = v56 + v53 * v54;
v60 = 0;
v61 = v45 - 1023 - (0x200 > v57);
 v62 = v57;
 v63 = v58;
 v64 = v57;
 v65 = 0x200;
 if (0x200 > v62)
 {
 v60 = 0 >> 31 & 1;
 v62 = v57 * 2 + armg_calculate_flag_c(3, v58, v58, 0 >> 31 & 1);
 vvar_314 = 0 * 2;
 v63 = v58 * 2 + (0 >> 31 & 1);
 v64 = v58;
 v65 = v58;
 }
 v67 = v64;
 v68 = v46 & 0x80000000 | v62 * 0x800 | v63 >> 21;
 v69 = v63 * 0x800 | 0 >> 21;
 vvar_314 = 0 * 0x800;
 v70 = v61 - 253;
 if (253 < v61)
 {
 v71 = (armg_calculate_condition(130, v67, v65, v60) ? v70 : v67);
 v72 = (armg_calculate_condition(130, v67, v65, v60) ? 0x700 : v65);
 v73 = (armg_calculate_condition(130, v67, v65, v60) ? 0 : v60);
 if ((char)armg_calculate_condition(130, v71, v72, v73))
 goto LABEL_401544;
LABEL_401504:
 v74 = (armg_calculate_condition(2, v71, v72, v73) ? 5 : 2);
 v75 = (a0 ? v69 >> 1 : v71);
 v76 = (a0 ? v69 & 1 : v72);
 v77 = (a0 ? armg_calculate_flag_v(2, v71, v72, v73) : v73);
 return v69 + armg_calculate_flag_c(v74, v75, v76, v77);
LABEL_401544:
 if ((char)armg_calculate_condition(194, v71, v72, v73))
 return 0;
 }
 }
 else
 {
 v69 = a0 | a2;
 v78 = (v46 & 0x80000000 | v53) ^ v54;
 v79 = v45 - 1023;
 if (1023 < v45)
 {
 v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
 v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
 v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
 v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
 if (!armg_calculate_condition(v80 | 192, v81, v82, v83))
 goto LABEL_401532;
LABEL_401531:
 v78 |= v79 * 0x100000;
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_401538;
 return a0 | a2;
 v1 = v0;
 }
 else
 {
 v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
 v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
 v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
 v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
 if (armg_calculate_condition(v80 | 192, v81, v82, v83))
 goto LABEL_401531;
LABEL_401532:
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_401538;
 return a0 | a2;
 }
LABEL_401538:
 v68 = v78 | 0x100000;
 vvar_314 = 0;
 v61 = v0 - 1;
LABEL_401544a:
 if ((char)armg_calculate_condition(194, v0, 1, 0))
 return 0;
 }
 if (armg_calculate_condition(209, v61, 54, 0))
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_401552;
LABEL_401551:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_401558;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_401551;
LABEL_401552:
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_401558;
 return v84;
 }
LABEL_401558:
 v85 = -(v1);
 v86 = v85 - 32;
 if (32 > v85)
 {
 v87 = v86 + 12;
 if (!((char)armg_calculate_condition(193, v86, 12, 0)))
 {
 v88 = (char)v87 + 20;
 if ((vvar_314) || (v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) * 2)
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31) & ~((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 }
 else
 {
 if (!(vvar_314) && !(v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) * 2)
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31) & ~((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 }
 }
 else if (!vvar_314 && !(v84 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) && !(v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) * 2)
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31) & ~((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
 else
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
}


// Function: sub_401640 at 0x401640
unsigned int sub_401640(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r12
 unsigned int flag3; // r5
 unsigned int v10; // cc_dep2
 unsigned int v11; // cc_ndep
 unsigned int v15; // cc_op
 unsigned int v16; // cc_dep1
 unsigned int v17; // cc_dep2
 unsigned int v18; // cc_ndep
 unsigned int v19; // cc_dep1
 unsigned int flag2; // r4
 unsigned int v20; // cc_dep2
 unsigned int v21; // cc_ndep
 unsigned int v22; // cc_dep1
 unsigned int v23; // cc_dep1
 unsigned int flag1; // cc_dep2
 unsigned int v25; // r2
 unsigned int v26; // cc_dep1
 unsigned int result; // cc_dep2
 unsigned int v3; // cc_dep1
 unsigned int v31; // cc_dep1
 unsigned int v32; // cc_dep2
 unsigned int v33; // cc_ndep
 unsigned int v34; // r0
 unsigned int v35; // r1
 unsigned int v36; // cc_op
 unsigned int v4; // cc_dep2
 unsigned int v37; // cc_dep1
 unsigned int v38; // cc_dep2
 unsigned int v39; // cc_ndep
 unsigned int v40; // cc_dep1
 unsigned int v41; // cc_dep2
 unsigned int v42; // cc_ndep
 unsigned int v43; // cc_dep1
 unsigned int v44; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v47; // cc_dep1
 unsigned int v48; // cc_dep2
 unsigned int v49; // cc_ndep
 unsigned int v50; // r0
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_dep1

 flag3 = v0 & a3 >> 20;
 if ((flag2 ^ v0))
 {
 v6 = (armg_calculate_condition(21, v3, v4, v5) ? flag3 ^ v0 : v3);
 v7 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_40166c;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_40166c:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_401676;
LABEL_401675:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_40167a;
LABEL_401679:
 v36 = (armg_calculate_condition(21, v31, v32, v33) ? 5 : 5);
 v37 = (armg_calculate_condition(21, v31, v32, v33) ? a2 | a3 * 2 : v31);
 v38 = (armg_calculate_condition(21, v31, v32, v33) ? a3 >> 31 & 1 : v32);
 v39 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v36, v37, v38, v39))
 return v34;
 }
 else
 {
 v34 = a0;
 if (armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_401675;
LABEL_401676:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_401679;
LABEL_40167a:
 v36 = (armg_calculate_condition(21, v31, v32, v33) ? 5 : 5);
 v37 = (armg_calculate_condition(21, v31, v32, v33) ? a2 | a3 * 2 : v31);
 v38 = (armg_calculate_condition(21, v31, v32, v33) ? a3 >> 31 & 1 : v32);
 v39 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v36, v37, v38, v39))
 return v34;
 }
 v40 = flag2 ^ v0;
 v41 = armg_calculate_flag_c(v36, v37, v38, v39);
 v42 = armg_calculate_flag_v(v36, v37, v38, v39);
 v43 = v40;
 v44 = v41;
 if (!(flag2 ^ v0))
 {
 v42 = armg_calculate_flag_v(5, v40, v41, v42);
 v43 = v34 | v35 * 0x1000;
 v44 = v35 >> 20 & 1;
 if (v34 || v35 * 0x1000)
 return v34;
 }
 if (!(flag3 ^ v0))
 {
 v47 = a2 | a3 * 0x1000;
 v48 = a3 >> 20 & 1;
 v49 = armg_calculate_flag_v(5, flag3 ^ v0, armg_calculate_flag_c(5, v43, v44, v42), armg_calculate_flag_v(5, v43, v44, v42));
 if (a2 || a3 * 0x1000)
 {
 v50 = a2;
 if (!armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_4016a2;
LABEL_4016a1:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_4016a1;
LABEL_4016a2:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 }
 }
 }
 if (a0 || a1 * 2)
 {
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? a2 | a3 * 2 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? a3 >> 31 & 1 : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 if (!((char)armg_calculate_condition(v15 | 16, v16, v17, v18)))
 return 0;
 }
 else
 {
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? a2 | a3 * 2 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? a3 >> 31 & 1 : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 if (!((char)armg_calculate_condition(v15 | 16, v16, v17, v18)))
 return 0;
 }
 v19 = flag2;
 v20 = armg_calculate_flag_c(v15, v16, v17, v18);
 v21 = armg_calculate_flag_v(v15, v16, v17, v18);
 v22 = v19;
 if (!flag2)
 {
 while (1)
 {
 a0 *= 2;
 a1 = a1 * 2 + (a0 >> 31 & 1);
 v23 = a1 & 0x100000;
 flag1 = 0;
 v21 = armg_calculate_flag_v(5, v19, v20, v21);
 if (!(a1 & 0x100000))
 {
 v19 = v23;
 v20 = flag1;
 if (!((char)armg_calculate_condition(5, v19, 0, v21)))
 break;
 }
 else
 {
 v19 = v23;
 v20 = flag1;
 if (!((char)armg_calculate_condition(5, v19, 0, v21)))
 break;
 }
 }
 v20 = armg_calculate_flag_c(5, v23, 0, v21);
 v21 = armg_calculate_flag_v(5, v23, 0, v21);
 if (!flag3)
 goto LABEL_401620;
 return a0;
 v22 = flag3;
 }
LABEL_401620:
 while (1)
 {
 v25 = a2 * 2;
 a3 = a3 * 2 + (a2 >> 31 & 1);
 v26 = a3 & 0x100000;
 result = 0;
 v21 = armg_calculate_flag_v(5, v22, v20, v21);
 if (!(a3 & 0x100000))
 {
 v22 = v26;
 v20 = result;
 a2 = v25;
 if (!((char)armg_calculate_condition(5, v22, 0, v21)))
 return a0;
 }
 else
 {
 v22 = v26;
 v20 = result;
 a2 = v25;
 if (!((char)armg_calculate_condition(5, v22, 0, v21)))
 return a0;
 }
 }
}


// Function: __mulsf3 at 0x4016cc

unsigned int __mulsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r2
 unsigned int v1; // r3
 unsigned int v10; // cc_op
 unsigned int v79; // cc_ndep
 unsigned int v80; // r0
 unsigned int v81; // r2
 unsigned int v82; // cc_op
 unsigned int v83; // cc_dep1
 unsigned int v84; // cc_dep2
 unsigned int v85; // cc_ndep
 unsigned int v86; // cc_dep1
 unsigned int v87; // cc_dep2
 unsigned int v88; // cc_ndep
 unsigned int v11; // cc_dep1
 unsigned int v89; // r0
 unsigned int v90; // cc_dep1
 unsigned int v91; // cc_dep2
 unsigned int v92; // cc_ndep
 unsigned int v93; // cc_dep1
 unsigned int v94; // cc_dep2
 unsigned int v12; // cc_dep2
 unsigned int v95; // cc_ndep
 unsigned int v96; // cc_dep1
 unsigned int v97; // cc_dep2
 unsigned int v98; // cc_ndep
 unsigned int v99; // cc_dep1
 unsigned int v100; // cc_dep2
 unsigned int v103; // cc_dep1
 unsigned int v104; // cc_dep2
 unsigned int v13; // cc_ndep
 unsigned int v105; // cc_ndep
 unsigned int v18; // cc_op
 unsigned int v19; // cc_dep1
 unsigned int v2; // cc_op
 unsigned int v20; // cc_dep2
 unsigned int v21; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v30; // cc_op
 unsigned int v31; // cc_dep1
 unsigned int v32; // cc_dep2
 unsigned int v33; // cc_ndep
 unsigned int v4; // cc_dep2
 unsigned int v42; // cc_dep1
 unsigned int v43; // cc_dep2
 unsigned int v44; // cc_ndep
 unsigned int v45; // cc_op
 unsigned int v46; // cc_dep1
 unsigned int v47; // cc_dep2
 unsigned int v48; // cc_ndep
 unsigned int v49; // cc_op
 unsigned int v5; // cc_ndep
 unsigned int v50; // cc_dep1
 unsigned int v51; // cc_dep2
 unsigned int v52; // cc_ndep
 unsigned int v53; // r0
 unsigned int v54; // r0
 unsigned int v6; // cc_op
 unsigned int v55; // r1
 unsigned int v7; // cc_dep1
 unsigned int v56; // r1
 unsigned int v8; // cc_dep2
 unsigned int v61; // r2
 unsigned int v62; // r12
 unsigned int result; // r0
 unsigned int v64; // r1
 unsigned int v65; // cc_op
 unsigned int v66; // cc_dep1
 unsigned int v67; // cc_dep2
 unsigned int v68; // cc_ndep
 unsigned int v9; // cc_ndep
 unsigned int v71; // r1
 unsigned int v72; // r3
 unsigned int v73; // r1
 unsigned int v74; // r1
 unsigned int v75; // r0
 unsigned int v76; // r2
 unsigned int v77; // cc_dep1
 unsigned int v78; // cc_dep2

 v0 = 255 & a0 >> 23;
 if ((255 & a0 >> 23))
 {
 v1 = 255 & a1 >> 23;
 v6 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? 5 : v2);
 v7 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? 255 & a1 >> 23 : v3);
 v8 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? a1 >> 22 & 1 : v4);
 v9 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? armg_calculate_flag_v(v2, v3, v4, v5) : v5);
 if (!armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_4016da;
LABEL_4016d9:
 v18 = 5;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(21, v19, v20, v21))
 goto LABEL_4016de;
LABEL_4016dd:
 v30 = 5;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_4017e0;
 else {
 v1 = a3;
 v6 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 5 : v10);
 v7 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 255 & a1 >> 23 : v11);
 v8 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? a1 >> 22 & 1 : v12);
 v9 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_4016d9;
LABEL_4016da:
 v18 = v6;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (armg_calculate_condition(v18 | 16, v19, v20, v21))
 goto LABEL_4016dd;
LABEL_4016de:
 v30 = v18;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_4017e0:
 v1 = 255 & a1 >> 23;
 if ((v0 ^ 255))
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 goto LABEL_401808;
 }
 else
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 {
LABEL_401808:
 if (a0)
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? a0 ^ 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_401812;
LABEL_401811:
 v89 = a1;
 if (!armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_401816;
LABEL_401815:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 goto LABEL_40181a;
 }
 else
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_401811;
LABEL_401812:
 v89 = a0;
 if (armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_401815;
LABEL_401816:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 {
LABEL_40181a:
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_401820:
 v96 = v0 ^ 255;
 v97 = armg_calculate_flag_c(5, v93, v94, v95);
 v98 = armg_calculate_flag_v(5, v93, v94, v95);
 v99 = v96;
 v100 = v97;
 if (!(v0 ^ 255))
 {
 v98 = armg_calculate_flag_v(5, v96, v97, v98);
 v99 = v89 * 0x200;
 v100 = v89 >> 23 & 1;
 if (v89 * 0x200)
 return v89 | 0x7f000000 | 0xc00000;
 }
 if ((v1 ^ 255))
 return (v89 ^ a1) & 0x80000000 | 0x7f000000 | g_800000;
 v103 = a1 * 0x200;
 v104 = a1 >> 23 & 1;
 v105 = armg_calculate_flag_v(5, v1 ^ 255, armg_calculate_flag_c(5, v99, v100, v98), armg_calculate_flag_v(5, v99, v100, v98));
 if (a1 * 0x200)
 {
 if (!((char)armg_calculate_condition(21, v103, v104, v105)))
 return (a1 ^ a1) & 0x80000000 | 0x7f000000 | g_800000;
 return a1 | 0x7f000000 | 0xc00000;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v103, v104, v105)))
 return (v89 ^ a1) & 0x80000000 | 0x7f000000 | g_800000;
 return v89 | 0x7f000000 | 0xc00000;
 }
 }
 }
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
 goto LABEL_401820;
 }
 }
 if ((a0 & 2147483647))
 {
 v45 = (armg_calculate_condition(21, v42, v43, v44) ? 5 : 5);
 v46 = (armg_calculate_condition(21, v42, v43, v44) ? a1 & 2147483647 : v42);
 v47 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v48 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!((char)armg_calculate_condition(v45 | 16, v46, v47, v48)))
 return (a0 ^ a1) & 0x80000000;
 }
 else
 {
 v45 = (armg_calculate_condition(21, v42, v43, v44) ? 5 : 5);
 v46 = (armg_calculate_condition(21, v42, v43, v44) ? a1 & 2147483647 : v42);
 v47 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v48 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!((char)armg_calculate_condition(v45 | 16, v46, v47, v48)))
 return (a0 ^ a1) & 0x80000000;
 }
 v49 = 5;
 v50 = v0;
 v51 = armg_calculate_flag_c(v45, v46, v47, v48);
 v52 = armg_calculate_flag_v(v45, v46, v47, v48);
 v53 = a0;
 if (armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_4017ad;
 else
 goto LABEL_4017ae;
 while (1)
 {
 v53 = v54;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_4017ad:
 v54 = v53 * 2;
 if (!armg_calculate_condition(v49, v50, v51, v52))
 goto LABEL_4017b2;
 goto LABEL_4017b1;
 }
 else
 {
LABEL_4017ae:
 v54 = v53;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_4017b1:
 v49 = 5;
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & g_800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (!armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_4017b6;
 goto LABEL_4017b5;
 }
 else
 {
LABEL_4017b2:
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & g_800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_4017b5:
 v0 -= 1;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 else
 {
LABEL_4017b6:
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 }
 }
 }
 a0 = v54 | a0 & 0x80000000;
 v30 = 5;
 v31 = v1;
 v32 = armg_calculate_flag_c(v49, v50, v51, v52);
 v33 = armg_calculate_flag_v(v49, v50, v51, v52);
 v55 = a1;
 if (armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_4017c9;
 else
 goto LABEL_4017ca;
 while (1)
 {
 v55 = v56;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_4017c9:
 v56 = v55 * 2;
 if (!armg_calculate_condition(v30, v31, v32, v33))
 goto LABEL_4017ce;
 goto LABEL_4017cd;
 }
 else
 {
LABEL_4017ca:
 v56 = v55;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_4017cd:
 v30 = 5;
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & g_800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_4017d2;
 goto LABEL_4017d1;
 }
 else
 {
LABEL_4017ce:
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & g_800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_4017d1:
 v1 -= 1;
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 else
 {
LABEL_4017d2:
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 }
 }
 }
 a1 = v56 | a1 & 0x80000000;
 }
 }
 v61 = v0 + v1;
 v62 = a0 ^ a1;
 result = a0 * 0x200;
 if (a0 * 0x200)
 {
 v64 = a1 * 0x200;
 v65 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? 5 : v30);
 v66 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 * 0x200 : v31);
 v67 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 >> 23 & 1 : v32);
 v68 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v65, v66, v67, v68))
 goto LABEL_40173c;
LABEL_4016f8:
 v71 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5) >> 32;
 v72 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5);
 if (v71 < 0x800000)
 {
 v73 = v71 * 2;
 v74 = (armg_calculate_condition(50, v71, &g_800000, 0) ? v73 | v72 >> 31 : v73);
 if (!armg_calculate_condition(50, v71, &g_800000, 0))
 goto LABEL_401716;
LABEL_401715:
 v74 = v73 | v72 >> 31;
LABEL_401719:
 v72 *= 2;
 }
 else
 {
 v73 = v71;
 if (armg_calculate_condition(50, v71, &g_800000, 0))
 goto LABEL_401715;
LABEL_401716:
 v74 = v73;
 if (armg_calculate_condition(50, v71, &g_800000, 0))
 goto LABEL_401719;
LABEL_40171a:
 }
 v75 = v62 & 0x80000000 | v74;
 v76 = v61 - 127 - (armg_calculate_flag_c(2, v71, 0x800000, 0) ^ 1);
 if (253 >= v76)
 {
 if (v72 == 0x80000000)
 return (v62 & 0x80000000 | v74) + v76 * 0x800000 + (0x80000000 <= v72) & 4294967294;
 return (v62 & 0x80000000 | v74) + v76 * 0x800000 + (0x80000000 <= v72);
 }
 else
 {
 if ((char)armg_calculate_condition(194, v76, 253, 0))
 return (v62 & 0x80000000 | v74) & 0x80000000 | 0x7f000000 | 0x800000;
 }
 }
 else
 {
 v64 = a1;
 v65 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? 5 : v30);
 v66 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 * 0x200 : v31);
 v67 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 >> 23 & 1 : v32);
 v68 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!((char)armg_calculate_condition(v65, v66, v67, v68)))
 goto LABEL_4016f8;
LABEL_40173c:
 v77 = result;
 v78 = armg_calculate_flag_c(v65, v66, v67, v68);
 v79 = armg_calculate_flag_v(v65, v66, v67, v68);
 if (!result)
 v64 *= 0x200;
 v80 = v62 & 0x80000000 | result >> 9 | v64 >> 9;
 v81 = v61 - 127;
 if (127 < v61)
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (!armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_40175a;
LABEL_401759:
 v80 |= v81 * 0x800000;
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_401760;
 return v80 | v81 * 0x800000;
 }
 else
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_401759;
LABEL_40175a:
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_401760;
 return v80;
 }
LABEL_401760:
 v75 = v80 | g_800000;
 v72 = 0;
 v76 = v81 - 1;
 if ((char)armg_calculate_condition(194, v81, 1, 0))
 return (v80 | g_800000) & 0x80000000 | 0x7f000000 | g_800000;
 }
 if (armg_calculate_condition(209, v76, 25, 0))
 {
 v75 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_40177c;
 return v75 & 0x80000000;
 }
 else
 {
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_40177c;
 return v75;
 }
LABEL_40177c:
 if (v72 || (v75 << ((char)(32 - -(v76)) & 31) & (32 - (!(v76) & 255) & 255) - 32 >> 31) * 2)
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1);
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1) & ~((v75 << ((char)(32 - -(v76)) & 31) & (32 - (-(v76) & 255) & 255) - 32 >> 31) >> 31);
}


// Function: __aeabi_drsub at 0x401864
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __adddf3(a0, a1, a2, a3);
 return __adddf3(a0, a1, a2, a3);
}


// Function: __subdf3 at 0x40186c
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __adddf3(a0, a1, a2, a3);
 return __adddf3(a0, a1, a2, a3);
}


// Function: __adddf3 at 0x401870
extern unsigned int g_400000;

int __adddf3(int a0, int a1, int a2, int a3)
{
 unsigned int v1; // r4
 unsigned int v2; // r5
 unsigned int v11; // cc_ndep
 unsigned int v92; // cc_op
 unsigned int v93; // cc_dep2
 unsigned int v94; // cc_dep1
 unsigned int v95; // r2
 unsigned int v96; // r2
 unsigned int v97; // r0
 unsigned int v98; // r1
 unsigned int v100; // r1
 unsigned int v101; // r4
 unsigned int v102; // r4
 char v103; // r4
 unsigned int v104; // cc_op
 unsigned int v105; // cc_dep1
 unsigned int v106; // cc_dep2
 unsigned int v107; // cc_ndep
 unsigned int v108; // cc_dep1
 unsigned int v109; // cc_dep2
 unsigned int v110; // cc_ndep
 unsigned int v111; // cc_dep1
 unsigned int v112; // cc_dep2
 unsigned int v113; // cc_ndep
 unsigned int v114; // cc_dep1
 unsigned int v115; // cc_dep2
 unsigned int v116; // cc_ndep
 unsigned int v117; // r1
 unsigned int v15; // cc_op
 unsigned int v16; // cc_dep1
 unsigned int v17; // cc_dep2
 unsigned int v18; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v25; // cc_op
 unsigned int v26; // cc_dep1
 unsigned int v27; // cc_dep2
 unsigned int v28; // cc_ndep
 unsigned int v29; // r4
 unsigned int v30; // cc_dep1
 unsigned int v4; // cc_dep2
 unsigned int v31; // r5
 unsigned int v32; // r5
 unsigned int v33; // r2
 unsigned int v34; // r3
 unsigned int v35; // cc_op
 unsigned int v36; // cc_dep1
 unsigned int v38; // cc_ndep
 unsigned int v39; // r1
 unsigned int v40; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v41; // r0
 unsigned int v43; // cc_op
 unsigned int v44; // cc_dep1
 unsigned int v46; // cc_ndep
 unsigned int v47; // r3
 unsigned int v48; // cc_dep2
 unsigned int v49; // r2
 unsigned int v6; // cc_dep1
 unsigned int v51; // cc_dep1
 unsigned int v52; // cc_dep2
 unsigned int v53; // cc_ndep
 unsigned int v54; // cc_dep2
 unsigned int v55; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v56; // r4
 unsigned int v57; // cc_dep2
 unsigned int v58; // r12
 unsigned int v59; // r0
 unsigned int v60; // r1
 unsigned int v61; // cc_dep2
 unsigned int v62; // cc_ndep
 char v63; // r5
 unsigned int v64; // r12
 unsigned int v8; // cc_ndep
 unsigned int v65; // r0
 unsigned int v66; // r1
 unsigned int v70; // r1
 unsigned int v71; // cc_dep1
 unsigned int v72; // cc_op
 unsigned int v73; // cc_dep2
 unsigned int v74; // cc_ndep
 unsigned int v9; // cc_dep1
 unsigned int v75; // r12
 unsigned int v76; // r0
 unsigned int v78; // r12
 unsigned int v79; // r0
 unsigned int flag3; // r1
 unsigned int v81; // r4
 unsigned int v82; // cc_op
 unsigned int v83; // cc_dep1
 unsigned int v84; // cc_dep2
 unsigned int v10; // cc_dep2
 unsigned int v85; // cc_ndep
 unsigned int v86; // cc_dep2
 unsigned int v87; // cc_ndep
 unsigned int flag2; // r1
 unsigned int v89; // r3
 unsigned int v90; // r3
 unsigned int v91; // r2
 unsigned int v0; // [bp-0xc]

 v1 = a1 * 2;
 v2 = a3 * 2;
 if (!(v1 ^ v2))
 {
 v6 = (armg_calculate_condition(5, v3, v4, v5) ? a0 ^ a2 : v3);
 v7 = (armg_calculate_condition(5, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(5, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if (!armg_calculate_condition(21, v6, v7, v8))
 goto LABEL_401886;
LABEL_401885:
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? v1 | a0 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_c(5, v6, v7, v8) : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 }
 else
 {
 v6 = (armg_calculate_condition(5, v9, v10, v11) ? a0 ^ a2 : v9);
 v7 = (armg_calculate_condition(5, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(5, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if (armg_calculate_condition(21, v6, v7, v8))
 goto LABEL_401885;
LABEL_401886:
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? v1 | a0 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_c(5, v6, v7, v8) : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 }
 v25 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)));
 v26 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? ~(v2 >> 21) : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)));
 v27 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? v2 >> 20 & 1 : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)));
 v28 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)));
 if (!((char)armg_calculate_condition((armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? ~(v2 >> 21) : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? v2 >> 20 & 1 : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))))))
 {
 v29 = v1 >> 21;
 v30 = v2 >> 21;
 if (v2 >> 21 < v29)
 {
 v32 = -(v31);
 if (!((char)armg_calculate_condition(210, v30, v29, 0)))
 goto LABEL_4018a8;
 }
 else
 {
 v31 = (v2 >> 21) - v29;
 if (!((char)armg_calculate_condition(210, v30, v29, 0)))
 {
LABEL_4018a8:
 v29 += v32;
 v33 = a0 ^ a2;
 v34 = a1 ^ a3;
 a0 ^= v33;
 a1 ^= v34;
 a2 = a0 ^ v33;
 a3 = a1 ^ v34;
 }
 }
 if (54 >= v32)
 goto LABEL_4018cc;
 return a0;
LABEL_4018cc:
 v35 = 5;
 v36 = a1 & 0x80000000;
 v38 = armg_calculate_flag_v(2, v32, 54, 0);
 v39 = 0x100000 | a1 & 1048575;
 v40 = 1;
 v41 = a0;
 if ((a1 & 0x80000000))
 {
 v35 = 2;
 v36 = 0;
 v38 = 0;
 v39 = -(v39) - (a0 > 0);
 v40 = a0;
 v41 = -(a0);
 }
 v43 = 5;
 v44 = a3 & 0x80000000;
 v46 = armg_calculate_flag_v(v35, v36, v40, v38);
 v47 = 0x100000 | a3 & 1048575;
 v48 = 1;
 v49 = a2;
 if ((a3 & 0x80000000))
 {
 v43 = 2;
 v44 = 0;
 v46 = 0;
 v47 = -(v47) - (a2 > 0);
 v48 = a2;
 v49 = -(a2);
 }
 v51 = v29 ^ v32;
 v52 = armg_calculate_flag_c(v43, v44, v48, v46);
 v53 = armg_calculate_flag_v(v43, v44, v48, v46);
 if (!(v29 ^ v32))
 {
 v54 = armg_calculate_flag_c(5, v51, v52, v53);
 v55 = armg_calculate_flag_v(5, v51, v52, v53);
 v47 ^= 0x100000;
 if (!v29)
 {
 v39 ^= 0x100000;
 if (!armg_calculate_condition(5, v29, v54, v55))
 goto LABEL_401a76;
LABEL_401a75:
 v29 += 1;
 if (!armg_calculate_condition(21, v29, v54, v55))
 goto LABEL_401a7a;
LABEL_401a79:
 v32 -= 1;
 }
 else
 {
 v39 = v39;
 if (armg_calculate_condition(5, v29, v54, v55))
 goto LABEL_401a75;
LABEL_401a76:
 if (armg_calculate_condition(21, v29, v54, v55))
 goto LABEL_401a79;
LABEL_401a7a:
 }
 }
 v56 = v29 - 1;
 v57 = v32;
 vvar_286 = (char)(32 - v32);
 if (32 >= v32)
 {
 v58 = v49 << (vvar_286 & 31) & (vvar_286 - 32) >> 31;
 v39 += armg_calculate_flag_c(1, v41, v49 >> ((char)v32 & 31) & (v32 & 255) - 32 >> 31, 0);
 v59 = v41 + (v49 >> ((char)v32 & 31) & (v32 & 255) - 32 >> 31) + (v47 << (vvar_286 & 31) & (vvar_286 - 32) >> 31);
 if ((v32 & 255) < 32)
 {
 v60 = v39 + (v47 >> (char)v32) + armg_calculate_flag_c(2, 32, v57, 0);
 v61 = v47 >> (char)v32;
 v62 = armg_calculate_flag_c(2, 32, v57, 0);
 }
 else
 {
 v60 = v39 + (v47 >> 31) + armg_calculate_flag_c(2, 32, v57, 0);
 v61 = v47 >> 31;
 v62 = armg_calculate_flag_c(2, 32, v57, 0);
 }
 }
 else
 {
 v63 = v32 - 32;
 v58 = (1 <= v49 ? v47 << ((vvar_286 + 32) & 31) & (vvar_286 - 0) >> 31 | 2 : v47 << ((vvar_286 + 32) & 31) & (vvar_286 - 0) >> 31);
 v59 = v41 + (v47 >> (char)(v63 < 32 ? v63 : 31));
 v60 = v39 + (v47 >> 31) + armg_calculate_flag_c(1, v41, v47 >> (char)(v63 < 3232 ? v63 : 31), 0);
 v61 = v47 >> 31;
 v62 = armg_calculate_flag_c(1, v41, v47 >> (char)(v63 < 32 ? v63 : 31), 0);
 }
 v64 = v58;
 v65 = v59;
 v66 = v60;
 if (!((char)armg_calculate_condition(83, v39, v61, v62)))
 {
 v64 = -(v58);
 v65 = -(v59) - (v58 > 0);
 v66 = -(v60) - ((v58 <= 0 ? v59 <= 0 : v59 < 0) ^ 1);
 }
 v70 = v66;
 v71 = v70;
 if (v70 >= 0x100000)
 {
 v72 = 2;
 v73 = 0x200000;
 v74 = 0;
 v75 = v64;
 v76 = v65;
 if (v70 >= 0x200000)
 {
 v75 = (v65 & 1) * 0x80000000 | v64 >> 1;
 v70 = (v56 + 1) * 0x200000;
 v72 = 1;
 v73 = &g_400000;
 v74 = 0;
 v76 = (v70 & 1) * 0x80000000 | v65 >> 1;
 if ((char)armg_calculate_condition(33, v70, &g_400000, 0))
 return 0;
 }
 }
 else
 {
 v78 = v64 * 2;
 v79 = v65 * 2 + (v64 >> 31 & 1);
 flag3 = v70 * 2 + armg_calculate_flag_c(3, v65, v65, v64 >> 31 & 1);
 v81 = v56 - 1;
 if (1 <= v56)
 {
 v72 = 2;
 v70 = (armg_calculate_condition(34, v71, 0x100000, 0) ? flag3 : v71);
 v73 = (armg_calculate_condition(34, v71, 0x100000, 0) ? 0x100000 : 0x100000);
 v74 = (armg_calculate_condition(34, v71, 0x100000, 0) ? 0 : 0);
 v75 = v78;
 v76 = v79;
 if (!((char)armg_calculate_condition(34, v70, v73, v74)))
 goto LABEL_4019b8;
 }
 else
 {
 v72 = 2;
 v70 = (armg_calculate_condition(34, v71, 0x100000, 0) ? flag3 : v71);
 v73 = (armg_calculate_condition(34, v71, 0x100000, 0) ? 0x100000 : 0x100000);
 v74 = (armg_calculate_condition(34, v71, 0x100000, 0) ? 0 : 0);
 v75 = v78;
 v76 = v79;
 if (!((char)armg_calculate_condition(34, v70, v73, v74)))
 {
LABEL_4019b8:
 v86 = armg_calculate_flag_c(2, v70, v73, v74);
 v87 = armg_calculate_flag_v(2, v70, v73, v74);
 if (!flag3)
 {
 flag2 = v79;
 if (!armg_calculate_condition(5, flag3, v86, v87))
 goto LABEL_4019c2;
LABEL_4019c1:
 v79 = 0;
 }
 else
 {
 flag2 = flag3;
 if (armg_calculate_condition(5, flag3, v86, v87))
 goto LABEL_4019c1;
LABEL_4019c2:
 }
 if (!flag2)
 {
 v89 = 32;
 if (!armg_calculate_condition(5, flag3, v86, v87))
 goto LABEL_4019ca;
LABEL_4019c9:
 v89 += 32;
 }
 else
 {
 v89 = Clz(flag2);
 if (armg_calculate_condition(5, flag3, v86, v87))
 goto LABEL_4019c9;
LABEL_4019ca:
 }
 v90 = v89 - 11;
 v91 = v90 - 32;
 v92 = 2;
 v93 = 32;
 v94 = v90;
 v95 = v91;
 if (32 > v94)
 {
 v96 = v91 + 12;
 v92 = 1;
 v93 = 12;
 if (!((char)armg_calculate_condition(209, v91, 12, 0)))
 {
 v97 = flag2 << ((char)v96 + 20 & 31) & (char)v96 - 12 >> 31;
 v98 = flag2 >> ((char)(12 - v96) & 31) & (12 - v96 & 255) - 32 >> 31;
 goto LABEL_401a08;
 }
 else
 {
 v94 = v91;
 v95 = v96 + 20;
 }
 }
 v98 = (armg_calculate_condition(v92 | 208, v94, v93, 0) ? flag2 << ((char)v95 & 31) & (v95 & 255) - 32 >> 31 | v79 >> ((char)(armg_calculate_condition(v92 | 208, v94, v93, 0) ? 32 - v95 : v78) & 31) & ((armg_calculate_condition(v92 | 208, v94, v93, 0) ? 32 - v95 : v78) & 255) - 32 >> 31 : flag2 << ((char)v95 & 31) & (v95 & 255) - 32 >> 31);
 v97 = (armg_calculate_condition(v92 | 208, v94, v93, 0) ? v79 << ((char)v95 & 31) & (v95 & 255) - 32 >> 31 : v79);
LABEL_401a08:
 if (v90 <= v81)
 {
 v100 = v98 + (v81 - v90) * 0x100000;
 if (!armg_calculate_condition(162, v81, v90, 0))
 goto LABEL_401a12;
LABEL_401a11:
 v100 |= v60 & 0x80000000;
 if (!((char)armg_calculate_condition(162, v81, v90, 0)))
 goto LABEL_401a18;
 return v97;
 }
 else
 {
 v100 = v98;
 if (armg_calculate_condition(162, v81, v90, 0))
 goto LABEL_401a11;
LABEL_401a12:
 if (!((char)armg_calculate_condition(162, v81, v90, 0)))
 goto LABEL_401a18;
 return v97;
 }
LABEL_401a18:
 v101 = ~(v0);
 v102 = v101 - 31;
 if (31 <= v101)
 {
 return v100 >> ((char)v102 & 31) & (v102 & 255) - 32 >> 31;
 }
 else if (!((char)armg_calculate_condition(193, v102, 12, 0)))
 {
 v103 = (char)v102 + 32;
 return v97 >> (v103 & 31) & v103 - 32 >> 31 | v100 << ((char)(32 - v103) & 31) & (32 - v103 & 255) - 32 >> 31;
 }
 else
 {
 return v97 >> ((char)(32 - (12 - (v102 + 12))) & 31) & (32 - (12 - (v102 + 12)) & 255) - 32 >> 31 | v100 << ((char)(12 - (v102 + 12)) & 31) & (12 - (v102 + 12) & 255) - 32 >> 31;
 }
 }
 }
 }
 if (v75 == 0x80000000)
 {
 v82 = (armg_calculate_condition(v72, v70, v73, v74) ? 5 : v72);
 v83 = (armg_calculate_condition(v72, v70, v73, v74) ? v76 >> 1 : v70);
 v84 = (armg_calculate_condition(v72, v70, v73, v74) ? v76 & 1 : v73);
 v85 = (armg_calculate_condition(v72, v70, v73, v74) ? armg_calculate_flag_v(v72, v70, v73, v74) : v74);
 }
 else
 {
 v82 = (armg_calculate_condition(v72, v70, v73, v74) ? 5 : v72);
 v83 = (armg_calculate_condition(v72, v70, v73, v74) ? v76 >> 1 : v70);
 v84 = (armg_calculate_condition(v72, v70, v73, v74) ? v76 & 1 : v73);
 v85 = (armg_calculate_condition(v72, v70, v73, v74) ? armg_calculate_flag_v(v72, v70, v73, v74) : v74);
 }
 return v76 + armg_calculate_flag_c(v82, v83, v84, v85);
 }
 else
 {
 if (~(v1 >> 21))
 {
 v104 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? 5 : v25);
 v105 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? ~(v2 >> 21) : v26);
 v106 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? v2 >> 20 & 1 : v27);
 v107 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? armg_calculate_flag_v(v25, v26, v27, v28) : v28);
 if ((char)armg_calculate_condition(v104, v105, v106, v107))
 goto LABEL_401af0;
 }
 else
 {
 v104 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? 5 : v25);
 v105 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? ~(v2 >> 21) : v26);
 v106 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? v2 >> 20 & 1 : v27);
 v107 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? armg_calculate_flag_v(v25, v26, v27, v28) : v28);
 if ((char)armg_calculate_condition(v104, v105, v106, v107))
 {
LABEL_401af0:
 return (armg_calculate_condition(21, ~(v1 >> 21), v1 >> 20 & 1, armg_calculate_flag_v(v104, v105, v106, v107)) ? a0 : a2);
 }
 }
 if (!(v1 ^ v2))
 {
 v108 = (armg_calculate_condition(5, v105, v106, v107) ? a0 ^ a2 : v105);
 v109 = (armg_calculate_condition(5, v105, v106, v107) ? armg_calculate_flag_c(5, v105, v106, v107) : v106);
 v110 = (armg_calculate_condition(5, v105, v106, v107) ? armg_calculate_flag_v(5, v105, v106, v107) : v107);
 if ((char)armg_calculate_condition(5, v108, v109, v110))
 goto LABEL_401aa8;
 }
 else
 {
 v108 = (armg_calculate_condition(5, v105, v106, v107) ? a0 ^ a2 : v105);
 v109 = (armg_calculate_condition(5, v105, v106, v107) ? armg_calculate_flag_c(5, v105, v106, v107) : v106);
 v110 = (armg_calculate_condition(5, v105, v106, v107) ? armg_calculate_flag_v(5, v105, v106, v107) : v107);
 if ((char)armg_calculate_condition(5, v108, v109, v110))
 {
LABEL_401aa8:
 v114 = a1 ^ a3;
 v115 = armg_calculate_flag_c(5, v108, v109, v110);
 v116 = armg_calculate_flag_v(5, v108, v109, v110);
 if ((a1 ^ a3))
 {
 v117 = 0;
 if (!armg_calculate_condition(21, v114, v115, v116))
 goto LABEL_401ab2;
LABEL_401ab1:
 a0 = 0;
 if (!((char)armg_calculate_condition(21, v114, v115, v116)))
 goto LABEL_401ab8;
 return 0;
 }
 else
 {
 v117 = a1;
 if (armg_calculate_condition(21, v114, v115, v116))
 goto LABEL_401ab1;
LABEL_401ab2:
 if (!((char)armg_calculate_condition(21, v114, v115, v116)))
 goto LABEL_401ab8;
 return a0;
 }
LABEL_401ab8:
 if (!v0 >> 21)
 return a0 * 2;
 if (armg_calculate_condition(49, v0, &g_400000, 0))
 {
 if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
 goto LABEL_401adc;
 return a0;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
 goto LABEL_401adc;
 return a0;
 }
LABEL_401adc:
 return 0;
 }
 }
 v111 = v1 | a0;
 v112 = armg_calculate_flag_c(5, v108, v109, v110);
 v113 = armg_calculate_flag_v(5, v108, v109, v110);
 if (!v1 && !a0)
 {
 if (!armg_calculate_condition(5, v111, v112, v113))
 return a0;
 }
 else
 {
 if (!armg_calculate_condition(5, v111, v112, v113))
 return a0;
 }
 return a2;
 }
}


// Function: __aeabi_ui2d at 0x401b1c
unsigned int __aeabi_ui2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // cc_op
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v3 = 0; v4 = 0; v5 = 0; v6 = 0;
 v9 = 0; v10 = 0; v0 = 0; v1 = 0; v2 = 0;
 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_401b28;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_401b28;
 return a0;
 }
LABEL_401b28:
 v2 = v0;
 v1 = v9;
 v0 = v10;
 return v0;
}


// Function: __floatsidf at 0x401b40
unsigned int __floatsidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // cc_op
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_401b4c;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_401b4c;
 return a0;
 }
LABEL_401b4c:
 v2 = v0;
 v1 = v9;
 v0 = v10;
}


// Function: __extendsfdf2 at 0x401b68
unsigned int __extendsfdf2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v3; // r2
 unsigned int v4; // r0
 unsigned int v13; // cc_ndep
 unsigned int v14; // cc_op
 unsigned int v15; // cc_dep1
 unsigned int v16; // cc_dep2
 unsigned int v17; // cc_ndep
 unsigned int v22; // cc_op
 unsigned int v5; // r3
 unsigned int v23; // cc_dep1
 unsigned int v24; // cc_dep2
 unsigned int v25; // cc_ndep
 unsigned int v6; // cc_op
 unsigned int v7; // cc_dep1
 unsigned int v42; // cc_dep1
 unsigned int v43; // cc_ndep
 unsigned int v44; // r5
 unsigned int v45; // r4
 unsigned int v8; // cc_dep2
 unsigned int v9; // cc_ndep
 unsigned int v10; // cc_op
 unsigned int v11; // cc_dep1
 unsigned int v12; // cc_dep2
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v3 = a0 * 2;
 v4 = v3 * 0x10000000;
 if (a0 * 2)
 {
 v5 = v3 & 0xff000000;
 v10 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 5 : v6);
 v11 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v3 & 0xff000000 : v7);
 v12 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 1 : v8);
 v13 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(v10 | 16, v11, v12, v13))
 goto LABEL_401b7e;
LABEL_401b7d:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_401b82;
LABEL_401b81:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_401b88;
 return v4;
 }
 else
 {
 v5 = a3;
 v10 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 5 : v14);
 v11 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? v3 & 0xff000000 : v15);
 v12 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 1 : v16);
 v13 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? armg_calculate_flag_v(v14, v15, v16, v17) : v17);
 if (armg_calculate_condition(v10 | 16, v11, v12, v13))
 goto LABEL_401b7d;
LABEL_401b7e:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_401b81;
LABEL_401b82:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_401b88;
 return v4;
 }
LABEL_401b88:
 if ((v3 & 16777215))
 goto LABEL_401b90;
 return v4;
LABEL_401b90:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_401b9c;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_401b9c;
 return v4;
 }
LABEL_401b9c:
 v2 = v0;
 v1 = v44;
 v0 = v45;
}


// Function: __floatundidf at 0x401bb0
unsigned int __floatundidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v6; // r12
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_401bb8;
 return a0;
LABEL_401bb8:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_0x40195c;
}


// Function: __aeabi_l2d at 0x401bc4
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_401bcc;
 return a0;
LABEL_401bcc:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x401be0;
}


// Function: __aeabi_frsub at 0x401c24
int __aeabi_frsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __addsf3(a0 ^ 0x80000000, 0, 0, 0);
 return __addsf3(a0 ^ 0x80000000, 0, 0, 0);
}



/* CRT stub function __aeabi_fsub removed by preprocessor */



// Function: __addsf3 at 0x401c30
extern unsigned int g_400000;
extern unsigned int g_800000;

int __addsf3(int a0, int a1, int a2, int a3)
{
 unsigned int result; // r2
 unsigned int v1; // cc_op
 unsigned int v10; // cc_dep1
 unsigned int v11; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v17; // cc_op
 unsigned int v18; // cc_dep1
 unsigned int v19; // cc_dep2
 unsigned int v2; // cc_dep1
 unsigned int v20; // cc_ndep
 unsigned int v21; // r2
 unsigned int v22; // r3
 unsigned int v23; // cc_dep1
 unsigned int v24; // r2
 unsigned int v25; // r1
 unsigned int v26; // r0
 unsigned int v27; // r1
 unsigned int v3; // cc_dep2
 unsigned int v28; // r0
 unsigned int v29; // cc_dep1
 unsigned int v30; // cc_ndep
 unsigned int v31; // r1
 unsigned int v32; // cc_dep1
 unsigned int v33; // cc_dep2
 unsigned int v34; // cc_ndep
 unsigned int v35; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v36; // cc_ndep
 unsigned int v37; // r2
 unsigned int v38; // r0
 unsigned int v39; // cc_dep2
 unsigned int v40; // r1
 unsigned int v41; // r3
 unsigned int v42; // r1
 unsigned int v43; // r0
 unsigned int v5; // cc_op
 unsigned int v46; // r0
 unsigned int v47; // r2
 unsigned int v48; // r1
 unsigned int v49; // r0
 unsigned int v51; // r1
 unsigned int v52; // r0
 unsigned int v53; // r2
 unsigned int v6; // cc_dep1
 unsigned int v54; // r0
 unsigned int v55; // r12
 unsigned int v56; // r2
 unsigned int v57; // r0
 unsigned int v58; // r0
 unsigned int v59; // r3
 unsigned int v60; // cc_op
 unsigned int v61; // cc_dep1
 unsigned int v62; // cc_dep2
 unsigned int v7; // cc_dep2
 unsigned int v63; // cc_ndep
 unsigned int v64; // cc_dep1
 unsigned int v65; // cc_dep2
 unsigned int v66; // cc_ndep
 unsigned int v67; // cc_dep1
 unsigned int v68; // cc_dep2
 unsigned int v69; // cc_ndep
 unsigned int v70; // r1
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_op

 result = a0 * 2;
 if (a0 * 2)
 {
 a3 = a1 * 2;
 v5 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? 5 : v1);
 v6 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? a1 * 2 : v2);
 v7 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? a1 >> 31 & 1 : v3);
 v8 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? armg_calculate_flag_v(v1, v2, v3, v4) : v4);
 }
 else
 {
 v5 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? 5 : v9);
 v6 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? a1 * 2 : v10);
 v7 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? a1 >> 31 & 1 : v11);
 v8 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? armg_calculate_flag_v(v9, v10, v11, v12) : v12);
 }
 v17 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)));
 v18 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? ~(a3 >> 24) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)));
 v19 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? a3 >> 23 & 1 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)));
 v20 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)));
 if ((char)armg_calculate_condition((armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? ~(a3 >> 24) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? a3 >> 23 & 1 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)))))
 {
 v59 = a1 * 2;
 if (~(result >> 24))
 {
 v60 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? 5 : v17);
 v61 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? ~(v59 >> 24) : v18);
 v62 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? v59 >> 23 & 1 : v19);
 v63 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? armg_calculate_flag_v(v17, v18, v19, v20) : v20);
 if ((char)armg_calculate_condition(v60, v61, v62, v63))
 {
 v70 = ((!~(result >> 24) ? ~(v59 >> 24) : ~(result >> 24)) ? (~(result >> 24) ? a1 : a0) : a1);
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | &g_400000);
 }
 }
 else
 {
 v60 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? 5 : v17);
 v61 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? ~(v59 >> 24) : v18);
 v62 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? v59 >> 23 & 1 : v19);
 v63 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? armg_calculate_flag_v(v17, v18, v19, v20) : v20);
 if ((char)armg_calculate_condition(v60, v61, v62, v63))
 {
 v70 = ((!~(result >> 24) ? ~(v59 >> 24) : ~(result >> 24)) ? (~(result >> 24) ? a1 : a0) : a1);
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | &g_400000);
 }
 }
 v64 = result ^ v59;
 v65 = armg_calculate_flag_c(v60, v61, v62, v63);
 v66 = armg_calculate_flag_v(v60, v61, v62, v63);
 if ((result ^ v59))
 {
 if (!result)
 return a1;
 return a0;
 }
 v67 = a0 ^ a1;
 v68 = armg_calculate_flag_c(5, v64, v65, v66);
 v69 = armg_calculate_flag_v(5, v64, v65, v66);
 if ((a0 ^ a1))
 {
 a0 = 0;
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_401d6c;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_401d6c;
 return a0;
 }
LABEL_401d6c:
 if (!(result & 0xff000000))
 {
 if (armg_calculate_condition(37, a0 * 2, a0 >> 31 & 1, armg_calculate_flag_v(5, result & 0xff000000, 1, armg_calculate_flag_v(5, v67, v68, v69))))
 return a0 * 2 | 0x80000000;
 return a0 * 2;
 }
 if (armg_calculate_condition(49, result, 0x2000000, 0))
 {
 a0 = &(&g_800000)[a0];
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_401d8c;
 return &(&g_800000)[a0];
 }
 else
 {
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_401d8c;
 return a0;
 }
LABEL_401d8c:
 v41 = a0 & 0x80000000;
LABEL_401d90:
 return v41 | 0x7f000000 | &g_800000;
 }
 v21 = result >> 24;
 v22 = (a3 >> 24) - v21;
 v23 = a3 >> 24;
 if (v21 < a3 >> 24)
 {
 v24 = v21 + v22;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_401c56;
LABEL_401c55:
 v25 = a0 ^ a1;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_401c5a;
LABEL_401c59:
 v26 = v25 ^ a0;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_401c5e;
LABEL_401c5d:
 v27 = v26 ^ v25;
 if (!armg_calculate_condition(178, v23, v21, 0))
 goto LABEL_401c62;
 goto LABEL_401c61;
 }
 else
 {
 v24 = v21;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_401c55;
LABEL_401c56:
 v25 = a1;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_401c59;
LABEL_401c5a:
 v26 = a0;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_401c5d;
LABEL_401c5e:
 v27 = v25;
 if (armg_calculate_condition(178, v23, v21, 0))
 {
LABEL_401c61:
 v22 = -(v22);
 }
 else
 {
LABEL_401c62:
 }
 }
 if (25 >= v22)
 goto LABEL_401c6c;
 return v26;
LABEL_401c6c:
 v28 = (v26 | &g_800000) & 16777215;
 if ((v26 & 0x80000000))
 v28 = -(v28);
 v29 = v27 & 0x80000000;
 v30 = armg_calculate_flag_v(5, v26 & 0x80000000, 1, armg_calculate_flag_v(2, v22, 25, 0));
 v31 = (v27 | &g_800000) & 16777215;
 if ((v27 & 0x80000000))
 v31 = -(v31);
 v32 = v24 ^ v22;
 v33 = armg_calculate_flag_c(5, v29, 1, v30);
 v34 = armg_calculate_flag_v(5, v29, 1, v30);
 if (!(v24 ^ v22))
 {
 v35 = armg_calculate_flag_c(5, v32, v33, v34);
 v36 = armg_calculate_flag_v(5, v32, v33, v34);
 v31 ^= &g_800000;
 if (!v24)
 {
 v28 ^= &g_800000;
 if (!armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_401d32;
LABEL_401d31:
 v24 += 1;
 if (!armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_401d36;
LABEL_401d35:
 v22 -= 1;
 }
 else
 {
 v28 = v28;
 if (armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_401d31;
LABEL_401d32:
 if (armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_401d35;
LABEL_401d36:
 }
 }
 v37 = v24 - 1;
 if ((v22 & 255) < 32)
 {
 v38 = v28 + (v31 >> (char)v22);
 v39 = v31 >> (char)v22;
 }
 else
 {
 v38 = v28 + (v31 >> 31);
 v39 = v31 >> 31;
 }
 v40 = v31 << ((char)(32 - v22) & 31) & (32 - v22 & 255) - 32 >> 31;
 v41 = v38 & 0x80000000;
 v42 = v40;
 v43 = v38;
 if (!((char)armg_calculate_condition(81, v28, v39, 0)))
 {
 v42 = -(v40);
 v43 = -(v38) - (v40 > 0);
 }
 v46 = v43;
 if (v46 >= &g_800000)
 {
 v47 = v37;
 v48 = v42;
 v49 = v46;
 if (v49 >= 0x1000000 && (v48 = (v46 & 1) * 0x80000000 | v42 >> 1, v47 = v37 + 1, v49 = v46 >> 1, 254 <= v47))
 goto LABEL_401d90;
 }
 else
 {
 v51 = v42 * 2;
 v52 = v46 * 2 + (v42 >> 31 & 1);
 v53 = v37 - 1;
 if (1 <= v37)
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, &g_800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, &g_800000, 0) ? &g_800000 : &g_800000), (armg_calculate_condition(34, v46, &g_800000, 0) ? 0 : 0))))
 goto LABEL_401d00;
 }
 else
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, &g_800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, &g_800000, 0) ? &g_800000 : &g_800000), (armg_calculate_condition(34, v46, &g_800000, 0) ? 0 : 0))))
 {
LABEL_401d00:
 v55 = (!v52 ? 32 : Clz(v52)) - 8;
 v56 = v53 - v55;
 if (v55 <= v53)
 {
 v58 = v57 + v56 * &g_800000;
 if (!armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_401d16;
LABEL_401d15:
 v56 = -(v56);
 }
 else
 {
 v57 = v52 << ((char)v55 & 31) & (v55 & 255) - 32 >> 31;
 if (armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_401d15;
LABEL_401d16:
 }
 return (armg_calculate_condition(178, v53, v55, 0) ? (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) : v38 & 0x80000000 | (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) >> ((char)v56 & 31) & (v56 & 255) - 32 >> 31);
 }
 }
 }
 v54 = v49 + v47 * &g_800000 + (0x80000000 <= v48);
 if (v48 == 0x80000000)
 v54 &= 4294967294;
 return v54 | v38 & 0x80000000;
}


// Function: __aeabi_ui2f at 0x401dc0
extern unsigned int g_800000;

unsigned int __aeabi_ui2f(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v2; // r3

 if (a0)
 goto LABEL_401dd8;
 return a0;
LABEL_401dd8:
 v0 = (!a0 ? 32 : Clz(a0));
 v1 = v0 - 8;
 v2 = 0x4a800000 - v1 * &g_800000;
 if (v0 >= 8)
 {
 if ((0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) == 0x80000000)
 return v2 + (a0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) + (0 >> ((char)(32 - v1) & 31) & (32 - v1 & 255) - 32 >> 31) + (0x80000000 <= (0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31)) & 4294967294;
 return v2 + (a0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) + (0 >> ((char)(32 - v1) & 31) & (32 - v1 & 255) - 32 >> 31) + (0x80000000 <= (0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31));
 }
 else
 {
 if (!(a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) * 2)
 return v2 + (a0 >> ((char)(32 - ((char)v1 + 32)) & 31) & (32 - ((char)v1 + 32) & 255) - 32 >> 31) + ((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31 & 1) & ~((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31);
 return v2 + (a0 >> ((char)(32 - ((char)v1 + 32)) & 31) & (32 - ((char)v1 + 32) & 255) - 32 >> 31) + ((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31 & 1);
 }
}


// Function: __floatsisf at 0x401dc8
int __floatsisf(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2

 if (!a0)
 return 0;
 v0 = (!a0 ? 32 : Clz(a0));
 v1 = v0 - 8;
 return 0x4a800000 - v1 * 0x800000 + (a0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31);
}


// Function: __floatundisf at 0x401de8
unsigned int __floatundisf(unsigned int a0, unsigned int a1)
{
 if (!a0 && !a1)
 return 0;
 if (!a1)
 {
 unsigned int v0 = (!a0 ? 32 : Clz(a0));
 unsigned int v1 = v0 - 8;
 return 0x4a800000 - v1 * 0x800000 + (a0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31);
 }
 return 0;
}


// Function: __aeabi_l2f at 0x401df8
unsigned int __aeabi_l2f(unsigned int a0, unsigned int a1)
{
 if (!a0 && !a1)
 return 0;
 if (!((a1 & 0x80000000) >> 31))
 return __floatundisf(a0, a1);
 return 0;
}


// Function: __fixsfsi at 0x401e74
unsigned int __fixsfsi(unsigned int a0)
{
 unsigned int v0; // r2

 v0 = a0 * 2;
 if (v0 < 0x7f000000)
 {
 return 0;
 }
 else if (158 <= v0 >> 24)
 {
 if (158 - (v0 >> 24) == 4294967199 && a0 * 0x200)
 return 0;
 if ((a0 & 0x80000000))
 return a0 & 0x80000000;
 return 2147483647;
 }
 else if ((a0 & 0x80000000))
 {
 return -((a0 * 0x100 | 0x80000000) >> ((char)(158 - (v0 >> 24)) & 31) & (158 - (v0 >> 24) & 255) - 32 >> 31);
 }
 else
 {
 return (a0 * 0x100 | 0x80000000) >> ((char)(158 - (v0 >> 24)) & 31) & (158 - (v0 >> 24) & 255) - 32 >> 31;
 }
}

/* CRT stub function _fini removed by preprocessor */


