/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100aff914 | FUN_100aff914 */

undefined8 * FUN_100aff914(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar5 = param_2[2];
  uVar2 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar5;
  uVar3 = param_2[5];
  uVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  _swift_bridgeObjectRetain(uVar4);
  _swift_retain(uVar1);
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x100aff990 | FUN_100aff990 */

undefined8 * FUN_100aff990(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100affa38 | FUN_100affa38 */

void FUN_100affa38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100affa4c | FUN_100affa4c */

undefined8 * FUN_100affa4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  _swift_release(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100affab0 | FUN_100affab0 */

void FUN_100affab0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100affabc | FUN_100affabc */

void FUN_100affabc(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance2(&local_20,&DAT_100ccc83c,1);
  return;
}



/* Address: 0x100affaf0 | FUN_100affaf0 */

void FUN_100affaf0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  Optional OVar3;
  ModifiedContent MVar4;
  undefined *puVar5;
  undefined *puVar6;
  IDView IVar7;
  undefined *puVar8;
  VStack VVar9;
  ModifiedContent MVar10;
  ModifiedContent MVar11;
  ModifiedContent MVar12;
  HorizontalAlignment alignment;
  Alignment AVar13;
  undefined *puVar14;
  Binding BVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar17;
  long extraout_x12;
  code *pcVar18;
  long unaff_x20;
  code *pcVar19;
  Alignment AVar20;
  long lVar21;
  Animation AVar22;
  undefined8 auStack_180 [4];
  long local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined *local_70;
  
  local_140 = *(undefined8 *)(param_2 + 0x10);
  local_110 = param_1;
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar8 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_150 = *(undefined8 *)(param_2 + 0x18);
  puStack_78 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_80 = local_150;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar4.unknown,&local_80);
  puVar6 = puVar5;
  FUN_100aff048();
  puStack_b8 = &DAT_100f337c0;
  local_c0 = MVar4.unknown;
  local_b0 = puVar5;
  puStack_a8 = puVar6;
  IVar7 = SwiftUI::IDView::typeMetadataAccessor();
  FUN_100005c24(&DAT_100ff9db8,&DAT_100c96f88);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar3 = Swift::Optional::typeMetadataAccessor();
  puVar6 = PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8,
             IVar7.unknown);
  puVar5 = &DAT_100ff9dc0;
  FUN_100016eac(&DAT_100ff9dc0,&DAT_100ff9db8,&DAT_100c96f88,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8
               );
  local_90 = puVar6;
  puStack_88 = puVar5;
  _swift_getWitnessTable(puVar8,MVar4.unknown,&local_90);
  local_98 = puVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100eabb80
             ,OVar3.value,&local_98);
  VVar9 = SwiftUI::VStack::typeMetadataAccessor();
  lVar21 = *(long *)(VVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar13.unknown = (undefined *)((long)&local_160 - extraout_x8);
  FUN_100005c24(&DAT_100ff9dc8,&DAT_100c96f90);
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_160 = *(long *)(MVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  AVar20.unknown = AVar13.unknown + -extraout_x8_00;
  MVar11 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_148 = *(long *)(MVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  AVar22.unknown = AVar20.unknown + -extraout_x8_01;
  FUN_100005c24(&DAT_100ff9dd0,&DAT_100c96f98);
  local_130 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_120 = *(long *)(local_130 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_158 = (long)AVar22.unknown - extraout_x8_02;
  FUN_100005c24(&DAT_100ff9dd8,&DAT_100c96fa0);
  MVar12 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_118 = *(long *)(MVar12.unknown + -8);
  MVar4 = MVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_118 + 0x40));
  lVar17 = ((long)AVar22.unknown - extraout_x8_02) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_138 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar17 - extraout_x12;
  local_b0 = (undefined *)local_140;
  puStack_a8 = (undefined *)local_150;
  local_128 = lVar17;
  alignment = SwiftUI::HorizontalAlignment::get_center(MVar4.unknown);
  SwiftUI::VStack::_init(alignment);
  puVar8 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar9.unknown);
  (extension_SwiftUI)::SwiftUI::View::_clipped(false);
  (**(code **)(lVar21 + 8))(AVar13.unknown,VVar9.unknown);
  SwiftUI::Alignment::get_center(AVar13);
  puVar5 = &DAT_100ff9de0;
  FUN_100016eac(&DAT_100ff9de0,&DAT_100ff9dc8,&DAT_100c96f90,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar6 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_d0 = puVar8;
  puStack_c8 = puVar5;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar10.unknown,&local_d0);
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x4081000000000000);
  (**(code **)(local_160 + 8))(AVar20.unknown,MVar10.unknown);
  SwiftUI::Alignment::get_center(AVar20);
  FUN_1000037f0(&DAT_100ff9de8,&DAT_100c96fa8);
  puStack_d8 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  local_e0 = puVar14;
  _swift_getWitnessTable(puVar6,MVar11.unknown,&local_e0);
  puVar8 = puVar6;
  FUN_100b00e30();
  puVar5 = &DAT_100ff9df8;
  FUN_100016eac(&DAT_100ff9df8,&DAT_100ff9de8,&DAT_100c96fa8,
                PTR_SwiftUI__SwiftUI__GeometryReader<undefined>_>SwiftUI__View_100eaa840);
  *(undefined **)(lVar17 + -0x18) = puVar8;
  *(undefined **)(lVar17 + -0x10) = puVar5;
  *(undefined **)(lVar17 + -0x20) = puVar6;
  lVar17 = local_158;
  (extension_SwiftUI)::SwiftUI::View::_overlayPreferenceValue((Alignment)0x100f33a50);
  (**(code **)(local_148 + 8))(AVar22.unknown,MVar11.unknown);
  AVar22 = SwiftUI::Animation::easeInOut(0.3,AVar22);
  puStack_b8 = *(undefined **)(unaff_x20 + 0x10);
  local_c0 = *(undefined **)(unaff_x20 + 8);
  local_b0 = *(undefined **)(unaff_x20 + 0x18);
  BVar15.unknown = &DAT_100ff9e10;
  FUN_1000037f0(&DAT_100ff9e10,&DAT_100c96fb0);
  SwiftUI::Binding::get_wrappedValue(BVar15);
  local_c0 = local_70;
  puVar5 = &DAT_100ff9b58;
  FUN_1000037f0(&DAT_100ff9b58,&DAT_100c96840);
  puVar8 = &DAT_100ff9e00;
  FUN_100016eac(&DAT_100ff9e00,&DAT_100ff9dd0,&DAT_100c96f98,
                PTR_SwiftUI__SwiftUI___OverlayPreferenceModifier<undefined,undefined>_>SwiftUI__ViewModifier_100eab088
               );
  puVar1 = local_130;
  puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar16 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_f0 = puVar6;
  puStack_e8 = puVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             local_130,&local_f0);
  puVar8 = puVar16;
  FUN_100afd41c();
  lVar21 = local_138;
  (extension_SwiftUI)::SwiftUI::View::_animation
            (local_138,AVar22.unknown,&local_c0,puVar1,puVar5,puVar16,puVar8);
  _swift_bridgeObjectRelease(local_70);
  _swift_release(AVar22.unknown);
  (**(code **)(local_120 + 8))(lVar17,puVar1);
  puVar5 = &DAT_100ff9e08;
  FUN_100016eac(&DAT_100ff9e08,&DAT_100ff9dd8,&DAT_100c96fa0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  local_100 = puVar16;
  puStack_f8 = puVar5;
  _swift_getWitnessTable(puVar14,MVar12.unknown,&local_100);
  lVar2 = local_118;
  lVar17 = local_128;
  pcVar18 = *(code **)(local_118 + 0x10);
  (*pcVar18)(local_128,lVar21,MVar12.unknown);
  pcVar19 = *(code **)(lVar2 + 8);
  (*pcVar19)(lVar21,MVar12.unknown);
  (*pcVar18)(local_110,lVar17,MVar12.unknown);
  (*pcVar19)(lVar17,MVar12.unknown);
  return;
}



/* Address: 0x100b00198 | FUN_100b00198 */

void FUN_100b00198(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  Optional OVar3;
  ModifiedContent MVar4;
  undefined *puVar5;
  undefined *puVar6;
  IDView IVar7;
  ModifiedContent MVar8;
  undefined7 extraout_var;
  MainActor *pMVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  Alignment AVar14;
  AnyTransition insertion;
  AnyTransition removal;
  AnyTransition AVar15;
  undefined *puVar16;
  long lVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar18;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar20;
  code *pcVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  long alStack_1d0 [4];
  undefined1 auStack_1b0 [8];
  undefined *local_1a8;
  undefined *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  MainActor *local_148;
  long local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  long lVar9;
  
  local_190 = *(long *)(param_3 + -8);
  local_168 = param_2;
  local_138 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_190 + 0x40));
  puVar20 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_188 = *(long *)(MVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puStack_d8 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_198 = (long)puVar20 - extraout_x8_00;
  local_160 = param_4;
  local_e0 = param_4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar4.unknown,&local_e0);
  puVar6 = puVar5;
  FUN_100aff048();
  puStack_a0 = &DAT_100f337c0;
  local_1a8 = puVar6;
  local_1a0 = puVar5;
  local_a8 = MVar4.unknown;
  local_98 = puVar5;
  puStack_90 = puVar6;
  IVar7 = SwiftUI::IDView::typeMetadataAccessor();
  local_178 = *(long *)(IVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar18 = ((long)puVar20 - extraout_x8_00) - extraout_x8_01;
  local_180 = lVar18;
  FUN_100005c24(&DAT_100ff9db8,&DAT_100c96f88);
  MVar8 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_158 = *(long *)(MVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_158 + 0x40));
  lVar18 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_170 = lVar18 - extraout_x12;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,OVar3.value);
  local_150 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_150 + 0x40));
  lVar23 = (lVar18 - extraout_x12) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar23 - extraout_x12_00;
  local_140 = lVar19;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  pMVar11 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  pMVar10 = pMVar11;
  FUN_100afbeec();
  local_148 = pMVar11;
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/NavigationView.macOS.swift",0x2a,1,10,UVar12.unknown,pMVar10);
  }
  uVar2 = local_160;
  lVar17 = param_3;
  FUN_100affab0(0,param_3,local_160);
  lVar1 = local_168;
  FUN_100b00818(&local_d0);
  if (local_c8 == (undefined *)0x0) {
    (**(code **)(local_158 + 0x38))(lVar23,1,1,MVar8.unknown);
    puVar6 = PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8,
               IVar7.unknown);
    puVar5 = &DAT_100ff9dc0;
    FUN_100016eac(&DAT_100ff9dc0,&DAT_100ff9db8,&DAT_100c96f88,
                  PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8
                 );
    local_f0 = puVar6;
    puStack_e8 = puVar5;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
               MVar8.unknown,&local_f0);
  }
  else {
    local_a8 = local_d0;
    puStack_a0 = local_c8;
    puStack_90 = puStack_b8;
    local_98 = local_c0;
    local_88 = local_b0;
    AVar14.unknown = (undefined *)&local_a8;
    (**(code **)(lVar1 + 0x20))(puVar20);
    AVar14 = SwiftUI::Alignment::get_center(AVar14);
    *(long *)(lVar19 + -0x10) = param_3;
    *(undefined8 *)(lVar19 + -8) = uVar2;
    *(undefined **)(lVar19 + -0x20) = AVar14.unknown;
    *(long *)(lVar19 + -0x18) = lVar17;
    *(undefined1 *)(lVar19 + -0x28) = 0;
    *(undefined8 *)(lVar19 + -0x30) = 0x7ff0000000000000;
    *(undefined1 *)(lVar19 + -0x38) = 1;
    *(undefined8 *)(lVar19 + -0x40) = 0;
    lVar19 = local_198;
    (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
    (**(code **)(local_190 + 8))(puVar20,param_3);
    lVar1 = local_180;
    puStack_78 = puStack_a0;
    local_80 = local_a8;
    puStack_118 = puStack_a0;
    local_120 = local_a8;
    AVar15.unknown = &DAT_100f337c0;
    (extension_SwiftUI)::SwiftUI::View::_id
              (local_180,&local_120,MVar4.unknown,&DAT_100f337c0,local_1a0,local_1a8);
    (**(code **)(local_188 + 8))(lVar19);
    insertion = SwiftUI::AnyTransition::move((Edge)0x3,MVar4.unknown);
    removal = SwiftUI::AnyTransition::move((Edge)0x1,MVar4.unknown);
    AVar15 = SwiftUI::AnyTransition::asymmetric(insertion,removal,AVar15);
    _swift_release(insertion.unknown);
    _swift_release(removal.unknown);
    puVar6 = PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8,
               IVar7.unknown);
    (extension_SwiftUI)::SwiftUI::View::_transition(AVar15);
    _swift_release(AVar15.unknown);
    FUN_100afd70c(&local_80);
    _swift_release(local_88);
    (**(code **)(local_178 + 8))(lVar1,IVar7.unknown);
    puVar5 = &DAT_100ff9dc0;
    FUN_100016eac(&DAT_100ff9dc0,&DAT_100ff9db8,&DAT_100c96f88,
                  PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8
                 );
    local_130 = puVar6;
    local_128 = puVar5;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
               MVar8.unknown,&local_130);
    lVar1 = local_158;
    lVar19 = local_170;
    pcVar21 = *(code **)(local_158 + 0x10);
    (*pcVar21)(local_170,lVar18,MVar8.unknown);
    pcVar22 = *(code **)(lVar1 + 8);
    (*pcVar22)(lVar18,MVar8.unknown);
    (*pcVar21)(lVar18,lVar19,MVar8.unknown);
    (*pcVar22)(lVar19,MVar8.unknown);
    (**(code **)(lVar1 + 0x20))(lVar23,lVar18,MVar8.unknown);
    (**(code **)(lVar1 + 0x38))(lVar23,0,1,MVar8.unknown);
  }
  lVar19 = local_140;
  lVar18 = local_150;
  pcVar21 = *(code **)(local_150 + 0x10);
  (*pcVar21)(local_140,lVar23,lVar9);
  pcVar22 = *(code **)(lVar18 + 8);
  (*pcVar22)(lVar23,lVar9);
  puVar6 = PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8,
             IVar7.unknown);
  puVar5 = &DAT_100ff9dc0;
  FUN_100016eac(&DAT_100ff9dc0,&DAT_100ff9db8,&DAT_100c96f88,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8
               );
  puVar16 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_100 = puVar6;
  puStack_f8 = puVar5;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar8.unknown,&local_100);
  local_108 = puVar16;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100eabb80
             ,lVar9,&local_108);
  (*pcVar21)(local_138,lVar19,lVar9);
  (*pcVar22)(lVar19,lVar9);
  _swift_release(local_148);
  return;
}



/* Address: 0x100b00818 | FUN_100b00818 */

void FUN_100b00818(long *param_1)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  Binding BVar4;
  MainActor *this;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  uint uVar10;
  long *unaff_x20;
  long lVar11;
  long *plVar12;
  MainActor *pMVar13;
  _StringGuts _Var14;
  _StringGuts _Var15;
  long local_88;
  
  BVar4.unknown = &DAT_100ff9e10;
  FUN_1000037f0(&DAT_100ff9e10,&DAT_100c96fb0);
  SwiftUI::Binding::get_wrappedValue(BVar4);
  lVar9 = *(long *)(local_88 + 0x10);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(local_88);
    lVar9 = *unaff_x20;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = 0;
      lVar11 = 0;
      pMVar13 = (MainActor *)0x0;
      _Var14.unknown = (undefined *)0x0;
      _Var15.unknown = (undefined *)0x0;
    }
    else {
      _Var14.unknown = *(undefined **)(lVar9 + 0x20);
      _Var15.unknown = *(undefined **)(lVar9 + 0x28);
      uVar10 = (uint)*(byte *)(lVar9 + 0x30);
      lVar11 = *(long *)(lVar9 + 0x38);
      pMVar13 = *(MainActor **)(lVar9 + 0x40);
      _swift_bridgeObjectRetain(_Var15.unknown);
      _swift_retain(pMVar13);
    }
  }
  else {
    plVar12 = (long *)(local_88 + 0x10) + lVar9 * 2;
    _Var14.unknown = (undefined *)*plVar12;
    _Var15.unknown = (undefined *)plVar12[1];
    _swift_bridgeObjectRetain(_Var15.unknown);
    _swift_bridgeObjectRelease(local_88);
    lVar11 = *unaff_x20;
    lVar9 = *(long *)(lVar11 + 0x10);
    if (lVar9 != 0) {
      this = Swift::MainActor::typeMetadataAccessor();
      plVar12 = (long *)(lVar11 + 0x40);
      do {
        _Var1.unknown = (undefined *)plVar12[-4];
        _Var2.unknown = (undefined *)plVar12[-3];
        uVar10 = (uint)*(byte *)(plVar12 + -2);
        lVar11 = plVar12[-1];
        pMVar13 = (MainActor *)*plVar12;
        _swift_bridgeObjectRetain(_Var2.unknown);
        pMVar5 = pMVar13;
        _swift_retain();
        pMVar6 = Swift::MainActor::get_shared(this,pMVar5);
        pMVar5 = pMVar6;
        FUN_100afbeec();
        UVar7 = Swift::Actor::get_unownedExecutor();
        UVar8 = UVar7;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar8.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteOnboarding/NavigationView.macOS.swift",0x2a,1,0x26,UVar7.unknown,pMVar5);
        }
        if ((_Var1.unknown == _Var14.unknown) && (_Var2.unknown == _Var15.unknown)) {
          _swift_bridgeObjectRelease(_Var15.unknown);
          _swift_release(pMVar6);
          goto LAB_100b00a24;
        }
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (_Var1,_Var2,(_StringComparisonResult)(__int8)_Var14.unknown);
        _swift_release(pMVar6);
        if (bVar3) {
          _swift_bridgeObjectRelease(_Var15.unknown);
          _Var14.unknown = _Var1.unknown;
          _Var15.unknown = _Var2.unknown;
          goto LAB_100b00a24;
        }
        plVar12 = plVar12 + 5;
        _swift_release(pMVar13);
        _swift_bridgeObjectRelease(_Var2.unknown);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    _swift_bridgeObjectRelease(_Var15.unknown);
    uVar10 = 0;
    lVar11 = 0;
    pMVar13 = (MainActor *)0x0;
    _Var14.unknown = (undefined *)0x0;
    _Var15.unknown = (undefined *)0x0;
  }
LAB_100b00a24:
  *param_1 = (long)_Var14.unknown;
  param_1[1] = (long)_Var15.unknown;
  param_1[2] = (ulong)uVar10;
  param_1[3] = lVar11;
  param_1[4] = (long)pMVar13;
  return;
}



/* Address: 0x100b00a54 | FUN_100b00a54 */

void FUN_100b00a54(undefined8 *param_1,undefined8 *param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100afbeec();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/NavigationView.macOS.swift",0x2a,1,0x14,UVar3.unknown,pMVar1);
  }
  puVar5 = &DAT_100f33af8;
  _swift_allocObject(&DAT_100f33af8,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  _swift_retain(uVar6);
  _swift_release(pMVar2);
  *param_1 = FUN_100b00e94;
  param_1[1] = puVar5;
  return;
}



/* Address: 0x100b00b14 | FUN_100b00b14 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b00b14(undefined8 *param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  ResizingMode RVar2;
  undefined7 extraout_var;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  GeometryProxy GVar8;
  Anchor<undefined> AVar9;
  NSImage *nsImage;
  Image IVar10;
  Image IVar11;
  Alignment capInsets;
  long extraout_x8;
  long lVar12;
  Alignment width;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  MainActor *local_1b0;
  undefined1 auStack_1a8 [72];
  undefined *local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *puVar3;
  
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar12 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  capInsets.unknown = auStack_1a8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar4 = pMVar5;
  FUN_100afbeec();
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/NavigationView.macOS.swift",0x2a,1,0x15,UVar6.unknown,pMVar4);
  }
  if (param_3 == (undefined *)0x0) {
    _swift_release(pMVar5);
    local_120 = (undefined *)0x0;
    local_160 = (undefined *)0x0;
    uStack_158 = 0;
    uVar14 = 0;
    local_148 = 0;
    uVar15 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    local_128 = (undefined *)0x0;
  }
  else {
    GVar8.unknown = (undefined *)0x0;
    FUN_100afb4f0();
    AVar9.unknown = param_3;
    _swift_retain();
    SwiftUI::GeometryProxy::_get_subscript(AVar9,GVar8);
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b00de8);
      (*pcVar1)();
    }
    uVar14 = CONCAT71(uStack_ff,local_100);
    local_1b0 = pMVar5;
    nsImage = (NSImage *)objc_stub::applicationIconImage(*(ID *)PTR__NSApp_100ea8fa0);
    if (nsImage == (NSImage *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b00dec);
      (*pcVar1)();
    }
    IVar10 = SwiftUI::Image::init(nsImage);
    IVar11.unknown = puVar3;
    (**(code **)(lVar12 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
              );
    IVar11 = SwiftUI::Image::resizable
                       (capInsets.unknown,(ResizingMode)(__int8)IVar10.unknown,IVar11);
    _swift_release(IVar10.unknown);
    (**(code **)(lVar12 + 8))(capInsets.unknown,puVar3);
    width.unknown = local_110;
    _CGRectGetWidth(local_110,uStack_108,uVar14,local_f8);
    _CGRectGetHeight(local_110,uStack_108,uVar14,local_f8);
    SwiftUI::Alignment::get_center(capInsets);
    SwiftUI::_FrameLayout::_init(width);
    puVar3 = local_110;
    _CGRectGetMidX(local_110,uStack_108,uVar14,local_f8);
    puVar13 = local_110;
    _CGRectGetMidY(local_110,uStack_108,uVar14,local_f8);
    _swift_release(param_3);
    uStack_158 = local_c8;
    local_150 = local_c0;
    local_148 = local_b8;
    local_140 = local_b0;
    uStack_138 = local_a8;
    uStack_130 = uStack_a0;
    uStack_108 = local_c8;
    local_100 = local_c0;
    local_f8 = local_b8;
    local_f0 = local_b0;
    local_e8 = local_a8;
    uStack_e0 = uStack_a0;
    local_160 = IVar11.unknown;
    local_128 = puVar3;
    local_120 = puVar13;
    local_110 = IVar11.unknown;
    FUN_100b00e9c(&local_160,auStack_1a8);
    FUN_100b00eec(&local_110);
    _swift_release(local_1b0);
    uVar14 = CONCAT71(uStack_14f,local_150);
    uVar15 = CONCAT71(uStack_13f,local_140);
  }
  param_1[1] = uStack_158;
  *param_1 = local_160;
  param_1[3] = local_148;
  param_1[2] = uVar14;
  param_1[5] = uStack_138;
  param_1[4] = uVar15;
  param_1[7] = local_128;
  param_1[6] = uStack_130;
  param_1[8] = local_120;
  return;
}



/* Address: 0x100b00dec | FUN_100b00dec */

void FUN_100b00dec(void)

{
  FUN_100affaf0();
  return;
}



/* Address: 0x100b00e24 | FUN_100b00e24 */

void FUN_100b00e24(void)

{
  long unaff_x20;
  
  FUN_100b00198(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100b00e30 | FUN_100b00e30 */

void FUN_100b00e30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9df0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c96eb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96eb8,&DAT_100f33a50);
  DAT_100ff9df0 = pTVar1;
  return;
}



/* Address: 0x100b00e70 | FUN_100b00e70 */

void FUN_100b00e70(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b00e94 | FUN_100b00e94 */

void FUN_100b00e94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b00b14(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b00e9c | FUN_100b00e9c */

undefined8 FUN_100b00e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9e18;
  FUN_1000037f0(&DAT_100ff9e18,&DAT_100c96fb8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100b00eec | FUN_100b00eec */

undefined8 FUN_100b00eec(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9e18;
  FUN_1000037f0(&DAT_100ff9e18,&DAT_100c96fb8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100b00f34 | FUN_100b00f34 */

void FUN_100b00f34(long param_1)

{
  undefined8 uVar1;
  Optional OVar2;
  ModifiedContent MVar3;
  undefined *puVar4;
  undefined *puVar5;
  IDView IVar6;
  undefined *puVar7;
  VStack VVar8;
  ModifiedContent MVar9;
  ModifiedContent MVar10;
  ModifiedContent MVar11;
  undefined *puVar12;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar7 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = uVar1;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar3.unknown,&local_70);
  puVar5 = puVar4;
  FUN_100aff048();
  puStack_88 = &DAT_100f337c0;
  local_90 = MVar3.unknown;
  local_80 = puVar4;
  puStack_78 = puVar5;
  IVar6 = SwiftUI::IDView::typeMetadataAccessor();
  FUN_100005c24(&DAT_100ff9db8,&DAT_100c96f88);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar5 = PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8,
             IVar6.unknown);
  puVar4 = &DAT_100ff9dc0;
  FUN_100016eac(&DAT_100ff9dc0,&DAT_100ff9db8,&DAT_100c96f88,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8
               );
  local_a0 = puVar5;
  puStack_98 = puVar4;
  _swift_getWitnessTable(puVar7,MVar3.unknown,&local_a0);
  local_a8 = puVar7;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100eabb80
             ,OVar2.value,&local_a8);
  VVar8 = SwiftUI::VStack::typeMetadataAccessor();
  FUN_100005c24(&DAT_100ff9dc8,&DAT_100c96f90);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100ff9dd0,&DAT_100c96f98);
  MVar10 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100ff9dd8,&DAT_100c96fa0);
  MVar11 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar5 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar8.unknown);
  puVar4 = &DAT_100ff9de0;
  FUN_100016eac(&DAT_100ff9de0,&DAT_100ff9dc8,&DAT_100c96f90,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar7 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar12 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_b8 = puVar5;
  puStack_b0 = puVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar3.unknown,&local_b8);
  puStack_c0 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar5 = puVar7;
  local_c8 = puVar12;
  _swift_getWitnessTable(puVar7,MVar9.unknown,&local_c8);
  puVar4 = &DAT_100ff9e00;
  FUN_100016eac(&DAT_100ff9e00,&DAT_100ff9dd0,&DAT_100c96f98,
                PTR_SwiftUI__SwiftUI___OverlayPreferenceModifier<undefined,undefined>_>SwiftUI__ViewModifier_100eab088
               );
  puVar12 = puVar7;
  local_d8 = puVar5;
  puStack_d0 = puVar4;
  _swift_getWitnessTable(puVar7,MVar10.unknown,&local_d8);
  puVar4 = &DAT_100ff9e08;
  FUN_100016eac(&DAT_100ff9e08,&DAT_100ff9dd8,&DAT_100c96fa0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  local_e8 = puVar12;
  puStack_e0 = puVar4;
  _swift_getWitnessTable(puVar7,MVar11.unknown,&local_e8);
  return;
}



/* Address: 0x100b01200 | FUN_100b01200 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b01200(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ID IVar4;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC15PasteOnboarding23OnboardingPresenterImpl::onClose);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  IVar4 = *(ID *)(unaff_x20 + _TtC15PasteOnboarding23OnboardingPresenterImpl::windowController);
  _swift_retain(param_2);
  IVar4 = objc_stub::window(IVar4);
  if (IVar4 != 0) {
    IVar4 = objc_stub::standardWindowButton_(IVar4,0);
    if (IVar4 != 0) {
      objc_stub::setHidden_(IVar4,0);
      return 0;
    }
  }
  return 0;
}



/* Address: 0x100b012a0 | FUN_100b012a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b012a0(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  long unaff_x20;
  undefined8 extraout_d0;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC15PasteOnboarding23OnboardingPresenterImpl::onClose);
  FUN_100b0183c(0);
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar4 = 1;
  FUN_10021d6dc(1,5);
  IVar5 = 0;
  FUN_1002177a4();
  _objc_allocWithZone();
  IVar5 = objc_stub::initWithWindow_(IVar5,uVar4);
  lVar3 = _TtC15PasteOnboarding23OnboardingPresenterImpl::windowController;
  *(ID *)(unaff_x20 + _TtC15PasteOnboarding23OnboardingPresenterImpl::windowController) = IVar5;
  IVar5 = objc_stub::view(param_3);
  IVar6 = objc_stub::view(param_3);
  objc_stub::fittingSize(IVar6);
  objc_stub::setFrameSize_(IVar5,extraout_d0,param_2);
  objc_stub::setContentViewController_(*(ID *)(unaff_x20 + lVar3),param_3);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = param_4;
  puVar1[1] = param_5;
  FUN_100011128(param_4,param_5);
  FUN_100004550(uVar4,uVar2);
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"init");
  IVar6 = objc_stub::window(*(ID *)(IVar5 + _TtC15PasteOnboarding23OnboardingPresenterImpl::
                                            windowController));
  if (IVar6 == 0) {
    FUN_100004550(param_4,param_5);
  }
  else {
    objc_stub::setDelegate_(IVar6,IVar5);
    FUN_100004550(param_4,param_5);
  }
  return IVar5;
}



/* Address: 0x100b01448 | _TtC15PasteOnboarding23OnboardingPresenterImpl::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC15PasteOnboarding23OnboardingPresenterImpl::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteOnboarding.OnboardingPresenterImpl",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b01474);
  (*pcVar1)();
}



/* Address: 0x100b01474 | _TtC15PasteOnboarding23OnboardingPresenterImpl::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC15PasteOnboarding23OnboardingPresenterImpl::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onClose),((undefined8 *)(param_1 + onClose))[1]);
  return;
}



/* Address: 0x100b014b0 | FUN_100b014b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b014b0(void)

{
  return ZEXT816(0x100f9cff8);
}



/* Address: 0x100b014d0 | FUN_100b014d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b014d0(void)

{
  ID IVar1;
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + _TtC15PasteOnboarding23OnboardingPresenterImpl::windowController);
  IVar1 = objc_stub::window(self);
  if ((IVar1 != 0) && (IVar1 = objc_stub::standardWindowButton_(IVar1,1), IVar1 != 0)) {
    objc_stub::setHidden_(IVar1,1);
  }
  IVar1 = objc_stub::window(self);
  if ((IVar1 != 0) && (IVar1 = objc_stub::standardWindowButton_(IVar1,2), IVar1 != 0)) {
    objc_stub::setHidden_(IVar1,1);
  }
  IVar1 = objc_stub::window(self);
  if ((IVar1 != 0) && (IVar1 = objc_stub::standardWindowButton_(IVar1,0), IVar1 != 0)) {
    objc_stub::setHidden_(IVar1,1);
  }
  objc_stub::showWindow_(self,0);
  IVar1 = objc_stub::window(self);
  objc_stub::center(IVar1);
  return 0;
}



/* Address: 0x100b01608 | FUN_100b01608 */

void FUN_100b01608(void)

{
  FUN_100b014d0();
  return;
}



/* Address: 0x100b01628 | FUN_100b01628 */

void FUN_100b01628(void)

{
  long *unaff_x20;
  
  objc_stub::close(*(ID *)(*unaff_x20 +
                          _TtC15PasteOnboarding23OnboardingPresenterImpl::windowController));
  return;
}



/* Address: 0x100b0163c | _TtC15PasteOnboarding23OnboardingPresenterImpl::windowWillClose: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC15PasteOnboarding23OnboardingPresenterImpl::windowWillClose_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  void *pvVar7;
  long extraout_x8;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  Notification NVar11;
  
  NVar11 = Foundation::Notification::typeMetadataAccessor();
  pvVar7 = NVar11.syncInProgress.bridgeObject;
  pcVar6 = NVar11.syncInProgress.str;
  pcVar2 = NVar11.pastePaused.str;
  lVar10 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar10 + 0x40),pcVar2,NVar11.pastePaused.bridgeObject);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_100afbeec();
  UVar5 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    pMVar3 = (MainActor *)0x29;
    pcVar6 = &DAT_00000001;
    pvVar7 = (void *)0x34;
    _swift_task_reportUnexpectedExecutor("PasteOnboarding/OnboardingPresenter.swift");
  }
  NVar11.pastePaused.bridgeObject = pMVar3;
  NVar11.pastePaused.str = (char *)param_3;
  NVar11.syncInProgress.bridgeObject = pvVar7;
  NVar11.syncInProgress.str = pcVar6;
  NVar11 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar11);
  puVar1 = (undefined8 *)(param_1 + onClose);
  pcVar9 = (code *)*puVar1;
  if (pcVar9 != (code *)0x0) {
    uVar8 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar9)(param_1,NVar11.pastePaused.bridgeObject,NVar11.syncInProgress.str,
              NVar11.syncInProgress.bridgeObject);
    FUN_100004550(pcVar9,uVar8);
  }
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
  _swift_release(pMVar4);
  return;
}



/* Address: 0x100b01770 | _TtC15PasteOnboarding23OnboardingPresenterImpl::windowShouldClose: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC15PasteOnboarding23OnboardingPresenterImpl::windowShouldClose_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100afbeec();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/OnboardingPresenter.swift",0x29,1,0x3a,UVar4.unknown,pMVar2);
  }
  puVar1 = (undefined8 *)(param_1 + onClose);
  pcVar7 = (code *)*puVar1;
  if (pcVar7 != (code *)0x0) {
    uVar6 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    (*pcVar7)(param_1);
    FUN_100004550(pcVar7,uVar6);
  }
  _swift_release(pMVar3);
  return 0;
}



/* Address: 0x100b0183c | FUN_100b0183c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b0183c(void)

{
  undefined *puVar1;
  
  if (DAT_100ff9ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSWindow;
  _swift_getObjCClassMetadata();
  DAT_100ff9ec0 = puVar1;
  return;
}



/* Address: 0x100b01880 | FUN_100b01880 */

undefined1  [16] FUN_100b01880(void)

{
  return ZEXT816(0x100f33bc8);
}



/* Address: 0x100b01890 | FUN_100b01890 */

void FUN_100b01890(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ccc8f0,1);
  return;
}



/* Address: 0x100b018a0 | FUN_100b018a0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b01e98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b018a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  char *pcVar13;
  HorizontalAlignment HVar14;
  Set SVar15;
  CGFloat _all;
  undefined **ppuVar16;
  undefined **ppuVar17;
  AnyView AVar18;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar19;
  long extraout_x12;
  long extraout_x12_00;
  long lVar20;
  KeyboardShortcut KVar21;
  KeyboardShortcut KVar22;
  undefined8 uVar23;
  long alStack_1550 [2];
  undefined *local_1540;
  long local_1538;
  long local_1530;
  undefined *puStack_1528;
  long local_1520;
  long local_1518;
  undefined8 local_1510;
  undefined8 local_1508;
  long local_1500;
  MainActor *local_14f8;
  long local_14f0;
  long local_14e8;
  long local_14e0;
  long local_14d8;
  undefined *puStack_14d0;
  undefined8 *local_14c8;
  undefined *local_14c0;
  undefined8 *local_14b8;
  undefined1 auStack_14b0 [600];
  undefined1 auStack_1258 [600];
  undefined1 auStack_1000 [528];
  undefined1 auStack_df0 [528];
  undefined *local_be0;
  undefined8 local_bd8;
  undefined1 local_bd0;
  undefined1 auStack_bcf [535];
  undefined *local_9b8;
  undefined8 local_9b0;
  undefined1 local_9a8;
  undefined1 auStack_9a7 [535];
  undefined1 auStack_790 [552];
  undefined1 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined1 local_540;
  undefined1 auStack_538 [552];
  undefined1 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  undefined *local_2e0;
  undefined **local_2d8;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar7 = &DAT_100ff9f38;
  local_1510 = param_5;
  local_1508 = param_6;
  local_14b8 = extraout_x8;
  FUN_1000037f0(&DAT_100ff9f38,&DAT_100c97080);
  local_14c0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100ff9f40;
  local_14c8 = (undefined8 *)((long)alStack_1550 - extraout_x8_00);
  FUN_1000037f0(&DAT_100ff9f40,&DAT_100c97088);
  local_14d8 = *(long *)(puVar7 + -8);
  puStack_14d0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_14d8 + 0x40));
  lVar19 = ((long)alStack_1550 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_14e8 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12;
  local_14e0 = lVar19;
  puStack_1528 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_1530 = *(long *)(puStack_1528 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1530 + 0x40));
  KVar21.unknown = (undefined *)(lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100ff9f48;
  FUN_1000037f0(&DAT_100ff9f48,&DAT_100c97090);
  alStack_1550[1] = *(long *)(puVar7 + -8);
  local_1540 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(alStack_1550[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  KVar22.unknown = KVar21.unknown + -extraout_x8_03;
  puVar7 = &DAT_100ff9f50;
  FUN_1000037f0(&DAT_100ff9f50,&DAT_100c97098);
  local_1538 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(local_1538 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)KVar22.unknown - extraout_x8_04;
  puVar8 = &DAT_100ff9f58;
  FUN_1000037f0(&DAT_100ff9f58,&DAT_100c970a0);
  local_1518 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(local_1518 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100ff9f60;
  local_1520 = lVar20 - extraout_x8_05;
  FUN_1000037f0(&DAT_100ff9f60,&DAT_100c970a8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar19 = (lVar20 - extraout_x8_05) - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_14f0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_1500 = lVar19 - extraout_x12_00;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  pMVar11 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  pMVar10 = pMVar11;
  FUN_100afbeec();
  local_14f8 = pMVar11;
  UVar12 = Swift::Actor::get_unownedExecutor();
  pcVar13 = (char *)UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar13 & 1) == 0) {
    pcVar13 = "PasteOnboarding/IntroductionView.macOS.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/IntroductionView.macOS.swift",0x2c,1,10,UVar12.unknown,pMVar10);
  }
  HVar14 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar13);
  FUN_100b02000(&local_2e0);
  _memcpy(auStack_1000,&local_2e0,0x210);
  _memcpy(auStack_df0,&local_2e0,0x210);
  FUN_100011090(auStack_1000,auStack_538,&DAT_100ff9f68,&DAT_100c970b0);
  FUN_100005808(auStack_df0,&DAT_100ff9f68,&DAT_100c970b0);
  SVar15.unknown = _memcpy((void *)((ulong)auStack_538 | 7),auStack_1000,0x210);
  SVar15 = SwiftUI::Edge::Set::get_bottom(SVar15);
  local_bd8 = 0;
  local_bd0 = 0;
  local_be0 = HVar14.unknown;
  _all.unknown = _memcpy(auStack_bcf,auStack_538,0x217);
  uVar23 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init(_all);
  _memcpy(auStack_1258,&local_be0,0x228);
  local_9b0 = 0;
  local_9a8 = 0;
  local_9b8 = HVar14.unknown;
  _memcpy(auStack_9a7,auStack_538,0x217);
  FUN_100011090(&local_be0,&local_2e0,&DAT_100ff9f70,&DAT_100c970b8);
  FUN_100005808(&local_9b8,&DAT_100ff9f70,&DAT_100c970b8);
  _memcpy(auStack_790,auStack_1258,0x228);
  local_540 = 0;
  local_568 = (char)SVar15.unknown;
  local_560 = uVar23;
  local_558 = param_2;
  local_550 = param_3;
  local_548 = param_4;
  _memcpy(auStack_538,auStack_1258,0x228);
  local_2e8 = 0;
  local_310 = (char)SVar15.unknown;
  local_308 = uVar23;
  local_300 = param_2;
  local_2f8 = param_3;
  local_2f0 = param_4;
  FUN_100011090(auStack_790,&local_2e0,&DAT_100ff9f78,&DAT_100c970c0);
  FUN_100005808(auStack_538,&DAT_100ff9f78,&DAT_100c970c0);
  _swift_retain(local_1508);
  puVar2 = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  puVar9 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  SwiftUI::Button::_init();
  puVar3 = local_1540;
  FUN_1001fa7a0(lVar20,0,1,1,local_1540);
  (**(code **)(alStack_1550[1] + 8))(KVar22.unknown,puVar3);
  SwiftUI::KeyboardShortcut::get_defaultAction(KVar22);
  local_2e0 = puVar2;
  local_2d8 = (undefined **)puVar9;
  ppuVar16 = &local_2e0;
  _swift_getOpaqueTypeConformance2(ppuVar16,&DAT_100ca7bfc,1);
  lVar19 = local_1520;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar21);
  (**(code **)(local_1530 + 8))(KVar21.unknown,puStack_1528);
  (**(code **)(local_1538 + 8))(lVar20,puVar7);
  ppuVar17 = &local_2e0;
  local_2e0 = puVar7;
  local_2d8 = ppuVar16;
  _swift_getOpaqueTypeConformance2
            (ppuVar17,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_keyboardShortcut(SwiftUI_KeyboardShortcut)__>_some>>_100eab490
             ,1);
  lVar4 = local_14e0;
  (extension_SwiftUI)::SwiftUI::View::_focusEffectDisabled(true);
  puVar7 = puStack_14d0;
  lVar5 = local_14d8;
  (**(code **)(local_14d8 + 0x10))(local_14e8,lVar4,puStack_14d0);
  ppuVar16 = &local_2e0;
  local_2e0 = puVar8;
  local_2d8 = ppuVar17;
  _swift_getOpaqueTypeConformance2
            (ppuVar16,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focusEffectDisabled(Swift_Bool)__>_some>>_100eab4e8
             ,1);
  AVar18 = SwiftUI::AnyView::_init(ppuVar16,puVar7,ppuVar16);
  puVar9 = local_14c0;
  puVar6 = local_14c8;
  *local_14c8 = AVar18.unknown;
  _swift_storeEnumTagMultiPayload(puVar6,puVar9,0);
  lVar20 = local_1500;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar6);
  (**(code **)(lVar5 + 8))(lVar4,puVar7);
  (**(code **)(local_1518 + 8))(lVar19,puVar8);
  _memcpy(auStack_1258,auStack_790,0x251);
  lVar19 = local_14f0;
  FUN_100b02eec(lVar20,local_14f0);
  *local_14b8 = 0;
  *(undefined1 *)(local_14b8 + 1) = 1;
  _memcpy(&local_2e0,auStack_1258,0x251);
  _memcpy(local_14b8 + 2,auStack_1258,0x251);
  puVar7 = &DAT_100ff9f80;
  FUN_1000037f0(&DAT_100ff9f80,&DAT_100c970c8);
  FUN_100b02eec(lVar19,(long)local_14b8 + (long)*(int *)(puVar7 + 0x40));
  iVar1 = *(int *)(puVar7 + 0x50);
  *(undefined8 *)((long)local_14b8 + (long)iVar1) = 0;
  *(undefined1 *)((undefined8 *)((long)local_14b8 + (long)iVar1) + 1) = 1;
  FUN_100011090(&local_2e0,auStack_14b0,&DAT_100ff9f78,&DAT_100c970c0);
  FUN_100b02f3c(lVar20);
  FUN_100b02f3c(lVar19);
  FUN_100005808(auStack_1258,&DAT_100ff9f78,&DAT_100c970c0);
  _swift_release(local_14f8);
  return;
}



/* Address: 0x100b02000 | FUN_100b02000 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b02320 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b02000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  Design DVar2;
  undefined *puVar3;
  LocalizedStringResource LVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  Color CVar9;
  _FrameLayout _Var10;
  Source SVar11;
  Set SVar12;
  Text TVar13;
  Font FVar14;
  Text TVar15;
  Alignment AVar16;
  undefined *puVar17;
  Text TVar18;
  void *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar19;
  undefined8 uVar20;
  CGFloat CVar21;
  undefined8 uVar22;
  code *pcVar23;
  String SVar24;
  undefined8 uStack_1250;
  undefined1 auStack_1248 [8];
  undefined8 uStack_1240;
  undefined1 auStack_1238 [8];
  undefined8 auStack_1230 [2];
  undefined1 auStack_1220 [8];
  undefined *local_1218;
  code *local_1210;
  long lStack_1208;
  char *local_1200;
  MainActor *local_11f8;
  void *local_11f0;
  LocalizedStringResource local_11e8;
  undefined1 *local_11e0;
  undefined1 auStack_11d8 [232];
  char *local_10f0;
  undefined8 uStack_10e8;
  undefined *puStack_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined *puStack_10b8;
  code *local_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined1 uStack_1088;
  undefined7 uStack_1087;
  undefined1 uStack_1080;
  undefined8 uStack_107f;
  char *local_1070;
  void *pvStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined *puStack_1040;
  undefined *puStack_1038;
  undefined *local_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined *puStack_fa0;
  code *pcStack_f98;
  undefined1 local_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  char *local_ee0;
  void *pvStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined *puStack_eb0;
  undefined *puStack_ea8;
  undefined *local_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined *puStack_e10;
  code *pcStack_e08;
  undefined1 local_e00;
  char *local_df0;
  undefined8 uStack_de8;
  undefined *puStack_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined *puStack_db8;
  code *local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined1 uStack_d88;
  undefined7 uStack_d87;
  undefined1 uStack_d80;
  undefined8 uStack_d7f;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined1 local_d40;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  char *local_bd0;
  undefined8 uStack_bc8;
  undefined *puStack_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined *puStack_b98;
  code *local_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined1 uStack_b68;
  undefined7 uStack_b67;
  undefined1 uStack_b60;
  undefined8 uStack_b5f;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
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
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined1 local_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined1 local_990;
  undefined7 uStack_98f;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 local_970;
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
  String local_910;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  undefined *local_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined *puStack_840;
  code *pcStack_838;
  undefined1 local_830;
  char *local_820;
  void *pvStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined *local_7e8;
  undefined *local_7e0;
  char *local_7d0;
  void *pvStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined *local_7a0;
  undefined *puStack_798;
  undefined *local_790;
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
  char *local_710;
  void *pvStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined *local_6e0;
  undefined *puStack_6d8;
  undefined *local_6d0;
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
  char *local_650;
  void *pvStack_648;
  undefined *local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined *local_620;
  undefined *puStack_618;
  code *local_610;
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
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined *local_580;
  code *pcStack_578;
  undefined1 local_570;
  String local_560;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined *local_530;
  undefined *puStack_528;
  undefined *local_520;
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
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined *local_490;
  code *local_488;
  undefined1 local_480;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined1 local_440;
  char *local_430;
  void *pvStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined1 local_400;
  undefined7 uStack_3ff;
  char *local_3f0;
  void *pvStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined *local_3c0;
  undefined *puStack_3b8;
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
  undefined8 local_340;
  char *local_330;
  undefined8 uStack_328;
  undefined1 local_320;
  undefined7 uStack_31f;
  undefined8 uStack_318;
  undefined1 local_310;
  undefined7 uStack_30f;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined *puStack_2f8;
  code *local_2f0;
  undefined8 uStack_2e8;
  undefined *local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  code *local_2a0;
  undefined8 local_298;
  char *local_290;
  undefined8 uStack_288;
  undefined *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined *puStack_258;
  code *local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined7 uStack_23f;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 local_220;
  undefined7 uStack_21f;
  undefined1 local_218;
  char *local_210;
  undefined8 uStack_208;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined *puStack_1d8;
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  char *local_190;
  void *pvStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  char *local_150;
  void *pvStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  char *local_110;
  void *pvStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar3 = &DAT_100ff9f90;
  local_11f0 = extraout_x8;
  FUN_1000037f0(&DAT_100ff9f90,&DAT_100c970d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_11e0 = auStack_1220 + -extraout_x8_00;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  puVar19 = auStack_1220 + -extraout_x8_00 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_11e8.unknown = puVar19;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  pMVar5 = pMVar6;
  FUN_100afbeec();
  local_11f8 = pMVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "PasteOnboarding/IntroductionView.macOS.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/IntroductionView.macOS.swift",0x2c,1,0xd,UVar7.unknown,pMVar5);
  }
  CVar9 = SwiftUI::Color::get_clear((Color)pcVar8);
  SwiftUI::Alignment::get_center((Alignment)CVar9.unknown);
  _Var10 = SwiftUI::_FrameLayout::_init((Alignment)0x4064000000000000);
  SVar11 = (extension_SwiftUI)::Anchor::Source::_get_bounds(_Var10.unknown);
  SVar12 = SwiftUI::Edge::Set::get_bottom(SVar11.unknown);
  local_1200 = (char *)CONCAT44(local_1200._4_4_,(int)SVar12.unknown);
  uStack_328 = local_c0;
  local_320 = local_b8;
  uStack_318 = local_b0;
  local_310 = local_a8;
  uStack_308 = local_a0;
  local_300 = uStack_98;
  local_2f0 = FUN_100aff838;
  uStack_2e8 = 0;
  uVar20 = 0x4020000000000000;
  local_330 = (char *)CVar9;
  puStack_2f8 = SVar11.unknown;
  SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
  local_640 = (undefined *)CONCAT71(uStack_31f,local_320);
  uStack_638 = uStack_318;
  local_630 = CONCAT71(uStack_30f,local_310);
  uStack_628 = uStack_308;
  puStack_618 = puStack_2f8;
  local_620 = (undefined *)local_300;
  uStack_608 = uStack_2e8;
  local_610 = local_2f0;
  pvStack_648 = (void *)uStack_328;
  local_650 = local_330;
  local_2d8 = local_c0;
  local_2d0 = local_b8;
  local_2c8 = local_b0;
  local_2c0 = local_a8;
  local_2b8 = local_a0;
  local_2b0 = uStack_98;
  local_2a0 = FUN_100aff838;
  local_298 = 0;
  local_2e0 = CVar9.unknown;
  local_2a8 = SVar11.unknown;
  FUN_100011090(&local_330,&local_560,&DAT_100ff9f98,&DAT_100c970d8);
  FUN_100005808(&local_2e0,&DAT_100ff9f98,&DAT_100c970d8);
  uStack_278 = uStack_638;
  local_280 = local_640;
  uStack_268 = uStack_628;
  local_270 = local_630;
  puStack_258 = puStack_618;
  local_260 = local_620;
  uStack_248 = uStack_608;
  local_250 = local_610;
  uStack_288 = pvStack_648;
  local_290 = local_650;
  local_240 = SUB81(local_1200,0);
  uStack_228 = (undefined1)param_3;
  uStack_227 = (undefined7)((ulong)param_3 >> 8);
  local_220 = (undefined1)param_4;
  uStack_21f = (undefined7)((ulong)param_4 >> 8);
  local_218 = 0;
  puStack_1d8 = puStack_618;
  local_1e0 = local_620;
  uStack_1c8 = uStack_608;
  pcStack_1d0 = local_610;
  uStack_1f8 = uStack_638;
  local_200 = local_640;
  uStack_1e8 = uStack_628;
  uStack_1f0 = local_630;
  uStack_208 = pvStack_648;
  local_210 = local_650;
  local_198 = 0;
  puVar3 = &DAT_100c970e0;
  CVar21.unknown = local_640;
  pcVar23 = local_610;
  uStack_238 = uVar20;
  local_230 = param_2;
  local_1c0 = local_240;
  local_1b8 = uVar20;
  local_1b0 = param_2;
  local_1a8 = param_3;
  local_1a0 = param_4;
  FUN_100011090(&local_290,&local_560,&DAT_100ff9fa0);
  FUN_100005808(&local_210,&DAT_100ff9fa0,&DAT_100c970e0);
  LVar4.unknown = local_11e8.unknown;
  FUN_1001d7c54(local_11e8.unknown);
  SVar24 = (extension_Foundation)::Swift::String::init(LVar4);
  local_560 = SVar24;
  FUN_100b02f84();
  pcVar8 = SVar24.str;
  puVar17 = PTR___type_metadata_for_Swift_String_100eac208;
  local_1200 = pcVar8;
  TVar13 = SwiftUI::Text::_init(pcVar8,PTR___type_metadata_for_Swift_String_100eac208);
  local_1218 = puVar3;
  SwiftUI::Font::Weight::get_bold((Weight)TVar13.unknown);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar1 = local_11e0;
  lStack_1208 = CONCAT71((int7)((ulong)TVar13.unknown >> 8),DVar2.value);
  local_1210 = *(code **)(*(long *)(lStack_1208 + -8) + 0x38);
  (*local_1210)(local_11e0,1,1,lStack_1208);
  FVar14 = SwiftUI::Font::_system(CVar21,(Font)0x0);
  FUN_100005808(puVar1,&DAT_100ff9f90,&DAT_100c970d0);
  TVar18 = TVar13;
  puVar3 = puVar17;
  CVar9.unknown = pcVar8;
  TVar15 = SwiftUI::Text::_font(FVar14.unknown);
  _swift_release(FVar14.unknown);
  FUN_100016d74(TVar13.unknown,puVar17,pcVar8);
  _swift_bridgeObjectRelease(local_1218);
  FUN_100205044(&local_560,1,TVar15.unknown,TVar18.unknown,puVar3,CVar9.unknown);
  FUN_100016d74(TVar15.unknown,TVar18.unknown,puVar3);
  _swift_bridgeObjectRelease();
  CVar9 = SwiftUI::Color::get_primary(CVar9);
  pvStack_188 = local_560.bridgeObject;
  local_190 = local_560.str;
  uStack_178 = uStack_548;
  uStack_180 = local_550;
  uStack_168 = uStack_538;
  local_170 = local_540;
  local_160 = local_530._0_1_;
  puVar3 = &DAT_100c970e8;
  _swift_getKeyPath();
  pvStack_428 = pvStack_188;
  local_430 = local_190;
  uStack_418 = uStack_178;
  local_420 = uStack_180;
  uStack_408 = uStack_168;
  local_410 = local_170;
  local_400 = local_160;
  pvStack_148 = local_560.bridgeObject;
  local_150 = local_560.str;
  uStack_138 = uStack_548;
  uStack_140 = local_550;
  uStack_128 = uStack_538;
  local_130 = local_540;
  local_120 = local_530._0_1_;
  puVar17 = &DAT_100ff9fa8;
  FUN_100011090(&local_190,&local_650,&DAT_100ff9fa8,&DAT_100c97118);
  AVar16.unknown = (undefined *)&local_150;
  FUN_100005808(AVar16.unknown,&DAT_100ff9fa8,&DAT_100c97118);
  AVar16 = SwiftUI::Alignment::get_center(AVar16);
  pvStack_108 = pvStack_428;
  local_110 = local_430;
  uStack_f8 = uStack_418;
  uStack_100 = local_420;
  uStack_e8 = uStack_408;
  local_f0 = local_410;
  local_e0 = (undefined *)CONCAT71(uStack_3ff,local_400);
  *(undefined **)(puVar19 + -0x10) = AVar16.unknown;
  *(undefined **)(puVar19 + -8) = puVar17;
  puVar19[-0x18] = 1;
  *(undefined8 *)(puVar19 + -0x20) = 0;
  puVar19[-0x28] = 1;
  *(undefined8 *)(puVar19 + -0x30) = 0;
  puStack_d8 = puVar3;
  local_d0 = CVar9.unknown;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_3d8 = uStack_f8;
  local_3e0 = uStack_100;
  uStack_3c8 = uStack_e8;
  local_3d0 = local_f0;
  puStack_3b8 = puStack_d8;
  local_3c0 = local_e0;
  local_3b0 = local_d0;
  pvStack_3e8 = pvStack_108;
  local_3f0 = local_110;
  pvStack_818 = pvStack_428;
  local_820 = local_430;
  uStack_808 = uStack_418;
  uStack_810 = local_420;
  uStack_7f8 = uStack_408;
  local_800 = local_410;
  local_7f0 = CONCAT71(uStack_3ff,local_400);
  uVar20 = local_420;
  puVar17 = local_e0;
  local_7e8 = puVar3;
  local_7e0 = CVar9.unknown;
  FUN_100011090(&local_110,&local_560,&DAT_100ff9fb0,&DAT_100c97120);
  SVar12.unknown = (undefined *)&local_820;
  FUN_100005808(SVar12.unknown,&DAT_100ff9fb0,&DAT_100c97120);
  SVar12 = SwiftUI::Edge::Set::get_bottom(SVar12);
  uStack_748 = uStack_368;
  local_750 = local_370;
  uStack_738 = uStack_358;
  local_740 = local_360;
  uStack_728 = uStack_348;
  local_730 = local_350;
  local_720 = local_340;
  uStack_788 = uStack_3a8;
  local_790 = local_3b0;
  uStack_778 = uStack_398;
  local_780 = local_3a0;
  uStack_768 = uStack_388;
  local_770 = local_390;
  uStack_758 = uStack_378;
  local_760 = local_380;
  pvStack_7c8 = pvStack_3e8;
  local_7d0 = local_3f0;
  uStack_7b8 = uStack_3d8;
  local_7c0 = local_3e0;
  uStack_7a8 = uStack_3c8;
  local_7b0 = local_3d0;
  puStack_798 = puStack_3b8;
  local_7a0 = local_3c0;
  uVar22 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
  uStack_688 = uStack_368;
  local_690 = local_370;
  uStack_678 = uStack_358;
  local_680 = local_360;
  uStack_668 = uStack_348;
  local_670 = local_350;
  local_660 = local_340;
  uStack_6c8 = uStack_3a8;
  local_6d0 = local_3b0;
  uStack_6b8 = uStack_398;
  local_6c0 = local_3a0;
  uStack_6a8 = uStack_388;
  local_6b0 = local_390;
  uStack_698 = uStack_378;
  local_6a0 = local_380;
  pvStack_708 = pvStack_3e8;
  local_710 = local_3f0;
  uStack_6f8 = uStack_3d8;
  local_700 = local_3e0;
  uStack_6e8 = uStack_3c8;
  local_6f0 = local_3d0;
  puStack_6d8 = puStack_3b8;
  local_6e0 = local_3c0;
  FUN_100011090(&local_7d0,&local_560,&DAT_100ff9fb8,&DAT_100c97128);
  FUN_100005808(&local_710,&DAT_100ff9fb8,&DAT_100c97128);
  local_5a0 = local_340;
  uStack_5c8 = uStack_368;
  local_5d0 = local_370;
  uStack_5b8 = uStack_358;
  local_5c0 = local_360;
  uStack_5a8 = uStack_348;
  local_5b0 = local_350;
  uStack_608 = uStack_3a8;
  local_610 = (code *)local_3b0;
  uStack_5f8 = uStack_398;
  local_600 = local_3a0;
  uStack_5e8 = uStack_388;
  local_5f0 = local_390;
  uStack_5d8 = uStack_378;
  local_5e0 = local_380;
  pvStack_648 = pvStack_3e8;
  local_650 = local_3f0;
  uStack_638 = uStack_3d8;
  local_640 = (undefined *)local_3e0;
  uStack_628 = uStack_3c8;
  local_630 = local_3d0;
  puStack_618 = puStack_3b8;
  local_620 = local_3c0;
  uStack_598 = SUB81(SVar12.unknown,0);
  local_570 = 0;
  uStack_4d8 = uStack_368;
  local_4e0 = local_370;
  uStack_4c8 = uStack_358;
  local_4d0 = local_360;
  uStack_4b8 = uStack_348;
  local_4c0 = local_350;
  local_4b0 = local_340;
  uStack_518 = uStack_3a8;
  local_520 = local_3b0;
  uStack_508 = uStack_398;
  local_510 = local_3a0;
  uStack_4f8 = uStack_388;
  local_500 = local_390;
  uStack_4e8 = uStack_378;
  local_4f0 = local_380;
  local_560.bridgeObject = pvStack_3e8;
  local_560.str = local_3f0;
  uStack_548 = uStack_3d8;
  local_550 = local_3e0;
  uStack_538 = uStack_3c8;
  local_540 = local_3d0;
  puStack_528 = puStack_3b8;
  local_530 = local_3c0;
  local_480 = 0;
  puVar3 = &DAT_100c97130;
  CVar21.unknown = local_3c0;
  local_590 = uVar22;
  uStack_588 = uVar20;
  local_580 = puVar17;
  pcStack_578 = pcVar23;
  local_4a8 = uStack_598;
  local_4a0 = uVar22;
  local_498 = uVar20;
  local_490 = puVar17;
  local_488 = pcVar23;
  FUN_100011090(&local_650,&local_910,&DAT_100ff9fc0);
  FUN_100005808(&local_560,&DAT_100ff9fc0,&DAT_100c97130);
  LVar4.unknown = local_11e8.unknown;
  FUN_1001d7ad4(local_11e8.unknown);
  local_910 = (extension_Foundation)::Swift::String::init(LVar4);
  puVar17 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar8 = local_1200;
  TVar13 = SwiftUI::Text::_init(SVar12.unknown,PTR___type_metadata_for_Swift_String_100eac208);
  local_11e8.unknown = puVar3;
  SwiftUI::Font::Weight::get_regular((Weight)TVar13.unknown);
  puVar1 = local_11e0;
  (*local_1210)(local_11e0,1,1,lStack_1208);
  FVar14 = SwiftUI::Font::_system(CVar21,(Font)0x0);
  FUN_100005808(puVar1,&DAT_100ff9f90,&DAT_100c970d0);
  TVar18 = TVar13;
  puVar3 = puVar17;
  AVar16.unknown = pcVar8;
  TVar15 = SwiftUI::Text::_font(FVar14.unknown);
  _swift_release(FVar14.unknown);
  FUN_100016d74(TVar13.unknown,puVar17,pcVar8);
  _swift_bridgeObjectRelease(local_11e8.unknown);
  FUN_100205044(&local_9f8,1,TVar15.unknown,TVar18.unknown,puVar3,AVar16.unknown);
  FUN_100016d74(TVar15.unknown,TVar18.unknown,puVar3);
  _swift_bridgeObjectRelease();
  AVar16 = SwiftUI::Alignment::get_center(AVar16);
  uStack_468 = uStack_9f0;
  local_470 = local_9f8;
  uStack_458 = uStack_9e0;
  local_460 = local_9e8;
  uStack_448 = uStack_9d0;
  local_450 = local_9d8;
  local_440 = local_9c8;
  *(undefined **)(puVar19 + -0x10) = AVar16.unknown;
  *(undefined **)(puVar19 + -8) = TVar18.unknown;
  puVar19[-0x18] = 1;
  *(undefined8 *)(puVar19 + -0x20) = 0;
  puVar19[-0x28] = 1;
  *(undefined8 *)(puVar19 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_9b8 = uStack_468;
  local_9c0 = local_470;
  uStack_9a8 = uStack_458;
  uStack_9b0 = local_460;
  uStack_998 = uStack_448;
  local_9a0 = local_450;
  local_990 = local_440;
  uStack_d68 = uStack_9f0;
  local_d70 = local_9f8;
  uStack_d58 = uStack_9e0;
  uStack_d60 = local_9e8;
  uStack_d48 = uStack_9d0;
  local_d50 = local_9d8;
  local_d40 = local_9c8;
  FUN_100011090(&local_470,&local_910,&DAT_100ff9fa8,&DAT_100c97118);
  FUN_100005808(&local_d70,&DAT_100ff9fa8,&DAT_100c97118);
  uStack_ca8 = uStack_938;
  local_cb0 = local_940;
  uStack_c98 = uStack_928;
  local_ca0 = local_930;
  uStack_c50 = CONCAT71(uStack_98f,local_990);
  uStack_ce8 = uStack_978;
  local_cf0 = local_980;
  uStack_cd8 = uStack_968;
  local_ce0 = local_970;
  uStack_cc8 = uStack_958;
  local_cd0 = local_960;
  uStack_cb8 = uStack_948;
  local_cc0 = local_950;
  uStack_d28 = uStack_9b8;
  local_d30 = local_9c0;
  uStack_d18 = uStack_9a8;
  uStack_d20 = uStack_9b0;
  local_d00 = CONCAT71(uStack_98f,local_990);
  uStack_d08 = uStack_998;
  local_d10 = local_9a0;
  uStack_cf8 = uStack_988;
  uStack_bf8 = uStack_938;
  local_c00 = local_940;
  uStack_be8 = uStack_928;
  uStack_bf0 = local_930;
  uStack_c38 = uStack_978;
  local_c40 = local_980;
  uStack_c28 = uStack_968;
  uStack_c30 = local_970;
  uStack_c18 = uStack_958;
  local_c20 = local_960;
  uStack_c08 = uStack_948;
  uStack_c10 = local_950;
  uStack_c78 = uStack_9b8;
  local_c80 = local_9c0;
  uStack_c68 = uStack_9a8;
  uStack_c70 = uStack_9b0;
  local_c90 = local_920;
  local_be0 = local_920;
  uStack_c58 = uStack_998;
  local_c60 = local_9a0;
  uStack_c48 = uStack_988;
  FUN_100011090(&local_d30,&local_910,&DAT_100ff9fc8,&DAT_100c97138);
  FUN_100005808(&local_c80,&DAT_100ff9fc8,&DAT_100c97138);
  uStack_da0 = CONCAT71(uStack_23f,local_240);
  uStack_da8 = uStack_248;
  local_db0 = local_250;
  uStack_d98 = uStack_238;
  uStack_d88 = uStack_228;
  local_d90 = local_230;
  uStack_d7f = CONCAT17(local_218,uStack_21f);
  uStack_d87 = uStack_227;
  uStack_d80 = local_220;
  uStack_de8 = uStack_288;
  local_df0 = local_290;
  uStack_dd8 = uStack_278;
  puStack_de0 = local_280;
  uStack_dc8 = uStack_268;
  local_dd0 = local_270;
  puStack_db8 = puStack_258;
  uStack_dc0 = local_260;
  uStack_e28 = CONCAT71(uStack_597,uStack_598);
  uStack_e18 = uStack_588;
  local_e20 = local_590;
  pcStack_e08 = pcStack_578;
  puStack_e10 = local_580;
  uStack_e58 = uStack_5c8;
  local_e60 = local_5d0;
  uStack_e48 = uStack_5b8;
  uStack_e50 = local_5c0;
  uStack_e38 = uStack_5a8;
  local_e40 = local_5b0;
  uStack_e30 = local_5a0;
  uStack_e98 = uStack_608;
  local_ea0 = local_610;
  uStack_e88 = uStack_5f8;
  uStack_e90 = local_600;
  uStack_e78 = uStack_5e8;
  local_e80 = local_5f0;
  uStack_e68 = uStack_5d8;
  uStack_e70 = local_5e0;
  pvStack_ed8 = pvStack_648;
  local_ee0 = local_650;
  uStack_ec8 = uStack_638;
  uStack_ed0 = local_640;
  uStack_eb8 = uStack_628;
  local_ec0 = local_630;
  puStack_ea8 = puStack_618;
  puStack_eb0 = local_620;
  uStack_a18 = uStack_ca8;
  local_a20 = local_cb0;
  uStack_a08 = uStack_c98;
  uStack_a10 = local_ca0;
  uStack_a58 = uStack_ce8;
  local_a60 = local_cf0;
  uStack_a48 = uStack_cd8;
  uStack_a50 = local_ce0;
  uStack_a38 = uStack_cc8;
  local_a40 = local_cd0;
  uStack_a28 = uStack_cb8;
  uStack_a30 = local_cc0;
  uStack_a98 = uStack_d28;
  local_aa0 = local_d30;
  uStack_a88 = uStack_d18;
  uStack_a90 = uStack_d20;
  uStack_a78 = uStack_d08;
  local_a80 = local_d10;
  uStack_a68 = uStack_cf8;
  uStack_a70 = local_d00;
  uStack_10a0 = CONCAT71(uStack_23f,local_240);
  uStack_bc8 = uStack_288;
  local_bd0 = local_290;
  uStack_bb8 = uStack_278;
  puStack_bc0 = local_280;
  uStack_10e8 = uStack_288;
  local_10f0 = local_290;
  uStack_10d8 = uStack_278;
  puStack_10e0 = local_280;
  uStack_b88 = uStack_248;
  local_b90 = local_250;
  uStack_b78 = uStack_238;
  uStack_b68 = uStack_228;
  local_b70 = local_230;
  uStack_ba8 = uStack_268;
  local_bb0 = local_270;
  puStack_b98 = puStack_258;
  uStack_ba0 = local_260;
  uStack_10c8 = uStack_268;
  local_10d0 = local_270;
  puStack_10b8 = puStack_258;
  uStack_10c0 = local_260;
  uStack_107f = CONCAT17(local_218,uStack_21f);
  uStack_b67 = uStack_227;
  uStack_b60 = local_220;
  uStack_10a8 = uStack_248;
  local_10b0 = local_250;
  uStack_1098 = uStack_238;
  uStack_1088 = uStack_228;
  local_1090 = local_230;
  uStack_1087 = uStack_227;
  uStack_1080 = local_220;
  uStack_858 = CONCAT71(uStack_597,uStack_598);
  uStack_848 = uStack_588;
  local_850 = local_590;
  pcStack_838 = pcStack_578;
  puStack_840 = local_580;
  uStack_888 = uStack_5c8;
  local_890 = local_5d0;
  uStack_878 = uStack_5b8;
  uStack_880 = local_5c0;
  uStack_868 = uStack_5a8;
  local_870 = local_5b0;
  uStack_860 = local_5a0;
  uStack_8c8 = uStack_608;
  local_8d0 = local_610;
  uStack_8b8 = uStack_5f8;
  uStack_8c0 = local_600;
  uStack_8a8 = uStack_5e8;
  local_8b0 = local_5f0;
  uStack_898 = uStack_5d8;
  uStack_8a0 = local_5e0;
  local_910.bridgeObject = pvStack_648;
  local_910.str = local_650;
  uStack_8f8 = uStack_638;
  uStack_900 = local_640;
  uStack_8e8 = uStack_628;
  local_8f0 = local_630;
  puStack_8d8 = puStack_618;
  puStack_8e0 = local_620;
  uStack_fb8 = CONCAT71(uStack_597,uStack_598);
  uStack_fa8 = uStack_588;
  local_fb0 = local_590;
  pcStack_f98 = pcStack_578;
  puStack_fa0 = local_580;
  uStack_fe8 = uStack_5c8;
  local_ff0 = local_5d0;
  uStack_fd8 = uStack_5b8;
  uStack_fe0 = local_5c0;
  uStack_fc8 = uStack_5a8;
  local_fd0 = local_5b0;
  uStack_fc0 = local_5a0;
  uStack_1028 = uStack_608;
  local_1030 = local_610;
  uStack_1018 = uStack_5f8;
  uStack_1020 = local_600;
  uStack_1008 = uStack_5e8;
  local_1010 = local_5f0;
  uStack_ff8 = uStack_5d8;
  uStack_1000 = local_5e0;
  pvStack_1068 = pvStack_648;
  local_1070 = local_650;
  uStack_1058 = uStack_638;
  uStack_1060 = local_640;
  uStack_1048 = uStack_628;
  local_1050 = local_630;
  puStack_1038 = puStack_618;
  puStack_1040 = local_620;
  uStack_ac8 = uStack_ca8;
  local_ad0 = local_cb0;
  uStack_ab8 = uStack_c98;
  uStack_ac0 = local_ca0;
  uStack_b08 = uStack_ce8;
  local_b10 = local_cf0;
  uStack_af8 = uStack_cd8;
  uStack_b00 = local_ce0;
  uStack_ae8 = uStack_cc8;
  local_af0 = local_cd0;
  uStack_ad8 = uStack_cb8;
  uStack_ae0 = local_cc0;
  uStack_b48 = uStack_d28;
  local_b50 = local_d30;
  uStack_b38 = uStack_d18;
  uStack_b40 = uStack_d20;
  uStack_b28 = uStack_d08;
  local_b30 = local_d10;
  uStack_b18 = uStack_cf8;
  uStack_b20 = local_d00;
  uStack_f00 = uStack_ca8;
  local_f08 = local_cb0;
  uStack_ef0 = uStack_c98;
  uStack_ef8 = local_ca0;
  local_e00 = local_570;
  local_a00 = local_c90;
  local_830 = local_570;
  local_f90 = local_570;
  local_ab0 = local_c90;
  uStack_f40 = uStack_ce8;
  local_f48 = local_cf0;
  uStack_f30 = uStack_cd8;
  uStack_f38 = local_ce0;
  uStack_f20 = uStack_cc8;
  local_f28 = local_cd0;
  uStack_f10 = uStack_cb8;
  uStack_f18 = local_cc0;
  uStack_f80 = uStack_d28;
  local_f88 = local_d30;
  uStack_f70 = uStack_d18;
  uStack_f78 = uStack_d20;
  uStack_f60 = uStack_d08;
  local_f68 = local_d10;
  uStack_f50 = uStack_cf8;
  uStack_f58 = local_d00;
  local_ee8 = local_c90;
  uStack_b80 = uStack_10a0;
  uStack_b5f = uStack_107f;
  _memcpy(local_11f0,&local_10f0,0x210);
  FUN_100011090(&local_bd0,auStack_11d8,&DAT_100ff9fa0,&DAT_100c970e0);
  FUN_100011090(&local_910,auStack_11d8,&DAT_100ff9fc0,&DAT_100c97130);
  FUN_100011090(&local_b50,auStack_11d8,&DAT_100ff9fc8,&DAT_100c97138);
  FUN_100005808(&local_aa0,&DAT_100ff9fc8,&DAT_100c97138);
  FUN_100005808(&local_ee0,&DAT_100ff9fc0,&DAT_100c97130);
  FUN_100005808(&local_df0,&DAT_100ff9fa0,&DAT_100c970e0);
  _swift_release(local_11f8);
  return;
}



/* Address: 0x100b02d80 | FUN_100b02d80 */

void FUN_100b02d80(undefined8 *param_1)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined8 in_x3;
  long extraout_x8;
  String local_50;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100afbeec();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0x21;
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/IntroductionView.macOS.swift",0x2c,1,0x21,UVar4.unknown,pMVar2);
  }
  FUN_1001d5854(LVar1.unknown);
  local_50 = (extension_Foundation)::Swift::String::init(LVar1);
  uVar8 = local_50.str._0_1_;
  FUN_100b02f84();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar3);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = in_x3;
  return;
}



/* Address: 0x100b02e90 | FUN_100b02e90 */

void FUN_100b02e90(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  HVar3 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar3.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100ff9f30;
  FUN_1000037f0(&DAT_100ff9f30,&DAT_100c97078);
  FUN_100b018a0((long)param_1 + (long)*(int *)(puVar4 + 0x2c),uVar1,uVar2);
  return;
}



/* Address: 0x100b02eec | FUN_100b02eec */

undefined8 FUN_100b02eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9f60;
  FUN_1000037f0(&DAT_100ff9f60,&DAT_100c970a8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100b02f3c | FUN_100b02f3c */

undefined8 FUN_100b02f3c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9f60;
  FUN_1000037f0(&DAT_100ff9f60,&DAT_100c970a8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100b02f84 | FUN_100b02f84 */

void FUN_100b02f84(void)

{
  undefined *puVar1;
  
  if (DAT_100ff9f88 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100ff9f88 = puVar1;
  return;
}



/* Address: 0x100b02fc4 | FUN_100b02fc4 */

void FUN_100b02fc4(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_foregroundColor(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x100b02fec | FUN_100b02fec */

void FUN_100b02fec(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_foregroundColor(param_2);
  return;
}



/* Address: 0x100b03014 | thunk_FUN_100b03018 */

void thunk_FUN_100b03018(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff9fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff9fd8;
  FUN_100005c24(&DAT_100ff9fd8,&DAT_100c97140);
  puVar2 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,puVar1);
  DAT_100ff9fd0 = puVar2;
  return;
}



/* Address: 0x100b03018 | FUN_100b03018 */

void FUN_100b03018(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff9fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff9fd8;
  FUN_100005c24(&DAT_100ff9fd8,&DAT_100c97140);
  puVar2 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,puVar1);
  DAT_100ff9fd0 = puVar2;
  return;
}



/* Address: 0x100b03068 | FUN_100b03068 */

void FUN_100b03068(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100f33c30;
  _swift_allocObject(&DAT_100f33c30,0x40,7);
  puVar1[0x10] = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puVar1[0x28] = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  puVar2 = &DAT_100f33c58;
  _swift_allocObject(&DAT_100f33c58,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_100b03230;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *param_1 = 0x7075746573;
  param_1[1] = &DAT_e500000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = FUN_100b03288;
  param_1[4] = puVar2;
  _swift_retain(param_7);
  return;
}



/* Address: 0x100b03124 | FUN_100b03124 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b031c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b03124(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 in_w5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100f33c80;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar1[0x20] = in_w5;
  *(undefined8 *)(puVar1 + 0x28) = in_x6;
  *(undefined8 *)(puVar1 + 0x30) = in_x7;
  puVar1[0x38] = in_stack_00000000;
  *(undefined8 *)(puVar1 + 0x40) = in_stack_00000008;
  *(undefined8 *)(puVar1 + 0x48) = in_stack_00000010;
  _swift_retain(param_3);
  _swift_retain();
  FUN_1003ca9e0();
  SwiftUI::State::init(&local_80,puVar1,&DAT_100ecf3f0);
  *param_1 = FUN_100b034b0;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = local_80;
  param_1[4] = uStack_78;
  *(undefined1 *)(param_1 + 5) = local_70;
  param_1[6] = local_68;
  return;
}



/* Address: 0x100b0320c | FUN_100b0320c */

void FUN_100b0320c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b03230 | FUN_100b03230 */

void FUN_100b03230(void)

{
  FUN_100b03124();
  return;
}



/* Address: 0x100b03264 | FUN_100b03264 */

void FUN_100b03264(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b03288 | FUN_100b03288 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b032b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b03288(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_58 [56];
  
  (**(code **)(unaff_x20 + 0x10))(auStack_58);
  FUN_100b032cc();
  SwiftUI::AnyView::_init(param_1,&DAT_100f33d00,param_1);
  return;
}



/* Address: 0x100b032cc | FUN_100b032cc */

void FUN_100b032cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9fe0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c97164;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c97164,&DAT_100f33d00);
  DAT_100ff9fe0 = pTVar1;
  return;
}



/* Address: 0x100b0330c | FUN_100b0330c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b033a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_100b0330c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  
  lVar4 = 0;
  FUN_100b08cd0();
  _swift_allocObject();
  lVar2 = _TtC15PasteOnboarding14SetupViewModel::_activationShortcut;
  _swift_retain(in_x7);
  puVar5 = &DAT_100ff9fe8;
  FUN_1000037f0(&DAT_100ff9fe8,&DAT_100c97148);
  Combine::Published::init(lVar4 + lVar2,puVar5,puVar5);
  puVar6 = PTR___type_metadata_for_Swift_Bool_100eac570;
  Combine::Published::init
            (lVar4 + _TtC15PasteOnboarding14SetupViewModel::_syncIsEnabled,puVar5,
             PTR___type_metadata_for_Swift_Bool_100eac570);
  puVar1 = (undefined8 *)(lVar4 + _TtC15PasteOnboarding14SetupViewModel::next);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar3 = _TtC15PasteOnboarding14SetupViewModel::_openAtLoginIsEnabled;
  _swift_retain(param_2);
  Combine::Published::init(lVar4 + lVar3,puVar5,puVar6);
  puVar6 = &DAT_100ff9ff0;
  FUN_1000037f0(&DAT_100ff9ff0,&DAT_100c97150);
  (**(code **)(*(long *)(puVar6 + -8) + 8))(lVar4 + lVar2,puVar6);
  Combine::Published::init(lVar4 + lVar2,puVar6,puVar5);
  puVar1 = (undefined8 *)(lVar4 + _TtC15PasteOnboarding14SetupViewModel::onComplete);
  *puVar1 = in_x6;
  puVar1[1] = in_x7;
  return lVar4;
}



/* Address: 0x100b03484 | FUN_100b03484 */

void FUN_100b03484(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b034b0 | FUN_100b034b0 */

void FUN_100b034b0(void)

{
  long unaff_x20;
  
  FUN_100b0330c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100b034c8 | FUN_100b034c8 */

void FUN_100b034c8(undefined8 *param_1)

{
  FUN_1001eebe0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_bridgeObjectRelease(param_1[4]);
  _swift_release(param_1[6]);
  return;
}



/* Address: 0x100b03500 | FUN_100b03500 */

undefined8 * FUN_100b03500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  FUN_1001eebf0(uVar3,uVar1,uVar2);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x100b03578 | FUN_100b03578 */

undefined8 * FUN_100b03578(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_1001eebf0(uVar6,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar6;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_1001eebe0(uVar1,uVar3,uVar5);
  param_1[3] = param_2[3];
  uVar6 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar6 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar6);
  return param_1;
}



/* Address: 0x100b03618 | FUN_100b03618 */

undefined8 * FUN_100b03618(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1001eebe0(uVar3,uVar4,uVar2);
  uVar3 = param_2[4];
  uVar4 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  _swift_release(uVar3);
  return param_1;
}



/* Address: 0x100b03684 | FUN_100b03684 */

undefined1  [16] FUN_100b03684(void)

{
  return ZEXT816(0x100f33d00);
}



/* Address: 0x100b03694 | FUN_100b03694 */

void FUN_100b03694(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ccc9b4,1);
  return;
}



/* Address: 0x100b036a4 | FUN_100b036a4 */

void FUN_100b036a4(undefined8 *param_1,undefined8 param_2)

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
  
  puVar2 = &DAT_100ffa000;
  FUN_1000037f0(&DAT_100ffa000,&DAT_100c971c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined8 *)(puVar8 + -extraout_x12);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteOnboarding/SetupView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,0xd,UVar5.unknown,puVar4);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar6);
  *puVar9 = HVar7.unknown;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 0;
  puVar2 = &DAT_100ffa008;
  FUN_1000037f0(&DAT_100ffa008,&DAT_100c971c8);
  FUN_100b03878((undefined1 *)((long)puVar9 + (long)*(int *)(puVar2 + 0x2c)),param_2);
  FUN_100011090(puVar9,puVar8,&DAT_100ffa000,&DAT_100c971c0);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar2 = &DAT_100ffa010;
  FUN_1000037f0(&DAT_100ffa010,&DAT_100c971d0);
  FUN_100011090(puVar8,(long)param_1 + (long)*(int *)(puVar2 + 0x30),&DAT_100ffa000,&DAT_100c971c0);
  iVar1 = *(int *)(puVar2 + 0x40);
  *(undefined8 *)((long)param_1 + (long)iVar1) = 0;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar1) + 1) = 1;
  FUN_100005808(puVar9,&DAT_100ffa000,&DAT_100c971c0);
  FUN_100005808(puVar8,&DAT_100ffa000,&DAT_100c971c0);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100b03878 | FUN_100b03878 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b03b70 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b03878(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  StateObject SVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined *puVar7;
  KeyboardShortcut KVar8;
  long lVar9;
  long lVar10;
  RoundedCornerStyle RVar11;
  undefined *puVar12;
  LocalizedStringResource LVar13;
  MainActor *pMVar14;
  UnownedSerialExecutor UVar15;
  UnownedSerialExecutor UVar16;
  State<undefined> SVar17;
  HorizontalAlignment HVar18;
  undefined **ppuVar19;
  Color CVar20;
  Set SVar21;
  Alignment AVar22;
  Alignment AVar23;
  KeyboardShortcut KVar24;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar25;
  long extraout_x8_01;
  long lVar26;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *puVar27;
  long extraout_x8_04;
  void *pvVar28;
  long extraout_x8_05;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  String SVar35;
  undefined **local_c50 [4];
  undefined8 *local_c30;
  undefined *local_c28;
  undefined8 *local_c20;
  undefined8 local_c18;
  uint local_c0c;
  undefined *local_c08;
  void *local_c00;
  char *pcStack_bf8;
  void *local_bf0;
  char *pcStack_be8;
  MainActor *local_be0;
  undefined *local_bd8;
  long local_bd0;
  long local_bc8;
  undefined *local_bc0;
  long local_bb8;
  undefined *local_bb0;
  long local_ba8;
  KeyboardShortcut local_ba0;
  long local_b98;
  undefined *puStack_b90;
  undefined *local_b88;
  undefined8 *local_b80;
  void *local_b78;
  long local_b70;
  long local_b68;
  long local_b60;
  undefined *local_b58;
  undefined *puStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined *local_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
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
  undefined8 uStack_980;
  undefined8 uStack_978;
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
  undefined8 local_920;
  byte local_8e0;
  undefined7 uStack_8df;
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
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined1 local_800 [8];
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
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined *local_720;
  undefined8 uStack_718;
  undefined1 local_710;
  undefined7 local_70f;
  undefined1 uStack_700;
  undefined7 local_6ff;
  undefined1 uStack_6f8;
  undefined7 uStack_6f7;
  undefined1 uStack_6f0;
  undefined7 local_6ef;
  undefined1 uStack_6e8;
  undefined7 uStack_6e7;
  undefined1 uStack_6e0;
  undefined7 local_6df;
  undefined1 uStack_6d8;
  undefined7 uStack_6d7;
  undefined1 uStack_6d0;
  undefined7 local_6cf;
  undefined1 uStack_6c8;
  undefined7 uStack_6c7;
  undefined1 uStack_6c0;
  undefined7 local_6bf;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  undefined1 uStack_6b0;
  undefined7 local_6af;
  undefined1 uStack_6a8;
  undefined7 uStack_6a7;
  undefined1 uStack_6a0;
  undefined7 local_69f;
  undefined1 uStack_698;
  undefined7 uStack_697;
  undefined1 uStack_690;
  undefined7 local_68f;
  undefined1 uStack_688;
  undefined7 uStack_687;
  undefined1 uStack_680;
  undefined7 local_67f;
  undefined1 uStack_678;
  undefined7 uStack_677;
  undefined1 uStack_670;
  undefined7 local_66f;
  undefined1 uStack_668;
  undefined7 uStack_667;
  undefined1 uStack_660;
  undefined7 local_65f;
  undefined1 uStack_658;
  undefined7 uStack_657;
  undefined1 uStack_650;
  undefined7 local_64f;
  undefined1 uStack_648;
  undefined7 uStack_647;
  undefined1 uStack_640;
  undefined7 local_63f;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined1 uStack_630;
  undefined7 uStack_62f;
  undefined *local_628;
  undefined8 local_620;
  undefined1 local_618;
  undefined8 local_617;
  undefined8 uStack_60f;
  undefined8 local_607;
  undefined8 uStack_5ff;
  undefined8 local_5f7;
  undefined8 uStack_5ef;
  undefined8 local_5e7;
  undefined8 uStack_5df;
  undefined8 local_5d7;
  undefined8 uStack_5cf;
  undefined8 local_5c7;
  undefined8 uStack_5bf;
  undefined8 local_5b7;
  undefined8 uStack_5af;
  undefined8 local_5a7;
  undefined8 uStack_59f;
  undefined8 local_597;
  undefined8 uStack_58f;
  undefined8 local_587;
  undefined8 uStack_57f;
  undefined8 local_577;
  undefined8 uStack_56f;
  undefined8 local_567;
  undefined8 uStack_55f;
  undefined8 local_557;
  undefined8 uStack_54f;
  undefined8 local_547;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 auStack_530 [296];
  undefined1 auStack_408 [296];
  undefined1 local_2e0;
  undefined6 uStack_2df;
  byte bStack_2d9;
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
  undefined1 local_289;
  undefined7 uStack_288;
  undefined1 uStack_281;
  undefined7 uStack_280;
  undefined1 local_279;
  undefined7 uStack_278;
  undefined1 uStack_271;
  undefined7 uStack_270;
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
  undefined *local_1b8;
  undefined1 local_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
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
  undefined *local_80;
  undefined1 local_78;
  
  local_b80 = param_1;
  puStack_b90 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_b98 = *(long *)(puStack_b90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b98 + 0x40));
  puVar25 = (undefined *)((long)local_c50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar12 = &DAT_100ff9f48;
  local_ba0.unknown = puVar25;
  FUN_1000037f0(&DAT_100ff9f48,&DAT_100c97090);
  local_bc8 = *(long *)(puVar12 + -8);
  local_bc0 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_bc8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar25 = puVar25 + -extraout_x8_00;
  puVar12 = &DAT_100ff9f50;
  local_bd8 = puVar25;
  FUN_1000037f0(&DAT_100ff9f50,&DAT_100c97098);
  local_bb8 = *(long *)(puVar12 + -8);
  local_bb0 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_bb8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar26 = (long)puVar25 - extraout_x8_01;
  puVar12 = &DAT_100ff9f58;
  local_bd0 = lVar26;
  FUN_1000037f0(&DAT_100ff9f58,&DAT_100c970a0);
  local_ba8 = *(long *)(puVar12 + -8);
  local_b88 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_ba8 + 0x40));
  lVar26 = lVar26 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_b60 = lVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = lVar26 - extraout_x12;
  local_b70 = lVar26;
  local_c28 = (undefined *)SwiftUI::RoundedRectangle::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(local_c28 + -8) + 0x40));
  puVar27 = (undefined8 *)(lVar26 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar12 = &DAT_100ffa018;
  local_c20 = puVar27;
  FUN_1000037f0(&DAT_100ffa018,&DAT_100c971d8);
  local_c08 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar26 = (long)puVar27 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_b68 = lVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pvVar28 = (void *)(lVar26 - extraout_x12_00);
  local_b78 = pvVar28;
  LVar13 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar13.unknown + -8) + 0x40));
  LVar13.unknown = (undefined *)((long)pvVar28 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  pMVar14 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar14 = Swift::MainActor::get_shared(pMVar14,pMVar14);
  puVar27 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_be0 = pMVar14;
  UVar15 = Swift::Actor::get_unownedExecutor();
  UVar16 = UVar15;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar16.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,0x10,UVar15.unknown,puVar27);
  }
  FUN_1001d8254(LVar13.unknown);
  SVar35 = (extension_Foundation)::Swift::String::init(LVar13);
  local_bf0 = SVar35.bridgeObject;
  pcStack_be8 = SVar35.str;
  FUN_1001d80d4(LVar13.unknown);
  SVar35 = (extension_Foundation)::Swift::String::init(LVar13);
  local_c00 = SVar35.bridgeObject;
  pcStack_bf8 = SVar35.str;
  local_2e0 = 0;
  SVar17 = SwiftUI::State::init(&local_1a8,pcStack_bf8,PTR___type_metadata_for_Swift_Bool_100eac570)
  ;
  local_c0c = (uint)local_1a8;
  local_c18 = uStack_1a0;
  HVar18 = SwiftUI::HorizontalAlignment::get_center(SVar17.unknown);
  local_c30 = param_2;
  FUN_100b04408(&local_1a8,param_2);
  uStack_838 = uStack_100;
  local_840 = local_108;
  uStack_828 = uStack_f0;
  uStack_830 = local_f8;
  uStack_818 = uStack_e0;
  local_820 = local_e8;
  uStack_808 = uStack_d0;
  uStack_810 = local_d8;
  uStack_878 = uStack_140;
  local_880 = local_148;
  uStack_868 = uStack_130;
  uStack_870 = local_138;
  uStack_858 = uStack_120;
  local_860 = local_128;
  uStack_848 = uStack_110;
  uStack_850 = local_118;
  uStack_8b8 = uStack_180;
  local_8c0 = local_188;
  uStack_8a8 = uStack_170;
  uStack_8b0 = local_178;
  uStack_898 = uStack_160;
  local_8a0 = local_168;
  uStack_888 = uStack_150;
  uStack_890 = local_158;
  local_8e0 = local_1a8;
  uStack_8df = uStack_1a7;
  uStack_8d8 = uStack_1a0;
  uStack_8c8 = uStack_190;
  uStack_8d0 = local_198;
  uStack_758 = uStack_100;
  local_760 = local_108;
  uStack_748 = uStack_f0;
  uStack_750 = local_f8;
  uStack_738 = uStack_e0;
  local_740 = local_e8;
  uStack_728 = uStack_d0;
  uStack_730 = local_d8;
  uStack_798 = uStack_140;
  local_7a0 = local_148;
  uStack_788 = uStack_130;
  uStack_790 = local_138;
  uStack_778 = uStack_120;
  local_780 = local_128;
  uStack_768 = uStack_110;
  uStack_770 = local_118;
  uStack_7d8 = uStack_180;
  local_7e0 = local_188;
  uStack_7c8 = uStack_170;
  uStack_7d0 = local_178;
  uStack_7b8 = uStack_160;
  local_7c0 = local_168;
  uStack_7a8 = uStack_150;
  uStack_7b0 = local_158;
  uStack_7f8 = uStack_1a0;
  uStack_7e8 = uStack_190;
  uStack_7f0 = local_198;
  FUN_100011090(&local_8e0,&local_2e0,&DAT_100ffa020,&DAT_100c971e0);
  AVar23.unknown = local_800;
  FUN_100005808(AVar23.unknown,&DAT_100ffa020,&DAT_100c971e0);
  uStack_231 = (undefined1)uStack_838;
  uStack_230 = (undefined7)((ulong)uStack_838 >> 8);
  local_239 = (undefined1)local_840;
  uStack_238 = (undefined7)((ulong)local_840 >> 8);
  uStack_221 = (undefined1)uStack_828;
  uStack_220 = (undefined7)((ulong)uStack_828 >> 8);
  local_229 = (undefined1)uStack_830;
  uStack_228 = (undefined7)((ulong)uStack_830 >> 8);
  uStack_211 = (undefined1)uStack_818;
  uStack_210 = (undefined7)((ulong)uStack_818 >> 8);
  local_219 = (undefined1)local_820;
  uStack_218 = (undefined7)((ulong)local_820 >> 8);
  uStack_201 = (undefined1)uStack_808;
  uStack_200 = (undefined7)((ulong)uStack_808 >> 8);
  local_209 = (undefined1)uStack_810;
  uStack_208 = (undefined7)((ulong)uStack_810 >> 8);
  uStack_271 = (undefined1)uStack_878;
  uStack_270 = (undefined7)((ulong)uStack_878 >> 8);
  local_279 = (undefined1)local_880;
  uStack_278 = (undefined7)((ulong)local_880 >> 8);
  uStack_261 = (undefined1)uStack_868;
  uStack_260 = (undefined7)((ulong)uStack_868 >> 8);
  local_269 = (undefined1)uStack_870;
  uStack_268 = (undefined7)((ulong)uStack_870 >> 8);
  uStack_251 = (undefined1)uStack_858;
  uStack_250 = (undefined7)((ulong)uStack_858 >> 8);
  local_259 = (undefined1)local_860;
  uStack_258 = (undefined7)((ulong)local_860 >> 8);
  uStack_241 = (undefined1)uStack_848;
  uStack_240 = (undefined7)((ulong)uStack_848 >> 8);
  local_249 = (undefined1)uStack_850;
  uStack_248 = (undefined7)((ulong)uStack_850 >> 8);
  uStack_2b1 = (undefined1)uStack_8b8;
  uStack_2b0 = (undefined7)((ulong)uStack_8b8 >> 8);
  local_2b9 = (undefined1)local_8c0;
  uStack_2b8 = (undefined7)((ulong)local_8c0 >> 8);
  uStack_2a1 = (undefined1)uStack_8a8;
  uStack_2a0 = (undefined7)((ulong)uStack_8a8 >> 8);
  local_2a9 = (undefined1)uStack_8b0;
  uStack_2a8 = (undefined7)((ulong)uStack_8b0 >> 8);
  uStack_291 = (undefined1)uStack_898;
  uStack_290 = (undefined7)((ulong)uStack_898 >> 8);
  local_299 = (undefined1)local_8a0;
  uStack_298 = (undefined7)((ulong)local_8a0 >> 8);
  uStack_281 = (undefined1)uStack_888;
  uStack_280 = (undefined7)((ulong)uStack_888 >> 8);
  local_289 = (undefined1)uStack_890;
  uStack_288 = (undefined7)((ulong)uStack_890 >> 8);
  uStack_2d1 = (undefined1)uStack_8d8;
  uStack_2d0 = (undefined7)((ulong)uStack_8d8 >> 8);
  bStack_2d9 = local_8e0;
  uStack_2d8 = uStack_8df;
  uStack_2c1 = (undefined1)uStack_8c8;
  uStack_2c0 = (undefined7)((ulong)uStack_8c8 >> 8);
  local_2c9 = (undefined1)uStack_8d0;
  uStack_2c8 = (undefined7)((ulong)uStack_8d0 >> 8);
  SwiftUI::Alignment::get_center(AVar23);
  uStack_657 = uStack_228;
  uStack_650 = uStack_221;
  local_65f = uStack_230;
  uStack_658 = local_229;
  uStack_647 = uStack_218;
  uStack_640 = uStack_211;
  local_64f = uStack_220;
  uStack_648 = local_219;
  uStack_637 = uStack_208;
  local_63f = uStack_210;
  uStack_638 = local_209;
  uStack_697 = uStack_268;
  uStack_690 = uStack_261;
  local_69f = uStack_270;
  uStack_698 = local_269;
  uStack_687 = uStack_258;
  uStack_680 = uStack_251;
  local_68f = uStack_260;
  uStack_688 = local_259;
  uStack_677 = uStack_248;
  uStack_670 = uStack_241;
  local_67f = uStack_250;
  uStack_678 = local_249;
  uStack_667 = uStack_238;
  uStack_660 = uStack_231;
  local_66f = uStack_240;
  uStack_668 = local_239;
  uStack_6d7 = uStack_2a8;
  uStack_6d0 = uStack_2a1;
  local_6df = uStack_2b0;
  uStack_6d8 = local_2a9;
  uStack_6c7 = uStack_298;
  uStack_6c0 = uStack_291;
  local_6cf = uStack_2a0;
  uStack_6c8 = local_299;
  uStack_6b7 = uStack_288;
  uStack_6b0 = uStack_281;
  local_6bf = uStack_290;
  uStack_6b8 = local_289;
  uStack_6a7 = uStack_278;
  uStack_6a0 = uStack_271;
  local_6af = uStack_280;
  uStack_6a8 = local_279;
  local_70f = CONCAT61(uStack_2df,local_2e0);
  uStack_700 = uStack_2d1;
  uStack_6f7 = uStack_2c8;
  uStack_6f0 = uStack_2c1;
  local_6ff = uStack_2d0;
  uStack_6f8 = local_2c9;
  uStack_718 = 0;
  local_710 = 0;
  uStack_630 = uStack_201;
  uStack_62f = uStack_200;
  uStack_6e7 = uStack_2b8;
  uStack_6e0 = uStack_2b1;
  local_6ef = uStack_2c0;
  uStack_6e8 = local_2b9;
  local_720 = HVar18.unknown;
  SwiftUI::_FrameLayout::_init((Alignment)0x4079000000000000);
  local_950 = CONCAT71(local_65f,uStack_660);
  uStack_948 = CONCAT71(uStack_657,uStack_658);
  uStack_938 = CONCAT71(uStack_647,uStack_648);
  uStack_940 = CONCAT71(local_64f,uStack_650);
  local_930 = CONCAT71(local_63f,uStack_640);
  uStack_928 = CONCAT71(uStack_637,uStack_638);
  local_990 = CONCAT71(local_69f,uStack_6a0);
  uStack_988 = CONCAT71(uStack_697,uStack_698);
  uStack_978 = CONCAT71(uStack_687,uStack_688);
  uStack_980 = CONCAT71(local_68f,uStack_690);
  local_970 = CONCAT71(local_67f,uStack_680);
  uStack_968 = CONCAT71(uStack_677,uStack_678);
  uStack_958 = CONCAT71(uStack_667,uStack_668);
  uStack_960 = CONCAT71(local_66f,uStack_670);
  local_9d0 = CONCAT71(local_6df,uStack_6e0);
  uStack_9c8 = CONCAT71(uStack_6d7,uStack_6d8);
  uStack_9b8 = CONCAT71(uStack_6c7,uStack_6c8);
  uStack_9c0 = CONCAT71(local_6cf,uStack_6d0);
  local_9b0 = CONCAT71(local_6bf,uStack_6c0);
  uStack_9a8 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_998 = CONCAT71(uStack_6a7,uStack_6a8);
  uStack_9a0 = CONCAT71(local_6af,uStack_6b0);
  uStack_a00 = CONCAT71(local_70f,local_710);
  uStack_a08 = uStack_718;
  local_a10 = local_720;
  local_9f0 = CONCAT71(local_6ff,uStack_700);
  uStack_9e8 = CONCAT71(uStack_6f7,uStack_6f8);
  uStack_9d8 = CONCAT71(uStack_6e7,uStack_6e8);
  uStack_9e0 = CONCAT71(local_6ef,uStack_6f0);
  uStack_56f = CONCAT17(uStack_231,uStack_238);
  local_577 = CONCAT17(local_239,uStack_240);
  local_567 = CONCAT17(local_229,uStack_230);
  uStack_55f = CONCAT17(uStack_221,uStack_228);
  local_557 = CONCAT17(local_219,uStack_220);
  uStack_54f = CONCAT17(uStack_211,uStack_218);
  local_547 = CONCAT17(local_209,uStack_210);
  uStack_53f = uStack_208;
  uStack_5af = CONCAT17(uStack_271,uStack_278);
  local_5b7 = CONCAT17(local_279,uStack_280);
  local_5a7 = CONCAT17(local_269,uStack_270);
  uStack_59f = CONCAT17(uStack_261,uStack_268);
  local_597 = CONCAT17(local_259,uStack_260);
  uStack_58f = CONCAT17(uStack_251,uStack_258);
  uStack_57f = CONCAT17(uStack_241,uStack_248);
  local_587 = CONCAT17(local_249,uStack_250);
  uStack_5ef = CONCAT17(uStack_2b1,uStack_2b8);
  local_5f7 = CONCAT17(local_2b9,uStack_2c0);
  local_5e7 = CONCAT17(local_2a9,uStack_2b0);
  uStack_5df = CONCAT17(uStack_2a1,uStack_2a8);
  local_5d7 = CONCAT17(local_299,uStack_2a0);
  uStack_5cf = CONCAT17(uStack_291,uStack_298);
  uStack_5bf = CONCAT17(uStack_281,uStack_288);
  uVar34 = CONCAT17(local_289,uStack_290);
  local_617 = CONCAT17(bStack_2d9,CONCAT61(uStack_2df,local_2e0));
  uStack_60f = CONCAT17(uStack_2d1,uStack_2d8);
  uStack_5ff = CONCAT17(uStack_2c1,uStack_2c8);
  local_607 = CONCAT17(local_2c9,uStack_2d0);
  local_920 = CONCAT71(uStack_62f,uStack_630);
  local_620 = 0;
  local_618 = 0;
  uStack_538 = uStack_201;
  uStack_537 = uStack_200;
  local_628 = HVar18.unknown;
  local_5c7 = uVar34;
  FUN_100011090(&local_720,&local_1a8,&DAT_100ffa028,&DAT_100c971e8);
  ppuVar19 = &local_628;
  FUN_100005808(ppuVar19,&DAT_100ffa028,&DAT_100c971e8);
  FUN_1001fe1dc();
  local_c50[3] = ppuVar19;
  CVar20 = SwiftUI::Color::init((NSColor *)*ppuVar19);
  SVar21 = SwiftUI::Edge::Set::get_all(CVar20.unknown);
  _memcpy(auStack_530,&local_a10,0x128);
  _memcpy(auStack_408,&local_a10,0x128);
  FUN_100011090(auStack_530,&local_1a8,&DAT_100ffa030,&DAT_100c971f0);
  FUN_100005808(auStack_408,&DAT_100ffa030,&DAT_100c971f0);
  _memcpy(&local_2e0,&local_a10,0x128);
  puVar12 = &DAT_100ffa038;
  local_1b8 = CVar20.unknown;
  local_1b0 = (char)SVar21.unknown;
  FUN_1000037f0(&DAT_100ffa038,&DAT_100c971f8);
  pvVar28 = local_b78;
  puVar25 = local_c28;
  puVar27 = (undefined8 *)((long)local_b78 + (long)*(int *)(puVar12 + 0x24));
  iVar4 = *(int *)(local_c28 + 0x14);
  uVar3 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar11 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar26 = CONCAT71((int7)((ulong)puVar12 >> 8),RVar11.value);
  pcVar29 = *(code **)(*(long *)(lVar26 + -8) + 0x68);
  (*pcVar29)((long)puVar27 + (long)iVar4,uVar3,lVar26);
  auVar31 = NEON_fmov(0x4024000000000000,8);
  puVar27[1] = auVar31._8_8_;
  *puVar27 = auVar31._0_8_;
  puVar12 = &DAT_100ffa040;
  local_c50[0] = auVar31._0_8_;
  local_c50[1] = (undefined **)auVar31._8_8_;
  FUN_1000037f0(&DAT_100ffa040,&DAT_100c97200);
  *(undefined2 *)((long)puVar27 + (long)*(int *)(puVar12 + 0x24)) = 0x100;
  _memcpy(pvVar28,&local_2e0,0x131);
  _memcpy(&local_1a8,&local_a10,0x128);
  local_80 = CVar20.unknown;
  local_78 = (char)SVar21.unknown;
  FUN_100011090(&local_2e0,&local_b48,&DAT_100ffa048,&DAT_100c97208);
  FUN_100005808(&local_1a8,&DAT_100ffa048,&DAT_100c97208);
  puVar5 = local_c20;
  (*pcVar29)((long)local_c20 + (long)*(int *)(puVar25 + 0x14),uVar3,lVar26);
  puVar5[1] = local_c50[1];
  *puVar5 = local_c50[0];
  CVar20 = SwiftUI::Color::init((NSColor *)*local_c50[3]);
  uVar33 = 0;
  SwiftUI::StrokeStyle::init
            (&local_b48,0x3ff0000000000000,0x4024000000000000,CVar20.unknown,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar12 = &DAT_100ffa050;
  FUN_1000037f0(&DAT_100ffa050,&DAT_100c97210);
  lVar26 = (long)pvVar28 + (long)*(int *)(puVar12 + 0x24);
  FUN_1001ef234(puVar5,lVar26);
  puVar12 = &DAT_100ffa058;
  FUN_1000037f0(&DAT_100ffa058,&DAT_100c97218);
  puVar27 = (undefined8 *)(lVar26 + *(int *)(puVar12 + 0x24));
  puVar27[1] = uStack_b40;
  *puVar27 = local_b48;
  puVar27[3] = uStack_b30;
  puVar27[2] = local_b38;
  puVar27[4] = local_b28;
  AVar23.unknown = &DAT_100ffa060;
  puVar12 = &DAT_100c97220;
  uVar32 = local_b38;
  FUN_1000037f0();
  *(undefined **)(lVar26 + *(int *)(AVar23.unknown + 0x34)) = CVar20.unknown;
  *(undefined2 *)(lVar26 + *(int *)(AVar23.unknown + 0x38)) = 0x100;
  AVar22 = SwiftUI::Alignment::get_center(AVar23);
  FUN_1001ef278(puVar5);
  AVar23.unknown = &DAT_100ffa068;
  puVar25 = &DAT_100c97228;
  FUN_1000037f0();
  iVar4 = *(int *)(AVar23.unknown + 0x24);
  *(undefined8 *)(lVar26 + iVar4) = AVar22.unknown;
  ((undefined8 *)(lVar26 + iVar4))[1] = puVar12;
  AVar23 = SwiftUI::Alignment::get_center(AVar23);
  SVar21.unknown = &DAT_100ffa070;
  FUN_1000037f0(&DAT_100ffa070,&DAT_100c97230);
  iVar4 = *(int *)(SVar21.unknown + 0x24);
  *(undefined8 *)(lVar26 + iVar4) = AVar23.unknown;
  ((undefined8 *)(lVar26 + iVar4))[1] = puVar25;
  SVar21 = SwiftUI::Edge::Set::get_bottom(SVar21);
  uVar30 = 0x403c000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar21.unknown);
  puVar1 = (undefined1 *)((long)pvVar28 + (long)*(int *)(local_c08 + 0x24));
  *puVar1 = (char)SVar21.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar30;
  *(undefined8 *)(puVar1 + 0x10) = uVar32;
  *(undefined8 *)(puVar1 + 0x18) = uVar33;
  *(undefined8 *)(puVar1 + 0x20) = uVar34;
  puVar1[0x28] = 0;
  SVar2.unknown = (undefined *)*local_c30;
  FUN_100b08cd0(0);
  FUN_100003a00(&DAT_100ffa078,FUN_100b08cd0,&TargetProtocolConformanceDescriptor_100c97548);
  SwiftUI::StateObject::get_wrappedValue(SVar2);
  KVar24.unknown = local_bd8;
  puVar25 = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  puVar12 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  SwiftUI::Button::_init();
  puVar7 = local_bc0;
  lVar26 = local_bd0;
  FUN_1001fa7a0(local_bd0,0,1,1,local_bc0);
  (**(code **)(local_bc8 + 8))(KVar24.unknown,puVar7);
  KVar8.unknown = local_ba0.unknown;
  SwiftUI::KeyboardShortcut::get_defaultAction(KVar24);
  local_b58 = puVar25;
  puStack_b50 = puVar12;
  _swift_getOpaqueTypeConformance2(&local_b58,&DAT_100ca7bfc,1);
  lVar9 = local_b70;
  puVar12 = local_bb0;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar8);
  (**(code **)(local_b98 + 8))(KVar8.unknown,puStack_b90);
  (**(code **)(local_bb8 + 8))(lVar26,puVar12);
  lVar10 = local_b68;
  FUN_100011090(pvVar28,local_b68,&DAT_100ffa018,&DAT_100c971d8);
  puVar25 = local_b88;
  lVar26 = local_ba8;
  pcVar29 = *(code **)(local_ba8 + 0x10);
  (*pcVar29)(local_b60,lVar9,local_b88);
  puVar27 = local_b80;
  pvVar6 = local_bf0;
  pvVar28 = local_c00;
  uVar34 = local_c18;
  *local_b80 = pcStack_be8;
  local_b80[1] = local_bf0;
  local_b80[2] = pcStack_bf8;
  local_b80[3] = local_c00;
  *(char *)(local_b80 + 4) = (char)local_c0c;
  local_b80[5] = local_c18;
  puVar12 = &DAT_100ffa080;
  FUN_1000037f0(&DAT_100ffa080,&DAT_100c97238);
  FUN_100011090(lVar10,(long)puVar27 + (long)*(int *)(puVar12 + 0x30),&DAT_100ffa018,&DAT_100c971d8)
  ;
  lVar9 = local_b60;
  (*pcVar29)((long)puVar27 + (long)*(int *)(puVar12 + 0x40),local_b60,puVar25);
  pcVar29 = *(code **)(lVar26 + 8);
  _swift_bridgeObjectRetain(pvVar6);
  _swift_bridgeObjectRetain(pvVar28);
  _swift_retain(uVar34);
  (*pcVar29)(local_b70,puVar25);
  FUN_100005808(local_b78,&DAT_100ffa018,&DAT_100c971d8);
  (*pcVar29)(lVar9,puVar25);
  FUN_100005808(local_b68,&DAT_100ffa018,&DAT_100c971d8);
  _swift_release(local_be0);
  _swift_release(uVar34);
  _swift_bridgeObjectRelease(pvVar28);
  _swift_bridgeObjectRelease(pvVar6);
  return;
}



/* Address: 0x100b04408 | FUN_100b04408 */

void FUN_100b04408(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  LocalizedStringResource LVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  undefined1 auStack_150 [8];
  void *local_148;
  char *local_140;
  void *local_138;
  char *local_130;
  void *local_128;
  char *local_120;
  void *local_118;
  char *local_110;
  void *local_108;
  char *pcStack_100;
  char *local_f8;
  void *local_f0;
  char *local_e8;
  void *local_e0;
  char *pcStack_d8;
  void *local_d0;
  MainActor *local_c8;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  LVar7 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  LVar7.unknown = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_c8 = pMVar8;
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,0x16,UVar10.unknown,puVar9);
  }
  FUN_1001d7f54(LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::init(LVar7);
  local_d0 = SVar19.bridgeObject;
  local_f8 = SVar19.str;
  FUN_1001d7dd4(LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::init(LVar7);
  local_e0 = SVar19.bridgeObject;
  pcStack_d8 = SVar19.str;
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = *(undefined1 *)(param_2 + 2);
  local_a8 = param_2[6];
  uStack_98 = param_2[4];
  local_a0 = param_2[3];
  local_90 = *(undefined1 *)(param_2 + 5);
  puVar12 = &DAT_100f33d28;
  _swift_allocObject(&DAT_100f33d28,0x48,7);
  uVar16 = *param_2;
  uVar18 = param_2[3];
  uVar17 = param_2[2];
  *(undefined8 *)(puVar12 + 0x18) = param_2[1];
  *(undefined8 *)(puVar12 + 0x10) = uVar16;
  *(undefined8 *)(puVar12 + 0x28) = uVar18;
  *(undefined8 *)(puVar12 + 0x20) = uVar17;
  uVar16 = param_2[4];
  *(undefined8 *)(puVar12 + 0x38) = param_2[5];
  *(undefined8 *)(puVar12 + 0x30) = uVar16;
  *(undefined8 *)(puVar12 + 0x40) = param_2[6];
  FUN_100011090(&local_80,auStack_c0,&DAT_100ffa088,&DAT_100c97240);
  FUN_100b0564c(&local_a0,auStack_c0);
  FUN_100011090(&local_a8,auStack_c0,&DAT_100ffa090,&DAT_100c97248);
  FUN_1001d7954(LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::init(LVar7);
  local_f0 = SVar19.bridgeObject;
  local_e8 = SVar19.str;
  FUN_1001d77d4(LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::init(LVar7);
  local_108 = SVar19.bridgeObject;
  pcStack_100 = SVar19.str;
  puVar13 = &DAT_100f33d50;
  _swift_allocObject(&DAT_100f33d50,0x48,7);
  uVar16 = *param_2;
  uVar18 = param_2[3];
  uVar17 = param_2[2];
  *(undefined8 *)(puVar13 + 0x18) = param_2[1];
  *(undefined8 *)(puVar13 + 0x10) = uVar16;
  *(undefined8 *)(puVar13 + 0x28) = uVar18;
  *(undefined8 *)(puVar13 + 0x20) = uVar17;
  uVar16 = param_2[4];
  *(undefined8 *)(puVar13 + 0x38) = param_2[5];
  *(undefined8 *)(puVar13 + 0x30) = uVar16;
  *(undefined8 *)(puVar13 + 0x40) = param_2[6];
  FUN_100011090(&local_80,auStack_c0,&DAT_100ffa088,&DAT_100c97240);
  FUN_100b0564c(&local_a0,auStack_c0);
  FUN_100011090(&local_a8,auStack_c0,&DAT_100ffa090,&DAT_100c97248);
  FUN_1001d8554(LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::init(LVar7);
  local_118 = SVar19.bridgeObject;
  local_110 = SVar19.str;
  FUN_1001d83d4(LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::init(LVar7);
  local_128 = SVar19.bridgeObject;
  local_120 = SVar19.str;
  puVar14 = &DAT_100f33d78;
  _swift_allocObject(&DAT_100f33d78,0x48,7);
  uVar16 = *param_2;
  uVar18 = param_2[3];
  uVar17 = param_2[2];
  *(undefined8 *)(puVar14 + 0x18) = param_2[1];
  *(undefined8 *)(puVar14 + 0x10) = uVar16;
  *(undefined8 *)(puVar14 + 0x28) = uVar18;
  *(undefined8 *)(puVar14 + 0x20) = uVar17;
  uVar16 = param_2[4];
  *(undefined8 *)(puVar14 + 0x38) = param_2[5];
  *(undefined8 *)(puVar14 + 0x30) = uVar16;
  *(undefined8 *)(puVar14 + 0x40) = param_2[6];
  FUN_100011090(&local_80,auStack_c0,&DAT_100ffa088,&DAT_100c97240);
  FUN_100b0564c(&local_a0,auStack_c0);
  FUN_100011090(&local_a8,auStack_c0,&DAT_100ffa090,&DAT_100c97248);
  FUN_1001d74d4(LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::init(LVar7);
  local_138 = SVar19.bridgeObject;
  local_130 = SVar19.str;
  FUN_1001d7354(LVar7.unknown);
  SVar19 = (extension_Foundation)::Swift::String::init(LVar7);
  local_148 = SVar19.bridgeObject;
  local_140 = SVar19.str;
  puVar15 = &DAT_100f33da0;
  _swift_allocObject(&DAT_100f33da0,0x48,7);
  pvVar6 = local_d0;
  pvVar5 = local_e0;
  pvVar4 = local_f0;
  pvVar3 = local_108;
  pvVar2 = local_118;
  pvVar1 = local_128;
  uVar16 = *param_2;
  uVar18 = param_2[3];
  uVar17 = param_2[2];
  *(undefined8 *)(puVar15 + 0x18) = param_2[1];
  *(undefined8 *)(puVar15 + 0x10) = uVar16;
  *(undefined8 *)(puVar15 + 0x28) = uVar18;
  *(undefined8 *)(puVar15 + 0x20) = uVar17;
  uVar16 = param_2[4];
  *(undefined8 *)(puVar15 + 0x38) = param_2[5];
  *(undefined8 *)(puVar15 + 0x30) = uVar16;
  *(undefined8 *)(puVar15 + 0x40) = param_2[6];
  *param_1 = local_f8;
  param_1[1] = local_d0;
  param_1[2] = pcStack_d8;
  param_1[3] = local_e0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = FUN_100b05624;
  param_1[6] = puVar12;
  param_1[7] = local_e8;
  param_1[8] = local_f0;
  param_1[9] = pcStack_100;
  param_1[10] = local_108;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = FUN_100b05688;
  param_1[0xd] = puVar13;
  param_1[0xe] = local_110;
  param_1[0xf] = local_118;
  param_1[0x10] = local_120;
  param_1[0x11] = local_128;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = FUN_100b056b0;
  param_1[0x14] = puVar14;
  param_1[0x15] = local_130;
  param_1[0x16] = local_138;
  param_1[0x17] = local_140;
  param_1[0x18] = local_148;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = FUN_100b056f0;
  param_1[0x1b] = puVar15;
  FUN_100011090(&local_80,auStack_c0,&DAT_100ffa088,&DAT_100c97240);
  FUN_100b0564c(&local_a0,auStack_c0);
  FUN_100011090(&local_a8,auStack_c0,&DAT_100ffa090,&DAT_100c97248);
  _swift_bridgeObjectRetain(pvVar6);
  _swift_bridgeObjectRetain(pvVar5);
  _swift_retain(puVar12);
  _swift_bridgeObjectRetain(pvVar4);
  _swift_bridgeObjectRetain(pvVar3);
  _swift_retain(puVar13);
  _swift_bridgeObjectRetain(pvVar2);
  _swift_bridgeObjectRetain(pvVar1);
  _swift_release(local_c8);
  _swift_release(puVar12);
  _swift_bridgeObjectRelease(pvVar5);
  _swift_bridgeObjectRelease(pvVar6);
  _swift_release(puVar13);
  _swift_bridgeObjectRelease(pvVar3);
  _swift_bridgeObjectRelease(pvVar4);
  _swift_bridgeObjectRelease(pvVar1);
  _swift_bridgeObjectRelease(pvVar2);
  return;
}



/* Address: 0x100b048ec | FUN_100b048ec */

void FUN_100b048ec(long param_1,undefined8 *param_2,undefined *param_3,undefined8 param_4)

{
  StateObject SVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ControlSize CVar6;
  SwitchToggleStyle SVar7;
  undefined *puVar8;
  Wrapper WVar9;
  Wrapper dynamicMember;
  undefined *puVar10;
  undefined *puVar11;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  Binding<bool> local_78;
  
  local_98 = param_3;
  local_90 = param_4;
  local_80 = param_1;
  SVar7 = SwiftUI::SwitchToggleStyle::typeMetadataAccessor();
  local_88 = *(long *)(SVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  puVar12 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100ffa108;
  FUN_1000037f0(&DAT_100ffa108,&DAT_100c97308);
  lVar13 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar1.unknown = (undefined *)*param_2;
  FUN_100b08cd0(0);
  FUN_100003a00(&DAT_100ffa078,FUN_100b08cd0,&TargetProtocolConformanceDescriptor_100c97548);
  WVar9 = SwiftUI::StateObject::_get_projectedValue(SVar1);
  dynamicMember.unknown = local_98;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar9.unknown);
  _swift_release(dynamicMember.unknown);
  SwiftUI::Toggle::_init(local_78);
  SwiftUI::SwitchToggleStyle::init();
  puVar10 = &DAT_100ffa110;
  FUN_100016eac(&DAT_100ffa110,&DAT_100ffa108,&DAT_100c97308,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_100eab918);
  puVar11 = &DAT_100ffa118;
  FUN_100003a00(&DAT_100ffa118,PTR_typeMetadataAccessor_100eaabd0,
                PTR_SwiftUI__SwiftUI__SwitchToggleStyle_>SwiftUI__ToggleStyle_100eaabc0);
  lVar5 = local_80;
  (extension_SwiftUI)::SwiftUI::View::_toggleStyle
            (local_80,puVar12,puVar8,SVar7.unknown,puVar10,puVar11);
  (**(code **)(local_88 + 8))(puVar12,SVar7.unknown);
  (**(code **)(lVar13 + 8))((long)puVar12 - extraout_x8_00,puVar8);
  puVar8 = &DAT_100ffa120;
  FUN_1000037f0(&DAT_100ffa120,&DAT_100c97338);
  iVar3 = *(int *)(puVar8 + 0x24);
  puVar8 = &DAT_100ffa128;
  FUN_1000037f0(&DAT_100ffa128,&DAT_100c97340);
  iVar4 = *(int *)(puVar8 + 0x1c);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa610
  ;
  CVar6 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar6.value) + -8) + 0x68))
            (lVar5 + iVar3 + (long)iVar4,uVar2,CONCAT71(extraout_var,CVar6.value));
  puVar8 = &DAT_100c97348;
  _swift_getKeyPath();
  *(undefined **)(lVar5 + iVar3) = puVar8;
  return;
}



/* Address: 0x100b04b5c | FUN_100b04b5c */

void FUN_100b04b5c(undefined8 *param_1,undefined8 *param_2)

{
  StateObject SVar1;
  Wrapper WVar2;
  Wrapper dynamicMember;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined1 local_70 [48];
  
  SVar1.unknown = (undefined *)*param_2;
  FUN_100b08cd0(0);
  FUN_100003a00(&DAT_100ffa078,FUN_100b08cd0,&TargetProtocolConformanceDescriptor_100c97548);
  WVar2 = SwiftUI::StateObject::_get_projectedValue(SVar1);
  dynamicMember.unknown = &DAT_100c972e0;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar2.unknown);
  _swift_release(dynamicMember.unknown);
  FUN_1001ec9ec(&local_b0,local_70);
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = CONCAT71(uStack_87,uStack_88);
  param_1[4] = local_90;
  *(undefined8 *)((long)param_1 + 0x31) = uStack_7f;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_80,uStack_87);
  return;
}


