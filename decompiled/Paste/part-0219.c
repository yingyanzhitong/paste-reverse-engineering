/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100296acc | FUN_100296acc */

void FUN_100296acc(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  Alignment unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0x403c000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_100fbab48;
  FUN_1000037f0();
  FUN_100296ba8((long)param_1 + (long)*(int *)(puVar2 + 0x2c));
  SwiftUI::Alignment::get_center(unaff_x20);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar2 = &DAT_100fbab50;
  FUN_1000037f0(&DAT_100fbab50,&DAT_100c3b438);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x24));
  param_1[9] = uStack_48;
  param_1[8] = local_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = local_30;
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = local_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Address: 0x100296ba8 | FUN_100296ba8 */

void FUN_100296ba8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  char *pcVar10;
  Set SVar11;
  State SVar12;
  Binding<undefined> BVar13;
  HorizontalAlignment HVar14;
  VerticalAlignment VVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar17;
  long extraout_x8_03;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar21;
  HierarchicalShapeStyle HVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *apuStack_e0 [2];
  undefined4 local_cc;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  MainActor *local_98;
  long local_90;
  long local_88;
  
  local_a8 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_b0 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  lVar20 = (long)apuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fbab58;
  local_c0 = lVar20;
  FUN_1000037f0(&DAT_100fbab58,&DAT_100c3b440);
  local_c8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  HVar22.unknown = (undefined *)(lVar20 - extraout_x8_00);
  puVar6 = &DAT_100fbab60;
  FUN_1000037f0(&DAT_100fbab60,&DAT_100c3b448);
  local_b8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar19 = (long)HVar22.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12;
  puVar6 = &DAT_100fbab68;
  FUN_1000037f0(&DAT_100fbab68,&DAT_100c3b450);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar20 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined8 *)(lVar20 - extraout_x12_00);
  lVar20 = 0;
  FUN_100291354();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  lVar20 = (long)puVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = (undefined8 *)(lVar20 - extraout_x12_01);
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_98 = pMVar7;
  UVar9 = Swift::Actor::get_unownedExecutor();
  pcVar10 = (char *)UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar10 & 1) == 0) {
    pcVar10 = "PasteLicensingAppStore/MultiChoicePaywallView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.swift",0x33,1,0xb,UVar9.unknown,puVar8
              );
  }
  SVar11 = SwiftUI::Edge::Set::get_top((Set)pcVar10);
  local_cc = SUB84(SVar11.unknown,0);
  uVar23 = 0x4059000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  uVar21 = *(undefined8 *)
            (*(long *)(param_6 + 8) + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions)
  ;
  uVar24 = param_3;
  uVar25 = param_4;
  uVar26 = param_5;
  FUN_1002969bc();
  _swift_bridgeObjectRetain(uVar21);
  SVar12.unknown = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  BVar13 = SwiftUI::State::get_projectedValue(SVar12);
  *puVar18 = uVar21;
  apuStack_e0[1] = puVar18;
  HVar14 = SwiftUI::HorizontalAlignment::get_center(BVar13.unknown);
  *puVar17 = HVar14.unknown;
  puVar17[1] = 0x4020000000000000;
  *(undefined1 *)(puVar17 + 2) = 0;
  puVar6 = &DAT_100fbab70;
  FUN_1000037f0(&DAT_100fbab70,&DAT_100c3b458);
  VVar15.unknown = param_6;
  FUN_10029714c((long)puVar17 + (long)*(int *)(puVar6 + 0x2c));
  VVar15 = SwiftUI::VerticalAlignment::get_center(VVar15);
  *(undefined **)HVar22.unknown = VVar15.unknown;
  *(undefined8 *)((long)HVar22.unknown + 8) = 0x4034000000000000;
  *(undefined1 *)((long)HVar22.unknown + 0x10) = 0;
  puVar6 = &DAT_100fbab78;
  FUN_1000037f0(&DAT_100fbab78,&DAT_100c3b460);
  FUN_1002977c4((long)HVar22.unknown + (long)*(int *)(puVar6 + 0x2c),param_6);
  lVar20 = local_c0;
  SwiftUI::PlainButtonStyle::init();
  puVar6 = &DAT_100fbab80;
  FUN_100016eac(&DAT_100fbab80,&DAT_100fbab58,&DAT_100c3b440,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puVar16 = &DAT_100fb9b00;
  FUN_100003a00(&DAT_100fb9b00,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  puVar3 = local_a8;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar19,lVar20,local_c8,local_a8,puVar6,puVar16);
  (**(code **)(local_b0 + 8))(lVar20,puVar3);
  FUN_100005808(HVar22.unknown,&DAT_100fbab58,&DAT_100c3b440);
  HVar22 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar22);
  SVar11.unknown = &DAT_100fbab88;
  FUN_1000037f0(&DAT_100fbab88,&DAT_100c3b468);
  *(int *)(lVar19 + *(int *)(SVar11.unknown + 0x24)) = (int)HVar22.unknown;
  SVar11 = SwiftUI::Edge::Set::get_vertical(SVar11);
  uVar21 = 0x4034000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar1 = (undefined1 *)(lVar19 + *(int *)(local_b8 + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = uVar24;
  *(undefined8 *)(puVar1 + 0x18) = uVar25;
  *(undefined8 *)(puVar1 + 0x20) = uVar26;
  puVar1[0x28] = 0;
  lVar20 = local_a0;
  FUN_1000c495c(puVar18,local_a0,FUN_100291354);
  lVar4 = local_90;
  FUN_100011090(puVar17,local_90,&DAT_100fbab68,&DAT_100c3b450);
  lVar5 = local_88;
  FUN_100011090(lVar19,local_88,&DAT_100fbab60,&DAT_100c3b448);
  *param_1 = (char)local_cc;
  *(undefined8 *)(param_1 + 8) = uVar23;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_5;
  param_1[0x28] = 0;
  puVar6 = &DAT_100fbab90;
  FUN_1000037f0(&DAT_100fbab90,&DAT_100c3b470);
  FUN_1000c495c(lVar20,param_1 + *(int *)(puVar6 + 0x30),FUN_100291354);
  FUN_100011090(lVar4,param_1 + *(int *)(puVar6 + 0x40),&DAT_100fbab68,&DAT_100c3b450);
  iVar2 = *(int *)(puVar6 + 0x50);
  *(undefined8 *)(param_1 + iVar2) = 0;
  *(undefined1 *)((long)(param_1 + iVar2) + 8) = 1;
  FUN_100011090(lVar5,param_1 + *(int *)(puVar6 + 0x60),&DAT_100fbab60,&DAT_100c3b448);
  FUN_100005808(lVar19,&DAT_100fbab60,&DAT_100c3b448);
  FUN_100005808(puVar17,&DAT_100fbab68,&DAT_100c3b450);
  FUN_10005241c(apuStack_e0[1],FUN_100291354);
  FUN_100005808(lVar5,&DAT_100fbab60,&DAT_100c3b448);
  FUN_100005808(lVar4,&DAT_100fbab68,&DAT_100c3b450);
  FUN_10005241c(lVar20,FUN_100291354);
  _swift_release(local_98);
  return;
}



/* Address: 0x10029714c | FUN_10029714c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002973dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10029714c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ControlSize CVar7;
  long lVar8;
  LocalizedStringResource LVar9;
  undefined *puVar10;
  undefined *puVar11;
  MainActor *pMVar12;
  undefined8 *puVar13;
  UnownedSerialExecutor UVar14;
  UnownedSerialExecutor UVar15;
  long lVar16;
  State SVar17;
  undefined8 uVar18;
  ObservedObject<undefined> OVar19;
  Text TVar20;
  Alignment AVar21;
  undefined *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar23;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar24;
  long lVar25;
  String SVar26;
  undefined8 uStack_320;
  undefined1 auStack_318 [8];
  undefined8 uStack_310;
  undefined1 auStack_308 [8];
  undefined8 auStack_300 [2];
  long alStack_2f0 [2];
  State local_2e0;
  long local_2d8;
  undefined *local_2d0;
  long local_2c8;
  MainActor *local_2c0 [2];
  long local_2b0 [23];
  undefined *local_1f8;
  undefined *puStack_1f0;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
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
  undefined8 uStack_170;
  String local_168;
  undefined1 local_158;
  undefined8 local_150;
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
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar8 = 0;
  local_2b0[3] = param_1;
  FUN_100272db4();
  local_2b0[1] = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = (long)alStack_2f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_2b0[4] = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12;
  local_2b0[2] = lVar8;
  local_2c0[0] = (MainActor *)SwiftUI::BorderedButtonStyle::typeMetadataAccessor();
  local_2c8 = *(long *)(local_2c0[0] + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_2c8 + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar9.unknown = (undefined *)(lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_100fbaba0;
  FUN_1000037f0(&DAT_100fbaba0,&DAT_100c3b488);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = (long)LVar9.unknown - extraout_x8_02;
  puVar11 = &DAT_100fbaba8;
  FUN_1000037f0(&DAT_100fbaba8,&DAT_100c3b490);
  local_2d0 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar23 = lVar25 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_2b0[0] = lVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar23 - extraout_x12_00;
  pMVar12 = Swift::MainActor::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_100eaec10;
  pMVar12 = Swift::MainActor::get_shared(pMVar12,pMVar12);
  puVar13 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar11,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_2c0[1] = pMVar12;
  UVar14 = Swift::Actor::get_unownedExecutor();
  UVar15 = UVar14;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar15.unknown & 1) == 0) {
    param_5 = 0x11;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.swift",0x33,1,0x11,UVar14.unknown,
               puVar13);
  }
  lVar16 = 0;
  FUN_1002969bc();
  local_2d8 = (long)*(int *)(lVar16 + 0x14);
  SVar17.unknown = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  local_2e0.unknown = SVar17.unknown;
  SwiftUI::State::get_wrappedValue(SVar17);
  uVar24 = *(undefined8 *)(param_2 + 8);
  iVar2 = *(int *)(puVar10 + 0x24);
  uVar18 = 0;
  alStack_2f0[1] = param_2;
  FUN_10025cdc8();
  puVar11 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(uVar24);
  OVar19 = SwiftUI::ObservedObject::init(puVar11,uVar18,puVar11);
  *(undefined8 *)(lVar25 + iVar2) = OVar19.unknown;
  ((undefined8 *)(lVar25 + iVar2))[1] = uVar18;
  iVar2 = *(int *)(puVar10 + 0x28);
  *(undefined8 *)(lVar25 + iVar2) = 0;
  ((undefined8 *)(lVar25 + iVar2))[1] = 0;
  FUN_1001cd454(LVar9.unknown);
  SVar26 = (extension_Foundation)::Swift::String::init(LVar9);
  local_168 = SVar26;
  FUN_1002538a0();
  uVar6 = SVar26.str._0_1_;
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar20 = SwiftUI::Text::_init();
  puVar22 = puVar11;
  AVar21 = SwiftUI::Alignment::get_center(TVar20.unknown);
  puVar13 = (undefined8 *)(lVar25 + *(int *)(puVar10 + 0x2c));
  *(undefined **)(lVar23 + -0x10) = AVar21.unknown;
  *(undefined **)(lVar23 + -8) = puVar22;
  *(undefined1 *)(lVar23 + -0x18) = 1;
  *(undefined8 *)(lVar23 + -0x20) = 0;
  *(undefined1 *)(lVar23 + -0x28) = 1;
  *(undefined8 *)(lVar23 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x4061800000000000);
  uStack_190 = uStack_90;
  local_198 = local_98;
  uStack_180 = uStack_80;
  local_188 = local_88;
  uStack_170 = uStack_70;
  local_178 = local_78;
  uStack_1d0 = uStack_d0;
  local_1d8 = local_d8;
  uStack_1c0 = uStack_c0;
  local_1c8 = local_c8;
  uStack_1a0 = uStack_a0;
  local_1a8 = local_a8;
  uStack_1b0 = uStack_b0;
  local_1b8 = local_b8;
  uStack_100 = uStack_90;
  local_108 = local_98;
  uStack_f0 = uStack_80;
  local_f8 = local_88;
  uStack_e0 = uStack_70;
  local_e8 = local_78;
  uStack_140 = uStack_d0;
  local_148 = local_d8;
  uStack_130 = uStack_c0;
  local_138 = local_c8;
  local_168.bridgeObject = puVar11;
  local_168.str = TVar20.unknown;
  uStack_110 = uStack_a0;
  local_118 = local_a8;
  uStack_120 = uStack_b0;
  local_128 = local_b8;
  local_1f8 = TVar20.unknown;
  puStack_1f0 = puVar11;
  local_1e8 = uVar6;
  uStack_1e0 = param_5;
  local_158 = uVar6;
  local_150 = param_5;
  FUN_100297f68(&local_1f8,local_2b0 + 5);
  FUN_100005808(&local_168,&DAT_100fba2c0,&DAT_100c3a9b0);
  uVar5 = uStack_180;
  uVar24 = local_188;
  uVar18 = local_198;
  puVar13[0xd] = uStack_190;
  puVar13[0xc] = uVar18;
  puVar13[0xf] = uVar5;
  puVar13[0xe] = uVar24;
  uVar18 = local_178;
  puVar13[0x11] = uStack_170;
  puVar13[0x10] = uVar18;
  uVar5 = uStack_1c0;
  uVar24 = local_1c8;
  uVar18 = local_1d8;
  puVar13[5] = uStack_1d0;
  puVar13[4] = uVar18;
  puVar13[7] = uVar5;
  puVar13[6] = uVar24;
  uVar5 = uStack_1a0;
  uVar24 = local_1a8;
  uVar18 = local_1b8;
  puVar13[9] = uStack_1b0;
  puVar13[8] = uVar18;
  puVar13[0xb] = uVar5;
  puVar13[10] = uVar24;
  uVar24 = uStack_1e0;
  puVar11 = local_1f8;
  uVar18 = CONCAT71(uStack_1e7,local_1e8);
  puVar13[1] = puStack_1f0;
  *puVar13 = puVar11;
  puVar13[3] = uVar24;
  puVar13[2] = uVar18;
  SwiftUI::BorderedButtonStyle::init();
  puVar11 = &DAT_100fbabb0;
  FUN_100016eac(&DAT_100fbabb0,&DAT_100fbaba0,&DAT_100c3b488,
                &TargetProtocolConformanceDescriptor_100c39ae8);
  puVar22 = &DAT_100fbabb8;
  FUN_100003a00(&DAT_100fbabb8,PTR_typeMetadataAccessor_100eaaca8,
                PTR_SwiftUI__SwiftUI__BorderedButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaac98);
  pMVar12 = local_2c0[0];
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar23,lVar8,puVar10,local_2c0[0],puVar11,puVar22);
  (**(code **)(local_2c8 + 8))(lVar8,pMVar12);
  FUN_100005808(lVar25,&DAT_100fbaba0,&DAT_100c3b488);
  iVar2 = *(int *)(local_2d0 + 0x24);
  puVar10 = &DAT_100fb90a0;
  FUN_1000037f0(&DAT_100fb90a0,&DAT_100c396d0);
  iVar3 = *(int *)(puVar10 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  CVar7 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar8 = CONCAT71((int7)((ulong)puVar10 >> 8),CVar7.value);
  (**(code **)(*(long *)(lVar8 + -8) + 0x68))(lVar23 + iVar2 + (long)iVar3,uVar1,lVar8);
  puVar10 = &DAT_100c3b498;
  _swift_getKeyPath();
  *(undefined **)(lVar23 + iVar2) = puVar10;
  lVar25 = local_2b0[2];
  SwiftUI::State::get_wrappedValue(local_2e0);
  lVar8 = local_2b0[0];
  *(undefined1 *)(lVar25 + *(int *)(local_2b0[1] + 0x14)) = 1;
  FUN_100011090(lVar23,local_2b0[0],&DAT_100fbaba8,&DAT_100c3b490);
  lVar4 = local_2b0[4];
  FUN_1000c495c(lVar25,local_2b0[4],FUN_100272db4);
  lVar16 = local_2b0[3];
  FUN_100011090(lVar8,local_2b0[3],&DAT_100fbaba8,&DAT_100c3b490);
  puVar10 = &DAT_100fbabc0;
  FUN_1000037f0(&DAT_100fbabc0,&DAT_100c3b4c8);
  FUN_1000c495c(lVar4,lVar16 + *(int *)(puVar10 + 0x30),FUN_100272db4);
  FUN_10005241c(lVar25,FUN_100272db4);
  FUN_100005808(lVar23,&DAT_100fbaba8,&DAT_100c3b490);
  FUN_10005241c(lVar4,FUN_100272db4);
  FUN_100005808(lVar8,&DAT_100fbaba8,&DAT_100c3b490);
  _swift_release(local_2c0[1]);
  return;
}



/* Address: 0x1002977c4 | FUN_1002977c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100297a00 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002977c4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined8 uVar10;
  ObservedObject<undefined> OVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *local_b0;
  long local_a8;
  MainActor *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  String local_70;
  
  lVar3 = 0;
  local_80 = param_1;
  FUN_1002969bc();
  lVar16 = *(long *)(lVar3 + -8);
  lVar18 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)&local_b0 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = (undefined *)(lVar17 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fb90b8;
  FUN_1000037f0(&DAT_100fb90b8,&DAT_100c38dd0);
  local_98 = *(long *)(puVar5 + -8);
  local_b0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar3 = (long)LVar4.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar3 = lVar3 - extraout_x12;
  local_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar3 = lVar3 - extraout_x12_00;
  local_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_78 = lVar3 - extraout_x12_01;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a0 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/MultiChoicePaywallView.swift",0x33,1,0x1e,UVar8.unknown,
               puVar7);
  }
  FUN_1001c67a4(LVar4.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar4);
  FUN_1000c495c(param_2,lVar17,FUN_1002969bc);
  uVar15 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar13 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100ec5e98;
  _swift_allocObject(&DAT_100ec5e98,uVar13 + lVar18,uVar15 | 7);
  lVar16 = lVar17;
  FUN_100297d0c(lVar17,puVar5 + uVar13);
  FUN_1002538a0();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  (extension_SwiftUI)::SwiftUI::Button::_init
            (local_78,lVar16,FUN_100297d50,puVar5,PTR___type_metadata_for_Swift_String_100eac208,
             lVar16);
  FUN_1001c5e80(LVar4.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar4);
  FUN_1000c495c(param_2,lVar17,FUN_1002969bc);
  puVar5 = &DAT_100ec5ec0;
  _swift_allocObject(&DAT_100ec5ec0,uVar13 + lVar18,uVar15 | 7);
  FUN_100297d0c(lVar17,puVar5 + uVar13);
  lVar3 = local_a8;
  (extension_SwiftUI)::SwiftUI::Button::_init(local_a8,puVar5,FUN_100297f08,puVar5,puVar1,lVar16);
  uVar12 = *(undefined8 *)(param_2 + 8);
  uVar10 = 0;
  FUN_10025cdc8();
  puVar5 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(uVar12);
  OVar11 = SwiftUI::ObservedObject::init(puVar5,uVar10,puVar5);
  lVar17 = local_90;
  lVar16 = local_98;
  puVar1 = local_b0;
  pcVar14 = *(code **)(local_98 + 0x10);
  (*pcVar14)(local_90,local_78,local_b0);
  lVar18 = local_88;
  (*pcVar14)(local_88,lVar3,puVar1);
  lVar2 = local_80;
  (*pcVar14)(local_80,lVar17,puVar1);
  puVar5 = &DAT_100fbab98;
  FUN_1000037f0(&DAT_100fbab98,&DAT_100c3b480);
  (*pcVar14)(lVar2 + *(int *)(puVar5 + 0x30),lVar18,puVar1);
  puVar7 = (undefined8 *)(lVar2 + *(int *)(puVar5 + 0x40));
  *puVar7 = OVar11.unknown;
  puVar7[1] = uVar10;
  pcVar14 = *(code **)(lVar16 + 8);
  _swift_retain(uVar10);
  (*pcVar14)(lVar3,puVar1);
  (*pcVar14)(local_78,puVar1);
  _swift_release(uVar10);
  (*pcVar14)(lVar18,puVar1);
  (*pcVar14)(lVar17,puVar1);
  _swift_release(local_a0);
  return;
}



/* Address: 0x100297ba4 | FUN_100297ba4 */

void FUN_100297ba4(long param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  URL UVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
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
              ("PasteLicensingAppStore/MultiChoicePaywallView.swift",0x33,1,param_2,UVar5.unknown,
               puVar4);
  }
  lVar7 = *(long *)(param_1 + 8) + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
  uVar9 = *(undefined8 *)(lVar7 + 0x18);
  lVar10 = *(long *)(lVar7 + 0x28);
  FUN_100004640(lVar7,uVar9);
  (*param_3)();
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar2.unknown);
  (**(code **)(lVar10 + 8))(puVar8,uVar9,lVar10);
  (**(code **)(lVar11 + 8))(puVar8,UVar2.unknown);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100297d04 | thunk_FUN_100296acc */

void thunk_FUN_100296acc(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  Alignment unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0x403c000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_100fbab48;
  FUN_1000037f0();
  FUN_100296ba8((long)param_1 + (long)*(int *)(puVar2 + 0x2c));
  SwiftUI::Alignment::get_center(unaff_x20);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar2 = &DAT_100fbab50;
  FUN_1000037f0(&DAT_100fbab50,&DAT_100c3b438);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x24));
  param_1[9] = uStack_48;
  param_1[8] = uStack_50;
  param_1[0xb] = uStack_38;
  param_1[10] = uStack_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = uStack_30;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}



/* Address: 0x100297d08 | thunk_FUN_100297d60 */

void thunk_FUN_100297d60(void)

{
  FUN_100297d60();
  return;
}



/* Address: 0x100297d0c | FUN_100297d0c */

undefined8 FUN_100297d0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002969bc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100297d50 | FUN_100297d50 */

void FUN_100297d50(void)

{
  FUN_100297f18(0x1f,FUN_1001abd38);
  return;
}



/* Address: 0x100297d60 | FUN_100297d60 */

void FUN_100297d60(void)

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
  FUN_1002969bc();
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
  puVar8 = &DAT_100fbaaa8;
  FUN_1000037f0(&DAT_100fbaaa8,&DAT_100c3b3a8);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar8 + 0x1c)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100297f08 | FUN_100297f08 */

void FUN_100297f08(void)

{
  FUN_100297f18(0x20,FUN_1001abce4);
  return;
}



/* Address: 0x100297f18 | FUN_100297f18 */

void FUN_100297f18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002969bc();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100297ba4(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),param_1,param_2);
  return;
}



/* Address: 0x100297f68 | FUN_100297f68 */

undefined8 FUN_100297f68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fba2c0;
  FUN_1000037f0(&DAT_100fba2c0,&DAT_100c3a9b0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100297fb8 | FUN_100297fb8 */

void FUN_100297fb8(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_controlSize(param_1);
  return;
}



/* Address: 0x100297fd8 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x100297fdc | thunk_FUN_100297fe0 */

void thunk_FUN_100297fe0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fbabc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbab50;
  FUN_100005c24(&DAT_100fbab50,&DAT_100c3b438);
  puVar2 = &DAT_100fbabd0;
  FUN_100016eac(&DAT_100fbabd0,&DAT_100fbabd8,&DAT_100c3b4d0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fbabc8 = puVar3;
  return;
}



/* Address: 0x100297fe0 | FUN_100297fe0 */

void FUN_100297fe0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbabc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbab50;
  FUN_100005c24(&DAT_100fbab50,&DAT_100c3b438);
  puVar2 = &DAT_100fbabd0;
  FUN_100016eac(&DAT_100fbabd0,&DAT_100fbabd8,&DAT_100c3b4d0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbabc8 = puVar3;
  return;
}



/* Address: 0x100298078 | thunk_FUN_100297d60 */

void thunk_FUN_100297d60(void)

{
  FUN_100297d60();
  return;
}



/* Address: 0x10029807c | FUN_10029807c */

long * FUN_10029807c(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  DateComponents DVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  Product PVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined *local_88;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) != 0) {
    lVar14 = *param_2;
    *param_1 = lVar14;
    uVar17 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar14 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
    goto LAB_100298374;
  }
  lVar14 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar14;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar10 = 0;
  FUN_1002abb94();
  iVar9 = *(int *)(lVar10 + 0x14);
  DVar11 = Foundation::DateComponents::typeMetadataAccessor();
  lVar18 = *(long *)(DVar11.unknown + -8);
  pcVar21 = *(code **)(lVar18 + 0x30);
  _swift_retain(lVar14);
  puVar12 = puVar2 + iVar9;
  (*pcVar21)(puVar12,1,DVar11.unknown);
  if ((int)puVar12 == 0) {
    (**(code **)(lVar18 + 0x10))(puVar1 + iVar9,puVar2 + iVar9,DVar11.unknown);
    (**(code **)(lVar18 + 0x38))(puVar1 + iVar9,0,1,DVar11.unknown);
  }
  else {
    puVar13 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar9,puVar2 + iVar9,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar10 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar10 + 0x18));
  lVar14 = 0;
  FUN_1002abbf0();
  lVar19 = *(long *)(lVar14 + -8);
  puVar15 = puVar4;
  (**(code **)(lVar19 + 0x30))(puVar4,1,lVar14);
  if ((int)puVar15 == 0) {
    puVar15 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar14);
    if ((int)puVar15 == 2) {
      uVar7 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar7;
      _swift_bridgeObjectRetain();
      local_88 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar9 = *(int *)(local_88 + 0x30);
      pcVar21 = *(code **)(lVar18 + 0x10);
LAB_100298274:
      (*pcVar21)((long)puVar3 + (long)iVar9,(long)puVar4 + (long)iVar9,DVar11.unknown);
      (*pcVar21)((long)puVar3 + (long)*(int *)(local_88 + 0x40),
                 (long)puVar4 + (long)*(int *)(local_88 + 0x40),DVar11.unknown);
    }
    else {
      if ((int)puVar15 == 1) {
        uVar7 = puVar4[1];
        *puVar3 = *puVar4;
        puVar3[1] = uVar7;
        _swift_bridgeObjectRetain();
        local_88 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        iVar9 = *(int *)(local_88 + 0x30);
        pcVar21 = *(code **)(lVar18 + 0x10);
        goto LAB_100298274;
      }
      (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar11.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar14,(ulong)puVar15 & 0xffffffff);
    (**(code **)(lVar19 + 0x38))(puVar3,0,1,lVar14);
  }
  else {
    puVar13 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  iVar9 = *(int *)(lVar10 + 0x1c);
  PVar16 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar16.unknown + -8) + 0x10))(puVar1 + iVar9,puVar2 + iVar9,PVar16.unknown)
  ;
  iVar9 = *(int *)(param_3 + 0x1c);
  puVar5 = (undefined2 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar6 = (undefined2 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar5 = *puVar6;
  uVar7 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(puVar5 + 8) = uVar7;
  uVar7 = *(undefined8 *)(puVar6 + 0x10);
  *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar6 + 0xc);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x14) = *(undefined8 *)(puVar6 + 0x14);
  puVar1 = (undefined1 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined1 *)((long)param_2 + (long)iVar9);
  *puVar1 = *puVar2;
  uVar20 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar20;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar14 = puVar4[1];
  *puVar3 = *puVar4;
  puVar3[1] = lVar14;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar7);
  _swift_retain(uVar20);
LAB_100298374:
  _swift_retain(lVar14);
  return param_1;
}



/* Address: 0x1002983a0 | FUN_1002983a0 */

void FUN_1002983a0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  DateComponents DVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  Product PVar9;
  long lVar10;
  code *pcVar11;
  
  _swift_release(*(undefined8 *)(param_1 + 8));
  lVar1 = param_1 + *(int *)(param_2 + 0x14);
  lVar3 = 0;
  FUN_1002abb94();
  iVar2 = *(int *)(lVar3 + 0x14);
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  lVar10 = *(long *)(DVar4.unknown + -8);
  lVar5 = lVar1 + iVar2;
  (**(code **)(lVar10 + 0x30))(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar4.unknown);
  }
  lVar5 = lVar1 + *(int *)(lVar3 + 0x18);
  lVar6 = 0;
  FUN_1002abbf0();
  lVar7 = lVar5;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar5,1,lVar6);
  if ((int)lVar7 == 0) {
    lVar7 = lVar5;
    _swift_getEnumCaseMultiPayload(lVar5,lVar6);
    iVar2 = (int)lVar7;
    if ((iVar2 == 2) || (iVar2 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
      puVar8 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar5 + *(int *)(puVar8 + 0x30),DVar4.unknown);
      (*pcVar11)(lVar5 + *(int *)(puVar8 + 0x40),DVar4.unknown);
    }
    else if (iVar2 == 0) {
      (**(code **)(lVar10 + 8))(lVar5,DVar4.unknown);
    }
  }
  iVar2 = *(int *)(lVar3 + 0x1c);
  PVar9 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar9.unknown + -8) + 8))(lVar1 + iVar2,PVar9.unknown);
  lVar1 = param_1 + *(int *)(param_2 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x20));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  return;
}



/* Address: 0x10029852c | FUN_10029852c */

undefined8 * FUN_10029852c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  DateComponents DVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  Product PVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  code *pcVar20;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar10 = 0;
  FUN_1002abb94();
  iVar9 = *(int *)(lVar10 + 0x14);
  DVar11 = Foundation::DateComponents::typeMetadataAccessor();
  lVar17 = *(long *)(DVar11.unknown + -8);
  pcVar20 = *(code **)(lVar17 + 0x30);
  _swift_retain(uVar7);
  puVar12 = puVar2 + iVar9;
  (*pcVar20)(puVar12,1,DVar11.unknown);
  if ((int)puVar12 == 0) {
    (**(code **)(lVar17 + 0x10))(puVar1 + iVar9,puVar2 + iVar9,DVar11.unknown);
    (**(code **)(lVar17 + 0x38))(puVar1 + iVar9,0,1,DVar11.unknown);
  }
  else {
    puVar13 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar9,puVar2 + iVar9,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar10 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar10 + 0x18));
  lVar14 = 0;
  FUN_1002abbf0();
  lVar18 = *(long *)(lVar14 + -8);
  puVar15 = puVar4;
  (**(code **)(lVar18 + 0x30))(puVar4,1,lVar14);
  if ((int)puVar15 == 0) {
    puVar15 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar14);
    if (((int)puVar15 == 2) || ((int)puVar15 == 1)) {
      uVar7 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar7;
      _swift_bridgeObjectRetain();
      puVar13 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar20 = *(code **)(lVar17 + 0x10);
      (*pcVar20)((long)puVar3 + (long)*(int *)(puVar13 + 0x30),
                 (long)puVar4 + (long)*(int *)(puVar13 + 0x30),DVar11.unknown);
      (*pcVar20)((long)puVar3 + (long)*(int *)(puVar13 + 0x40),
                 (long)puVar4 + (long)*(int *)(puVar13 + 0x40),DVar11.unknown);
    }
    else {
      (**(code **)(lVar17 + 0x10))(puVar3,puVar4,DVar11.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar14,(ulong)puVar15 & 0xffffffff);
    (**(code **)(lVar18 + 0x38))(puVar3,0,1,lVar14);
  }
  else {
    puVar13 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  iVar9 = *(int *)(lVar10 + 0x1c);
  PVar16 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar16.unknown + -8) + 0x10))(puVar1 + iVar9,puVar2 + iVar9,PVar16.unknown)
  ;
  iVar9 = *(int *)(param_3 + 0x1c);
  puVar5 = (undefined2 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar6 = (undefined2 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar5 = *puVar6;
  uVar7 = *(undefined8 *)(puVar6 + 8);
  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(puVar5 + 8) = uVar7;
  uVar7 = *(undefined8 *)(puVar6 + 0x10);
  *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar6 + 0xc);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x14) = *(undefined8 *)(puVar6 + 0x14);
  puVar1 = (undefined1 *)((long)param_1 + (long)iVar9);
  puVar2 = (undefined1 *)((long)param_2 + (long)iVar9);
  *puVar1 = *puVar2;
  uVar19 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar19;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = param_2[1];
  *puVar3 = *param_2;
  puVar3[1] = uVar8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar7);
  _swift_retain(uVar19);
  _swift_retain(uVar8);
  return param_1;
}



/* Address: 0x1002987e8 | FUN_1002987e8 */

undefined8 * FUN_1002987e8(undefined8 *param_1,undefined8 *param_2,long param_3)

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
      goto LAB_1002988e4;
    }
    (**(code **)(lVar18 + 0x18))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar9 == 0) {
    (**(code **)(lVar18 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar18 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002988e4:
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
      goto LAB_100298b28;
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
    goto LAB_100298b28;
  }
  puVar10 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_100298b28:
  iVar5 = *(int *)(lVar6 + 0x1c);
  PVar14 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar14.unknown + -8) + 0x18))(puVar1 + iVar5,puVar2 + iVar5,PVar14.unknown)
  ;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  uVar16 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
  uVar16 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(puVar2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar16);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(puVar2 + 0x28);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar16 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  _swift_retain();
  _swift_release(uVar16);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar3 = *param_2;
  uVar16 = puVar3[1];
  puVar3[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar16);
  return param_1;
}



/* Address: 0x100298cd0 | FUN_100298cd0 */

undefined8 * FUN_100298cd0(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  undefined8 uVar17;
  undefined8 uVar18;
  
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
  iVar5 = *(int *)(param_3 + 0x1c);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar16 = *puVar4;
  uVar18 = puVar4[3];
  uVar17 = puVar4[2];
  puVar3[1] = puVar4[1];
  *puVar3 = uVar16;
  puVar3[3] = uVar18;
  puVar3[2] = uVar17;
  uVar16 = puVar4[4];
  puVar3[5] = puVar4[5];
  puVar3[4] = uVar16;
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar16 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar16;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar16 = *param_2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = param_2[1];
  *puVar3 = uVar16;
  return param_1;
}



/* Address: 0x100298f3c | FUN_100298f3c */

undefined8 * FUN_100298f3c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  DateComponents DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  Product PVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  
  uVar18 = param_2[1];
  uVar8 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar18;
  _swift_release(uVar8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar9 = 0;
  FUN_1002abb94();
  iVar7 = *(int *)(lVar9 + 0x14);
  DVar10 = Foundation::DateComponents::typeMetadataAccessor();
  lVar21 = *(long *)(DVar10.unknown + -8);
  pcVar20 = *(code **)(lVar21 + 0x30);
  puVar11 = puVar1 + iVar7;
  (*pcVar20)(puVar11,1,DVar10.unknown);
  puVar12 = puVar2 + iVar7;
  (*pcVar20)(puVar12,1,DVar10.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar21 + 8))(puVar1 + iVar7,DVar10.unknown);
      goto LAB_100299028;
    }
    (**(code **)(lVar21 + 0x28))(puVar1 + iVar7,puVar2 + iVar7,DVar10.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar21 + 0x20))(puVar1 + iVar7,puVar2 + iVar7,DVar10.unknown);
    (**(code **)(lVar21 + 0x38))(puVar1 + iVar7,0,1,DVar10.unknown);
  }
  else {
LAB_100299028:
    puVar13 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar9 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar9 + 0x18));
  lVar14 = 0;
  FUN_1002abbf0();
  lVar19 = *(long *)(lVar14 + -8);
  pcVar20 = *(code **)(lVar19 + 0x30);
  puVar15 = puVar3;
  (*pcVar20)(puVar3,1,lVar14);
  puVar16 = puVar4;
  (*pcVar20)(puVar4,1,lVar14);
  if ((int)puVar15 == 0) {
    if ((int)puVar16 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar3,FUN_1002abbf0);
        puVar15 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar14);
        if ((int)puVar15 == 2) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
          puVar13 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar20 = *(code **)(lVar21 + 0x20);
          (*pcVar20)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar13 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar13 + 0x30)),DVar10.unknown);
          (*pcVar20)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar13 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar13 + 0x40)),DVar10.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar14,2);
        }
        else if ((int)puVar15 == 1) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
          puVar13 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar20 = *(code **)(lVar21 + 0x20);
          (*pcVar20)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar13 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar13 + 0x30)),DVar10.unknown);
          (*pcVar20)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar13 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar13 + 0x40)),DVar10.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar14,1);
        }
        else {
          (**(code **)(lVar21 + 0x20))(puVar3,puVar4,DVar10.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar14,0);
        }
      }
      goto LAB_100299254;
    }
    FUN_10005241c(puVar3,FUN_1002abbf0);
  }
  else if ((int)puVar16 == 0) {
    puVar15 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar14);
    if (((int)puVar15 == 2) || ((int)puVar15 == 1)) {
      uVar18 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar18;
      puVar13 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar20 = *(code **)(lVar21 + 0x20);
      (*pcVar20)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar13 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar13 + 0x30)),DVar10.unknown);
      (*pcVar20)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar13 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar13 + 0x40)),DVar10.unknown);
    }
    else {
      (**(code **)(lVar21 + 0x20))(puVar3,puVar4,DVar10.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar14,puVar15);
    (**(code **)(lVar19 + 0x38))(puVar3,0,1,lVar14);
    goto LAB_100299254;
  }
  puVar13 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
LAB_100299254:
  iVar7 = *(int *)(lVar9 + 0x1c);
  PVar17 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar17.unknown + -8) + 0x28))(puVar1 + iVar7,puVar2 + iVar7,PVar17.unknown)
  ;
  puVar5 = (undefined2 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar6 = (undefined2 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar5 = *puVar6;
  uVar18 = *(undefined8 *)(puVar6 + 8);
  uVar8 = *(undefined8 *)(puVar5 + 8);
  *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar6 + 4);
  *(undefined8 *)(puVar5 + 8) = uVar18;
  _swift_bridgeObjectRelease(uVar8);
  uVar18 = *(undefined8 *)(puVar6 + 0x10);
  uVar8 = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar6 + 0xc);
  *(undefined8 *)(puVar5 + 0x10) = uVar18;
  _swift_bridgeObjectRelease(uVar8);
  *(undefined8 *)(puVar5 + 0x14) = *(undefined8 *)(puVar6 + 0x14);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar18 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  _swift_release(uVar18);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar3 = *param_2;
  uVar18 = puVar3[1];
  puVar3[1] = param_2[1];
  _swift_release(uVar18);
  return param_1;
}



/* Address: 0x1002993b8 | FUN_1002993b8 */

void FUN_1002993b8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002993c4 | FUN_1002993c4 */

ulong FUN_1002993c4(long param_1,undefined8 param_2,long param_3)

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
                    /* WARNING: Could not recover jumptable at 0x00010029943c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Address: 0x100299440 | FUN_100299440 */

void FUN_100299440(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10029944c | FUN_10029944c */

void FUN_10029944c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  FUN_1002abb94();
                    /* WARNING: Could not recover jumptable at 0x0001002994bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,lVar1);
  return;
}



/* Address: 0x1002994c0 | FUN_1002994c0 */

void FUN_1002994c0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fbac38,&TargetStructDescriptor_100caa830);
  return;
}



/* Address: 0x1002994d4 | FUN_1002994d4 */

void FUN_1002994d4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_48 = &DAT_100c3b4f8;
  lVar1 = 0x13f;
  FUN_1002abb94();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &DAT_100c3b510;
    local_30 = &DAT_100c3b528;
    puStack_28 = &DAT_100c3b528;
    _swift_initStructMetadata(param_1,0x100,5,&local_48,param_1 + 0x10);
  }
  return;
}



/* Address: 0x10029955c | FUN_10029955c */

void FUN_10029955c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa8ac,1);
  return;
}



/* Address: 0x10029956c | FUN_10029956c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100299624 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10029956c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  Alignment AVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar2 = 0;
  FUN_1002994c0();
  lVar13 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar11 = *(undefined8 *)(unaff_x20 + 8);
  *param_1 = uVar11;
  puVar3 = &DAT_100fbac80;
  FUN_1000037f0(&DAT_100fbac80,&DAT_100c3b590);
  iVar1 = *(int *)(puVar3 + 0x24);
  _swift_retain(uVar11);
  FUN_1002997b0((long)param_1 + (long)iVar1);
  puVar9 = PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528;
  local_68 = 0;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(puVar3 + 0x28),puVar3,
             PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528);
  local_68 = 0;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(puVar3 + 0x2c),puVar3,puVar9);
  FUN_1000c495c();
  uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ec5f28;
  _swift_allocObject(&DAT_100ec5f28,uVar12 + lVar2,uVar10 | 7);
  FUN_1000523d8(auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0),puVar3 + uVar12,FUN_1002994c0);
  AVar4.unknown = &DAT_100fbac88;
  puVar9 = &DAT_100c3b598;
  FUN_1000037f0();
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(AVar4.unknown + 0x24));
  *puVar6 = FUN_1002999b0;
  puVar6[1] = 0;
  puVar6[2] = FUN_100299ad0;
  puVar6[3] = puVar3;
  AVar4 = SwiftUI::Alignment::get_bottom(AVar4);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x44,UVar7.unknown,puVar6);
  }
  puVar3 = &DAT_100fbac90;
  FUN_1000037f0(&DAT_100fbac90,&DAT_100c3b5a0);
  iVar1 = *(int *)(puVar3 + 0x24);
  FUN_100299b0c((long)param_1 + (long)iVar1);
  _swift_release(pMVar5);
  puVar3 = &DAT_100fbac98;
  FUN_1000037f0(&DAT_100fbac98,&DAT_100c3b5a8);
  puVar6 = (undefined8 *)((long)param_1 + (long)iVar1 + (long)*(int *)(puVar3 + 0x24));
  *puVar6 = AVar4.unknown;
  puVar6[1] = puVar9;
  return;
}



/* Address: 0x1002997ac | thunk_FUN_10029956c */

void thunk_FUN_10029956c(void)

{
  FUN_10029956c();
  return;
}



/* Address: 0x1002997b0 | FUN_1002997b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002997b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Set SVar4;
  Set SVar5;
  long lVar6;
  Alignment AVar7;
  OS_os_log *pOVar8;
  undefined8 uVar9;
  undefined *unaff_x20;
  undefined8 uVar10;
  double local_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  HVar2 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100fbad90;
  FUN_1000037f0(&DAT_100fbad90,&DAT_100c3b700);
  SVar4.unknown = unaff_x20;
  FUN_100299cd4((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SVar5 = SwiftUI::Edge::Set::get_top(SVar4);
  SVar4 = SVar5;
  if (DAT_100fbad98 != -1) {
    SVar4.unknown = (undefined *)&DAT_100fbad98;
    _swift_once(&DAT_100fbad98,FUN_10029fbf4);
  }
  uVar9 = DAT_100fbada0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  puVar3 = &DAT_100fbada8;
  FUN_1000037f0(&DAT_100fbada8,&DAT_100c3b708);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar5.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  lVar6 = 0;
  FUN_1002994c0();
  uVar10 = *(undefined8 *)(unaff_x20 + *(int *)(lVar6 + 0x20));
  uVar9 = *(undefined8 *)((long)(unaff_x20 + *(int *)(lVar6 + 0x20)) + 8);
  AVar7.unknown = &DAT_100fb9f40;
  FUN_1000037f0();
  SwiftUI::State::get_wrappedValue((State)AVar7.unknown);
  AVar7 = SwiftUI::Alignment::get_center(AVar7);
  if (NAN(local_c8)) {
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    pOVar8 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)AVar7.unknown);
    os::_os_log(AVar7.unknown,0x100000000,pOVar8,"Contradictory frame constraints specified.",0x2a,2
                ,PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar3 = &DAT_100fbadb0;
  FUN_1000037f0(&DAT_100fbadb0,&DAT_100c3b710);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  param_1[9] = uStack_78;
  param_1[8] = local_80;
  param_1[0xb] = uStack_68;
  param_1[10] = uStack_70;
  param_1[0xd] = uStack_58;
  param_1[0xc] = local_60;
  param_1[1] = uVar9;
  *param_1 = uVar10;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  return;
}



/* Address: 0x1002999b0 | FUN_1002999b0 */

void FUN_1002999b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,GeometryProxy param_4)

{
  SwiftUI::GeometryProxy::get_size(param_4);
  *param_1 = param_3;
  return;
}



/* Address: 0x1002999d8 | FUN_1002999d8 */

void FUN_1002999d8(undefined8 *param_1,long param_2)

{
  int iVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 local_58;
  
  uVar8 = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x43,UVar4.unknown,puVar3);
  }
  lVar6 = 0;
  FUN_1002994c0();
  iVar1 = *(int *)(lVar6 + 0x20);
  puVar7 = &DAT_100fb9f40;
  local_58 = uVar8;
  FUN_1000037f0(&DAT_100fb9f40,&DAT_100c3aff0);
  SwiftUI::State::set_wrappedValue((State *)(param_2 + iVar1),&local_58,puVar7);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100299acc | thunk_FUN_1002a0178 */

void thunk_FUN_1002a0178(void)

{
  FUN_1002a0178();
  return;
}



/* Address: 0x100299ad0 | FUN_100299ad0 */

void FUN_100299ad0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002994c0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1002999d8(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100299b0c | FUN_100299b0c */

void FUN_100299b0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,VerticalAlignment param_6)

{
  undefined1 *puVar1;
  VerticalAlignment VVar2;
  undefined *puVar3;
  Set SVar4;
  Set SVar5;
  Set unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  VVar2 = SwiftUI::VerticalAlignment::get_center(param_6);
  *param_1 = VVar2.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar3 = &DAT_100fbaca0;
  FUN_1000037f0(&DAT_100fbaca0,&DAT_100c3b5b0);
  FUN_10029cfe4((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SVar4 = SwiftUI::Edge::Set::get_horizontal(unaff_x20);
  SVar5 = SVar4;
  if (DAT_100fbaca8 != -1) {
    SVar5.unknown = (undefined *)&DAT_100fbaca8;
    _swift_once(&DAT_100fbaca8,FUN_10029fdd8);
  }
  uVar6 = DAT_100fbacb0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  SVar5.unknown = &DAT_100fbacb8;
  uVar7 = param_3;
  uVar9 = param_4;
  uVar11 = param_5;
  FUN_1000037f0(&DAT_100fbacb8,&DAT_100c3b5b8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SVar4 = SwiftUI::Edge::Set::get_top(SVar5);
  SVar5 = SVar4;
  if (DAT_100fbacc0 != -1) {
    SVar5.unknown = (undefined *)&DAT_100fbacc0;
    _swift_once(&DAT_100fbacc0,FUN_10029fdf8);
  }
  uVar6 = DAT_100fbacc8;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  SVar5.unknown = &DAT_100fbacd0;
  uVar8 = uVar7;
  uVar10 = uVar9;
  uVar12 = uVar11;
  FUN_1000037f0(&DAT_100fbacd0,&DAT_100c3b5c0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(SVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar9;
  *(undefined8 *)(puVar1 + 0x20) = uVar11;
  puVar1[0x28] = 0;
  SVar4 = SwiftUI::Edge::Set::get_bottom(SVar5);
  SVar5 = SVar4;
  if (DAT_100fbacd8 != -1) {
    SVar5.unknown = (undefined *)&DAT_100fbacd8;
    _swift_once(&DAT_100fbacd8,FUN_10029fe18);
  }
  uVar6 = DAT_100fbace0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  puVar3 = &DAT_100fbace8;
  FUN_1000037f0(&DAT_100fbace8,&DAT_100c3b5c8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar12;
  puVar1[0x28] = 0;
  return;
}



/* Address: 0x100299cd4 | FUN_100299cd4 */

void FUN_100299cd4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  HorizontalAlignment HVar7;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = &DAT_100fbadb8;
  FUN_1000037f0(&DAT_100fbadb8,&DAT_100c3b718);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined8 *)(puVar8 + -extraout_x12);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteLicensingAppStore/OfferPaywallView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x4a,UVar5.unknown,puVar4);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar6);
  *puVar9 = HVar7.unknown;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 0;
  puVar2 = &DAT_100fbadc0;
  FUN_1000037f0(&DAT_100fbadc0,&DAT_100c3b720);
  FUN_100299e94((undefined1 *)((long)puVar9 + (long)*(int *)(puVar2 + 0x2c)),param_2);
  FUN_100011090(puVar9,puVar8,&DAT_100fbadb8,&DAT_100c3b718);
  FUN_100011090(puVar8,param_1,&DAT_100fbadb8,&DAT_100c3b718);
  puVar2 = &DAT_100fbadc8;
  FUN_1000037f0(&DAT_100fbadc8,&DAT_100c3b728);
  iVar1 = *(int *)(puVar2 + 0x30);
  *(undefined8 *)(param_1 + iVar1) = 0;
  *(undefined1 *)((undefined8 *)(param_1 + iVar1) + 1) = 0;
  FUN_100005808(puVar9,&DAT_100fbadb8,&DAT_100c3b718);
  FUN_100005808(puVar8,&DAT_100fbadb8,&DAT_100c3b718);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100299e94 | FUN_100299e94 */

void FUN_100299e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Alignment param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  Alignment width;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  char *pcVar13;
  Set SVar14;
  EdgeInsets EVar15;
  HorizontalAlignment HVar16;
  Set SVar17;
  CGFloat _all;
  long extraout_x8;
  long extraout_x8_00;
  MainActor *pMVar18;
  long extraout_x8_01;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  MainActor *local_e50;
  undefined8 *local_e48;
  MainActor *local_e40;
  long local_e38;
  long local_e30;
  long local_e28;
  undefined1 auStack_e20 [408];
  undefined1 auStack_c88 [408];
  undefined1 auStack_af0 [336];
  undefined1 auStack_9a0 [336];
  undefined *local_850;
  undefined8 local_848;
  undefined1 local_840;
  undefined1 auStack_83f [343];
  undefined *local_6e8;
  undefined8 local_6e0;
  undefined1 local_6d8;
  undefined1 auStack_6d7 [343];
  undefined1 auStack_580 [360];
  undefined1 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined1 local_3f0;
  undefined1 auStack_3e8 [360];
  undefined1 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 auStack_250 [408];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  pMVar10 = (MainActor *)&DAT_100fbadd0;
  local_e38 = param_1;
  FUN_1000037f0(&DAT_100fbadd0,&DAT_100c3b730);
  local_e50 = pMVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(pMVar10 + -8) + 0x40));
  lVar20 = (long)&local_e50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = &DAT_100fbadd8;
  local_e48 = (undefined8 *)(lVar20 - extraout_x12);
  FUN_1000037f0(&DAT_100fbadd8,&DAT_100c3b738);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar19 = (lVar20 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e28 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar18 = (MainActor *)(lVar19 - extraout_x12_00);
  puVar9 = &DAT_100fbade0;
  FUN_1000037f0(&DAT_100fbade0,&DAT_100c3b740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar19 = (long)pMVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e30 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12_01;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar11 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_e40 = pMVar10;
  UVar12 = Swift::Actor::get_unownedExecutor();
  pcVar13 = (char *)UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar13 & 1) == 0) {
    pcVar13 = "PasteLicensingAppStore/OfferPaywallView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x55,UVar12.unknown,puVar11);
  }
  FUN_10029a70c(lVar19);
  SVar14 = SwiftUI::Edge::Set::get_top((Set)pcVar13);
  SVar17 = SVar14;
  if (DAT_100fbade8 != -1) {
    SVar17.unknown = (undefined *)&DAT_100fbade8;
    _swift_once(&DAT_100fbade8,FUN_10029fcdc);
  }
  uVar21 = DAT_100fbadf0;
  EVar15 = SwiftUI::EdgeInsets::init(SVar17.unknown);
  puVar1 = (undefined1 *)(lVar19 + *(int *)(puVar9 + 0x24));
  *puVar1 = (char)SVar14.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  HVar16 = SwiftUI::HorizontalAlignment::get_center(EVar15.unknown);
  FUN_10029b880(auStack_250,param_6.unknown);
  _memcpy(auStack_af0,auStack_250,0x14a);
  _memcpy(auStack_9a0,auStack_250,0x14a);
  FUN_100011090(auStack_af0,auStack_3e8,&DAT_100fbadf8,&DAT_100c3b748);
  FUN_100005808(auStack_9a0,&DAT_100fbadf8,&DAT_100c3b748);
  SVar17.unknown = _memcpy((void *)((ulong)auStack_3e8 | 7),auStack_af0,0x14a);
  SVar17 = SwiftUI::Edge::Set::get_top(SVar17);
  if (DAT_100fbae00 != -1) {
    _swift_once(&DAT_100fbae00,FUN_10029fcfc);
  }
  uVar21 = DAT_100fbae08;
  local_848 = 0x4020000000000000;
  local_840 = 0;
  local_850 = HVar16.unknown;
  _all.unknown = _memcpy(auStack_83f,auStack_3e8,0x151);
  SwiftUI::EdgeInsets::init(_all);
  uVar22 = param_3;
  uVar24 = param_4;
  uVar26 = param_5;
  _memcpy(auStack_c88,&local_850,0x162);
  local_6e0 = 0x4020000000000000;
  local_6d8 = 0;
  local_6e8 = HVar16.unknown;
  _memcpy(auStack_6d7,auStack_3e8,0x151);
  FUN_100011090(&local_850,auStack_250,&DAT_100fbae10,&DAT_100c3b750);
  FUN_100005808(&local_6e8,&DAT_100fbae10,&DAT_100c3b750);
  _memcpy(auStack_580,auStack_c88,0x168);
  local_3f0 = 0;
  local_418 = (char)SVar17.unknown;
  local_410 = uVar21;
  local_408 = param_3;
  local_400 = param_4;
  local_3f8 = param_5;
  _memcpy(auStack_3e8,auStack_c88,0x168);
  local_258 = 0;
  local_280 = (char)SVar17.unknown;
  local_278 = uVar21;
  local_270 = param_3;
  local_268 = param_4;
  local_260 = param_5;
  FUN_100011090(auStack_580,auStack_250,&DAT_100fbae18,&DAT_100c3b758);
  SVar17.unknown = auStack_3e8;
  FUN_100005808(SVar17.unknown,&DAT_100fbae18,&DAT_100c3b758);
  FUN_10029a97c(pMVar18);
  SVar14 = SwiftUI::Edge::Set::get_top(SVar17);
  SVar17 = SVar14;
  if (DAT_100fbae20 != -1) {
    SVar17.unknown = (undefined *)&DAT_100fbae20;
    _swift_once(&DAT_100fbae20,FUN_10029fd1c);
  }
  uVar21 = DAT_100fbae28;
  EVar15 = SwiftUI::EdgeInsets::init(SVar17.unknown);
  pMVar10 = pMVar18 + *(int *)(puVar8 + 0x24);
  *pMVar10 = SUB81(SVar14.unknown,0);
  *(undefined8 *)(pMVar10 + 8) = uVar21;
  *(undefined8 *)(pMVar10 + 0x10) = uVar22;
  *(undefined8 *)(pMVar10 + 0x18) = uVar24;
  *(undefined8 *)(pMVar10 + 0x20) = uVar26;
  pMVar10[0x28] = (MainActor)0x0;
  HVar16 = SwiftUI::HorizontalAlignment::get_center(EVar15.unknown);
  puVar11 = local_e48;
  *local_e48 = HVar16.unknown;
  puVar11[1] = 0x4020000000000000;
  *(undefined1 *)(puVar11 + 2) = 0;
  puVar8 = &DAT_100fbae30;
  FUN_1000037f0(&DAT_100fbae30,&DAT_100c3b760);
  FUN_10029b3bc((long)puVar11 + (long)*(int *)(puVar8 + 0x2c));
  if (DAT_100fbae38 != -1) {
    param_6.unknown = (undefined *)&DAT_100fbae38;
    _swift_once(&DAT_100fbae38,FUN_10029fcbc);
  }
  width.unknown = DAT_100fbae40.unknown;
  SwiftUI::Alignment::get_center(param_6);
  SwiftUI::_FrameLayout::_init(width);
  SVar17.unknown = &DAT_100fbae48;
  FUN_1000037f0(&DAT_100fbae48,&DAT_100c3b768);
  puVar2 = (undefined8 *)((long)puVar11 + (long)*(int *)(SVar17.unknown + 0x24));
  puVar2[1] = uStack_b0;
  *puVar2 = local_b8;
  puVar2[3] = uStack_a0;
  puVar2[2] = uStack_a8;
  puVar2[5] = uStack_90;
  puVar2[4] = local_98;
  SVar14 = SwiftUI::Edge::Set::get_top(SVar17);
  SVar17 = SVar14;
  uVar21 = uStack_a8;
  if (DAT_100fbae50 != -1) {
    SVar17.unknown = (undefined *)&DAT_100fbae50;
    _swift_once(&DAT_100fbae50,FUN_10029fd3c);
    uVar21 = uStack_a8;
  }
  uVar22 = DAT_100fbae58;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  SVar17.unknown = &DAT_100fbae60;
  uVar23 = uVar21;
  uVar25 = uVar24;
  uVar27 = uVar26;
  FUN_1000037f0(&DAT_100fbae60,&DAT_100c3b770);
  puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(SVar17.unknown + 0x24));
  *puVar1 = (char)SVar14.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar22;
  *(undefined8 *)(puVar1 + 0x10) = uVar21;
  *(undefined8 *)(puVar1 + 0x18) = uVar24;
  *(undefined8 *)(puVar1 + 0x20) = uVar26;
  puVar1[0x28] = 0;
  SVar14 = SwiftUI::Edge::Set::get_horizontal(SVar17);
  SVar17 = SVar14;
  if (DAT_100fbae68 != -1) {
    SVar17.unknown = (undefined *)&DAT_100fbae68;
    _swift_once(&DAT_100fbae68,FUN_10029fd5c);
  }
  uVar21 = DAT_100fbae70;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  SVar17.unknown = &DAT_100fbae78;
  uVar22 = uVar23;
  uVar24 = uVar25;
  uVar26 = uVar27;
  FUN_1000037f0(&DAT_100fbae78,&DAT_100c3b778);
  puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(SVar17.unknown + 0x24));
  *puVar1 = (char)SVar14.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = uVar23;
  *(undefined8 *)(puVar1 + 0x18) = uVar25;
  *(undefined8 *)(puVar1 + 0x20) = uVar27;
  puVar1[0x28] = 0;
  SVar14 = SwiftUI::Edge::Set::get_bottom(SVar17);
  SVar17 = SVar14;
  if (DAT_100fbae80 != -1) {
    SVar17.unknown = (undefined *)&DAT_100fbae80;
    _swift_once(&DAT_100fbae80,FUN_10029fd7c);
  }
  uVar21 = DAT_100fbae88;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  lVar6 = local_e30;
  puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(local_e50 + 0x24));
  *puVar1 = (char)SVar14.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = uVar22;
  *(undefined8 *)(puVar1 + 0x18) = uVar24;
  *(undefined8 *)(puVar1 + 0x20) = uVar26;
  puVar1[0x28] = 0;
  FUN_100011090(lVar19,local_e30,&DAT_100fbade0,&DAT_100c3b740);
  _memcpy(auStack_c88,auStack_580,0x191);
  lVar7 = local_e28;
  FUN_100011090(pMVar18,local_e28,&DAT_100fbadd8,&DAT_100c3b738);
  local_e50 = pMVar18;
  FUN_100011090(puVar11,lVar20,&DAT_100fbadd0,&DAT_100c3b730);
  lVar5 = local_e38;
  FUN_100011090(lVar6,local_e38,&DAT_100fbade0,&DAT_100c3b740);
  puVar8 = &DAT_100fbae90;
  FUN_1000037f0(&DAT_100fbae90,&DAT_100c3b780);
  iVar3 = *(int *)(puVar8 + 0x30);
  _memcpy(auStack_250,auStack_c88,0x191);
  _memcpy((void *)(lVar5 + iVar3),auStack_c88,0x191);
  FUN_100011090(lVar7,lVar5 + *(int *)(puVar8 + 0x40),&DAT_100fbadd8,&DAT_100c3b738);
  FUN_100011090(lVar20,lVar5 + *(int *)(puVar8 + 0x50),&DAT_100fbadd0,&DAT_100c3b730);
  FUN_100011090(auStack_250,auStack_e20,&DAT_100fbae18,&DAT_100c3b758);
  FUN_100005808(puVar11,&DAT_100fbadd0,&DAT_100c3b730);
  FUN_100005808(local_e50,&DAT_100fbadd8,&DAT_100c3b738);
  FUN_100005808(lVar19,&DAT_100fbade0,&DAT_100c3b740);
  FUN_100005808(lVar20,&DAT_100fbadd0,&DAT_100c3b730);
  FUN_100005808(lVar7,&DAT_100fbadd8,&DAT_100c3b738);
  FUN_100005808(auStack_c88,&DAT_100fbae18,&DAT_100c3b758);
  FUN_100005808(lVar6,&DAT_100fbade0,&DAT_100c3b740);
  _swift_release(local_e40);
  return;
}



/* Address: 0x10029a70c | FUN_10029a70c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10029a70c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ResizingMode RVar4;
  RoundedCornerStyle RVar5;
  undefined7 extraout_var;
  NSImage *nsImage;
  undefined *self;
  Image IVar7;
  Image IVar8;
  Alignment capInsets;
  RoundedRectangle RVar9;
  undefined7 extraout_var_00;
  long extraout_x8;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_1a0 [72];
  undefined *local_158;
  undefined8 uStack_150;
  undefined2 local_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 local_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 local_126;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined *local_110;
  undefined8 uStack_108;
  undefined2 local_100;
  undefined8 local_fe;
  undefined8 uStack_f6;
  undefined8 local_ee;
  undefined8 uStack_e6;
  undefined8 local_de;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined6 uStack_c6;
  undefined2 local_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 local_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *puVar6;
  
  RVar4 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar6 = (undefined *)CONCAT71(extraout_var,RVar4.value);
  lVar10 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  capInsets.unknown = auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  nsImage = (NSImage *)
            NSImage::imageNamed_
                      ((ID)&_OBJC_CLASS___NSImage,
                       *(undefined8 *)PTR__NSImageNameApplicationIcon_100ea90d8);
  if (nsImage == (NSImage *)0x0) {
    self = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    nsImage = (NSImage *)objc_stub::init((ID)self);
  }
  IVar7 = SwiftUI::Image::init(nsImage);
  IVar8.unknown = puVar6;
  (**(code **)(lVar10 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  IVar8 = SwiftUI::Image::resizable(capInsets.unknown,(ResizingMode)(__int8)IVar7.unknown,IVar8);
  _swift_release(IVar7.unknown);
  (**(code **)(lVar10 + 8))(capInsets.unknown,puVar6);
  SwiftUI::Alignment::get_center(capInsets);
  SwiftUI::_FrameLayout::_init((Alignment)0x4054000000000000);
  uStack_b8 = (undefined2)uStack_88;
  uStack_b6 = (undefined6)((ulong)uStack_88 >> 0x10);
  local_c0 = (undefined2)local_90;
  uStack_be = (undefined6)((ulong)local_90 >> 0x10);
  uStack_a8 = (undefined2)uStack_78;
  uStack_a6 = (undefined6)((ulong)uStack_78 >> 0x10);
  uStack_b0 = (undefined2)uStack_80;
  uStack_ae = (undefined6)((ulong)uStack_80 >> 0x10);
  uStack_98 = (undefined2)uStack_68;
  uStack_96 = (undefined6)((ulong)uStack_68 >> 0x10);
  local_a0 = (undefined2)local_70;
  uStack_9e = (undefined6)((ulong)local_70 >> 0x10);
  uStack_150 = 0;
  local_148 = 1;
  uStack_13e = uStack_be;
  uStack_138 = uStack_b8;
  uStack_146 = uStack_c6;
  uStack_140 = local_c0;
  uStack_12e = uStack_ae;
  uStack_128 = uStack_a8;
  local_136 = uStack_b6;
  uStack_130 = uStack_b0;
  uStack_11e = uStack_9e;
  local_126 = uStack_a6;
  uStack_120 = local_a0;
  puVar6 = &DAT_100fbaf60;
  local_158 = IVar8.unknown;
  uStack_118 = uStack_98;
  uStack_116 = uStack_96;
  FUN_1000037f0(&DAT_100fbaf60,&DAT_100c3b838);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  RVar9 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar9.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar5 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar5.value) + -8) + 0x68))
            ((long)puVar1 + (long)iVar3,uVar2,CONCAT71(extraout_var_00,RVar5.value));
  auVar11 = NEON_fmov(0x4024000000000000,8);
  puVar1[1] = auVar11._8_8_;
  *puVar1 = auVar11._0_8_;
  puVar6 = &DAT_100fb94e8;
  FUN_1000037f0(&DAT_100fb94e8,&DAT_100c39280);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x24)) = 0x100;
  param_1[5] = CONCAT62(uStack_12e,uStack_130);
  param_1[4] = CONCAT62(local_136,uStack_138);
  param_1[7] = CONCAT62(uStack_11e,uStack_120);
  param_1[6] = CONCAT62(local_126,uStack_128);
  param_1[8] = CONCAT62(uStack_116,uStack_118);
  param_1[1] = uStack_150;
  *param_1 = local_158;
  param_1[3] = CONCAT62(uStack_13e,uStack_140);
  param_1[2] = CONCAT62(uStack_146,local_148);
  uStack_108 = 0;
  local_100 = 1;
  local_fe = CONCAT26(local_c0,uStack_c6);
  uStack_f6 = CONCAT26(uStack_b8,uStack_be);
  uStack_e6 = CONCAT26(uStack_a8,uStack_ae);
  local_ee = CONCAT26(uStack_b0,uStack_b6);
  local_de = CONCAT26(local_a0,uStack_a6);
  uStack_ce = uStack_96;
  uStack_d6 = uStack_9e;
  uStack_d0 = uStack_98;
  local_110 = IVar8.unknown;
  FUN_100011090(&local_158,auStack_1a0,&DAT_100fbaf68,&DAT_100c3b848);
  FUN_100005808(&local_110,&DAT_100fbaf68,&DAT_100c3b848);
  return;
}



/* Address: 0x10029a97c | FUN_10029a97c */

void FUN_10029a97c(String *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  Product PVar6;
  Alignment AVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  undefined *puVar13;
  undefined *puVar14;
  void *pvVar15;
  undefined8 *puVar16;
  long unaff_x20;
  String SVar17;
  undefined1 auStack_b60 [128];
  undefined8 local_ae0;
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
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
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
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined *local_8d0;
  undefined *local_8c8;
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
  undefined *local_850;
  undefined *local_848;
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
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined *local_630;
  undefined *puStack_628;
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
  undefined *local_5b0;
  undefined *local_5a8;
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
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
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
  undefined *local_390;
  undefined *puStack_388;
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
  undefined8 local_320;
  undefined8 uStack_318;
  undefined *local_310;
  undefined *local_308;
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
  undefined8 local_230;
  undefined8 uStack_228;
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
  undefined8 uStack_188;
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
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  void *pvStack_e8;
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
  undefined *local_70;
  void *pvStack_68;
  
  lVar5 = 0;
  FUN_1002994c0();
  PVar6.unknown = (undefined *)0x0;
  FUN_1002abb94((long)*(int *)(lVar5 + 0x14));
  SVar17 = StoreKit::Product::get_displayPrice(PVar6);
  pvVar15 = SVar17.bridgeObject;
  pcVar1 = (char *)(unaff_x20 + *(int *)(lVar5 + 0x18));
  pcVar2 = *(char **)(pcVar1 + 0x18);
  puVar13 = *(undefined **)(pcVar1 + 0x20);
  cVar3 = *pcVar1;
  lVar5 = 0;
  FUN_1002a04f4();
  iVar4 = *(int *)(lVar5 + 0x18);
  AVar7.unknown = puVar13;
  _swift_bridgeObjectRetain();
  if (cVar3 == '\x01') {
    FUN_1001cb1d4();
  }
  else {
    FUN_1001caed4((long)&param_1->str + (long)iVar4);
  }
  *param_1 = SVar17;
  param_1[1].str = pcVar2;
  param_1[1].bridgeObject = puVar13;
  AVar7 = SwiftUI::Alignment::get_topLeading(AVar7);
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar13 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar10 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar13,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar16 = puVar10;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0xa3,UVar11.unknown,puVar16);
  }
  FUN_10029c470(&local_e0,0x4044000000000000);
  uStack_2d8 = uStack_b8;
  local_2e0 = local_c0;
  uStack_2c8 = uStack_a8;
  local_2d0 = uStack_b0;
  uStack_2b8 = uStack_98;
  local_2c0 = local_a0;
  uStack_2a8 = uStack_88;
  local_2b0 = uStack_90;
  uStack_138 = uStack_b8;
  local_140 = local_c0;
  uStack_128 = uStack_a8;
  local_130 = uStack_b0;
  uStack_108 = uStack_88;
  local_110 = uStack_90;
  uStack_118 = uStack_98;
  local_120 = local_a0;
  uStack_2f8 = uStack_d8;
  local_300 = local_e0;
  uStack_2e8 = uStack_c8;
  local_2f0 = uStack_d0;
  uStack_158 = uStack_d8;
  local_160 = local_e0;
  uStack_148 = uStack_c8;
  local_150 = uStack_d0;
  uStack_278 = uStack_b8;
  local_280 = local_c0;
  uStack_268 = uStack_a8;
  local_270 = uStack_b0;
  uStack_258 = uStack_98;
  local_260 = local_a0;
  uStack_248 = uStack_88;
  local_250 = uStack_90;
  uStack_298 = uStack_d8;
  local_2a0 = local_e0;
  uStack_288 = uStack_c8;
  local_290 = uStack_d0;
  FUN_100011090(&local_300,&local_380,&DAT_100fbaed0,&DAT_100c3b7b8);
  FUN_100005808(&local_2a0,&DAT_100fbaed0,&DAT_100c3b7b8);
  uStack_218 = uStack_138;
  local_220 = local_140;
  uStack_208 = uStack_128;
  local_210 = local_130;
  uStack_1f8 = uStack_118;
  local_200 = local_120;
  uStack_1e8 = uStack_108;
  local_1f0 = local_110;
  uStack_238 = uStack_158;
  local_240 = local_160;
  uStack_228 = uStack_148;
  local_230 = local_150;
  uStack_1d8 = 0x403e000000000000;
  local_1e0 = 0xc050000000000000;
  uStack_1b8 = uStack_148;
  local_1c0 = local_150;
  uStack_1c8 = uStack_158;
  local_1d0 = local_160;
  uStack_198 = uStack_128;
  local_1a0 = local_130;
  uStack_1a8 = uStack_138;
  local_1b0 = local_140;
  uStack_178 = uStack_108;
  local_180 = local_110;
  uStack_188 = uStack_118;
  local_190 = local_120;
  uStack_168 = 0x403e000000000000;
  local_170 = 0xc050000000000000;
  FUN_100011090(&local_240,&local_e0,&DAT_100fbaed8,&DAT_100c3b7c0);
  FUN_100005808(&local_1d0,&DAT_100fbaed8,&DAT_100c3b7c0);
  _swift_release(pMVar9);
  uStack_98 = uStack_1f8;
  local_a0 = local_200;
  uStack_88 = uStack_1e8;
  uStack_90 = local_1f0;
  uStack_78 = uStack_1d8;
  local_80 = local_1e0;
  uStack_d8 = uStack_238;
  local_e0 = local_240;
  uStack_c8 = uStack_228;
  uStack_d0 = local_230;
  uStack_b8 = uStack_218;
  local_c0 = local_220;
  uStack_a8 = uStack_208;
  uStack_b0 = local_210;
  uStack_158 = uStack_238;
  local_160 = local_240;
  uStack_148 = uStack_228;
  local_150 = local_230;
  uStack_f8 = uStack_1d8;
  local_100 = local_1e0;
  uStack_138 = uStack_218;
  local_140 = local_220;
  uStack_128 = uStack_208;
  local_130 = local_210;
  uStack_118 = uStack_1f8;
  local_120 = local_200;
  uStack_108 = uStack_1e8;
  local_110 = local_1f0;
  puVar13 = &DAT_100fbaee0;
  local_f0 = AVar7.unknown;
  pvStack_e8 = pvVar15;
  FUN_1000037f0(&DAT_100fbaee0,&DAT_100c3b7c8);
  puVar16 = (undefined8 *)((long)&param_1->str + (long)*(int *)(puVar13 + 0x24));
  puVar16[9] = uStack_118;
  puVar16[8] = local_120;
  puVar16[0xb] = uStack_108;
  puVar16[10] = local_110;
  puVar16[0xd] = uStack_f8;
  puVar16[0xc] = local_100;
  puVar16[0xf] = pvStack_e8;
  puVar16[0xe] = local_f0;
  puVar16[1] = uStack_158;
  *puVar16 = local_160;
  puVar16[3] = uStack_148;
  puVar16[2] = local_150;
  puVar16[5] = uStack_138;
  puVar16[4] = local_140;
  puVar16[7] = uStack_128;
  puVar16[6] = local_130;
  puVar13 = &DAT_100fbaee8;
  local_70 = AVar7.unknown;
  pvStack_68 = pvVar15;
  FUN_100011090(&local_160,&local_380,&DAT_100fbaee8,&DAT_100c3b7d0);
  AVar7.unknown = (undefined *)&local_e0;
  FUN_100005808(AVar7.unknown,&DAT_100fbaee8,&DAT_100c3b7d0);
  AVar7 = SwiftUI::Alignment::get_bottomLeading(AVar7);
  pMVar9 = Swift::MainActor::get_shared(pMVar8,(MainActor *)AVar7.unknown);
  puVar16 = puVar10;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0xa6,UVar11.unknown,puVar16);
  }
  FUN_10029c470(&local_380,0x4030000000000000);
  uStack_578 = uStack_358;
  local_580 = local_360;
  uStack_568 = uStack_348;
  local_570 = local_350;
  uStack_558 = uStack_338;
  local_560 = local_340;
  uStack_548 = uStack_328;
  local_550 = local_330;
  uStack_3d8 = uStack_358;
  local_3e0 = local_360;
  uStack_3c8 = uStack_348;
  local_3d0 = local_350;
  uStack_3a8 = uStack_328;
  local_3b0 = local_330;
  uStack_3b8 = uStack_338;
  local_3c0 = local_340;
  uStack_598 = uStack_378;
  local_5a0 = local_380;
  uStack_588 = uStack_368;
  local_590 = local_370;
  uStack_3f8 = uStack_378;
  local_400 = local_380;
  uStack_3e8 = uStack_368;
  local_3f0 = local_370;
  uStack_518 = uStack_358;
  local_520 = local_360;
  uStack_508 = uStack_348;
  local_510 = local_350;
  uStack_4f8 = uStack_338;
  local_500 = local_340;
  uStack_4e8 = uStack_328;
  local_4f0 = local_330;
  uStack_538 = uStack_378;
  local_540 = local_380;
  uStack_528 = uStack_368;
  local_530 = local_370;
  FUN_100011090(&local_5a0,&local_620,&DAT_100fbaed0,&DAT_100c3b7b8);
  FUN_100005808(&local_540,&DAT_100fbaed0,&DAT_100c3b7b8);
  uStack_4b8 = uStack_3d8;
  local_4c0 = local_3e0;
  uStack_4a8 = uStack_3c8;
  local_4b0 = local_3d0;
  uStack_498 = uStack_3b8;
  local_4a0 = local_3c0;
  uStack_488 = uStack_3a8;
  local_490 = local_3b0;
  uStack_4d8 = uStack_3f8;
  local_4e0 = local_400;
  uStack_4c8 = uStack_3e8;
  local_4d0 = local_3f0;
  uStack_478 = 0xc03e000000000000;
  local_480 = 0xc052000000000000;
  uStack_458 = uStack_3e8;
  local_460 = local_3f0;
  uStack_468 = uStack_3f8;
  local_470 = local_400;
  uStack_438 = uStack_3c8;
  local_440 = local_3d0;
  uStack_448 = uStack_3d8;
  local_450 = local_3e0;
  uStack_418 = uStack_3a8;
  local_420 = local_3b0;
  uStack_428 = uStack_3b8;
  local_430 = local_3c0;
  uStack_408 = 0xc03e000000000000;
  local_410 = 0xc052000000000000;
  FUN_100011090(&local_4e0,&local_380,&DAT_100fbaed8,&DAT_100c3b7c0);
  FUN_100005808(&local_470,&DAT_100fbaed8,&DAT_100c3b7c0);
  _swift_release(pMVar9);
  uStack_338 = uStack_498;
  local_340 = local_4a0;
  uStack_328 = uStack_488;
  local_330 = local_490;
  uStack_318 = uStack_478;
  local_320 = local_480;
  uStack_378 = uStack_4d8;
  local_380 = local_4e0;
  uStack_368 = uStack_4c8;
  local_370 = local_4d0;
  uStack_348 = uStack_4a8;
  local_350 = local_4b0;
  uStack_358 = uStack_4b8;
  local_360 = local_4c0;
  uStack_3f8 = uStack_4d8;
  local_400 = local_4e0;
  uStack_3e8 = uStack_4c8;
  local_3f0 = local_4d0;
  uStack_398 = uStack_478;
  local_3a0 = local_480;
  uStack_3d8 = uStack_4b8;
  local_3e0 = local_4c0;
  uStack_3c8 = uStack_4a8;
  local_3d0 = local_4b0;
  uStack_3b8 = uStack_498;
  local_3c0 = local_4a0;
  uStack_3a8 = uStack_488;
  local_3b0 = local_490;
  puVar14 = &DAT_100fbaef0;
  local_390 = AVar7.unknown;
  puStack_388 = puVar13;
  FUN_1000037f0(&DAT_100fbaef0,&DAT_100c3b7d8);
  puVar16 = (undefined8 *)((long)&param_1->str + (long)*(int *)(puVar14 + 0x24));
  puVar16[9] = uStack_3b8;
  puVar16[8] = local_3c0;
  puVar16[0xb] = uStack_3a8;
  puVar16[10] = local_3b0;
  puVar16[0xd] = uStack_398;
  puVar16[0xc] = local_3a0;
  puVar16[0xf] = puStack_388;
  puVar16[0xe] = local_390;
  puVar16[1] = uStack_3f8;
  *puVar16 = local_400;
  puVar16[3] = uStack_3e8;
  puVar16[2] = local_3f0;
  puVar16[5] = uStack_3d8;
  puVar16[4] = local_3e0;
  puVar16[7] = uStack_3c8;
  puVar16[6] = local_3d0;
  puVar14 = &DAT_100fbaee8;
  local_310 = AVar7.unknown;
  local_308 = puVar13;
  FUN_100011090(&local_400,&local_620,&DAT_100fbaee8,&DAT_100c3b7d0);
  AVar7.unknown = (undefined *)&local_380;
  FUN_100005808(AVar7.unknown,&DAT_100fbaee8,&DAT_100c3b7d0);
  AVar7 = SwiftUI::Alignment::get_trailing(AVar7);
  pMVar9 = Swift::MainActor::get_shared(pMVar8,(MainActor *)AVar7.unknown);
  puVar16 = puVar10;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0xa9,UVar11.unknown,puVar16);
  }
  FUN_10029c470(&local_620,0x4038000000000000);
  uStack_818 = uStack_5f8;
  local_820 = local_600;
  uStack_808 = uStack_5e8;
  uStack_810 = local_5f0;
  uStack_7f8 = uStack_5d8;
  local_800 = local_5e0;
  uStack_7e8 = uStack_5c8;
  uStack_7f0 = local_5d0;
  uStack_678 = uStack_5f8;
  local_680 = local_600;
  uStack_668 = uStack_5e8;
  local_670 = local_5f0;
  uStack_648 = uStack_5c8;
  local_650 = local_5d0;
  uStack_658 = uStack_5d8;
  local_660 = local_5e0;
  uStack_838 = uStack_618;
  local_840 = local_620;
  uStack_828 = uStack_608;
  uStack_830 = local_610;
  uStack_698 = uStack_618;
  local_6a0 = local_620;
  uStack_688 = uStack_608;
  local_690 = local_610;
  uStack_7b8 = uStack_5f8;
  local_7c0 = local_600;
  uStack_7a8 = uStack_5e8;
  uStack_7b0 = local_5f0;
  uStack_798 = uStack_5d8;
  local_7a0 = local_5e0;
  uStack_788 = uStack_5c8;
  uStack_790 = local_5d0;
  uStack_7d8 = uStack_618;
  local_7e0 = local_620;
  uStack_7c8 = uStack_608;
  uStack_7d0 = local_610;
  FUN_100011090(&local_840,&local_8c0,&DAT_100fbaed0,&DAT_100c3b7b8);
  FUN_100005808(&local_7e0,&DAT_100fbaed0,&DAT_100c3b7b8);
  uStack_748 = uStack_668;
  local_750 = local_670;
  uStack_738 = uStack_658;
  local_740 = local_660;
  uStack_728 = uStack_648;
  local_730 = local_650;
  uStack_778 = uStack_698;
  local_780 = local_6a0;
  uStack_768 = uStack_688;
  local_770 = local_690;
  uStack_758 = uStack_678;
  local_760 = local_680;
  uStack_718 = 0x4030000000000000;
  local_720 = 0x4048000000000000;
  uStack_6f8 = uStack_688;
  local_700 = local_690;
  uStack_708 = uStack_698;
  local_710 = local_6a0;
  uStack_6d8 = uStack_668;
  local_6e0 = local_670;
  uStack_6e8 = uStack_678;
  local_6f0 = local_680;
  uStack_6b8 = uStack_648;
  local_6c0 = local_650;
  uStack_6c8 = uStack_658;
  local_6d0 = local_660;
  uStack_6a8 = 0x4030000000000000;
  local_6b0 = 0x4048000000000000;
  FUN_100011090(&local_780,&local_620,&DAT_100fbaed8,&DAT_100c3b7c0);
  FUN_100005808(&local_710,&DAT_100fbaed8,&DAT_100c3b7c0);
  _swift_release(pMVar9);
  uStack_5d8 = uStack_738;
  local_5e0 = local_740;
  uStack_5c8 = uStack_728;
  local_5d0 = local_730;
  uStack_5b8 = uStack_718;
  local_5c0 = local_720;
  uStack_618 = uStack_778;
  local_620 = local_780;
  uStack_608 = uStack_768;
  local_610 = local_770;
  uStack_5e8 = uStack_748;
  local_5f0 = local_750;
  uStack_5f8 = uStack_758;
  local_600 = local_760;
  uStack_698 = uStack_778;
  local_6a0 = local_780;
  uStack_688 = uStack_768;
  local_690 = local_770;
  uStack_638 = uStack_718;
  local_640 = local_720;
  uStack_678 = uStack_758;
  local_680 = local_760;
  uStack_668 = uStack_748;
  local_670 = local_750;
  uStack_658 = uStack_738;
  local_660 = local_740;
  uStack_648 = uStack_728;
  local_650 = local_730;
  puVar13 = &DAT_100fbaef8;
  local_630 = AVar7.unknown;
  puStack_628 = puVar14;
  FUN_1000037f0(&DAT_100fbaef8,&DAT_100c3b7e0);
  puVar16 = (undefined8 *)((long)&param_1->str + (long)*(int *)(puVar13 + 0x24));
  puVar16[9] = uStack_658;
  puVar16[8] = local_660;
  puVar16[0xb] = uStack_648;
  puVar16[10] = local_650;
  puVar16[0xd] = uStack_638;
  puVar16[0xc] = local_640;
  puVar16[0xf] = puStack_628;
  puVar16[0xe] = local_630;
  puVar16[1] = uStack_698;
  *puVar16 = local_6a0;
  puVar16[3] = uStack_688;
  puVar16[2] = local_690;
  puVar16[5] = uStack_678;
  puVar16[4] = local_680;
  puVar16[7] = uStack_668;
  puVar16[6] = local_670;
  puVar13 = &DAT_100fbaee8;
  local_5b0 = AVar7.unknown;
  local_5a8 = puVar14;
  FUN_100011090(&local_6a0,&local_8c0,&DAT_100fbaee8,&DAT_100c3b7d0);
  AVar7.unknown = (undefined *)&local_620;
  FUN_100005808(AVar7.unknown,&DAT_100fbaee8,&DAT_100c3b7d0);
  AVar7 = SwiftUI::Alignment::get_topTrailing(AVar7);
  pMVar8 = Swift::MainActor::get_shared(pMVar8,(MainActor *)AVar7.unknown);
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0xac,UVar11.unknown,puVar10);
  }
  FUN_10029c470(&local_8c0,0x4030000000000000);
  uStack_ab8 = uStack_898;
  local_ac0 = local_8a0;
  uStack_aa8 = uStack_888;
  uStack_ab0 = uStack_890;
  uStack_a98 = uStack_878;
  local_aa0 = local_880;
  uStack_a88 = uStack_868;
  uStack_a90 = uStack_870;
  uStack_918 = uStack_898;
  local_920 = local_8a0;
  uStack_908 = uStack_888;
  uStack_910 = uStack_890;
  uStack_8f8 = uStack_878;
  local_900 = local_880;
  uStack_8e8 = uStack_868;
  local_8f0 = uStack_870;
  uStack_ad8 = uStack_8b8;
  local_ae0 = local_8c0;
  uStack_ac8 = uStack_8a8;
  uStack_ad0 = uStack_8b0;
  uStack_938 = uStack_8b8;
  local_940 = local_8c0;
  uStack_928 = uStack_8a8;
  uStack_930 = uStack_8b0;
  uStack_a38 = uStack_878;
  local_a40 = local_880;
  uStack_a28 = uStack_868;
  uStack_a30 = uStack_870;
  uStack_a58 = uStack_898;
  local_a60 = local_8a0;
  uStack_a48 = uStack_888;
  uStack_a50 = uStack_890;
  uStack_a78 = uStack_8b8;
  local_a80 = local_8c0;
  uStack_a68 = uStack_8a8;
  uStack_a70 = uStack_8b0;
  FUN_100011090(&local_ae0,auStack_b60,&DAT_100fbaed0,&DAT_100c3b7b8);
  FUN_100005808(&local_a80,&DAT_100fbaed0,&DAT_100c3b7b8);
  uStack_9f8 = uStack_918;
  local_a00 = local_920;
  uStack_9e8 = uStack_908;
  uStack_9f0 = uStack_910;
  uStack_9d8 = uStack_8f8;
  local_9e0 = local_900;
  uStack_9c8 = uStack_8e8;
  uStack_9d0 = local_8f0;
  uStack_a18 = uStack_938;
  local_a20 = local_940;
  uStack_a08 = uStack_928;
  uStack_a10 = uStack_930;
  uStack_9b8 = 0x4043000000000000;
  local_9c0 = 0x4050000000000000;
  uStack_9a8 = uStack_938;
  uStack_9b0 = local_940;
  uStack_998 = uStack_928;
  local_9a0 = uStack_930;
  uStack_988 = uStack_918;
  uStack_990 = local_920;
  uStack_978 = uStack_908;
  local_980 = uStack_910;
  uStack_968 = uStack_8f8;
  uStack_970 = local_900;
  uStack_958 = uStack_8e8;
  local_960 = local_8f0;
  uStack_948 = 0x4043000000000000;
  uStack_950 = 0x4050000000000000;
  FUN_100011090(&local_a20,&local_8c0,&DAT_100fbaed8,&DAT_100c3b7c0);
  FUN_100005808(&uStack_9b0,&DAT_100fbaed8,&DAT_100c3b7c0);
  _swift_release(pMVar8);
  uStack_878 = uStack_9d8;
  local_880 = local_9e0;
  uStack_868 = uStack_9c8;
  uStack_870 = uStack_9d0;
  uStack_858 = uStack_9b8;
  local_860 = local_9c0;
  uStack_8b8 = uStack_a18;
  local_8c0 = local_a20;
  uStack_8a8 = uStack_a08;
  uStack_8b0 = uStack_a10;
  uStack_898 = uStack_9f8;
  local_8a0 = local_a00;
  uStack_888 = uStack_9e8;
  uStack_890 = uStack_9f0;
  uStack_938 = uStack_a18;
  local_940 = local_a20;
  uStack_928 = uStack_a08;
  uStack_930 = uStack_a10;
  uStack_8e8 = uStack_9c8;
  local_8f0 = uStack_9d0;
  uStack_8d8 = uStack_9b8;
  local_8e0 = local_9c0;
  uStack_918 = uStack_9f8;
  local_920 = local_a00;
  uStack_908 = uStack_9e8;
  uStack_910 = uStack_9f0;
  uStack_8f8 = uStack_9d8;
  local_900 = local_9e0;
  puVar14 = &DAT_100fbaf00;
  local_8d0 = AVar7.unknown;
  local_8c8 = puVar13;
  FUN_1000037f0(&DAT_100fbaf00,&DAT_100c3b7e8);
  puVar10 = (undefined8 *)((long)&param_1->str + (long)*(int *)(puVar14 + 0x24));
  puVar10[9] = uStack_8f8;
  puVar10[8] = local_900;
  puVar10[0xb] = uStack_8e8;
  puVar10[10] = local_8f0;
  puVar10[0xd] = uStack_8d8;
  puVar10[0xc] = local_8e0;
  puVar10[0xf] = local_8c8;
  puVar10[0xe] = local_8d0;
  puVar10[1] = uStack_938;
  *puVar10 = local_940;
  puVar10[3] = uStack_928;
  puVar10[2] = uStack_930;
  puVar10[5] = uStack_918;
  puVar10[4] = local_920;
  puVar10[7] = uStack_908;
  puVar10[6] = uStack_910;
  local_850 = AVar7.unknown;
  local_848 = puVar13;
  FUN_100011090(&local_940,auStack_b60,&DAT_100fbaee8,&DAT_100c3b7d0);
  FUN_100005808(&local_8c0,&DAT_100fbaee8,&DAT_100c3b7d0);
  return;
}



/* Address: 0x10029b3bc | FUN_10029b3bc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010029b730 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10029b3bc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ObservedObject<undefined> OVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  long alStack_c0 [4];
  MainActor *local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100fbae98;
  alStack_c0[3] = param_2;
  local_88 = param_1;
  FUN_1000037f0(&DAT_100fbae98,&DAT_100c3b788);
  local_90 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar4 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar19 = (undefined8 *)(lVar4 - extraout_x12);
  lVar4 = 0;
  FUN_1002994c0();
  alStack_c0[2] = *(long *)(lVar4 + -8);
  lVar18 = *(long *)(alStack_c0[2] + 0x40);
  alStack_c0[1] = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = (long)puVar19 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar20 = lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar20 - extraout_x12_00;
  puVar3 = &DAT_100fbaba0;
  FUN_1000037f0(&DAT_100fbaba0,&DAT_100c3b488);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar4 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar4 = lVar4 - extraout_x12_01;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a0 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x69,UVar7.unknown,puVar6);
  }
  lVar2 = alStack_c0[3];
  lVar9 = _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription;
  lVar17 = *(long *)(alStack_c0[3] + 8);
  _swift_beginAccess(lVar17 + _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription,
                     auStack_78,0,0);
  FUN_100011090(lVar17 + lVar9,lVar16,&DAT_100fb8618,&DAT_100c385c0);
  FUN_10025f638(lVar16,lVar20);
  lVar9 = 0;
  FUN_1002abb94();
  pcVar22 = *(code **)(*(long *)(lVar9 + -8) + 0x30);
  lVar16 = lVar20;
  (*pcVar22)(lVar20,1,lVar9);
  if ((int)lVar16 == 1) {
    FUN_1000c495c(lVar2 + *(int *)(alStack_c0[1] + 0x14),lVar4,FUN_1002abb94);
    lVar16 = lVar20;
    (*pcVar22)(lVar20,1,lVar9);
    if ((int)lVar16 != 1) {
      FUN_100005808(lVar20,&DAT_100fb8618,&DAT_100c385c0);
    }
  }
  else {
    FUN_1000523d8(lVar20,lVar4,FUN_1002abb94);
  }
  FUN_1000c495c(lVar2,lVar23,FUN_1002994c0);
  uVar15 = (ulong)*(byte *)(alStack_c0[2] + 0x50);
  uVar21 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100ec6018;
  _swift_allocObject(&DAT_100ec6018,uVar21 + lVar18,uVar15 | 7);
  FUN_1000523d8(lVar23,puVar10 + uVar21,FUN_1002994c0);
  iVar1 = *(int *)(puVar3 + 0x24);
  uVar11 = 0;
  FUN_10025cdc8();
  puVar12 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain_n(lVar17,2);
  uVar14 = uVar11;
  OVar13 = SwiftUI::ObservedObject::init(puVar12,uVar11,puVar12);
  *(undefined8 *)(lVar4 + iVar1) = OVar13.unknown;
  ((undefined8 *)(lVar4 + iVar1))[1] = uVar14;
  iVar1 = *(int *)(puVar3 + 0x28);
  *(undefined8 *)(lVar4 + iVar1) = FUN_1002a04ac;
  ((undefined8 *)(lVar4 + iVar1))[1] = puVar10;
  FUN_10029c878(lVar4 + *(int *)(puVar3 + 0x2c));
  OVar13 = SwiftUI::ObservedObject::init(OVar13.unknown,uVar11,puVar12);
  *puVar19 = OVar13.unknown;
  puVar19[1] = uVar11;
  *(undefined1 *)(puVar19 + 2) = 1;
  FUN_10029cbb8((long)puVar19 + (long)*(int *)(local_90 + 0x28));
  lVar16 = local_98;
  FUN_100011090(lVar4,local_98,&DAT_100fbaba0,&DAT_100c3b488);
  lVar20 = local_80;
  FUN_100011090(puVar19,local_80,&DAT_100fbae98,&DAT_100c3b788);
  lVar18 = local_88;
  FUN_100011090(lVar16,local_88,&DAT_100fbaba0,&DAT_100c3b488);
  puVar3 = &DAT_100fbaea0;
  FUN_1000037f0(&DAT_100fbaea0,&DAT_100c3b790);
  FUN_100011090(lVar20,lVar18 + *(int *)(puVar3 + 0x30),&DAT_100fbae98,&DAT_100c3b788);
  FUN_100005808(puVar19,&DAT_100fbae98,&DAT_100c3b788);
  FUN_100005808(lVar4,&DAT_100fbaba0,&DAT_100c3b488);
  FUN_100005808(lVar20,&DAT_100fbae98,&DAT_100c3b788);
  FUN_100005808(lVar16,&DAT_100fbaba0,&DAT_100c3b488);
  _swift_release(local_a0);
  return;
}



/* Address: 0x10029b880 | FUN_10029b880 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10029b880(void *param_1,CGFloat param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  byte bVar1;
  double dVar2;
  LocalizedStringResource LVar3;
  Design DVar4;
  undefined *puVar5;
  LocalizedStringResource LVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  char *pcVar12;
  Text TVar13;
  undefined7 extraout_var;
  Font FVar14;
  Text TVar15;
  Alignment AVar16;
  HierarchicalShapeStyle HVar17;
  Text TVar18;
  OS_os_log *pOVar19;
  code *pcVar20;
  code *pcVar21;
  undefined *puVar22;
  undefined *puVar23;
  char *pcVar24;
  undefined *puVar25;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  CGFloat size;
  String SVar26;
  undefined8 uStack_e00;
  undefined1 auStack_df8 [8];
  undefined8 uStack_df0;
  undefined1 auStack_de8 [8];
  undefined8 auStack_de0 [2];
  undefined1 auStack_dd0 [4];
  undefined4 local_dcc;
  code *local_dc8;
  undefined *puStack_dc0;
  char *local_db8;
  code *local_db0;
  code *local_da8;
  undefined *local_da0;
  uint local_d94;
  LocalizedStringResource local_d90;
  MainActor *local_d88;
  void *local_d80;
  undefined1 auStack_d78 [168];
  char *local_cd0;
  undefined *puStack_cc8;
  undefined8 uStack_cc0;
  char *pcStack_cb8;
  undefined *local_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined *puStack_c40;
  undefined8 uStack_c38;
  undefined2 local_c30;
  undefined *local_c28;
  undefined *puStack_c20;
  undefined8 local_c18;
  undefined *puStack_c10;
  undefined *local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined2 local_b88;
  char *local_b80;
  undefined *puStack_b78;
  undefined8 uStack_b70;
  char *pcStack_b68;
  undefined *local_b60;
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
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined *puStack_af0;
  undefined8 uStack_ae8;
  undefined2 local_ae0;
  undefined *local_ad0;
  undefined *puStack_ac8;
  undefined1 local_ac0;
  undefined7 uStack_abf;
  undefined *local_ab8;
  undefined *local_ab0;
  undefined1 uStack_aa8;
  undefined1 uStack_aa0;
  undefined7 uStack_a9f;
  undefined1 uStack_a98;
  undefined7 local_a97;
  undefined1 uStack_a90;
  undefined7 uStack_a8f;
  undefined1 uStack_a88;
  undefined7 local_a87;
  undefined1 uStack_a80;
  undefined7 uStack_a7f;
  undefined1 uStack_a78;
  undefined7 local_a77;
  undefined1 uStack_a70;
  undefined7 uStack_a6f;
  undefined1 uStack_a68;
  undefined7 local_a67;
  undefined1 uStack_a60;
  undefined7 uStack_a5f;
  undefined1 uStack_a58;
  undefined7 local_a57;
  undefined1 uStack_a50;
  undefined7 uStack_a4f;
  undefined1 uStack_a48;
  undefined7 local_a47;
  undefined1 uStack_a40;
  undefined7 uStack_a3f;
  undefined1 uStack_a38;
  undefined7 uStack_a37;
  undefined *local_a30;
  undefined *local_a28;
  undefined1 local_a20;
  undefined *local_a18;
  undefined *local_a10;
  undefined1 local_a08;
  undefined8 local_a07;
  undefined8 uStack_9ff;
  undefined8 local_9f7;
  undefined8 uStack_9ef;
  undefined8 local_9e7;
  undefined8 uStack_9df;
  undefined8 local_9d7;
  undefined8 uStack_9cf;
  undefined8 local_9c7;
  undefined8 uStack_9bf;
  undefined8 local_9b7;
  undefined8 uStack_9af;
  undefined8 local_9a7;
  undefined7 uStack_99f;
  undefined1 uStack_998;
  undefined7 uStack_997;
  undefined *local_990;
  undefined *puStack_988;
  undefined8 uStack_980;
  undefined *puStack_978;
  undefined *local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined2 local_8f0;
  undefined *local_8e0;
  undefined *puStack_8d8;
  undefined8 uStack_8d0;
  undefined *puStack_8c8;
  undefined *local_8c0;
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
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined2 local_840;
  char *local_830;
  undefined *puStack_828;
  undefined8 uStack_820;
  char *pcStack_818;
  undefined *local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined *puStack_7a0;
  undefined8 uStack_798;
  undefined2 local_790;
  undefined *local_780;
  undefined *puStack_778;
  undefined8 uStack_770;
  undefined *puStack_768;
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
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined2 local_6e0;
  undefined7 uStack_6d8;
  undefined1 local_6d1;
  undefined7 uStack_6d0;
  undefined1 uStack_6c9;
  undefined7 uStack_6c8;
  undefined1 local_6c1;
  undefined7 uStack_6c0;
  undefined1 uStack_6b9;
  undefined7 uStack_6b8;
  undefined1 local_6b1;
  undefined7 uStack_6b0;
  undefined1 uStack_6a9;
  undefined7 uStack_6a8;
  undefined1 local_6a1;
  undefined7 uStack_6a0;
  undefined1 uStack_699;
  undefined7 uStack_698;
  undefined1 local_691;
  undefined7 uStack_690;
  undefined1 uStack_689;
  undefined7 uStack_688;
  undefined1 local_681;
  undefined7 uStack_680;
  undefined1 uStack_679;
  undefined7 uStack_678;
  undefined1 local_671;
  undefined7 uStack_670;
  undefined1 uStack_669;
  undefined7 uStack_668;
  undefined *local_660;
  undefined *puStack_658;
  undefined8 local_650;
  undefined *puStack_648;
  undefined *local_640;
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
  undefined *local_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined *puStack_5a8;
  undefined *local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined2 local_520;
  undefined *local_510;
  undefined *puStack_508;
  undefined1 local_500;
  undefined7 uStack_4ff;
  char *local_4f8;
  undefined *local_4f0;
  undefined1 uStack_4e8;
  undefined1 uStack_4e0;
  undefined7 uStack_4df;
  undefined1 uStack_4d8;
  undefined7 local_4d7;
  undefined1 uStack_4d0;
  undefined7 uStack_4cf;
  undefined1 uStack_4c8;
  undefined7 local_4c7;
  undefined1 uStack_4c0;
  undefined7 uStack_4bf;
  undefined1 uStack_4b8;
  undefined7 local_4b7;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  undefined1 uStack_4a8;
  undefined7 local_4a7;
  undefined1 uStack_4a0;
  undefined7 uStack_49f;
  undefined1 uStack_498;
  undefined7 local_497;
  undefined1 uStack_490;
  undefined7 uStack_48f;
  undefined1 uStack_488;
  undefined7 local_487;
  undefined1 uStack_480;
  undefined7 uStack_47f;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined *local_470;
  undefined *local_468;
  undefined1 local_460;
  char *local_458;
  undefined *local_450;
  undefined1 local_448;
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
  undefined8 uStack_3ef;
  undefined8 local_3e7;
  undefined7 uStack_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  char *local_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  char *pcStack_3b8;
  undefined *local_3b0;
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
  undefined8 local_350;
  undefined8 uStack_348;
  undefined *local_340;
  undefined8 uStack_338;
  undefined2 local_330;
  String local_320;
  undefined8 uStack_310;
  char *pcStack_308;
  undefined *local_300;
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
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined2 local_280;
  undefined7 uStack_278;
  undefined1 local_271;
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined7 uStack_268;
  undefined1 local_261;
  undefined7 uStack_260;
  undefined1 uStack_259;
  undefined7 uStack_258;
  undefined1 local_251;
  undefined7 uStack_250;
  undefined1 uStack_249;
  undefined7 uStack_248;
  undefined1 local_241;
  undefined7 uStack_240;
  undefined1 uStack_239;
  undefined7 uStack_238;
  undefined1 local_231;
  undefined7 uStack_230;
  undefined1 uStack_229;
  undefined7 uStack_228;
  undefined1 local_221;
  undefined7 uStack_220;
  undefined1 uStack_219;
  undefined7 uStack_218;
  undefined1 local_211;
  undefined7 uStack_210;
  undefined1 uStack_209;
  undefined7 uStack_208;
  char *local_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  char *pcStack_1e8;
  undefined *local_1e0;
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
  undefined *local_170;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *local_100;
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
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar5 = &DAT_100fb92d0;
  local_d80 = param_1;
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar21 = (code *)(auStack_dd0 + -extraout_x8);
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  local_d90.unknown = pcVar21 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  LVar6.unknown = pcVar21 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_d88 = pMVar7;
  UVar9 = Swift::Actor::get_unownedExecutor();
  UVar10 = UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar10.unknown & 1) == 0) {
    param_6 = 0x7b;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x7b,UVar9.unknown,puVar8);
  }
  lVar11 = 0;
  FUN_1002994c0();
  bVar1 = *(byte *)(param_3 + *(int *)(lVar11 + 0x18));
  SVar26 = Swift::CustomStringConvertible::get_description();
  local_d94 = (uint)bVar1;
  if (local_d94 == 1) {
    thunk_FUN_1001e6c88();
  }
  else {
    thunk_FUN_1001e6c78(LVar6.unknown,SVar26.str);
  }
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  local_320 = (extension_Foundation)::Swift::String::init(LVar6);
  pcVar12 = local_320.str;
  FUN_1002538a0();
  pcVar20 = (code *)PTR___type_metadata_for_Swift_String_100eac208;
  TVar13 = SwiftUI::Text::_init();
  TVar18 = TVar13;
  if (DAT_100fbaf10 != -1) {
    TVar18.unknown = (undefined *)&DAT_100fbaf10;
    _swift_once(&DAT_100fbaf10,FUN_10029fc58);
  }
  SwiftUI::Font::Weight::get_bold((Weight)TVar18.unknown);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  local_da0 = (undefined *)CONCAT71(extraout_var,DVar4.value);
  local_da8 = *(code **)(*(long *)((long)local_da0 + -8) + 0x38);
  (*local_da8)(pcVar21,1,1);
  FVar14 = SwiftUI::Font::_system(param_2,(Font)0x0);
  local_db0 = pcVar21;
  FUN_100005808(pcVar21,&DAT_100fb92d0,&DAT_100c3abc0);
  TVar18 = TVar13;
  pcVar21 = pcVar20;
  pcVar24 = pcVar12;
  TVar15 = SwiftUI::Text::_font(FVar14.unknown);
  local_db8 = pcVar24;
  _swift_release(FVar14.unknown);
  FUN_100016d74(TVar13.unknown,pcVar20,pcVar12);
  _swift_bridgeObjectRelease(param_6);
  puVar5 = &DAT_100c3b7f8;
  _swift_getKeyPath();
  AVar16.unknown = puVar5;
  if (DAT_100fbaf20 != -1) {
    AVar16.unknown = (undefined *)&DAT_100fbaf20;
    pcVar20 = FUN_10029fc34;
    _swift_once();
  }
  dVar2 = DAT_100fbaf28;
  AVar16 = SwiftUI::Alignment::get_center(AVar16);
  if (NAN(dVar2)) {
    local_dc8 = pcVar20;
    puStack_dc0 = AVar16.unknown;
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    local_dcc = SUB84(AVar16.unknown,0);
    pOVar19 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)AVar16.unknown);
    os::_os_log(local_dcc,0x100000000,pOVar19,"Contradictory frame constraints specified.",0x2a,2,
                PTR___swiftEmptyArrayStorage_100eae0d8);
    AVar16.unknown = puStack_dc0;
    pcVar20 = local_dc8;
  }
  *(undefined **)(LVar6.unknown + -0x10) = AVar16.unknown;
  *(code **)(LVar6.unknown + -8) = pcVar20;
  LVar6.unknown[-0x18] = 1;
  *(undefined8 *)(LVar6.unknown + -0x20) = 0;
  LVar6.unknown[-0x28] = 1;
  *(undefined8 *)(LVar6.unknown + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_259 = (undefined1)uStack_148;
  uStack_258 = (undefined7)((ulong)uStack_148 >> 8);
  local_261 = (undefined1)uStack_150;
  uStack_260 = (undefined7)((ulong)uStack_150 >> 8);
  uStack_269 = (undefined1)uStack_158;
  uStack_268 = (undefined7)((ulong)uStack_158 >> 8);
  local_271 = (undefined1)local_160;
  uStack_270 = (undefined7)((ulong)local_160 >> 8);
  uStack_229 = (undefined1)uStack_118;
  uStack_228 = (undefined7)((ulong)uStack_118 >> 8);
  local_231 = (undefined1)local_120;
  uStack_230 = (undefined7)((ulong)local_120 >> 8);
  uStack_239 = (undefined1)uStack_128;
  uStack_238 = (undefined7)((ulong)uStack_128 >> 8);
  local_241 = (undefined1)uStack_130;
  uStack_240 = (undefined7)((ulong)uStack_130 >> 8);
  uStack_219 = (undefined1)uStack_108;
  uStack_218 = (undefined7)((ulong)uStack_108 >> 8);
  local_221 = (undefined1)uStack_110;
  uStack_220 = (undefined7)((ulong)uStack_110 >> 8);
  uStack_209 = (undefined1)uStack_f8;
  uStack_208 = (undefined7)((ulong)uStack_f8 >> 8);
  local_211 = SUB81(local_100,0);
  uStack_210 = (undefined7)((ulong)local_100 >> 8);
  uStack_249 = (undefined1)uStack_138;
  uStack_248 = (undefined7)((ulong)uStack_138 >> 8);
  local_251 = (undefined1)local_140;
  uStack_250 = (undefined7)((ulong)local_140 >> 8);
  local_500 = SUB81(pcVar21,0);
  local_4f8 = local_db8;
  uStack_4e8 = 1;
  uStack_43f = CONCAT17(uStack_269,uStack_270);
  local_447 = CONCAT17(local_271,uStack_278);
  uStack_4df = uStack_270;
  uStack_4d8 = uStack_269;
  uStack_4e0 = local_271;
  uStack_42f = CONCAT17(uStack_259,uStack_260);
  local_437 = CONCAT17(local_261,uStack_268);
  uStack_4cf = uStack_260;
  uStack_4c8 = uStack_259;
  local_4d7 = uStack_268;
  uStack_4d0 = local_261;
  uStack_3ef = CONCAT17(uStack_219,uStack_220);
  local_3f7 = CONCAT17(local_221,uStack_228);
  uStack_48f = uStack_220;
  uStack_488 = uStack_219;
  local_497 = uStack_228;
  uStack_490 = local_221;
  uStack_3ff = CONCAT17(uStack_229,uStack_230);
  local_407 = CONCAT17(local_231,uStack_238);
  uStack_49f = uStack_230;
  uStack_498 = uStack_229;
  local_4a7 = uStack_238;
  uStack_4a0 = local_231;
  local_3e7 = CONCAT17(local_211,uStack_218);
  uStack_47f = uStack_210;
  local_487 = uStack_218;
  uStack_480 = local_211;
  uStack_41f = CONCAT17(uStack_249,uStack_250);
  local_427 = CONCAT17(local_251,uStack_258);
  uStack_4bf = uStack_250;
  uStack_4b8 = uStack_249;
  local_4c7 = uStack_258;
  uStack_4c0 = local_251;
  uStack_40f = CONCAT17(uStack_239,uStack_240);
  local_417 = CONCAT17(local_241,uStack_248);
  uStack_4af = uStack_240;
  uStack_4a8 = uStack_239;
  local_4b7 = uStack_248;
  uStack_4b0 = local_241;
  local_1f0 = CONCAT71(uStack_4ff,local_500);
  pcStack_1e8 = local_db8;
  uStack_1b8 = uStack_148;
  local_1c0 = uStack_150;
  uStack_1a8 = uStack_138;
  local_1b0 = local_140;
  uStack_1d8 = CONCAT71(uStack_278,1);
  uStack_1c8 = uStack_158;
  local_1d0 = local_160;
  uStack_178 = uStack_108;
  local_180 = uStack_110;
  uStack_168 = uStack_f8;
  local_170 = local_100;
  uStack_198 = uStack_128;
  local_1a0 = uStack_130;
  uStack_188 = uStack_118;
  local_190 = local_120;
  uStack_3df = uStack_210;
  local_458 = local_db8;
  local_448 = 1;
  local_510 = TVar15.unknown;
  puStack_508 = TVar18.unknown;
  local_4f0 = puVar5;
  uStack_478 = uStack_209;
  uStack_477 = uStack_208;
  local_470 = TVar15.unknown;
  local_468 = TVar18.unknown;
  local_460 = local_500;
  local_450 = puVar5;
  uStack_3d8 = uStack_209;
  uStack_3d7 = uStack_208;
  local_200 = (char *)TVar15;
  puStack_1f8 = TVar18.unknown;
  local_1e0 = puVar5;
  FUN_100011090(&local_510,&local_320,&DAT_100fbaf30,&DAT_100c3b828);
  FUN_100005808(&local_470,&DAT_100fbaf30,&DAT_100c3b828);
  uStack_368 = uStack_198;
  local_370 = local_1a0;
  uStack_358 = uStack_188;
  local_360 = local_190;
  uStack_348 = uStack_178;
  local_350 = local_180;
  uStack_338 = uStack_168;
  local_340 = local_170;
  uStack_3a8 = uStack_1d8;
  local_3b0 = local_1e0;
  uStack_398 = uStack_1c8;
  local_3a0 = local_1d0;
  uStack_388 = uStack_1b8;
  local_390 = local_1c0;
  uStack_378 = uStack_1a8;
  local_380 = local_1b0;
  puStack_3c8 = puStack_1f8;
  local_3d0 = local_200;
  pcStack_3b8 = pcStack_1e8;
  uStack_3c0 = local_1f0;
  uStack_2b8 = uStack_198;
  local_2c0 = local_1a0;
  uStack_2a8 = uStack_188;
  uStack_2b0 = local_190;
  uStack_298 = uStack_178;
  local_2a0 = local_180;
  uStack_288 = uStack_168;
  puStack_290 = local_170;
  uStack_2f8 = uStack_1d8;
  local_300 = local_1e0;
  uStack_2e8 = uStack_1c8;
  uStack_2f0 = local_1d0;
  uStack_2d8 = uStack_1b8;
  local_2e0 = local_1c0;
  uStack_2c8 = uStack_1a8;
  uStack_2d0 = local_1b0;
  local_330 = 0x100;
  local_320.bridgeObject = puStack_1f8;
  local_320.str = local_200;
  pcStack_308 = pcStack_1e8;
  uStack_310 = local_1f0;
  local_280 = 0x100;
  puVar5 = &DAT_100fbaf38;
  puVar22 = &DAT_100c3b830;
  HVar17.unknown = puVar22;
  size.unknown = local_170;
  FUN_100011090(&local_3d0,&local_5c0,&DAT_100fbaf38);
  FUN_100005808(&local_320,&DAT_100fbaf38,&DAT_100c3b830);
  LVar3.unknown = local_d90.unknown;
  if (local_d94 == 1) {
    FUN_1001cb054(local_d90.unknown);
  }
  else {
    FUN_1001cad54(local_d90.unknown);
  }
  pcVar21 = local_db0;
  TVar13 = SwiftUI::Text::init(LVar3);
  TVar18 = TVar13;
  if (DAT_100fbaf40 != -1) {
    TVar18.unknown = (undefined *)&DAT_100fbaf40;
    _swift_once(&DAT_100fbaf40,FUN_10029fc9c);
  }
  SwiftUI::Font::Weight::get_regular((Weight)TVar18.unknown);
  (*local_da8)(pcVar21,1,1,local_da0);
  FVar14 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_100005808(pcVar21,&DAT_100fb92d0,&DAT_100c3abc0);
  pcVar21 = (code *)TVar13;
  puVar23 = puVar5;
  puVar25 = puVar22;
  TVar15 = SwiftUI::Text::_font(FVar14.unknown);
  _swift_release(FVar14.unknown);
  FUN_100016d74(TVar13.unknown,puVar5,puVar22);
  _swift_bridgeObjectRelease();
  HVar17 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar17);
  local_5c0 = (undefined *)CONCAT44(local_5c0._4_4_,(int)HVar17.unknown);
  FUN_1002687fc();
  TVar18 = TVar15;
  pcVar20 = pcVar21;
  puVar5 = puVar23;
  TVar13 = SwiftUI::Text::_foregroundStyle();
  local_d94 = (uint)pcVar20;
  local_da0 = puVar5;
  local_d90.unknown = TVar18.unknown;
  FUN_100016d74(TVar15.unknown,pcVar21,puVar23);
  _swift_bridgeObjectRelease(puVar25);
  puVar5 = &DAT_100c3b7f8;
  _swift_getKeyPath();
  AVar16.unknown = puVar5;
  if (DAT_100fbaf50 != -1) {
    AVar16.unknown = (undefined *)&DAT_100fbaf50;
    pcVar21 = FUN_10029fc78;
    _swift_once();
  }
  dVar2 = DAT_100fbaf58;
  AVar16 = SwiftUI::Alignment::get_center(AVar16);
  if (NAN(dVar2)) {
    local_db0 = pcVar21;
    local_da8 = (code *)AVar16;
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    pOVar19 = SwiftUI::Log::get_runtimeIssuesLog((Log)(__int8)AVar16.unknown);
    os::_os_log(AVar16.unknown,0x100000000,pOVar19,"Contradictory frame constraints specified.",0x2a
                ,2,PTR___swiftEmptyArrayStorage_100eae0d8);
    AVar16.unknown = local_da8;
    pcVar21 = local_db0;
  }
  *(undefined **)(LVar6.unknown + -0x10) = AVar16.unknown;
  *(code **)(LVar6.unknown + -8) = pcVar21;
  LVar6.unknown[-0x18] = 1;
  *(undefined8 *)(LVar6.unknown + -0x20) = 0;
  LVar6.unknown[-0x28] = 1;
  *(undefined8 *)(LVar6.unknown + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_6b9 = (undefined1)uStack_d8;
  uStack_6b8 = (undefined7)((ulong)uStack_d8 >> 8);
  local_6c1 = (undefined1)uStack_e0;
  uStack_6c0 = (undefined7)((ulong)uStack_e0 >> 8);
  uStack_6c9 = (undefined1)uStack_e8;
  uStack_6c8 = (undefined7)((ulong)uStack_e8 >> 8);
  local_6d1 = (undefined1)local_f0;
  uStack_6d0 = (undefined7)((ulong)local_f0 >> 8);
  uStack_689 = (undefined1)uStack_a8;
  uStack_688 = (undefined7)((ulong)uStack_a8 >> 8);
  local_691 = (undefined1)local_b0;
  uStack_690 = (undefined7)((ulong)local_b0 >> 8);
  uStack_699 = (undefined1)uStack_b8;
  uStack_698 = (undefined7)((ulong)uStack_b8 >> 8);
  local_6a1 = (undefined1)uStack_c0;
  uStack_6a0 = (undefined7)((ulong)uStack_c0 >> 8);
  uStack_679 = (undefined1)uStack_98;
  uStack_678 = (undefined7)((ulong)uStack_98 >> 8);
  local_681 = (undefined1)uStack_a0;
  uStack_680 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_669 = (undefined1)uStack_88;
  uStack_668 = (undefined7)((ulong)uStack_88 >> 8);
  local_671 = (undefined1)local_90;
  uStack_670 = (undefined7)((ulong)local_90 >> 8);
  uStack_6a9 = (undefined1)uStack_c8;
  uStack_6a8 = (undefined7)((ulong)uStack_c8 >> 8);
  local_6b1 = (undefined1)local_d0;
  uStack_6b0 = (undefined7)((ulong)local_d0 >> 8);
  puStack_ac8 = local_d90.unknown;
  local_ac0 = (undefined1)local_d94;
  local_ab8 = local_da0;
  uStack_aa8 = 1;
  uStack_9ff = CONCAT17(uStack_6c9,uStack_6d0);
  local_a07 = CONCAT17(local_6d1,uStack_6d8);
  uStack_a9f = uStack_6d0;
  uStack_a98 = uStack_6c9;
  uStack_aa0 = local_6d1;
  uStack_9ef = CONCAT17(uStack_6b9,uStack_6c0);
  local_9f7 = CONCAT17(local_6c1,uStack_6c8);
  uStack_a8f = uStack_6c0;
  uStack_a88 = uStack_6b9;
  local_a97 = uStack_6c8;
  uStack_a90 = local_6c1;
  uStack_9af = CONCAT17(uStack_679,uStack_680);
  local_9b7 = CONCAT17(local_681,uStack_688);
  uStack_a4f = uStack_680;
  uStack_a48 = uStack_679;
  local_a57 = uStack_688;
  uStack_a50 = local_681;
  uStack_9bf = CONCAT17(uStack_689,uStack_690);
  local_9c7 = CONCAT17(local_691,uStack_698);
  uStack_a5f = uStack_690;
  uStack_a58 = uStack_689;
  local_a67 = uStack_698;
  uStack_a60 = local_691;
  local_9a7 = CONCAT17(local_671,uStack_678);
  uStack_a3f = uStack_670;
  local_a47 = uStack_678;
  uStack_a40 = local_671;
  uStack_9df = CONCAT17(uStack_6a9,uStack_6b0);
  local_9e7 = CONCAT17(local_6b1,uStack_6b8);
  uStack_a7f = uStack_6b0;
  uStack_a78 = uStack_6a9;
  local_a87 = uStack_6b8;
  uStack_a80 = local_6b1;
  uStack_9cf = CONCAT17(uStack_699,uStack_6a0);
  local_9d7 = CONCAT17(local_6a1,uStack_6a8);
  uStack_a6f = uStack_6a0;
  uStack_a68 = uStack_699;
  local_a77 = uStack_6a8;
  uStack_a70 = local_6a1;
  local_650 = CONCAT71(uStack_abf,local_ac0);
  puStack_648 = local_da0;
  puStack_658 = local_d90.unknown;
  uStack_618 = uStack_d8;
  local_620 = uStack_e0;
  uStack_608 = uStack_c8;
  local_610 = local_d0;
  uStack_638 = CONCAT71(uStack_6d8,1);
  uStack_628 = uStack_e8;
  local_630 = local_f0;
  uStack_5d8 = uStack_98;
  local_5e0 = uStack_a0;
  uStack_5c8 = uStack_88;
  local_5d0 = local_90;
  uStack_5f8 = uStack_b8;
  local_600 = uStack_c0;
  uStack_5e8 = uStack_a8;
  local_5f0 = local_b0;
  uStack_99f = uStack_670;
  local_a28 = local_d90.unknown;
  local_a18 = local_da0;
  local_a08 = 1;
  local_ad0 = TVar13.unknown;
  local_ab0 = puVar5;
  uStack_a38 = uStack_669;
  uStack_a37 = uStack_668;
  local_a30 = TVar13.unknown;
  local_a20 = local_ac0;
  local_a10 = puVar5;
  uStack_998 = uStack_669;
  uStack_997 = uStack_668;
  local_660 = TVar13.unknown;
  local_640 = puVar5;
  FUN_100011090(&local_ad0,&local_5c0,&DAT_100fbaf30,&DAT_100c3b828);
  FUN_100005808(&local_a30,&DAT_100fbaf30,&DAT_100c3b828);
  uStack_928 = uStack_5f8;
  local_930 = local_600;
  uStack_918 = uStack_5e8;
  local_920 = local_5f0;
  uStack_908 = uStack_5d8;
  local_910 = local_5e0;
  uStack_8f8 = uStack_5c8;
  local_900 = local_5d0;
  uStack_968 = uStack_638;
  local_970 = local_640;
  uStack_958 = uStack_628;
  local_960 = local_630;
  uStack_948 = uStack_618;
  local_950 = local_620;
  uStack_938 = uStack_608;
  local_940 = local_610;
  puStack_988 = puStack_658;
  local_990 = local_660;
  puStack_978 = puStack_648;
  uStack_980 = local_650;
  uStack_878 = uStack_5f8;
  local_880 = local_600;
  uStack_868 = uStack_5e8;
  uStack_870 = local_5f0;
  uStack_858 = uStack_5d8;
  local_860 = local_5e0;
  uStack_848 = uStack_5c8;
  uStack_850 = local_5d0;
  uStack_8b8 = uStack_638;
  local_8c0 = local_640;
  uStack_8a8 = uStack_628;
  uStack_8b0 = local_630;
  uStack_898 = uStack_618;
  local_8a0 = local_620;
  uStack_888 = uStack_608;
  uStack_890 = local_610;
  local_8f0 = 0x100;
  puStack_8d8 = puStack_658;
  local_8e0 = local_660;
  puStack_8c8 = puStack_648;
  uStack_8d0 = local_650;
  local_840 = 0x100;
  FUN_100011090(&local_990,&local_5c0,&DAT_100fbaf38,&DAT_100c3b830);
  FUN_100005808(&local_8e0,&DAT_100fbaf38,&DAT_100c3b830);
  uStack_af8 = uStack_348;
  local_b00 = local_350;
  uStack_ae8 = uStack_338;
  puStack_af0 = local_340;
  uStack_b38 = uStack_388;
  local_b40 = local_390;
  uStack_b28 = uStack_378;
  uStack_b30 = local_380;
  uStack_b18 = uStack_368;
  local_b20 = local_370;
  uStack_b08 = uStack_358;
  uStack_b10 = local_360;
  puStack_b78 = puStack_3c8;
  local_b80 = local_3d0;
  pcStack_b68 = pcStack_3b8;
  uStack_b70 = uStack_3c0;
  uStack_b58 = uStack_3a8;
  local_b60 = local_3b0;
  uStack_b48 = uStack_398;
  uStack_b50 = local_3a0;
  uStack_538 = uStack_908;
  local_540 = local_910;
  uStack_528 = uStack_8f8;
  uStack_530 = local_900;
  uStack_578 = uStack_948;
  local_580 = local_950;
  uStack_568 = uStack_938;
  uStack_570 = local_940;
  uStack_558 = uStack_928;
  local_560 = local_930;
  uStack_548 = uStack_918;
  uStack_550 = local_920;
  puStack_5b8 = puStack_988;
  local_5c0 = local_990;
  puStack_5a8 = puStack_978;
  uStack_5b0 = uStack_980;
  uStack_598 = uStack_968;
  local_5a0 = local_970;
  uStack_588 = uStack_958;
  uStack_590 = local_960;
  uStack_7a8 = uStack_348;
  local_7b0 = local_350;
  uStack_798 = uStack_338;
  puStack_7a0 = local_340;
  uStack_7e8 = uStack_388;
  local_7f0 = local_390;
  uStack_7d8 = uStack_378;
  uStack_7e0 = local_380;
  uStack_7c8 = uStack_368;
  local_7d0 = local_370;
  uStack_7b8 = uStack_358;
  uStack_7c0 = local_360;
  puStack_828 = puStack_3c8;
  local_830 = local_3d0;
  pcStack_818 = pcStack_3b8;
  uStack_820 = uStack_3c0;
  uStack_808 = uStack_3a8;
  local_810 = local_3b0;
  uStack_7f8 = uStack_398;
  uStack_800 = local_3a0;
  uStack_c48 = uStack_348;
  local_c50 = local_350;
  uStack_c38 = uStack_338;
  puStack_c40 = local_340;
  uStack_c88 = uStack_388;
  local_c90 = local_390;
  uStack_c78 = uStack_378;
  uStack_c80 = local_380;
  uStack_c68 = uStack_368;
  local_c70 = local_370;
  uStack_c58 = uStack_358;
  uStack_c60 = local_360;
  puStack_cc8 = puStack_3c8;
  local_cd0 = local_3d0;
  pcStack_cb8 = pcStack_3b8;
  uStack_cc0 = uStack_3c0;
  uStack_ca8 = uStack_3a8;
  local_cb0 = local_3b0;
  uStack_c98 = uStack_398;
  uStack_ca0 = local_3a0;
  uStack_6f8 = uStack_908;
  local_700 = local_910;
  uStack_6e8 = uStack_8f8;
  uStack_6f0 = local_900;
  uStack_738 = uStack_948;
  local_740 = local_950;
  uStack_728 = uStack_938;
  uStack_730 = local_940;
  uStack_718 = uStack_928;
  local_720 = local_930;
  uStack_708 = uStack_918;
  uStack_710 = local_920;
  puStack_778 = puStack_988;
  local_780 = local_990;
  puStack_768 = puStack_978;
  uStack_770 = uStack_980;
  uStack_758 = uStack_968;
  local_760 = local_970;
  uStack_748 = uStack_958;
  uStack_750 = local_960;
  uStack_ba0 = uStack_908;
  local_ba8 = local_910;
  uStack_b90 = uStack_8f8;
  uStack_b98 = local_900;
  uStack_bc0 = uStack_928;
  local_bc8 = local_930;
  uStack_bb0 = uStack_918;
  uStack_bb8 = local_920;
  uStack_bf0 = uStack_958;
  local_bf8 = local_960;
  uStack_be0 = uStack_948;
  local_be8 = local_950;
  uStack_bd0 = uStack_938;
  local_bd8 = local_940;
  puStack_c20 = puStack_988;
  local_c28 = local_990;
  puStack_c10 = puStack_978;
  local_c18 = uStack_980;
  local_ae0 = local_330;
  local_520 = local_8f0;
  local_790 = local_330;
  local_c30 = local_330;
  local_6e0 = local_8f0;
  local_b88 = local_8f0;
  uStack_c00 = uStack_968;
  local_c08 = local_970;
  _memcpy(local_d80,&local_cd0,0x14a);
  FUN_100011090(&local_830,auStack_d78,&DAT_100fbaf38,&DAT_100c3b830);
  FUN_100011090(&local_780,auStack_d78,&DAT_100fbaf38,&DAT_100c3b830);
  FUN_100005808(&local_5c0,&DAT_100fbaf38,&DAT_100c3b830);
  FUN_100005808(&local_b80,&DAT_100fbaf38,&DAT_100c3b830);
  _swift_release(local_d88);
  return;
}



/* Address: 0x10029c470 | FUN_10029c470 */

void FUN_10029c470(undefined8 *param_1,Alignment param_2)

{
  RGBColorSpace RVar1;
  undefined7 extraout_var;
  undefined *puVar2;
  Color CVar3;
  Stop SVar4;
  UnitPoint UVar5;
  Gradient gradient;
  LinearGradient LVar6;
  CGFloat CVar7;
  long extraout_x8;
  undefined1 *puVar8;
  UnitPoint location;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
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
  UnitPoint endPoint;
  
  RVar1 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  endPoint.unknown = (undefined *)CONCAT71(extraout_var,RVar1.value);
  lVar9 = *(long *)(endPoint.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fbaf08;
  FUN_1000037f0(&DAT_100fbaf08,&DAT_100c3b7f0);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  location.unknown =
       (undefined *)
       (ulong)*(uint *)
               PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_100eab698
  ;
  pcVar10 = *(code **)(lVar9 + 0x68);
  CVar7.unknown = location.unknown;
  (*pcVar10)(puVar8,location.unknown,endPoint.unknown);
  RVar1.value = (__int8)puVar8;
  CVar3 = SwiftUI::Color::init(RVar1,1.0,0.698,0.322,1.0);
  uVar11 = 0;
  SVar4 = SwiftUI::Gradient::Stop::init(CVar3,CVar7);
  *(undefined **)(puVar2 + 0x20) = SVar4.unknown;
  *(undefined8 *)(puVar2 + 0x28) = uVar11;
  CVar7.unknown = location.unknown;
  (*pcVar10)(puVar8,location.unknown,endPoint.unknown);
  CVar3 = SwiftUI::Color::init(RVar1,1.0,0.608,0.075,1.0);
  uVar11 = 0x3fe0000000000000;
  SVar4 = SwiftUI::Gradient::Stop::init(CVar3,CVar7);
  *(undefined **)(puVar2 + 0x30) = SVar4.unknown;
  *(undefined8 *)(puVar2 + 0x38) = uVar11;
  (*pcVar10)(puVar8);
  CVar3 = SwiftUI::Color::init(RVar1,1.0,0.58,0.0,1.0);
  uVar11 = 0x3ff0000000000000;
  SVar4 = SwiftUI::Gradient::Stop::init(CVar3,location.unknown);
  *(undefined **)(puVar2 + 0x40) = SVar4.unknown;
  *(undefined8 *)(puVar2 + 0x48) = uVar11;
  UVar5 = SwiftUI::UnitPoint::get_top(SVar4.unknown);
  SwiftUI::UnitPoint::get_bottom(UVar5);
  gradient = SwiftUI::Gradient::init();
  LVar6 = SwiftUI::LinearGradient::init(gradient,location,endPoint);
  SwiftUI::Alignment::get_center((Alignment)LVar6.unknown);
  _swift_bridgeObjectRetain(local_c8);
  SwiftUI::_FrameLayout::_init(param_2);
  param_1[7] = uStack_98;
  param_1[6] = local_a0;
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
  param_1[0xb] = uStack_78;
  param_1[10] = local_80;
  *param_1 = local_c8;
  param_1[4] = uStack_a8;
  param_1[3] = uStack_b0;
  param_1[2] = uStack_b8;
  param_1[1] = local_c0;
  *(undefined2 *)(param_1 + 5) = 0x100;
  _swift_bridgeObjectRelease(local_c8);
  return;
}



/* Address: 0x10029c6cc | FUN_10029c6cc */

void FUN_10029c6cc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar6 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_70 + -extraout_x8;
  lVar7 = 0;
  FUN_1002abb94();
  lVar14 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription;
  lVar9 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_1 + 8);
  _swift_beginAccess(lVar10 + _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription,
                     auStack_68,0,0);
  FUN_100011090(lVar10 + lVar12,puVar11,&DAT_100fb8618,&DAT_100c385c0);
  puVar8 = puVar11;
  (**(code **)(lVar14 + 0x30))(puVar11,1,lVar7);
  if ((int)puVar8 == 1) {
    FUN_100005808(puVar11,&DAT_100fb8618,&DAT_100c385c0);
  }
  else {
    FUN_1000523d8(puVar11,lVar9,FUN_1002abb94);
    puVar1 = (undefined8 *)(lVar10 + _TtC22PasteLicensingAppStore16PaywallViewModel::offer);
    lVar12 = puVar1[4];
    if (lVar12 != 0) {
      uVar13 = puVar1[5];
      uVar2 = puVar1[2];
      uVar4 = puVar1[3];
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(lVar12);
      FUN_100256f44(lVar9,uVar5,uVar2);
      FUN_10025f528(uVar3,uVar5,uVar2,uVar4,lVar12,uVar13);
    }
    FUN_10005241c(lVar9,FUN_1002abb94);
  }
  return;
}



/* Address: 0x10029c878 | FUN_10029c878 */

void FUN_10029c878(undefined8 *param_1,CGFloat param_2)

{
  Design DVar1;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  char *pcVar4;
  Text TVar5;
  undefined7 extraout_var;
  Font FVar6;
  Text TVar7;
  Alignment AVar8;
  Text TVar9;
  undefined *puVar10;
  Alignment in_x3;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar12;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined8 auStack_2b0 [2];
  undefined *local_2a0;
  undefined1 auStack_298 [144];
  undefined *local_208;
  undefined *puStack_200;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  char *pcStack_1f0;
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
  String local_178;
  undefined1 local_168;
  char *local_160;
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
  
  puVar2 = &DAT_100fb92d0;
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_298 + (-8 - extraout_x8);
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1001cce54(LVar3.unknown);
  local_178 = (extension_Foundation)::Swift::String::init(LVar3);
  pcVar4 = local_178.str;
  FUN_1002538a0();
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar5 = SwiftUI::Text::_init();
  TVar9 = TVar5;
  if (DAT_100fbaea8 != -1) {
    TVar9.unknown = (undefined *)&DAT_100fbaea8;
    _swift_once(&DAT_100fbaea8,FUN_10029fc14);
  }
  SwiftUI::Font::Weight::get_medium((Weight)TVar9.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (puVar12,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar6 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_100005808(puVar12,&DAT_100fb92d0,&DAT_100c3abc0);
  TVar9 = TVar5;
  puVar10 = puVar2;
  pcVar11 = pcVar4;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  local_2a0 = TVar9.unknown;
  _swift_release(FVar6.unknown);
  FUN_100016d74(TVar5.unknown,puVar2,pcVar4);
  _swift_bridgeObjectRelease();
  AVar8 = SwiftUI::Alignment::get_center(in_x3);
  *(undefined **)(LVar3.unknown + -0x10) = AVar8.unknown;
  *(undefined **)(LVar3.unknown + -8) = puVar2;
  LVar3.unknown[-0x18] = 1;
  *(undefined8 *)(LVar3.unknown + -0x20) = 0;
  LVar3.unknown[-0x28] = 1;
  *(undefined8 *)(LVar3.unknown + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_1a0 = uStack_a0;
  local_1a8 = local_a8;
  uStack_190 = uStack_90;
  local_198 = local_98;
  uStack_180 = uStack_80;
  local_188 = local_88;
  uStack_1e0 = uStack_e0;
  local_1e8 = local_e8;
  uStack_1d0 = uStack_d0;
  local_1d8 = local_d8;
  uStack_1b0 = uStack_b0;
  local_1b8 = local_b8;
  uStack_1c0 = uStack_c0;
  local_1c8 = local_c8;
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
  puStack_200 = local_2a0;
  local_1f8 = SUB81(puVar10,0);
  local_178.bridgeObject = local_2a0;
  local_178.str = TVar7.unknown;
  uStack_120 = uStack_b0;
  local_128 = local_b8;
  uStack_130 = uStack_c0;
  local_138 = local_c8;
  local_208 = TVar7.unknown;
  pcStack_1f0 = pcVar11;
  local_168 = local_1f8;
  local_160 = pcVar11;
  FUN_100011090(&local_208,auStack_298,&DAT_100fba2c0,&DAT_100c3a9b0);
  FUN_100005808(&local_178,&DAT_100fba2c0,&DAT_100c3a9b0);
  param_1[0xd] = uStack_1a0;
  param_1[0xc] = local_1a8;
  param_1[0xf] = uStack_190;
  param_1[0xe] = local_198;
  param_1[0x11] = uStack_180;
  param_1[0x10] = local_188;
  param_1[5] = uStack_1e0;
  param_1[4] = local_1e8;
  param_1[7] = uStack_1d0;
  param_1[6] = local_1d8;
  param_1[9] = uStack_1c0;
  param_1[8] = local_1c8;
  param_1[0xb] = uStack_1b0;
  param_1[10] = local_1b8;
  param_1[1] = puStack_200;
  *param_1 = local_208;
  param_1[3] = pcStack_1f0;
  param_1[2] = CONCAT71(uStack_1f7,local_1f8);
  return;
}



/* Address: 0x10029cbb8 | FUN_10029cbb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10029cbb8(undefined8 *param_1,CGFloat param_2)

{
  undefined4 uVar1;
  int iVar2;
  Design DVar3;
  RoundedCornerStyle RVar4;
  undefined *puVar5;
  LocalizedStringResource LVar6;
  char *pcVar7;
  Text TVar8;
  undefined7 extraout_var;
  Font FVar9;
  Text TVar10;
  Alignment AVar11;
  NSColor *pNVar12;
  Color CVar13;
  Set SVar14;
  undefined7 extraout_var_00;
  Text TVar15;
  undefined *puVar16;
  Alignment in_x3;
  char *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar18;
  undefined8 uStack_4c0;
  undefined1 auStack_4b8 [8];
  undefined8 uStack_4b0;
  undefined1 auStack_4a8 [8];
  undefined8 auStack_4a0 [2];
  undefined1 auStack_490 [8];
  char *local_488;
  undefined1 auStack_480 [160];
  undefined *local_3e0;
  undefined *puStack_3d8;
  undefined1 local_3d0;
  undefined7 uStack_3cf;
  char *local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
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
  undefined8 uStack_358;
  undefined *local_350;
  undefined *puStack_348;
  undefined1 local_340;
  char *local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  char *local_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  char *pcStack_2a8;
  undefined8 local_2a0;
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
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 local_230;
  undefined7 uStack_22f;
  undefined1 local_228;
  String local_220;
  undefined8 uStack_210;
  char *pcStack_208;
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
  undefined *local_190;
  undefined1 local_188;
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
  char *local_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
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
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar5 = &DAT_100fb92d0;
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_490 + -extraout_x8;
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar6.unknown = puVar18 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1001caa54(LVar6.unknown);
  local_220 = (extension_Foundation)::Swift::String::init(LVar6);
  pcVar7 = local_220.str;
  FUN_1002538a0();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar8 = SwiftUI::Text::_init();
  TVar15 = TVar8;
  if (DAT_100fbaea8 != -1) {
    TVar15.unknown = (undefined *)&DAT_100fbaea8;
    _swift_once(&DAT_100fbaea8,FUN_10029fc14);
  }
  SwiftUI::Font::Weight::get_medium((Weight)TVar15.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar3.value) + -8) + 0x38))
            (puVar18,1,1,CONCAT71(extraout_var,DVar3.value));
  FVar9 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_100005808(puVar18,&DAT_100fb92d0,&DAT_100c3abc0);
  TVar15 = TVar8;
  puVar16 = puVar5;
  pcVar17 = pcVar7;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  local_488 = pcVar17;
  _swift_release(FVar9.unknown);
  FUN_100016d74(TVar8.unknown,puVar5,pcVar7);
  _swift_bridgeObjectRelease();
  AVar11 = SwiftUI::Alignment::get_center(in_x3);
  *(undefined **)(LVar6.unknown + -0x10) = AVar11.unknown;
  *(undefined **)(LVar6.unknown + -8) = puVar5;
  LVar6.unknown[-0x18] = 1;
  *(undefined8 *)(LVar6.unknown + -0x20) = 0;
  LVar6.unknown[-0x28] = 1;
  *(undefined8 *)(LVar6.unknown + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  pNVar12 = (NSColor *)NSColor::tertiarySystemFillColor((ID)&_OBJC_CLASS___NSColor);
  CVar13 = SwiftUI::Color::init(pNVar12);
  SVar14 = SwiftUI::Edge::Set::get_all(CVar13.unknown);
  local_3d0 = SUB81(puVar16,0);
  local_3c8 = local_488;
  uStack_378 = uStack_138;
  local_380 = local_140;
  uStack_368 = uStack_128;
  uStack_370 = uStack_130;
  uStack_358 = uStack_118;
  local_360 = local_120;
  uStack_3b8 = uStack_178;
  local_3c0 = local_180;
  uStack_3a8 = uStack_168;
  local_3b0 = uStack_170;
  uStack_398 = uStack_158;
  local_3a0 = local_160;
  uStack_388 = uStack_148;
  uStack_390 = uStack_150;
  uStack_100 = CONCAT71(uStack_3cf,local_3d0);
  pcStack_f8 = local_488;
  uStack_e8 = uStack_178;
  local_f0 = local_180;
  uStack_d8 = uStack_168;
  uStack_e0 = uStack_170;
  uStack_88 = uStack_118;
  local_90 = local_120;
  uStack_a8 = uStack_138;
  local_b0 = local_140;
  uStack_98 = uStack_128;
  uStack_a0 = uStack_130;
  uStack_c8 = uStack_158;
  local_d0 = local_160;
  uStack_b8 = uStack_148;
  uStack_c0 = uStack_150;
  uStack_2e8 = uStack_138;
  local_2f0 = local_140;
  uStack_2d8 = uStack_128;
  uStack_2e0 = uStack_130;
  uStack_2c8 = uStack_118;
  local_2d0 = local_120;
  local_338 = local_488;
  uStack_328 = uStack_178;
  local_330 = local_180;
  uStack_318 = uStack_168;
  uStack_320 = uStack_170;
  uStack_308 = uStack_158;
  local_310 = local_160;
  uStack_2f8 = uStack_148;
  uStack_300 = uStack_150;
  local_3e0 = TVar10.unknown;
  puStack_3d8 = TVar15.unknown;
  local_350 = TVar10.unknown;
  puStack_348 = TVar15.unknown;
  local_340 = local_3d0;
  local_110 = (char *)TVar10;
  puStack_108 = TVar15.unknown;
  FUN_100011090(&local_3e0,&local_220,&DAT_100fba2c0,&DAT_100c3a9b0);
  FUN_100005808(&local_350,&DAT_100fba2c0,&DAT_100c3a9b0);
  puVar5 = &DAT_100fbaeb8;
  FUN_1000037f0(&DAT_100fbaeb8,&DAT_100c3b7a0);
  iVar2 = *(int *)(puVar5 + 0x24);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar4.value) + -8) + 0x68))
            ((long)param_1 + (long)iVar2,uVar1,CONCAT71(extraout_var_00,RVar4.value));
  uStack_258 = uStack_a8;
  local_260 = local_b0;
  uStack_248 = uStack_98;
  uStack_250 = uStack_a0;
  uStack_238 = (undefined1)uStack_88;
  uStack_237 = (undefined7)((ulong)uStack_88 >> 8);
  local_240 = local_90;
  uStack_298 = uStack_e8;
  local_2a0 = local_f0;
  uStack_288 = uStack_d8;
  uStack_290 = uStack_e0;
  uStack_278 = uStack_c8;
  local_280 = local_d0;
  uStack_268 = uStack_b8;
  uStack_270 = uStack_c0;
  puStack_2b8 = puStack_108;
  local_2c0 = local_110;
  pcStack_2a8 = pcStack_f8;
  uStack_2b0 = uStack_100;
  local_230 = SUB81(CVar13.unknown,0);
  uStack_22f = (undefined7)((ulong)CVar13.unknown >> 8);
  puVar5 = &DAT_100fbaec0;
  local_228 = (char)SVar14.unknown;
  FUN_1000037f0(&DAT_100fbaec0,&DAT_100c3b7a8);
  *(undefined2 *)((long)param_1 + (long)iVar2 + (long)*(int *)(puVar5 + 0x24)) = 0x100;
  param_1[0xd] = uStack_258;
  param_1[0xc] = local_260;
  param_1[0xf] = uStack_248;
  param_1[0xe] = uStack_250;
  param_1[0x11] = CONCAT71(uStack_237,uStack_238);
  param_1[0x10] = local_240;
  *(ulong *)((long)param_1 + 0x91) = CONCAT17(local_228,uStack_22f);
  *(ulong *)((long)param_1 + 0x89) = CONCAT17(local_230,uStack_237);
  param_1[5] = uStack_298;
  param_1[4] = local_2a0;
  param_1[7] = uStack_288;
  param_1[6] = uStack_290;
  param_1[9] = uStack_278;
  param_1[8] = local_280;
  param_1[0xb] = uStack_268;
  param_1[10] = uStack_270;
  param_1[1] = puStack_2b8;
  *param_1 = local_2c0;
  param_1[3] = pcStack_2a8;
  param_1[2] = uStack_2b0;
  uStack_1b8 = uStack_a8;
  local_1c0 = local_b0;
  uStack_1a8 = uStack_98;
  uStack_1b0 = uStack_a0;
  uStack_198 = uStack_88;
  local_1a0 = local_90;
  uStack_1f8 = uStack_e8;
  local_200 = local_f0;
  uStack_1e8 = uStack_d8;
  uStack_1f0 = uStack_e0;
  uStack_1d8 = uStack_c8;
  local_1e0 = local_d0;
  uStack_1c8 = uStack_b8;
  uStack_1d0 = uStack_c0;
  local_220.bridgeObject = puStack_108;
  local_220.str = local_110;
  pcStack_208 = pcStack_f8;
  uStack_210 = uStack_100;
  local_190 = CVar13.unknown;
  local_188 = (char)SVar14.unknown;
  FUN_100011090(&local_2c0,auStack_480,&DAT_100fbaec8,&DAT_100c3b7b0);
  FUN_100005808(&local_220,&DAT_100fbaec8,&DAT_100c3b7b0);
  return;
}



/* Address: 0x10029cfe4 | FUN_10029cfe4 */

void FUN_10029cfe4(long param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  Design DVar4;
  undefined *puVar5;
  PlainButtonStyle PVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  char *pcVar11;
  VerticalAlignment VVar12;
  undefined *puVar13;
  undefined7 extraout_var;
  Font FVar15;
  HierarchicalShapeStyle HVar16;
  PlainButtonStyle PVar17;
  Set SVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  Weight WVar21;
  code *pcVar22;
  long lVar23;
  code *pcVar24;
  CGFloat size;
  undefined8 uVar25;
  undefined *local_d0 [2];
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  MainActor *local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  long local_78;
  long lVar14;
  
  puVar5 = &DAT_100fbacf0;
  local_78 = param_1;
  FUN_1000037f0(&DAT_100fbacf0,&DAT_100c3b5d0);
  local_a8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fbacf8;
  local_b8 = (undefined *)((long)local_d0 - extraout_x8);
  FUN_1000037f0(&DAT_100fbacf8,&DAT_100c3b5d8);
  local_90 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar19 = ((long)local_d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12;
  puVar5 = &DAT_100fb92d0;
  local_88 = lVar19;
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_01;
  local_c0 = lVar19;
  PVar6 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  lVar23 = *(long *)(PVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  lVar19 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fbad00;
  FUN_1000037f0(&DAT_100fbad00,&DAT_100c3b5e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  WVar21.unknown = (undefined *)(lVar19 - extraout_x8_03);
  puVar7 = &DAT_100fbad08;
  FUN_1000037f0(&DAT_100fbad08,&DAT_100c3b5f0);
  local_b0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar20 = (long)WVar21.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar20 - extraout_x12_00;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a0 = pMVar8;
  UVar10 = Swift::Actor::get_unownedExecutor();
  pcVar11 = (char *)UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar11 & 1) == 0) {
    pcVar11 = "PasteLicensingAppStore/OfferPaywallView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0xfc,UVar10.unknown,puVar9);
  }
  if (DAT_100fbad10 != -1) {
    pcVar11 = (char *)&DAT_100fbad10;
    _swift_once(&DAT_100fbad10,FUN_10029fd9c);
  }
  uVar25 = DAT_100fbad18;
  VVar12 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar11);
  *(undefined **)WVar21.unknown = VVar12.unknown;
  *(undefined8 *)((long)WVar21.unknown + 8) = uVar25;
  *(undefined1 *)((long)WVar21.unknown + 0x10) = 0;
  puVar7 = &DAT_100fbad20;
  FUN_1000037f0(&DAT_100fbad20,&DAT_100c3b5f8);
  FUN_10029db24((long)WVar21.unknown + (long)*(int *)(puVar7 + 0x2c),param_6);
  SwiftUI::PlainButtonStyle::init();
  puVar7 = &DAT_100fbad28;
  local_d0[1] = (undefined *)param_6;
  FUN_100016eac(&DAT_100fbad28,&DAT_100fbad00,&DAT_100c3b5e8,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puVar13 = &DAT_100fb9b00;
  FUN_100003a00(&DAT_100fb9b00,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  local_d0[0] = puVar13;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (lVar20,lVar19,puVar5,PVar6.unknown,puVar7,puVar13);
  pcVar24 = *(code **)(lVar23 + 8);
  (*pcVar24)(lVar19,PVar6.unknown);
  FUN_100005808(WVar21.unknown,&DAT_100fbad00,&DAT_100c3b5e8);
  SwiftUI::Font::Weight::get_regular(WVar21);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar23 = local_c0;
  lVar14 = CONCAT71(extraout_var,DVar4.value);
  pcVar22 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
  (*pcVar22)(local_c0,1,1,lVar14);
  size.unknown = (undefined *)0x402a000000000000;
  FVar15 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_100005808(lVar23,&DAT_100fb92d0,&DAT_100c3abc0);
  puVar5 = &DAT_100c3b600;
  _swift_getKeyPath();
  HVar16.unknown = &DAT_100fbad30;
  FUN_1000037f0(&DAT_100fbad30,&DAT_100c3b630);
  iVar3 = *(int *)(HVar16.unknown + 0x24);
  *(undefined8 *)(lVar20 + iVar3) = puVar5;
  ((undefined8 *)(lVar20 + iVar3))[1] = FVar15.unknown;
  HVar16 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar16);
  WVar21.unknown = local_b8;
  piVar1 = (int *)(local_b0 + 0x24);
  local_b0 = (undefined *)lVar20;
  *(int *)(lVar20 + *piVar1) = (int)HVar16.unknown;
  FUN_10029d664(WVar21.unknown);
  PVar17 = SwiftUI::PlainButtonStyle::init();
  FUN_1002a0014();
  lVar20 = local_88;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_88,lVar19,local_a8,PVar6.unknown,PVar17.unknown,local_d0[0]);
  (*pcVar24)(lVar19,PVar6.unknown);
  FUN_100005808(WVar21.unknown,&DAT_100fbacf0,&DAT_100c3b5d0);
  SwiftUI::Font::Weight::get_regular(WVar21);
  (*pcVar22)(lVar23,1,1,lVar14);
  FVar15 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_100005808(lVar23,&DAT_100fb92d0,&DAT_100c3abc0);
  puVar5 = &DAT_100c3b600;
  _swift_getKeyPath();
  HVar16.unknown = &DAT_100fbad40;
  FUN_1000037f0(&DAT_100fbad40,&DAT_100c3b638);
  iVar3 = *(int *)(HVar16.unknown + 0x24);
  *(undefined8 *)(lVar20 + iVar3) = puVar5;
  ((undefined8 *)(lVar20 + iVar3))[1] = FVar15.unknown;
  HVar16 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar16);
  SVar18.unknown = &DAT_100fbad48;
  FUN_1000037f0(&DAT_100fbad48,&DAT_100c3b640);
  *(int *)(lVar20 + *(int *)(SVar18.unknown + 0x24)) = (int)HVar16.unknown;
  if (DAT_100fbad50 != -1) {
    SVar18.unknown = (undefined *)&DAT_100fbad50;
    _swift_once(&DAT_100fbad50,FUN_10029fdb8);
  }
  uVar25 = DAT_100fbad58;
  SVar18 = SwiftUI::Edge::Set::get_all(SVar18);
  SwiftUI::EdgeInsets::init((CGFloat)SVar18.unknown);
  lVar19 = local_98;
  puVar7 = local_b0;
  puVar2 = (undefined1 *)(lVar20 + *(int *)(local_90 + 0x24));
  *puVar2 = (char)SVar18.unknown;
  *(undefined8 *)(puVar2 + 8) = uVar25;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  FUN_100011090(local_b0,local_98,&DAT_100fbad08,&DAT_100c3b5f0);
  lVar23 = local_80;
  FUN_100011090(lVar20,local_80,&DAT_100fbacf8,&DAT_100c3b5d8);
  lVar14 = local_78;
  FUN_100011090(lVar19,local_78,&DAT_100fbad08,&DAT_100c3b5f0);
  puVar5 = &DAT_100fbad60;
  FUN_1000037f0(&DAT_100fbad60,&DAT_100c3b648);
  puVar9 = (undefined8 *)(lVar14 + *(int *)(puVar5 + 0x30));
  *puVar9 = 0;
  *(undefined1 *)(puVar9 + 1) = 1;
  FUN_100011090(lVar23,lVar14 + *(int *)(puVar5 + 0x40),&DAT_100fbacf8,&DAT_100c3b5d8);
  FUN_100005808(lVar20,&DAT_100fbacf8,&DAT_100c3b5d8);
  FUN_100005808(puVar7,&DAT_100fbad08,&DAT_100c3b5f0);
  FUN_100005808(lVar23,&DAT_100fbacf8,&DAT_100c3b5d8);
  FUN_100005808(lVar19,&DAT_100fbad08,&DAT_100c3b5f0);
  _swift_release(local_a0);
  return;
}



/* Address: 0x10029d664 | FUN_10029d664 */

void FUN_10029d664(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  State SVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  code *pcVar9;
  ulong uVar10;
  byte unaff_w20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined8 auStack_f0 [4];
  undefined1 auStack_d0 [4];
  uint local_cc;
  undefined *local_c8;
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined *puStack_88;
  
  puVar2 = &DAT_100fbad68;
  local_98 = param_1;
  FUN_1000037f0(&DAT_100fbad68,&DAT_100c3b650);
  local_b8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fbad70;
  local_c0 = auStack_d0 + -extraout_x8;
  FUN_1000037f0(&DAT_100fbad70,&DAT_100c3b658);
  local_a8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)(auStack_d0 + -extraout_x8) - extraout_x8_00;
  lVar4 = 0;
  local_a0 = lVar8;
  FUN_1002994c0();
  lVar12 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fb90b8;
  FUN_1000037f0(&DAT_100fb90b8,&DAT_100c38dd0);
  local_b0 = *(long *)(puVar3 + -8);
  puVar5 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined1 *)(lVar8 - extraout_x8_01);
  FUN_100259944();
  lVar4 = *(long *)(puVar5 + 0x10);
  _swift_bridgeObjectRelease();
  FUN_1000c495c();
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  if (lVar4 == 0) {
    puVar2 = &DAT_100ec5fa0;
    _swift_allocObject(&DAT_100ec5fa0,uVar13 + lVar11,uVar10 | 7);
    FUN_1000523d8(lVar8,puVar2 + uVar13,FUN_1002994c0);
    SwiftUI::Button::_init();
    lVar8 = local_a0;
    lVar4 = local_b0;
    (**(code **)(local_b0 + 0x10))(local_a0,puVar14,puVar3);
    _swift_storeEnumTagMultiPayload(lVar8,local_a8,0);
    FUN_100016eac(&DAT_100fb96f8,&DAT_100fb90b8,&DAT_100c38dd0,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
    puVar2 = &DAT_100fb9c28;
    FUN_100005c24(&DAT_100fb9c28,&DAT_100c39e20);
    FUN_1002a0100();
    local_90 = puVar3;
    puStack_88 = puVar2;
    _swift_getOpaqueTypeConformance2
              (&local_90,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
               ,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar8);
    pcVar9 = *(code **)(lVar4 + 8);
  }
  else {
    puVar5 = &DAT_100ec5f50;
    _swift_allocObject(&DAT_100ec5f50,uVar13 + lVar11,uVar10 | 7);
    FUN_1000523d8(lVar8,puVar5 + uVar13,FUN_1002994c0);
    SwiftUI::Button::_init();
    SVar6.unknown = &DAT_100fb9b30;
    FUN_1000037f0(&DAT_100fb9b30,&DAT_100c3a550);
    SwiftUI::State::get_projectedValue(SVar6);
    local_cc = (uint)unaff_w20;
    local_c8 = puVar2;
    FUN_1000c495c();
    puVar2 = &DAT_100ec5f78;
    _swift_allocObject(&DAT_100ec5f78,uVar13 + lVar11,uVar10 | 7);
    FUN_1000523d8(lVar8,puVar2 + uVar13,FUN_1002994c0);
    puVar5 = &DAT_100fb96f8;
    FUN_100016eac(&DAT_100fb96f8,&DAT_100fb90b8,&DAT_100c38dd0,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
    puVar7 = puVar5;
    FUN_10027b7cc();
    *(undefined **)(puVar14 + -0x10) = puVar5;
    *(undefined **)(puVar14 + -8) = puVar7;
    *(undefined **)(puVar14 + -0x20) = puVar3;
    *(undefined **)(puVar14 + -0x18) = &DAT_100ec4750;
    puVar1 = local_c0;
    FUN_10021dfac(local_c0,local_90,puStack_88,local_cc,FUN_1002a036c,puVar2,0,0,0);
    _swift_release(puStack_88);
    _swift_release(puVar2);
    _swift_release(local_90);
    (**(code **)(local_b0 + 8))(puVar14,puVar3);
    lVar8 = local_a0;
    lVar4 = local_b8;
    puVar5 = local_c8;
    (**(code **)(local_b8 + 0x10))(local_a0,puVar1,local_c8);
    _swift_storeEnumTagMultiPayload(lVar8,local_a8,1);
    puVar2 = &DAT_100fb9c28;
    FUN_100005c24(&DAT_100fb9c28,&DAT_100c39e20);
    FUN_1002a0100();
    local_90 = puVar3;
    puStack_88 = puVar2;
    _swift_getOpaqueTypeConformance2
              (&local_90,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
               ,1);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar8);
    pcVar9 = *(code **)(lVar4 + 8);
    puVar14 = puVar1;
    puVar3 = puVar5;
  }
  (*pcVar9)(puVar14,puVar3);
  return;
}



/* Address: 0x10029db24 | FUN_10029db24 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010029dd20 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10029db24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  void *pvVar9;
  ObservedObject<undefined> OVar10;
  Set SVar11;
  long lVar12;
  Button<Text> BVar13;
  long *plVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long local_200;
  long local_1f8;
  undefined8 *local_1f0 [2];
  long local_1e0;
  MainActor *local_1d8;
  long local_1d0;
  long local_1c8;
  undefined1 auStack_1c0 [64];
  char *local_180;
  void *pvStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  char *local_140;
  void *pvStack_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 local_108;
  undefined *local_100;
  void *pvStack_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  String local_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  lVar2 = 0;
  local_1f0[1] = param_1;
  FUN_1002994c0();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (long)&local_200 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_1f8 = extraout_x12;
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = (undefined *)(lVar19 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fbad78;
  FUN_1000037f0(&DAT_100fbad78,&DAT_100c3b6e0);
  local_1f0[0] = (undefined8 *)puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar2 = (long)LVar3.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = lVar2 - extraout_x12_00;
  local_1d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = lVar2 - extraout_x12_01;
  local_1e0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = lVar2 - extraout_x12_02;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_1d8 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x10e,UVar7.unknown,puVar6);
  }
  uVar15 = *(undefined8 *)(param_6 + 8);
  pvVar9 = (void *)0x0;
  FUN_10025cdc8();
  puVar4 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(uVar15);
  OVar10 = SwiftUI::ObservedObject::init(puVar4,pvVar9,puVar4);
  plVar14 = (long *)OVar10;
  if (DAT_100fbad50 != -1) {
    plVar14 = &DAT_100fbad50;
    _swift_once(&DAT_100fbad50,FUN_10029fdb8);
  }
  uVar15 = DAT_100fbad58;
  SVar11 = SwiftUI::Edge::Set::get_all((Set)plVar14);
  uVar20 = uVar15;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  local_130 = SUB81(SVar11.unknown,0);
  uStack_118 = (undefined1)param_4;
  uStack_117 = (undefined7)((ulong)param_4 >> 8);
  uStack_110 = (undefined1)param_5;
  uStack_10f = (undefined7)((ulong)param_5 >> 8);
  local_108 = 0;
  local_c8 = 0;
  local_140 = (char *)OVar10;
  pvStack_138 = pvVar9;
  local_128 = uVar20;
  local_120 = param_3;
  local_100 = OVar10.unknown;
  pvStack_f8 = pvVar9;
  local_f0 = local_130;
  local_e8 = uVar20;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  FUN_100011090(&local_140,&local_c0,&DAT_100fbad80,&DAT_100c3b6e8);
  FUN_100005808(&local_100,&DAT_100fbad80,&DAT_100c3b6e8);
  FUN_1001c67a4(LVar3.unknown);
  local_c0 = (extension_Foundation)::Swift::String::init(LVar3);
  FUN_1000c495c(param_6,lVar19,FUN_1002994c0);
  uVar17 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar16 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100ec5fc8;
  local_200 = param_6;
  _swift_allocObject(&DAT_100ec5fc8,uVar16 + local_1f8,uVar17 | 7);
  lVar12 = lVar19;
  FUN_1000523d8(lVar19,puVar4 + uVar16,FUN_1002994c0);
  FUN_1002538a0();
  BVar13 = (extension_SwiftUI)::SwiftUI::Button::_init
                     (lVar2,lVar12,FUN_1002a043c,puVar4,
                      PTR___type_metadata_for_Swift_String_100eac208,lVar12);
  SVar11 = SwiftUI::Edge::Set::get_all(BVar13.unknown);
  uVar20 = uVar15;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar6 = local_1f0[0];
  puVar1 = (undefined1 *)(lVar2 + *(int *)((long)local_1f0[0] + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar20;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_1001c5e80(LVar3.unknown);
  local_c0 = (extension_Foundation)::Swift::String::init(LVar3);
  FUN_1000c495c(local_200,lVar19,FUN_1002994c0);
  puVar4 = &DAT_100ec5ff0;
  _swift_allocObject(&DAT_100ec5ff0,uVar16 + local_1f8,uVar17 | 7);
  FUN_1000523d8(lVar19,puVar4 + uVar16,FUN_1002994c0);
  lVar18 = local_1e0;
  BVar13 = (extension_SwiftUI)::SwiftUI::Button::_init
                     (local_1e0,puVar4,FUN_1002a044c,puVar4,
                      PTR___type_metadata_for_Swift_String_100eac208,lVar12);
  SVar11 = SwiftUI::Edge::Set::get_all(BVar13.unknown);
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  lVar19 = local_1d0;
  puVar1 = (undefined1 *)(lVar18 + *(int *)((long)puVar6 + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  uStack_170 = CONCAT71(uStack_12f,local_130);
  pvStack_178 = pvStack_138;
  local_180 = local_140;
  uStack_168 = local_128;
  uStack_158 = uStack_118;
  local_160 = local_120;
  uStack_14f = CONCAT17(local_108,uStack_10f);
  uStack_157 = uStack_117;
  uStack_150 = uStack_110;
  FUN_100011090(lVar2,local_1d0,&DAT_100fbad78,&DAT_100c3b6e0);
  lVar12 = local_1c8;
  FUN_100011090(lVar18,local_1c8,&DAT_100fbad78,&DAT_100c3b6e0);
  puVar6 = local_1f0[1];
  local_c0.bridgeObject = pvStack_178;
  local_c0.str = local_180;
  uStack_a8 = uStack_168;
  uStack_b0 = uStack_170;
  uStack_98 = uStack_158;
  local_a0 = local_160;
  uStack_8f = uStack_14f;
  uStack_97 = uStack_157;
  uStack_90 = uStack_150;
  local_1f0[1][1] = pvStack_178;
  *local_1f0[1] = local_180;
  local_1f0[1][3] = uStack_168;
  local_1f0[1][2] = uStack_170;
  local_1f0[1][5] = CONCAT71(uStack_157,uStack_158);
  local_1f0[1][4] = local_160;
  *(undefined8 *)((long)local_1f0[1] + 0x31) = uStack_14f;
  *(ulong *)((long)local_1f0[1] + 0x29) = CONCAT17(uStack_150,uStack_157);
  puVar4 = &DAT_100fbad88;
  FUN_1000037f0(&DAT_100fbad88,&DAT_100c3b6f0);
  FUN_100011090(lVar19,(long)puVar6 + (long)*(int *)(puVar4 + 0x30),&DAT_100fbad78,&DAT_100c3b6e0);
  FUN_100011090(lVar12,(long)puVar6 + (long)*(int *)(puVar4 + 0x40),&DAT_100fbad78,&DAT_100c3b6e0);
  FUN_100011090(&local_c0,auStack_1c0,&DAT_100fbad80,&DAT_100c3b6e8);
  FUN_100005808(lVar18,&DAT_100fbad78,&DAT_100c3b6e0);
  FUN_100005808(lVar2,&DAT_100fbad78,&DAT_100c3b6e0);
  FUN_100005808(lVar12,&DAT_100fbad78,&DAT_100c3b6e0);
  FUN_100005808(lVar19,&DAT_100fbad78,&DAT_100c3b6e0);
  FUN_100005808(&local_180,&DAT_100fbad80,&DAT_100c3b6e8);
  _swift_release(local_1d8);
  return;
}



/* Address: 0x10029e098 | FUN_10029e098 */

void FUN_10029e098(long param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  URL UVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
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
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,param_2,UVar5.unknown,puVar4);
  }
  lVar7 = *(long *)(param_1 + 8) + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
  uVar9 = *(undefined8 *)(lVar7 + 0x18);
  lVar10 = *(long *)(lVar7 + 0x28);
  FUN_100004640(lVar7,uVar9);
  (*param_3)();
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar2.unknown);
  (**(code **)(lVar10 + 8))(puVar8,uVar9,lVar10);
  (**(code **)(lVar11 + 8))(puVar8,UVar2.unknown);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10029e1f8 | FUN_10029e1f8 */

void FUN_10029e1f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x12;
  Published *pPVar10;
  undefined1 *puVar11;
  long lVar12;
  
  lVar3 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar11 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = (long)puVar11 - extraout_x12;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x11b,UVar6.unknown,puVar5);
  }
  pPVar10 = *(Published **)(param_1 + 8);
  _swift_storeEnumTagMultiPayload(lVar12,lVar3,3);
  puVar8 = &DAT_100c3b668;
  _swift_getKeyPath(&DAT_100c3b668);
  puVar9 = &DAT_100c3b690;
  _swift_getKeyPath(&DAT_100c3b690);
  FUN_1000c495c(lVar12,puVar11,FUN_10025cfc4);
  _swift_retain(pPVar10);
  Combine::Published::_set_subscript(pPVar10,puVar11,pPVar10,puVar8,puVar9);
  FUN_10005241c(lVar12,FUN_10025cfc4);
  lVar3 = (long)&pPVar10->unknown + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  FUN_100004640(lVar3,uVar1);
  FUN_1001ad344(uVar1,uVar2,lVar3);
  _swift_release(pMVar4);
  return;
}



/* Address: 0x10029e3a4 | FUN_10029e3a4 */

void FUN_10029e3a4(long param_1)

{
  int iVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 local_41;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x121,UVar4.unknown,puVar3);
  }
  lVar6 = 0;
  FUN_1002994c0();
  iVar1 = *(int *)(lVar6 + 0x1c);
  local_41 = 1;
  puVar7 = &DAT_100fb9b30;
  FUN_1000037f0(&DAT_100fb9b30,&DAT_100c3a550);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_41,puVar7);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10029e490 | FUN_10029e490 */

void FUN_10029e490(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long extraout_x8;
  String local_50;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,param_3,UVar4.unknown,puVar3);
    param_5 = param_3;
  }
  FUN_1001cabd4(LVar1.unknown);
  local_50 = (extension_Foundation)::Swift::String::init(LVar1);
  uVar8 = local_50.str._0_1_;
  FUN_1002538a0();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar2);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = param_5;
  return;
}



/* Address: 0x10029e5c0 | FUN_10029e5c0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010029e614 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10029e5c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ObservedObject<undefined> OVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar1 = 0;
  FUN_10025cdc8();
  puVar2 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(uVar4);
  OVar3 = SwiftUI::ObservedObject::init(puVar2,uVar1,puVar2);
  puVar2 = &DAT_100c3b6b0;
  _swift_getKeyPath();
  *param_1 = OVar3.unknown;
  param_1[1] = uVar1;
  param_1[2] = puVar2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x10029e648 | FUN_10029e648 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010029ecc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10029e648(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  RGBColorSpace RVar5;
  RoundedCornerStyle RVar6;
  BlendMode BVar7;
  RoundedRectangle RVar8;
  HorizontalAlignment HVar9;
  Color CVar10;
  UnitPoint UVar11;
  Gradient gradient;
  LinearGradient LVar12;
  Set SVar13;
  Alignment AVar14;
  Color CVar16;
  undefined *puVar17;
  undefined *puVar19;
  UnitPoint endPoint;
  long extraout_x8;
  undefined8 *puVar20;
  long extraout_x8_00;
  ulong uVar21;
  UnitPoint startPoint;
  long lVar22;
  code *pcVar23;
  undefined1 auVar24 [16];
  code *local_ab0 [4];
  undefined4 local_a8c;
  undefined *local_a88;
  undefined *puStack_a80;
  undefined8 *local_a78;
  undefined *local_a70;
  undefined1 auStack_a68 [232];
  undefined *local_980;
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
  undefined *local_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined *local_8c0;
  undefined8 uStack_8b8;
  undefined1 local_8b0;
  undefined7 local_8af;
  undefined1 uStack_8a8;
  undefined7 uStack_8a7;
  undefined1 uStack_8a0;
  undefined7 local_89f;
  undefined1 uStack_898;
  undefined7 uStack_897;
  undefined1 uStack_890;
  undefined7 local_88f;
  undefined1 uStack_888;
  undefined7 uStack_887;
  undefined1 uStack_880;
  undefined7 local_87f;
  undefined1 uStack_878;
  undefined7 uStack_877;
  undefined1 uStack_870;
  undefined7 local_86f;
  undefined1 uStack_868;
  undefined7 uStack_867;
  undefined1 uStack_860;
  undefined7 local_85f;
  undefined1 uStack_858;
  undefined7 uStack_857;
  undefined1 uStack_850;
  undefined7 uStack_84f;
  undefined *local_848;
  undefined8 local_840;
  undefined1 local_838;
  undefined8 local_837;
  undefined8 uStack_82f;
  undefined8 local_827;
  undefined8 uStack_81f;
  undefined8 local_817;
  undefined8 uStack_80f;
  undefined8 local_807;
  undefined8 uStack_7ff;
  undefined8 local_7f7;
  undefined8 uStack_7ef;
  undefined8 local_7e7;
  undefined7 uStack_7df;
  undefined1 uStack_7d8;
  undefined7 uStack_7d7;
  undefined *local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined *local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined *local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined1 local_5a0;
  undefined *local_590;
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
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined1 local_4c0;
  undefined *local_4b0;
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
  undefined8 uStack_438;
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
  undefined *puStack_3d8;
  undefined *local_3d0;
  undefined *local_3c0;
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
  undefined8 local_2f0;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined7 uStack_2d8;
  undefined1 local_2d1;
  undefined7 uStack_2d0;
  undefined1 uStack_2c9;
  undefined7 uStack_2c8;
  undefined1 local_2c1;
  undefined7 uStack_2c0;
  undefined1 uStack_2b9;
  undefined7 uStack_2b8;
  undefined1 local_2b1;
  undefined7 uStack_2b0;
  undefined1 uStack_2a9;
  undefined7 uStack_2a8;
  undefined1 local_2a1;
  undefined7 uStack_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  undefined1 local_291;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined7 uStack_288;
  undefined1 local_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined7 uStack_278;
  undefined *local_270;
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
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined *local_1c0;
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
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long lVar15;
  long lVar18;
  
  RVar8 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  local_a70 = RVar8.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(RVar8.unknown + -8) + 0x40));
  puVar20 = (undefined8 *)((long)local_ab0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a78 = puVar20;
  RVar5 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  HVar9.unknown = (undefined *)CONCAT71((int7)((ulong)RVar8.unknown >> 8),RVar5.value);
  puStack_a80 = *(undefined **)(HVar9.unknown + -8);
  local_a88 = HVar9.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)puStack_a80 + 0x40));
  lVar22 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1000f3588();
  HVar9 = SwiftUI::HorizontalAlignment::get_center(HVar9);
  FUN_10029f03c(&local_3c0);
  uStack_958 = uStack_398;
  local_960 = local_3a0;
  uStack_948 = uStack_388;
  uStack_950 = local_390;
  uStack_938 = uStack_378;
  local_940 = local_380;
  uStack_928 = uStack_368;
  uStack_930 = local_370;
  uStack_978 = uStack_3b8;
  local_980 = local_3c0;
  uStack_968 = uStack_3a8;
  uStack_970 = local_3b0;
  uStack_8f8 = uStack_398;
  local_900 = local_3a0;
  uStack_8e8 = uStack_388;
  uStack_8f0 = local_390;
  uStack_8d8 = uStack_378;
  local_8e0 = local_380;
  uStack_8c8 = uStack_368;
  uStack_8d0 = local_370;
  uStack_918 = uStack_3b8;
  local_920 = local_3c0;
  uStack_908 = uStack_3a8;
  uStack_910 = local_3b0;
  FUN_100011090(&local_980,&local_4b0,&DAT_100fbb060,&DAT_100c3b9b8);
  AVar14.unknown = (undefined *)&local_920;
  FUN_100005808(AVar14.unknown,&DAT_100fbb060,&DAT_100c3b9b8);
  uStack_2a9 = (undefined1)uStack_958;
  uStack_2a8 = (undefined7)((ulong)uStack_958 >> 8);
  local_2b1 = (undefined1)local_960;
  uStack_2b0 = (undefined7)((ulong)local_960 >> 8);
  uStack_299 = (undefined1)uStack_948;
  uStack_298 = (undefined7)((ulong)uStack_948 >> 8);
  local_2a1 = (undefined1)uStack_950;
  uStack_2a0 = (undefined7)((ulong)uStack_950 >> 8);
  uStack_289 = (undefined1)uStack_938;
  uStack_288 = (undefined7)((ulong)uStack_938 >> 8);
  local_291 = (undefined1)local_940;
  uStack_290 = (undefined7)((ulong)local_940 >> 8);
  uStack_279 = (undefined1)uStack_928;
  uStack_278 = (undefined7)((ulong)uStack_928 >> 8);
  local_281 = (undefined1)uStack_930;
  uStack_280 = (undefined7)((ulong)uStack_930 >> 8);
  uStack_2c9 = (undefined1)uStack_978;
  uStack_2c8 = (undefined7)((ulong)uStack_978 >> 8);
  local_2d1 = SUB81(local_980,0);
  uStack_2d0 = (undefined7)((ulong)local_980 >> 8);
  uStack_2b9 = (undefined1)uStack_968;
  uStack_2b8 = (undefined7)((ulong)uStack_968 >> 8);
  local_2c1 = (undefined1)uStack_970;
  uStack_2c0 = (undefined7)((ulong)uStack_970 >> 8);
  SwiftUI::Alignment::get_center(AVar14);
  uStack_877 = uStack_2a0;
  uStack_870 = uStack_299;
  local_87f = uStack_2a8;
  uStack_878 = local_2a1;
  uStack_867 = uStack_290;
  uStack_860 = uStack_289;
  local_86f = uStack_298;
  uStack_868 = local_291;
  uStack_857 = uStack_280;
  local_85f = uStack_288;
  uStack_858 = local_281;
  uStack_8a7 = uStack_2d0;
  uStack_8a0 = uStack_2c9;
  local_8af = uStack_2d8;
  uStack_8a8 = local_2d1;
  uStack_897 = uStack_2c0;
  uStack_890 = uStack_2b9;
  local_89f = uStack_2c8;
  uStack_898 = local_2c1;
  uStack_8b8 = 0x4010000000000000;
  local_8b0 = 0;
  uStack_850 = uStack_279;
  uStack_84f = uStack_278;
  uStack_887 = uStack_2b0;
  uStack_880 = uStack_2a9;
  local_88f = uStack_2b8;
  uStack_888 = local_2b1;
  local_8c0 = HVar9.unknown;
  SwiftUI::_FrameLayout::_init((Alignment)0x4069000000000000);
  local_230 = CONCAT71(local_87f,uStack_880);
  uStack_228 = CONCAT71(uStack_877,uStack_878);
  uStack_218 = CONCAT71(uStack_867,uStack_868);
  local_220 = CONCAT71(local_86f,uStack_870);
  local_210 = CONCAT71(local_85f,uStack_860);
  uStack_208 = CONCAT71(uStack_857,uStack_858);
  uStack_258 = CONCAT71(uStack_8a7,uStack_8a8);
  local_260 = CONCAT71(local_8af,local_8b0);
  uStack_268 = uStack_8b8;
  local_270 = local_8c0;
  local_250 = CONCAT71(local_89f,uStack_8a0);
  uStack_248 = CONCAT71(uStack_897,uStack_898);
  uStack_238 = CONCAT71(uStack_887,uStack_888);
  local_240 = CONCAT71(local_88f,uStack_890);
  local_807 = CONCAT17(local_2a1,uStack_2a8);
  uStack_7ff = CONCAT17(uStack_299,uStack_2a0);
  uStack_80f = CONCAT17(uStack_2a9,uStack_2b0);
  local_817 = CONCAT17(local_2b1,uStack_2b8);
  local_7f7 = CONCAT17(local_291,uStack_298);
  uStack_7ef = CONCAT17(uStack_289,uStack_290);
  local_7e7 = CONCAT17(local_281,uStack_288);
  uStack_7df = uStack_280;
  local_837 = CONCAT17(local_2d1,uStack_2d8);
  uStack_82f = CONCAT17(uStack_2c9,uStack_2d0);
  uStack_81f = CONCAT17(uStack_2b9,uStack_2c0);
  local_827 = CONCAT17(local_2c1,uStack_2c8);
  local_200 = CONCAT71(uStack_84f,uStack_850);
  local_840 = 0x4010000000000000;
  local_838 = 0;
  uStack_7d8 = uStack_279;
  uStack_7d7 = uStack_278;
  local_848 = HVar9.unknown;
  FUN_100011090(&local_8c0,&local_3c0,&DAT_100fbb068,&DAT_100c3b9c0);
  FUN_100005808(&local_848,&DAT_100fbb068,&DAT_100c3b9c0);
  puVar19 = &DAT_100fba3e0;
  FUN_1000037f0(&DAT_100fba3e0,&DAT_100c3aaf0);
  _swift_allocObject();
  endPoint.unknown = local_a88;
  *(undefined8 *)(puVar19 + 0x18) = 6;
  *(undefined8 *)(puVar19 + 0x10) = 3;
  startPoint.unknown =
       (undefined *)
       (ulong)*(uint *)
               PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_100eab698
  ;
  pcVar23 = *(code **)((long)puStack_a80 + 0x68);
  (*pcVar23)(lVar22,startPoint.unknown,local_a88);
  RVar5.value = (__int8)lVar22;
  CVar10 = SwiftUI::Color::init(RVar5,1.0,0.698,0.322,1.0);
  *(undefined **)(puVar19 + 0x20) = CVar10.unknown;
  (*pcVar23)(lVar22,startPoint.unknown,endPoint.unknown);
  CVar10 = SwiftUI::Color::init(RVar5,1.0,0.608,0.075,1.0);
  *(undefined **)(puVar19 + 0x28) = CVar10.unknown;
  (*pcVar23)(lVar22);
  CVar10 = SwiftUI::Color::init(RVar5,1.0,0.58,0.0,1.0);
  *(undefined **)(puVar19 + 0x30) = CVar10.unknown;
  UVar11 = SwiftUI::UnitPoint::get_topLeading(CVar10.unknown);
  SwiftUI::UnitPoint::get_bottomTrailing(UVar11);
  gradient = SwiftUI::Gradient::init();
  LVar12 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SVar13 = SwiftUI::Edge::Set::get_all(LVar12.unknown);
  local_730 = local_1d0;
  uStack_748 = uStack_1e8;
  local_750 = local_1f0;
  uStack_738 = uStack_1d8;
  uStack_740 = local_1e0;
  uStack_788 = uStack_228;
  local_790 = local_230;
  uStack_778 = uStack_218;
  uStack_780 = local_220;
  uStack_768 = uStack_208;
  local_770 = local_210;
  uStack_758 = uStack_1f8;
  uStack_760 = local_200;
  uStack_7c8 = uStack_268;
  local_7d0 = local_270;
  uStack_7b8 = uStack_258;
  uStack_7c0 = local_260;
  uStack_7a8 = uStack_248;
  local_7b0 = local_250;
  uStack_798 = uStack_238;
  uStack_7a0 = local_240;
  uStack_698 = uStack_1e8;
  local_6a0 = local_1f0;
  uStack_688 = uStack_1d8;
  uStack_690 = local_1e0;
  local_680 = local_1d0;
  uStack_6d8 = uStack_228;
  local_6e0 = local_230;
  uStack_6c8 = uStack_218;
  uStack_6d0 = local_220;
  uStack_6b8 = uStack_208;
  local_6c0 = local_210;
  uStack_6a8 = uStack_1f8;
  uStack_6b0 = local_200;
  uStack_718 = uStack_268;
  local_720 = local_270;
  uStack_708 = uStack_258;
  uStack_710 = local_260;
  uStack_6f8 = uStack_248;
  local_700 = local_250;
  uStack_6e8 = uStack_238;
  uStack_6f0 = local_240;
  puVar19 = &DAT_100fbb070;
  FUN_100011090(&local_7d0,&local_3c0,&DAT_100fbb070,&DAT_100c3b9d0);
  AVar14.unknown = (undefined *)&local_720;
  FUN_100005808(AVar14.unknown,&DAT_100fbb070,&DAT_100c3b9d0);
  AVar14 = SwiftUI::Alignment::get_center(AVar14);
  uStack_5e8 = uStack_1e8;
  local_5f0 = local_1f0;
  uStack_5d8 = uStack_1d8;
  uStack_5e0 = local_1e0;
  uStack_628 = uStack_228;
  local_630 = local_230;
  uStack_618 = uStack_218;
  uStack_620 = local_220;
  uStack_608 = uStack_208;
  local_610 = local_210;
  uStack_5f8 = uStack_1f8;
  uStack_600 = local_200;
  uStack_668 = uStack_268;
  local_670 = local_270;
  uStack_658 = uStack_258;
  uStack_660 = local_260;
  uStack_648 = uStack_248;
  local_650 = local_250;
  uStack_638 = uStack_238;
  uStack_640 = local_240;
  local_5d0 = local_1d0;
  uStack_5c8 = local_e0;
  local_5c0 = local_d8;
  local_5b8 = uStack_d0;
  local_5b0 = local_c8;
  uStack_5a8 = uStack_c0;
  local_5a0 = SUB81(SVar13.unknown,0);
  uStack_158 = uStack_208;
  local_160 = local_210;
  uStack_148 = uStack_1f8;
  uStack_150 = local_200;
  uStack_138 = uStack_1e8;
  local_140 = local_1f0;
  uStack_128 = uStack_1d8;
  uStack_130 = local_1e0;
  uStack_198 = uStack_248;
  local_1a0 = local_250;
  uStack_188 = uStack_238;
  uStack_190 = local_240;
  uStack_178 = uStack_228;
  local_180 = local_230;
  uStack_168 = uStack_218;
  uStack_170 = local_220;
  uStack_1b8 = uStack_268;
  local_1c0 = local_270;
  uStack_1a8 = uStack_258;
  uStack_1b0 = local_260;
  uStack_118 = local_e0;
  local_120 = local_1d0;
  uStack_108 = uStack_d0;
  uStack_110 = local_d8;
  uStack_f8 = uStack_c0;
  local_100 = local_c8;
  uStack_508 = uStack_1e8;
  local_510 = local_1f0;
  uStack_4f8 = uStack_1d8;
  uStack_500 = local_1e0;
  uStack_548 = uStack_228;
  local_550 = local_230;
  uStack_538 = uStack_218;
  uStack_540 = local_220;
  uStack_528 = uStack_208;
  local_530 = local_210;
  uStack_518 = uStack_1f8;
  uStack_520 = local_200;
  uStack_588 = uStack_268;
  local_590 = local_270;
  uStack_578 = uStack_258;
  uStack_580 = local_260;
  uStack_568 = uStack_248;
  local_570 = local_250;
  uStack_558 = uStack_238;
  uStack_560 = local_240;
  local_4f0 = local_1d0;
  local_4e8 = local_e0;
  local_4e0 = local_d8;
  local_4d8 = uStack_d0;
  local_4d0 = local_c8;
  local_4c8 = uStack_c0;
  local_a88 = puVar19;
  puStack_a80 = AVar14.unknown;
  local_4c0 = local_5a0;
  local_f0 = local_5a0;
  FUN_100011090(&local_670,&local_3c0,&DAT_100fbb078,&DAT_100c3b9d8);
  FUN_100005808(&local_590,&DAT_100fbb078,&DAT_100c3b9d8);
  iVar2 = *(int *)(local_a70 + 0x14);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  local_a8c = uVar1;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  puVar4 = local_a78;
  lVar15 = CONCAT71((int7)((ulong)AVar14.unknown >> 8),RVar6.value);
  local_ab0[3] = *(code **)(*(long *)(lVar15 + -8) + 0x68);
  CVar10.unknown = (undefined *)((long)local_a78 + (long)iVar2);
  (*local_ab0[3])(CVar10.unknown,uVar1,lVar15);
  auVar24 = NEON_fmov(0x4038000000000000,8);
  local_ab0[1] = auVar24._8_8_;
  local_ab0[0] = auVar24._0_8_;
  puVar4[1] = local_ab0[1];
  *puVar4 = local_ab0[0];
  CVar10 = SwiftUI::Color::get_white(CVar10);
  CVar16 = SwiftUI::Color::opacity(0.5,CVar10);
  _swift_release(CVar10.unknown);
  SwiftUI::StrokeStyle::init
            (&local_b8,0x3ff0000000000000,0x4024000000000000,0,CVar16.unknown,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar19 = &DAT_100fbb080;
  FUN_1000037f0(&DAT_100fbb080,&DAT_100c3b9e0);
  puVar17 = PTR_typeMetadataAccessor_100eaa9e0;
  lVar22 = (long)param_1 + (long)*(int *)(puVar19 + 0x24);
  FUN_1000c495c(puVar4,lVar22,PTR_typeMetadataAccessor_100eaa9e0);
  puVar19 = &DAT_100fb92b0;
  FUN_1000037f0(&DAT_100fb92b0,&DAT_100c3a630);
  puVar20 = (undefined8 *)(lVar22 + *(int *)(puVar19 + 0x24));
  puVar20[1] = uStack_b0;
  *puVar20 = local_b8;
  puVar20[3] = uStack_a0;
  puVar20[2] = local_a8;
  puVar20[4] = local_98;
  AVar14.unknown = &DAT_100fb92b8;
  puVar19 = &DAT_100c39040;
  FUN_1000037f0();
  *(undefined **)(lVar22 + *(int *)(AVar14.unknown + 0x34)) = CVar16.unknown;
  *(undefined2 *)(lVar22 + *(int *)(AVar14.unknown + 0x38)) = 0x100;
  AVar14 = SwiftUI::Alignment::get_center(AVar14);
  FUN_10005241c(puVar4,puVar17);
  puVar17 = &DAT_100fb92c0;
  FUN_1000037f0(&DAT_100fb92c0,&DAT_100c3a640);
  iVar2 = *(int *)(puVar17 + 0x24);
  *(undefined8 *)(lVar22 + iVar2) = AVar14.unknown;
  ((undefined8 *)(lVar22 + iVar2))[1] = puVar19;
  puVar19 = &DAT_100fbb088;
  FUN_1000037f0(&DAT_100fbb088,&DAT_100c3b9f0);
  iVar2 = *(int *)(puVar19 + 0x24);
  uVar21 = (ulong)*(uint *)
                   PTR___enum_case_for_SwiftUI_BlendMode_plusLighter_SwiftUI_BlendMode_Type___>_SwiftUI_BlendMode_100eabab0
  ;
  BVar7 = SwiftUI::BlendMode::typeMetadataAccessor();
  lVar18 = CONCAT71((int7)((ulong)puVar19 >> 8),BVar7.value);
  AVar14.unknown = (undefined *)(lVar22 + iVar2);
  (**(code **)(*(long *)(lVar18 + -8) + 0x68))(AVar14.unknown,uVar21,lVar18);
  AVar14 = SwiftUI::Alignment::get_center(AVar14);
  puVar3 = puStack_a80;
  puVar17 = local_a88;
  uStack_408 = uStack_118;
  local_410 = local_120;
  uStack_3f8 = uStack_108;
  local_400 = uStack_110;
  uStack_3e8 = uStack_f8;
  local_3f0 = local_100;
  uStack_448 = uStack_158;
  local_450 = local_160;
  uStack_438 = uStack_148;
  local_440 = uStack_150;
  uStack_428 = uStack_138;
  local_430 = local_140;
  uStack_418 = uStack_128;
  local_420 = uStack_130;
  uStack_488 = uStack_198;
  local_490 = local_1a0;
  uStack_478 = uStack_188;
  local_480 = uStack_190;
  uStack_468 = uStack_178;
  local_470 = local_180;
  uStack_458 = uStack_168;
  local_460 = uStack_170;
  uStack_4a8 = uStack_1b8;
  local_4b0 = local_1c0;
  local_3e0 = CONCAT71(uStack_ef,local_f0);
  uStack_498 = uStack_1a8;
  local_4a0 = uStack_1b0;
  puStack_3d8 = puStack_a80;
  local_3d0 = local_a88;
  puVar19 = &DAT_100fbb090;
  FUN_1000037f0(&DAT_100fbb090,&DAT_100c3b9f8);
  iVar2 = *(int *)(puVar19 + 0x24);
  *(undefined8 *)(lVar22 + iVar2) = AVar14.unknown;
  ((undefined8 *)(lVar22 + iVar2))[1] = uVar21;
  param_1[1] = uStack_4a8;
  *param_1 = local_4b0;
  param_1[3] = uStack_498;
  param_1[2] = local_4a0;
  param_1[9] = uStack_468;
  param_1[8] = local_470;
  param_1[0xb] = uStack_458;
  param_1[10] = local_460;
  param_1[5] = uStack_488;
  param_1[4] = local_490;
  param_1[7] = uStack_478;
  param_1[6] = local_480;
  param_1[0x11] = uStack_428;
  param_1[0x10] = local_430;
  param_1[0x13] = uStack_418;
  param_1[0x12] = local_420;
  param_1[0xd] = uStack_448;
  param_1[0xc] = local_450;
  param_1[0xf] = uStack_438;
  param_1[0xe] = local_440;
  param_1[0x19] = uStack_3e8;
  param_1[0x18] = local_3f0;
  param_1[0x1b] = puStack_3d8;
  param_1[0x1a] = local_3e0;
  param_1[0x15] = uStack_408;
  param_1[0x14] = local_410;
  param_1[0x17] = uStack_3f8;
  param_1[0x16] = local_400;
  uStack_318 = uStack_118;
  local_320 = local_120;
  uStack_308 = uStack_108;
  local_310 = uStack_110;
  uStack_2f8 = uStack_f8;
  local_300 = local_100;
  uStack_358 = uStack_158;
  local_360 = local_160;
  uStack_348 = uStack_148;
  local_350 = uStack_150;
  uStack_338 = uStack_138;
  local_340 = local_140;
  uStack_328 = uStack_128;
  local_330 = uStack_130;
  uStack_398 = uStack_198;
  local_3a0 = local_1a0;
  uStack_388 = uStack_188;
  local_390 = uStack_190;
  uStack_378 = uStack_178;
  local_380 = local_180;
  uStack_368 = uStack_168;
  local_370 = uStack_170;
  uStack_3b8 = uStack_1b8;
  local_3c0 = local_1c0;
  param_1[0x1c] = local_3d0;
  local_2f0 = CONCAT71(uStack_ef,local_f0);
  uStack_3a8 = uStack_1a8;
  local_3b0 = uStack_1b0;
  local_2e8 = puVar3;
  local_2e0 = puVar17;
  FUN_100011090(&local_4b0,auStack_a68,&DAT_100fbb098,&DAT_100c3ba00);
  FUN_100005808(&local_3c0,&DAT_100fbb098,&DAT_100c3ba00);
  puVar19 = &DAT_100fbb0a0;
  FUN_1000037f0(&DAT_100fbb0a0,&DAT_100c3ba08);
  puVar20 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar19 + 0x24));
  (*local_ab0[3])((long)puVar20 + (long)*(int *)(local_a70 + 0x14),local_a8c,lVar15);
  puVar20[1] = local_ab0[1];
  *puVar20 = local_ab0[0];
  CVar10.unknown = &DAT_100fb94e8;
  FUN_1000037f0(&DAT_100fb94e8,&DAT_100c39280);
  iVar2 = *(int *)(CVar10.unknown + 0x24);
  *(undefined1 *)((long)puVar20 + (long)iVar2) = 0;
  ((undefined1 *)((long)puVar20 + (long)iVar2))[1] = 1;
  CVar10 = SwiftUI::Color::get_black(CVar10);
  CVar16 = SwiftUI::Color::opacity(0.08,CVar10);
  _swift_release(CVar10.unknown);
  puVar19 = &DAT_100fbb0a8;
  FUN_1000037f0(&DAT_100fbb0a8,&DAT_100c3ba10);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar19 + 0x24));
  *param_1 = CVar16.unknown;
  param_1[2] = 0;
  param_1[1] = 0x4040000000000000;
  param_1[3] = 0x4020000000000000;
  return;
}



/* Address: 0x10029f03c | FUN_10029f03c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010029f184 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10029f03c(undefined8 *param_1,CGFloat param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,Color param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  LocalizedStringResource LVar3;
  Design DVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  Text TVar10;
  Font FVar11;
  Text TVar12;
  Color CVar13;
  Color CVar14;
  Text TVar15;
  long lVar16;
  Text TVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  char *pcVar21;
  undefined *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  CGFloat size;
  long lVar23;
  CGFloat size_00;
  undefined auStack_110 [4];
  undefined4 local_10c;
  undefined *local_108;
  undefined *puStack_100;
  char *local_f8;
  undefined4 local_ec;
  undefined *local_e8;
  LocalizedStringResource local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 *local_c8;
  MainActor *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  code *local_98;
  long lStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  
  local_c8 = param_1;
  local_d0 = (undefined *)Foundation::LocalizedStringResource::typeMetadataAccessor();
  local_d8 = *(long *)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  puVar5 = &DAT_100fb92d0;
  local_e0.unknown = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_c0 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "PasteLicensingAppStore/OfferPaywallView.swift";
    param_6.unknown = (undefined *)0x13f;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferPaywallView.swift",0x2d,1,0x13f,UVar8.unknown,puVar7);
  }
  local_88 = (undefined *)*param_3;
  uVar18 = param_3[1];
  uStack_80 = uVar18;
  FUN_1002538a0();
  local_f8 = pcVar9;
  _swift_bridgeObjectRetain(uVar18);
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar10 = SwiftUI::Text::_init(pcVar9,PTR___type_metadata_for_Swift_String_100eac208,pcVar9);
  SwiftUI::Font::Weight::get_medium((Weight)TVar10.unknown);
  DVar4 = SwiftUI::Font::Design::typeMetadataAccessor();
  lStack_90 = CONCAT71((int7)((ulong)TVar10.unknown >> 8),DVar4.value);
  local_98 = *(code **)(*(long *)(lStack_90 + -8) + 0x38);
  (*local_98)(lVar23,1,1,lStack_90);
  FVar11 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_100005808(lVar23,&DAT_100fb92d0,&DAT_100c3abc0);
  TVar17 = TVar10;
  puVar19 = puVar5;
  pcVar21 = pcVar9;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  local_b8 = param_3;
  _swift_release(FVar11.unknown);
  FUN_100016d74(TVar10.unknown,puVar5,pcVar9);
  _swift_bridgeObjectRelease();
  CVar13 = SwiftUI::Color::get_white(param_6);
  size.unknown = (undefined *)0x3feb333333333333;
  CVar14 = SwiftUI::Color::opacity(0.85,CVar13);
  _swift_release();
  local_88 = CVar14.unknown;
  FUN_10026e1d0();
  TVar10 = TVar12;
  puVar5 = TVar17.unknown;
  puVar22 = puVar19;
  local_a0 = CVar13.unknown;
  TVar15 = SwiftUI::Text::_foregroundStyle
                     (CVar13.unknown,TVar12.unknown,TVar17.unknown,puVar19,pcVar21,
                      PTR___type_metadata_for_SwiftUI_Color_100eab718,CVar13.unknown);
  FUN_100016d74(TVar12.unknown,TVar17.unknown,puVar19);
  _swift_release(CVar14.unknown);
  _swift_bridgeObjectRelease(pcVar21);
  uVar18 = 0;
  TVar17 = TVar15;
  CVar14.unknown = TVar10.unknown;
  TVar12 = SwiftUI::Text::_strikethrough(true,(Text)0x0);
  local_ec = SUB84(TVar17.unknown,0);
  local_e8 = CVar14.unknown;
  local_b0 = uVar18;
  puStack_a8 = TVar12.unknown;
  FUN_100016d74(TVar15.unknown,TVar10.unknown,puVar5);
  _swift_bridgeObjectRelease(puVar22);
  local_88 = (undefined *)local_b8[2];
  uStack_80 = local_b8[3];
  _swift_bridgeObjectRetain();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar9 = local_f8;
  TVar10 = SwiftUI::Text::_init
                     (TVar12.unknown,PTR___type_metadata_for_Swift_String_100eac208,local_f8);
  SwiftUI::Font::Weight::get_bold((Weight)TVar10.unknown);
  (*local_98)(lVar23,1,1,lStack_90);
  size_00.unknown = (undefined *)0x403a000000000000;
  FVar11 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_100005808(lVar23,&DAT_100fb92d0,&DAT_100c3abc0);
  TVar17 = TVar10;
  puVar19 = puVar5;
  pcVar21 = pcVar9;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100016d74(TVar10.unknown,puVar5,pcVar9);
  _swift_bridgeObjectRelease();
  CVar13 = SwiftUI::Color::get_white(CVar14);
  TVar10 = TVar12;
  puVar5 = TVar17.unknown;
  CVar14.unknown = puVar19;
  local_88 = CVar13.unknown;
  puStack_100 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_10c = SUB84(puVar5,0);
  local_108 = TVar10.unknown;
  local_f8 = CVar14.unknown;
  FUN_100016d74(TVar12.unknown,TVar17.unknown,puVar19);
  _swift_release(CVar13.unknown);
  _swift_bridgeObjectRelease(pcVar21);
  lVar16 = 0;
  FUN_1002a04f4();
  LVar3.unknown = local_e0.unknown;
  lVar16 = (long)local_b8 + (long)*(int *)(lVar16 + 0x18);
  puVar5 = local_d0;
  (**(code **)(local_d8 + 0x10))(local_e0.unknown,lVar16,local_d0);
  TVar10 = SwiftUI::Text::init(LVar3);
  SwiftUI::Font::Weight::get_medium((Weight)TVar10.unknown);
  (*local_98)(lVar23,1,1,lStack_90);
  FVar11 = SwiftUI::Font::_system(size_00,(Font)0x0);
  FUN_100005808(lVar23,&DAT_100fb92d0,&DAT_100c3abc0);
  TVar17 = TVar10;
  lVar23 = lVar16;
  puVar19 = puVar5;
  TVar12 = SwiftUI::Text::_font(FVar11.unknown);
  _swift_release(FVar11.unknown);
  FUN_100016d74(TVar10.unknown,lVar16,puVar5);
  _swift_bridgeObjectRelease();
  CVar14 = SwiftUI::Color::get_white(CVar14);
  CVar13 = SwiftUI::Color::opacity(0.85,CVar14);
  _swift_release(CVar14.unknown);
  TVar10 = TVar12;
  puVar20 = TVar17.unknown;
  lVar16 = lVar23;
  local_88 = CVar13.unknown;
  TVar15 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar12.unknown,TVar17.unknown,lVar23);
  _swift_release(CVar13.unknown);
  _swift_bridgeObjectRelease(puVar19);
  puVar22 = local_e8;
  uVar2 = local_ec;
  pcVar9 = local_f8;
  puVar19 = puStack_100;
  puVar5 = local_108;
  uVar1 = local_10c;
  *local_c8 = puStack_a8;
  local_c8[1] = local_b0;
  *(char *)(local_c8 + 2) = (char)local_ec;
  local_c8[3] = local_e8;
  local_c8[4] = puStack_100;
  local_c8[5] = local_108;
  *(char *)(local_c8 + 6) = (char)local_10c;
  local_c8[7] = local_f8;
  local_c8[8] = TVar15.unknown;
  local_c8[9] = TVar10.unknown;
  *(char *)(local_c8 + 10) = (char)puVar20;
  local_c8[0xb] = lVar16;
  FUN_100016d5c(puStack_a8,local_b0,local_ec);
  _swift_bridgeObjectRetain(puVar22);
  FUN_100016d5c(puVar19,puVar5,uVar1);
  _swift_bridgeObjectRetain(pcVar9);
  FUN_100016d5c(TVar15.unknown,TVar10.unknown,puVar20);
  _swift_bridgeObjectRetain(lVar16);
  FUN_100016d74(TVar15.unknown,TVar10.unknown,puVar20);
  _swift_bridgeObjectRelease(lVar16);
  FUN_100016d74(puVar19,puVar5,uVar1);
  _swift_bridgeObjectRelease(pcVar9);
  FUN_100016d74(puStack_a8,local_b0,uVar2);
  _swift_release(local_c0);
  _swift_bridgeObjectRelease(puVar22);
  return;
}



/* Address: 0x10029f668 | thunk_FUN_10029e648 */

void thunk_FUN_10029e648(void)

{
  FUN_10029e648();
  return;
}



/* Address: 0x10029f66c | FUN_10029f66c */

void FUN_10029f66c(undefined8 *param_1)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1002a0be0(&local_48);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x10029f6ac | FUN_10029f6ac */

code * FUN_10029f6ac(undefined8 *param_1)

{
  EmptyAnimatableData EVar1;
  EmptyAnimatableData EVar2;
  Animatable *unaff_x20;
  
  EVar1.unknown = (undefined *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    EVar1.unknown = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x8c18);
  }
  *param_1 = EVar1.unknown;
  EVar2.unknown = EVar1.unknown;
  (extension_SwiftUI)::SwiftUI::Animatable::_modify_animatableData(unaff_x20,EVar1);
  *(undefined **)(EVar1.unknown + 0x20) = EVar2.unknown;
  return FUN_10026c674;
}



/* Address: 0x10029f720 | FUN_10029f720 */

void FUN_10029f720(_GraphValue<undefined> param_1,_ViewInputs param_2)

{
  FUN_1002a0e78();
  (extension_SwiftUI)::SwiftUI::Shape::_makeView(param_1,param_2);
  return;
}



/* Address: 0x10029f770 | FUN_10029f770 */

void FUN_10029f770(_GraphValue<undefined> param_1,_ViewListInputs param_2)

{
  FUN_1002a0e78();
  (extension_SwiftUI)::SwiftUI::Shape::_makeViewList(param_1,param_2);
  return;
}


