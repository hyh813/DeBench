// Angr Decompilation of 4_gcc_O1_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */
#include <stddef.h>
#include <math.h>
#include <stdio.h>

// Define struct_0 once with all needed fields
typedef struct struct_0 {
    char padding_0[76];  // Enough for field_24 and beyond
    unsigned int field_24;
    char padding_1[48];  // Continue for other fields
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
    unsigned int field_2d8;
    unsigned int field_2dc;
    unsigned int field_2e0;
    unsigned int field_2e4;
    unsigned int field_2e8;
    unsigned int field_2ec;
    unsigned int field_2f0;
    unsigned int field_2f4;
    unsigned int field_2f8;
    unsigned int field_2fc;
    unsigned int field_300;
    unsigned int field_304;
    unsigned int field_308;
    unsigned int field_30c;
    unsigned int field_310;
    unsigned int field_314;
    unsigned int field_318;
    unsigned int field_31c;
    unsigned int field_320;
    unsigned int field_324;
    unsigned int field_328;
    unsigned int field_32c;
    unsigned int field_330;
    unsigned int field_334;
    unsigned int field_338;
    unsigned int field_33c;
    unsigned int field_340;
    unsigned int field_344;
    unsigned int field_348;
    unsigned int field_34c;
    unsigned int field_350;
    unsigned int field_354;
    unsigned int field_358;
    unsigned int field_35c;
    unsigned int field_360;
    unsigned int field_364;
    unsigned int field_368;
    unsigned int field_36c;
    unsigned int field_370;
    unsigned int field_374;
    unsigned int field_378;
    unsigned int field_37c;
    unsigned int field_380;
    unsigned int field_384;
    unsigned int field_388;
    unsigned int field_38c;
    unsigned int field_390;
    unsigned int field_394;
    unsigned int field_398;
    unsigned int field_39c;
    unsigned int field_3a0;
    unsigned int field_3a4;
    unsigned int field_3a8;
    unsigned int field_3ac;
    unsigned int field_3b0;
    unsigned int field_3b4;
    unsigned int field_3b8;
    unsigned int field_3bc;
    unsigned int field_3c0;
    unsigned int field_3c4;
    unsigned int field_3c8;
    unsigned int field_3cc;
    unsigned int field_3d0;
    unsigned int field_3d4;
    unsigned int field_3d8;
    unsigned int field_3dc;
    unsigned int field_3e0;
    unsigned int field_3e4;
    unsigned int field_3e8;
    unsigned int field_3ec;
    unsigned int field_3f0;
    unsigned int field_3f4;
    unsigned int field_3f8;
    unsigned int field_3fc;
    unsigned int field_400;
    unsigned int field_404;
    unsigned int field_408;
    unsigned int field_40c;
    unsigned int field_410;
    unsigned int field_414;
    unsigned int field_418;
    unsigned int field_41c;
    unsigned int field_420;
    unsigned int field_424;
    unsigned int field_428;
    unsigned int field_42c;
    unsigned int field_430;
    unsigned int field_434;
    unsigned int field_438;
    unsigned int field_43c;
    unsigned int field_440;
    unsigned int field_444;
    unsigned int field_448;
    unsigned int field_44c;
    unsigned int field_450;
    unsigned int field_454;
    unsigned int field_458;
    unsigned int field_45c;
    unsigned int field_460;
    unsigned int field_464;
    unsigned int field_468;
    unsigned int field_46c;
    unsigned int field_470;
    unsigned int field_474;
    unsigned int field_478;
    unsigned int field_47c;
    unsigned int field_480;
    unsigned int field_484;
    unsigned int field_488;
    unsigned int field_48c;
    unsigned int field_490;
    unsigned int field_494;
    unsigned int field_498;
    unsigned int field_49c;
    unsigned int field_4a0;
    unsigned int field_4a4;
    unsigned int field_4a8;
    unsigned int field_4ac;
    unsigned int field_4b0;
    unsigned int field_4b4;
    unsigned int field_4b8;
    unsigned int field_4bc;
    unsigned int field_4c0;
    unsigned int field_4c4;
    unsigned int field_4c8;
    unsigned int field_4cc;
    unsigned int field_4d0;
    unsigned int field_4d4;
    unsigned int field_4d8;
    unsigned int field_4dc;
    unsigned int field_4e0;
    unsigned int field_4e4;
    unsigned int field_4e8;
    unsigned int field_4ec;
    unsigned int field_4f0;
    unsigned int field_4f4;
    unsigned int field_4f8;
    unsigned int field_4fc;
    unsigned int field_500;
    unsigned int field_504;
    unsigned int field_508;
    unsigned int field_50c;
    unsigned int field_510;
    unsigned int field_514;
    unsigned int field_518;
    unsigned int field_51c;
    unsigned int field_520;
    unsigned int field_524;
    unsigned int field_528;
    unsigned int field_52c;
    unsigned int field_530;
    unsigned int field_534;
    unsigned int field_538;
    unsigned int field_53c;
    unsigned int field_540;
    unsigned int field_544;
    unsigned int field_548;
    unsigned int field_54c;
    unsigned int field_550;
    unsigned int field_554;
    unsigned int field_558;
    unsigned int field_55c;
    unsigned int field_560;
    unsigned int field_564;
    unsigned int field_568;
    unsigned int field_56c;
    unsigned int field_570;
    unsigned int field_574;
    unsigned int field_578;
    unsigned int field_57c;
    unsigned int field_580;
    unsigned int field_584;
    unsigned int field_588;
    unsigned int field_58c;
    unsigned int field_590;
    unsigned int field_594;
    unsigned int field_598;
    unsigned int field_59c;
    unsigned int field_5a0;
    unsigned int field_5a4;
    unsigned int field_5a8;
    unsigned int field_5ac;
    unsigned int field_5b0;
    unsigned int field_5b4;
    unsigned int field_5b8;
    unsigned int field_5bc;
    unsigned int field_5c0;
    unsigned int field_5c4;
    unsigned int field_5c8;
    unsigned int field_5cc;
    unsigned int field_5d0;
    unsigned int field_5d4;
    unsigned int field_5d8;
    unsigned int field_5dc;
    unsigned int field_5e0;
    unsigned int field_5e4;
    unsigned int field_5e8;
    unsigned int field_5ec;
    unsigned int field_5f0;
    unsigned int field_5f4;
    unsigned int field_5f8;
    unsigned int field_5fc;
    unsigned int field_600;
    unsigned int field_604;
    unsigned int field_608;
    unsigned int field_60c;
    unsigned int field_610;
    unsigned int field_614;
    unsigned int field_618;
    unsigned int field_61c;
    unsigned int field_620;
    unsigned int field_624;
    unsigned int field_628;
    unsigned int field_62c;
    unsigned int field_630;
    unsigned int field_634;
    unsigned int field_638;
    unsigned int field_63c;
    unsigned int field_640;
    unsigned int field_644;
    unsigned int field_648;
    unsigned int field_64c;
    unsigned int field_650;
    unsigned int field_654;
    unsigned int field_658;
    unsigned int field_65c;
    unsigned int field_660;
    unsigned int field_664;
    unsigned int field_668;
    unsigned int field_66c;
    unsigned int field_670;
    unsigned int field_674;
    unsigned int field_678;
    unsigned int field_67c;
    unsigned int field_680;
    unsigned int field_684;
    unsigned int field_688;
    unsigned int field_68c;
    unsigned int field_690;
    unsigned int field_694;
    unsigned int field_698;
    unsigned int field_69c;
    unsigned int field_6a0;
    unsigned int field_6a4;
    unsigned int field_6a8;
    unsigned int field_6ac;
    unsigned int field_6b0;
    unsigned int field_6b4;
    unsigned int field_6b8;
    unsigned int field_6bc;
    unsigned int field_6c0;
    unsigned int field_6c4;
    unsigned int field_6c8;
    unsigned int field_6cc;
    unsigned int field_6d0;
    unsigned int field_6d4;
    unsigned int field_6d8;
    unsigned int field_6dc;
    unsigned int field_6e0;
    unsigned int field_6e4;
    unsigned int field_6e8;
    unsigned int field_6ec;
    unsigned int field_6f0;
    unsigned int field_6f4;
    unsigned int field_6f8;
    unsigned int field_6fc;
    unsigned int field_700;
    unsigned int field_704;
    unsigned int field_708;
    unsigned int field_70c;
    unsigned int field_710;
    unsigned int field_714;
    unsigned int field_718;
    unsigned int field_71c;
    unsigned int field_720;
    unsigned int field_724;
    unsigned int field_728;
    unsigned int field_72c;
    unsigned int field_730;
    unsigned int field_734;
    unsigned int field_738;
    unsigned int field_73c;
    unsigned int field_740;
    unsigned int field_744;
    unsigned int field_748;
    unsigned int field_74c;
    unsigned int field_750;
    unsigned int field_754;
    unsigned int field_758;
    unsigned int field_75c;
    unsigned int field_760;
    unsigned int field_764;
    unsigned int field_768;
    unsigned int field_76c;
    unsigned int field_770;
    unsigned int field_774;
    unsigned int field_778;
    unsigned int field_77c;
    unsigned int field_780;
    unsigned int field_784;
    unsigned int field_788;
    unsigned int field_78c;
    unsigned int field_790;
    unsigned int field_794;
    unsigned int field_798;
    unsigned int field_79c;
    unsigned int field_7a0;
    unsigned int field_7a4;
    unsigned int field_7a8;
    unsigned int field_7ac;
    unsigned int field_7b0;
    unsigned int field_7b4;
    unsigned int field_7b8;
    unsigned int field_7bc;
    unsigned int field_7c0;
    unsigned int field_7c4;
    unsigned int field_7c8;
    unsigned int field_7cc;
    unsigned int field_7d0;
    unsigned int field_7d4;
    unsigned int field_7d8;
    unsigned int field_7dc;
    unsigned int field_7e0;
    unsigned int field_7e4;
    unsigned int field_7e8;
    unsigned int field_7ec;
    unsigned int field_7f0;
    unsigned int field_7f4;
    unsigned int field_7f8;
    unsigned int field_7fc;
    unsigned int field_800;
    unsigned int field_804;
    unsigned int field_808;
    unsigned int field_80c;
    unsigned int field_810;
    unsigned int field_814;
    unsigned int field_818;
    unsigned int field_81c;
    unsigned int field_820;
    unsigned int field_824;
    unsigned int field_828;
    unsigned int field_82c;
    unsigned int field_830;
    unsigned int field_834;
    unsigned int field_838;
    unsigned int field_83c;
    unsigned int field_840;
    unsigned int field_844;
    unsigned int field_848;
    unsigned int field_84c;
    unsigned int field_850;
    unsigned int field_854;
    unsigned int field_858;
    unsigned int field_85c;
    unsigned int field_860;
    unsigned int field_864;
    unsigned int field_868;
    unsigned int field_86c;
    unsigned int field_870;
    unsigned int field_874;
    unsigned int field_878;
    unsigned int field_87c;
    unsigned int field_880;
    unsigned int field_884;
    unsigned int field_888;
    unsigned int field_88c;
    unsigned int field_890;
    unsigned int field_894;
    unsigned int field_898;
    unsigned int field_89c;
    unsigned int field_8a0;
    unsigned int field_8a4;
    unsigned int field_8a8;
    unsigned int field_8ac;
    unsigned int field_8b0;
    unsigned int field_8b4;
    unsigned int field_8b8;
    unsigned int field_8bc;
    unsigned int field_8c0;
    unsigned int field_8c4;
    unsigned int field_8c8;
    unsigned int field_8cc;
    unsigned int field_8d0;
    unsigned int field_8d4;
    unsigned int field_8d8;
    unsigned int field_8dc;
    unsigned int field_8e0;
    unsigned int field_8e4;
    unsigned int field_8e8;
    unsigned int field_8ec;
    unsigned int field_8f0;
    unsigned int field_8f4;
    unsigned int field_8f8;
    unsigned int field_8fc;
    unsigned int field_900;
    unsigned int field_904;
    unsigned int field_908;
    unsigned int field_90c;
    unsigned int field_910;
    unsigned int field_914;
    unsigned int field_918;
    unsigned int field_91c;
    unsigned int field_920;
    unsigned int field_924;
    unsigned int field_928;
    unsigned int field_92c;
    unsigned int field_930;
    unsigned int field_934;
    unsigned int field_938;
    unsigned int field_93c;
    unsigned int field_940;
    unsigned int field_944;
    unsigned int field_948;
    unsigned int field_94c;
    unsigned int field_950;
    unsigned int field_954;
    unsigned int field_958;
    unsigned int field_95c;
    unsigned int field_960;
    unsigned int field_964;
    unsigned int field_968;
    unsigned int field_96c;
    unsigned int field_970;
    unsigned int field_974;
    unsigned int field_978;
    unsigned int field_97c;
    unsigned int field_980;
    unsigned int field_984;
    unsigned int field_988;
    unsigned int field_98c;
    unsigned int field_990;
    unsigned int field_994;
    unsigned int field_998;
    unsigned int field_99c;
    unsigned int field_9a0;
    unsigned int field_9a4;
    unsigned int field_9a8;
    unsigned int field_9ac;
    unsigned int field_9b0;
    unsigned int field_9b4;
    unsigned int field_9b8;
    unsigned int field_9bc;
    unsigned int field_9c0;
    unsigned int field_9c4;
    unsigned int field_9c8;
    unsigned int field_9cc;
    unsigned int field_9d0;
    unsigned int field_9d4;
    unsigned int field_9d8;
    unsigned int field_9dc;
    unsigned int field_9e0;
    unsigned int field_9e4;
    unsigned int field_9e8;
    unsigned int field_9ec;
    unsigned int field_9f0;
    unsigned int field_9f4;
    unsigned int field_9f8;
    unsigned int field_9fc;
    unsigned int field_a00;
    unsigned int field_a04;
    unsigned int field_a08;
    unsigned int field_a0c;
    unsigned int field_a10;
    unsigned int field_a14;
    unsigned int field_a18;
    unsigned int field_a1c;
    unsigned int field_a20;
    unsigned int field_a24;
    unsigned int field_a28;
    unsigned int field_a2c;
    unsigned int field_a30;
    unsigned int field_a34;
    unsigned int field_a38;
    unsigned int field_a3c;
    unsigned int field_a40;
    unsigned int field_a44;
    unsigned int field_a48;
    unsigned int field_a4c;
    unsigned int field_a50;
    unsigned int field_a54;
    unsigned int field_a58;
    unsigned int field_a5c;
    unsigned int field_a60;
    unsigned int field_a64;
    unsigned int field_a68;
    unsigned int field_a6c;
    unsigned int field_a70;
    unsigned int field_a74;
    unsigned int field_a78;
    unsigned int field_a7c;
    unsigned int field_a80;
    unsigned int field_a84;
    unsigned int field_a88;
    unsigned int field_a8c;
    unsigned int field_a90;
    unsigned int field_a94;
    unsigned int field_a98;
    unsigned int field_a9c;
    unsigned int field_aa0;
    unsigned int field_aa4;
    unsigned int field_aa8;
    unsigned int field_aac;
    unsigned int field_ab0;
    unsigned int field_ab4;
    unsigned int field_ab8;
    unsigned int field_abc;
    unsigned int field_ac0;
    unsigned int field_ac4;
    unsigned int field_ac8;
    unsigned int field_acc;
    unsigned int field_ad0;
    unsigned int field_ad4;
    unsigned int field_ad8;
    unsigned int field_adc;
    unsigned int field_ae0;
    unsigned int field_ae4;
    unsigned int field_ae8;
    unsigned int field_aec;
    unsigned int field_af0;
    unsigned int field_af4;
    unsigned int field_af8;
    unsigned int field_afc;
    unsigned int field_b00;
    unsigned int field_b04;
    unsigned int field_b08;
    unsigned int field_b0c;
    unsigned int field_b10;
    unsigned int field_b14;
    unsigned int field_b18;
    unsigned int field_b1c;
    unsigned int field_b20;
    unsigned int field_b24;
    unsigned int field_b28;
    unsigned int field_b2c;
    unsigned int field_b30;
    unsigned int field_b34;
    unsigned int field_b38;
    unsigned int field_b3c;
    unsigned int field_b40;
    unsigned int field_b44;
    unsigned int field_b48;
    unsigned int field_b4c;
    unsigned int field_b50;
    unsigned int field_b54;
    unsigned int field_b58;
    unsigned int field_b5c;
    unsigned int field_b60;
    unsigned int field_b64;
    unsigned int field_b68;
    unsigned int field_b6c;
    unsigned int field_b70;
    unsigned int field_b74;
    unsigned int field_b78;
    unsigned int field_b7c;
    unsigned int field_b80;
    unsigned int field_b84;
    unsigned int field_b88;
    unsigned int field_b8c;
    unsigned int field_b90;
    unsigned int field_b94;
    unsigned int field_b98;
    unsigned int field_b9c;
    unsigned int field_ba0;
    unsigned int field_ba4;
    unsigned int field_ba8;
    unsigned int field_bac;
    unsigned int field_bb0;
    unsigned int field_bb4;
    unsigned int field_bb8;
    unsigned int field_bbc;
    unsigned int field_bc0;
    unsigned int field_bc4;
    unsigned int field_bc8;
    unsigned int field_bcc;
    unsigned int field_bd0;
    unsigned int field_bd4;
    unsigned int field_bd8;
    unsigned int field_bdc;
    unsigned int field_be0;
    unsigned int field_be4;
    unsigned int field_be8;
    unsigned int field_bec;
    unsigned int field_bf0;
    unsigned int field_bf4;
    unsigned int field_bf8;
    unsigned int field_bfc;
    unsigned int field_c00;
    unsigned int field_c04;
    unsigned int field_c08;
    unsigned int field_c0c;
    unsigned int field_c10;
    unsigned int field_c14;
    unsigned int field_c18;
    unsigned int field_c1c;
    unsigned int field_c20;
    unsigned int field_c24;
    unsigned int field_c28;
    unsigned int field_c2c;
    unsigned int field_c30;
    unsigned int field_c34;
    unsigned int field_c38;
    unsigned int field_c3c;
    unsigned int field_c40;
    unsigned int field_c44;
    unsigned int field_c48;
    unsigned int field_c4c;
    unsigned int field_c50;
    unsigned int field_c54;
    unsigned int field_c58;
    unsigned int field_c5c;
    unsigned int field_c60;
    unsigned int field_c64;
    unsigned int field_c68;
    unsigned int field_c6c;
    unsigned int field_c70;
    unsigned int field_c74;
    unsigned int field_c78;
    unsigned int field_c7c;
    unsigned int field_c80;
    unsigned int field_c84;
    unsigned int field_c88;
    unsigned int field_c8c;
    unsigned int field_c90;
    unsigned int field_c94;
    unsigned int field_c98;
    unsigned int field_c9c;
    unsigned int field_ca0;
    unsigned int field_ca4;
    unsigned int field_ca8;
    unsigned int field_cac;
    unsigned int field_cb0;
    unsigned int field_cb4;
    unsigned int field_cb8;
    unsigned int field_cbc;
    unsigned int field_cc0;
    unsigned int field_cc4;
    unsigned int field_cc8;
    unsigned int field_ccc;
    unsigned int field_cd0;
    unsigned int field_cd4;
    unsigned int field_cd8;
    unsigned int field_cdc;
    unsigned int field_ce0;
    unsigned int field_ce4;
    unsigned int field_ce8;
    unsigned int field_cec;
    unsigned int field_cf0;
    unsigned int field_cf4;
    unsigned int field_cf8;
    unsigned int field_cfc;
    unsigned int field_d00;
    unsigned int field_d04;
    unsigned int field_d08;
    unsigned int field_d0c;
    unsigned int field_d10;
    unsigned int field_d14;
    unsigned int field_d18;
    unsigned int field_d1c;
    unsigned int field_d20;
    unsigned int field_d24;
    unsigned int field_d28;
    unsigned int field_d2c;
    unsigned int field_d30;
    unsigned int field_d34;
    unsigned int field_d38;
    unsigned int field_d3c;
    unsigned int field_d40;
    unsigned int field_d44;
    unsigned int field_d48;
    unsigned int field_d4c;
    unsigned int field_d50;
    unsigned int field_d54;
    unsigned int field_d58;
    unsigned int field_d5c;
    unsigned int field_d60;
    unsigned int field_d64;
    unsigned int field_d68;
    unsigned int field_d6c;
    unsigned int field_d70;
    unsigned int field_d74;
    unsigned int field_d78;
    unsigned int field_d7c;
    unsigned int field_d80;
    unsigned int field_d84;
    unsigned int field_d88;
    unsigned int field_d8c;
    unsigned int field_d90;
    unsigned int field_d94;
    unsigned int field_d98;
    unsigned int field_d9c;
    unsigned int field_da0;
    unsigned int field_da4;
    unsigned int field_da8;
    unsigned int field_dac;
    unsigned int field_db0;
    unsigned int field_db4;
    unsigned int field_db8;
    unsigned int field_dbc;
    unsigned int field_dc0;
    unsigned int field_dc4;
    unsigned int field_dc8;
    unsigned int field_dcc;
    unsigned int field_dd0;
    unsigned int field_dd4;
    unsigned int field_dd8;
    unsigned int field_ddc;
    unsigned int field_de0;
    unsigned int field_de4;
    unsigned int field_de8;
    unsigned int field_dec;
    unsigned int field_df0;
    unsigned int field_df4;
    unsigned int field_df8;
    unsigned int field_dfc;
    unsigned int field_e00;
    unsigned int field_e04;
    unsigned int field_e08;
    unsigned int field_e0c;
    unsigned int field_e10;
    unsigned int field_e14;
    unsigned int field_e18;
    unsigned int field_e1c;
    unsigned int field_e20;
    unsigned int field_e24;
    unsigned int field_e28;
    unsigned int field_e2c;
    unsigned int field_e30;
    unsigned int field_e34;
    unsigned int field_e38;
    unsigned int field_e3c;
    unsigned int field_e40;
    unsigned int field_e44;
    unsigned int field_e48;
    unsigned int field_e4c;
    unsigned int field_e50;
    unsigned int field_e54;
    unsigned int field_e58;
    unsigned int field_e5c;
    unsigned int field_e60;
    unsigned int field_e64;
    unsigned int field_e68;
    unsigned int field_e6c;
    unsigned int field_e70;
    unsigned int field_e74;
    unsigned int field_e78;
    unsigned int field_e7c;
    unsigned int field_e80;
    unsigned int field_e84;
    unsigned int field_e88;
    unsigned int field_e8c;
    unsigned int field_e90;
    unsigned int field_e94;
    unsigned int field_e98;
    unsigned int field_e9c;
    unsigned int field_ea0;
    unsigned int field_ea4;
    unsigned int field_ea8;
    unsigned int field_eac;
    unsigned int field_eb0;
    unsigned int field_eb4;
    unsigned int field_eb8;
    unsigned int field_ebc;
    unsigned int field_ec0;
    unsigned int field_ec4;
    unsigned int field_ec8;
    unsigned int field_ecc;
    unsigned int field_ed0;
    unsigned int field_ed4;
    unsigned int field_ed8;
    unsigned int field_edc;
    unsigned int field_ee0;
    unsigned int field_ee4;
    unsigned int field_ee8;
    unsigned int field_eec;
    unsigned int field_ef0;
    unsigned int field_ef4;
    unsigned int field_ef8;
    unsigned int field_efc;
    unsigned int field_f00;
    unsigned int field_f04;
    unsigned int field_f08;
    unsigned int field_f0c;
    unsigned int field_f10;
    unsigned int field_f14;
    unsigned int field_f18;
    unsigned int field_f1c;
    unsigned int field_f20;
    unsigned int field_f24;
    unsigned int field_f28;
    unsigned int field_f2c;
    unsigned int field_f30;
    unsigned int field_f34;
    unsigned int field_f38;
    unsigned int field_f3c;
    unsigned int field_f40;
    unsigned int field_f44;
    unsigned int field_f48;
    unsigned int field_f4c;
    unsigned int field_f50;
    unsigned int field_f54;
    unsigned int field_f58;
    unsigned int field_f5c;
    unsigned int field_f60;
    unsigned int field_f64;
    unsigned int field_f68;
    unsigned int field_f6c;
    unsigned int field_f70;
    unsigned int field_f74;
    unsigned int field_f78;
    unsigned int field_f7c;
    unsigned int field_f80;
    unsigned int field_f84;
    unsigned int field_f88;
    unsigned int field_f8c;
    unsigned int field_f90;
    unsigned int field_f94;
    unsigned int field_f98;
    unsigned int field_f9c;
    unsigned int field_fa0;
    unsigned int field_fa4;
    unsigned int field_fa8;
    unsigned int field_fac;
    unsigned int field_fb0;
    unsigned int field_fb4;
    unsigned int field_fb8;
    unsigned int field_fbc;
    unsigned int field_fc0;
    unsigned int field_fc4;
    unsigned int field_fc8;
    unsigned int field_fcc;
    unsigned int field_fd0;
    unsigned int field_fd4;
    unsigned int field_fd8;
    unsigned int field_fdc;
    unsigned int field_fe0;
    unsigned int field_fe4;
    unsigned int field_fe8;
    unsigned int field_fec;
    unsigned int field_ff0;
    unsigned int field_ff4;
    unsigned int field_ff8;
    unsigned int field_ffc;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern void *g_404ff4;
extern void __x86_get_pc_thunk_bx(void);
extern void __x86_get_pc_thunk_dx(void);
extern unsigned int __x86_get_pc_thunk_di(void);
extern unsigned int __x86_get_pc_thunk_ax(void);

int _init()
{
 if (g_404ff4)
  ((void(*)(void))g_404ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return v0;
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
int sub_40108e()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 struct_0 *v1; // ebx

 return v1->field_24;
}


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 return 0;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 struct_0 *v1; // ebx

 return (int)v1->padding_0[16];
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 struct_0 *v1; // ebx

 return v1->padding_0[20];
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0

int sub_4010d0()
{
 struct_0 *v1; // ebx

 return *(int *)((char *)v1 + 0x18);
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 // Decompilation error: goto statement was incorrectly generated
 return 0;
}


// Function: sub_4010ea at 0x4010ea
void sub_4010ea()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40111c at 0x40111c
void sub_40111c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401120
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401124 at 0x401124
void sub_401124()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 ptr = (unsigned int *)((char *)&ptr[4023] + 3);
 return;
}


// Function: sub_401163 at 0x401163
void sub_401163()
{
}


// Function: sub_401169 at 0x401169
void sub_401169()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones(void)
{
 struct_0 *v2; // edx
 char *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = (char *)&v2->padding_0[15959];
 v0 = v4;
 // Function body is complex CRT stub - simplified for now
 return;
}


// Function: sub_4011b7 at 0x4011b7
void sub_4011b7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux(void)
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

 v5 = __x86_get_pc_thunk_di();
 ptr = &v6->padding_0[15871];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[72])
 return v5;
 if (*((int *)&ptr->padding_0[36]))
 sub_401090(*((int *)&ptr->padding_0[56]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[76]);
 i = (&ptr->padding_0[220] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[76]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[76]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[76]);
 } while (*((int *)&ptr->padding_0[76]) < i);
 }
 v14 = (unsigned int*)deregister_tm_clones();
 ptr->padding_0[72] = 1;
 return v14;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401259
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40125d
unsigned int __x86_get_pc_thunk_di(void)
{
 unsigned int v0; // eax

 return v0;
}


// Function: callback_func at 0x401261
unsigned int callback_func(unsigned int a0)
{
 return a0 * 2;
}


// Function: func_a at 0x40126c
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: func_b at 0x401278
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: cdecl_func at 0x401283
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_cdecl at 0x401290
unsigned int call_cdecl()
{
 return 15;
}


// Function: stdcall_func at 0x40129a
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x4012aa
unsigned int call_stdcall()
{
 return 50;
}


// Function: fastcall_func at 0x4012b4
int fastcall_func(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // edx

 return v0 + v1 + a0;
}


// Function: call_fastcall at 0x4012c2
unsigned int call_fastcall()
{
 return 6;
}


// Function: call_thiscall at 0x4012cc
unsigned int call_thiscall()
{
 return 15;
}


// Function: arm_aapcs_func at 0x4012d6
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x4012ef
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: mips_func at 0x4012f9
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x40130e
unsigned int call_mips()
{
 return 100;
}


// Function: amd64_sysv_func at 0x401318
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x401335
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: ms_x64_func at 0x40133f
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x401358
unsigned int call_ms_x64()
{
 return 15;
}


// Function: vectorcall_func at 0x401362
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x401377
unsigned int call_vectorcall()
{
 return 10;
}


// Function: mixed_conventions_test at 0x401381
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: varargs_func at 0x40138b
unsigned int varargs_func(unsigned int i)
{
 char *ptr; // eax
 unsigned int v2; // edx
 unsigned int v3; // ecx
 char *v4; // eax
 char v0; // [bp+0x8]

 if (i <= 0)
 return 0;
 ptr = &v0;
 v2 = 0;
 v3 = 0;
 do
 {
 v4 = ptr + 1;
 v3 += *(ptr);
 v2 += 1;
 ptr = v4;
 } while (i != v2);
 return v3;
}


// Function: func_no_args at 0x4013c1
unsigned int func_no_args()
{
 return 42;
}


// Function: func_many_args at 0x4013cb
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x4013f0
int func_mixed_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v6; // edi
 unsigned int v7; // esi
 unsigned int v8; // ebx
 unsigned int v9; // eax
 double v0; // [bp-0x1c], Other Possible Types: unsigned long, unsigned int
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v9 = 0;
 if (a1)
 v9 = sub_4010d0(a1);
 v2 = v9 + a0;
 v0 = a2;
 v1 = a3;
 return (unsigned int)v0;
}


// Function: func_struct_byval at 0x40146e
unsigned int func_struct_byval()
{
 char *cur; // edx
 unsigned int v3; // ecx
 unsigned int v0; // [bp+0x4]
 char v1; // [bp+0x84]

 cur = &v0;
 v3 = 0;
 do
 {
 v3 += *(cur);
 cur += 2;
 } while (cur != &v1);
 return v3;
}


// Function: func_struct_byptr at 0x401498
unsigned int func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return a0[1] * *(a0);
}


// Function: test_calling_conventions at 0x4014b1
extern unsigned int g_402008;
extern unsigned int g_40202c;
extern unsigned int g_402054;
extern unsigned int g_402078;
extern unsigned int g_4020a0;
extern unsigned int g_4020c8;
extern unsigned int g_4020f4;

int test_calling_conventions()
{
 unsigned long v7; // ldt
 unsigned long v8; // gdt
 unsigned int flag1; // ecx
 char *iter; // eax
 unsigned int v19; // esi
 unsigned short v9; // gs
 unsigned int v11; // eax
 unsigned int v12; // edx
 unsigned int v13; // ecx
 char *cur; // edi
 char *i; // esi
 unsigned int result; // [bp-0x138]
 unsigned int v1; // [bp-0x134]
 unsigned int v2; // [bp-0x130]
 unsigned int v20; // [bp-0x118]
 unsigned int v21; // [bp-0x114]
 char v3; // [bp-0x110]
 char v4; // [bp-0x90]
 unsigned int v5; // [bp-0x10]

 v5 = *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 sub_4010c0(&g_402008);
 sub_4010e0(1, "CALL-L1-01: %d\n", 15);
 sub_4010e0(1, "CALL-L1-02: %d\n", 50);
 sub_4010e0(1, "CALL-L1-03: %d\n", 6);
 sub_4010e0(1, "CALL-L1-04: %d\n", 15);
 sub_4010e0(1, "CALL-L1-05: %d\n", 15);
 sub_4010e0(1, "CALL-L1-06: %d\n", 100);
 sub_4010e0(1, "CALL-L1-07: %d\n", 21);
 sub_4010e0(1, "CALL-L1-08: %d\n", 15);
 sub_4010e0(1, "CALL-L1-09: %d\n", 10);
 sub_4010e0(1, "CALL-L1-10: %d\n", 33);
 v2 = 3;
 v1 = 2;
 result = 1;
 sub_4010e0(1, &g_40202c, varargs_func(5));
 sub_4010e0(1, &g_402054, 42);
 sub_4010e0(1, &g_402078, 36);
 sub_4010e0(1, &g_4020a0, 117);
 v11 = 1;
 v12 = 0;
 do
 {
 v13 = v11 * 8;
 *((unsigned int *)((char *)&v20 + v13)) = v11;
 *((unsigned int *)((char *)&v21 + v13)) = v12;
 v12 += v11 + 1 < v11;
 v11 += 1;
 } while (v12 || (v11 ^ 17));
 cur = &v4;
 i = &v3;
 for (flag1 = 32; flag1; i += 1)
 {
 flag1 -= 1;
 *(cur) = *(i);
 cur += 1;
 }
 iter = &v4;
 v19 = 0;
 do
 {
 v19 += *(iter);
 iter += 2;
 } while (&v5 != iter);
 sub_4010e0(1, &g_4020c8, v19);
 sub_4010e0(1, &g_4020f4, 50);
 if (v5 == *((int *)_ccall(v7, v8, (unsigned int)v9, 20)))
 return v5 - *((int *)_ccall(v7, v8, (unsigned int)v9, 20));
 __stack_chk_fail_local();
}


// Function: param_by_value_int at 0x4016af
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_by_value_int at 0x4016ba
unsigned int call_by_value_int()
{
 return 15;
}


// Function: param_by_value_ptr at 0x4016c4
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x4016d4
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: param_array_decay at 0x4016de
unsigned int param_array_decay()
{
 return 4;
}


// Function: call_array_decay at 0x4016e8
unsigned int call_array_decay()
{
 return 4;
}


// Function: param_string at 0x4016f2
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: call_string_param at 0x401704
unsigned int call_string_param()
{
 return 173;
}


// Function: param_ptr_array at 0x40170e
// struct_0 is already defined globally

unsigned int param_ptr_array(struct_0 **a0, unsigned int a1)
{
 unsigned int v0; // edx
 struct_0 **i; // eax

 if (a1 <= 0)
 return 0;
 v0 = 0;
 i = a0;
 do
 {
 v0 += (*i)->field_0;
 i += 1;
 } while (i != &a0[a1]);
 return v0;
}


// Function: call_ptr_array at 0x401742
int call_ptr_array()
{
 unsigned int v5; // eax
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 void** v0; // [bp-0x1c]
 void** v1; // [bp-0x18]
 void** v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v5 = __x86_get_pc_thunk_ax() + 14462;
 v3 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 *v0 = (void*)(v5 - 11751);
 *v1 = (void*)(v5 - 11747);
 *v2 = (void*)(v5 - 11743);
 param_ptr_array(&v0, 3);
 if (v3 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return;
 __stack_chk_fail_local();
}


// Function: param_varargs at 0x4017a2
unsigned int param_varargs(unsigned int i)
{
 char *ptr; // eax
 unsigned int v2; // edx
 unsigned int v3; // ecx
 char *v4; // eax
 char v0; // [bp+0x8]

 if (i <= 0)
 return 0;
 ptr = &v0;
 v2 = 0;
 v3 = 0;
 do
 {
 v4 = ptr + 1;
 v3 += *(ptr);
 v2 += 1;
 ptr = v4;
 } while (i != v2);
 return v3;
}


// Function: call_varargs_param at 0x4017d8
unsigned int call_varargs_param()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = 40;
 v2 = 30;
 v1 = 20;
 v0 = 10;
 return param_varargs(4);
}


// Function: param_func_ptr at 0x4017ef
int param_func_ptr(unsigned int *a0, unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x401805
unsigned int call_func_ptr_param()
{
 return param_func_ptr(__x86_get_pc_thunk_ax() - 1456, 5);
}


// Function: param_double_ptr at 0x401828

unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*(ptr))
 {
 *(ptr)->field_0 = a1;
 *(ptr) = NULL;
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_double_ptr at 0x401858
char call_double_ptr()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int v0; // [bp-0x18]
 char *v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 v0 = 10;
 v1 = &v0;
 param_double_ptr(&v1, 20);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return (!v1) + (char)v0;
 __stack_chk_fail_local();
}


// Function: param_complex_cast at 0x4018af
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (!a1)
 {
 return *(a0);
 }
 else if (a1 == 1)
 {
 return a0[1] + *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_complex_cast at 0x4018d3
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: param_struct_byval at 0x4018dd
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a15 + a0;
}


// Function: call_struct_byval at 0x4018ea
int call_struct_byval()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int idx; // eax
 unsigned long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 idx = 0;
 do
 {
 (&v0)[idx] = idx;
 idx += 1;
 } while (idx != 16);
 if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 return v0 + v1;
 __stack_chk_fail_local();
}


// Function: param_order_dep at 0x401927
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: call_order_dep at 0x401934
unsigned int call_order_dep()
{
 return 4;
}


// Function: test_parameter_passing at 0x40193e
extern unsigned int g_402124;

int test_parameter_passing()
{
 sub_4010c0(&g_402124);
 sub_4010e0(1, "PARAM-L1-01: %d\n", 15);
 sub_4010e0(1, "PARAM-L1-02: %d\n", call_by_value_ptr());
 sub_4010e0(1, "PARAM-L2-01: %d\n", 4);
 sub_4010e0(1, "PARAM-L2-02: %d\n", 173);
 sub_4010e0(1, "PARAM-L2-03: %d\n", call_ptr_array(1, "PARAM-L2-02: %d\n", 173));
 sub_4010e0(1, "PARAM-L2-04: %d\n", call_varargs_param());
 sub_4010e0(1, "PARAM-L3-01: %d\n", call_func_ptr_param());
 sub_4010e0(1, "PARAM-L3-02: %d\n", call_double_ptr());
 sub_4010e0(1, "PARAM-L3-03: %d\n", call_complex_cast());
 sub_4010e0(1, "PARAM-L3-04: %d\n", call_struct_byval());
 return sub_4010e0(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x401a52
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_ret_basic at 0x401a5d
unsigned int call_ret_basic()
{
 return 42;
}


// Function: ret_pointer at 0x401a67
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: call_ret_pointer at 0x401a73
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: ret_small_struct at 0x401a7d
unsigned int* ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: call_ret_small_struct at 0x401a95
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: ret_large_struct at 0x401a9f
unsigned int [16] ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 unsigned int v17; // ecx
 unsigned long v18; // ldt
 unsigned long v19; // gdt
 unsigned short v20; // gs
 unsigned int index; // eax
 unsigned int v0; // [bp-0x50]
 unsigned int v1; // [bp-0x4c]
 unsigned int v2; // [bp-0x48]
 unsigned int v3; // [bp-0x44]
 unsigned int v4; // [bp-0x40]
 unsigned int v5; // [bp-0x3c]
 unsigned int v6; // [bp-0x38]
 unsigned int v7; // [bp-0x34]
 unsigned int v8; // [bp-0x30]
 unsigned int v9; // [bp-0x2c]
 unsigned int v10; // [bp-0x28]
 unsigned int v11; // [bp-0x24]
 unsigned int v12; // [bp-0x20]
 unsigned int v13; // [bp-0x1c]
 unsigned int v14; // [bp-0x18]
 unsigned int v15; // [bp-0x14]
 unsigned int v16; // [bp-0x10]

 v17 = a1;
 v16 = *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
 index = v17;
 do
 {
 (&v0)[index + -(v17)] = index;
 index += 1;
 } while (index != v17 + 16);
 *(ptr) = v0;
 ptr[1] = v1;
 ptr[2] = v2;
 ptr[3] = v3;
 ptr[4] = v4;
 ptr[5] = v5;
 ptr[6] = v6;
 ptr[7] = v7;
 ptr[8] = v8;
 ptr[9] = v9;
 ptr[10] = v10;
 ptr[11] = v11;
 ptr[12] = v12;
 ptr[13] = v13;
 ptr[14] = v14;
 ptr[15] = v15;
 if (v16 == *((int *)_ccall(v18, v19, (unsigned int)v20, 20)))
 return ptr;
 __stack_chk_fail_local();
}


// Function: call_ret_large_struct at 0x401b5a
int call_ret_large_struct()
{
 unsigned long v6; // ldt
 unsigned long v7; // gdt
 unsigned short v8; // gs
 unsigned int v0; // [bp-0x54]
 unsigned int v1[14]; // [bp-0x50]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
 ret_large_struct(&v1, 100);
 if (v3 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
 return v2 + v0;
 __stack_chk_fail_local();
}


// Function: ret_func_ptr at 0x401b9d
unsigned int ret_func_ptr(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax() + 13350;
 if (a0)
 return v0 - 15700;
 return v0 - 15712;
}


// Function: call_ret_func_ptr at 0x401bc0
unsigned int call_ret_func_ptr()
{
 return func_b(5);
}


// Function: ret_opaque_handle at 0x401bcf
unsigned int ret_opaque_handle(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax() + 13300;
 if (!a0)
 return v0 + 68;
 return v0 + 60;
}


// Function: call_ret_opaque at 0x401bf2
int call_ret_opaque()
{
 return *((int *)(__x86_get_pc_thunk_ax() + 13333));
}


// Function: ret_complex_expr at 0x401c07
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a0 <= a1)
 return a2 + 10;
 return a2 * 2;
}


// Function: call_ret_complex_expr at 0x401c21
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: ret_multi_branch at 0x401c2b
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 20;
 if (a0 != 1)
 {
 v0 = 30;
 if (a0 != 2)
 v0 = (-(a0 < 1) & 11) - 1;
 }
 return v0;
}


// Function: call_ret_multi_branch at 0x401c53
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: ret_void at 0x401c5d
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: call_ret_void at 0x401c6f
unsigned int call_ret_void()
{
 return 21;
}


// Function: test_return_values at 0x401c79
extern unsigned int g_4022ac;
extern unsigned int g_4022ca;
extern unsigned int g_4022e6;
extern unsigned int g_402302;
extern unsigned int g_40231d;
extern unsigned int g_40233a;
extern unsigned int g_402356;
extern unsigned int g_402373;
extern unsigned int g_40238f;
extern unsigned int g_4023ab;
extern unsigned int handle1_1;

int test_return_values()
{
 sub_4010c0(&g_4022ac);
 sub_4010e0(1, &g_4022ca, 42);
 sub_4010e0(1, &g_4022e6, call_ret_pointer());
 sub_4010e0(1, &g_402302, call_ret_small_struct());
 sub_4010e0(1, &g_40231d, call_ret_large_struct());
 sub_4010e0(1, &g_40233a, call_ret_func_ptr());
 sub_4010e0(1, &g_402356, handle1_1);
 sub_4010e0(1, &g_402373, 40);
 sub_4010e0(1, &g_40238f, 60);
 return sub_4010e0(1, &g_4023ab, 21);
}


// Function: main at 0x401d5c
unsigned int main()
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


// Function: __x86_get_pc_thunk_ax at 0x401d7c
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: __stack_chk_fail_local at 0x401d80
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4010b0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
 struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux(void)
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2[1].padding_0[227];
 v4 = (unsigned int *)&ptr->padding_0[232];
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


// Function: sub_401de2 at 0x401de2
void sub_401de2()
{
}



/* CRT stub function _fini removed by preprocessor */


