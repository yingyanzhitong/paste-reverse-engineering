/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10020df28 | FUN_10020df28 */

undefined1  [16] FUN_10020df28(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 1;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10020df38 | FUN_10020df38 */

void FUN_10020df38(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010020df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x28));
  return;
}



/* Address: 0x10020df54 | FUN_10020df54 */

void FUN_10020df54(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010020df70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x28))
            (unaff_x20 + *(int *)(param_2 + 0x28),param_1);
  return;
}



/* Address: 0x10020df74 | FUN_10020df74 */

undefined1  [16] FUN_10020df74(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x2c));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10020dfa8 | FUN_10020dfa8 */

void FUN_10020dfa8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x2c));
  _swift_release(puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x10020dfe4 | FUN_10020dfe4 */

void FUN_10020dfe4(undefined1 *param_1,undefined1 param_2,undefined1 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_10020e070(0,param_8,param_9);
  Foundation::UUID::init();
  *param_1 = param_2;
  param_1[1] = param_3;
  (*param_4)(param_1 + *(int *)(lVar2 + 0x28));
  iVar1 = *(int *)(lVar2 + 0x2c);
  *(undefined8 *)(param_1 + iVar1) = param_6;
  *(undefined8 *)((long)(param_1 + iVar1) + 8) = param_7;
  return;
}



/* Address: 0x10020e070 | FUN_10020e070 */

void FUN_10020e070(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10020e07c | FUN_10020e07c */

void FUN_10020e07c(undefined8 param_1,long param_2)

{
  int iVar1;
  ModifiedContent MVar2;
  ModifiedContent MVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  Set SVar7;
  UUID UVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  byte *unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ScrollView SVar14;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  local_d0 = *(undefined8 *)(param_2 + 0x10);
  local_c8 = param_1;
  FUN_100005c24(&DAT_100fb6cd8,&DAT_100c362a0);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fb6ce0,&DAT_100c362a8);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  puVar4 = &DAT_100fb6ce8;
  FUN_100016eac(&DAT_100fb6ce8,&DAT_100fb6cd8,&DAT_100c362a0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = uVar11;
  puStack_68 = puVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_70);
  puVar4 = &DAT_100fb6cf0;
  FUN_100016eac(&DAT_100fb6cf0,&DAT_100fb6ce0,&DAT_100c362a8,
                PTR_SwiftUI__SwiftUI___PreferenceActionModifier<undefined>_>SwiftUI__ViewModifier_100eab078
               );
  local_80 = puVar5;
  puStack_78 = puVar4;
  _swift_getWitnessTable(puVar9,MVar3.unknown,&local_80);
  SVar14 = SwiftUI::ScrollView::typeMetadataAccessor();
  dVar6 = SVar14.lastScrollTimestamp;
  local_e0 = *(long *)((long)dVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0,dVar6,SVar14._8_8_);
  FUN_100005c24(&DAT_100fb6cf8,&DAT_100c362b0);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_d8 = *(long *)(MVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  lVar13 = ((long)&local_e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar13 - extraout_x12;
  SVar7.unknown._1_7_ = 0;
  SVar7.unknown._0_1_ = *unaff_x20;
  local_a0 = local_d0;
  uStack_98 = uVar11;
  SwiftUI::ScrollView::_init(SVar7,(bool)unaff_x20[1]);
  iVar1 = *(int *)(param_2 + 0x30);
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100ea7500;
  puVar5 = PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100eaa5c0;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100eaa5c0,dVar6)
  ;
  puVar4 = &DAT_100fb6d00;
  FUN_100003a00(&DAT_100fb6d00,puVar9,PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
  (extension_SwiftUI)::SwiftUI::View::_coordinateSpace
            (lVar13,unaff_x20 + iVar1,dVar6,UVar8.unknown,puVar5,puVar4);
  (**(code **)(local_e0 + 8))((long)&local_e0 - extraout_x8,dVar6);
  puVar4 = &DAT_100fb6d08;
  FUN_100016eac(&DAT_100fb6d08,&DAT_100fb6cf8,&DAT_100c362b0,
                PTR_SwiftUI__SwiftUI___CoordinateSpaceModifier<undefined>_>SwiftUI__ViewModifier_100eaaff0
               );
  puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_c0 = puVar5;
  puStack_b8 = puVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_c0);
  thunk_FUN_10003cc94(lVar12,lVar13,MVar2.unknown,puVar9);
  pcVar10 = *(code **)(local_d8 + 8);
  (*pcVar10)(lVar13,MVar2.unknown);
  thunk_FUN_10003cc94(local_c8,lVar12,MVar2.unknown,puVar9);
  (*pcVar10)(lVar12,MVar2.unknown);
  return;
}



/* Address: 0x10020e380 | FUN_10020e380 */

void FUN_10020e380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ModifiedContent MVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined *puVar9;
  Alignment AVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long extraout_x12;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 auStack_120 [8];
  undefined1 *local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  code *local_f8;
  code *local_f0;
  MainActor *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *puStack_70;
  
  lVar3 = 0;
  local_b0 = param_1;
  FUN_10020e070();
  lVar18 = *(long *)(lVar3 + -8);
  local_a8 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(local_a8 + 0xfU & 0xfffffffffffffff0);
  puVar20 = auStack_120 + -extraout_x8;
  FUN_100005c24(&DAT_100fb6cd8,&DAT_100c362a0);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_e0 = *(long *)(MVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = (long)puVar20 - extraout_x8_00;
  FUN_100005c24(&DAT_100fb6ce0,&DAT_100c362a8);
  local_c8 = MVar4.unknown;
  local_b8 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_c0 = *(long *)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  lVar15 = ((long)puVar20 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_d0 = lVar15 - extraout_x12;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_e8 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/OffsetObservingScrollView.swift",0x27,1,0x21,UVar7.unknown,puVar6);
  }
  local_100 = (long)*(int *)(lVar3 + 0x28);
  local_f0 = *(code **)(lVar18 + 0x10);
  (*local_f0)(puVar20,param_2,lVar3);
  uVar19 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar17 = uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff);
  puVar9 = &DAT_100ec18a8;
  local_110 = lVar3;
  local_108 = param_2;
  _swift_allocObject(&DAT_100ec18a8,uVar17 + local_a8,uVar19 | 7);
  *(undefined8 *)(puVar9 + 0x10) = param_3;
  *(undefined8 *)(puVar9 + 0x18) = param_4;
  local_f8 = *(code **)(lVar18 + 0x20);
  AVar10.unknown = puVar9 + uVar17;
  puVar14 = puVar20;
  (*local_f8)(AVar10.unknown,puVar20,lVar3);
  local_78 = FUN_10020f654;
  puStack_70 = puVar9;
  AVar10 = SwiftUI::Alignment::get_center(AVar10);
  puVar11 = &DAT_100fb6d90;
  local_118 = puVar14;
  FUN_1000037f0(&DAT_100fb6d90,&DAT_100c363c8);
  puVar12 = &DAT_100fb6d98;
  FUN_100016eac(&DAT_100fb6d98,&DAT_100fb6d90,&DAT_100c363c8,
                PTR_SwiftUI__SwiftUI__GeometryReader<undefined>_>SwiftUI__View_100eaa840);
  uVar1 = local_108;
  (extension_SwiftUI)::SwiftUI::View::_background
            (local_a0,&local_78,AVar10.unknown,local_118,param_3,puVar11,param_4,puVar12);
  _swift_release(puVar9);
  lVar3 = local_110;
  (*local_f0)(puVar20,uVar1,local_110);
  puVar9 = &DAT_100ec18d0;
  _swift_allocObject(&DAT_100ec18d0,uVar17 + local_a8,uVar19 | 7);
  *(undefined8 *)(puVar9 + 0x10) = param_3;
  *(undefined8 *)(puVar9 + 0x18) = param_4;
  (*local_f8)(puVar9 + uVar17,puVar20,lVar3);
  puVar11 = &DAT_100fb6ce8;
  FUN_100016eac(&DAT_100fb6ce8,&DAT_100fb6cd8,&DAT_100c362a0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar2 = local_c8;
  puVar12 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar13 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_88 = param_4;
  puStack_80 = puVar11;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             local_c8,&local_88);
  FUN_10020f7c4();
  FUN_100003a00(&DAT_100fb6da8,FUN_1001f3e40,
                PTR_CoreGraphics____C__CGPoint_>Swift__Equatable_100eaf2a0);
  lVar15 = local_a0;
  lVar3 = local_d8;
  (extension_SwiftUI)::SwiftUI::View::_onPreferenceChange();
  _swift_release(puVar9);
  (**(code **)(local_e0 + 8))(lVar15,puVar2);
  puVar9 = &DAT_100fb6cf0;
  FUN_100016eac(&DAT_100fb6cf0,&DAT_100fb6ce0,&DAT_100c362a8,
                PTR_SwiftUI__SwiftUI___PreferenceActionModifier<undefined>_>SwiftUI__ViewModifier_100eab078
               );
  puVar11 = local_b8;
  local_98 = puVar13;
  puStack_90 = puVar9;
  _swift_getWitnessTable(puVar12,local_b8,&local_98);
  lVar15 = local_d0;
  thunk_FUN_10003cc94(local_d0,lVar3,puVar11,puVar12);
  pcVar16 = *(code **)(local_c0 + 8);
  (*pcVar16)(lVar3,puVar11);
  thunk_FUN_10003cc94(local_b0,lVar15,puVar11,puVar12);
  (*pcVar16)(lVar15,puVar11);
  _swift_release(local_e8);
  return;
}



/* Address: 0x10020e7f8 | FUN_10020e7f8 */

void FUN_10020e7f8(void)

{
  long unaff_x20;
  
  FUN_10020e380(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10020e804 | FUN_10020e804 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010020e940 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10020e804(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  NamedCoordinateSpace NVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Color CVar6;
  UUID UVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 local_78;
  
  local_80 = param_5;
  local_78 = param_4;
  NVar1 = SwiftUI::NamedCoordinateSpace::typeMetadataAccessor();
  lVar9 = *(long *)(NVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/OffsetObservingScrollView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/OffsetObservingScrollView.swift",0x27,1,0x24,UVar4.unknown,puVar3);
  }
  CVar6 = SwiftUI::Color::get_clear((Color)pcVar5);
  FUN_10020e070(0,param_6,param_7);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  puVar8 = &DAT_100fb6d00;
  FUN_100003a00(&DAT_100fb6d00,PTR_typeMetadataAccessor_100ea7500,
                PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
  (extension_SwiftUI)::SwiftUI::CoordinateSpaceProtocol::_named(lVar10,puVar8,UVar7.unknown,puVar8);
  SwiftUI::GeometryProxy::_frame
            (puVar8,NVar1.unknown,
             PTR___protocol_witness_table_for_SwiftUI_NamedCoordinateSpace___SwiftUI_CoordinateSpaceProtocol_in_SwiftUI_100eaae08
            );
  (**(code **)(lVar9 + 8))(lVar10,NVar1.unknown);
  _swift_release(pMVar2);
  *param_1 = CVar6.unknown;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}



/* Address: 0x10020e9a8 | FUN_10020e9a8 */

void FUN_10020e9a8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *param_1;
  uVar8 = param_1[1];
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/OffsetObservingScrollView.swift",0x27,1,0x2c,UVar4.unknown,puVar3);
  }
  lVar6 = 0;
  FUN_10020e070(0,param_3,param_4);
  (**(code **)(param_2 + *(int *)(lVar6 + 0x2c)))(uVar7,uVar8);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10020ea94 | FUN_10020ea94 */

void FUN_10020ea94(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance2(&local_20,&DAT_100ca82d4,1);
  return;
}



/* Address: 0x10020eac8 | thunk_FUN_10020e07c */

void thunk_FUN_10020e07c(void)

{
  FUN_10020e07c();
  return;
}



/* Address: 0x10020eacc | FUN_10020eacc */

void FUN_10020eacc(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x10020ead4 | FUN_10020ead4 */

void FUN_10020ead4(long param_1)

{
  long lVar1;
  UUID UVar2;
  ulong uVar3;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  long local_28;
  
  local_48 = PTR___value_witness_table_for_Builtin_Int8_100eabd50 + 0x40;
  puStack_40 = &DAT_100c36330;
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    if (uVar3 < 0x40) {
      local_28 = *(long *)(UVar2.unknown + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,5,&local_48,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x10020eb80 | FUN_10020eb80 */

long * FUN_10020eb80(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  UUID UVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar7 + -8);
  uVar1 = *(uint *)(lVar13 + 0x50);
  uVar10 = (ulong)uVar1 & 0xff;
  lVar3 = *(long *)(lVar13 + 0x40) + 7;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar2.unknown + -8);
  uVar6 = (ulong)*(uint *)(lVar12 + 0x50) & 0xff;
  uVar5 = uVar6 | uVar10;
  if ((uVar5 < 8 && ((*(uint *)(lVar12 + 0x50) | uVar1) & 0x100000) == 0) &&
      0xffffffffffffffe6 <
      ((((-uVar10 - 3 | uVar10) - lVar3 | 7) - uVar6) - 0x10 | uVar6) - *(long *)(lVar12 + 0x40)) {
    *(char *)param_1 = (char)*param_2;
    *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)((long)param_2 + 1);
    uVar5 = (ulong)((long)param_1 + uVar10 + 2) & (uVar10 ^ 0xffffffffffffffff);
    uVar6 = (ulong)((long)param_2 + uVar10 + 2) & (uVar10 ^ 0xffffffffffffffff);
    (**(code **)(lVar13 + 0x10))(uVar5,uVar6,lVar7);
    puVar8 = (undefined8 *)(lVar3 + uVar5 & 0xfffffffffffffff8);
    puVar9 = (undefined8 *)(lVar3 + uVar6 & 0xfffffffffffffff8);
    uVar4 = puVar9[1];
    uVar14 = *puVar9;
    puVar8[1] = puVar9[1];
    *puVar8 = uVar14;
    pcVar11 = *(code **)(lVar12 + 0x10);
    _swift_retain(uVar4);
    (*pcVar11)(puVar8 + 2,puVar9 + 2,UVar2.unknown);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)((uint)uVar5 & 0xf8 ^ 0x1f8) & uVar5 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10020eccc | FUN_10020eccc */

void FUN_10020eccc(long param_1,long param_2)

{
  UUID UVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = param_1 + (ulong)*(byte *)(lVar4 + 0x50) + 2 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 8))(uVar2);
  uVar3 = *(long *)(lVar4 + 0x40) + uVar2 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar3 + 8));
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010020ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))
            (uVar3 + uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff),UVar1.unknown);
  return;
}



/* Address: 0x10020ed44 | FUN_10020ed44 */

undefined1 * FUN_10020ed44(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  UUID UVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar3 = (ulong)(param_1 + uVar2 + 2) & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = (ulong)(param_2 + uVar2 + 2) & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x10))(uVar3,uVar2);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar6 = (undefined8 *)(lVar5 + uVar3 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)(lVar5 + uVar2 & 0xfffffffffffffff8);
  uVar4 = puVar7[1];
  uVar9 = *puVar7;
  puVar6[1] = puVar7[1];
  *puVar6 = uVar9;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  pcVar8 = *(code **)(*(long *)(UVar1.unknown + -8) + 0x10);
  _swift_retain(uVar4);
  (*pcVar8)(uVar2 + 0x10 + (long)puVar6 & (uVar2 ^ 0xffffffffffffffff),
            uVar2 + 0x10 + (long)puVar7 & (uVar2 ^ 0xffffffffffffffff),UVar1.unknown);
  return param_1;
}



/* Address: 0x10020ee1c | FUN_10020ee1c */

undefined1 * FUN_10020ee1c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  UUID UVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar4 = (ulong)(param_1 + uVar3 + 2) & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = (ulong)(param_2 + uVar3 + 2) & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x18))(uVar4,uVar3);
  lVar7 = *(long *)(lVar7 + 0x40) + 7;
  puVar8 = (undefined8 *)(lVar7 + uVar4 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar7 + uVar3 & 0xfffffffffffffff8);
  uVar5 = puVar8[1];
  uVar1 = puVar6[1];
  uVar9 = *puVar6;
  puVar8[1] = puVar6[1];
  *puVar8 = uVar9;
  _swift_retain(uVar1);
  _swift_release(uVar5);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(UVar2.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x18))
            (uVar3 + 0x10 + (long)puVar8 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 0x10 + (long)puVar6 & (uVar3 ^ 0xffffffffffffffff),UVar2.unknown);
  return param_1;
}



/* Address: 0x10020eee8 | FUN_10020eee8 */

undefined1 * FUN_10020eee8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  UUID UVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar3 = (ulong)(param_1 + uVar2 + 2) & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = (ulong)(param_2 + uVar2 + 2) & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x20))(uVar3,uVar2);
  lVar6 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar6 + uVar2 & 0xfffffffffffffff8);
  uVar7 = *puVar5;
  puVar4[1] = puVar5[1];
  *puVar4 = uVar7;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x20))
            (uVar2 + 0x10 + (long)puVar4 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 0x10 + (long)puVar5 & (uVar2 ^ 0xffffffffffffffff),UVar1.unknown);
  return param_1;
}



/* Address: 0x10020efa0 | FUN_10020efa0 */

undefined1 * FUN_10020efa0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  UUID UVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar4 = (ulong)(param_1 + uVar3 + 2) & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = (ulong)(param_2 + uVar3 + 2) & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x28))(uVar4,uVar3);
  lVar7 = *(long *)(lVar7 + 0x40) + 7;
  puVar5 = (undefined8 *)(lVar7 + uVar4 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)(lVar7 + uVar3 & 0xfffffffffffffff8);
  uVar1 = puVar5[1];
  uVar8 = *puVar6;
  puVar5[1] = puVar6[1];
  *puVar5 = uVar8;
  _swift_release(uVar1);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(UVar2.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x28))
            (uVar3 + 0x10 + (long)puVar5 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 0x10 + (long)puVar6 & (uVar3 ^ 0xffffffffffffffff),UVar2.unknown);
  return param_1;
}



/* Address: 0x10020f060 | FUN_10020f060 */

ulong FUN_10020f060(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  UUID UVar7;
  code *UNRECOVERED_JUMPTABLE;
  ulong *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  long lVar16;
  
  puVar15 = *(undefined **)(param_3 + 0x10);
  lVar16 = *(long *)(puVar15 + -8);
  uVar10 = *(uint *)(lVar16 + 0x54);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar7.unknown + -8);
  uVar5 = *(uint *)(lVar9 + 0x54);
  uVar4 = uVar10;
  if (uVar10 <= uVar5) {
    uVar4 = uVar5;
  }
  uVar3 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  lVar1 = *(long *)(lVar16 + 0x40) + 7;
  uVar11 = (ulong)*(byte *)(lVar9 + 0x50);
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_10020f15c;
  lVar2 = (uVar11 + 0x10 +
           (lVar1 + (uVar12 + 2 & (uVar12 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) &
          (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar9 + 0x40);
  uVar13 = (uint)lVar2;
  uVar6 = uVar13 << 3;
  if (uVar13 < 4) {
    uVar14 = (param_2 - uVar3) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f);
    if (uVar14 < 0xff) {
      if (uVar14 == 0) goto LAB_10020f15c;
      goto LAB_10020f11c;
    }
    if (uVar14 < 0xffff) {
      uVar14 = (uint)*(ushort *)((long)param_1 + lVar2);
    }
    else {
      uVar14 = *(uint *)((long)param_1 + lVar2);
    }
  }
  else {
LAB_10020f11c:
    uVar14 = (uint)*(byte *)((long)param_1 + lVar2);
  }
  if (uVar14 != 0) {
    uVar4 = 0;
    if (uVar13 < 4) {
      uVar4 = uVar14 - 1 << (ulong)(uVar6 & 0x1f);
    }
    if (uVar13 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 4;
      if (uVar13 < 4) {
        uVar10 = uVar13;
      }
      if ((int)uVar10 < 3) {
        if (uVar10 == 1) {
          uVar10 = (uint)(byte)*param_1;
        }
        else {
          uVar10 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar10 == 3) {
        uVar10 = (uint)(uint3)*param_1;
      }
      else {
        uVar10 = *param_1;
      }
    }
    return (ulong)(uVar3 + (uVar10 | uVar4) + 1);
  }
LAB_10020f15c:
  uVar12 = (ulong)((long)param_1 + uVar12 + 2) & ~uVar12;
  if (uVar10 == uVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x30);
    UVar7.unknown = puVar15;
    uVar5 = uVar10;
  }
  else {
    puVar8 = (ulong *)(lVar1 + uVar12 & 0xfffffffffffffff8);
    if (-1 < (int)uVar4) {
      uVar11 = *puVar8;
      if (0xfffffffe < uVar11) {
        uVar11 = 0xffffffff;
      }
      return (ulong)((int)uVar11 + 1);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x30);
    uVar12 = uVar11 + 0x10 + (long)puVar8 & ~uVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x00010020f1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar12,uVar5,UVar7.unknown);
  return uVar12;
}



/* Address: 0x10020f23c | FUN_10020f23c */

void FUN_10020f23c(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  byte bVar8;
  UUID UVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined *puVar17;
  long lVar18;
  
  puVar17 = *(undefined **)(param_4 + 0x10);
  lVar18 = *(long *)(puVar17 + -8);
  uVar5 = *(uint *)(lVar18 + 0x54);
  UVar9 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar9.unknown + -8);
  uVar6 = *(uint *)(lVar10 + 0x54);
  uVar3 = uVar5;
  if (uVar5 <= uVar6) {
    uVar3 = uVar6;
  }
  uVar4 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
  lVar1 = *(long *)(lVar18 + 0x40) + 7;
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  sVar2 = (uVar11 + 0x10 +
           (lVar1 + (uVar13 + 2 & (uVar13 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) &
          (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar10 + 0x40);
  uVar16 = (uint)sVar2;
  if (param_3 < uVar4 || param_3 - uVar4 == 0) {
    bVar8 = 0;
  }
  else if (uVar16 < 4) {
    uVar14 = (param_3 - uVar4) + ~(-1 << (ulong)(uVar16 << 3 & 0x1f)) >> (ulong)(uVar16 << 3 & 0x1f)
    ;
    bVar8 = 2;
    if (0xfffe < uVar14) {
      bVar8 = 4;
    }
    if (uVar14 < 0xff) {
      bVar8 = uVar14 != 0;
    }
  }
  else {
    bVar8 = 1;
  }
  uVar14 = (uint)param_2;
  if (uVar4 < uVar14) {
    uVar14 = uVar14 + ~uVar4;
    if (uVar16 < 4) {
      iVar15 = (uVar14 >> (ulong)(uVar16 << 3 & 0x1f)) + 1;
      if (uVar16 != 0) {
        uVar3 = uVar14 & (-1 << (ulong)(uVar16 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar7 = (undefined2)uVar3;
        if (uVar16 == 3) {
          *(undefined2 *)param_1 = uVar7;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar16 == 2) {
          *(undefined2 *)param_1 = uVar7;
        }
        else {
          *(char *)param_1 = (char)uVar14;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = uVar14;
      iVar15 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar15;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar15;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar15;
    }
  }
  else {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar14 != 0) {
      uVar13 = (long)param_1 + uVar13 + 2 & ~uVar13;
      if (uVar5 == uVar4) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar18 + 0x38);
        UVar9.unknown = puVar17;
        uVar6 = uVar5;
      }
      else {
        puVar12 = (ulong *)(lVar1 + uVar13 & 0xfffffffffffffff8);
        if (-1 < (int)uVar3) {
          if (-1 < (int)uVar14) {
            *puVar12 = (ulong)(uVar14 - 1);
            return;
          }
          *puVar12 = (ulong)(uVar14 & 0x7fffffff);
          puVar12[1] = 0;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
        uVar13 = uVar11 + 0x10 + (long)puVar12 & ~uVar11;
      }
                    /* WARNING: Could not recover jumptable at 0x00010020f448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar13,param_2,uVar6,UVar9.unknown);
      return;
    }
  }
  return;
}



/* Address: 0x10020f4b0 | FUN_10020f4b0 */

void FUN_10020f4b0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ModifiedContent MVar3;
  ModifiedContent MVar4;
  undefined *puVar5;
  undefined *puVar6;
  ScrollView SVar7;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_100005c24(&DAT_100fb6cd8,&DAT_100c362a0);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fb6ce0,&DAT_100c362a8);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar5 = &DAT_100fb6ce8;
  FUN_100016eac(&DAT_100fb6ce8,&DAT_100fb6cd8,&DAT_100c362a0,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar6 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_60 = uVar1;
  puStack_58 = puVar5;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar3.unknown,&local_60);
  puVar5 = &DAT_100fb6cf0;
  FUN_100016eac(&DAT_100fb6cf0,&DAT_100fb6ce0,&DAT_100c362a8,
                PTR_SwiftUI__SwiftUI___PreferenceActionModifier<undefined>_>SwiftUI__ViewModifier_100eab078
               );
  local_70 = puVar6;
  puStack_68 = puVar5;
  _swift_getWitnessTable(puVar2,MVar4.unknown,&local_70);
  SVar7 = SwiftUI::ScrollView::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fb6cf8,&DAT_100c362b0);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar6 = PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100eaa5c0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100eaa5c0,
             SVar7.lastScrollTimestamp);
  puVar5 = &DAT_100fb6d08;
  FUN_100016eac(&DAT_100fb6d08,&DAT_100fb6cf8,&DAT_100c362b0,
                PTR_SwiftUI__SwiftUI___CoordinateSpaceModifier<undefined>_>SwiftUI__ViewModifier_100eaaff0
               );
  local_80 = puVar6;
  puStack_78 = puVar5;
  _swift_getWitnessTable(puVar2,MVar3.unknown,&local_80);
  return;
}



/* Address: 0x10020f640 | FUN_10020f640 */

undefined1  [16] FUN_10020f640(void)

{
  return ZEXT816(0x100ec1888);
}



/* Address: 0x10020f650 | thunk_FUN_10020f6bc */

void thunk_FUN_10020f6bc(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = 0;
  FUN_10020e070(0,lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar1 + *(int *)(lVar4 + 0x28),lVar2);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x2c) + 8));
  iVar3 = *(int *)(lVar4 + 0x30);
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 8))(lVar1 + iVar3,UVar5.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10020f654 | FUN_10020f654 */

void FUN_10020f654(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_10020e070(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10020e804(param_1,param_2,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,
                uVar2);
  return;
}



/* Address: 0x10020f6bc | FUN_10020f6bc */

void FUN_10020f6bc(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = 0;
  FUN_10020e070(0,lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar1 + *(int *)(lVar4 + 0x28),lVar2);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x2c) + 8));
  iVar3 = *(int *)(lVar4 + 0x30);
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 8))(lVar1 + iVar3,UVar5.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10020f76c | FUN_10020f76c */

void FUN_10020f76c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_10020e070(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10020e9a8(param_1,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2);
  return;
}



/* Address: 0x10020f7c4 | FUN_10020f7c4 */

void FUN_10020f7c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6da0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3637c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3637c,&DAT_100ec1888);
  DAT_100fb6da0 = pTVar1;
  return;
}



/* Address: 0x10020f804 | thunk_FUN_10020f6bc */

void thunk_FUN_10020f6bc(void)

{
  thunk_FUN_10020f6bc();
  return;
}



/* Address: 0x10020f808 | FUN_10020f808 */

void FUN_10020f808(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  Button<undefined> BVar4;
  _FrameLayout _Var5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  KeyboardShortcut KVar8;
  long lVar9;
  KeyboardShortcut KVar10;
  long lVar11;
  undefined *local_c0 [9];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_c0[0] = param_1;
  local_c0[1] = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  lVar9 = *(long *)(local_c0[1] + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  KVar10.unknown = (undefined *)((long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100fb6db0;
  FUN_1000037f0(&DAT_100fb6db0,&DAT_100c363d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  KVar8.unknown = KVar10.unknown + -extraout_x8_00;
  puVar3 = &DAT_100fb6db8;
  FUN_1000037f0(&DAT_100fb6db8,&DAT_100c363d8);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)KVar8.unknown - extraout_x8_01;
  _swift_retain(param_3);
  FUN_1000037f0(&DAT_100fb6dc0,&DAT_100c363e0);
  FUN_10020fc84();
  BVar4 = SwiftUI::Button::_init();
  SwiftUI::Alignment::get_center((Alignment)BVar4.unknown);
  _Var5 = SwiftUI::_FrameLayout::_init((Alignment)0x4046000000000000);
  puVar1 = (undefined8 *)(KVar8.unknown + *(int *)(puVar2 + 0x24));
  puVar1[1] = local_c0[7];
  *puVar1 = local_c0[6];
  puVar1[3] = uStack_78;
  puVar1[2] = local_c0[8];
  puVar1[5] = uStack_68;
  puVar1[4] = local_70;
  FUN_10020ff5c();
  puVar6 = _Var5.unknown;
  FUN_10020fff4();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar11);
  FUN_100210034();
  SwiftUI::KeyboardShortcut::get_cancelAction(KVar8);
  local_c0[3] = &DAT_100ec19e0;
  local_c0[2] = puVar2;
  local_c0[4] = _Var5.unknown;
  local_c0[5] = puVar6;
  _swift_getOpaqueTypeConformance2
            (local_c0 + 2,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar10);
  (**(code **)(lVar9 + 8))(KVar10.unknown,local_c0[1]);
  (**(code **)(lVar7 + 8))(lVar11,puVar3);
  return;
}



/* Address: 0x10020fa24 | FUN_10020fa24 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10020fa24(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  Scale SVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  Image IVar9;
  undefined *puVar10;
  undefined7 extraout_var;
  Alignment AVar11;
  Color CVar12;
  Set SVar13;
  Font FVar14;
  Font FVar15;
  undefined *puVar16;
  String systemName;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/RoundedCloseButton.swift",0x20,1,0xb,UVar7.unknown,puVar6);
  }
  systemName.bridgeObject = &DAT_e500000000000000;
  systemName.str = (char *)0x6b72616d78;
  IVar9 = SwiftUI::Image::init(systemName);
  puVar10 = &DAT_100fb6e08;
  FUN_1000037f0(&DAT_100fb6e08,&DAT_100c36400);
  iVar2 = *(int *)(puVar10 + 0x24);
  puVar10 = &DAT_100fb6e18;
  FUN_1000037f0(&DAT_100fb6e18,&DAT_100c36408);
  iVar3 = *(int *)(puVar10 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Image_Scale_large_SwiftUI_Image_Scale_Type___>_SwiftUI_Image_Scale_100eab788
  ;
  SVar4 = SwiftUI::Image::Scale::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,SVar4.value) + -8) + 0x68))
            ((long)param_1 + (long)iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,SVar4.value));
  AVar11.unknown = &DAT_100c36538;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar2) = AVar11.unknown;
  *param_1 = IVar9.unknown;
  SwiftUI::Alignment::get_center(AVar11);
  SwiftUI::_FrameLayout::_init((Alignment)0x4046000000000000);
  puVar10 = &DAT_100fb6df8;
  FUN_1000037f0(&DAT_100fb6df8,&DAT_100c363f8);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  puVar6[1] = uStack_68;
  *puVar6 = local_70;
  puVar6[3] = uStack_58;
  puVar6[2] = uStack_60;
  puVar6[5] = uStack_48;
  puVar6[4] = local_50;
  if (DAT_100fb7170 != -1) {
    _swift_once(&DAT_100fb7170,FUN_100219318);
  }
  CVar12 = SwiftUI::Color::init(DAT_101057888);
  SVar13 = SwiftUI::Edge::Set::get_all(CVar12.unknown);
  FVar14.unknown = &DAT_100fb6de8;
  FUN_1000037f0(&DAT_100fb6de8,&DAT_100c363f0);
  iVar2 = *(int *)(FVar14.unknown + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = CVar12.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = (char)SVar13.unknown;
  FVar14 = SwiftUI::Font::get_body(FVar14);
  FVar15 = SwiftUI::Font::bold(FVar14);
  _swift_release(FVar14.unknown);
  puVar10 = &DAT_100c36568;
  _swift_getKeyPath();
  _swift_release(pMVar5);
  puVar16 = &DAT_100fb6dd8;
  FUN_1000037f0(&DAT_100fb6dd8,&DAT_100c363e8);
  iVar2 = *(int *)(puVar16 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = puVar10;
  ((undefined8 *)((long)param_1 + (long)iVar2))[1] = FVar15.unknown;
  puVar10 = &DAT_100fb6dc0;
  FUN_1000037f0(&DAT_100fb6dc0,&DAT_100c363e0);
  *(undefined2 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24)) = 0x100;
  return;
}



/* Address: 0x10020fc84 | FUN_10020fc84 */

void FUN_10020fc84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6dc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6dc0;
  FUN_100005c24(&DAT_100fb6dc0,&DAT_100c363e0);
  puVar2 = puVar1;
  FUN_10020fd1c();
  puVar3 = &DAT_100fb6e30;
  FUN_100016eac(&DAT_100fb6e30,&DAT_100fb6e38,&DAT_100c36420,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6dc8 = puVar4;
  return;
}



/* Address: 0x10020fd1c | FUN_10020fd1c */

void FUN_10020fd1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6dd8;
  FUN_100005c24(&DAT_100fb6dd8,&DAT_100c363e8);
  puVar2 = puVar1;
  FUN_10020fdb4();
  puVar3 = &DAT_100fb6258;
  FUN_100016eac(&DAT_100fb6258,&DAT_100fb6250,&DAT_100c35108,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6dd0 = puVar4;
  return;
}



/* Address: 0x10020fdb4 | FUN_10020fdb4 */

void FUN_10020fdb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6de0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6de8;
  FUN_100005c24(&DAT_100fb6de8,&DAT_100c363f0);
  puVar2 = puVar1;
  FUN_10020fe4c();
  puVar3 = &DAT_100fb6e20;
  FUN_100016eac(&DAT_100fb6e20,&DAT_100fb6e28,&DAT_100c36410,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6de0 = puVar4;
  return;
}



/* Address: 0x10020fe4c | FUN_10020fe4c */

void FUN_10020fe4c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6df8;
  FUN_100005c24(&DAT_100fb6df8,&DAT_100c363f8);
  puVar2 = puVar1;
  FUN_10020fec4();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6df0 = puVar3;
  return;
}



/* Address: 0x10020fec4 | FUN_10020fec4 */

void FUN_10020fec4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6e08;
  FUN_100005c24(&DAT_100fb6e08,&DAT_100c36400);
  puVar2 = &DAT_100fb6e10;
  FUN_100016eac(&DAT_100fb6e10,&DAT_100fb6e18,&DAT_100c36408,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_30 = PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6e00 = puVar3;
  return;
}



/* Address: 0x10020ff5c | FUN_10020ff5c */

void FUN_10020ff5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb6e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6db0;
  FUN_100005c24(&DAT_100fb6db0,&DAT_100c363d0);
  puVar2 = &DAT_100fb6e48;
  FUN_100016eac(&DAT_100fb6e48,&DAT_100fb6e50,&DAT_100c36428,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6e40 = puVar3;
  return;
}



/* Address: 0x10020fff4 | FUN_10020fff4 */

void FUN_10020fff4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6e58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c364c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c364c8,&DAT_100ec19e0);
  DAT_100fb6e58 = pTVar1;
  return;
}



/* Address: 0x100210034 | FUN_100210034 */

undefined8 FUN_100210034(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb6db0;
  FUN_1000037f0(&DAT_100fb6db0,&DAT_100c363d0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10021007c | FUN_10021007c */

void FUN_10021007c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca8348,1);
  return;
}



/* Address: 0x10021008c | FUN_10021008c */

void FUN_10021008c(void)

{
  undefined8 *unaff_x20;
  
  FUN_10020f808(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100210094 | FUN_100210094 */

undefined1  [16] FUN_100210094(void)

{
  return ZEXT816(0x100ec19b8);
}



/* Address: 0x1002100a4 | FUN_1002100a4 */

void FUN_1002100a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  ppuVar5 = &local_50;
  puVar1 = &DAT_100fb6db8;
  FUN_100005c24(&DAT_100fb6db8,&DAT_100c363d8);
  puVar2 = &DAT_100fb6db0;
  FUN_100005c24(&DAT_100fb6db0,&DAT_100c363d0);
  puVar3 = puVar2;
  FUN_10020ff5c();
  puVar4 = puVar3;
  FUN_10020fff4();
  puStack_48 = &DAT_100ec19e0;
  local_50 = puVar2;
  local_40 = puVar3;
  puStack_38 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  local_50 = puVar1;
  puStack_48 = (undefined *)ppuVar5;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_keyboardShortcut(SwiftUI_KeyboardShortcut)__>_some>>_100eab490
             ,1);
  return;
}



/* Address: 0x100210144 | FUN_100210144 */

undefined1  [16] FUN_100210144(void)

{
  return ZEXT816(0x100ec19e0);
}



/* Address: 0x100210154 | FUN_100210154 */

void FUN_100210154(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca8394,1);
  return;
}



/* Address: 0x100210164 | FUN_100210164 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100210164(long param_1,ButtonStyleConfiguration param_2)

{
  int iVar1;
  bool bVar2;
  Label LVar3;
  Color CVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  
  LVar3 = SwiftUI::ButtonStyleConfiguration::get_label(param_2);
  bVar2 = SwiftUI::ButtonStyleConfiguration::get_isPressed((ButtonStyleConfiguration)LVar3.unknown);
  if (bVar2) {
    if (DAT_100fb7180 != -1) {
      _swift_once(&DAT_100fb7180,FUN_100219a44);
    }
    puVar7 = &DAT_1010578b0;
  }
  else {
    if (DAT_100fb7178 != -1) {
      _swift_once(&DAT_100fb7178,FUN_100218db4);
    }
    puVar7 = &DAT_101057860;
  }
  CVar4 = SwiftUI::Color::init((NSColor *)*puVar7);
  puVar5 = &DAT_100c36500;
  _swift_getKeyPath();
  puVar6 = &DAT_100fb63a8;
  FUN_1000037f0(&DAT_100fb63a8,&DAT_100c354a0);
  iVar1 = *(int *)(puVar6 + 0x24);
  *(undefined8 *)(param_1 + iVar1) = puVar5;
  ((undefined8 *)(param_1 + iVar1))[1] = CVar4.unknown;
  return;
}



/* Address: 0x10021023c | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x100210240 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x100210244 | FUN_100210244 */

void FUN_100210244(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_imageScale(param_1);
  return;
}



/* Address: 0x100210264 | FUN_100210264 */

void FUN_100210264(undefined8 param_1,EnvironmentValues *param_2)

{
  Scale SVar1;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x12;
  
  SVar1 = SwiftUI::Image::Scale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(*(long *)(CONCAT71(extraout_var,SVar1.value) + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  SwiftUI::EnvironmentValues::set_imageScale
            (param_2,(Scale)(__int8)(&stack0xffffffffffffffd0 +
                                    -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  return;
}



/* Address: 0x1002102e0 | thunk_FUN_100210264 */

void thunk_FUN_100210264(void)

{
  FUN_100210264();
  return;
}



/* Address: 0x1002102e4 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x1002102e8 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x1002102ec | thunk_FUN_1001fd9dc */

void thunk_FUN_1001fd9dc(void)

{
  FUN_1001fd9dc();
  return;
}



/* Address: 0x1002102f0 | FUN_1002102f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002102f0(undefined8 *param_1)

{
  Color CVar1;
  undefined1 auStack_178 [66];
  undefined6 uStack_136;
  undefined2 local_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 local_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined2 uStack_b8;
  undefined6 local_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 local_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined *local_90;
  undefined2 local_88;
  undefined8 local_86;
  undefined8 uStack_7e;
  undefined8 local_76;
  undefined8 uStack_6e;
  undefined8 local_66;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  
  if (DAT_100fb7188 != -1) {
    _swift_once(&DAT_100fb7188,FUN_100218e00);
  }
  CVar1 = SwiftUI::Color::init(DAT_101057868);
  SwiftUI::Alignment::get_center((Alignment)CVar1.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  uStack_128 = (undefined2)uStack_f8;
  uStack_126 = (undefined6)((ulong)uStack_f8 >> 0x10);
  local_130 = (undefined2)local_100;
  uStack_12e = (undefined6)((ulong)local_100 >> 0x10);
  uStack_118 = (undefined2)uStack_e8;
  uStack_116 = (undefined6)((ulong)uStack_e8 >> 0x10);
  uStack_120 = (undefined2)local_f0;
  uStack_11e = (undefined6)((ulong)local_f0 >> 0x10);
  uStack_108 = (undefined2)uStack_d8;
  uStack_106 = (undefined6)((ulong)uStack_d8 >> 0x10);
  local_110 = (undefined2)uStack_e0;
  uStack_10e = (undefined6)((ulong)uStack_e0 >> 0x10);
  uStack_7e = CONCAT26(uStack_128,uStack_12e);
  local_86 = CONCAT26(local_130,uStack_136);
  uStack_be = uStack_12e;
  uStack_b8 = uStack_128;
  uStack_c6 = uStack_136;
  uStack_c0 = local_130;
  uStack_6e = CONCAT26(uStack_118,uStack_11e);
  local_76 = CONCAT26(uStack_120,uStack_126);
  uStack_ae = uStack_11e;
  uStack_a8 = uStack_118;
  local_b6 = uStack_126;
  uStack_b0 = uStack_120;
  local_66 = CONCAT26(local_110,uStack_116);
  uStack_9e = uStack_10e;
  local_a6 = uStack_116;
  uStack_a0 = local_110;
  uStack_c8 = 0x100;
  local_88 = 0x100;
  uStack_5e = uStack_10e;
  uStack_58 = uStack_108;
  local_d0 = CVar1.unknown;
  uStack_98 = uStack_108;
  uStack_96 = uStack_106;
  local_90 = CVar1.unknown;
  uStack_56 = uStack_106;
  FUN_10021054c(&local_d0,auStack_178);
  FUN_10021059c(&local_90);
  param_1[1] = CONCAT62(uStack_c6,uStack_c8);
  *param_1 = local_d0;
  param_1[3] = CONCAT62(local_b6,uStack_b8);
  param_1[2] = CONCAT62(uStack_be,uStack_c0);
  param_1[5] = CONCAT62(local_a6,uStack_a8);
  param_1[4] = CONCAT62(uStack_ae,uStack_b0);
  param_1[7] = CONCAT62(uStack_96,uStack_98);
  param_1[6] = CONCAT62(uStack_9e,uStack_a0);
  return;
}



/* Address: 0x100210424 | FUN_100210424 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100210424(undefined8 *param_1)

{
  Color CVar1;
  undefined1 auStack_168 [66];
  undefined6 uStack_126;
  undefined2 local_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 local_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 local_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 local_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined *local_80;
  undefined2 local_78;
  undefined8 local_76;
  undefined8 uStack_6e;
  undefined8 local_66;
  undefined8 uStack_5e;
  undefined8 local_56;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  undefined6 uStack_46;
  
  if (DAT_100fb7188 != -1) {
    _swift_once(&DAT_100fb7188,FUN_100218e00);
  }
  CVar1 = SwiftUI::Color::init(DAT_101057868);
  SwiftUI::Alignment::get_center((Alignment)CVar1.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  uStack_118 = (undefined2)uStack_e8;
  uStack_116 = (undefined6)((ulong)uStack_e8 >> 0x10);
  local_120 = (undefined2)local_f0;
  uStack_11e = (undefined6)((ulong)local_f0 >> 0x10);
  uStack_108 = (undefined2)uStack_d8;
  uStack_106 = (undefined6)((ulong)uStack_d8 >> 0x10);
  uStack_110 = (undefined2)local_e0;
  uStack_10e = (undefined6)((ulong)local_e0 >> 0x10);
  uStack_f8 = (undefined2)uStack_c8;
  uStack_f6 = (undefined6)((ulong)uStack_c8 >> 0x10);
  local_100 = (undefined2)uStack_d0;
  uStack_fe = (undefined6)((ulong)uStack_d0 >> 0x10);
  uStack_6e = CONCAT26(uStack_118,uStack_11e);
  local_76 = CONCAT26(local_120,uStack_126);
  uStack_ae = uStack_11e;
  uStack_a8 = uStack_118;
  uStack_b6 = uStack_126;
  uStack_b0 = local_120;
  uStack_5e = CONCAT26(uStack_108,uStack_10e);
  local_66 = CONCAT26(uStack_110,uStack_116);
  uStack_9e = uStack_10e;
  uStack_98 = uStack_108;
  local_a6 = uStack_116;
  uStack_a0 = uStack_110;
  local_56 = CONCAT26(local_100,uStack_106);
  uStack_8e = uStack_fe;
  local_96 = uStack_106;
  uStack_90 = local_100;
  uStack_b8 = 0x100;
  local_78 = 0x100;
  uStack_4e = uStack_fe;
  uStack_48 = uStack_f8;
  local_c0 = CVar1.unknown;
  uStack_88 = uStack_f8;
  uStack_86 = uStack_f6;
  local_80 = CVar1.unknown;
  uStack_46 = uStack_f6;
  FUN_10021054c(&local_c0,auStack_168);
  FUN_10021059c(&local_80);
  param_1[1] = CONCAT62(uStack_b6,uStack_b8);
  *param_1 = local_c0;
  param_1[3] = CONCAT62(local_a6,uStack_a8);
  param_1[2] = CONCAT62(uStack_ae,uStack_b0);
  param_1[5] = CONCAT62(local_96,uStack_98);
  param_1[4] = CONCAT62(uStack_9e,uStack_a0);
  param_1[7] = CONCAT62(uStack_86,uStack_88);
  param_1[6] = CONCAT62(uStack_8e,uStack_90);
  return;
}



/* Address: 0x10021054c | FUN_10021054c */

undefined8 FUN_10021054c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb6e60;
  FUN_1000037f0(&DAT_100fb6e60,&DAT_100c36598);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10021059c | FUN_10021059c */

undefined8 FUN_10021059c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb6e60;
  FUN_1000037f0(&DAT_100fb6e60,&DAT_100c36598);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1002105e4 | FUN_1002105e4 */

void FUN_1002105e4(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca83d8,1);
  return;
}



/* Address: 0x1002105f4 | FUN_1002105f4 */

undefined1  [16] FUN_1002105f4(void)

{
  return ZEXT816(0x100ec1a70);
}



/* Address: 0x100210604 | thunk_FUN_100210608 */

void thunk_FUN_100210608(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb6e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6e60;
  FUN_100005c24(&DAT_100fb6e60,&DAT_100c36598);
  puVar2 = puVar1;
  FUN_100210680();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb6e68 = puVar3;
  return;
}


