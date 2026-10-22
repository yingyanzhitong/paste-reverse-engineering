/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000e8e4c | FUN_1000e8e4c */

void FUN_1000e8e4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1000e8e60 | FUN_1000e8e60 */

undefined8 * FUN_1000e8e60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x1000e8eb4 | FUN_1000e8eb4 */

undefined1  [16] FUN_1000e8eb4(void)

{
  return ZEXT816(0x100eb6798);
}



/* Address: 0x1000e8ec4 | FUN_1000e8ec4 */

void FUN_1000e8ec4(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca2e38,1);
  return;
}



/* Address: 0x1000e8ed4 | FUN_1000e8ed4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e90ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000e8ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  ObservedObject OVar3;
  undefined *puVar4;
  HorizontalAlignment HVar5;
  Set SVar6;
  undefined *puVar7;
  Wrapper WVar8;
  Wrapper dynamicMember;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  undefined *puVar12;
  undefined8 *unaff_x20;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 auStack_150 [4];
  undefined *apuStack_130 [2];
  ObservedObject local_120 [2];
  long local_110;
  undefined *local_108;
  long local_100;
  Binding<bool> local_f8;
  undefined8 uStack_f0;
  undefined *local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  puVar4 = &DAT_100fad958;
  local_100 = param_1;
  FUN_1000037f0(&DAT_100fad958,&DAT_100c2cbd8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar13 = (undefined8 *)((long)apuStack_130 + lVar2);
  HVar5.unknown = &DAT_100fad960;
  FUN_1000037f0(&DAT_100fad960,&DAT_100c2cbe0);
  local_110 = *(long *)(HVar5.unknown + -8);
  local_108 = HVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar11 = (long)puVar13 - extraout_x8_00;
  HVar5 = SwiftUI::HorizontalAlignment::get_center(HVar5);
  *puVar13 = HVar5.unknown;
  *(undefined8 *)((long)apuStack_130 + lVar2 + 8) = 0;
  *(undefined1 *)((long)local_120 + lVar2) = 1;
  puVar12 = &DAT_100fad968;
  FUN_1000037f0(&DAT_100fad968,&DAT_100c2cbe8);
  SVar6.unknown = (undefined *)unaff_x20;
  FUN_1000eafcc((long)puVar13 + (long)*(int *)(puVar12 + 0x2c));
  SVar6 = SwiftUI::Edge::Set::get_bottom(SVar6);
  uVar18 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar6.unknown);
  puVar1 = (undefined1 *)((long)puVar13 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar6.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar18;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  local_120[0].unknown = (undefined *)*unaff_x20;
  uVar18 = unaff_x20[1];
  puVar12 = &DAT_100c2cbf0;
  _swift_getKeyPath(&DAT_100c2cbf0);
  puVar14 = &DAT_100c2cc18;
  _swift_getKeyPath(&DAT_100c2cc18);
  local_120[1].unknown = (undefined *)uVar18;
  Combine::Published::_get_subscript(&local_a8,uVar18,puVar12,puVar14);
  _swift_release(puVar12);
  _swift_release(puVar14);
  puVar12 = local_a8;
  puVar14 = local_a0;
  uVar18 = uStack_80;
  uVar15 = local_88;
  puVar16 = local_98;
  puVar17 = local_90;
  if (local_a0 < 2) {
    FUN_1000eced8(local_a8,local_a0,local_98,local_90,local_88,uStack_80);
    puVar12 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    puVar17 = (undefined *)0x0;
    uVar15 = 0;
    uVar18 = 0;
  }
  puVar7 = &DAT_100fad970;
  local_e0 = puVar12;
  uStack_d8 = (ulong)puVar14;
  local_d0 = puVar16;
  uStack_c8 = puVar17;
  local_c0 = uVar15;
  uStack_b8 = uVar18;
  FUN_1000037f0(&DAT_100fad970,&DAT_100c2cc38);
  SwiftUI::Binding::constant(&local_a8,puVar7,puVar7);
  FUN_1000ecf18(puVar12,puVar14,puVar16,puVar17,uVar15,uVar18);
  FUN_1000ecf54();
  apuStack_130[1] = puVar12;
  FUN_1000ecfec();
  (extension_SwiftUI)::SwiftUI::View::_alert
            ((Binding<(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert___>_some>
              )&local_a8);
  FUN_100005808(&local_a8,&DAT_100fad998,&DAT_100c2cc48);
  FUN_100005808(puVar13,&DAT_100fad958,&DAT_100c2cbd8);
  FUN_1000f08dc(0);
  FUN_100003a00(&DAT_100fad0d8,FUN_1000f08dc,&TargetProtocolConformanceDescriptor_100c2d0b8);
  OVar3.unknown = local_120[1].unknown;
  WVar8 = SwiftUI::ObservedObject::_get_projectedValue(local_120[0]);
  dynamicMember.unknown = &DAT_100c2cc50;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar8.unknown);
  _swift_release(dynamicMember.unknown);
  uStack_d8 = unaff_x20[3];
  local_e0 = (undefined *)unaff_x20[2];
  local_d0 = CONCAT71(local_d0._1_7_,*(undefined1 *)(unaff_x20 + 4));
  puVar14 = &DAT_100eb67c0;
  _swift_allocObject(&DAT_100eb67c0,0x31,7);
  uVar18 = *unaff_x20;
  uVar19 = unaff_x20[3];
  uVar15 = unaff_x20[2];
  *(undefined8 *)(puVar14 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar14 + 0x10) = uVar18;
  *(undefined8 *)(puVar14 + 0x28) = uVar19;
  *(undefined8 *)(puVar14 + 0x20) = uVar15;
  puVar14[0x30] = *(undefined1 *)(unaff_x20 + 4);
  _swift_retain(OVar3.unknown);
  FUN_100011090(&local_e0,&local_a8,&DAT_100fad9a0,&DAT_100c2cc78);
  puVar16 = &DAT_100fad9a8;
  FUN_1000037f0(&DAT_100fad9a8,&DAT_100c2cc80);
  local_a0 = &DAT_100eb6ac0;
  local_98 = apuStack_130[1];
  ppuVar9 = &local_a8;
  local_a8 = puVar4;
  local_90 = puVar12;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert)__>_some>>_100eab550
             ,1);
  ppuVar10 = ppuVar9;
  FUN_1000ed040();
  *(undefined ***)(lVar11 + -0x18) = ppuVar9;
  *(undefined ***)(lVar11 + -0x10) = ppuVar10;
  *(undefined **)(lVar11 + -0x20) = puVar16;
  lVar2 = local_100;
  puVar4 = local_108;
  (extension_SwiftUI)::SwiftUI::View::_sheet(local_f8);
  _swift_release(uStack_f0);
  _swift_release(puVar14);
  _swift_release(local_f8.unknown);
  (**(code **)(local_110 + 8))(lVar11,puVar4);
  puVar4 = &DAT_100eb67e8;
  _swift_allocObject(&DAT_100eb67e8,0x20,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_1000edeb8;
  *(undefined **)(puVar4 + 0x18) = OVar3.unknown;
  puVar12 = &DAT_100fad9e8;
  FUN_1000037f0(&DAT_100fad9e8,&DAT_100c2cca0);
  puVar13 = (undefined8 *)(lVar2 + *(int *)(puVar12 + 0x24));
  *puVar13 = FUN_1000ed1f0;
  puVar13[1] = puVar4;
  puVar13[2] = 0;
  puVar13[3] = 0;
  _swift_retain(OVar3.unknown);
  return;
}



/* Address: 0x1000e935c | FUN_1000e935c */

void FUN_1000e935c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  MainActor *pMVar3;
  undefined *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_88 = param_2[1];
  local_90 = *param_2;
  uStack_78 = param_2[3];
  uStack_80 = param_2[2];
  uStack_68 = param_2[5];
  local_70 = param_2[4];
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x21,UVar5.unknown,puVar4);
  }
  uVar2 = uStack_68;
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  local_50 = param_2[2];
  FUN_10000ca28(&local_60,auStack_a0);
  FUN_10000ca28(&local_50,auStack_a0);
  _swift_retain(uVar2);
  FUN_1000e945c(param_1,&local_90);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000e945c | FUN_1000e945c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e9558 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000e945c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  Text TVar3;
  Button BVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined8 uVar8;
  long alStack_d0 [2];
  undefined *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  Text local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_98 = param_1;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100fadaa8;
  FUN_1000037f0(&DAT_100fadaa8,&DAT_100c2ce80);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)LVar1.unknown - extraout_x8_00;
  uVar8 = param_2[1];
  uStack_70 = *param_2;
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_68 = uVar8;
  FUN_1000e4ab0();
  _swift_bridgeObjectRetain(uVar8);
  BVar4.unknown = PTR___type_metadata_for_Swift_String_100eac208;
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6 = puVar2;
  TVar3 = SwiftUI::Text::_init();
  local_ac = SUB84(puVar6,0);
  uStack_78 = param_2[3];
  local_80 = param_2[2];
  uStack_88 = param_2[3];
  local_90 = param_2[2];
  local_b8 = param_5;
  local_a8 = puVar5;
  local_a0 = TVar3;
  _swift_bridgeObjectRetain(uStack_78);
  local_c0 = (undefined *)SwiftUI::Text::_init(TVar3.unknown,BVar4.unknown,puVar2);
  FUN_1001c2288(LVar1.unknown);
  TVar3 = SwiftUI::Text::init(LVar1);
  uVar8 = param_2[5];
  _swift_retain(uVar8);
  SwiftUI::Alert::Button::_default(TVar3,BVar4);
  _swift_release(uVar8);
  FUN_100016d74(TVar3.unknown,BVar4.unknown,puVar2);
  _swift_bridgeObjectRelease(param_5);
  BVar4 = SwiftUI::Alert::Button::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar4.unknown + -8) + 0x38))(lVar7,0,1,BVar4.unknown);
  *(long *)(lVar7 + -0x10) = lVar7;
  SwiftUI::Alert::_init(local_a0);
  FUN_10000caac(&uStack_70);
  FUN_10000caac(&local_80);
  _swift_release(uVar8);
  return;
}



/* Address: 0x1000e965c | FUN_1000e965c */

void FUN_1000e965c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  MainActor *pMVar3;
  undefined *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  HorizontalAlignment HVar7;
  Set SVar8;
  Alignment AVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteLicensingDirect/PaywallView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x22,UVar5.unknown,puVar4);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)pcVar6);
  *param_1 = HVar7.unknown;
  param_1[1] = 0x4030000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100fad9f0;
  FUN_1000037f0(&DAT_100fad9f0,&DAT_100c2cca8);
  SVar8.unknown = (undefined *)param_6;
  FUN_1000e9948((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  SVar8 = SwiftUI::Edge::Set::get_all(SVar8);
  uVar11 = 0x4034000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  AVar9.unknown = &DAT_100fad9d0;
  FUN_1000037f0(&DAT_100fad9d0,&DAT_100c2cc90);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar9.unknown + 0x24));
  *puVar1 = (char)SVar8.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar9);
  SwiftUI::_FrameLayout::_init((Alignment)0x4076800000000000);
  puVar4 = &DAT_100fad9c0;
  FUN_1000037f0(&DAT_100fad9c0,&DAT_100c2cc88);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  puVar2[1] = uStack_b8;
  *puVar2 = local_c0;
  puVar2[3] = uStack_a8;
  puVar2[2] = uStack_b0;
  puVar2[5] = uStack_98;
  puVar2[4] = local_a0;
  uStack_68 = param_6[1];
  local_70 = *param_6;
  uStack_88 = param_6[3];
  local_90 = param_6[2];
  local_80 = *(undefined1 *)(param_6 + 4);
  puVar4 = &DAT_100eb6810;
  _swift_allocObject(&DAT_100eb6810,0x31,7);
  uVar11 = *param_6;
  uVar13 = param_6[3];
  uVar12 = param_6[2];
  *(undefined8 *)(puVar4 + 0x18) = param_6[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar11;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  puVar4[0x30] = *(undefined1 *)(param_6 + 4);
  FUN_100011090(&local_70,auStack_d8,&DAT_100fad9f8,&DAT_100c2ccb0);
  FUN_100011090(&local_90,auStack_d8,&DAT_100fad9a0,&DAT_100c2cc78);
  _swift_release(pMVar3);
  puVar10 = &DAT_100fad9a8;
  FUN_1000037f0(&DAT_100fad9a8,&DAT_100c2cc80);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  *param_1 = FUN_1000ed1f8;
  param_1[1] = puVar4;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Address: 0x1000e9894 | FUN_1000e9894 */

void FUN_1000e9894(code *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x23,UVar4.unknown,puVar3);
  }
  (*param_1)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000e9948 | FUN_1000e9948 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000e9d98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000e9948(undefined8 *param_1,Text param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,Weight param_6)

{
  ObservedObject OVar1;
  LocalizedStringResource localized;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  void *pvVar8;
  char *pcVar9;
  LocalizedStringResource LVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  Text TVar14;
  Font FVar15;
  Text TVar16;
  Wrapper WVar17;
  Wrapper dynamicMember;
  Font FVar18;
  FocusState_conflict FVar19;
  Binding BVar20;
  char **ppcVar21;
  VerticalAlignment VVar22;
  Text TVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined1 *puVar26;
  long extraout_x8;
  undefined8 *puVar27;
  long extraout_x8_00;
  long lVar28;
  long extraout_x8_01;
  undefined *puVar29;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar30;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  String SVar35;
  undefined8 auStack_2c0 [4];
  LocalizedStringResource aLStack_2a0 [2];
  undefined *local_290;
  long local_288;
  undefined *local_280;
  long local_278;
  long local_270;
  undefined *local_268;
  long local_260;
  undefined *local_258;
  undefined *puStack_250;
  char *local_248;
  undefined *local_240;
  long local_238;
  undefined *local_230;
  MainActor *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined4 local_204;
  undefined8 local_200;
  long local_1f8;
  long local_1f0;
  undefined *local_1e8;
  long local_1e0;
  long local_1d8;
  undefined1 auStack_1d0 [64];
  char *local_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined2 uStack_160;
  undefined8 uStack_15e;
  char *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 local_118;
  String local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined2 local_d8;
  char *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined8 uStack_9e;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  puVar29 = &DAT_100fada00;
  local_220 = param_3;
  local_210 = param_1;
  FUN_1000037f0(&DAT_100fada00,&DAT_100c2ccb8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar29 + -8) + 0x40));
  lVar28 = (long)aLStack_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1e0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar27 = (undefined8 *)(lVar28 - extraout_x12);
  local_218 = puVar27;
  local_268 = (undefined *)SwiftUI::RoundedBorderTextFieldStyle::typeMetadataAccessor();
  local_270 = *(long *)(local_268 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_270 + 0x40));
  lVar28 = (long)puVar27 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar29 = &DAT_100fada08;
  local_278 = lVar28;
  FUN_1000037f0(&DAT_100fada08,&DAT_100c2ccc0);
  local_288 = *(long *)(puVar29 + -8);
  local_280 = puVar29;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_288 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar29 = (undefined *)(lVar28 - extraout_x8_01);
  pcVar9 = &DAT_100fada10;
  local_290 = puVar29;
  FUN_1000037f0(&DAT_100fada10,&DAT_100c2ccc8);
  local_248 = pcVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(pcVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar28 = (long)puVar29 - extraout_x8_02;
  puVar29 = &DAT_100fada18;
  local_260 = lVar28;
  FUN_1000037f0(&DAT_100fada18,&DAT_100c2ccd0);
  local_238 = *(long *)(puVar29 + -8);
  local_230 = puVar29;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_238 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar30 = (undefined *)(lVar28 - extraout_x8_03);
  puVar29 = &DAT_100fada20;
  local_240 = puVar30;
  FUN_1000037f0(&DAT_100fada20,&DAT_100c2ccd8);
  local_1f8 = *(long *)(puVar29 + -8);
  local_1e8 = puVar29;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1f8 + 0x40));
  lVar28 = (long)puVar30 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_1f0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = lVar28 - extraout_x12_00;
  local_1d8 = lVar28;
  LVar10 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar10.unknown + -8) + 0x40));
  LVar10.unknown = (undefined *)(lVar28 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar30 = PTR_typeMetadataAccessor_100eaec10;
  pMVar11 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar29 = &DAT_100fad468;
  puVar25 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fad468,puVar30,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_228 = pMVar11;
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  puVar30 = puVar29;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    puVar30 = (undefined *)0x26;
    puVar25 = &DAT_00000001;
    param_6.unknown = (undefined *)0x27;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x27,UVar12.unknown,puVar29);
  }
  FUN_1001c84d4(LVar10.unknown);
  TVar14 = SwiftUI::Text::init(LVar10);
  FVar15 = SwiftUI::Font::get_title3(TVar14.unknown);
  TVar23 = TVar14;
  puVar29 = puVar30;
  puVar26 = puVar25;
  TVar16 = SwiftUI::Text::_font(FVar15.unknown);
  aLStack_2a0[1].unknown = LVar10.unknown;
  _swift_release(FVar15.unknown);
  FUN_100016d74(TVar14.unknown,puVar30,puVar25);
  _swift_bridgeObjectRelease();
  SwiftUI::Font::Weight::get_semibold(param_6);
  uVar24 = 0;
  TVar14 = TVar16;
  puVar30 = TVar23.unknown;
  puStack_250 = (undefined *)SwiftUI::Text::_fontWeight(param_2);
  local_204 = SUB84(TVar14.unknown,0);
  local_258 = puVar30;
  local_200 = uVar24;
  FUN_100016d74(TVar16.unknown,TVar23.unknown,puVar29);
  _swift_bridgeObjectRelease(puVar26);
  localized.unknown = aLStack_2a0[1].unknown;
  FUN_1001c87d4(aLStack_2a0[1].unknown);
  SVar35 = (extension_Foundation)::Swift::String::init(localized);
  puVar4 = local_220;
  OVar1.unknown = (undefined *)*local_220;
  uVar24 = local_220[1];
  FUN_1000f08dc(0);
  FUN_100003a00(&DAT_100fad0d8,FUN_1000f08dc,&TargetProtocolConformanceDescriptor_100c2d0b8);
  WVar17 = SwiftUI::ObservedObject::_get_projectedValue(OVar1);
  dynamicMember.unknown = &DAT_100c2cce0;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar17.unknown);
  _swift_release();
  uVar33 = uStack_b8;
  uVar32 = local_c0;
  local_110 = SVar35;
  FUN_1000e4ab0();
  *(undefined **)(LVar10.unknown + -0x10) = dynamicMember.unknown;
  *(undefined8 *)(LVar10.unknown + -0x20) = 0;
  *(undefined **)(LVar10.unknown + -0x18) = PTR___type_metadata_for_Swift_String_100eac208;
  FVar15.unknown = local_290;
  (extension_SwiftUI)::SwiftUI::TextField::_init
            (local_290,dynamicMember.unknown,local_d0,puStack_c8,uVar32,uVar33,FUN_100004520,0,
             FUN_100004520);
  lVar28 = local_278;
  SwiftUI::RoundedBorderTextFieldStyle::init();
  puVar29 = &DAT_100fada28;
  FUN_100016eac(&DAT_100fada28,&DAT_100fada08,&DAT_100c2ccc0,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_100eabb10);
  puVar30 = &DAT_100fada30;
  FUN_100003a00(&DAT_100fada30,PTR_typeMetadataAccessor_100eab0a8,
                PTR_SwiftUI__SwiftUI__RoundedBorderTextFieldStyle_>SwiftUI__TextFieldStyle_100eab098
               );
  lVar3 = local_260;
  puVar2 = local_268;
  puVar25 = local_280;
  (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
            (local_260,lVar28,local_280,local_268,puVar29,puVar30);
  (**(code **)(local_270 + 8))(lVar28,puVar2);
  (**(code **)(local_288 + 8))(FVar15.unknown,puVar25);
  FVar15 = SwiftUI::Font::get_body(FVar15);
  FVar18 = SwiftUI::Font::monospaced(FVar15);
  _swift_release(FVar15.unknown);
  puVar29 = &DAT_100c2cd08;
  _swift_getKeyPath();
  pcVar9 = local_248;
  puVar27 = (undefined8 *)(lVar3 + *(int *)(local_248 + 0x24));
  *puVar27 = puVar29;
  puVar27[1] = FVar18.unknown;
  uStack_88 = puVar4[3];
  local_90 = puVar4[2];
  local_80 = *(undefined1 *)(puVar4 + 4);
  puStack_c8 = (undefined *)puVar4[3];
  local_d0 = (char *)puVar4[2];
  local_c0 = CONCAT71(local_c0._1_7_,*(undefined1 *)(puVar4 + 4));
  FVar19.unknown = &DAT_100fad9a0;
  FUN_1000037f0(&DAT_100fad9a0,&DAT_100c2cc78);
  BVar20 = SwiftUI::FocusState::_get_projectedValue(FVar19);
  pcVar7 = local_110.str;
  pvVar8 = local_110.bridgeObject;
  FUN_1000ed258();
  FVar15.unknown = local_240;
  (extension_SwiftUI)::SwiftUI::View::_focused((Binding)pcVar7);
  _swift_release(pvVar8);
  _swift_release(pcVar7);
  FUN_100005808(lVar3,&DAT_100fada10,&DAT_100c2ccc8);
  puVar29 = &DAT_100c2cce0;
  _swift_getKeyPath(&DAT_100c2cce0);
  puVar30 = &DAT_100c2cd40;
  _swift_getKeyPath(&DAT_100c2cd40);
  Combine::Published::_get_subscript(&local_d0,uVar24,puVar29,puVar30);
  _swift_release(puVar29);
  _swift_release(puVar30);
  puVar25 = puStack_c8;
  local_110.str = local_d0;
  local_110.bridgeObject = puStack_c8;
  puVar29 = &DAT_100eb6838;
  _swift_allocObject(&DAT_100eb6838,0x31,7);
  uVar32 = *puVar4;
  uVar34 = puVar4[3];
  uVar33 = puVar4[2];
  *(undefined8 *)(puVar29 + 0x18) = puVar4[1];
  *(undefined8 *)(puVar29 + 0x10) = uVar32;
  *(undefined8 *)(puVar29 + 0x28) = uVar34;
  *(undefined8 *)(puVar29 + 0x20) = uVar33;
  puVar29[0x30] = *(undefined1 *)(puVar4 + 4);
  _swift_retain(uVar24);
  FUN_100011090(&local_90,&local_d0,&DAT_100fad9a0,&DAT_100c2cc78);
  local_d0 = pcVar9;
  ppcVar21 = &local_d0;
  puStack_c8 = BVar20.unknown;
  _swift_getOpaqueTypeConformance2
            (ppcVar21,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focused(SwiftUI_FocusState<Swift_Bool>_Binding)__>_some>>_100eab5c8
             ,1);
  puVar30 = local_230;
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_1d8,&local_110,0,FUN_1000ed3b0,puVar29,local_230,
             PTR___type_metadata_for_Swift_String_100eac208,ppcVar21,
             PTR___protocol_witness_table_for_Swift_String___Swift_Equatable_in_Swift_100eac230);
  _swift_bridgeObjectRelease(puVar25);
  _swift_release(puVar29);
  (**(code **)(local_238 + 8))(FVar15.unknown,puVar30);
  FUN_1000ea3a8(&local_d0);
  FVar15 = SwiftUI::Font::get_callout(FVar15);
  uVar24 = local_c0;
  puVar30 = puStack_c8;
  pcVar9 = local_d0;
  puVar29 = &DAT_100c2cd08;
  _swift_getKeyPath();
  local_150 = pcVar9;
  puStack_148 = puVar30;
  local_140 = uVar24;
  uStack_138 = uStack_b8;
  local_130 = (undefined1)local_b0;
  uStack_128 = SUB82(puVar29,0);
  uStack_126 = (undefined6)((ulong)puVar29 >> 0x10);
  uStack_120 = SUB82(FVar15.unknown,0);
  uStack_11e = (undefined6)((ulong)FVar15.unknown >> 0x10);
  local_118 = 0x100;
  local_110.bridgeObject = puVar30;
  local_110.str = pcVar9;
  local_100 = uVar24;
  uStack_f8 = uStack_b8;
  local_f0 = (undefined1)local_b0;
  local_d8 = 0x100;
  local_e8 = puVar29;
  puStack_e0 = FVar15.unknown;
  FUN_100011090(&local_150,&local_d0,&DAT_100fada50,&DAT_100c2cd60);
  VVar22.unknown = (undefined *)&local_110;
  FUN_100005808(VVar22.unknown,&DAT_100fada50,&DAT_100c2cd60);
  VVar22 = SwiftUI::VerticalAlignment::get_center(VVar22);
  puVar5 = local_218;
  *local_218 = VVar22.unknown;
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 2) = 1;
  puVar29 = &DAT_100fada58;
  FUN_1000037f0(&DAT_100fada58,&DAT_100c2cd68);
  FUN_1000ea5d8((long)puVar5 + (long)*(int *)(puVar29 + 0x2c),puVar4);
  lVar28 = local_1f0;
  pcVar31 = *(code **)(local_1f8 + 0x10);
  (*pcVar31)(local_1f0,local_1d8,local_1e8);
  puStack_188 = puStack_148;
  local_190 = local_150;
  uStack_178 = uStack_138;
  uStack_180 = local_140;
  local_170 = CONCAT71(uStack_12f,local_130);
  uStack_168 = uStack_128;
  uStack_15e = CONCAT26(local_118,uStack_11e);
  uStack_166 = uStack_126;
  uStack_160 = uStack_120;
  FUN_100011090(puVar5,local_1e0,&DAT_100fada00,&DAT_100c2ccb8);
  uVar24 = local_200;
  uVar6 = local_204;
  puVar4 = local_210;
  puVar25 = puStack_250;
  puVar30 = local_258;
  *local_210 = puStack_250;
  local_210[1] = local_200;
  *(char *)(local_210 + 2) = (char)local_204;
  local_210[3] = local_258;
  puVar29 = &DAT_100fada60;
  FUN_1000037f0(&DAT_100fada60,&DAT_100c2cd70);
  puVar2 = local_1e8;
  (*pcVar31)((long)puVar4 + (long)*(int *)(puVar29 + 0x30),lVar28,local_1e8);
  lVar28 = local_1e0;
  puVar27 = (undefined8 *)((long)puVar4 + (long)*(int *)(puVar29 + 0x40));
  puStack_c8 = puStack_188;
  local_d0 = local_190;
  uStack_b8 = uStack_178;
  local_c0 = uStack_180;
  uStack_a8 = uStack_168;
  local_b0 = local_170;
  uStack_9e = uStack_15e;
  uStack_a6 = uStack_166;
  uStack_a0 = uStack_160;
  puVar27[1] = puStack_188;
  *puVar27 = local_190;
  puVar27[3] = uStack_178;
  puVar27[2] = uStack_180;
  puVar27[5] = CONCAT62(uStack_166,uStack_168);
  puVar27[4] = local_170;
  *(undefined8 *)((long)puVar27 + 0x32) = uStack_15e;
  *(ulong *)((long)puVar27 + 0x2a) = CONCAT26(uStack_160,uStack_166);
  FUN_100011090(local_1e0,(long)puVar4 + (long)*(int *)(puVar29 + 0x50),&DAT_100fada00,
                &DAT_100c2ccb8);
  FUN_100016d5c(puVar25,uVar24,uVar6);
  _swift_bridgeObjectRetain(puVar30);
  FUN_100011090(&local_d0,auStack_1d0,&DAT_100fada50,&DAT_100c2cd60);
  FUN_100005808(puVar5,&DAT_100fada00,&DAT_100c2ccb8);
  pcVar31 = *(code **)(local_1f8 + 8);
  (*pcVar31)(local_1d8,puVar2);
  FUN_100005808(lVar28,&DAT_100fada00,&DAT_100c2ccb8);
  FUN_100005808(&local_190,&DAT_100fada50,&DAT_100c2cd60);
  (*pcVar31)(local_1f0,puVar2);
  FUN_100016d74(puVar25,local_200,local_204);
  _swift_release(local_228);
  _swift_bridgeObjectRelease(puVar30);
  return;
}



/* Address: 0x1000ea2bc | FUN_1000ea2bc */

void FUN_1000ea2bc(long param_1)

{
  MainActor *pMVar1;
  undefined *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x30,UVar3.unknown,puVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar2 = &DAT_100c2ce38;
  _swift_getKeyPath(&DAT_100c2ce38);
  puVar5 = &DAT_100c2ce60;
  _swift_getKeyPath(&DAT_100c2ce60);
  local_40 = 0;
  uStack_38 = 0;
  _swift_retain(uVar6);
  Combine::Published::_set_subscript((Published *)pMVar1,&local_40,uVar6,puVar2,puVar5);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x1000ea3a8 | FUN_1000ea3a8 */

void FUN_1000ea3a8(undefined8 *param_1)

{
  bool bVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  undefined *puVar4;
  Text TVar5;
  Color CVar6;
  Text TVar7;
  HierarchicalShapeStyle HVar8;
  undefined *puVar9;
  Text TVar10;
  undefined *puVar11;
  undefined8 in_x3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar12;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined *puStack_b0;
  ulong local_a8;
  undefined *puStack_a0;
  undefined1 local_98;
  undefined *local_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  uVar12 = *(undefined8 *)(unaff_x20 + 8);
  puVar3 = &DAT_100c2ce38;
  _swift_getKeyPath();
  puVar4 = &DAT_100c2ce60;
  _swift_getKeyPath();
  puVar9 = puVar3;
  puVar11 = puVar4;
  Combine::Published::_get_subscript(&local_90,uVar12);
  _swift_release(puVar3);
  _swift_release();
  bVar1 = lStack_88 == 0;
  if (bVar1) {
    FUN_1001c8654(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    TVar5 = SwiftUI::Text::init((LocalizedStringResource)
                                (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    HVar8 = SwiftUI::HierarchicalShapeStyle::get_secondary(TVar5.unknown);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)HVar8.unknown);
    FUN_1000ed43c();
    TVar10 = TVar5;
    puVar3 = puVar9;
    puVar4 = puVar11;
    TVar7 = SwiftUI::Text::_foregroundStyle();
    FUN_100016d74(TVar5.unknown,puVar9,puVar11);
    _swift_bridgeObjectRelease(in_x3);
    local_b8 = TVar7.unknown;
    puStack_b0 = TVar10.unknown;
    puStack_a0 = puVar4;
  }
  else {
    FUN_1000e4ab0();
    puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar5 = SwiftUI::Text::_init();
    CVar6 = SwiftUI::Color::get_red(TVar5.unknown);
    local_90 = CVar6.unknown;
    FUN_1000ed47c();
    TVar10 = TVar5;
    puVar3 = puVar9;
    puVar11 = puVar4;
    TVar7 = SwiftUI::Text::_foregroundStyle();
    FUN_100016d74(TVar5.unknown,puVar9,puVar4);
    _swift_release(CVar6.unknown);
    _swift_bridgeObjectRelease(in_x3);
    local_b8 = TVar7.unknown;
    puStack_b0 = TVar10.unknown;
    puStack_a0 = puVar11;
  }
  local_a8 = (ulong)puVar3 & 0xff;
  local_98 = bVar1;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x58));
  param_1[1] = lStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  *(undefined1 *)(param_1 + 4) = local_70;
  return;
}



/* Address: 0x1000ea5d8 | FUN_1000ea5d8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ea8a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ea5d8(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  void *pvVar10;
  undefined *puVar11;
  KeyboardShortcut KVar12;
  LocalizedStringResource LVar13;
  MainActor *pMVar14;
  UnownedSerialExecutor UVar15;
  UnownedSerialExecutor UVar16;
  Button<Text> BVar17;
  ButtonRole BVar18;
  Button<undefined> BVar19;
  undefined *puVar20;
  long extraout_x8;
  long lVar21;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 uVar22;
  KeyboardShortcut KVar23;
  long lVar24;
  code *pcVar25;
  undefined8 uVar26;
  code *pcVar27;
  String SVar28;
  code *local_e0;
  MainActor *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  String local_70;
  
  puVar11 = &DAT_100fada68;
  local_b8 = param_1;
  FUN_1000037f0(&DAT_100fada68,&DAT_100c2cd78);
  local_d0 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar21 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar21 - extraout_x12;
  local_80 = lVar21;
  KVar12 = SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  lVar24 = *(long *)(KVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
  KVar23.unknown = (undefined *)(lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fada70;
  FUN_1000037f0(&DAT_100fada70,&DAT_100c2cd80);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100fada78;
  FUN_1000037f0(&DAT_100fada78,&DAT_100c2cd88);
  local_88 = *(long *)(puVar11 + -8);
  local_c0 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar21 = ((long)KVar23.unknown - extraout_x8_01) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar21 - extraout_x12_00;
  local_90 = lVar21;
  LVar13 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar13.unknown + -8) + 0x40));
  LVar13.unknown = (undefined *)(lVar21 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fada80;
  FUN_1000037f0(&DAT_100fada80,&DAT_100c2cd90);
  local_a0 = *(long *)(puVar11 + -8);
  local_98 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar21 = (long)LVar13.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_78 = lVar21 - extraout_x12_01;
  pMVar14 = Swift::MainActor::typeMetadataAccessor();
  puVar20 = PTR_typeMetadataAccessor_100eaec10;
  pMVar14 = Swift::MainActor::get_shared(pMVar14,pMVar14);
  puVar11 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar20,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_d8 = pMVar14;
  UVar15 = Swift::Actor::get_unownedExecutor();
  UVar16 = UVar15;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar16.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x36,UVar15.unknown,puVar11);
  }
  FUN_1001c81d4(LVar13.unknown);
  SVar28 = (extension_Foundation)::Swift::String::init(LVar13);
  uVar26 = *(undefined8 *)(param_2 + 8);
  local_70 = SVar28;
  FUN_1000e4ab0();
  _swift_retain(uVar26);
  BVar17 = (extension_SwiftUI)::SwiftUI::Button::_init
                     (local_78,SVar28.str,FUN_1000ed3b8,uVar26,
                      PTR___type_metadata_for_Swift_String_100eac208,SVar28.str);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)BVar17.unknown);
  BVar18 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar18.unknown + -8) + 0x38))
            ((long)KVar23.unknown - extraout_x8_01,0,1,BVar18.unknown);
  _swift_retain(uVar26);
  lVar21 = local_a8;
  BVar19 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_cancelAction((KeyboardShortcut)BVar19.unknown);
  FUN_100016eac(&DAT_100fada88,&DAT_100fada80,&DAT_100c2cd90,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar11 = local_98;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar23);
  pcVar25 = *(code **)(lVar24 + 8);
  (*pcVar25)(KVar23.unknown,KVar12.unknown);
  pcVar27 = *(code **)(local_a0 + 8);
  (*pcVar27)(lVar21,puVar11);
  _swift_retain(uVar26);
  BVar19 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_defaultAction((KeyboardShortcut)BVar19.unknown);
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar23);
  (*pcVar25)(KVar23.unknown,KVar12.unknown);
  local_e0 = pcVar27;
  (*pcVar27)(lVar21,puVar11);
  puVar11 = &DAT_100c2cce0;
  _swift_getKeyPath(&DAT_100c2cce0);
  puVar20 = &DAT_100c2cd40;
  _swift_getKeyPath(&DAT_100c2cd40);
  Combine::Published::_get_subscript(&local_70,uVar26,puVar11,puVar20);
  _swift_release(puVar11);
  _swift_release(puVar20);
  pcVar9 = local_70.str;
  pvVar10 = local_70.bridgeObject;
  _swift_bridgeObjectRelease(local_70.bridgeObject);
  uVar2 = (ulong)pcVar9 & 0xffffffffffff;
  if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)pvVar10 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    uVar22 = 1;
  }
  else {
    puVar11 = &DAT_100c2cd98;
    _swift_getKeyPath(&DAT_100c2cd98);
    puVar20 = &DAT_100c2cdc0;
    _swift_getKeyPath(&DAT_100c2cdc0);
    Combine::Published::_get_subscript(&local_70,uVar26,puVar11,puVar20);
    _swift_release(puVar11);
    _swift_release(puVar20);
    uVar22 = local_70.str._0_1_;
  }
  puVar11 = &DAT_100c2cde0;
  _swift_getKeyPath();
  puVar20 = &DAT_100eb6860;
  _swift_allocObject(&DAT_100eb6860,0x11,7);
  lVar8 = local_80;
  puVar6 = local_98;
  lVar5 = local_a8;
  puVar20[0x10] = uVar22;
  puVar1 = (undefined8 *)(local_80 + *(int *)(local_d0 + 0x24));
  *puVar1 = puVar11;
  puVar1[1] = FUN_100062b00;
  puVar1[2] = puVar20;
  pcVar25 = *(code **)(local_a0 + 0x10);
  (*pcVar25)(local_a8,local_78,local_98);
  lVar7 = local_90;
  puVar20 = local_c0;
  lVar21 = local_c8;
  pcVar27 = *(code **)(local_88 + 0x10);
  (*pcVar27)(local_c8,local_90,local_c0);
  lVar4 = local_b0;
  FUN_100011090(lVar8,local_b0,&DAT_100fada68,&DAT_100c2cd78);
  lVar24 = local_b8;
  (*pcVar25)(local_b8,lVar5,puVar6);
  puVar11 = &DAT_100fada90;
  FUN_1000037f0(&DAT_100fada90,&DAT_100c2ce10);
  iVar3 = *(int *)(puVar11 + 0x30);
  *(undefined8 *)(lVar24 + iVar3) = 0;
  *(undefined1 *)((undefined8 *)(lVar24 + iVar3) + 1) = 1;
  (*pcVar27)(lVar24 + *(int *)(puVar11 + 0x40),lVar21,puVar20);
  FUN_100011090(lVar4,lVar24 + *(int *)(puVar11 + 0x50),&DAT_100fada68,&DAT_100c2cd78);
  FUN_100005808(lVar8,&DAT_100fada68,&DAT_100c2cd78);
  pcVar27 = *(code **)(local_88 + 8);
  (*pcVar27)(lVar7,puVar20);
  pcVar25 = local_e0;
  (*local_e0)(local_78,puVar6);
  FUN_100005808(lVar4,&DAT_100fada68,&DAT_100c2cd78);
  (*pcVar27)(lVar21,puVar20);
  (*pcVar25)(lVar5,puVar6);
  _swift_release(local_d8);
  return;
}



/* Address: 0x1000eac3c | FUN_1000eac3c */

void FUN_1000eac3c(long param_1)

{
  URL UVar1;
  URL UVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  param_1 = param_1 + _TtC20PasteLicensingDirect16PaywallViewModel::router;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x28);
  FUN_100004640(param_1,uVar4);
  if (DAT_100fad4e8 != -1) {
    _swift_once(&DAT_100fad4e8,FUN_1000e5930);
  }
  UVar2 = UVar1;
  FUN_1000cd990(UVar1.unknown,&DAT_101057168);
  (**(code **)(lVar6 + 0x10))(puVar3,UVar2.unknown,UVar1.unknown);
  (**(code **)(lVar5 + 8))(puVar3,uVar4,lVar5);
  (**(code **)(lVar6 + 8))(puVar3,UVar1.unknown);
  return;
}



/* Address: 0x1000ead34 | FUN_1000ead34 */

void FUN_1000ead34(undefined8 param_1)

{
  Published *pPVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  pPVar1 = (Published *)&DAT_100c2cc50;
  _swift_getKeyPath(&DAT_100c2cc50);
  puVar2 = &DAT_100c2ce18;
  _swift_getKeyPath(&DAT_100c2ce18);
  local_31 = 0;
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar1,&local_31,param_1,pPVar1,puVar2);
  return;
}



/* Address: 0x1000eada0 | FUN_1000eada0 */

void FUN_1000eada0(void)

{
  FUN_1000eadc0(0x3b,FUN_1001c0788);
  return;
}



/* Address: 0x1000eadb0 | FUN_1000eadb0 */

void FUN_1000eadb0(void)

{
  FUN_1000eadc0(0x40,FUN_1001c7d54);
  return;
}



/* Address: 0x1000eadc0 | FUN_1000eadc0 */

void FUN_1000eadc0(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  Text TVar5;
  undefined *puVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long extraout_x8;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar6 = &DAT_100fad468;
  puVar8 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fad468,puVar1);
  uVar7 = SUB81(puVar8,0);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar6 = (undefined *)0x26;
    uVar7 = 1;
    _swift_task_reportUnexpectedExecutor("PasteLicensingDirect/PaywallView.swift");
    param_5 = param_2;
  }
  (*param_3)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  TVar5 = SwiftUI::Text::init((LocalizedStringResource)
                              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)
                              ));
  _swift_release(pMVar3);
  *param_1 = TVar5.unknown;
  param_1[1] = puVar6;
  *(undefined1 *)(param_1 + 2) = uVar7;
  param_1[3] = param_5;
  return;
}



/* Address: 0x1000eaedc | FUN_1000eaedc */

void FUN_1000eaedc(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x49,UVar4.unknown,puVar3);
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  local_50 = *(undefined1 *)(param_1 + 0x20);
  local_61 = 1;
  puVar3 = &DAT_100fad9a0;
  FUN_1000037f0(&DAT_100fad9a0,&DAT_100c2cc78);
  SwiftUI::FocusState::set_wrappedValue((FocusState *)&local_60,&local_61,puVar3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000eafcc | FUN_1000eafcc */

void FUN_1000eafcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  HorizontalAlignment HVar9;
  VerticalAlignment VVar10;
  Set SVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined *apuStack_80 [2];
  MainActor *local_70 [2];
  
  puVar5 = &DAT_100fadab0;
  FUN_1000037f0(&DAT_100fadab0,&DAT_100c2ce88);
  apuStack_80[1] = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  SVar11.unknown = (undefined *)((long)apuStack_80 + lVar3);
  pMVar6 = (MainActor *)&DAT_100fadab8;
  FUN_1000037f0(&DAT_100fadab8,&DAT_100c2ce90);
  local_70[0] = pMVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(pMVar6 + -8) + 0x40));
  lVar12 = (long)SVar11.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar12 - extraout_x12;
  puVar5 = &DAT_100fadac0;
  FUN_1000037f0(&DAT_100fadac0,&DAT_100c2ce98);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar14 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = (undefined8 *)(lVar14 - extraout_x12_00);
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar5 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_70[1] = pMVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "PasteLicensingDirect/PaywallView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x57,UVar7.unknown,puVar5);
  }
  HVar9 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar8);
  *puVar15 = HVar9.unknown;
  puVar15[1] = 0x4038000000000000;
  *(undefined1 *)(puVar15 + 2) = 0;
  puVar5 = &DAT_100fadac8;
  FUN_1000037f0(&DAT_100fadac8,&DAT_100c2cea0);
  VVar10.unknown = param_6;
  FUN_1000eb378((long)puVar15 + (long)*(int *)(puVar5 + 0x2c));
  VVar10 = SwiftUI::VerticalAlignment::get_center(VVar10);
  *(undefined **)SVar11.unknown = VVar10.unknown;
  *(undefined8 *)((long)apuStack_80 + lVar3 + 8) = 0;
  *(undefined1 *)((long)local_70 + lVar3) = 0;
  puVar5 = &DAT_100fadad0;
  FUN_1000037f0(&DAT_100fadad0,&DAT_100c2cea8);
  FUN_1000ec520((long)SVar11.unknown + (long)*(int *)(puVar5 + 0x2c),param_6);
  FUN_100016eac(&DAT_100fadad8,&DAT_100fadab0,&DAT_100c2ce88,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  FUN_1000ed4bc();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar13);
  FUN_100005808(SVar11.unknown,&DAT_100fadab0,&DAT_100c2ce88);
  SVar11 = SwiftUI::Edge::Set::get_horizontal(SVar11);
  uVar16 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar11.unknown);
  puVar1 = (undefined1 *)(lVar13 + *(int *)(local_70[0] + 0x24));
  *puVar1 = (char)SVar11.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar16;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_100011090(puVar15,lVar14,&DAT_100fadac0,&DAT_100c2ce98);
  FUN_100011090(lVar13,lVar12,&DAT_100fadab8,&DAT_100c2ce90);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar5 = &DAT_100fadae8;
  FUN_1000037f0(&DAT_100fadae8,&DAT_100c2ceb0);
  FUN_100011090(lVar14,(long)param_1 + (long)*(int *)(puVar5 + 0x30),&DAT_100fadac0,&DAT_100c2ce98);
  iVar2 = *(int *)(puVar5 + 0x40);
  *(undefined8 *)((long)param_1 + (long)iVar2) = 0;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = 1;
  FUN_100011090(lVar12,(long)param_1 + (long)*(int *)(puVar5 + 0x50),&DAT_100fadab8,&DAT_100c2ce90);
  FUN_100005808(lVar13,&DAT_100fadab8,&DAT_100c2ce90);
  FUN_100005808(puVar15,&DAT_100fadac0,&DAT_100c2ce98);
  FUN_100005808(lVar12,&DAT_100fadab8,&DAT_100c2ce90);
  FUN_100005808(lVar14,&DAT_100fadac0,&DAT_100c2ce98);
  _swift_release(local_70[1]);
  return;
}



/* Address: 0x1000eb378 | FUN_1000eb378 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000eb378(undefined8 *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  HorizontalAlignment HVar8;
  Alignment AVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x12;
  String SVar11;
  undefined *apuStack_3f0 [4];
  undefined8 *local_3d0;
  MainActor *local_3c8;
  long local_3c0;
  undefined1 auStack_3b8 [104];
  undefined *local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined *puStack_2f8;
  undefined1 local_2f0;
  undefined1 local_2e0 [64];
  undefined *local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined7 local_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 local_27f;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 local_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 local_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined *local_248;
  undefined8 uStack_240;
  undefined1 local_238;
  undefined8 local_237;
  undefined8 uStack_22f;
  undefined8 local_227;
  undefined8 uStack_21f;
  undefined8 local_217;
  undefined8 uStack_20f;
  undefined8 local_207;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined *local_1f0;
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
  undefined *puStack_198;
  undefined1 local_190;
  undefined7 uStack_180;
  undefined1 local_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 local_169;
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
  undefined1 uStack_139;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *local_128;
  undefined1 local_120;
  undefined *local_110;
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
  undefined *puStack_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar4 = &DAT_100fadb00;
  FUN_1000037f0(&DAT_100fadb00,&DAT_100c2cec8);
  apuStack_3f0[3] = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar10 = (long)apuStack_3f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_3c0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_3d0 = (undefined8 *)(lVar10 - extraout_x12);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar4 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_3c8 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x5a,UVar6.unknown,puVar4);
  }
  if (DAT_100fad0b0 != -1) {
    _swift_once(&DAT_100fad0b0,FUN_1000db474);
  }
  SVar11.bridgeObject = (void *)0xee006c6c61777961;
  SVar11.str = (char *)0x702d746365726964;
  apuStack_3f0[2] = (undefined *)SwiftUI::Image::_init(SVar11);
  HVar8 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)apuStack_3f0[2]);
  FUN_1000eb820(local_2e0,param_2);
  uStack_161 = (undefined1)local_2e0._24_8_;
  uStack_160 = SUB87(local_2e0._24_8_,1);
  local_169 = (undefined1)local_2e0._16_8_;
  uStack_168 = SUB87(local_2e0._16_8_,1);
  uStack_171 = (undefined1)local_2e0._8_8_;
  uStack_170 = SUB87(local_2e0._8_8_,1);
  local_179 = (undefined1)local_2e0._0_8_;
  uStack_178 = SUB87(local_2e0._0_8_,1);
  uStack_151 = (undefined1)local_2e0._40_8_;
  uStack_150 = SUB87(local_2e0._40_8_,1);
  local_159 = (undefined1)local_2e0._32_8_;
  uStack_158 = SUB87(local_2e0._32_8_,1);
  uStack_141 = (undefined1)local_2e0._56_8_;
  uStack_140 = SUB87(local_2e0._56_8_,1);
  local_149 = (undefined1)local_2e0._48_8_;
  uStack_148 = SUB87(local_2e0._48_8_,1);
  uStack_298 = 0x4020000000000000;
  local_290 = 0;
  uStack_277 = uStack_168;
  uStack_270 = uStack_161;
  local_27f = uStack_170;
  uStack_278 = local_169;
  uStack_267 = uStack_158;
  uStack_260 = uStack_151;
  local_26f = uStack_160;
  uStack_268 = local_159;
  uStack_257 = uStack_148;
  local_25f = uStack_150;
  uStack_258 = local_149;
  uStack_287 = uStack_178;
  uStack_280 = uStack_171;
  local_28f = uStack_180;
  uStack_288 = local_179;
  puVar4 = &DAT_100c2ced0;
  apuStack_3f0[1] = param_2;
  local_2a0 = HVar8.unknown;
  uStack_250 = uStack_141;
  uStack_24f = uStack_140;
  _swift_getKeyPath();
  uStack_328 = CONCAT71(uStack_277,uStack_278);
  local_330 = CONCAT71(local_27f,uStack_280);
  uStack_318 = CONCAT71(uStack_267,uStack_268);
  uStack_320 = CONCAT71(local_26f,uStack_270);
  uStack_308 = CONCAT71(uStack_257,uStack_258);
  local_310 = CONCAT71(local_25f,uStack_260);
  local_300 = CONCAT71(uStack_24f,uStack_250);
  uStack_338 = CONCAT71(uStack_287,uStack_288);
  uStack_340 = CONCAT71(local_28f,local_290);
  uStack_348 = uStack_298;
  local_350 = local_2a0;
  uStack_240 = 0x4020000000000000;
  local_238 = 0;
  uStack_22f = CONCAT17(uStack_171,uStack_178);
  local_237 = CONCAT17(local_179,uStack_180);
  uStack_21f = CONCAT17(uStack_161,uStack_168);
  local_227 = CONCAT17(local_169,uStack_170);
  uStack_20f = CONCAT17(uStack_151,uStack_158);
  local_217 = CONCAT17(local_159,uStack_160);
  local_207 = CONCAT17(local_149,uStack_150);
  uStack_1f7 = uStack_140;
  uStack_1ff = uStack_148;
  uStack_1f8 = uStack_141;
  local_248 = HVar8.unknown;
  FUN_100011090(&local_2a0,&local_110,&DAT_100fadb08,&DAT_100c2cf00);
  FUN_100005808(&local_248,&DAT_100fadb08,&DAT_100c2cf00);
  uStack_1c8 = uStack_328;
  local_1d0 = local_330;
  uStack_1b8 = uStack_318;
  local_1c0 = uStack_320;
  uStack_1a8 = uStack_308;
  local_1b0 = local_310;
  uStack_1e8 = uStack_348;
  local_1f0 = local_350;
  uStack_1d8 = uStack_338;
  local_1e0 = uStack_340;
  local_1a0 = local_300;
  local_190 = 1;
  uStack_178 = (undefined7)uStack_348;
  uStack_171 = (undefined1)((ulong)uStack_348 >> 0x38);
  uStack_180 = SUB87(local_350,0);
  local_179 = (undefined1)((ulong)local_350 >> 0x38);
  uStack_168 = (undefined7)uStack_338;
  uStack_161 = (undefined1)((ulong)uStack_338 >> 0x38);
  uStack_170 = (undefined7)uStack_340;
  local_169 = (undefined1)((ulong)uStack_340 >> 0x38);
  uStack_148 = (undefined7)uStack_318;
  uStack_141 = (undefined1)((ulong)uStack_318 >> 0x38);
  uStack_150 = (undefined7)uStack_320;
  local_149 = (undefined1)((ulong)uStack_320 >> 0x38);
  uStack_138 = uStack_308;
  uStack_140 = (undefined7)local_310;
  uStack_139 = (undefined1)((ulong)local_310 >> 0x38);
  uStack_158 = (undefined7)uStack_328;
  uStack_151 = (undefined1)((ulong)uStack_328 >> 0x38);
  uStack_160 = (undefined7)local_330;
  local_159 = (undefined1)((ulong)local_330 >> 0x38);
  local_130 = local_300;
  local_120 = 1;
  puStack_198 = puVar4;
  local_128 = puVar4;
  FUN_100011090(&local_1f0,&local_110,&DAT_100fadb10,&DAT_100c2cf08);
  HVar8.unknown = (undefined *)&uStack_180;
  FUN_100005808(HVar8.unknown,&DAT_100fadb10,&DAT_100c2cf08);
  HVar8 = SwiftUI::HorizontalAlignment::get_center(HVar8);
  puVar3 = local_3d0;
  *local_3d0 = HVar8.unknown;
  puVar3[1] = 0x4020000000000000;
  *(undefined1 *)(puVar3 + 2) = 0;
  puVar4 = &DAT_100fadb18;
  FUN_1000037f0(&DAT_100fadb18,&DAT_100c2cf10);
  AVar9.unknown = apuStack_3f0[1];
  FUN_1000ebb38((long)puVar3 + (long)*(int *)(puVar4 + 0x2c));
  SwiftUI::Alignment::get_center(AVar9);
  SwiftUI::_FrameLayout::_init((Alignment)0x4069000000000000);
  lVar10 = local_3c0;
  puVar1 = (undefined8 *)((long)puVar3 + (long)*(int *)(apuStack_3f0[3] + 0x24));
  puVar1[1] = uStack_98;
  *puVar1 = local_a0;
  puVar1[3] = uStack_88;
  puVar1[2] = uStack_90;
  puVar1[5] = uStack_78;
  puVar1[4] = local_80;
  uStack_308 = uStack_1a8;
  local_310 = local_1b0;
  puStack_2f8 = puStack_198;
  local_300 = local_1a0;
  local_2f0 = local_190;
  uStack_348 = uStack_1e8;
  local_350 = local_1f0;
  uStack_338 = uStack_1d8;
  uStack_340 = local_1e0;
  uStack_328 = uStack_1c8;
  local_330 = local_1d0;
  uStack_318 = uStack_1b8;
  uStack_320 = local_1c0;
  FUN_100011090(puVar3,local_3c0,&DAT_100fadb00,&DAT_100c2cec8);
  puVar2 = apuStack_3f0[2];
  *param_1 = apuStack_3f0[2];
  uStack_c8 = uStack_308;
  local_d0 = local_310;
  puStack_b8 = puStack_2f8;
  uStack_c0 = local_300;
  local_b0 = local_2f0;
  uStack_108 = uStack_348;
  local_110 = local_350;
  uStack_f8 = uStack_338;
  uStack_100 = uStack_340;
  uStack_e8 = uStack_328;
  local_f0 = local_330;
  uStack_d8 = uStack_318;
  uStack_e0 = uStack_320;
  param_1[6] = uStack_328;
  param_1[5] = local_330;
  param_1[4] = uStack_338;
  param_1[3] = uStack_340;
  param_1[2] = uStack_348;
  param_1[1] = local_350;
  *(undefined1 *)(param_1 + 0xd) = local_2f0;
  param_1[0xc] = puStack_2f8;
  param_1[0xb] = local_300;
  param_1[8] = uStack_318;
  param_1[7] = uStack_320;
  param_1[10] = uStack_308;
  param_1[9] = local_310;
  puVar4 = &DAT_100fadb20;
  FUN_1000037f0(&DAT_100fadb20,&DAT_100c2cf18);
  FUN_100011090(lVar10,(long)param_1 + (long)*(int *)(puVar4 + 0x40),&DAT_100fadb00,&DAT_100c2cec8);
  _swift_retain(puVar2);
  FUN_100011090(&local_110,auStack_3b8,&DAT_100fadb10,&DAT_100c2cf08);
  FUN_100005808(puVar3,&DAT_100fadb00,&DAT_100c2cec8);
  FUN_100005808(lVar10,&DAT_100fadb00,&DAT_100c2cec8);
  FUN_100005808(&local_350,&DAT_100fadb10,&DAT_100c2cf08);
  _swift_release(local_3c8);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000eb820 | FUN_1000eb820 */

void FUN_1000eb820(undefined8 *param_1)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  Text TVar4;
  Font FVar5;
  Font FVar6;
  Text TVar7;
  HierarchicalShapeStyle HVar8;
  undefined1 *puVar9;
  Text TVar10;
  Text TVar11;
  undefined *puVar12;
  Text TVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  HierarchicalShapeStyle in_x3;
  undefined *puVar17;
  long extraout_x8;
  long extraout_x12;
  undefined *local_90;
  undefined *puStack_88;
  LocalizedStringResource local_80;
  undefined8 *local_78;
  MainActor *local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  local_78 = param_1;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  puVar16 = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar12 = &DAT_100fad468;
  puVar14 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fad468,puVar15);
  local_70 = pMVar2;
  UVar3 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar3.unknown & 1) == 0) {
    UVar3.unknown = (undefined *)0x0;
    puVar12 = (undefined *)0x26;
    puVar14 = &DAT_00000001;
    in_x3.unknown = (undefined *)0x5d;
    _swift_task_reportUnexpectedExecutor();
  }
  FUN_1000edd5c();
  local_80.unknown = puVar16;
  if (((ulong)UVar3.unknown & 1) == 0) {
    FUN_1001c8ad4(puVar16 + -extraout_x12);
  }
  else {
    FUN_1001c8f54();
  }
  TVar4 = SwiftUI::Text::init(puVar16 + -extraout_x12);
  FVar5 = SwiftUI::Font::get_title(TVar4.unknown);
  FVar6 = SwiftUI::Font::bold(FVar5);
  _swift_release(FVar5.unknown);
  TVar13 = TVar4;
  puVar15 = puVar12;
  puVar9 = puVar14;
  TVar7 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100016d74(TVar4.unknown,puVar12,puVar14);
  _swift_bridgeObjectRelease();
  HVar8 = SwiftUI::HierarchicalShapeStyle::get_primary(in_x3);
  local_64 = SUB84(HVar8.unknown,0);
  FUN_1000ed43c();
  TVar4 = TVar7;
  puVar12 = TVar13.unknown;
  puVar14 = puVar15;
  local_90 = (undefined *)SwiftUI::Text::_foregroundStyle();
  puStack_88 = puVar14;
  FUN_100016d74(TVar7.unknown);
  _swift_bridgeObjectRelease();
  FUN_1000edd5c();
  LVar1.unknown = local_80.unknown;
  if (((ulong)puVar9 & 1) == 0) {
    FUN_1001c8954(local_80.unknown);
  }
  else {
    FUN_1001c8dd4(local_80.unknown);
  }
  TVar10 = SwiftUI::Text::init(LVar1);
  HVar8 = SwiftUI::HierarchicalShapeStyle::get_secondary(TVar10.unknown);
  local_68 = SUB84(HVar8.unknown,0);
  TVar7 = TVar10;
  puVar16 = TVar13.unknown;
  puVar17 = puVar15;
  TVar11 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar10.unknown,TVar13.unknown,puVar15);
  _swift_bridgeObjectRelease(puVar14);
  puVar14 = puStack_88;
  puVar15 = local_90;
  *local_78 = local_90;
  local_78[1] = TVar4.unknown;
  *(char *)(local_78 + 2) = (char)puVar12;
  local_78[3] = puStack_88;
  local_78[4] = TVar11.unknown;
  local_78[5] = TVar7.unknown;
  *(char *)(local_78 + 6) = (char)puVar16;
  local_78[7] = puVar17;
  FUN_100016d5c(local_90,TVar4.unknown,puVar12);
  _swift_bridgeObjectRetain(puVar14);
  FUN_100016d5c(TVar11.unknown,TVar7.unknown,puVar16);
  _swift_bridgeObjectRetain(puVar17);
  FUN_100016d74(TVar11.unknown,TVar7.unknown,puVar16);
  _swift_bridgeObjectRelease(puVar17);
  FUN_100016d74(puVar15,TVar4.unknown,puVar12);
  _swift_release(local_70);
  _swift_bridgeObjectRelease(puVar14);
  return;
}



/* Address: 0x1000ebb38 | FUN_1000ebb38 */

void FUN_1000ebb38(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ControlSize CVar5;
  undefined *puVar6;
  BorderedProminentButtonStyle BVar7;
  undefined *puVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined7 extraout_var;
  BorderedProminentButtonStyle BVar12;
  undefined *puVar13;
  undefined7 extraout_var_00;
  ButtonBorderShape BVar14;
  long extraout_x8;
  long extraout_x8_00;
  long lVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long lVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  undefined8 uVar21;
  long local_150;
  undefined4 local_144;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  long local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined *puStack_e8;
  MainActor *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  undefined1 auStack_b0 [32];
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar6 = &DAT_100fadb28;
  FUN_1000037f0(&DAT_100fadb28,&DAT_100c2cf20);
  local_d8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fadb30;
  local_c8 = (long)&local_150 - extraout_x8;
  FUN_1000037f0(&DAT_100fadb30,&DAT_100c2cf28);
  local_d0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = ((long)&local_150 - extraout_x8) - extraout_x8_00;
  puVar6 = &DAT_100fadb38;
  local_100 = lVar15;
  FUN_1000037f0(&DAT_100fadb38,&DAT_100c2cf30);
  local_118 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  local_108 = lVar15;
  BVar7 = SwiftUI::BorderedProminentButtonStyle::typeMetadataAccessor();
  local_f8 = *(long *)(BVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f8 + 0x40));
  lVar15 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fadb40;
  FUN_1000037f0(&DAT_100fadb40,&DAT_100c2cf38);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar15 - extraout_x8_03;
  puStack_e8 = (undefined *)Foundation::LocalizedStringResource::typeMetadataAccessor();
  local_f0 = *(long *)(puStack_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  lVar17 = lVar18 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fadb48;
  FUN_1000037f0(&DAT_100fadb48,&DAT_100c2cf40);
  local_c0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar16 = lVar17 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_120 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_b8 = lVar16 - extraout_x12_00;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar8 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_e0 = pMVar9;
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    UVar11.unknown = (undefined *)0x0;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x72,UVar10.unknown,puVar8);
  }
  uVar21 = param_2[1];
  local_80 = *param_2;
  uStack_78 = uVar21;
  FUN_1000edd5c();
  local_90 = lVar17;
  if (((ulong)UVar11.unknown & 1) == 0) {
    FUN_1001cccd4(lVar17);
    FUN_100011090(&local_80,auStack_b0,&DAT_100fad9f8,&DAT_100c2ccb0);
    _swift_retain(uVar21);
    FUN_1000037f0(&DAT_100fadb50,&DAT_100c2cf48);
    FUN_1000ed5b0();
    SwiftUI::Button::_init();
    iVar2 = *(int *)(puVar6 + 0x24);
    puVar8 = &DAT_100fadb60;
    FUN_1000037f0(&DAT_100fadb60,&DAT_100c2cf50);
    iVar3 = *(int *)(puVar8 + 0x1c);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_ControlSize_extraLarge_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa5f8
    ;
    CVar5 = SwiftUI::ControlSize::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,CVar5.value) + -8) + 0x68))
              (lVar18 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var_00,CVar5.value));
    puVar8 = &DAT_100c2cf58;
    _swift_getKeyPath();
    *(undefined **)(lVar18 + iVar2) = puVar8;
    BVar12 = SwiftUI::BorderedProminentButtonStyle::init();
    FUN_1000ed664();
    puVar8 = &DAT_100fadb88;
    FUN_100003a00(&DAT_100fadb88,PTR_typeMetadataAccessor_100eab0c8,
                  PTR_SwiftUI__SwiftUI__BorderedProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eab0b8
                 );
    lVar16 = local_b8;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_b8,lVar15,puVar6,BVar7.unknown,BVar12.unknown,puVar8);
    (**(code **)(local_f8 + 8))(lVar15,BVar7.unknown);
    FUN_100005808(lVar18,&DAT_100fadb40,&DAT_100c2cf38);
    iVar2 = *(int *)(local_c0 + 0x24);
    BVar14.unknown = &DAT_100fadb90;
    FUN_1000037f0(&DAT_100fadb90,&DAT_100c2cf90);
    SwiftUI::ButtonBorderShape::get_capsule(BVar14);
    _swift_release(uVar21);
    puVar6 = &DAT_100c2cf98;
    _swift_getKeyPath();
    *(undefined **)(lVar16 + iVar2) = puVar6;
    (**(code **)(local_f0 + 8))(lVar17,puStack_e8);
    lVar15 = local_c8;
    puVar6 = &DAT_100fadb48;
    puVar8 = &DAT_100c2cf40;
    FUN_100011090(lVar16,local_c8,&DAT_100fadb48,&DAT_100c2cf40);
    _swift_storeEnumTagMultiPayload(lVar15,local_d8,1);
    FUN_100016eac(&DAT_100fadb98,&DAT_100fadb30,&DAT_100c2cf28,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
    FUN_1000ed7dc();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar15);
  }
  else {
    FUN_1001c8354();
    FUN_100011090(&local_80,auStack_b0,&DAT_100fad9f8,&DAT_100c2ccb0);
    _swift_retain(uVar21);
    puVar8 = &DAT_100fadb50;
    FUN_1000037f0(&DAT_100fadb50,&DAT_100c2cf48);
    local_130 = puVar8;
    FUN_1000ed5b0();
    local_138 = puVar8;
    SwiftUI::Button::_init();
    iVar2 = *(int *)(puVar6 + 0x24);
    puVar8 = &DAT_100fadb60;
    FUN_1000037f0(&DAT_100fadb60,&DAT_100c2cf50);
    iVar3 = *(int *)(puVar8 + 0x1c);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_ControlSize_extraLarge_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa5f8
    ;
    local_144 = uVar1;
    local_140 = puVar8;
    local_128 = param_1;
    CVar5 = SwiftUI::ControlSize::typeMetadataAccessor();
    local_150 = CONCAT71(extraout_var,CVar5.value);
    pcVar19 = *(code **)(*(long *)(local_150 + -8) + 0x68);
    (*pcVar19)(lVar18 + iVar2 + (long)iVar3,uVar1,local_150);
    puVar8 = &DAT_100c2cf58;
    _swift_getKeyPath();
    *(undefined **)(lVar18 + iVar2) = puVar8;
    BVar12 = SwiftUI::BorderedProminentButtonStyle::init();
    FUN_1000ed664();
    puVar8 = &DAT_100fadb88;
    FUN_100003a00(&DAT_100fadb88,PTR_typeMetadataAccessor_100eab0c8,
                  PTR_SwiftUI__SwiftUI__BorderedProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eab0b8
                 );
    lVar16 = local_b8;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar15,puVar6,BVar7.unknown,BVar12.unknown,puVar8);
    (**(code **)(local_f8 + 8))(lVar15,BVar7.unknown);
    FUN_100005808(lVar18,&DAT_100fadb40,&DAT_100c2cf38);
    iVar2 = *(int *)(local_c0 + 0x24);
    BVar14.unknown = &DAT_100fadb90;
    FUN_1000037f0(&DAT_100fadb90,&DAT_100c2cf90);
    SwiftUI::ButtonBorderShape::get_capsule(BVar14);
    _swift_release(uVar21);
    puVar8 = &DAT_100c2cf98;
    puVar13 = puVar8;
    _swift_getKeyPath();
    puVar4 = puStack_e8;
    *(undefined **)(lVar16 + iVar2) = puVar13;
    pcVar20 = *(code **)(local_f0 + 8);
    (*pcVar20)(lVar17,puStack_e8);
    FUN_1001cccd4(lVar17);
    local_90 = lVar17;
    FUN_100011090(&local_80,auStack_b0,&DAT_100fad9f8,&DAT_100c2ccb0);
    _swift_retain(uVar21);
    lVar18 = local_108;
    SwiftUI::Button::_init();
    iVar2 = *(int *)(puVar6 + 0x24);
    (*pcVar19)(lVar18 + iVar2 + (long)*(int *)(local_140 + 0x1c),local_144,local_150);
    BVar14.unknown = &DAT_100c2cf58;
    _swift_getKeyPath();
    *(undefined **)(lVar18 + iVar2) = BVar14.unknown;
    iVar2 = *(int *)(local_118 + 0x24);
    SwiftUI::ButtonBorderShape::get_capsule(BVar14);
    _swift_release(uVar21);
    _swift_getKeyPath();
    *(undefined **)(lVar18 + iVar2) = puVar8;
    (*pcVar20)(lVar17,puVar4);
    lVar15 = local_120;
    FUN_100011090(lVar16,local_120,&DAT_100fadb48,&DAT_100c2cf40);
    lVar17 = local_110;
    FUN_100011090(lVar18,local_110,&DAT_100fadb38,&DAT_100c2cf30);
    lVar16 = local_100;
    FUN_100011090(lVar15,local_100,&DAT_100fadb48,&DAT_100c2cf40);
    puVar6 = &DAT_100fadbb0;
    FUN_1000037f0(&DAT_100fadbb0,&DAT_100c2cfc8);
    FUN_100011090(lVar17,lVar16 + *(int *)(puVar6 + 0x30),&DAT_100fadb38,&DAT_100c2cf30);
    FUN_100005808(lVar17,&DAT_100fadb38,&DAT_100c2cf30);
    FUN_100005808(lVar15,&DAT_100fadb48,&DAT_100c2cf40);
    lVar15 = local_c8;
    puVar6 = &DAT_100fadb30;
    puVar8 = &DAT_100c2cf28;
    FUN_100011090(lVar16,local_c8,&DAT_100fadb30,&DAT_100c2cf28);
    _swift_storeEnumTagMultiPayload(lVar15,local_d8,0);
    FUN_100016eac(&DAT_100fadb98,&DAT_100fadb30,&DAT_100c2cf28,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
    FUN_1000ed7dc();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar15);
    FUN_100005808(lVar18,&DAT_100fadb38,&DAT_100c2cf30);
    FUN_100005808(local_b8,&DAT_100fadb48,&DAT_100c2cf40);
  }
  FUN_100005808(lVar16,puVar6,puVar8);
  _swift_release(local_e0);
  return;
}



/* Address: 0x1000ec480 | FUN_1000ec480 */

void FUN_1000ec480(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_38;
  
  uVar3 = param_1;
  FUN_1000da768(&local_38);
  FUN_1000e6c70();
  _swift_release(local_38);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_1 + _TtC20PasteLicensingDirect16PaywallViewModel::router;
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    FUN_100004640(lVar4,uVar1);
    FUN_1001ad344(uVar1,uVar2,lVar4);
    if (*(code **)(param_1 + _TtC20PasteLicensingDirect16PaywallViewModel::onDismiss) != (code *)0x0
       ) {
      (**(code **)(param_1 + _TtC20PasteLicensingDirect16PaywallViewModel::onDismiss))();
    }
  }
  return;
}



/* Address: 0x1000ec520 | FUN_1000ec520 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ec764 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ec520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  LocalizedStringResource LVar9;
  undefined *puVar10;
  MainActor *pMVar11;
  undefined *puVar12;
  UnownedSerialExecutor UVar13;
  UnownedSerialExecutor UVar14;
  char *pcVar15;
  Button<Text> BVar16;
  Set SVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  String SVar22;
  long local_c0;
  long local_b8 [4];
  long local_98;
  MainActor *local_90;
  long local_88;
  long local_80;
  long local_78;
  String local_70;
  
  local_78 = param_1;
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar9.unknown = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_100fadaf0;
  FUN_1000037f0(&DAT_100fadaf0,&DAT_100c2ceb8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar18 = (long)LVar9.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12;
  local_88 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12_00;
  local_98 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12_01;
  local_b8[3] = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12_02;
  local_b8[2] = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12_03;
  local_b8[1] = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar18 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar18 - extraout_x12_05;
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar11 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar12 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_90 = pMVar11;
  UVar13 = Swift::Actor::get_unownedExecutor();
  UVar14 = UVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar14.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,0x7e,UVar13.unknown,puVar12);
  }
  FUN_1001c3308(LVar9.unknown);
  SVar22 = (extension_Foundation)::Swift::String::init(LVar9);
  uVar20 = *(undefined8 *)(param_6 + 8);
  local_70 = SVar22;
  FUN_1000e4ab0();
  pcVar15 = SVar22.str;
  _swift_retain(uVar20);
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  BVar16 = (extension_SwiftUI)::SwiftUI::Button::_init
                     (lVar19,pcVar15,thunk_FUN_1000ef940,uVar20,
                      PTR___type_metadata_for_Swift_String_100eac208,pcVar15);
  SVar17 = SwiftUI::Edge::Set::get_all(BVar16.unknown);
  uVar21 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  puVar1 = (undefined1 *)(lVar19 + *(int *)(puVar10 + 0x24));
  local_b8[0] = lVar19;
  *puVar1 = (char)SVar17.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_1001c67a4(LVar9.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar9);
  _swift_retain(uVar20);
  BVar16 = (extension_SwiftUI)::SwiftUI::Button::_init
                     (lVar18,SVar17.unknown,FUN_1000ed500,uVar20,puVar12,pcVar15);
  SVar17 = SwiftUI::Edge::Set::get_all(BVar16.unknown);
  uVar21 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  puVar1 = (undefined1 *)(lVar18 + *(int *)(puVar10 + 0x24));
  local_c0 = lVar18;
  *puVar1 = (char)SVar17.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_1001c5e80(LVar9.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar9);
  _swift_retain(uVar20);
  lVar4 = local_b8[1];
  BVar16 = (extension_SwiftUI)::SwiftUI::Button::_init
                     (local_b8[1],SVar17.unknown,FUN_1000ed520,uVar20,puVar12,pcVar15);
  SVar17 = SwiftUI::Edge::Set::get_all(BVar16.unknown);
  uVar21 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  puVar1 = (undefined1 *)(lVar4 + *(int *)(puVar10 + 0x24));
  *puVar1 = (char)SVar17.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_1001c8054(LVar9.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar9);
  _swift_retain(uVar20);
  lVar5 = local_b8[2];
  BVar16 = (extension_SwiftUI)::SwiftUI::Button::_init
                     (local_b8[2],SVar17.unknown,FUN_1000ed540,uVar20,puVar12,pcVar15);
  SVar17 = SwiftUI::Edge::Set::get_all(BVar16.unknown);
  uVar20 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  lVar6 = local_b8[3];
  puVar1 = (undefined1 *)(lVar5 + *(int *)(puVar10 + 0x24));
  *puVar1 = (char)SVar17.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar20;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_100011090(lVar19,local_b8[3],&DAT_100fadaf0,&DAT_100c2ceb8);
  lVar19 = local_98;
  FUN_100011090(lVar18,local_98,&DAT_100fadaf0,&DAT_100c2ceb8);
  lVar18 = local_88;
  FUN_100011090(lVar4,local_88,&DAT_100fadaf0,&DAT_100c2ceb8);
  lVar7 = local_80;
  FUN_100011090(lVar5,local_80,&DAT_100fadaf0,&DAT_100c2ceb8);
  lVar8 = local_78;
  FUN_100011090(lVar6,local_78,&DAT_100fadaf0,&DAT_100c2ceb8);
  puVar10 = &DAT_100fadaf8;
  FUN_1000037f0(&DAT_100fadaf8,&DAT_100c2cec0);
  FUN_100011090(lVar19,lVar8 + *(int *)(puVar10 + 0x30),&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100011090(lVar18,lVar8 + *(int *)(puVar10 + 0x40),&DAT_100fadaf0,&DAT_100c2ceb8);
  iVar2 = *(int *)(puVar10 + 0x50);
  *(undefined8 *)(lVar8 + iVar2) = 0;
  *(undefined1 *)((undefined8 *)(lVar8 + iVar2) + 1) = 1;
  FUN_100011090(lVar7,lVar8 + *(int *)(puVar10 + 0x60),&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100005808(lVar5,&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100005808(lVar4,&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100005808(local_c0,&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100005808(local_b8[0],&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100005808(lVar7,&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100005808(lVar18,&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100005808(lVar19,&DAT_100fadaf0,&DAT_100c2ceb8);
  FUN_100005808(lVar6,&DAT_100fadaf0,&DAT_100c2ceb8);
  _swift_release(local_90);
  return;
}



/* Address: 0x1000eca7c | FUN_1000eca7c */

void FUN_1000eca7c(long param_1,code *param_2)

{
  URL UVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  param_1 = param_1 + _TtC20PasteLicensingDirect16PaywallViewModel::router;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x28);
  FUN_100004640(param_1,uVar3);
  (*param_2)();
  (**(code **)(lVar5 + 0x10))(puVar2,param_1,UVar1.unknown);
  (**(code **)(lVar4 + 8))(puVar2,uVar3,lVar4);
  (**(code **)(lVar5 + 8))(puVar2,UVar1.unknown);
  return;
}



/* Address: 0x1000ecb4c | FUN_1000ecb4c */

void FUN_1000ecb4c(undefined8 param_1)

{
  Published *pPVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pPVar1 = (Published *)&DAT_100c2ce38;
  _swift_getKeyPath(&DAT_100c2ce38);
  puVar2 = &DAT_100c2ce60;
  _swift_getKeyPath(&DAT_100c2ce60);
  local_40 = 0;
  uStack_38 = 0;
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar1,&local_40,param_1,pPVar1,puVar2);
  pPVar1 = (Published *)&DAT_100c2cc50;
  _swift_getKeyPath(&DAT_100c2cc50);
  puVar2 = &DAT_100c2ce18;
  _swift_getKeyPath(&DAT_100c2ce18);
  local_40 = CONCAT71(local_40._1_7_,1);
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar1,&local_40,param_1,pPVar1,puVar2);
  return;
}



/* Address: 0x1000ecbfc | FUN_1000ecbfc */

void FUN_1000ecbfc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  MainActor *pMVar4;
  undefined *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  Text TVar8;
  Alignment AVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  long extraout_x8;
  long lVar12;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [8];
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined8 auStack_2a0 [2];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [144];
  undefined *local_1f8;
  undefined8 uStack_1f0;
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
  undefined *local_168;
  undefined8 uStack_160;
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
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar12 = *(long *)(LVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallView.swift",0x26,1,param_3,UVar6.unknown,puVar5);
    param_5 = param_3;
  }
  (**(code **)(lVar12 + 0x10))(auStack_290 + lVar1);
  uVar11 = SUB81(LVar3.unknown,0);
  TVar8 = SwiftUI::Text::init((LocalizedStringResource)(auStack_290 + lVar1));
  uVar10 = param_2;
  AVar9 = SwiftUI::Alignment::get_center(TVar8.unknown);
  *(undefined **)((long)auStack_2a0 + lVar1) = AVar9.unknown;
  *(undefined8 *)((long)auStack_2a0 + lVar1 + 8) = uVar10;
  auStack_2a8[lVar1] = 1;
  *(undefined8 *)((long)&uStack_2b0 + lVar1) = 0;
  auStack_2b8[lVar1] = 1;
  *(undefined8 *)((long)&uStack_2c0 + lVar1) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
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
  uStack_110 = uStack_a0;
  local_118 = local_a8;
  uStack_120 = uStack_b0;
  local_128 = local_b8;
  local_1f8 = TVar8.unknown;
  uStack_1f0 = param_2;
  local_1e8 = uVar11;
  uStack_1e0 = param_5;
  local_168 = TVar8.unknown;
  uStack_160 = param_2;
  local_158 = uVar11;
  local_150 = param_5;
  FUN_100011090(&local_1f8,auStack_288,&DAT_100fadb50,&DAT_100c2cf48);
  FUN_100005808(&local_168,&DAT_100fadb50,&DAT_100c2cf48);
  _swift_release(pMVar4);
  param_1[0xd] = uStack_190;
  param_1[0xc] = local_198;
  param_1[0xf] = uStack_180;
  param_1[0xe] = local_188;
  param_1[0x11] = uStack_170;
  param_1[0x10] = local_178;
  param_1[5] = uStack_1d0;
  param_1[4] = local_1d8;
  param_1[7] = uStack_1c0;
  param_1[6] = local_1c8;
  param_1[9] = uStack_1b0;
  param_1[8] = local_1b8;
  param_1[0xb] = uStack_1a0;
  param_1[10] = local_1a8;
  param_1[1] = uStack_1f0;
  *param_1 = local_1f8;
  param_1[3] = uStack_1e0;
  param_1[2] = CONCAT71(uStack_1e7,local_1e8);
  return;
}



/* Address: 0x1000ece98 | FUN_1000ece98 */

void FUN_1000ece98(void)

{
  FUN_1000e8ed4();
  return;
}



/* Address: 0x1000eced0 | thunk_FUN_1000f0f60 */

void thunk_FUN_1000f0f60(void)

{
  FUN_1000f0f60();
  return;
}



/* Address: 0x1000eced4 | thunk_FUN_1000f0fcc */

void thunk_FUN_1000f0fcc(void)

{
  FUN_1000f0fcc();
  return;
}



/* Address: 0x1000eced8 | FUN_1000eced8 */

void FUN_1000eced8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 < 2) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  _swift_release(param_6);
  return;
}



/* Address: 0x1000ecf18 | FUN_1000ecf18 */

void FUN_1000ecf18(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(param_6);
    return;
  }
  return;
}



/* Address: 0x1000ecf54 | FUN_1000ecf54 */

void FUN_1000ecf54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fad978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fad958;
  FUN_100005c24(&DAT_100fad958,&DAT_100c2cbd8);
  puVar2 = &DAT_100fad980;
  FUN_100016eac(&DAT_100fad980,&DAT_100fad988,&DAT_100c2cc40,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fad978 = puVar3;
  return;
}



/* Address: 0x1000ecfec | FUN_1000ecfec */

void FUN_1000ecfec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad990 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d080;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d080,&DAT_100eb6ac0);
  DAT_100fad990 = pTVar1;
  return;
}



/* Address: 0x1000ed02c | thunk_FUN_1000eda60 */

void thunk_FUN_1000eda60(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000ed030 | thunk_FUN_1000eda74 */

void thunk_FUN_1000eda74(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x1000ed034 | thunk_FUN_1000ed384 */

void thunk_FUN_1000ed384(void)

{
  FUN_1000ed384();
  return;
}



/* Address: 0x1000ed038 | FUN_1000ed038 */

void FUN_1000ed038(void)

{
  long unaff_x20;
  
  FUN_1000e965c(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000ed040 | FUN_1000ed040 */

void FUN_1000ed040(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fad9b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fad9a8;
  FUN_100005c24(&DAT_100fad9a8,&DAT_100c2cc80);
  puVar2 = puVar1;
  FUN_1000ed0b8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fad9b0 = puVar3;
  return;
}



/* Address: 0x1000ed0b8 | FUN_1000ed0b8 */

void FUN_1000ed0b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fad9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fad9c0;
  FUN_100005c24(&DAT_100fad9c0,&DAT_100c2cc88);
  puVar2 = puVar1;
  FUN_1000ed130();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fad9b8 = puVar3;
  return;
}



/* Address: 0x1000ed130 | FUN_1000ed130 */

void FUN_1000ed130(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fad9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fad9d0;
  FUN_100005c24(&DAT_100fad9d0,&DAT_100c2cc90);
  puVar2 = &DAT_100fad9d8;
  FUN_100016eac(&DAT_100fad9d8,&DAT_100fad9e0,&DAT_100c2cc98,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fad9c8 = puVar3;
  return;
}



/* Address: 0x1000ed1c8 | thunk_FUN_1000edeb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ee040 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_FUN_1000edeb8(void)

{
  long lVar1;
  Publisher PVar2;
  undefined8 uVar3;
  undefined *puVar4;
  AnyCancellable *pAVar5;
  undefined *puVar6;
  SEL op;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [8];
  char acStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar8 = *unaff_x20;
  PVar2 = Publisher::_typeMetadataAccessor();
  lVar7 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  FUN_1000da768(acStack_88);
  FUN_100004640(acStack_88,uStack_70);
  uVar3 = uStack_70;
  (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
  puVar4 = &DAT_100eb69a0;
  _swift_allocObject(&DAT_100eb69a0,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  FUN_1000037f0(&DAT_100fadec0,&DAT_100c2d290);
  FUN_1000f1c20();
  pAVar5 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(uVar3);
  _swift_release(puVar4);
  FUN_100004594(acStack_88);
  lVar1 = _TtC20PasteLicensingDirect16PaywallViewModel::cancellables;
  op = acStack_88;
  _swift_beginAccess((long)unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::cancellables,op
                     ,0x21,0);
  Combine::AnyCancellable::store(pAVar5,(undefined *)((long)unaff_x20 + lVar1));
  _swift_endAccess(acStack_88);
  _swift_release(pAVar5);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter,op);
  if (DAT_100faded0 != -1) {
    _swift_once(&DAT_100faded0,FUN_1000f0ef0);
  }
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),acStack_88,0);
  puVar4 = &DAT_100eb69a0;
  _swift_allocObject(&DAT_100eb69a0,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar6 = &DAT_100eb6a40;
  _swift_allocObject(&DAT_100eb6a40,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(undefined8 *)(puVar6 + 0x18) = uVar8;
  FUN_100003a00(&DAT_100fad0c8,PTR__typeMetadataAccessor_100ea79b0,
                PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  pAVar5 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar6);
  (**(code **)(lVar7 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),PVar2.unknown);
  _swift_beginAccess((long)unaff_x20 + lVar1,acStack_88,0x21,0);
  Combine::AnyCancellable::store(pAVar5,(undefined *)((long)unaff_x20 + lVar1));
  _swift_endAccess(acStack_88);
  _swift_release(pAVar5);
  return;
}



/* Address: 0x1000ed1cc | FUN_1000ed1cc */

void FUN_1000ed1cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000ed1f0 | FUN_1000ed1f0 */

void FUN_1000ed1f0(void)

{
  long unaff_x20;
  
  FUN_1000e9894(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000ed1f8 | FUN_1000ed1f8 */

void FUN_1000ed1f8(void)

{
  long unaff_x20;
  
  FUN_1000eaedc(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000ed200 | thunk_FUN_1000eda88 */

void thunk_FUN_1000eda88(void)

{
  FUN_1000eda88();
  return;
}



/* Address: 0x1000ed204 | thunk_FUN_1000edaf0 */

void thunk_FUN_1000edaf0(void)

{
  FUN_1000edaf0();
  return;
}



/* Address: 0x1000ed208 | FUN_1000ed208 */

void FUN_1000ed208(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_font(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x1000ed230 | FUN_1000ed230 */

void FUN_1000ed230(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_font(param_2);
  return;
}



/* Address: 0x1000ed258 | FUN_1000ed258 */

void FUN_1000ed258(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  RoundedBorderTextFieldStyle RVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  if (DAT_100fada38 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100fada10;
  FUN_100005c24(&DAT_100fada10,&DAT_100c2ccc8);
  puVar3 = &DAT_100fada08;
  FUN_100005c24(&DAT_100fada08,&DAT_100c2ccc0);
  RVar4 = SwiftUI::RoundedBorderTextFieldStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eab0a8;
  puVar5 = &DAT_100fada28;
  FUN_100016eac(&DAT_100fada28,&DAT_100fada08,&DAT_100c2ccc0,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_100eabb10);
  puVar6 = &DAT_100fada30;
  FUN_100003a00(&DAT_100fada30,puVar1,
                PTR_SwiftUI__SwiftUI__RoundedBorderTextFieldStyle_>SwiftUI__TextFieldStyle_100eab098
               );
  ppuVar7 = &local_60;
  local_60 = puVar3;
  puStack_58 = RVar4.unknown;
  local_50 = puVar5;
  puStack_48 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_textFieldStyle<A_where_A1:_SwiftUI_TextFieldStyle>(A1)__>_some>>_100eab460
             ,1);
  puVar3 = &DAT_100fada40;
  FUN_100016eac(&DAT_100fada40,&DAT_100fada48,&DAT_100c2cd38,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = ppuVar7;
  puStack_68 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar2,&local_70);
  DAT_100fada38 = puVar5;
  return;
}



/* Address: 0x1000ed384 | FUN_1000ed384 */

void FUN_1000ed384(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000ed3b0 | FUN_1000ed3b0 */

void FUN_1000ed3b0(void)

{
  long unaff_x20;
  
  FUN_1000ea2bc(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000ed3b8 | FUN_1000ed3b8 */

void FUN_1000ed3b8(void)

{
  FUN_1000eac3c();
  return;
}



/* Address: 0x1000ed3c0 | FUN_1000ed3c0 */

void FUN_1000ed3c0(void)

{
  FUN_1000ead34();
  return;
}



/* Address: 0x1000ed3c8 | thunk_FUN_1000eec50 */

void thunk_FUN_1000eec50(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  TaskPriority TVar4;
  MainActor *pMVar5;
  MainActor *this;
  MainActor *pMVar6;
  long extraout_x8;
  Published *unaff_x20;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar2 = &DAT_100fad440;
  FUN_1000037f0(&DAT_100fad440,&DAT_100c2c460);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100c2d150;
  _swift_getKeyPath(&DAT_100c2d150);
  puVar3 = &DAT_100c2d178;
  _swift_getKeyPath(&DAT_100c2d178);
  Combine::Published::_get_subscript(&uStack_50);
  _swift_release(puVar2);
  _swift_release(puVar3);
  uVar1 = uStack_50;
  _swift_bridgeObjectRelease(uStack_48);
  uVar1 = uVar1 & 0xffffffffffff;
  if ((uStack_48 & 0x2000000000000000) != 0) {
    uVar1 = uStack_48 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    puVar2 = &DAT_100c2d198;
    _swift_getKeyPath(&DAT_100c2d198);
    puVar3 = &DAT_100c2d1c0;
    _swift_getKeyPath(&DAT_100c2d1c0);
    Combine::Published::_get_subscript(&uStack_50);
    _swift_release(puVar2);
    _swift_release(puVar3);
    if (((byte)uStack_50 & 1) == 0) {
      _swift_getKeyPath(&DAT_100c2d1e0);
      _swift_getKeyPath(&DAT_100c2d208);
      uStack_50 = 0;
      uStack_48 = 0;
      _swift_retain();
      Combine::Published::_set_subscript(unaff_x20,&uStack_50);
      _swift_getKeyPath(&DAT_100c2d198);
      _swift_getKeyPath(&DAT_100c2d1c0);
      uStack_50 = CONCAT71(uStack_50._1_7_,1);
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript();
      TVar4 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))
                ((long)&uStack_50 - extraout_x8,1,1,TVar4.unknown);
      pMVar5 = (MainActor *)&DAT_100eb69a0;
      _swift_allocObject(&DAT_100eb69a0,0x18,7);
      _swift_weakInit(pMVar5 + 0x10,unaff_x20);
      this = Swift::MainActor::typeMetadataAccessor();
      puVar3 = PTR_typeMetadataAccessor_100eaec10;
      pMVar6 = pMVar5;
      _swift_retain();
      pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
      puVar2 = &DAT_100fad468;
      FUN_100003a00(&DAT_100fad468,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      puVar3 = &DAT_100eb69f0;
      _swift_allocObject(&DAT_100eb69f0,0x28,7);
      *(MainActor **)(puVar3 + 0x10) = pMVar6;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      *(MainActor **)(puVar3 + 0x20) = pMVar5;
      _swift_release(pMVar5);
      FUN_1000e3fb0(0,0,(long)&uStack_50 - extraout_x8,&DAT_100c2d230,puVar3);
      _swift_release();
    }
  }
  return;
}



/* Address: 0x1000ed3cc | thunk_FUN_1000f11fc */

void thunk_FUN_1000f11fc(void)

{
  FUN_1000f11fc();
  return;
}



/* Address: 0x1000ed3d0 | thunk_FUN_1000f1210 */

void thunk_FUN_1000f1210(void)

{
  FUN_1000f1210();
  return;
}



/* Address: 0x1000ed3d4 | FUN_1000ed3d4 */

void FUN_1000ed3d4(undefined8 param_1,EnvironmentValues param_2)

{
  bool bVar1;
  
  bVar1 = SwiftUI::EnvironmentValues::get_isEnabled(param_2);
  *(bool *)param_1 = bVar1;
  return;
}



/* Address: 0x1000ed400 | FUN_1000ed400 */

void FUN_1000ed400(undefined8 param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_isEnabled(param_2,*(bool *)param_1);
  return;
}



/* Address: 0x1000ed424 | FUN_1000ed424 */

void FUN_1000ed424(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000ed434 | thunk_FUN_1000f1114 */

void thunk_FUN_1000f1114(void)

{
  FUN_1000f1114();
  return;
}



/* Address: 0x1000ed438 | thunk_FUN_1000f117c */

void thunk_FUN_1000f117c(void)

{
  FUN_1000f117c();
  return;
}



/* Address: 0x1000ed43c | FUN_1000ed43c */

void FUN_1000ed43c(void)

{
  undefined *puVar1;
  
  if (DAT_100fada98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0,
             PTR___type_metadata_for_SwiftUI_HierarchicalShapeStyle_100eaaef0);
  DAT_100fada98 = puVar1;
  return;
}


