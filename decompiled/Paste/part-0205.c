/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10025fbf0 | thunk_FUN_10019fbf0 */

void thunk_FUN_10019fbf0(void)

{
  thunk_FUN_10019fbf0();
  return;
}



/* Address: 0x10025fbf4 | thunk_FUN_1002425f8 */

void thunk_FUN_1002425f8(void)

{
  FUN_1002425f8();
  return;
}



/* Address: 0x10025fbf8 | thunk_FUN_100401464 */

void thunk_FUN_100401464(void)

{
  FUN_10040148c(FUN_10040baac,&PTR_PTR_100ed2748);
  return;
}



/* Address: 0x10025fbfc | thunk_FUN_10024cbec */

void thunk_FUN_10024cbec(void)

{
  FUN_10024cbec();
  return;
}



/* Address: 0x10025fc00 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  FUN_1001965a8();
  return;
}



/* Address: 0x10025fc04 | FUN_10025fc04 */

void FUN_10025fc04(void)

{
  undefined1 local_11;
  
  local_11 = 3;
  FUN_1002ccc34(0x566c6c6177796170,0xee00746e61697261,&local_11,&DAT_100ec4358);
  return;
}



/* Address: 0x10025fc54 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x10025fc58 | thunk_FUN_10025f82c */

void thunk_FUN_10025f82c(void)

{
  FUN_10025f82c();
  return;
}



/* Address: 0x10025fc5c | FUN_10025fc5c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010025fdc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10025fc5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ObservedObject<undefined> OVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  code *pcVar12;
  code *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  undefined *local_68;
  
  puVar4 = &DAT_100fb8f30;
  local_88 = param_2;
  uStack_80 = param_3;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  local_68 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fb8618;
  local_78 = (long)&local_90 - extraout_x8;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar11 = ((long)&local_90 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (lVar11 - extraout_x12) - extraout_x12_00;
  puVar5 = &DAT_100c38b30;
  _swift_getKeyPath();
  param_1[2] = puVar5;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar6 = 0;
  FUN_10026516c();
  iVar1 = *(int *)(lVar6 + 0x18);
  lVar7 = 0;
  FUN_1002abb94();
  lVar6 = *(long *)(lVar7 + -8);
  local_90 = *(code **)(lVar6 + 0x38);
  (*local_90)(lVar10,1,1,lVar7);
  FUN_100011090(lVar10,lVar11 - extraout_x12,&DAT_100fb8618,&DAT_100c385c0);
  uVar3 = uStack_80;
  uVar2 = local_88;
  local_70 = (long)iVar1;
  SwiftUI::State::init((long)param_1 + (long)iVar1,lVar7,puVar4);
  FUN_100005808(lVar10,&DAT_100fb8618,&DAT_100c385c0);
  uVar8 = 0;
  FUN_10025cdc8();
  puVar4 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(uVar2);
  OVar9 = SwiftUI::ObservedObject::init(puVar4,uVar8,puVar4);
  *param_1 = OVar9.unknown;
  param_1[1] = uVar8;
  FUN_100011090(uVar3,lVar11,&DAT_100fb8618,&DAT_100c385c0);
  pcVar12 = *(code **)(lVar6 + 0x30);
  lVar6 = lVar11;
  (*pcVar12)(lVar11,1,lVar7);
  if ((int)lVar6 == 1) {
    puVar4 = &DAT_100c38b60;
    _swift_getKeyPath(&DAT_100c38b60);
    puVar5 = &DAT_100c38b88;
    _swift_getKeyPath(&DAT_100c38b88);
    lVar6 = local_78;
    Combine::Published::_get_subscript(local_78,uVar2,puVar4,puVar5);
    _swift_release(uVar2);
    _swift_release(puVar4);
    _swift_release(puVar5);
    FUN_100005808(uVar3,&DAT_100fb8618,&DAT_100c385c0);
    lVar10 = lVar11;
    (*pcVar12)(lVar11,1,lVar7);
    if ((int)lVar10 != 1) {
      FUN_100005808(lVar11,&DAT_100fb8618,&DAT_100c385c0);
    }
  }
  else {
    FUN_100005808(uVar3,&DAT_100fb8618,&DAT_100c385c0);
    _swift_release(uVar2);
    lVar6 = local_78;
    FUN_1000523d8(lVar11,local_78,FUN_1002abb94);
    (*local_90)(lVar6,0,1,lVar7);
  }
  *(undefined8 *)(lVar6 + *(int *)(local_68 + 0x1c)) = 0;
  FUN_100265188(lVar6,(long)param_1 + local_70);
  return;
}



/* Address: 0x10025ff74 | FUN_10025ff74 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10025ff74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  int iVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  Set _all;
  Set SVar5;
  NSColor *pNVar6;
  undefined8 uVar7;
  Color CVar8;
  Set unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  HVar3 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar3.unknown;
  param_1[1] = 0x4040000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100fb8fd8;
  FUN_1000037f0(&DAT_100fb8fd8,&DAT_100c38c58);
  FUN_100260118((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  _all = SwiftUI::Edge::Set::get_horizontal(unaff_x20);
  uVar9 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar5.unknown = &DAT_100fb8fe0;
  uVar7 = param_3;
  uVar10 = param_4;
  uVar11 = param_5;
  FUN_1000037f0(&DAT_100fb8fe0,&DAT_100c38c60);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar5.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar5 = SwiftUI::Edge::Set::get_vertical(SVar5);
  uVar9 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  puVar4 = &DAT_100fb8fe8;
  FUN_1000037f0(&DAT_100fb8fe8,&DAT_100c38c68);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar5.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  puVar1[0x28] = 0;
  FUN_10000ec2c(0,&DAT_100fb8ff0,&PTR__OBJC_CLASS___NSColor_100f8d680);
  pNVar6 = (NSColor *)NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  uVar7 = 0x222525;
  FUN_100206668(0x3ff0000000000000,0x222525);
  FUN_1002066dc(pNVar6,uVar7);
  CVar8 = SwiftUI::Color::init(pNVar6);
  SVar5 = SwiftUI::Edge::Set::get_all(CVar8.unknown);
  puVar4 = &DAT_100fb8ff8;
  FUN_1000037f0(&DAT_100fb8ff8,&DAT_100c38c70);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = CVar8.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = (char)SVar5.unknown;
  return;
}



/* Address: 0x100260118 | FUN_100260118 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100260870 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100260118(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ControlSize CVar5;
  undefined *puVar6;
  long lVar7;
  MainActor *this;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  char *pcVar10;
  HorizontalAlignment HVar11;
  Set SVar12;
  UnownedSerialExecutor UVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  Alignment AVar18;
  VerticalAlignment VVar19;
  code *pcVar20;
  long extraout_x8;
  undefined8 *puVar21;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uStack_900;
  undefined1 auStack_8f8 [8];
  undefined8 uStack_8f0;
  undefined1 auStack_8e8 [8];
  undefined8 auStack_8e0 [2];
  long local_8d0;
  MainActor *local_8c8;
  ulong local_8c0;
  long local_8b8;
  undefined8 *local_8b0;
  long local_8a8;
  long local_8a0;
  long local_898;
  undefined *local_890;
  undefined *local_888;
  long local_880;
  MainActor *local_878;
  long local_870;
  undefined8 *local_868;
  undefined8 *local_860;
  long local_858;
  long local_850;
  long local_848;
  undefined8 *local_840;
  undefined1 auStack_838 [200];
  undefined *local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
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
  undefined *puStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined *puStack_6c8;
  undefined8 local_6c0;
  undefined *puStack_6b8;
  undefined1 local_6b0;
  undefined7 local_6a0;
  undefined1 uStack_699;
  undefined7 uStack_698;
  undefined1 uStack_691;
  undefined7 uStack_690;
  undefined1 local_689;
  undefined7 uStack_688;
  undefined1 uStack_681;
  undefined7 uStack_680;
  undefined1 local_679;
  undefined7 uStack_678;
  undefined1 uStack_671;
  undefined7 uStack_670;
  undefined1 local_669;
  undefined7 uStack_668;
  undefined1 uStack_661;
  undefined7 uStack_660;
  undefined1 local_659;
  undefined7 uStack_658;
  undefined1 uStack_651;
  undefined7 uStack_650;
  undefined1 local_649;
  undefined7 uStack_648;
  undefined1 uStack_641;
  undefined7 uStack_640;
  undefined1 local_639;
  undefined7 uStack_638;
  undefined1 uStack_631;
  undefined7 uStack_630;
  undefined1 uStack_629;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined *puStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  undefined *puStack_5e8;
  undefined1 local_5e0;
  undefined *local_5d0;
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
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *local_4f0;
  undefined8 uStack_4e8;
  undefined1 local_4e0;
  undefined7 local_4df;
  undefined1 uStack_4d8;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined7 local_4cf;
  undefined1 uStack_4c8;
  undefined7 uStack_4c7;
  undefined1 uStack_4c0;
  undefined7 local_4bf;
  undefined1 uStack_4b8;
  undefined7 uStack_4b7;
  undefined1 uStack_4b0;
  undefined7 local_4af;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined7 local_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined1 uStack_490;
  undefined7 local_48f;
  undefined1 uStack_488;
  undefined7 uStack_487;
  undefined1 uStack_480;
  undefined7 local_47f;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined7 uStack_46f;
  undefined *local_468;
  undefined8 local_460;
  undefined1 local_458;
  undefined8 local_457;
  undefined8 uStack_44f;
  undefined8 local_447;
  undefined8 uStack_43f;
  undefined8 local_437;
  undefined8 uStack_42f;
  undefined8 local_427;
  undefined8 uStack_41f;
  undefined8 local_417;
  undefined8 uStack_40f;
  undefined8 local_407;
  undefined8 uStack_3ff;
  undefined8 local_3f7;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined *puStack_358;
  undefined1 local_350;
  undefined *local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
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
  undefined *local_2b8;
  undefined1 local_2b0;
  undefined *local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined *puStack_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined7 uStack_207;
  undefined8 local_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined1 local_1e0;
  undefined *local_1d0;
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
  undefined *puStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined1 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  
  puVar6 = &DAT_100fb9000;
  local_860 = param_1;
  FUN_1000037f0(&DAT_100fb9000,&DAT_100c38c78);
  local_888 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar7 = (long)&local_8d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_858 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar21 = (undefined8 *)(lVar7 - extraout_x12);
  lVar7 = 0;
  local_868 = puVar21;
  FUN_10025cfc4();
  local_8a8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar22 = (long)puVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_898 = lVar22;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar22 - extraout_x12_00;
  lVar7 = 0;
  local_8a0 = lVar22;
  FUN_10026516c();
  lVar24 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar22 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fb9008;
  local_850 = extraout_x12_01;
  local_848 = lVar22;
  FUN_1000037f0(&DAT_100fb9008,&DAT_100c38c80);
  local_890 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = (undefined8 *)(lVar22 - extraout_x8_01);
  puVar6 = &DAT_100fb9010;
  local_840 = puVar21;
  FUN_1000037f0(&DAT_100fb9010,&DAT_100c38c88);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar7 = (long)puVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_870 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x12_02;
  local_880 = lVar7;
  this = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(this,this);
  puVar21 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_8b0 = puVar21;
  local_878 = pMVar8;
  UVar9 = Swift::Actor::get_unownedExecutor();
  pcVar10 = (char *)UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar10 & 1) == 0) {
    pcVar10 = "PasteLicensingAppStore/AllPlansView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x12,UVar9.unknown,puVar21);
  }
  HVar11 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar10);
  FUN_100260ce0(&local_1d0);
  uStack_588 = uStack_188;
  local_590 = local_190;
  uStack_578 = uStack_178;
  uStack_580 = uStack_180;
  uStack_5c8 = uStack_1c8;
  local_5d0 = local_1d0;
  uStack_5b8 = uStack_1b8;
  uStack_5c0 = uStack_1c0;
  uStack_5a8 = uStack_1a8;
  local_5b0 = local_1b0;
  uStack_598 = uStack_198;
  uStack_5a0 = uStack_1a0;
  uStack_568 = uStack_168;
  local_570 = local_170;
  uStack_558 = uStack_1c8;
  puStack_560 = local_1d0;
  uStack_548 = uStack_1b8;
  local_550 = uStack_1c0;
  uStack_538 = uStack_1a8;
  uStack_540 = local_1b0;
  uStack_528 = uStack_198;
  local_530 = uStack_1a0;
  uStack_518 = uStack_188;
  uStack_520 = local_190;
  uStack_508 = uStack_178;
  local_510 = uStack_180;
  uStack_4f8 = uStack_168;
  uStack_500 = local_170;
  FUN_100011090(&local_5d0,&local_2a0,&DAT_100fb9018,&DAT_100c38c90);
  FUN_100005808(&puStack_560,&DAT_100fb9018,&DAT_100c38c90);
  uStack_651 = (undefined1)uStack_588;
  uStack_650 = (undefined7)((ulong)uStack_588 >> 8);
  local_659 = (undefined1)local_590;
  uStack_658 = (undefined7)((ulong)local_590 >> 8);
  uStack_661 = (undefined1)uStack_598;
  uStack_660 = (undefined7)((ulong)uStack_598 >> 8);
  local_669 = (undefined1)uStack_5a0;
  uStack_668 = (undefined7)((ulong)uStack_5a0 >> 8);
  uStack_681 = (undefined1)uStack_5b8;
  uStack_680 = (undefined7)((ulong)uStack_5b8 >> 8);
  local_689 = (undefined1)uStack_5c0;
  uStack_688 = (undefined7)((ulong)uStack_5c0 >> 8);
  uStack_691 = (undefined1)uStack_5c8;
  uStack_690 = (undefined7)((ulong)uStack_5c8 >> 8);
  uStack_699 = SUB81(local_5d0,0);
  uStack_698 = (undefined7)((ulong)local_5d0 >> 8);
  uStack_641 = (undefined1)uStack_578;
  uStack_640 = (undefined7)((ulong)uStack_578 >> 8);
  local_649 = (undefined1)uStack_580;
  uStack_648 = (undefined7)((ulong)uStack_580 >> 8);
  uStack_631 = (undefined1)uStack_568;
  uStack_630 = (undefined7)((ulong)uStack_568 >> 8);
  local_639 = (undefined1)local_570;
  uStack_638 = (undefined7)((ulong)local_570 >> 8);
  uStack_671 = (undefined1)uStack_5a8;
  uStack_670 = (undefined7)((ulong)uStack_5a8 >> 8);
  local_679 = (undefined1)local_5b0;
  uStack_678 = (undefined7)((ulong)local_5b0 >> 8);
  uStack_497 = uStack_658;
  uStack_490 = uStack_651;
  local_49f = uStack_660;
  uStack_498 = local_659;
  uStack_487 = uStack_648;
  uStack_480 = uStack_641;
  local_48f = uStack_650;
  uStack_488 = local_649;
  uStack_477 = uStack_638;
  local_47f = uStack_640;
  uStack_478 = local_639;
  uStack_4d7 = uStack_698;
  uStack_4d0 = uStack_691;
  local_4df = local_6a0;
  uStack_4d8 = uStack_699;
  uStack_4c7 = uStack_688;
  uStack_4c0 = uStack_681;
  local_4cf = uStack_690;
  uStack_4c8 = local_689;
  uStack_4b7 = uStack_678;
  uStack_4b0 = uStack_671;
  local_4bf = uStack_680;
  uStack_4b8 = local_679;
  uStack_4e8 = 0x4020000000000000;
  local_4e0 = 0;
  uStack_4a7 = uStack_668;
  uStack_4a0 = uStack_661;
  local_4af = uStack_670;
  uStack_4a8 = local_669;
  puVar6 = &DAT_100c38c98;
  uVar25 = local_5b0;
  puVar15 = local_5d0;
  local_4f0 = HVar11.unknown;
  uStack_470 = uStack_631;
  uStack_46f = uStack_630;
  _swift_getKeyPath();
  uStack_238 = CONCAT71(uStack_487,uStack_488);
  local_240 = CONCAT71(local_48f,uStack_490);
  uStack_228 = CONCAT71(uStack_477,uStack_478);
  uStack_230 = CONCAT71(local_47f,uStack_480);
  uStack_278 = CONCAT71(uStack_4c7,uStack_4c8);
  local_280 = CONCAT71(local_4cf,uStack_4d0);
  uStack_268 = CONCAT71(uStack_4b7,uStack_4b8);
  uStack_270 = CONCAT71(local_4bf,uStack_4c0);
  uStack_258 = CONCAT71(uStack_4a7,uStack_4a8);
  local_260 = CONCAT71(local_4af,uStack_4b0);
  uStack_248 = CONCAT71(uStack_497,uStack_498);
  uStack_250 = CONCAT71(local_49f,uStack_4a0);
  uStack_288 = CONCAT71(uStack_4d7,uStack_4d8);
  uStack_290 = CONCAT71(local_4df,local_4e0);
  uStack_298 = uStack_4e8;
  local_2a0 = local_4f0;
  uStack_40f = CONCAT17(uStack_651,uStack_658);
  local_417 = CONCAT17(local_659,uStack_660);
  uStack_3ff = CONCAT17(uStack_641,uStack_648);
  local_407 = CONCAT17(local_649,uStack_650);
  local_3f7 = CONCAT17(local_639,uStack_640);
  uStack_3ef = uStack_638;
  uStack_44f = CONCAT17(uStack_691,uStack_698);
  local_457 = CONCAT17(uStack_699,local_6a0);
  uStack_43f = CONCAT17(uStack_681,uStack_688);
  local_447 = CONCAT17(local_689,uStack_690);
  uStack_42f = CONCAT17(uStack_671,uStack_678);
  local_437 = CONCAT17(local_679,uStack_680);
  uStack_41f = CONCAT17(uStack_661,uStack_668);
  local_427 = CONCAT17(local_669,uStack_670);
  local_220 = CONCAT71(uStack_46f,uStack_470);
  local_460 = 0x4020000000000000;
  local_458 = 0;
  uStack_3e8 = uStack_631;
  uStack_3e7 = uStack_630;
  local_468 = HVar11.unknown;
  FUN_100011090(&local_4f0,&local_1d0,&DAT_100fb9020,&DAT_100c38cc8);
  SVar12.unknown = (undefined *)&local_468;
  FUN_100005808(SVar12.unknown,&DAT_100fb9020,&DAT_100c38cc8);
  SVar12 = SwiftUI::Edge::Set::get_horizontal(SVar12);
  uStack_378 = uStack_238;
  local_380 = local_240;
  uStack_368 = uStack_228;
  uStack_370 = uStack_230;
  uStack_3b8 = uStack_278;
  local_3c0 = local_280;
  uStack_3a8 = uStack_268;
  uStack_3b0 = uStack_270;
  uStack_398 = uStack_258;
  local_3a0 = local_260;
  uStack_388 = uStack_248;
  uStack_390 = uStack_250;
  uStack_3d8 = uStack_298;
  local_3e0 = local_2a0;
  uStack_3c8 = uStack_288;
  uStack_3d0 = uStack_290;
  local_360 = local_220;
  local_350 = 1;
  uVar27 = 0x4034000000000000;
  puVar14 = local_2a0;
  puStack_358 = puVar6;
  SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
  uStack_708 = uStack_378;
  local_710 = local_380;
  uStack_6f8 = uStack_368;
  local_700 = uStack_370;
  puStack_6e8 = puStack_358;
  local_6f0 = local_360;
  local_6e0 = CONCAT71(local_6e0._1_7_,local_350);
  uStack_748 = uStack_3b8;
  local_750 = local_3c0;
  uStack_738 = uStack_3a8;
  local_740 = uStack_3b0;
  uStack_728 = uStack_398;
  local_730 = local_3a0;
  uStack_718 = uStack_388;
  local_720 = uStack_390;
  uStack_768 = uStack_3d8;
  local_770 = local_3e0;
  uStack_758 = uStack_3c8;
  local_760 = uStack_3d0;
  uStack_2d8 = uStack_238;
  local_2e0 = local_240;
  uStack_2c8 = uStack_228;
  uStack_2d0 = uStack_230;
  uStack_318 = uStack_278;
  local_320 = local_280;
  uStack_308 = uStack_268;
  uStack_310 = uStack_270;
  uStack_2f8 = uStack_258;
  local_300 = local_260;
  uStack_2e8 = uStack_248;
  uStack_2f0 = uStack_250;
  uStack_338 = uStack_298;
  local_340 = local_2a0;
  uStack_328 = uStack_288;
  uStack_330 = uStack_290;
  local_2c0 = local_220;
  local_2b0 = 1;
  local_2b8 = puVar6;
  FUN_100011090(&local_3e0,&local_1d0,&DAT_100fb9028,&DAT_100c38cd0);
  FUN_100005808(&local_340,&DAT_100fb9028,&DAT_100c38cd0);
  uStack_238 = uStack_708;
  local_240 = local_710;
  uStack_228 = uStack_6f8;
  uStack_230 = local_700;
  puStack_218 = puStack_6e8;
  local_220 = local_6f0;
  uStack_278 = uStack_748;
  local_280 = local_750;
  uStack_268 = uStack_738;
  uStack_270 = local_740;
  uStack_258 = uStack_728;
  local_260 = local_730;
  uStack_248 = uStack_718;
  uStack_250 = local_720;
  uStack_298 = uStack_768;
  local_2a0 = local_770;
  uStack_288 = uStack_758;
  uStack_290 = local_760;
  uStack_168 = uStack_708;
  local_170 = local_710;
  uStack_158 = uStack_6f8;
  uStack_160 = local_700;
  puStack_148 = puStack_6e8;
  local_150 = local_6f0;
  uStack_1a8 = uStack_748;
  local_1b0 = local_750;
  uStack_198 = uStack_738;
  uStack_1a0 = local_740;
  uStack_188 = uStack_728;
  local_190 = local_730;
  uStack_178 = uStack_718;
  uStack_180 = local_720;
  local_210 = local_6e0;
  local_208 = SUB81(SVar12.unknown,0);
  local_1e0 = 0;
  local_140 = local_6e0;
  uStack_1c8 = uStack_768;
  local_1d0 = local_770;
  uStack_1b8 = uStack_758;
  uStack_1c0 = local_760;
  local_110 = 0;
  local_200 = uVar27;
  puStack_1f8 = puVar14;
  local_1f0 = uVar25;
  local_1e8 = puVar15;
  local_138 = local_208;
  local_130 = uVar27;
  local_128 = puVar14;
  local_120 = uVar25;
  local_118 = puVar15;
  FUN_100011090(&local_2a0,&local_6a0,&DAT_100fb9030,&DAT_100c38cd8);
  HVar11.unknown = (undefined *)&local_1d0;
  FUN_100005808(HVar11.unknown,&DAT_100fb9030,&DAT_100c38cd8);
  HVar11 = SwiftUI::HorizontalAlignment::get_center(HVar11);
  puVar21 = local_840;
  *local_840 = HVar11.unknown;
  puVar21[1] = 0x4028000000000000;
  *(undefined1 *)(puVar21 + 2) = 0;
  local_8c8 = Swift::MainActor::get_shared(this,(MainActor *)HVar11.unknown);
  puVar21 = local_8b0;
  UVar13 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x1c,UVar13.unknown,puVar21);
  }
  puVar6 = &DAT_100fb9038;
  FUN_1000037f0(&DAT_100fb9038,&DAT_100c38ce0);
  lVar22 = local_848;
  local_8d0 = (long)*(int *)(puVar6 + 0x2c);
  lVar26 = *(long *)(param_2 + 8);
  uVar25 = *(undefined8 *)(lVar26 + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions);
  local_6a0 = (undefined7)uVar25;
  uStack_699 = (undefined1)((ulong)uVar25 >> 0x38);
  local_8b8 = param_2;
  FUN_1000c495c(param_2,local_848,FUN_10026516c);
  local_8b0 = (undefined8 *)(ulong)*(byte *)(lVar24 + 0x50);
  uVar23 = (long)local_8b0 + 0x10U & ((ulong)local_8b0 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100ec44d8;
  local_8c0 = uVar23;
  _swift_allocObject(&DAT_100ec44d8,uVar23 + local_850,(ulong)local_8b0 | 7);
  FUN_1000523d8(lVar22,puVar6 + uVar23,FUN_10026516c);
  _swift_bridgeObjectRetain(uVar25);
  puVar14 = &DAT_100fb9040;
  FUN_1000037f0(&DAT_100fb9040,&DAT_100c38ce8);
  uVar25 = 0;
  FUN_100266d14(0);
  puVar15 = &DAT_100fb9048;
  FUN_100016eac(&DAT_100fb9048,&DAT_100fb9040,&DAT_100c38ce8,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar16 = &DAT_100fb9050;
  FUN_100003a00(&DAT_100fb9050,FUN_100266d14,&TargetProtocolConformanceDescriptor_100c38e80);
  puVar17 = &DAT_100fb9058;
  FUN_100003a00(&DAT_100fb9058,FUN_1002abb94,&TargetProtocolConformanceDescriptor_100c3c440);
  pcVar20 = FUN_100266cc8;
  *(undefined **)(lVar7 + -0x10) = puVar17;
  VVar19.unknown = (undefined *)local_840;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)local_840 + local_8d0,puVar17,FUN_100266cc8,puVar6,puVar14,&DAT_100ec6738,uVar25,
             puVar15,puVar16);
  AVar18.unknown = local_8c8;
  _swift_release();
  AVar18 = SwiftUI::Alignment::get_center(AVar18);
  *(undefined **)(lVar7 + -0x10) = AVar18.unknown;
  *(code **)(lVar7 + -8) = pcVar20;
  *(undefined1 *)(lVar7 + -0x18) = 1;
  *(undefined8 *)(lVar7 + -0x20) = 0;
  *(undefined1 *)(lVar7 + -0x28) = 1;
  *(undefined8 *)(lVar7 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar6 = &DAT_100fb9060;
  FUN_1000037f0(&DAT_100fb9060,&DAT_100c38cf0);
  puVar21 = (undefined8 *)((long)VVar19.unknown + (long)*(int *)(puVar6 + 0x24));
  puVar21[9] = uStack_b8;
  puVar21[8] = local_c0;
  puVar21[0xb] = uStack_a8;
  puVar21[10] = local_b0;
  puVar21[0xd] = uStack_98;
  puVar21[0xc] = local_a0;
  puVar21[1] = uStack_f8;
  *puVar21 = local_100;
  puVar21[3] = uStack_e8;
  puVar21[2] = uStack_f0;
  puVar21[5] = uStack_d8;
  puVar21[4] = local_e0;
  puVar21[7] = uStack_c8;
  puVar21[6] = local_d0;
  puVar6 = &DAT_100c38cf8;
  _swift_getKeyPath(&DAT_100c38cf8);
  puVar14 = &DAT_100c38d20;
  _swift_getKeyPath(&DAT_100c38d20);
  lVar7 = local_8a0;
  Combine::Published::_get_subscript(local_8a0,lVar26,puVar6,puVar14);
  _swift_release(puVar6);
  _swift_release(puVar14);
  lVar22 = local_898;
  _swift_storeEnumTagMultiPayload(local_898,local_8a8,3);
  lVar26 = lVar7;
  FUN_10025f09c(lVar7,lVar22);
  FUN_10005241c(lVar22,FUN_10025cfc4);
  FUN_10005241c(lVar7,FUN_10025cfc4);
  puVar6 = &DAT_100c38d40;
  _swift_getKeyPath();
  puVar14 = &DAT_100ec4500;
  _swift_allocObject(&DAT_100ec4500,0x11,7);
  lVar24 = local_848;
  puVar15 = local_890;
  lVar7 = local_8b8;
  puVar14[0x10] = ((byte)lVar26 ^ 0xff) & 1;
  puVar21 = (undefined8 *)((long)VVar19.unknown + (long)*(int *)(local_890 + 0x24));
  *puVar21 = puVar6;
  puVar21[1] = FUN_100082388;
  puVar21[2] = puVar14;
  FUN_1000c495c(local_8b8,local_848,FUN_10026516c);
  uVar23 = local_8c0;
  puVar6 = &DAT_100ec4528;
  _swift_allocObject(&DAT_100ec4528,local_8c0 + local_850,(ulong)local_8b0 | 7);
  FUN_1000523d8(lVar24,puVar6 + uVar23,FUN_10026516c);
  FUN_100266f54();
  lVar22 = local_880;
  FUN_10021ea3c(local_880,FUN_100266f18,puVar6,puVar15,lVar24);
  _swift_release(puVar6);
  FUN_100005808(VVar19.unknown,&DAT_100fb9008,&DAT_100c38c80);
  VVar19 = SwiftUI::VerticalAlignment::get_center(VVar19);
  puVar21 = local_868;
  *local_868 = VVar19.unknown;
  puVar21[1] = 0;
  *(undefined1 *)(puVar21 + 2) = 1;
  puVar6 = &DAT_100fb9098;
  FUN_1000037f0(&DAT_100fb9098,&DAT_100c38d80);
  FUN_100261b7c((long)puVar21 + (long)*(int *)(puVar6 + 0x2c),lVar7);
  iVar2 = *(int *)(local_888 + 0x24);
  puVar6 = &DAT_100fb90a0;
  FUN_1000037f0(&DAT_100fb90a0,&DAT_100c396d0);
  iVar3 = *(int *)(puVar6 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  CVar5 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar7 = CONCAT71((int7)((ulong)puVar6 >> 8),CVar5.value);
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))((long)puVar21 + (long)iVar2 + (long)iVar3,uVar1,lVar7)
  ;
  puVar6 = &DAT_100c38d90;
  _swift_getKeyPath();
  lVar7 = local_870;
  *(undefined **)((long)puVar21 + (long)iVar2) = puVar6;
  puStack_6c8 = puStack_1f8;
  local_6d0 = local_200;
  puStack_6b8 = local_1e8;
  local_6c0 = local_1f0;
  local_6b0 = local_1e0;
  uStack_708 = uStack_238;
  local_710 = local_240;
  uStack_6f8 = uStack_228;
  local_700 = uStack_230;
  uStack_6d8 = CONCAT71(uStack_207,local_208);
  puStack_6e8 = puStack_218;
  local_6f0 = local_220;
  local_6e0 = local_210;
  uStack_748 = uStack_278;
  local_750 = local_280;
  uStack_738 = uStack_268;
  local_740 = uStack_270;
  uStack_728 = uStack_258;
  local_730 = local_260;
  uStack_718 = uStack_248;
  local_720 = uStack_250;
  uStack_768 = uStack_298;
  local_770 = local_2a0;
  uStack_758 = uStack_288;
  local_760 = uStack_290;
  FUN_100011090(lVar22,local_870,&DAT_100fb9010,&DAT_100c38c88);
  lVar24 = local_858;
  FUN_10026708c(puVar21,local_858);
  puVar4 = local_860;
  puStack_5f8 = puStack_6c8;
  local_600 = local_6d0;
  puStack_5e8 = puStack_6b8;
  uStack_5f0 = local_6c0;
  uStack_638 = (undefined7)uStack_708;
  uStack_631 = (undefined1)((ulong)uStack_708 >> 0x38);
  uStack_640 = (undefined7)local_710;
  local_639 = (undefined1)((ulong)local_710 >> 0x38);
  uStack_628 = uStack_6f8;
  uStack_630 = (undefined7)local_700;
  uStack_629 = (undefined1)((ulong)local_700 >> 0x38);
  puStack_618 = puStack_6e8;
  local_620 = local_6f0;
  uStack_608 = uStack_6d8;
  uStack_610 = local_6e0;
  uStack_678 = (undefined7)uStack_748;
  uStack_671 = (undefined1)((ulong)uStack_748 >> 0x38);
  uStack_680 = (undefined7)local_750;
  local_679 = (undefined1)((ulong)local_750 >> 0x38);
  uStack_668 = (undefined7)uStack_738;
  uStack_661 = (undefined1)((ulong)uStack_738 >> 0x38);
  uStack_670 = (undefined7)local_740;
  local_669 = (undefined1)((ulong)local_740 >> 0x38);
  uStack_658 = (undefined7)uStack_728;
  uStack_651 = (undefined1)((ulong)uStack_728 >> 0x38);
  uStack_660 = (undefined7)local_730;
  local_659 = (undefined1)((ulong)local_730 >> 0x38);
  uStack_648 = (undefined7)uStack_718;
  uStack_641 = (undefined1)((ulong)uStack_718 >> 0x38);
  uStack_650 = (undefined7)local_720;
  local_649 = (undefined1)((ulong)local_720 >> 0x38);
  uStack_698 = (undefined7)uStack_768;
  uStack_691 = (undefined1)((ulong)uStack_768 >> 0x38);
  local_6a0 = SUB87(local_770,0);
  uStack_699 = (undefined1)((ulong)local_770 >> 0x38);
  uStack_688 = (undefined7)uStack_758;
  uStack_681 = (undefined1)((ulong)uStack_758 >> 0x38);
  uStack_690 = (undefined7)local_760;
  local_689 = (undefined1)((ulong)local_760 >> 0x38);
  local_860[0x15] = puStack_6c8;
  local_860[0x14] = local_6d0;
  local_860[0x17] = puStack_6b8;
  local_860[0x16] = local_6c0;
  local_860[0xd] = uStack_708;
  local_860[0xc] = local_710;
  local_860[0xf] = uStack_6f8;
  local_860[0xe] = local_700;
  local_860[0x11] = puStack_6e8;
  local_860[0x10] = local_6f0;
  local_860[0x13] = uStack_6d8;
  local_860[0x12] = local_6e0;
  local_860[5] = uStack_748;
  local_860[4] = local_750;
  local_860[7] = uStack_738;
  local_860[6] = local_740;
  local_860[9] = uStack_728;
  local_860[8] = local_730;
  local_860[0xb] = uStack_718;
  local_860[10] = local_720;
  local_5e0 = local_6b0;
  *(undefined1 *)(local_860 + 0x18) = local_6b0;
  local_860[1] = uStack_768;
  *local_860 = local_770;
  local_860[3] = uStack_758;
  local_860[2] = local_760;
  puVar6 = &DAT_100fb90a8;
  FUN_1000037f0(&DAT_100fb90a8,&DAT_100c38dc0);
  FUN_100011090(lVar7,(long)puVar4 + (long)*(int *)(puVar6 + 0x30),&DAT_100fb9010,&DAT_100c38c88);
  FUN_10026708c(lVar24,(long)puVar4 + (long)*(int *)(puVar6 + 0x40));
  FUN_100011090(&local_6a0,auStack_838,&DAT_100fb9030,&DAT_100c38cd8);
  FUN_1002670dc(puVar21);
  FUN_100005808(lVar22,&DAT_100fb9010,&DAT_100c38c88);
  FUN_1002670dc(lVar24);
  FUN_100005808(lVar7,&DAT_100fb9010,&DAT_100c38c88);
  FUN_100005808(&local_770,&DAT_100fb9030,&DAT_100c38cd8);
  _swift_release(local_878);
  return;
}



/* Address: 0x100260ce0 | FUN_100260ce0 */

void FUN_100260ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  Text TVar7;
  Font FVar8;
  Font FVar9;
  Text TVar10;
  Set _all;
  Text TVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  Set in_x3;
  long extraout_x8;
  undefined8 uVar15;
  LocalizedStringResource local_220;
  char *local_218;
  undefined8 *local_210;
  MainActor *local_208;
  undefined1 auStack_200 [80];
  char *local_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  char *pcStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  char *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  char *local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined1 local_100;
  char *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  String local_c0;
  undefined8 uStack_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  local_210 = param_1;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_208 = pMVar2;
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3.unknown = (undefined *)0x13;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x13,UVar4.unknown,puVar3);
  }
  FUN_1001c9854(LVar1.unknown);
  local_c0 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar6 = local_c0.str;
  FUN_1002538a0();
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  local_218 = pcVar6;
  TVar7 = SwiftUI::Text::_init();
  FVar8 = SwiftUI::Font::get_title(TVar7.unknown);
  FVar9 = SwiftUI::Font::bold(FVar8);
  _swift_release(FVar8.unknown);
  TVar11 = TVar7;
  puVar13 = puVar12;
  pcVar14 = pcVar6;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  local_220.unknown = LVar1.unknown;
  _swift_release(FVar9.unknown);
  FUN_100016d74(TVar7.unknown,puVar12,pcVar6);
  _swift_bridgeObjectRelease();
  _all = SwiftUI::Edge::Set::get_top(in_x3);
  uVar15 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_150 = SUB81(puVar13,0);
  local_140 = SUB81(_all.unknown,0);
  local_128 = (undefined1)param_4;
  uStack_127 = (undefined7)((ulong)param_4 >> 8);
  uStack_120 = (undefined1)param_5;
  uStack_11f = (undefined7)((ulong)param_5 >> 8);
  uStack_118 = 0;
  local_c8 = 0;
  puVar12 = &DAT_100c397b0;
  local_160 = (char *)TVar10;
  puStack_158 = TVar11.unknown;
  local_148 = pcVar14;
  uStack_138 = uVar15;
  uStack_130 = param_3;
  local_110 = TVar10.unknown;
  puStack_108 = TVar11.unknown;
  local_100 = local_150;
  local_f8 = pcVar14;
  local_f0 = local_140;
  local_e8 = uVar15;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  FUN_100011090(&local_160,&local_c0,&DAT_100fb90e8);
  FUN_100005808(&local_110,&DAT_100fb90e8,&DAT_100c397b0);
  LVar1.unknown = local_220.unknown;
  FUN_1001c96d4(local_220.unknown);
  local_c0 = (extension_Foundation)::Swift::String::init(LVar1);
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar14 = local_218;
  TVar11 = SwiftUI::Text::_init();
  local_190 = CONCAT71(uStack_13f,local_140);
  uStack_188 = uStack_138;
  uStack_178 = local_128;
  uStack_180 = uStack_130;
  uStack_16f = CONCAT17(uStack_118,uStack_11f);
  local_177 = uStack_127;
  uStack_170 = uStack_120;
  uStack_80 = uStack_120;
  uStack_98 = uStack_138;
  uStack_88 = local_128;
  local_87 = uStack_127;
  uStack_90 = uStack_130;
  uStack_1a0 = CONCAT71(uStack_14f,local_150);
  puStack_1a8 = puStack_158;
  local_1b0 = local_160;
  pcStack_198 = local_148;
  local_c0.bridgeObject = puStack_158;
  local_c0.str = local_160;
  pcStack_a8 = local_148;
  *(ulong *)((long)local_210 + 0x41) = CONCAT17(uStack_118,uStack_11f);
  *(ulong *)((long)local_210 + 0x39) = CONCAT17(uStack_120,uStack_127);
  local_210[5] = uStack_138;
  local_210[4] = CONCAT71(uStack_13f,local_140);
  local_210[7] = CONCAT71(uStack_127,local_128);
  local_210[6] = uStack_130;
  local_210[1] = puStack_158;
  *local_210 = local_160;
  local_210[3] = local_148;
  local_210[2] = CONCAT71(uStack_14f,local_150);
  local_210[10] = TVar11.unknown;
  local_210[0xb] = puVar13;
  *(char *)(local_210 + 0xc) = (char)pcVar14;
  local_210[0xd] = puVar12;
  uStack_b0 = uStack_1a0;
  local_a0 = local_190;
  uStack_7f = uStack_16f;
  FUN_100011090(&local_c0,auStack_200,&DAT_100fb90e8,&DAT_100c397b0);
  FUN_100016d5c(TVar11.unknown,puVar13,pcVar14);
  _swift_bridgeObjectRetain(puVar12);
  FUN_100016d74(TVar11.unknown,puVar13,pcVar14);
  _swift_bridgeObjectRelease(puVar12);
  FUN_100005808(&local_1b0,&DAT_100fb90e8,&DAT_100c397b0);
  _swift_release(local_208);
  return;
}



/* Address: 0x100260fdc | FUN_100260fdc */

void FUN_100260fdc(long param_1,byte *param_2,long param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  byte *pbVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  State SVar14;
  undefined *puVar15;
  long extraout_x8;
  char *pcVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  char *local_b0;
  char *local_a8;
  MainActor *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  byte *local_78;
  long local_70;
  long local_68;
  
  lVar7 = 0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  FUN_10026516c();
  local_98 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = (long)&local_b0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_90 = extraout_x12;
  local_88 = lVar20;
  FUN_1002abb94();
  lVar25 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  pcVar16 = (char *)(lVar20 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar8 = &DAT_100fb8e70;
  local_b0 = pcVar16;
  FUN_1000037f0(&DAT_100fb8e70,&DAT_100c38770);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)pcVar16 - extraout_x8_00;
  puVar9 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  pcVar16 = (char *)(lVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_a8 = pcVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = (long)pcVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar21 - extraout_x12_01;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar11 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a0 = pMVar10;
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x1d,UVar12.unknown,puVar11);
  }
  pbVar5 = local_78;
  lVar4 = local_80;
  FUN_1000c495c(local_78,local_80,FUN_1002abb94);
  FUN_1000c495c(pbVar5,lVar20,FUN_1002abb94);
  (**(code **)(lVar25 + 0x38))(lVar20,0,1,lVar7);
  SVar14.unknown = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  SwiftUI::State::get_wrappedValue(SVar14);
  lVar22 = (long)*(int *)(puVar8 + 0x30);
  FUN_100011090(lVar20,lVar26,&DAT_100fb8618,&DAT_100c385c0);
  FUN_100011090(lVar21,lVar26 + lVar22,&DAT_100fb8618,&DAT_100c385c0);
  pcVar24 = *(code **)(lVar25 + 0x30);
  lVar25 = lVar26;
  (*pcVar24)(lVar26,1,lVar7);
  pcVar16 = local_a8;
  if ((int)lVar25 == 1) {
    FUN_100005808(lVar21,&DAT_100fb8618,&DAT_100c385c0);
    FUN_100005808(lVar20,&DAT_100fb8618,&DAT_100c385c0);
    lVar22 = lVar26 + lVar22;
    (*pcVar24)(lVar22,1,lVar7);
    if ((int)lVar22 == 1) {
      FUN_100005808(lVar26,&DAT_100fb8618,&DAT_100c385c0);
      bVar6 = true;
      goto LAB_1002613e0;
    }
  }
  else {
    FUN_100011090(lVar26,local_a8,&DAT_100fb8618,&DAT_100c385c0);
    lVar25 = lVar26 + lVar22;
    (*pcVar24)(lVar25,1,lVar7);
    pcVar3 = local_b0;
    if ((int)lVar25 != 1) {
      FUN_1000523d8(lVar26 + lVar22,local_b0,FUN_1002abb94);
      cVar1 = *pcVar16;
      cVar2 = *pcVar3;
      FUN_10005241c(pcVar3,FUN_1002abb94);
      FUN_100005808(lVar21,&DAT_100fb8618,&DAT_100c385c0);
      FUN_100005808(lVar20,&DAT_100fb8618,&DAT_100c385c0);
      bVar6 = cVar1 == cVar2;
      FUN_10005241c(pcVar16,FUN_1002abb94);
      FUN_100005808(lVar26,&DAT_100fb8618,&DAT_100c385c0);
      goto LAB_1002613e0;
    }
    FUN_100005808(lVar21,&DAT_100fb8618,&DAT_100c385c0);
    FUN_100005808(lVar20,&DAT_100fb8618,&DAT_100c385c0);
    FUN_10005241c(pcVar16,FUN_1002abb94);
  }
  FUN_100005808(lVar26,&DAT_100fb8e70,&DAT_100c38770);
  bVar6 = false;
LAB_1002613e0:
  uVar17 = *(undefined8 *)(local_70 + 8);
  puVar8 = &DAT_100c38df8;
  _swift_getKeyPath();
  puVar9 = &DAT_100c38e20;
  _swift_getKeyPath(&DAT_100c38e20);
  puVar15 = puVar8;
  Combine::Published::_get_subscript(&local_68,uVar17,puVar8,puVar9);
  _swift_release(puVar8);
  _swift_release(puVar9);
  if (*(long *)(local_68 + 0x10) == 0) {
    uVar19 = 0;
  }
  else {
    uVar18 = (ulong)*local_78;
    _swift_bridgeObjectRetain(local_68);
    FUN_1002b0ec0();
    if (((ulong)puVar15 & 1) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined1 *)(*(long *)(local_68 + 0x38) + uVar18);
    }
    _swift_bridgeObjectRelease(local_68);
  }
  _swift_bridgeObjectRelease(local_68);
  lVar7 = local_88;
  FUN_1000c495c(local_70,local_88,FUN_10026516c);
  uVar18 = (ulong)*(byte *)(local_98 + 0x50);
  uVar23 = uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100ec4578;
  _swift_allocObject(&DAT_100ec4578,uVar23 + local_90,uVar18 | 7);
  FUN_1000523d8(lVar7,puVar8 + uVar23,FUN_10026516c);
  _swift_release(local_a0);
  lVar7 = 0;
  FUN_100266d14();
  *(bool *)(lVar4 + *(int *)(lVar7 + 0x14)) = bVar6;
  *(undefined1 *)(lVar4 + *(int *)(lVar7 + 0x18)) = uVar19;
  puVar11 = (undefined8 *)(lVar4 + *(int *)(lVar7 + 0x1c));
  *puVar11 = FUN_100267140;
  puVar11[1] = puVar8;
  return;
}



/* Address: 0x100261528 | FUN_100261528 */

void FUN_100261528(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  
  puVar2 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)puVar4 - extraout_x12;
  FUN_1000c495c(param_1,lVar5,FUN_1002abb94);
  lVar3 = 0;
  FUN_1002abb94();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar5,0,1,lVar3);
  lVar3 = 0;
  FUN_10026516c();
  iVar1 = *(int *)(lVar3 + 0x18);
  FUN_100011090(lVar5,puVar4,&DAT_100fb8618,&DAT_100c385c0);
  puVar2 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  SwiftUI::State::set_wrappedValue((State *)(param_2 + iVar1),puVar4,puVar2);
  FUN_100005808(lVar5,&DAT_100fb8618,&DAT_100c385c0);
  return;
}



/* Address: 0x10026164c | FUN_10026164c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10026164c(undefined8 param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = &DAT_100fb8618;
  uVar5 = 0xc385c0;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar6 - extraout_x12;
  FUN_100219ddc();
  if (((uint)puVar3 & 0xff) == 0xb) {
    FUN_100262460();
    if (((uVar5 & 0xff) == 1) || ((long)puVar3 < 1)) {
      FUN_10000ec2c(0,&DAT_100fb90e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
      (extension_AppKit)::__C::NSSound::beep();
      param_1 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(param_2 + 8) +
                       _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions);
      if (*(undefined **)(lVar8 + 0x10) < puVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100261844);
        (*pcVar2)();
      }
      lVar4 = 0;
      FUN_1002abb94();
      lVar9 = *(long *)(lVar4 + -8);
      FUN_1000c495c(lVar8 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) +
                    *(long *)(lVar9 + 0x48) * (long)(puVar3 + -1),lVar7,FUN_1002abb94);
      (**(code **)(lVar9 + 0x38))(lVar7,0,1,lVar4);
      lVar8 = 0;
      FUN_10026516c();
      iVar1 = *(int *)(lVar8 + 0x18);
      FUN_100011090(lVar7,puVar6,&DAT_100fb8618,&DAT_100c385c0);
      puVar3 = &DAT_100fb8f30;
      FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
      SwiftUI::State::set_wrappedValue((State *)(param_2 + iVar1),puVar6,puVar3);
      FUN_100005808(lVar7,&DAT_100fb8618,&DAT_100c385c0);
      param_1 = 0;
    }
  }
  else {
    FUN_100219ddc();
    if (((uint)puVar3 & 0xff) == 10) {
      FUN_100261844();
      param_1 = 0;
    }
  }
  return param_1;
}



/* Address: 0x100261844 | FUN_100261844 */

void FUN_100261844(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  State SVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  char acStack_b0 [8];
  long local_a8;
  char *local_a0;
  
  puVar5 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)(acStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar11 - extraout_x12_00;
  lVar6 = 0;
  FUN_1002abb94();
  lVar17 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  pcVar15 = (char *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar13 = pcVar15 + -extraout_x12_01;
  lVar7 = 0;
  FUN_10026516c();
  iVar3 = *(int *)(lVar7 + 0x18);
  SVar8.unknown = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  SwiftUI::State::get_wrappedValue(SVar8);
  lVar7 = lVar16;
  (**(code **)(lVar17 + 0x30))(lVar16,1,lVar6);
  if ((int)lVar7 == 1) {
    FUN_100005808(lVar16,&DAT_100fb8618,&DAT_100c385c0);
  }
  else {
    local_a8 = lVar11;
    local_a0 = acStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    FUN_1000523d8(lVar16,pcVar13,FUN_1002abb94);
    lVar7 = _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions;
    lVar11 = *(long *)(unaff_x20 + 8);
    lVar16 = *(long *)(lVar11 + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions);
    uVar9 = *(ulong *)(lVar16 + 0x10);
    _swift_bridgeObjectRetain(lVar16);
    if (uVar9 != 0) {
      uVar12 = 0;
      do {
        if (*(ulong *)(lVar16 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100261b7c);
          (*pcVar4)();
        }
        uVar10 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
        lVar14 = *(long *)(lVar17 + 0x48);
        FUN_1000c495c(lVar16 + uVar10 + lVar14 * uVar12,pcVar15,FUN_1002abb94);
        cVar1 = *pcVar15;
        cVar2 = *pcVar13;
        FUN_10005241c(pcVar15,FUN_1002abb94);
        if (cVar1 == cVar2) {
          _swift_bridgeObjectRelease(lVar16);
          lVar16 = local_a8;
          lVar7 = *(long *)(lVar11 + lVar7);
          if ((long)uVar12 < *(long *)(lVar7 + 0x10) + -1) {
            FUN_1000c495c(lVar7 + uVar10 + lVar14 + lVar14 * uVar12,local_a8,FUN_1002abb94);
            (**(code **)(lVar17 + 0x38))(lVar16,0,1,lVar6);
            pcVar15 = local_a0;
            FUN_100011090(lVar16,local_a0,&DAT_100fb8618,&DAT_100c385c0);
            SwiftUI::State::set_wrappedValue((State *)(unaff_x20 + iVar3),pcVar15,SVar8.unknown);
            FUN_100005808(lVar16,&DAT_100fb8618,&DAT_100c385c0);
            FUN_10005241c(pcVar13,FUN_1002abb94);
            return;
          }
          goto LAB_100261a6c;
        }
        uVar12 = uVar12 + 1;
      } while (uVar9 != uVar12);
    }
    _swift_bridgeObjectRelease(lVar16);
LAB_100261a6c:
    FUN_10005241c(pcVar13,FUN_1002abb94);
  }
  FUN_10000ec2c(0,&DAT_100fb90e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
  (extension_AppKit)::__C::NSSound::beep();
  return;
}



/* Address: 0x100261b7c | FUN_100261b7c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100261f2c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100261b7c(long param_1,long param_2)

{
  int iVar1;
  KeyboardShortcut KVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  LocalizedStringResource LVar8;
  undefined *puVar9;
  undefined *puVar10;
  MainActor *pMVar11;
  undefined8 *puVar12;
  UnownedSerialExecutor UVar13;
  UnownedSerialExecutor UVar14;
  State SVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  ObservedObject<undefined> OVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar19;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  KeyboardShortcut KVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined1 auStack_120 [8];
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  KeyboardShortcut local_f8;
  long local_f0;
  long local_e8;
  undefined *puStack_e0;
  long local_d8;
  long lStack_d0;
  MainActor *local_c8;
  long local_c0;
  long local_b8;
  undefined1 *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  String local_78;
  
  puVar19 = &DAT_100fb8618;
  local_a0 = param_2;
  local_88 = param_1;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_b0 = auStack_120 + -extraout_x8;
  FUN_1002abb94();
  local_d8 = *(long *)(lVar7 + -8);
  lStack_d0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  lVar7 = (long)(auStack_120 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_100fb90b0;
  local_118 = lVar7;
  FUN_1000037f0(&DAT_100fb90b0,&DAT_100c38dc8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar19 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x12;
  local_98 = lVar7;
  puStack_e0 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_e8 = *(long *)(puStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  puVar19 = (undefined *)(lVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  local_f8.unknown = puVar19;
  FUN_10026516c();
  local_110 = *(long *)(lVar7 + -8);
  lVar26 = *(long *)(local_110 + 0x40);
  local_f0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar19 - (lVar26 + 0xfU & 0xfffffffffffffff0);
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar8.unknown = (undefined *)(lVar7 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar19 = &DAT_100fb90b8;
  FUN_1000037f0(&DAT_100fb90b8,&DAT_100c38dd0);
  local_108 = *(long *)(puVar19 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  KVar23.unknown = LVar8.unknown + -extraout_x8_04;
  puVar9 = &DAT_100fb90c0;
  FUN_1000037f0(&DAT_100fb90c0,&DAT_100c38dd8);
  local_100 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar27 = (long)KVar23.unknown - extraout_x8_05;
  puVar10 = &DAT_100fb90c8;
  FUN_1000037f0(&DAT_100fb90c8,&DAT_100c38de0);
  local_c0 = *(long *)(puVar10 + -8);
  local_a8 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  lVar22 = lVar27 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar22;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_80 = lVar22 - extraout_x12_00;
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar11 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar12 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_c8 = pMVar11;
  UVar13 = Swift::Actor::get_unownedExecutor();
  UVar14 = UVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar14.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x38,UVar13.unknown,puVar12);
  }
  FUN_1001c0788(LVar8.unknown);
  local_78 = (extension_Foundation)::Swift::String::init(LVar8);
  lVar22 = local_a0;
  FUN_1000c495c(local_a0,lVar7,FUN_10026516c);
  uVar20 = (ulong)*(byte *)(local_110 + 0x50);
  uVar25 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100ec4550;
  _swift_allocObject(&DAT_100ec4550,uVar25 + lVar26,uVar20 | 7);
  FUN_1000523d8(lVar7,puVar10 + uVar25,FUN_10026516c);
  FUN_1002538a0();
  (extension_SwiftUI)::SwiftUI::Button::_init
            (KVar23.unknown,lVar7,FUN_100267124,puVar10,
             PTR___type_metadata_for_Swift_String_100eac208,lVar7);
  FUN_1001fa7a0(lVar27,2,1,1,puVar19);
  (**(code **)(local_108 + 8))(KVar23.unknown,puVar19);
  KVar2.unknown = local_f8.unknown;
  SwiftUI::KeyboardShortcut::get_cancelAction(KVar23);
  local_78.bridgeObject =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  local_78.str = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  _swift_getOpaqueTypeConformance2(&local_78,&DAT_100ca7bfc,1);
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar2);
  (**(code **)(local_e8 + 8))(KVar2.unknown,puStack_e0);
  (**(code **)(local_100 + 8))(lVar27,puVar9);
  SVar15.unknown = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  puVar3 = local_b0;
  SwiftUI::State::get_wrappedValue(SVar15);
  puVar16 = puVar3;
  (**(code **)(local_d8 + 0x30))(puVar3,1,lStack_d0);
  lVar7 = local_118;
  bVar6 = (int)puVar16 != 1;
  if (bVar6) {
    FUN_1000523d8(puVar3,local_118,FUN_1002abb94);
    lVar26 = local_98;
    FUN_1000c495c(lVar7,local_98,FUN_1002abb94);
    uVar24 = *(undefined8 *)(lVar22 + 8);
    puVar19 = &DAT_100fb90d0;
    FUN_1000037f0(&DAT_100fb90d0,&DAT_100c38de8);
    iVar1 = *(int *)(puVar19 + 0x24);
    uVar17 = 0;
    FUN_10025cdc8();
    puVar9 = &DAT_100fb7f50;
    FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
    _swift_retain(uVar24);
    OVar18 = SwiftUI::ObservedObject::init(puVar9,uVar17,puVar9);
    *(undefined8 *)(lVar26 + iVar1) = OVar18.unknown;
    ((undefined8 *)(lVar26 + iVar1))[1] = uVar17;
    iVar1 = *(int *)(puVar19 + 0x28);
    *(undefined8 *)(lVar26 + iVar1) = 0;
    ((undefined8 *)(lVar26 + iVar1))[1] = 0;
    FUN_100262310(lVar26 + *(int *)(puVar19 + 0x2c),lVar22,lVar7);
    FUN_10005241c(lVar7,FUN_1002abb94);
    pcVar21 = *(code **)(*(long *)(puVar19 + -8) + 0x38);
  }
  else {
    FUN_100005808(puVar3,&DAT_100fb8618,&DAT_100c385c0);
    puVar19 = &DAT_100fb90d0;
    FUN_1000037f0(&DAT_100fb90d0,&DAT_100c38de8);
    pcVar21 = *(code **)(*(long *)(puVar19 + -8) + 0x38);
    lVar26 = local_98;
  }
  (*pcVar21)(lVar26,!bVar6,1,puVar19);
  lVar5 = local_80;
  puVar9 = local_a8;
  lVar22 = local_b8;
  lVar7 = local_c0;
  pcVar21 = *(code **)(local_c0 + 0x10);
  (*pcVar21)(local_b8,local_80,local_a8);
  lVar27 = local_90;
  FUN_100011090(lVar26,local_90,&DAT_100fb90b0,&DAT_100c38dc8);
  lVar4 = local_88;
  (*pcVar21)(local_88,lVar22,puVar9);
  puVar19 = &DAT_100fb90d8;
  FUN_1000037f0(&DAT_100fb90d8,&DAT_100c38df0);
  puVar12 = (undefined8 *)(lVar4 + *(int *)(puVar19 + 0x30));
  *puVar12 = 0;
  *(undefined1 *)(puVar12 + 1) = 1;
  FUN_100011090(lVar27,lVar4 + *(int *)(puVar19 + 0x40),&DAT_100fb90b0,&DAT_100c38dc8);
  FUN_100005808(lVar26,&DAT_100fb90b0,&DAT_100c38dc8);
  pcVar21 = *(code **)(lVar7 + 8);
  (*pcVar21)(lVar5,puVar9);
  FUN_100005808(lVar27,&DAT_100fb90b0,&DAT_100c38dc8);
  (*pcVar21)(lVar22,puVar9);
  _swift_release(local_c8);
  return;
}



/* Address: 0x10026224c | FUN_10026224c */

void FUN_10026224c(long param_1)

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
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x39,UVar4.unknown,puVar3);
  }
  pcVar6 = *(code **)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  FUN_10026cd4c(pcVar6,uVar7,*(undefined1 *)(param_1 + 0x20));
  (*pcVar6)();
  _swift_release(pMVar2);
  _swift_release(uVar7);
  return;
}



/* Address: 0x100262310 | FUN_100262310 */

void FUN_100262310(undefined8 *param_1,long param_2,byte *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  undefined *puVar4;
  Text TVar5;
  undefined *puVar6;
  undefined1 uVar7;
  long extraout_x8;
  ulong uVar8;
  undefined8 uVar9;
  String local_50;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar9 = *(undefined8 *)(param_2 + 8);
  puVar3 = &DAT_100c38df8;
  _swift_getKeyPath();
  puVar4 = &DAT_100c38e20;
  _swift_getKeyPath(&DAT_100c38e20);
  puVar6 = puVar3;
  Combine::Published::_get_subscript(&local_50,uVar9,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (*(long *)(local_50.str + 0x10) == 0) {
LAB_100262404:
    _swift_bridgeObjectRelease(local_50.str);
  }
  else {
    uVar8 = (ulong)*param_3;
    _swift_bridgeObjectRetain(local_50.str);
    FUN_1002b0ec0();
    if (((ulong)puVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(local_50.str);
      goto LAB_100262404;
    }
    bVar1 = *(byte *)(*(long *)(local_50.str + 0x38) + uVar8);
    _swift_bridgeObjectRelease_n(local_50.str,2);
    if ((bVar1 & 1) != 0) {
      FUN_1001ccfd4(LVar2.unknown);
      goto LAB_100262414;
    }
  }
  FUN_1001cccd4(LVar2.unknown);
LAB_100262414:
  local_50 = (extension_Foundation)::Swift::String::init(LVar2);
  uVar7 = local_50.str._0_1_;
  FUN_1002538a0();
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar5 = SwiftUI::Text::_init();
  *param_1 = TVar5.unknown;
  param_1[1] = puVar3;
  *(undefined1 *)(param_1 + 2) = uVar7;
  param_1[3] = param_5;
  return;
}



/* Address: 0x10026245c | thunk_FUN_10025ff74 */

void thunk_FUN_10025ff74(void)

{
  FUN_10025ff74();
  return;
}



/* Address: 0x100262460 | FUN_100262460 */

undefined1  [16] FUN_100262460(void)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  State SVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  char *pcVar8;
  long unaff_x20;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  puVar4 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar5 = 0;
  FUN_1002abb94();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  pcVar10 = puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar8 = pcVar10 + -extraout_x12;
  FUN_10026516c();
  SVar6.unknown = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  SwiftUI::State::get_wrappedValue(SVar6);
  puVar7 = puVar12;
  (**(code **)(lVar14 + 0x30))(puVar12,1,lVar5);
  if ((int)puVar7 == 1) {
    FUN_100005808(puVar12,&DAT_100fb8618,&DAT_100c385c0);
    uVar9 = 0;
    uVar11 = 1;
  }
  else {
    FUN_1000523d8(puVar12,pcVar8,FUN_1002abb94);
    lVar5 = *(long *)(*(long *)(unaff_x20 + 8) +
                     _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions);
    uVar13 = *(ulong *)(lVar5 + 0x10);
    _swift_bridgeObjectRetain(lVar5);
    if (uVar13 != 0) {
      uVar9 = 0;
      do {
        if (*(ulong *)(lVar5 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10026266c);
          (*pcVar3)();
        }
        FUN_1000c495c(lVar5 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar14 + 0x48) * uVar9,pcVar10,FUN_1002abb94);
        cVar1 = *pcVar10;
        cVar2 = *pcVar8;
        FUN_10005241c(pcVar10,FUN_1002abb94);
        if (cVar1 == cVar2) {
          uVar11 = 0;
          goto LAB_100262628;
        }
        uVar9 = uVar9 + 1;
      } while (uVar13 != uVar9);
    }
    uVar9 = 0;
    uVar11 = 1;
LAB_100262628:
    _swift_bridgeObjectRelease(lVar5);
    FUN_10005241c(pcVar8,FUN_1002abb94);
  }
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = uVar9;
  return auVar15;
}



/* Address: 0x10026266c | FUN_10026266c */

void FUN_10026266c(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  
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
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x88,UVar4.unknown,puVar3);
  }
  lVar6 = 0;
  FUN_100266d14();
  (**(code **)(param_1 + *(int *)(lVar6 + 0x1c)))(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100262730 | FUN_100262730 */

void FUN_100262730(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  Set SVar7;
  CGFloat _all;
  undefined8 uVar8;
  undefined1 auStack_c50 [416];
  undefined1 auStack_ab0 [368];
  undefined1 auStack_940 [344];
  undefined1 auStack_7e8 [344];
  undefined *local_690;
  undefined8 local_688;
  undefined1 local_680;
  undefined1 auStack_67f [351];
  undefined *local_520;
  undefined8 local_518;
  undefined1 local_510;
  undefined1 auStack_50f [351];
  undefined1 auStack_3b0 [368];
  undefined1 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined1 auStack_210 [368];
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/AllPlansView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x8a,UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_1002629b0(auStack_210,param_6);
  _memcpy(auStack_940,auStack_210,0x151);
  _memcpy(auStack_7e8,auStack_210,0x151);
  FUN_100011090(auStack_940,auStack_3b0,&DAT_100fb91f8,&DAT_100c38ee8);
  FUN_100005808(auStack_7e8,&DAT_100fb91f8,&DAT_100c38ee8);
  SVar7.unknown = _memcpy((void *)((ulong)auStack_3b0 | 7),auStack_940,0x151);
  SVar7 = SwiftUI::Edge::Set::get_horizontal(SVar7);
  local_688 = 0;
  local_680 = 0;
  local_690 = VVar6.unknown;
  _all.unknown = _memcpy(auStack_67f,auStack_3b0,0x158);
  uVar8 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(_all);
  _memcpy(auStack_ab0,&local_690,0x169);
  local_518 = 0;
  local_510 = 0;
  local_520 = VVar6.unknown;
  _memcpy(auStack_50f,auStack_3b0,0x158);
  FUN_100011090(&local_690,auStack_210,&DAT_100fb91e0,&DAT_100c38ee0);
  FUN_100005808(&local_520,&DAT_100fb91e0,&DAT_100c38ee0);
  _memcpy(auStack_3b0,auStack_ab0,0x170);
  local_218 = 0;
  local_240 = (char)SVar7.unknown;
  local_238 = uVar8;
  local_230 = param_3;
  local_228 = param_4;
  local_220 = param_5;
  _memcpy(auStack_210,auStack_ab0,0x170);
  local_78 = 0;
  local_a0 = (char)SVar7.unknown;
  local_98 = uVar8;
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  FUN_100011090(auStack_3b0,auStack_c50,&DAT_100fb91c8,&DAT_100c38ed8);
  FUN_100005808(auStack_210,&DAT_100fb91c8,&DAT_100c38ed8);
  _swift_release(pMVar2);
  _memcpy(param_1,auStack_3b0,0x199);
  return;
}



/* Address: 0x1002629b0 | FUN_1002629b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002629b0(undefined8 *param_1,long param_2)

{
  char cVar1;
  String systemName;
  undefined *puVar2;
  ResizingMode RVar3;
  undefined7 extraout_var;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  String *pSVar9;
  Image IVar10;
  EdgeInsets capInsets;
  Color CVar11;
  _FrameLayout _Var12;
  Set _all;
  HorizontalAlignment HVar13;
  Image IVar14;
  long extraout_x8;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_8d0 [8];
  undefined *local_8c8;
  long local_8c0;
  undefined8 *local_8b8;
  MainActor *local_8b0;
  undefined1 auStack_8a8 [120];
  undefined7 uStack_830;
  undefined1 local_829;
  undefined7 uStack_828;
  undefined1 uStack_821;
  undefined7 uStack_820;
  undefined1 local_819;
  undefined1 uStack_811;
  undefined7 uStack_810;
  undefined1 local_809;
  undefined7 uStack_808;
  undefined1 uStack_801;
  undefined7 uStack_800;
  undefined1 local_7f9;
  undefined7 uStack_7f8;
  undefined1 uStack_7f1;
  undefined7 uStack_7f0;
  undefined1 uStack_7e9;
  undefined7 uStack_7e8;
  undefined1 uStack_7e1;
  undefined7 local_7e0;
  undefined1 uStack_7d9;
  undefined8 uStack_7d8;
  undefined *puStack_7d0;
  undefined *puStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined1 uStack_778;
  undefined7 local_777;
  undefined1 uStack_770;
  undefined7 uStack_76f;
  undefined1 uStack_768;
  undefined7 uStack_767;
  undefined *local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined7 uStack_6e0;
  undefined1 local_6d9;
  undefined7 uStack_6d8;
  undefined1 uStack_6d1;
  undefined7 uStack_6d0;
  undefined1 local_6c9;
  undefined7 uStack_6c8;
  undefined1 uStack_6c1;
  undefined7 uStack_6c0;
  undefined1 local_6b9;
  undefined7 uStack_6b8;
  undefined1 uStack_6b1;
  undefined7 uStack_6b0;
  undefined1 local_6a9;
  undefined7 uStack_6a8;
  undefined1 uStack_6a1;
  undefined7 uStack_6a0;
  undefined1 uStack_699;
  undefined7 uStack_698;
  undefined1 uStack_691;
  undefined7 uStack_690;
  undefined1 local_689;
  undefined7 uStack_688;
  undefined1 uStack_681;
  undefined7 uStack_680;
  undefined1 uStack_679;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined *local_660;
  undefined *puStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 uStack_608;
  undefined7 local_607;
  undefined1 uStack_600;
  undefined8 uStack_5ff;
  undefined *local_5f0;
  undefined *puStack_5e8;
  undefined8 local_5e0;
  undefined1 local_5d8;
  undefined7 uStack_5d7;
  undefined8 local_5d0;
  undefined1 uStack_5c8;
  undefined7 uStack_5c7;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined1 local_5b0;
  undefined7 uStack_5af;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 local_590;
  undefined7 uStack_58f;
  undefined1 local_588;
  undefined *local_580;
  undefined *local_578;
  undefined8 local_570;
  undefined1 local_568;
  undefined8 local_560;
  undefined1 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined1 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined1 local_518;
  undefined *local_510;
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
  undefined *local_4b0;
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
  undefined *local_448;
  undefined8 uStack_440;
  undefined1 local_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined7 uStack_42f;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined7 uStack_41f;
  undefined1 uStack_418;
  undefined7 local_417;
  undefined1 uStack_410;
  undefined7 uStack_40f;
  undefined1 uStack_408;
  undefined7 local_407;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined1 uStack_3f8;
  undefined7 local_3f7;
  undefined1 uStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined7 local_3e7;
  undefined1 uStack_3e0;
  undefined7 uStack_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined *local_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined8 local_3bf;
  undefined8 uStack_3b7;
  undefined8 local_3af;
  undefined8 uStack_3a7;
  undefined8 local_39f;
  undefined8 uStack_397;
  undefined8 local_38f;
  undefined8 uStack_387;
  undefined8 local_37f;
  undefined8 uStack_377;
  undefined8 local_36f;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 uStack_35f;
  undefined1 local_358 [64];
  undefined1 local_318;
  undefined *local_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined7 local_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 local_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 local_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 local_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined8 local_2bf;
  undefined *local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined8 local_29f;
  undefined8 uStack_297;
  undefined8 local_28f;
  undefined8 uStack_287;
  undefined8 local_27f;
  undefined8 uStack_277;
  undefined8 local_26f;
  undefined8 uStack_267;
  undefined8 local_25f;
  undefined *local_250;
  undefined *puStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined7 local_1f7;
  undefined1 uStack_1f0;
  undefined8 uStack_1ef;
  undefined *local_1e0;
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
  undefined8 local_170;
  undefined *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 local_117;
  undefined1 uStack_110;
  undefined8 uStack_10f;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *puVar4;
  
  local_8b8 = param_1;
  RVar3 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var,RVar3.value);
  lVar15 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  capInsets.unknown = auStack_8d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_8b0 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x8b,UVar7.unknown,puVar6);
  }
  pSVar9 = (String *)0x0;
  FUN_100266d14();
  cVar1 = *(char *)(param_2 + *(int *)((long)&pSVar9[1].str + 4));
  local_8c0 = param_2;
  if (cVar1 == '\x01') {
    FUN_10020c9d0();
  }
  else {
    FUN_10020cbcc();
  }
  systemName = *pSVar9;
  _swift_bridgeObjectRetain(pSVar9->bridgeObject);
  IVar10 = SwiftUI::Image::init(systemName);
  IVar14.unknown = puVar4;
  (**(code **)(lVar15 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  local_8c8 = (undefined *)
              SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar10.unknown,IVar14);
  _swift_release(IVar10.unknown);
  (**(code **)(lVar15 + 8))(capInsets.unknown,puVar4);
  if (cVar1 == '\0') {
    FUN_100218ca8();
  }
  else {
    FUN_100218d58();
  }
  CVar11 = SwiftUI::Color::init(*(NSColor **)capInsets.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar11.unknown);
  _Var12 = SwiftUI::_FrameLayout::_init((Alignment)0x4036000000000000);
  _all = SwiftUI::Edge::Set::get_trailing(_Var12.unknown);
  uVar16 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_5f0 = local_8c8;
  local_5e0 = local_a0;
  local_5d8 = local_98;
  local_5d0 = local_90;
  uStack_5c8 = local_88;
  local_5c0 = local_80;
  uStack_5b8 = uStack_78;
  local_5b0 = SUB81(_all.unknown,0);
  uStack_598 = (undefined1)uVar18;
  uStack_597 = (undefined7)((ulong)uVar18 >> 8);
  local_590 = (undefined1)uVar19;
  uStack_58f = (undefined7)((ulong)uVar19 >> 8);
  local_588 = 0;
  local_580 = local_8c8;
  local_570 = local_a0;
  local_568 = local_98;
  local_560 = local_90;
  local_558 = local_88;
  local_550 = local_80;
  local_548 = uStack_78;
  local_518 = 0;
  puStack_5e8 = CVar11.unknown;
  uStack_5a8 = uVar16;
  local_5a0 = uVar17;
  local_578 = CVar11.unknown;
  local_540 = local_5b0;
  local_538 = uVar16;
  local_530 = uVar17;
  local_528 = uVar18;
  local_520 = uVar19;
  FUN_100011090(&local_5f0,&local_1e0,&DAT_100fb9200,&DAT_100c38ef0);
  HVar13.unknown = (undefined *)&local_580;
  FUN_100005808(HVar13.unknown,&DAT_100fb9200,&DAT_100c38ef0);
  HVar13 = SwiftUI::HorizontalAlignment::get_leading(HVar13);
  lVar15 = local_8c0;
  FUN_10026313c(&local_1e0,local_8c0);
  uStack_4e8 = uStack_1b8;
  local_4f0 = local_1c0;
  uStack_4d8 = uStack_1a8;
  uStack_4e0 = uStack_1b0;
  uStack_4c8 = uStack_198;
  local_4d0 = local_1a0;
  uStack_4b8 = uStack_188;
  uStack_4c0 = uStack_190;
  uStack_508 = uStack_1d8;
  local_510 = local_1e0;
  uStack_4f8 = uStack_1c8;
  uStack_500 = uStack_1d0;
  uStack_488 = uStack_1b8;
  local_490 = local_1c0;
  uStack_478 = uStack_1a8;
  uStack_480 = uStack_1b0;
  uStack_468 = uStack_198;
  local_470 = local_1a0;
  uStack_458 = uStack_188;
  uStack_460 = uStack_190;
  uStack_4a8 = uStack_1d8;
  local_4b0 = local_1e0;
  uStack_498 = uStack_1c8;
  uStack_4a0 = uStack_1d0;
  FUN_100011090(&local_510,&local_3d0,&DAT_100fb9208,&DAT_100c38ef8);
  FUN_100005808(&local_4b0,&DAT_100fb9208,&DAT_100c38ef8);
  uStack_6d1 = (undefined1)uStack_508;
  uStack_6d0 = (undefined7)((ulong)uStack_508 >> 8);
  local_6d9 = SUB81(local_510,0);
  uStack_6d8 = (undefined7)((ulong)local_510 >> 8);
  uStack_6c1 = (undefined1)uStack_4f8;
  uStack_6c0 = (undefined7)((ulong)uStack_4f8 >> 8);
  local_6c9 = (undefined1)uStack_500;
  uStack_6c8 = (undefined7)((ulong)uStack_500 >> 8);
  uStack_6b1 = (undefined1)uStack_4e8;
  uStack_6b0 = (undefined7)((ulong)uStack_4e8 >> 8);
  local_6b9 = (undefined1)local_4f0;
  uStack_6b8 = (undefined7)((ulong)local_4f0 >> 8);
  uStack_681 = (undefined1)uStack_4b8;
  uStack_680 = (undefined7)((ulong)uStack_4b8 >> 8);
  local_689 = (undefined1)uStack_4c0;
  uStack_688 = (undefined7)((ulong)uStack_4c0 >> 8);
  uStack_691 = (undefined1)uStack_4c8;
  uStack_690 = (undefined7)((ulong)uStack_4c8 >> 8);
  uStack_699 = (undefined1)local_4d0;
  uStack_698 = (undefined7)((ulong)local_4d0 >> 8);
  uStack_6a1 = (undefined1)uStack_4d8;
  uStack_6a0 = (undefined7)((ulong)uStack_4d8 >> 8);
  local_6a9 = (undefined1)uStack_4e0;
  uStack_6a8 = (undefined7)((ulong)uStack_4e0 >> 8);
  uStack_3a7 = CONCAT17(uStack_6c1,uStack_6c8);
  local_3af = CONCAT17(local_6c9,uStack_6d0);
  uStack_40f = uStack_6b8;
  uStack_408 = uStack_6b1;
  local_417 = uStack_6c0;
  uStack_410 = local_6b9;
  uStack_3b7 = CONCAT17(uStack_6d1,uStack_6d8);
  local_3bf = CONCAT17(local_6d9,uStack_6e0);
  uStack_41f = uStack_6c8;
  uStack_418 = uStack_6c1;
  uStack_427 = uStack_6d0;
  uStack_420 = local_6c9;
  uStack_42f = uStack_6d8;
  uStack_428 = uStack_6d1;
  uStack_437 = uStack_6e0;
  uStack_430 = local_6d9;
  uStack_377 = CONCAT17(uStack_691,uStack_698);
  local_37f = CONCAT17(uStack_699,uStack_6a0);
  uStack_3df = uStack_688;
  uStack_3d8 = uStack_681;
  local_3e7 = uStack_690;
  uStack_3e0 = local_689;
  uStack_387 = CONCAT17(uStack_6a1,uStack_6a8);
  local_38f = CONCAT17(local_6a9,uStack_6b0);
  uStack_3ef = uStack_698;
  uStack_3e8 = uStack_691;
  local_3f7 = uStack_6a0;
  uStack_3f0 = uStack_699;
  uStack_397 = CONCAT17(uStack_6b1,uStack_6b8);
  local_39f = CONCAT17(local_6b9,uStack_6c0);
  uStack_3ff = uStack_6a8;
  uStack_3f8 = uStack_6a1;
  local_407 = uStack_6b0;
  uStack_400 = local_6a9;
  uStack_440 = 0x4010000000000000;
  local_438 = 0;
  local_3c8 = 0x4010000000000000;
  local_3c0 = 0;
  local_36f = CONCAT17(local_689,uStack_690);
  uStack_367 = uStack_688;
  uStack_360 = uStack_681;
  local_448 = HVar13.unknown;
  uStack_3d7 = uStack_680;
  local_3d0 = HVar13.unknown;
  uStack_35f = uStack_680;
  FUN_100011090(&local_448,&local_1e0,&DAT_100fb9210,&DAT_100c38f00);
  HVar13.unknown = (undefined *)&local_3d0;
  FUN_100005808(HVar13.unknown,&DAT_100fb9210,&DAT_100c38f00);
  HVar13 = SwiftUI::HorizontalAlignment::get_trailing(HVar13);
  FUN_1002635a4(local_358,lVar15);
  uStack_6d1 = (undefined1)local_358._8_8_;
  uStack_6d0 = SUB87(local_358._8_8_,1);
  local_6d9 = (undefined1)local_358._0_8_;
  uStack_6d8 = SUB87(local_358._0_8_,1);
  uStack_6c1 = (undefined1)local_358._24_8_;
  uStack_6c0 = SUB87(local_358._24_8_,1);
  local_6c9 = (undefined1)local_358._16_8_;
  uStack_6c8 = SUB87(local_358._16_8_,1);
  uStack_6b1 = (undefined1)local_358._40_8_;
  uStack_6b0 = SUB87(local_358._40_8_,1);
  local_6b9 = (undefined1)local_358._32_8_;
  uStack_6b8 = SUB87(local_358._32_8_,1);
  uStack_6a1 = (undefined1)local_358._56_8_;
  uStack_6a0 = SUB87(local_358._56_8_,1);
  local_6a9 = (undefined1)local_358._48_8_;
  uStack_6a8 = SUB87(local_358._48_8_,1);
  uStack_699 = local_318;
  uStack_287 = CONCAT17(uStack_6c1,uStack_6c8);
  local_28f = CONCAT17(local_6c9,uStack_6d0);
  uStack_2f7 = uStack_6d8;
  uStack_2f0 = uStack_6d1;
  local_2ff = uStack_6e0;
  uStack_2f8 = local_6d9;
  uStack_277 = CONCAT17(uStack_6b1,uStack_6b8);
  local_27f = CONCAT17(local_6b9,uStack_6c0);
  uStack_2c7 = uStack_6a8;
  uStack_2c0 = uStack_6a1;
  local_2cf = uStack_6b0;
  uStack_2c8 = local_6a9;
  uStack_2d7 = uStack_6b8;
  uStack_2d0 = uStack_6b1;
  local_2df = uStack_6c0;
  uStack_2d8 = local_6b9;
  uStack_297 = CONCAT17(uStack_6d1,uStack_6d8);
  local_29f = CONCAT17(local_6d9,uStack_6e0);
  uStack_2e7 = uStack_6c8;
  uStack_2e0 = uStack_6c1;
  local_2ef = uStack_6d0;
  uStack_2e8 = local_6c9;
  local_2bf = CONCAT17(local_318,uStack_6a0);
  local_25f = CONCAT17(local_318,uStack_6a0);
  uStack_308 = 0x4010000000000000;
  local_300 = 0;
  local_2a8 = 0x4010000000000000;
  local_2a0 = 0;
  uStack_267 = CONCAT17(uStack_6a1,uStack_6a8);
  local_26f = CONCAT17(local_6a9,uStack_6b0);
  local_310 = HVar13.unknown;
  local_2b0 = HVar13.unknown;
  FUN_100011090(&local_310,&local_1e0,&DAT_100fb9218,&DAT_100c38f08);
  FUN_100005808(&local_2b0,&DAT_100fb9218,&DAT_100c38f08);
  local_620 = CONCAT71(uStack_5af,local_5b0);
  uStack_618 = uStack_5a8;
  uStack_608 = uStack_598;
  uStack_610 = local_5a0;
  uStack_5ff = CONCAT17(local_588,uStack_58f);
  local_607 = uStack_597;
  uStack_600 = local_590;
  uStack_648 = CONCAT71(uStack_5d7,local_5d8);
  puStack_658 = puStack_5e8;
  local_660 = local_5f0;
  uStack_650 = local_5e0;
  uStack_638 = CONCAT71(uStack_5c7,uStack_5c8);
  uStack_7b8 = CONCAT71(uStack_5d7,local_5d8);
  local_640 = local_5d0;
  uStack_628 = uStack_5b8;
  uStack_630 = local_5c0;
  uStack_198 = CONCAT71(uStack_3ff,uStack_400);
  local_1a0 = CONCAT71(local_407,uStack_408);
  uStack_718 = CONCAT71(uStack_3ff,uStack_400);
  local_720 = CONCAT71(local_407,uStack_408);
  uStack_698 = (undefined7)CONCAT71(uStack_3ff,uStack_400);
  uStack_691 = (undefined1)((uint7)uStack_3ff >> 0x30);
  uStack_6a0 = (undefined7)CONCAT71(local_407,uStack_408);
  uStack_699 = (undefined1)((uint7)local_407 >> 0x30);
  uStack_688 = (undefined7)CONCAT71(uStack_3ef,uStack_3f0);
  uStack_681 = (undefined1)((uint7)uStack_3ef >> 0x30);
  uStack_690 = (undefined7)CONCAT71(local_3f7,uStack_3f8);
  local_689 = (undefined1)((uint7)local_3f7 >> 0x30);
  uStack_678 = CONCAT71(uStack_3df,uStack_3e0);
  uStack_178 = CONCAT71(uStack_3df,uStack_3e0);
  local_180 = CONCAT71(local_3e7,uStack_3e8);
  uStack_680 = (undefined7)CONCAT71(local_3e7,uStack_3e8);
  uStack_679 = (undefined1)((uint7)local_3e7 >> 0x30);
  uStack_6d8 = (undefined7)uStack_440;
  uStack_6d1 = (undefined1)((ulong)uStack_440 >> 0x38);
  uStack_6e0 = SUB87(local_448,0);
  local_6d9 = (undefined1)((ulong)local_448 >> 0x38);
  uStack_6c8 = (undefined7)CONCAT71(uStack_42f,uStack_430);
  uStack_6c1 = (undefined1)((uint7)uStack_42f >> 0x30);
  uStack_6d0 = (undefined7)CONCAT71(uStack_437,local_438);
  local_6c9 = (undefined1)((uint7)uStack_437 >> 0x30);
  uStack_1b8 = CONCAT71(uStack_41f,uStack_420);
  local_1c0 = CONCAT71(uStack_427,uStack_428);
  uStack_738 = CONCAT71(uStack_41f,uStack_420);
  local_740 = CONCAT71(uStack_427,uStack_428);
  uStack_6b8 = (undefined7)CONCAT71(uStack_41f,uStack_420);
  uStack_6b1 = (undefined1)((uint7)uStack_41f >> 0x30);
  uStack_6c0 = (undefined7)CONCAT71(uStack_427,uStack_428);
  local_6b9 = (undefined1)((uint7)uStack_427 >> 0x30);
  uStack_6a8 = (undefined7)CONCAT71(uStack_40f,uStack_410);
  uStack_6a1 = (undefined1)((uint7)uStack_40f >> 0x30);
  uStack_6b0 = (undefined7)CONCAT71(local_417,uStack_418);
  local_6a9 = (undefined1)((uint7)local_417 >> 0x30);
  uStack_e8 = CONCAT71(uStack_2f7,uStack_2f8);
  uStack_f0 = CONCAT71(local_2ff,local_300);
  uStack_f8 = uStack_308;
  local_100 = local_310;
  uStack_af = local_2bf;
  uStack_b0 = uStack_2c0;
  uStack_c0 = CONCAT71(local_2cf,uStack_2d0);
  uStack_d8 = CONCAT71(uStack_2e7,uStack_2e8);
  local_e0 = CONCAT71(local_2ef,uStack_2f0);
  uStack_c8 = CONCAT71(uStack_2d7,uStack_2d8);
  local_d0 = CONCAT71(local_2df,uStack_2e0);
  uStack_b8 = uStack_2c8;
  local_b7 = uStack_2c7;
  uStack_238 = CONCAT71(uStack_5d7,local_5d8);
  uStack_228 = CONCAT71(uStack_5c7,uStack_5c8);
  local_240 = local_5e0;
  uStack_230 = local_5d0;
  puStack_248 = puStack_5e8;
  local_250 = local_5f0;
  uStack_1ef = CONCAT17(local_588,uStack_58f);
  uStack_1f0 = local_590;
  local_790 = CONCAT71(uStack_5af,local_5b0);
  uStack_7a8 = CONCAT71(uStack_5c7,uStack_5c8);
  local_210 = CONCAT71(uStack_5af,local_5b0);
  uStack_208 = uStack_5a8;
  uStack_1f8 = uStack_598;
  local_1f7 = uStack_597;
  uStack_200 = local_5a0;
  uStack_218 = uStack_5b8;
  local_220 = local_5c0;
  local_7c0 = local_5e0;
  uStack_7b0 = local_5d0;
  uStack_76f = uStack_58f;
  uStack_768 = local_588;
  uStack_770 = local_590;
  uStack_788 = uStack_5a8;
  uStack_778 = uStack_598;
  local_777 = uStack_597;
  uStack_780 = local_5a0;
  uStack_798 = uStack_5b8;
  local_7a0 = local_5c0;
  uStack_1a8 = CONCAT71(uStack_40f,uStack_410);
  uStack_1b0 = CONCAT71(local_417,uStack_418);
  uStack_728 = CONCAT71(uStack_40f,uStack_410);
  uStack_730 = CONCAT71(local_417,uStack_418);
  uStack_1c8 = CONCAT71(uStack_42f,uStack_430);
  uStack_1d0 = CONCAT71(uStack_437,local_438);
  uStack_748 = CONCAT71(uStack_42f,uStack_430);
  uStack_750 = CONCAT71(uStack_437,local_438);
  uStack_1d8 = uStack_440;
  local_1e0 = local_448;
  uStack_188 = CONCAT71(uStack_3ef,uStack_3f0);
  uStack_190 = CONCAT71(local_3f7,uStack_3f8);
  uStack_708 = CONCAT71(uStack_3ef,uStack_3f0);
  local_710 = CONCAT71(local_3f7,uStack_3f8);
  uStack_758 = uStack_440;
  local_760 = local_448;
  uStack_6f8 = CONCAT71(uStack_3df,uStack_3e0);
  local_700 = CONCAT71(local_3e7,uStack_3e8);
  local_670 = CONCAT71(uStack_3d7,uStack_3d8);
  local_170 = CONCAT71(uStack_3d7,uStack_3d8);
  local_6f0 = CONCAT71(uStack_3d7,uStack_3d8);
  uStack_148 = CONCAT71(uStack_2f7,uStack_2f8);
  uStack_150 = CONCAT71(local_2ff,local_300);
  uStack_158 = uStack_308;
  local_160 = local_310;
  uStack_10f = local_2bf;
  uStack_110 = uStack_2c0;
  uStack_120 = CONCAT71(local_2cf,uStack_2d0);
  uStack_138 = CONCAT71(uStack_2e7,uStack_2e8);
  local_140 = CONCAT71(local_2ef,uStack_2f0);
  uStack_128 = CONCAT71(uStack_2d7,uStack_2d8);
  local_130 = CONCAT71(local_2df,uStack_2e0);
  uStack_118 = uStack_2c8;
  local_117 = uStack_2c7;
  uStack_811 = uStack_2f8;
  uStack_810 = uStack_2f7;
  local_819 = local_300;
  uStack_821 = (undefined1)uStack_308;
  uStack_820 = (undefined7)((ulong)uStack_308 >> 8);
  local_829 = SUB81(local_310,0);
  uStack_828 = (undefined7)((ulong)local_310 >> 8);
  uStack_7d8 = local_2bf;
  uStack_7d9 = uStack_2c0;
  puStack_7c8 = puStack_5e8;
  puStack_7d0 = local_5f0;
  uStack_7e1 = uStack_2c8;
  local_7e0 = uStack_2c7;
  uStack_7e9 = uStack_2d0;
  uStack_7e8 = local_2cf;
  uStack_7f1 = uStack_2d8;
  uStack_7f0 = uStack_2d7;
  local_7f9 = uStack_2e0;
  uStack_7f8 = local_2df;
  uStack_801 = uStack_2e8;
  uStack_800 = uStack_2e7;
  local_809 = uStack_2f0;
  uStack_808 = local_2ef;
  local_8b8[1] = puStack_5e8;
  *local_8b8 = local_5f0;
  local_8b8[3] = uStack_7b8;
  local_8b8[2] = local_5e0;
  local_8b8[9] = uStack_5a8;
  local_8b8[8] = local_790;
  local_8b8[0xb] = CONCAT71(uStack_597,uStack_598);
  local_8b8[10] = local_5a0;
  local_8b8[5] = uStack_7a8;
  local_8b8[4] = local_5d0;
  local_8b8[7] = uStack_5b8;
  local_8b8[6] = local_5c0;
  local_8b8[0x11] = uStack_748;
  local_8b8[0x10] = uStack_750;
  local_8b8[0x13] = uStack_738;
  local_8b8[0x12] = local_740;
  local_8b8[0xd] = CONCAT71(uStack_767,local_588);
  local_8b8[0xc] = CONCAT71(uStack_58f,local_590);
  local_8b8[0xf] = uStack_440;
  local_8b8[0xe] = local_448;
  local_8b8[0x19] = uStack_708;
  local_8b8[0x18] = local_710;
  local_8b8[0x1b] = uStack_6f8;
  local_8b8[0x1a] = local_700;
  local_8b8[0x15] = uStack_728;
  local_8b8[0x14] = uStack_730;
  local_8b8[0x17] = uStack_718;
  local_8b8[0x16] = local_720;
  local_8b8[0x1c] = local_6f0;
  local_8b8[0x1d] = 0;
  *(undefined1 *)(local_8b8 + 0x1e) = 1;
  *(ulong *)((long)local_8b8 + 0x129) = CONCAT17(uStack_2d8,local_2df);
  *(ulong *)((long)local_8b8 + 0x121) = CONCAT17(uStack_2e0,uStack_2e7);
  *(ulong *)((long)local_8b8 + 0x139) = CONCAT17(uStack_2c8,local_2cf);
  *(ulong *)((long)local_8b8 + 0x131) = CONCAT17(uStack_2d0,uStack_2d7);
  *(undefined8 *)((long)local_8b8 + 0x149) = local_2bf;
  *(ulong *)((long)local_8b8 + 0x141) = CONCAT17(uStack_2c0,uStack_2c7);
  *(ulong *)((long)local_8b8 + 0xf9) = CONCAT17(uStack_821,uStack_828);
  *(ulong *)((long)local_8b8 + 0xf1) = CONCAT17(local_829,uStack_830);
  *(ulong *)((long)local_8b8 + 0x109) = CONCAT17(uStack_2f8,local_2ff);
  *(ulong *)((long)local_8b8 + 0x101) = CONCAT17(local_300,uStack_820);
  *(ulong *)((long)local_8b8 + 0x119) = CONCAT17(uStack_2e8,local_2ef);
  *(ulong *)((long)local_8b8 + 0x111) = CONCAT17(uStack_2f0,uStack_2f7);
  FUN_100011090(&local_250,auStack_8a8,&DAT_100fb9200,&DAT_100c38ef0);
  FUN_100011090(&local_1e0,auStack_8a8,&DAT_100fb9210,&DAT_100c38f00);
  FUN_100011090(&local_160,auStack_8a8,&DAT_100fb9218,&DAT_100c38f08);
  FUN_100005808(&local_100,&DAT_100fb9218,&DAT_100c38f08);
  FUN_100005808(&uStack_6e0,&DAT_100fb9210,&DAT_100c38f00);
  FUN_100005808(&local_660,&DAT_100fb9200,&DAT_100c38ef0);
  _swift_release(local_8b0);
  return;
}



/* Address: 0x10026313c | FUN_10026313c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100263228 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10026313c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  HierarchicalShapeStyle param_5)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  HierarchicalShapeStyle HVar10;
  Text TVar11;
  undefined8 *puVar12;
  Text TVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar18 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar18,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  puVar12 = puVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/AllPlansView.swift";
    puVar12 = (undefined8 *)0x29;
    param_5.unknown = (undefined *)0x93;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x93,UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_1002633f0(&local_88);
  puVar3 = puStack_80;
  uVar1 = local_88;
  FUN_1002aa62c();
  if (puVar12 == (undefined8 *)0x0) {
    TVar11.unknown = (undefined *)0x0;
    TVar7.unknown = (undefined *)0x0;
    uVar17 = 0;
    puVar18 = (undefined *)0x0;
  }
  else {
    local_88 = param_2;
    puStack_80 = puVar12;
    FUN_1002538a0();
    puVar18 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar7 = SwiftUI::Text::_init(param_2,PTR___type_metadata_for_Swift_String_100eac208,param_2);
    FVar8 = SwiftUI::Font::get_callout(TVar7.unknown);
    TVar13 = TVar7;
    puVar14 = puVar18;
    uVar16 = param_2;
    TVar9 = SwiftUI::Text::_font(FVar8.unknown);
    _swift_release(FVar8.unknown);
    FUN_100016d74(TVar7.unknown,puVar18,param_2);
    _swift_bridgeObjectRelease();
    HVar10 = SwiftUI::HierarchicalShapeStyle::get_secondary(param_5);
    local_88 = CONCAT44(local_88._4_4_,(int)HVar10.unknown);
    FUN_1002687fc();
    TVar7 = TVar9;
    puVar15 = TVar13.unknown;
    puVar18 = puVar14;
    TVar11 = SwiftUI::Text::_foregroundStyle();
    FUN_100016d74(TVar9.unknown,TVar13.unknown,puVar14);
    _swift_bridgeObjectRelease(uVar16);
    uVar17 = (ulong)puVar15 & 0xff;
    FUN_100016d5c(TVar11.unknown,TVar7.unknown,puVar15);
    _swift_bridgeObjectRetain(puVar18);
  }
  FUN_100016d5c(uVar1,puVar3,local_78);
  _swift_bridgeObjectRetain(local_70);
  FUN_100020200(TVar11.unknown,TVar7.unknown,uVar17,puVar18);
  FUN_10002022c(TVar11.unknown,TVar7.unknown,uVar17,puVar18);
  *param_1 = VVar6.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = uVar1;
  param_1[4] = puVar3;
  *(undefined1 *)(param_1 + 5) = local_78;
  param_1[6] = local_70;
  *(undefined1 *)(param_1 + 7) = local_68;
  param_1[8] = TVar11.unknown;
  param_1[9] = TVar7.unknown;
  param_1[10] = uVar17;
  param_1[0xb] = puVar18;
  FUN_10002022c(TVar11.unknown,TVar7.unknown,uVar17,puVar18);
  FUN_100016d74(uVar1,puVar3,local_78);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(local_70);
  return;
}



/* Address: 0x1002633f0 | FUN_1002633f0 */

void FUN_1002633f0(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Text TVar6;
  undefined *puVar7;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/AllPlansView.swift";
    param_5 = 0x94;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0x94,UVar4.unknown,puVar3);
  }
  cVar1 = *param_2;
  FUN_1002538a0();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(char *)(param_1 + 2) = (char)pcVar5;
  param_1[3] = param_5;
  *(bool *)(param_1 + 4) = cVar1 != '\x01';
  FUN_100016d5c();
  _swift_bridgeObjectRetain(param_5);
  FUN_100016d74(TVar6.unknown,puVar7,pcVar5);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(param_5);
  return;
}



/* Address: 0x1002635a4 | FUN_1002635a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100263f30 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002635a4(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  Font param_5,undefined *param_6,code *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  CharacterSet CVar2;
  undefined *puVar3;
  LocalizedStringResource LVar4;
  long lVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  String *pSVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  LocalizedStringKey LVar14;
  Font FVar15;
  char *pcVar16;
  Text TVar17;
  HierarchicalShapeStyle HVar18;
  Text TVar19;
  Text TVar20;
  Color CVar21;
  Text TVar22;
  Font FVar23;
  code *pcVar24;
  undefined8 uVar25;
  void *pvVar26;
  undefined *puVar28;
  ulong uVar29;
  undefined *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long extraout_x8;
  long extraout_x8_00;
  StringInterpolation *pSVar34;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar35;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar36;
  long lVar37;
  code *pcVar38;
  String *pSVar39;
  String *pSVar40;
  undefined *puVar41;
  ulong uVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  StringInterpolation SVar48;
  StringInterpolation SVar49;
  StringInterpolation SVar50;
  StringInterpolation SVar51;
  StringInterpolation SVar52;
  StringInterpolation SVar53;
  StringInterpolation SVar54;
  StringInterpolation SVar55;
  StringInterpolation SVar56;
  StringInterpolation SVar57;
  StringInterpolation stringInterpolation;
  StringInterpolation stringInterpolation_00;
  undefined8 uStack_170;
  undefined2 auStack_168 [4];
  undefined1 auStack_160 [24];
  CharacterSet local_148;
  undefined *local_140;
  undefined *local_138;
  StringInterpolation *local_130;
  ulong local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  MainActor *local_108;
  undefined8 *local_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  String local_b0;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined *local_98;
  undefined *local_90;
  undefined *puStack_88;
  ulong local_80;
  undefined *local_78;
  undefined1 local_70;
  undefined1 *puVar27;
  
  local_100 = param_1;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_138 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_140 = *(undefined **)(local_138 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_140 + 0x40));
  pSVar34 = (StringInterpolation *)(LVar4.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  local_148.unknown = (undefined *)pSVar34;
  SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor(pSVar34);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pSVar34 = (StringInterpolation *)((long)pSVar34 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_130 = pSVar34;
  local_110 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_118 = *(undefined **)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_118 + 0x40));
  lVar5 = (long)pSVar34 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_120 = (undefined *)lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar5 - extraout_x12;
  puVar41 = &DAT_100fb8db8;
  local_128 = lVar5;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar41 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pSVar39 = (String *)(lVar5 - extraout_x8_03);
  lVar5 = 0;
  FUN_1002abbf0();
  lVar37 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar37 + 0x40));
  pSVar40 = (String *)((long)pSVar39 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar35 = (long)pSVar40 - extraout_x12_00;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar41 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  pcVar38 = (code *)&DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar41,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_108 = pMVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  pcVar24 = pcVar38;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    pcVar24 = (code *)0x29;
    param_5.unknown = (undefined *)0xa7;
    _swift_task_reportUnexpectedExecutor("PasteLicensingAppStore/AllPlansView.swift",0x29,1);
    param_6 = UVar7.unknown;
    param_7 = pcVar38;
  }
  pSVar9 = (String *)0x0;
  FUN_100266d14();
  if (param_2[*(int *)&pSVar9[1].bridgeObject] == '\x01') {
    lVar10 = 0;
    FUN_1002abb94();
    param_5.unknown = &DAT_100c38680;
    FUN_100011090(param_2 + *(int *)(lVar10 + 0x18),pSVar39,&DAT_100fb8db8);
    pSVar9 = pSVar39;
    (**(code **)(lVar37 + 0x30))(pSVar39,1,lVar5);
    if ((int)pSVar9 == 1) {
      pcVar24 = (code *)&DAT_100fb8db8;
      FUN_100005808(pSVar39,&DAT_100fb8db8,&DAT_100c38680);
      pSVar9 = pSVar39;
    }
    else {
      pcVar24 = FUN_1002abbf0;
      FUN_1000523d8(pSVar39,lVar35,FUN_1002abbf0);
      FUN_1000c495c(lVar35,pSVar40,FUN_1002abbf0);
      pSVar39 = pSVar40;
      _swift_getEnumCaseMultiPayload(pSVar40,lVar5);
      if ((int)pSVar39 == 1) {
        pvVar26 = pSVar40->bridgeObject;
        SVar43 = *pSVar40;
        puVar41 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        puVar28 = local_110;
        iVar1 = *(int *)(puVar41 + 0x40);
        pcVar38 = *(code **)((long)local_118 + 0x20);
        auStack_160._8_8_ = lVar35;
        (*pcVar38)(local_128,(long)&pSVar40->str + (long)*(int *)(puVar41 + 0x30),local_110);
        (*pcVar38)(local_120,(long)&pSVar40->str + (long)iVar1);
        pSVar34 = local_130;
        SwiftUI::LocalizedStringKey::StringInterpolation::init(local_130,1,2);
        SVar48.message.bridgeObject = param_5.unknown;
        SVar48.message.str = puVar28;
        SVar48.template.bridgeObject = (void *)param_8;
        SVar48.template.str = (char *)param_7;
        SVar48._16_8_ = param_6;
        SVar48.interpolationCount = param_9;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar48);
        SVar49.message.bridgeObject = param_5.unknown;
        SVar49.message.str = puVar28;
        SVar49.template.bridgeObject = (void *)param_8;
        SVar49.template.str = (char *)param_7;
        SVar49._16_8_ = param_6;
        SVar49.interpolationCount = param_9;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar43,SVar49);
        _swift_bridgeObjectRelease(pvVar26);
        SVar43.bridgeObject = (void *)0xe100000000000000;
        SVar43.str = (char *)0x2f;
        uVar25 = 0xe100000000000000;
        uVar11 = 0x2f;
        SVar50.message.bridgeObject = param_5.unknown;
        SVar50.message.str = puVar28;
        SVar50.template.bridgeObject = (void *)param_8;
        SVar50.template.str = (char *)param_7;
        SVar50._16_8_ = param_6;
        SVar50.interpolationCount = param_9;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar43,SVar50);
        FUN_1002aa94c();
        local_b0.bridgeObject = (void *)uVar25;
        local_b0.str = (char *)uVar11;
        puVar41 = &DAT_100fb9240;
        FUN_1000037f0(&DAT_100fb9240,&DAT_100c38f20);
        _swift_initStaticObject();
        puVar28 = &DAT_100fb9248;
        local_f8 = puVar41;
        FUN_100003a00(&DAT_100fb9248,PTR_typeMetadataAccessor_100ea6b68,
                      PTR_Foundation__Foundation__CharacterSet_>Swift__SetAlgebra_100ea6b78);
        puVar41 = &DAT_100fb9250;
        FUN_1000037f0(&DAT_100fb9250,&DAT_100c3c340);
        puVar12 = &DAT_100fb9258;
        FUN_100016eac(&DAT_100fb9258,&DAT_100fb9250,&DAT_100c3c340,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
        puVar3 = local_138;
        CVar2.unknown = local_148.unknown;
        ppuVar13 = &local_f8;
        puVar30 = local_138;
        Swift::SetAlgebra::_init(local_148.unknown,ppuVar13,puVar41,puVar12);
        FUN_1002538a0();
        SVar43 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar2);
        (**(code **)((long)local_140 + 8))(CVar2.unknown,puVar3);
        _swift_bridgeObjectRelease(uVar25);
        SVar51.message.bridgeObject = puVar30;
        SVar51.message.str = (char *)ppuVar13;
        SVar51.template.bridgeObject = (void *)param_8;
        SVar51.template.str = (char *)param_7;
        SVar51._16_8_ = puVar28;
        SVar51.interpolationCount = param_9;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar43,SVar51);
        _swift_bridgeObjectRelease(SVar43.bridgeObject);
        uVar25 = 0xe000000000000000;
        SVar52.message.bridgeObject = puVar30;
        SVar52.message.str = (char *)ppuVar13;
        SVar52.template.bridgeObject = (void *)param_8;
        SVar52.template.str = (char *)param_7;
        SVar52._16_8_ = puVar28;
        SVar52.interpolationCount = param_9;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar52);
        stringInterpolation.message.bridgeObject = (void *)uVar25;
        stringInterpolation.message.str = (char *)pSVar34;
        stringInterpolation.template.bridgeObject = puVar28;
        stringInterpolation.template.str = puVar30;
        stringInterpolation._16_8_ = ppuVar13;
        stringInterpolation.interpolationCount = (__int64)param_7;
        LVar14 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
        *(undefined2 *)(lVar35 + -8) = 0x100;
        *(undefined8 *)(lVar35 + -0x10) = 0;
        puVar28 = (undefined *)(ulong)((uint)ppuVar13 & 1);
        uVar31 = 0;
        uVar32 = 0;
        uVar33 = 0;
        TVar20 = SwiftUI::Text::_init(LVar14);
        FVar23 = SwiftUI::Font::get_body(TVar20.unknown);
        FVar15 = SwiftUI::Font::bold(FVar23);
        _swift_release(FVar23.unknown);
        TVar19 = TVar20;
        uVar11 = uVar25;
        HVar18.unknown = puVar28;
        puVar41 = puVar30;
        auStack_160._16_8_ = SwiftUI::Text::_font((Text)FVar15.unknown);
        local_148.unknown._0_4_ = (int)uVar11;
        local_140 = TVar19.unknown;
        local_138 = HVar18.unknown;
        _swift_release(FVar15.unknown);
        FUN_100016d74(TVar20.unknown,uVar25);
        _swift_bridgeObjectRelease(puVar30);
        SwiftUI::LocalizedStringKey::StringInterpolation::init(pSVar34,7,2);
        pvVar26 = (void *)0xe000000000000000;
        pcVar16 = (char *)0x0;
        SVar53.message.bridgeObject = HVar18.unknown;
        SVar53.message.str = puVar28;
        SVar53.template.bridgeObject = (void *)uVar32;
        SVar53.template.str = (char *)uVar31;
        SVar53._16_8_ = puVar41;
        SVar53.interpolationCount = uVar33;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar53);
        FUN_1002aa6e0();
        SVar44.bridgeObject = pvVar26;
        SVar44.str = pcVar16;
        SVar54.message.bridgeObject = HVar18.unknown;
        SVar54.message.str = puVar28;
        SVar54.template.bridgeObject = (void *)uVar32;
        SVar54.template.str = (char *)uVar31;
        SVar54._16_8_ = puVar41;
        SVar54.interpolationCount = uVar33;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar44,SVar54);
        _swift_bridgeObjectRelease(pvVar26);
        pcVar16 = (char *)0x20726574666120;
        SVar45.bridgeObject = &DAT_e700000000000000;
        SVar45.str = (char *)0x20726574666120;
        puVar27 = &DAT_e700000000000000;
        SVar55.message.bridgeObject = HVar18.unknown;
        SVar55.message.str = puVar28;
        SVar55.template.bridgeObject = (void *)uVar32;
        SVar55.template.str = (char *)uVar31;
        SVar55._16_8_ = puVar41;
        SVar55.interpolationCount = uVar33;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar45,SVar55);
        FUN_1002aa94c();
        SVar46.bridgeObject = puVar27;
        SVar46.str = pcVar16;
        SVar56.message.bridgeObject = HVar18.unknown;
        SVar56.message.str = puVar28;
        SVar56.template.bridgeObject = (void *)uVar32;
        SVar56.template.str = (char *)uVar31;
        SVar56._16_8_ = puVar41;
        SVar56.interpolationCount = uVar33;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar46,SVar56);
        _swift_bridgeObjectRelease(puVar27);
        uVar25 = 0xe000000000000000;
        SVar57.message.bridgeObject = HVar18.unknown;
        SVar57.message.str = puVar28;
        SVar57.template.bridgeObject = (void *)uVar32;
        SVar57.template.str = (char *)uVar31;
        SVar57._16_8_ = puVar41;
        SVar57.interpolationCount = uVar33;
        SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
                  ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar57);
        stringInterpolation_00.message.bridgeObject = (void *)uVar25;
        stringInterpolation_00.message.str = (char *)pSVar34;
        stringInterpolation_00.template.bridgeObject = puVar41;
        stringInterpolation_00.template.str = HVar18.unknown;
        stringInterpolation_00._16_8_ = puVar28;
        stringInterpolation_00.interpolationCount = uVar31;
        LVar14 = SwiftUI::LocalizedStringKey::init(stringInterpolation_00);
        *(undefined2 *)(lVar35 + -8) = 0x100;
        *(undefined8 *)(lVar35 + -0x10) = 0;
        uVar29 = (ulong)((uint)puVar28 & 1);
        TVar20 = SwiftUI::Text::_init(LVar14);
        FVar23 = SwiftUI::Font::get_callout(TVar20.unknown);
        TVar19 = TVar20;
        uVar11 = uVar25;
        uVar36 = uVar29;
        TVar17 = SwiftUI::Text::_font(FVar23.unknown);
        _swift_release(FVar23.unknown);
        FUN_100016d74(TVar20.unknown,uVar25,uVar29);
        _swift_bridgeObjectRelease();
        HVar18 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar18);
        local_b0.str._0_4_ = (int)HVar18.unknown;
        FUN_1002687fc();
        TVar20 = TVar17;
        puVar12 = TVar19.unknown;
        uVar25 = uVar11;
        TVar22 = SwiftUI::Text::_foregroundStyle();
        FUN_100016d74(TVar17.unknown,TVar19.unknown,uVar11);
        _swift_bridgeObjectRelease(uVar36);
        puVar41 = local_140;
        CVar2.unknown = local_148.unknown;
        uVar11 = auStack_160._16_8_;
        uVar36 = (ulong)local_148.unknown & 0xffffffff;
        FUN_100016d5c(auStack_160._16_8_,local_140,uVar36);
        puVar28 = local_138;
        _swift_bridgeObjectRetain(local_138);
        FUN_100016d5c(TVar22.unknown,TVar20.unknown,puVar12);
        _swift_bridgeObjectRetain(uVar25);
        FUN_100016d5c(uVar11,puVar41,uVar36);
        _swift_bridgeObjectRetain(puVar28);
        FUN_100016d5c(TVar22.unknown,TVar20.unknown,puVar12);
        _swift_bridgeObjectRetain(uVar25);
        FUN_100016d74(TVar22.unknown,TVar20.unknown,puVar12);
        _swift_bridgeObjectRelease(uVar25);
        FUN_100016d74(uVar11,puVar41,uVar36);
        _swift_bridgeObjectRelease(puVar28);
        local_b0.bridgeObject = puVar41;
        local_b0.str = (char *)uVar11;
        _local_a0 = CONCAT71(uStack_9f,(char)CVar2.unknown);
        local_98 = puVar28;
        local_80 = CONCAT71(local_80._1_7_,(char)puVar12);
        local_70 = 0;
        local_90 = TVar22.unknown;
        puStack_88 = TVar20.unknown;
        local_78 = (undefined *)uVar25;
        FUN_1000037f0(&DAT_100fb9220,&DAT_100c38f10);
        FUN_1000037f0(&DAT_100fb9228,&DAT_100c38f18);
        puVar41 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
        FUN_100016eac(&DAT_100fb9230,&DAT_100fb9220,&DAT_100c38f10,
                      PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
        FUN_100016eac(&DAT_100fb9238,&DAT_100fb9228,&DAT_100c38f18,puVar41);
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
                  ((Storage)((char)&stack0xfffffffffffffff0 + 0x60));
        FUN_100016d74(TVar22.unknown,TVar20.unknown,puVar12);
        _swift_bridgeObjectRelease(uVar25);
        FUN_100016d74(auStack_160._16_8_,local_140,(ulong)local_148.unknown & 0xffffffff);
        _swift_bridgeObjectRelease(local_138);
        puVar41 = local_110;
        pcVar38 = *(code **)((long)local_118 + 8);
        (*pcVar38)(local_120,local_110);
        (*pcVar38)(local_128,puVar41);
        FUN_10005241c(auStack_160._8_8_,FUN_1002abbf0);
        _swift_release(local_108);
        goto LAB_1002641e8;
      }
      FUN_10005241c(lVar35,FUN_1002abbf0);
      FUN_10005241c();
      pSVar9 = pSVar40;
    }
  }
  FUN_100264258();
  local_b0.bridgeObject = pcVar24;
  local_b0.str = (char *)pSVar9;
  FUN_1002538a0();
  puVar41 = PTR___type_metadata_for_Swift_String_100eac208;
  pSVar39 = pSVar9;
  TVar19 = SwiftUI::Text::_init();
  local_128 = CONCAT44(local_128._4_4_,(int)pSVar39);
  local_120 = puVar41;
  local_118 = TVar19.unknown;
  local_110 = param_5.unknown;
  if (*param_2 == '\x05') {
    FUN_1001c9554(LVar4.unknown);
    SVar47 = (extension_Foundation)::Swift::String::init(LVar4);
LAB_100263f1c:
    puVar41 = PTR___type_metadata_for_Swift_String_100eac208;
    local_b0 = SVar47;
    TVar20 = SwiftUI::Text::_init
                       (TVar19.unknown,PTR___type_metadata_for_Swift_String_100eac208,pSVar9);
    TVar19 = TVar20;
    FUN_1002199e8();
    CVar21 = SwiftUI::Color::init(*(NSColor **)TVar19.unknown);
    TVar17 = TVar20;
    puVar28 = puVar41;
    pSVar39 = pSVar9;
    TVar22 = SwiftUI::Text::_foregroundColor(CVar21.unknown);
    _swift_release(CVar21.unknown);
    FUN_100016d74(TVar20.unknown,puVar41,pSVar9);
    _swift_bridgeObjectRelease();
    FVar23 = SwiftUI::Font::get_callout(param_5);
    TVar19 = TVar22;
    puVar12 = TVar17.unknown;
    puVar41 = puVar28;
    TVar20 = SwiftUI::Text::_font(FVar23.unknown);
    _swift_release(FVar23.unknown);
    FUN_100016d74(TVar22.unknown,TVar17.unknown,puVar28);
    _swift_bridgeObjectRelease(pSVar39);
    uVar36 = (ulong)puVar12 & 0xff;
    FUN_100016d5c(TVar20.unknown,TVar19.unknown,puVar12);
    _swift_bridgeObjectRetain(puVar41);
  }
  else {
    FUN_1002aaa04();
    SVar47.bridgeObject = puVar41;
    SVar47.str = TVar19.unknown;
    if (puVar41 != (undefined *)0x0) goto LAB_100263f1c;
    TVar20.unknown = (undefined *)0x0;
    TVar19.unknown = (undefined *)0x0;
    uVar36 = 0;
    puVar41 = (undefined *)0x0;
  }
  puVar3 = local_118;
  puVar12 = local_120;
  uVar29 = local_128;
  uVar42 = local_128 & 0xffffffff;
  local_130 = (StringInterpolation *)uVar36;
  FUN_100016d5c(local_118,local_120,uVar42);
  puVar30 = local_110;
  _swift_bridgeObjectRetain(local_110);
  FUN_100016d5c(puVar3,puVar12,uVar42);
  _swift_bridgeObjectRetain(puVar30);
  FUN_100020200(TVar20.unknown,TVar19.unknown,uVar36,puVar41);
  FUN_10002022c(TVar20.unknown,TVar19.unknown,uVar36,puVar41);
  FUN_100016d74(puVar3,puVar12,uVar42);
  _swift_bridgeObjectRelease(puVar30);
  local_b0.bridgeObject = puVar12;
  local_b0.str = puVar3;
  _local_a0 = CONCAT71(uStack_9f,(char)uVar29);
  local_98 = puVar30;
  local_70 = 1;
  local_90 = TVar20.unknown;
  puStack_88 = TVar19.unknown;
  local_80 = uVar36;
  local_78 = puVar41;
  FUN_100016d5c(puVar3,puVar12,uVar42);
  _swift_bridgeObjectRetain(puVar30);
  FUN_100020200(TVar20.unknown,TVar19.unknown,uVar36,puVar41);
  puVar28 = &DAT_100fb9220;
  FUN_1000037f0(&DAT_100fb9220,&DAT_100c38f10);
  local_138 = puVar28;
  FUN_1000037f0(&DAT_100fb9228,&DAT_100c38f18);
  puVar28 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
  FUN_100016eac(&DAT_100fb9230,&DAT_100fb9220,&DAT_100c38f10,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  FUN_100016eac(&DAT_100fb9238,&DAT_100fb9228,&DAT_100c38f18,puVar28);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x60));
  pSVar34 = local_130;
  FUN_10002022c(TVar20.unknown,TVar19.unknown,local_130,puVar41);
  FUN_100016d74(puVar3,puVar12,uVar42);
  _swift_bridgeObjectRelease(puVar30);
  FUN_10002022c(TVar20.unknown,TVar19.unknown,pSVar34,puVar41);
  FUN_100016d74(puVar3,puVar12,uVar42);
  _swift_release(local_108);
  _swift_bridgeObjectRelease(puVar30);
LAB_1002641e8:
  local_100[5] = uStack_d0;
  local_100[4] = local_d8;
  local_100[7] = uStack_c0;
  local_100[6] = local_c8;
  *(undefined1 *)(local_100 + 8) = local_b8;
  local_100[1] = uStack_f0;
  *local_100 = local_f8;
  local_100[3] = uStack_e0;
  local_100[2] = local_e8;
  return;
}



/* Address: 0x100264258 | FUN_100264258 */

String FUN_100264258(void)

{
  CharacterSet CVar1;
  undefined *puVar2;
  long lVar3;
  DateComponents DVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  CharacterSet CVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  CharacterSet in;
  Product PVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  long local_90;
  undefined *local_78;
  String local_70;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  in.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar10.unknown = in.unknown + -extraout_x8_00;
  lVar3 = 0;
  FUN_1002abb94();
  FUN_100011090(unaff_x20 + *(int *)(lVar3 + 0x14),PVar10.unknown,&DAT_100fb86e0,&DAT_100c38670);
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  lVar3 = *(long *)(DVar4.unknown + -8);
  uVar8 = 1;
  puVar2 = PVar10.unknown;
  (**(code **)(lVar3 + 0x30))(PVar10.unknown,1,DVar4.unknown);
  if ((int)puVar2 == 1) {
    FUN_100005808(PVar10.unknown,&DAT_100fb86e0,&DAT_100c38670);
    local_70 = StoreKit::Product::get_displayPrice(PVar10);
  }
  else {
    FUN_1002aa94c();
    local_70.bridgeObject = (void *)uVar8;
    local_70.str = puVar2;
    puVar2 = &DAT_100fb9240;
    FUN_1000037f0(&DAT_100fb9240,&DAT_100c38f20);
    _swift_initStaticObject();
    puVar5 = &DAT_100fb9248;
    local_78 = puVar2;
    FUN_100003a00(&DAT_100fb9248,PTR_typeMetadataAccessor_100ea6b68,
                  PTR_Foundation__Foundation__CharacterSet_>Swift__SetAlgebra_100ea6b78);
    puVar2 = &DAT_100fb9250;
    local_90 = lVar11;
    FUN_1000037f0(&DAT_100fb9250,&DAT_100c3c340);
    puVar6 = &DAT_100fb9258;
    FUN_100016eac(&DAT_100fb9258,&DAT_100fb9250,&DAT_100c3c340,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    ppuVar7 = &local_78;
    CVar9 = CVar1;
    Swift::SetAlgebra::_init(in.unknown,ppuVar7,puVar2,puVar6,CVar1.unknown,puVar5);
    FUN_1002538a0();
    SVar12 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(local_90 + 8))(in.unknown,CVar1.unknown);
    _swift_bridgeObjectRelease(uVar8);
    (**(code **)(lVar3 + 8))(PVar10.unknown,DVar4.unknown);
    local_70 = StoreKit::Product::get_displayPrice(PVar10);
    SVar13.bridgeObject = (void *)0xe100000000000000;
    SVar13.str = (char *)0x2f;
    SVar14.bridgeObject = CVar9.unknown;
    SVar14.str = (char *)ppuVar7;
    Swift::String::append(SVar13,SVar14);
    SVar15.bridgeObject = CVar9.unknown;
    SVar15.str = (char *)ppuVar7;
    Swift::String::append(SVar12,SVar15);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
  }
  return local_70;
}



/* Address: 0x1002644d4 | FUN_1002644d4 */

void FUN_1002644d4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_80 [8];
  undefined8 local_78;
  
  lVar6 = *(long *)(param_2 + -8);
  lVar8 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar1 = &DAT_100fb91c0;
  FUN_1000037f0(&DAT_100fb91c0,&DAT_100c38ed0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000c495c();
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ec45a0;
  _swift_allocObject(&DAT_100ec45a0,uVar7 + lVar8,uVar4 | 7);
  FUN_1000523d8(local_80 + -(lVar8 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar7,FUN_100266d14);
  FUN_1000037f0(&DAT_100fb91c8,&DAT_100c38ed8);
  FUN_100268724();
  SwiftUI::Button::_init();
  local_80[0] = *(undefined1 *)(unaff_x20 + *(int *)(param_2 + 0x14));
  local_78 = 0x402c000000000000;
  puVar2 = &DAT_100fb91e8;
  FUN_100016eac(&DAT_100fb91e8,&DAT_100fb91c0,&DAT_100c38ed0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = puVar2;
  FUN_1002687bc();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (param_1,local_80,puVar1,&DAT_100ec4620,puVar2,puVar3);
  (**(code **)(lVar5 + 8))
            ((long)(local_80 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8,puVar1);
  return;
}



/* Address: 0x100264690 | FUN_100264690 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100264690(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  Design DVar5;
  RoundedCornerStyle RVar6;
  undefined *puVar7;
  LocalizedStringResource LVar8;
  Text TVar9;
  undefined7 extraout_var;
  Font FVar10;
  Font FVar11;
  Text TVar12;
  Set _all;
  EdgeInsets EVar13;
  Set _all_00;
  RoundedRectangle RVar14;
  undefined7 extraout_var_00;
  NSColor *pNVar15;
  Color CVar16;
  Alignment AVar17;
  undefined *puVar18;
  void *pvVar19;
  Text TVar20;
  Set in_x3;
  void *pvVar21;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  String SVar29;
  undefined1 auStack_330 [8];
  undefined8 *local_328;
  undefined1 auStack_320 [128];
  char *local_2a0;
  undefined *puStack_298;
  undefined8 local_290;
  void *pvStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 local_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  char *local_250;
  undefined *puStack_248;
  undefined1 local_240;
  undefined7 uStack_23f;
  void *local_238;
  undefined1 local_230;
  undefined7 uStack_22f;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined1 local_1f0;
  void *local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  char *local_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  void *pvStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  String local_130;
  undefined8 local_120;
  void *pvStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  
  puVar7 = &DAT_100fb92d0;
  local_328 = param_1;
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = auStack_330 + -extraout_x8;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  FUN_1001c93d4(puVar22 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  SVar29 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (puVar22 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  pvVar19 = SVar29.bridgeObject;
  SVar29 = Swift::String::uppercased(SVar29);
  _swift_bridgeObjectRelease();
  local_130 = SVar29;
  FUN_1002538a0();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar9 = SwiftUI::Text::_init();
  DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
            (puVar22,1,1,CONCAT71(extraout_var,DVar5.value));
  FVar10 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_100005808(puVar22,&DAT_100fb92d0,&DAT_100c3abc0);
  FVar11 = SwiftUI::Font::bold(FVar10);
  _swift_release(FVar10.unknown);
  TVar20 = TVar9;
  puVar18 = puVar7;
  pvVar21 = pvVar19;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100016d74(TVar9.unknown,puVar7,pvVar19);
  _swift_bridgeObjectRelease();
  _all = SwiftUI::Edge::Set::get_horizontal(in_x3);
  uVar23 = 0x4018000000000000;
  EVar13 = SwiftUI::EdgeInsets::init(_all.unknown);
  uVar26 = param_3;
  uVar27 = param_4;
  uVar28 = param_5;
  _all_00 = SwiftUI::Edge::Set::get_vertical(EVar13.unknown);
  local_218 = (undefined1)param_4;
  uStack_217 = (undefined7)((ulong)param_4 >> 8);
  uStack_210 = (undefined1)param_5;
  uStack_20f = (undefined7)((ulong)param_5 >> 8);
  uStack_208 = 0;
  uVar24 = 0x4000000000000000;
  local_250 = (char *)TVar12;
  puStack_248 = TVar20.unknown;
  local_240 = (char)puVar18;
  local_238 = pvVar21;
  local_230 = (char)_all.unknown;
  uStack_228 = uVar23;
  uStack_220 = param_3;
  SwiftUI::EdgeInsets::init((CGFloat)_all_00.unknown);
  local_280 = CONCAT71(uStack_22f,local_230);
  uStack_278 = uStack_228;
  uStack_268 = local_218;
  uStack_270 = uStack_220;
  uStack_25f = uStack_20f;
  uStack_258 = uStack_208;
  local_267 = uStack_217;
  uStack_260 = uStack_210;
  local_290 = CONCAT71(uStack_23f,local_240);
  puStack_298 = puStack_248;
  local_2a0 = local_250;
  pvStack_288 = local_238;
  local_1b8 = 0;
  local_200 = TVar12.unknown;
  puStack_1f8 = TVar20.unknown;
  local_1f0 = (char)puVar18;
  local_1e8 = pvVar21;
  local_1e0 = (char)_all.unknown;
  local_1d8 = uVar23;
  uStack_1d0 = param_3;
  local_1c8 = param_4;
  uStack_1c0 = param_5;
  FUN_100011090(&local_250,&local_130,&DAT_100fb90e8,&DAT_100c397b0);
  FUN_100005808(&local_200,&DAT_100fb90e8,&DAT_100c397b0);
  puVar7 = &DAT_100fb92d8;
  FUN_1000037f0(&DAT_100fb92d8,&DAT_100c39060);
  puVar4 = local_328;
  puVar1 = (undefined8 *)((long)local_328 + (long)*(int *)(puVar7 + 0x24));
  RVar14 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar14.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar6.value) + -8) + 0x68))
            ((long)puVar1 + (long)iVar3,uVar2,CONCAT71(extraout_var_00,RVar6.value));
  auVar25 = NEON_fmov(0x4018000000000000,8);
  puVar1[1] = auVar25._8_8_;
  *puVar1 = auVar25._0_8_;
  pNVar15 = (NSColor *)NSColor::systemBlueColor((ID)&_OBJC_CLASS___NSColor);
  CVar16 = SwiftUI::Color::init(pNVar15);
  AVar17.unknown = &DAT_100fb92a8;
  puVar7 = &DAT_100c39030;
  FUN_1000037f0();
  *(undefined **)((long)puVar1 + (long)*(int *)(AVar17.unknown + 0x34)) = CVar16.unknown;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(AVar17.unknown + 0x38)) = 0x100;
  AVar17 = SwiftUI::Alignment::get_center(AVar17);
  uStack_178 = CONCAT71(local_267,uStack_268);
  uStack_188 = uStack_278;
  local_190 = local_280;
  uStack_180 = uStack_270;
  local_170 = CONCAT71(uStack_25f,uStack_260);
  uStack_168 = CONCAT71(uStack_257,uStack_258);
  puStack_1a8 = puStack_298;
  local_1b0 = local_2a0;
  pvStack_198 = pvStack_288;
  uStack_1a0 = local_290;
  local_148 = (undefined1)uVar27;
  uStack_147 = (undefined7)((ulong)uVar27 >> 8);
  uStack_140 = (undefined1)uVar28;
  uStack_13f = (undefined7)((ulong)uVar28 >> 8);
  uStack_138 = 0;
  puVar18 = &DAT_100fb92e0;
  local_160 = (char)_all_00.unknown;
  uStack_158 = uVar24;
  uStack_150 = uVar26;
  FUN_1000037f0(&DAT_100fb92e0,&DAT_100c3a810);
  iVar3 = *(int *)(puVar18 + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar3) = AVar17.unknown;
  ((undefined8 *)((long)puVar1 + (long)iVar3))[1] = puVar7;
  puVar4[5] = uStack_188;
  puVar4[4] = local_190;
  puVar4[7] = uStack_178;
  puVar4[6] = uStack_180;
  puVar4[1] = puStack_1a8;
  *puVar4 = local_1b0;
  puVar4[3] = pvStack_198;
  puVar4[2] = uStack_1a0;
  *(ulong *)((long)puVar4 + 0x71) = CONCAT17(uStack_138,uStack_13f);
  *(ulong *)((long)puVar4 + 0x69) = CONCAT17(uStack_140,uStack_147);
  puVar4[0xb] = uStack_158;
  puVar4[10] = CONCAT71(uStack_15f,local_160);
  puVar4[0xd] = CONCAT71(uStack_147,local_148);
  puVar4[0xc] = uStack_150;
  puVar4[9] = uStack_168;
  puVar4[8] = local_170;
  uStack_f8 = CONCAT71(local_267,uStack_268);
  uStack_e8 = CONCAT71(uStack_257,uStack_258);
  uStack_f0 = CONCAT71(uStack_25f,uStack_260);
  local_100 = uStack_270;
  pvStack_118 = pvStack_288;
  local_120 = local_290;
  uStack_108 = uStack_278;
  uStack_110 = local_280;
  local_130.bridgeObject = puStack_298;
  local_130.str = local_2a0;
  local_b8 = 0;
  local_e0 = (char)_all_00.unknown;
  local_d8 = uVar24;
  local_d0 = uVar26;
  local_c8 = uVar27;
  local_c0 = uVar28;
  FUN_100011090(&local_1b0,auStack_320,&DAT_100fb92e8,&DAT_100c39070);
  CVar16.unknown = (undefined *)&local_130;
  FUN_100005808(CVar16.unknown,&DAT_100fb92e8,&DAT_100c39070);
  CVar16 = SwiftUI::Color::get_white(CVar16);
  puVar7 = &DAT_100fb92f0;
  FUN_1000037f0(&DAT_100fb92f0,&DAT_100c39078);
  *(undefined **)((long)puVar4 + (long)*(int *)(puVar7 + 0x24)) = CVar16.unknown;
  puVar7 = &DAT_100fb92f8;
  FUN_1000037f0(&DAT_100fb92f8,&DAT_100c39080);
  *(undefined2 *)((long)puVar4 + (long)*(int *)(puVar7 + 0x24)) = 0x101;
  return;
}



/* Address: 0x100264b08 | thunk_FUN_100264690 */

void thunk_FUN_100264690(void)

{
  FUN_100264690();
  return;
}



/* Address: 0x100264b0c | FUN_100264b0c */

void FUN_100264b0c(long param_1,undefined8 param_2,ButtonStyleConfiguration param_3,
                  Alignment param_4)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  Label LVar4;
  ButtonStyleConfiguration BVar5;
  Alignment AVar6;
  undefined *puVar7;
  undefined *puVar8;
  UnitPoint UVar9;
  Animation AVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined7 extraout_var;
  
  LVar4 = SwiftUI::ButtonStyleConfiguration::get_label(param_3);
  SwiftUI::Alignment::get_center((Alignment)LVar4.unknown);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  BVar5.unknown = &DAT_100fb9268;
  FUN_1000037f0(&DAT_100fb9268,&DAT_100c38ff0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(BVar5.unknown + 0x24));
  puVar1[9] = uStack_98;
  puVar1[8] = local_a0;
  puVar1[0xb] = uStack_88;
  puVar1[10] = uStack_90;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = local_80;
  puVar1[1] = uStack_d8;
  *puVar1 = local_e0;
  puVar1[3] = uStack_c8;
  puVar1[2] = uStack_d0;
  puVar1[5] = uStack_b8;
  puVar1[4] = local_c0;
  puVar1[7] = uStack_a8;
  puVar1[6] = uStack_b0;
  bVar3 = SwiftUI::ButtonStyleConfiguration::get_isPressed(BVar5);
  uVar11 = 0x3feccccccccccccd;
  if (!bVar3) {
    uVar11 = 0x3ff0000000000000;
  }
  AVar6.unknown = &DAT_100fb9270;
  puVar8 = &DAT_100c38ff8;
  FUN_1000037f0();
  *(undefined8 *)(param_1 + *(int *)(AVar6.unknown + 0x24)) = uVar11;
  AVar6 = SwiftUI::Alignment::get_center(AVar6);
  puVar7 = &DAT_100fb9278;
  FUN_1000037f0(&DAT_100fb9278,&DAT_100c39000);
  puVar1 = (undefined8 *)(param_1 + *(int *)(puVar7 + 0x24));
  *puVar1 = AVar6.unknown;
  puVar1[1] = puVar8;
  puVar8 = &DAT_100fb9280;
  puVar7 = &DAT_100c39008;
  FUN_1000037f0();
  FUN_100264d48((long)puVar1 + (long)*(int *)(puVar8 + 0x2c),param_2);
  AVar6 = SwiftUI::Alignment::get_center(param_4);
  BVar5.unknown = &DAT_100fb9288;
  FUN_1000037f0(&DAT_100fb9288,&DAT_100c39010);
  iVar2 = *(int *)(BVar5.unknown + 0x24);
  *(undefined8 *)((long)puVar1 + (long)iVar2) = AVar6.unknown;
  ((undefined8 *)((long)puVar1 + (long)iVar2))[1] = puVar7;
  UVar9.unknown._0_1_ = SwiftUI::ButtonStyleConfiguration::get_isPressed(BVar5);
  UVar9.unknown._1_7_ = extraout_var;
  uVar12 = 0x3fefae147ae147ae;
  uVar11 = uVar12;
  if (!UVar9.unknown._0_1_) {
    uVar11 = 0x3ff0000000000000;
  }
  SwiftUI::UnitPoint::get_center(UVar9);
  AVar10.unknown = &DAT_100fb9290;
  FUN_1000037f0(&DAT_100fb9290,&DAT_100c39018);
  puVar1 = (undefined8 *)(param_1 + *(int *)(AVar10.unknown + 0x24));
  *puVar1 = uVar11;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = local_c0;
  AVar10 = SwiftUI::Animation::spring(0.15,0.85,0.25,AVar10);
  bVar3 = SwiftUI::ButtonStyleConfiguration::get_isPressed((ButtonStyleConfiguration)AVar10.unknown)
  ;
  puVar8 = &DAT_100fb9298;
  FUN_1000037f0(&DAT_100fb9298,&DAT_100c39020);
  iVar2 = *(int *)(puVar8 + 0x24);
  *(undefined8 *)(param_1 + iVar2) = AVar10.unknown;
  *(bool *)((undefined8 *)(param_1 + iVar2) + 1) = bVar3;
  return;
}



/* Address: 0x100264d48 | FUN_100264d48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100264fb0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100264d48(long param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  RoundedCornerStyle RVar4;
  RoundedRectangle RVar5;
  undefined *puVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  Color CVar12;
  Alignment AVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 local_d0 [3];
  uint local_b4;
  MainActor *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lVar11;
  
  local_b4 = param_2;
  local_a0 = param_1;
  RVar5 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(RVar5.unknown + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar19 = (undefined8 *)((long)local_d0 + lVar3);
  puVar6 = &DAT_100fb92a0;
  FUN_1000037f0(&DAT_100fb92a0,&DAT_100c39028);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar15 = (long)puVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  puVar6 = &DAT_100fb92a8;
  FUN_1000037f0(&DAT_100fb92a8,&DAT_100c39030);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar17 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = (undefined8 *)(lVar17 - extraout_x12_00);
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_b0 = pMVar7;
  UVar9 = Swift::Actor::get_unownedExecutor();
  UVar10 = UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar10.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/AllPlansView.swift",0x29,1,0xe4,UVar9.unknown,puVar8);
  }
  iVar2 = *(int *)(RVar5.unknown + 0x14);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar11 = CONCAT71((int7)((ulong)UVar10.unknown >> 8),RVar4.value);
  pcVar16 = *(code **)(*(long *)(lVar11 + -8) + 0x68);
  puVar8 = (undefined8 *)((long)puVar18 + (long)iVar2);
  (*pcVar16)(puVar8,uVar1,lVar11);
  auVar20 = NEON_fmov(0x4024000000000000,8);
  local_d0[1] = auVar20._8_8_;
  local_d0[0] = auVar20._0_8_;
  puVar18[1] = local_d0[1];
  *puVar18 = local_d0[0];
  FUN_1001ff414();
  CVar12 = SwiftUI::Color::init((NSColor *)*puVar8);
  *(undefined **)((long)puVar18 + (long)*(int *)(puVar6 + 0x34)) = CVar12.unknown;
  *(undefined2 *)((long)puVar18 + (long)*(int *)(puVar6 + 0x38)) = 0x100;
  puVar8 = (undefined8 *)((long)puVar19 + (long)*(int *)(RVar5.unknown + 0x14));
  (*pcVar16)(puVar8,uVar1,lVar11);
  *(undefined8 *)((long)local_d0 + lVar3 + 8) = local_d0[1];
  *puVar19 = local_d0[0];
  if ((local_b4 & 1) == 0) {
    uVar21 = 0x3fe0000000000000;
    FUN_1001ff0d0();
  }
  else {
    uVar21 = 0x3ff8000000000000;
    FUN_100218d58();
  }
  CVar12 = SwiftUI::Color::init((NSColor *)*puVar8);
  SwiftUI::StrokeStyle::init
            (&local_98,uVar21,0x4024000000000000,0,CVar12.unknown,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar14 = PTR_typeMetadataAccessor_100eaa9e0;
  FUN_1000c495c(puVar19,lVar15,PTR_typeMetadataAccessor_100eaa9e0);
  puVar6 = &DAT_100fb92b0;
  FUN_1000037f0(&DAT_100fb92b0,&DAT_100c3a630);
  puVar8 = (undefined8 *)(lVar15 + *(int *)(puVar6 + 0x24));
  puVar8[1] = uStack_90;
  *puVar8 = local_98;
  puVar8[3] = uStack_80;
  puVar8[2] = local_88;
  puVar8[4] = local_78;
  AVar13.unknown = &DAT_100fb92b8;
  puVar6 = &DAT_100c39040;
  FUN_1000037f0();
  *(undefined **)(lVar15 + *(int *)(AVar13.unknown + 0x34)) = CVar12.unknown;
  *(undefined2 *)(lVar15 + *(int *)(AVar13.unknown + 0x38)) = 0x100;
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  FUN_10005241c(puVar19,puVar14);
  puVar14 = &DAT_100fb92c0;
  FUN_1000037f0(&DAT_100fb92c0,&DAT_100c3a640);
  iVar2 = *(int *)(puVar14 + 0x24);
  *(undefined8 *)(lVar15 + iVar2) = AVar13.unknown;
  ((undefined8 *)(lVar15 + iVar2))[1] = puVar6;
  FUN_100011090(puVar18,lVar17,&DAT_100fb92a8,&DAT_100c39030);
  lVar3 = local_a8;
  FUN_100011090(lVar15,local_a8,&DAT_100fb92a0,&DAT_100c39028);
  lVar11 = local_a0;
  FUN_100011090(lVar17,local_a0,&DAT_100fb92a8,&DAT_100c39030);
  puVar6 = &DAT_100fb92c8;
  FUN_1000037f0(&DAT_100fb92c8,&DAT_100c39050);
  FUN_100011090(lVar3,lVar11 + *(int *)(puVar6 + 0x30),&DAT_100fb92a0,&DAT_100c39028);
  FUN_100005808(lVar15,&DAT_100fb92a0,&DAT_100c39028);
  FUN_100005808(puVar18,&DAT_100fb92a8,&DAT_100c39030);
  FUN_100005808(lVar3,&DAT_100fb92a0,&DAT_100c39028);
  FUN_100005808(lVar17,&DAT_100fb92a8,&DAT_100c39030);
  _swift_release(local_b0);
  return;
}



/* Address: 0x100265158 | FUN_100265158 */

void FUN_100265158(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100264b0c(*(undefined8 *)(unaff_x20 + 8),param_1,*unaff_x20);
  return;
}



/* Address: 0x100265164 | thunk_FUN_10029ff60 */

void thunk_FUN_10029ff60(void)

{
  FUN_10029ff60();
  return;
}



/* Address: 0x100265168 | thunk_FUN_10029ff88 */

void thunk_FUN_10029ff88(void)

{
  FUN_10029ff88();
  return;
}



/* Address: 0x10026516c | FUN_10026516c */

void FUN_10026516c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb8f90,&TargetStructDescriptor_100ca9c58);
  return;
}



/* Address: 0x100265180 | thunk_FUN_10025e1e4 */

void thunk_FUN_10025e1e4(void)

{
  FUN_10025e1e4();
  return;
}



/* Address: 0x100265184 | thunk_FUN_10025e24c */

void thunk_FUN_10025e24c(void)

{
  FUN_10025e24c();
  return;
}



/* Address: 0x100265188 | FUN_100265188 */

undefined8 FUN_100265188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002651d8 | FUN_1002651d8 */

long * FUN_1002651d8(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  DateComponents DVar10;
  undefined *puVar11;
  long lVar12;
  Product PVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar8 = param_2[2];
    lVar19 = param_2[3];
    lVar15 = param_2[4];
    _swift_retain();
    FUN_1002654f8(lVar8,lVar19,(char)lVar15);
    param_1[2] = lVar8;
    param_1[3] = lVar19;
    *(char *)(param_1 + 4) = (char)lVar15;
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar8 = 0;
    FUN_1002abb94();
    lVar19 = *(long *)(lVar8 + -8);
    puVar9 = puVar2;
    (**(code **)(lVar19 + 0x30))(puVar2,1,lVar8);
    if ((int)puVar9 == 0) {
      *puVar1 = *puVar2;
      iVar7 = *(int *)(lVar8 + 0x14);
      DVar10 = Foundation::DateComponents::typeMetadataAccessor();
      lVar15 = *(long *)(DVar10.unknown + -8);
      puVar9 = puVar2 + iVar7;
      (**(code **)(lVar15 + 0x30))(puVar9,1,DVar10.unknown);
      if ((int)puVar9 == 0) {
        (**(code **)(lVar15 + 0x10))(puVar1 + iVar7,puVar2 + iVar7,DVar10.unknown);
        (**(code **)(lVar15 + 0x38))(puVar1 + iVar7,0,1,DVar10.unknown);
      }
      else {
        puVar11 = &DAT_100fb86e0;
        FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
        _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar8 + 0x18));
      puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar8 + 0x18));
      lVar12 = 0;
      FUN_1002abbf0();
      lVar16 = *(long *)(lVar12 + -8);
      puVar18 = puVar4;
      (**(code **)(lVar16 + 0x30))(puVar4,1,lVar12);
      if ((int)puVar18 == 0) {
        puVar18 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar12);
        if (((int)puVar18 == 2) || ((int)puVar18 == 1)) {
          uVar5 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar5;
          _swift_bridgeObjectRetain();
          puVar11 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar15 + 0x10);
          (*pcVar17)((long)puVar3 + (long)*(int *)(puVar11 + 0x30),
                     (long)puVar4 + (long)*(int *)(puVar11 + 0x30),DVar10.unknown);
          (*pcVar17)((long)puVar3 + (long)*(int *)(puVar11 + 0x40),
                     (long)puVar4 + (long)*(int *)(puVar11 + 0x40),DVar10.unknown);
          puVar18 = (undefined8 *)((ulong)puVar18 & 0xffffffff);
        }
        else {
          (**(code **)(lVar15 + 0x10))(puVar3,puVar4,DVar10.unknown);
        }
        _swift_storeEnumTagMultiPayload(puVar3,lVar12,puVar18);
        (**(code **)(lVar16 + 0x38))(puVar3,0,1,lVar12);
      }
      else {
        puVar11 = &DAT_100fb8db8;
        FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
        _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
      }
      iVar7 = *(int *)(lVar8 + 0x1c);
      PVar13 = StoreKit::Product::typeMetadataAccessor();
      (**(code **)(*(long *)(PVar13.unknown + -8) + 0x10))
                (puVar1 + iVar7,puVar2 + iVar7,PVar13.unknown);
      (**(code **)(lVar19 + 0x38))(puVar1,0,1,lVar8);
    }
    else {
      puVar11 = &DAT_100fb8618;
      FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    puVar11 = &DAT_100fb8f30;
    FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
    *(undefined8 *)(puVar1 + *(int *)(puVar11 + 0x1c)) =
         *(undefined8 *)(puVar2 + *(int *)(puVar11 + 0x1c));
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar14 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar8 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x1002654f8 | FUN_1002654f8 */

void FUN_1002654f8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\x01') {
    param_2 = param_1;
  }
  _swift_retain(param_2);
  return;
}



/* Address: 0x100265508 | FUN_100265508 */

void FUN_100265508(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  DateComponents DVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  Product PVar8;
  long lVar9;
  code *pcVar10;
  
  _swift_release(*(undefined8 *)(param_1 + 8));
  FUN_10026569c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined1 *)(param_1 + 0x20));
  param_1 = param_1 + *(int *)(param_2 + 0x18);
  lVar2 = 0;
  FUN_1002abb94();
  lVar3 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)lVar3 == 0) {
    iVar1 = *(int *)(lVar2 + 0x14);
    DVar4 = Foundation::DateComponents::typeMetadataAccessor();
    lVar9 = *(long *)(DVar4.unknown + -8);
    lVar3 = param_1 + iVar1;
    (**(code **)(lVar9 + 0x30))(lVar3,1,DVar4.unknown);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar9 + 8))(param_1 + iVar1,DVar4.unknown);
    }
    lVar3 = param_1 + *(int *)(lVar2 + 0x18);
    lVar5 = 0;
    FUN_1002abbf0();
    lVar6 = lVar3;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar3,1,lVar5);
    if ((int)lVar6 == 0) {
      lVar6 = lVar3;
      _swift_getEnumCaseMultiPayload(lVar3,lVar5);
      iVar1 = (int)lVar6;
      if ((iVar1 == 2) || (iVar1 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
        puVar7 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar10 = *(code **)(lVar9 + 8);
        (*pcVar10)(lVar3 + *(int *)(puVar7 + 0x30),DVar4.unknown);
        (*pcVar10)(lVar3 + *(int *)(puVar7 + 0x40),DVar4.unknown);
      }
      else if (iVar1 == 0) {
        (**(code **)(lVar9 + 8))(lVar3,DVar4.unknown);
      }
    }
    iVar1 = *(int *)(lVar2 + 0x1c);
    PVar8 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(param_1 + iVar1,PVar8.unknown);
  }
  puVar7 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(puVar7 + 0x1c)));
  return;
}



/* Address: 0x10026569c | FUN_10026569c */

void FUN_10026569c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\x01') {
    param_2 = param_1;
  }
  _swift_release(param_2);
  return;
}



/* Address: 0x1002656ac | FUN_1002656ac */

undefined8 * FUN_1002656ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  DateComponents DVar11;
  undefined *puVar12;
  long lVar13;
  Product PVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = *(undefined1 *)(param_2 + 4);
  _swift_retain();
  FUN_1002654f8(uVar5,uVar6,uVar7);
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined1 *)(param_1 + 4) = uVar7;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar9 = 0;
  FUN_1002abb94();
  lVar19 = *(long *)(lVar9 + -8);
  puVar10 = puVar2;
  (**(code **)(lVar19 + 0x30))(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    *puVar1 = *puVar2;
    iVar8 = *(int *)(lVar9 + 0x14);
    DVar11 = Foundation::DateComponents::typeMetadataAccessor();
    lVar15 = *(long *)(DVar11.unknown + -8);
    puVar10 = puVar2 + iVar8;
    (**(code **)(lVar15 + 0x30))(puVar10,1,DVar11.unknown);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar15 + 0x10))(puVar1 + iVar8,puVar2 + iVar8,DVar11.unknown);
      (**(code **)(lVar15 + 0x38))(puVar1 + iVar8,0,1,DVar11.unknown);
    }
    else {
      puVar12 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(puVar1 + iVar8,puVar2 + iVar8,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar9 + 0x18));
    puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar9 + 0x18));
    lVar13 = 0;
    FUN_1002abbf0();
    lVar16 = *(long *)(lVar13 + -8);
    puVar18 = puVar4;
    (**(code **)(lVar16 + 0x30))(puVar4,1,lVar13);
    if ((int)puVar18 == 0) {
      puVar18 = puVar4;
      _swift_getEnumCaseMultiPayload(puVar4,lVar13);
      if (((int)puVar18 == 2) || ((int)puVar18 == 1)) {
        uVar5 = puVar4[1];
        *puVar3 = *puVar4;
        puVar3[1] = uVar5;
        _swift_bridgeObjectRetain();
        puVar12 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar17 = *(code **)(lVar15 + 0x10);
        (*pcVar17)((long)puVar3 + (long)*(int *)(puVar12 + 0x30),
                   (long)puVar4 + (long)*(int *)(puVar12 + 0x30),DVar11.unknown);
        (*pcVar17)((long)puVar3 + (long)*(int *)(puVar12 + 0x40),
                   (long)puVar4 + (long)*(int *)(puVar12 + 0x40),DVar11.unknown);
        puVar18 = (undefined8 *)((ulong)puVar18 & 0xffffffff);
      }
      else {
        (**(code **)(lVar15 + 0x10))(puVar3,puVar4,DVar11.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar3,lVar13,puVar18);
      (**(code **)(lVar16 + 0x38))(puVar3,0,1,lVar13);
    }
    else {
      puVar12 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    iVar8 = *(int *)(lVar9 + 0x1c);
    PVar14 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar14.unknown + -8) + 0x10))
              (puVar1 + iVar8,puVar2 + iVar8,PVar14.unknown);
    (**(code **)(lVar19 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    puVar12 = &DAT_100fb8618;
    FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar12 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  *(undefined8 *)(puVar1 + *(int *)(puVar12 + 0x1c)) =
       *(undefined8 *)(puVar2 + *(int *)(puVar12 + 0x1c));
  _swift_retain();
  return param_1;
}



/* Address: 0x1002659a4 | FUN_1002659a4 */

undefined8 * FUN_1002659a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  DateComponents DVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  Product PVar18;
  size_t sVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  
  *param_1 = *param_2;
  uVar20 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar20);
  uVar20 = param_2[2];
  uVar6 = param_2[3];
  uVar8 = *(undefined1 *)(param_2 + 4);
  FUN_1002654f8(uVar20,uVar6,uVar8);
  uVar5 = param_1[2];
  uVar7 = param_1[3];
  param_1[2] = uVar20;
  param_1[3] = uVar6;
  uVar9 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar8;
  FUN_10026569c(uVar5,uVar7,uVar9);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar11 = 0;
  FUN_1002abb94();
  lVar25 = *(long *)(lVar11 + -8);
  pcVar21 = *(code **)(lVar25 + 0x30);
  puVar12 = puVar1;
  (*pcVar21)(puVar1,1,lVar11);
  puVar13 = puVar2;
  (*pcVar21)(puVar2,1,lVar11);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 == 0) {
      *puVar1 = *puVar2;
      iVar10 = *(int *)(lVar11 + 0x14);
      DVar14 = Foundation::DateComponents::typeMetadataAccessor();
      lVar25 = *(long *)(DVar14.unknown + -8);
      pcVar21 = *(code **)(lVar25 + 0x30);
      puVar12 = puVar1 + iVar10;
      (*pcVar21)(puVar12,1,DVar14.unknown);
      puVar13 = puVar2 + iVar10;
      (*pcVar21)(puVar13,1,DVar14.unknown);
      if ((int)puVar12 == 0) {
        if ((int)puVar13 != 0) {
          (**(code **)(lVar25 + 8))(puVar1 + iVar10,DVar14.unknown);
          goto LAB_100265cbc;
        }
        (**(code **)(lVar25 + 0x18))(puVar1 + iVar10,puVar2 + iVar10,DVar14.unknown);
      }
      else if ((int)puVar13 == 0) {
        (**(code **)(lVar25 + 0x10))(puVar1 + iVar10,puVar2 + iVar10,DVar14.unknown);
        (**(code **)(lVar25 + 0x38))(puVar1 + iVar10,0,1,DVar14.unknown);
      }
      else {
LAB_100265cbc:
        puVar16 = &DAT_100fb86e0;
        FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
        _memcpy(puVar1 + iVar10,puVar2 + iVar10,*(size_t *)(*(long *)(puVar16 + -8) + 0x40));
      }
      puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar11 + 0x18));
      puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar11 + 0x18));
      lVar22 = 0;
      FUN_1002abbf0();
      lVar15 = *(long *)(lVar22 + -8);
      pcVar21 = *(code **)(lVar15 + 0x30);
      puVar24 = puVar3;
      (*pcVar21)(puVar3,1,lVar22);
      puVar17 = puVar4;
      (*pcVar21)(puVar4,1,lVar22);
      if ((int)puVar24 == 0) {
        if ((int)puVar17 != 0) {
          FUN_10005241c(puVar3,FUN_1002abbf0);
          puVar16 = &DAT_100fb8db8;
          FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
          sVar19 = *(size_t *)(*(long *)(puVar16 + -8) + 0x40);
          goto LAB_100265d98;
        }
        if (param_1 != param_2) {
          FUN_10005241c(puVar3,FUN_1002abbf0);
          puVar24 = puVar4;
          _swift_getEnumCaseMultiPayload(puVar4,lVar22);
          if ((int)puVar24 == 2) {
            *puVar3 = *puVar4;
            puVar3[1] = puVar4[1];
            _swift_bridgeObjectRetain();
            puVar16 = &DAT_100fb8db0;
            FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
            pcVar21 = *(code **)(lVar25 + 0x10);
            (*pcVar21)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar16 + 0x30)),
                       (undefined1 *)((long)puVar4 + (long)*(int *)(puVar16 + 0x30)),DVar14.unknown)
            ;
            (*pcVar21)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar16 + 0x40)),
                       (undefined1 *)((long)puVar4 + (long)*(int *)(puVar16 + 0x40)),DVar14.unknown)
            ;
            _swift_storeEnumTagMultiPayload(puVar3,lVar22,2);
          }
          else if ((int)puVar24 == 1) {
            *puVar3 = *puVar4;
            puVar3[1] = puVar4[1];
            _swift_bridgeObjectRetain();
            puVar16 = &DAT_100fb8db0;
            FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
            pcVar21 = *(code **)(lVar25 + 0x10);
            (*pcVar21)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar16 + 0x30)),
                       (undefined1 *)((long)puVar4 + (long)*(int *)(puVar16 + 0x30)),DVar14.unknown)
            ;
            (*pcVar21)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar16 + 0x40)),
                       (undefined1 *)((long)puVar4 + (long)*(int *)(puVar16 + 0x40)),DVar14.unknown)
            ;
            _swift_storeEnumTagMultiPayload(puVar3,lVar22,1);
          }
          else {
            (**(code **)(lVar25 + 0x10))(puVar3,puVar4,DVar14.unknown);
            _swift_storeEnumTagMultiPayload(puVar3,lVar22,0);
          }
        }
      }
      else if ((int)puVar17 == 0) {
        puVar24 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar22);
        if ((int)puVar24 == 2) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          _swift_bridgeObjectRetain();
          puVar16 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          iVar10 = *(int *)(puVar16 + 0x30);
          pcVar21 = *(code **)(lVar25 + 0x10);
LAB_100265f9c:
          (*pcVar21)((undefined1 *)((long)puVar3 + (long)iVar10),
                     (undefined1 *)((long)puVar4 + (long)iVar10),DVar14.unknown);
          (*pcVar21)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar16 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar16 + 0x40)),DVar14.unknown);
        }
        else {
          if ((int)puVar24 == 1) {
            *puVar3 = *puVar4;
            puVar3[1] = puVar4[1];
            _swift_bridgeObjectRetain();
            puVar16 = &DAT_100fb8db0;
            FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
            iVar10 = *(int *)(puVar16 + 0x30);
            pcVar21 = *(code **)(lVar25 + 0x10);
            goto LAB_100265f9c;
          }
          (**(code **)(lVar25 + 0x10))(puVar3,puVar4,DVar14.unknown);
        }
        _swift_storeEnumTagMultiPayload(puVar3,lVar22,puVar24);
        (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar22);
      }
      else {
        puVar16 = &DAT_100fb8db8;
        FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
        sVar19 = *(size_t *)(*(long *)(puVar16 + -8) + 0x40);
LAB_100265d98:
        _memcpy(puVar3,puVar4,sVar19);
      }
      iVar10 = *(int *)(lVar11 + 0x1c);
      PVar18 = StoreKit::Product::typeMetadataAccessor();
      (**(code **)(*(long *)(PVar18.unknown + -8) + 0x18))
                (puVar1 + iVar10,puVar2 + iVar10,PVar18.unknown);
      goto LAB_100266028;
    }
    FUN_10005241c(puVar1,FUN_1002abb94);
  }
  else if ((int)puVar13 == 0) {
    *puVar1 = *puVar2;
    iVar10 = *(int *)(lVar11 + 0x14);
    DVar14 = Foundation::DateComponents::typeMetadataAccessor();
    lVar22 = *(long *)(DVar14.unknown + -8);
    puVar12 = puVar2 + iVar10;
    (**(code **)(lVar22 + 0x30))(puVar12,1,DVar14.unknown);
    if ((int)puVar12 == 0) {
      (**(code **)(lVar22 + 0x10))(puVar1 + iVar10,puVar2 + iVar10,DVar14.unknown);
      (**(code **)(lVar22 + 0x38))(puVar1 + iVar10,0,1,DVar14.unknown);
    }
    else {
      puVar16 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(puVar1 + iVar10,puVar2 + iVar10,*(size_t *)(*(long *)(puVar16 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar11 + 0x18));
    puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar11 + 0x18));
    lVar15 = 0;
    FUN_1002abbf0();
    lVar23 = *(long *)(lVar15 + -8);
    puVar24 = puVar4;
    (**(code **)(lVar23 + 0x30))(puVar4,1,lVar15);
    if ((int)puVar24 == 0) {
      puVar24 = puVar4;
      _swift_getEnumCaseMultiPayload(puVar4,lVar15);
      if (((int)puVar24 == 2) || ((int)puVar24 == 1)) {
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        _swift_bridgeObjectRetain();
        puVar16 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar21 = *(code **)(lVar22 + 0x10);
        (*pcVar21)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar16 + 0x30)),
                   (undefined1 *)((long)puVar4 + (long)*(int *)(puVar16 + 0x30)),DVar14.unknown);
        (*pcVar21)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar16 + 0x40)),
                   (undefined1 *)((long)puVar4 + (long)*(int *)(puVar16 + 0x40)),DVar14.unknown);
        puVar24 = (undefined8 *)((ulong)puVar24 & 0xffffffff);
      }
      else {
        (**(code **)(lVar22 + 0x10))(puVar3,puVar4,DVar14.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar3,lVar15,puVar24);
      (**(code **)(lVar23 + 0x38))(puVar3,0,1,lVar15);
    }
    else {
      puVar16 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar16 + -8) + 0x40));
    }
    iVar10 = *(int *)(lVar11 + 0x1c);
    PVar18 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar18.unknown + -8) + 0x10))
              (puVar1 + iVar10,puVar2 + iVar10,PVar18.unknown);
    (**(code **)(lVar25 + 0x38))(puVar1,0,1,lVar11);
    goto LAB_100266028;
  }
  puVar16 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar16 + -8) + 0x40));
LAB_100266028:
  puVar16 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  iVar10 = *(int *)(puVar16 + 0x1c);
  uVar20 = *(undefined8 *)(puVar1 + iVar10);
  *(undefined8 *)(puVar1 + iVar10) = *(undefined8 *)(puVar2 + iVar10);
  _swift_retain();
  _swift_release(uVar20);
  return param_1;
}



/* Address: 0x100266114 | FUN_100266114 */

undefined8 * FUN_100266114(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  DateComponents DVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Product PVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar6 = 0;
  FUN_1002abb94();
  lVar16 = *(long *)(lVar6 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar16 + 0x30))(puVar2,1,lVar6);
  if ((int)puVar7 != 0) {
    puVar9 = &DAT_100fb8618;
    FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    goto LAB_1002663a8;
  }
  *puVar1 = *puVar2;
  iVar5 = *(int *)(lVar6 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar8.unknown + -8);
  puVar7 = puVar2 + iVar5;
  (**(code **)(lVar14 + 0x30))(puVar7,1,DVar8.unknown);
  if ((int)puVar7 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar8.unknown);
  }
  else {
    puVar9 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar6 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar6 + 0x18));
  lVar10 = 0;
  FUN_1002abbf0();
  lVar13 = *(long *)(lVar10 + -8);
  puVar11 = puVar4;
  (**(code **)(lVar13 + 0x30))(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    puVar11 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar10);
    if ((int)puVar11 == 2) {
      uVar17 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar17;
LAB_1002662d8:
      puVar9 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar14 + 0x20);
      (*pcVar15)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar9 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x30)),DVar8.unknown);
      (*pcVar15)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar9 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x40)),DVar8.unknown);
    }
    else {
      if ((int)puVar11 == 1) {
        uVar17 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar17;
        goto LAB_1002662d8;
      }
      (**(code **)(lVar14 + 0x20))(puVar3,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar10,(ulong)puVar11 & 0xffffffff);
    (**(code **)(lVar13 + 0x38))(puVar3,0,1,lVar10);
  }
  else {
    puVar9 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar6 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x20))(puVar1 + iVar5,puVar2 + iVar5,PVar12.unknown)
  ;
  (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar6);
LAB_1002663a8:
  puVar9 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  *(undefined8 *)(puVar1 + *(int *)(puVar9 + 0x1c)) =
       *(undefined8 *)(puVar2 + *(int *)(puVar9 + 0x1c));
  return param_1;
}



/* Address: 0x1002663ec | FUN_1002663ec */

undefined8 * FUN_1002663ec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  DateComponents DVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  Product PVar17;
  undefined8 uVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  
  uVar18 = param_2[1];
  uVar8 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar18;
  _swift_release(uVar8);
  uVar5 = *(undefined1 *)(param_2 + 4);
  uVar18 = param_1[2];
  uVar8 = param_1[3];
  uVar23 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar23;
  uVar6 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar5;
  FUN_10026569c(uVar18,uVar8,uVar6);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar9 = 0;
  FUN_1002abb94();
  lVar22 = *(long *)(lVar9 + -8);
  pcVar19 = *(code **)(lVar22 + 0x30);
  puVar10 = puVar1;
  (*pcVar19)(puVar1,1,lVar9);
  puVar11 = puVar2;
  (*pcVar19)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      *puVar1 = *puVar2;
      iVar7 = *(int *)(lVar9 + 0x14);
      DVar12 = Foundation::DateComponents::typeMetadataAccessor();
      lVar22 = *(long *)(DVar12.unknown + -8);
      pcVar19 = *(code **)(lVar22 + 0x30);
      puVar10 = puVar1 + iVar7;
      (*pcVar19)(puVar10,1,DVar12.unknown);
      puVar11 = puVar2 + iVar7;
      (*pcVar19)(puVar11,1,DVar12.unknown);
      if ((int)puVar10 == 0) {
        if ((int)puVar11 != 0) {
          (**(code **)(lVar22 + 8))(puVar1 + iVar7,DVar12.unknown);
          goto LAB_100266688;
        }
        (**(code **)(lVar22 + 0x28))(puVar1 + iVar7,puVar2 + iVar7,DVar12.unknown);
      }
      else if ((int)puVar11 == 0) {
        (**(code **)(lVar22 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,DVar12.unknown);
        (**(code **)(lVar22 + 0x38))(puVar1 + iVar7,0,1,DVar12.unknown);
      }
      else {
LAB_100266688:
        puVar14 = &DAT_100fb86e0;
        FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
        _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar9 + 0x18));
      puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar9 + 0x18));
      lVar21 = 0;
      FUN_1002abbf0();
      lVar13 = *(long *)(lVar21 + -8);
      pcVar19 = *(code **)(lVar13 + 0x30);
      puVar15 = puVar3;
      (*pcVar19)(puVar3,1,lVar21);
      puVar16 = puVar4;
      (*pcVar19)(puVar4,1,lVar21);
      if ((int)puVar15 == 0) {
        if ((int)puVar16 != 0) {
          FUN_10005241c(puVar3,FUN_1002abbf0);
          goto LAB_1002667a4;
        }
        if (param_1 != param_2) {
          FUN_10005241c(puVar3,FUN_1002abbf0);
          puVar15 = puVar4;
          _swift_getEnumCaseMultiPayload(puVar4,lVar21);
          if ((int)puVar15 == 2) {
            uVar18 = *puVar4;
            puVar3[1] = puVar4[1];
            *puVar3 = uVar18;
            puVar14 = &DAT_100fb8db0;
            FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
            pcVar19 = *(code **)(lVar22 + 0x20);
            (*pcVar19)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar14 + 0x30)),
                       (undefined1 *)((long)puVar4 + (long)*(int *)(puVar14 + 0x30)),DVar12.unknown)
            ;
            (*pcVar19)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar14 + 0x40)),
                       (undefined1 *)((long)puVar4 + (long)*(int *)(puVar14 + 0x40)),DVar12.unknown)
            ;
            _swift_storeEnumTagMultiPayload(puVar3,lVar21,2);
          }
          else if ((int)puVar15 == 1) {
            uVar18 = *puVar4;
            puVar3[1] = puVar4[1];
            *puVar3 = uVar18;
            puVar14 = &DAT_100fb8db0;
            FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
            pcVar19 = *(code **)(lVar22 + 0x20);
            (*pcVar19)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar14 + 0x30)),
                       (undefined1 *)((long)puVar4 + (long)*(int *)(puVar14 + 0x30)),DVar12.unknown)
            ;
            (*pcVar19)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar14 + 0x40)),
                       (undefined1 *)((long)puVar4 + (long)*(int *)(puVar14 + 0x40)),DVar12.unknown)
            ;
            _swift_storeEnumTagMultiPayload(puVar3,lVar21,1);
          }
          else {
            (**(code **)(lVar22 + 0x20))(puVar3,puVar4,DVar12.unknown);
            _swift_storeEnumTagMultiPayload(puVar3,lVar21,0);
          }
        }
      }
      else if ((int)puVar16 == 0) {
        puVar15 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar21);
        if (((int)puVar15 == 2) || ((int)puVar15 == 1)) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
          puVar14 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar19 = *(code **)(lVar22 + 0x20);
          (*pcVar19)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar14 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar14 + 0x30)),DVar12.unknown);
          (*pcVar19)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar14 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar14 + 0x40)),DVar12.unknown);
        }
        else {
          (**(code **)(lVar22 + 0x20))(puVar3,puVar4,DVar12.unknown);
        }
        _swift_storeEnumTagMultiPayload(puVar3,lVar21,puVar15);
        (**(code **)(lVar13 + 0x38))(puVar3,0,1,lVar21);
      }
      else {
LAB_1002667a4:
        puVar14 = &DAT_100fb8db8;
        FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
        _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
      }
      iVar7 = *(int *)(lVar9 + 0x1c);
      PVar17 = StoreKit::Product::typeMetadataAccessor();
      (**(code **)(*(long *)(PVar17.unknown + -8) + 0x28))
                (puVar1 + iVar7,puVar2 + iVar7,PVar17.unknown);
      goto LAB_1002669d0;
    }
    FUN_10005241c(puVar1,FUN_1002abb94);
  }
  else if ((int)puVar11 == 0) {
    *puVar1 = *puVar2;
    iVar7 = *(int *)(lVar9 + 0x14);
    DVar12 = Foundation::DateComponents::typeMetadataAccessor();
    lVar21 = *(long *)(DVar12.unknown + -8);
    puVar10 = puVar2 + iVar7;
    (**(code **)(lVar21 + 0x30))(puVar10,1,DVar12.unknown);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar21 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,DVar12.unknown);
      (**(code **)(lVar21 + 0x38))(puVar1 + iVar7,0,1,DVar12.unknown);
    }
    else {
      puVar14 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar9 + 0x18));
    puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar9 + 0x18));
    lVar13 = 0;
    FUN_1002abbf0();
    lVar20 = *(long *)(lVar13 + -8);
    puVar15 = puVar4;
    (**(code **)(lVar20 + 0x30))(puVar4,1,lVar13);
    if ((int)puVar15 == 0) {
      puVar15 = puVar4;
      _swift_getEnumCaseMultiPayload(puVar4,lVar13);
      if ((int)puVar15 == 2) {
        uVar18 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
LAB_1002667dc:
        puVar14 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar19 = *(code **)(lVar21 + 0x20);
        (*pcVar19)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar14 + 0x30)),
                   (undefined1 *)((long)puVar4 + (long)*(int *)(puVar14 + 0x30)),DVar12.unknown);
        (*pcVar19)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar14 + 0x40)),
                   (undefined1 *)((long)puVar4 + (long)*(int *)(puVar14 + 0x40)),DVar12.unknown);
      }
      else {
        if ((int)puVar15 == 1) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
          goto LAB_1002667dc;
        }
        (**(code **)(lVar21 + 0x20))(puVar3,puVar4,DVar12.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar3,lVar13,(ulong)puVar15 & 0xffffffff);
      (**(code **)(lVar20 + 0x38))(puVar3,0,1,lVar13);
    }
    else {
      puVar14 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar9 + 0x1c);
    PVar17 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar17.unknown + -8) + 0x20))
              (puVar1 + iVar7,puVar2 + iVar7,PVar17.unknown);
    (**(code **)(lVar22 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_1002669d0;
  }
  puVar14 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar14 + -8) + 0x40));
LAB_1002669d0:
  puVar14 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  iVar7 = *(int *)(puVar14 + 0x1c);
  uVar18 = *(undefined8 *)(puVar1 + iVar7);
  *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
  _swift_release(uVar18);
  return param_1;
}



/* Address: 0x100266aac | FUN_100266aac */

void FUN_100266aac(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100266ab8 | FUN_100266ab8 */

ulong FUN_100266ab8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  puVar1 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100266b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x100266b44 | FUN_100266b44 */

void FUN_100266b44(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100266b50 | FUN_100266b50 */

void FUN_100266b50(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
                    /* WARNING: Could not recover jumptable at 0x000100266bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,puVar1);
  return;
}



/* Address: 0x100266bd0 | FUN_100266bd0 */

void FUN_100266bd0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c38bd8;
  puStack_30 = &DAT_100c38bf0;
  lVar1 = 0x13f;
  FUN_100266c4c();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100266c4c | FUN_100266c4c */

void FUN_100266c4c(void)

{
  undefined *puVar1;
  State SVar2;
  
  if (DAT_100fb8fa0.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fb8618;
    FUN_100005c24(&DAT_100fb8618,&DAT_100c385c0);
    SVar2 = SwiftUI::State::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fb8fa0 = SVar2;
    }
  }
  return;
}



/* Address: 0x100266cac | FUN_100266cac */

void FUN_100266cac(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca9cb0,1);
  return;
}



/* Address: 0x100266cbc | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}



/* Address: 0x100266cc0 | thunk_FUN_10009cc44 */

void thunk_FUN_10009cc44(void)

{
  FUN_10009cc44();
  return;
}



/* Address: 0x100266cc4 | thunk_FUN_100266d48 */

void thunk_FUN_100266d48(void)

{
  FUN_100266d48();
  return;
}



/* Address: 0x100266cc8 | FUN_100266cc8 */

void FUN_100266cc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10026516c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100260fdc(param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100266d14 | FUN_100266d14 */

void FUN_100266d14(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb9148,&TargetStructDescriptor_100ca9c88);
  return;
}



/* Address: 0x100266d28 | thunk_FUN_10029fe38 */

void thunk_FUN_10029fe38(void)

{
  FUN_10029fe38();
  return;
}



/* Address: 0x100266d2c | thunk_FUN_10029fea0 */

void thunk_FUN_10029fea0(void)

{
  FUN_10029fea0();
  return;
}



/* Address: 0x100266d30 | thunk_FUN_100062024 */

void thunk_FUN_100062024(void)

{
  FUN_100062024();
  return;
}



/* Address: 0x100266d34 | thunk_FUN_100062050 */

void thunk_FUN_100062050(void)

{
  FUN_100062050();
  return;
}


