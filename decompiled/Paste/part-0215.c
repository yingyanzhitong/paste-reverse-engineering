/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002832b8 | thunk_FUN_100282d8c */

void thunk_FUN_100282d8c(void)

{
  thunk_FUN_100282d8c();
  return;
}



/* Address: 0x1002832bc | thunk_FUN_100282db8 */

void thunk_FUN_100282db8(void)

{
  thunk_FUN_100282db8();
  return;
}



/* Address: 0x1002832c0 | thunk_FUN_100282df8 */

void thunk_FUN_100282df8(void)

{
  thunk_FUN_100282df8();
  return;
}



/* Address: 0x1002832c4 | thunk_FUN_100282e68 */

void thunk_FUN_100282e68(void)

{
  thunk_FUN_100282e68();
  return;
}



/* Address: 0x1002832c8 | thunk_FUN_1000149d0 */

void thunk_FUN_1000149d0(void)

{
  thunk_FUN_1000149d0();
  return;
}



/* Address: 0x1002832cc | thunk_FUN_100282ba8 */

void thunk_FUN_100282ba8(void)

{
  FUN_100282ba8();
  return;
}



/* Address: 0x1002832d0 | FUN_1002832d0 */

undefined1  [16] FUN_1002832d0(void)

{
  return ZEXT816(0x100ec5888);
}



/* Address: 0x1002832e0 | FUN_1002832e0 */

void FUN_1002832e0(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa504,1);
  return;
}



/* Address: 0x1002832f0 | FUN_1002832f0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100283580 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002832f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  RoundedCornerStyle RVar5;
  RoundedRectangle RVar6;
  RoundedRectangle RVar7;
  HorizontalAlignment HVar8;
  Set SVar9;
  CGFloat _all;
  undefined *puVar11;
  Alignment AVar12;
  Alignment AVar13;
  undefined *puVar14;
  void *extraout_x8;
  long extraout_x8_00;
  code *pcVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  void *local_26c0 [5];
  undefined4 local_2694;
  undefined1 auStack_2690 [1248];
  undefined1 auStack_21b0 [1200];
  undefined8 local_1d00;
  undefined8 uStack_1cf8;
  undefined8 local_1cf0;
  undefined8 uStack_1ce8;
  undefined8 local_1ce0;
  undefined1 auStack_1cd8 [1176];
  undefined1 auStack_1840 [1176];
  undefined *local_13a8;
  undefined8 local_13a0;
  undefined1 local_1398;
  undefined1 auStack_1397 [1183];
  undefined *local_ef8;
  undefined8 local_ef0;
  undefined1 local_ee8;
  undefined1 auStack_ee7 [1183];
  undefined1 auStack_a48 [1200];
  undefined1 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined1 local_570;
  undefined1 auStack_568 [1200];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  long lVar10;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  RVar6 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  RVar7 = RVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(RVar6.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)local_26c0 + lVar1);
  HVar8 = SwiftUI::HorizontalAlignment::get_center(RVar7.unknown);
  FUN_1002837e4(auStack_568);
  _memcpy(auStack_1cd8,auStack_568,0x491);
  _memcpy(auStack_1840,auStack_568,0x491);
  FUN_100011090(auStack_1cd8,auStack_a48,&DAT_100fba0c8,&DAT_100c3a7e0);
  FUN_100005808(auStack_1840,&DAT_100fba0c8,&DAT_100c3a7e0);
  SVar9.unknown = _memcpy((void *)((ulong)auStack_a48 | 7),auStack_1cd8,0x491);
  SVar9 = SwiftUI::Edge::Set::get_vertical(SVar9);
  if (DAT_100fba0d0 != -1) {
    _swift_once(&DAT_100fba0d0,FUN_100284e24);
  }
  uVar17 = DAT_100fba0d8;
  local_13a0 = 0;
  local_1398 = 0;
  local_13a8 = HVar8.unknown;
  _all.unknown = _memcpy(auStack_1397,auStack_a48,0x498);
  SwiftUI::EdgeInsets::init(_all);
  _memcpy(auStack_21b0,&local_13a8,0x4a9);
  local_ef0 = 0;
  local_ee8 = 0;
  local_ef8 = HVar8.unknown;
  _memcpy(auStack_ee7,auStack_a48,0x498);
  FUN_100011090(&local_13a8,auStack_568,&DAT_100fba0e0,&DAT_100c3a7e8);
  FUN_100005808(&local_ef8,&DAT_100fba0e0,&DAT_100c3a7e8);
  _memcpy(auStack_a48,auStack_21b0,0x4b0);
  local_598 = SUB81(SVar9.unknown,0);
  local_570 = 0;
  iVar4 = *(int *)(RVar6.unknown + 0x14);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  local_590 = uVar17;
  local_588 = param_2;
  local_580 = param_3;
  local_578 = param_4;
  RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar10 = CONCAT71((int7)((ulong)_all.unknown >> 8),RVar5.value);
  pcVar15 = *(code **)(*(long *)(lVar10 + -8) + 0x68);
  local_2694 = (int)SVar9.unknown;
  (*pcVar15)((long)puVar16 + (long)iVar4,uVar3,lVar10);
  auVar18 = NEON_fmov(0x4024000000000000,8);
  local_26c0[3] = auVar18._8_8_;
  local_26c0[2] = (void *)auVar18._0_8_;
  *(void **)((long)local_26c0 + lVar1 + 8) = local_26c0[3];
  *puVar16 = auVar18._0_8_;
  local_26c0[1] = (void *)RVar6;
  if (DAT_100fb8710 != -1) {
    _swift_once(&DAT_100fb8710,FUN_100253964);
  }
  AVar13.unknown = DAT_100fb8708;
  SwiftUI::StrokeStyle::init
            (&local_1d00,0x3ff0000000000000,0x4024000000000000,0,lVar10,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar11 = &DAT_100fba0e8;
  FUN_1000037f0(&DAT_100fba0e8,&DAT_100c3a7f0);
  lVar1 = (long)extraout_x8 + (long)*(int *)(puVar11 + 0x24);
  FUN_1001ef234(puVar16,lVar1);
  puVar11 = &DAT_100fb92b0;
  FUN_1000037f0(&DAT_100fb92b0,&DAT_100c3a630);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(puVar11 + 0x24));
  puVar2[1] = uStack_1cf8;
  *puVar2 = local_1d00;
  puVar2[3] = uStack_1ce8;
  puVar2[2] = local_1cf0;
  puVar2[4] = local_1ce0;
  puVar11 = &DAT_100fb92b8;
  puVar14 = &DAT_100c39040;
  FUN_1000037f0();
  *(undefined **)(lVar1 + *(int *)(puVar11 + 0x34)) = AVar13.unknown;
  *(undefined2 *)(lVar1 + *(int *)(puVar11 + 0x38)) = 0x100;
  AVar12.unknown = AVar13.unknown;
  local_26c0[0] = extraout_x8;
  _swift_retain();
  AVar12 = SwiftUI::Alignment::get_center(AVar12);
  FUN_1001ef278(puVar16);
  puVar11 = &DAT_100fb92c0;
  FUN_1000037f0(&DAT_100fb92c0,&DAT_100c3a640);
  iVar4 = *(int *)(puVar11 + 0x24);
  *(undefined8 *)(lVar1 + iVar4) = AVar12.unknown;
  ((undefined8 *)(lVar1 + iVar4))[1] = puVar14;
  puVar11 = &DAT_100fb9fe0;
  FUN_1000037f0(&DAT_100fb9fe0,&DAT_100c3a800);
  puVar16 = (undefined8 *)(lVar1 + *(int *)(puVar11 + 0x24));
  (*pcVar15)((long)puVar16 + (long)*(int *)((long)local_26c0[1] + 0x14),uVar3,lVar10);
  puVar16[1] = local_26c0[3];
  *puVar16 = local_26c0[2];
  puVar11 = &DAT_100fb92a8;
  puVar14 = &DAT_100c39030;
  FUN_1000037f0();
  *(undefined **)((long)puVar16 + (long)*(int *)(puVar11 + 0x34)) = AVar13.unknown;
  *(undefined2 *)((long)puVar16 + (long)*(int *)(puVar11 + 0x38)) = 0x100;
  _swift_retain();
  AVar12 = SwiftUI::Alignment::get_center(AVar13);
  AVar13.unknown = &DAT_100fb92e0;
  puVar11 = &DAT_100c3a810;
  FUN_1000037f0();
  iVar4 = *(int *)(AVar13.unknown + 0x24);
  *(undefined8 *)((long)puVar16 + (long)iVar4) = AVar12.unknown;
  ((undefined8 *)((long)puVar16 + (long)iVar4))[1] = puVar14;
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  puVar14 = &DAT_100fb9fe8;
  FUN_1000037f0(&DAT_100fb9fe8,&DAT_100c3a650);
  iVar4 = *(int *)(puVar14 + 0x24);
  *(undefined8 *)(lVar1 + iVar4) = AVar13.unknown;
  ((undefined8 *)(lVar1 + iVar4))[1] = puVar11;
  _memcpy(local_26c0[0],auStack_a48,0x4d9);
  _memcpy(auStack_568,auStack_21b0,0x4b0);
  local_b8 = (undefined1)local_2694;
  local_90 = 0;
  local_b0 = uVar17;
  local_a8 = param_2;
  local_a0 = param_3;
  local_98 = param_4;
  FUN_100011090(auStack_a48,auStack_2690,&DAT_100fba0f0,&DAT_100c3a820);
  FUN_100005808(auStack_568,&DAT_100fba0f0,&DAT_100c3a820);
  return;
}



/* Address: 0x1002837e4 | FUN_1002837e4 */

void FUN_1002837e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  VerticalAlignment VVar5;
  Set SVar6;
  Set SVar7;
  CGFloat CVar8;
  void *extraout_x8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_2e88 [392];
  undefined1 auStack_2d00 [392];
  undefined1 auStack_2b78 [392];
  undefined1 auStack_29f0 [392];
  undefined1 auStack_2868 [392];
  undefined1 auStack_26e0 [392];
  undefined1 auStack_2558 [272];
  undefined1 auStack_2448 [272];
  undefined *local_2338;
  undefined8 local_2330;
  undefined1 local_2328;
  undefined1 auStack_2327 [279];
  undefined *local_2210;
  undefined8 local_2208;
  undefined1 local_2200;
  undefined1 auStack_21ff [279];
  undefined1 auStack_20e8 [296];
  undefined1 local_1fc0;
  undefined8 local_1fb8;
  undefined8 local_1fb0;
  undefined8 local_1fa8;
  undefined8 local_1fa0;
  undefined1 local_1f98;
  undefined1 auStack_1f90 [296];
  undefined1 local_1e68;
  undefined8 local_1e60;
  undefined8 local_1e58;
  undefined8 local_1e50;
  undefined8 local_1e48;
  undefined1 local_1e40;
  undefined1 auStack_1e38 [344];
  undefined1 local_1ce0;
  undefined8 local_1cd8;
  undefined8 local_1cd0;
  undefined8 local_1cc8;
  undefined8 local_1cc0;
  undefined1 local_1cb8;
  undefined1 auStack_1cb0 [344];
  undefined1 local_1b58;
  undefined8 local_1b50;
  undefined8 local_1b48;
  undefined8 local_1b40;
  undefined8 local_1b38;
  undefined1 local_1b30;
  undefined1 auStack_1b28 [272];
  undefined1 auStack_1a18 [272];
  undefined *local_1908;
  undefined8 local_1900;
  undefined1 local_18f8;
  undefined1 auStack_18f7 [279];
  undefined *local_17e0;
  undefined8 local_17d8;
  undefined1 local_17d0;
  undefined1 auStack_17cf [279];
  undefined1 auStack_16b8 [296];
  undefined1 local_1590;
  undefined8 local_1588;
  undefined8 local_1580;
  undefined8 local_1578;
  undefined8 local_1570;
  undefined1 local_1568;
  undefined1 auStack_1560 [296];
  undefined1 local_1438;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined8 local_1420;
  undefined8 local_1418;
  undefined1 local_1410;
  undefined1 auStack_1408 [344];
  undefined1 local_12b0;
  undefined8 local_12a8;
  undefined8 local_12a0;
  undefined8 local_1298;
  undefined8 local_1290;
  undefined1 local_1288;
  undefined1 auStack_1280 [344];
  undefined1 local_1128;
  undefined8 local_1120;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined8 local_1108;
  undefined1 local_1100;
  undefined1 auStack_10f8 [272];
  undefined1 auStack_fe8 [272];
  undefined *local_ed8;
  undefined8 local_ed0;
  undefined1 local_ec8;
  undefined1 auStack_ec7 [279];
  undefined *local_db0;
  undefined8 local_da8;
  undefined1 local_da0;
  undefined1 auStack_d9f [279];
  undefined1 auStack_c88 [296];
  undefined1 local_b60;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined1 local_b38;
  undefined1 auStack_b30 [296];
  undefined1 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined1 local_9e0;
  undefined1 auStack_9d8 [344];
  undefined1 local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined1 local_858;
  undefined1 auStack_850 [344];
  undefined1 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined1 local_6d0;
  undefined1 auStack_6c8 [392];
  undefined1 auStack_540 [392];
  undefined1 auStack_3b8 [392];
  undefined1 auStack_230 [400];
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100270a58();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteLicensingAppStore/Testimonials.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Testimonials.swift",0x29,1,9,UVar3.unknown,pMVar1);
  }
  VVar5 = SwiftUI::VerticalAlignment::get_top((VerticalAlignment)pcVar4);
  FUN_1002843d0(auStack_230,0x6f676f6c2d776e74,&DAT_e800000000000000,0xd00000000000005b,
                0x8000000100d9f850,0x7478654e20656854,0xec00000062655720);
  _memcpy(auStack_2558,auStack_230,0x109);
  _memcpy(auStack_2448,auStack_230,0x109);
  FUN_100011090(auStack_2558,auStack_3b8,&DAT_100fba0f8,&DAT_100c3a828);
  FUN_100005808(auStack_2448,&DAT_100fba0f8,&DAT_100c3a828);
  SVar6.unknown = _memcpy((void *)((ulong)auStack_3b8 | 7),auStack_2558,0x109);
  SVar7 = SwiftUI::Edge::Set::get_horizontal(SVar6);
  local_2330 = 0;
  local_2328 = 0;
  local_2338 = VVar5.unknown;
  CVar8.unknown = _memcpy(auStack_2327,auStack_3b8,0x110);
  uVar9 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(CVar8);
  uVar12 = param_2;
  uVar15 = param_3;
  uVar16 = param_4;
  _memcpy(auStack_540,&local_2338,0x121);
  local_2208 = 0;
  local_2200 = 0;
  local_2210 = VVar5.unknown;
  _memcpy(auStack_21ff,auStack_3b8,0x110);
  FUN_100011090(&local_2338,auStack_230,&DAT_100fba100,&DAT_100c3a830);
  SVar6.unknown = (undefined *)&local_2210;
  FUN_100005808(SVar6.unknown,&DAT_100fba100,&DAT_100c3a830);
  SVar6 = SwiftUI::Edge::Set::get_vertical(SVar6);
  if (DAT_100fba0d0 != -1) {
    _swift_once(&DAT_100fba0d0,FUN_100284e24);
  }
  uVar14 = DAT_100fba0d8;
  CVar8.unknown = _memcpy(auStack_20e8,auStack_540,0x128);
  local_1f98 = 0;
  uVar10 = uVar14;
  local_1fc0 = (char)SVar7.unknown;
  local_1fb8 = uVar9;
  local_1fb0 = param_2;
  local_1fa8 = param_3;
  local_1fa0 = param_4;
  SwiftUI::EdgeInsets::init(CVar8);
  uVar13 = uVar12;
  uVar17 = uVar15;
  uVar18 = uVar16;
  _memcpy(auStack_3b8,auStack_20e8,0x151);
  _memcpy(auStack_1f90,auStack_540,0x128);
  local_1e40 = 0;
  local_1e68 = (char)SVar7.unknown;
  local_1e60 = uVar9;
  local_1e58 = param_2;
  local_1e50 = param_3;
  local_1e48 = param_4;
  FUN_100011090(auStack_20e8,auStack_230,&DAT_100fba108,&DAT_100c3a838);
  FUN_100005808(auStack_1f90,&DAT_100fba108,&DAT_100c3a838);
  _memcpy(auStack_1e38,auStack_3b8,0x158);
  local_1cb8 = 0;
  local_1ce0 = (char)SVar6.unknown;
  local_1cd8 = uVar10;
  local_1cd0 = uVar12;
  local_1cc8 = uVar15;
  local_1cc0 = uVar16;
  _memcpy(auStack_1cb0,auStack_3b8,0x158);
  local_1b30 = 0;
  local_1b58 = (char)SVar6.unknown;
  local_1b50 = uVar10;
  local_1b48 = uVar12;
  local_1b40 = uVar15;
  local_1b38 = uVar16;
  FUN_100011090(auStack_1e38,auStack_230,&DAT_100fba110,&DAT_100c3a840);
  VVar5.unknown = auStack_1cb0;
  FUN_100005808(VVar5.unknown,&DAT_100fba110,&DAT_100c3a840);
  VVar5 = SwiftUI::VerticalAlignment::get_top(VVar5);
  FUN_1002843d0(auStack_230,0x6f676f6c2d6961,&DAT_e700000000000000,0xd000000000000091,
                0x8000000100d9f8b0,0x736e69656c707041,0xec00000072656469);
  _memcpy(auStack_1b28,auStack_230,0x109);
  _memcpy(auStack_1a18,auStack_230,0x109);
  FUN_100011090(auStack_1b28,auStack_3b8,&DAT_100fba0f8,&DAT_100c3a828);
  FUN_100005808(auStack_1a18,&DAT_100fba0f8,&DAT_100c3a828);
  SVar6.unknown = _memcpy((void *)((ulong)auStack_3b8 | 7),auStack_1b28,0x109);
  SVar7 = SwiftUI::Edge::Set::get_horizontal(SVar6);
  local_1900 = 0;
  local_18f8 = 0;
  local_1908 = VVar5.unknown;
  CVar8.unknown = _memcpy(auStack_18f7,auStack_3b8,0x110);
  uVar11 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(CVar8);
  uVar15 = uVar13;
  uVar9 = uVar17;
  uVar19 = uVar18;
  _memcpy(auStack_540,&local_1908,0x121);
  local_17d8 = 0;
  local_17d0 = 0;
  local_17e0 = VVar5.unknown;
  _memcpy(auStack_17cf,auStack_3b8,0x110);
  FUN_100011090(&local_1908,auStack_230,&DAT_100fba100,&DAT_100c3a830);
  SVar6.unknown = (undefined *)&local_17e0;
  FUN_100005808(SVar6.unknown,&DAT_100fba100,&DAT_100c3a830);
  SVar6 = SwiftUI::Edge::Set::get_vertical(SVar6);
  CVar8.unknown = _memcpy(auStack_16b8,auStack_540,0x128);
  local_1568 = 0;
  uVar12 = uVar14;
  local_1590 = (char)SVar7.unknown;
  local_1588 = uVar11;
  local_1580 = uVar13;
  local_1578 = uVar17;
  local_1570 = uVar18;
  SwiftUI::EdgeInsets::init(CVar8);
  uVar16 = uVar15;
  uVar10 = uVar9;
  uVar20 = uVar19;
  _memcpy(auStack_3b8,auStack_16b8,0x151);
  _memcpy(auStack_1560,auStack_540,0x128);
  local_1410 = 0;
  local_1438 = (char)SVar7.unknown;
  local_1430 = uVar11;
  local_1428 = uVar13;
  local_1420 = uVar17;
  local_1418 = uVar18;
  FUN_100011090(auStack_16b8,auStack_230,&DAT_100fba108,&DAT_100c3a838);
  FUN_100005808(auStack_1560,&DAT_100fba108,&DAT_100c3a838);
  _memcpy(auStack_1408,auStack_3b8,0x158);
  local_1288 = 0;
  local_12b0 = (char)SVar6.unknown;
  local_12a8 = uVar12;
  local_12a0 = uVar15;
  local_1298 = uVar9;
  local_1290 = uVar19;
  _memcpy(auStack_1280,auStack_3b8,0x158);
  local_1100 = 0;
  local_1128 = (char)SVar6.unknown;
  local_1120 = uVar12;
  local_1118 = uVar15;
  local_1110 = uVar9;
  local_1108 = uVar19;
  FUN_100011090(auStack_1408,auStack_230,&DAT_100fba110,&DAT_100c3a840);
  VVar5.unknown = auStack_1280;
  FUN_100005808(VVar5.unknown,&DAT_100fba110,&DAT_100c3a840);
  VVar5 = SwiftUI::VerticalAlignment::get_top(VVar5);
  FUN_1002843d0(auStack_230,0x6f676f6c2d6f756d,&DAT_e800000000000000,0xd00000000000005b,
                0x8000000100d9f950,0x65735520656b614d,0xeb00000000664f20);
  _memcpy(auStack_10f8,auStack_230,0x109);
  _memcpy(auStack_fe8,auStack_230,0x109);
  FUN_100011090(auStack_10f8,auStack_3b8,&DAT_100fba0f8,&DAT_100c3a828);
  FUN_100005808(auStack_fe8,&DAT_100fba0f8,&DAT_100c3a828);
  SVar6.unknown = _memcpy((void *)((ulong)auStack_3b8 | 7),auStack_10f8,0x109);
  SVar7 = SwiftUI::Edge::Set::get_horizontal(SVar6);
  local_ed0 = 0;
  local_ec8 = 0;
  local_ed8 = VVar5.unknown;
  CVar8.unknown = _memcpy(auStack_ec7,auStack_3b8,0x110);
  uVar13 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(CVar8);
  uVar12 = uVar16;
  uVar15 = uVar10;
  uVar9 = uVar20;
  _memcpy(auStack_540,&local_ed8,0x121);
  local_da8 = 0;
  local_da0 = 0;
  local_db0 = VVar5.unknown;
  _memcpy(auStack_d9f,auStack_3b8,0x110);
  FUN_100011090(&local_ed8,auStack_230,&DAT_100fba100,&DAT_100c3a830);
  SVar6.unknown = (undefined *)&local_db0;
  FUN_100005808(SVar6.unknown,&DAT_100fba100,&DAT_100c3a830);
  SVar6 = SwiftUI::Edge::Set::get_vertical(SVar6);
  CVar8.unknown = _memcpy(auStack_c88,auStack_540,0x128);
  local_b38 = 0;
  local_b60 = (char)SVar7.unknown;
  local_b58 = uVar13;
  local_b50 = uVar16;
  local_b48 = uVar10;
  local_b40 = uVar20;
  SwiftUI::EdgeInsets::init(CVar8);
  _memcpy(auStack_3b8,auStack_c88,0x151);
  _memcpy(auStack_b30,auStack_540,0x128);
  local_9e0 = 0;
  local_a08 = (char)SVar7.unknown;
  local_a00 = uVar13;
  local_9f8 = uVar16;
  local_9f0 = uVar10;
  local_9e8 = uVar20;
  FUN_100011090(auStack_c88,auStack_230,&DAT_100fba108,&DAT_100c3a838);
  FUN_100005808(auStack_b30,&DAT_100fba108,&DAT_100c3a838);
  _memcpy(auStack_9d8,auStack_3b8,0x158);
  local_858 = 0;
  local_880 = (char)SVar6.unknown;
  local_878 = uVar14;
  local_870 = uVar12;
  local_868 = uVar15;
  local_860 = uVar9;
  _memcpy(auStack_850,auStack_3b8,0x158);
  local_6d0 = 0;
  local_6f8 = (char)SVar6.unknown;
  local_6f0 = uVar14;
  local_6e8 = uVar12;
  local_6e0 = uVar15;
  local_6d8 = uVar9;
  FUN_100011090(auStack_9d8,auStack_230,&DAT_100fba110,&DAT_100c3a840);
  FUN_100005808(auStack_850,&DAT_100fba110,&DAT_100c3a840);
  _memcpy(auStack_26e0,auStack_1e38,0x181);
  _memcpy(auStack_2868,auStack_1408,0x181);
  _memcpy(auStack_230,auStack_9d8,0x181);
  _memcpy(auStack_6c8,auStack_1e38,0x181);
  _memcpy(auStack_2d00,auStack_1e38,0x181);
  _memcpy(auStack_540,auStack_1408,0x181);
  _memcpy(auStack_2b78,auStack_1408,0x181);
  _memcpy(auStack_3b8,auStack_9d8,0x181);
  _memcpy(auStack_29f0,auStack_9d8,0x181);
  _memcpy(extraout_x8,auStack_2d00,0x491);
  FUN_100011090(auStack_6c8,auStack_2e88,&DAT_100fba110,&DAT_100c3a840);
  FUN_100011090(auStack_540,auStack_2e88,&DAT_100fba110,&DAT_100c3a840);
  FUN_100011090(auStack_3b8,auStack_2e88,&DAT_100fba110,&DAT_100c3a840);
  FUN_100005808(auStack_230,&DAT_100fba110,&DAT_100c3a840);
  FUN_100005808(auStack_2868,&DAT_100fba110,&DAT_100c3a840);
  FUN_100005808(auStack_26e0,&DAT_100fba110,&DAT_100c3a840);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100284348 | FUN_100284348 */

void FUN_100284348(String *param_1)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  long extraout_x8;
  String SVar3;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  FUN_1001cbc54(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar3 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  *param_1 = SVar3;
  puVar2 = &DAT_100fba0c0;
  FUN_1000037f0(&DAT_100fba0c0,&DAT_100c3a7d8);
  FUN_1002832f0((long)&param_1->str + (long)*(int *)(puVar2 + 0x24));
  return;
}



/* Address: 0x1002843d0 | FUN_1002843d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002843d0(undefined8 *param_1,char *param_2,void *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  ResizingMode RVar3;
  undefined7 extraout_var;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  Image IVar9;
  LocalizedStringKey LVar10;
  Text TVar11;
  Text TVar12;
  HorizontalAlignment HVar13;
  Text TVar15;
  uint uVar16;
  Image IVar17;
  ulong uVar18;
  undefined8 uVar19;
  Alignment AVar20;
  ulong uVar21;
  long extraout_x8;
  long lVar22;
  String SVar23;
  String stringLiteral;
  undefined8 uStack_580;
  undefined2 auStack_578 [4];
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  uint local_53c;
  undefined8 local_538;
  uint local_52c;
  undefined8 local_528;
  undefined *local_520;
  MainActor *local_518;
  undefined1 auStack_510 [112];
  undefined *local_4a0;
  undefined *puStack_498;
  undefined8 uStack_490;
  ulong uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined *local_440;
  undefined *puStack_438;
  undefined1 local_430;
  undefined7 uStack_42f;
  ulong uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined *local_3e8;
  undefined *puStack_3e0;
  undefined1 local_3d8;
  ulong local_3d0;
  undefined8 local_3c8;
  undefined *local_390;
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
  undefined *local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined *local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 local_2af;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 local_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 local_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 local_270;
  undefined7 uStack_26f;
  undefined8 uStack_268;
  undefined *local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined8 local_24f;
  undefined8 uStack_247;
  undefined8 local_23f;
  undefined8 uStack_237;
  undefined8 local_22f;
  undefined8 uStack_227;
  undefined8 local_21f;
  undefined8 uStack_217;
  undefined8 uStack_20f;
  undefined7 uStack_207;
  undefined1 local_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined7 local_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 local_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 local_159;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 local_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 local_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
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
  byte local_a8;
  undefined8 local_a0;
  byte local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *puVar4;
  undefined8 uVar14;
  Alignment width;
  
  local_570 = param_4;
  uStack_568 = param_5;
  local_560 = param_6;
  uStack_558 = param_7;
  RVar3 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var,RVar3.value);
  lVar22 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar20.unknown = (undefined *)((long)&local_570 + lVar1);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  pMVar5 = pMVar6;
  FUN_100270a58();
  local_518 = pMVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Testimonials.swift",0x29,1,0x2c,UVar7.unknown,pMVar5);
  }
  lVar2 = DAT_100fb7de8;
  _swift_bridgeObjectRetain(param_3);
  if (lVar2 != -1) {
    _swift_once(&DAT_100fb7de8,FUN_100241de8);
  }
  SVar23.bridgeObject = param_3;
  SVar23.str = param_2;
  IVar9 = SwiftUI::Image::_init(SVar23);
  IVar17.unknown = puVar4;
  (**(code **)(lVar22 + 0x68))
            (AVar20.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  local_520 = (undefined *)
              SwiftUI::Image::resizable
                        ((EdgeInsets)AVar20.unknown,(ResizingMode)(__int8)IVar9.unknown,IVar17);
  _swift_release(IVar9.unknown);
  (**(code **)(lVar22 + 8))(AVar20.unknown,puVar4);
  if (DAT_100fba118 != -1) {
    AVar20.unknown = (undefined *)&DAT_100fba118;
    _swift_once(&DAT_100fba118,FUN_100284da0);
  }
  width.unknown = DAT_100fba120.unknown;
  SwiftUI::Alignment::get_center(AVar20);
  AVar20.unknown = (undefined *)0x0;
  SwiftUI::_FrameLayout::_init(width);
  uVar16 = (uint)width.unknown;
  local_528 = local_b0;
  local_52c = (uint)local_a8;
  local_538 = local_a0;
  local_53c = (uint)local_98;
  local_550 = uStack_88;
  uStack_548 = local_90;
  stringLiteral.bridgeObject = (void *)0xa300000000000000;
  stringLiteral.str = (char *)0x9c80e2;
  uVar14 = 0xa300000000000000;
  LVar10 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_578 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_580 + lVar1) = 0;
  uVar18 = (ulong)(uVar16 & 1);
  TVar11 = SwiftUI::Text::_init(LVar10);
  if (DAT_100fba128 != -1) {
    _swift_once(&DAT_100fba128,FUN_100284dc0);
  }
  TVar15 = TVar11;
  uVar19 = uVar14;
  uVar21 = uVar18;
  TVar12 = SwiftUI::Text::_font(DAT_100fba130);
  FUN_100016d74(TVar11.unknown,uVar14,uVar18);
  _swift_bridgeObjectRelease();
  if (DAT_100fba138 != -1) {
    AVar20.unknown = (undefined *)&DAT_100fba138;
    _swift_once(&DAT_100fba138,FUN_100284de0);
  }
  uVar14 = DAT_100fba140;
  SwiftUI::Alignment::get_trailing(AVar20);
  SwiftUI::_FrameLayout::_init((Alignment)0x4030000000000000);
  local_430 = (undefined1)uVar19;
  local_420 = uVar14;
  uStack_410 = CONCAT17(uStack_181,uStack_188);
  uStack_418 = CONCAT17(uStack_189,local_190);
  uStack_400 = CONCAT17(uStack_171,uStack_178);
  uStack_408 = CONCAT17(uStack_179,uStack_180);
  uStack_3f0 = CONCAT17(uStack_161,uStack_168);
  local_3f8 = CONCAT17(uStack_169,local_170);
  local_3c8 = uVar14;
  local_440 = TVar12.unknown;
  puStack_438 = TVar15.unknown;
  uStack_428 = uVar21;
  local_3e8 = TVar12.unknown;
  puStack_3e0 = TVar15.unknown;
  local_3d8 = local_430;
  local_3d0 = uVar21;
  FUN_100011090(&local_440,&local_120,&DAT_100fba148,&DAT_100c3a848);
  HVar13.unknown = (undefined *)&local_3e8;
  FUN_100005808(HVar13.unknown,&DAT_100fba148,&DAT_100c3a848);
  HVar13 = SwiftUI::HorizontalAlignment::get_leading(HVar13);
  FUN_100284a48(&local_120,local_570,uStack_568,local_560,uStack_558);
  uStack_368 = uStack_f8;
  local_370 = local_100;
  uStack_358 = uStack_e8;
  local_360 = local_f0;
  uStack_348 = uStack_d8;
  local_350 = local_e0;
  local_340 = local_d0;
  uStack_388 = uStack_118;
  local_390 = local_120;
  uStack_378 = uStack_108;
  uStack_380 = local_110;
  local_2e0 = local_d0;
  uStack_308 = uStack_f8;
  local_310 = local_100;
  uStack_2f8 = uStack_e8;
  uStack_300 = local_f0;
  uStack_2e8 = uStack_d8;
  local_2f0 = local_e0;
  uStack_328 = uStack_118;
  local_330 = local_120;
  uStack_318 = uStack_108;
  uStack_320 = local_110;
  FUN_100011090(&local_390,&local_190,&DAT_100fba150,&DAT_100c3a850);
  FUN_100005808(&local_330,&DAT_100fba150,&DAT_100c3a850);
  uStack_181 = (undefined1)uStack_388;
  uStack_180 = (undefined7)((ulong)uStack_388 >> 8);
  uStack_189 = SUB81(local_390,0);
  uStack_188 = (undefined7)((ulong)local_390 >> 8);
  uStack_171 = (undefined1)uStack_378;
  local_170 = (undefined7)((ulong)uStack_378 >> 8);
  uStack_179 = (undefined1)uStack_380;
  uStack_178 = (undefined7)((ulong)uStack_380 >> 8);
  local_139 = (undefined1)local_340;
  uStack_138 = (undefined7)((ulong)local_340 >> 8);
  uStack_141 = (undefined1)uStack_348;
  uStack_140 = (undefined7)((ulong)uStack_348 >> 8);
  local_149 = (undefined1)local_350;
  uStack_148 = (undefined7)((ulong)local_350 >> 8);
  uStack_151 = (undefined1)uStack_358;
  uStack_150 = (undefined7)((ulong)uStack_358 >> 8);
  local_159 = (undefined1)local_360;
  uStack_158 = (undefined7)((ulong)local_360 >> 8);
  uStack_161 = (undefined1)uStack_368;
  uStack_160 = (undefined7)((ulong)uStack_368 >> 8);
  uStack_169 = (undefined1)local_370;
  uStack_168 = (undefined7)((ulong)local_370 >> 8);
  uStack_2a7 = uStack_178;
  uStack_2a0 = uStack_171;
  local_2af = uStack_180;
  uStack_2a8 = uStack_179;
  uStack_247 = CONCAT17(uStack_181,uStack_188);
  local_24f = CONCAT17(uStack_189,local_190);
  uStack_237 = CONCAT17(uStack_171,uStack_178);
  local_23f = CONCAT17(uStack_179,uStack_180);
  uStack_2b7 = uStack_188;
  uStack_2b0 = uStack_181;
  uStack_2bf = local_190;
  uStack_2b8 = uStack_189;
  uStack_268 = local_340;
  uStack_20f = CONCAT17(local_149,uStack_150);
  uStack_277 = uStack_148;
  local_270 = uStack_141;
  uStack_27f = uStack_150;
  uStack_278 = local_149;
  uStack_217 = CONCAT17(uStack_151,uStack_158);
  local_21f = CONCAT17(local_159,uStack_160);
  uStack_287 = uStack_158;
  uStack_280 = uStack_151;
  local_28f = uStack_160;
  uStack_288 = local_159;
  uStack_227 = CONCAT17(uStack_161,uStack_168);
  local_22f = CONCAT17(uStack_169,local_170);
  uStack_297 = uStack_168;
  uStack_290 = uStack_161;
  local_29f = local_170;
  uStack_298 = uStack_169;
  uStack_2c8 = 0x4010000000000000;
  local_2c0 = 0;
  local_258 = 0x4010000000000000;
  local_250 = 0;
  uStack_1f8 = local_340;
  uStack_207 = uStack_148;
  local_200 = uStack_141;
  local_2d0 = HVar13.unknown;
  uStack_26f = uStack_140;
  local_260 = HVar13.unknown;
  uStack_1ff = uStack_140;
  FUN_100011090(&local_2d0,&local_120,&DAT_100fba158,&DAT_100c3a858);
  FUN_100005808(&local_260,&DAT_100fba158,&DAT_100c3a858);
  puVar4 = local_520;
  uStack_490 = CONCAT71(uStack_42f,local_430);
  uStack_478 = uStack_418;
  local_480 = local_420;
  uStack_468 = uStack_408;
  uStack_470 = uStack_410;
  uStack_458 = local_3f8;
  local_460 = uStack_400;
  puStack_498 = puStack_438;
  local_4a0 = local_440;
  uStack_488 = uStack_428;
  uStack_108 = CONCAT71(uStack_2b7,uStack_2b8);
  local_110 = CONCAT71(uStack_2bf,local_2c0);
  uStack_118 = uStack_2c8;
  local_120 = local_2d0;
  uStack_c8 = CONCAT71(uStack_277,uStack_278);
  local_d0 = CONCAT71(uStack_27f,uStack_280);
  local_c0 = CONCAT71(uStack_26f,local_270);
  local_130 = CONCAT71(uStack_26f,local_270);
  uStack_b8 = uStack_268;
  uStack_e8 = CONCAT71(uStack_297,uStack_298);
  local_f0 = CONCAT71(local_29f,uStack_2a0);
  uStack_d8 = CONCAT71(uStack_287,uStack_288);
  local_e0 = CONCAT71(local_28f,uStack_290);
  uStack_f8 = CONCAT71(uStack_2a7,uStack_2a8);
  local_100 = CONCAT71(local_2af,uStack_2b0);
  uStack_1e0 = CONCAT71(uStack_42f,local_430);
  puStack_1e8 = puStack_438;
  local_1f0 = local_440;
  uStack_1d8 = uStack_428;
  uStack_1a8 = local_3f8;
  local_1b0 = uStack_400;
  uStack_1c8 = uStack_418;
  local_1d0 = local_420;
  uStack_1b8 = uStack_408;
  uStack_1c0 = uStack_410;
  uStack_188 = (undefined7)uStack_2c8;
  uStack_181 = (undefined1)((ulong)uStack_2c8 >> 0x38);
  local_190 = SUB87(local_2d0,0);
  uStack_189 = (undefined1)((ulong)local_2d0 >> 0x38);
  uStack_178 = (undefined7)CONCAT71(uStack_2b7,uStack_2b8);
  uStack_171 = (undefined1)((uint7)uStack_2b7 >> 0x30);
  uStack_180 = (undefined7)CONCAT71(uStack_2bf,local_2c0);
  uStack_179 = (undefined1)((uint7)uStack_2bf >> 0x30);
  uStack_128 = uStack_268;
  uStack_138 = (undefined7)CONCAT71(uStack_277,uStack_278);
  uStack_131 = (undefined1)((uint7)uStack_277 >> 0x30);
  uStack_140 = (undefined7)CONCAT71(uStack_27f,uStack_280);
  local_139 = (undefined1)((uint7)uStack_27f >> 0x30);
  uStack_148 = (undefined7)CONCAT71(uStack_287,uStack_288);
  uStack_141 = (undefined1)((uint7)uStack_287 >> 0x30);
  uStack_150 = (undefined7)CONCAT71(local_28f,uStack_290);
  local_149 = (undefined1)((uint7)local_28f >> 0x30);
  uStack_168 = (undefined7)CONCAT71(uStack_2a7,uStack_2a8);
  uStack_161 = (undefined1)((uint7)uStack_2a7 >> 0x30);
  local_170 = (undefined7)CONCAT71(local_2af,uStack_2b0);
  uStack_169 = (undefined1)((uint7)local_2af >> 0x30);
  uStack_158 = (undefined7)CONCAT71(uStack_297,uStack_298);
  uStack_151 = (undefined1)((uint7)uStack_297 >> 0x30);
  uStack_160 = (undefined7)CONCAT71(local_29f,uStack_2a0);
  local_159 = (undefined1)((uint7)local_29f >> 0x30);
  param_1[10] = uStack_428;
  param_1[9] = CONCAT71(uStack_42f,local_430);
  param_1[8] = puStack_438;
  param_1[7] = local_440;
  param_1[0x10] = local_3f8;
  param_1[0xf] = uStack_400;
  param_1[0xe] = uStack_408;
  param_1[0xd] = uStack_410;
  param_1[0xc] = uStack_418;
  param_1[0xb] = local_420;
  param_1[0x13] = uStack_2c8;
  param_1[0x12] = local_2d0;
  param_1[0x15] = CONCAT71(uStack_2b7,uStack_2b8);
  param_1[0x14] = CONCAT71(uStack_2bf,local_2c0);
  param_1[0x1f] = uStack_268;
  param_1[0x1e] = CONCAT71(uStack_26f,local_270);
  local_450 = uStack_3f0;
  local_1a0 = uStack_3f0;
  *param_1 = local_520;
  param_1[1] = local_528;
  *(char *)(param_1 + 2) = (char)local_52c;
  param_1[3] = local_538;
  *(char *)(param_1 + 4) = (char)local_53c;
  param_1[5] = uStack_548;
  param_1[6] = local_550;
  param_1[0x11] = uStack_3f0;
  param_1[0x1b] = CONCAT71(uStack_287,uStack_288);
  param_1[0x1a] = CONCAT71(local_28f,uStack_290);
  param_1[0x1d] = CONCAT71(uStack_277,uStack_278);
  param_1[0x1c] = CONCAT71(uStack_27f,uStack_280);
  param_1[0x17] = CONCAT71(uStack_2a7,uStack_2a8);
  param_1[0x16] = CONCAT71(local_2af,uStack_2b0);
  param_1[0x19] = CONCAT71(uStack_297,uStack_298);
  param_1[0x18] = CONCAT71(local_29f,uStack_2a0);
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  _swift_retain(local_520);
  FUN_100011090(&local_1f0,auStack_510,&DAT_100fba148,&DAT_100c3a848);
  FUN_100011090(&local_190,auStack_510,&DAT_100fba158,&DAT_100c3a858);
  FUN_100005808(&local_120,&DAT_100fba158,&DAT_100c3a858);
  FUN_100005808(&local_4a0,&DAT_100fba148,&DAT_100c3a848);
  _swift_release(local_518);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100284a48 | FUN_100284a48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100284bc8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100284a48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 *puVar6;
  Text TVar7;
  Text TVar8;
  undefined *puVar9;
  Text TVar10;
  undefined8 *puVar11;
  Color CVar12;
  Text TVar13;
  Text TVar14;
  undefined *puVar15;
  Text TVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  void *pvVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  String SVar23;
  String SVar24;
  
  pvVar20 = param_5;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    param_4 = &DAT_00000001;
    pvVar20 = (void *)0x36;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Testimonials.swift",0x29,1,0x36,UVar4.unknown,pMVar2);
  }
  _swift_bridgeObjectRetain(param_3);
  puVar6 = (undefined8 *)0x9d80e2;
  SVar23.bridgeObject = (void *)0xa300000000000000;
  SVar23.str = (char *)0x9d80e2;
  SVar24.bridgeObject = pvVar20;
  SVar24.str = param_4;
  Swift::String::append(SVar23,SVar24);
  FUN_1002538a0();
  puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar17 = puVar6;
  TVar7 = SwiftUI::Text::_init();
  if (DAT_100fba128 != -1) {
    _swift_once(&DAT_100fba128,FUN_100284dc0);
  }
  TVar14 = TVar7;
  puVar18 = puVar9;
  puVar21 = puVar17;
  TVar8 = SwiftUI::Text::_font(DAT_100fba130);
  puVar11 = puVar21;
  FUN_100016d74(TVar7.unknown,puVar9,puVar17);
  _swift_bridgeObjectRelease(pvVar20);
  if (DAT_100fba138 != -1) {
    _swift_once(&DAT_100fba138,FUN_100284de0);
  }
  uVar1 = DAT_100fba140;
  puVar9 = &DAT_100c3a860;
  _swift_getKeyPath();
  _swift_bridgeObjectRetain(param_5);
  puVar15 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar7 = SwiftUI::Text::_init(puVar9,PTR___type_metadata_for_Swift_String_100eac208,puVar6);
  if (DAT_100fba160 != -1) {
    _swift_once(&DAT_100fba160,FUN_100284e04);
  }
  TVar16 = TVar7;
  puVar19 = puVar15;
  puVar17 = puVar6;
  TVar10 = SwiftUI::Text::_font(DAT_100fba168);
  FUN_100016d74(TVar7.unknown,puVar15,puVar6);
  _swift_bridgeObjectRelease();
  FUN_1002199e8();
  CVar12 = SwiftUI::Color::init((NSColor *)*puVar11);
  TVar7 = TVar10;
  puVar15 = TVar16.unknown;
  puVar22 = puVar19;
  TVar13 = SwiftUI::Text::_foregroundColor(CVar12.unknown);
  _swift_release(CVar12.unknown);
  FUN_100016d74(TVar10.unknown,TVar16.unknown,puVar19);
  _swift_bridgeObjectRelease(puVar17);
  *param_1 = TVar8.unknown;
  param_1[1] = TVar14.unknown;
  *(char *)(param_1 + 2) = (char)puVar18;
  param_1[3] = puVar21;
  param_1[4] = uVar1;
  param_1[5] = puVar9;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = TVar13.unknown;
  param_1[8] = TVar7.unknown;
  *(char *)(param_1 + 9) = (char)puVar15;
  param_1[10] = puVar22;
  FUN_100016d5c(TVar8.unknown,TVar14.unknown,(int)puVar18);
  _swift_bridgeObjectRetain(puVar21);
  _swift_retain(puVar9);
  FUN_100016d5c(TVar13.unknown,TVar7.unknown,puVar15);
  _swift_bridgeObjectRetain(puVar22);
  FUN_100016d74(TVar13.unknown,TVar7.unknown,puVar15);
  _swift_bridgeObjectRelease(puVar22);
  FUN_100016d74(TVar8.unknown,TVar14.unknown,(int)puVar18);
  _swift_release(pMVar3);
  _swift_release(puVar9);
  _swift_bridgeObjectRelease(puVar21);
  return;
}



/* Address: 0x100284da0 | FUN_100284da0 */

void FUN_100284da0(void)

{
  FUN_1000f3588();
  DAT_100fba120 = 0x4042000000000000;
  return;
}



/* Address: 0x100284dc0 | FUN_100284dc0 */

void FUN_100284dc0(Font param_1)

{
  FUN_1000f3588();
  DAT_100fba130 = SwiftUI::Font::get_body(param_1);
  return;
}



/* Address: 0x100284de0 | FUN_100284de0 */

void FUN_100284de0(void)

{
  FUN_1000f3588();
  DAT_100fba140 = 0x3feb333333333333;
  return;
}



/* Address: 0x100284e04 | FUN_100284e04 */

void FUN_100284e04(Font param_1)

{
  FUN_1000f3588();
  DAT_100fba168 = SwiftUI::Font::get_callout(param_1);
  return;
}



/* Address: 0x100284e24 | FUN_100284e24 */

void FUN_100284e24(void)

{
  FUN_1000f3588();
  DAT_100fba0d8 = 0x4020000000000000;
  return;
}



/* Address: 0x100284e44 | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}



/* Address: 0x100284e48 | thunk_FUN_10009cc44 */

void thunk_FUN_10009cc44(void)

{
  FUN_10009cc44();
  return;
}



/* Address: 0x100284e4c | thunk_FUN_100284e50 */

void thunk_FUN_100284e50(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fba170 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba0c0;
  FUN_100005c24(&DAT_100fba0c0,&DAT_100c3a7d8);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3a370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3a370,puVar1);
  DAT_100fba170 = pTVar2;
  return;
}



/* Address: 0x100284e50 | FUN_100284e50 */

void FUN_100284e50(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fba170 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba0c0;
  FUN_100005c24(&DAT_100fba0c0,&DAT_100c3a7d8);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3a370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3a370,puVar1);
  DAT_100fba170 = pTVar2;
  return;
}



/* Address: 0x100284ea0 | FUN_100284ea0 */

long * FUN_100284ea0(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  ColorScheme CVar3;
  undefined *puVar4;
  long *plVar5;
  undefined7 extraout_var;
  long lVar6;
  ulong uVar7;
  
  puVar4 = &DAT_100fba178;
  FUN_1000037f0(&DAT_100fba178,&DAT_100c3a890);
  uVar1 = *(uint *)(*(long *)(puVar4 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar4);
    bVar2 = (int)plVar5 != 1;
    if (bVar2) {
      *param_1 = *param_2;
      _swift_retain();
    }
    else {
      CVar3 = SwiftUI::ColorScheme::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,CVar3.value) + -8) + 0x10))
                (param_1,param_2,CONCAT71(extraout_var,CVar3.value));
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar4,!bVar2);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100284f70 | FUN_100284f70 */

void FUN_100284f70(undefined8 *param_1)

{
  ColorScheme CVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  
  puVar2 = &DAT_100fba178;
  FUN_1000037f0(&DAT_100fba178,&DAT_100c3a890);
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,puVar2);
  if ((int)puVar3 == 1) {
    CVar1 = SwiftUI::ColorScheme::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100284fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 8))
              (param_1,CONCAT71(extraout_var,CVar1.value));
    return;
  }
  _swift_release(*param_1);
  return;
}



/* Address: 0x100284fdc | FUN_100284fdc */

undefined8 * FUN_100284fdc(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  ColorScheme CVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  
  puVar3 = &DAT_100fba178;
  FUN_1000037f0(&DAT_100fba178,&DAT_100c3a890);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,puVar3);
  bVar1 = (int)puVar4 != 1;
  if (bVar1) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    CVar2 = SwiftUI::ColorScheme::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar2.value) + -8) + 0x10))
              (param_1,param_2,CONCAT71(extraout_var,CVar2.value));
  }
  _swift_storeEnumTagMultiPayload(param_1,puVar3,!bVar1);
  return param_1;
}



/* Address: 0x100285078 | FUN_100285078 */

undefined8 * FUN_100285078(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  ColorScheme CVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  
  if (param_1 != param_2) {
    puVar3 = &DAT_100fba178;
    FUN_100005808(param_1,&DAT_100fba178,&DAT_100c3a890);
    FUN_1000037f0(&DAT_100fba178,&DAT_100c3a890);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar3);
    bVar1 = (int)puVar4 != 1;
    if (bVar1) {
      *param_1 = *param_2;
      _swift_retain();
    }
    else {
      CVar2 = SwiftUI::ColorScheme::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,CVar2.value) + -8) + 0x10))
                (param_1,param_2,CONCAT71(extraout_var,CVar2.value));
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar3,!bVar1);
  }
  return param_1;
}



/* Address: 0x100285134 | FUN_100285134 */

void * FUN_100285134(void *param_1,void *param_2)

{
  ColorScheme CVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  void *pvVar3;
  
  puVar2 = &DAT_100fba178;
  FUN_1000037f0(&DAT_100fba178,&DAT_100c3a890);
  pvVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,puVar2);
  if ((int)pvVar3 == 1) {
    CVar1 = SwiftUI::ColorScheme::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 0x20))
              (param_1,param_2,CONCAT71(extraout_var,CVar1.value));
    _swift_storeEnumTagMultiPayload(param_1,puVar2,1);
    return param_1;
  }
  pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
  return pvVar3;
}



/* Address: 0x1002851dc | FUN_1002851dc */

void * FUN_1002851dc(void *param_1,void *param_2)

{
  ColorScheme CVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  void *pvVar3;
  
  if (param_1 != param_2) {
    puVar2 = &DAT_100fba178;
    FUN_100005808(param_1,&DAT_100fba178,&DAT_100c3a890);
    FUN_1000037f0(&DAT_100fba178,&DAT_100c3a890);
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar2);
    if ((int)pvVar3 != 1) {
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
      return pvVar3;
    }
    CVar1 = SwiftUI::ColorScheme::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 0x20))
              (param_1,param_2,CONCAT71(extraout_var,CVar1.value));
    _swift_storeEnumTagMultiPayload(param_1,puVar2,1);
  }
  return param_1;
}



/* Address: 0x1002852a4 | FUN_1002852a4 */

void FUN_1002852a4(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002852b0 | FUN_1002852b0 */

void FUN_1002852b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fba180;
  FUN_1000037f0(&DAT_100fba180,&DAT_100c3a898);
                    /* WARNING: Could not recover jumptable at 0x0001002852f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,param_2,puVar1);
  return;
}



/* Address: 0x1002852f8 | FUN_1002852f8 */

void FUN_1002852f8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100285304 | FUN_100285304 */

void FUN_100285304(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fba180;
  FUN_1000037f0(&DAT_100fba180,&DAT_100c3a898);
                    /* WARNING: Could not recover jumptable at 0x00010028534c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_2,puVar1);
  return;
}



/* Address: 0x100285350 | FUN_100285350 */

void FUN_100285350(undefined8 param_1)

{
  if (DAT_100fba1e0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100caa52c);
  return;
}



/* Address: 0x100285388 | FUN_100285388 */

void FUN_100285388(long param_1,ulong param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_1002853f0();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1002853f0 | FUN_1002853f0 */

void FUN_1002853f0(void)

{
  ColorScheme CVar1;
  Content CVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar3;
  
  if (DAT_100fba1f0 == 0) {
    CVar1 = SwiftUI::ColorScheme::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var,CVar1.value);
    CVar2 = SwiftUI::Environment::Content::typeMetadataAccessor();
    if (lVar3 == 0) {
      DAT_100fba1f0 = CONCAT71(extraout_var_00,CVar2.value);
    }
  }
  return;
}



/* Address: 0x100285444 | FUN_100285444 */

void FUN_100285444(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa554,1);
  return;
}



/* Address: 0x100285454 | FUN_100285454 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002855fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100285454(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  RoundedCornerStyle RVar6;
  RoundedRectangle RVar7;
  RoundedRectangle RVar8;
  HorizontalAlignment HVar9;
  undefined *puVar10;
  Set _all;
  Set SVar11;
  Alignment AVar13;
  Alignment AVar14;
  undefined *puVar15;
  long extraout_x8;
  undefined8 *puVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_c0 [5];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lVar12;
  
  RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  RVar8 = RVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(RVar7.unknown + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)local_c0 + lVar2);
  HVar9 = SwiftUI::HorizontalAlignment::get_center(RVar8.unknown);
  *param_1 = HVar9.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar10 = &DAT_100fba228;
  FUN_1000037f0(&DAT_100fba228,&DAT_100c3a908);
  FUN_1002857b8((long)param_1 + (long)*(int *)(puVar10 + 0x2c));
  _all = SwiftUI::Edge::Set::get_all(param_6);
  uVar18 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  SVar11.unknown = &DAT_100fba230;
  uVar20 = param_3;
  uVar21 = param_4;
  uVar22 = param_5;
  FUN_1000037f0(&DAT_100fba230,&DAT_100c3a910);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar11.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar18;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar11 = SwiftUI::Edge::Set::get_top(SVar11);
  uVar18 = 0x4010000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar10 = &DAT_100fba238;
  FUN_1000037f0(&DAT_100fba238,&DAT_100c3a918);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar18;
  *(undefined8 *)(puVar1 + 0x10) = uVar20;
  *(undefined8 *)(puVar1 + 0x18) = uVar21;
  *(undefined8 *)(puVar1 + 0x20) = uVar22;
  puVar1[0x28] = 0;
  iVar5 = *(int *)(RVar7.unknown + 0x14);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar12 = CONCAT71((int7)((ulong)puVar10 >> 8),RVar6.value);
  pcVar17 = *(code **)(*(long *)(lVar12 + -8) + 0x68);
  (*pcVar17)((long)puVar16 + (long)iVar5,uVar4,lVar12);
  auVar19 = NEON_fmov(0x4024000000000000,8);
  local_c0[1] = auVar19._8_8_;
  local_c0[0] = auVar19._0_8_;
  *(undefined8 *)((long)local_c0 + lVar2 + 8) = local_c0[1];
  *puVar16 = local_c0[0];
  if (DAT_100fb8710 != -1) {
    _swift_once(&DAT_100fb8710,FUN_100253964);
  }
  AVar14.unknown = DAT_100fb8708;
  SwiftUI::StrokeStyle::init
            (local_c0 + 3,0x3ff0000000000000,0x4024000000000000,0,lVar12,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar10 = &DAT_100fba240;
  FUN_1000037f0(&DAT_100fba240,&DAT_100c3a920);
  lVar2 = (long)param_1 + (long)*(int *)(puVar10 + 0x24);
  FUN_1001ef234(puVar16,lVar2);
  puVar10 = &DAT_100fb92b0;
  FUN_1000037f0(&DAT_100fb92b0,&DAT_100c3a630);
  puVar3 = (undefined8 *)(lVar2 + *(int *)(puVar10 + 0x24));
  puVar3[1] = local_c0[4];
  *puVar3 = local_c0[3];
  puVar3[3] = uStack_90;
  puVar3[2] = local_98;
  puVar3[4] = local_88;
  puVar10 = &DAT_100fb92b8;
  puVar15 = &DAT_100c39040;
  FUN_1000037f0();
  *(undefined **)(lVar2 + *(int *)(puVar10 + 0x34)) = AVar14.unknown;
  *(undefined2 *)(lVar2 + *(int *)(puVar10 + 0x38)) = 0x100;
  AVar13.unknown = AVar14.unknown;
  _swift_retain();
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  FUN_1001ef278(puVar16);
  puVar10 = &DAT_100fb92c0;
  FUN_1000037f0(&DAT_100fb92c0,&DAT_100c3a640);
  iVar5 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)(lVar2 + iVar5) = AVar13.unknown;
  ((undefined8 *)(lVar2 + iVar5))[1] = puVar15;
  puVar10 = &DAT_100fb9fe0;
  FUN_1000037f0(&DAT_100fb9fe0,&DAT_100c3a800);
  puVar16 = (undefined8 *)(lVar2 + *(int *)(puVar10 + 0x24));
  (*pcVar17)((long)puVar16 + (long)*(int *)(RVar7.unknown + 0x14),uVar4,lVar12);
  puVar16[1] = local_c0[1];
  *puVar16 = local_c0[0];
  puVar10 = &DAT_100fb92a8;
  puVar15 = &DAT_100c39030;
  FUN_1000037f0();
  *(undefined **)((long)puVar16 + (long)*(int *)(puVar10 + 0x34)) = AVar14.unknown;
  *(undefined2 *)((long)puVar16 + (long)*(int *)(puVar10 + 0x38)) = 0x100;
  _swift_retain();
  AVar13 = SwiftUI::Alignment::get_center(AVar14);
  AVar14.unknown = &DAT_100fb92e0;
  puVar10 = &DAT_100c3a810;
  FUN_1000037f0();
  iVar5 = *(int *)(AVar14.unknown + 0x24);
  *(undefined8 *)((long)puVar16 + (long)iVar5) = AVar13.unknown;
  ((undefined8 *)((long)puVar16 + (long)iVar5))[1] = puVar15;
  AVar14 = SwiftUI::Alignment::get_center(AVar14);
  puVar15 = &DAT_100fb9fe8;
  FUN_1000037f0(&DAT_100fb9fe8,&DAT_100c3a650);
  iVar5 = *(int *)(puVar15 + 0x24);
  *(undefined8 *)(lVar2 + iVar5) = AVar14.unknown;
  ((undefined8 *)(lVar2 + iVar5))[1] = puVar10;
  return;
}



/* Address: 0x1002857b8 | FUN_1002857b8 */

void FUN_1002857b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  Alignment width;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  LocalizedStringResource LVar10;
  MainActor *pMVar11;
  MainActor *pMVar12;
  MainActor *pMVar13;
  UnownedSerialExecutor UVar14;
  char *pcVar15;
  VerticalAlignment VVar16;
  UnownedSerialExecutor UVar17;
  Alignment AVar18;
  _FrameLayout _Var19;
  HorizontalAlignment HVar20;
  Set SVar21;
  CGFloat CVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar23;
  undefined8 *puVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  String SVar31;
  String SVar32;
  char *apcStack_2cc0 [3];
  void *local_2ca8 [2];
  MainActor *local_2c98 [2];
  long local_2c88;
  long local_2c80;
  long local_2c78;
  long local_2c70;
  LocalizedStringResource local_2c68;
  undefined8 *local_2c60;
  long local_2c58;
  char *local_2c50;
  Alignment local_2c48;
  undefined *local_2c40;
  undefined *local_2c38;
  undefined8 *local_2c30;
  undefined8 *local_2c28;
  MainActor *local_2c20;
  MainActor *local_2c18;
  undefined *local_2c10;
  undefined *local_2c08;
  long local_2c00;
  undefined8 *local_2bf8;
  undefined1 auStack_2bf0 [360];
  undefined1 auStack_2a88 [360];
  undefined1 auStack_2920 [288];
  undefined1 auStack_2800 [288];
  undefined *local_26e0;
  undefined8 local_26d8;
  undefined1 local_26d0;
  undefined1 auStack_26cf [295];
  undefined *local_25a8;
  undefined8 local_25a0;
  undefined1 local_2598;
  undefined1 auStack_2597 [295];
  undefined1 auStack_2470 [312];
  undefined1 local_2338;
  undefined8 local_2330;
  undefined8 local_2320;
  undefined8 local_2318;
  undefined1 local_2310;
  undefined1 auStack_2308 [312];
  undefined1 local_21d0;
  undefined8 local_21c8;
  undefined8 local_21b8;
  undefined8 local_21b0;
  undefined1 local_21a8;
  undefined1 auStack_21a0 [360];
  undefined1 auStack_2038 [360];
  undefined1 auStack_1ed0 [288];
  undefined1 auStack_1db0 [288];
  undefined *local_1c90;
  undefined8 local_1c88;
  undefined1 local_1c80;
  undefined1 auStack_1c7f [295];
  undefined *local_1b58;
  undefined8 local_1b50;
  undefined1 local_1b48;
  undefined1 auStack_1b47 [295];
  undefined1 auStack_1a20 [312];
  undefined1 local_18e8;
  undefined8 local_18e0;
  undefined8 local_18d0;
  undefined8 local_18c8;
  undefined1 local_18c0;
  undefined1 auStack_18b8 [312];
  undefined1 local_1780;
  undefined8 local_1778;
  undefined8 local_1768;
  undefined8 local_1760;
  undefined1 local_1758;
  undefined1 auStack_1750 [360];
  undefined1 auStack_15e8 [360];
  undefined1 auStack_1480 [288];
  undefined1 auStack_1360 [288];
  undefined *local_1240;
  undefined8 local_1238;
  undefined1 local_1230;
  undefined1 auStack_122f [295];
  undefined *local_1108;
  undefined8 local_1100;
  undefined1 local_10f8;
  undefined1 auStack_10f7 [295];
  undefined1 auStack_fd0 [312];
  undefined1 local_e98;
  undefined8 local_e90;
  undefined8 local_e80;
  undefined8 local_e78;
  undefined1 local_e70;
  undefined1 auStack_e68 [312];
  undefined1 local_d30;
  undefined8 local_d28;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined1 local_d08;
  undefined1 auStack_d00 [360];
  undefined1 auStack_b98 [360];
  undefined1 auStack_a30 [288];
  undefined1 auStack_910 [288];
  undefined *local_7f0;
  undefined8 local_7e8;
  undefined1 local_7e0;
  undefined1 auStack_7df [295];
  undefined *local_6b8;
  undefined8 local_6b0;
  undefined1 local_6a8;
  undefined1 auStack_6a7 [295];
  undefined1 auStack_580 [312];
  undefined1 local_448;
  undefined8 local_440;
  undefined8 local_430;
  undefined8 local_428;
  undefined1 local_420;
  undefined1 auStack_418 [312];
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined1 auStack_2b0 [360];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = &DAT_100fba248;
  local_2c70 = extraout_x8;
  local_2c10 = param_5;
  FUN_1000037f0(&DAT_100fba248,&DAT_100c3a930);
  local_2c08 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar23 = (long)apcStack_2cc0 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_2c00 = lVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar25 = (undefined8 *)(lVar23 - extraout_x12);
  LVar10 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar10.unknown + -8) + 0x40));
  LVar10.unknown = (undefined *)((long)puVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_100fba250;
  FUN_1000037f0(&DAT_100fba250,&DAT_100c3a938);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar23 = (long)LVar10.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_2c78 = lVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar23 - extraout_x12_00;
  local_2c80 = lVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar23 - extraout_x12_01;
  local_2c88 = lVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar23 - extraout_x12_02;
  local_2c58 = lVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar24 = (undefined8 *)(lVar23 - extraout_x12_03);
  local_2c28 = puVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar24 = (undefined8 *)((long)puVar24 - extraout_x12_04);
  local_2c30 = puVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar24 = (undefined8 *)((long)puVar24 - extraout_x12_05);
  local_2bf8 = puVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar24 = (undefined8 *)((long)puVar24 - extraout_x12_06);
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  pMVar12 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  pMVar13 = pMVar12;
  FUN_100270a58();
  local_2c98[1] = pMVar12;
  local_2c20 = pMVar13;
  local_2c18 = pMVar11;
  UVar14 = Swift::Actor::get_unownedExecutor();
  pcVar15 = (char *)UVar14;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar15 & 1) == 0) {
    pcVar15 = "PasteLicensingAppStore/Trial.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0xb,UVar14.unknown,pMVar13);
  }
  FUN_10020c980();
  uVar26 = *(undefined8 *)pcVar15;
  uVar2 = *(undefined8 *)(pcVar15 + 8);
  _swift_bridgeObjectRetain();
  FUN_1001cc0d4(LVar10.unknown);
  SVar31 = (extension_Foundation)::Swift::String::init(LVar10);
  local_2c68.unknown = SVar31.bridgeObject;
  local_2c50 = SVar31.str;
  FUN_1001cbf54(LVar10.unknown);
  SVar31 = (extension_Foundation)::Swift::String::init(LVar10);
  apcStack_2cc0[2] = SVar31.str;
  VVar16 = SwiftUI::VerticalAlignment::get_top((VerticalAlignment)apcStack_2cc0[2]);
  *puVar24 = VVar16.unknown;
  puVar24[1] = 0;
  *(undefined1 *)(puVar24 + 2) = 0;
  local_2c98[0] = Swift::MainActor::get_shared(local_2c18,(MainActor *)VVar16.unknown);
  pMVar13 = local_2c20;
  UVar17 = Swift::Actor::get_unownedExecutor();
  UVar14 = UVar17;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar14.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x3e,UVar17.unknown,pMVar13);
  }
  AVar18.unknown = &DAT_100fba258;
  puVar9 = &DAT_100c3a940;
  FUN_1000037f0();
  iVar3 = *(int *)(AVar18.unknown + 0x2c);
  local_2c60 = puVar24;
  local_2c38 = AVar18.unknown;
  AVar18 = SwiftUI::Alignment::get_top(AVar18);
  *puVar25 = AVar18.unknown;
  puVar25[1] = puVar9;
  puVar9 = &DAT_100fba260;
  FUN_1000037f0(&DAT_100fba260,&DAT_100c3a948);
  AVar18.unknown = local_2c10;
  local_2ca8[1] = (void *)uVar2;
  local_2c40 = puVar9;
  FUN_100286d4c((long)puVar25 + (long)*(int *)(puVar9 + 0x2c),local_2c10,0,uVar26,uVar2);
  if (DAT_100fba268 != -1) {
    AVar18.unknown = (undefined *)&DAT_100fba268;
    _swift_once(&DAT_100fba268,FUN_1002899d8);
  }
  width.unknown = DAT_100fba270.unknown;
  SwiftUI::Alignment::get_center(AVar18);
  local_2c48.unknown = width.unknown;
  _Var19 = SwiftUI::_FrameLayout::_init(width);
  puVar1 = (undefined8 *)((long)puVar25 + (long)*(int *)(local_2c08 + 0x24));
  puVar1[1] = uStack_140;
  *puVar1 = local_148;
  puVar1[3] = uStack_130;
  puVar1[2] = uStack_138;
  puVar1[5] = uStack_120;
  puVar1[4] = local_128;
  HVar20 = SwiftUI::HorizontalAlignment::get_leading(_Var19.unknown);
  local_2ca8[0] = SVar31.bridgeObject;
  FUN_100287598(auStack_2b0,local_2c50,local_2c68.unknown,0,apcStack_2cc0[2],SVar31.bridgeObject);
  _memcpy(auStack_a30,auStack_2b0,0x119);
  _memcpy(auStack_910,auStack_2b0,0x119);
  FUN_100011090(auStack_a30,auStack_418,&DAT_100fba278,&DAT_100c3a950);
  FUN_100005808(auStack_910,&DAT_100fba278,&DAT_100c3a950);
  SVar21.unknown = _memcpy((void *)((ulong)auStack_418 | 7),auStack_a30,0x119);
  SVar21 = SwiftUI::Edge::Set::get_leading(SVar21);
  local_7e8 = 0x4000000000000000;
  local_7e0 = 0;
  local_7f0 = HVar20.unknown;
  CVar22.unknown = _memcpy(auStack_7df,auStack_418,0x120);
  uVar26 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(CVar22);
  uVar27 = param_3;
  uVar29 = param_4;
  _memcpy(auStack_b98,&local_7f0,0x131);
  local_6b0 = 0x4000000000000000;
  local_6a8 = 0;
  local_6b8 = HVar20.unknown;
  _memcpy(auStack_6a7,auStack_418,0x120);
  FUN_100011090(&local_7f0,auStack_2b0,&DAT_100fba280,&DAT_100c3a958);
  FUN_100005808(&local_6b8,&DAT_100fba280,&DAT_100c3a958);
  _memcpy(auStack_580,auStack_b98,0x138);
  local_420 = 0;
  local_448 = (char)SVar21.unknown;
  local_440 = uVar26;
  local_430 = param_3;
  local_428 = param_4;
  _memcpy(auStack_418,auStack_b98,0x138);
  local_2b8 = 0;
  local_2e0 = (char)SVar21.unknown;
  local_2d8 = uVar26;
  local_2c8 = param_3;
  local_2c0 = param_4;
  FUN_100011090(auStack_580,auStack_2b0,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(auStack_418,&DAT_100fba288,&DAT_100c3a960);
  lVar23 = local_2c00;
  FUN_100011090(puVar25,local_2c00,&DAT_100fba248,&DAT_100c3a930);
  _memcpy(auStack_b98,auStack_580,0x161);
  FUN_100011090(lVar23,(long)puVar24 + (long)iVar3,&DAT_100fba248,&DAT_100c3a930);
  puVar9 = &DAT_100fba290;
  FUN_1000037f0(&DAT_100fba290,&DAT_100c3a968);
  iVar4 = *(int *)(puVar9 + 0x30);
  local_2c50 = puVar9;
  _memcpy(auStack_2b0,auStack_b98,0x161);
  _memcpy((void *)((long)puVar24 + (long)iVar3 + (long)iVar4),auStack_b98,0x161);
  FUN_100011090(auStack_2b0,auStack_d00,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(puVar25,&DAT_100fba248,&DAT_100c3a930);
  FUN_100005808(auStack_b98,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(lVar23,&DAT_100fba248,&DAT_100c3a930);
  _swift_bridgeObjectRelease(local_2ca8[1]);
  _swift_bridgeObjectRelease(local_2c68.unknown);
  _swift_bridgeObjectRelease(local_2ca8[0]);
  pMVar13 = local_2c98[0];
  _swift_release();
  FUN_10020d014();
  uVar26 = *(undefined8 *)pMVar13;
  uVar2 = *(undefined8 *)(pMVar13 + 8);
  _swift_bridgeObjectRetain();
  FUN_1001cc3d4(LVar10.unknown);
  SVar31 = (extension_Foundation)::Swift::String::init(LVar10);
  apcStack_2cc0[1] = SVar31.str;
  FUN_1001cc254(LVar10.unknown);
  local_2c68.unknown = LVar10.unknown;
  SVar32 = (extension_Foundation)::Swift::String::init(LVar10);
  VVar16 = SwiftUI::VerticalAlignment::get_top((VerticalAlignment)SVar32.str);
  puVar24 = local_2bf8;
  *local_2bf8 = VVar16.unknown;
  puVar24[1] = 0;
  *(undefined1 *)(puVar24 + 2) = 0;
  local_2c98[0] = Swift::MainActor::get_shared(local_2c18,(MainActor *)VVar16.unknown);
  pMVar13 = local_2c20;
  UVar14 = Swift::Actor::get_unownedExecutor();
  pcVar15 = (char *)UVar14;
  pMVar11 = pMVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar15 & 1) == 0) {
    pcVar15 = "PasteLicensingAppStore/Trial.swift";
    pMVar11 = (MainActor *)0x22;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x3e,UVar14.unknown,pMVar13);
  }
  local_2ca8[1] = (void *)((long)local_2bf8 + (long)*(int *)(local_2c38 + 0x2c));
  AVar18 = SwiftUI::Alignment::get_top((Alignment)pcVar15);
  *puVar25 = AVar18.unknown;
  puVar25[1] = pMVar11;
  AVar18.unknown = local_2c10;
  FUN_100286d4c((long)puVar25 + (long)*(int *)(local_2c40 + 0x2c),local_2c10,1,uVar26,uVar2);
  SwiftUI::Alignment::get_center(AVar18);
  _Var19 = SwiftUI::_FrameLayout::_init(local_2c48);
  puVar24 = (undefined8 *)((long)puVar25 + (long)*(int *)(local_2c08 + 0x24));
  puVar24[1] = uStack_110;
  *puVar24 = local_118;
  puVar24[3] = uStack_100;
  puVar24[2] = uStack_108;
  puVar24[5] = uStack_f0;
  puVar24[4] = local_f8;
  HVar20 = SwiftUI::HorizontalAlignment::get_leading(_Var19.unknown);
  apcStack_2cc0[2] = SVar31.bridgeObject;
  local_2ca8[0] = SVar32.bridgeObject;
  FUN_100287598(auStack_d00,apcStack_2cc0[1],SVar31.bridgeObject,1,SVar32.str,SVar32.bridgeObject);
  _memcpy(auStack_1480,auStack_d00,0x119);
  _memcpy(auStack_1360,auStack_d00,0x119);
  FUN_100011090(auStack_1480,auStack_e68,&DAT_100fba278,&DAT_100c3a950);
  FUN_100005808(auStack_1360,&DAT_100fba278,&DAT_100c3a950);
  SVar21.unknown = _memcpy((void *)((ulong)auStack_e68 | 7),auStack_1480,0x119);
  SVar21 = SwiftUI::Edge::Set::get_leading(SVar21);
  local_1238 = 0x4000000000000000;
  local_1230 = 0;
  local_1240 = HVar20.unknown;
  CVar22.unknown = _memcpy(auStack_122f,auStack_e68,0x120);
  uVar26 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(CVar22);
  uVar28 = uVar27;
  uVar30 = uVar29;
  _memcpy(auStack_15e8,&local_1240,0x131);
  local_1100 = 0x4000000000000000;
  local_10f8 = 0;
  local_1108 = HVar20.unknown;
  _memcpy(auStack_10f7,auStack_e68,0x120);
  FUN_100011090(&local_1240,auStack_d00,&DAT_100fba280,&DAT_100c3a958);
  FUN_100005808(&local_1108,&DAT_100fba280,&DAT_100c3a958);
  _memcpy(auStack_fd0,auStack_15e8,0x138);
  local_e70 = 0;
  local_e98 = (char)SVar21.unknown;
  local_e90 = uVar26;
  local_e80 = uVar27;
  local_e78 = uVar29;
  _memcpy(auStack_e68,auStack_15e8,0x138);
  local_d08 = 0;
  local_d30 = (char)SVar21.unknown;
  local_d28 = uVar26;
  local_d18 = uVar27;
  local_d10 = uVar29;
  FUN_100011090(auStack_fd0,auStack_d00,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(auStack_e68,&DAT_100fba288,&DAT_100c3a960);
  lVar23 = local_2c00;
  FUN_100011090(puVar25,local_2c00,&DAT_100fba248,&DAT_100c3a930);
  _memcpy(auStack_15e8,auStack_fd0,0x161);
  pvVar5 = local_2ca8[1];
  FUN_100011090(lVar23,local_2ca8[1],&DAT_100fba248,&DAT_100c3a930);
  iVar3 = *(int *)(local_2c50 + 0x30);
  _memcpy(auStack_d00,auStack_15e8,0x161);
  _memcpy((void *)((long)pvVar5 + (long)iVar3),auStack_15e8,0x161);
  FUN_100011090(auStack_d00,auStack_1750,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(puVar25,&DAT_100fba248,&DAT_100c3a930);
  FUN_100005808(auStack_15e8,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(lVar23,&DAT_100fba248,&DAT_100c3a930);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(apcStack_2cc0[2]);
  _swift_bridgeObjectRelease(local_2ca8[0]);
  pMVar13 = local_2c98[0];
  _swift_release();
  FUN_10020c8f0();
  uVar26 = *(undefined8 *)pMVar13;
  uVar2 = *(undefined8 *)(pMVar13 + 8);
  _swift_bridgeObjectRetain();
  LVar10.unknown = local_2c68.unknown;
  FUN_1001cc6d4(local_2c68.unknown);
  SVar31 = (extension_Foundation)::Swift::String::init(LVar10);
  apcStack_2cc0[1] = SVar31.str;
  FUN_1001cc554(LVar10.unknown);
  SVar32 = (extension_Foundation)::Swift::String::init(LVar10);
  VVar16 = SwiftUI::VerticalAlignment::get_top((VerticalAlignment)SVar32.str);
  puVar24 = local_2c30;
  *local_2c30 = VVar16.unknown;
  puVar24[1] = 0;
  *(undefined1 *)(puVar24 + 2) = 0;
  local_2c98[0] = Swift::MainActor::get_shared(local_2c18,(MainActor *)VVar16.unknown);
  pMVar13 = local_2c20;
  UVar14 = Swift::Actor::get_unownedExecutor();
  pcVar15 = (char *)UVar14;
  pMVar11 = pMVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar15 & 1) == 0) {
    pcVar15 = "PasteLicensingAppStore/Trial.swift";
    pMVar11 = (MainActor *)0x22;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x3e,UVar14.unknown,pMVar13);
  }
  local_2ca8[1] = (void *)((long)local_2c30 + (long)*(int *)(local_2c38 + 0x2c));
  AVar18 = SwiftUI::Alignment::get_top((Alignment)pcVar15);
  *puVar25 = AVar18.unknown;
  puVar25[1] = pMVar11;
  AVar18.unknown = local_2c10;
  FUN_100286d4c((long)puVar25 + (long)*(int *)(local_2c40 + 0x2c),local_2c10,2,uVar26,uVar2);
  SwiftUI::Alignment::get_center(AVar18);
  _Var19 = SwiftUI::_FrameLayout::_init(local_2c48);
  puVar24 = (undefined8 *)((long)puVar25 + (long)*(int *)(local_2c08 + 0x24));
  puVar24[1] = uStack_e0;
  *puVar24 = local_e8;
  puVar24[3] = uStack_d0;
  puVar24[2] = uStack_d8;
  puVar24[5] = uStack_c0;
  puVar24[4] = local_c8;
  HVar20 = SwiftUI::HorizontalAlignment::get_leading(_Var19.unknown);
  apcStack_2cc0[2] = SVar31.bridgeObject;
  local_2ca8[0] = SVar32.bridgeObject;
  FUN_100287598(auStack_1750,apcStack_2cc0[1],SVar31.bridgeObject,2,SVar32.str,SVar32.bridgeObject);
  _memcpy(auStack_1ed0,auStack_1750,0x119);
  _memcpy(auStack_1db0,auStack_1750,0x119);
  FUN_100011090(auStack_1ed0,auStack_18b8,&DAT_100fba278,&DAT_100c3a950);
  FUN_100005808(auStack_1db0,&DAT_100fba278,&DAT_100c3a950);
  SVar21.unknown = _memcpy((void *)((ulong)auStack_18b8 | 7),auStack_1ed0,0x119);
  SVar21 = SwiftUI::Edge::Set::get_leading(SVar21);
  local_1c88 = 0x4000000000000000;
  local_1c80 = 0;
  local_1c90 = HVar20.unknown;
  CVar22.unknown = _memcpy(auStack_1c7f,auStack_18b8,0x120);
  uVar26 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(CVar22);
  uVar27 = uVar28;
  uVar29 = uVar30;
  _memcpy(auStack_2038,&local_1c90,0x131);
  local_1b50 = 0x4000000000000000;
  local_1b48 = 0;
  local_1b58 = HVar20.unknown;
  _memcpy(auStack_1b47,auStack_18b8,0x120);
  FUN_100011090(&local_1c90,auStack_1750,&DAT_100fba280,&DAT_100c3a958);
  FUN_100005808(&local_1b58,&DAT_100fba280,&DAT_100c3a958);
  _memcpy(auStack_1a20,auStack_2038,0x138);
  local_18c0 = 0;
  local_18e8 = (char)SVar21.unknown;
  local_18e0 = uVar26;
  local_18d0 = uVar28;
  local_18c8 = uVar30;
  _memcpy(auStack_18b8,auStack_2038,0x138);
  local_1758 = 0;
  local_1780 = (char)SVar21.unknown;
  local_1778 = uVar26;
  local_1768 = uVar28;
  local_1760 = uVar30;
  FUN_100011090(auStack_1a20,auStack_1750,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(auStack_18b8,&DAT_100fba288,&DAT_100c3a960);
  lVar23 = local_2c00;
  FUN_100011090(puVar25,local_2c00,&DAT_100fba248,&DAT_100c3a930);
  _memcpy(auStack_2038,auStack_1a20,0x161);
  pvVar5 = local_2ca8[1];
  FUN_100011090(lVar23,local_2ca8[1],&DAT_100fba248,&DAT_100c3a930);
  iVar3 = *(int *)(local_2c50 + 0x30);
  _memcpy(auStack_1750,auStack_2038,0x161);
  _memcpy((void *)((long)pvVar5 + (long)iVar3),auStack_2038,0x161);
  FUN_100011090(auStack_1750,auStack_21a0,&DAT_100fba288,&DAT_100c3a960);
  local_2ca8[1] = puVar25;
  FUN_100005808(puVar25,&DAT_100fba248,&DAT_100c3a930);
  FUN_100005808(auStack_2038,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(lVar23,&DAT_100fba248,&DAT_100c3a930);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(apcStack_2cc0[2]);
  _swift_bridgeObjectRelease(local_2ca8[0]);
  pMVar13 = local_2c98[0];
  _swift_release();
  FUN_10020d970();
  uVar26 = *(undefined8 *)pMVar13;
  uVar2 = *(undefined8 *)(pMVar13 + 8);
  _swift_bridgeObjectRetain();
  LVar10.unknown = local_2c68.unknown;
  FUN_1001cc9d4(local_2c68.unknown);
  SVar31 = (extension_Foundation)::Swift::String::init(LVar10);
  apcStack_2cc0[2] = SVar31.str;
  FUN_1001cc854(LVar10.unknown);
  SVar32 = (extension_Foundation)::Swift::String::init(LVar10);
  VVar16 = SwiftUI::VerticalAlignment::get_top((VerticalAlignment)SVar32.str);
  puVar24 = local_2c28;
  *local_2c28 = VVar16.unknown;
  puVar24[1] = 0;
  *(undefined1 *)(puVar24 + 2) = 0;
  local_2c68.unknown = Swift::MainActor::get_shared(local_2c18,VVar16.unknown);
  pMVar13 = local_2c20;
  UVar14 = Swift::Actor::get_unownedExecutor();
  pcVar15 = (char *)UVar14;
  pMVar11 = pMVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar15 & 1) == 0) {
    pcVar15 = "PasteLicensingAppStore/Trial.swift";
    pMVar11 = (MainActor *)0x22;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x3e,UVar14.unknown,pMVar13);
  }
  local_2c18 = (MainActor *)((long)local_2c28 + (long)*(int *)(local_2c38 + 0x2c));
  AVar18 = SwiftUI::Alignment::get_top((Alignment)pcVar15);
  pvVar5 = local_2ca8[1];
  *(undefined **)local_2ca8[1] = AVar18.unknown;
  *(MainActor **)((long)pvVar5 + 8) = pMVar11;
  AVar18.unknown = local_2c10;
  local_2ca8[0] = (void *)uVar2;
  FUN_100286d4c((long)pvVar5 + (long)*(int *)(local_2c40 + 0x2c),local_2c10,3,uVar26,uVar2);
  SwiftUI::Alignment::get_center(AVar18);
  _Var19 = SwiftUI::_FrameLayout::_init(local_2c48);
  puVar24 = (undefined8 *)((long)pvVar5 + (long)*(int *)(local_2c08 + 0x24));
  puVar24[1] = uStack_b0;
  *puVar24 = local_b8;
  puVar24[3] = uStack_a0;
  puVar24[2] = uStack_a8;
  puVar24[5] = uStack_90;
  puVar24[4] = local_98;
  HVar20 = SwiftUI::HorizontalAlignment::get_leading(_Var19.unknown);
  local_2c98[0] = SVar32.bridgeObject;
  FUN_100287598(auStack_21a0,apcStack_2cc0[2],SVar31.bridgeObject,3,SVar32.str,SVar32.bridgeObject);
  _memcpy(auStack_2920,auStack_21a0,0x119);
  _memcpy(auStack_2800,auStack_21a0,0x119);
  FUN_100011090(auStack_2920,auStack_2308,&DAT_100fba278,&DAT_100c3a950);
  FUN_100005808(auStack_2800,&DAT_100fba278,&DAT_100c3a950);
  SVar21.unknown = _memcpy((void *)((ulong)auStack_2308 | 7),auStack_2920,0x119);
  SVar21 = SwiftUI::Edge::Set::get_leading(SVar21);
  local_26d8 = 0x4000000000000000;
  local_26d0 = 0;
  local_26e0 = HVar20.unknown;
  CVar22.unknown = _memcpy(auStack_26cf,auStack_2308,0x120);
  uVar26 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init(CVar22);
  _memcpy(auStack_2a88,&local_26e0,0x131);
  local_25a0 = 0x4000000000000000;
  local_2598 = 0;
  local_25a8 = HVar20.unknown;
  _memcpy(auStack_2597,auStack_2308,0x120);
  FUN_100011090(&local_26e0,auStack_21a0,&DAT_100fba280,&DAT_100c3a958);
  FUN_100005808(&local_25a8,&DAT_100fba280,&DAT_100c3a958);
  _memcpy(auStack_2470,auStack_2a88,0x138);
  local_2310 = 0;
  local_2338 = (char)SVar21.unknown;
  local_2330 = uVar26;
  local_2320 = uVar27;
  local_2318 = uVar29;
  _memcpy(auStack_2308,auStack_2a88,0x138);
  local_21a8 = 0;
  local_21d0 = (char)SVar21.unknown;
  local_21c8 = uVar26;
  local_21b8 = uVar27;
  local_21b0 = uVar29;
  FUN_100011090(auStack_2470,auStack_21a0,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(auStack_2308,&DAT_100fba288,&DAT_100c3a960);
  lVar23 = local_2c00;
  FUN_100011090(pvVar5,local_2c00,&DAT_100fba248,&DAT_100c3a930);
  _memcpy(auStack_2a88,auStack_2470,0x161);
  pMVar13 = local_2c18;
  FUN_100011090(lVar23,local_2c18,&DAT_100fba248,&DAT_100c3a930);
  iVar3 = *(int *)(local_2c50 + 0x30);
  _memcpy(auStack_21a0,auStack_2a88,0x161);
  _memcpy((void *)((long)pMVar13 + (long)iVar3),auStack_2a88,0x161);
  FUN_100011090(auStack_21a0,auStack_2bf0,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(pvVar5,&DAT_100fba248,&DAT_100c3a930);
  FUN_100005808(auStack_2a88,&DAT_100fba288,&DAT_100c3a960);
  FUN_100005808(lVar23,&DAT_100fba248,&DAT_100c3a930);
  _swift_bridgeObjectRelease(local_2ca8[0]);
  _swift_bridgeObjectRelease(SVar31.bridgeObject);
  _swift_bridgeObjectRelease(local_2c98[0]);
  _swift_release(local_2c68.unknown);
  lVar8 = local_2c58;
  FUN_100011090(local_2c60,local_2c58,&DAT_100fba250,&DAT_100c3a938);
  lVar23 = local_2c88;
  FUN_100011090(local_2bf8,local_2c88,&DAT_100fba250,&DAT_100c3a938);
  puVar24 = local_2c30;
  lVar6 = local_2c80;
  FUN_100011090(local_2c30,local_2c80,&DAT_100fba250,&DAT_100c3a938);
  puVar25 = local_2c28;
  lVar7 = local_2c78;
  FUN_100011090(local_2c28,local_2c78,&DAT_100fba250,&DAT_100c3a938);
  FUN_100011090(lVar8,local_2c70,&DAT_100fba250,&DAT_100c3a938);
  puVar9 = &DAT_100fba298;
  FUN_1000037f0(&DAT_100fba298,&DAT_100c3a970);
  FUN_100011090(lVar23,local_2c70 + *(int *)(puVar9 + 0x30),&DAT_100fba250,&DAT_100c3a938);
  FUN_100011090(lVar6,local_2c70 + *(int *)(puVar9 + 0x40),&DAT_100fba250,&DAT_100c3a938);
  FUN_100011090(lVar7,local_2c70 + *(int *)(puVar9 + 0x50),&DAT_100fba250,&DAT_100c3a938);
  FUN_100005808(puVar25,&DAT_100fba250,&DAT_100c3a938);
  FUN_100005808(puVar24,&DAT_100fba250,&DAT_100c3a938);
  FUN_100005808(local_2bf8,&DAT_100fba250,&DAT_100c3a938);
  FUN_100005808(local_2c60,&DAT_100fba250,&DAT_100c3a938);
  FUN_100005808(lVar7,&DAT_100fba250,&DAT_100c3a938);
  FUN_100005808(lVar6,&DAT_100fba250,&DAT_100c3a938);
  FUN_100005808(lVar23,&DAT_100fba250,&DAT_100c3a938);
  FUN_100005808(local_2c58,&DAT_100fba250,&DAT_100c3a938);
  _swift_release(local_2c98[1]);
  return;
}



/* Address: 0x100286cb8 | FUN_100286cb8 */

void FUN_100286cb8(String *param_1)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  long extraout_x8;
  String SVar3;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  FUN_1001ccb54(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar3 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  *param_1 = SVar3;
  puVar2 = &DAT_100fba220;
  FUN_1000037f0(&DAT_100fba220,&DAT_100c3a900);
  FUN_100285454((long)&param_1->str + (long)*(int *)(puVar2 + 0x24));
  return;
}



/* Address: 0x100286d4c | FUN_100286d4c */

void FUN_100286d4c(long param_1,Alignment param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  Alignment AVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  undefined8 *puVar11;
  long alStack_750 [2];
  MainActor *local_740;
  undefined1 auStack_738 [248];
  undefined *local_640;
  undefined8 uStack_638;
  undefined *puStack_630;
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
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined *local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
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
  undefined8 local_460;
  undefined *local_450;
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
  undefined *local_360;
  undefined8 uStack_358;
  undefined *local_350;
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
  undefined *local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined *local_160;
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
  undefined8 local_80;
  
  puVar3 = &DAT_100fba2e0;
  alStack_750[1] = param_1;
  FUN_1000037f0(&DAT_100fba2e0,&DAT_100c3a9d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar10 = (long)alStack_750 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = (undefined8 *)(lVar10 - extraout_x12);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar4 = pMVar5;
  FUN_100270a58();
  local_740 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  pMVar5 = pMVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "PasteLicensingAppStore/Trial.swift";
    pMVar5 = (MainActor *)0x22;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x3f,UVar6.unknown,pMVar4);
  }
  AVar8 = SwiftUI::Alignment::get_top((Alignment)pcVar7);
  *puVar11 = AVar8.unknown;
  puVar11[1] = pMVar5;
  puVar3 = &DAT_100fba2e8;
  FUN_1000037f0(&DAT_100fba2e8,&DAT_100c3a9d8);
  uVar9 = param_3;
  FUN_100287250((long)puVar11 + (long)*(int *)(puVar3 + 0x2c));
  AVar8 = SwiftUI::Alignment::get_center(param_2);
  FUN_100289220(&local_170,param_3,param_4,param_5);
  local_460 = local_90;
  uStack_478 = uStack_a8;
  local_480 = local_b0;
  uStack_468 = uStack_98;
  local_470 = local_a0;
  uStack_4b8 = uStack_e8;
  local_4c0 = local_f0;
  uStack_4a8 = uStack_d8;
  local_4b0 = local_e0;
  uStack_498 = uStack_c8;
  local_4a0 = local_d0;
  uStack_488 = uStack_b8;
  local_490 = local_c0;
  uStack_4f8 = uStack_128;
  local_500 = local_130;
  uStack_4e8 = uStack_118;
  local_4f0 = local_120;
  uStack_4d8 = uStack_108;
  local_4e0 = local_110;
  uStack_4c8 = uStack_f8;
  local_4d0 = local_100;
  uStack_538 = uStack_168;
  local_540 = local_170;
  uStack_528 = uStack_158;
  uStack_530 = local_160;
  uStack_518 = uStack_148;
  local_520 = local_150;
  uStack_508 = uStack_138;
  local_510 = local_140;
  uStack_388 = uStack_a8;
  local_390 = local_b0;
  uStack_378 = uStack_98;
  uStack_380 = local_a0;
  local_370 = local_90;
  uStack_3c8 = uStack_e8;
  local_3d0 = local_f0;
  uStack_3b8 = uStack_d8;
  uStack_3c0 = local_e0;
  uStack_3a8 = uStack_c8;
  local_3b0 = local_d0;
  uStack_398 = uStack_b8;
  uStack_3a0 = local_c0;
  uStack_408 = uStack_128;
  local_410 = local_130;
  uStack_3f8 = uStack_118;
  uStack_400 = local_120;
  uStack_3e8 = uStack_108;
  local_3f0 = local_110;
  uStack_3d8 = uStack_f8;
  uStack_3e0 = local_100;
  uStack_448 = uStack_168;
  local_450 = local_170;
  uStack_438 = uStack_158;
  uStack_440 = local_160;
  uStack_428 = uStack_148;
  local_430 = local_150;
  uStack_418 = uStack_138;
  uStack_420 = local_140;
  FUN_100011090(&local_540,&local_268,&DAT_100fba2f0,&DAT_100c3a9e0);
  FUN_100005808(&local_450,&DAT_100fba2f0,&DAT_100c3a9e0);
  uStack_190 = uStack_478;
  local_198 = local_480;
  uStack_180 = uStack_468;
  local_188 = local_470;
  uStack_1d0 = uStack_4b8;
  local_1d8 = local_4c0;
  uStack_1c0 = uStack_4a8;
  local_1c8 = local_4b0;
  uStack_1a0 = uStack_488;
  local_1a8 = local_490;
  uStack_1b0 = uStack_498;
  local_1b8 = local_4a0;
  uStack_210 = uStack_4f8;
  local_218 = local_500;
  uStack_200 = uStack_4e8;
  local_208 = local_4f0;
  uStack_1e0 = uStack_4c8;
  local_1e8 = local_4d0;
  uStack_1f0 = uStack_4d8;
  local_1f8 = local_4e0;
  uStack_250 = uStack_538;
  local_258 = local_540;
  uStack_240 = uStack_528;
  local_248 = uStack_530;
  uStack_220 = uStack_508;
  local_228 = local_510;
  uStack_230 = uStack_518;
  local_238 = local_520;
  uStack_288 = uStack_478;
  local_290 = local_480;
  uStack_278 = uStack_468;
  local_280 = local_470;
  uStack_2c8 = uStack_4b8;
  local_2d0 = local_4c0;
  uStack_2b8 = uStack_4a8;
  local_2c0 = local_4b0;
  uStack_2a8 = uStack_498;
  local_2b0 = local_4a0;
  uStack_298 = uStack_488;
  local_2a0 = local_490;
  uStack_308 = uStack_4f8;
  local_310 = local_500;
  uStack_2f8 = uStack_4e8;
  local_300 = local_4f0;
  uStack_2e8 = uStack_4d8;
  local_2f0 = local_4e0;
  uStack_2d8 = uStack_4c8;
  local_2e0 = local_4d0;
  uStack_348 = uStack_538;
  local_350 = local_540;
  uStack_338 = uStack_528;
  local_340 = uStack_530;
  local_178 = local_460;
  local_270 = local_460;
  uStack_328 = uStack_518;
  local_330 = local_520;
  uStack_318 = uStack_508;
  local_320 = local_510;
  local_360 = AVar8.unknown;
  uStack_358 = uVar9;
  local_268 = AVar8.unknown;
  local_260 = uVar9;
  FUN_100011090(&local_360,&local_170,&DAT_100fba2f8,&DAT_100c3a9e8);
  FUN_100005808(&local_268,&DAT_100fba2f8,&DAT_100c3a9e8);
  FUN_100011090(puVar11,lVar10,&DAT_100fba2e0,&DAT_100c3a9d0);
  lVar2 = alStack_750[1];
  uStack_578 = uStack_298;
  local_580 = local_2a0;
  uStack_568 = uStack_288;
  local_570 = local_290;
  uStack_558 = uStack_278;
  local_560 = local_280;
  local_550 = local_270;
  uStack_5b8 = uStack_2d8;
  local_5c0 = local_2e0;
  uStack_5a8 = uStack_2c8;
  local_5b0 = local_2d0;
  uStack_598 = uStack_2b8;
  local_5a0 = local_2c0;
  uStack_588 = uStack_2a8;
  local_590 = local_2b0;
  uStack_5f8 = uStack_318;
  local_600 = local_320;
  uStack_5e8 = uStack_308;
  local_5f0 = local_310;
  uStack_5d8 = uStack_2f8;
  local_5e0 = local_300;
  uStack_5c8 = uStack_2e8;
  local_5d0 = local_2f0;
  uStack_638 = uStack_358;
  local_640 = local_360;
  uStack_628 = uStack_348;
  puStack_630 = local_350;
  uStack_618 = uStack_338;
  local_620 = local_340;
  uStack_608 = uStack_328;
  local_610 = local_330;
  FUN_100011090(lVar10,alStack_750[1],&DAT_100fba2e0,&DAT_100c3a9d0);
  puVar3 = &DAT_100fba300;
  FUN_1000037f0(&DAT_100fba300,&DAT_100c3a9f0);
  uStack_a8 = uStack_578;
  local_b0 = local_580;
  uStack_98 = uStack_568;
  local_a0 = local_570;
  uStack_88 = uStack_558;
  local_90 = local_560;
  uStack_e8 = uStack_5b8;
  local_f0 = local_5c0;
  uStack_d8 = uStack_5a8;
  local_e0 = local_5b0;
  uStack_c8 = uStack_598;
  local_d0 = local_5a0;
  uStack_b8 = uStack_588;
  local_c0 = local_590;
  uStack_128 = uStack_5f8;
  local_130 = local_600;
  uStack_118 = uStack_5e8;
  local_120 = local_5f0;
  uStack_108 = uStack_5d8;
  local_110 = local_5e0;
  uStack_f8 = uStack_5c8;
  local_100 = local_5d0;
  uStack_138 = uStack_608;
  local_140 = local_610;
  uStack_168 = uStack_638;
  local_170 = local_640;
  uStack_158 = uStack_628;
  local_160 = puStack_630;
  uStack_148 = uStack_618;
  local_150 = local_620;
  puVar1 = (undefined8 *)(lVar2 + *(int *)(puVar3 + 0x30));
  puVar1[0x19] = uStack_578;
  puVar1[0x18] = local_580;
  puVar1[0x1b] = uStack_568;
  puVar1[0x1a] = local_570;
  puVar1[0x1d] = uStack_558;
  puVar1[0x1c] = local_560;
  puVar1[0x11] = uStack_5b8;
  puVar1[0x10] = local_5c0;
  puVar1[0x13] = uStack_5a8;
  puVar1[0x12] = local_5b0;
  puVar1[0x15] = uStack_598;
  puVar1[0x14] = local_5a0;
  puVar1[0x17] = uStack_588;
  puVar1[0x16] = local_590;
  puVar1[9] = uStack_5f8;
  puVar1[8] = local_600;
  puVar1[0xb] = uStack_5e8;
  puVar1[10] = local_5f0;
  puVar1[0xd] = uStack_5d8;
  puVar1[0xc] = local_5e0;
  puVar1[0xf] = uStack_5c8;
  puVar1[0xe] = local_5d0;
  puVar1[1] = uStack_638;
  *puVar1 = local_640;
  puVar1[3] = uStack_628;
  puVar1[2] = puStack_630;
  local_80 = local_550;
  puVar1[0x1e] = local_550;
  puVar1[5] = uStack_618;
  puVar1[4] = local_620;
  puVar1[7] = uStack_608;
  puVar1[6] = local_610;
  FUN_100011090(&local_170,auStack_738,&DAT_100fba2f8,&DAT_100c3a9e8);
  FUN_100005808(puVar11,&DAT_100fba2e0,&DAT_100c3a9d0);
  FUN_100005808(&local_640,&DAT_100fba2f8,&DAT_100c3a9e8);
  FUN_100005808(lVar10,&DAT_100fba2e0,&DAT_100c3a9d0);
  _swift_release(local_740);
  return;
}



/* Address: 0x100287250 | FUN_100287250 */

void FUN_100287250(long param_1,undefined8 param_2,Alignment param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  Alignment width;
  long lVar4;
  BlendMode BVar5;
  undefined *puVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  char *pcVar11;
  Alignment AVar12;
  undefined *puVar13;
  undefined7 extraout_var;
  MainActor *pMVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long alStack_d0 [9];
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = &DAT_100fba368;
  alStack_d0[1] = param_1;
  FUN_1000037f0(&DAT_100fba368,&DAT_100c3aa78);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar15 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = (undefined8 *)(lVar15 - extraout_x12);
  puVar7 = &DAT_100fba370;
  FUN_1000037f0(&DAT_100fba370,&DAT_100c3aa80);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = (undefined8 *)(lVar17 - extraout_x12_00);
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  pMVar8 = pMVar9;
  FUN_100270a58();
  UVar10 = Swift::Actor::get_unownedExecutor();
  pcVar11 = (char *)UVar10;
  pMVar14 = pMVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar11 & 1) == 0) {
    pcVar11 = "PasteLicensingAppStore/Trial.swift";
    pMVar14 = (MainActor *)0x22;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x40,UVar10.unknown,pMVar8);
  }
  AVar12 = SwiftUI::Alignment::get_top((Alignment)pcVar11);
  *puVar18 = AVar12.unknown;
  puVar18[1] = pMVar14;
  puVar13 = &DAT_100fba378;
  FUN_1000037f0(&DAT_100fba378,&DAT_100c3aa88);
  FUN_1002881cc((long)puVar18 + (long)*(int *)(puVar13 + 0x2c));
  SwiftUI::Alignment::get_center(param_3);
  AVar12.unknown = (undefined *)SwiftUI::_FrameLayout::_init((Alignment)0x4020000000000000);
  puVar1 = (undefined8 *)((long)puVar18 + (long)*(int *)(puVar7 + 0x24));
  puVar1[1] = alStack_d0[3];
  *puVar1 = alStack_d0[2];
  puVar1[3] = alStack_d0[5];
  puVar1[2] = alStack_d0[4];
  puVar1[5] = alStack_d0[7];
  puVar1[4] = alStack_d0[6];
  if (DAT_100fba318 != -1) {
    AVar12.unknown = (undefined *)&DAT_100fba318;
    _swift_once(&DAT_100fba318,FUN_1002899b8);
  }
  width.unknown = DAT_100fba320.unknown;
  SwiftUI::Alignment::get_center(AVar12);
  SwiftUI::_FrameLayout::_init(width);
  *puVar16 = alStack_d0[8];
  *(undefined1 *)(puVar16 + 1) = local_88;
  puVar16[2] = local_80;
  *(undefined1 *)(puVar16 + 3) = local_78;
  puVar16[5] = uStack_68;
  puVar16[4] = local_70;
  iVar3 = *(int *)(puVar6 + 0x24);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_BlendMode_destinationOut_SwiftUI_BlendMode_Type___>_SwiftUI_BlendMode_100eabab8
  ;
  BVar5 = SwiftUI::BlendMode::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,BVar5.value) + -8) + 0x68))
            ((long)puVar16 + (long)iVar3,uVar2,CONCAT71(extraout_var,BVar5.value));
  FUN_100011090(puVar18,lVar17,&DAT_100fba370,&DAT_100c3aa80);
  FUN_100011090(puVar16,lVar15,&DAT_100fba368,&DAT_100c3aa78);
  lVar4 = alStack_d0[1];
  FUN_100011090(lVar17,alStack_d0[1],&DAT_100fba370,&DAT_100c3aa80);
  puVar6 = &DAT_100fba380;
  FUN_1000037f0(&DAT_100fba380,&DAT_100c3aa90);
  FUN_100011090(lVar15,lVar4 + *(int *)(puVar6 + 0x30),&DAT_100fba368,&DAT_100c3aa78);
  FUN_100005808(puVar16,&DAT_100fba368,&DAT_100c3aa78);
  FUN_100005808(puVar18,&DAT_100fba370,&DAT_100c3aa80);
  FUN_100005808(lVar15,&DAT_100fba368,&DAT_100c3aa78);
  FUN_100005808(lVar17,&DAT_100fba370,&DAT_100c3aa80);
  _swift_release(pMVar9);
  return;
}



/* Address: 0x100287598 | FUN_100287598 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100287658 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100287598(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,char param_8,
                  undefined *param_9,undefined8 param_10)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  Text TVar5;
  Text TVar6;
  Text TVar7;
  Set SVar8;
  Color CVar9;
  Alignment AVar10;
  undefined *puVar11;
  Text TVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_ce0 [208];
  undefined *local_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined *puStack_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined1 uStack_bd8;
  undefined7 local_bd7;
  undefined1 uStack_bd0;
  undefined8 uStack_bcf;
  undefined *local_bc0;
  undefined *puStack_bb8;
  undefined8 uStack_bb0;
  undefined *puStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined1 uStack_b08;
  undefined7 local_b07;
  undefined1 uStack_b00;
  undefined8 uStack_aff;
  undefined *local_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined *puStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined1 uStack_ab8;
  undefined7 local_ab7;
  undefined1 uStack_ab0;
  undefined8 uStack_aaf;
  undefined *local_aa0;
  undefined *puStack_a98;
  undefined1 local_a90;
  undefined7 uStack_a8f;
  undefined *local_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined *local_a10;
  undefined *local_a08;
  undefined1 local_a00;
  undefined *local_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined *local_980;
  undefined *puStack_978;
  undefined8 uStack_970;
  undefined *puStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined1 uStack_8f8;
  undefined7 uStack_8f7;
  undefined1 local_8f0;
  uint7 uStack_8ef;
  undefined1 local_8e8;
  undefined *local_8e0;
  undefined *puStack_8d8;
  undefined8 local_8d0;
  undefined *puStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined *local_850;
  undefined1 local_848;
  undefined *local_840;
  undefined *puStack_838;
  undefined8 local_830;
  undefined *puStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined1 uStack_7b8;
  undefined2 uStack_7b7;
  undefined5 uStack_7b5;
  undefined1 uStack_7b0;
  undefined2 uStack_7af;
  undefined6 uStack_7ad;
  undefined2 local_7a7;
  undefined *local_7a0;
  undefined *puStack_798;
  undefined8 local_790;
  undefined *puStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
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
  undefined1 uStack_718;
  undefined7 uStack_717;
  undefined1 uStack_710;
  ulong uStack_70f;
  undefined2 local_707;
  undefined *local_700;
  undefined *puStack_6f8;
  undefined8 local_6f0;
  undefined *puStack_6e8;
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
  undefined1 local_660;
  undefined7 uStack_65f;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined1 uStack_648;
  undefined7 uStack_647;
  undefined1 local_640;
  undefined7 uStack_63f;
  undefined1 local_638;
  undefined *local_630;
  undefined *puStack_628;
  undefined8 local_620;
  undefined *puStack_618;
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
  undefined1 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined1 local_568;
  undefined *local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined *puStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 uStack_520;
  undefined8 uStack_51f;
  undefined *local_510;
  undefined *puStack_508;
  undefined8 local_500;
  undefined *puStack_4f8;
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
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined7 local_457;
  undefined1 uStack_450;
  undefined8 uStack_44f;
  undefined *local_440;
  undefined *puStack_438;
  undefined8 local_430;
  undefined *puStack_428;
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
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined8 uStack_37f;
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
  undefined *local_300;
  undefined *puStack_2f8;
  undefined8 local_2f0;
  undefined *puStack_2e8;
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
  undefined *local_270;
  undefined *puStack_268;
  undefined8 local_260;
  undefined *puStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  ulong uStack_1df;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  undefined *puStack_1b8;
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
  undefined8 local_150;
  undefined3 uStack_148;
  undefined5 uStack_145;
  undefined3 local_140;
  undefined5 uStack_13d;
  undefined3 uStack_138;
  undefined5 uStack_135;
  undefined *local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined *puStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  
  puVar16 = param_9;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100270a58();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteLicensingAppStore/Trial.swift";
    puVar16 = (undefined *)0x4d;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x4d,UVar3.unknown,pMVar1);
  }
  local_440 = param_6;
  puStack_438 = (undefined *)param_7;
  FUN_1002538a0();
  _swift_bridgeObjectRetain(param_7);
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar14 = pcVar4;
  TVar5 = SwiftUI::Text::_init(pcVar4,PTR___type_metadata_for_Swift_String_100eac208);
  if (DAT_100fba2a0 != -1) {
    _swift_once(&DAT_100fba2a0,FUN_10028990c);
  }
  TVar12 = TVar5;
  puVar15 = puVar11;
  SVar8.unknown = pcVar14;
  TVar6 = SwiftUI::Text::_font(DAT_100fba2a8);
  FUN_100016d74(TVar5.unknown,puVar11,pcVar14);
  _swift_bridgeObjectRelease(puVar16);
  uVar13 = 0;
  TVar5 = TVar6;
  puVar16 = TVar12.unknown;
  TVar7 = SwiftUI::Text::_strikethrough(param_8 == '\0',(Text)0x0);
  FUN_100016d74(TVar6.unknown,TVar12.unknown,puVar15);
  _swift_bridgeObjectRelease();
  SVar8 = SwiftUI::Edge::Set::get_top(SVar8);
  uVar18 = 0x4010000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  local_120 = SUB81(TVar5.unknown,0);
  local_110 = SUB81(SVar8.unknown,0);
  uStack_f8 = (undefined1)param_4;
  uStack_f7 = (undefined7)((ulong)param_4 >> 8);
  local_f0 = (undefined1)param_5;
  uStack_ef = (undefined7)((ulong)param_5 >> 8);
  local_e8 = 0;
  local_98 = 0;
  CVar9.unknown = &DAT_100c397b0;
  local_130 = TVar7.unknown;
  uStack_128 = uVar13;
  puStack_118 = puVar16;
  uStack_108 = uVar18;
  local_100 = param_3;
  local_e0 = TVar7.unknown;
  uStack_d8 = uVar13;
  local_d0 = local_120;
  local_c8 = puVar16;
  local_c0 = local_110;
  local_b8 = uVar18;
  uStack_b0 = param_3;
  local_a8 = param_4;
  uStack_a0 = param_5;
  FUN_100011090(&local_130,&local_440,&DAT_100fb90e8);
  FUN_100005808(&local_e0,&DAT_100fb90e8,&DAT_100c397b0);
  local_440 = param_9;
  puStack_438 = (undefined *)param_10;
  _swift_bridgeObjectRetain();
  puVar16 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar5 = SwiftUI::Text::_init();
  if (DAT_100fba2b0 != -1) {
    _swift_once(&DAT_100fba2b0,FUN_100289928);
  }
  TVar12 = TVar5;
  puVar11 = puVar16;
  AVar10.unknown = pcVar4;
  TVar6 = SwiftUI::Text::_font(DAT_100fba2b8);
  FUN_100016d74(TVar5.unknown,puVar16,pcVar4);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_secondary(CVar9);
  TVar5 = TVar6;
  puVar15 = TVar12.unknown;
  puVar17 = puVar11;
  TVar7 = SwiftUI::Text::_foregroundColor(CVar9.unknown);
  _swift_release(CVar9.unknown);
  FUN_100016d74(TVar6.unknown,TVar12.unknown,puVar11);
  _swift_bridgeObjectRelease();
  SwiftUI::Alignment::get_leading(AVar10);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_a38 = uStack_328;
  local_a40 = local_330;
  uStack_a28 = uStack_318;
  uStack_a30 = local_320;
  uStack_a18 = uStack_308;
  local_a20 = local_310;
  uStack_a78 = uStack_368;
  local_a80 = local_370;
  uStack_a68 = uStack_358;
  uStack_a70 = local_360;
  uStack_a58 = uStack_348;
  local_a60 = local_350;
  uStack_a48 = uStack_338;
  uStack_a50 = local_340;
  puVar16 = &DAT_100c3a980;
  local_aa0 = TVar7.unknown;
  puStack_a98 = TVar5.unknown;
  local_a90 = (char)puVar15;
  local_a88 = puVar17;
  _swift_getKeyPath();
  uStack_298 = uStack_a38;
  local_2a0 = local_a40;
  uStack_288 = uStack_a28;
  local_290 = uStack_a30;
  uStack_278 = uStack_a18;
  local_280 = local_a20;
  uStack_2d8 = uStack_a78;
  local_2e0 = local_a80;
  uStack_2c8 = uStack_a68;
  local_2d0 = uStack_a70;
  uStack_2a8 = uStack_a48;
  local_2b0 = uStack_a50;
  uStack_2b8 = uStack_a58;
  local_2c0 = local_a60;
  local_2f0 = CONCAT71(uStack_a8f,local_a90);
  puStack_2e8 = local_a88;
  puStack_2f8 = puStack_a98;
  local_300 = local_aa0;
  uStack_9a8 = uStack_328;
  local_9b0 = local_330;
  uStack_998 = uStack_318;
  uStack_9a0 = local_320;
  uStack_988 = uStack_308;
  local_990 = local_310;
  uStack_9e8 = uStack_368;
  local_9f0 = local_370;
  uStack_9d8 = uStack_358;
  uStack_9e0 = local_360;
  uStack_9c8 = uStack_348;
  local_9d0 = local_350;
  uStack_9b8 = uStack_338;
  uStack_9c0 = local_340;
  local_a10 = TVar7.unknown;
  local_a08 = TVar5.unknown;
  local_a00 = (char)puVar15;
  local_9f8 = puVar17;
  FUN_100011090(&local_aa0,&local_440,&DAT_100fba2c0,&DAT_100c3a9b0);
  FUN_100005808(&local_a10,&DAT_100fba2c0,&DAT_100c3a9b0);
  uStack_918 = uStack_298;
  local_920 = local_2a0;
  uStack_908 = uStack_288;
  local_910 = local_290;
  uStack_8f8 = (undefined1)uStack_278;
  uStack_8f7 = (undefined7)((ulong)uStack_278 >> 8);
  local_900 = local_280;
  uStack_958 = uStack_2d8;
  local_960 = local_2e0;
  uStack_948 = uStack_2c8;
  local_950 = local_2d0;
  uStack_938 = uStack_2b8;
  local_940 = local_2c0;
  uStack_928 = uStack_2a8;
  uStack_930 = local_2b0;
  puStack_978 = puStack_2f8;
  local_980 = local_300;
  puStack_968 = puStack_2e8;
  uStack_970 = local_2f0;
  uStack_208 = uStack_298;
  local_210 = local_2a0;
  uStack_1f8 = uStack_288;
  local_200 = local_290;
  local_1f0 = local_280;
  uStack_248 = uStack_2d8;
  local_250 = local_2e0;
  uStack_238 = uStack_2c8;
  local_240 = local_2d0;
  uStack_218 = uStack_2a8;
  local_220 = local_2b0;
  uStack_228 = uStack_2b8;
  local_230 = local_2c0;
  local_8f0 = SUB81(puVar16,0);
  uStack_8ef = (uint7)((ulong)puVar16 >> 8);
  local_8e8 = 0;
  puStack_258 = puStack_2e8;
  local_260 = local_2f0;
  puStack_268 = puStack_2f8;
  local_270 = local_300;
  uStack_1df = (ulong)uStack_8ef;
  uStack_1e7 = uStack_8f7;
  uStack_1e0 = local_8f0;
  uStack_878 = uStack_298;
  local_880 = local_2a0;
  uStack_868 = uStack_288;
  local_870 = local_290;
  uStack_858 = uStack_278;
  local_860 = local_280;
  uStack_8b8 = uStack_2d8;
  local_8c0 = local_2e0;
  uStack_8a8 = uStack_2c8;
  local_8b0 = local_2d0;
  uStack_888 = uStack_2a8;
  local_890 = local_2b0;
  uStack_898 = uStack_2b8;
  local_8a0 = local_2c0;
  puStack_8c8 = puStack_2e8;
  local_8d0 = local_2f0;
  puStack_8d8 = puStack_2f8;
  local_8e0 = local_300;
  local_848 = 0;
  uVar18 = local_280;
  uVar20 = local_290;
  local_850 = puVar16;
  uStack_1e8 = uStack_8f8;
  FUN_100011090(&local_980,&local_440,&DAT_100fba2c8,&DAT_100c3bc90);
  SVar8.unknown = (undefined *)&local_8e0;
  FUN_100005808(SVar8.unknown,&DAT_100fba2c8,&DAT_100c3bc90);
  SVar8 = SwiftUI::Edge::Set::get_bottom(SVar8);
  uStack_7d8 = uStack_208;
  local_7e0 = local_210;
  uStack_7c8 = uStack_1f8;
  local_7d0 = local_200;
  uStack_7b8 = uStack_1e8;
  local_7c0 = local_1f0;
  uStack_7af = (undefined2)uStack_1df;
  uStack_7ad = (undefined6)(uStack_1df >> 0x10);
  uStack_7b7 = (undefined2)uStack_1e7;
  uStack_7b5 = (undefined5)((uint7)uStack_1e7 >> 0x10);
  uStack_7b0 = uStack_1e0;
  uStack_818 = uStack_248;
  local_820 = local_250;
  uStack_808 = uStack_238;
  local_810 = local_240;
  uStack_7f8 = uStack_228;
  local_800 = local_230;
  uStack_7e8 = uStack_218;
  local_7f0 = local_220;
  puStack_838 = puStack_268;
  local_840 = local_270;
  puStack_828 = puStack_258;
  local_830 = local_260;
  local_7a7 = 0x100;
  uVar19 = 0x4034000000000000;
  uVar13 = local_260;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  uStack_168 = uStack_7d8;
  local_170 = local_7e0;
  uStack_158 = uStack_7c8;
  local_160 = local_7d0;
  uStack_148 = CONCAT21(uStack_7b7,uStack_7b8);
  local_150 = local_7c0;
  uStack_13d = (undefined5)uStack_7ad;
  uStack_138 = (undefined3)(CONCAT26(local_7a7,uStack_7ad) >> 0x28);
  uStack_145 = uStack_7b5;
  local_140 = (undefined3)(CONCAT26(uStack_7af,CONCAT15(uStack_7b0,uStack_7b5)) >> 0x28);
  uStack_1a8 = uStack_818;
  local_1b0 = local_820;
  uStack_198 = uStack_808;
  local_1a0 = local_810;
  uStack_188 = uStack_7f8;
  local_190 = local_800;
  uStack_178 = uStack_7e8;
  local_180 = local_7f0;
  puStack_1c8 = puStack_838;
  local_1d0 = local_840;
  puStack_1b8 = puStack_828;
  local_1c0 = local_830;
  uStack_738 = uStack_208;
  local_740 = local_210;
  uStack_728 = uStack_1f8;
  local_730 = local_200;
  uStack_718 = uStack_1e8;
  local_720 = local_1f0;
  uStack_70f = uStack_1df;
  uStack_717 = uStack_1e7;
  uStack_710 = uStack_1e0;
  uStack_778 = uStack_248;
  local_780 = local_250;
  uStack_768 = uStack_238;
  local_770 = local_240;
  uStack_758 = uStack_228;
  local_760 = local_230;
  uStack_748 = uStack_218;
  local_750 = local_220;
  puStack_798 = puStack_268;
  local_7a0 = local_270;
  puStack_788 = puStack_258;
  local_790 = local_260;
  local_707 = 0x100;
  FUN_100011090(&local_840,&local_440,&DAT_100fba2d0,&DAT_100c3a9c0);
  FUN_100005808(&local_7a0,&DAT_100fba2d0,&DAT_100c3a9c0);
  uStack_698 = uStack_168;
  local_6a0 = local_170;
  uStack_688 = uStack_158;
  local_690 = local_160;
  uStack_678 = CONCAT53(uStack_145,uStack_148);
  uStack_5a8 = CONCAT53(uStack_145,uStack_148);
  uStack_668 = CONCAT53(uStack_135,uStack_138);
  local_670 = CONCAT53(uStack_13d,local_140);
  uStack_598 = CONCAT53(uStack_135,uStack_138);
  local_5a0 = CONCAT53(uStack_13d,local_140);
  local_680 = local_150;
  uStack_6d8 = uStack_1a8;
  local_6e0 = local_1b0;
  uStack_6c8 = uStack_198;
  local_6d0 = local_1a0;
  uStack_6b8 = uStack_188;
  local_6c0 = local_190;
  uStack_6a8 = uStack_178;
  local_6b0 = local_180;
  puStack_6f8 = puStack_1c8;
  local_700 = local_1d0;
  puStack_6e8 = puStack_1b8;
  local_6f0 = local_1c0;
  uStack_5c8 = uStack_168;
  local_5d0 = local_170;
  uStack_5b8 = uStack_158;
  local_5c0 = local_160;
  local_5b0 = local_150;
  uStack_608 = uStack_1a8;
  local_610 = local_1b0;
  uStack_5f8 = uStack_198;
  local_600 = local_1a0;
  uStack_5e8 = uStack_188;
  local_5f0 = local_190;
  uStack_5d8 = uStack_178;
  local_5e0 = local_180;
  local_660 = SUB81(SVar8.unknown,0);
  uStack_648 = (undefined1)uVar18;
  uStack_647 = (undefined7)((ulong)uVar18 >> 8);
  local_640 = (undefined1)uVar20;
  uStack_63f = (undefined7)((ulong)uVar20 >> 8);
  local_638 = 0;
  puStack_628 = puStack_1c8;
  local_630 = local_1d0;
  puStack_618 = puStack_1b8;
  local_620 = local_1c0;
  local_568 = 0;
  uStack_658 = uVar19;
  local_650 = uVar13;
  local_590 = local_660;
  local_588 = uVar19;
  local_580 = uVar13;
  local_578 = uVar18;
  local_570 = uVar20;
  FUN_100011090(&local_700,&local_440,&DAT_100fba2d8,&DAT_100c3a9c8);
  FUN_100005808(&local_630,&DAT_100fba2d8,&DAT_100c3a9c8);
  local_ad0 = CONCAT71(uStack_10f,local_110);
  local_bf0 = CONCAT71(uStack_10f,local_110);
  uStack_ac8 = uStack_108;
  uStack_ab8 = uStack_f8;
  uStack_ac0 = local_100;
  uStack_aaf = CONCAT17(local_e8,uStack_ef);
  local_ab7 = uStack_f7;
  uStack_ab0 = local_f0;
  uStack_ae0 = CONCAT71(uStack_11f,local_120);
  uStack_c00 = CONCAT71(uStack_11f,local_120);
  uStack_ae8 = uStack_128;
  local_af0 = local_130;
  puStack_ad8 = puStack_118;
  local_3a0 = CONCAT71(uStack_65f,local_660);
  local_470 = CONCAT71(uStack_65f,local_660);
  local_b20 = CONCAT71(uStack_65f,local_660);
  uStack_398 = uStack_658;
  uStack_388 = uStack_648;
  local_390 = local_650;
  uStack_37f = CONCAT17(local_638,uStack_63f);
  uStack_387 = uStack_647;
  uStack_380 = local_640;
  uStack_3d8 = uStack_698;
  local_3e0 = local_6a0;
  uStack_3c8 = uStack_688;
  local_3d0 = local_690;
  uStack_3a8 = uStack_668;
  local_3b0 = local_670;
  uStack_3b8 = uStack_678;
  local_3c0 = local_680;
  uStack_418 = uStack_6d8;
  local_420 = local_6e0;
  uStack_408 = uStack_6c8;
  local_410 = local_6d0;
  uStack_3e8 = uStack_6a8;
  local_3f0 = local_6b0;
  uStack_3f8 = uStack_6b8;
  local_400 = local_6c0;
  puStack_428 = puStack_6e8;
  local_430 = local_6f0;
  puStack_438 = puStack_6f8;
  local_440 = local_700;
  uStack_538 = uStack_108;
  uStack_528 = uStack_f8;
  local_530 = local_100;
  uStack_be8 = uStack_108;
  uStack_bd8 = uStack_f8;
  uStack_be0 = local_100;
  uStack_bcf = CONCAT17(local_e8,uStack_ef);
  uStack_527 = uStack_f7;
  uStack_520 = local_f0;
  local_bd7 = uStack_f7;
  uStack_bd0 = local_f0;
  puStack_548 = puStack_118;
  uStack_558 = uStack_128;
  local_560 = local_130;
  uStack_c08 = uStack_128;
  local_c10 = local_130;
  puStack_bf8 = puStack_118;
  uStack_4d8 = uStack_6c8;
  local_4e0 = local_6d0;
  uStack_4e8 = uStack_6d8;
  local_4f0 = local_6e0;
  puStack_508 = puStack_6f8;
  local_510 = local_700;
  puStack_4f8 = puStack_6e8;
  local_500 = local_6f0;
  uStack_498 = uStack_688;
  local_4a0 = local_690;
  uStack_4a8 = uStack_698;
  local_4b0 = local_6a0;
  uStack_4c8 = uStack_6b8;
  local_4d0 = local_6c0;
  uStack_4b8 = uStack_6a8;
  local_4c0 = local_6b0;
  uStack_44f = CONCAT17(local_638,uStack_63f);
  uStack_450 = local_640;
  uStack_458 = uStack_648;
  local_457 = uStack_647;
  uStack_460 = local_650;
  uStack_468 = uStack_658;
  uStack_488 = uStack_678;
  local_490 = local_680;
  uStack_478 = uStack_668;
  local_480 = local_670;
  uStack_aff = CONCAT17(local_638,uStack_63f);
  uStack_b00 = local_640;
  uStack_b18 = uStack_658;
  uStack_b08 = uStack_648;
  local_b07 = uStack_647;
  uStack_b10 = local_650;
  uStack_b58 = uStack_698;
  local_b60 = local_6a0;
  uStack_b48 = uStack_688;
  uStack_b50 = local_690;
  uStack_b38 = uStack_678;
  local_b40 = local_680;
  uStack_b28 = uStack_668;
  uStack_b30 = local_670;
  uStack_b98 = uStack_6d8;
  local_ba0 = local_6e0;
  uStack_b88 = uStack_6c8;
  uStack_b90 = local_6d0;
  uStack_b78 = uStack_6b8;
  local_b80 = local_6c0;
  uStack_b68 = uStack_6a8;
  uStack_b70 = local_6b0;
  puStack_bb8 = puStack_6f8;
  local_bc0 = local_700;
  puStack_ba8 = puStack_6e8;
  uStack_bb0 = local_6f0;
  local_550 = uStack_c00;
  local_540 = local_bf0;
  uStack_51f = uStack_bcf;
  _memcpy(param_1,&local_c10,0x119);
  FUN_100011090(&local_560,auStack_ce0,&DAT_100fb90e8,&DAT_100c397b0);
  FUN_100011090(&local_510,auStack_ce0,&DAT_100fba2d8,&DAT_100c3a9c8);
  FUN_100005808(&local_440,&DAT_100fba2d8,&DAT_100c3a9c8);
  FUN_100005808(&local_af0,&DAT_100fb90e8,&DAT_100c397b0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100287f6c | FUN_100287f6c */

void FUN_100287f6c(undefined8 *param_1,double param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  RoundedCornerStyle RVar5;
  BlendMode BVar6;
  RoundedRectangle RVar7;
  undefined7 extraout_var;
  Color CVar8;
  Color CVar9;
  Color CVar10;
  Gradient gradient;
  UnitPoint UVar11;
  undefined *puVar12;
  undefined7 extraout_var_00;
  Alignment AVar13;
  Set SVar14;
  Set SVar15;
  UnitPoint startPoint;
  UnitPoint endPoint;
  undefined8 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar4 = *(int *)(RVar7.unknown + 0x14);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar5.value) + -8) + 0x68))
            ((long)param_1 + (long)iVar4,uVar3,CONCAT71(extraout_var,RVar5.value));
  auVar18 = NEON_fmov(0x4000000000000000,8);
  param_1[1] = auVar18._8_8_;
  *param_1 = auVar18._0_8_;
  CVar8.unknown = &DAT_100fba3e0;
  FUN_1000037f0(&DAT_100fba3e0,&DAT_100c3aaf0);
  startPoint.unknown = &DAT_00000030;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar8.unknown + 0x18) = 4;
  *(undefined8 *)(CVar8.unknown + 0x10) = 2;
  CVar9 = SwiftUI::Color::get_black(CVar8);
  CVar10 = SwiftUI::Color::opacity(param_2,CVar9);
  uVar16 = _swift_release();
  *(undefined **)(CVar8.unknown + 0x20) = CVar10.unknown;
  CVar10 = SwiftUI::Color::get_clear(CVar9);
  *(undefined **)(CVar8.unknown + 0x28) = CVar10.unknown;
  gradient = SwiftUI::Gradient::init();
  UVar11 = SwiftUI::UnitPoint::get_top(gradient.unknown);
  SwiftUI::UnitPoint::get_bottom(UVar11);
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  puVar12 = &DAT_100fba448;
  FUN_1000037f0(&DAT_100fba448,&DAT_100c3ab28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar12 + 0x34));
  puVar1[1] = uStack_a0;
  *puVar1 = local_a8;
  puVar1[3] = uStack_90;
  puVar1[2] = local_98;
  puVar1[4] = local_88;
  *(undefined2 *)((long)param_1 + (long)*(int *)(puVar12 + 0x38)) = 0x100;
  puVar12 = &DAT_100fba450;
  FUN_1000037f0(&DAT_100fba450,&DAT_100c3ab30);
  iVar4 = *(int *)(puVar12 + 0x24);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_BlendMode_multiply_SwiftUI_BlendMode_Type___>_SwiftUI_BlendMode_100eabac0
  ;
  BVar6 = SwiftUI::BlendMode::typeMetadataAccessor();
  AVar13.unknown = (undefined *)((long)param_1 + (long)iVar4);
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,BVar6.value) + -8) + 0x68))
            (AVar13.unknown,uVar3,CONCAT71(extraout_var_00,BVar6.value));
  SwiftUI::Alignment::get_center(AVar13);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  SVar14.unknown = &DAT_100fba458;
  FUN_1000037f0(&DAT_100fba458,&DAT_100c3ab38);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(SVar14.unknown + 0x24));
  puVar1[1] = uStack_78;
  *puVar1 = local_80;
  puVar1[3] = uStack_68;
  puVar1[2] = uStack_70;
  puVar1[5] = uStack_58;
  puVar1[4] = local_60;
  SVar15 = SwiftUI::Edge::Set::get_top(SVar14);
  SVar14 = SVar15;
  if (DAT_100fba318 != -1) {
    SVar14.unknown = (undefined *)&DAT_100fba318;
    _swift_once(&DAT_100fba318,FUN_1002899b8);
  }
  uVar19 = 0xc024000000000000;
  dVar17 = DAT_100fba320 + -10.0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
  puVar12 = &DAT_100fba3d8;
  FUN_1000037f0(&DAT_100fba3d8,&DAT_100c3aae8);
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar12 + 0x24));
  *puVar2 = (char)SVar15.unknown;
  *(double *)(puVar2 + 8) = dVar17;
  *(undefined8 *)(puVar2 + 0x10) = uVar19;
  *(undefined8 *)(puVar2 + 0x18) = uVar16;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  puVar2[0x28] = 0;
  return;
}



/* Address: 0x1002881cc | FUN_1002881cc */

void FUN_1002881cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  RoundedCornerStyle RVar11;
  undefined *puVar12;
  MainActor *pMVar13;
  MainActor *pMVar14;
  UnownedSerialExecutor UVar15;
  UnownedSerialExecutor UVar16;
  Set SVar17;
  Alignment AVar18;
  RoundedRectangle RVar19;
  undefined7 extraout_var;
  undefined *puVar20;
  Alignment AVar21;
  Color CVar22;
  Gradient gradient;
  UnitPoint UVar23;
  undefined8 *puVar24;
  UnitPoint startPoint;
  UnitPoint endPoint;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *puVar25;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar26;
  long extraout_x12;
  long extraout_x12_00;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined *apuStack_2c0 [2];
  long local_2b0;
  undefined *local_2a8 [2];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined *local_288 [3];
  long local_270;
  long local_268;
  undefined *local_260;
  undefined *local_258;
  undefined *local_250;
  long local_248;
  MainActor *local_240;
  undefined *local_238;
  undefined8 local_230;
  long local_228;
  undefined1 auStack_220 [64];
  undefined6 local_1e0;
  undefined2 uStack_1da;
  undefined6 uStack_1d8;
  undefined2 uStack_1d2;
  undefined6 uStack_1d0;
  undefined2 uStack_1ca;
  undefined6 uStack_1c8;
  undefined2 uStack_1c2;
  undefined6 local_1c0;
  undefined2 uStack_1ba;
  undefined1 uStack_1b8;
  undefined5 uStack_1b7;
  undefined2 uStack_1b2;
  undefined1 uStack_1b0;
  undefined5 uStack_1af;
  undefined2 uStack_1aa;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined *local_160;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined6 uStack_126;
  undefined *local_120;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 local_100;
  undefined6 uStack_fe;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined6 uStack_f6;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined6 uStack_ee;
  undefined1 local_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar12 = &DAT_100fba388;
  local_230 = param_1;
  FUN_1000037f0(&DAT_100fba388,&DAT_100c3aa98);
  local_290 = (undefined1  [8])puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar24 = (undefined8 *)((long)apuStack_2c0 + lVar3);
  puVar12 = &DAT_100fba390;
  FUN_1000037f0(&DAT_100fba390,&DAT_100c3aaa0);
  local_2a8[1] = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar27 = (long)puVar24 - extraout_x8_00;
  puVar12 = &DAT_100fba398;
  FUN_1000037f0(&DAT_100fba398,&DAT_100c3aaa8);
  local_238 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_100fba3a0;
  local_288[0] = (undefined *)(lVar27 - extraout_x8_01);
  FUN_1000037f0(&DAT_100fba3a0,&DAT_100c3aab0);
  local_298 = (undefined1  [8])puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar28 = (undefined8 *)((undefined *)(lVar27 - extraout_x8_01) + -extraout_x8_02);
  puVar12 = &DAT_100fba3a8;
  FUN_1000037f0(&DAT_100fba3a8,&DAT_100c3aab8);
  local_260 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar29 = (undefined8 *)((long)puVar28 - extraout_x8_03);
  puVar12 = &DAT_100fba3b0;
  FUN_1000037f0(&DAT_100fba3b0,&DAT_100c3aac0);
  apuStack_2c0[1] = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar26 = (long)puVar29 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_2b0 = lVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar25 = (undefined8 *)(lVar26 - extraout_x12);
  puVar12 = &DAT_100fba3b8;
  local_2a8[0] = (undefined *)puVar25;
  FUN_1000037f0(&DAT_100fba3b8,&DAT_100c3aac8);
  local_258 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = (long)puVar25 - extraout_x8_05;
  puVar12 = &DAT_100fba3c0;
  local_248 = lVar26;
  FUN_1000037f0(&DAT_100fba3c0,&DAT_100c3aad0);
  local_288[1] = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_06;
  puVar12 = &DAT_100fba3c8;
  local_270 = lVar26;
  FUN_1000037f0(&DAT_100fba3c8,&DAT_100c3aad8);
  local_250 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_07;
  puVar12 = &DAT_100fba3d0;
  local_268 = lVar26;
  FUN_1000037f0(&DAT_100fba3d0,&DAT_100c3aae0);
  local_288[2] = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = (undefined8 *)(lVar26 - extraout_x8_08);
  puVar12 = &DAT_100fba3d8;
  FUN_1000037f0(&DAT_100fba3d8,&DAT_100c3aae8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar26 = (long)puVar25 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_228 = lVar26 - extraout_x12_00;
  pMVar13 = Swift::MainActor::typeMetadataAccessor();
  pMVar14 = Swift::MainActor::get_shared(pMVar13,pMVar13);
  pMVar13 = pMVar14;
  FUN_100270a58();
  local_240 = pMVar14;
  UVar15 = Swift::Actor::get_unownedExecutor();
  UVar16 = UVar15;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar16.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x6d,UVar15.unknown,pMVar13);
  }
  if (param_6 < 2) {
    if (param_6 == 0) {
      if (DAT_100fba348 != -1) {
        _swift_once(&DAT_100fba348,FUN_1002899f8);
      }
      puVar12 = DAT_100fba350;
      SVar17.unknown = DAT_100fba350;
      _swift_retain();
      SVar17 = SwiftUI::Edge::Set::get_top(SVar17);
      uVar30 = 0x4000000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
      local_1a0 = puVar12;
      uStack_198 = CONCAT62(uStack_198._2_6_,0x100);
      uStack_150 = SUB81(SVar17.unknown,0);
      local_190 = CONCAT71(local_190._1_7_,uStack_150);
      uStack_178 = (undefined1)param_4;
      uStack_177 = (undefined7)((ulong)param_4 >> 8);
      uStack_170 = (undefined1)param_5;
      uStack_16f = (undefined7)((ulong)param_5 >> 8);
      local_168 = 0;
      local_160 = puVar12;
      uStack_158 = 0x100;
      uStack_148 = (undefined2)uVar30;
      uStack_146 = (undefined6)((ulong)uVar30 >> 0x10);
      uStack_140 = (undefined2)param_3;
      uStack_13e = (undefined6)((ulong)param_3 >> 0x10);
      uStack_138 = (undefined2)param_4;
      uStack_136 = (undefined6)((ulong)param_4 >> 0x10);
      uStack_130 = (undefined2)param_5;
      uStack_12e = (undefined6)((ulong)param_5 >> 0x10);
      uStack_128 = 0;
      local_188 = uVar30;
      local_180 = param_3;
      FUN_100011090(&local_1a0,&local_120,&DAT_100fba438,&DAT_100c3ab18);
      FUN_100005808(&local_160,&DAT_100fba438,&DAT_100c3ab18);
      lVar27 = local_228;
      FUN_100287f6c(local_228,0x3fe0000000000000);
      uStack_1d8 = (undefined6)uStack_198;
      uStack_1d2 = (undefined2)((ulong)uStack_198 >> 0x30);
      local_1e0 = SUB86(local_1a0,0);
      uStack_1da = (undefined2)((ulong)local_1a0 >> 0x30);
      uStack_1c8 = (undefined6)local_188;
      uStack_1c2 = (undefined2)((ulong)local_188 >> 0x30);
      uStack_1d0 = (undefined6)local_190;
      uStack_1ca = (undefined2)((ulong)local_190 >> 0x30);
      uStack_1b8 = uStack_178;
      local_1c0 = (undefined6)local_180;
      uStack_1ba = (undefined2)((ulong)local_180 >> 0x30);
      uStack_1af = (undefined5)uStack_16f;
      uStack_1aa = (undefined2)((uint7)uStack_16f >> 0x28);
      uStack_1a8 = local_168;
      uStack_1b7 = (undefined5)uStack_177;
      uStack_1b2 = (undefined2)((uint7)uStack_177 >> 0x28);
      uStack_1b0 = uStack_170;
      FUN_100011090(lVar27,lVar26,&DAT_100fba3d8,&DAT_100c3aae8);
      puVar12 = (undefined *)CONCAT26(uStack_1da,local_1e0);
      uVar4 = CONCAT26(uStack_1c2,uStack_1c8);
      uVar30 = CONCAT26(uStack_1ca,uStack_1d0);
      uStack_118 = (undefined2)uStack_1d8;
      uStack_116 = (undefined6)(CONCAT26(uStack_1d2,uStack_1d8) >> 0x10);
      uStack_108 = (undefined2)uStack_1c8;
      uStack_106 = (undefined6)((ulong)uVar4 >> 0x10);
      uStack_110 = (undefined2)uStack_1d0;
      uStack_10e = (undefined6)((ulong)uVar30 >> 0x10);
      uVar6 = CONCAT26(uStack_1b2,CONCAT51(uStack_1b7,uStack_1b8));
      uVar5 = CONCAT26(uStack_1ba,local_1c0);
      uStack_f8 = uStack_1b8;
      local_100 = (undefined2)local_1c0;
      uStack_fe = (undefined6)((ulong)uVar5 >> 0x10);
      uVar8 = CONCAT17(uStack_1a8,CONCAT25(uStack_1aa,uStack_1af));
      uVar7 = CONCAT17(uStack_1b0,CONCAT25(uStack_1b2,uStack_1b7));
      uStack_ef = (undefined1)uStack_1af;
      uStack_ee = (undefined6)(CONCAT25(uStack_1aa,uStack_1af) >> 8);
      local_e8 = uStack_1a8;
      uStack_f7 = (undefined1)uStack_1b7;
      uStack_f6 = (undefined6)(CONCAT25(uStack_1b2,uStack_1b7) >> 8);
      uStack_f0 = uStack_1b0;
      local_120 = puVar12;
      puVar25[1] = CONCAT26(uStack_1d2,uStack_1d8);
      *puVar25 = puVar12;
      puVar25[3] = uVar4;
      puVar25[2] = uVar30;
      puVar25[5] = uVar6;
      puVar25[4] = uVar5;
      *(undefined8 *)((long)puVar25 + 0x31) = uVar8;
      *(undefined8 *)((long)puVar25 + 0x29) = uVar7;
      puVar12 = &DAT_100fba440;
      FUN_1000037f0(&DAT_100fba440,&DAT_100c3ab20);
      FUN_100011090(lVar26,(long)puVar25 + (long)*(int *)(puVar12 + 0x30),&DAT_100fba3d8,
                    &DAT_100c3aae8);
      FUN_100011090(&local_1a0,auStack_220,&DAT_100fba438,&DAT_100c3ab18);
      FUN_100011090(&local_120,auStack_220,&DAT_100fba438,&DAT_100c3ab18);
      FUN_100005808(lVar26,&DAT_100fba3d8,&DAT_100c3aae8);
      FUN_100005808(&local_1e0,&DAT_100fba438,&DAT_100c3ab18);
      lVar3 = local_270;
      FUN_100011090(puVar25,local_270,&DAT_100fba3d0,&DAT_100c3aae0);
      _swift_storeEnumTagMultiPayload(lVar3,local_288[1],0);
      puVar12 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
      FUN_100016eac(&DAT_100fba408,&DAT_100fba3d0,&DAT_100c3aae0,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      FUN_100016eac(&DAT_100fba410,&DAT_100fba3a8,&DAT_100c3aab8,puVar12);
      lVar26 = local_268;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar3);
      lVar3 = local_248;
      FUN_100011090(lVar26,local_248,&DAT_100fba3c8,&DAT_100c3aad8);
      _swift_storeEnumTagMultiPayload(lVar3,local_258,0);
      FUN_100289a60();
      FUN_100289b20();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar3);
      FUN_100005808(&local_1a0,&DAT_100fba438,&DAT_100c3ab18);
      FUN_100005808(lVar26,&DAT_100fba3c8,&DAT_100c3aad8);
      FUN_100005808(lVar27,&DAT_100fba3d8,&DAT_100c3aae8);
      puVar12 = &DAT_100fba3d0;
      puVar20 = &DAT_100c3aae0;
      puVar24 = puVar25;
    }
    else {
      if (DAT_100fba328 != -1) {
        _swift_once(&DAT_100fba328,FUN_100289a20);
      }
      lVar3 = DAT_100fba348;
      local_288[0] = DAT_100fba330;
      _swift_retain();
      puVar12 = local_2a8[0];
      if (lVar3 != -1) {
        _swift_once(&DAT_100fba348,FUN_1002899f8);
      }
      AVar21.unknown = DAT_100fba350;
      AVar18.unknown = DAT_100fba350;
      _swift_retain();
      SwiftUI::Alignment::get_center(AVar18);
      SwiftUI::_FrameLayout::_init((Alignment)0x0);
      uStack_1d2 = (undefined2)uStack_d8;
      uStack_1d0 = (undefined6)((ulong)uStack_d8 >> 0x10);
      uStack_1da = (undefined2)local_e0;
      uStack_1d8 = (undefined6)((ulong)local_e0 >> 0x10);
      uStack_1c2 = (undefined2)uStack_c8;
      local_1c0 = (undefined6)((ulong)uStack_c8 >> 0x10);
      uStack_1ca = (undefined2)uStack_d0;
      uStack_1c8 = (undefined6)((ulong)uStack_d0 >> 0x10);
      uStack_1b2 = (undefined2)uStack_b8;
      uStack_1b0 = (undefined1)((ulong)uStack_b8 >> 0x10);
      uStack_1af = (undefined5)((ulong)uStack_b8 >> 0x18);
      uStack_1ba = (undefined2)local_c0;
      uStack_1b8 = (undefined1)((ulong)local_c0 >> 0x10);
      uStack_1b7 = (undefined5)((ulong)local_c0 >> 0x18);
      uStack_14e = uStack_1d8;
      uStack_148 = uStack_1d2;
      uStack_156 = local_1e0;
      uStack_150 = (undefined1)local_e0;
      uStack_14f = (undefined1)((ulong)local_e0 >> 8);
      uStack_13e = uStack_1c8;
      uStack_138 = uStack_1c2;
      uStack_146 = uStack_1d0;
      uStack_140 = uStack_1ca;
      uStack_12e = (undefined6)((ulong)local_c0 >> 0x10);
      uStack_136 = local_1c0;
      uStack_130 = uStack_1ba;
      local_160 = AVar21.unknown;
      uStack_158 = 0x100;
      uStack_128 = (undefined1)uStack_b8;
      uStack_127 = (undefined1)((ulong)uStack_b8 >> 8);
      uStack_126 = (undefined6)((ulong)uStack_b8 >> 0x10);
      local_120 = AVar21.unknown;
      uStack_118 = 0x100;
      uStack_f6 = local_1c0;
      uStack_f0 = (undefined1)local_c0;
      uStack_ef = (undefined1)((ulong)local_c0 >> 8);
      uStack_fe = uStack_1c8;
      uStack_f8 = (undefined1)uStack_c8;
      uStack_f7 = (undefined1)((ulong)uStack_c8 >> 8);
      uStack_106 = uStack_1d0;
      local_100 = uStack_1ca;
      uStack_10e = uStack_1d8;
      uStack_108 = uStack_1d2;
      uStack_116 = local_1e0;
      uStack_110 = uStack_1da;
      uStack_ee = uStack_12e;
      local_e8 = uStack_128;
      uStack_e7 = uStack_127;
      uStack_e6 = uStack_126;
      FUN_100011090(&local_160,&local_1a0,&DAT_100fba428,&DAT_100c3ab08);
      FUN_100005808(&local_120,&DAT_100fba428,&DAT_100c3ab08);
      RVar19 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
      iVar2 = *(int *)(RVar19.unknown + 0x14);
      uVar1 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
      ;
      RVar11 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,RVar11.value) + -8) + 0x68))
                ((long)puVar12 + (long)iVar2,uVar1,CONCAT71(extraout_var,RVar11.value));
      auVar31 = NEON_fmov(0x4010000000000000,8);
      *(long *)((long)puVar12 + 8) = auVar31._8_8_;
      *(long *)puVar12 = auVar31._0_8_;
      puVar20 = &DAT_100fb92a8;
      FUN_1000037f0(&DAT_100fb92a8,&DAT_100c39030);
      lVar3 = DAT_100fba318;
      *(undefined **)((long)puVar12 + (long)*(int *)(puVar20 + 0x34)) = AVar21.unknown;
      *(undefined2 *)((long)puVar12 + (long)*(int *)(puVar20 + 0x38)) = 0x100;
      _swift_retain();
      if (lVar3 != -1) {
        AVar21.unknown = (undefined *)&DAT_100fba318;
        _swift_once(&DAT_100fba318,FUN_1002899b8);
      }
      SwiftUI::Alignment::get_center(AVar21);
      SwiftUI::_FrameLayout::_init((Alignment)0x0);
      lVar27 = local_228;
      puVar24 = (undefined8 *)((long)puVar12 + (long)*(int *)(apuStack_2c0[1] + 0x24));
      puVar24[1] = uStack_a8;
      *puVar24 = local_b0;
      puVar24[3] = uStack_98;
      puVar24[2] = uStack_a0;
      puVar24[5] = uStack_88;
      puVar24[4] = local_90;
      FUN_100287f6c(local_228,0x3fe0000000000000);
      lVar3 = local_2b0;
      uStack_1d8 = (undefined6)CONCAT62(uStack_156,uStack_158);
      uStack_1d2 = (undefined2)((uint6)uStack_156 >> 0x20);
      local_1e0 = SUB86(local_160,0);
      uStack_1da = (undefined2)((ulong)local_160 >> 0x30);
      uStack_1c8 = (undefined6)CONCAT62(uStack_146,uStack_148);
      uStack_1c2 = (undefined2)((uint6)uStack_146 >> 0x20);
      uStack_1d0 = (undefined6)CONCAT62(uStack_14e,CONCAT11(uStack_14f,uStack_150));
      uStack_1ca = (undefined2)((uint6)uStack_14e >> 0x20);
      uStack_1b8 = (undefined1)uStack_138;
      uStack_1b7 = (undefined5)(CONCAT62(uStack_136,uStack_138) >> 8);
      uStack_1b2 = (undefined2)((uint6)uStack_136 >> 0x20);
      local_1c0 = (undefined6)CONCAT62(uStack_13e,uStack_140);
      uStack_1ba = (undefined2)((uint6)uStack_13e >> 0x20);
      uStack_1a8 = uStack_128;
      uStack_1a7 = (undefined7)(CONCAT62(uStack_126,CONCAT11(uStack_127,uStack_128)) >> 8);
      uStack_1b0 = (undefined1)uStack_130;
      uStack_1af = (undefined5)(CONCAT62(uStack_12e,uStack_130) >> 8);
      uStack_1aa = (undefined2)((uint6)uStack_12e >> 0x20);
      FUN_100011090(puVar12,local_2b0,&DAT_100fba3b0,&DAT_100c3aac0);
      FUN_100011090(lVar27,lVar26,&DAT_100fba3d8,&DAT_100c3aae8);
      puVar9 = local_288[0];
      *puVar29 = local_288[0];
      *(undefined2 *)(puVar29 + 1) = 0x100;
      puVar20 = (undefined *)CONCAT26(uStack_1da,local_1e0);
      uStack_198 = CONCAT26(uStack_1d2,uStack_1d8);
      uVar4 = CONCAT26(uStack_1c2,uStack_1c8);
      uVar30 = CONCAT26(uStack_1ca,uStack_1d0);
      uVar6 = CONCAT26(uStack_1b2,CONCAT51(uStack_1b7,uStack_1b8));
      uVar5 = CONCAT26(uStack_1ba,local_1c0);
      uVar8 = CONCAT71(uStack_1a7,uStack_1a8);
      uVar7 = CONCAT26(uStack_1aa,CONCAT51(uStack_1af,uStack_1b0));
      uStack_178 = uStack_1b8;
      uStack_177 = (undefined7)((ulong)uVar6 >> 8);
      local_168 = uStack_1a8;
      uStack_167 = uStack_1a7;
      uStack_170 = uStack_1b0;
      uStack_16f = (undefined7)((ulong)uVar7 >> 8);
      local_1a0 = puVar20;
      local_190 = uVar30;
      local_188 = uVar4;
      local_180 = uVar5;
      puVar29[3] = uStack_198;
      puVar29[2] = puVar20;
      puVar29[5] = uVar4;
      puVar29[4] = uVar30;
      puVar29[7] = uVar6;
      puVar29[6] = uVar5;
      puVar29[9] = uVar8;
      puVar29[8] = uVar7;
      puVar20 = &DAT_100fba430;
      FUN_1000037f0(&DAT_100fba430,&DAT_100c3ab10);
      FUN_100011090(lVar3,(long)puVar29 + (long)*(int *)(puVar20 + 0x40),&DAT_100fba3b0,
                    &DAT_100c3aac0);
      FUN_100011090(lVar26,(long)puVar29 + (long)*(int *)(puVar20 + 0x50),&DAT_100fba3d8,
                    &DAT_100c3aae8);
      _swift_retain(puVar9);
      FUN_100011090(&local_160,auStack_220,&DAT_100fba428,&DAT_100c3ab08);
      _swift_retain(puVar9);
      FUN_100011090(&local_1a0,auStack_220,&DAT_100fba428,&DAT_100c3ab08);
      FUN_100005808(lVar26,&DAT_100fba3d8,&DAT_100c3aae8);
      FUN_100005808(lVar3,&DAT_100fba3b0,&DAT_100c3aac0);
      FUN_100005808(&local_1e0,&DAT_100fba428,&DAT_100c3ab08);
      _swift_release(puVar9);
      lVar3 = local_270;
      FUN_100011090(puVar29,local_270,&DAT_100fba3a8,&DAT_100c3aab8);
      _swift_storeEnumTagMultiPayload(lVar3,local_288[1],1);
      puVar20 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
      FUN_100016eac(&DAT_100fba408,&DAT_100fba3d0,&DAT_100c3aae0,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      FUN_100016eac(&DAT_100fba410,&DAT_100fba3a8,&DAT_100c3aab8,puVar20);
      lVar26 = local_268;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar3);
      lVar3 = local_248;
      FUN_100011090(lVar26,local_248,&DAT_100fba3c8,&DAT_100c3aad8);
      _swift_storeEnumTagMultiPayload(lVar3,local_258,0);
      FUN_100289a60();
      FUN_100289b20();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar3);
      FUN_100005808(&local_160,&DAT_100fba428,&DAT_100c3ab08);
      _swift_release(puVar9);
      FUN_100005808(lVar26,&DAT_100fba3c8,&DAT_100c3aad8);
      FUN_100005808(local_228,&DAT_100fba3d8,&DAT_100c3aae8);
      FUN_100005808(puVar12,&DAT_100fba3b0,&DAT_100c3aac0);
      puVar12 = &DAT_100fba3a8;
      puVar20 = &DAT_100c3aab8;
      puVar24 = puVar29;
    }
  }
  else if (param_6 == 2) {
    if (DAT_100fba328 != -1) {
      _swift_once(&DAT_100fba328,FUN_100289a20);
    }
    puVar9 = DAT_100fba330;
    _swift_retain(DAT_100fba330);
    lVar10 = local_228;
    FUN_100287f6c(local_228,0x3fd0000000000000);
    FUN_100011090(lVar10,lVar26,&DAT_100fba3d8,&DAT_100c3aae8);
    *puVar28 = puVar9;
    *(undefined2 *)(puVar28 + 1) = 0x100;
    puVar12 = &DAT_100fba420;
    FUN_1000037f0(&DAT_100fba420,&DAT_100c3ab00);
    FUN_100011090(lVar26,(long)puVar28 + (long)*(int *)(puVar12 + 0x30),&DAT_100fba3d8,
                  &DAT_100c3aae8);
    _swift_retain_n(puVar9,2);
    FUN_100005808(lVar26,&DAT_100fba3d8,&DAT_100c3aae8);
    _swift_release(puVar9);
    puVar20 = &DAT_100c3aab0;
    FUN_100011090(puVar28,lVar27,&DAT_100fba3a0,&DAT_100c3aab0);
    _swift_storeEnumTagMultiPayload(lVar27,local_2a8[1],0);
    puVar12 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
    FUN_100016eac(&DAT_100fba3f0,&DAT_100fba3a0,&DAT_100c3aab0,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
    FUN_100016eac(&DAT_100fba3f8,&DAT_100fba388,&DAT_100c3aa98,puVar12);
    puVar12 = local_288[0];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar27);
    lVar3 = local_248;
    FUN_100011090(puVar12,local_248,&DAT_100fba398,&DAT_100c3aaa8);
    _swift_storeEnumTagMultiPayload(lVar3,local_258,1);
    FUN_100289a60();
    FUN_100289b20();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar3);
    _swift_release(puVar9);
    FUN_100005808(puVar12,&DAT_100fba398,&DAT_100c3aaa8);
    FUN_100005808(lVar10,&DAT_100fba3d8,&DAT_100c3aae8);
    puVar12 = &DAT_100fba3a0;
    puVar24 = puVar28;
  }
  else {
    puVar12 = &DAT_100fba3e0;
    FUN_1000037f0(&DAT_100fba3e0,&DAT_100c3aaf0);
    endPoint.unknown = (undefined *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar12 + 0x18) = 6;
    *(undefined8 *)(puVar12 + 0x10) = 3;
    if (DAT_100fba328 != -1) {
      _swift_once(&DAT_100fba328,FUN_100289a20);
    }
    CVar22.unknown = DAT_100fba330;
    *(undefined **)(puVar12 + 0x20) = DAT_100fba330;
    *(undefined **)(puVar12 + 0x28) = CVar22.unknown;
    startPoint.unknown = (undefined *)0x2;
    _swift_retain_n();
    CVar22 = SwiftUI::Color::opacity(0.0,CVar22);
    *(undefined **)(puVar12 + 0x30) = CVar22.unknown;
    gradient = SwiftUI::Gradient::init();
    UVar23 = SwiftUI::UnitPoint::get_top(gradient.unknown);
    SwiftUI::UnitPoint::get_bottom(UVar23);
    SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
    puVar9 = local_120;
    lVar10 = local_228;
    FUN_100287f6c(local_228,0x3fd0000000000000);
    FUN_100011090(lVar10,lVar26,&DAT_100fba3d8,&DAT_100c3aae8);
    *puVar24 = puVar9;
    uVar30 = CONCAT62(uStack_116,uStack_118);
    uVar4 = CONCAT62(uStack_10e,uStack_110);
    uVar5 = CONCAT62(uStack_106,uStack_108);
    *(ulong *)((long)local_2a8 + lVar3 + 8) = CONCAT62(uStack_fe,local_100);
    *(undefined8 *)((long)local_2a8 + lVar3) = uVar5;
    *(undefined8 *)((long)apuStack_2c0 + lVar3 + 0x10) = uVar4;
    *(undefined8 *)((long)apuStack_2c0 + lVar3 + 8) = uVar30;
    *(undefined2 *)(local_298 + lVar3) = 0x100;
    puVar12 = &DAT_100fba3e8;
    FUN_1000037f0(&DAT_100fba3e8,&DAT_100c3aaf8);
    FUN_100011090(lVar26,(long)puVar24 + (long)*(int *)(puVar12 + 0x30),&DAT_100fba3d8,
                  &DAT_100c3aae8);
    _swift_bridgeObjectRetain_n(puVar9,2);
    FUN_100005808(lVar26,&DAT_100fba3d8,&DAT_100c3aae8);
    _swift_bridgeObjectRelease(puVar9);
    puVar20 = &DAT_100c3aa98;
    FUN_100011090(puVar24,lVar27,&DAT_100fba388,&DAT_100c3aa98);
    _swift_storeEnumTagMultiPayload(lVar27,local_2a8[1],1);
    puVar12 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
    FUN_100016eac(&DAT_100fba3f0,&DAT_100fba3a0,&DAT_100c3aab0,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
    FUN_100016eac(&DAT_100fba3f8,&DAT_100fba388,&DAT_100c3aa98,puVar12);
    puVar12 = local_288[0];
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar27);
    lVar3 = local_248;
    FUN_100011090(puVar12,local_248,&DAT_100fba398,&DAT_100c3aaa8);
    _swift_storeEnumTagMultiPayload(lVar3,local_258,1);
    FUN_100289a60();
    FUN_100289b20();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar3);
    _swift_bridgeObjectRelease(puVar9);
    FUN_100005808(puVar12,&DAT_100fba398,&DAT_100c3aaa8);
    FUN_100005808(lVar10,&DAT_100fba3d8,&DAT_100c3aae8);
    puVar12 = &DAT_100fba388;
  }
  FUN_100005808(puVar24,puVar12,puVar20);
  _swift_release(local_240);
  return;
}



/* Address: 0x100289220 | FUN_100289220 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100289220(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,char *param_7,void *param_8)

{
  undefined1 uVar1;
  Alignment AVar2;
  undefined8 *puVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  Alignment AVar8;
  Color CVar9;
  _FrameLayout _Var10;
  Set _all;
  Image IVar11;
  undefined *puVar12;
  NSColor *pNVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String systemName;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined *puStack_550;
  undefined8 uStack_548;
  undefined8 local_538;
  undefined *local_528;
  undefined2 uStack_520;
  undefined6 uStack_51e;
  undefined2 uStack_518;
  undefined6 uStack_516;
  undefined2 uStack_510;
  undefined6 uStack_50e;
  undefined2 uStack_508;
  undefined6 uStack_506;
  undefined2 uStack_500;
  undefined6 local_4fe;
  undefined2 uStack_4f8;
  undefined6 uStack_4f6;
  undefined2 uStack_4f0;
  undefined6 uStack_4ee;
  undefined *local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined7 local_457;
  undefined1 uStack_450;
  undefined7 uStack_44f;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined *local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined *puStack_3e8;
  undefined8 local_3e0;
  undefined *puStack_3d8;
  code *local_3d0;
  undefined *local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 local_360;
  undefined7 uStack_35f;
  undefined1 local_358;
  undefined *local_350;
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined6 uStack_33e;
  undefined2 uStack_338;
  undefined6 uStack_336;
  undefined2 uStack_330;
  undefined6 uStack_32e;
  undefined2 uStack_328;
  undefined6 local_326;
  undefined2 uStack_320;
  undefined6 uStack_31e;
  undefined2 uStack_318;
  undefined6 uStack_316;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined *local_2f8;
  undefined8 local_2f0;
  undefined *puStack_2e8;
  code *local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined8 *local_2c8;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined *local_280;
  undefined8 local_278;
  undefined *local_270;
  code *local_268;
  undefined *local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined8 uStack_1ff;
  undefined6 uStack_1f0;
  undefined2 local_1ea;
  undefined6 uStack_1e8;
  undefined2 uStack_1e2;
  undefined6 uStack_1e0;
  undefined2 local_1da;
  undefined6 uStack_1d8;
  undefined2 uStack_1d2;
  undefined6 uStack_1d0;
  undefined2 local_1ca;
  undefined6 uStack_1c8;
  undefined2 uStack_1c2;
  undefined6 uStack_1c0;
  undefined2 uStack_1ba;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined *puStack_188;
  code *local_180;
  undefined *local_170;
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
  undefined *local_118;
  undefined8 local_110;
  undefined *puStack_108;
  code *local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar4 = pMVar5;
  FUN_100270a58();
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "PasteLicensingAppStore/Trial.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Trial.swift",0x22,1,0x9b,UVar6.unknown,pMVar4);
  }
  if (param_6 == 1) {
    FUN_100218d58();
    AVar8.unknown = (undefined *)SwiftUI::Color::init(*(NSColor **)pcVar7);
    CVar9 = SwiftUI::Color::opacity(0.16,(Color)AVar8.unknown);
    _swift_release();
    if (DAT_100fba268 != -1) {
      AVar8.unknown = (undefined *)&DAT_100fba268;
      _swift_once(&DAT_100fba268,FUN_1002899d8);
    }
    AVar2.unknown = DAT_100fba270.unknown;
    SwiftUI::Alignment::get_center(AVar8);
    _Var10 = SwiftUI::_FrameLayout::_init(AVar2);
    uStack_1e2 = (undefined2)uStack_b8;
    uStack_1e0 = (undefined6)((ulong)uStack_b8 >> 0x10);
    local_1ea = (undefined2)local_c0;
    uStack_1e8 = (undefined6)((ulong)local_c0 >> 0x10);
    uStack_1d2 = (undefined2)uStack_a8;
    uStack_1d0 = (undefined6)((ulong)uStack_a8 >> 0x10);
    local_1da = (undefined2)uStack_b0;
    uStack_1d8 = (undefined6)((ulong)uStack_b0 >> 0x10);
    uStack_1c2 = (undefined2)uStack_98;
    uStack_1c0 = (undefined6)((ulong)uStack_98 >> 0x10);
    local_1ca = (undefined2)local_a0;
    uStack_1c8 = (undefined6)((ulong)local_a0 >> 0x10);
    uVar17 = CONCAT26(local_1da,uStack_1e0);
    uStack_516 = uStack_1e8;
    uStack_510 = uStack_1e2;
    uStack_51e = uStack_1f0;
    uStack_518 = local_1ea;
    uStack_520 = 0x100;
    uStack_506 = uStack_1d8;
    uStack_500 = uStack_1d2;
    uStack_50e = uStack_1e0;
    uStack_508 = local_1da;
    uStack_4f6 = uStack_1c8;
    local_4fe = uStack_1d0;
    uStack_4f8 = local_1ca;
    local_528 = CVar9.unknown;
    uStack_4f0 = uStack_1c2;
    uStack_4ee = uStack_1c0;
    _all = SwiftUI::Edge::Set::get_all(_Var10.unknown);
    uVar18 = 0xc018000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
    uStack_258 = CONCAT62(uStack_51e,uStack_520);
    uStack_248 = CONCAT62(uStack_50e,uStack_510);
    local_250 = CONCAT62(uStack_516,uStack_518);
    local_260 = local_528;
    uStack_238 = CONCAT62(local_4fe,uStack_500);
    local_240 = CONCAT62(uStack_506,uStack_508);
    uStack_228 = CONCAT62(uStack_4ee,uStack_4f0);
    local_230 = CONCAT62(uStack_4f6,uStack_4f8);
    uStack_33e = uStack_1e8;
    uStack_338 = uStack_1e2;
    uStack_340 = local_1ea;
    uStack_348 = 0x100;
    uStack_32e = uStack_1d8;
    uStack_328 = uStack_1d2;
    uStack_336 = uStack_1e0;
    uStack_330 = local_1da;
    uStack_31e = uStack_1c8;
    local_326 = uStack_1d0;
    uStack_320 = local_1ca;
    uStack_318 = uStack_1c2;
    uStack_316 = uStack_1c0;
    local_350 = CVar9.unknown;
    FUN_100011090(&local_528,&local_170,&DAT_100fba358,&DAT_100c3afb0);
    FUN_100005808(&local_350,&DAT_100fba358,&DAT_100c3afb0);
    uStack_1e8 = (undefined6)uStack_258;
    uStack_1e2 = (undefined2)((ulong)uStack_258 >> 0x30);
    uStack_1f0 = SUB86(local_260,0);
    local_1ea = (undefined2)((ulong)local_260 >> 0x30);
    uStack_1d8 = (undefined6)uStack_248;
    uStack_1d2 = (undefined2)((ulong)uStack_248 >> 0x30);
    uStack_1e0 = (undefined6)local_250;
    local_1da = (undefined2)((ulong)local_250 >> 0x30);
    uStack_1c8 = (undefined6)uStack_238;
    uStack_1c2 = (undefined2)((ulong)uStack_238 >> 0x30);
    uStack_1d0 = (undefined6)local_240;
    local_1ca = (undefined2)((ulong)local_240 >> 0x30);
    uStack_1b8 = uStack_228;
    uStack_1c0 = (undefined6)local_230;
    uStack_1ba = (undefined2)((ulong)local_230 >> 0x30);
    local_1b0 = CONCAT71(local_1b0._1_7_,(char)_all.unknown);
    puStack_188 = (undefined *)((ulong)puStack_188 & 0xffffffffffffff00);
    uStack_168 = uStack_258;
    local_170 = local_260;
    uStack_158 = uStack_248;
    uStack_160 = local_250;
    uStack_148 = uStack_238;
    local_150 = local_240;
    uStack_138 = uStack_228;
    uStack_140 = local_230;
    local_130 = CONCAT71(local_130._1_7_,(char)_all.unknown);
    puStack_108 = (undefined *)((ulong)puStack_108 & 0xffffffffffffff00);
    uStack_1a8 = uVar18;
    local_1a0 = uVar17;
    local_198 = (undefined *)param_4;
    local_190 = param_5;
    uStack_128 = uVar18;
    local_120 = uVar17;
    local_118 = (undefined *)param_4;
    local_110 = param_5;
    FUN_100011090(&uStack_1f0,&local_2d8,&DAT_100fba360,&DAT_100c3aa70);
    FUN_100005808(&local_170,&DAT_100fba360,&DAT_100c3aa70);
    uStack_548 = CONCAT26(uStack_1e2,uStack_1e8);
    puStack_550 = (undefined *)CONCAT26(local_1ea,uStack_1f0);
    uStack_558 = CONCAT26(uStack_1d2,uStack_1d8);
    local_560 = CONCAT26(local_1da,uStack_1e0);
    uStack_568 = CONCAT26(uStack_1c2,uStack_1c8);
    uStack_570 = CONCAT26(local_1ca,uStack_1d0);
    local_580 = CONCAT26(uStack_1ba,uStack_1c0);
    uStack_578 = uStack_1b8;
    uStack_598 = local_198;
    local_5a0 = local_1a0;
    uStack_588 = uStack_1a8;
    uStack_590 = local_1b0;
    local_538 = local_190;
    uVar1 = puStack_188._0_1_;
  }
  else {
    local_538 = 0;
    uVar1 = 0;
    uStack_558 = 0;
    local_560 = 0;
    uStack_548 = 0;
    puStack_550 = (undefined *)0x0;
    uStack_578 = 0;
    local_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_598 = 0;
    local_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
  }
  _swift_bridgeObjectRetain(param_8);
  systemName.bridgeObject = param_8;
  systemName.str = param_7;
  IVar11 = SwiftUI::Image::init(systemName);
  if (DAT_100fba308 != -1) {
    _swift_once(&DAT_100fba308,FUN_100289948);
  }
  puVar3 = DAT_100fba310;
  puVar12 = &DAT_100c3a9f8;
  _swift_getKeyPath();
  if (param_6 < 2) {
    _swift_retain(puVar3);
    pNVar13 = (NSColor *)NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  }
  else {
    puVar14 = puVar3;
    _swift_retain();
    FUN_100218ca8();
    pNVar13 = (NSColor *)*puVar14;
  }
  CVar9 = SwiftUI::Color::init(pNVar13);
  puVar15 = &DAT_100c3aa28;
  _swift_getKeyPath();
  AVar8.unknown = puVar15;
  if (DAT_100fba318 != -1) {
    AVar8.unknown = (undefined *)&DAT_100fba318;
    _swift_once(&DAT_100fba318,FUN_1002899b8);
  }
  AVar2.unknown = DAT_100fba320.unknown;
  SwiftUI::Alignment::get_center(AVar8);
  pcVar16 = (code *)0x0;
  SwiftUI::_FrameLayout::_init(AVar2);
  if (param_6 < 2) {
    if (DAT_100fba348 != -1) {
      pcVar16 = FUN_1002899f8;
      _swift_once(&DAT_100fba348);
    }
    puVar14 = &DAT_100fba350;
  }
  else {
    if (DAT_100fba328 != -1) {
      pcVar16 = FUN_100289a20;
      _swift_once(&DAT_100fba328);
    }
    puVar14 = &DAT_100fba330;
  }
  uVar17 = *puVar14;
  _swift_retain(uVar17);
  AVar8.unknown = &DAT_100c3aa28;
  _swift_getKeyPath();
  puStack_2e8 = (undefined *)SwiftUI::Alignment::get_center(AVar8);
  uStack_320 = (undefined2)uStack_e8;
  uStack_31e = (undefined6)((ulong)uStack_e8 >> 0x10);
  uStack_328 = (undefined2)local_f0;
  local_326 = (undefined6)((ulong)local_f0 >> 0x10);
  uStack_310 = uStack_d8;
  uStack_318 = (undefined2)uStack_e0;
  uStack_316 = (undefined6)((ulong)uStack_e0 >> 0x10);
  uStack_300 = uStack_c8;
  uStack_308 = local_d0;
  uStack_288 = uStack_c8;
  local_290 = local_d0;
  uStack_298 = uStack_d8;
  local_2a0 = uStack_e0;
  uStack_348 = SUB82(puVar12,0);
  uStack_346 = (undefined6)((ulong)puVar12 >> 0x10);
  uStack_340 = SUB82(puVar3,0);
  uStack_33e = (undefined6)((ulong)puVar3 >> 0x10);
  uStack_338 = SUB82(puVar15,0);
  uStack_336 = (undefined6)((ulong)puVar15 >> 0x10);
  uStack_330 = SUB82(CVar9.unknown,0);
  uStack_32e = (undefined6)((ulong)CVar9.unknown >> 0x10);
  local_2c8 = puVar3;
  uStack_2a8 = uStack_e8;
  local_2b0 = local_f0;
  local_350 = IVar11.unknown;
  local_2f8 = AVar8.unknown;
  local_2f0 = uVar17;
  local_2e0 = pcVar16;
  local_2d8 = IVar11.unknown;
  local_2d0 = puVar12;
  local_2c0 = puVar15;
  local_2b8 = CVar9.unknown;
  local_280 = AVar8.unknown;
  local_278 = uVar17;
  local_270 = puStack_2e8;
  local_268 = pcVar16;
  FUN_100011090(&local_350,&local_170,&DAT_100fba338,&DAT_100c3aa58);
  FUN_100005808(&local_2d8,&DAT_100fba338,&DAT_100c3aa58);
  uStack_3b8 = uStack_548;
  local_3c0 = puStack_550;
  uStack_3a8 = uStack_558;
  uStack_3b0 = local_560;
  uStack_398 = uStack_568;
  local_3a0 = uStack_570;
  uStack_388 = uStack_578;
  local_390 = local_580;
  uStack_378 = uStack_588;
  local_380 = uStack_590;
  uStack_368 = (undefined1)uStack_598;
  uStack_367 = (undefined7)((ulong)uStack_598 >> 8);
  local_370 = local_5a0;
  local_360 = (undefined1)local_538;
  uStack_35f = (undefined7)((ulong)local_538 >> 8);
  uStack_408 = CONCAT62(uStack_316,uStack_318);
  uStack_410 = CONCAT62(uStack_31e,uStack_320);
  uStack_128 = uStack_308;
  local_130 = uStack_310;
  local_118 = local_2f8;
  local_120 = uStack_300;
  puStack_108 = puStack_2e8;
  local_110 = local_2f0;
  uStack_168 = CONCAT62(uStack_346,uStack_348);
  uStack_158 = CONCAT62(uStack_336,uStack_338);
  uStack_160 = CONCAT62(uStack_33e,uStack_340);
  local_170 = local_350;
  uStack_148 = CONCAT62(local_326,uStack_328);
  local_150 = CONCAT62(uStack_32e,uStack_330);
  uStack_138 = CONCAT62(uStack_316,uStack_318);
  uStack_140 = CONCAT62(uStack_31e,uStack_320);
  uStack_438 = CONCAT62(uStack_346,uStack_348);
  uStack_428 = CONCAT62(uStack_336,uStack_338);
  uStack_430 = CONCAT62(uStack_33e,uStack_340);
  uStack_418 = CONCAT62(local_326,uStack_328);
  local_420 = CONCAT62(uStack_32e,uStack_330);
  uStack_228 = uStack_578;
  local_230 = local_580;
  uStack_218 = uStack_588;
  local_220 = uStack_590;
  local_210 = local_5a0;
  uStack_1ff = CONCAT17(uVar1,uStack_35f);
  uStack_207 = uStack_367;
  uStack_200 = local_360;
  uStack_258 = uStack_548;
  local_260 = puStack_550;
  uStack_248 = uStack_558;
  local_250 = local_560;
  uStack_238 = uStack_568;
  local_240 = uStack_570;
  uStack_498 = uStack_558;
  local_4a0 = local_560;
  uStack_488 = uStack_568;
  uStack_490 = uStack_570;
  uStack_4a8 = uStack_548;
  local_4b0 = puStack_550;
  uStack_44f = uStack_35f;
  uStack_450 = local_360;
  uStack_468 = uStack_588;
  local_470 = uStack_590;
  uStack_460 = local_5a0;
  uStack_478 = uStack_578;
  local_480 = local_580;
  uStack_1b8 = CONCAT62(uStack_316,uStack_318);
  uStack_1c8 = (undefined6)CONCAT62(local_326,uStack_328);
  uStack_1c2 = (undefined2)((uint6)local_326 >> 0x20);
  uStack_1d0 = (undefined6)CONCAT62(uStack_32e,uStack_330);
  local_1ca = (undefined2)((uint6)uStack_32e >> 0x20);
  uStack_1c0 = (undefined6)CONCAT62(uStack_31e,uStack_320);
  uStack_1ba = (undefined2)((uint6)uStack_31e >> 0x20);
  uStack_1e8 = (undefined6)CONCAT62(uStack_346,uStack_348);
  uStack_1e2 = (undefined2)((uint6)uStack_346 >> 0x20);
  uStack_1f0 = SUB86(local_350,0);
  local_1ea = (undefined2)((ulong)local_350 >> 0x30);
  uStack_1d8 = (undefined6)CONCAT62(uStack_336,uStack_338);
  uStack_1d2 = (undefined2)((uint6)uStack_336 >> 0x20);
  uStack_1e0 = (undefined6)CONCAT62(uStack_33e,uStack_340);
  local_1da = (undefined2)((uint6)uStack_33e >> 0x20);
  puStack_188 = puStack_2e8;
  local_190 = local_2f0;
  uStack_1a8 = uStack_308;
  local_1b0 = uStack_310;
  local_198 = local_2f8;
  local_1a0 = uStack_300;
  local_100 = local_2e0;
  local_180 = local_2e0;
  local_440 = local_350;
  local_3d0 = local_2e0;
  puStack_3e8 = local_2f8;
  local_3f0 = uStack_300;
  puStack_3d8 = puStack_2e8;
  local_3e0 = local_2f0;
  uStack_3f8 = uStack_308;
  local_400 = uStack_310;
  param_1[1] = uStack_548;
  *param_1 = puStack_550;
  param_1[3] = uStack_558;
  param_1[2] = local_560;
  param_1[9] = uStack_588;
  param_1[8] = uStack_590;
  param_1[0xb] = uStack_598;
  param_1[10] = local_5a0;
  param_1[5] = uStack_568;
  param_1[4] = uStack_570;
  param_1[7] = uStack_578;
  param_1[6] = local_580;
  param_1[0x11] = uStack_428;
  param_1[0x10] = uStack_430;
  param_1[0x13] = uStack_418;
  param_1[0x12] = local_420;
  param_1[0xd] = CONCAT71(uStack_447,uVar1);
  param_1[0xc] = local_538;
  param_1[0xf] = uStack_438;
  param_1[0xe] = local_350;
  param_1[0x1c] = local_2e0;
  param_1[0x19] = local_2f8;
  param_1[0x18] = uStack_300;
  param_1[0x1b] = puStack_2e8;
  param_1[0x1a] = local_2f0;
  param_1[0x15] = uStack_408;
  param_1[0x14] = uStack_410;
  param_1[0x17] = uStack_308;
  param_1[0x16] = uStack_310;
  uStack_458 = uStack_368;
  local_457 = uStack_367;
  uStack_448 = uVar1;
  local_358 = uVar1;
  uStack_208 = uStack_368;
  FUN_100011090(&local_260,&local_528,&DAT_100fba340,&DAT_100c3aa60);
  FUN_100011090(&uStack_1f0,&local_528,&DAT_100fba338,&DAT_100c3aa58);
  FUN_100005808(&local_170,&DAT_100fba338,&DAT_100c3aa58);
  FUN_100005808(&local_3c0,&DAT_100fba340,&DAT_100c3aa60);
  _swift_release(pMVar5);
  return;
}



/* Address: 0x10028990c | FUN_10028990c */

void FUN_10028990c(undefined8 param_1)

{
  FUN_100289964(param_1,PTR_get_body_100eab1e0,PTR_get_semibold_100eab230,&DAT_100fba2a8);
  return;
}



/* Address: 0x100289928 | FUN_100289928 */

void FUN_100289928(Font param_1)

{
  FUN_1000f3588();
  DAT_100fba2b8 = SwiftUI::Font::get_callout(param_1);
  return;
}



/* Address: 0x100289948 | FUN_100289948 */

void FUN_100289948(undefined8 param_1)

{
  FUN_100289964(param_1,PTR_get_headline_100eab280,PTR_get_heavy_100eab218,&DAT_100fba310);
  return;
}



/* Address: 0x100289964 | FUN_100289964 */

void FUN_100289964(Weight param_1,code *param_2,code *param_3,undefined8 *param_4)

{
  Font FVar1;
  
  FVar1.unknown = param_2;
  FUN_1000f3588();
  (*param_2)();
  (*param_3)();
  FVar1 = SwiftUI::Font::weight(param_1,FVar1);
  _swift_release(param_1.unknown);
  *param_4 = FVar1.unknown;
  return;
}



/* Address: 0x1002899b8 | FUN_1002899b8 */

void FUN_1002899b8(void)

{
  FUN_1000f3588();
  DAT_100fba320 = 0x4038000000000000;
  return;
}



/* Address: 0x1002899d8 | FUN_1002899d8 */

void FUN_1002899d8(void)

{
  FUN_1000f3588();
  DAT_100fba270 = 0x4040000000000000;
  return;
}



/* Address: 0x1002899f8 | FUN_1002899f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002899f8(undefined8 *param_1)

{
  FUN_100218d58();
  DAT_100fba350 = SwiftUI::Color::init((NSColor *)*param_1);
  return;
}



/* Address: 0x100289a20 | FUN_100289a20 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100289a20(undefined8 *param_1)

{
  FUN_1001fe1dc();
  DAT_100fba330 = SwiftUI::Color::init((NSColor *)*param_1);
  return;
}



/* Address: 0x100289a48 | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}



/* Address: 0x100289a4c | thunk_FUN_10009cc44 */

void thunk_FUN_10009cc44(void)

{
  FUN_10009cc44();
  return;
}



/* Address: 0x100289a50 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x100289a54 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x100289a58 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x100289a5c | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x100289a60 | FUN_100289a60 */

void FUN_100289a60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
  undefined *puStack_38;
  
  if (DAT_100fba400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba3c8;
  FUN_100005c24(&DAT_100fba3c8,&DAT_100c3aad8);
  puVar4 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
  puVar2 = &DAT_100fba408;
  FUN_100016eac(&DAT_100fba408,&DAT_100fba3d0,&DAT_100c3aae0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  puVar3 = &DAT_100fba410;
  FUN_100016eac(&DAT_100fba410,&DAT_100fba3a8,&DAT_100c3aab8,puVar4);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_40 = puVar2;
  puStack_38 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_40);
  DAT_100fba400 = puVar4;
  return;
}



/* Address: 0x100289b20 | FUN_100289b20 */

void FUN_100289b20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_40;
  undefined *puStack_38;
  
  if (DAT_100fba418 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba398;
  FUN_100005c24(&DAT_100fba398,&DAT_100c3aaa8);
  puVar4 = PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30;
  puVar2 = &DAT_100fba3f0;
  FUN_100016eac(&DAT_100fba3f0,&DAT_100fba3a0,&DAT_100c3aab0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  puVar3 = &DAT_100fba3f8;
  FUN_100016eac(&DAT_100fba3f8,&DAT_100fba388,&DAT_100c3aa98,puVar4);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_40 = puVar2;
  puStack_38 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_40);
  DAT_100fba418 = puVar4;
  return;
}



/* Address: 0x100289be0 | FUN_100289be0 */

void FUN_100289be0(void)

{
  FUN_100016eac(&DAT_100fba460,&DAT_100fba220,&DAT_100c3a900,
                &TargetProtocolConformanceDescriptor_100c3a370);
  return;
}



/* Address: 0x100289c14 | FUN_100289c14 */

undefined1  [16] FUN_100289c14(void)

{
  return ZEXT816(0x100ec5990);
}



/* Address: 0x100289c24 | FUN_100289c24 */

void FUN_100289c24(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa598,1);
  return;
}


