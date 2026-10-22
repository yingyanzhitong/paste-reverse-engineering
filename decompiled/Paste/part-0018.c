/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10002d000 | FUN_10002d000 */

undefined1 * FUN_10002d000(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x18] = param_2[0x18];
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10002d078 | FUN_10002d078 */

undefined1 * FUN_10002d078(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x18] = param_2[0x18];
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10002d0cc | FUN_10002d0cc */

int FUN_10002d0cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10002d114 | FUN_10002d114 */

void FUN_10002d114(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10002d160 | FUN_10002d160 */

undefined1  [16] FUN_10002d160(void)

{
  return ZEXT816(0x100eb1200);
}



/* Address: 0x10002d170 | FUN_10002d170 */

void FUN_10002d170(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0a7c,1);
  return;
}



/* Address: 0x10002d180 | FUN_10002d180 */

void FUN_10002d180(void *param_1,undefined8 param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  Set _all;
  Set SVar7;
  Alignment AVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_c20 [320];
  undefined *local_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined1 uStack_a48;
  undefined7 local_a47;
  undefined1 uStack_a40;
  undefined7 uStack_a3f;
  undefined1 uStack_a38;
  undefined7 uStack_a37;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined1 local_910;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
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
  undefined1 local_870;
  undefined *local_860;
  undefined8 uStack_858;
  undefined1 local_850;
  undefined7 local_84f;
  undefined1 uStack_848;
  undefined7 uStack_847;
  undefined1 uStack_840;
  undefined7 local_83f;
  undefined1 uStack_838;
  undefined7 uStack_837;
  undefined1 uStack_830;
  undefined7 local_82f;
  undefined1 uStack_828;
  undefined7 uStack_827;
  undefined1 uStack_820;
  undefined7 local_81f;
  undefined1 uStack_818;
  undefined7 uStack_817;
  undefined1 uStack_810;
  undefined7 local_80f;
  undefined1 uStack_808;
  undefined7 uStack_807;
  undefined1 uStack_800;
  undefined7 local_7ff;
  undefined1 uStack_7f8;
  undefined7 uStack_7f7;
  undefined1 uStack_7f0;
  undefined7 local_7ef;
  undefined1 uStack_7e8;
  undefined7 uStack_7e7;
  undefined1 uStack_7e0;
  undefined7 local_7df;
  undefined1 uStack_7d8;
  undefined7 uStack_7d7;
  undefined1 uStack_7d0;
  undefined7 local_7cf;
  undefined1 uStack_7c8;
  undefined7 uStack_7c7;
  undefined1 uStack_7c0;
  undefined7 local_7bf;
  undefined1 uStack_7b8;
  undefined *local_7b0;
  undefined8 local_7a8;
  undefined1 local_7a0;
  undefined8 local_79f;
  undefined8 uStack_797;
  undefined8 local_78f;
  undefined8 uStack_787;
  undefined8 local_77f;
  undefined8 uStack_777;
  undefined8 local_76f;
  undefined8 uStack_767;
  undefined8 local_75f;
  undefined8 uStack_757;
  undefined8 local_74f;
  undefined8 uStack_747;
  undefined8 local_73f;
  undefined8 uStack_737;
  undefined8 local_72f;
  undefined8 uStack_727;
  undefined8 local_71f;
  undefined8 uStack_717;
  undefined8 local_70f;
  undefined *local_700;
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
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined1 local_650;
  undefined7 uStack_64f;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined1 local_630;
  undefined7 uStack_62f;
  undefined1 local_628;
  undefined *local_620;
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
  undefined8 local_580;
  undefined8 uStack_578;
  undefined1 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined1 local_548;
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
  undefined8 uStack_4d8;
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
  undefined1 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_438;
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
  undefined8 local_3b0;
  undefined8 uStack_3a8;
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
  undefined1 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined1 local_328;
  undefined7 uStack_320;
  undefined1 local_319;
  undefined7 uStack_318;
  undefined1 uStack_311;
  undefined7 uStack_310;
  undefined1 local_309;
  undefined7 uStack_308;
  undefined1 uStack_301;
  undefined7 uStack_300;
  undefined1 local_2f9;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined1 local_2e9;
  undefined7 uStack_2e8;
  undefined1 uStack_2e1;
  undefined7 uStack_2e0;
  undefined1 local_2d9;
  undefined7 uStack_2d8;
  undefined1 uStack_2d1;
  undefined7 uStack_2d0;
  undefined1 local_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  undefined1 local_2b9;
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined1 local_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  undefined7 uStack_2a0;
  undefined1 local_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 local_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
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
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/FilterItemView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterItemView.swift",0x1a,1,0xb,UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_10002d828(&local_1e0,param_2);
  uStack_938 = uStack_178;
  local_940 = local_180;
  uStack_928 = uStack_168;
  uStack_930 = local_170;
  uStack_918 = uStack_158;
  local_920 = local_160;
  uStack_978 = uStack_1b8;
  local_980 = local_1c0;
  uStack_968 = uStack_1a8;
  uStack_970 = local_1b0;
  uStack_958 = uStack_198;
  local_960 = local_1a0;
  uStack_948 = uStack_188;
  uStack_950 = local_190;
  uStack_998 = uStack_1d8;
  local_9a0 = local_1e0;
  uStack_988 = uStack_1c8;
  uStack_990 = local_1d0;
  uStack_898 = uStack_178;
  local_8a0 = local_180;
  uStack_888 = uStack_168;
  uStack_890 = local_170;
  uStack_878 = uStack_158;
  local_880 = local_160;
  uStack_8d8 = uStack_1b8;
  local_8e0 = local_1c0;
  uStack_8c8 = uStack_1a8;
  uStack_8d0 = local_1b0;
  uStack_8b8 = uStack_198;
  local_8c0 = local_1a0;
  uStack_8a8 = uStack_188;
  uStack_8b0 = local_190;
  local_910 = local_150;
  local_870 = local_150;
  uStack_8f8 = uStack_1d8;
  local_900 = local_1e0;
  uStack_8e8 = uStack_1c8;
  uStack_8f0 = local_1d0;
  FUN_100011090(&local_9a0,&uStack_320,&DAT_100fa7cb8,&DAT_100c24c18);
  SVar7.unknown = (undefined *)&local_900;
  FUN_100005808(SVar7.unknown,&DAT_100fa7cb8,&DAT_100c24c18);
  uStack_2b1 = (undefined1)uStack_938;
  uStack_2b0 = (undefined7)((ulong)uStack_938 >> 8);
  local_2b9 = (undefined1)local_940;
  uStack_2b8 = (undefined7)((ulong)local_940 >> 8);
  uStack_2a1 = (undefined1)uStack_928;
  uStack_2a0 = (undefined7)((ulong)uStack_928 >> 8);
  local_2a9 = (undefined1)uStack_930;
  uStack_2a8 = (undefined7)((ulong)uStack_930 >> 8);
  uStack_291 = (undefined1)uStack_918;
  uStack_290 = (undefined7)((ulong)uStack_918 >> 8);
  local_299 = (undefined1)local_920;
  uStack_298 = (undefined7)((ulong)local_920 >> 8);
  uStack_2f1 = (undefined1)uStack_978;
  uStack_2f0 = (undefined7)((ulong)uStack_978 >> 8);
  local_2f9 = (undefined1)local_980;
  uStack_2f8 = (undefined7)((ulong)local_980 >> 8);
  uStack_2e1 = (undefined1)uStack_968;
  uStack_2e0 = (undefined7)((ulong)uStack_968 >> 8);
  local_2e9 = (undefined1)uStack_970;
  uStack_2e8 = (undefined7)((ulong)uStack_970 >> 8);
  uStack_2d1 = (undefined1)uStack_958;
  uStack_2d0 = (undefined7)((ulong)uStack_958 >> 8);
  local_2d9 = (undefined1)local_960;
  uStack_2d8 = (undefined7)((ulong)local_960 >> 8);
  uStack_2c1 = (undefined1)uStack_948;
  uStack_2c0 = (undefined7)((ulong)uStack_948 >> 8);
  local_2c9 = (undefined1)uStack_950;
  uStack_2c8 = (undefined7)((ulong)uStack_950 >> 8);
  uStack_311 = (undefined1)uStack_998;
  uStack_310 = (undefined7)((ulong)uStack_998 >> 8);
  local_319 = (undefined1)local_9a0;
  uStack_318 = (undefined7)((ulong)local_9a0 >> 8);
  uStack_289 = local_910;
  uStack_301 = (undefined1)uStack_988;
  uStack_300 = (undefined7)((ulong)uStack_988 >> 8);
  local_309 = (undefined1)uStack_990;
  uStack_308 = (undefined7)((ulong)uStack_990 >> 8);
  _all = SwiftUI::Edge::Set::get_horizontal(SVar7);
  uStack_7e7 = uStack_2b8;
  uStack_7e0 = uStack_2b1;
  local_7ef = uStack_2c0;
  uStack_7e8 = local_2b9;
  uStack_7d7 = uStack_2a8;
  uStack_7d0 = uStack_2a1;
  local_7df = uStack_2b0;
  uStack_7d8 = local_2a9;
  uStack_7c7 = uStack_298;
  uStack_7c0 = uStack_291;
  local_7cf = uStack_2a0;
  uStack_7c8 = local_299;
  uStack_827 = uStack_2f8;
  uStack_820 = uStack_2f1;
  local_82f = uStack_300;
  uStack_828 = local_2f9;
  uStack_817 = uStack_2e8;
  uStack_810 = uStack_2e1;
  local_81f = uStack_2f0;
  uStack_818 = local_2e9;
  uStack_807 = uStack_2d8;
  uStack_800 = uStack_2d1;
  local_80f = uStack_2e0;
  uStack_808 = local_2d9;
  uStack_7f7 = uStack_2c8;
  uStack_7f0 = uStack_2c1;
  local_7ff = uStack_2d0;
  uStack_7f8 = local_2c9;
  uVar11 = CONCAT17(local_309,uStack_310);
  uStack_847 = uStack_318;
  uStack_840 = uStack_311;
  local_84f = uStack_320;
  uStack_848 = local_319;
  uStack_858 = 0x4010000000000000;
  local_850 = 0;
  local_7bf = uStack_290;
  uStack_7b8 = uStack_289;
  uStack_837 = uStack_308;
  uStack_830 = uStack_301;
  local_83f = uStack_310;
  uStack_838 = local_309;
  uVar9 = 0x4024000000000000;
  uVar12 = local_160;
  uVar10 = local_170;
  local_860 = VVar6.unknown;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_a58 = CONCAT71(uStack_7d7,uStack_7d8);
  local_a60 = CONCAT71(local_7df,uStack_7e0);
  uStack_a50 = CONCAT71(local_7cf,uStack_7d0);
  uStack_a48 = uStack_7c8;
  uStack_a3f = local_7bf;
  uStack_a38 = uStack_7b8;
  local_a47 = uStack_7c7;
  uStack_a40 = uStack_7c0;
  uStack_a98 = CONCAT71(uStack_817,uStack_818);
  local_aa0 = CONCAT71(local_81f,uStack_820);
  uStack_a88 = CONCAT71(uStack_807,uStack_808);
  uStack_a90 = CONCAT71(local_80f,uStack_810);
  uStack_a68 = CONCAT71(uStack_7e7,uStack_7e8);
  uStack_a70 = CONCAT71(local_7ef,uStack_7f0);
  uStack_a78 = CONCAT71(uStack_7f7,uStack_7f8);
  local_a80 = CONCAT71(local_7ff,uStack_800);
  uStack_ac8 = CONCAT71(uStack_847,uStack_848);
  uStack_ad0 = CONCAT71(local_84f,local_850);
  uStack_ad8 = uStack_858;
  local_ae0 = local_860;
  uStack_ab8 = CONCAT71(uStack_837,uStack_838);
  local_ac0 = CONCAT71(local_83f,uStack_840);
  uStack_aa8 = CONCAT71(uStack_827,uStack_828);
  uStack_ab0 = CONCAT71(local_82f,uStack_830);
  uStack_737 = CONCAT17(uStack_2b1,uStack_2b8);
  local_73f = CONCAT17(local_2b9,uStack_2c0);
  uStack_727 = CONCAT17(uStack_2a1,uStack_2a8);
  local_72f = CONCAT17(local_2a9,uStack_2b0);
  uStack_717 = CONCAT17(uStack_291,uStack_298);
  local_71f = CONCAT17(local_299,uStack_2a0);
  uStack_777 = CONCAT17(uStack_2f1,uStack_2f8);
  local_77f = CONCAT17(local_2f9,uStack_300);
  uStack_767 = CONCAT17(uStack_2e1,uStack_2e8);
  local_76f = CONCAT17(local_2e9,uStack_2f0);
  uStack_757 = CONCAT17(uStack_2d1,uStack_2d8);
  local_75f = CONCAT17(local_2d9,uStack_2e0);
  uStack_747 = CONCAT17(uStack_2c1,uStack_2c8);
  local_74f = CONCAT17(local_2c9,uStack_2d0);
  uStack_797 = CONCAT17(uStack_311,uStack_318);
  local_79f = CONCAT17(local_319,uStack_320);
  uStack_787 = CONCAT17(uStack_301,uStack_308);
  local_78f = CONCAT17(local_309,uStack_310);
  local_7a8 = 0x4010000000000000;
  local_7a0 = 0;
  local_70f = CONCAT17(uStack_289,uStack_290);
  local_7b0 = VVar6.unknown;
  FUN_100011090(&local_860,&local_1e0,&DAT_100fa7ca0,&DAT_100c24c10);
  SVar7.unknown = (undefined *)&local_7b0;
  FUN_100005808(SVar7.unknown,&DAT_100fa7ca0,&DAT_100c24c10);
  SVar7 = SwiftUI::Edge::Set::get_vertical(SVar7);
  uStack_668 = CONCAT71(local_a47,uStack_a48);
  uStack_678 = uStack_a58;
  local_680 = local_a60;
  local_670 = uStack_a50;
  uStack_658 = CONCAT71(uStack_a37,uStack_a38);
  local_660 = CONCAT71(uStack_a3f,uStack_a40);
  uStack_6b8 = uStack_a98;
  local_6c0 = local_aa0;
  uStack_6a8 = uStack_a88;
  local_6b0 = uStack_a90;
  uStack_688 = uStack_a68;
  local_690 = uStack_a70;
  uStack_698 = uStack_a78;
  local_6a0 = local_a80;
  uStack_6f8 = uStack_ad8;
  local_700 = local_ae0;
  uStack_6e8 = uStack_ac8;
  local_6f0 = uStack_ad0;
  uStack_6c8 = uStack_aa8;
  local_6d0 = uStack_ab0;
  uStack_6d8 = uStack_ab8;
  local_6e0 = local_ac0;
  uStack_638 = (undefined1)uVar12;
  uStack_637 = (undefined7)((ulong)uVar12 >> 8);
  local_630 = (undefined1)uVar10;
  uStack_62f = (undefined7)((ulong)uVar10 >> 8);
  local_628 = 0;
  uVar10 = 0x4018000000000000;
  uVar12 = local_ac0;
  local_650 = (char)_all.unknown;
  uStack_648 = uVar9;
  local_640 = uVar11;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  local_270 = CONCAT71(uStack_64f,local_650);
  uStack_278 = uStack_658;
  local_280 = local_660;
  uStack_268 = uStack_648;
  uStack_258 = uStack_638;
  local_260 = local_640;
  uStack_24f = uStack_62f;
  uStack_248 = local_628;
  uStack_257 = uStack_637;
  local_250 = local_630;
  uStack_2b8 = (undefined7)uStack_698;
  uStack_2b1 = (undefined1)((ulong)uStack_698 >> 0x38);
  uStack_2c0 = (undefined7)local_6a0;
  local_2b9 = (undefined1)((ulong)local_6a0 >> 0x38);
  uStack_2a8 = (undefined7)uStack_688;
  uStack_2a1 = (undefined1)((ulong)uStack_688 >> 0x38);
  uStack_2b0 = (undefined7)local_690;
  local_2a9 = (undefined1)((ulong)local_690 >> 0x38);
  uStack_298 = (undefined7)uStack_678;
  uStack_291 = (undefined1)((ulong)uStack_678 >> 0x38);
  uStack_2a0 = (undefined7)local_680;
  local_299 = (undefined1)((ulong)local_680 >> 0x38);
  uStack_288 = uStack_668;
  uStack_290 = (undefined7)local_670;
  uStack_289 = (undefined1)((ulong)local_670 >> 0x38);
  uStack_2f8 = (undefined7)uStack_6d8;
  uStack_2f1 = (undefined1)((ulong)uStack_6d8 >> 0x38);
  uStack_300 = (undefined7)local_6e0;
  local_2f9 = (undefined1)((ulong)local_6e0 >> 0x38);
  uStack_2e8 = (undefined7)uStack_6c8;
  uStack_2e1 = (undefined1)((ulong)uStack_6c8 >> 0x38);
  uStack_2f0 = (undefined7)local_6d0;
  local_2e9 = (undefined1)((ulong)local_6d0 >> 0x38);
  uStack_2d8 = (undefined7)uStack_6b8;
  uStack_2d1 = (undefined1)((ulong)uStack_6b8 >> 0x38);
  uStack_2e0 = (undefined7)local_6c0;
  local_2d9 = (undefined1)((ulong)local_6c0 >> 0x38);
  uStack_2c8 = (undefined7)uStack_6a8;
  uStack_2c1 = (undefined1)((ulong)uStack_6a8 >> 0x38);
  uStack_2d0 = (undefined7)local_6b0;
  local_2c9 = (undefined1)((ulong)local_6b0 >> 0x38);
  uStack_318 = (undefined7)uStack_6f8;
  uStack_311 = (undefined1)((ulong)uStack_6f8 >> 0x38);
  uStack_320 = SUB87(local_700,0);
  local_319 = (undefined1)((ulong)local_700 >> 0x38);
  uStack_308 = (undefined7)uStack_6e8;
  uStack_301 = (undefined1)((ulong)uStack_6e8 >> 0x38);
  uStack_310 = (undefined7)local_6f0;
  local_309 = (undefined1)((ulong)local_6f0 >> 0x38);
  uStack_588 = CONCAT71(local_a47,uStack_a48);
  uStack_598 = uStack_a58;
  local_5a0 = local_a60;
  local_590 = uStack_a50;
  uStack_578 = CONCAT71(uStack_a37,uStack_a38);
  local_580 = CONCAT71(uStack_a3f,uStack_a40);
  uStack_5d8 = uStack_a98;
  local_5e0 = local_aa0;
  uStack_5c8 = uStack_a88;
  local_5d0 = uStack_a90;
  uStack_5a8 = uStack_a68;
  local_5b0 = uStack_a70;
  uStack_5b8 = uStack_a78;
  local_5c0 = local_a80;
  uStack_618 = uStack_ad8;
  local_620 = local_ae0;
  uStack_608 = uStack_ac8;
  local_610 = uStack_ad0;
  uStack_5e8 = uStack_aa8;
  local_5f0 = uStack_ab0;
  uStack_5f8 = uStack_ab8;
  local_600 = local_ac0;
  local_548 = 0;
  local_570 = (char)_all.unknown;
  local_568 = uVar9;
  local_560 = uVar11;
  FUN_100011090(&local_700,&local_1e0,&DAT_100fa7c90,&DAT_100c24c08);
  AVar8.unknown = (undefined *)&local_620;
  FUN_100005808(AVar8.unknown,&DAT_100fa7c90,&DAT_100c24c08);
  SwiftUI::Alignment::get_leading(AVar8);
  uStack_498 = uStack_278;
  local_4a0 = local_280;
  uStack_488 = uStack_268;
  local_490 = local_270;
  uStack_478 = CONCAT71(uStack_257,uStack_258);
  uStack_468 = CONCAT71(uStack_247,uStack_248);
  local_470 = CONCAT71(uStack_24f,local_250);
  local_480 = local_260;
  uStack_4d8 = CONCAT17(uStack_2b1,uStack_2b8);
  local_4e0 = CONCAT17(local_2b9,uStack_2c0);
  uStack_4c8 = CONCAT17(uStack_2a1,uStack_2a8);
  local_4d0 = CONCAT17(local_2a9,uStack_2b0);
  uStack_4b8 = CONCAT17(uStack_291,uStack_298);
  local_4c0 = CONCAT17(local_299,uStack_2a0);
  local_4b0 = CONCAT17(uStack_289,uStack_290);
  uStack_4a8 = uStack_288;
  uStack_518 = CONCAT17(uStack_2f1,uStack_2f8);
  local_520 = CONCAT17(local_2f9,uStack_300);
  uStack_508 = CONCAT17(uStack_2e1,uStack_2e8);
  local_510 = CONCAT17(local_2e9,uStack_2f0);
  uStack_4f8 = CONCAT17(uStack_2d1,uStack_2d8);
  local_500 = CONCAT17(local_2d9,uStack_2e0);
  uStack_4e8 = CONCAT17(uStack_2c1,uStack_2c8);
  local_4f0 = CONCAT17(local_2c9,uStack_2d0);
  uStack_538 = CONCAT17(uStack_311,uStack_318);
  local_540 = CONCAT17(local_319,uStack_320);
  uStack_528 = CONCAT17(uStack_301,uStack_308);
  local_530 = CONCAT17(local_309,uStack_310);
  local_438 = 0;
  local_460 = (char)SVar7.unknown;
  local_458 = uVar10;
  local_450 = uVar12;
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  _memcpy(&local_ae0,&local_540,0x109);
  uStack_388 = uStack_278;
  local_390 = local_280;
  uStack_378 = uStack_268;
  local_380 = local_270;
  uStack_368 = CONCAT71(uStack_257,uStack_258);
  uStack_358 = CONCAT71(uStack_247,uStack_248);
  local_360 = CONCAT71(uStack_24f,local_250);
  local_370 = local_260;
  uStack_3c8 = CONCAT17(uStack_2b1,uStack_2b8);
  local_3d0 = CONCAT17(local_2b9,uStack_2c0);
  uStack_3b8 = CONCAT17(uStack_2a1,uStack_2a8);
  local_3c0 = CONCAT17(local_2a9,uStack_2b0);
  uStack_3a8 = CONCAT17(uStack_291,uStack_298);
  local_3b0 = CONCAT17(local_299,uStack_2a0);
  local_3a0 = CONCAT17(uStack_289,uStack_290);
  uStack_398 = uStack_288;
  uStack_408 = CONCAT17(uStack_2f1,uStack_2f8);
  local_410 = CONCAT17(local_2f9,uStack_300);
  uStack_3f8 = CONCAT17(uStack_2e1,uStack_2e8);
  local_400 = CONCAT17(local_2e9,uStack_2f0);
  uStack_3e8 = CONCAT17(uStack_2d1,uStack_2d8);
  local_3f0 = CONCAT17(local_2d9,uStack_2e0);
  uStack_3d8 = CONCAT17(uStack_2c1,uStack_2c8);
  local_3e0 = CONCAT17(local_2c9,uStack_2d0);
  uStack_428 = CONCAT17(uStack_311,uStack_318);
  local_430 = CONCAT17(local_319,uStack_320);
  uStack_418 = CONCAT17(uStack_301,uStack_308);
  local_420 = CONCAT17(local_309,uStack_310);
  local_328 = 0;
  local_350 = (char)SVar7.unknown;
  local_348 = uVar10;
  local_340 = uVar12;
  FUN_100011090(&local_540,&local_1e0,&DAT_100fa7c80,&DAT_100c24c00);
  FUN_100005808(&local_430,&DAT_100fa7c80,&DAT_100c24c00);
  _memcpy(&uStack_320,&local_ae0,0x140);
  _memcpy(&local_1e0,&local_ae0,0x140);
  FUN_100011090(&uStack_320,auStack_c20,&DAT_100fa7c68,&DAT_100c24bf8);
  FUN_100005808(&local_1e0,&DAT_100fa7c68,&DAT_100c24bf8);
  _swift_release(pMVar2);
  _memcpy(param_1,&uStack_320,0x140);
  return;
}



/* Address: 0x10002d828 | FUN_10002d828 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002d828(undefined8 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  byte bVar2;
  ResizingMode RVar3;
  undefined7 extraout_var;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  NSImage *pNVar9;
  Image IVar10;
  Image IVar11;
  Alignment capInsets;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  undefined *puVar15;
  undefined8 uVar16;
  Text TVar17;
  long extraout_x8;
  long lVar18;
  NSImage *pNVar19;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  uint local_214;
  NSImage *local_210;
  undefined8 uStack_208;
  NSImage *local_1f8;
  undefined8 *local_1f0;
  MainActor *local_1e8;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined2 local_1d0;
  undefined6 local_1ce;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined6 local_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 local_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  NSImage *local_190;
  undefined8 uStack_188;
  undefined2 local_180;
  undefined6 uStack_17e;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined2 local_170;
  undefined6 uStack_16e;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined2 uStack_160;
  undefined6 uStack_15e;
  undefined1 uStack_158;
  undefined1 local_157;
  undefined6 uStack_156;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined6 uStack_14e;
  byte bStack_148;
  undefined6 local_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined1 local_130;
  undefined5 uStack_12f;
  undefined2 local_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined1 uStack_120;
  undefined5 uStack_11f;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  byte bStack_f8;
  NSImage *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *puVar4;
  
  local_1f0 = param_1;
  RVar3 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var,RVar3.value);
  lVar18 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  capInsets.unknown = (undefined *)((long)&local_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar15,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_1e8 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    param_5 = (undefined *)0xc;
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterItemView.swift",0x1a,1,0xc,UVar7.unknown,puVar6);
  }
  bVar2 = *param_2;
  pNVar19 = (NSImage *)(ulong)bVar2;
  uVar16 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  pNVar9 = pNVar19;
  FUN_1000546e0(pNVar19,uVar16,uVar1);
  if (pNVar9 == (NSImage *)0x0) {
    local_1f8 = (NSImage *)0x0;
    uStack_208 = 0;
    local_210 = (NSImage *)0x0;
    local_214 = 0xff;
    uStack_238 = 0;
    local_240 = 0;
    uStack_228 = 0;
    local_230 = 0;
    uStack_248 = 0;
    local_250 = 0;
  }
  else {
    if (bVar2 == 5) {
      IVar10 = SwiftUI::Image::init(pNVar9);
      SwiftUI::Alignment::get_center((Alignment)IVar10.unknown);
      SwiftUI::_FrameLayout::_init((Alignment)0x4030000000000000);
      local_140 = SUB86(IVar10.unknown,0);
      uStack_13a = (undefined2)((ulong)IVar10.unknown >> 0x30);
      uStack_138 = (undefined6)local_a0;
      uStack_132 = (undefined2)((ulong)local_a0 >> 0x30);
      local_130 = uStack_98;
      uStack_128 = (undefined6)local_90;
      uStack_122 = (undefined2)((ulong)local_90 >> 0x30);
      uStack_120 = local_88;
      uStack_110 = (undefined6)uStack_78;
      uStack_10a = (undefined2)((ulong)uStack_78 >> 0x30);
      uStack_118 = (undefined6)local_80;
      uStack_112 = (undefined2)((ulong)local_80 >> 0x30);
      bStack_f8 = 0;
      FUN_1000037f0(&DAT_100fa7cd0,&DAT_100c24c60);
      FUN_1000037f0(&DAT_100fa7cc8,&DAT_100c264d0);
      FUN_10002e5d0(&DAT_100fa7cd8,&DAT_100fa7cd0,&DAT_100c24c60,
                    PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0
                   );
      FUN_10002e538();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_140);
    }
    else {
      local_1f8 = pNVar9;
      IVar11 = SwiftUI::Image::init(pNVar9);
      IVar10.unknown = puVar4;
      (**(code **)(lVar18 + 0x68))
                (capInsets.unknown,
                 *(undefined4 *)
                  PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
                );
      IVar10 = SwiftUI::Image::resizable
                         ((EdgeInsets)capInsets.unknown,(ResizingMode)(__int8)IVar11.unknown,IVar10)
      ;
      _swift_release(IVar11.unknown);
      (**(code **)(lVar18 + 8))(capInsets.unknown,puVar4);
      SwiftUI::Alignment::get_center(capInsets);
      SwiftUI::_FrameLayout::_init((Alignment)0x4030000000000000);
      uStack_132 = (undefined2)CONCAT71(uStack_97,uStack_98);
      local_130 = (undefined1)((uint7)uStack_97 >> 8);
      uStack_12f = (undefined5)((uint7)uStack_97 >> 0x10);
      uStack_13a = (undefined2)local_a0;
      uStack_138 = (undefined6)((ulong)local_a0 >> 0x10);
      uStack_122 = (undefined2)CONCAT71(uStack_87,local_88);
      uStack_120 = (undefined1)((uint7)uStack_87 >> 8);
      uStack_11f = (undefined5)((uint7)uStack_87 >> 0x10);
      local_12a = (undefined2)local_90;
      uStack_128 = (undefined6)((ulong)local_90 >> 0x10);
      uStack_112 = (undefined2)uStack_78;
      uStack_110 = (undefined6)((ulong)uStack_78 >> 0x10);
      uStack_11a = (undefined2)local_80;
      uStack_118 = (undefined6)((ulong)local_80 >> 0x10);
      local_1be = (undefined6)((uint7)uStack_97 >> 8);
      uStack_1c6 = uStack_138;
      uStack_1c0 = uStack_132;
      local_1ce = local_140;
      uStack_1c8 = uStack_13a;
      uStack_1b6 = uStack_128;
      uStack_1b0 = uStack_122;
      uStack_1b8 = local_12a;
      local_1ae = (undefined6)((uint7)uStack_87 >> 8);
      uStack_1a6 = uStack_118;
      uStack_1a8 = uStack_11a;
      uStack_1d8 = 0;
      local_1d0 = 1;
      uStack_188 = 0;
      local_180 = 1;
      uStack_156 = uStack_118;
      uStack_150 = (undefined1)uStack_78;
      uStack_14f = (undefined1)((ulong)uStack_78 >> 8);
      uStack_158 = (undefined1)local_80;
      local_157 = (undefined1)((ulong)local_80 >> 8);
      uStack_166 = uStack_128;
      uStack_160 = uStack_122;
      uStack_168 = local_12a;
      uStack_176 = uStack_138;
      local_170 = uStack_132;
      uStack_178 = uStack_13a;
      local_1e0 = IVar10.unknown;
      uStack_1a0 = uStack_112;
      uStack_19e = uStack_110;
      local_190 = (NSImage *)IVar10;
      uStack_16e = local_1be;
      uStack_15e = local_1ae;
      uStack_14e = uStack_110;
      FUN_100011090(&local_1e0,&local_f0,&DAT_100fa7cc8,&DAT_100c264d0);
      FUN_100005808(&local_190,&DAT_100fa7cc8,&DAT_100c264d0);
      uStack_118 = (undefined6)CONCAT62(uStack_1b6,uStack_1b8);
      uStack_112 = (undefined2)((uint6)uStack_1b6 >> 0x20);
      uStack_120 = (undefined1)uStack_1c0;
      uStack_11f = (undefined5)(CONCAT62(local_1be,uStack_1c0) >> 8);
      uStack_11a = (undefined2)((uint6)local_1be >> 0x20);
      uStack_108 = (undefined1)uStack_1a8;
      local_107 = (undefined7)(CONCAT62(uStack_1a6,uStack_1a8) >> 8);
      uStack_110 = (undefined6)CONCAT62(local_1ae,uStack_1b0);
      uStack_10a = (undefined2)((uint6)local_1ae >> 0x20);
      uStack_100 = (undefined1)uStack_1a0;
      uStack_ff = (undefined7)(CONCAT62(uStack_19e,uStack_1a0) >> 8);
      uStack_138 = (undefined6)uStack_1d8;
      uStack_132 = (undefined2)((ulong)uStack_1d8 >> 0x30);
      local_140 = SUB86(local_1e0,0);
      uStack_13a = (undefined2)((ulong)local_1e0 >> 0x30);
      uStack_128 = (undefined6)CONCAT62(uStack_1c6,uStack_1c8);
      uStack_122 = (undefined2)((uint6)uStack_1c6 >> 0x20);
      local_130 = (undefined1)local_1d0;
      uStack_12f = (undefined5)(CONCAT62(local_1ce,local_1d0) >> 8);
      local_12a = (undefined2)((uint6)local_1ce >> 0x20);
      bStack_f8 = 1;
      FUN_1000037f0(&DAT_100fa7cd0,&DAT_100c24c60);
      FUN_1000037f0(&DAT_100fa7cc8,&DAT_100c264d0);
      FUN_10002e5d0(&DAT_100fa7cd8,&DAT_100fa7cd0,&DAT_100c24c60,
                    PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0
                   );
      FUN_10002e538();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_140);
    }
    uStack_168 = (undefined2)uStack_c8;
    uStack_166 = (undefined6)((ulong)uStack_c8 >> 0x10);
    local_170 = (undefined2)local_d0;
    uStack_16e = (undefined6)((ulong)local_d0 >> 0x10);
    uStack_158 = uStack_b8;
    uStack_160 = (undefined2)uStack_c0;
    uStack_15e = (undefined6)((ulong)uStack_c0 >> 0x10);
    uStack_14f = (undefined1)uStack_af;
    uStack_14e = (undefined6)((ulong)uStack_af >> 8);
    bStack_148 = (byte)((ulong)uStack_af >> 0x38);
    local_157 = (undefined1)local_b7;
    uStack_156 = (undefined6)((uint7)local_b7 >> 8);
    uStack_150 = uStack_b0;
    uStack_188 = uStack_e8;
    local_190 = local_f0;
    uStack_178 = (undefined2)uStack_d8;
    uStack_176 = (undefined6)((ulong)uStack_d8 >> 0x10);
    local_180 = (undefined2)uStack_e0;
    uStack_17e = (undefined6)((ulong)uStack_e0 >> 0x10);
    uStack_118 = (undefined6)uStack_c8;
    uStack_112 = (undefined2)((ulong)uStack_c8 >> 0x30);
    uStack_120 = (undefined1)local_d0;
    uStack_11f = (undefined5)((ulong)local_d0 >> 8);
    uStack_11a = (undefined2)((ulong)local_d0 >> 0x30);
    uStack_110 = (undefined6)uStack_c0;
    uStack_10a = (undefined2)((ulong)uStack_c0 >> 0x30);
    uStack_ff = (undefined7)uStack_af;
    uStack_138 = (undefined6)uStack_e8;
    uStack_132 = (undefined2)((ulong)uStack_e8 >> 0x30);
    local_140 = SUB86(local_f0,0);
    uStack_13a = (undefined2)((ulong)local_f0 >> 0x30);
    uStack_128 = (undefined6)uStack_d8;
    uStack_122 = (undefined2)((ulong)uStack_d8 >> 0x30);
    local_130 = (undefined1)uStack_e0;
    uStack_12f = (undefined5)((ulong)uStack_e0 >> 8);
    local_12a = (undefined2)((ulong)uStack_e0 >> 0x30);
    param_5 = &DAT_100c24c70;
    bStack_f8 = bStack_148;
    FUN_100011090(&local_190,&local_1e0,&DAT_100fa7cf8,&DAT_100c24c70);
    FUN_100005808(&local_140,&DAT_100fa7cf8,&DAT_100c24c70);
    uStack_228 = CONCAT62(uStack_176,uStack_178);
    local_230 = CONCAT62(uStack_17e,local_180);
    uStack_208 = uStack_188;
    local_210 = local_190;
    uStack_248 = CONCAT62(uStack_166,uStack_168);
    local_250 = CONCAT62(uStack_16e,local_170);
    uStack_238 = CONCAT62(uStack_156,CONCAT11(local_157,uStack_158));
    local_240 = CONCAT62(uStack_15e,uStack_160);
    local_1f8 = (NSImage *)CONCAT62(uStack_14e,CONCAT11(uStack_14f,uStack_150));
    local_214 = (uint)bStack_148;
  }
  FUN_1002ddc10(pNVar19,uVar16,uVar1);
  local_f0 = pNVar19;
  uStack_e8 = uVar16;
  FUN_100008378();
  puVar15 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar12 = SwiftUI::Text::_init();
  FVar13 = SwiftUI::Font::get_body(TVar12.unknown);
  TVar17 = TVar12;
  puVar4 = puVar15;
  pNVar9 = pNVar19;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100016d74(TVar12.unknown,puVar15,pNVar19);
  _swift_bridgeObjectRelease(param_5);
  puVar15 = &DAT_100c24c20;
  _swift_getKeyPath();
  uStack_138 = (undefined6)uStack_208;
  uStack_132 = (undefined2)((ulong)uStack_208 >> 0x30);
  local_140 = SUB86(local_210,0);
  uStack_13a = (undefined2)((ulong)local_210 >> 0x30);
  uStack_128 = (undefined6)uStack_228;
  uStack_122 = (undefined2)((ulong)uStack_228 >> 0x30);
  local_130 = (undefined1)local_230;
  uStack_12f = (undefined5)((ulong)local_230 >> 8);
  local_12a = (undefined2)((ulong)local_230 >> 0x30);
  uStack_118 = (undefined6)uStack_248;
  uStack_112 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_120 = (undefined1)local_250;
  uStack_11f = (undefined5)((ulong)local_250 >> 8);
  uStack_11a = (undefined2)((ulong)local_250 >> 0x30);
  uStack_108 = (undefined1)uStack_238;
  local_107 = (undefined7)((ulong)uStack_238 >> 8);
  uStack_110 = (undefined6)local_240;
  uStack_10a = (undefined2)((ulong)local_240 >> 0x30);
  uStack_100 = SUB81(local_1f8,0);
  uStack_ff = (undefined7)((ulong)local_1f8 >> 8);
  bStack_f8 = (byte)local_214;
  uStack_c8 = uStack_248;
  local_d0 = local_250;
  uStack_c0 = local_240;
  uStack_af = CONCAT17(bStack_f8,uStack_ff);
  local_b7 = local_107;
  uStack_b0 = uStack_100;
  uStack_e8 = uStack_208;
  local_f0 = local_210;
  uStack_d8 = uStack_228;
  uStack_e0 = local_230;
  *(undefined8 *)((long)local_1f0 + 0x41) = uStack_af;
  *(ulong *)((long)local_1f0 + 0x39) = CONCAT17(uStack_100,local_107);
  local_1f0[5] = uStack_248;
  local_1f0[4] = local_250;
  local_1f0[7] = uStack_238;
  local_1f0[6] = local_240;
  local_1f0[1] = uStack_208;
  *local_1f0 = local_210;
  local_1f0[3] = uStack_228;
  local_1f0[2] = local_230;
  local_1f0[10] = TVar14.unknown;
  local_1f0[0xb] = TVar17.unknown;
  *(char *)(local_1f0 + 0xc) = (char)puVar4;
  local_1f0[0xd] = pNVar9;
  local_1f0[0xe] = puVar15;
  local_1f0[0xf] = 1;
  *(undefined1 *)(local_1f0 + 0x10) = 0;
  local_1f0[0x11] = 0;
  *(undefined1 *)(local_1f0 + 0x12) = 0;
  uStack_b8 = uStack_108;
  FUN_100011090(&local_f0,&local_190,&DAT_100fa7cc0,&DAT_100c24c50);
  FUN_100016d5c(TVar14.unknown,TVar17.unknown,puVar4);
  _swift_bridgeObjectRetain(pNVar9);
  _swift_retain(puVar15);
  FUN_100016d74(TVar14.unknown,TVar17.unknown,puVar4);
  _swift_release(puVar15);
  _swift_bridgeObjectRelease(pNVar9);
  FUN_100005808(&local_140,&DAT_100fa7cc0,&DAT_100c24c50);
  _swift_release(local_1e8);
  return;
}



/* Address: 0x10002de00 | FUN_10002de00 */

void FUN_10002de00(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  undefined1 local_b0 [16];
  undefined8 *local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_100fa7c60;
  FUN_1000037f0(&DAT_100fa7c60,&DAT_100c24bf0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_78 = unaff_x20[3];
  local_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  local_a0 = &local_90;
  _swift_retain(uStack_68);
  FUN_1000037f0(&DAT_100fa7c68,&DAT_100c24bf8);
  FUN_10002e368();
  SwiftUI::Button::_init();
  local_b0[0] = (undefined1)uStack_78;
  puVar2 = &DAT_100fa7ca8;
  FUN_100016eac(&DAT_100fa7ca8,&DAT_100fa7c60,&DAT_100c24bf0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = puVar2;
  FUN_10002e4f0();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (param_1,local_b0,puVar1,&DAT_100eb1180,puVar2,puVar3);
  (**(code **)(lVar4 + 8))(local_b0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10002df50 | FUN_10002df50 */

void FUN_10002df50(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0a54,1);
  return;
}



/* Address: 0x10002df60 | FUN_10002df60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10002df60(long param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  RoundedCornerStyle RVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  undefined7 extraout_var;
  Color CVar12;
  ButtonStyleConfiguration BVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  code *pcVar18;
  undefined8 uVar19;
  MainActor *apMStack_80 [3];
  long local_68;
  long lVar11;
  
  puVar5 = &DAT_100fa7c48;
  apMStack_80[1] = (MainActor *)param_3;
  local_68 = param_1;
  FUN_1000037f0(&DAT_100fa7c48,&DAT_100c24bd8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar14 = (long)apMStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = (undefined *)(lVar14 - extraout_x12);
  puVar6 = &DAT_100fa7c50;
  FUN_1000037f0(&DAT_100fa7c50,&DAT_100c24be0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar16 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined *)(lVar16 - extraout_x12_00);
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  apMStack_80[2] = pMVar7;
  UVar9 = Swift::Actor::get_unownedExecutor();
  UVar10 = UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar10.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterItemView.swift",0x1a,1,0x2e,UVar9.unknown,puVar8);
  }
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar3 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar11 = CONCAT71(extraout_var,RVar3.value);
  pcVar18 = *(code **)(*(long *)(lVar11 + -8) + 0x68);
  CVar12.unknown = puVar17;
  (*pcVar18)(puVar17,uVar1,lVar11);
  if ((param_2 & 1) == 0) {
    FUN_1001fe1dc();
    CVar12 = SwiftUI::Color::init(*(NSColor **)CVar12.unknown);
  }
  else {
    CVar12 = SwiftUI::Color::get_accentColor(CVar12);
  }
  *(undefined **)(puVar17 + *(int *)(puVar6 + 0x34)) = CVar12.unknown;
  *(undefined2 *)(puVar17 + *(int *)(puVar6 + 0x38)) = 0x100;
  CVar12.unknown = puVar15;
  (*pcVar18)(puVar15,uVar1,lVar11);
  BVar13.unknown = (undefined *)SwiftUI::Color::get_black(CVar12);
  CVar12 = SwiftUI::Color::opacity(0.1,(Color)BVar13.unknown);
  _swift_release();
  *(undefined **)(puVar15 + *(int *)(puVar6 + 0x34)) = CVar12.unknown;
  *(undefined2 *)(puVar15 + *(int *)(puVar6 + 0x38)) = 0x100;
  bVar4 = SwiftUI::ButtonStyleConfiguration::get_isPressed(BVar13);
  uVar19 = 0x3ff0000000000000;
  if (!bVar4) {
    uVar19 = 0;
  }
  *(undefined8 *)(puVar15 + *(int *)(puVar5 + 0x24)) = uVar19;
  FUN_100011090(puVar17,lVar16,&DAT_100fa7c50,&DAT_100c24be0);
  FUN_100011090(puVar15,lVar14,&DAT_100fa7c48,&DAT_100c24bd8);
  lVar11 = local_68;
  FUN_100011090(lVar16,local_68,&DAT_100fa7c50,&DAT_100c24be0);
  puVar5 = &DAT_100fa7c58;
  FUN_1000037f0(&DAT_100fa7c58,&DAT_100c24be8);
  FUN_100011090(lVar14,lVar11 + *(int *)(puVar5 + 0x30),&DAT_100fa7c48,&DAT_100c24bd8);
  FUN_100005808(puVar15,&DAT_100fa7c48,&DAT_100c24bd8);
  FUN_100005808(puVar17,&DAT_100fa7c50,&DAT_100c24be0);
  FUN_100005808(lVar14,&DAT_100fa7c48,&DAT_100c24bd8);
  FUN_100005808(lVar16,&DAT_100fa7c50,&DAT_100c24be0);
  _swift_release(apMStack_80[2]);
  return;
}



/* Address: 0x10002e280 | FUN_10002e280 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10002e280(long param_1,ButtonStyleConfiguration param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  Label LVar4;
  Color CVar5;
  NSColor *pNVar6;
  Alignment AVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *unaff_x20;
  
  cVar2 = *unaff_x20;
  LVar4 = SwiftUI::ButtonStyleConfiguration::get_label(param_2);
  if (cVar2 == '\x01') {
    CVar5 = SwiftUI::Color::get_white(LVar4.unknown);
  }
  else {
    pNVar6 = (NSColor *)NSColor::labelColor((ID)&_OBJC_CLASS___NSColor);
    CVar5 = SwiftUI::Color::init(pNVar6);
  }
  AVar7.unknown = &DAT_100fa7c30;
  puVar9 = &DAT_100c24bc0;
  FUN_1000037f0();
  *(undefined **)(param_1 + *(int *)(AVar7.unknown + 0x24)) = CVar5.unknown;
  AVar7 = SwiftUI::Alignment::get_center(AVar7);
  puVar8 = &DAT_100fa7c38;
  FUN_1000037f0(&DAT_100fa7c38,&DAT_100c24bc8);
  iVar3 = *(int *)(puVar8 + 0x24);
  FUN_10002df60(param_1 + iVar3,cVar2,param_2.unknown);
  puVar8 = &DAT_100fa7c40;
  FUN_1000037f0(&DAT_100fa7c40,&DAT_100c24bd0);
  puVar1 = (undefined8 *)(param_1 + iVar3 + (long)*(int *)(puVar8 + 0x24));
  *puVar1 = AVar7.unknown;
  puVar1[1] = puVar9;
  return;
}



/* Address: 0x10002e360 | FUN_10002e360 */

void FUN_10002e360(void)

{
  long unaff_x20;
  
  FUN_10002d180(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10002e368 | FUN_10002e368 */

void FUN_10002e368(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7c68;
  FUN_100005c24(&DAT_100fa7c68,&DAT_100c24bf8);
  puVar2 = puVar1;
  FUN_10002e3e0();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7c70 = puVar3;
  return;
}



/* Address: 0x10002e3e0 | FUN_10002e3e0 */

void FUN_10002e3e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7c80;
  FUN_100005c24(&DAT_100fa7c80,&DAT_100c24c00);
  puVar2 = puVar1;
  FUN_10002e458();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7c78 = puVar3;
  return;
}



/* Address: 0x10002e458 | FUN_10002e458 */

void FUN_10002e458(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7c90;
  FUN_100005c24(&DAT_100fa7c90,&DAT_100c24c08);
  puVar2 = &DAT_100fa7c98;
  FUN_100016eac(&DAT_100fa7c98,&DAT_100fa7ca0,&DAT_100c24c10,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7c88 = puVar3;
  return;
}



/* Address: 0x10002e4f0 | FUN_10002e4f0 */

void FUN_10002e4f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7cb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c24b88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c24b88,&DAT_100eb1180);
  DAT_100fa7cb0 = pTVar1;
  return;
}



/* Address: 0x10002e530 | thunk_FUN_10009cde8 */

void thunk_FUN_10009cde8(void)

{
  FUN_10009cde8();
  return;
}



/* Address: 0x10002e534 | thunk_FUN_10009ce14 */

void thunk_FUN_10009ce14(void)

{
  FUN_10009ce14();
  return;
}



/* Address: 0x10002e538 | FUN_10002e538 */

void FUN_10002e538(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7cc8;
  FUN_100005c24(&DAT_100fa7cc8,&DAT_100c264d0);
  puVar2 = &DAT_100fa7ce8;
  FUN_10002e5d0(&DAT_100fa7ce8,&DAT_100fa7cf0,&DAT_100c25660,
                PTR___protocol_witness_table_for_SwiftUI__AspectRatioLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaac88
               );
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7ce0 = puVar3;
  return;
}



/* Address: 0x10002e5d0 | FUN_10002e5d0 */

void FUN_10002e5d0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 uStack_28;
  
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    local_30 = PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8;
    puVar1 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
    uStack_28 = param_4;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
               param_2,&local_30);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x10002e630 | thunk_FUN_10002e634 */

void thunk_FUN_10002e634(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa7d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7c38;
  FUN_100005c24(&DAT_100fa7c38,&DAT_100c24bc8);
  puVar2 = puVar1;
  FUN_10002e6cc();
  puVar3 = &DAT_100fa7d18;
  FUN_100016eac(&DAT_100fa7d18,&DAT_100fa7c40,&DAT_100c24bd0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fa7d00 = puVar4;
  return;
}



/* Address: 0x10002e634 | FUN_10002e634 */

void FUN_10002e634(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7c38;
  FUN_100005c24(&DAT_100fa7c38,&DAT_100c24bc8);
  puVar2 = puVar1;
  FUN_10002e6cc();
  puVar3 = &DAT_100fa7d18;
  FUN_100016eac(&DAT_100fa7d18,&DAT_100fa7c40,&DAT_100c24bd0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7d00 = puVar4;
  return;
}



/* Address: 0x10002e6cc | FUN_10002e6cc */

void FUN_10002e6cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7d08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7c30;
  FUN_100005c24(&DAT_100fa7c30,&DAT_100c24bc0);
  puVar2 = &DAT_100fa7d10;
  FUN_100003a00(&DAT_100fa7d10,PTR_typeMetadataAccessor_100eaaf98,
                PTR_SwiftUI__SwiftUI__ButtonStyleConfiguration__Label_>SwiftUI__View_100eaaf90);
  puVar3 = &DAT_100fa7350;
  FUN_100016eac(&DAT_100fa7350,&DAT_100fa7358,&DAT_100c24160,
                PTR_SwiftUI__SwiftUI___ForegroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eab000
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7d08 = puVar4;
  return;
}



/* Address: 0x10002e77c | FUN_10002e77c */

void FUN_10002e77c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100fa7c60;
  FUN_100005c24(&DAT_100fa7c60,&DAT_100c24bf0);
  puVar2 = &DAT_100fa7ca8;
  FUN_100016eac(&DAT_100fa7ca8,&DAT_100fa7c60,&DAT_100c24bf0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = puVar2;
  FUN_10002e4f0();
  puStack_48 = &DAT_100eb1180;
  local_50 = puVar1;
  local_40 = puVar2;
  puStack_38 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  return;
}



/* Address: 0x10002e80c | FUN_10002e80c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10002e80c(undefined1 *param_1,char param_2)

{
  code *pcVar1;
  _ArrayBuffer _Var2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  Invalidating *pIVar7;
  Invalidating *unaff_x20;
  undefined1 local_32;
  undefined1 local_31;
  
  puVar6 = param_1;
  if (param_2 != '\x01') {
    FUN_10002ea54();
    _Var2.unknown = (undefined *)objc_stub::arrangedSubviews((ID)puVar6);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (((ulong)_Var2.unknown & 0xc000000000000001) == 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10002ea48);
        (*pcVar1)();
      }
      if (*(undefined1 **)(((ulong)_Var2.unknown & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10002ea50);
        (*pcVar1)();
      }
      param_1 = *(undefined1 **)(_Var2.unknown + (long)param_1 * 8 + 0x20);
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)param_1,_Var2);
    }
    _swift_bridgeObjectRelease(_Var2.unknown);
    uVar3 = 0;
    FUN_10000fee8(0);
    _swift_dynamicCastClass(param_1,uVar3);
    if (param_1 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar4 = &DAT_100c24ca8;
      _swift_getKeyPath(&DAT_100c24ca8);
      puVar5 = &DAT_100c24cd0;
      _swift_getKeyPath(&DAT_100c24cd0);
      local_32 = 0;
      puVar6 = &local_32;
      Invalidating::_set_subscript(unaff_x20,puVar6,param_1,puVar4,puVar5);
    }
  }
  if ((unaff_x20 + _TtC5Paste21FilterSuggestionsList::selectedIndex)[8] != (Invalidating)0x1) {
    pIVar7 = *(Invalidating **)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::selectedIndex);
    FUN_10002ea54();
    _Var2.unknown = (undefined *)objc_stub::arrangedSubviews((ID)puVar6);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (((ulong)_Var2.unknown & 0xc000000000000001) == 0) {
      if ((long)pIVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10002ea4c);
        (*pcVar1)();
      }
      if (*(Invalidating **)(((ulong)_Var2.unknown & 0xffffffffffffff8) + 0x10) <= pIVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10002ea54);
        (*pcVar1)();
      }
      pIVar7 = *(Invalidating **)(_Var2.unknown + (long)pIVar7 * 8 + 0x20);
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)pIVar7,_Var2);
    }
    _swift_bridgeObjectRelease(_Var2.unknown);
    uVar3 = 0;
    FUN_10000fee8(0);
    _swift_dynamicCastClass(pIVar7,uVar3);
    if (pIVar7 != (Invalidating *)0x0) {
      puVar4 = &DAT_100c24ca8;
      _swift_getKeyPath(&DAT_100c24ca8);
      puVar5 = &DAT_100c24cd0;
      _swift_getKeyPath(&DAT_100c24cd0);
      local_31 = 1;
      Invalidating::_set_subscript(pIVar7,&local_31,pIVar7,puVar4,puVar5);
    }
  }
  return;
}



/* Address: 0x10002ea54 | FUN_10002ea54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002ea54(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  long unaff_x20;
  
  lVar1 = _TtC5Paste21FilterSuggestionsList::___lazy_storage___stackView;
  self = *(ID *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::___lazy_storage___stackView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setOrientation_(self,1);
    objc_stub::setAlignment_(self,5);
    objc_stub::setSpacing_(self,0);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10002eae8 | FUN_10002eae8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10002eae8(ID param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_10002ea54();
  _Var3.unknown = (undefined *)objc_stub::arrangedSubviews(param_1);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  else {
    if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10002ebe4);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(_Var3.unknown + 0x20);
    }
    else {
      uVar5 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var3);
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
    uVar6 = 0;
    FUN_10000fee8(0);
    _swift_dynamicCastClass(uVar5,uVar6);
  }
  return;
}



/* Address: 0x10002ebe4 | FUN_10002ebe4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002ebe4(undefined8 param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::onEscapePressed);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::keyboardEventMonitor);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::mouseSelectionCooldown) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::selectedIndex);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::___lazy_storage___stackView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::items) = param_1;
  _swift_bridgeObjectRetain(param_1);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  IVar3 = IVar2;
  FUN_10002ea54();
  FUN_1001fa09c();
  _swift_bridgeObjectRelease(IVar3);
  FUN_10002ee40(param_1);
  _swift_bridgeObjectRelease(param_1);
  return IVar2;
}



/* Address: 0x10002ed00 | FUN_10002ed00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10002ed00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  
  uVar7 = param_1;
  _swift_getObjectType();
  uVar1 = uVar7;
  FUN_10002ea54();
  ppuStack_40 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_60[0] = param_1;
  local_48 = uVar7;
  local_38 = uVar1;
  FUN_10000ec2c(0,&DAT_100fa6c68,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  puVar3 = local_60;
  FUN_1001f97b4(0x4014000000000000,0x4014000000000000,0x4014000000000000,0x4014000000000000,puVar3,
                uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_60);
  puVar4 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar4 + 0x20) = puVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar7 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar4 + 0x20,uVar7,puVar5);
  return puVar6;
}



/* Address: 0x10002ee40 | FUN_10002ee40 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10002ee40(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ID *pIVar3;
  undefined8 *puVar4;
  _CocoaArrayWrapper _Var5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  ID IVar9;
  _ArrayBuffer _Var10;
  ulong uVar11;
  MainActor *pMVar12;
  UnownedSerialExecutor UVar13;
  UnownedSerialExecutor UVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ID IVar20;
  undefined8 uVar21;
  long lVar22;
  long unaff_x20;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined1 auStack_d0 [16];
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
  
  lVar7 = _TtC5Paste21FilterSuggestionsList::items;
  uVar21 = *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::items);
  *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::items) = param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar21);
  pIVar3 = (ID *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::selectedIndex);
  IVar9 = *pIVar3;
  *pIVar3 = 0;
  IVar20 = pIVar3[1];
  *(undefined1 *)(pIVar3 + 1) = 1;
  FUN_10002e80c(IVar9,(char)IVar20);
  FUN_10002ea54();
  _Var10.unknown = (undefined *)objc_stub::arrangedSubviews(IVar9);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var10.unknown >> 0x3e == 0) {
    lVar22 = *(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var5.unknown = _Var10.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
      _Var5.unknown = _Var10.unknown;
    }
    lVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var5);
  }
  if (lVar22 != 0) {
    uVar23 = 0;
    do {
      if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10002eff4);
          (*pcVar8)();
        }
        uVar11 = *(ulong *)(_Var10.unknown + uVar23 * 8 + 0x20);
      }
      else {
        uVar11 = uVar23;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar23,_Var10);
      }
      lVar1 = uVar23 + 1;
      if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10002eff0);
        (*pcVar8)();
      }
      pMVar12 = Swift::MainActor::typeMetadataAccessor();
      pMVar12 = Swift::MainActor::get_shared(pMVar12,pMVar12);
      puVar15 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar13 = Swift::Actor::get_unownedExecutor();
      UVar14 = UVar13;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar14.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/FilterSuggestionsList.swift",0x21,1,0x37,UVar13.unknown,puVar15);
      }
      objc_stub::removeFromSuperview(uVar11);
      _swift_release(pMVar12);
      uVar23 = uVar23 + 1;
    } while (lVar1 != lVar22);
  }
  _swift_bridgeObjectRelease(_Var10.unknown);
  lVar22 = _TtC5Paste21FilterSuggestionsList::___lazy_storage___stackView;
  puVar15 = *(undefined8 **)(unaff_x20 + lVar7);
  uVar23 = puVar15[2];
  _swift_bridgeObjectRetain();
  if (uVar23 != 0) {
    uVar11 = 0;
    puVar16 = puVar15;
    do {
      puVar24 = puVar16 + 7;
      if ((ulong)puVar15[2] <= uVar11) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10002f32c);
        (*pcVar8)();
      }
      uStack_b8 = puVar16[5];
      local_c0 = puVar16[4];
      uStack_a8 = *puVar24;
      uStack_b0 = puVar16[6];
      uStack_98 = puVar16[9];
      local_a0 = puVar16[8];
      uVar25 = puVar16[10];
      uStack_78 = puVar16[6];
      local_80 = puVar16[5];
      uStack_68 = puVar16[8];
      local_70 = *puVar24;
      uVar2 = uVar11 + 1;
      local_90 = uVar25;
      uStack_88 = local_c0;
      FUN_10000fee8(0);
      _objc_allocWithZone();
      FUN_100011090(&uStack_88,auStack_d0,&DAT_100fa6c48,&DAT_100c23750);
      FUN_10000ca28(&local_80,auStack_d0);
      FUN_100011090(&local_70,auStack_d0,&DAT_100fa8170,&DAT_100c24ca0);
      _swift_retain(uVar25);
      FUN_100011090(&uStack_88,auStack_d0,&DAT_100fa6c48,&DAT_100c23750);
      FUN_10000ca28(&local_80,auStack_d0);
      FUN_100011090(&local_70,auStack_d0,&DAT_100fa8170,&DAT_100c24ca0);
      _swift_retain(uVar25);
      puVar16 = &local_c0;
      FUN_10000ef70();
      puVar19 = &DAT_100eb1290;
      puVar17 = puVar19;
      _swift_allocObject(&DAT_100eb1290,0x18,7);
      _swift_unknownObjectWeakInit(puVar17 + 0x10,unaff_x20);
      puVar18 = &DAT_100eb12b8;
      _swift_allocObject(&DAT_100eb12b8,0x20,7);
      *(undefined **)(puVar18 + 0x10) = puVar17;
      *(ulong *)(puVar18 + 0x18) = uVar11;
      puVar4 = (undefined8 *)((long)puVar16 + _TtC5Paste19FilterSuggestionRow::onMouseEntered);
      uVar21 = *puVar4;
      uVar6 = puVar4[1];
      *puVar4 = FUN_10003054c;
      puVar4[1] = puVar18;
      _swift_retain(puVar17);
      FUN_100004550(uVar21,uVar6);
      _swift_release(puVar17);
      _swift_allocObject(&DAT_100eb1290,0x18,7);
      _swift_unknownObjectWeakInit(puVar19 + 0x10,unaff_x20);
      puVar4 = (undefined8 *)((long)puVar16 + _TtC5Paste19FilterSuggestionRow::onMouseExited);
      uVar21 = *puVar4;
      uVar6 = puVar4[1];
      *puVar4 = FUN_100030554;
      puVar4[1] = puVar19;
      _swift_retain(puVar19);
      FUN_100004550(uVar21,uVar6);
      _swift_release(puVar19);
      objc_stub::addArrangedSubview_(*(ID *)(unaff_x20 + lVar22),puVar16);
      IVar20 = objc_stub::widthAnchor((ID)puVar16);
      IVar9 = objc_stub::widthAnchor(*(ID *)(unaff_x20 + lVar22));
      IVar20 = objc_stub::constraintEqualToAnchor_(IVar20,IVar9);
      objc_stub::setActive_(IVar20,1);
      FUN_100005808(&uStack_88,&DAT_100fa6c48,&DAT_100c23750);
      FUN_10000caac(&local_80);
      FUN_100005808(&local_70,&DAT_100fa8170,&DAT_100c24ca0);
      _swift_release(uVar25);
      uVar11 = uVar2;
      puVar16 = puVar24;
    } while (uVar23 != uVar2);
  }
  _swift_bridgeObjectRelease(puVar15);
  return;
}



/* Address: 0x10002f32c | FUN_10002f32c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10002f32c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _TtC5Paste21FilterSuggestionsList::mouseSelectionCooldown) == 0) {
      puVar1 = (undefined8 *)(param_1 + _TtC5Paste21FilterSuggestionsList::selectedIndex);
      uVar3 = *puVar1;
      *puVar1 = param_2;
      uVar2 = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)(puVar1 + 1) = 0;
      FUN_10002e80c(uVar3,uVar2);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x10002f398 | FUN_10002f398 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10002f398(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _TtC5Paste21FilterSuggestionsList::mouseSelectionCooldown) == 0) {
      puVar1 = (undefined8 *)(param_1 + _TtC5Paste21FilterSuggestionsList::selectedIndex);
      uVar3 = *puVar1;
      *puVar1 = 0;
      uVar2 = *(undefined1 *)(puVar1 + 1);
      *(undefined1 *)(puVar1 + 1) = 1;
      FUN_10002e80c(uVar3,uVar2);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x10002f404 | _TtC5Paste21FilterSuggestionsList::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste21FilterSuggestionsList::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *this;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  String SVar6;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsList.swift",0x21,1,0x49,UVar4.unknown,puVar3);
  }
  puVar3 = (undefined8 *)(param_1 + onEscapePressed);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(param_1 + keyboardEventMonitor);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  *(undefined8 *)(param_1 + mouseSelectionCooldown) = 0;
  puVar3 = (undefined8 *)(param_1 + selectedIndex);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 1;
  *(undefined8 *)(param_1 + ___lazy_storage___stackView) = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e3b0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10002f530);
  (*pcVar2)();
}



/* Address: 0x10002f530 | FUN_10002f530 */

void FUN_10002f530(void)

{
  _swift_getObjectType();
  FUN_10002f574();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return;
}



/* Address: 0x10002f574 | FUN_10002f574 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10002f574(void)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  lVar1 = _TtC5Paste21FilterSuggestionsList::keyboardEventMonitor;
  _swift_beginAccess(unaff_x20 + _TtC5Paste21FilterSuggestionsList::keyboardEventMonitor,auStack_68,
                     0,0);
  FUN_100011090(unaff_x20 + lVar1,&local_90,&DAT_100fa8810,&DAT_100c23ce0);
  if (local_78 == 0) {
    FUN_100005808(&local_90,&DAT_100fa8810,&DAT_100c23ce0);
  }
  else {
    FUN_100011080(&local_90,auStack_50);
    puVar2 = auStack_50;
    FUN_100004640(puVar2,local_38);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar2);
    _swift_unknownObjectRelease(puVar2);
    FUN_100004594(auStack_50);
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    _swift_beginAccess(unaff_x20 + lVar1,auStack_a8,0x21,0);
    FUN_100030590(&local_90,unaff_x20 + lVar1);
    _swift_endAccess(auStack_a8);
  }
  return;
}



/* Address: 0x10002f67c | _TtC5Paste21FilterSuggestionsList::dealloc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste21FilterSuggestionsList::dealloc(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  FUN_10002f574();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x10002f6d4 | _TtC5Paste21FilterSuggestionsList::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste21FilterSuggestionsList::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onEscapePressed),
                ((undefined8 *)(param_1 + onEscapePressed))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + items));
  FUN_100005808(param_1 + keyboardEventMonitor,&DAT_100fa8810,&DAT_100c23ce0);
  _swift_release(*(undefined8 *)(param_1 + mouseSelectionCooldown));
  return;
}



/* Address: 0x10002f750 | FUN_10002f750 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10002f750(void)

{
  long lVar1;
  undefined *puVar2;
  void *aBlock;
  ID IVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined *local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  puVar2 = &DAT_100eb1290;
  _swift_allocObject(&DAT_100eb1290,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  local_40 = FUN_10003056c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  uStack_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100eb12d0;
  local_38 = puVar2;
  aBlock = __Block_copy(&local_60);
  _swift_release(local_38);
  IVar3 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                    ((ID)&_OBJC_CLASS___NSEvent,0x400,aBlock);
  __Block_release(aBlock);
  if (IVar3 == 0) {
    uStack_58 = 0;
    local_60 = (undefined *)0x0;
    puStack_48 = (undefined *)0x0;
    local_50 = (code *)0x0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
  }
  lVar1 = _TtC5Paste21FilterSuggestionsList::keyboardEventMonitor;
  _swift_beginAccess(unaff_x20 + _TtC5Paste21FilterSuggestionsList::keyboardEventMonitor,auStack_78,
                     0x21,0);
  FUN_100030590(&local_60,unaff_x20 + lVar1);
  _swift_endAccess(auStack_78);
  return;
}



/* Address: 0x10002f870 | FUN_10002f870 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10002f870(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  MainActor *pMVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsList.swift",0x21,1,0x58,UVar5.unknown,puVar4);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) goto LAB_10002f9c8;
  lVar8 = param_2;
  FUN_100219ddc();
  uVar1 = (uint)lVar8 & 0xff;
  if (uVar1 < 6) {
    if (uVar1 < 4) {
      if (1 < uVar1) {
        if (uVar1 != 3) goto LAB_10002f9c8;
        pcVar10 = *(code **)(param_2 + _TtC5Paste21FilterSuggestionsList::onEscapePressed);
        if (pcVar10 == (code *)0x0) {
          _swift_release(pMVar3);
          return 0;
        }
        uVar9 = ((undefined8 *)(param_2 + _TtC5Paste21FilterSuggestionsList::onEscapePressed))[1];
        _swift_retain(uVar9);
        (*pcVar10)();
        FUN_100004550(pcVar10,uVar9);
        pMVar7 = pMVar3;
        goto LAB_10002fa58;
      }
LAB_10002f9a8:
      if ((char)((long *)(param_2 + _TtC5Paste21FilterSuggestionsList::selectedIndex))[1] == '\x01')
      {
LAB_10002f9c8:
        _swift_release(pMVar3);
        return param_1;
      }
      lVar8 = *(long *)(param_2 + _TtC5Paste21FilterSuggestionsList::selectedIndex);
      if (lVar8 < *(long *)(*(long *)(param_2 + _TtC5Paste21FilterSuggestionsList::items) + 0x10)) {
        if (lVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10002fadc);
          (*pcVar10)();
        }
        lVar8 = *(long *)(param_2 + _TtC5Paste21FilterSuggestionsList::items) + lVar8 * 0x38;
        pcVar10 = *(code **)(lVar8 + 0x48);
        pMVar7 = *(MainActor **)(lVar8 + 0x50);
        _swift_retain(pMVar7);
        (*pcVar10)();
        _swift_release(pMVar3);
LAB_10002fa58:
        _swift_release(pMVar7);
        return 0;
      }
      goto LAB_10002fa98;
    }
    if (uVar1 == 4) {
      lVar8 = -*(long *)(*(long *)(param_2 + _TtC5Paste21FilterSuggestionsList::items) + 0x10);
    }
    else {
      if (uVar1 != 5) goto LAB_10002f9c8;
      lVar8 = -5;
    }
  }
  else if (uVar1 < 9) {
    if (uVar1 == 6) {
      lVar8 = *(long *)(*(long *)(param_2 + _TtC5Paste21FilterSuggestionsList::items) + 0x10);
    }
    else {
      if (uVar1 != 7) goto LAB_10002f9c8;
      lVar8 = 5;
    }
  }
  else {
    if (uVar1 == 9) goto LAB_10002f9a8;
    if (uVar1 == 10) {
      lVar8 = 1;
    }
    else {
      if (uVar1 != 0xb) goto LAB_10002f9c8;
      lVar8 = -1;
    }
  }
  FUN_10002fadc(lVar8);
LAB_10002fa98:
  _swift_release(pMVar3);
  return 0;
}



/* Address: 0x10002fadc | FUN_10002fadc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10002fadc(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  DispatchTime DVar4;
  DispatchWorkItemFlags DVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  OS_dispatch_queue *pOVar12;
  char cVar13;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar14;
  long extraout_x12;
  long lVar15;
  long unaff_x20;
  DispatchWorkItem *pDVar16;
  DispatchTime deadline;
  DispatchTime DVar17;
  code *pcVar18;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar4 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar15 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  DVar17.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  deadline.unknown = DVar17.unknown + -extraout_x12;
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar5.unknown + -8) + 0x40));
  lVar3 = _TtC5Paste21FilterSuggestionsList::mouseSelectionCooldown;
  lVar2 = _TtC5Paste21FilterSuggestionsList::items;
  if (*(long *)(*(long *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::items) + 0x10) != 0) {
    pDVar16 = *(DispatchWorkItem **)
               (unaff_x20 + _TtC5Paste21FilterSuggestionsList::mouseSelectionCooldown);
    local_a8 = lVar15;
    if (pDVar16 != (DispatchWorkItem *)0x0) {
      _swift_retain(pDVar16);
      Dispatch::DispatchWorkItem::cancel(pDVar16);
      _swift_release(pDVar16);
    }
    puVar1 = (ulong *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::selectedIndex);
    uVar6 = *puVar1;
    cVar13 = (char)puVar1[1];
    local_a0 = DVar4.unknown;
    if (cVar13 == '\x01') {
      if (param_1 < 1) {
        uVar14 = *(long *)(*(long *)(unaff_x20 + lVar2) + 0x10) - 1;
      }
      else {
        uVar14 = 0;
      }
      cVar13 = '\x01';
    }
    else {
      if (SCARRY8(uVar6,param_1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x10002fe20);
        (*pcVar18)();
      }
      uVar14 = *(long *)(*(long *)(unaff_x20 + lVar2) + 0x10) - 1;
      if ((long)(uVar6 + param_1) <= (long)uVar14) {
        uVar14 = uVar6 + param_1;
      }
      uVar14 = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
    }
    *puVar1 = uVar14;
    *(undefined1 *)(puVar1 + 1) = 0;
    FUN_10002e80c(uVar6,cVar13);
    FUN_100030134();
    puVar7 = &DAT_100eb1290;
    _swift_allocObject(&DAT_100eb1290,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    local_70 = FUN_1000305e0;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100eb12f8;
    local_68 = puVar7;
    __Block_copy(&local_90);
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = &DAT_100fa82c0;
    FUN_100003a00(&DAT_100fa82c0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    _swift_retain(puVar7);
    puVar9 = &DAT_100fa7850;
    FUN_1000037f0(&DAT_100fa7850,&DAT_100c24cf0);
    puVar10 = puVar9;
    FUN_1000305e8();
    Swift::SetAlgebra::_init
              (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_98,puVar9,
               puVar10,DVar5.unknown,puVar8);
    pDVar16 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
    _swift_allocObject(pDVar16,*(undefined4 *)(pDVar16 + 0x30),*(undefined2 *)(pDVar16 + 0x34));
    pDVar16 = Dispatch::DispatchWorkItem::_init
                        (pDVar16,(DispatchWorkItemFlags)
                                 (deadline.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)))
    ;
    puVar9 = local_68;
    _swift_release(puVar7);
    _swift_release(puVar9);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar3);
    *(DispatchWorkItem **)(unaff_x20 + lVar3) = pDVar16;
    _swift_release(uVar11);
    pOVar12 = (OS_dispatch_queue *)0x0;
    FUN_10000ec2c(0,&DAT_100fa7528,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
    DVar4.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar12);
    Dispatch::DispatchTime::now(DVar4);
    Dispatch::__infix(DVar17,0.1);
    puVar7 = local_a0;
    pcVar18 = *(code **)(local_a8 + 8);
    (*pcVar18)(DVar17.unknown,local_a0);
    pDVar16 = *(DispatchWorkItem **)(unaff_x20 + lVar3);
    if (pDVar16 == (DispatchWorkItem *)0x0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10002fe24);
      (*pcVar18)();
    }
    _swift_retain(pDVar16);
    (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter(deadline,pDVar16);
    _swift_release(pDVar16);
    (*pcVar18)(deadline.unknown,puVar7);
  }
  return;
}



/* Address: 0x10002fe24 | FUN_10002fe24 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10002fe24(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar3;
  double dVar4;
  double dVar5;
  
  self = objc_stub::enclosingScrollView(unaff_x20);
  if (self != 0) {
    IVar2 = objc_stub::documentView(self);
    if (IVar2 != 0) {
      objc_stub::documentVisibleRect(self);
      dVar4 = param_2;
      objc_stub::bounds(IVar2);
      dVar5 = extraout_d0;
      _CGRectGetHeight();
      IVar2 = objc_stub::documentVisibleRect(self);
      dVar3 = extraout_d0_00;
      _CGRectGetHeight();
      dVar5 = dVar5 - dVar3;
      FUN_10002eae8();
      if (IVar2 == 0) {
        dVar3 = param_2 + 0.0;
        bVar1 = false;
        if (!NAN(param_2) && !NAN(dVar5)) {
          bVar1 = param_2 < dVar5;
        }
      }
      else {
        objc_stub::bounds(IVar2);
        dVar3 = extraout_d0_01;
        _CGRectGetHeight(extraout_d0_01,dVar4,param_3,param_4,0);
        dVar3 = param_2 + dVar3;
        bVar1 = dVar3 < dVar5;
      }
      if (!bVar1) {
        dVar3 = dVar5;
      }
      IVar2 = objc_stub::documentView(self);
      if (IVar2 != 0) {
        objc_stub::scrollPoint_(IVar2,0,dVar3);
      }
      IVar2 = objc_stub::contentView(self);
      objc_stub::reflectScrolledClipView_(self,IVar2);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x10002ff8c | _TtC5Paste21FilterSuggestionsList::acceptsFirstResponder */

/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste21FilterSuggestionsList::acceptsFirstResponder(ID param_1,SEL param_2)

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
              ("Paste/FilterSuggestionsList.swift",0x21,1,0x86,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x10003002c | _TtC5Paste21FilterSuggestionsList::viewDidMoveToWindow */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste21FilterSuggestionsList::viewDidMoveToWindow(ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsList.swift",0x21,1,0x8a,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  _objc_msgSendSuper2(&local_50,"viewDidMoveToWindow");
  FUN_10002f574();
  IVar7 = objc_stub::window(param_1);
  if (IVar7 != 0) {
    FUN_10002f750(0);
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100030134 | FUN_100030134 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_100030134(undefined8 param_1,double param_2,undefined8 param_3,double param_4,undefined *param_5
             )

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  ID self;
  ID self_00;
  long unaff_x20;
  __int64 _Var4;
  undefined8 extraout_d0;
  double extraout_d0_00;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  
  if ((char)((ulong *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::selectedIndex))[1] != '\x01')
  {
    self_00 = *(ulong *)(unaff_x20 + _TtC5Paste21FilterSuggestionsList::selectedIndex);
    FUN_10002ea54();
    param_5 = (undefined *)objc_stub::arrangedSubviews((ID)param_5);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)param_5 >> 0x3e == 0) {
      _Var4 = *(long *)(((ulong)param_5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)param_5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < param_5) {
        _Var1.unknown = param_5;
      }
      _Var4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    _swift_bridgeObjectRelease(param_5);
    if ((long)self_00 < _Var4) {
      _Var3.unknown =
           (undefined *)
           objc_stub::arrangedSubviews
                     (*(ID *)(unaff_x20 +
                             _TtC5Paste21FilterSuggestionsList::___lazy_storage___stackView));
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        if ((long)self_00 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10003033c);
          (*pcVar2)();
        }
        if (*(ulong *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) <= self_00) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100030340);
          (*pcVar2)();
        }
        self_00 = *(ID *)(_Var3.unknown + self_00 * 8 + 0x20);
      }
      else {
        Swift::_ArrayBuffer::__getElementSlowPath(self_00,_Var3);
      }
      _swift_bridgeObjectRelease(_Var3.unknown);
      self = objc_stub::bounds(self_00);
      dVar6 = param_2;
      uVar7 = param_3;
      dVar8 = param_4;
      FUN_10002eae8();
      if (self == 0) {
        dVar5 = 0.0;
      }
      else {
        objc_stub::bounds(self);
        dVar5 = extraout_d0_00;
        _CGRectGetHeight(extraout_d0_00,dVar6,uVar7,dVar8,0);
      }
      objc_stub::scrollRectToVisible_
                (self_00,extraout_d0,param_2 - dVar5,param_3,param_4 + dVar5 + dVar5);
      return (undefined *)0x0;
    }
  }
  return param_5;
}



/* Address: 0x100030340 | FUN_100030340 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100030340(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  MainActor *pMVar6;
  
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
              ("Paste/FilterSuggestionsList.swift",0x21,1,0xa1,UVar4.unknown,puVar3);
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  pMVar6 = pMVar2;
  if (param_1 != 0) {
    pMVar6 = *(MainActor **)(param_1 + _TtC5Paste21FilterSuggestionsList::mouseSelectionCooldown);
    *(undefined8 *)(param_1 + _TtC5Paste21FilterSuggestionsList::mouseSelectionCooldown) = 0;
    _swift_release(pMVar2);
  }
  _swift_release(pMVar6);
  return;
}



/* Address: 0x100030410 | FUN_100030410 */

void FUN_100030410(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
  return;
}



/* Address: 0x10003043c | _TtC5Paste21FilterSuggestionsList::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste21FilterSuggestionsList::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *this;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterSuggestionsList.swift",0x21,1,4,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.FilterSuggestionsList",0x1b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000304e4);
  (*pcVar2)();
}



/* Address: 0x1000304e4 | FUN_1000304e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000304e4(void)

{
  return ZEXT816(0x100f90010);
}



/* Address: 0x100030504 | FUN_100030504 */

void FUN_100030504(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100030528 | FUN_100030528 */

void FUN_100030528(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10003054c | FUN_10003054c */

void FUN_10003054c(void)

{
  long unaff_x20;
  
  FUN_10002f32c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100030554 | FUN_100030554 */

void FUN_100030554(void)

{
  FUN_10002f398();
  return;
}



/* Address: 0x10003055c | thunk_FUN_100010560 */

void thunk_FUN_100010560(void)

{
  FUN_100010560();
  return;
}



/* Address: 0x100030560 | thunk_FUN_1000105cc */

void thunk_FUN_1000105cc(void)

{
  FUN_1000105cc();
  return;
}



/* Address: 0x100030564 | FUN_100030564 */

void FUN_100030564(void)

{
  long unaff_x20;
  
  FUN_10002ed00(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10003056c | FUN_10003056c */

void FUN_10003056c(void)

{
  FUN_10002f870();
  return;
}



/* Address: 0x100030574 | FUN_100030574 */

void FUN_100030574(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100030588 | FUN_100030588 */

void FUN_100030588(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100030590 | FUN_100030590 */

undefined8 FUN_100030590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa8810;
  FUN_1000037f0(&DAT_100fa8810,&DAT_100c23ce0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000305e0 | FUN_1000305e0 */

void FUN_1000305e0(void)

{
  FUN_100030340();
  return;
}



/* Address: 0x1000305e8 | FUN_1000305e8 */

void FUN_1000305e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fa82d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7850;
  FUN_100005c24(&DAT_100fa7850,&DAT_100c24cf0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fa82d0 = puVar2;
  return;
}



/* Address: 0x100030638 | thunk_FUN_100030574 */

void thunk_FUN_100030574(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10003063c | thunk_FUN_100030588 */

void thunk_FUN_100030588(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}


