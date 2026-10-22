/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100268fb4 | FUN_100268fb4 */

undefined8 * FUN_100268fb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_release(uVar4);
  uVar2 = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar5;
  uVar3 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar2;
  FUN_10026569c(uVar1,uVar4,uVar3);
  return param_1;
}



/* Address: 0x100269004 | FUN_100269004 */

undefined1  [16] FUN_100269004(void)

{
  return ZEXT816(0x100ec4750);
}



/* Address: 0x100269014 | FUN_100269014 */

void FUN_100269014(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca9de4,1);
  return;
}



/* Address: 0x100269024 | FUN_100269024 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100269024(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ControlSize CVar5;
  undefined *puVar6;
  long lVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  char *pcVar10;
  HorizontalAlignment HVar11;
  Color CVar12;
  VerticalAlignment VVar13;
  undefined7 extraout_var;
  long extraout_x8;
  undefined8 *puVar14;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined **ppuVar16;
  undefined8 *puVar17;
  long local_950 [3];
  undefined *local_938;
  undefined8 local_930;
  MainActor *local_928;
  long local_920;
  undefined8 *local_918;
  long local_910;
  undefined1 auStack_908 [248];
  undefined *local_810;
  undefined8 uStack_808;
  long lStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined1 uStack_738;
  undefined7 local_737;
  undefined1 uStack_730;
  undefined7 uStack_72f;
  undefined1 uStack_728;
  undefined7 uStack_727;
  undefined *local_720;
  undefined *local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined *local_620;
  undefined *local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined1 local_540;
  undefined *local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined1 local_460;
  undefined *local_450;
  undefined8 uStack_448;
  undefined1 local_440;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined7 local_42f;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined7 local_41f;
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined7 local_40f;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined7 local_3ff;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined1 uStack_3f0;
  undefined7 local_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined7 local_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3d0;
  undefined7 local_3cf;
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined7 local_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined7 local_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined7 local_39f;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined1 uStack_390;
  undefined7 local_38f;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 local_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined8 local_36f;
  undefined *local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined8 local_34f;
  undefined8 uStack_347;
  undefined8 local_33f;
  undefined8 uStack_337;
  undefined8 local_32f;
  undefined8 uStack_327;
  undefined8 local_31f;
  undefined8 uStack_317;
  undefined8 local_30f;
  undefined8 uStack_307;
  undefined8 local_2ff;
  undefined8 uStack_2f7;
  undefined8 local_2ef;
  undefined8 uStack_2e7;
  undefined8 local_2df;
  undefined8 uStack_2d7;
  undefined8 local_2cf;
  undefined8 uStack_2c7;
  undefined8 local_2bf;
  undefined8 uStack_2b7;
  undefined8 local_2af;
  undefined8 uStack_2a7;
  undefined8 local_29f;
  undefined8 uStack_297;
  undefined8 local_28f;
  undefined8 uStack_287;
  undefined8 local_27f;
  uint7 uStack_270;
  undefined1 local_269;
  undefined7 uStack_268;
  undefined1 uStack_261;
  undefined7 uStack_260;
  undefined1 local_259;
  undefined7 uStack_258;
  undefined1 uStack_251;
  undefined7 uStack_250;
  undefined1 local_249;
  undefined7 uStack_248;
  undefined1 uStack_241;
  undefined7 uStack_240;
  undefined1 local_239;
  undefined7 uStack_238;
  undefined1 uStack_231;
  undefined7 uStack_230;
  undefined1 local_229;
  undefined7 uStack_228;
  undefined1 uStack_221;
  undefined7 uStack_220;
  undefined1 local_219;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  undefined1 local_209;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 local_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined7 uStack_1f0;
  undefined1 local_1e9;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  undefined1 local_1d9;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  undefined7 uStack_1d0;
  undefined1 local_1c9;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  undefined1 local_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined1 local_1a9;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined *local_170;
  undefined8 uStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  
  puVar6 = &DAT_100fb9000;
  local_930 = param_2;
  FUN_1000037f0(&DAT_100fb9000,&DAT_100c38c78);
  local_938 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar7 = (long)local_950 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_910 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined8 *)(lVar7 - extraout_x12);
  lVar7 = 0;
  local_918 = puVar14;
  FUN_1002abb94();
  local_950[0] = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_950[0] + 0x40));
  lVar15 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_950[1] = lVar15;
  FUN_10026a71c();
  local_950[2] = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_920 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined8 *)(lVar15 - extraout_x12_00);
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar14 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_928 = pMVar8;
  UVar9 = Swift::Actor::get_unownedExecutor();
  pcVar10 = (char *)UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar10 & 1) == 0) {
    pcVar10 = "PasteLicensingAppStore/LifetimePurchaseView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,0xc,UVar9.unknown,puVar14)
    ;
  }
  HVar11 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar10);
  FUN_100269814(&local_170);
  uStack_568 = uStack_c8;
  local_570 = local_d0;
  uStack_558 = uStack_b8;
  uStack_560 = local_c0;
  uStack_548 = uStack_a8;
  local_550 = local_b0;
  uStack_5a8 = uStack_108;
  local_5b0 = local_110;
  uStack_598 = uStack_f8;
  uStack_5a0 = local_100;
  uStack_588 = uStack_e8;
  local_590 = local_f0;
  uStack_578 = uStack_d8;
  uStack_580 = local_e0;
  uStack_5e8 = uStack_148;
  local_5f0 = local_150;
  uStack_5d8 = uStack_138;
  uStack_5e0 = local_140;
  uStack_5c8 = uStack_128;
  local_5d0 = local_130;
  uStack_5b8 = uStack_118;
  uStack_5c0 = local_120;
  uStack_608 = uStack_168;
  local_610 = local_170;
  uStack_5f8 = uStack_158;
  uStack_600 = local_160;
  uStack_488 = uStack_c8;
  local_490 = local_d0;
  uStack_478 = uStack_b8;
  uStack_480 = local_c0;
  uStack_468 = uStack_a8;
  local_470 = local_b0;
  uStack_4c8 = uStack_108;
  local_4d0 = local_110;
  uStack_4b8 = uStack_f8;
  uStack_4c0 = local_100;
  uStack_4a8 = uStack_e8;
  local_4b0 = local_f0;
  uStack_498 = uStack_d8;
  uStack_4a0 = local_e0;
  uStack_508 = uStack_148;
  local_510 = local_150;
  uStack_4f8 = uStack_138;
  uStack_500 = local_140;
  uStack_4e8 = uStack_128;
  local_4f0 = local_130;
  uStack_4d8 = uStack_118;
  uStack_4e0 = local_120;
  local_540 = (undefined1)local_a0;
  local_460 = (undefined1)local_a0;
  uStack_528 = uStack_168;
  local_530 = local_170;
  uStack_518 = uStack_158;
  uStack_520 = local_160;
  FUN_100011090(&local_610,&uStack_270,&DAT_100fb9398,&DAT_100c39120);
  ppuVar16 = &local_530;
  FUN_100005808(ppuVar16,&DAT_100fb9398,&DAT_100c39120);
  uStack_1c1 = (undefined1)uStack_568;
  uStack_1c0 = (undefined7)((ulong)uStack_568 >> 8);
  local_1c9 = (undefined1)local_570;
  uStack_1c8 = (undefined7)((ulong)local_570 >> 8);
  uStack_1b1 = (undefined1)uStack_558;
  uStack_1b0 = (undefined7)((ulong)uStack_558 >> 8);
  local_1b9 = (undefined1)uStack_560;
  uStack_1b8 = (undefined7)((ulong)uStack_560 >> 8);
  uStack_1a1 = (undefined1)uStack_548;
  uStack_1a0 = (undefined7)((ulong)uStack_548 >> 8);
  local_1a9 = (undefined1)local_550;
  uStack_1a8 = (undefined7)((ulong)local_550 >> 8);
  uStack_201 = (undefined1)uStack_5a8;
  uStack_200 = (undefined7)((ulong)uStack_5a8 >> 8);
  local_209 = (undefined1)local_5b0;
  uStack_208 = (undefined7)((ulong)local_5b0 >> 8);
  uStack_1f1 = (undefined1)uStack_598;
  uStack_1f0 = (undefined7)((ulong)uStack_598 >> 8);
  local_1f9 = (undefined1)uStack_5a0;
  uStack_1f8 = (undefined7)((ulong)uStack_5a0 >> 8);
  uStack_1e1 = (undefined1)uStack_588;
  uStack_1e0 = (undefined7)((ulong)uStack_588 >> 8);
  local_1e9 = (undefined1)local_590;
  uStack_1e8 = (undefined7)((ulong)local_590 >> 8);
  uStack_1d1 = (undefined1)uStack_578;
  uStack_1d0 = (undefined7)((ulong)uStack_578 >> 8);
  local_1d9 = (undefined1)uStack_580;
  uStack_1d8 = (undefined7)((ulong)uStack_580 >> 8);
  uStack_241 = (undefined1)uStack_5e8;
  uStack_240 = (undefined7)((ulong)uStack_5e8 >> 8);
  local_249 = (undefined1)local_5f0;
  uStack_248 = (undefined7)((ulong)local_5f0 >> 8);
  uStack_231 = (undefined1)uStack_5d8;
  uStack_230 = (undefined7)((ulong)uStack_5d8 >> 8);
  local_239 = (undefined1)uStack_5e0;
  uStack_238 = (undefined7)((ulong)uStack_5e0 >> 8);
  uStack_221 = (undefined1)uStack_5c8;
  uStack_220 = (undefined7)((ulong)uStack_5c8 >> 8);
  local_229 = (undefined1)local_5d0;
  uStack_228 = (undefined7)((ulong)local_5d0 >> 8);
  uStack_211 = (undefined1)uStack_5b8;
  uStack_210 = (undefined7)((ulong)uStack_5b8 >> 8);
  local_219 = (undefined1)uStack_5c0;
  uStack_218 = (undefined7)((ulong)uStack_5c0 >> 8);
  uStack_261 = (undefined1)uStack_608;
  uStack_260 = (undefined7)((ulong)uStack_608 >> 8);
  local_269 = SUB81(local_610,0);
  uStack_268 = (undefined7)((ulong)local_610 >> 8);
  uStack_199 = local_540;
  uStack_251 = (undefined1)uStack_5f8;
  uStack_250 = (undefined7)((ulong)uStack_5f8 >> 8);
  local_259 = (undefined1)uStack_600;
  uStack_258 = (undefined7)((ulong)uStack_600 >> 8);
  FUN_1001fe15c();
  CVar12 = SwiftUI::Color::init((NSColor *)*ppuVar16);
  local_36f = CONCAT17(uStack_199,uStack_1a0);
  local_27f = CONCAT17(uStack_199,uStack_1a0);
  uStack_448 = 0x4020000000000000;
  local_440 = 0;
  uStack_2b7 = CONCAT17(uStack_1d1,uStack_1d8);
  local_2bf = CONCAT17(local_1d9,uStack_1e0);
  uStack_397 = uStack_1c8;
  uStack_390 = uStack_1c1;
  local_39f = uStack_1d0;
  uStack_398 = local_1c9;
  uStack_2a7 = CONCAT17(uStack_1c1,uStack_1c8);
  local_2af = CONCAT17(local_1c9,uStack_1d0);
  uStack_387 = uStack_1b8;
  uStack_380 = uStack_1b1;
  local_38f = uStack_1c0;
  uStack_388 = local_1b9;
  uStack_297 = CONCAT17(uStack_1b1,uStack_1b8);
  local_29f = CONCAT17(local_1b9,uStack_1c0);
  uStack_377 = uStack_1a8;
  uStack_370 = uStack_1a1;
  local_37f = uStack_1b0;
  uStack_378 = local_1a9;
  uStack_2f7 = CONCAT17(uStack_211,uStack_218);
  local_2ff = CONCAT17(local_219,uStack_220);
  uStack_3d7 = uStack_208;
  uStack_3d0 = uStack_201;
  local_3df = uStack_210;
  uStack_3d8 = local_209;
  uStack_2e7 = CONCAT17(uStack_201,uStack_208);
  local_2ef = CONCAT17(local_209,uStack_210);
  uStack_3c7 = uStack_1f8;
  uStack_3c0 = uStack_1f1;
  local_3cf = uStack_200;
  uStack_3c8 = local_1f9;
  uStack_2d7 = CONCAT17(uStack_1f1,uStack_1f8);
  local_2df = CONCAT17(local_1f9,uStack_200);
  uStack_3b7 = uStack_1e8;
  uStack_3b0 = uStack_1e1;
  local_3bf = uStack_1f0;
  uStack_3b8 = local_1e9;
  uStack_2c7 = CONCAT17(uStack_1e1,uStack_1e8);
  local_2cf = CONCAT17(local_1e9,uStack_1f0);
  uStack_3a7 = uStack_1d8;
  uStack_3a0 = uStack_1d1;
  local_3af = uStack_1e0;
  uStack_3a8 = local_1d9;
  uStack_337 = CONCAT17(uStack_251,uStack_258);
  local_33f = CONCAT17(local_259,uStack_260);
  uStack_417 = uStack_248;
  uStack_410 = uStack_241;
  local_41f = uStack_250;
  uStack_418 = local_249;
  uStack_327 = CONCAT17(uStack_241,uStack_248);
  local_32f = CONCAT17(local_249,uStack_250);
  uStack_407 = uStack_238;
  uStack_400 = uStack_231;
  local_40f = uStack_240;
  uStack_408 = local_239;
  uStack_317 = CONCAT17(uStack_231,uStack_238);
  local_31f = CONCAT17(local_239,uStack_240);
  uStack_3f7 = uStack_228;
  uStack_3f0 = uStack_221;
  local_3ff = uStack_230;
  uStack_3f8 = local_229;
  uStack_307 = CONCAT17(uStack_221,uStack_228);
  local_30f = CONCAT17(local_229,uStack_230);
  uStack_3e7 = uStack_218;
  uStack_3e0 = uStack_211;
  local_3ef = uStack_220;
  uStack_3e8 = local_219;
  uStack_437 = uStack_268;
  uStack_430 = uStack_261;
  uStack_438 = local_269;
  uStack_347 = CONCAT17(uStack_261,uStack_268);
  local_34f = CONCAT17(local_269,uStack_270);
  uStack_427 = uStack_258;
  uStack_420 = uStack_251;
  local_42f = uStack_260;
  uStack_428 = local_259;
  uStack_748 = CONCAT71(uStack_1b8,local_1b9);
  local_750 = CONCAT71(uStack_1c0,uStack_1c1);
  uStack_740 = CONCAT71(uStack_1b0,uStack_1b1);
  uStack_738 = local_1a9;
  uStack_72f = uStack_1a0;
  uStack_728 = uStack_199;
  local_737 = uStack_1a8;
  uStack_730 = uStack_1a1;
  uStack_788 = CONCAT71(uStack_1f8,local_1f9);
  local_790 = CONCAT71(uStack_200,uStack_201);
  uStack_778 = CONCAT71(uStack_1e8,local_1e9);
  local_780 = CONCAT71(uStack_1f0,uStack_1f1);
  uStack_768 = CONCAT71(uStack_1d8,local_1d9);
  local_770 = CONCAT71(uStack_1e0,uStack_1e1);
  uStack_758 = CONCAT71(uStack_1c8,local_1c9);
  local_760 = CONCAT71(uStack_1d0,uStack_1d1);
  uStack_7c8 = CONCAT71(uStack_238,local_239);
  local_7d0 = CONCAT71(uStack_240,uStack_241);
  uStack_7b8 = CONCAT71(uStack_228,local_229);
  local_7c0 = CONCAT71(uStack_230,uStack_231);
  uStack_7a8 = CONCAT71(uStack_218,local_219);
  local_7b0 = CONCAT71(uStack_220,uStack_221);
  uStack_798 = CONCAT71(uStack_208,local_209);
  local_7a0 = CONCAT71(uStack_210,uStack_211);
  uStack_7f8 = CONCAT71(uStack_268,local_269);
  lStack_800 = (ulong)uStack_270 << 8;
  uStack_808 = 0x4020000000000000;
  uStack_7e8 = CONCAT71(uStack_258,local_259);
  local_7f0 = CONCAT71(uStack_260,uStack_261);
  uStack_7d8 = CONCAT71(uStack_248,local_249);
  local_7e0 = CONCAT71(uStack_250,uStack_251);
  uStack_287 = CONCAT17(uStack_1a1,uStack_1a8);
  local_28f = CONCAT17(local_1a9,uStack_1b0);
  local_358 = 0x4020000000000000;
  local_350 = 0;
  local_810 = HVar11.unknown;
  local_450 = HVar11.unknown;
  local_360 = HVar11.unknown;
  FUN_100011090(&local_450,&local_170,&DAT_100fb93a0,&DAT_100c39128);
  FUN_100005808(&local_360,&DAT_100fb93a0,&DAT_100c39128);
  uStack_198 = CONCAT71(local_737,uStack_738);
  uStack_1a8 = (undefined7)uStack_748;
  uStack_1a1 = (undefined1)((ulong)uStack_748 >> 0x38);
  uStack_1b0 = (undefined7)local_750;
  local_1a9 = (undefined1)((ulong)local_750 >> 0x38);
  uStack_1a0 = (undefined7)uStack_740;
  uStack_199 = (undefined1)((ulong)uStack_740 >> 0x38);
  uStack_98 = CONCAT71(local_737,uStack_738);
  uStack_188 = CONCAT71(uStack_727,uStack_728);
  local_190 = CONCAT71(uStack_72f,uStack_730);
  uStack_1e8 = (undefined7)uStack_788;
  uStack_1e1 = (undefined1)((ulong)uStack_788 >> 0x38);
  uStack_1f0 = (undefined7)local_790;
  local_1e9 = (undefined1)((ulong)local_790 >> 0x38);
  uStack_1d8 = (undefined7)uStack_778;
  uStack_1d1 = (undefined1)((ulong)uStack_778 >> 0x38);
  uStack_1e0 = (undefined7)local_780;
  local_1d9 = (undefined1)((ulong)local_780 >> 0x38);
  uStack_1c8 = (undefined7)uStack_768;
  uStack_1c1 = (undefined1)((ulong)uStack_768 >> 0x38);
  uStack_1d0 = (undefined7)local_770;
  local_1c9 = (undefined1)((ulong)local_770 >> 0x38);
  uStack_1b8 = (undefined7)uStack_758;
  uStack_1b1 = (undefined1)((ulong)uStack_758 >> 0x38);
  uStack_1c0 = (undefined7)local_760;
  local_1b9 = (undefined1)((ulong)local_760 >> 0x38);
  uStack_228 = (undefined7)uStack_7c8;
  uStack_221 = (undefined1)((ulong)uStack_7c8 >> 0x38);
  uStack_230 = (undefined7)local_7d0;
  local_229 = (undefined1)((ulong)local_7d0 >> 0x38);
  uStack_218 = (undefined7)uStack_7b8;
  uStack_211 = (undefined1)((ulong)uStack_7b8 >> 0x38);
  uStack_220 = (undefined7)local_7c0;
  local_219 = (undefined1)((ulong)local_7c0 >> 0x38);
  uStack_208 = (undefined7)uStack_7a8;
  uStack_201 = (undefined1)((ulong)uStack_7a8 >> 0x38);
  uStack_210 = (undefined7)local_7b0;
  local_209 = (undefined1)((ulong)local_7b0 >> 0x38);
  uStack_1f8 = (undefined7)uStack_798;
  uStack_1f1 = (undefined1)((ulong)uStack_798 >> 0x38);
  uStack_200 = (undefined7)local_7a0;
  local_1f9 = (undefined1)((ulong)local_7a0 >> 0x38);
  uStack_268 = (undefined7)uStack_808;
  uStack_261 = (undefined1)((ulong)uStack_808 >> 0x38);
  uStack_270 = (uint7)local_810;
  local_269 = (undefined1)((ulong)local_810 >> 0x38);
  uStack_258 = (undefined7)uStack_7f8;
  uStack_251 = (undefined1)((ulong)uStack_7f8 >> 0x38);
  uStack_260 = (undefined7)lStack_800;
  local_259 = (undefined1)((ulong)lStack_800 >> 0x38);
  uStack_248 = (undefined7)uStack_7e8;
  uStack_241 = (undefined1)((ulong)uStack_7e8 >> 0x38);
  uStack_250 = (undefined7)local_7f0;
  local_249 = (undefined1)((ulong)local_7f0 >> 0x38);
  uStack_238 = (undefined7)uStack_7d8;
  uStack_231 = (undefined1)((ulong)uStack_7d8 >> 0x38);
  uStack_240 = (undefined7)local_7e0;
  local_239 = (undefined1)((ulong)local_7e0 >> 0x38);
  uStack_a8 = uStack_748;
  local_b0 = local_750;
  local_a0 = uStack_740;
  uStack_88 = CONCAT71(uStack_727,uStack_728);
  local_90 = CONCAT71(uStack_72f,uStack_730);
  uStack_e8 = uStack_788;
  local_f0 = local_790;
  uStack_d8 = uStack_778;
  local_e0 = local_780;
  uStack_c8 = uStack_768;
  local_d0 = local_770;
  uStack_b8 = uStack_758;
  local_c0 = local_760;
  uStack_128 = uStack_7c8;
  local_130 = local_7d0;
  uStack_118 = uStack_7b8;
  local_120 = local_7c0;
  uStack_108 = uStack_7a8;
  local_110 = local_7b0;
  uStack_f8 = uStack_798;
  local_100 = local_7a0;
  uStack_168 = uStack_808;
  local_170 = local_810;
  uStack_158 = uStack_7f8;
  local_160 = lStack_800;
  uStack_148 = uStack_7e8;
  local_150 = local_7f0;
  uStack_138 = uStack_7d8;
  local_140 = local_7e0;
  local_180 = CVar12.unknown;
  local_80 = CVar12.unknown;
  FUN_100011090(&uStack_270,&local_710,&DAT_100fb93a8,&DAT_100c39130);
  ppuVar16 = &local_170;
  FUN_100005808(ppuVar16,&DAT_100fb93a8,&DAT_100c39130);
  uVar4 = local_930;
  FUN_100259944();
  lVar7 = local_950[1];
  if (ppuVar16[2] == (undefined *)0x0) {
    _swift_bridgeObjectRelease();
    ppuVar16 = (undefined **)0x0;
    lVar15 = 0;
  }
  else {
    lVar15 = local_950[1];
    FUN_1000c495c((long)ppuVar16 +
                  ((ulong)*(byte *)(local_950[0] + 0x50) + 0x20 &
                  ((ulong)*(byte *)(local_950[0] + 0x50) ^ 0xffffffffffffffff)),local_950[1],
                  FUN_1002abb94);
    _swift_bridgeObjectRelease();
    FUN_1002aa6e0();
    FUN_10005241c(lVar7,FUN_1002abb94);
  }
  *puVar17 = ppuVar16;
  puVar17[1] = lVar15;
  *(undefined1 *)(puVar17 + 2) = 0;
  iVar2 = *(int *)(local_950[2] + 0x18);
  puVar6 = &DAT_100c39138;
  _swift_getKeyPath();
  *(undefined **)((long)puVar17 + (long)iVar2) = puVar6;
  puVar6 = &DAT_100fb93b0;
  FUN_1000037f0(&DAT_100fb93b0,&DAT_100c39168);
  VVar13.unknown = (undefined *)((long)puVar17 + (long)iVar2);
  _swift_storeEnumTagMultiPayload(VVar13.unknown,puVar6,0);
  VVar13 = SwiftUI::VerticalAlignment::get_center(VVar13);
  puVar14 = local_918;
  *local_918 = VVar13.unknown;
  puVar14[1] = 0;
  *(undefined1 *)(puVar14 + 2) = 1;
  puVar6 = &DAT_100fb9098;
  FUN_1000037f0(&DAT_100fb9098,&DAT_100c38d80);
  FUN_100269ea0((long)puVar14 + (long)*(int *)(puVar6 + 0x2c),uVar4);
  iVar2 = *(int *)(local_938 + 0x24);
  puVar6 = &DAT_100fb90a0;
  FUN_1000037f0(&DAT_100fb90a0,&DAT_100c396d0);
  iVar3 = *(int *)(puVar6 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  CVar5 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar5.value) + -8) + 0x68))
            ((long)puVar14 + (long)iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,CVar5.value));
  puVar6 = &DAT_100c39170;
  _swift_getKeyPath();
  lVar7 = local_920;
  *(undefined **)((long)puVar14 + (long)iVar2) = puVar6;
  uStack_748 = CONCAT17(uStack_1a1,uStack_1a8);
  local_750 = CONCAT17(local_1a9,uStack_1b0);
  uStack_740 = CONCAT17(uStack_199,uStack_1a0);
  uStack_738 = (undefined1)uStack_198;
  local_737 = (undefined7)((ulong)uStack_198 >> 8);
  uStack_728 = (undefined1)uStack_188;
  uStack_727 = (undefined7)((ulong)uStack_188 >> 8);
  uStack_730 = (undefined1)local_190;
  uStack_72f = (undefined7)((ulong)local_190 >> 8);
  local_720 = local_180;
  uStack_788 = CONCAT17(uStack_1e1,uStack_1e8);
  local_790 = CONCAT17(local_1e9,uStack_1f0);
  uStack_778 = CONCAT17(uStack_1d1,uStack_1d8);
  local_780 = CONCAT17(local_1d9,uStack_1e0);
  uStack_768 = CONCAT17(uStack_1c1,uStack_1c8);
  local_770 = CONCAT17(local_1c9,uStack_1d0);
  uStack_758 = CONCAT17(uStack_1b1,uStack_1b8);
  local_760 = CONCAT17(local_1b9,uStack_1c0);
  uStack_7c8 = CONCAT17(uStack_221,uStack_228);
  local_7d0 = CONCAT17(local_229,uStack_230);
  uStack_7b8 = CONCAT17(uStack_211,uStack_218);
  local_7c0 = CONCAT17(local_219,uStack_220);
  uStack_7a8 = CONCAT17(uStack_201,uStack_208);
  local_7b0 = CONCAT17(local_209,uStack_210);
  uStack_798 = CONCAT17(uStack_1f1,uStack_1f8);
  local_7a0 = CONCAT17(local_1f9,uStack_200);
  uStack_808 = CONCAT17(uStack_261,uStack_268);
  local_810 = (undefined *)CONCAT17(local_269,uStack_270);
  uStack_7f8 = CONCAT17(uStack_251,uStack_258);
  lStack_800 = CONCAT17(local_259,uStack_260);
  uStack_7e8 = CONCAT17(uStack_241,uStack_248);
  local_7f0 = CONCAT17(local_249,uStack_250);
  uStack_7d8 = CONCAT17(uStack_231,uStack_238);
  local_7e0 = CONCAT17(local_239,uStack_240);
  FUN_1000c495c(puVar17,local_920,FUN_10026a71c);
  lVar15 = local_910;
  FUN_10026708c(puVar14,local_910);
  uStack_638 = CONCAT71(local_737,uStack_738);
  uStack_648 = uStack_748;
  local_650 = local_750;
  uStack_640 = uStack_740;
  uStack_628 = CONCAT71(uStack_727,uStack_728);
  local_630 = CONCAT71(uStack_72f,uStack_730);
  uStack_688 = uStack_788;
  local_690 = local_790;
  uStack_678 = uStack_778;
  uStack_680 = local_780;
  uStack_668 = uStack_768;
  local_670 = local_770;
  uStack_658 = uStack_758;
  uStack_660 = local_760;
  uStack_6c8 = uStack_7c8;
  local_6d0 = local_7d0;
  uStack_6b8 = uStack_7b8;
  uStack_6c0 = local_7c0;
  uStack_6a8 = uStack_7a8;
  local_6b0 = local_7b0;
  uStack_698 = uStack_798;
  uStack_6a0 = local_7a0;
  uStack_708 = uStack_808;
  local_710 = local_810;
  uStack_6f8 = uStack_7f8;
  uStack_700 = lStack_800;
  uStack_6e8 = uStack_7e8;
  local_6f0 = local_7f0;
  uStack_6d8 = uStack_7d8;
  uStack_6e0 = local_7e0;
  param_1[0x19] = uStack_748;
  param_1[0x18] = local_750;
  param_1[0x1b] = CONCAT71(local_737,uStack_738);
  param_1[0x1a] = uStack_740;
  param_1[0x1d] = CONCAT71(uStack_727,uStack_728);
  param_1[0x1c] = CONCAT71(uStack_72f,uStack_730);
  param_1[0x11] = uStack_788;
  param_1[0x10] = local_790;
  param_1[0x13] = uStack_778;
  param_1[0x12] = local_780;
  param_1[0x15] = uStack_768;
  param_1[0x14] = local_770;
  param_1[0x17] = uStack_758;
  param_1[0x16] = local_760;
  param_1[9] = uStack_7c8;
  param_1[8] = local_7d0;
  param_1[0xb] = uStack_7b8;
  param_1[10] = local_7c0;
  param_1[0xd] = uStack_7a8;
  param_1[0xc] = local_7b0;
  param_1[0xf] = uStack_798;
  param_1[0xe] = local_7a0;
  param_1[1] = uStack_808;
  *param_1 = local_810;
  param_1[3] = uStack_7f8;
  param_1[2] = lStack_800;
  local_620 = local_720;
  param_1[0x1e] = local_720;
  param_1[5] = uStack_7e8;
  param_1[4] = local_7f0;
  param_1[7] = uStack_7d8;
  param_1[6] = local_7e0;
  puVar6 = &DAT_100fb93b8;
  FUN_1000037f0(&DAT_100fb93b8,&DAT_100c391a0);
  FUN_1000c495c(lVar7,(long)param_1 + (long)*(int *)(puVar6 + 0x30),FUN_10026a71c);
  FUN_10026708c(lVar15,(long)param_1 + (long)*(int *)(puVar6 + 0x40));
  FUN_100011090(&local_710,auStack_908,&DAT_100fb93a8,&DAT_100c39130);
  FUN_1002670dc(puVar14);
  FUN_10005241c(puVar17,FUN_10026a71c);
  FUN_1002670dc(lVar15);
  FUN_10005241c(lVar7,FUN_10026a71c);
  FUN_100005808(&local_810,&DAT_100fb93a8,&DAT_100c39130);
  _swift_release(local_928);
  return;
}



/* Address: 0x100269814 | FUN_100269814 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100269ae0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100269814(undefined8 *param_1)

{
  ResizingMode RVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  Image IVar8;
  Image IVar9;
  _FrameLayout _Var10;
  Set _all;
  char *pcVar11;
  Text TVar12;
  Font FVar13;
  Font FVar14;
  Text TVar15;
  Text TVar16;
  undefined *puVar17;
  char *pcVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  Alignment capInsets;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String SVar24;
  undefined *local_5c0;
  char *local_5b8;
  undefined8 *local_5b0;
  MainActor *local_5a8;
  LocalizedStringResource local_5a0;
  undefined1 auStack_598 [104];
  char *local_530;
  void *pvStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 local_4d0;
  undefined7 uStack_4cf;
  char *pcStack_4c8;
  void *pvStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined1 local_498;
  undefined7 uStack_497;
  char *local_490;
  void *pvStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined1 local_460;
  char *local_450;
  void *pvStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined1 local_420;
  char *local_410;
  void *pvStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 local_3b0;
  char *local_3a0;
  void *pvStack_398;
  undefined1 local_390;
  undefined7 uStack_38f;
  undefined8 uStack_388;
  undefined1 local_380;
  undefined7 uStack_37f;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_340;
  undefined *local_338;
  void *local_330;
  undefined1 local_328;
  undefined8 local_320;
  undefined1 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8;
  char *local_2d0;
  void *pvStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0;
  char *local_290;
  void *pvStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 local_260;
  char *local_250;
  void *pvStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  char *local_210;
  void *pvStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  String local_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_170;
  char *local_160;
  void *pvStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130;
  char *local_120;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  char *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  void *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *puVar3;
  
  local_5b0 = param_1;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  puVar17 = (undefined *)((long)&local_5c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_5a0.unknown = puVar17;
  RVar1 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71((int7)((ulong)LVar2.unknown >> 8),RVar1.value);
  lVar19 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  capInsets.unknown = puVar17 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar17 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar17,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_5a8 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,0xd,UVar6.unknown,puVar5);
  }
  if (DAT_100fb7de8 != -1) {
    _swift_once(&DAT_100fb7de8,FUN_100241de8);
  }
  SVar24.bridgeObject = (void *)0xee00656d69746566;
  SVar24.str = (char *)0x696c2d6574736170;
  IVar8 = SwiftUI::Image::_init(SVar24);
  IVar9.unknown = puVar3;
  (**(code **)(lVar19 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  IVar9 = SwiftUI::Image::resizable(capInsets.unknown,(ResizingMode)(__int8)IVar8.unknown,IVar9);
  _swift_release(IVar8.unknown);
  (**(code **)(lVar19 + 8))(capInsets.unknown,puVar3);
  SwiftUI::Alignment::get_center(capInsets);
  _Var10 = SwiftUI::_FrameLayout::_init((Alignment)0x4058000000000000);
  _all = SwiftUI::Edge::Set::get_vertical(_Var10.unknown);
  uVar20 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  pvStack_398 = local_a0;
  local_390 = local_98;
  uStack_388 = local_90;
  local_380 = local_88;
  uStack_378 = local_80;
  local_370 = uStack_78;
  uStack_368 = SUB81(_all.unknown,0);
  local_340 = 0;
  local_330 = local_a0;
  local_328 = local_98;
  local_320 = local_90;
  local_318 = local_88;
  local_310 = local_80;
  local_308 = uStack_78;
  local_2d8 = 0;
  puVar17 = &DAT_100c391c8;
  local_3a0 = (char *)IVar9;
  local_360 = uVar20;
  uStack_358 = uVar21;
  local_350 = uVar22;
  uStack_348 = uVar23;
  local_338 = IVar9.unknown;
  local_300 = uStack_368;
  local_2f8 = uVar20;
  local_2f0 = uVar21;
  local_2e8 = uVar22;
  local_2e0 = uVar23;
  FUN_100011090(&local_3a0,&local_1d0,&DAT_100fb9410);
  FUN_100005808(&local_338,&DAT_100fb9410,&DAT_100c391c8);
  LVar2.unknown = local_5a0.unknown;
  FUN_1001cdd54(local_5a0.unknown);
  SVar24 = (extension_Foundation)::Swift::String::init(LVar2);
  local_1d0 = SVar24;
  FUN_1002538a0();
  pcVar11 = SVar24.str;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  local_5b8 = pcVar11;
  TVar12 = SwiftUI::Text::_init(pcVar11,PTR___type_metadata_for_Swift_String_100eac208,pcVar11);
  local_5c0 = puVar17;
  FVar13 = SwiftUI::Font::get_title(TVar12.unknown);
  FVar14 = SwiftUI::Font::bold(FVar13);
  _swift_release(FVar13.unknown);
  TVar16 = TVar12;
  puVar17 = puVar3;
  pcVar18 = pcVar11;
  TVar15 = SwiftUI::Text::_font(FVar14.unknown);
  _swift_release(FVar14.unknown);
  FUN_100016d74(TVar12.unknown,puVar3,pcVar11);
  _swift_bridgeObjectRelease(local_5c0);
  FUN_100205044(&local_1d0,1,TVar15.unknown,TVar16.unknown,puVar17,pcVar18);
  FUN_100016d74(TVar15.unknown,TVar16.unknown,puVar17);
  _swift_bridgeObjectRelease(pcVar18);
  pvStack_2c8 = local_1d0.bridgeObject;
  local_2d0 = local_1d0.str;
  uStack_2b8 = uStack_1b8;
  uStack_2c0 = uStack_1c0;
  uStack_2a8 = uStack_1a8;
  local_2b0 = local_1b0;
  local_2a0 = (undefined1)local_1a0;
  pvStack_288 = local_1d0.bridgeObject;
  local_290 = local_1d0.str;
  uStack_278 = uStack_1b8;
  uStack_280 = uStack_1c0;
  uStack_268 = uStack_1a8;
  local_270 = local_1b0;
  local_260 = (undefined1)local_1a0;
  puVar17 = &DAT_100c391d0;
  FUN_100011090(&local_2d0,&local_410,&DAT_100fb9418,&DAT_100c391d0);
  FUN_100005808(&local_290,&DAT_100fb9418,&DAT_100c391d0);
  LVar2.unknown = local_5a0.unknown;
  FUN_1001cdbd4(local_5a0.unknown);
  local_1d0 = (extension_Foundation)::Swift::String::init(LVar2);
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar18 = local_5b8;
  TVar16 = SwiftUI::Text::_init
                     (TVar15.unknown,PTR___type_metadata_for_Swift_String_100eac208,local_5b8);
  FUN_100205044(&local_1d0,1,TVar16.unknown,puVar3,pcVar18,puVar17);
  FUN_100016d74(TVar16.unknown,puVar3,pcVar18);
  _swift_bridgeObjectRelease(puVar17);
  pvStack_248 = local_1d0.bridgeObject;
  local_250 = local_1d0.str;
  uStack_238 = uStack_1b8;
  local_240 = uStack_1c0;
  uStack_228 = uStack_1a8;
  local_230 = local_1b0;
  local_220 = (undefined1)local_1a0;
  pvStack_208 = local_1d0.bridgeObject;
  local_210 = local_1d0.str;
  uStack_1f8 = uStack_1b8;
  uStack_200 = uStack_1c0;
  uStack_1e8 = uStack_1a8;
  local_1f0 = local_1b0;
  local_1e0 = (undefined1)local_1a0;
  FUN_100011090(&local_250,&local_410,&DAT_100fb9418,&DAT_100c391d0);
  FUN_100005808(&local_210,&DAT_100fb9418,&DAT_100c391d0);
  uStack_4f8 = CONCAT71(uStack_367,uStack_368);
  uStack_3c8 = uStack_358;
  local_3d0 = local_360;
  uStack_3b8 = uStack_348;
  uStack_3c0 = local_350;
  uStack_400 = CONCAT71(uStack_38f,local_390);
  uStack_520 = CONCAT71(uStack_38f,local_390);
  pvStack_408 = pvStack_398;
  local_410 = local_3a0;
  uStack_3f8 = uStack_388;
  local_3f0 = CONCAT71(uStack_37f,local_380);
  uStack_3d8 = CONCAT71(uStack_367,uStack_368);
  uStack_3e8 = uStack_378;
  uStack_3e0 = local_370;
  pvStack_448 = pvStack_2c8;
  local_450 = local_2d0;
  uStack_438 = uStack_2b8;
  uStack_440 = uStack_2c0;
  uStack_428 = uStack_2a8;
  local_430 = local_2b0;
  uStack_b8 = uStack_228;
  local_c0 = local_230;
  uStack_c8 = uStack_238;
  local_d0 = local_240;
  pvStack_d8 = pvStack_248;
  local_e0 = local_250;
  uStack_1c0 = CONCAT71(uStack_38f,local_390);
  local_510 = CONCAT71(uStack_37f,local_380);
  local_1d0.bridgeObject = pvStack_398;
  local_1d0.str = local_3a0;
  uStack_1b8 = uStack_388;
  uStack_188 = uStack_358;
  local_190 = local_360;
  uStack_178 = uStack_348;
  uStack_180 = local_350;
  local_1b0 = CONCAT71(uStack_37f,local_380);
  uStack_198 = CONCAT71(uStack_367,uStack_368);
  uStack_1a8 = uStack_378;
  local_1a0 = local_370;
  pvStack_528 = pvStack_398;
  local_530 = local_3a0;
  uStack_518 = uStack_388;
  uStack_4e8 = uStack_358;
  local_4f0 = local_360;
  uStack_4d8 = uStack_348;
  uStack_4e0 = local_350;
  uStack_508 = uStack_378;
  uStack_500 = local_370;
  uStack_148 = uStack_2b8;
  local_150 = uStack_2c0;
  uStack_138 = uStack_2a8;
  uStack_140 = local_2b0;
  pvStack_158 = pvStack_2c8;
  local_160 = local_2d0;
  uStack_4a0 = uStack_2a8;
  local_4a8 = local_2b0;
  local_3b0 = local_340;
  local_420 = local_2a0;
  local_b0 = local_220;
  local_170 = local_340;
  local_4d0 = local_340;
  local_130 = local_2a0;
  local_498 = local_2a0;
  uStack_4b0 = uStack_2b8;
  local_4b8 = uStack_2c0;
  pvStack_4c0 = pvStack_2c8;
  pcStack_4c8 = local_2d0;
  uStack_f8 = uStack_228;
  local_100 = local_230;
  local_f0 = local_220;
  uStack_108 = uStack_238;
  local_110 = local_240;
  pvStack_118 = pvStack_248;
  local_120 = local_250;
  local_460 = local_220;
  uStack_478 = uStack_238;
  local_480 = local_240;
  uStack_468 = uStack_228;
  local_470 = local_230;
  pvStack_488 = pvStack_248;
  local_490 = local_250;
  local_5b0[1] = pvStack_398;
  *local_5b0 = local_3a0;
  local_5b0[3] = uStack_388;
  local_5b0[2] = uStack_520;
  local_5b0[9] = uStack_358;
  local_5b0[8] = local_360;
  local_5b0[0xb] = uStack_348;
  local_5b0[10] = local_350;
  local_5b0[5] = uStack_378;
  local_5b0[4] = local_510;
  local_5b0[7] = uStack_4f8;
  local_5b0[6] = local_370;
  local_5b0[0x11] = local_2b0;
  local_5b0[0x10] = uStack_2b8;
  local_5b0[0x13] = CONCAT71(uStack_497,local_2a0);
  local_5b0[0x12] = uStack_2a8;
  local_5b0[0xd] = local_2d0;
  local_5b0[0xc] = CONCAT71(uStack_4cf,local_340);
  local_5b0[0xf] = uStack_2c0;
  local_5b0[0xe] = pvStack_2c8;
  *(undefined1 *)(local_5b0 + 0x1a) = local_220;
  local_5b0[0x17] = uStack_238;
  local_5b0[0x16] = local_240;
  local_5b0[0x19] = uStack_228;
  local_5b0[0x18] = local_230;
  local_5b0[0x15] = pvStack_248;
  local_5b0[0x14] = local_250;
  FUN_100011090(&local_1d0,auStack_598,&DAT_100fb9410,&DAT_100c391c8);
  FUN_100011090(&local_160,auStack_598,&DAT_100fb9418,&DAT_100c391d0);
  FUN_100011090(&local_120,auStack_598,&DAT_100fb9418,&DAT_100c391d0);
  FUN_100005808(&local_e0,&DAT_100fb9418,&DAT_100c391d0);
  FUN_100005808(&local_450,&DAT_100fb9418,&DAT_100c391d0);
  FUN_100005808(&local_410,&DAT_100fb9410,&DAT_100c391c8);
  _swift_release(local_5a8);
  return;
}



/* Address: 0x100269ea0 | FUN_100269ea0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010026a234 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100269ea0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  LocalizedStringResource LVar8;
  undefined *puVar9;
  undefined *puVar10;
  MainActor *pMVar11;
  undefined8 *puVar12;
  UnownedSerialExecutor UVar13;
  UnownedSerialExecutor UVar14;
  undefined8 uVar15;
  ObservedObject<undefined> OVar16;
  Text TVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *pcVar18;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar20;
  KeyboardShortcut KVar21;
  KeyboardShortcut KVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long local_140 [6];
  undefined *local_110;
  LocalizedStringResource local_108;
  MainActor *local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  String local_c8;
  String local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  long lStack_78;
  
  lVar6 = 0;
  local_d8 = param_1;
  FUN_1002abb94();
  local_140[0] = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_140[0] + 0x40));
  lVar6 = (long)local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_140[1] = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar6 - extraout_x12;
  puVar7 = &DAT_100fb90b0;
  local_140[2] = lVar6;
  FUN_1000037f0(&DAT_100fb90b0,&DAT_100c38dc8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar6 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar6 - extraout_x12_00;
  local_110 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_140[5] = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_140[5] + 0x40));
  KVar22.unknown = (undefined *)(lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  puVar7 = &DAT_100fb90b8;
  local_108.unknown = KVar22.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb90b8,&DAT_100c38dd0);
  local_140[3] = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(local_140[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  KVar21.unknown = KVar22.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0) + -extraout_x8_03;
  puVar9 = &DAT_100fb90c0;
  FUN_1000037f0(&DAT_100fb90c0,&DAT_100c38dd8);
  local_140[4] = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(local_140[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)KVar21.unknown - extraout_x8_04;
  puVar10 = &DAT_100fb90c8;
  FUN_1000037f0(&DAT_100fb90c8,&DAT_100c38de0);
  local_f8 = *(long *)(puVar10 + -8);
  local_e8 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f8 + 0x40));
  lVar19 = lVar20 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_d0 = lVar19 - extraout_x12_01;
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar11 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar12 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_100 = pMVar11;
  UVar13 = Swift::Actor::get_unownedExecutor();
  UVar14 = UVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar14.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,0x22,UVar13.unknown,
               puVar12);
  }
  LVar8.unknown = local_108.unknown;
  FUN_1001c0788(local_108.unknown);
  local_b0 = (extension_Foundation)::Swift::String::init(LVar8);
  lVar23 = param_2[1];
  local_80 = *param_2;
  uStack_98 = param_2[3];
  local_a0 = param_2[2];
  local_90 = *(undefined1 *)(param_2 + 4);
  puVar10 = &DAT_100ec4778;
  lStack_78 = lVar23;
  _swift_allocObject(&DAT_100ec4778,0x31,7);
  uVar15 = *param_2;
  uVar25 = param_2[3];
  uVar24 = param_2[2];
  *(undefined8 *)(puVar10 + 0x18) = param_2[1];
  *(undefined8 *)(puVar10 + 0x10) = uVar15;
  *(undefined8 *)(puVar10 + 0x28) = uVar25;
  *(undefined8 *)(puVar10 + 0x20) = uVar24;
  puVar10[0x30] = *(undefined1 *)(param_2 + 4);
  FUN_100011090(&local_80,&local_c8,&DAT_100fb93c0,&DAT_100c391a8);
  puVar12 = &local_a0;
  FUN_100011090(puVar12,&local_c8,&DAT_100fb93c8,&DAT_100c391b0);
  FUN_1002538a0();
  (extension_SwiftUI)::SwiftUI::Button::_init
            (KVar21.unknown,puVar12,FUN_10026d1d0,puVar10,
             PTR___type_metadata_for_Swift_String_100eac208,puVar12);
  puVar10 = puVar7;
  FUN_1001fa7a0(lVar20,2,1,1);
  (**(code **)(local_140[3] + 8))(KVar21.unknown,puVar7);
  SwiftUI::KeyboardShortcut::get_cancelAction(KVar21);
  local_c8.bridgeObject =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  local_c8.str = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  _swift_getOpaqueTypeConformance2(&local_c8,&DAT_100ca7bfc,1);
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar22);
  (**(code **)(local_140[5] + 8))(KVar22.unknown,local_110);
  (**(code **)(local_140[4] + 8))(lVar20,puVar9);
  _swift_retain();
  FUN_100259944();
  lVar19 = local_140[1];
  bVar2 = *(long *)(lVar23 + 0x10) == 0;
  if (bVar2) {
    FUN_100005808(&local_80,&DAT_100fb93c0,&DAT_100c391a8);
    _swift_bridgeObjectRelease(lVar23);
    puVar7 = &DAT_100fb90d0;
    FUN_1000037f0(&DAT_100fb90d0,&DAT_100c38de8);
    pcVar18 = *(code **)(*(long *)(puVar7 + -8) + 0x38);
  }
  else {
    FUN_1000c495c(lVar23 + ((ulong)*(byte *)(local_140[0] + 0x50) + 0x20 &
                           ((ulong)*(byte *)(local_140[0] + 0x50) ^ 0xffffffffffffffff)),
                  local_140[1],FUN_1002abb94);
    _swift_bridgeObjectRelease(lVar23);
    lVar20 = local_140[2];
    FUN_10026d1d8(lVar19,local_140[2]);
    FUN_1000c495c(lVar20,lVar6,FUN_1002abb94);
    puVar7 = &DAT_100fb90d0;
    FUN_1000037f0(&DAT_100fb90d0,&DAT_100c38de8);
    iVar3 = *(int *)(puVar7 + 0x24);
    uVar15 = 0;
    FUN_10025cdc8();
    puVar9 = &DAT_100fb7f50;
    FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
    OVar16 = SwiftUI::ObservedObject::init(puVar9,uVar15,puVar9);
    *(undefined8 *)(lVar6 + iVar3) = OVar16.unknown;
    ((undefined8 *)(lVar6 + iVar3))[1] = uVar15;
    iVar3 = *(int *)(puVar7 + 0x28);
    *(undefined8 *)(lVar6 + iVar3) = 0;
    ((undefined8 *)(lVar6 + iVar3))[1] = 0;
    puVar1 = (undefined8 *)(lVar6 + *(int *)(puVar7 + 0x2c));
    FUN_1001cccd4(LVar8.unknown);
    local_c8 = (extension_Foundation)::Swift::String::init(LVar8);
    puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar17 = SwiftUI::Text::_init();
    FUN_10005241c(lVar20,FUN_1002abb94);
    *puVar1 = TVar17.unknown;
    puVar1[1] = puVar9;
    *(char *)(puVar1 + 2) = (char)puVar12;
    puVar1[3] = puVar10;
    pcVar18 = *(code **)(*(long *)(puVar7 + -8) + 0x38);
  }
  (*pcVar18)(lVar6,bVar2,1,puVar7);
  lVar5 = local_d0;
  puVar9 = local_e8;
  lVar20 = local_f0;
  lVar19 = local_f8;
  pcVar18 = *(code **)(local_f8 + 0x10);
  (*pcVar18)(local_f0,local_d0,local_e8);
  lVar23 = local_e0;
  FUN_100011090(lVar6,local_e0,&DAT_100fb90b0,&DAT_100c38dc8);
  lVar4 = local_d8;
  (*pcVar18)(local_d8,lVar20,puVar9);
  puVar7 = &DAT_100fb90d8;
  FUN_1000037f0(&DAT_100fb90d8,&DAT_100c38df0);
  puVar12 = (undefined8 *)(lVar4 + *(int *)(puVar7 + 0x30));
  *puVar12 = 0;
  *(undefined1 *)(puVar12 + 1) = 1;
  FUN_100011090(lVar23,lVar4 + *(int *)(puVar7 + 0x40),&DAT_100fb90b0,&DAT_100c38dc8);
  FUN_100005808(lVar6,&DAT_100fb90b0,&DAT_100c38dc8);
  pcVar18 = *(code **)(lVar19 + 8);
  (*pcVar18)(lVar5,puVar9);
  FUN_100005808(lVar23,&DAT_100fb90b0,&DAT_100c38dc8);
  (*pcVar18)(lVar20,puVar9);
  _swift_release(local_100);
  return;
}



/* Address: 0x10026a594 | FUN_10026a594 */

void FUN_10026a594(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,0x23,UVar4.unknown,puVar3)
    ;
  }
  pcVar6 = *(code **)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  FUN_10026cd4c(pcVar6,uVar7,*(undefined1 *)(param_1 + 0x20));
  (*pcVar6)();
  _swift_release(pMVar2);
  _swift_release(uVar7);
  return;
}



/* Address: 0x10026a658 | FUN_10026a658 */

void FUN_10026a658(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Set SVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  SVar4.unknown = (undefined *)&local_70;
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  local_50 = *(undefined1 *)(unaff_x20 + 4);
  uStack_60 = uVar6;
  HVar2 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar2.unknown;
  param_1[1] = 0x4040000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100fb9388;
  FUN_1000037f0(&DAT_100fb9388,&DAT_100c39108);
  FUN_100269024((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SVar4 = SwiftUI::Edge::Set::get_all(SVar4);
  uVar5 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  puVar3 = &DAT_100fb9390;
  FUN_1000037f0(&DAT_100fb9390,&DAT_100c39110);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Address: 0x10026a71c | FUN_10026a71c */

void FUN_10026a71c(undefined8 param_1)

{
  if (DAT_100fb9480 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ca9dbc);
  return;
}



/* Address: 0x10026a754 | FUN_10026a754 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010026a944 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10026a754(void *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  RoundedCornerStyle RVar4;
  RoundedRectangle RVar5;
  undefined8 *puVar6;
  Color CVar7;
  Set SVar8;
  undefined *puVar9;
  Alignment AVar11;
  Alignment AVar12;
  undefined *puVar13;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *puVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  undefined *local_930 [5];
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined1 auStack_6e8 [544];
  undefined *local_4c8;
  undefined1 local_4c0;
  undefined1 auStack_4b8 [544];
  undefined *local_298;
  undefined1 local_290;
  undefined1 auStack_288 [552];
  long lVar10;
  
  RVar5 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(RVar5.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)local_930 + lVar1);
  puVar6 = unaff_x20;
  FUN_10026aa54(auStack_288);
  if (*(char *)(unaff_x20 + 2) == '\x01') {
    FUN_1002192bc();
  }
  else {
    FUN_1001fe1dc();
  }
  CVar7 = SwiftUI::Color::init((NSColor *)*puVar6);
  SVar8 = SwiftUI::Edge::Set::get_all(CVar7.unknown);
  _memcpy(auStack_4b8,auStack_288,0x21a);
  puVar9 = &DAT_100fb94e0;
  FUN_1000037f0(&DAT_100fb94e0,&DAT_100c39278);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar9 + 0x24));
  iVar3 = *(int *)(RVar5.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  local_930[2] = RVar5.unknown;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar10 = CONCAT71((int7)((ulong)puVar9 >> 8),RVar4.value);
  pcVar15 = *(code **)(*(long *)(lVar10 + -8) + 0x68);
  (*pcVar15)((long)puVar6 + (long)iVar3,uVar2,lVar10);
  auVar16 = NEON_fmov(0x4024000000000000,8);
  local_930[1] = auVar16._8_8_;
  local_930[0] = auVar16._0_8_;
  puVar6[1] = local_930[1];
  *puVar6 = local_930[0];
  _memcpy(auStack_6e8,auStack_288,0x21a);
  puVar9 = &DAT_100fb94e8;
  local_4c8 = CVar7.unknown;
  local_4c0 = (char)SVar8.unknown;
  FUN_1000037f0(&DAT_100fb94e8,&DAT_100c39280);
  *(undefined2 *)((long)puVar6 + (long)*(int *)(puVar9 + 0x24)) = 0x100;
  _memcpy(param_1,auStack_6e8,0x229);
  local_298 = CVar7.unknown;
  local_290 = (char)SVar8.unknown;
  FUN_100011090(auStack_6e8,local_930 + 3,&DAT_100fb94f0,&DAT_100c39288);
  FUN_100005808(auStack_4b8,&DAT_100fb94f0,&DAT_100c39288);
  puVar6 = (undefined8 *)((long)puVar14 + (long)*(int *)(local_930[2] + 0x14));
  (*pcVar15)(puVar6,uVar2,lVar10);
  *(undefined **)((long)local_930 + lVar1 + 8) = local_930[1];
  *puVar14 = local_930[0];
  FUN_1001fef10();
  CVar7 = SwiftUI::Color::init((NSColor *)*puVar6);
  SwiftUI::StrokeStyle::init
            (local_930 + 3,0x3fe0000000000000,0x4024000000000000,0,CVar7.unknown,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar9 = &DAT_100fb94f8;
  FUN_1000037f0(&DAT_100fb94f8,&DAT_100c39290);
  puVar13 = PTR_typeMetadataAccessor_100eaa9e0;
  lVar1 = (long)param_1 + (long)*(int *)(puVar9 + 0x24);
  FUN_1000c495c(puVar14,lVar1,PTR_typeMetadataAccessor_100eaa9e0);
  puVar9 = &DAT_100fb92b0;
  FUN_1000037f0(&DAT_100fb92b0,&DAT_100c3a630);
  puVar6 = (undefined8 *)(lVar1 + *(int *)(puVar9 + 0x24));
  puVar6[1] = local_930[4];
  *puVar6 = local_930[3];
  puVar6[3] = uStack_900;
  puVar6[2] = local_908;
  puVar6[4] = local_8f8;
  AVar12.unknown = &DAT_100fb92b8;
  puVar9 = &DAT_100c39040;
  FUN_1000037f0();
  *(undefined **)(lVar1 + *(int *)(AVar12.unknown + 0x34)) = CVar7.unknown;
  *(undefined2 *)(lVar1 + *(int *)(AVar12.unknown + 0x38)) = 0x100;
  AVar11 = SwiftUI::Alignment::get_center(AVar12);
  FUN_10005241c(puVar14,puVar13);
  AVar12.unknown = &DAT_100fb92c0;
  puVar13 = &DAT_100c3a640;
  FUN_1000037f0();
  iVar3 = *(int *)(AVar12.unknown + 0x24);
  *(undefined8 *)(lVar1 + iVar3) = AVar11.unknown;
  ((undefined8 *)(lVar1 + iVar3))[1] = puVar9;
  AVar12 = SwiftUI::Alignment::get_center(AVar12);
  puVar9 = &DAT_100fb9500;
  FUN_1000037f0(&DAT_100fb9500,&DAT_100c392a0);
  iVar3 = *(int *)(puVar9 + 0x24);
  *(undefined8 *)(lVar1 + iVar3) = AVar12.unknown;
  ((undefined8 *)(lVar1 + iVar3))[1] = puVar13;
  return;
}



/* Address: 0x10026aa54 | FUN_10026aa54 */

void FUN_10026aa54(void *param_1,long param_2)

{
  undefined *puVar1;
  Storage storage;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  HorizontalAlignment HVar6;
  VerticalAlignment VVar7;
  undefined *local_f10;
  undefined8 uStack_f08;
  undefined1 local_f00;
  undefined1 auStack_eff [527];
  undefined1 auStack_cf0 [544];
  undefined1 auStack_ad0 [520];
  undefined1 auStack_8c8 [520];
  undefined *local_6c0;
  undefined8 local_6b8;
  undefined1 local_6b0;
  undefined1 auStack_6af [527];
  undefined1 auStack_4a0 [544];
  undefined1 auStack_280 [544];
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/LifetimePurchaseView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,0x50,UVar4.unknown,puVar3)
    ;
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    HVar6 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)pcVar5);
    FUN_10026b96c(auStack_280,param_2,0x52,0);
    _memcpy(auStack_ad0,auStack_280,0x201);
    _memcpy(auStack_8c8,auStack_280,0x201);
    FUN_100011090(auStack_ad0,auStack_4a0,&DAT_100fb9508,&DAT_100c392a8);
    FUN_100005808(auStack_8c8,&DAT_100fb9508,&DAT_100c392a8);
    _memcpy((void *)((ulong)auStack_4a0 | 7),auStack_ad0,0x201);
    local_6b8 = 0;
    local_6b0 = 0;
    local_6c0 = HVar6.unknown;
    _memcpy(auStack_6af,auStack_4a0,0x208);
    uStack_f08 = 0;
    local_f00 = 0;
    local_f10 = HVar6.unknown;
    _memcpy(auStack_eff,auStack_4a0,0x208);
    FUN_100011090(&local_6c0,auStack_280,&DAT_100fb9518,&DAT_100c392b8);
    FUN_100005808(&local_f10,&DAT_100fb9518,&DAT_100c392b8);
    _memcpy(auStack_4a0,&local_6c0,0x219);
    FUN_10026e178(auStack_4a0);
    _memcpy(auStack_cf0,auStack_4a0,0x21a);
    FUN_1000037f0(&DAT_100fb9518,&DAT_100c392b8);
    FUN_1000037f0(&DAT_100fb9510,&DAT_100c392b0);
    FUN_100016eac(&DAT_100fb9520,&DAT_100fb9518,&DAT_100c392b8,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
    FUN_100016eac(&DAT_100fb9528,&DAT_100fb9510,&DAT_100c392b0,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
    storage.value = (__int8)auStack_cf0;
  }
  else {
    VVar7 = SwiftUI::VerticalAlignment::get_top((VerticalAlignment)pcVar5);
    FUN_10026b96c(auStack_280,param_2,0x58,1);
    _memcpy(auStack_ad0,auStack_280,0x201);
    _memcpy(auStack_8c8,auStack_280,0x201);
    FUN_100011090(auStack_ad0,auStack_4a0,&DAT_100fb9508,&DAT_100c392a8);
    FUN_100005808(auStack_8c8,&DAT_100fb9508,&DAT_100c392a8);
    _memcpy((void *)((ulong)auStack_4a0 | 7),auStack_ad0,0x201);
    local_6b8 = 0;
    local_6b0 = 0;
    local_6c0 = VVar7.unknown;
    _memcpy(auStack_6af,auStack_4a0,0x208);
    uStack_f08 = 0;
    local_f00 = 0;
    local_f10 = VVar7.unknown;
    _memcpy(auStack_eff,auStack_4a0,0x208);
    FUN_100011090(&local_6c0,auStack_280,&DAT_100fb9510,&DAT_100c392b0);
    FUN_100005808(&local_f10,&DAT_100fb9510,&DAT_100c392b0);
    _memcpy(auStack_4a0,&local_6c0,0x219);
    FUN_10026e16c(auStack_4a0);
    _memcpy(auStack_cf0,auStack_4a0,0x21a);
    FUN_1000037f0(&DAT_100fb9518,&DAT_100c392b8);
    FUN_1000037f0(&DAT_100fb9510,&DAT_100c392b0);
    FUN_100016eac(&DAT_100fb9520,&DAT_100fb9518,&DAT_100c392b8,
                  PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
    FUN_100016eac(&DAT_100fb9528,&DAT_100fb9510,&DAT_100c392b0,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
    storage.value = (__int8)auStack_cf0;
  }
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
  _memcpy(auStack_cf0,auStack_280,0x21a);
  _memcpy(param_1,auStack_280,0x21a);
  _memcpy(auStack_4a0,auStack_280,0x21a);
  FUN_100011090(auStack_cf0,&local_f10,&DAT_100fb9530,&DAT_100c392c0);
  FUN_100005808(auStack_4a0,&DAT_100fb9530,&DAT_100c392c0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10026aed0 | FUN_10026aed0 */

void FUN_10026aed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  UserInterfaceSizeClass UVar8;
  bool bVar9;
  undefined7 extraout_var;
  undefined *puVar10;
  HorizontalAlignment HVar11;
  HorizontalAlignment HVar12;
  Alignment AVar13;
  Set SVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  undefined *puVar16;
  long extraout_x8_01;
  long lVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uStack_280;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  undefined1 auStack_268 [8];
  undefined8 auStack_260 [2];
  long local_250;
  undefined *local_248;
  long local_240;
  long local_238;
  undefined *local_230;
  undefined1 auStack_210 [72];
  undefined *local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  
  UVar8 = SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor();
  local_238 = CONCAT71(extraout_var,UVar8.value);
  local_240 = *(long *)(local_238 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_240 + 0x40));
  lVar15 = (long)&local_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100fb9550;
  local_250 = lVar15;
  FUN_1000037f0(&DAT_100fb9550,&DAT_100c392e0);
  local_230 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined *)(lVar15 - extraout_x8_00);
  HVar11.unknown = &DAT_100fb9408;
  puVar10 = &DAT_100c391c0;
  local_248 = puVar16;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(HVar11.unknown + -8) + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar18 - extraout_x12_00;
  HVar12 = SwiftUI::HorizontalAlignment::get_leading(HVar11);
  HVar11 = HVar12;
  FUN_10026c038(&local_c8);
  uVar7 = uStack_a0;
  uVar6 = local_a8;
  puVar5 = local_b0;
  uVar4 = uStack_c0;
  puVar16 = local_c8;
  uVar21 = CONCAT71(uStack_b7,local_b8);
  AVar13 = SwiftUI::Alignment::get_leading(HVar11.unknown);
  uStack_c0 = 0x4028000000000000;
  local_b8 = 0;
  local_b0 = local_c8;
  local_a8 = uVar4;
  uStack_98 = puVar5;
  local_90 = uVar6;
  local_88 = uStack_a0;
  local_c8 = HVar12.unknown;
  uStack_a0 = uVar21;
  *(undefined **)(lVar20 + -0x10) = AVar13.unknown;
  *(undefined **)(lVar20 + -8) = puVar10;
  *(undefined1 *)(lVar20 + -0x18) = 1;
  *(undefined8 *)(lVar20 + -0x20) = 0;
  *(undefined1 *)(lVar20 + -0x28) = 1;
  *(undefined8 *)(lVar20 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  lVar3 = local_238;
  lVar15 = local_240;
  SVar14.unknown = local_248;
  uStack_158 = uStack_a0;
  local_160 = local_a8;
  uStack_148 = local_90;
  uStack_150 = uStack_98;
  local_140 = local_88;
  uStack_170 = CONCAT71(uStack_b7,local_b8);
  uStack_178 = uStack_c0;
  local_180 = local_c8;
  puStack_168 = local_b0;
  uStack_1c0 = 0x4028000000000000;
  local_1b8 = 0;
  local_1b0 = puVar16;
  uStack_1a8 = uVar4;
  uStack_198 = puVar5;
  local_190 = uVar6;
  uStack_188 = uVar7;
  puVar16 = local_c8;
  local_1c8 = HVar12.unknown;
  FUN_100011090(&local_c8,auStack_210,&DAT_100fb95a0,&DAT_100c392f0);
  FUN_100005808(&local_1c8,&DAT_100fb95a0,&DAT_100c392f0);
  FUN_10026a71c();
  FUN_10026cf50(lVar20);
  (**(code **)(lVar15 + 0x68))
            (lVar18,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_UserInterfaceSizeClass_compact_SwiftUI_UserInterfaceSizeClass_Type___>_SwiftUI_UserInterfaceSizeClass_100eaaf10
             ,lVar3);
  (**(code **)(lVar15 + 0x38))(lVar18,0,1,lVar3);
  iVar1 = *(int *)(local_230 + 0x30);
  FUN_100011090(lVar20,SVar14.unknown,&DAT_100fb9408,&DAT_100c391c0);
  FUN_100011090(lVar18,SVar14.unknown + iVar1,&DAT_100fb9408,&DAT_100c391c0);
  pcVar19 = *(code **)(lVar15 + 0x30);
  puVar10 = SVar14.unknown;
  (*pcVar19)(SVar14.unknown,1,lVar3);
  if ((int)puVar10 == 1) {
    FUN_100005808(lVar18,&DAT_100fb9408,&DAT_100c391c0);
    FUN_100005808(lVar20,&DAT_100fb9408,&DAT_100c391c0);
    puVar10 = SVar14.unknown + iVar1;
    (*pcVar19)(puVar10,1,lVar3);
    if ((int)puVar10 == 1) {
      FUN_100005808(SVar14.unknown,&DAT_100fb9408,&DAT_100c391c0);
      uVar21 = 0x4030000000000000;
      goto LAB_10026b350;
    }
  }
  else {
    FUN_100011090(SVar14.unknown,lVar17,&DAT_100fb9408,&DAT_100c391c0);
    puVar10 = SVar14.unknown + iVar1;
    (*pcVar19)(puVar10,1,lVar3);
    lVar2 = local_250;
    if ((int)puVar10 != 1) {
      (**(code **)(lVar15 + 0x20))(local_250,SVar14.unknown + iVar1,lVar3);
      puVar10 = &DAT_100fb9558;
      FUN_100003a00(&DAT_100fb9558,PTR_typeMetadataAccessor_100eaaf18,
                    PTR_SwiftUI__SwiftUI__UserInterfaceSizeClass_>Swift__Equatable_100eaaf28);
      bVar9 = Swift::Equatable::___infix(lVar17,lVar2,lVar3,puVar10);
      pcVar19 = *(code **)(lVar15 + 8);
      (*pcVar19)(lVar2,lVar3);
      FUN_100005808(lVar18,&DAT_100fb9408,&DAT_100c391c0);
      FUN_100005808(lVar20,&DAT_100fb9408,&DAT_100c391c0);
      (*pcVar19)(lVar17,lVar3);
      FUN_100005808(SVar14.unknown,&DAT_100fb9408,&DAT_100c391c0);
      puVar16 = (undefined *)0x4030000000000000;
      uVar21 = 0x4030000000000000;
      if (!bVar9) {
        uVar21 = 0x4034000000000000;
      }
      goto LAB_10026b350;
    }
    FUN_100005808(lVar18,&DAT_100fb9408,&DAT_100c391c0);
    FUN_100005808(lVar20,&DAT_100fb9408,&DAT_100c391c0);
    (**(code **)(lVar15 + 8))(lVar17,lVar3);
  }
  FUN_100005808(SVar14.unknown,&DAT_100fb9550,&DAT_100c392e0);
  uVar21 = 0x4034000000000000;
LAB_10026b350:
  SVar14 = SwiftUI::Edge::Set::get_all(SVar14);
  SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
  *(char *)(param_1 + 0x17) = (char)SVar14.unknown;
  param_1[0x18] = uVar21;
  param_1[0x19] = puVar16;
  param_1[0x1a] = param_4;
  param_1[0x1b] = param_5;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x11] = uStack_f8;
  param_1[0x10] = local_100;
  param_1[0x13] = uStack_e8;
  param_1[0x12] = uStack_f0;
  param_1[0x15] = uStack_d8;
  param_1[0x14] = local_e0;
  param_1[0x16] = local_d0;
  param_1[9] = uStack_138;
  param_1[8] = local_140;
  param_1[0xb] = uStack_128;
  param_1[10] = uStack_130;
  param_1[0xd] = uStack_118;
  param_1[0xc] = local_120;
  param_1[0xf] = uStack_108;
  param_1[0xe] = uStack_110;
  param_1[1] = uStack_178;
  *param_1 = local_180;
  param_1[3] = puStack_168;
  param_1[2] = uStack_170;
  param_1[5] = uStack_158;
  param_1[4] = local_160;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  return;
}



/* Address: 0x10026b3cc | FUN_10026b3cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010026b444 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10026b3cc(char *param_1,char param_2)

{
  undefined *puVar1;
  StrokeStyle SVar2;
  Color CVar3;
  CGFloat _all;
  EdgeInsets EVar4;
  Alignment width;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_d3;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  puVar1 = &DAT_100fb9598;
  FUN_1000037f0(&DAT_100fb9598,&DAT_100c392e8);
  _swift_initStaticObject();
  uVar6 = 0x4024000000000000;
  uVar7 = 0;
  SVar2 = SwiftUI::StrokeStyle::init(&local_f8,0x3fe0000000000000,puVar1,0,puVar1);
  FUN_1001fef10();
  CVar3 = SwiftUI::Color::init(*(NSColor **)SVar2.unknown);
  if (param_2 == '\x01') {
    width.unknown = (undefined *)0x3ff0000000000000;
    _all.unknown = (undefined *)SwiftUI::Edge::Set::get_vertical(CVar3.unknown);
  }
  else {
    _all.unknown = (undefined *)SwiftUI::Edge::Set::get_horizontal(CVar3.unknown);
    width.unknown = (undefined *)0x0;
  }
  uVar5 = 0x4020000000000000;
  EVar4 = SwiftUI::EdgeInsets::init(_all);
  SwiftUI::Alignment::get_center((Alignment)EVar4.unknown);
  SwiftUI::_FrameLayout::_init(width);
  *(undefined8 *)(param_1 + 0x70) = uStack_c8;
  *(undefined8 *)(param_1 + 0x68) = local_d0;
  *(undefined8 *)(param_1 + 0x80) = uStack_b8;
  *(undefined8 *)(param_1 + 0x78) = uStack_c0;
  *(undefined8 *)(param_1 + 0x90) = uStack_a8;
  *(undefined8 *)(param_1 + 0x88) = local_b0;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = local_f8;
  *(undefined8 *)(param_1 + 0x10) = uStack_f0;
  *(undefined8 *)(param_1 + 0x18) = local_e8;
  *(undefined8 *)(param_1 + 0x20) = local_e0;
  *(undefined8 *)(param_1 + 0x28) = local_d8;
  *(undefined **)(param_1 + 0x30) = CVar3.unknown;
  param_1[0x38] = (char)_all.unknown;
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x58) = in_d3;
  param_1[0x60] = '\0';
  return;
}



/* Address: 0x10026b550 | FUN_10026b550 */

void FUN_10026b550(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  UserInterfaceSizeClass UVar3;
  bool bVar4;
  undefined7 extraout_var;
  undefined *puVar6;
  HorizontalAlignment HVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  Set SVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  long local_110;
  undefined *local_108;
  undefined1 local_100 [48];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined7 uStack_c0;
  undefined1 local_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 local_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lVar5;
  
  UVar3 = SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,UVar3.value);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fb9550;
  local_110 = lVar10;
  FUN_1000037f0(&DAT_100fb9550,&DAT_100c392e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar8.unknown = (undefined *)(lVar10 - extraout_x8_00);
  HVar7.unknown = &DAT_100fb9408;
  FUN_1000037f0(&DAT_100fb9408,&DAT_100c391c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(HVar7.unknown + -8) + 0x40));
  lVar10 = (long)SVar8.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar12 - extraout_x12_00;
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    local_108 = (undefined *)SwiftUI::HorizontalAlignment::get_leading(HVar7);
  }
  else {
    local_108 = (undefined *)SwiftUI::HorizontalAlignment::get_center(HVar7);
  }
  FUN_10026c16c(local_100);
  uStack_b1 = (undefined1)local_100._8_8_;
  uStack_b0 = SUB87(local_100._8_8_,1);
  local_b9 = (undefined1)local_100._0_8_;
  uStack_b8 = SUB87(local_100._0_8_,1);
  uStack_a1 = (undefined1)local_100._24_8_;
  uStack_a0 = SUB87(local_100._24_8_,1);
  local_a9 = (undefined1)local_100._16_8_;
  uStack_a8 = SUB87(local_100._16_8_,1);
  uStack_91 = (undefined1)local_100._40_8_;
  uStack_90 = SUB87(local_100._40_8_,1);
  local_99 = (undefined1)local_100._32_8_;
  uStack_98 = SUB87(local_100._32_8_,1);
  uStack_81 = (undefined1)uStack_c8;
  uStack_80 = (undefined7)((ulong)uStack_c8 >> 8);
  local_89 = (undefined1)uStack_d0;
  uStack_88 = (undefined7)((ulong)uStack_d0 >> 8);
  FUN_10026a71c();
  FUN_10026cf50(lVar11);
  (**(code **)(lVar9 + 0x68))
            (lVar12,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_UserInterfaceSizeClass_compact_SwiftUI_UserInterfaceSizeClass_Type___>_SwiftUI_UserInterfaceSizeClass_100eaaf10
             ,lVar5);
  (**(code **)(lVar9 + 0x38))(lVar12,0,1,lVar5);
  iVar1 = *(int *)(puVar6 + 0x30);
  FUN_100011090(lVar11,SVar8.unknown,&DAT_100fb9408,&DAT_100c391c0);
  FUN_100011090(lVar12,SVar8.unknown + iVar1,&DAT_100fb9408,&DAT_100c391c0);
  pcVar13 = *(code **)(lVar9 + 0x30);
  puVar6 = SVar8.unknown;
  (*pcVar13)(SVar8.unknown,1,lVar5);
  if ((int)puVar6 == 1) {
    FUN_100005808(lVar12,&DAT_100fb9408,&DAT_100c391c0);
    FUN_100005808(lVar11,&DAT_100fb9408,&DAT_100c391c0);
    puVar6 = SVar8.unknown + iVar1;
    (*pcVar13)(puVar6,1,lVar5);
    if ((int)puVar6 == 1) {
      FUN_100005808(SVar8.unknown,&DAT_100fb9408,&DAT_100c391c0);
      uVar14 = 0x4030000000000000;
      goto LAB_10026b8f8;
    }
  }
  else {
    FUN_100011090(SVar8.unknown,lVar10,&DAT_100fb9408,&DAT_100c391c0);
    puVar6 = SVar8.unknown + iVar1;
    (*pcVar13)(puVar6,1,lVar5);
    lVar2 = local_110;
    if ((int)puVar6 != 1) {
      (**(code **)(lVar9 + 0x20))(local_110,SVar8.unknown + iVar1,lVar5);
      puVar6 = &DAT_100fb9558;
      FUN_100003a00(&DAT_100fb9558,PTR_typeMetadataAccessor_100eaaf18,
                    PTR_SwiftUI__SwiftUI__UserInterfaceSizeClass_>Swift__Equatable_100eaaf28);
      bVar4 = Swift::Equatable::___infix(lVar10,lVar2,lVar5,puVar6);
      pcVar13 = *(code **)(lVar9 + 8);
      (*pcVar13)(lVar2,lVar5);
      FUN_100005808(lVar12,&DAT_100fb9408,&DAT_100c391c0);
      FUN_100005808(lVar11,&DAT_100fb9408,&DAT_100c391c0);
      (*pcVar13)(lVar10,lVar5);
      FUN_100005808(SVar8.unknown,&DAT_100fb9408,&DAT_100c391c0);
      uStack_d0 = 0x4030000000000000;
      uVar14 = 0x4030000000000000;
      if (!bVar4) {
        uVar14 = 0x4034000000000000;
      }
      goto LAB_10026b8f8;
    }
    FUN_100005808(lVar12,&DAT_100fb9408,&DAT_100c391c0);
    FUN_100005808(lVar11,&DAT_100fb9408,&DAT_100c391c0);
    (**(code **)(lVar9 + 8))(lVar10,lVar5);
  }
  FUN_100005808(SVar8.unknown,&DAT_100fb9550,&DAT_100c392e0);
  uVar14 = 0x4034000000000000;
LAB_10026b8f8:
  SVar8 = SwiftUI::Edge::Set::get_all(SVar8);
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  *(char *)(param_1 + 0xb) = (char)SVar8.unknown;
  param_1[0xc] = uVar14;
  param_1[0xd] = uStack_d0;
  param_1[0xe] = param_4;
  param_1[0xf] = param_5;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = local_108;
  param_1[1] = 0x4010000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_a1,uStack_a8);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(local_a9,uStack_b0);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_91,uStack_98);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(local_99,uStack_a0);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_81,uStack_88);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(local_89,uStack_90);
  param_1[10] = CONCAT71(uStack_80,uStack_81);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_b1,uStack_b8);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(local_b9,uStack_c0);
  return;
}



/* Address: 0x10026b96c | FUN_10026b96c */

void FUN_10026b96c(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined1 auStack_bd8 [232];
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined1 local_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined1 local_8f0;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined1 local_760;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined1 local_670;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 local_580;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined1 local_3b0;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined1 local_320;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,param_3,UVar4.unknown,
               puVar3);
  }
  FUN_10026aed0(&local_310);
  uStack_698 = uStack_258;
  local_6a0 = local_260;
  uStack_688 = uStack_248;
  local_690 = local_250;
  uStack_678 = uStack_238;
  local_680 = local_240;
  local_670 = local_230;
  uStack_6d8 = uStack_298;
  local_6e0 = local_2a0;
  uStack_6c8 = uStack_288;
  local_6d0 = local_290;
  uStack_6b8 = uStack_278;
  local_6c0 = local_280;
  uStack_6a8 = uStack_268;
  local_6b0 = local_270;
  uStack_708 = uStack_2c8;
  local_710 = local_2d0;
  uStack_6f8 = uStack_2b8;
  local_700 = local_2c0;
  uStack_6e8 = uStack_2a8;
  local_6f0 = local_2b0;
  uStack_748 = uStack_308;
  local_750 = local_310;
  uStack_738 = uStack_2f8;
  uStack_740 = local_300;
  uStack_728 = uStack_2e8;
  local_730 = local_2f0;
  uStack_718 = uStack_2d8;
  local_720 = local_2e0;
  uStack_5a8 = uStack_258;
  local_5b0 = local_260;
  uStack_598 = uStack_248;
  local_5a0 = local_250;
  uStack_588 = uStack_238;
  local_590 = local_240;
  local_580 = local_230;
  uStack_5e8 = uStack_298;
  local_5f0 = local_2a0;
  uStack_5d8 = uStack_288;
  local_5e0 = local_290;
  uStack_5c8 = uStack_278;
  local_5d0 = local_280;
  uStack_5b8 = uStack_268;
  local_5c0 = local_270;
  uStack_628 = uStack_2d8;
  local_630 = local_2e0;
  uStack_618 = uStack_2c8;
  local_620 = local_2d0;
  uStack_608 = uStack_2b8;
  local_610 = local_2c0;
  uStack_5f8 = uStack_2a8;
  local_600 = local_2b0;
  uStack_658 = uStack_308;
  local_660 = local_310;
  uStack_648 = uStack_2f8;
  local_650 = local_300;
  uStack_638 = uStack_2e8;
  local_640 = local_2f0;
  FUN_100011090(&local_750,&local_840,&DAT_100fb9538,&DAT_100c392c8);
  FUN_100005808(&local_660,&DAT_100fb9538,&DAT_100c392c8);
  FUN_10026b3cc(&local_310,param_4);
  local_4e0 = local_280;
  uStack_508 = uStack_2a8;
  local_510 = local_2b0;
  uStack_4f8 = uStack_298;
  local_500 = local_2a0;
  uStack_4e8 = uStack_288;
  local_4f0 = local_290;
  uStack_548 = uStack_2e8;
  local_550 = local_2f0;
  uStack_538 = uStack_2d8;
  local_540 = local_2e0;
  uStack_528 = uStack_2c8;
  local_530 = local_2d0;
  uStack_518 = uStack_2b8;
  local_520 = local_2c0;
  uStack_568 = uStack_308;
  local_570 = local_310;
  uStack_558 = uStack_2f8;
  local_560 = local_300;
  uStack_468 = uStack_2a8;
  local_470 = local_2b0;
  uStack_458 = uStack_298;
  local_460 = local_2a0;
  uStack_448 = uStack_288;
  local_450 = local_290;
  local_440 = local_280;
  uStack_4a8 = uStack_2e8;
  local_4b0 = local_2f0;
  uStack_498 = uStack_2d8;
  local_4a0 = local_2e0;
  uStack_488 = uStack_2c8;
  local_490 = local_2d0;
  uStack_478 = uStack_2b8;
  local_480 = local_2c0;
  uStack_4c8 = uStack_308;
  local_4d0 = local_310;
  uStack_4b8 = uStack_2f8;
  local_4c0 = local_300;
  FUN_100011090(&local_570,&local_840,&DAT_100fb9540,&DAT_100c392d0);
  FUN_100005808(&local_4d0,&DAT_100fb9540,&DAT_100c392d0);
  FUN_10026b550(&local_310);
  uStack_3d8 = uStack_2b8;
  local_3e0 = local_2c0;
  uStack_3c8 = uStack_2a8;
  local_3d0 = local_2b0;
  uStack_3b8 = uStack_298;
  local_3c0 = local_2a0;
  local_3b0 = (undefined1)local_290;
  uStack_418 = uStack_2f8;
  local_420 = local_300;
  uStack_408 = uStack_2e8;
  local_410 = local_2f0;
  uStack_3f8 = uStack_2d8;
  local_400 = local_2e0;
  uStack_3e8 = uStack_2c8;
  local_3f0 = local_2d0;
  uStack_428 = uStack_308;
  local_430 = local_310;
  uStack_348 = uStack_2b8;
  local_350 = local_2c0;
  uStack_338 = uStack_2a8;
  local_340 = local_2b0;
  uStack_328 = uStack_298;
  local_330 = local_2a0;
  local_320 = (undefined1)local_290;
  uStack_388 = uStack_2f8;
  local_390 = local_300;
  uStack_378 = uStack_2e8;
  local_380 = local_2f0;
  uStack_368 = uStack_2d8;
  local_370 = local_2e0;
  uStack_358 = uStack_2c8;
  local_360 = local_2d0;
  uStack_398 = uStack_308;
  local_3a0 = local_310;
  FUN_100011090(&local_430,&local_840,&DAT_100fb9548,&DAT_100c392d8);
  FUN_100005808(&local_3a0,&DAT_100fb9548,&DAT_100c392d8);
  uStack_778 = uStack_688;
  local_780 = local_690;
  uStack_768 = uStack_678;
  uStack_770 = local_680;
  uStack_7b8 = uStack_6c8;
  local_7c0 = local_6d0;
  uStack_7a8 = uStack_6b8;
  uStack_7b0 = local_6c0;
  uStack_798 = uStack_6a8;
  local_7a0 = local_6b0;
  uStack_788 = uStack_698;
  uStack_790 = local_6a0;
  uStack_7f8 = uStack_708;
  local_800 = local_710;
  uStack_7e8 = uStack_6f8;
  uStack_7f0 = local_700;
  uStack_7d8 = uStack_6e8;
  local_7e0 = local_6f0;
  uStack_7c8 = uStack_6d8;
  uStack_7d0 = local_6e0;
  uStack_838 = uStack_748;
  local_840 = local_750;
  uStack_828 = uStack_738;
  uStack_830 = uStack_740;
  uStack_818 = uStack_728;
  local_820 = local_730;
  uStack_808 = uStack_718;
  uStack_810 = local_720;
  uStack_878 = uStack_508;
  local_880 = local_510;
  uStack_868 = uStack_4f8;
  uStack_870 = local_500;
  uStack_858 = uStack_4e8;
  local_860 = local_4f0;
  uStack_8b8 = uStack_548;
  local_8c0 = local_550;
  uStack_8a8 = uStack_538;
  uStack_8b0 = local_540;
  uStack_898 = uStack_528;
  local_8a0 = local_530;
  uStack_888 = uStack_518;
  uStack_890 = local_520;
  uStack_8d8 = uStack_568;
  local_8e0 = local_570;
  uStack_8c8 = uStack_558;
  uStack_8d0 = local_560;
  uStack_98 = uStack_3d8;
  local_a0 = local_3e0;
  uStack_88 = uStack_3c8;
  local_90 = local_3d0;
  uStack_78 = uStack_3b8;
  local_80 = local_3c0;
  uStack_d8 = uStack_418;
  local_e0 = local_420;
  uStack_c8 = uStack_408;
  local_d0 = local_410;
  uStack_b8 = uStack_3f8;
  local_c0 = local_400;
  uStack_a8 = uStack_3e8;
  local_b0 = local_3f0;
  uStack_e8 = uStack_428;
  local_f0 = local_430;
  uStack_258 = uStack_698;
  local_260 = local_6a0;
  uStack_248 = uStack_688;
  local_250 = local_690;
  uStack_238 = uStack_678;
  local_240 = local_680;
  uStack_298 = uStack_6d8;
  local_2a0 = local_6e0;
  uStack_288 = uStack_6c8;
  local_290 = local_6d0;
  uStack_278 = uStack_6b8;
  local_280 = local_6c0;
  uStack_268 = uStack_6a8;
  local_270 = local_6b0;
  uStack_2d8 = uStack_718;
  local_2e0 = local_720;
  uStack_2c8 = uStack_708;
  local_2d0 = local_710;
  uStack_2b8 = uStack_6f8;
  local_2c0 = local_700;
  uStack_2a8 = uStack_6e8;
  local_2b0 = local_6f0;
  uStack_308 = uStack_748;
  local_310 = local_750;
  uStack_2f8 = uStack_738;
  local_300 = uStack_740;
  uStack_2e8 = uStack_728;
  local_2f0 = local_730;
  uStack_a28 = uStack_688;
  local_a30 = local_690;
  uStack_a18 = uStack_678;
  uStack_a20 = local_680;
  uStack_a68 = uStack_6c8;
  local_a70 = local_6d0;
  uStack_a58 = uStack_6b8;
  uStack_a60 = local_6c0;
  uStack_a48 = uStack_6a8;
  local_a50 = local_6b0;
  uStack_a38 = uStack_698;
  uStack_a40 = local_6a0;
  uStack_aa8 = uStack_708;
  local_ab0 = local_710;
  uStack_a98 = uStack_6f8;
  uStack_aa0 = local_700;
  uStack_a88 = uStack_6e8;
  local_a90 = local_6f0;
  uStack_a78 = uStack_6d8;
  uStack_a80 = local_6e0;
  local_760 = local_670;
  local_850 = local_4e0;
  local_70 = local_3b0;
  local_230 = local_670;
  local_a10 = local_670;
  uStack_ae8 = uStack_748;
  local_af0 = local_750;
  uStack_ad8 = uStack_738;
  uStack_ae0 = uStack_740;
  uStack_ac8 = uStack_728;
  local_ad0 = local_730;
  uStack_ab8 = uStack_718;
  uStack_ac0 = local_720;
  uStack_1b8 = uStack_508;
  local_1c0 = local_510;
  uStack_1a8 = uStack_4f8;
  local_1b0 = local_500;
  uStack_198 = uStack_4e8;
  local_1a0 = local_4f0;
  local_190 = local_4e0;
  uStack_1f8 = uStack_548;
  local_200 = local_550;
  uStack_1e8 = uStack_538;
  local_1f0 = local_540;
  uStack_1d8 = uStack_528;
  local_1e0 = local_530;
  uStack_1c8 = uStack_518;
  local_1d0 = local_520;
  uStack_218 = uStack_568;
  local_220 = local_570;
  uStack_208 = uStack_558;
  local_210 = local_560;
  uStack_9a0 = uStack_508;
  local_9a8 = local_510;
  uStack_990 = uStack_4f8;
  uStack_998 = local_500;
  uStack_980 = uStack_4e8;
  local_988 = local_4f0;
  uStack_9e0 = uStack_548;
  local_9e8 = local_550;
  uStack_9d0 = uStack_538;
  uStack_9d8 = local_540;
  uStack_9c0 = uStack_528;
  local_9c8 = local_530;
  uStack_9b0 = uStack_518;
  uStack_9b8 = local_520;
  local_978 = local_4e0;
  uStack_a00 = uStack_568;
  local_a08 = local_570;
  uStack_9f0 = uStack_558;
  local_9f8 = local_560;
  uStack_128 = uStack_3d8;
  local_130 = local_3e0;
  uStack_118 = uStack_3c8;
  local_120 = local_3d0;
  uStack_108 = uStack_3b8;
  local_110 = local_3c0;
  local_100 = local_3b0;
  uStack_168 = uStack_418;
  local_170 = local_420;
  uStack_158 = uStack_408;
  local_160 = local_410;
  uStack_148 = uStack_3f8;
  local_150 = local_400;
  uStack_138 = uStack_3e8;
  local_140 = local_3f0;
  uStack_178 = uStack_428;
  local_180 = local_430;
  uStack_908 = uStack_3c8;
  local_910 = local_3d0;
  uStack_8f8 = uStack_3b8;
  uStack_900 = local_3c0;
  local_8f0 = local_3b0;
  uStack_948 = uStack_408;
  local_950 = local_410;
  uStack_938 = uStack_3f8;
  uStack_940 = local_400;
  uStack_928 = uStack_3e8;
  local_930 = local_3f0;
  uStack_918 = uStack_3d8;
  uStack_920 = local_3e0;
  uStack_968 = uStack_428;
  local_970 = local_430;
  uStack_958 = uStack_418;
  uStack_960 = local_420;
  _memcpy(param_1,&local_af0,0x201);
  FUN_100011090(&local_310,auStack_bd8,&DAT_100fb9538,&DAT_100c392c8);
  FUN_100011090(&local_220,auStack_bd8,&DAT_100fb9540,&DAT_100c392d0);
  FUN_100011090(&local_180,auStack_bd8,&DAT_100fb9548,&DAT_100c392d8);
  FUN_100005808(&local_f0,&DAT_100fb9548,&DAT_100c392d8);
  FUN_100005808(&local_8e0,&DAT_100fb9540,&DAT_100c392d0);
  FUN_100005808(&local_840,&DAT_100fb9538,&DAT_100c392c8);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10026c038 | FUN_10026c038 */

void FUN_10026c038(String *param_1)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long extraout_x8;
  String SVar7;
  String SVar8;
  String SVar9;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,0x68,UVar5.unknown,puVar4)
    ;
  }
  FUN_1001cd754(LVar2.unknown);
  SVar7 = (extension_Foundation)::Swift::String::init(LVar2);
  FUN_1001cd8d4(LVar2.unknown);
  SVar8 = (extension_Foundation)::Swift::String::init(LVar2);
  FUN_1001cda54(LVar2.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar2);
  *param_1 = SVar7;
  param_1[1] = SVar8;
  param_1[2] = SVar9;
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10026c16c | FUN_10026c16c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010026c288 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10026c16c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  Text TVar8;
  Font FVar9;
  Font FVar10;
  Text TVar11;
  Color CVar12;
  Text TVar13;
  Text TVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined *puVar19;
  long extraout_x8;
  long lVar20;
  undefined auStack_c0 [8];
  char *local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  LocalizedStringResource local_90;
  MainActor *local_88;
  String local_80;
  undefined8 local_70;
  long lStack_68;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  local_90.unknown = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar15,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_88 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "PasteLicensingAppStore/LifetimePurchaseView.swift";
    param_5 = (undefined8 *)0x72;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,0x72,UVar6.unknown,puVar5)
    ;
  }
  lVar20 = param_2[1];
  if (lVar20 == 0) {
    lStack_68 = -0x1f00000000000000;
    local_70 = 0x5f;
  }
  else {
    local_70 = *param_2;
    lStack_68 = lVar20;
  }
  FUN_1002538a0();
  local_b8 = pcVar7;
  _swift_bridgeObjectRetain(lVar20);
  puVar15 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar8 = SwiftUI::Text::_init(pcVar7,PTR___type_metadata_for_Swift_String_100eac208,pcVar7);
  FVar9 = SwiftUI::Font::get_title2(TVar8.unknown);
  FVar10 = SwiftUI::Font::bold(FVar9);
  _swift_release(FVar9.unknown);
  TVar14 = TVar8;
  puVar16 = puVar15;
  pcVar18 = pcVar7;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  _swift_release(FVar10.unknown);
  FUN_100016d74(TVar8.unknown,puVar15,pcVar7);
  _swift_bridgeObjectRelease();
  FUN_1001fe15c();
  CVar12 = SwiftUI::Color::init((NSColor *)*param_5);
  local_80.str = CVar12.unknown;
  FUN_10026e1d0();
  TVar8 = TVar11;
  puVar15 = TVar14.unknown;
  FVar9.unknown = puVar16;
  TVar13 = SwiftUI::Text::_foregroundStyle();
  local_ac = SUB84(puVar15,0);
  local_a8 = TVar8.unknown;
  puStack_a0 = TVar13.unknown;
  local_98 = FVar9.unknown;
  FUN_100016d74(TVar11.unknown,TVar14.unknown,puVar16);
  _swift_release(CVar12.unknown);
  _swift_bridgeObjectRelease(pcVar18);
  LVar3.unknown = local_90.unknown;
  FUN_1001c9554(local_90.unknown);
  local_80 = (extension_Foundation)::Swift::String::init(LVar3);
  puVar15 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar7 = local_b8;
  TVar8 = SwiftUI::Text::_init
                    (TVar13.unknown,PTR___type_metadata_for_Swift_String_100eac208,local_b8);
  TVar14 = TVar8;
  FUN_1001fe19c();
  CVar12 = SwiftUI::Color::init(*(NSColor **)TVar14.unknown);
  TVar14 = TVar8;
  puVar16 = puVar15;
  pcVar18 = pcVar7;
  TVar11 = SwiftUI::Text::_foregroundColor(CVar12.unknown);
  _swift_release(CVar12.unknown);
  FUN_100016d74(TVar8.unknown,puVar15,pcVar7);
  _swift_bridgeObjectRelease();
  FVar9 = SwiftUI::Font::get_callout(FVar9);
  TVar8 = TVar11;
  puVar17 = TVar14.unknown;
  puVar19 = puVar16;
  TVar13 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100016d74(TVar11.unknown,TVar14.unknown,puVar16);
  _swift_bridgeObjectRelease(pcVar18);
  puVar2 = local_98;
  puVar16 = puStack_a0;
  puVar15 = local_a8;
  uVar1 = local_ac;
  *param_1 = puStack_a0;
  param_1[1] = local_a8;
  *(char *)(param_1 + 2) = (char)local_ac;
  param_1[3] = local_98;
  param_1[4] = TVar13.unknown;
  param_1[5] = TVar8.unknown;
  *(char *)(param_1 + 6) = (char)puVar17;
  param_1[7] = puVar19;
  FUN_100016d5c(puStack_a0,local_a8,local_ac);
  _swift_bridgeObjectRetain(puVar2);
  FUN_100016d5c(TVar13.unknown,TVar8.unknown,puVar17);
  _swift_bridgeObjectRetain(puVar19);
  FUN_100016d74(TVar13.unknown,TVar8.unknown,puVar17);
  _swift_bridgeObjectRelease(puVar19);
  FUN_100016d74(puVar16,puVar15,uVar1);
  _swift_release(local_88);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10026c4f4 | FUN_10026c4f4 */

void FUN_10026c4f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6,Path param_7)

{
  CGPoint to;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  to.unknown = (undefined *)SwiftUI::Path::init();
  SwiftUI::Path::move(to,param_7);
  if (param_6 == '\x01') {
    _CGRectGetHeight();
  }
  else {
    _CGRectGetWidth(param_2,param_3,param_4,param_5);
  }
  SwiftUI::Path::addLine(to,param_7);
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  *(undefined1 *)(param_1 + 4) = local_70;
  return;
}



/* Address: 0x10026c5b0 | FUN_10026c5b0 */

void FUN_10026c5b0(undefined8 *param_1)

{
  undefined1 *unaff_x20;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_10026c4f4(&local_48,*unaff_x20);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x10026c5f4 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::get_role */

ShapeRole (extension_SwiftUI)::SwiftUI::Shape::get_role(void)

{
  ShapeRole SVar1;
  
  SVar1 = get_role();
  return (ShapeRole)SVar1.value;
}



/* Address: 0x10026c5f8 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::get_layoutDirectionBehavior */

LayoutDirectionBehavior (extension_SwiftUI)::SwiftUI::Shape::get_layoutDirectionBehavior(void)

{
  LayoutDirectionBehavior LVar1;
  
  LVar1 = get_layoutDirectionBehavior();
  return (LayoutDirectionBehavior)LVar1.value;
}



/* Address: 0x10026c5fc | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Shape::sizeThatFits */

CGSize (extension_SwiftUI)::SwiftUI::Shape::sizeThatFits(ProposedViewSize param_1)

{
  CGSize CVar1;
  
  CVar1 = sizeThatFits(param_1);
  return (CGSize)CVar1.unknown;
}



/* Address: 0x10026c600 | FUN_10026c600 */

code * FUN_10026c600(undefined8 *param_1)

{
  EmptyAnimatableData EVar1;
  EmptyAnimatableData EVar2;
  Animatable *unaff_x20;
  
  EVar1.unknown = (undefined *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    EVar1.unknown = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x602c);
  }
  *param_1 = EVar1.unknown;
  EVar2.unknown = EVar1.unknown;
  (extension_SwiftUI)::SwiftUI::Animatable::_modify_animatableData(unaff_x20,EVar1);
  *(undefined **)(EVar1.unknown + 0x20) = EVar2.unknown;
  return FUN_10026c674;
}



/* Address: 0x10026c674 | FUN_10026c674 */

void FUN_10026c674(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x20))(pvVar1);
  _free(pvVar1);
  return;
}



/* Address: 0x10026c6a0 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::Animatable::$_makeAnimatable */

void (extension_SwiftUI)::SwiftUI::Animatable::__makeAnimatable
               (_GraphValue<undefined> value,_GraphInputs inputs)

{
  __makeAnimatable(value,inputs);
  return;
}



/* Address: 0x10026c6a4 | FUN_10026c6a4 */

void FUN_10026c6a4(_GraphValue<undefined> param_1,_ViewInputs param_2)

{
  FUN_10026e634();
  (extension_SwiftUI)::SwiftUI::Shape::_makeView(param_1,param_2);
  return;
}



/* Address: 0x10026c6f4 | FUN_10026c6f4 */

void FUN_10026c6f4(_GraphValue<undefined> param_1,_ViewListInputs param_2)

{
  FUN_10026e634();
  (extension_SwiftUI)::SwiftUI::Shape::_makeViewList(param_1,param_2);
  return;
}



/* Address: 0x10026c744 | FUN_10026c744 */

void FUN_10026c744(void)

{
  FUN_10026e634();
  (extension_SwiftUI)::SwiftUI::Shape::get_body();
  return;
}



/* Address: 0x10026c77c | FUN_10026c77c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10026c77c(undefined8 *param_1,undefined *param_2,undefined8 param_3)

{
  String systemName;
  ResizingMode RVar1;
  undefined7 extraout_var;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  Image IVar7;
  Image IVar8;
  EdgeInsets capInsets;
  Color CVar9;
  Alignment AVar10;
  undefined **ppuVar11;
  Text TVar12;
  HierarchicalShapeStyle HVar13;
  Text TVar14;
  Text TVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long extraout_x8;
  long lVar19;
  undefined1 auStack_200 [8];
  undefined8 *local_1f8;
  MainActor *local_1f0;
  undefined1 auStack_1e8 [72];
  undefined *local_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *puVar2;
  
  local_1f8 = param_1;
  RVar1 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar2 = (undefined *)CONCAT71(extraout_var,RVar1.value);
  lVar19 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  capInsets.unknown = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar17 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar17,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_1f0 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteLicensingAppStore/LifetimePurchaseView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/LifetimePurchaseView.swift",0x31,1,0x98,UVar5.unknown,puVar4)
    ;
  }
  FUN_10020c9a8();
  systemName = *(String *)pcVar6;
  _swift_bridgeObjectRetain(((String *)pcVar6)->bridgeObject);
  IVar7 = SwiftUI::Image::init(systemName);
  IVar8.unknown = puVar2;
  (**(code **)(lVar19 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  IVar8 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar7.unknown,IVar8);
  _swift_release(IVar7.unknown);
  (**(code **)(lVar19 + 8))(capInsets.unknown,puVar2);
  FUN_1001fe554();
  CVar9 = SwiftUI::Color::init(*(NSColor **)capInsets.unknown);
  AVar10.unknown = &DAT_100c39470;
  _swift_getKeyPath();
  SwiftUI::Alignment::get_center(AVar10);
  SwiftUI::_FrameLayout::_init((Alignment)0x4034000000000000);
  uStack_130 = puStack_198;
  local_138 = local_1a0;
  uStack_120 = puStack_188;
  local_128 = puStack_190;
  uStack_110 = uStack_178;
  local_118 = local_180;
  uStack_e8 = puStack_198;
  local_f0 = local_1a0;
  uStack_d8 = puStack_188;
  uStack_e0 = puStack_190;
  uStack_c8 = uStack_178;
  local_d0 = local_180;
  puVar17 = &DAT_100c394a0;
  local_150 = IVar8.unknown;
  puStack_148 = AVar10.unknown;
  local_140 = CVar9.unknown;
  local_108 = IVar8.unknown;
  puStack_100 = AVar10.unknown;
  local_f8 = CVar9.unknown;
  FUN_100011090(&local_150,&local_c0,&DAT_100fb9628,&DAT_100c394a0);
  ppuVar11 = &local_108;
  FUN_100005808(ppuVar11,&DAT_100fb9628,&DAT_100c394a0);
  local_c0 = param_2;
  puStack_b8 = (undefined *)param_3;
  FUN_1002538a0();
  _swift_bridgeObjectRetain(param_3);
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar12 = SwiftUI::Text::_init();
  HVar13 = SwiftUI::HierarchicalShapeStyle::get_primary(TVar12.unknown);
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,(int)HVar13.unknown);
  FUN_1002687fc();
  TVar15 = TVar12;
  puVar16 = puVar2;
  ppuVar18 = ppuVar11;
  TVar14 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar12.unknown,puVar2,ppuVar11);
  _swift_bridgeObjectRelease(puVar17);
  uStack_178 = local_128;
  local_180 = uStack_130;
  uStack_168 = local_118;
  uStack_170 = uStack_120;
  local_160 = uStack_110;
  puStack_198 = puStack_148;
  local_1a0 = local_150;
  puStack_188 = local_138;
  puStack_190 = local_140;
  uStack_98 = local_128;
  local_a0 = uStack_130;
  uStack_88 = local_118;
  uStack_90 = uStack_120;
  local_80 = uStack_110;
  puStack_b8 = puStack_148;
  local_c0 = local_150;
  puStack_a8 = local_138;
  puStack_b0 = local_140;
  local_1f8[5] = local_128;
  local_1f8[4] = uStack_130;
  local_1f8[7] = local_118;
  local_1f8[6] = uStack_120;
  local_1f8[1] = puStack_148;
  *local_1f8 = local_150;
  local_1f8[3] = local_138;
  local_1f8[2] = local_140;
  local_1f8[8] = uStack_110;
  local_1f8[9] = TVar14.unknown;
  local_1f8[10] = TVar15.unknown;
  *(char *)(local_1f8 + 0xb) = (char)puVar16;
  local_1f8[0xc] = ppuVar18;
  FUN_100011090(&local_c0,auStack_1e8,&DAT_100fb9628,&DAT_100c394a0);
  FUN_100016d5c(TVar14.unknown,TVar15.unknown,puVar16);
  _swift_bridgeObjectRetain(ppuVar18);
  FUN_100016d74(TVar14.unknown,TVar15.unknown,puVar16);
  _swift_bridgeObjectRelease(ppuVar18);
  FUN_100005808(&local_1a0,&DAT_100fb9628,&DAT_100c394a0);
  _swift_release(local_1f0);
  return;
}



/* Address: 0x10026cad8 | FUN_10026cad8 */

void FUN_10026cad8(undefined8 *param_1,VerticalAlignment param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  VerticalAlignment VVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_320 [128];
  undefined7 uStack_2a0;
  undefined1 local_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined7 uStack_290;
  undefined8 local_239;
  undefined *local_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 local_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 local_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1d0;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined *local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 local_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 local_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 local_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 local_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_58;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  VVar3 = SwiftUI::VerticalAlignment::get_center(param_2);
  FUN_10026c77c(&local_d0,uVar1,uVar2);
  uStack_1e8 = uStack_88;
  uStack_1e7 = uStack_87;
  local_1f0 = local_90;
  uStack_1ef = uStack_8f;
  uStack_1d8 = uStack_78;
  uStack_1d7 = uStack_77;
  uStack_1e0 = uStack_80;
  uStack_1df = local_7f;
  local_1d0 = CONCAT71(uStack_6f,uStack_70);
  uStack_218 = uStack_b8;
  uStack_217 = uStack_b7;
  uStack_220 = local_c0;
  uStack_21f = uStack_bf;
  uStack_228 = uStack_c8;
  local_230 = local_d0;
  uStack_208 = uStack_a8;
  uStack_207 = uStack_a7;
  local_210 = local_b0;
  uStack_20f = uStack_af;
  uStack_1f8 = uStack_98;
  uStack_1f7 = uStack_97;
  uStack_200 = uStack_a0;
  uStack_1ff = uStack_9f;
  uStack_1b8 = uStack_c8;
  local_1c0 = local_d0;
  FUN_100011090(&local_230,&local_150,&DAT_100fb9618,&DAT_100c39460);
  FUN_100005808(&local_1c0,&DAT_100fb9618,&DAT_100c39460);
  uStack_291 = (undefined1)uStack_228;
  uStack_290 = (undefined7)((ulong)uStack_228 >> 8);
  local_299 = SUB81(local_230,0);
  uStack_298 = (undefined7)((ulong)local_230 >> 8);
  local_239 = local_1d0;
  uStack_107 = uStack_1ff;
  uStack_100 = uStack_1f8;
  local_10f = uStack_207;
  uStack_108 = uStack_200;
  uStack_f7 = uStack_1ef;
  uStack_f0 = uStack_1e8;
  local_ff = uStack_1f7;
  uStack_f8 = local_1f0;
  uStack_e7 = uStack_1df;
  local_ef = uStack_1e7;
  uStack_e8 = uStack_1e0;
  uStack_d8 = local_1d0;
  uStack_e0 = uStack_1d8;
  uStack_df = uStack_1d7;
  uStack_137 = uStack_298;
  uStack_130 = uStack_291;
  local_13f = uStack_2a0;
  uStack_138 = local_299;
  uStack_127 = uStack_21f;
  uStack_120 = uStack_218;
  local_12f = uStack_290;
  uStack_128 = uStack_220;
  uStack_117 = uStack_20f;
  uStack_110 = uStack_208;
  local_11f = uStack_217;
  uStack_118 = local_210;
  uStack_af = uStack_290;
  uStack_148 = 0x4028000000000000;
  local_140 = 0;
  uStack_c8 = 0x4028000000000000;
  local_c0 = 0;
  uStack_b7 = uStack_298;
  local_b0 = uStack_291;
  uStack_b8 = local_299;
  uStack_58 = local_1d0;
  local_150 = VVar3.unknown;
  local_d0 = VVar3.unknown;
  FUN_100011090(&local_150,auStack_320,&DAT_100fb9620,&DAT_100c39468);
  FUN_100005808(&local_d0,&DAT_100fb9620,&DAT_100c39468);
  param_1[9] = CONCAT71(uStack_107,uStack_108);
  param_1[8] = CONCAT71(local_10f,uStack_110);
  param_1[0xb] = CONCAT71(uStack_f7,uStack_f8);
  param_1[10] = CONCAT71(local_ff,uStack_100);
  param_1[0xd] = CONCAT71(uStack_e7,uStack_e8);
  param_1[0xc] = CONCAT71(local_ef,uStack_f0);
  param_1[0xf] = uStack_d8;
  param_1[0xe] = CONCAT71(uStack_df,uStack_e0);
  param_1[1] = uStack_148;
  *param_1 = local_150;
  param_1[3] = CONCAT71(uStack_137,uStack_138);
  param_1[2] = CONCAT71(local_13f,local_140);
  param_1[5] = CONCAT71(uStack_127,uStack_128);
  param_1[4] = CONCAT71(local_12f,uStack_130);
  param_1[7] = CONCAT71(uStack_117,uStack_118);
  param_1[6] = CONCAT71(local_11f,uStack_120);
  return;
}



/* Address: 0x10026cc90 | FUN_10026cc90 */

void FUN_10026cc90(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::_get_horizontalSizeClass(param_1);
  return;
}



/* Address: 0x10026ccb0 | FUN_10026ccb0 */

void FUN_10026ccb0(undefined8 param_1,EnvironmentValues *param_2)

{
  undefined *puVar1;
  long extraout_x8;
  
  puVar1 = &DAT_100fb9408;
  FUN_1000037f0(&DAT_100fb9408,&DAT_100c391c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100011090(param_1,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100fb9408,&DAT_100c391c0);
  SwiftUI::EnvironmentValues::_set_horizontalSizeClass(param_2);
  return;
}



/* Address: 0x10026cd44 | thunk_FUN_10026ccb0 */

void thunk_FUN_10026ccb0(void)

{
  FUN_10026ccb0();
  return;
}



/* Address: 0x10026cd48 | thunk_FUN_10026a754 */

void thunk_FUN_10026a754(void)

{
  FUN_10026a754();
  return;
}



/* Address: 0x10026cd4c | FUN_10026cd4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10026cd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  OS_os_log *pOVar3;
  OS_os_log *pOVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  EnvironmentValues EVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (((uint)param_3 & 0xff) == 1) {
    _swift_retain(param_2);
  }
  else {
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xb,0,0,0xe,0,0);
    uVar2 = param_1;
    _swift_retain();
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    pOVar3 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)uVar2);
    if ((bVar1 & 1) == 0) {
      os::_os_log(uVar2,0x100000000,pOVar3,
                  "Accessing Environment\'s value outside of being installed on a View. This will always read the default value and will not update."
                  ,0x80,2,PTR___swiftEmptyArrayStorage_100eae0d8);
    }
    else {
      pOVar4 = pOVar3;
      _os_log_type_enabled(pOVar3,(uint)uVar2 & 0xff);
      if (((ulong)pOVar4 & 1) != 0) {
        puVar5 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        uVar6 = 0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar5 = 0x8200102;
        uVar7 = 0xd000000000000018;
        local_60 = uVar6;
        FUN_10026d21c(0xd000000000000018,0x8000000100d9f5a0,&local_60);
        *(undefined8 *)(puVar5 + 1) = uVar7;
        __os_log_impl(0x100000000,pOVar3,(uint)uVar2 & 0xff,
                      "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                      ,puVar5,0xc);
        FUN_100004594(uVar6);
        _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
      }
    }
    EVar8 = SwiftUI::EnvironmentValues::typeMetadataAccessor();
    lVar10 = *(long *)(EVar8.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
    lVar9 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::EnvironmentValues::init();
    _swift_getAtKeyPath(&local_60,lVar9,param_1);
    FUN_10026569c(param_1,param_2,param_3);
    (**(code **)(lVar10 + 8))(lVar9,EVar8.unknown);
    param_2 = uStack_58;
    param_1 = local_60;
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Address: 0x10026cf50 | FUN_10026cf50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_10026cf50(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  OS_os_log *pOVar5;
  OS_os_log *pOVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  EnvironmentValues EVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_50 [2];
  ulong uVar4;
  
  puVar2 = &DAT_100fb93b0;
  FUN_1000037f0(&DAT_100fb93b0,&DAT_100c39168);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)auStack_50 - extraout_x8);
  FUN_100011090();
  puVar3 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,puVar2);
  if ((int)puVar3 == 1) {
    FUN_10026e180(puVar11,param_1);
  }
  else {
    uVar12 = *puVar11;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xb,0,0,0xe,0,0);
    uVar4 = (ulong)bVar1;
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    pOVar5 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)uVar4);
    if ((bVar1 & 1) == 0) {
      os::_os_log(uVar4,0x100000000,pOVar5,
                  "Accessing Environment\'s value outside of being installed on a View. This will always read the default value and will not update."
                  ,0x80,2,PTR___swiftEmptyArrayStorage_100eae0d8);
    }
    else {
      pOVar6 = pOVar5;
      _os_log_type_enabled(pOVar5,(uint)uVar4 & 0xff);
      if (((ulong)pOVar6 & 1) != 0) {
        puVar7 = (undefined4 *)0xc;
        _swift_slowAlloc(0xc,0xffffffffffffffff);
        uVar8 = 0x20;
        _swift_slowAlloc(0x20,0xffffffffffffffff);
        *puVar7 = 0x8200102;
        uVar9 = 0xd000000000000020;
        auStack_50[1] = uVar8;
        FUN_10026d21c(0xd000000000000020,0x8000000100d9f5c0,auStack_50 + 1);
        *(undefined8 *)(puVar7 + 1) = uVar9;
        __os_log_impl(0x100000000,pOVar5,(uint)uVar4 & 0xff,
                      "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                      ,puVar7,0xc);
        FUN_100004594(uVar8);
        _swift_slowDealloc(uVar8,0xffffffffffffffff,0xffffffffffffffff);
        _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      }
    }
    EVar10 = SwiftUI::EnvironmentValues::typeMetadataAccessor();
    lVar14 = *(long *)(EVar10.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
    lVar13 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    SwiftUI::EnvironmentValues::init();
    _swift_getAtKeyPath(param_1,lVar13,uVar12);
    _swift_release(uVar12);
    (**(code **)(lVar14 + 8))(lVar13,EVar10.unknown);
  }
  return;
}



/* Address: 0x10026d198 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x10026d19c | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x10026d1a0 | FUN_10026d1a0 */

void FUN_10026d1a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10026569c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10026d1d0 | FUN_10026d1d0 */

void FUN_10026d1d0(void)

{
  long unaff_x20;
  
  FUN_10026a594(unaff_x20 + 0x10);
  return;
}



/* Address: 0x10026d1d8 | FUN_10026d1d8 */

undefined8 FUN_10026d1d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002abb94();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10026d21c | FUN_10026d21c */

undefined * FUN_10026d21c(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  ppuVar2 = &local_60;
  _swift_bridgeObjectRetain(param_2);
  FUN_10026d2e4(&local_60,0,0,1,param_1,param_2);
  puVar1 = local_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    local_60 = param_1;
    local_48 = PTR___type_metadata_for_Swift__StringGuts_100eace60;
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    puVar3 = (undefined *)ppuVar2;
    _swift_getObjectType();
    lVar4 = *param_3;
    local_60 = (undefined *)ppuVar2;
    local_48 = puVar3;
  }
  if (lVar4 != 0) {
    FUN_10000cbfc(&local_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_100004594(&local_60);
  return puVar1;
}



/* Address: 0x10026d2e4 | FUN_10026d2e4 */

void FUN_10026d2e4(ulong *param_1,void *param_2,long param_3,char param_4,_StringObject param_5,
                  ulong param_6)

{
  code *pcVar1;
  UnsafeBufferPointer<__int8> UVar2;
  ulong uVar3;
  undefined *local_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if (((ulong)param_5.unknown >> 0x3c & 1) == 0) {
        UVar2 = Swift::_StringObject::get_sharedUTF8(param_5);
        if (UVar2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10026d3f4);
          (*pcVar1)();
        }
      }
      else {
        UVar2.unknown = (undefined *)((param_6 & 0xfffffffffffffff) + 0x20);
      }
      *param_1 = (ulong)UVar2.unknown;
      if ((long)param_6 < 0) {
        return;
      }
      _swift_unknownObjectRetain(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != (void *)0x0)) &&
          (uVar3 = param_6 >> 0x38 & 0xf, uVar3 < (ulong)(param_3 - (long)param_2))) {
    uStack_38 = param_6 & 0xffffffffffffff;
    local_40 = param_5.unknown;
    _memcpy(param_2,&local_40,uVar3);
    *(undefined1 *)((long)param_2 + uVar3) = 0;
    *param_1 = (ulong)param_2;
    return;
  }
  FUN_10026d3f4(param_5.unknown);
  *param_1 = param_6;
  return;
}



/* Address: 0x10026d3f4 | FUN_10026d3f4 */

void FUN_10026d3f4(void)

{
  FUN_10026d458();
  FUN_1000037f0(&DAT_100fb9400,&DAT_100c391b8);
  _swift_initStaticObject();
  FUN_10026d58c();
  return;
}



/* Address: 0x10026d458 | FUN_10026d458 */

undefined * FUN_10026d458(UTF8View param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  UnsafeMutableBufferPointer<__int8> into;
  UnsafeBufferPointer<__int8> UVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar7 = param_1.unknown & 0xffffffffffff;
    puVar8 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar7;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar8;
    }
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar2 != (undefined *)0x0) {
      FUN_10026d67c(puVar2,0);
      _Var4.unknown = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          if ((long)puVar7 < (long)param_2) goto LAB_10026d588;
        }
        else {
          UVar5.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar7;
          if (SBORROW8((long)puVar7,(long)puVar7)) {
LAB_10026d588:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10026d58c);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,UVar5.unknown,(size_t)param_2);
        if (param_2 != puVar7) {
LAB_10026d4f4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10026d4f8);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        local_50 = param_1.unknown;
        _memcpy(puVar2 + 0x20,&local_50,(size_t)puVar8);
      }
    }
  }
  else {
    _Var3.unknown = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var3.unknown != (undefined *)0x0) {
      _Var4.unknown = _Var3.unknown;
      FUN_10026d67c(_Var3.unknown,0);
      into.unknown = _Var4.unknown + 0x20;
      _Var6.unknown = _Var3.unknown;
      Swift::_StringGuts::__foreignCopyUTF8(into,_Var3);
      if (((uint)_Var6.unknown & 0xff) == 1) goto LAB_10026d588;
      if (into.unknown != _Var3.unknown) goto LAB_10026d4f4;
    }
  }
  return _Var4.unknown;
}



/* Address: 0x10026d58c | FUN_10026d58c */

void FUN_10026d58c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10026d670);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_10026d6ec();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10026d674);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10026d678);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) + 0x20),(void *)(param_1 + 0x20),uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10026d67c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x10026d67c | FUN_10026d67c */

undefined * FUN_10026d67c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fb9400;
    FUN_1000037f0(&DAT_100fb9400,&DAT_100c391b8);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x10026d6ec | FUN_10026d6ec */

undefined * FUN_10026d6ec(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10026d7dc);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fb9400;
    FUN_1000037f0(&DAT_100fb9400,&DAT_100c391b8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10026d7dc | FUN_10026d7dc */

long * FUN_10026d7dc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  UserInterfaceSizeClass UVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar6;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar9 = (long)*(int *)(param_3 + 0x18);
    _swift_bridgeObjectRetain();
    puVar3 = &DAT_100fb93b0;
    FUN_1000037f0(&DAT_100fb93b0,&DAT_100c39168);
    lVar6 = (long)param_2 + lVar9;
    _swift_getEnumCaseMultiPayload(lVar6,puVar3);
    if ((int)lVar6 == 1) {
      UVar2 = SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor();
      lVar4 = CONCAT71(extraout_var,UVar2.value);
      lVar10 = *(long *)(lVar4 + -8);
      lVar6 = (long)param_2 + lVar9;
      (**(code **)(lVar10 + 0x30))(lVar6,1,lVar4);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar4);
        (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar4);
      }
      else {
        puVar5 = &DAT_100fb9408;
        FUN_1000037f0(&DAT_100fb9408,&DAT_100c391c0);
        _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
                *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
      }
      uVar7 = 1;
    }
    else {
      *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)((long)param_2 + lVar9);
      _swift_retain();
      uVar7 = 0;
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar9,puVar3,uVar7);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar8 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10026d92c | FUN_10026d92c */

void FUN_10026d92c(long param_1,long param_2)

{
  UserInterfaceSizeClass UVar1;
  undefined *puVar2;
  long lVar3;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  lVar5 = (long)*(int *)(param_2 + 0x18);
  puVar2 = &DAT_100fb93b0;
  FUN_1000037f0(&DAT_100fb93b0,&DAT_100c39168);
  lVar3 = param_1 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar3,puVar2);
  if ((int)lVar3 != 1) {
    _swift_release(*(undefined8 *)(param_1 + lVar5));
    return;
  }
  UVar1 = SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,UVar1.value);
  lVar6 = *(long *)(lVar4 + -8);
  lVar3 = param_1 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar3,1,lVar4);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010026d9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))(param_1 + lVar5,lVar4);
  return;
}



/* Address: 0x10026d9e0 | FUN_10026d9e0 */

undefined8 * FUN_10026d9e0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  UserInterfaceSizeClass UVar1;
  undefined *puVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar4;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar7 = (long)*(int *)(param_3 + 0x18);
  _swift_bridgeObjectRetain();
  puVar2 = &DAT_100fb93b0;
  FUN_1000037f0(&DAT_100fb93b0,&DAT_100c39168);
  lVar3 = (long)param_2 + lVar7;
  _swift_getEnumCaseMultiPayload(lVar3,puVar2);
  if ((int)lVar3 == 1) {
    UVar1 = SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor();
    lVar4 = CONCAT71(extraout_var,UVar1.value);
    lVar8 = *(long *)(lVar4 + -8);
    lVar3 = (long)param_2 + lVar7;
    (**(code **)(lVar8 + 0x30))(lVar3,1,lVar4);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
    }
    else {
      puVar5 = &DAT_100fb9408;
      FUN_1000037f0(&DAT_100fb9408,&DAT_100c391c0);
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    uVar6 = 1;
  }
  else {
    *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
    _swift_retain();
    uVar6 = 0;
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,puVar2,uVar6);
  return param_1;
}



/* Address: 0x10026dafc | FUN_10026dafc */

undefined8 * FUN_10026dafc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  UserInterfaceSizeClass UVar1;
  undefined *puVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar4;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  if (param_1 != param_2) {
    lVar7 = (long)*(int *)(param_3 + 0x18);
    puVar2 = &DAT_100fb93b0;
    FUN_100005808((long)param_1 + lVar7,&DAT_100fb93b0,&DAT_100c39168);
    FUN_1000037f0(&DAT_100fb93b0,&DAT_100c39168);
    lVar3 = (long)param_2 + lVar7;
    _swift_getEnumCaseMultiPayload(lVar3,puVar2);
    if ((int)lVar3 == 1) {
      UVar1 = SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor();
      lVar4 = CONCAT71(extraout_var,UVar1.value);
      lVar8 = *(long *)(lVar4 + -8);
      lVar3 = (long)param_2 + lVar7;
      (**(code **)(lVar8 + 0x30))(lVar3,1,lVar4);
      if ((int)lVar3 == 0) {
        (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
        (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
      }
      else {
        puVar5 = &DAT_100fb9408;
        FUN_1000037f0(&DAT_100fb9408,&DAT_100c391c0);
        _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
                *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
      }
      uVar6 = 1;
    }
    else {
      *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
      _swift_retain();
      uVar6 = 0;
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar7,puVar2,uVar6);
  }
  return param_1;
}



/* Address: 0x10026dc50 | FUN_10026dc50 */

undefined8 * FUN_10026dc50(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  UserInterfaceSizeClass UVar1;
  undefined *puVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar4;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  puVar2 = &DAT_100fb93b0;
  FUN_1000037f0(&DAT_100fb93b0,&DAT_100c39168);
  lVar3 = (long)param_2 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar3,puVar2);
  if ((int)lVar3 == 1) {
    UVar1 = SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor();
    lVar4 = CONCAT71(extraout_var,UVar1.value);
    lVar7 = *(long *)(lVar4 + -8);
    lVar3 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar3,1,lVar4);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
    }
    else {
      puVar5 = &DAT_100fb9408;
      FUN_1000037f0(&DAT_100fb9408,&DAT_100c391c0);
      _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
              *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,puVar2,1);
  }
  else {
    _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
            *(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x10026dd6c | FUN_10026dd6c */

undefined8 * FUN_10026dd6c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  UserInterfaceSizeClass UVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined7 extraout_var;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar6;
  
  uVar1 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  if (param_1 != param_2) {
    lVar8 = (long)*(int *)(param_3 + 0x18);
    puVar4 = &DAT_100fb93b0;
    FUN_100005808((long)param_1 + lVar8,&DAT_100fb93b0,&DAT_100c39168);
    FUN_1000037f0(&DAT_100fb93b0,&DAT_100c39168);
    lVar5 = (long)param_2 + lVar8;
    _swift_getEnumCaseMultiPayload(lVar5,puVar4);
    if ((int)lVar5 == 1) {
      UVar2 = SwiftUI::UserInterfaceSizeClass::typeMetadataAccessor();
      lVar6 = CONCAT71(extraout_var,UVar2.value);
      lVar9 = *(long *)(lVar6 + -8);
      lVar5 = (long)param_2 + lVar8;
      (**(code **)(lVar9 + 0x30))(lVar5,1,lVar6);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar6);
        (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar6);
      }
      else {
        puVar7 = &DAT_100fb9408;
        FUN_1000037f0(&DAT_100fb9408,&DAT_100c391c0);
        _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
                *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar8,puVar4,1);
    }
    else {
      _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
  }
  return param_1;
}



/* Address: 0x10026deb4 | FUN_10026deb4 */

void FUN_10026deb4(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10026dec0 | FUN_10026dec0 */

ulong FUN_10026dec0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  puVar2 = &DAT_100fb9420;
  FUN_1000037f0(&DAT_100fb9420,&DAT_100c391d8);
  uVar3 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010026df54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(uVar3,param_2,puVar2);
  return uVar3;
}



/* Address: 0x10026df58 | FUN_10026df58 */

void FUN_10026df58(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10026df64 | FUN_10026df64 */

void FUN_10026df64(long param_1,ulong param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7ffffffe) {
    *(ulong *)(param_1 + 8) = param_2 & 0xffffffff;
    return;
  }
  puVar1 = &DAT_100fb9420;
  FUN_1000037f0(&DAT_100fb9420,&DAT_100c391d8);
                    /* WARNING: Could not recover jumptable at 0x00010026dfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,puVar1);
  return;
}



/* Address: 0x10026dfe4 | FUN_10026dfe4 */

void FUN_10026dfe4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c391f0;
  puStack_30 = &DAT_100c39208;
  lVar1 = 0x13f;
  FUN_10026e060();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}



/* Address: 0x10026e060 | FUN_10026e060 */

void FUN_10026e060(void)

{
  Content CVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  
  if (DAT_100fb9490 == 0) {
    puVar2 = &DAT_100fb9408;
    FUN_100005c24(&DAT_100fb9408,&DAT_100c391c0);
    CVar1 = SwiftUI::Environment::Content::typeMetadataAccessor();
    if (puVar2 == (undefined *)0x0) {
      DAT_100fb9490 = CONCAT71(extraout_var,CVar1.value);
    }
  }
  return;
}



/* Address: 0x10026e0c0 | thunk_FUN_10026e0c4 */

void thunk_FUN_10026e0c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb94c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9390;
  FUN_100005c24(&DAT_100fb9390,&DAT_100c39110);
  puVar2 = &DAT_100fb94d0;
  FUN_100016eac(&DAT_100fb94d0,&DAT_100fb94d8,&DAT_100c39220,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb94c8 = puVar3;
  return;
}



/* Address: 0x10026e0c4 | FUN_10026e0c4 */

void FUN_10026e0c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb94c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9390;
  FUN_100005c24(&DAT_100fb9390,&DAT_100c39110);
  puVar2 = &DAT_100fb94d0;
  FUN_100016eac(&DAT_100fb94d0,&DAT_100fb94d8,&DAT_100c39220,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb94c8 = puVar3;
  return;
}



/* Address: 0x10026e15c | FUN_10026e15c */

void FUN_10026e15c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca9e44,1);
  return;
}



/* Address: 0x10026e16c | FUN_10026e16c */

void FUN_10026e16c(long param_1)

{
  *(undefined1 *)(param_1 + 0x219) = 1;
  return;
}


