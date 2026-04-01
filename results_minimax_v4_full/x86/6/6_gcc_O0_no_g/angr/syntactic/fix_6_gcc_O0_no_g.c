// Angr Decompilation of 6_gcc_O0_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */
#include <stdbool.h>

// Forward declarations for __x86.get_pc_thunk_* functions
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(void);
int __x86_get_pc_thunk_ax(void);

// Forward declaration for thread_tls_test
unsigned int thread_tls_test(unsigned int a0);

// Define struct_0 to cover all field offsets used in the binary
typedef struct struct_0 {
 char padding_0[168];
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
 unsigned int field_fc;
 unsigned int field_100;
 unsigned int field_104;
 unsigned int field_108;
 char padding_1[18187 + 332];
 unsigned int field_470b;
 unsigned int field_470f;
 char padding_2[15954 + 452];
 unsigned int field_3e52;
} struct_0;

// Define struct_1 for CRT functions
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

// Global variable declaration
extern struct_0 *g_406ff4;

int _init()
{
 if (g_406ff4)
 g_406ff4();
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
void sub_40113e()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
int sub_401140()
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
int sub_401150()
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
int sub_401160()
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
int sub_401170()
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
int sub_401180()
{
 sub_401030(160);
 return;
}


// Function: sub_40118e at 0x40118e
void sub_40118e()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 sub_401030(168);
 return;
}


// Function: sub_40119e at 0x40119e
void sub_40119e()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0()
{
 sub_401030(176);
 return;
}


// Function: sub_4011ae at 0x4011ae
void sub_4011ae()
{
 sub_4011b0();
 return;
}


// Function: sub_4011b0 at 0x4011b0
int sub_4011b0()
{
 sub_401030(184);
 return;
}


// Function: sub_4011be at 0x4011be
void sub_4011be()
{
 sub_4011c0();
 return;
}


// Function: sub_4011c0 at 0x4011c0
int sub_4011c0()
{
 sub_401030(192);
 return;
}


// Function: sub_4011ce at 0x4011ce
void sub_4011ce()
{
 sub_4011d0();
 return;
}


// Function: sub_4011d0 at 0x4011d0
int sub_4011d0()
{
 sub_401030(200);
 return;
}


// Function: sub_4011de at 0x4011de
void sub_4011de()
{
 sub_4011e0();
 return;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0()
{
 sub_401030(208);
 return;
}


// Function: sub_4011ee at 0x4011ee
void sub_4011ee()
{
 sub_4011f0();
 return;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0()
{
 sub_401030(216);
 return;
}


// Function: sub_4011fe at 0x4011fe
void sub_4011fe()
{
 sub_401200();
 return;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 sub_401030(224);
 return;
}


// Function: sub_40120e at 0x40120e
void sub_40120e()
{
 sub_401210();
 return;
}


// Function: sub_401210 at 0x401210
int sub_401210()
{
 sub_401030(232);
 return;
}


// Function: sub_40121e at 0x40121e
void sub_40121e()
{
 sub_401220();
 return;
}


// Function: sub_401220 at 0x401220
int sub_401220()
{
 sub_401030(240);
 return;
}


// Function: sub_40122e at 0x40122e
void sub_40122e()
{
 sub_401230();
 return;
}


// Function: sub_401230 at 0x401230
int sub_401230()
{
 sub_401030(248);
 return;
}


// Function: sub_40123e at 0x40123e
void sub_40123e()
{
 sub_401240();
 return;
}


// Function: sub_401240 at 0x401240
int sub_401240()
{
 sub_401030(0x100);
 return;
}


// Function: sub_40124e at 0x40124e
void sub_40124e()
{
 sub_401250();
 return;
}


// Function: sub_401250 at 0x401250
int sub_401250()
{
 sub_401030(264);
 return;
}


// Function: sub_40125e at 0x40125e
void sub_40125e()
{
 sub_401260();
 return;
}


// Function: sub_401260 at 0x401260
int sub_401260()
{
 sub_401030(272);
 return;
}


// Function: sub_40126e at 0x40126e
void sub_40126e()
{
 sub_401270();
 return;
}


// Function: sub_401270 at 0x401270
int sub_401270()
{
 sub_401030(280);
 return;
}


// Function: sub_40127e at 0x40127e
void sub_40127e()
{
 sub_401280();
 return;
}


// Function: sub_401280 at 0x401280
int sub_401280()
{
 sub_401030(288);
 return;
}


// Function: sub_40128e at 0x40128e
void sub_40128e()
{
 sub_401290();
 return;
}


// Function: sub_401290 at 0x401290
int sub_401290()
{
 sub_401030(296);
 return;
}


// Function: sub_40129e at 0x40129e
void sub_40129e()
{
 sub_4012a0();
 return;
}


// Function: sub_4012a0 at 0x4012a0
int sub_4012a0()
{
 sub_401030(304);
 return;
}


// Function: sub_4012ae at 0x4012ae
void sub_4012ae()
{
 sub_4012b0();
 return;
}


// Function: sub_4012b0 at 0x4012b0
int sub_4012b0()
{
 sub_401030(312);
 return;
}


// Function: sub_4012be at 0x4012be
void sub_4012be()
{
 sub_4012c0();
 return;
}


// Function: sub_4012c0 at 0x4012c0
int sub_4012c0()
{
 sub_401030(320);
 return;
}


// Function: sub_4012ce at 0x4012ce
void sub_4012ce()
{
 sub_4012d0();
 return;
}


// Function: sub_4012d0 at 0x4012d0
int sub_4012d0()
{
 sub_401030(328);
 return;
}


// Function: sub_4012de at 0x4012de
void sub_4012de()
{
 sub_4012e0();
 return;
}


// Function: sub_4012e0 at 0x4012e0
int sub_4012e0()
{
 sub_401030(336);
 return;
}


// Function: sub_4012ee at 0x4012ee
void sub_4012ee()
{
 sub_4012f0();
 return;
}


// Function: sub_4012f0 at 0x4012f0
int sub_4012f0()
{
 sub_401030(344);
 return;
}


// Function: sub_4012fe at 0x4012fe
void sub_4012fe()
{
 sub_401300();
 return;
}


// Function: sub_401300 at 0x401300
int sub_401300()
{
 sub_401030(352);
 return;
}


// Function: sub_40130e at 0x40130e
void sub_40130e()
{
 sub_401310();
 return;
}


// Function: sub_401310 at 0x401310
int sub_401310()
{
 sub_401030(360);
 return;
}


// Function: sub_40131e at 0x40131e
void sub_40131e()
{
 sub_401320();
 return;
}


// Function: sub_401320 at 0x401320
int sub_401320()
{
 sub_401030(368);
 return;
}


// Function: sub_40132e at 0x40132e
void sub_40132e()
{
 sub_401330();
 return;
}


// Function: sub_401330 at 0x401330
int sub_401330()
{
 sub_401030(376);
 return;
}


// Function: sub_40133e at 0x40133e
void sub_40133e()
{
 sub_401340();
 return;
}


// Function: sub_401340 at 0x401340
int sub_401340()
{
 sub_401030(384);
 return;
}


// Function: sub_40134e at 0x40134e
void sub_40134e()
{
 sub_401350();
 return;
}


// Function: sub_401350 at 0x401350
int sub_401350()
{
 sub_401030(392);
 return;
}


// Function: sub_40135e at 0x40135e
void sub_40135e()
{
 sub_401360();
 return;
}


// Function: sub_401360 at 0x401360
int sub_401360()
{
 sub_401030(400);
 return;
}


// Function: sub_40136e at 0x40136e
void sub_40136e()
{
 sub_401370();
 return;
}


// Function: sub_401370 at 0x401370
int sub_401370()
{
 sub_401030(408);
 return;
}


// Function: sub_40137e at 0x40137e
void sub_40137e()
{
 sub_401380();
 return;
}


// Function: sub_401380 at 0x401380
int sub_401380()
{
 sub_401030(416);
 return;
}


// Function: sub_40138e at 0x40138e
void sub_40138e()
{
 sub_401390();
 return;
}


// Function: sub_401390 at 0x401390
int sub_401390()
{
 sub_401030(424);
 return;
}


// Function: sub_40139e at 0x40139e
void sub_40139e()
{
 sub_4013a0();
 return;
}


// Function: sub_4013a0 at 0x4013a0
int sub_4013a0()
{
 sub_401030(432);
 return;
}


// Function: sub_4013ae at 0x4013ae
void sub_4013ae()
{
 sub_4013b0();
 return;
}


// Function: sub_4013b0 at 0x4013b0
int sub_4013b0()
{
 sub_401030(440);
 return;
}


// Function: sub_4013be at 0x4013be
void sub_4013be()
{
 sub_4013c0();
 return;
}


// Function: sub_4013c0 at 0x4013c0
int sub_4013c0()
{
 sub_401030(448);
 return;
}


// Function: sub_4013ce at 0x4013ce
void sub_4013ce()
{
 sub_4013d0();
 return;
}


// Function: sub_4013d0 at 0x4013d0
int sub_4013d0()
{
 sub_401030(456);
 return;
}


// Function: sub_4013de at 0x4013de
void sub_4013de()
{
 sub_4013e0();
 return;
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0()
{
 sub_401030(464);
 return;
}


// Function: sub_4013ee at 0x4013ee
int sub_4013ee()
{
 sub_4013f0();
 return;
}


// Jump table for switch statement at sub_401030
// Cases: 0-455 in increments of 8 (0, 8, 16, 24, ..., 448, 456)
int sub_4013f0()
{
 // This function handles the switch jump table
 // The actual switch case handlers are sub_401040 through sub_4013d0
 struct_0 *v1; // ebx

 // This is a switch statement - field_fc contains the case index
 switch (v1->field_fc) {
 default:
 case 0: sub_401040(); break;
 case 8: sub_401050(); break;
 case 16: sub_401060(); break;
 case 24: sub_401070(); break;
 case 32: sub_401080(); break;
 case 40: sub_401090(); break;
 case 48: sub_4010a0(); break;
 case 56: sub_4010b0(); break;
 case 64: sub_4010c0(); break;
 case 72: sub_4010d0(); break;
 case 80: sub_4010e0(); break;
 case 88: sub_4010f0(); break;
 case 96: sub_401100(); break;
 case 104: sub_401110(); break;
 case 112: sub_401120(); break;
 case 120: sub_401130(); break;
 case 128: sub_401140(); break;
 case 136: sub_401150(); break;
 case 144: sub_401160(); break;
 case 152: sub_401170(); break;
 case 160: sub_401180(); break;
 case 168: sub_401190(); break;
 case 176: sub_4011a0(); break;
 case 184: sub_4011b0(); break;
 case 192: sub_4011c0(); break;
 case 200: sub_4011d0(); break;
 case 208: sub_4011e0(); break;
 case 216: sub_4011f0(); break;
 case 224: sub_401200(); break;
 case 232: sub_401210(); break;
 case 240: sub_401220(); break;
 case 248: sub_401230(); break;
 case 256: sub_401240(); break;
 case 264: sub_401250(); break;
 case 272: sub_401260(); break;
 case 280: sub_401270(); break;
 case 288: sub_401280(); break;
 case 296: sub_401290(); break;
 case 304: sub_4012a0(); break;
 case 312: sub_4012b0(); break;
 case 320: sub_4012c0(); break;
 case 328: sub_4012d0(); break;
 case 336: sub_4012e0(); break;
 case 344: sub_4012f0(); break;
 case 352: sub_401300(); break;
 case 360: sub_401310(); break;
 case 368: sub_401320(); break;
 case 376: sub_401330(); break;
 case 384: sub_401340(); break;
 case 392: sub_401350(); break;
 case 400: sub_401360(); break;
 case 408: sub_401370(); break;
 case 416: sub_401380(); break;
 case 424: sub_401390(); break;
 case 432: sub_4013a0(); break;
 case 440: sub_4013b0(); break;
 case 448: sub_4013c0(); break;
 case 456: sub_4013d0(); break;
 }
 return 0;
}


// Function: sub_4013fa at 0x4013fa
int sub_4013fa()
{
 sub_401400();
 return;
}


// Function: sub_401400 at 0x401400
int sub_401400()
{
 return 0;
}


// Function: sub_40140a at 0x40140a
int sub_40140a()
{
 sub_401410();
 return;
}


// Function: sub_401410 at 0x401410
int sub_401410()
{
 return 0;
}


// Function: sub_40141a at 0x40141a
int sub_40141a()
{
 sub_401420();
 return;
}


// Function: sub_401420 at 0x401420
int sub_401420()
{
 return 0;
}


// Function: sub_40142a at 0x40142a
int sub_40142a()
{
 sub_401430();
 return;
}


// Function: sub_401430 at 0x401430
int sub_401430()
{
 return 0;
}


// Function: sub_40143a at 0x40143a
int sub_40143a()
{
 sub_401440();
 return;
}


// Function: sub_401440 at 0x401440
int sub_401440()
{
 return 0;
}


// Function: sub_40144a at 0x40144a
int sub_40144a()
{
 sub_401450();
 return;
}


// Function: sub_401450 at 0x401450
int sub_401450()
{
 return 0;
}


// Function: sub_40145a at 0x40145a
int sub_40145a()
{
 sub_401460();
 return;
}


// Function: sub_401460 at 0x401460
int sub_401460()
{
 return 0;
}


// Function: sub_40146a at 0x40146a
int sub_40146a()
{
 sub_401470();
 return;
}


// Function: sub_401470 at 0x401470
int sub_401470()
{
 return 0;
}


// Function: sub_40147a at 0x40147a
int sub_40147a()
{
 sub_401480();
 return;
}


// Function: sub_401480 at 0x401480
int sub_401480()
{
 return 0;
}


// Function: sub_40148a at 0x40148a
int sub_40148a()
{
 sub_401490();
 return;
}


// Function: sub_401490 at 0x401490
int sub_401490()
{
 return 0;
}


// Function: sub_40149a at 0x40149a
int sub_40149a()
{
 sub_4014a0();
 return;
}


// Function: sub_4014a0 at 0x4014a0
int sub_4014a0()
{
 return 0;
}


// Function: sub_4014aa at 0x4014aa
int sub_4014aa()
{
 sub_4014b0();
 return;
}


// Function: sub_4014b0 at 0x4014b0
int sub_4014b0()
{
 return 0;
}


// Function: sub_4014ba at 0x4014ba
int sub_4014ba()
{
 sub_4014c0();
 return;
}


// Function: sub_4014c0 at 0x4014c0
int sub_4014c0()
{
 return 0;
}


// Function: sub_4014ca at 0x4014ca
int sub_4014ca()
{
 sub_4014d0();
 return;
}


// Function: sub_4014d0 at 0x4014d0
int sub_4014d0()
{
 return 0;
}


// Function: sub_4014da at 0x4014da
int sub_4014da()
{
 sub_4014e0();
 return;
}


// Function: sub_4014e0 at 0x4014e0
int sub_4014e0()
{
 return 0;
}


// Function: sub_4014ea at 0x4014ea
int sub_4014ea()
{
 sub_4014f0();
 return;
}


// Function: sub_4014f0 at 0x4014f0
int sub_4014f0()
{
 return 0;
}


// Function: sub_4014fa at 0x4014fa
int sub_4014fa()
{
 sub_401500();
 return;
}


// Function: sub_401500 at 0x401500
int sub_401500()
{
 return 0;
}


// Function: sub_40150a at 0x40150a
int sub_40150a()
{
 sub_401510();
 return;
}


// Function: sub_401510 at 0x401510
int sub_401510()
{
 return 0;
}


// Function: sub_40151a at 0x40151a
int sub_40151a()
{
 sub_401520();
 return;
}


// Function: sub_401520 at 0x401520
int sub_401520()
{
 return 0;
}


// Function: sub_40152a at 0x40152a
int sub_40152a()
{
 sub_401530();
 return;
}


// Function: sub_401530 at 0x401530
int sub_401530()
{
 return 0;
}


// Function: sub_40153a at 0x40153a
int sub_40153a()
{
 sub_401540();
 return;
}


// Function: sub_401540 at 0x401540
int sub_401540()
{
 return 0;
}


// Function: sub_40154a at 0x40154a
int sub_40154a()
{
 sub_401550();
 return;
}


// Function: sub_401550 at 0x401550
int sub_401550()
{
 return 0;
}


// Function: sub_40155a at 0x40155a
int sub_40155a()
{
 sub_401560();
 return;
}


// Function: sub_401560 at 0x401560
int sub_401560()
{
 return 0;
}


// Function: sub_40156a at 0x40156a
int sub_40156a()
{
 sub_401570();
 return;
}


// Function: sub_401570 at 0x401570
int sub_401570()
{
 return 0;
}


// Function: sub_40157a at 0x40157a
int sub_40157a()
{
 sub_401580();
 return;
}


// Function: sub_401580 at 0x401580
int sub_401580()
{
 return 0;
}


// Function: sub_40158a at 0x40158a
int sub_40158a()
{
 sub_401590();
 return;
}


// Function: sub_401590 at 0x401590
int sub_401590()
{
 return 0;
}


// Function: sub_40159a at 0x40159a
int sub_40159a()
{
 sub_4015a0();
 return;
}


// Function: sub_4015a0 at 0x4015a0
int sub_4015a0()
{
 return 0;
}


// Function: sub_4015aa at 0x4015aa
int sub_4015aa()
{
 sub_4015b0();
 return;
}


// Function: sub_4015b0 at 0x4015b0
int sub_4015b0()
{
 return 0;
}


// Function: sub_4015ba at 0x4015ba
int sub_4015ba()
{
 sub_4015c0();
 return;
}


// Function: sub_4015c0 at 0x4015c0
int sub_4015c0()
{
 return 0;
}


// Function: sub_4015ca at 0x4015ca
int sub_4015ca()
{
 sub_4015d0();
 return;
}


// Function: sub_4015d0 at 0x4015d0
int sub_4015d0()
{
 return 0;
}


// Function: sub_4015da at 0x4015da
int sub_4015da()
{
 sub_4015e0();
 return;
}


// Function: sub_4015e0 at 0x4015e0
int sub_4015e0()
{
 return 0;
}


// Function: sub_4015ea at 0x4015ea
int sub_4015ea()
{
 sub_4015f0();
 return;
}


// Function: sub_4015f0 at 0x4015f0
int sub_4015f0()
{
 return 0;
}


// Function: sub_4015fa at 0x4015fa
int sub_4015fa()
{
 sub_401600();
 return;
}


// Function: sub_401600 at 0x401600
int sub_401600()
{
 return 0;
}


// Function: sub_40160a at 0x40160a
int sub_40160a()
{
 sub_401610();
 return;
}


// Function: sub_401610 at 0x401610
int sub_401610()
{
 return 0;
}


// Function: sub_40161a at 0x40161a
int sub_40161a()
{
 sub_401620();
 return;
}


// Function: sub_401620 at 0x401620
int sub_401620()
{
 return 0;
}


// Function: sub_40162a at 0x40162a
int sub_40162a()
{
 sub_401630();
 return;
}


// Function: sub_401630 at 0x401630
int sub_401630()
{
 return 0;
}


// Function: sub_40163a at 0x40163a
int sub_40163a()
{
 sub_401640();
 return;
}


// Function: sub_401640 at 0x401640
int sub_401640()
{
 return 0;
}


// Function: sub_40164a at 0x40164a
int sub_40164a()
{
 sub_401650();
 return;
}


// Function: sub_401650 at 0x401650
int sub_401650()
{
 unsigned int *v1; // ebx

 return *v1;
}


// Function: sub_40165a at 0x40165a
int sub_40165a()
{
 sub_401660();
 return;
}


// Function: sub_401660 at 0x401660
int sub_401660()
{
 struct_0 *v1; // ebx

 return v1->field_a4;
}


// Function: sub_40166a at 0x40166a
int sub_40166a()
{
 sub_401670();
 return;
}


// Function: sub_401670 at 0x401670
int sub_401670()
{
 struct_0 *v1; // ebx

 return v1->field_a8;
}


// Function: sub_40167a at 0x40167a
int sub_40167a()
{
 sub_401680();
 return;
}


// Function: sub_401680 at 0x401680
int sub_401680()
{
 struct_0 *v1; // ebx

 return v1->field_ac;
}


// Function: sub_40168a at 0x40168a
int sub_40168a()
{
 sub_401690();
 return;
}


// Function: sub_401690 at 0x401690
int sub_401690()
{
 struct_0 *v1; // ebx

 return v1->field_b0;
}


// Function: sub_40169a at 0x40169a
int sub_40169a()
{
 sub_4016a0();
 return;
}


// Function: sub_4016a0 at 0x4016a0
int sub_4016a0()
{
 struct_0 *v1; // ebx

 return v1->field_b4;
}


// Function: sub_4016aa at 0x4016aa
int sub_4016aa()
{
 sub_4016b0();
 return;
}


// Function: sub_4016b0 at 0x4016b0
int sub_4016b0()
{
 struct_0 *v1; // ebx

 return v1->field_b8;
}


// Function: sub_4016ba at 0x4016ba
int sub_4016ba()
{
 sub_4016c0();
 return;
}


// Function: sub_4016c0 at 0x4016c0
int sub_4016c0()
{
 struct_0 *v1; // ebx

 return v1->field_bc;
}


// Function: sub_4016ca at 0x4016ca
int sub_4016ca()
{
 sub_4016d0();
 return;
}


// Function: sub_4016d0 at 0x4016d0
int sub_4016d0()
{
 struct_0 *v1; // ebx

 return v1->field_c0;
}


// Function: sub_4016da at 0x4016da
int sub_4016da()
{
 sub_4016e0();
 return;
}


// Function: sub_4016e0 at 0x4016e0
int sub_4016e0()
{
 struct_0 *v1; // ebx

 return v1->field_c4;
}


// Function: sub_4016ea at 0x4016ea
int sub_4016ea()
{
 sub_4016f0();
 return;
}


// Function: sub_4016f0 at 0x4016f0
int sub_4016f0()
{
 struct_0 *v1; // ebx

 return v1->field_c8;
}


// Function: sub_4016fa at 0x4016fa
int sub_4016fa()
{
 sub_401700();
 return;
}


// Function: sub_401700 at 0x401700
int sub_401700()
{
 struct_0 *v1; // ebx

 return v1->field_cc;
}


// Function: sub_40170a at 0x40170a
int sub_40170a()
{
 sub_401710();
 return;
}


// Function: sub_401710 at 0x401710
int sub_401710()
{
 struct_0 *v1; // ebx

 return v1->field_d0;
}


// Function: sub_40171a at 0x40171a
int sub_40171a()
{
 sub_401720();
 return;
}


// Function: sub_401720 at 0x401720
int sub_401720()
{
 struct_0 *v1; // ebx

 return v1->field_d4;
}


// Function: sub_40172a at 0x40172a
int sub_40172a()
{
 sub_401730();
 return;
}


// Function: sub_401730 at 0x401730
int sub_401730()
{
 struct_0 *v1; // ebx

 return v1->field_d8;
}


// Function: sub_40173a at 0x40173a
int sub_40173a()
{
 sub_401740();
 return;
}


// Function: sub_401740 at 0x401740
int sub_401740()
{
 struct_0 *v1; // ebx

 return v1->field_dc;
}


// Function: sub_40174a at 0x40174a
int sub_40174a()
{
 sub_401750();
 return;
}


// Function: sub_401750 at 0x401750
int sub_401750()
{
 struct_0 *v1; // ebx

 return v1->field_e0;
}


// Function: sub_40175a at 0x40175a
int sub_40175a()
{
 sub_401760();
 return;
}


// Function: sub_401760 at 0x401760
int sub_401760()
{
 struct_0 *v1; // ebx

 return v1->field_e4;
}


// Function: sub_40176a at 0x40176a
int sub_40176a()
{
 sub_401770();
 return;
}


// Function: sub_401770 at 0x401770
int sub_401770()
{
 struct_0 *v1; // ebx

 return v1->field_e8;
}


// Function: sub_40177a at 0x40177a
int sub_40177a()
{
 sub_401780();
 return;
}


// Function: sub_401780 at 0x401780
int sub_401780()
{
 struct_0 *v1; // ebx

 return v1->field_ec;
}


// Function: sub_40178a at 0x40178a
int sub_40178a()
{
 sub_401790();
 return;
}


// Function: sub_401790 at 0x401790
int sub_401790()
{
 struct_0 *v1; // ebx

 return v1->field_f0;
}


// Function: sub_40179a at 0x40179a
int sub_40179a()
{
 sub_4017a0();
 return;
}


// Function: sub_4017a0 at 0x4017a0
int sub_4017a0()
{
 struct_0 *v1; // ebx

 return v1->field_f4;
}


// Function: sub_4017aa at 0x4017aa
void sub_4017aa()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4017dc at 0x4017dc
void sub_4017dc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4017e0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4017e4 at 0x4017e4
void sub_4017e4()
{
 deregister_tm_clones();
 return;
}



unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return (char *)&ptr[5636] + 3;
}


// Function: sub_401823 at 0x401823
void sub_401823()
{
}


// Function: sub_401829 at 0x401829
void sub_401829()
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
 v3 = &v2->padding_0[22207];
 v0 = v4;
 if (!(&v3->padding_0[276] - &v3->padding_0[276] >> 31) + (&v3->padding_0[276] - &v3->padding_0[276] >> 2) >> 1)
 {
 return (&v3->padding_0[276] - &v3->padding_0[276] >> 31) + (&v3->padding_0[276] - &v3->padding_0[276] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[264]))
 {
 return (*((int *)&v3->padding_0[264]))(&v3->padding_0[276], (&v3->padding_0[276] - &v3->padding_0[276] >> 31) + (&v3->padding_0[276] - &v3->padding_0[276] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[276] - &v3->padding_0[276] >> 31) + (&v3->padding_0[276] - &v3->padding_0[276] >> 2) >> 1;
 }
}


// Function: sub_401877 at 0x401877
void sub_401877()
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

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_0[22119];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[300])
 return v5;
 if (*((int *)&ptr->padding_0[252]))
 sub_4013f0(*((int *)&ptr->padding_0[272]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[304]);
 i = (&ptr->padding_0[220] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[304]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[304]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[304]);
 } while (*((int *)&ptr->padding_0[304]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[300] = 1;
 return v14;
}


// Function: sub_40190a at 0x40190a
void sub_40190a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401919
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40191d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: param_strcpy at 0x401921
void param_strcpy(unsigned int a0, unsigned int a1)
{
 sub_4015d0(a0, a1);
 sub_401650(a0);
 return;
}


// Function: call_strcpy at 0x40195b
int call_strcpy()
{
 unsigned int v4; // eax
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int dst; // [bp-0x34]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0x10]

 v4 = __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 dst = (unsigned int)param_strcpy(&v1, v4 - -9886);
 if (v2 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return dst;
 return __stack_chk_fail_local();
}


// Function: param_strcmp at 0x4019aa
unsigned int param_strcmp(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = sub_401440(a0, a1);
 return (v0 <= 0 ? (v0 - 0 < 0 ? 4294967295 : 0) : 1);
}


// Function: call_strcmp at 0x4019f9
int call_strcmp()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 v2 = param_strcmp("bbb", "aaa");
 return v2 + v0 + v1;
}


// Function: param_strlen at 0x401a75
unsigned int param_strlen(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = sub_401650(a0);
 return v0;
}


// Function: call_strlen at 0x401aa5
unsigned int call_strlen()
{
 unsigned int v0; // [bp-0x10]

 v0 = __x86_get_pc_thunk_ax() - -9585;
 return param_strlen(v0);
}


// Function: param_memcpy at 0x401ad2
unsigned int param_memcpy(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __x86_get_pc_thunk_ax();
 sub_4014a0(a0, a1, a2);
 return a2;
}


// Function: call_memcpy at 0x401b05
int call_memcpy()
{
 unsigned long v10; // ldt
 unsigned long v11; // gdt
 unsigned short v12; // gs
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 char v5; // [bp-0x24]
 char v6; // [bp-0x1c]
 unsigned int v7; // [bp-0x14]
 unsigned int v8; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v8 = *((int *)_ccall(v10, v11, (unsigned int)v12, 20));
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v4 = 50;
 memset(&v5, 0, 20);
 param_memcpy(&v5, &v0, 20);
 if (v8 == *((int *)_ccall(v10, v11, (unsigned int)v12, 20)))
 return v7 + *((int *)&v5) + *((int *)&v6);
 return __stack_chk_fail_local();
}


// Function: param_memcmp at 0x401b9f
unsigned int param_memcmp(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = sub_4014f0(a0, a1, a2);
 return (v0 <= 0 ? (v0 - 0 < 0 ? 4294967295 : 0) : 1);
}


// Function: call_memcmp at 0x401bf1
int call_memcmp()
{
 unsigned long v13; // ldt
 unsigned long v14; // gdt
 unsigned short v15; // gs
 unsigned int v0; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int result; // [bp-0x34]
 unsigned int v3; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int flag1; // [bp-0x28]
 unsigned int v6; // [bp-0x24]
 unsigned int v7; // [bp-0x20]
 unsigned int flag2; // [bp-0x1c]
 unsigned int v9; // [bp-0x18]
 unsigned int v10; // [bp-0x14]
 unsigned int v11; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v11 = *((int *)_ccall(v13, v14, (unsigned int)v15, 20));
 result = 1;
 v3 = 2;
 v4 = 3;
 flag1 = 1;
 v6 = 2;
 v7 = 4;
 flag2 = 1;
 v9 = 2;
 v10 = 3;
 v0 = param_memcmp(&result, &flag1, 12);
 v1 = param_memcmp(&result, &flag2, 12);
 if (v11 == *((int *)_ccall(v13, v14, (unsigned int)v15, 20)))
 return v1 + v0;
 return __stack_chk_fail_local();
}


// Function: param_printf at 0x401c9a
unsigned int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]

 v0 = sub_401470(__x86_get_pc_thunk_ax() - -9096, a0, a1);
 return v0;
}


// Function: call_printf at 0x401cd4
unsigned int call_printf()
{
 unsigned int v0; // [bp-0x10]

 v0 = param_printf(42, __x86_get_pc_thunk_ax() - -9060);
 return v0;
}


// Function: param_scanf at 0x401d04
unsigned int param_scanf(unsigned int a0)
{
 unsigned int v4; // eax
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v8; // eax
 char v0; // [bp-0x1c], Other Possible Types: unsigned int
 char v1; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v4 = __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 v2 = sub_401680(a0, v4 - -9016, &v0, &v1);
 v8 = (v2 == 2 ? v1 + v0 : 4294967295);
 if (v3 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 v8 = __stack_chk_fail_local();
 return v8;
}


// Function: call_scanf at 0x401d75
unsigned int call_scanf()
{
 return param_scanf(__x86_get_pc_thunk_ax() - -8910);
}


// Function: param_fopen_fclose at 0x401d9d
unsigned int param_fopen_fclose(unsigned int a0)
{
 unsigned int result; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 result = sub_401690(a0, "r");
 if (result)
 {
 v1 = sub_4016f0(result);
 sub_4014c0(result);
 return v1;
 }
 return 4294967295;
}


// Function: call_fopen_fclose at 0x401dff
unsigned int call_fopen_fclose()
{
 unsigned int fp; // [bp-0x10]

 fp = param_fopen_fclose(__x86_get_pc_thunk_ax() - -8782);
 return (fp - 0 < 0 ? 4294967295 : 42);
}


// Function: param_fread_fwrite at 0x401e3c
unsigned int param_fread_fwrite(unsigned int a0)
{
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int v9; // eax
 unsigned int v0; // [bp-0x40]
 unsigned int result; // [bp-0x3c]
 unsigned int v2; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 char v4; // [bp-0x30]
 unsigned int v5; // [bp-0x10]

 v5 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 v0 = "BinBench Test Data";
 result = sub_401690(a0, "w+");
 if (!result)
 {
 v9 = 4294967295;
 }
 else
 {
 v2 = sub_401590(v0, 1, sub_401650(v0), result);
 if (v2 != sub_401650(v0))
 {
 sub_4014c0(result);
 v9 = 4294967294;
 }
 else
 {
 sub_401530(result);
 v3 = sub_4015c0(&v4, 1, v2, result);
 (&v4)[v3] = 0;
 sub_4014c0(result);
 sub_401580(a0);
 if (v3 == v2 && !sub_401440(&v4, v0))
 v9 = 42;
 else
 v9 = 4294967293;
 }
 }
 if (v5 != *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 v9 = __stack_chk_fail_local();
 return v9;
}


// Function: call_fread_fwrite at 0x401f6a
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite(__x86_get_pc_thunk_ax() - -8453);
}


// Function: param_malloc_free at 0x401f92
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int idx; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x10]

 ptr = sub_401600(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 ptr[idx] = idx * 10;
 }
 v2 = ptr[1073741823 + a0] + *(ptr);
 sub_401490(ptr);
 ptr = 0;
 return v2;
}


// Function: call_malloc_free at 0x40203b
unsigned int call_malloc_free()
{
 __x86_get_pc_thunk_ax();
 return param_malloc_free(10);
}


// Function: param_memset at 0x40205e
unsigned int param_memset(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int i; // [bp-0x14]

 __x86_get_pc_thunk_ax();
 sub_4016a0(a0, 0, a1);
 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((char *)(i + a0));
 }
 return v0;
}


// Function: call_memset at 0x4020c3
int call_memset()
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int idx; // [bp-0x3c]
 unsigned long v1; // [bp-0x38]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v3 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 for (idx = 0; idx <= 9; idx += 1)
 {
 (&v1)[idx] = 255;
 }
 param_memset(&v1, 40);
 if (v3 == *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 return v2 + v1;
 return __stack_chk_fail_local();
}


// Function: param_strchr_strstr at 0x40212c
int param_strchr_strstr(unsigned int a0, char a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v0 = sub_401640(a0, a1);
 v1 = (!v0 ? 4294967295 : v0 - a0);
 v2 = sub_401430(a0, a2);
 v3 = (!v2 ? 4294967295 : v2 - a0);
 return v3 + v1;
}


// Function: call_strchr_strstr at 0x4021ab
unsigned int call_strchr_strstr()
{
 unsigned int v3; // eax
 unsigned int v0; // [bp-0x14]
 unsigned int ptr; // [bp-0x10]

 v3 = __x86_get_pc_thunk_ax() + 19770;
 v0 = v3 - 11871;
 ptr = param_strchr_strstr(v0, 66, v3 - 11851);
 return ptr;
}


// Function: test_standard_library_functions at 0x4021e7
extern unsigned int g_4040b0;
extern unsigned int g_4040d4;
extern unsigned int g_4040ef;
extern unsigned int g_40410a;
extern unsigned int g_404126;
extern unsigned int g_404142;
extern unsigned int g_40415e;
extern unsigned int g_40417a;
extern unsigned int g_404197;
extern unsigned int g_4041b3;
extern unsigned int g_4041cf;
extern unsigned int g_4041eb;
extern unsigned int g_404206;

int test_standard_library_functions()
{
 sub_401610(&g_4040b0);
 sub_401470(&g_4040d4, call_strcpy());
 sub_401470(&g_4040ef, call_strcmp());
 sub_401470(&g_40410a, call_strlen());
 sub_401470(&g_404126, call_memcpy());
 sub_401470(&g_404142, call_memcmp());
 sub_401470(&g_40415e, call_printf());
 sub_401470(&g_40417a, call_scanf());
 sub_401470(&g_404197, call_fopen_fclose());
 sub_401470(&g_4041b3, call_fread_fwrite());
 sub_401470(&g_4041cf, call_malloc_free());
 sub_401470(&g_4041eb, call_memset());
 return sub_401470(&g_404206, call_strchr_strstr());
}


// Function: param_linux_syscall at 0x402335
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]

 v0 = sub_4016e0(5, a0, 0);
 if (v0 >= 0)
 {
 sub_4016e0(6, v0);
 return v0;
 }
 return -(*((int *)sub_4016c0()));
}


// Function: call_linux_syscall at 0x402389
unsigned int call_linux_syscall()
{
 unsigned int v0; // [bp-0x10]

 v0 = param_linux_syscall(__x86_get_pc_thunk_ax() - -7364);
 return (v0 - 0 < 0 ? 4294967295 : 42);
}


// Function: param_win32_api at 0x4023c6
unsigned int param_win32_api(unsigned int a0)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 char v0; // [bp-0x68]
 char v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 v6 = (sub_401620(a0, &v0) < 0 ? 4294967295 : (*((int *)&v1) <= 0 ? 4294967294 : 42));
 if (v2 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 v6 = __stack_chk_fail_local();
 return v6;
}


// Function: call_win32_api at 0x402435
unsigned int call_win32_api()
{
 return param_win32_api(__x86_get_pc_thunk_ax() - -7192);
}


// Function: param_fork_exec at 0x40245d
unsigned int param_fork_exec(unsigned int a0, unsigned int a1)
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v7; // eax
 char v0; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int result; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v3 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 result = sub_401740();
 if (result < 0)
 {
 v7 = 4294967295;
 }
 else
 {
 if (!result)
 {
 sub_401700(a0, a0, a1, 0);
 sub_401480(127);
 }
 v2 = sub_4015a0(result, &v0, 0);
 v7 = (v2 - 0 < 0 ? 4294967294 : (!(v0 & 127) ? v0 >> 8 & 255 : 4294967293));
 }
 if (v3 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 v7 = __stack_chk_fail_local();
 return v7;
}


// Function: call_fork_exec at 0x402516
unsigned int call_fork_exec()
{
 unsigned int pid; // [bp-0x10]

 pid = param_fork_exec(__x86_get_pc_thunk_ax() - -7421, 0);
 return (!pid ? 42 : 4294967295);
}


// Function: param_pipe_communication at 0x402555
unsigned int param_pipe_communication()
{
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 unsigned int v11; // eax
 unsigned int result; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 char v3; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x34]
 char v5; // [bp-0x30]
 unsigned int v6; // [bp-0x10]

 v6 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 if (sub_401710(&v3) < 0)
 {
 v11 = 4294967295;
 }
 else
 {
 result = sub_401740();
 if (result < 0)
 {
 v11 = 4294967294;
 }
 else
 {
 if (!result)
 {
 sub_4017a0(v3);
 v2 = "HelloPipe";
 sub_401660(v4, v2, sub_401650(v2));
 sub_4017a0(v4);
 sub_401480(0);
 }
 sub_4017a0(v4);
 v1 = sub_401460(v3, &v5, 31);
 (&v5)[v1] = 0;
 sub_4017a0(v3);
 sub_401540(0);
 v11 = (v1 <= 0 ? 4294967293 : 42);
 }
 }
 if (v6 != *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 v11 = __stack_chk_fail_local();
 return v11;
}


// Function: call_pipe_communication at 0x402679
unsigned int call_pipe_communication()
{
 __x86_get_pc_thunk_ax();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x402694
unsigned int param_socket_create()
{
 unsigned long v8; // ldt
 unsigned long v9; // gdt
 unsigned short v10; // gs
 unsigned int v11; // eax
 unsigned int result; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned short v3; // [bp-0x20]
 unsigned short v4; // [bp-0x1e]
 unsigned int flag1; // [bp-0x1c]
 unsigned int v6; // [bp-0x10]

 v6 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 v1 = sub_401770(2, 1, 0);
 if (v1 < 0)
 {
 v11 = 4294967295;
 }
 else
 {
 result = 1;
 if (sub_401400(v1, 1, 2, &result, 4) < 0)
 {
 sub_4017a0(v1);
 v11 = 4294967294;
 }
 else
 {
 sub_4016a0(&v3, 0, 16);
 v3 = 2;
 v4 = sub_401550(0);
 flag1 = 0;
 if (sub_401670(v1, &v3, 16) < 0)
 {
 sub_4017a0(v1);
 v11 = 4294967293;
 }
 else if (sub_401750(v1, 5) < 0)
 {
 sub_4017a0(v1);
 v11 = 0xfffffffc;
 }
 else
 {
 sub_4017a0(v1);
 v11 = 42;
 }
 }
 }
 if (v6 != *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 v11 = __stack_chk_fail_local();
 return v11;
}


// Function: call_socket_create at 0x4027c4
unsigned int call_socket_create()
{
 __x86_get_pc_thunk_ax();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x4027df
typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 char field_c;
} struct_0;

unsigned int param_shmget_shmat()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 struct_0 *ptr; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 v0 = "/tmp/binbench_shm";
 v1 = sub_401630(v0, 66, 438);
 if (v1 < 0)
 return 4294967295;
 sub_4017a0(v1);
 v2 = sub_401760("/tmp/binbench_shm", 42);
 if (v2 < 0)
 return 4294967295;
 v3 = sub_4014b0(v2, 0x1000, 950);
 if (v3 < 0)
 return 4294967294;
 ptr = sub_401560(v3, 0, 0);
 if (ptr != 0xffffffff)
 {
 ptr->field_0 = 1918986323;
 ptr->field_4 = 1699570789;
 ptr->field_8 = 2037542765;
 ptr->field_c = 0;
 v5 = sub_401650(ptr);
 sub_401720(ptr);
 sub_4015e0(v3, 0, 0);
 return v5;
 }
 return 4294967293;
}


// Function: call_shmget_shmat at 0x4028f9
unsigned int call_shmget_shmat()
{
 unsigned int v0; // [bp-0x10]

 __x86_get_pc_thunk_ax();
 v0 = param_shmget_shmat();
 return (v0 <= 0 ? 4294967295 : 42);
}


// Function: signal_handler at 0x402929
typedef struct struct_0 {
 char padding_0[18187];
 unsigned int field_470b;
 unsigned int field_470f;
} struct_0;

struct_0 * signal_handler(unsigned int a0)
{
 struct_0 *ptr; // eax
 char v0; // [bp+0x0]

 ptr = __x86_get_pc_thunk_ax(&v0) + 17855;
 *((unsigned int *)&ptr->padding_0[332]) = 1;
 *((unsigned int *)&ptr->padding_0[336]) = a0;
 return ptr;
}


// Function: param_signal_handling at 0x402950
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x10]

 if (sub_4014e0(10, signal_handler) == 4294967295)
 {
 return 4294967295;
 }
 else if (sub_4014e0(14, signal_handler) == 4294967295)
 {
 return 4294967294;
 }
 else
 {
 signal_received = 0;
 sub_401420(10);
 v0 = 1000;
 while (true)
 {
 if (signal_received || !((v1 = v0 - 1, v0 > 0)))
 break;
 sub_4015b0(1000);
 v0 = v1;
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number != 10)
 {
 return 0xfffffffc;
 }
 else
 {
 signal_received = 0;
 sub_401510(1);
 v0 = 2000;
 while (true)
 {
 if (signal_received || !((v1 = v0 - 1, v0 > 0)))
 break;
 sub_4015b0(1000);
 v0 = v1;
 }
 if (!signal_received || signal_number != 14)
 return 4294967291;
 sub_4014e0(10, 0);
 sub_4014e0(14, 0);
 return 42;
 return 4294967291;
 }
 }
}


// Function: call_signal_handling at 0x402aa7
unsigned int call_signal_handling()
{
 __x86_get_pc_thunk_ax();
 return param_signal_handling();
}


// Function: test_system_calls at 0x402ac2
extern unsigned int g_404248;
extern unsigned int g_404263;
extern unsigned int g_40427f;
extern unsigned int g_40429b;
extern unsigned int g_4042b7;
extern unsigned int g_4042d3;
extern unsigned int g_4042ef;
extern unsigned int g_40430b;

int test_system_calls()
{
 sub_401610(&g_404248);
 sub_401470(&g_404263, call_linux_syscall());
 sub_401470(&g_40427f, call_win32_api());
 sub_401470(&g_40429b, call_fork_exec());
 sub_401470(&g_4042b7, call_pipe_communication());
 sub_401470(&g_4042d3, call_socket_create());
 sub_401470(&g_4042ef, call_shmget_shmat());
 return sub_401470(&g_40430b, call_signal_handling());
}


// Function: thread_compute at 0x402b98
unsigned int * thread_compute(unsigned int *p)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]

 __x86_get_pc_thunk_dx();
 v0 = *(p);
 v1 = v0 * v0;
 ptr = sub_401600(4);
 *(ptr) = v1;
 return ptr;
}


// Function: param_pthread_create at 0x402be7
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned long v5; // ldt
 unsigned long v6; // gdt
 unsigned short v7; // gs
 unsigned int v8; // eax
 char v0; // [bp-0x24], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x20]
 unsigned int *ptr; // [bp-0x1c], Other Possible Types: char
 unsigned int result; // [bp-0x18]
 unsigned int v4; // [bp-0x10]

 v4 = *((int *)_ccall(v5, v6, (unsigned int)v7, 20));
 v1 = a0;
 result = sub_401730(&v0, 0, thread_compute, &v1);
 if (result)
 {
 v8 = 4294967295;
 }
 else
 {
 sub_401780(v0, &ptr);
 v8 = *(ptr);
 sub_401490(ptr);
 }
 if (v4 != *((int *)_ccall(v5, v6, (unsigned int)v7, 20)))
 v8 = __stack_chk_fail_local();
 return v8;
}


// Function: call_pthread_create at 0x402c7a
unsigned int call_pthread_create()
{
 __x86_get_pc_thunk_ax();
 return param_pthread_create(7);
}


// Function: thread_sum at 0x402c9d
unsigned int thread_sum(unsigned int *ptr)
{
 unsigned int i; // [bp-0xc]

 __x86_get_pc_thunk_ax();
 ptr[2] = 0;
 for (i = *(ptr); i <= ptr[1]; i += 1)
 {
 ptr[2] = ptr[2] + i;
 }
 return 0;
}


// Function: param_pthread_join at 0x402cf2
unsigned int param_pthread_join()
{
 unsigned long v14; // ldt
 unsigned long v15; // gdt
 unsigned short v16; // gs
 unsigned int v17; // eax
 unsigned int v0; // [bp-0x4c]
 unsigned int idx; // [bp-0x44]
 unsigned long v2; // [bp-0x40]
 unsigned int result; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 unsigned int flag1; // [bp-0x2c]
 unsigned int v6; // [bp-0x28]
 unsigned int v7; // [bp-0x24]
 unsigned int flag2; // [bp-0x20]
 unsigned int v9; // [bp-0x1c]
 unsigned int v10; // [bp-0x18]
 unsigned int flag3; // [bp-0x14]
 unsigned int v12; // [bp-0x10]

 v12 = *((int *)_ccall(v14, v15, (unsigned int)v16, 20));
 result = 1;
 v4 = 10;
 flag1 = 0;
 v6 = 11;
 v7 = 20;
 flag2 = 0;
 v9 = 21;
 v10 = 30;
 flag3 = 0;
 v0 = 0;
 while (true)
 {
 if (v0 > 2)
 {
 v17 = 0;
 idx = 0;
 while (true)
 {
 if (idx <= 2)
 {
 if (sub_401780((&v2)[idx], 0))
 {
 v17 = 4294967294;
 break;
 }
 else
 {
 v17 += (&flag1)[3 * idx];
 idx += 1;
 }
 }
 else
 {
 break;
 }
 }
 }
 else if (sub_401730(&(&v2)[v0], 0, thread_sum, &(&result)[3 * v0]))
 {
 v17 = 4294967295;
 break;
 }
 else
 {
 v0 += 1;
 }
 }
 if (v12 != *((int *)_ccall(v14, v15, (unsigned int)v16, 20)))
 v17 = __stack_chk_fail_local();
 return v17;
}


// Function: call_pthread_join at 0x402e0b
unsigned int call_pthread_join()
{
 __x86_get_pc_thunk_ax();
 return param_pthread_join();
}


// Function: thread_increment at 0x402e26
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int *ptr)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = *(ptr);
 for (i = 0; i < v1; i += 1)
 {
 sub_401570(&counter_mutex);
 shared_counter = shared_counter + 1;
 sub_401410(&counter_mutex);
 sub_4015b0(1000);
 }
 return 0;
}


// Function: param_mutex_lock at 0x402ea6
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int i; // [bp-0x1c]
 unsigned int j; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 result = sub_401600(a0 * 4);
 if (!result)
 return 4294967295;
 shared_counter = 0;
 for (i = 0; i < a0; i += 1)
 {
 if (sub_401730(i * 4 + result, 0, thread_increment, &a1))
 {
 sub_401490(result);
 return 4294967294;
 }
 }
 for (j = 0; j < a0; j += 1)
 {
 sub_401780(*((int *)(result + j * 4)), 0);
 }
 sub_401490(result);
 v3 = a0 * a1;
 return (v3 == shared_counter ? 42 : 4294967293);
}


// Function: call_mutex_lock at 0x402fa8
unsigned int call_mutex_lock()
{
 __x86_get_pc_thunk_ax();
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402fd0
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int i;

unsigned int * consumer_thread()
{
 unsigned int v0; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]

 sub_401570(&cond_mutex);
 while (!i)
 {
 sub_4014d0(&cond, &cond_mutex);
 }
 v0 = data;
 sub_401410(&cond_mutex);
 ptr = sub_401600(4);
 *(ptr) = v0;
 return ptr;
}


// Function: producer_thread at 0x403058
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int ready;

unsigned int producer_thread()
{
 sub_401500(1);
 sub_401570(&cond_mutex);
 data = 42;
 ready = 1;
 sub_4015f0(&cond);
 sub_401410(&cond_mutex);
 return 0;
}


// Function: param_condition_variable at 0x4030cf
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable()
{
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int v9; // eax
 char v0; // [bp-0x20], Other Possible Types: unsigned int
 char v1; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int *ptr; // [bp-0x18], Other Possible Types: char
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 ready = 0;
 data = 0;
 if (sub_401730(&v1, 0, consumer_thread, 0))
 {
 v9 = 4294967295;
 }
 else if (sub_401730(&v0, 0, producer_thread, 0))
 {
 sub_401790(v1);
 v9 = 4294967294;
 }
 else
 {
 sub_401780(v1, &ptr);
 sub_401780(v0, 0);
 v3 = *(ptr);
 sub_401490(ptr);
 v9 = v3;
 }
 if (v4 != *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 v9 = __stack_chk_fail_local();
 return v9;
}


// Function: call_condition_variable at 0x4031ab
unsigned int call_condition_variable()
{
 __x86_get_pc_thunk_ax();
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4031c6
unsigned int thread_atomic_increment(unsigned int *ptr)
{
 unsigned int v5; // edx
 unsigned int v6; // edx
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // 4114
 unsigned int v11; // eax
 unsigned int v0; // [bp-0x20]
 unsigned int i; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 __x86_get_pc_thunk_dx();
 v6 = v5 + 15646;
 v4 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 v2 = *(ptr);
 for (i = 0; i < v2; i += 1)
 {
 atomic_fetch_add(v6 + 452);
 v0 = i;
 v3 = i + 1000;
 v10 = atomic_compare_exchange(v6 + 452, v3, v0);
 if (v0 != v10)
 v0 = (v0 == v10 ? v0 : v10);
 }
 v11 = 0;
 if (v4 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 v11 = __stack_chk_fail_local();
 return v11;
}


// Function: thread_atomic_load_store at 0x403257
typedef struct struct_0 {
 char padding_0[15954];
 unsigned int field_3e52;
} struct_0;

unsigned int thread_atomic_load_store()
{
 struct_0 *ptr; // eax
 unsigned int v0; // [bp-0x8]

 ptr = __x86_get_pc_thunk_ax() + 15502;
 v0 = *((int *)&ptr->padding_0[452]);
 atomic_exchange(&ptr->padding_0[452], v0 + 100);
 return 0;
}


// Function: param_atomic_ops at 0x403287
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int a0)
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned short v9; // gs
 unsigned int v10; // eax
 char v0; // [bp-0x24], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x20]
 unsigned int i; // [bp-0x1c]
 unsigned int result; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]
 char v6; // [bp+0x8]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 result = sub_401600(a0 * 4);
 if (!result)
 {
 v10 = 4294967295;
 }
 else
 {
 atomic_exchange(&atomic_counter, 0);
 v1 = 0;
 while (true)
 {
 if (v1 >= a0)
 {
 if (!sub_401730(&v0, 0, thread_atomic_load_store, 0))
 sub_401780(v0, 0);
 for (i = 0; i < a0; i += 1)
 {
 sub_401780(*((int *)(result + i * 4)), 0);
 }
 v4 = atomic_counter;
 sub_401490(result);
 v10 = (v4 <= 0 ? 4294967293 : 42);
 break;
 }
 else if (sub_401730(v1 * 4 + result, 0, thread_atomic_increment, &v6))
 {
 sub_401490(result);
 v10 = 4294967294;
 break;
 }
 else
 {
 v1 += 1;
 }
 }
 }
 if (v5 != *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 v10 = __stack_chk_fail_local();
 return v10;
}


// Function: call_atomic_ops at 0x4033cd
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 __x86_get_pc_thunk_ax();
 v0 = 500;
 return param_atomic_ops(4);
}


// Function: thread_tls_test at 0x4033f5
unsigned int [2] thread_tls_test(unsigned int a0)
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int v0; // [bp-0x14]
 unsigned int ptr[2]; // [bp-0x10]

 v0 = *((int *)_ccall(v2, v3, (unsigned int)v4, 4294967260));
 *((unsigned int *)_ccall(v2, v3, (unsigned int)v4, 4294967260)) = *((int *)_ccall(v2, v3, (unsigned int)v4, 4294967260)) + 50;
 sub_4016d0(0xffffffe0 + *((int *)_ccall(v2, v3, (unsigned int)v4, 0)), a0, 31);
 ptr[0] = sub_401600(8);
 ptr[0] = v0;
 ptr[1] = *((int *)_ccall(v2, v3, (unsigned int)v4, 4294967260));
 return ptr;
}


// Function: param_thread_local_storage at 0x403477
unsigned int param_thread_local_storage(unsigned int a0)
{
 unsigned long v13; // ldt
 unsigned long v14; // gdt
 unsigned short v15; // gs
 unsigned int v16; // eax
 unsigned int v0[2]; // [bp-0x40]
 unsigned int index; // [bp-0x3c]
 unsigned int v2; // [bp-0x38]
 unsigned int j; // [bp-0x34]
 char v4; // [bp-0x30], Other Possible Types: unsigned int
 unsigned int v5; // [bp-0x2c]
 unsigned int k; // [bp-0x28]
 unsigned int flag1; // [bp-0x24]
 unsigned int result; // [bp-0x20]
 unsigned int v9; // [bp-0x1c]
 unsigned int v10; // [bp-0x18]
 unsigned int ptr[2]; // [bp-0x14]
 unsigned int v12; // [bp-0x10]

 v12 = *((int *)_ccall(v13, v14, (unsigned int)v15, 20));
 flag1 = sub_401600(a0 * 4);
 result = sub_401600(a0 * 4);
 if (!flag1 || !result)
 {
 v16 = 4294967295;
 }
 else
 {
 for (index = 0; index < a0; index += 1)
 {
 *((int *)(index * 4 + result)) = sub_401600(16);
 sub_4016b0(*((int *)(result + index * 4)), 16, "Thread-%d", index);
 }
 v2 = 0;
 while (true)
 {
 if (v2 >= a0)
 {
 memset(&v4, 0, 12);
 for (; k < a0; k += 1)
 {
 sub_401780(*((int *)(flag1 + k * 4)), &v0);
 ptr[0] = v0;
 v4 += ptr[0];
 v5 += ptr[1];
 sub_401490(ptr);
 sub_401490(*((int *)(result + k * 4)));
 }
 sub_401490(result);
 sub_401490(flag1);
 v9 = a0 * 100;
 v10 = a0 * 150;
 if (v4 == v9 && v5 == v10)
 {
 v16 = 42;
 break;
 }
 else
 {
 v16 = 4294967293;
 break;
 }
 }
 else if (sub_401730(flag1 + v2 * 4, 0, thread_tls_test, *((int *)(result + v2 * 4))))
 {
 for (j = 0; j <= v2; j += 1)
 {
 sub_401490(*((int *)(result + j * 4)));
 }
 sub_401490(result);
 sub_401490(flag1);
 v16 = 4294967294;
 break;
 }
 else
 {
 v2 += 1;
 }
 }
 }
 if (v12 != *((int *)_ccall(v13, v14, (unsigned int)v15, 20)))
 v16 = __stack_chk_fail_local();
 return v16;
}


// Function: call_thread_local_storage at 0x4036cb
unsigned int call_thread_local_storage()
{
 __x86_get_pc_thunk_ax();
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x4036ee
extern unsigned int g_404331;
extern unsigned int g_40434f;
extern unsigned int g_40436b;
extern unsigned int g_404388;
extern unsigned int g_4043a4;
extern unsigned int g_4043c0;
extern unsigned int g_4043dc;

int test_thread_concurrency()
{
 sub_401610(&g_404331);
 sub_401470(&g_40434f, call_pthread_create());
 sub_401470(&g_40436b, call_pthread_join());
 sub_401470(&g_404388, call_mutex_lock());
 sub_401470(&g_4043a4, call_condition_variable());
 sub_401470(&g_4043c0, call_atomic_ops());
 return sub_401470(&g_4043dc, call_thread_local_storage());
}


// Function: main at 0x4037ac
unsigned int main()
{
 char v0; // [bp+0x0]

 __x86_get_pc_thunk_ax(&v0);
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x4037d6
int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_4037da at 0x4037da
int sub_4037da()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x4037e0
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_401520();
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


// Function: sub_403842 at 0x403842
void sub_403842()
{
}



/* CRT stub function _fini removed by preprocessor */


