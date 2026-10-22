/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100289c34 | FUN_100289c34 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010028a0d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100289c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long lVar2;
  Design DVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  Image IVar10;
  Color CVar11;
  Font FVar12;
  Weight WVar13;
  Font FVar14;
  Set _all;
  EdgeInsets EVar15;
  Set _all_00;
  Text TVar16;
  Text TVar17;
  Alignment AVar18;
  Set SVar19;
  char *pcVar20;
  Text TVar21;
  _FlexFrameLayout _Var22;
  VerticalAlignment VVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar26;
  long extraout_x8_03;
  long lVar27;
  long extraout_x12;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  String SVar33;
  undefined8 uStack_1e90;
  undefined1 auStack_1e88 [8];
  undefined8 uStack_1e80;
  undefined1 auStack_1e78 [8];
  undefined8 auStack_1e70 [2];
  char *local_1e60 [4];
  undefined8 *local_1e40;
  undefined8 local_1e38;
  undefined8 uStack_1e30;
  undefined *local_1e28;
  undefined8 local_1e20;
  undefined *local_1e18;
  MainActor *local_1e10;
  long local_1e08;
  long local_1e00;
  undefined8 *local_1df8;
  LocalizedStringResource local_1df0;
  undefined1 auStack_1de8 [424];
  undefined1 auStack_1c40 [424];
  undefined1 auStack_1a98 [424];
  undefined *local_18f0;
  undefined *puStack_18e8;
  undefined *local_18e0;
  undefined *puStack_18d8;
  undefined *local_18d0;
  undefined8 uStack_18c8;
  undefined8 local_18c0;
  undefined8 uStack_18b8;
  undefined8 local_18b0;
  undefined8 uStack_18a8;
  undefined8 local_18a0;
  undefined8 uStack_1898;
  undefined8 local_1890;
  undefined8 uStack_1888;
  undefined8 local_1880;
  undefined8 uStack_1878;
  undefined1 local_1870;
  undefined *local_1860;
  undefined *puStack_1858;
  undefined *puStack_1850;
  undefined *puStack_1848;
  undefined *local_1840;
  undefined8 uStack_1838;
  undefined8 uStack_1830;
  undefined8 uStack_1828;
  undefined8 local_1820;
  undefined8 uStack_1818;
  undefined8 uStack_1810;
  undefined8 uStack_1808;
  undefined8 local_1800;
  undefined8 uStack_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  undefined1 local_17e0;
  undefined1 auStack_17d8 [424];
  undefined7 uStack_1630;
  undefined1 local_1629;
  undefined7 uStack_1628;
  undefined1 uStack_1621;
  undefined7 uStack_1620;
  undefined1 local_1619;
  undefined7 uStack_1618;
  undefined1 uStack_1611;
  undefined7 uStack_1610;
  undefined1 local_1609;
  undefined7 uStack_1608;
  undefined1 uStack_1601;
  undefined7 uStack_1600;
  undefined1 local_15f9;
  undefined7 uStack_15f8;
  undefined1 uStack_15f1;
  undefined7 uStack_15f0;
  undefined1 local_15e9;
  undefined7 uStack_15e8;
  undefined1 uStack_15e1;
  undefined7 uStack_15e0;
  undefined1 local_15d9;
  undefined7 uStack_15d8;
  undefined1 uStack_15d1;
  undefined7 uStack_15d0;
  undefined1 local_15c9;
  undefined7 uStack_15c8;
  undefined1 uStack_15c1;
  undefined7 uStack_15c0;
  undefined1 auStack_15b8 [424];
  undefined8 local_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 local_13f0;
  undefined8 uStack_13e8;
  undefined1 local_13e0;
  undefined8 local_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 local_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 local_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 local_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 local_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  undefined8 local_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 local_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 local_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 local_1280;
  undefined1 auStack_1278 [424];
  undefined1 auStack_10d0 [424];
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined1 local_ef8;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined1 local_ec0;
  undefined7 uStack_ebf;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined1 local_d98;
  undefined8 local_d90;
  undefined8 local_d88;
  undefined8 local_d80;
  undefined1 local_d70;
  String local_d68 [26];
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined1 local_b90;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined1 auStack_a28 [424];
  undefined *local_880;
  undefined *puStack_878;
  undefined *local_870;
  undefined *puStack_868;
  undefined *local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined1 local_830;
  undefined7 uStack_82f;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined1 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined1 local_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined1 local_630;
  undefined7 uStack_62f;
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
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined1 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e0;
  String local_4d8 [26];
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *local_318;
  undefined *local_310;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined *local_280;
  undefined *puStack_278;
  undefined *local_270;
  undefined *puStack_268;
  undefined *local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 local_200;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
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
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar4 = &DAT_100fba470;
  local_1e60[3] = (char *)param_5;
  local_1e38 = param_6;
  uStack_1e30 = param_7;
  local_1e20 = param_8;
  local_1df8 = extraout_x8;
  FUN_1000037f0(&DAT_100fba470,&DAT_100c3abb0);
  local_1e28 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fba478;
  local_1e40 = (undefined8 *)((long)local_1e60 - extraout_x8_00);
  FUN_1000037f0(&DAT_100fba478,&DAT_100c3abb8);
  local_1e18 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar27 = ((long)local_1e60 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1e00 = lVar27;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = lVar27 - extraout_x12;
  local_1e08 = lVar27;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  puVar26 = (undefined *)(lVar27 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fb92d0;
  local_1df0.unknown = puVar26;
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar26 = puVar26 + -extraout_x8_03;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  pMVar6 = pMVar7;
  FUN_100270a58();
  local_1e10 = pMVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "PasteLicensingAppStore/TrialStartedView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/TrialStartedView.swift",0x2d,1,10,UVar8.unknown,pMVar6);
  }
  FUN_10020c9d0();
  SVar33 = *(String *)pcVar9;
  _swift_bridgeObjectRetain(((String *)pcVar9)->bridgeObject);
  IVar10 = SwiftUI::Image::init(SVar33);
  CVar11 = SwiftUI::Color::get_green(IVar10.unknown);
  puVar4 = &DAT_100c3abc8;
  _swift_getKeyPath();
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar27 = CONCAT71((int7)((ulong)puVar4 >> 8),DVar3.value);
  (**(code **)(*(long *)(lVar27 + -8) + 0x38))(puVar26,1,1,lVar27);
  FVar12 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FVar14.unknown = &DAT_100fb92d0;
  WVar13.unknown = puVar26;
  FUN_100005808(puVar26,&DAT_100fb92d0,&DAT_100c3abc0);
  SwiftUI::Font::Weight::get_bold(WVar13);
  FVar14 = SwiftUI::Font::weight(FVar12.unknown,FVar14);
  _swift_release(FVar12.unknown);
  SVar19.unknown = &DAT_100c3abf8;
  _swift_getKeyPath();
  _all = SwiftUI::Edge::Set::get_top(SVar19);
  uVar28 = 0x4044000000000000;
  EVar15 = SwiftUI::EdgeInsets::init(_all.unknown);
  uVar31 = param_2;
  uVar32 = param_3;
  uVar30 = param_4;
  _all_00 = SwiftUI::Edge::Set::get_bottom(EVar15.unknown);
  local_2e0 = 0;
  uVar29 = 0x4020000000000000;
  local_330 = IVar10.unknown;
  puStack_328 = puVar4;
  local_320 = CVar11.unknown;
  local_318 = SVar19.unknown;
  local_310 = FVar14.unknown;
  uStack_308 = (char)_all.unknown;
  local_300 = uVar28;
  local_2f8 = param_2;
  local_2f0 = param_3;
  uStack_2e8 = param_4;
  SwiftUI::EdgeInsets::init((CGFloat)_all_00.unknown);
  uStack_858 = CONCAT71(uStack_307,uStack_308);
  local_860 = local_310;
  uStack_848 = local_2f8;
  local_850 = local_300;
  uStack_838 = uStack_2e8;
  local_840 = local_2f0;
  puStack_878 = puStack_328;
  local_880 = local_330;
  local_830 = local_2e0;
  puStack_868 = local_318;
  local_870 = local_320;
  local_288 = 0;
  local_2d8 = IVar10.unknown;
  local_2d0 = puVar4;
  local_2c8 = CVar11.unknown;
  local_2c0 = SVar19.unknown;
  local_2b8 = FVar14.unknown;
  local_2b0 = (char)_all.unknown;
  local_2a8 = uVar28;
  local_2a0 = param_2;
  local_298 = param_3;
  local_290 = param_4;
  FUN_100011090(&local_330,local_4d8,&DAT_100fba480,&DAT_100c3ac28);
  FUN_100005808(&local_2d8,&DAT_100fba480,&DAT_100c3ac28);
  local_230 = CONCAT71(uStack_82f,local_830);
  local_1a0 = CONCAT71(uStack_82f,local_830);
  uStack_248 = uStack_848;
  local_250 = local_850;
  uStack_238 = uStack_838;
  local_240 = local_840;
  puStack_278 = puStack_878;
  local_280 = local_880;
  puStack_268 = puStack_868;
  local_270 = local_870;
  uStack_258 = uStack_858;
  local_260 = local_860;
  uStack_228 = SUB81(_all_00.unknown,0);
  local_200 = 0;
  puStack_1d8 = puStack_868;
  local_1e0 = local_870;
  puStack_1e8 = puStack_878;
  local_1f0 = local_880;
  uStack_1a8 = uStack_838;
  local_1b0 = local_840;
  uStack_1b8 = uStack_848;
  local_1c0 = local_850;
  uStack_1c8 = uStack_858;
  local_1d0 = local_860;
  local_170 = 0;
  puVar4 = &DAT_100c3ac30;
  local_220 = uVar29;
  uStack_218 = uVar31;
  local_210 = uVar32;
  uStack_208 = uVar30;
  local_198 = uStack_228;
  local_190 = uVar29;
  local_188 = uVar31;
  local_180 = uVar32;
  local_178 = uVar30;
  FUN_100011090(&local_280,local_4d8,&DAT_100fba488);
  FUN_100005808(&local_1f0,&DAT_100fba488,&DAT_100c3ac30);
  LVar5.unknown = local_1df0.unknown;
  FUN_1001cec54(local_1df0.unknown);
  SVar33 = (extension_Foundation)::Swift::String::init(LVar5);
  local_4d8[0] = SVar33;
  FUN_1002538a0();
  pcVar9 = SVar33.str;
  puVar24 = PTR___type_metadata_for_Swift_String_100eac208;
  local_1e60[2] = pcVar9;
  TVar16 = SwiftUI::Text::_init(pcVar9,PTR___type_metadata_for_Swift_String_100eac208);
  local_1e60[0] = (char *)TVar16;
  local_1e60[1] = puVar4;
  FVar14 = SwiftUI::Font::get_title(TVar16.unknown);
  FVar12 = SwiftUI::Font::bold(FVar14);
  _swift_release(FVar14.unknown);
  puVar4 = puVar24;
  AVar18.unknown = pcVar9;
  TVar17 = SwiftUI::Text::_font(FVar12.unknown);
  _swift_release(FVar12.unknown);
  FUN_100016d74(local_1e60[0],puVar24,pcVar9);
  _swift_bridgeObjectRelease(local_1e60[1]);
  FUN_100205044(&local_698,1,TVar17.unknown,TVar16.unknown,puVar4,AVar18.unknown);
  FUN_100016d74(TVar17.unknown,TVar16.unknown,puVar4);
  _swift_bridgeObjectRelease();
  AVar18 = SwiftUI::Alignment::get_center(AVar18);
  uStack_158 = uStack_690;
  local_160 = local_698;
  uStack_148 = uStack_680;
  local_150 = local_688;
  uStack_138 = uStack_670;
  local_140 = local_678;
  local_130 = local_668;
  *(undefined **)(puVar26 + -0x10) = AVar18.unknown;
  *(undefined **)(puVar26 + -8) = TVar16.unknown;
  puVar26[-0x18] = 1;
  *(undefined8 *)(puVar26 + -0x20) = 0;
  puVar26[-0x28] = 1;
  *(undefined8 *)(puVar26 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_658 = uStack_158;
  local_660 = local_160;
  uStack_648 = uStack_148;
  local_650 = local_150;
  uStack_638 = uStack_138;
  local_640 = local_140;
  uStack_bb8 = uStack_690;
  local_bc0 = local_698;
  local_630 = local_130;
  uStack_ba8 = uStack_680;
  local_bb0 = local_688;
  uStack_b98 = uStack_670;
  local_ba0 = local_678;
  local_b90 = local_668;
  FUN_100011090(&local_160,local_4d8,&DAT_100fb9418,&DAT_100c391d0);
  SVar19.unknown = (undefined *)&local_bc0;
  FUN_100005808(SVar19.unknown,&DAT_100fb9418,&DAT_100c391d0);
  SVar19 = SwiftUI::Edge::Set::get_bottom(SVar19);
  uStack_b08 = uStack_5e8;
  local_b10 = local_5f0;
  uStack_af8 = uStack_5d8;
  local_b00 = local_5e0;
  uStack_ae8 = uStack_5c8;
  local_af0 = local_5d0;
  local_b50 = CONCAT71(uStack_62f,local_630);
  uStack_b48 = uStack_628;
  uStack_b38 = uStack_618;
  local_b40 = local_620;
  uStack_b28 = uStack_608;
  local_b30 = local_610;
  uStack_b18 = uStack_5f8;
  local_b20 = local_600;
  uStack_b78 = uStack_658;
  local_b80 = local_660;
  uStack_b68 = uStack_648;
  local_b70 = local_650;
  local_ae0 = local_5c0;
  uStack_b58 = uStack_638;
  local_b60 = local_640;
  uVar30 = 0x4020000000000000;
  uVar31 = local_650;
  uVar32 = local_640;
  SwiftUI::EdgeInsets::init((CGFloat)SVar19.unknown);
  uStack_528 = uStack_5d8;
  local_530 = local_5e0;
  uStack_518 = uStack_5c8;
  uStack_520 = local_5d0;
  local_aa0 = CONCAT71(uStack_62f,local_630);
  uStack_568 = uStack_618;
  local_570 = local_620;
  uStack_558 = uStack_608;
  uStack_560 = local_610;
  uStack_548 = uStack_5f8;
  local_550 = local_600;
  uStack_538 = uStack_5e8;
  uStack_540 = local_5f0;
  uStack_5a8 = uStack_658;
  local_5b0 = local_660;
  uStack_598 = uStack_648;
  uStack_5a0 = local_650;
  uStack_580 = CONCAT71(uStack_62f,local_630);
  uStack_588 = uStack_638;
  local_590 = local_640;
  uStack_578 = uStack_628;
  uStack_a58 = uStack_5e8;
  local_a60 = local_5f0;
  uStack_a48 = uStack_5d8;
  local_a50 = local_5e0;
  uStack_a38 = uStack_5c8;
  local_a40 = local_5d0;
  uStack_a98 = uStack_628;
  uStack_a88 = uStack_618;
  local_a90 = local_620;
  uStack_a78 = uStack_608;
  local_a80 = local_610;
  local_508 = SUB81(SVar19.unknown,0);
  local_510 = local_5c0;
  local_4e0 = 0;
  local_a30 = local_5c0;
  uStack_a68 = uStack_5f8;
  local_a70 = local_600;
  uStack_ac8 = uStack_658;
  local_ad0 = local_660;
  uStack_ab8 = uStack_648;
  local_ac0 = local_650;
  uStack_aa8 = uStack_638;
  local_ab0 = local_640;
  local_500 = uVar30;
  local_4f8 = uVar31;
  local_4f0 = uVar32;
  FUN_100011090(&local_b80,local_4d8,&DAT_100fba490,&DAT_100c3ac40);
  FUN_100005808(&local_ad0,&DAT_100fba490,&DAT_100c3ac40);
  pcVar9 = &DAT_100fba498;
  FUN_1000037f0(&DAT_100fba498,&DAT_100c3ac48);
  pcVar20 = pcVar9;
  local_1e60[1] = pcVar9;
  FUN_10028b37c();
  local_1e60[0] = pcVar20;
  FUN_10020558c(local_4d8,0,pcVar9,pcVar20);
  FUN_100005808(&local_5b0,&DAT_100fba498,&DAT_100c3ac48);
  _memcpy(auStack_a28,local_4d8,0x1a3);
  _memcpy(&local_880,local_4d8,0x1a3);
  puVar4 = &DAT_100c3ac60;
  FUN_100011090(auStack_a28,local_d68,&DAT_100fba4c8,&DAT_100c3ac60);
  FUN_100005808(&local_880,&DAT_100fba4c8,&DAT_100c3ac60);
  LVar5.unknown = local_1df0.unknown;
  FUN_1001cead4(local_1df0.unknown);
  local_d68[0] = (extension_Foundation)::Swift::String::init(LVar5);
  puVar24 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar9 = local_1e60[2];
  TVar17 = SwiftUI::Text::_init(pcVar20,PTR___type_metadata_for_Swift_String_100eac208);
  FVar14 = SwiftUI::Font::get_body(TVar17.unknown);
  TVar16 = TVar17;
  puVar25 = puVar24;
  pcVar20 = pcVar9;
  TVar21 = SwiftUI::Text::_font(FVar14.unknown);
  local_1df0.unknown = pcVar20;
  _swift_release(FVar14.unknown);
  FUN_100016d74(TVar17.unknown,puVar24,pcVar9);
  _swift_bridgeObjectRelease(puVar4);
  LVar5.unknown = local_1df0.unknown;
  FUN_100205044(&local_f28,1,TVar21.unknown,TVar16.unknown,puVar25,local_1df0.unknown);
  FUN_100016d74(TVar21.unknown,TVar16.unknown,puVar25);
  _swift_bridgeObjectRelease();
  AVar18 = SwiftUI::Alignment::get_center(LVar5.unknown);
  uStack_6c8 = uStack_f20;
  local_6d0 = local_f28;
  uStack_6b8 = uStack_f10;
  local_6c0 = local_f18;
  uStack_6a8 = uStack_f00;
  local_6b0 = local_f08;
  local_6a0 = local_ef8;
  *(undefined **)(puVar26 + -0x10) = AVar18.unknown;
  *(undefined **)(puVar26 + -8) = TVar16.unknown;
  puVar26[-0x18] = 1;
  *(undefined8 *)(puVar26 + -0x20) = 0;
  puVar26[-0x28] = 1;
  *(undefined8 *)(puVar26 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_ee8 = uStack_6c8;
  local_ef0 = local_6d0;
  uStack_ed8 = uStack_6b8;
  local_ee0 = local_6c0;
  uStack_ec8 = uStack_6a8;
  local_ed0 = local_6b0;
  local_ec0 = local_6a0;
  uStack_1408 = uStack_f20;
  local_1410 = local_f28;
  uStack_13f8 = uStack_f10;
  uStack_1400 = local_f18;
  uStack_13e8 = uStack_f00;
  local_13f0 = local_f08;
  local_13e0 = local_ef8;
  FUN_100011090(&local_6d0,local_d68,&DAT_100fb9418,&DAT_100c391d0);
  SVar19.unknown = (undefined *)&local_1410;
  FUN_100005808(SVar19.unknown,&DAT_100fb9418,&DAT_100c391d0);
  SVar19 = SwiftUI::Edge::Set::get_bottom(SVar19);
  uStack_1348 = uStack_e68;
  local_1350 = local_e70;
  uStack_1338 = uStack_e58;
  uStack_1340 = local_e60;
  local_1330 = local_e50;
  uVar31 = CONCAT71(uStack_ebf,local_ec0);
  uStack_1388 = uStack_ea8;
  local_1390 = local_eb0;
  uStack_1378 = uStack_e98;
  uStack_1380 = local_ea0;
  uStack_1368 = uStack_e88;
  local_1370 = local_e90;
  uStack_1358 = uStack_e78;
  uStack_1360 = local_e80;
  uStack_13c8 = uStack_ee8;
  local_13d0 = local_ef0;
  uStack_13b8 = uStack_ed8;
  uStack_13c0 = local_ee0;
  uStack_13a8 = uStack_ec8;
  local_13b0 = local_ed0;
  uStack_1398 = uStack_eb8;
  uVar29 = 0x4048000000000000;
  uVar30 = local_ee0;
  uStack_13a0 = uVar31;
  SwiftUI::EdgeInsets::init((CGFloat)SVar19.unknown);
  local_d98 = SUB81(SVar19.unknown,0);
  local_da0 = local_e50;
  local_d70 = 0;
  uStack_dc8 = uStack_e78;
  local_dd0 = local_e80;
  uStack_db8 = uStack_e68;
  local_dc0 = local_e70;
  uStack_da8 = uStack_e58;
  local_db0 = local_e60;
  local_e10 = CONCAT71(uStack_ebf,local_ec0);
  uStack_e08 = uStack_eb8;
  uStack_df8 = uStack_ea8;
  local_e00 = local_eb0;
  uStack_de8 = uStack_e98;
  local_df0 = local_ea0;
  uStack_dd8 = uStack_e88;
  local_de0 = local_e90;
  uStack_e38 = uStack_ee8;
  local_e40 = local_ef0;
  uStack_e28 = uStack_ed8;
  local_e30 = local_ee0;
  uStack_e18 = uStack_ec8;
  local_e20 = local_ed0;
  uStack_1298 = uStack_e68;
  local_12a0 = local_e70;
  uStack_1288 = uStack_e58;
  uStack_1290 = local_e60;
  local_1280 = local_e50;
  uVar32 = CONCAT71(uStack_ebf,local_ec0);
  uStack_12d8 = uStack_ea8;
  local_12e0 = local_eb0;
  uStack_12c8 = uStack_e98;
  uStack_12d0 = local_ea0;
  uStack_12b8 = uStack_e88;
  local_12c0 = local_e90;
  uStack_12a8 = uStack_e78;
  uStack_12b0 = local_e80;
  uStack_1318 = uStack_ee8;
  local_1320 = local_ef0;
  uStack_1308 = uStack_ed8;
  uStack_1310 = local_ee0;
  uStack_12f8 = uStack_ec8;
  local_1300 = local_ed0;
  uStack_12e8 = uStack_eb8;
  uVar28 = local_ee0;
  uStack_12f0 = uVar32;
  local_d90 = uVar29;
  local_d88 = uVar31;
  local_d80 = uVar30;
  FUN_100011090(&local_13d0,local_d68,&DAT_100fba490,&DAT_100c3ac40);
  FUN_100005808(&local_1320,&DAT_100fba490,&DAT_100c3ac40);
  FUN_10020558c(local_d68,0,local_1e60[1],local_1e60[0]);
  FUN_100005808(&local_e40,&DAT_100fba498,&DAT_100c3ac48);
  _memcpy(auStack_1278,local_d68,0x1a3);
  _memcpy(auStack_10d0,local_d68,0x1a3);
  puVar4 = &DAT_100fba4c8;
  FUN_100011090(auStack_1278,auStack_15b8,&DAT_100fba4c8,&DAT_100c3ac60);
  AVar18.unknown = auStack_10d0;
  FUN_100005808(AVar18.unknown,&DAT_100fba4c8,&DAT_100c3ac60);
  uVar31 = local_ea0;
  AVar18 = SwiftUI::Alignment::get_center(AVar18);
  *(undefined **)(puVar26 + -0x10) = AVar18.unknown;
  *(undefined **)(puVar26 + -8) = puVar4;
  puVar26[-0x18] = 1;
  *(undefined8 *)(puVar26 + -0x20) = 0;
  puVar26[-0x28] = 1;
  *(undefined8 *)(puVar26 + -0x30) = 0;
  _Var22 = SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_15f1 = (undefined1)uStack_e8;
  uStack_15f0 = (undefined7)((ulong)uStack_e8 >> 8);
  local_15f9 = (undefined1)local_f0;
  uStack_15f8 = (undefined7)((ulong)local_f0 >> 8);
  uStack_15e1 = (undefined1)uStack_d8;
  uStack_15e0 = (undefined7)((ulong)uStack_d8 >> 8);
  local_15e9 = (undefined1)local_e0;
  uStack_15e8 = (undefined7)((ulong)local_e0 >> 8);
  uStack_15d1 = (undefined1)uStack_c8;
  uStack_15d0 = (undefined7)((ulong)uStack_c8 >> 8);
  local_15d9 = (undefined1)local_d0;
  uStack_15d8 = (undefined7)((ulong)local_d0 >> 8);
  uStack_15c1 = (undefined1)uStack_b8;
  uStack_15c0 = (undefined7)((ulong)uStack_b8 >> 8);
  local_15c9 = (undefined1)local_c0;
  uStack_15c8 = (undefined7)((ulong)local_c0 >> 8);
  uStack_1621 = (undefined1)uStack_118;
  uStack_1620 = (undefined7)((ulong)uStack_118 >> 8);
  local_1629 = (undefined1)local_120;
  uStack_1628 = (undefined7)((ulong)local_120 >> 8);
  uStack_1611 = (undefined1)uStack_108;
  uStack_1610 = (undefined7)((ulong)uStack_108 >> 8);
  local_1619 = (undefined1)local_110;
  uStack_1618 = (undefined7)((ulong)local_110 >> 8);
  uStack_1601 = (undefined1)uStack_f8;
  uStack_1600 = (undefined7)((ulong)uStack_f8 >> 8);
  local_1609 = (undefined1)local_100;
  uStack_1608 = (undefined7)((ulong)local_100 >> 8);
  VVar23 = SwiftUI::VerticalAlignment::get_center(_Var22.unknown);
  SVar19.unknown = (undefined *)local_1e40;
  *local_1e40 = VVar23.unknown;
  *(undefined8 *)((long)SVar19.unknown + 8) = 0;
  *(undefined1 *)((long)SVar19.unknown + 0x10) = 1;
  puVar4 = &DAT_100fba4d0;
  FUN_1000037f0(&DAT_100fba4d0,&DAT_100c3ac68);
  FUN_10028abe4((long)SVar19.unknown + (long)*(int *)(puVar4 + 0x2c),local_1e60[3],local_1e38,
                uStack_1e30,local_1e20);
  puVar4 = &DAT_100fba4d8;
  FUN_100016eac(&DAT_100fba4d8,&DAT_100fba470,&DAT_100c3abb0,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  lVar27 = local_1e08;
  FUN_10020558c(local_1e08,0,local_1e28,puVar4);
  FUN_100005808(SVar19.unknown,&DAT_100fba470,&DAT_100c3abb0);
  SVar19 = SwiftUI::Edge::Set::get_bottom(SVar19);
  uVar30 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar19.unknown);
  puVar1 = (undefined1 *)(lVar27 + *(int *)(local_1e18 + 0x24));
  *puVar1 = (char)SVar19.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar30;
  *(undefined8 *)(puVar1 + 0x10) = uVar32;
  *(undefined8 *)(puVar1 + 0x18) = uVar28;
  *(undefined8 *)(puVar1 + 0x20) = uVar31;
  puVar1[0x28] = 0;
  uStack_1898 = CONCAT71(uStack_227,uStack_228);
  uStack_1888 = uStack_218;
  local_1890 = local_220;
  uStack_1878 = uStack_208;
  local_1880 = local_210;
  local_1870 = local_200;
  uStack_18c8 = uStack_258;
  local_18d0 = local_260;
  uStack_18b8 = uStack_248;
  local_18c0 = local_250;
  uStack_18a8 = uStack_238;
  local_18b0 = local_240;
  local_18a0 = local_230;
  puStack_18e8 = puStack_278;
  local_18f0 = local_280;
  puStack_18d8 = puStack_268;
  local_18e0 = local_270;
  _memcpy(auStack_1a98,auStack_a28,0x1a3);
  _memcpy(auStack_1c40,auStack_1278,0x1a3);
  lVar2 = local_1e00;
  FUN_10028b574(lVar27,local_1e00);
  uStack_17f8 = uStack_1888;
  local_1800 = local_1890;
  uStack_17e8 = uStack_1878;
  uStack_17f0 = local_1880;
  uStack_1838 = uStack_18c8;
  local_1840 = local_18d0;
  uStack_1828 = uStack_18b8;
  uStack_1830 = local_18c0;
  uStack_1818 = uStack_18a8;
  local_1820 = local_18b0;
  uStack_1808 = uStack_1898;
  uStack_1810 = local_18a0;
  puStack_1858 = puStack_18e8;
  local_1860 = local_18f0;
  puStack_1848 = puStack_18d8;
  puStack_1850 = local_18e0;
  local_1df8[0xd] = uStack_1888;
  local_1df8[0xc] = local_1890;
  local_1df8[0xf] = uStack_1878;
  local_1df8[0xe] = local_1880;
  local_1df8[5] = uStack_18c8;
  local_1df8[4] = local_18d0;
  local_1df8[7] = uStack_18b8;
  local_1df8[6] = local_18c0;
  local_1df8[9] = uStack_18a8;
  local_1df8[8] = local_18b0;
  local_1df8[0xb] = uStack_1898;
  local_1df8[10] = local_18a0;
  local_17e0 = local_1870;
  *(undefined1 *)(local_1df8 + 0x10) = local_1870;
  local_1df8[1] = puStack_18e8;
  *local_1df8 = local_18f0;
  local_1df8[3] = puStack_18d8;
  local_1df8[2] = local_18e0;
  _memcpy(auStack_17d8,auStack_1a98,0x1a3);
  _memcpy(local_1df8 + 0x11,auStack_1a98,0x1a3);
  _memcpy(auStack_15b8,auStack_1c40,0x1a3);
  _memcpy(local_1df8 + 0x46,auStack_1c40,0x1a3);
  local_1df8[0x7b] = 0;
  *(undefined1 *)(local_1df8 + 0x7c) = 0;
  *(ulong *)((long)local_1df8 + 0x429) = CONCAT17(uStack_15e1,uStack_15e8);
  *(ulong *)((long)local_1df8 + 0x421) = CONCAT17(local_15e9,uStack_15f0);
  *(ulong *)((long)local_1df8 + 0x439) = CONCAT17(uStack_15d1,uStack_15d8);
  *(ulong *)((long)local_1df8 + 0x431) = CONCAT17(local_15d9,uStack_15e0);
  *(ulong *)((long)local_1df8 + 0x449) = CONCAT17(uStack_15c1,uStack_15c8);
  *(ulong *)((long)local_1df8 + 0x441) = CONCAT17(local_15c9,uStack_15d0);
  local_1df8[0x8a] = CONCAT71(uStack_15c0,uStack_15c1);
  *(ulong *)((long)local_1df8 + 0x3e9) = CONCAT17(uStack_1621,uStack_1628);
  *(ulong *)((long)local_1df8 + 0x3e1) = CONCAT17(local_1629,uStack_1630);
  *(ulong *)((long)local_1df8 + 0x3f9) = CONCAT17(uStack_1611,uStack_1618);
  *(ulong *)((long)local_1df8 + 0x3f1) = CONCAT17(local_1619,uStack_1620);
  *(ulong *)((long)local_1df8 + 0x409) = CONCAT17(uStack_1601,uStack_1608);
  *(ulong *)((long)local_1df8 + 0x401) = CONCAT17(local_1609,uStack_1610);
  *(ulong *)((long)local_1df8 + 0x419) = CONCAT17(uStack_15f1,uStack_15f8);
  *(ulong *)((long)local_1df8 + 0x411) = CONCAT17(local_15f9,uStack_1600);
  puVar4 = &DAT_100fba4e0;
  FUN_1000037f0(&DAT_100fba4e0,&DAT_100c3ac70);
  FUN_10028b574(lVar2,(long)local_1df8 + (long)*(int *)(puVar4 + 0x60));
  FUN_100011090(&local_1860,auStack_1de8,&DAT_100fba488,&DAT_100c3ac30);
  FUN_100011090(auStack_17d8,auStack_1de8,&DAT_100fba4c8,&DAT_100c3ac60);
  FUN_100011090(auStack_15b8,auStack_1de8,&DAT_100fba4c8,&DAT_100c3ac60);
  FUN_100005808(lVar27,&DAT_100fba478,&DAT_100c3abb8);
  FUN_100005808(lVar2,&DAT_100fba478,&DAT_100c3abb8);
  FUN_100005808(auStack_1c40,&DAT_100fba4c8,&DAT_100c3ac60);
  FUN_100005808(auStack_1a98,&DAT_100fba4c8,&DAT_100c3ac60);
  FUN_100005808(&local_18f0,&DAT_100fba488,&DAT_100c3ac30);
  _swift_release(local_1e10);
  return;
}



/* Address: 0x10028abe4 | FUN_10028abe4 */

void FUN_10028abe4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ControlSize CVar10;
  undefined *puVar11;
  undefined *puVar12;
  MainActor *pMVar13;
  MainActor *pMVar14;
  UnownedSerialExecutor UVar15;
  UnownedSerialExecutor UVar16;
  undefined *puVar17;
  undefined7 extraout_var;
  KeyboardShortcut KVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar20;
  code *pcVar21;
  KeyboardShortcut KVar22;
  long lVar23;
  code *local_e0 [4];
  undefined4 local_bc;
  undefined *local_b8;
  long local_b0;
  undefined *puStack_a8;
  MainActor *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  local_78 = param_1;
  local_68 = param_2;
  puStack_a8 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  KVar22.unknown = (undefined *)((long)local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fb96d0;
  FUN_1000037f0(&DAT_100fb96d0,&DAT_100c39790);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)KVar22.unknown - extraout_x8_00;
  puVar12 = &DAT_100fba4e8;
  FUN_1000037f0(&DAT_100fba4e8,&DAT_100c3ac80);
  local_88 = *(long *)(puVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar19 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12;
  local_90 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12_00;
  local_98 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_70 = lVar19 - extraout_x12_01;
  pMVar13 = Swift::MainActor::typeMetadataAccessor();
  pMVar14 = Swift::MainActor::get_shared(pMVar13,pMVar13);
  pMVar13 = pMVar14;
  FUN_100270a58();
  local_a0 = pMVar14;
  UVar15 = Swift::Actor::get_unownedExecutor();
  UVar16 = UVar15;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar16.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/TrialStartedView.swift",0x2d,1,0x23,UVar15.unknown,pMVar13);
  }
  puVar17 = &DAT_100ec59b8;
  _swift_allocObject(&DAT_100ec59b8,0x30,7);
  *(undefined8 *)(puVar17 + 0x10) = local_68;
  *(undefined8 *)(puVar17 + 0x18) = param_3;
  *(code **)(puVar17 + 0x20) = param_4;
  *(undefined8 *)(puVar17 + 0x28) = param_5;
  _swift_retain(param_3);
  _swift_retain(param_5);
  SwiftUI::Button::_init();
  iVar3 = *(int *)(puVar11 + 0x24);
  puVar17 = &DAT_100fb90a0;
  local_e0[2] = (code *)param_5;
  FUN_1000037f0(&DAT_100fb90a0,&DAT_100c396d0);
  iVar4 = *(int *)(puVar17 + 0x1c);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  local_bc = uVar2;
  local_b8 = puVar17;
  CVar10 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar19 = CONCAT71(extraout_var,CVar10.value);
  local_e0[3] = *(code **)(*(long *)(lVar19 + -8) + 0x68);
  local_e0[0] = param_4;
  (*local_e0[3])(lVar23 + iVar3 + (long)iVar4,uVar2,lVar19);
  KVar18.unknown = &DAT_100c3ac90;
  _swift_getKeyPath();
  *(undefined **)(lVar23 + iVar3) = KVar18.unknown;
  KVar18 = SwiftUI::KeyboardShortcut::get_cancelAction(KVar18);
  FUN_100270b20();
  local_e0[1] = (code *)KVar18.unknown;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar22);
  puVar5 = puStack_a8;
  pcVar20 = *(code **)(local_b0 + 8);
  (*pcVar20)(KVar22.unknown,puStack_a8);
  FUN_100005808(lVar23,&DAT_100fb96d0,&DAT_100c39790);
  puVar17 = &DAT_100ec59e0;
  _swift_allocObject(&DAT_100ec59e0,0x30,7);
  pcVar21 = local_e0[2];
  *(undefined8 *)(puVar17 + 0x10) = local_68;
  *(undefined8 *)(puVar17 + 0x18) = param_3;
  *(code **)(puVar17 + 0x20) = local_e0[0];
  *(code **)(puVar17 + 0x28) = local_e0[2];
  _swift_retain(param_3);
  _swift_retain(pcVar21);
  SwiftUI::Button::_init();
  iVar3 = *(int *)(puVar11 + 0x24);
  (*local_e0[3])(lVar23 + iVar3 + (long)*(int *)(local_b8 + 0x1c),local_bc,lVar19);
  KVar18.unknown = &DAT_100c3ac90;
  _swift_getKeyPath();
  *(undefined **)(lVar23 + iVar3) = KVar18.unknown;
  SwiftUI::KeyboardShortcut::get_defaultAction(KVar18);
  lVar19 = local_98;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar22);
  (*pcVar20)(KVar22.unknown,puVar5);
  FUN_100005808(lVar23,&DAT_100fb96d0,&DAT_100c39790);
  lVar9 = local_70;
  lVar6 = local_88;
  lVar23 = local_90;
  pcVar21 = *(code **)(local_88 + 0x10);
  (*pcVar21)(local_90,local_70,puVar12);
  lVar7 = local_80;
  (*pcVar21)(local_80,lVar19,puVar12);
  lVar8 = local_78;
  (*pcVar21)(local_78,lVar23,puVar12);
  puVar11 = &DAT_100fba4f0;
  FUN_1000037f0(&DAT_100fba4f0,&DAT_100c3acc8);
  puVar1 = (undefined8 *)(lVar8 + *(int *)(puVar11 + 0x30));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  (*pcVar21)(lVar8 + *(int *)(puVar11 + 0x40),lVar7,puVar12);
  pcVar21 = *(code **)(lVar6 + 8);
  (*pcVar21)(lVar19,puVar12);
  (*pcVar21)(lVar9,puVar12);
  (*pcVar21)(lVar7,puVar12);
  (*pcVar21)(lVar23,puVar12);
  _swift_release(local_a0);
  return;
}



/* Address: 0x10028b08c | FUN_10028b08c */

void FUN_10028b08c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100270a58();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/TrialStartedView.swift",0x2d,1,0x24,UVar3.unknown,pMVar1);
  }
  (*param_3)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10028b124 | FUN_10028b124 */

void FUN_10028b124(void)

{
  FUN_10028b1dc(0x24,FUN_1001ce4d4);
  return;
}



/* Address: 0x10028b134 | FUN_10028b134 */

void FUN_10028b134(code *param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100270a58();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/TrialStartedView.swift",0x2d,1,0x2a,UVar3.unknown,pMVar1);
  }
  (*param_1)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10028b1cc | FUN_10028b1cc */

void FUN_10028b1cc(void)

{
  FUN_10028b1dc(0x2a,FUN_1001ce654);
  return;
}



/* Address: 0x10028b1dc | FUN_10028b1dc */

void FUN_10028b1dc(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long extraout_x8;
  String local_60;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/TrialStartedView.swift",0x2d,1,param_2,UVar4.unknown,pMVar2);
    param_5 = param_2;
  }
  (*param_3)(LVar1.unknown);
  local_60 = (extension_Foundation)::Swift::String::init(LVar1);
  uVar8 = local_60.str._0_1_;
  FUN_1002538a0();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar3);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = param_5;
  return;
}



/* Address: 0x10028b2fc | FUN_10028b2fc */

void FUN_10028b2fc(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  HorizontalAlignment HVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  HVar5 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar5.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar6 = &DAT_100fba468;
  FUN_1000037f0(&DAT_100fba468,&DAT_100c3aba8);
  FUN_100289c34((long)param_1 + (long)*(int *)(puVar6 + 0x2c),uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x10028b36c | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x10028b370 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x10028b374 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x10028b378 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x10028b37c | FUN_10028b37c */

void FUN_10028b37c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba498;
  FUN_100005c24(&DAT_100fba498,&DAT_100c3ac48);
  puVar2 = puVar1;
  FUN_10028b3f4();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba4a0 = puVar3;
  return;
}



/* Address: 0x10028b3f4 | FUN_10028b3f4 */

void FUN_10028b3f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba4a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba490;
  FUN_100005c24(&DAT_100fba490,&DAT_100c3ac40);
  puVar2 = puVar1;
  FUN_10028b46c();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba4a8 = puVar3;
  return;
}



/* Address: 0x10028b46c | FUN_10028b46c */

void FUN_10028b46c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined8 *puStack_28;
  
  if (DAT_100fba4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9418;
  FUN_100005c24(&DAT_100fb9418,&DAT_100c391d0);
  puVar2 = puVar1;
  FUN_10028b504();
  puVar3 = &DAT_100fb9cf8;
  FUN_100016eac(&DAT_100fb9cf8,&DAT_100fb9d00,&DAT_100c3a110,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba4b0 = puVar4;
  return;
}



/* Address: 0x10028b504 | FUN_10028b504 */

void FUN_10028b504(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fba4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba4c0;
  FUN_100005c24(&DAT_100fba4c0,&DAT_100c3ac50);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fba4b8 = puVar2;
  return;
}



/* Address: 0x10028b574 | FUN_10028b574 */

undefined8 FUN_10028b574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fba478;
  FUN_1000037f0(&DAT_100fba478,&DAT_100c3abb8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10028b5c4 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x10028b5c8 | FUN_10028b5c8 */

void FUN_10028b5c8(void)

{
  long unaff_x20;
  
  FUN_10028b08c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10028b5d4 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x10028b5d8 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x10028b5dc | FUN_10028b5dc */

void FUN_10028b5dc(void)

{
  long unaff_x20;
  
  FUN_10028b134(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10028b5e8 | FUN_10028b5e8 */

void FUN_10028b5e8(void)

{
  FUN_100016eac(&DAT_100fba4f8,&DAT_100fba500,&DAT_100c3acd0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  return;
}



/* Address: 0x10028b61c | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  thunk_FUN_100016e14();
  return;
}



/* Address: 0x10028b620 | FUN_10028b620 */

long * FUN_10028b620(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  DateComponents DVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  Product PVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar12;
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *puVar1 = *puVar2;
    lVar8 = 0;
    FUN_1002abb94();
    iVar7 = *(int *)(lVar8 + 0x14);
    DVar9 = Foundation::DateComponents::typeMetadataAccessor();
    lVar18 = *(long *)(DVar9.unknown + -8);
    pcVar16 = *(code **)(lVar18 + 0x30);
    _swift_retain(lVar12);
    puVar10 = puVar2 + iVar7;
    (*pcVar16)(puVar10,1,DVar9.unknown);
    if ((int)puVar10 == 0) {
      (**(code **)(lVar18 + 0x10))(puVar1 + iVar7,puVar2 + iVar7,DVar9.unknown);
      (**(code **)(lVar18 + 0x38))(puVar1 + iVar7,0,1,DVar9.unknown);
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
    lVar17 = *(long *)(lVar12 + -8);
    puVar13 = puVar4;
    (**(code **)(lVar17 + 0x30))(puVar4,1,lVar12);
    if ((int)puVar13 == 0) {
      puVar13 = puVar4;
      _swift_getEnumCaseMultiPayload(puVar4,lVar12);
      if (((int)puVar13 == 2) || ((int)puVar13 == 1)) {
        uVar5 = puVar4[1];
        *puVar3 = *puVar4;
        puVar3[1] = uVar5;
        _swift_bridgeObjectRetain();
        puVar11 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar16 = *(code **)(lVar18 + 0x10);
        (*pcVar16)((long)puVar3 + (long)*(int *)(puVar11 + 0x30),
                   (long)puVar4 + (long)*(int *)(puVar11 + 0x30),DVar9.unknown);
        (*pcVar16)((long)puVar3 + (long)*(int *)(puVar11 + 0x40),
                   (long)puVar4 + (long)*(int *)(puVar11 + 0x40),DVar9.unknown);
      }
      else {
        (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar9.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar3,lVar12,(ulong)puVar13 & 0xffffffff);
      (**(code **)(lVar17 + 0x38))(puVar3,0,1,lVar12);
    }
    else {
      puVar11 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar8 + 0x1c);
    PVar14 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar14.unknown + -8) + 0x10))
              (puVar1 + iVar7,puVar2 + iVar7,PVar14.unknown);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar15 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar12 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10028b880 | FUN_10028b880 */

void FUN_10028b880(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  DateComponents DVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  Product PVar8;
  long lVar9;
  code *pcVar10;
  
  _swift_release(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + *(int *)(param_2 + 0x14);
  lVar2 = 0;
  FUN_1002abb94();
  iVar1 = *(int *)(lVar2 + 0x14);
  DVar3 = Foundation::DateComponents::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  lVar4 = param_1 + iVar1;
  (**(code **)(lVar9 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  lVar4 = param_1 + *(int *)(lVar2 + 0x18);
  lVar5 = 0;
  FUN_1002abbf0();
  lVar6 = lVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
  if ((int)lVar6 == 0) {
    lVar6 = lVar4;
    _swift_getEnumCaseMultiPayload(lVar4,lVar5);
    iVar1 = (int)lVar6;
    if ((iVar1 == 2) || (iVar1 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(lVar4 + *(int *)(puVar7 + 0x30),DVar3.unknown);
      (*pcVar10)(lVar4 + *(int *)(puVar7 + 0x40),DVar3.unknown);
    }
    else if (iVar1 == 0) {
      (**(code **)(lVar9 + 8))(lVar4,DVar3.unknown);
    }
  }
  iVar1 = *(int *)(lVar2 + 0x1c);
  PVar8 = StoreKit::Product::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010028b9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(param_1 + iVar1,PVar8.unknown);
  return;
}



/* Address: 0x10028b9cc | FUN_10028b9cc */

undefined8 * FUN_10028b9cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  Product PVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar7 = 0;
  FUN_1002abb94();
  iVar6 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar16 = *(long *)(DVar8.unknown + -8);
  pcVar14 = *(code **)(lVar16 + 0x30);
  _swift_retain(uVar5);
  puVar9 = puVar2 + iVar6;
  (*pcVar14)(puVar9,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    (**(code **)(lVar16 + 0x10))(puVar1 + iVar6,puVar2 + iVar6,DVar8.unknown);
    (**(code **)(lVar16 + 0x38))(puVar1 + iVar6,0,1,DVar8.unknown);
  }
  else {
    puVar10 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar7 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar7 + 0x18));
  lVar11 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar11 + -8);
  puVar12 = puVar4;
  (**(code **)(lVar15 + 0x30))(puVar4,1,lVar11);
  if ((int)puVar12 == 0) {
    puVar12 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar11);
    if (((int)puVar12 == 2) || ((int)puVar12 == 1)) {
      uVar5 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar5;
      _swift_bridgeObjectRetain();
      puVar10 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar14 = *(code **)(lVar16 + 0x10);
      (*pcVar14)((long)puVar3 + (long)*(int *)(puVar10 + 0x30),
                 (long)puVar4 + (long)*(int *)(puVar10 + 0x30),DVar8.unknown);
      (*pcVar14)((long)puVar3 + (long)*(int *)(puVar10 + 0x40),
                 (long)puVar4 + (long)*(int *)(puVar10 + 0x40),DVar8.unknown);
    }
    else {
      (**(code **)(lVar16 + 0x10))(puVar3,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar11,(ulong)puVar12 & 0xffffffff);
    (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar11);
  }
  else {
    puVar10 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar7 + 0x1c);
  PVar13 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar13.unknown + -8) + 0x10))(puVar1 + iVar6,puVar2 + iVar6,PVar13.unknown)
  ;
  return param_1;
}



/* Address: 0x10028bc00 | FUN_10028bc00 */

undefined8 * FUN_10028bc00(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  DateComponents DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Product PVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  
  *param_1 = *param_2;
  uVar16 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar6 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  lVar18 = *(long *)(DVar7.unknown + -8);
  pcVar17 = *(code **)(lVar18 + 0x30);
  puVar8 = puVar1 + iVar5;
  (*pcVar17)(puVar8,1,DVar7.unknown);
  puVar9 = puVar2 + iVar5;
  (*pcVar17)(puVar9,1,DVar7.unknown);
  if ((int)puVar8 == 0) {
    if ((int)puVar9 != 0) {
      (**(code **)(lVar18 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_10028bcfc;
    }
    (**(code **)(lVar18 + 0x18))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar9 == 0) {
    (**(code **)(lVar18 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar18 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_10028bcfc:
    puVar10 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar6 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar6 + 0x18));
  lVar11 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar11 + -8);
  pcVar17 = *(code **)(lVar15 + 0x30);
  puVar12 = puVar3;
  (*pcVar17)(puVar3,1,lVar11);
  puVar13 = puVar4;
  (*pcVar17)(puVar4,1,lVar11);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar3,FUN_1002abbf0);
        puVar12 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar11);
        if ((int)puVar12 == 2) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          _swift_bridgeObjectRetain();
          puVar10 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x10);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,2);
        }
        else if ((int)puVar12 == 1) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          _swift_bridgeObjectRetain();
          puVar10 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x10);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,1);
        }
        else {
          (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,0);
        }
      }
      goto LAB_10028bf38;
    }
    FUN_10005241c(puVar3,FUN_1002abbf0);
  }
  else if ((int)puVar13 == 0) {
    puVar12 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar11);
    if (((int)puVar12 == 2) || ((int)puVar12 == 1)) {
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      _swift_bridgeObjectRetain();
      puVar10 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar17 = *(code **)(lVar18 + 0x10);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
    }
    else {
      (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar7.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar11,puVar12);
    (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar11);
    goto LAB_10028bf38;
  }
  puVar10 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_10028bf38:
  iVar5 = *(int *)(lVar6 + 0x1c);
  PVar14 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar14.unknown + -8) + 0x18))(puVar1 + iVar5,puVar2 + iVar5,PVar14.unknown)
  ;
  return param_1;
}



/* Address: 0x10028c020 | FUN_10028c020 */

undefined8 * FUN_10028c020(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  DateComponents DVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Product PVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  uVar16 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar16;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar6 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar7.unknown + -8);
  puVar8 = puVar2 + iVar5;
  (**(code **)(lVar14 + 0x30))(puVar8,1,DVar7.unknown);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
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
    if (((int)puVar11 == 2) || ((int)puVar11 == 1)) {
      uVar16 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar16;
      puVar9 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar14 + 0x20);
      (*pcVar15)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar9 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x30)),DVar7.unknown);
      (*pcVar15)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar9 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x40)),DVar7.unknown);
    }
    else {
      (**(code **)(lVar14 + 0x20))(puVar3,puVar4,DVar7.unknown);
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
  return param_1;
}



/* Address: 0x10028c248 | FUN_10028c248 */

undefined8 * FUN_10028c248(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  Product PVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  
  uVar19 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar19;
  _swift_release(uVar6);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar7 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar18 = *(long *)(DVar8.unknown + -8);
  pcVar17 = *(code **)(lVar18 + 0x30);
  puVar9 = puVar1 + iVar5;
  (*pcVar17)(puVar9,1,DVar8.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar17)(puVar10,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar18 + 8))(puVar1 + iVar5,DVar8.unknown);
      goto LAB_10028c334;
    }
    (**(code **)(lVar18 + 0x28))(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar18 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
    (**(code **)(lVar18 + 0x38))(puVar1 + iVar5,0,1,DVar8.unknown);
  }
  else {
LAB_10028c334:
    puVar11 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar7 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar7 + 0x18));
  lVar12 = 0;
  FUN_1002abbf0();
  lVar16 = *(long *)(lVar12 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  puVar13 = puVar3;
  (*pcVar17)(puVar3,1,lVar12);
  puVar14 = puVar4;
  (*pcVar17)(puVar4,1,lVar12);
  if ((int)puVar13 == 0) {
    if ((int)puVar14 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar3,FUN_1002abbf0);
        puVar13 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar12);
        if ((int)puVar13 == 2) {
          uVar19 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar19;
          puVar11 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x20);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,2);
        }
        else if ((int)puVar13 == 1) {
          uVar19 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar19;
          puVar11 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x20);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,1);
        }
        else {
          (**(code **)(lVar18 + 0x20))(puVar3,puVar4,DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,0);
        }
      }
      goto LAB_10028c558;
    }
    FUN_10005241c(puVar3,FUN_1002abbf0);
  }
  else if ((int)puVar14 == 0) {
    puVar13 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar12);
    if (((int)puVar13 == 2) || ((int)puVar13 == 1)) {
      uVar19 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar19;
      puVar11 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar17 = *(code **)(lVar18 + 0x20);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
    }
    else {
      (**(code **)(lVar18 + 0x20))(puVar3,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar12,puVar13);
    (**(code **)(lVar16 + 0x38))(puVar3,0,1,lVar12);
    goto LAB_10028c558;
  }
  puVar11 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
LAB_10028c558:
  iVar5 = *(int *)(lVar7 + 0x1c);
  PVar15 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar15.unknown + -8) + 0x28))(puVar1 + iVar5,puVar2 + iVar5,PVar15.unknown)
  ;
  return param_1;
}



/* Address: 0x10028c634 | FUN_10028c634 */

void FUN_10028c634(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10028c640 | FUN_10028c640 */

ulong FUN_10028c640(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  FUN_1002abb94();
  uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00010028c6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Address: 0x10028c6bc | FUN_10028c6bc */

void FUN_10028c6bc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10028c6c8 | FUN_10028c6c8 */

void FUN_10028c6c8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  FUN_1002abb94();
                    /* WARNING: Could not recover jumptable at 0x00010028c738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,lVar1);
  return;
}



/* Address: 0x10028c73c | FUN_10028c73c */

void FUN_10028c73c(undefined8 param_1)

{
  if (DAT_100fba560 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100caa5c0);
  return;
}



/* Address: 0x10028c774 | FUN_10028c774 */

void FUN_10028c774(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c3acf8;
  lVar1 = 0x13f;
  FUN_1002abb94();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
  }
  return;
}



/* Address: 0x10028c7e8 | FUN_10028c7e8 */

void FUN_10028c7e8(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa5e8,1);
  return;
}



/* Address: 0x10028c7f8 | FUN_10028c7f8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010028c9c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10028c7f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Alignment param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  HorizontalAlignment HVar10;
  undefined *puVar11;
  State<undefined> SVar12;
  Alignment AVar13;
  Set _all;
  Set SVar14;
  Alignment AVar15;
  undefined8 *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 auStack_140 [6];
  MainActor *local_110 [2];
  long local_100 [3];
  undefined8 local_e8 [13];
  
  pMVar5 = (MainActor *)&DAT_100fba5a0;
  local_100[0] = param_1;
  FUN_1000037f0(&DAT_100fba5a0,&DAT_100c3ad68);
  local_110[0] = pMVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(pMVar5 + -8) + 0x40));
  lVar17 = (long)local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = (undefined8 *)(lVar17 - extraout_x12);
  puVar4 = &DAT_100fba5a8;
  FUN_1000037f0(&DAT_100fba5a8,&DAT_100c3ad70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar19 = (long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar20 = (undefined8 *)(lVar19 - extraout_x12_00);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar7 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar11,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar16 = puVar7;
  local_110[1] = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/DefaultPaywallView.swift",0x2f,1,0xb,UVar8.unknown,puVar16);
  }
                    /* WARNING: Load size is inaccurate */
  HVar10.unknown = param_6.unknown[8];
  *puVar20 = HVar10.unknown;
  puVar16 = (undefined8 *)((long)puVar20 + (long)*(int *)(puVar4 + 0x24));
  _swift_retain();
  HVar10 = SwiftUI::HorizontalAlignment::get_center(HVar10);
  *puVar16 = HVar10.unknown;
  puVar16[1] = 0;
  *(undefined1 *)(puVar16 + 2) = 0;
  puVar11 = &DAT_100fba5b0;
  FUN_1000037f0(&DAT_100fba5b0,&DAT_100c3ad78);
  FUN_10028ccb4((long)puVar16 + (long)*(int *)(puVar11 + 0x2c),param_6.unknown);
  puVar3 = PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528;
  local_100[1] = 0;
  SwiftUI::State::init
            ((long)puVar20 + (long)*(int *)(puVar4 + 0x28),puVar11,
             PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528);
  local_100[1] = 0;
  SVar12 = SwiftUI::State::init((long)puVar20 + (long)*(int *)(puVar4 + 0x2c),puVar11,puVar3);
  HVar10 = SwiftUI::HorizontalAlignment::get_center(SVar12.unknown);
  *puVar18 = HVar10.unknown;
  puVar18[1] = 0x4028000000000000;
  *(undefined1 *)(puVar18 + 2) = 0;
  puVar4 = &DAT_100fba5b8;
  puVar11 = &DAT_100c3ad80;
  FUN_1000037f0();
  FUN_10028d738((long)puVar18 + (long)*(int *)(puVar4 + 0x2c));
  AVar13 = SwiftUI::Alignment::get_center(param_6);
  puVar20[-2] = AVar13.unknown;
  puVar20[-1] = puVar11;
  *(undefined1 *)(puVar20 + -3) = 1;
  puVar20[-4] = 0;
  *(undefined1 *)(puVar20 + -5) = 1;
  puVar20[-6] = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  SVar14.unknown = &DAT_100fba5c0;
  FUN_1000037f0(&DAT_100fba5c0,&DAT_100c3ad88);
  lVar2 = local_100[1];
  puVar16 = (undefined8 *)((long)puVar18 + (long)*(int *)(SVar14.unknown + 0x24));
  puVar16[9] = local_e8[7];
  puVar16[8] = local_e8[6];
  puVar16[0xb] = local_e8[9];
  puVar16[10] = local_e8[8];
  puVar16[0xd] = local_e8[0xb];
  puVar16[0xc] = local_e8[10];
  puVar16[1] = local_100[2];
  *puVar16 = lVar2;
  puVar16[3] = local_e8[1];
  puVar16[2] = local_e8[0];
  puVar16[5] = local_e8[3];
  puVar16[4] = local_e8[2];
  puVar16[7] = local_e8[5];
  puVar16[6] = local_e8[4];
  _all = SwiftUI::Edge::Set::get_vertical(SVar14);
  uVar21 = 0x4030000000000000;
  uVar22 = local_e8[2];
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar14.unknown = &DAT_100fba5c8;
  uVar23 = uVar22;
  uVar24 = param_4;
  uVar25 = param_5;
  FUN_1000037f0(&DAT_100fba5c8,&DAT_100c3ad90);
  puVar1 = (undefined1 *)((long)puVar18 + (long)*(int *)(SVar14.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = uVar22;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar14 = SwiftUI::Edge::Set::get_horizontal(SVar14);
  uVar22 = 0x4034000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
  AVar13.unknown = &DAT_100fba5d0;
  puVar4 = &DAT_100c3ad98;
  FUN_1000037f0();
  puVar1 = (undefined1 *)((long)puVar18 + (long)*(int *)(AVar13.unknown + 0x24));
  *puVar1 = (char)SVar14.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar22;
  *(undefined8 *)(puVar1 + 0x10) = uVar23;
  *(undefined8 *)(puVar1 + 0x18) = uVar24;
  *(undefined8 *)(puVar1 + 0x20) = uVar25;
  puVar1[0x28] = 0;
  AVar13 = SwiftUI::Alignment::get_top(AVar13);
  pMVar5 = Swift::MainActor::get_shared(pMVar5,(MainActor *)AVar13.unknown);
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/DefaultPaywallView.swift",0x2f,1,0x26,UVar8.unknown,puVar7);
  }
  _swift_release(pMVar5);
  AVar15.unknown = &DAT_100fba5d8;
  puVar11 = &DAT_100c3ada0;
  FUN_1000037f0();
  puVar7 = (undefined8 *)((long)puVar18 + (long)*(int *)(AVar15.unknown + 0x24));
  *puVar7 = 0x3fe0000000000000;
  puVar7[1] = AVar13.unknown;
  puVar7[2] = puVar4;
  AVar13 = SwiftUI::Alignment::get_top(AVar15);
  lVar2 = (long)puVar18 + (long)*(int *)(local_110[0] + 0x24);
  FUN_10028d450(lVar2);
  *(undefined **)(lVar2 + 0x68) = AVar13.unknown;
  *(undefined **)(lVar2 + 0x70) = puVar11;
  FUN_100011090(puVar20,lVar19,&DAT_100fba5a8,&DAT_100c3ad70);
  FUN_10028dc24(puVar18,lVar17);
  lVar2 = local_100[0];
  FUN_100011090(lVar19,local_100[0],&DAT_100fba5a8,&DAT_100c3ad70);
  puVar4 = &DAT_100fba5e0;
  FUN_1000037f0(&DAT_100fba5e0,&DAT_100c3ada8);
  FUN_10028dc24(lVar17,lVar2 + *(int *)(puVar4 + 0x30));
  FUN_10028dc74(puVar18);
  FUN_100005808(puVar20,&DAT_100fba5a8,&DAT_100c3ad70);
  FUN_10028dc74(lVar17);
  FUN_100005808(lVar19,&DAT_100fba5a8,&DAT_100c3ad70);
  _swift_release(local_110[1]);
  return;
}



/* Address: 0x10028ccb4 | FUN_10028ccb4 */

void FUN_10028ccb4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  CGFloat CVar8;
  undefined *puVar9;
  Set SVar10;
  EdgeInsets EVar11;
  Set SVar12;
  Set SVar13;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long local_470;
  undefined8 *local_468 [4];
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_434;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined4 local_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e4;
  MainActor *local_3e0;
  long local_3d8;
  undefined1 auStack_3d0 [128];
  code *local_350;
  undefined *puStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined7 local_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined8 uStack_2df;
  code *local_2d0;
  undefined *puStack_2c8;
  code *local_2c0;
  undefined *puStack_2b8;
  undefined1 local_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  code *local_280;
  undefined *puStack_278;
  code *local_270;
  undefined *local_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238;
  code *local_230;
  undefined *puStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 local_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined1 local_1b8;
  code *local_1b0;
  undefined *puStack_1a8;
  code *local_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138;
  code *local_130;
  undefined *puStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  
  lVar2 = 0;
  local_468[1] = (undefined8 *)param_6;
  FUN_10028c73c();
  local_470 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(local_470 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  SVar12.unknown = (undefined *)((long)&local_470 - (lVar15 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)SVar12.unknown - extraout_x12;
  puVar3 = &DAT_100fba628;
  FUN_1000037f0(&DAT_100fba628,&DAT_100c3ae40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar2 = lVar16 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_3d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined8 *)(lVar2 - extraout_x12_00);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_3e0 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "PasteLicensingAppStore/DefaultPaywallView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/DefaultPaywallView.swift",0x2f,1,0xd,UVar6.unknown,puVar5);
  }
  CVar8.unknown = (undefined *)SwiftUI::Edge::Set::get_top((Set)pcVar7);
  local_3e4 = SUB84(CVar8.unknown,0);
  if (DAT_100fba630 != -1) {
    CVar8.unknown = (undefined *)&DAT_100fba630;
    _swift_once(&DAT_100fba630,FUN_10028df60);
  }
  uVar19 = DAT_100fba638;
  SwiftUI::EdgeInsets::init(CVar8);
  puVar9 = &DAT_100c3ae48;
  local_408 = param_5;
  uStack_400 = param_4;
  local_3f8 = param_3;
  uStack_3f0 = uVar19;
  _swift_getKeyPath();
  *puVar14 = puVar9;
  puVar9 = &DAT_100fba178;
  FUN_1000037f0(&DAT_100fba178,&DAT_100c3a890);
  SVar13.unknown = (undefined *)puVar14;
  _swift_storeEnumTagMultiPayload(puVar14,puVar9,0);
  SVar10 = SwiftUI::Edge::Set::get_top(SVar13);
  SVar13 = SVar10;
  if (DAT_100fba640 != -1) {
    SVar13.unknown = (undefined *)&DAT_100fba640;
    _swift_once(&DAT_100fba640,FUN_10028df80);
  }
  uVar19 = DAT_100fba648;
  EVar11 = SwiftUI::EdgeInsets::init(SVar13.unknown);
  puVar1 = (undefined1 *)((long)puVar14 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar19;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  CVar8.unknown = (undefined *)SwiftUI::Edge::Set::get_top(EVar11.unknown);
  local_40c = SUB84(CVar8.unknown,0);
  if (DAT_100fba650 != -1) {
    CVar8.unknown = (undefined *)&DAT_100fba650;
    _swift_once(&DAT_100fba650,FUN_10028dfa0);
  }
  uVar19 = DAT_100fba658;
  local_468[0] = puVar14;
  EVar11 = SwiftUI::EdgeInsets::init(CVar8);
  local_430 = param_5;
  uStack_428 = param_4;
  local_420 = param_3;
  uStack_418 = uVar19;
  CVar8.unknown = (undefined *)SwiftUI::Edge::Set::get_top(EVar11.unknown);
  local_434 = SUB84(CVar8.unknown,0);
  if (DAT_100fba660 != -1) {
    CVar8.unknown = (undefined *)&DAT_100fba660;
    _swift_once(&DAT_100fba660,FUN_10028dfc0);
  }
  uVar19 = DAT_100fba668;
  SwiftUI::EdgeInsets::init(CVar8);
  puVar5 = local_468[1];
  local_468[2] = (undefined8 *)param_5;
  local_468[3] = (undefined8 *)param_4;
  local_448 = param_3;
  uStack_440 = uVar19;
  FUN_1000c495c(local_468[1],lVar16,FUN_10028c73c);
  uVar17 = (ulong)*(byte *)(local_470 + 0x50);
  uVar18 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ec5a58;
  _swift_allocObject(&DAT_100ec5a58,uVar18 + lVar15,uVar17 | 7);
  FUN_10028e0f4(lVar16,puVar3 + uVar18);
  FUN_1000c495c(puVar5,SVar12.unknown,FUN_10028c73c);
  puVar9 = &DAT_100ec5a80;
  _swift_allocObject(&DAT_100ec5a80,uVar18 + lVar15,uVar17 | 7);
  FUN_10028e0f4(SVar12.unknown,puVar9 + uVar18);
  SVar13 = SwiftUI::Edge::Set::get_top(SVar12);
  SVar12 = SVar13;
  if (DAT_100fba670 != -1) {
    SVar12.unknown = (undefined *)&DAT_100fba670;
    _swift_once(&DAT_100fba670,FUN_10028dfe0);
  }
  uVar19 = DAT_100fba678;
  EVar11 = SwiftUI::EdgeInsets::init(SVar12.unknown);
  uVar21 = param_3;
  uVar22 = param_4;
  uVar23 = param_5;
  SVar10 = SwiftUI::Edge::Set::get_bottom(EVar11.unknown);
  puVar5 = local_468[0];
  SVar12 = SVar10;
  if (DAT_100fba680 != -1) {
    SVar12.unknown = (undefined *)&DAT_100fba680;
    _swift_once(&DAT_100fba680,FUN_10028e000);
  }
  local_2d0 = FUN_10028e138;
  local_2c0 = FUN_10028e2cc;
  local_298 = (undefined1)param_4;
  uStack_297 = (undefined7)((ulong)param_4 >> 8);
  uStack_290 = (undefined1)param_5;
  uStack_28f = (undefined7)((ulong)param_5 >> 8);
  uStack_288 = 0;
  uVar20 = DAT_100fba688;
  puStack_2c8 = puVar3;
  puStack_2b8 = puVar9;
  local_2b0 = (char)SVar13.unknown;
  uStack_2a8 = uVar19;
  uStack_2a0 = param_3;
  SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
  local_330 = CONCAT71(uStack_2af,local_2b0);
  uStack_328 = uStack_2a8;
  uStack_318 = local_298;
  uStack_320 = uStack_2a0;
  uStack_30f = uStack_28f;
  uStack_308 = uStack_288;
  local_317 = uStack_297;
  uStack_310 = uStack_290;
  puStack_348 = puStack_2c8;
  local_350 = local_2d0;
  puStack_338 = puStack_2b8;
  pcStack_340 = local_2c0;
  local_280 = FUN_10028e138;
  local_270 = FUN_10028e2cc;
  local_238 = 0;
  puStack_278 = puVar3;
  local_268 = puVar9;
  local_260 = (char)SVar13.unknown;
  local_258 = uVar19;
  local_250 = param_3;
  local_248 = param_4;
  local_240 = param_5;
  FUN_100011090(&local_2d0,&local_130,&DAT_100fba690,&DAT_100c3ae80);
  FUN_100005808(&local_280,&DAT_100fba690,&DAT_100c3ae80);
  uStack_1f8 = uStack_318;
  uStack_1f7 = local_317;
  uStack_208 = uStack_328;
  local_210 = local_330;
  uStack_200 = uStack_320;
  uStack_1e8 = uStack_308;
  uStack_1e7 = uStack_307;
  local_1f0 = uStack_310;
  uStack_1ef = uStack_30f;
  puStack_228 = puStack_348;
  local_230 = local_350;
  puStack_218 = puStack_338;
  pcStack_220 = pcStack_340;
  local_1e0 = SUB81(SVar10.unknown,0);
  uStack_1c8 = (undefined1)uVar22;
  uStack_1c7 = (undefined7)((ulong)uVar22 >> 8);
  local_1c0 = (undefined1)uVar23;
  uStack_1bf = (undefined7)((ulong)uVar23 >> 8);
  local_1b8 = 0;
  local_180 = uStack_320;
  puStack_198 = puStack_338;
  local_1a0 = pcStack_340;
  uStack_188 = uStack_328;
  uStack_190 = local_330;
  puStack_1a8 = puStack_348;
  local_1b0 = local_350;
  local_138 = 0;
  local_1d8 = uVar20;
  local_1d0 = uVar21;
  local_160 = local_1e0;
  local_158 = uVar20;
  local_150 = uVar21;
  local_148 = uVar22;
  local_140 = uVar23;
  uStack_170 = local_1f0;
  uStack_16f = uStack_1ef;
  uStack_168 = uStack_1e8;
  uStack_178 = uStack_1f8;
  uStack_177 = uStack_1f7;
  FUN_100011090(&local_230,&local_130,&DAT_100fba698,&DAT_100c3ae88);
  FUN_100005808(&local_1b0,&DAT_100fba698,&DAT_100c3ae88);
  lVar2 = local_3d8;
  FUN_100011090(puVar5,local_3d8,&DAT_100fba628,&DAT_100c3ae40);
  local_300 = CONCAT71(uStack_1df,local_1e0);
  uStack_308 = uStack_1e8;
  uStack_307 = uStack_1e7;
  uStack_310 = local_1f0;
  uStack_30f = uStack_1ef;
  uStack_2f8 = local_1d8;
  uStack_2e8 = uStack_1c8;
  local_2f0 = local_1d0;
  uStack_2df = CONCAT17(local_1b8,uStack_1bf);
  uStack_2e7 = uStack_1c7;
  uStack_2e0 = local_1c0;
  puStack_348 = puStack_228;
  local_350 = local_230;
  puStack_338 = puStack_218;
  pcStack_340 = pcStack_220;
  uStack_328 = uStack_208;
  local_330 = local_210;
  uStack_318 = uStack_1f8;
  local_317 = uStack_1f7;
  uStack_320 = uStack_200;
  *param_1 = (char)local_3e4;
  *(undefined8 *)(param_1 + 8) = uStack_3f0;
  *(undefined8 *)(param_1 + 0x10) = local_3f8;
  *(undefined8 *)(param_1 + 0x18) = uStack_400;
  *(undefined8 *)(param_1 + 0x20) = local_408;
  param_1[0x28] = 0;
  puVar3 = &DAT_100fba6a0;
  FUN_1000037f0(&DAT_100fba6a0,&DAT_100c3ae90);
  FUN_100011090(lVar2,param_1 + *(int *)(puVar3 + 0x40),&DAT_100fba628,&DAT_100c3ae40);
  puVar1 = param_1 + *(int *)(puVar3 + 0x50);
  *puVar1 = (char)local_40c;
  *(undefined8 *)(puVar1 + 8) = uStack_418;
  *(undefined8 *)(puVar1 + 0x10) = local_420;
  *(undefined8 *)(puVar1 + 0x18) = uStack_428;
  *(undefined8 *)(puVar1 + 0x20) = local_430;
  puVar1[0x28] = 0;
  puVar1 = param_1 + *(int *)(puVar3 + 0x60);
  *puVar1 = (char)local_434;
  *(undefined8 *)(puVar1 + 8) = uStack_440;
  *(undefined8 *)(puVar1 + 0x10) = local_448;
  *(undefined8 **)(puVar1 + 0x18) = local_468[3];
  *(undefined8 **)(puVar1 + 0x20) = local_468[2];
  puVar1[0x28] = 0;
  puVar14 = (undefined8 *)(param_1 + *(int *)(puVar3 + 0x70));
  uStack_d8 = uStack_2f8;
  local_e0 = local_300;
  uStack_c8 = uStack_2e8;
  uStack_d0 = local_2f0;
  uStack_bf = uStack_2df;
  local_c7 = uStack_2e7;
  uStack_c0 = uStack_2e0;
  uStack_f8 = CONCAT71(local_317,uStack_318);
  uStack_108 = uStack_328;
  local_110 = local_330;
  uStack_100 = uStack_320;
  puStack_128 = puStack_348;
  local_130 = local_350;
  puStack_118 = puStack_338;
  pcStack_120 = pcStack_340;
  uStack_e8 = CONCAT71(uStack_307,uStack_308);
  local_f0 = CONCAT71(uStack_30f,uStack_310);
  puVar14[5] = uStack_328;
  puVar14[4] = local_330;
  puVar14[7] = CONCAT71(local_317,uStack_318);
  puVar14[6] = uStack_320;
  puVar14[1] = puStack_348;
  *puVar14 = local_350;
  puVar14[3] = puStack_338;
  puVar14[2] = pcStack_340;
  *(undefined8 *)((long)puVar14 + 0x71) = uStack_2df;
  *(ulong *)((long)puVar14 + 0x69) = CONCAT17(uStack_2e0,uStack_2e7);
  puVar14[0xb] = uStack_2f8;
  puVar14[10] = local_300;
  puVar14[0xd] = CONCAT71(uStack_2e7,uStack_2e8);
  puVar14[0xc] = local_2f0;
  puVar14[9] = CONCAT71(uStack_307,uStack_308);
  puVar14[8] = CONCAT71(uStack_30f,uStack_310);
  FUN_100011090(&local_130,auStack_3d0,&DAT_100fba698,&DAT_100c3ae88);
  FUN_100005808(puVar5,&DAT_100fba628,&DAT_100c3ae40);
  FUN_100005808(&local_350,&DAT_100fba698,&DAT_100c3ae88);
  FUN_100005808(lVar2,&DAT_100fba628,&DAT_100c3ae40);
  _swift_release(local_3e0);
  return;
}



/* Address: 0x10028d37c | FUN_10028d37c */

void FUN_10028d37c(long param_1,code *param_2)

{
  URL UVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(param_1 + 8) + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  lVar5 = *(long *)(lVar2 + 0x28);
  FUN_100004640(lVar2,uVar4);
  (*param_2)();
  (**(code **)(lVar6 + 0x10))(puVar3,lVar2,UVar1.unknown);
  (**(code **)(lVar5 + 8))(puVar3,uVar4,lVar5);
  (**(code **)(lVar6 + 8))(puVar3,UVar1.unknown);
  return;
}



/* Address: 0x10028d450 | FUN_10028d450 */

void FUN_10028d450(undefined8 *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Color CVar6;
  Color CVar7;
  UnitPoint UVar8;
  Gradient gradient;
  LinearGradient LVar9;
  UnitPoint startPoint;
  UnitPoint endPoint;
  undefined1 auStack_2f8 [104];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
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
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
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
              ("PasteLicensingAppStore/DefaultPaywallView.swift",0x2f,1,0x2a,UVar4.unknown,puVar3);
  }
  CVar6.unknown = &DAT_100fba3e0;
  FUN_1000037f0(&DAT_100fba3e0,&DAT_100c3aaf0);
  startPoint.unknown = &DAT_00000030;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar6.unknown + 0x18) = 4;
  *(undefined8 *)(CVar6.unknown + 0x10) = 2;
  CVar7 = SwiftUI::Color::get_clear(CVar6);
  *(undefined **)(CVar6.unknown + 0x20) = CVar7.unknown;
  UVar8.unknown = (undefined *)SwiftUI::Color::get_black(CVar7);
  CVar7 = SwiftUI::Color::opacity(0.04,(Color)UVar8.unknown);
  _swift_release();
  *(undefined **)(CVar6.unknown + 0x28) = CVar7.unknown;
  UVar8 = SwiftUI::UnitPoint::get_top(UVar8);
  SwiftUI::UnitPoint::get_bottom(UVar8);
  gradient = SwiftUI::Gradient::init();
  LVar9 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SwiftUI::Alignment::get_center((Alignment)LVar9.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  local_270 = local_78;
  uStack_288 = uStack_90;
  local_290 = local_98;
  uStack_278 = uStack_80;
  uStack_280 = local_88;
  uStack_1f8 = uStack_258;
  local_200 = local_260;
  uStack_1e8 = uStack_248;
  uStack_1f0 = local_250;
  local_1e0 = local_240;
  uStack_228 = uStack_90;
  local_230 = local_98;
  uStack_218 = uStack_80;
  uStack_220 = local_88;
  uStack_208 = uStack_268;
  local_210 = local_78;
  local_180 = local_240;
  uStack_198 = uStack_258;
  local_1a0 = local_260;
  uStack_188 = uStack_248;
  uStack_190 = local_250;
  uStack_1c8 = uStack_90;
  local_1d0 = local_98;
  uStack_1b8 = uStack_80;
  uStack_1c0 = local_88;
  uStack_1a8 = uStack_268;
  local_1b0 = local_78;
  FUN_100011090(&local_230,&local_100,&DAT_100fba5e8,&DAT_100c3adb8);
  FUN_100005808(&local_1d0,&DAT_100fba5e8,&DAT_100c3adb8);
  uStack_148 = uStack_268;
  local_150 = local_270;
  uStack_138 = uStack_258;
  uStack_140 = local_260;
  uStack_128 = uStack_248;
  local_130 = local_250;
  local_120 = local_240;
  uStack_168 = uStack_288;
  local_170 = local_290;
  uStack_158 = uStack_278;
  uStack_160 = uStack_280;
  uStack_110 = 0xc008000000000000;
  local_118 = 0;
  uStack_f8 = uStack_288;
  local_100 = local_290;
  uStack_e8 = uStack_278;
  uStack_f0 = uStack_280;
  uStack_c8 = uStack_258;
  local_d0 = local_260;
  uStack_b8 = uStack_248;
  uStack_c0 = local_250;
  uStack_d8 = uStack_268;
  local_e0 = local_270;
  local_b0 = local_240;
  uStack_a0 = 0xc008000000000000;
  local_a8 = 0;
  FUN_100011090(&local_170,auStack_2f8,&DAT_100fba5f0,&DAT_100c3adc0);
  FUN_100005808(&local_100,&DAT_100fba5f0,&DAT_100c3adc0);
  _swift_release(pMVar2);
  param_1[9] = uStack_128;
  param_1[8] = local_130;
  param_1[0xb] = local_118;
  param_1[10] = local_120;
  param_1[0xc] = uStack_110;
  param_1[1] = uStack_168;
  *param_1 = local_170;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  param_1[5] = uStack_148;
  param_1[4] = local_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  return;
}



/* Address: 0x10028d6ec | FUN_10028d6ec */

void FUN_10028d6ec(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_100fba598;
  FUN_1000037f0(&DAT_100fba598,&DAT_100c3ad60);
  FUN_10028c7f8((long)param_1 + (long)*(int *)(puVar2 + 0x2c));
  return;
}



/* Address: 0x10028d738 | FUN_10028d738 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010028d9c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10028d738(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined *puVar7;
  LocalizedStringResource LVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ObservedObject<undefined> OVar17;
  undefined *puVar18;
  Text TVar19;
  Alignment AVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 *puVar24;
  String SVar25;
  MainActor *local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8 [3];
  undefined *local_90;
  long local_88;
  long local_80;
  long local_78;
  String local_70;
  
  local_78 = param_1;
  local_90 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_a8[2] = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a8[2] + 0x40));
  lVar21 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fba5f8;
  local_a8[1] = lVar21;
  FUN_1000037f0(&DAT_100fba5f8,&DAT_100c3adc8);
  local_b0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined8 *)(lVar21 - extraout_x8_00);
  puVar7 = &DAT_100fba600;
  FUN_1000037f0(&DAT_100fba600,&DAT_100c3add0);
  local_88 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar21 = (long)puVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar21 - extraout_x12;
  local_b8 = lVar21;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar8.unknown = (undefined *)(lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_100fb90d0;
  FUN_1000037f0(&DAT_100fb90d0,&DAT_100c38de8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar21 = (long)LVar8.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_a8[0] = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar21 - extraout_x12_00;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar16 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar11 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar16,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_c0 = pMVar10;
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    param_5 = 0x37;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/DefaultPaywallView.swift",0x2f,1,0x37,UVar12.unknown,puVar11)
    ;
  }
  lVar14 = 0;
  FUN_10028c73c();
  FUN_1000c495c(param_2 + *(int *)(lVar14 + 0x14),lVar21,FUN_1002abb94);
  uVar22 = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(puVar9 + 0x24);
  uVar15 = 0;
  FUN_10025cdc8();
  puVar16 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(uVar22);
  OVar17 = SwiftUI::ObservedObject::init(puVar16,uVar15,puVar16);
  *(undefined8 *)(lVar21 + iVar1) = OVar17.unknown;
  ((undefined8 *)(lVar21 + iVar1))[1] = uVar15;
  iVar1 = *(int *)(puVar9 + 0x28);
  *(undefined8 *)(lVar21 + iVar1) = 0;
  ((undefined8 *)(lVar21 + iVar1))[1] = 0;
  puVar16 = &DAT_100c3ade0;
  _swift_getKeyPath(&DAT_100c3ade0);
  puVar18 = &DAT_100c3ae08;
  _swift_getKeyPath(&DAT_100c3ae08);
  Combine::Published::_get_subscript(&local_70,uVar22,puVar16,puVar18);
  _swift_release(puVar16);
  _swift_release(puVar18);
  if ((char)local_70.str == '\x01') {
    FUN_1001cd454(LVar8.unknown);
  }
  else {
    FUN_1001cd2d4(LVar8.unknown);
  }
  SVar25 = (extension_Foundation)::Swift::String::init(LVar8);
  puVar11 = (undefined8 *)(lVar21 + *(int *)(puVar9 + 0x2c));
  local_70 = SVar25;
  FUN_1002538a0();
  uVar6 = SVar25.str._0_1_;
  puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar19 = SwiftUI::Text::_init();
  *puVar11 = TVar19.unknown;
  puVar11[1] = puVar9;
  *(undefined1 *)(puVar11 + 2) = uVar6;
  puVar11[3] = param_5;
  AVar20 = SwiftUI::Alignment::get_center(TVar19.unknown);
  *puVar24 = AVar20.unknown;
  puVar24[1] = puVar9;
  puVar9 = &DAT_100fba608;
  FUN_1000037f0(&DAT_100fba608,&DAT_100c3ae28);
  FUN_10028dcbc((long)puVar24 + (long)*(int *)(puVar9 + 0x2c),param_2);
  lVar2 = local_a8[1];
  SwiftUI::PlainButtonStyle::init();
  puVar9 = &DAT_100fba610;
  FUN_100016eac(&DAT_100fba610,&DAT_100fba5f8,&DAT_100c3adc8,
                PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958);
  puVar16 = &DAT_100fb9b00;
  FUN_100003a00(&DAT_100fb9b00,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  puVar18 = local_90;
  lVar14 = local_b8;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_b8,lVar2,local_b0,local_90,puVar9,puVar16);
  (**(code **)(local_a8[2] + 8))(lVar2,puVar18);
  FUN_100005808(puVar24,&DAT_100fba5f8,&DAT_100c3adc8);
  lVar2 = local_a8[0];
  FUN_100011090(lVar21,local_a8[0],&DAT_100fb90d0,&DAT_100c38de8);
  lVar4 = local_80;
  lVar3 = local_88;
  pcVar23 = *(code **)(local_88 + 0x10);
  (*pcVar23)(local_80,lVar14,puVar7);
  lVar5 = local_78;
  FUN_100011090(lVar2,local_78,&DAT_100fb90d0,&DAT_100c38de8);
  puVar9 = &DAT_100fba618;
  FUN_1000037f0(&DAT_100fba618,&DAT_100c3ae30);
  (*pcVar23)(lVar5 + *(int *)(puVar9 + 0x30),lVar4,puVar7);
  pcVar23 = *(code **)(lVar3 + 8);
  (*pcVar23)(lVar14,puVar7);
  FUN_100005808(lVar21,&DAT_100fb90d0,&DAT_100c38de8);
  (*pcVar23)(lVar4,puVar7);
  FUN_100005808(lVar2,&DAT_100fb90d0,&DAT_100c38de8);
  _swift_release(local_c0);
  return;
}



/* Address: 0x10028dc24 | FUN_10028dc24 */

undefined8 FUN_10028dc24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fba5a0;
  FUN_1000037f0(&DAT_100fba5a0,&DAT_100c3ad68);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10028dc74 | FUN_10028dc74 */

undefined8 FUN_10028dc74(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fba5a0;
  FUN_1000037f0(&DAT_100fba5a0,&DAT_100c3ad68);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10028dcbc | FUN_10028dcbc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010028de34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10028dcbc(long param_1,long param_2)

{
  long lVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ObservedObject<undefined> OVar11;
  VerticalAlignment VVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x12;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long alStack_70 [2];
  
  lVar1 = 0;
  alStack_70[1] = param_1;
  FUN_10027446c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar14 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar14 - extraout_x12;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar13 = puVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/DefaultPaywallView.swift",0x2f,1,0x3f,UVar5.unknown,puVar13);
  }
  lVar7 = 0;
  FUN_10028c73c();
  FUN_1000c495c(param_2 + *(int *)(lVar7 + 0x14),lVar15,FUN_1002abb94);
  uVar8 = 0;
  FUN_1002716e8(0);
  _swift_storeEnumTagMultiPayload(lVar15,uVar8,1);
  uVar16 = *(undefined8 *)(param_2 + 8);
  puVar13 = (undefined8 *)(lVar15 + *(int *)(lVar1 + 0x14));
  uVar9 = 0;
  FUN_10025cdc8();
  puVar10 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(uVar16);
  uVar8 = uVar9;
  OVar11 = SwiftUI::ObservedObject::init(puVar10,uVar9,puVar10);
  *puVar13 = OVar11.unknown;
  puVar13[1] = uVar8;
  VVar12 = SwiftUI::VerticalAlignment::get_center(OVar11.unknown);
  pMVar2 = Swift::MainActor::get_shared(pMVar2,(MainActor *)VVar12.unknown);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/DefaultPaywallView.swift",0x2f,1,0x42,UVar5.unknown,puVar4);
  }
  _swift_retain(uVar16);
  OVar11 = SwiftUI::ObservedObject::init(UVar6.unknown,uVar9,puVar10);
  _swift_release(pMVar2);
  FUN_1000c495c(lVar15,lVar14,FUN_10027446c);
  lVar1 = alStack_70[1];
  FUN_1000c495c(lVar14,alStack_70[1],FUN_10027446c);
  puVar10 = &DAT_100fba620;
  FUN_1000037f0(&DAT_100fba620,&DAT_100c3ae38);
  puVar4 = (undefined8 *)(lVar1 + *(int *)(puVar10 + 0x30));
  *puVar4 = VVar12.unknown;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  puVar4[3] = 0;
  *(undefined1 *)(puVar4 + 4) = 1;
  puVar4[5] = OVar11.unknown;
  puVar4[6] = uVar9;
  _swift_retain(uVar9);
  FUN_10005241c(lVar15,FUN_10027446c);
  _swift_release(uVar9);
  FUN_10005241c(lVar14,FUN_10027446c);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10028df60 | FUN_10028df60 */

void FUN_10028df60(void)

{
  FUN_1000f3588();
  DAT_100fba638 = 0x4030000000000000;
  return;
}



/* Address: 0x10028df80 | FUN_10028df80 */

void FUN_10028df80(void)

{
  FUN_1000f3588();
  DAT_100fba648 = 0x4048000000000000;
  return;
}



/* Address: 0x10028dfa0 | FUN_10028dfa0 */

void FUN_10028dfa0(void)

{
  FUN_1000f3588();
  DAT_100fba658 = 0x403c000000000000;
  return;
}



/* Address: 0x10028dfc0 | FUN_10028dfc0 */

void FUN_10028dfc0(void)

{
  FUN_1000f3588();
  DAT_100fba668 = 0x403c000000000000;
  return;
}



/* Address: 0x10028dfe0 | FUN_10028dfe0 */

void FUN_10028dfe0(void)

{
  FUN_1000f3588();
  DAT_100fba678 = 0x403c000000000000;
  return;
}



/* Address: 0x10028e000 | FUN_10028e000 */

void FUN_10028e000(void)

{
  if (DAT_100fba670 == -1) {
    DAT_100fba688 = DAT_100fba678;
    return;
  }
  _swift_once(&DAT_100fba670,FUN_10028dfe0);
  FUN_10028e010();
  return;
}



/* Address: 0x10028e010 | FUN_10028e010 */

void FUN_10028e010(void)

{
  DAT_100fba688 = DAT_100fba678;
  return;
}



/* Address: 0x10028e024 | FUN_10028e024 */

void FUN_10028e024(void)

{
  _swift_once(&DAT_100fba670,FUN_10028dfe0);
  FUN_10028e010();
  return;
}



/* Address: 0x10028e048 | thunk_FUN_1002a737c */

void thunk_FUN_1002a737c(void)

{
  FUN_1002a737c();
  return;
}



/* Address: 0x10028e04c | thunk_FUN_1002a73e4 */

void thunk_FUN_1002a73e4(void)

{
  FUN_1002a73e4();
  return;
}



/* Address: 0x10028e050 | FUN_10028e050 */

void FUN_10028e050(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_colorScheme(param_1);
  return;
}



/* Address: 0x10028e070 | FUN_10028e070 */

void FUN_10028e070(undefined8 param_1,EnvironmentValues *param_2)

{
  ColorScheme CVar1;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x12;
  
  CVar1 = SwiftUI::ColorScheme::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  SwiftUI::EnvironmentValues::set_colorScheme
            (param_2,(ColorScheme)
                     (__int8)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
            );
  return;
}



/* Address: 0x10028e0ec | thunk_FUN_10028e070 */

void thunk_FUN_10028e070(void)

{
  FUN_10028e070();
  return;
}



/* Address: 0x10028e0f0 | thunk_FUN_10028e144 */

void thunk_FUN_10028e144(void)

{
  FUN_10028e144();
  return;
}



/* Address: 0x10028e0f4 | FUN_10028e0f4 */

undefined8 FUN_10028e0f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10028c73c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10028e138 | FUN_10028e138 */

void FUN_10028e138(void)

{
  FUN_10028e2d8(FUN_1001abd38);
  return;
}



/* Address: 0x10028e144 | FUN_10028e144 */

void FUN_10028e144(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  DateComponents DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  Product PVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  
  lVar3 = 0;
  FUN_10028c73c();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  lVar1 = lVar1 + *(int *)(lVar3 + 0x14);
  lVar4 = 0;
  FUN_1002abb94();
  iVar2 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  lVar3 = lVar1 + iVar2;
  (**(code **)(lVar11 + 0x30))(lVar3,1,DVar5.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar11 + 8))(lVar1 + iVar2,DVar5.unknown);
  }
  lVar3 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar6 = 0;
  FUN_1002abbf0();
  lVar7 = lVar3;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar3,1,lVar6);
  if ((int)lVar7 == 0) {
    lVar7 = lVar3;
    _swift_getEnumCaseMultiPayload(lVar3,lVar6);
    iVar2 = (int)lVar7;
    if ((iVar2 == 2) || (iVar2 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
      puVar8 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar12 = *(code **)(lVar11 + 8);
      (*pcVar12)(lVar3 + *(int *)(puVar8 + 0x30),DVar5.unknown);
      (*pcVar12)(lVar3 + *(int *)(puVar8 + 0x40),DVar5.unknown);
    }
    else if (iVar2 == 0) {
      (**(code **)(lVar11 + 8))(lVar3,DVar5.unknown);
    }
  }
  iVar2 = *(int *)(lVar4 + 0x1c);
  PVar9 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar9.unknown + -8) + 8))(lVar1 + iVar2,PVar9.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10028e2cc | FUN_10028e2cc */

void FUN_10028e2cc(void)

{
  FUN_10028e2d8(FUN_1001abce4);
  return;
}


