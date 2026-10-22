/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10007ed28 | FUN_10007ed28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10007ed28(void)

{
  undefined *puVar1;
  
  if (DAT_100fa9da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSRunLoop;
  _swift_getObjCClassMetadata();
  DAT_100fa9da0 = puVar1;
  return;
}



/* Address: 0x10007ed6c | FUN_10007ed6c */

undefined8 FUN_10007ed6c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa9d88;
  FUN_1000037f0(&DAT_100fa9d88,&DAT_100c294f0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10007edb4 | FUN_10007edb4 */

void FUN_10007edb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa9db8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e268;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e268,&DAT_100ec8470);
  DAT_100fa9db8 = pTVar1;
  return;
}



/* Address: 0x10007edf4 | FUN_10007edf4 */

void FUN_10007edf4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10007ee18 | FUN_10007ee18 */

void FUN_10007ee18(void)

{
  FUN_10007df7c();
  return;
}



/* Address: 0x10007ee20 | FUN_10007ee20 */

undefined1  [16] FUN_10007ee20(void)

{
  return ZEXT816(0x100eb2f70);
}



/* Address: 0x10007ee30 | FUN_10007ee30 */

void FUN_10007ee30(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca1a8c,1);
  return;
}



/* Address: 0x10007ee40 | FUN_10007ee40 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010007f360 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10007ee40(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  LocalizedStringResource LVar6;
  undefined *puVar7;
  SwitchToggleStyle SVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  AnyView AVar14;
  HorizontalAlignment HVar15;
  Set _all;
  Set SVar16;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  String SVar28;
  String SVar29;
  undefined *apuStack_570 [2];
  long local_560;
  undefined *local_558;
  MainActor *local_550;
  long local_548;
  long local_540;
  undefined *local_538;
  undefined8 *local_530;
  long local_528;
  long local_520;
  undefined8 local_518;
  long local_510;
  undefined1 auStack_508 [224];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined *local_348;
  undefined8 local_340;
  undefined1 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
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
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  local_520 = param_1;
  local_518 = param_3;
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar6.unknown = (undefined *)((long)apuStack_570 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100fa9e18;
  FUN_1000037f0(&DAT_100fa9e18,&DAT_100c27360);
  local_558 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar18 = (long)LVar6.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_528 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined8 *)(lVar18 - extraout_x12);
  local_530 = puVar17;
  SVar8 = SwiftUI::SwitchToggleStyle::typeMetadataAccessor();
  local_560 = *(long *)(SVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_560 + 0x40));
  lVar20 = (long)puVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fa9e20;
  FUN_1000037f0(&DAT_100fa9e20,&DAT_100c27368);
  local_548 = *(long *)(puVar7 + -8);
  local_538 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_548 + 0x40));
  lVar18 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_540 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_510 = lVar18 - extraout_x12_00;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar17 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_550 = pMVar9;
  UVar10 = Swift::Actor::get_unownedExecutor();
  pcVar11 = (char *)UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar11 & 1) == 0) {
    pcVar11 = "Paste/PrivacySettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/PrivacySettingsView.swift",0x1f,1,9,UVar10.unknown,puVar17);
  }
  local_348 = (undefined *)SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar11);
  local_340 = 0x4030000000000000;
  local_338 = 0;
  apuStack_570[1] = param_2;
  FUN_10007f55c(&local_428,param_2,local_518);
  uStack_1a8 = uStack_380;
  local_1b0 = local_388;
  uStack_198 = uStack_370;
  uStack_1a0 = local_378;
  uStack_188 = uStack_360;
  local_190 = local_368;
  uStack_178 = uStack_350;
  uStack_180 = local_358;
  uStack_1e8 = uStack_3c0;
  local_1f0 = local_3c8;
  uStack_1d8 = uStack_3b0;
  uStack_1e0 = local_3b8;
  uStack_1c8 = uStack_3a0;
  local_1d0 = local_3a8;
  uStack_1b8 = uStack_390;
  uStack_1c0 = local_398;
  uStack_228 = uStack_400;
  local_230 = local_408;
  uStack_218 = uStack_3f0;
  uStack_220 = local_3f8;
  uStack_208 = uStack_3e0;
  local_210 = local_3e8;
  uStack_1f8 = uStack_3d0;
  uStack_200 = local_3d8;
  uStack_248 = uStack_420;
  local_250 = local_428;
  uStack_238 = uStack_410;
  uStack_240 = local_418;
  uStack_c8 = uStack_380;
  local_d0 = local_388;
  uStack_b8 = uStack_370;
  uStack_c0 = local_378;
  uStack_a8 = uStack_360;
  local_b0 = local_368;
  uStack_98 = uStack_350;
  uStack_a0 = local_358;
  uStack_108 = uStack_3c0;
  local_110 = local_3c8;
  uStack_f8 = uStack_3b0;
  uStack_100 = local_3b8;
  uStack_e8 = uStack_3a0;
  local_f0 = local_3a8;
  uStack_d8 = uStack_390;
  uStack_e0 = local_398;
  uStack_148 = uStack_400;
  local_150 = local_408;
  uStack_138 = uStack_3f0;
  uStack_140 = local_3f8;
  uStack_128 = uStack_3e0;
  local_130 = local_3e8;
  uStack_118 = uStack_3d0;
  uStack_120 = local_3d8;
  uStack_168 = uStack_420;
  local_170 = local_428;
  uStack_158 = uStack_410;
  uStack_160 = local_418;
  FUN_100011090(&local_250,auStack_508,&DAT_100fa9e28,&DAT_100c27370);
  FUN_100005808(&local_170,&DAT_100fa9e28,&DAT_100c27370);
  uStack_288 = uStack_1a8;
  local_290 = local_1b0;
  uStack_278 = uStack_198;
  local_280 = uStack_1a0;
  uStack_268 = uStack_188;
  local_270 = local_190;
  uStack_258 = uStack_178;
  local_260 = uStack_180;
  uStack_2c8 = uStack_1e8;
  local_2d0 = local_1f0;
  uStack_2b8 = uStack_1d8;
  local_2c0 = uStack_1e0;
  uStack_2a8 = uStack_1c8;
  local_2b0 = local_1d0;
  uStack_298 = uStack_1b8;
  local_2a0 = uStack_1c0;
  uStack_308 = uStack_228;
  local_310 = local_230;
  uStack_2f8 = uStack_218;
  local_300 = uStack_220;
  uStack_2e8 = uStack_208;
  local_2f0 = local_210;
  uStack_2d8 = uStack_1f8;
  local_2e0 = uStack_200;
  uStack_328 = uStack_248;
  local_330 = local_250;
  uStack_318 = uStack_238;
  local_320 = uStack_240;
  uVar22 = uStack_240;
  SwiftUI::SwitchToggleStyle::init();
  puVar7 = &DAT_100fa9e30;
  FUN_1000037f0(&DAT_100fa9e30,&DAT_100c27378);
  puVar13 = &DAT_100fa9e38;
  uVar24 = local_368;
  uVar26 = local_378;
  FUN_100016eac(&DAT_100fa9e38,&DAT_100fa9e30,&DAT_100c27378,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puVar12 = &DAT_100fa9348;
  FUN_100003a00(&DAT_100fa9348,PTR_typeMetadataAccessor_100eaabd0,
                PTR_SwiftUI__SwiftUI__SwitchToggleStyle_>SwiftUI__ToggleStyle_100eaabc0);
  (extension_SwiftUI)::SwiftUI::View::_toggleStyle
            (local_510,lVar20,puVar7,SVar8.unknown,puVar13,puVar12);
  (**(code **)(local_560 + 8))(lVar20,SVar8.unknown);
  FUN_100005808(&local_348,&DAT_100fa9e30,&DAT_100c27378);
  FUN_1001e0954(LVar6.unknown);
  SVar28 = (extension_Foundation)::Swift::String::init(LVar6);
  FUN_1001e07d4(LVar6.unknown);
  SVar29 = (extension_Foundation)::Swift::String::init(LVar6);
  local_348 = (undefined *)
              SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)SVar29.str);
  local_340 = 0x4000000000000000;
  local_338 = 0;
  FUN_10003ccac(&local_330,SVar28.str,SVar28.bridgeObject,SVar29.str,SVar29.bridgeObject);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  puVar7 = &DAT_100fa6430;
  FUN_1000037f0(&DAT_100fa6430,&DAT_100c26510);
  puVar13 = &DAT_100fa9e40;
  FUN_100016eac(&DAT_100fa9e40,&DAT_100fa6430,&DAT_100c26510,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  AVar14 = SwiftUI::AnyView::_init(puVar13,puVar7,puVar13);
  puVar2 = local_530;
  *local_530 = AVar14.unknown;
  puVar17 = (undefined8 *)((long)puVar2 + (long)*(int *)(local_558 + 0x24));
  HVar15 = SwiftUI::HorizontalAlignment::get_center(AVar14.unknown);
  *puVar17 = HVar15.unknown;
  puVar17[1] = 0;
  *(undefined1 *)(puVar17 + 2) = 0;
  puVar7 = &DAT_100fa9e48;
  FUN_1000037f0(&DAT_100fa9e48,&DAT_100c27388);
  SVar16.unknown = apuStack_570[1];
  FUN_100080010((long)puVar17 + (long)*(int *)(puVar7 + 0x2c),apuStack_570[1],local_518);
  _all = SwiftUI::Edge::Set::get_horizontal(SVar16);
  uVar21 = 0xc028000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar16.unknown = &DAT_100fa9e50;
  uVar23 = uVar22;
  uVar25 = uVar24;
  uVar27 = uVar26;
  FUN_1000037f0(&DAT_100fa9e50,&DAT_100c27390);
  puVar1 = (undefined1 *)((long)puVar17 + (long)*(int *)(SVar16.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = uVar22;
  *(undefined8 *)(puVar1 + 0x18) = uVar24;
  *(undefined8 *)(puVar1 + 0x20) = uVar26;
  puVar1[0x28] = 0;
  SVar16 = SwiftUI::Edge::Set::get_vertical(SVar16);
  uVar22 = 0xc024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar16.unknown);
  puVar7 = &DAT_100fa9e58;
  FUN_1000037f0(&DAT_100fa9e58,&DAT_100c27398);
  lVar5 = local_510;
  puVar13 = local_538;
  lVar20 = local_540;
  lVar18 = local_548;
  puVar1 = (undefined1 *)((long)puVar17 + (long)*(int *)(puVar7 + 0x24));
  *puVar1 = (char)SVar16.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar22;
  *(undefined8 *)(puVar1 + 0x10) = uVar23;
  *(undefined8 *)(puVar1 + 0x18) = uVar25;
  *(undefined8 *)(puVar1 + 0x20) = uVar27;
  puVar1[0x28] = 0;
  pcVar19 = *(code **)(local_548 + 0x10);
  (*pcVar19)(local_540,local_510,local_538);
  lVar3 = local_528;
  FUN_100011090(puVar2,local_528,&DAT_100fa9e18,&DAT_100c27360);
  lVar4 = local_520;
  (*pcVar19)(local_520,lVar20,puVar13);
  puVar7 = &DAT_100fa9e60;
  FUN_1000037f0(&DAT_100fa9e60,&DAT_100c273a0);
  FUN_100011090(lVar3,lVar4 + *(int *)(puVar7 + 0x30),&DAT_100fa9e18,&DAT_100c27360);
  puVar17 = (undefined8 *)(lVar4 + *(int *)(puVar7 + 0x40));
  *puVar17 = 0;
  *(undefined1 *)(puVar17 + 1) = 1;
  FUN_100005808(puVar2,&DAT_100fa9e18,&DAT_100c27360);
  pcVar19 = *(code **)(lVar18 + 8);
  (*pcVar19)(lVar5,puVar13);
  FUN_100005808(lVar3,&DAT_100fa9e18,&DAT_100c27360);
  (*pcVar19)(lVar20,puVar13);
  _swift_release(local_550);
  return;
}



/* Address: 0x10007f55c | FUN_10007f55c */

void FUN_10007f55c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined1 auStack_520 [112];
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
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
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
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
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
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
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
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PrivacySettingsView.swift",0x1f,1,0x12,UVar4.unknown,puVar3);
  }
  local_c0 = 0;
  FUN_10007f868(&uStack_b8,param_2,param_3);
  uStack_318 = uStack_78;
  local_320 = local_80;
  uStack_308 = uStack_68;
  local_310 = local_70;
  uStack_358 = uStack_b8;
  local_360 = local_c0;
  uStack_348 = uStack_a8;
  local_350 = uStack_b0;
  uStack_338 = uStack_98;
  local_340 = local_a0;
  uStack_328 = uStack_88;
  local_330 = local_90;
  uStack_2d8 = uStack_a8;
  local_2e0 = uStack_b0;
  uStack_2c8 = uStack_98;
  uStack_2d0 = local_a0;
  uStack_2f8 = uStack_58;
  local_300 = local_60;
  uStack_2e8 = uStack_b8;
  uStack_2f0 = local_c0;
  uStack_2b8 = uStack_88;
  local_2c0 = local_90;
  uStack_2a8 = uStack_78;
  uStack_2b0 = local_80;
  uStack_298 = uStack_68;
  local_2a0 = local_70;
  uStack_288 = uStack_58;
  uStack_290 = local_60;
  FUN_100011090(&local_360,&uStack_130,&DAT_100fa9fa8,&DAT_100c275f8);
  FUN_100005808(&uStack_2f0,&DAT_100fa9fa8,&DAT_100c275f8);
  local_c0 = 0;
  FUN_10007fd70(&uStack_b8,param_2,param_3);
  uStack_238 = uStack_78;
  local_240 = local_80;
  uStack_228 = uStack_68;
  local_230 = local_70;
  uStack_278 = uStack_b8;
  local_280 = local_c0;
  uStack_268 = uStack_a8;
  local_270 = uStack_b0;
  uStack_258 = uStack_98;
  local_260 = local_a0;
  uStack_248 = uStack_88;
  local_250 = local_90;
  uStack_1f8 = uStack_a8;
  local_200 = uStack_b0;
  uStack_1e8 = uStack_98;
  uStack_1f0 = local_a0;
  uStack_218 = uStack_58;
  local_220 = local_60;
  uStack_208 = uStack_b8;
  uStack_210 = local_c0;
  uStack_1d8 = uStack_88;
  local_1e0 = local_90;
  uStack_1c8 = uStack_78;
  uStack_1d0 = local_80;
  uStack_1b8 = uStack_68;
  local_1c0 = local_70;
  uStack_1a8 = uStack_58;
  uStack_1b0 = local_60;
  FUN_100011090(&local_280,&uStack_130,&DAT_100fa9fa8,&DAT_100c275f8);
  FUN_100005808(&uStack_210,&DAT_100fa9fa8,&DAT_100c275f8);
  uStack_388 = uStack_318;
  local_390 = local_320;
  uStack_378 = uStack_308;
  uStack_380 = local_310;
  uStack_368 = uStack_2f8;
  local_370 = local_300;
  uStack_3c8 = uStack_358;
  local_3d0 = local_360;
  uStack_3b8 = uStack_348;
  uStack_3c0 = local_350;
  uStack_3a8 = uStack_338;
  local_3b0 = local_340;
  uStack_398 = uStack_328;
  uStack_3a0 = local_330;
  uStack_b8 = uStack_278;
  local_c0 = local_280;
  uStack_a8 = uStack_268;
  uStack_b0 = local_270;
  uStack_68 = uStack_228;
  local_70 = local_230;
  uStack_58 = uStack_218;
  local_60 = local_220;
  uStack_88 = uStack_248;
  local_90 = local_250;
  uStack_78 = uStack_238;
  local_80 = local_240;
  uStack_98 = uStack_258;
  local_a0 = local_260;
  uStack_198 = uStack_358;
  local_1a0 = local_360;
  uStack_188 = uStack_348;
  uStack_190 = local_350;
  uStack_138 = uStack_2f8;
  local_140 = local_300;
  uStack_128 = uStack_278;
  uStack_130 = local_280;
  uStack_158 = uStack_318;
  local_160 = local_320;
  uStack_148 = uStack_308;
  uStack_150 = local_310;
  uStack_178 = uStack_338;
  local_180 = local_340;
  uStack_168 = uStack_328;
  uStack_170 = local_330;
  uStack_4a8 = uStack_358;
  local_4b0 = local_360;
  uStack_498 = uStack_348;
  uStack_4a0 = local_350;
  uStack_468 = uStack_318;
  local_470 = local_320;
  uStack_458 = uStack_308;
  uStack_460 = local_310;
  uStack_488 = uStack_338;
  local_490 = local_340;
  uStack_478 = uStack_328;
  uStack_480 = local_330;
  uStack_118 = uStack_268;
  local_120 = local_270;
  uStack_c8 = uStack_218;
  local_d0 = local_220;
  uStack_d8 = uStack_228;
  local_e0 = local_230;
  uStack_e8 = uStack_238;
  local_f0 = local_240;
  uStack_108 = uStack_258;
  local_110 = local_260;
  uStack_f8 = uStack_248;
  local_100 = local_250;
  uStack_428 = uStack_268;
  local_430 = local_270;
  uStack_418 = uStack_258;
  uStack_420 = local_260;
  uStack_448 = uStack_2f8;
  local_450 = local_300;
  uStack_438 = uStack_278;
  uStack_440 = local_280;
  uStack_3e8 = uStack_228;
  local_3f0 = local_230;
  uStack_3d8 = uStack_218;
  uStack_3e0 = local_220;
  uStack_408 = uStack_248;
  local_410 = local_250;
  uStack_3f8 = uStack_238;
  uStack_400 = local_240;
  param_1[1] = uStack_358;
  *param_1 = local_360;
  param_1[3] = uStack_348;
  param_1[2] = local_350;
  param_1[9] = uStack_318;
  param_1[8] = local_320;
  param_1[0xb] = uStack_308;
  param_1[10] = local_310;
  param_1[5] = uStack_338;
  param_1[4] = local_340;
  param_1[7] = uStack_328;
  param_1[6] = local_330;
  param_1[0x11] = uStack_268;
  param_1[0x10] = local_270;
  param_1[0x13] = uStack_258;
  param_1[0x12] = local_260;
  param_1[0xd] = uStack_2f8;
  param_1[0xc] = local_300;
  param_1[0xf] = uStack_278;
  param_1[0xe] = local_280;
  param_1[0x19] = uStack_228;
  param_1[0x18] = local_230;
  param_1[0x1b] = uStack_218;
  param_1[0x1a] = local_220;
  param_1[0x15] = uStack_248;
  param_1[0x14] = local_250;
  param_1[0x17] = uStack_238;
  param_1[0x16] = local_240;
  FUN_100011090(&local_1a0,auStack_520,&DAT_100fa9fa8,&DAT_100c275f8);
  FUN_100011090(&uStack_130,auStack_520,&DAT_100fa9fa8,&DAT_100c275f8);
  FUN_100005808(&local_c0,&DAT_100fa9fa8,&DAT_100c275f8);
  FUN_100005808(&local_3d0,&DAT_100fa9fa8,&DAT_100c275f8);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10007f868 | FUN_10007f868 */

void FUN_10007f868(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  long extraout_x8;
  String SVar5;
  String SVar6;
  String SVar7;
  char *local_70;
  char *local_68;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1001e1554(LVar1.unknown);
  SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
  pvVar4 = SVar5.bridgeObject;
  local_68 = SVar5.str;
  FUN_1001e13d4(LVar1.unknown);
  SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
  local_70 = SVar5.str;
  puVar2 = &DAT_100eb3088;
  _swift_allocObject(&DAT_100eb3088,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _swift_retain(param_3);
  FUN_1001e1254(LVar1.unknown);
  SVar6 = (extension_Foundation)::Swift::String::init(LVar1);
  FUN_1001e10d4(LVar1.unknown);
  SVar7 = (extension_Foundation)::Swift::String::init(LVar1);
  puVar3 = &DAT_100eb30b0;
  _swift_allocObject(&DAT_100eb30b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *param_1 = local_68;
  param_1[1] = pvVar4;
  param_1[2] = local_70;
  param_1[3] = SVar5.bridgeObject;
  param_1[4] = FUN_100082534;
  param_1[5] = puVar2;
  param_1[6] = 0x3fe0000000000000;
  *(String *)(param_1 + 7) = SVar6;
  *(String *)(param_1 + 9) = SVar7;
  param_1[0xb] = FUN_10008255c;
  param_1[0xc] = puVar3;
  _swift_retain(param_3);
  _swift_bridgeObjectRetain(pvVar4);
  _swift_bridgeObjectRetain(SVar5.bridgeObject);
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(pvVar4);
  return;
}



/* Address: 0x10007f9dc | FUN_10007f9dc */

void FUN_10007f9dc(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x18,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  uStack_78 = *(undefined8 *)(lVar1 + 0x30);
  uVar6 = *(undefined8 *)(lVar1 + 0x28);
  uStack_68 = *(undefined8 *)(lVar1 + 0x40);
  uVar4 = *(undefined8 *)(lVar1 + 0x38);
  uVar2 = *(undefined8 *)(lVar1 + 0x48);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10007fac8 | FUN_10007fac8 */

void FUN_10007fac8(long param_1,ObservedObject param_2,undefined8 param_3,Wrapper param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ControlSize CVar4;
  Wrapper WVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  Binding<bool> local_68;
  
  FUN_10000c0ec(0);
  FUN_100003a00(&DAT_100fa6d00,FUN_10000c0ec,&TargetProtocolConformanceDescriptor_100c233c4);
  WVar5 = SwiftUI::ObservedObject::_get_projectedValue(param_2);
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(param_4);
  _swift_release(WVar5.unknown);
  _swift_release(param_4.unknown);
  SwiftUI::Toggle::_init(local_68);
  puVar6 = &DAT_100fa9548;
  FUN_1000037f0(&DAT_100fa9548,&DAT_100c26610);
  iVar2 = *(int *)(puVar6 + 0x24);
  puVar6 = &DAT_100fa7208;
  FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
  iVar3 = *(int *)(puVar6 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_mini_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa600
  ;
  CVar4 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar4.value) + -8) + 0x68))
            (param_1 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,CVar4.value));
  puVar6 = &DAT_100c27638;
  _swift_getKeyPath();
  *(undefined **)(param_1 + iVar2) = puVar6;
  return;
}



/* Address: 0x10007fc1c | FUN_10007fc1c */

void FUN_10007fc1c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0xc0,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 200);
  uVar3 = *(undefined8 *)(lVar1 + 0xc0);
  uStack_78 = *(undefined8 *)(lVar1 + 0xd8);
  uVar6 = *(undefined8 *)(lVar1 + 0xd0);
  uStack_68 = *(undefined8 *)(lVar1 + 0xe8);
  uVar4 = *(undefined8 *)(lVar1 + 0xe0);
  uVar2 = *(undefined8 *)(lVar1 + 0xf0);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10007fd04 | FUN_10007fd04 */

void FUN_10007fd04(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  local_31 = uVar1;
  _swift_retain(uVar2);
  FUN_1002cb5a0(&local_31,uVar2,param_5,param_6);
  return;
}



/* Address: 0x10007fd70 | FUN_10007fd70 */

void FUN_10007fd70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  long extraout_x8;
  String SVar5;
  String SVar6;
  String SVar7;
  char *local_70;
  char *local_68;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1001e0f54(LVar1.unknown);
  SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
  pvVar4 = SVar5.bridgeObject;
  local_68 = SVar5.str;
  FUN_1001e0dd4(LVar1.unknown);
  SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
  local_70 = SVar5.str;
  puVar2 = &DAT_100eb3038;
  _swift_allocObject(&DAT_100eb3038,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _swift_retain(param_3);
  FUN_1001e0c54(LVar1.unknown);
  SVar6 = (extension_Foundation)::Swift::String::init(LVar1);
  FUN_1001e0ad4(LVar1.unknown);
  SVar7 = (extension_Foundation)::Swift::String::init(LVar1);
  puVar3 = &DAT_100eb3060;
  _swift_allocObject(&DAT_100eb3060,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *param_1 = local_68;
  param_1[1] = pvVar4;
  param_1[2] = local_70;
  param_1[3] = SVar5.bridgeObject;
  param_1[4] = FUN_10008245c;
  param_1[5] = puVar2;
  param_1[6] = 0x3fe0000000000000;
  *(String *)(param_1 + 7) = SVar6;
  *(String *)(param_1 + 9) = SVar7;
  param_1[0xb] = FUN_100082484;
  param_1[0xc] = puVar3;
  _swift_retain(param_3);
  _swift_bridgeObjectRetain(pvVar4);
  _swift_bridgeObjectRetain(SVar5.bridgeObject);
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(pvVar4);
  return;
}



/* Address: 0x10007fee4 | FUN_10007fee4 */

void FUN_10007fee4(byte *param_1,long *param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x50,auStack_b0,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x58);
  puVar3 = *(undefined8 **)(lVar1 + 0x50);
  uStack_78 = *(undefined8 *)(lVar1 + 0x68);
  uVar6 = *(undefined8 *)(lVar1 + 0x60);
  uStack_68 = *(undefined8 *)(lVar1 + 0x78);
  uVar4 = *(undefined8 *)(lVar1 + 0x70);
  uVar2 = *(undefined8 *)(lVar1 + 0x80);
  local_90 = puVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(puVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fa6a88,&DAT_100c234f0);
  FUN_1002ca7e0(&local_98);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release();
  (*param_5)();
  uVar2 = *puVar3;
  uVar4 = puVar3[1];
  _swift_bridgeObjectRetain(uVar4);
  FUN_100052458(uVar2,uVar4,local_98);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(local_98);
  *param_1 = (byte)uVar2 & 1;
  return;
}



/* Address: 0x100080010 | FUN_100080010 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100080010(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Alignment param_5)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  SortOrder SVar6;
  undefined *puVar7;
  undefined *puVar8;
  LocalizedStringResource LVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  Wrapper WVar16;
  Wrapper dynamicMember;
  PlainListStyle PVar17;
  char *pcVar18;
  Text TVar19;
  Text TVar20;
  Alignment AVar21;
  Divider DVar22;
  VerticalAlignment VVar23;
  ObservedObject OVar24;
  Color CVar25;
  ID *pIVar26;
  NSColor *nsColor;
  Set SVar27;
  Text TVar28;
  char *pcVar29;
  long extraout_x8;
  undefined8 *puVar30;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar31;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined **ppuVar32;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long lVar33;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar34;
  undefined *puVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [8];
  undefined8 uStack_390;
  undefined1 auStack_388 [8];
  undefined8 auStack_380 [2];
  undefined *puStack_370;
  long local_368;
  long local_360;
  long local_358;
  long local_350;
  long local_348;
  long local_340;
  undefined **local_338;
  undefined8 *local_330;
  undefined8 local_328;
  undefined *local_320;
  undefined *local_318;
  undefined *local_310;
  undefined *local_308;
  undefined *local_300;
  undefined *local_2f8;
  MainActor *local_2f0;
  long local_2e8;
  long local_2e0;
  undefined *local_2d8;
  undefined8 *local_2d0;
  long local_2c8;
  long local_2c0;
  ObservedObject local_2b8;
  long local_2b0;
  long local_2a8;
  undefined *local_2a0;
  undefined **ppuStack_298;
  undefined *local_290;
  undefined *puStack_288;
  undefined *local_210;
  undefined **ppuStack_208;
  undefined **local_200;
  char *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  String local_178;
  undefined1 local_168;
  undefined7 uStack_167;
  char *pcStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  puVar7 = &DAT_100fa9e68;
  local_2c8 = param_1;
  local_2b8.unknown = (undefined *)param_2;
  FUN_1000037f0(&DAT_100fa9e68,&DAT_100c273a8);
  local_2d8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar33 = (long)&puStack_370 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_2c0 = lVar33;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar30 = (undefined8 *)(lVar33 - extraout_x12);
  puVar7 = &DAT_100fa9e70;
  local_2d0 = puVar30;
  FUN_1000037f0(&DAT_100fa9e70,&DAT_100c273b0);
  local_2f8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar33 = (long)puVar30 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_2e0 = lVar33;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar33 = lVar33 - extraout_x12_00;
  local_2a8 = lVar33;
  local_310 = (undefined *)SwiftUI::PlainListStyle::typeMetadataAccessor();
  local_348 = *(long *)(local_310 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_348 + 0x40));
  lVar33 = lVar33 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fa9e78;
  local_358 = lVar33;
  FUN_1000037f0(&DAT_100fa9e78,&DAT_100c273b8);
  lVar31 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar31 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar35 = (undefined *)(lVar33 - extraout_x8_02);
  puVar8 = &DAT_100fa9e80;
  FUN_1000037f0(&DAT_100fa9e80,&DAT_100c273c0);
  local_318 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fa9e88;
  local_360 = (long)puVar35 - extraout_x8_03;
  FUN_1000037f0(&DAT_100fa9e88,&DAT_100c273c8);
  local_340 = *(long *)(puVar8 + -8);
  local_308 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_340 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar33 = ((long)puVar35 - extraout_x8_03) - extraout_x8_04;
  puVar8 = &DAT_100fa9e90;
  local_350 = lVar33;
  FUN_1000037f0(&DAT_100fa9e90,&DAT_100c273d0);
  lVar36 = *(long *)(puVar8 + -8);
  local_300 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar36 + 0x40) + 0xfU & 0xfffffffffffffff0);
  ppuVar32 = (undefined **)(lVar33 - extraout_x8_05);
  puVar8 = &DAT_100fa9e98;
  local_338 = ppuVar32;
  FUN_1000037f0(&DAT_100fa9e98,&DAT_100c273d8);
  local_320 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar30 = (undefined8 *)((long)ppuVar32 - extraout_x8_06);
  local_330 = puVar30;
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar9.unknown = (undefined *)((long)puVar30 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  puVar8 = &DAT_100fa9ea0;
  FUN_1000037f0(&DAT_100fa9ea0,&DAT_100c273e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar33 = (long)LVar9.unknown - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0);
  local_2e8 = lVar33;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar33 = lVar33 - extraout_x12_01;
  local_2b0 = lVar33;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar30 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_2f0 = pMVar10;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    param_5.unknown = (undefined *)0x43;
    _swift_task_reportUnexpectedExecutor
              ("Paste/PrivacySettingsView.swift",0x1f,1,0x43,UVar11.unknown,puVar30);
  }
  puVar8 = &DAT_100c273e8;
  _swift_getKeyPath(&DAT_100c273e8);
  puVar13 = &DAT_100c27410;
  _swift_getKeyPath(&DAT_100c27410);
  Combine::Published::_get_subscript(&local_178,param_3,puVar8,puVar13);
  _swift_release(puVar8);
  _swift_release(puVar13);
  lVar34 = *(long *)(local_178.str + 0x10);
  _swift_bridgeObjectRelease();
  local_328 = param_3;
  if (lVar34 == 0) {
    FUN_1001e0654(LVar9.unknown);
    local_178 = (extension_Foundation)::Swift::String::init(LVar9);
    pcVar18 = local_178.str;
    FUN_100008378();
    puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar19 = SwiftUI::Text::_init();
    CVar25 = SwiftUI::Color::get_secondary(TVar19.unknown);
    TVar28 = TVar19;
    puVar8 = puVar7;
    pcVar29 = pcVar18;
    TVar20 = SwiftUI::Text::_foregroundColor(CVar25.unknown);
    local_338 = (undefined **)TVar28.unknown;
    _swift_release(CVar25.unknown);
    FUN_100016d74(TVar19.unknown,puVar7,pcVar18);
    _swift_bridgeObjectRelease();
    AVar21 = SwiftUI::Alignment::get_center(param_5);
    *(undefined **)(lVar33 + -0x10) = AVar21.unknown;
    *(undefined **)(lVar33 + -8) = puVar7;
    *(undefined1 *)(lVar33 + -0x18) = 1;
    *(undefined8 *)(lVar33 + -0x20) = 0;
    *(undefined1 *)(lVar33 + -0x28) = 1;
    *(undefined8 *)(lVar33 + -0x30) = 0;
    SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
    uStack_1a8 = uStack_a0;
    local_1b0 = local_a8;
    uStack_198 = uStack_90;
    uStack_1a0 = local_98;
    uStack_188 = uStack_80;
    local_190 = local_88;
    uStack_1e8 = uStack_e0;
    local_1f0 = local_e8;
    uStack_1d8 = uStack_d0;
    uStack_1e0 = local_d8;
    uStack_1c8 = uStack_c0;
    local_1d0 = local_c8;
    uStack_1b8 = uStack_b0;
    uStack_1c0 = local_b8;
    uStack_110 = uStack_a0;
    local_118 = local_a8;
    uStack_100 = uStack_90;
    local_108 = local_98;
    uStack_f0 = uStack_80;
    local_f8 = local_88;
    uStack_150 = uStack_e0;
    local_158 = local_e8;
    uStack_140 = uStack_d0;
    local_148 = local_d8;
    ppuStack_208 = local_338;
    local_168 = SUB81(puVar8,0);
    local_200 = (undefined **)CONCAT71(local_200._1_7_,local_168);
    local_178.bridgeObject = local_338;
    local_178.str = TVar20.unknown;
    uStack_120 = uStack_b0;
    local_128 = local_b8;
    uStack_130 = uStack_c0;
    local_138 = local_c8;
    puVar7 = &DAT_100fa7210;
    local_210 = TVar20.unknown;
    local_1f8 = pcVar29;
    pcStack_160 = pcVar29;
    FUN_100011090(&local_210,&local_2a0,&DAT_100fa7210,&DAT_100c24050);
    FUN_100005808(&local_178,&DAT_100fa7210,&DAT_100c24050);
    uVar5 = uStack_198;
    uVar4 = uStack_1a0;
    uVar37 = local_1b0;
    puVar3 = local_330;
    local_330[0xd] = uStack_1a8;
    local_330[0xc] = uVar37;
    local_330[0xf] = uVar5;
    local_330[0xe] = uVar4;
    uVar37 = local_190;
    local_330[0x11] = uStack_188;
    local_330[0x10] = uVar37;
    uVar5 = uStack_1d8;
    uVar4 = uStack_1e0;
    uVar37 = local_1f0;
    puVar30 = local_330 + 4;
    local_330[5] = uStack_1e8;
    *puVar30 = uVar37;
    puVar3[7] = uVar5;
    puVar3[6] = uVar4;
    uVar5 = uStack_1b8;
    uVar4 = uStack_1c0;
    uVar37 = local_1d0;
    puVar3[9] = uStack_1c8;
    puVar3[8] = uVar37;
    puVar3[0xb] = uVar5;
    puVar3[10] = uVar4;
    pcVar29 = local_1f8;
    ppuVar32 = local_200;
    puVar8 = local_210;
    puVar3[1] = ppuStack_208;
    *puVar3 = puVar8;
    puVar3[3] = pcVar29;
    puVar3[2] = ppuVar32;
    _swift_storeEnumTagMultiPayload(puVar3,local_320,0);
    FUN_1000037f0(&DAT_100fa7210,&DAT_100c24050);
    FUN_1000821a0();
    FUN_100082024();
    local_2a0 = local_318;
    ppuStack_298 = (undefined **)local_310;
    puStack_288 = 
    PTR___protocol_witness_table_for_SwiftUI_PlainListStyle___SwiftUI_ListStyle_in_SwiftUI_100eaa878
    ;
    ppuVar32 = &local_2a0;
    local_290 = puVar7;
    _swift_getOpaqueTypeConformance2
              (ppuVar32,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_listStyle<A_where_A1:_SwiftUI_ListStyle>(A1)__>_some>>_100eab638
               ,1);
    local_2a0 = local_308;
    ppuStack_298 = ppuVar32;
    _swift_getOpaqueTypeConformance2
              (&local_2a0,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onDeleteCommand(perform:_(()__>_())_)__>_some>>_100eab480
               ,1);
    lVar33 = local_2b0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar3);
    OVar24.unknown = local_2b8.unknown;
  }
  else {
    puVar8 = &DAT_100c273e8;
    _swift_getKeyPath(&DAT_100c273e8);
    puVar13 = &DAT_100c27410;
    _swift_getKeyPath(&DAT_100c27410);
    Combine::Published::_get_subscript(&local_178,param_3,puVar8,puVar13);
    _swift_release(puVar8);
    _swift_release(puVar13);
    pcVar29 = local_178.str;
    SVar6.value = 0x30;
    _swift_getKeyPath();
    Foundation::KeyPathComparator::_init(SVar6);
    puVar8 = &DAT_100fa69b0;
    FUN_1000037f0(&DAT_100fa69b0,&DAT_100c27450);
    puVar13 = &DAT_100fa9ea8;
    local_368 = lVar36;
    FUN_100016eac(&DAT_100fa9ea8,&DAT_100fa69b0,&DAT_100c27450,
                  PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0);
    puVar14 = &DAT_100fa9eb0;
    FUN_100016eac(&DAT_100fa9eb0,&DAT_100fa9e78,&DAT_100c273b8,
                  PTR_Foundation__Foundation__KeyPathComparator<undefined>_>Foundation__SortComparator_100ea6ec0
                 );
    puVar15 = puVar35;
    (extension_Foundation)::Swift::Sequence::_sorted(puVar35,puVar8,puVar7,puVar13,puVar14);
    (**(code **)(lVar31 + 8))(puVar35,puVar7);
    _swift_bridgeObjectRelease(pcVar29);
    FUN_10000c0ec(0);
    FUN_100003a00(&DAT_100fa6d00,FUN_10000c0ec,&TargetProtocolConformanceDescriptor_100c233c4);
    WVar16 = SwiftUI::ObservedObject::_get_projectedValue(local_2b8);
    dynamicMember.unknown = &DAT_100c27458;
    _swift_getKeyPath();
    SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
    _swift_release(WVar16.unknown);
    _swift_release(dynamicMember.unknown);
    local_200 = &local_2a0;
    puVar7 = &DAT_100fa9eb8;
    local_2a0 = puVar15;
    FUN_1000037f0(&DAT_100fa9eb8,&DAT_100c27480);
    FUN_1000767d8();
    FUN_100081edc();
    *(undefined **)(lVar33 + -0x10) = puVar7;
    lVar33 = local_360;
    SwiftUI::List::_init();
    _swift_bridgeObjectRelease(puVar15);
    puVar7 = &DAT_100c273e8;
    _swift_getKeyPath(&DAT_100c273e8);
    puVar8 = &DAT_100c27410;
    _swift_getKeyPath(&DAT_100c27410);
    Combine::Published::_get_subscript(&local_178,param_3,puVar7,puVar8);
    _swift_release(puVar7);
    _swift_release(puVar8);
    uVar37 = *(undefined8 *)(local_178.str + 0x10);
    AVar21.unknown = local_178.str;
    _swift_bridgeObjectRelease();
    NEON_ucvtf(uVar37);
    SwiftUI::Alignment::get_center(AVar21);
    SwiftUI::_FrameLayout::_init((Alignment)0x0);
    puVar7 = &DAT_100fa9ee8;
    FUN_1000037f0(&DAT_100fa9ee8,&DAT_100c27498);
    lVar31 = local_358;
    puVar30 = (undefined8 *)(lVar33 + *(int *)(puVar7 + 0x24));
    puVar30[1] = local_178.bridgeObject;
    *puVar30 = local_178.str;
    puVar30[3] = pcStack_160;
    puVar30[2] = CONCAT71(uStack_167,local_168);
    puVar30[5] = uStack_150;
    puVar30[4] = local_158;
    PVar17 = SwiftUI::PlainListStyle::init();
    FUN_100082024();
    puVar13 = local_310;
    puVar35 = local_318;
    lVar36 = local_350;
    puVar8 = 
    PTR___protocol_witness_table_for_SwiftUI_PlainListStyle___SwiftUI_ListStyle_in_SwiftUI_100eaa878
    ;
    (extension_SwiftUI)::SwiftUI::View::_listStyle
              (local_350,lVar31,local_318,local_310,PVar17.unknown,
               PTR___protocol_witness_table_for_SwiftUI_PlainListStyle___SwiftUI_ListStyle_in_SwiftUI_100eaa878
              );
    (**(code **)(local_348 + 8))(lVar31,puVar13);
    OVar24.unknown = local_2b8.unknown;
    FUN_100005808(lVar33,&DAT_100fa9e80,&DAT_100c273c0);
    puVar7 = &DAT_100eb2f98;
    _swift_allocObject(&DAT_100eb2f98,0x20,7);
    *(undefined **)(puVar7 + 0x10) = OVar24.unknown;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    _swift_retain(param_3);
    local_210 = puVar35;
    ppuStack_208 = (undefined **)puVar13;
    local_1f8 = puVar8;
    ppuVar32 = &local_210;
    local_200 = (undefined **)PVar17.unknown;
    _swift_getOpaqueTypeConformance2
              (ppuVar32,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_listStyle<A_where_A1:_SwiftUI_ListStyle>(A1)__>_some>>_100eab638
               ,1);
    puVar8 = local_308;
    ppuVar2 = local_338;
    (extension_SwiftUI)::SwiftUI::View::_onDeleteCommand();
    _swift_release(puVar7);
    (**(code **)(local_340 + 8))(lVar36,puVar8);
    puVar7 = local_300;
    puVar30 = local_330;
    lVar31 = local_368;
    (**(code **)(local_368 + 0x10))(local_330,ppuVar2,local_300);
    _swift_storeEnumTagMultiPayload(puVar30,local_320,1);
    FUN_1000037f0(&DAT_100fa7210,&DAT_100c24050);
    FUN_1000821a0();
    local_210 = puVar8;
    ppuStack_208 = ppuVar32;
    _swift_getOpaqueTypeConformance2
              (&local_210,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onDeleteCommand(perform:_(()__>_())_)__>_some>>_100eab480
               ,1);
    lVar33 = local_2b0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar30);
    (**(code **)(lVar31 + 8))(ppuVar2,puVar7);
  }
  lVar36 = local_2a8;
  DVar22 = SwiftUI::Divider::init();
  *(undefined8 *)(lVar36 + *(int *)(local_2f8 + 0x24)) = 0x3fe999999999999a;
  VVar23 = SwiftUI::VerticalAlignment::get_center(DVar22.unknown);
  puVar3 = local_2d0;
  *local_2d0 = VVar23.unknown;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  puVar7 = &DAT_100fa9f18;
  FUN_1000037f0(&DAT_100fa9f18,&DAT_100c274b0);
  FUN_100081264((long)puVar3 + (long)*(int *)(puVar7 + 0x2c),OVar24.unknown,local_328);
  FUN_1001fe19c();
  CVar25 = SwiftUI::Color::init(*(NSColor **)OVar24.unknown);
  puVar7 = &DAT_100c274b8;
  _swift_getKeyPath();
  pIVar26 = (ID *)&DAT_100fa9f20;
  FUN_1000037f0(&DAT_100fa9f20,&DAT_100c274e8);
  puVar30 = (undefined8 *)((long)puVar3 + (long)*(int *)((long)pIVar26 + 0x24));
  *puVar30 = puVar7;
  puVar30[1] = CVar25.unknown;
  FUN_1001fe4c8();
  nsColor = (NSColor *)objc_stub::colorWithAlphaComponent_(*pIVar26,0x3fb999999999999a);
  CVar25 = SwiftUI::Color::init(nsColor);
  SVar27 = SwiftUI::Edge::Set::get_all(CVar25.unknown);
  lVar31 = local_2e8;
  iVar1 = *(int *)(local_2d8 + 0x24);
  *(undefined8 *)((long)puVar3 + (long)iVar1) = CVar25.unknown;
  *(char *)((undefined8 *)((long)puVar3 + (long)iVar1) + 1) = (char)SVar27.unknown;
  FUN_100011090(lVar33,local_2e8,&DAT_100fa9ea0,&DAT_100c273e0);
  lVar33 = local_2e0;
  FUN_100011090(lVar36,local_2e0,&DAT_100fa9e70,&DAT_100c273b0);
  lVar34 = local_2c0;
  FUN_100011090(puVar3,local_2c0,&DAT_100fa9e68,&DAT_100c273a8);
  lVar36 = local_2c8;
  FUN_100011090(lVar31,local_2c8,&DAT_100fa9ea0,&DAT_100c273e0);
  puVar7 = &DAT_100fa9f28;
  FUN_1000037f0(&DAT_100fa9f28,&DAT_100c274f0);
  FUN_100011090(lVar33,lVar36 + *(int *)(puVar7 + 0x30),&DAT_100fa9e70,&DAT_100c273b0);
  FUN_100011090(lVar34,lVar36 + *(int *)(puVar7 + 0x40),&DAT_100fa9e68,&DAT_100c273a8);
  FUN_100005808(puVar3,&DAT_100fa9e68,&DAT_100c273a8);
  FUN_100005808(local_2a8,&DAT_100fa9e70,&DAT_100c273b0);
  FUN_100005808(local_2b0,&DAT_100fa9ea0,&DAT_100c273e0);
  FUN_100005808(lVar34,&DAT_100fa9e68,&DAT_100c273a8);
  FUN_100005808(lVar33,&DAT_100fa9e70,&DAT_100c273b0);
  FUN_100005808(lVar31,&DAT_100fa9ea0,&DAT_100c273e0);
  _swift_release(local_2f0);
  return;
}



/* Address: 0x100080d38 | FUN_100080d38 */

void FUN_100080d38(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c27458;
  _swift_getKeyPath(&DAT_100c27458);
  puVar2 = &DAT_100c27548;
  _swift_getKeyPath(&DAT_100c27548);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100080da0 | FUN_100080da0 */

void FUN_100080da0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c27458;
  _swift_getKeyPath(&DAT_100c27458);
  puVar2 = &DAT_100c27548;
  _swift_getKeyPath(&DAT_100c27548);
  local_38 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x100080e18 | FUN_100080e18 */

void FUN_100080e18(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  undefined1 auStack_260 [80];
  undefined *local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 local_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 local_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uStack_78 = param_2[1];
  local_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  local_60 = param_2[4];
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/PrivacySettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/PrivacySettingsView.swift",0x1f,1,0x4d,UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_100081008(&local_d0,&local_80);
  uStack_1b8 = 0;
  local_1b0 = 1;
  local_1a8 = local_d0;
  local_1a0 = uStack_c8;
  uStack_198 = local_c0;
  local_190 = local_b8._0_1_;
  local_188 = (undefined1)local_b0;
  uStack_187 = (undefined7)((ulong)local_b0 >> 8);
  uStack_180 = (undefined1)uStack_a8;
  uStack_17f = (undefined7)((ulong)uStack_a8 >> 8);
  uStack_178 = (undefined1)local_a0;
  uStack_200 = CONCAT71(uStack_1af,1);
  uStack_1cf = CONCAT17((undefined1)local_a0,uStack_17f);
  uStack_1d0 = uStack_180;
  uStack_1e0 = CONCAT71(uStack_18f,local_b8._0_1_);
  uStack_1e8 = local_c0;
  local_1f0 = uStack_c8;
  uStack_208 = 0;
  puStack_1f8 = local_d0;
  uStack_168 = 0;
  local_160 = 1;
  local_158 = local_d0;
  uStack_150 = uStack_c8;
  local_148 = local_c0;
  local_140 = local_b8._0_1_;
  local_138 = local_b0;
  uStack_130 = uStack_a8;
  local_128 = (undefined1)local_a0;
  local_210 = VVar6.unknown;
  uStack_1d8 = local_188;
  local_1d7 = uStack_187;
  local_1c0 = VVar6.unknown;
  local_170 = VVar6.unknown;
  FUN_100011090(&local_1c0,&local_d0,&DAT_100fa93a0,&DAT_100c262e0);
  FUN_100005808(&local_170,&DAT_100fa93a0,&DAT_100c262e0);
  uStack_f8 = uStack_1e8;
  local_100 = local_1f0;
  uStack_e8 = uStack_1d8;
  uStack_f0 = uStack_1e0;
  uStack_df = uStack_1cf;
  local_e7 = local_1d7;
  uStack_e0 = uStack_1d0;
  uStack_118 = uStack_208;
  local_120 = local_210;
  puStack_108 = puStack_1f8;
  uStack_110 = uStack_200;
  uStack_a8 = uStack_1e8;
  local_b0 = local_1f0;
  uStack_98 = uStack_1d8;
  local_a0 = uStack_1e0;
  uStack_8f = uStack_1cf;
  local_97 = local_1d7;
  uStack_90 = uStack_1d0;
  uStack_c8 = uStack_208;
  local_d0 = local_210;
  local_b8 = puStack_1f8;
  local_c0 = uStack_200;
  FUN_100011090(&local_120,auStack_260,&DAT_100fa9ed0,&DAT_100c27488);
  FUN_100005808(&local_d0,&DAT_100fa9ed0,&DAT_100c27488);
  _swift_release(pMVar2);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = CONCAT71(local_e7,uStack_e8);
  param_1[6] = uStack_f0;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_df;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_e0,local_e7);
  param_1[1] = uStack_118;
  *param_1 = local_120;
  param_1[3] = puStack_108;
  param_1[2] = uStack_110;
  return;
}



/* Address: 0x100081008 | FUN_100081008 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100081008(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID self;
  NSString *pNVar6;
  NSImage *nsImage;
  Image IVar7;
  Image IVar8;
  Text TVar9;
  undefined *puVar10;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    param_5 = 0x4e;
    _swift_task_reportUnexpectedExecutor
              ("Paste/PrivacySettingsView.swift",0x1f,1,0x4e,UVar4.unknown,puVar3);
  }
  self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  nsImage = (NSImage *)NSWorkspace::iconForFile_(self,pNVar6);
  IVar7 = SwiftUI::Image::init(nsImage);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  IVar8 = IVar7;
  FUN_100008378();
  _swift_bridgeObjectRetain(uVar1);
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar9 = SwiftUI::Text::_init();
  *param_1 = IVar7.unknown;
  param_1[1] = TVar9.unknown;
  param_1[2] = puVar10;
  *(char *)(param_1 + 3) = (char)IVar8.unknown;
  param_1[4] = param_5;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  _swift_retain(IVar7.unknown);
  FUN_100016d5c(TVar9.unknown,puVar10,IVar8.unknown);
  _swift_bridgeObjectRetain(param_5);
  FUN_100016d74(TVar9.unknown,puVar10,IVar8.unknown);
  _swift_release(pMVar2);
  _swift_release(IVar7.unknown);
  _swift_bridgeObjectRelease(param_5);
  return;
}



/* Address: 0x1000811b4 | FUN_1000811b4 */

void FUN_1000811b4(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PrivacySettingsView.swift",0x1f,1,0x58,UVar4.unknown,puVar3);
  }
  FUN_10000bc58();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100081264 | FUN_100081264 */

void FUN_100081264(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  MainActor *pMVar11;
  undefined8 *puVar12;
  UnownedSerialExecutor UVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined *puVar16;
  Divider DVar17;
  Set _all;
  long extraout_x8;
  long lVar18;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar20;
  long lVar21;
  undefined8 uVar22;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  long local_130;
  long local_128;
  code *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  MainActor *local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  
  puVar10 = &DAT_100fa9f30;
  local_d0 = param_1;
  FUN_1000037f0(&DAT_100fa9f30,&DAT_100c274f8);
  local_f0 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar18 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12;
  puVar10 = &DAT_100fa9f38;
  local_e0 = lVar18;
  FUN_1000037f0(&DAT_100fa9f38,&DAT_100c27500);
  local_118 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar18 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12_00;
  local_c0 = lVar18;
  local_108 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_120 = *(code **)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_120 + 0x40));
  lVar18 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100fa9f40;
  FUN_1000037f0(&DAT_100fa9f40,&DAT_100c27508);
  local_128 = *(long *)(puVar10 + -8);
  local_110 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar21 = lVar18 - extraout_x8_02;
  puVar10 = &DAT_100fa9f48;
  FUN_1000037f0(&DAT_100fa9f48,&DAT_100c27510);
  local_b8 = *(long *)(puVar10 + -8);
  local_e8 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b8 + 0x40));
  lVar19 = lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12_01;
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar11 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar12 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_100 = pMVar11;
  UVar13 = Swift::Actor::get_unownedExecutor();
  pcVar14 = (char *)UVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar14 & 1) == 0) {
    pcVar14 = "Paste/PrivacySettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/PrivacySettingsView.swift",0x1f,1,0x5e,UVar13.unknown,puVar12);
  }
  FUN_10020d734();
  uVar22 = *(undefined8 *)pcVar14;
  uVar2 = *(undefined8 *)(pcVar14 + 8);
  puVar10 = &DAT_100eb2fc0;
  _swift_allocObject(&DAT_100eb2fc0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = param_6;
  *(undefined8 *)(puVar10 + 0x18) = param_7;
  local_a0 = uVar22;
  uStack_98 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(param_7);
  _swift_retain(puVar10);
  puVar15 = &DAT_100fa9f50;
  FUN_1000037f0(&DAT_100fa9f50,&DAT_100c27518);
  local_138 = puVar15;
  FUN_100082240();
  local_140 = puVar15;
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar15 = &DAT_100fa9f80;
  FUN_100016eac(&DAT_100fa9f80,&DAT_100fa9f40,&DAT_100c27508,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar16 = &DAT_100fa7200;
  local_148 = puVar15;
  FUN_100003a00(&DAT_100fa7200,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  puVar5 = local_108;
  puVar4 = local_110;
  local_150 = puVar16;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar19,lVar18,local_110,local_108,puVar15,puVar16);
  _swift_release(puVar10);
  _swift_bridgeObjectRelease(uVar2);
  local_120 = *(code **)((long)local_120 + 8);
  local_130 = lVar19;
  (*local_120)(lVar18,puVar5);
  pcVar20 = *(code **)(local_128 + 8);
  (*pcVar20)(lVar21,puVar4);
  lVar19 = local_c0;
  DVar17 = SwiftUI::Divider::init();
  _all = SwiftUI::Edge::Set::get_vertical(DVar17.unknown);
  uVar22 = 0x4010000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar12 = (undefined8 *)&DAT_100fa9f88;
  FUN_1000037f0(&DAT_100fa9f88,&DAT_100c27540);
  puVar1 = (undefined1 *)(lVar19 + *(int *)((long)puVar12 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar22;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  *(undefined8 *)(lVar19 + *(int *)(local_118 + 0x24)) = 0x3fe999999999999a;
  FUN_10020d4b4();
  uVar22 = *puVar12;
  uVar2 = puVar12[1];
  puVar10 = &DAT_100eb2fe8;
  _swift_allocObject(&DAT_100eb2fe8,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = param_6;
  *(undefined8 *)(puVar10 + 0x18) = param_7;
  local_a0 = uVar22;
  uStack_98 = uVar2;
  _swift_retain(param_7);
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(puVar10);
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  lVar6 = local_e0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_e0,lVar18,puVar4,puVar5,local_148,local_150);
  _swift_release(puVar10);
  _swift_bridgeObjectRelease(uVar2);
  (*local_120)(lVar18,puVar5);
  (*pcVar20)(lVar21,puVar4);
  puVar10 = &DAT_100c27458;
  _swift_getKeyPath(&DAT_100c27458);
  puVar15 = &DAT_100c27548;
  _swift_getKeyPath(&DAT_100c27548);
  Combine::Published::_get_subscript(local_b0,param_7,puVar10,puVar15);
  _swift_release(puVar10);
  _swift_release(puVar15);
  lVar21 = *(long *)(local_b0[0] + 0x10);
  _swift_bridgeObjectRelease();
  puVar10 = &DAT_100c27568;
  _swift_getKeyPath();
  puVar15 = &DAT_100eb3010;
  _swift_allocObject(&DAT_100eb3010,0x11,7);
  puVar16 = local_e8;
  lVar19 = local_f8;
  lVar18 = local_130;
  puVar15[0x10] = lVar21 == 0;
  puVar12 = (undefined8 *)(lVar6 + *(int *)(local_f0 + 0x24));
  *puVar12 = puVar10;
  puVar12[1] = FUN_100082388;
  puVar12[2] = puVar15;
  pcVar20 = *(code **)(local_b8 + 0x10);
  (*pcVar20)(local_f8,local_130,local_e8);
  lVar9 = local_c0;
  lVar21 = local_d8;
  FUN_100011090(local_c0,local_d8,&DAT_100fa9f38,&DAT_100c27500);
  lVar8 = local_c8;
  FUN_100011090(lVar6,local_c8,&DAT_100fa9f30,&DAT_100c274f8);
  lVar7 = local_d0;
  (*pcVar20)(local_d0,lVar19,puVar16);
  puVar10 = &DAT_100fa9f90;
  FUN_1000037f0(&DAT_100fa9f90,&DAT_100c27598);
  FUN_100011090(lVar21,lVar7 + *(int *)(puVar10 + 0x30),&DAT_100fa9f38,&DAT_100c27500);
  FUN_100011090(lVar8,lVar7 + *(int *)(puVar10 + 0x40),&DAT_100fa9f30,&DAT_100c274f8);
  iVar3 = *(int *)(puVar10 + 0x50);
  *(undefined8 *)(lVar7 + iVar3) = 0;
  *(undefined1 *)((undefined8 *)(lVar7 + iVar3) + 1) = 1;
  FUN_100005808(lVar6,&DAT_100fa9f30,&DAT_100c274f8);
  FUN_100005808(lVar9,&DAT_100fa9f38,&DAT_100c27500);
  pcVar20 = *(code **)(local_b8 + 8);
  (*pcVar20)(lVar18,puVar16);
  FUN_100005808(lVar8,&DAT_100fa9f30,&DAT_100c274f8);
  FUN_100005808(lVar21,&DAT_100fa9f38,&DAT_100c27500);
  (*pcVar20)(lVar19,puVar16);
  _swift_release(local_100);
  return;
}



/* Address: 0x1000819b4 | FUN_1000819b4 */

void FUN_1000819b4(undefined8 *param_1,char *param_2,Font param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Image IVar6;
  Font FVar7;
  Font FVar8;
  Alignment AVar9;
  String systemName;
  undefined1 auStack_220 [80];
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined *local_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PrivacySettingsView.swift",0x1f,1,0x73,UVar4.unknown,puVar3);
  }
  _swift_bridgeObjectRetain(param_3.unknown);
  systemName.bridgeObject = param_3.unknown;
  systemName.str = param_2;
  IVar6 = SwiftUI::Image::init(systemName);
  FVar7 = SwiftUI::Font::get_callout(IVar6.unknown);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar7.unknown);
  FVar8 = SwiftUI::Font::weight(FVar7.unknown,param_3);
  _swift_release(FVar7.unknown);
  AVar9.unknown = &DAT_100c275a0;
  _swift_getKeyPath();
  SwiftUI::Alignment::get_center(AVar9);
  SwiftUI::_FrameLayout::_init((Alignment)0x4038000000000000);
  uStack_160 = puStack_e8;
  local_168 = local_f0;
  uStack_150 = puStack_d8;
  local_158 = puStack_e0;
  uStack_140 = uStack_c8;
  local_148 = local_d0;
  puStack_1b8 = local_f0;
  uStack_1a8 = puStack_e0;
  local_1b0 = puStack_e8;
  uStack_198 = local_d0;
  uStack_1a0 = puStack_d8;
  local_190 = uStack_c8;
  uStack_108 = puStack_d8;
  local_110 = puStack_e0;
  uStack_f8 = uStack_c8;
  uStack_100 = local_d0;
  uStack_118 = puStack_e8;
  local_120 = local_f0;
  local_1d0 = IVar6.unknown;
  puStack_1c8 = AVar9.unknown;
  puStack_1c0 = FVar8.unknown;
  local_180 = IVar6.unknown;
  puStack_178 = AVar9.unknown;
  local_170 = FVar8.unknown;
  local_138 = IVar6.unknown;
  puStack_130 = AVar9.unknown;
  local_128 = FVar8.unknown;
  FUN_100011090(&local_180,&local_a0,&DAT_100fa9f68,&DAT_100c27520);
  FUN_100005808(&local_138,&DAT_100fa9f68,&DAT_100c27520);
  uStack_c8 = uStack_1a8;
  local_d0 = local_1b0;
  uStack_b8 = (undefined1)uStack_198;
  local_b7 = (undefined7)((ulong)uStack_198 >> 8);
  uStack_c0 = uStack_1a0;
  uStack_b0 = (undefined1)local_190;
  uStack_af = (undefined7)((ulong)local_190 >> 8);
  puStack_e8 = puStack_1c8;
  local_f0 = local_1d0;
  puStack_d8 = puStack_1b8;
  puStack_e0 = puStack_1c0;
  uStack_a8 = 0;
  uStack_78 = uStack_1a8;
  local_80 = local_1b0;
  uStack_68 = uStack_198;
  uStack_70 = uStack_1a0;
  local_60 = local_190;
  puStack_98 = puStack_1c8;
  local_a0 = local_1d0;
  puStack_88 = puStack_1b8;
  puStack_90 = puStack_1c0;
  local_58 = 0;
  FUN_100011090(&local_f0,auStack_220,&DAT_100fa9f50,&DAT_100c27518);
  FUN_100005808(&local_a0,&DAT_100fa9f50,&DAT_100c27518);
  _swift_release(pMVar2);
  param_1[5] = uStack_c8;
  param_1[4] = local_d0;
  param_1[7] = CONCAT71(local_b7,uStack_b8);
  param_1[6] = uStack_c0;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_a8,uStack_af);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_b0,local_b7);
  param_1[1] = puStack_e8;
  *param_1 = local_f0;
  param_1[3] = puStack_d8;
  param_1[2] = puStack_e0;
  return;
}



/* Address: 0x100081bdc | FUN_100081bdc */

void FUN_100081bdc(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  HVar3 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar3.unknown;
  param_1[1] = 0x4034000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100fa9e10;
  FUN_1000037f0(&DAT_100fa9e10,&DAT_100c27358);
  FUN_10007ee40((long)param_1 + (long)*(int *)(puVar4 + 0x2c),uVar1,uVar2);
  return;
}



/* Address: 0x100081c3c | FUN_100081c3c */

void FUN_100081c3c(Set param_1)

{
  Set edges;
  
  edges = SwiftUI::VerticalEdge::Set::get_all(param_1);
  FUN_1000037f0(&DAT_100fa9fc0,&DAT_100c277f8);
  FUN_100016eac(&DAT_100fa9fc8,&DAT_100fa9fc0,&DAT_100c277f8,
                PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8);
  (extension_SwiftUI)::SwiftUI::View::_listRowSeparator((Visibility)0x1,edges);
  return;
}



/* Address: 0x100081cc8 | FUN_100081cc8 */

void FUN_100081cc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  undefined *local_60;
  undefined *puStack_58;
  
  puVar1 = &DAT_100fa9fd0;
  FUN_1000037f0(&DAT_100fa9fd0,&DAT_100c27800);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa9fd8;
  FUN_1000037f0(&DAT_100fa9fd8,&DAT_100c27808);
  puVar3 = &DAT_100fa9fe0;
  FUN_100016eac(&DAT_100fa9fe0,&DAT_100fa9fd8,&DAT_100c27808,
                PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8);
  (extension_SwiftUI)::SwiftUI::View::_scrollContentBackground((Visibility)0x2);
  local_60 = puVar2;
  puStack_58 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_60,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_scrollContentBackground(SwiftUI_Visibility)__>_some>>_100eab510
             ,1);
  (extension_SwiftUI)::SwiftUI::View::_scrollDisabled(true);
  (**(code **)(lVar4 + 8))((long)&local_60 - extraout_x8,puVar1);
  return;
}



/* Address: 0x100081ddc | thunk_FUN_10000c744 */

void thunk_FUN_10000c744(void)

{
  FUN_10000c744();
  return;
}



/* Address: 0x100081de0 | thunk_FUN_10000c7ac */

void thunk_FUN_10000c7ac(void)

{
  FUN_10000c7ac();
  return;
}



/* Address: 0x100081de4 | thunk_FUN_100080d38 */

void thunk_FUN_100080d38(void)

{
  FUN_100080d38();
  return;
}



/* Address: 0x100081de8 | thunk_FUN_100080da0 */

void thunk_FUN_100080da0(void)

{
  FUN_100080da0();
  return;
}



/* Address: 0x100081dec | FUN_100081dec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100081eb8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100081dec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = &DAT_100c275d8;
  _swift_getKeyPath(&DAT_100c275d8);
  _swift_bridgeObjectRetain();
  puVar2 = &DAT_100fa9f98;
  FUN_1000037f0(&DAT_100fa9f98,&DAT_100c275f0);
  puVar3 = &DAT_100fa9ed0;
  FUN_1000037f0(&DAT_100fa9ed0,&DAT_100c27488);
  puVar4 = &DAT_100fa9fa0;
  FUN_100016eac(&DAT_100fa9fa0,&DAT_100fa9f98,&DAT_100c275f0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar5 = puVar4;
  FUN_1000767d8();
  FUN_100081f4c();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar5,puVar1,FUN_100082398,0,puVar2,puVar3,puVar4,puVar5);
  return;
}



/* Address: 0x100081ed4 | FUN_100081ed4 */

void FUN_100081ed4(void)

{
  long unaff_x20;
  
  FUN_100081dec(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100081edc | FUN_100081edc */

void FUN_100081edc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fa9ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9eb8;
  FUN_100005c24(&DAT_100fa9eb8,&DAT_100c27480);
  puVar2 = puVar1;
  FUN_100081f4c();
  puVar3 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08,
             puVar1,&local_28);
  DAT_100fa9ec0 = puVar3;
  return;
}



/* Address: 0x100081f4c | FUN_100081f4c */

void FUN_100081f4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa9ec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9ed0;
  FUN_100005c24(&DAT_100fa9ed0,&DAT_100c27488);
  puVar2 = &DAT_100fa9ed8;
  FUN_100016eac(&DAT_100fa9ed8,&DAT_100fa93a0,&DAT_100c262e0,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puVar3 = puVar2;
  FUN_100081fe4();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa9ec8 = puVar4;
  return;
}



/* Address: 0x100081fe4 | FUN_100081fe4 */

void FUN_100081fe4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa9ee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c277a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c277a8,&DAT_100eb30f8);
  DAT_100fa9ee0 = pTVar1;
  return;
}



/* Address: 0x100082024 | FUN_100082024 */

void FUN_100082024(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa9ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9e80;
  FUN_100005c24(&DAT_100fa9e80,&DAT_100c273c0);
  puVar2 = puVar1;
  FUN_10008209c();
  puVar3 = puVar2;
  FUN_100082134();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa9ef0 = puVar4;
  return;
}



/* Address: 0x10008209c | FUN_10008209c */

void FUN_10008209c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa9ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9ee8;
  FUN_100005c24(&DAT_100fa9ee8,&DAT_100c27498);
  puVar2 = &DAT_100fa9f00;
  FUN_100016eac(&DAT_100fa9f00,&DAT_100fa9f08,&DAT_100c274a0,
                PTR_SwiftUI__SwiftUI__List<undefined,undefined>_>SwiftUI__View_100eab2c8);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa9ef8 = puVar3;
  return;
}



/* Address: 0x100082134 | FUN_100082134 */

void FUN_100082134(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa9f10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c27758;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c27758,&DAT_100eb30d8);
  DAT_100fa9f10 = pTVar1;
  return;
}



/* Address: 0x100082174 | FUN_100082174 */

void FUN_100082174(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100082198 | FUN_100082198 */

void FUN_100082198(void)

{
  long unaff_x20;
  
  FUN_1000811b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000821a0 | FUN_1000821a0 */

void FUN_1000821a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fa7218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7210;
  FUN_100005c24(&DAT_100fa7210,&DAT_100c24050);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fa7218 = puVar2;
  return;
}



/* Address: 0x100082210 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x100082214 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x100082218 | FUN_100082218 */

void FUN_100082218(void)

{
  FUN_10000b134();
  return;
}



/* Address: 0x100082238 | FUN_100082238 */

void FUN_100082238(void)

{
  long unaff_x20;
  
  FUN_1000819b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100082240 | FUN_100082240 */

void FUN_100082240(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa9f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9f50;
  FUN_100005c24(&DAT_100fa9f50,&DAT_100c27518);
  puVar2 = puVar1;
  FUN_1000822d8();
  puVar3 = &DAT_100fa9f70;
  FUN_100016eac(&DAT_100fa9f70,&DAT_100fa9f78,&DAT_100c27538,
                PTR_SwiftUI__SwiftUI___ContentShapeModifier<undefined>_>SwiftUI__ViewModifier_100eaae90
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa9f58 = puVar4;
  return;
}



/* Address: 0x1000822d8 | FUN_1000822d8 */

void FUN_1000822d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa9f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9f68;
  FUN_100005c24(&DAT_100fa9f68,&DAT_100c27520);
  puVar2 = puVar1;
  FUN_1000202f0();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa9f60 = puVar3;
  return;
}



/* Address: 0x100082350 | FUN_100082350 */

void FUN_100082350(void)

{
  FUN_10000bc58();
  return;
}



/* Address: 0x100082370 | thunk_FUN_100062024 */

void thunk_FUN_100062024(void)

{
  FUN_100062024();
  return;
}



/* Address: 0x100082374 | thunk_FUN_100062050 */

void thunk_FUN_100062050(void)

{
  FUN_100062050();
  return;
}



/* Address: 0x100082378 | FUN_100082378 */

void FUN_100082378(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100082388 | FUN_100082388 */

void FUN_100082388(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100062074(param_1,*(undefined1 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100082390 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x100082394 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x100082398 | FUN_100082398 */

void FUN_100082398(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_1b0 [80];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 local_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 local_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_4f;
  
  uStack_108 = param_2[1];
  local_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  local_f0 = param_2[4];
  uStack_e8 = param_2[5];
  FUN_100080e18(&local_160,&local_110);
  uStack_b8 = uStack_138;
  local_c0 = local_140;
  uStack_a8 = uStack_128;
  uStack_b0 = uStack_130;
  uStack_9f = uStack_11f;
  local_a7 = local_127;
  uStack_a0 = uStack_120;
  uStack_d8 = uStack_158;
  local_e0 = local_160;
  uStack_c8 = uStack_148;
  uStack_d0 = uStack_150;
  uStack_68 = uStack_138;
  local_70 = local_140;
  uStack_60 = uStack_130;
  uStack_4f = uStack_11f;
  uStack_88 = uStack_158;
  local_90 = local_160;
  uStack_78 = uStack_148;
  uStack_80 = uStack_150;
  FUN_100011090(&local_e0,auStack_1b0,&DAT_100fa9ed0,&DAT_100c27488);
  FUN_100005808(&local_90,&DAT_100fa9ed0,&DAT_100c27488);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = CONCAT71(local_a7,uStack_a8);
  param_1[6] = uStack_b0;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_9f;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_a0,local_a7);
  param_1[1] = uStack_d8;
  *param_1 = local_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x10008245c | FUN_10008245c */

void FUN_10008245c(void)

{
  long unaff_x20;
  
  FUN_10007fac8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),&DAT_100c27670,
                FUN_100004520);
  return;
}



/* Address: 0x100082484 | FUN_100082484 */

void FUN_100082484(void)

{
  long unaff_x20;
  
  FUN_10007fac8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),&DAT_100c27600,
                FUN_100004520);
  return;
}



/* Address: 0x1000824ac | FUN_1000824ac */

void FUN_1000824ac(void)

{
  FUN_10007fee4();
  return;
}



/* Address: 0x1000824c8 | FUN_1000824c8 */

void FUN_1000824c8(undefined1 *param_1)

{
  FUN_10000a664(*param_1);
  return;
}



/* Address: 0x1000824ec | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x1000824f0 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x1000824f4 | FUN_1000824f4 */

void FUN_1000824f4(void)

{
  FUN_10007fee4();
  return;
}



/* Address: 0x100082510 | FUN_100082510 */

void FUN_100082510(undefined1 *param_1)

{
  FUN_10000a52c(*param_1);
  return;
}


