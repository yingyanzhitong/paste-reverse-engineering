/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000ed47c | FUN_1000ed47c */

void FUN_1000ed47c(void)

{
  undefined *puVar1;
  
  if (DAT_100fadaa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__Color_>SwiftUI__ShapeStyle_100eab700;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Color_>SwiftUI__ShapeStyle_100eab700,
             PTR___type_metadata_for_SwiftUI_Color_100eab718);
  DAT_100fadaa0 = puVar1;
  return;
}



/* Address: 0x1000ed4bc | FUN_1000ed4bc */

void FUN_1000ed4bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fadae0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c354a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c354a8,&DAT_100ec0628);
  DAT_100fadae0 = pTVar1;
  return;
}



/* Address: 0x1000ed4fc | thunk_FUN_1000ef940 */

void thunk_FUN_1000ef940(void)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  Published *pPVar5;
  TaskPriority TVar6;
  MainActor *pMVar7;
  MainActor *this;
  MainActor *pMVar8;
  ulong uVar9;
  String *pSVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 unaff_x20;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  undefined auStack_d0 [8];
  long lStack_c8;
  LocalizedStringResource LStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  String SStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  puVar2 = &DAT_100fad440;
  LStack_c0.unknown = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fad440,&DAT_100c2c460);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0;
  lStack_b0 = lVar11;
  FUN_1000dcac4();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fad4c8;
  lStack_c8 = lVar11;
  FUN_1000037f0(&DAT_100fad4c8,&DAT_100c2c650);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_02;
  puVar4 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  uVar12 = lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = uVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = uVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar17 - extraout_x12_00;
  FUN_1000da768(&SStack_a0);
  FUN_1000da768(&uStack_68);
  FUN_1001a94ec(lVar16,1);
  _swift_release(uStack_68);
  _swift_release(SStack_a0.str);
  (**(code **)(lVar15 + 0x38))(lVar17,1,1,lVar3);
  lVar13 = (long)*(int *)(puVar2 + 0x30);
  FUN_100011090(lVar16,lVar11,&DAT_100fad470,&DAT_100c2d0f0);
  FUN_100011090(lVar17,lVar11 + lVar13,&DAT_100fad470,&DAT_100c2d0f0);
  pcVar14 = *(code **)(lVar15 + 0x30);
  lVar15 = lVar11;
  (*pcVar14)(lVar11,1,lVar3);
  uVar12 = uStack_b8;
  if ((int)lVar15 == 1) {
    FUN_100005808(lVar17,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(lVar16,&DAT_100fad470,&DAT_100c2d0f0);
    lVar13 = lVar11 + lVar13;
    (*pcVar14)(lVar13,1,lVar3);
    if ((int)lVar13 == 1) {
      FUN_100005808(lVar11,&DAT_100fad470,&DAT_100c2d0f0);
LAB_1000efe30:
      FUN_1000d468c(&SStack_a0);
      pSVar10 = &SStack_a0;
      FUN_100004640(pSVar10,uStack_88);
      FUN_1000d4e0c(0xd000000000000027,0x8000000100d904e0,uStack_88,pcStack_80,pSVar10);
      FUN_100004594(&SStack_a0);
      _swift_retain(unaff_x20);
      LVar1.unknown = LStack_c0.unknown;
      FUN_1001c4cf4(LStack_c0.unknown);
      SVar18 = (extension_Foundation)::Swift::String::init(LVar1);
      puVar2 = &DAT_100c2d0f8;
      _swift_getKeyPath(&DAT_100c2d0f8);
      puVar4 = &DAT_100c2d120;
      _swift_getKeyPath(&DAT_100c2d120);
      uStack_90 = 0xd000000000000022;
      uStack_88 = 0x8000000100d90510;
      pcStack_80 = thunk_FUN_1000f1a44;
      SStack_a0 = SVar18;
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript(SVar18.bridgeObject,&SStack_a0,unaff_x20,puVar2,puVar4);
      return;
    }
  }
  else {
    FUN_100011090(lVar11,uStack_b8,&DAT_100fad470,&DAT_100c2d0f0);
    lVar15 = lVar11 + lVar13;
    (*pcVar14)(lVar15,1,lVar3);
    lVar3 = lStack_c8;
    if ((int)lVar15 != 1) {
      FUN_1000523d8(lVar11 + lVar13,lStack_c8,FUN_1000dcac4);
      uVar9 = uVar12;
      FUN_1000de2ec(uVar12,lVar3);
      FUN_10005241c(lVar3,FUN_1000dcac4);
      FUN_100005808(lVar17,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_100005808(lVar16,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_10005241c(uVar12,FUN_1000dcac4);
      FUN_100005808(lVar11,&DAT_100fad470,&DAT_100c2d0f0);
      if ((uVar9 & 1) != 0) goto LAB_1000efe30;
      goto LAB_1000efc7c;
    }
    FUN_100005808(lVar17,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(lVar16,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_10005241c(uVar12,FUN_1000dcac4);
  }
  FUN_100005808(lVar11,&DAT_100fad4c8,&DAT_100c2c650);
LAB_1000efc7c:
  puVar2 = &DAT_100c2d0f8;
  _swift_getKeyPath(&DAT_100c2d0f8);
  pPVar5 = (Published *)&DAT_100c2d120;
  _swift_getKeyPath(&DAT_100c2d120);
  SStack_a0 = (String)(ZEXT816(1) << 0x40);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  pcStack_80 = (code *)0x0;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar5,&SStack_a0,unaff_x20,puVar2,pPVar5);
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = lStack_b0;
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(lStack_b0,1,1,TVar6.unknown);
  pMVar7 = (MainActor *)&DAT_100eb69a0;
  _swift_allocObject(&DAT_100eb69a0,0x18,7);
  _swift_weakInit(pMVar7 + 0x10,unaff_x20);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = pMVar7;
  _swift_retain();
  pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
  puVar2 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar4 = &DAT_100eb69c8;
  _swift_allocObject(&DAT_100eb69c8,0x28,7);
  *(MainActor **)(puVar4 + 0x10) = pMVar8;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(MainActor **)(puVar4 + 0x20) = pMVar7;
  _swift_release(pMVar7);
  FUN_1000e3fb0(0,0,lVar13,&DAT_100c2d148,puVar4);
  _swift_release();
  return;
}



/* Address: 0x1000ed500 | FUN_1000ed500 */

void FUN_1000ed500(void)

{
  FUN_1000eca7c();
  return;
}



/* Address: 0x1000ed520 | FUN_1000ed520 */

void FUN_1000ed520(void)

{
  FUN_1000eca7c();
  return;
}



/* Address: 0x1000ed540 | FUN_1000ed540 */

void FUN_1000ed540(void)

{
  FUN_1000ecb4c();
  return;
}



/* Address: 0x1000ed548 | FUN_1000ed548 */

void FUN_1000ed548(__int8 *param_1,EnvironmentValues param_2)

{
  TextAlignment TVar1;
  
  TVar1 = SwiftUI::EnvironmentValues::get_multilineTextAlignment(param_2);
  *param_1 = TVar1.value;
  return;
}



/* Address: 0x1000ed570 | FUN_1000ed570 */

void FUN_1000ed570(__int8 *param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_multilineTextAlignment(param_2,(TextAlignment)*param_1);
  return;
}



/* Address: 0x1000ed594 | FUN_1000ed594 */

void FUN_1000ed594(void)

{
  long unaff_x20;
  
  FUN_1000ecbfc(*(undefined8 *)(unaff_x20 + 0x10),0x90);
  return;
}



/* Address: 0x1000ed5b0 | FUN_1000ed5b0 */

void FUN_1000ed5b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fadb58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fadb50;
  FUN_100005c24(&DAT_100fadb50,&DAT_100c2cf48);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fadb58 = puVar2;
  return;
}



/* Address: 0x1000ed620 | FUN_1000ed620 */

void FUN_1000ed620(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_controlSize(param_1);
  return;
}



/* Address: 0x1000ed640 | FUN_1000ed640 */

void FUN_1000ed640(void)

{
  FUN_1000ed73c();
  return;
}



/* Address: 0x1000ed664 | FUN_1000ed664 */

void FUN_1000ed664(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fadb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fadb40;
  FUN_100005c24(&DAT_100fadb40,&DAT_100c2cf38);
  puVar2 = &DAT_100fadb70;
  FUN_100016eac(&DAT_100fadb70,&DAT_100fadb78,&DAT_100c2cf88,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = &DAT_100fadb80;
  FUN_100016eac(&DAT_100fadb80,&DAT_100fadb60,&DAT_100c2cf50,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fadb68 = puVar4;
  return;
}



/* Address: 0x1000ed71c | FUN_1000ed71c */

void FUN_1000ed71c(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get__buttonBorderShape(param_1);
  return;
}



/* Address: 0x1000ed73c | FUN_1000ed73c */

void FUN_1000ed73c(undefined8 param_1)

{
  code *in_x4;
  code *in_x5;
  long extraout_x8;
  long extraout_x12;
  
  (*in_x4)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (**(code **)(extraout_x8 + 0x10))(&stack0xffffffffffffffd0 + -extraout_x12,param_1);
  (*in_x5)(&stack0xffffffffffffffd0 + -extraout_x12);
  return;
}



/* Address: 0x1000ed7b8 | FUN_1000ed7b8 */

void FUN_1000ed7b8(void)

{
  FUN_1000ed73c();
  return;
}



/* Address: 0x1000ed7dc | FUN_1000ed7dc */

void FUN_1000ed7dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  BorderedProminentButtonStyle BVar4;
  BorderedProminentButtonStyle BVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  if (DAT_100fadba0 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100fadb48;
  FUN_100005c24(&DAT_100fadb48,&DAT_100c2cf40);
  puVar3 = &DAT_100fadb40;
  FUN_100005c24(&DAT_100fadb40,&DAT_100c2cf38);
  BVar4 = SwiftUI::BorderedProminentButtonStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eab0c8;
  BVar5 = BVar4;
  FUN_1000ed664();
  puVar6 = &DAT_100fadb88;
  FUN_100003a00(&DAT_100fadb88,puVar1,
                PTR_SwiftUI__SwiftUI__BorderedProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eab0b8
               );
  ppuVar7 = &local_60;
  local_60 = puVar3;
  puStack_58 = BVar4.unknown;
  local_50 = BVar5.unknown;
  puStack_48 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,1);
  puVar3 = &DAT_100fadba8;
  FUN_100016eac(&DAT_100fadba8,&DAT_100fadb90,&DAT_100c2cf90,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar6 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = ppuVar7;
  puStack_68 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar2,&local_70);
  DAT_100fadba0 = puVar6;
  return;
}



/* Address: 0x1000ed8e8 | FUN_1000ed8e8 */

void FUN_1000ed8e8(void)

{
  FUN_1000ec480();
  return;
}



/* Address: 0x1000ed8f0 | FUN_1000ed8f0 */

void FUN_1000ed8f0(void)

{
  FUN_1000eca7c();
  return;
}



/* Address: 0x1000ed910 | FUN_1000ed910 */

void FUN_1000ed910(void)

{
  long unaff_x20;
  
  FUN_1000ecbfc(*(undefined8 *)(unaff_x20 + 0x10),0x99);
  return;
}



/* Address: 0x1000ed92c | thunk_FUN_1000ed930 */

void thunk_FUN_1000ed930(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (DAT_100fadbb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fad9e8;
  FUN_100005c24(&DAT_100fad9e8,&DAT_100c2cca0);
  puVar2 = &DAT_100fad960;
  FUN_100005c24(&DAT_100fad960,&DAT_100c2cbe0);
  puVar3 = &DAT_100fad9a8;
  FUN_100005c24(&DAT_100fad9a8,&DAT_100c2cc80);
  puVar4 = &DAT_100fad958;
  FUN_100005c24(&DAT_100fad958,&DAT_100c2cbd8);
  puVar5 = puVar4;
  FUN_1000ecf54();
  puVar6 = puVar5;
  FUN_1000ecfec();
  puStack_58 = &DAT_100eb6ac0;
  ppuVar7 = &puStack_60;
  puStack_60 = puVar4;
  puStack_50 = (undefined8 *)puVar5;
  puStack_48 = (undefined8 *)puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert)__>_some>>_100eab550
             ,1);
  ppuVar8 = ppuVar7;
  FUN_1000ed040();
  ppuVar9 = &puStack_60;
  puStack_60 = puVar2;
  puStack_58 = puVar3;
  puStack_50 = ppuVar7;
  puStack_48 = ppuVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_70 = ppuVar9;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_70);
  DAT_100fadbb8 = puVar2;
  return;
}



/* Address: 0x1000ed930 | FUN_1000ed930 */

void FUN_1000ed930(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  
  if (DAT_100fadbb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fad9e8;
  FUN_100005c24(&DAT_100fad9e8,&DAT_100c2cca0);
  puVar2 = &DAT_100fad960;
  FUN_100005c24(&DAT_100fad960,&DAT_100c2cbe0);
  puVar3 = &DAT_100fad9a8;
  FUN_100005c24(&DAT_100fad9a8,&DAT_100c2cc80);
  puVar4 = &DAT_100fad958;
  FUN_100005c24(&DAT_100fad958,&DAT_100c2cbd8);
  puVar5 = puVar4;
  FUN_1000ecf54();
  puVar6 = puVar5;
  FUN_1000ecfec();
  puStack_58 = &DAT_100eb6ac0;
  ppuVar7 = &local_60;
  local_60 = puVar4;
  local_50 = (undefined8 *)puVar5;
  puStack_48 = (undefined8 *)puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert)__>_some>>_100eab550
             ,1);
  ppuVar8 = ppuVar7;
  FUN_1000ed040();
  ppuVar9 = &local_60;
  local_60 = puVar2;
  puStack_58 = puVar3;
  local_50 = ppuVar7;
  puStack_48 = ppuVar8;
  _swift_getOpaqueTypeConformance2
            (ppuVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = ppuVar9;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_70);
  DAT_100fadbb8 = puVar2;
  return;
}



/* Address: 0x1000eda50 | thunk_FUN_1000ed384 */

void thunk_FUN_1000ed384(void)

{
  FUN_1000ed384();
  return;
}



/* Address: 0x1000eda54 | thunk_FUN_1000ed384 */

void thunk_FUN_1000ed384(void)

{
  FUN_1000ed384();
  return;
}



/* Address: 0x1000eda58 | thunk_FUN_1000ed8f0 */

void thunk_FUN_1000ed8f0(void)

{
  FUN_1000eca7c();
  return;
}



/* Address: 0x1000eda5c | thunk_FUN_1000ed594 */

void thunk_FUN_1000ed594(void)

{
  long unaff_x20;
  
  FUN_1000ecbfc(*(undefined8 *)(unaff_x20 + 0x10),0x90);
  return;
}



/* Address: 0x1000eda60 | FUN_1000eda60 */

void FUN_1000eda60(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000eda74 | FUN_1000eda74 */

void FUN_1000eda74(void)

{
  FUN_1000f1224();
  return;
}



/* Address: 0x1000eda88 | FUN_1000eda88 */

void FUN_1000eda88(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c2d150;
  _swift_getKeyPath(&DAT_100c2d150);
  puVar2 = &DAT_100c2d178;
  _swift_getKeyPath(&DAT_100c2d178);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000edaf0 | FUN_1000edaf0 */

void FUN_1000edaf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  Published *pPVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  pPVar5 = (Published *)*param_2;
  puVar3 = &DAT_100c2d150;
  _swift_getKeyPath(&DAT_100c2d150);
  puVar4 = &DAT_100c2d178;
  _swift_getKeyPath(&DAT_100c2d178);
  local_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(pPVar5);
  Combine::Published::_set_subscript(pPVar5,&local_50,pPVar5,puVar3,puVar4);
  return;
}



/* Address: 0x1000edb70 | FUN_1000edb70 */

undefined1  [16] FUN_1000edb70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_40 [16];
  
  puVar1 = &DAT_100c2d150;
  _swift_getKeyPath(&DAT_100c2d150);
  puVar2 = &DAT_100c2d178;
  _swift_getKeyPath(&DAT_100c2d178);
  Combine::Published::_get_subscript(local_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_40;
}



/* Address: 0x1000edbe0 | FUN_1000edbe0 */

bool FUN_1000edbe0(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (*(long *)(param_1 + 8) == 0) {
    if (uVar2 != 0) {
      return false;
    }
  }
  else if (*(long *)(param_1 + 8) == 1) {
    if (uVar2 != 1) {
      return false;
    }
  }
  else {
    if (uVar2 < 2) {
      return false;
    }
    if (*(undefined **)(param_1 + 0x10) != *(undefined **)(param_2 + 0x10) ||
        *(undefined **)(param_1 + 0x18) != *(undefined **)(param_2 + 0x18)) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(param_1 + 0x10),
                         (_StringGuts)*(undefined **)(param_1 + 0x18),
                         (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x10));
      return bVar1;
    }
  }
  return true;
}



/* Address: 0x1000edc44 | FUN_1000edc44 */

void FUN_1000edc44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = &DAT_100c2d0f8;
  _swift_getKeyPath(&DAT_100c2d0f8);
  puVar2 = &DAT_100c2d120;
  _swift_getKeyPath(&DAT_100c2d120);
  Combine::Published::_get_subscript(&local_60);
  _swift_release(puVar1);
  _swift_release(puVar2);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = local_40;
  return;
}



/* Address: 0x1000edcc4 | FUN_1000edcc4 */

void FUN_1000edcc4(void)

{
  FUN_1000abcec(&DAT_100c2d238,&DAT_100c2d260);
  return;
}



/* Address: 0x1000edcd8 | FUN_1000edcd8 */

undefined1  [16] FUN_1000edcd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_40 [16];
  
  puVar1 = &DAT_100c2d1e0;
  _swift_getKeyPath(&DAT_100c2d1e0);
  puVar2 = &DAT_100c2d208;
  _swift_getKeyPath(&DAT_100c2d208);
  Combine::Published::_get_subscript(local_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_40;
}



/* Address: 0x1000edd48 | FUN_1000edd48 */

void FUN_1000edd48(void)

{
  FUN_1000abcec(&DAT_100c2d198,&DAT_100c2d1c0);
  return;
}



/* Address: 0x1000edd5c | FUN_1000edd5c */

undefined8 FUN_1000edd5c(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  Date DVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined8 uVar7;
  ID self;
  undefined1 auStack_70 [8];
  long local_68 [3];
  ulong local_50;
  long lStack_48;
  
  lVar1 = 0;
  FUN_1000e78b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(local_68);
  FUN_100004640(local_68,local_50);
  uVar2 = local_50;
  (**(code **)(lStack_48 + 0x18))(local_50,lStack_48);
  FUN_100004594(local_68);
  if ((uVar2 & 1) == 0) {
    FUN_1000da768(local_68);
    self = *(ID *)(local_68[0] + 0x18);
    objc_stub::lock(self);
    FUN_1000e6eb4(puVar6);
    puVar3 = &DAT_100fad488;
    FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
    puVar4 = puVar6;
    (**(code **)(*(long *)(puVar3 + -8) + 0x30))(puVar6,3,puVar3);
    if ((int)puVar4 - 1U < 2) {
      uVar7 = 1;
    }
    else {
      if ((int)puVar4 == 0) {
        DVar5 = Foundation::Date::typeMetadataAccessor();
        (**(code **)(*(long *)(DVar5.unknown + -8) + 8))(puVar6,DVar5.unknown);
      }
      uVar7 = 0;
    }
    objc_stub::unlock(self);
    _swift_release(local_68[0]);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



/* Address: 0x1000edeb8 | FUN_1000edeb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ee040 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000edeb8(void)

{
  long lVar1;
  Publisher PVar2;
  undefined8 uVar3;
  undefined *puVar4;
  AnyCancellable *pAVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 local_90 [8];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  uVar8 = *unaff_x20;
  PVar2 = Publisher::_typeMetadataAccessor();
  lVar7 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  FUN_1000da768(auStack_88);
  FUN_100004640(auStack_88,local_70);
  uVar3 = local_70;
  (**(code **)(lStack_68 + 0x10))(local_70,lStack_68);
  puVar4 = &DAT_100eb69a0;
  _swift_allocObject(&DAT_100eb69a0,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  FUN_1000037f0(&DAT_100fadec0,&DAT_100c2d290);
  FUN_1000f1c20();
  pAVar5 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(uVar3);
  _swift_release(puVar4);
  FUN_100004594(auStack_88);
  lVar1 = _TtC20PasteLicensingDirect16PaywallViewModel::cancellables;
  _swift_beginAccess((long)unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::cancellables,
                     auStack_88,0x21,0);
  Combine::AnyCancellable::store(pAVar5,(undefined *)((long)unaff_x20 + lVar1));
  _swift_endAccess(auStack_88);
  _swift_release(pAVar5);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100faded0 != -1) {
    _swift_once(&DAT_100faded0,FUN_1000f0ef0);
  }
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            (local_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),auStack_88,0);
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
  (**(code **)(lVar7 + 8))(local_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),PVar2.unknown);
  _swift_beginAccess((long)unaff_x20 + lVar1,auStack_88,0x21,0);
  Combine::AnyCancellable::store(pAVar5,(undefined *)((long)unaff_x20 + lVar1));
  _swift_endAccess(auStack_88);
  _swift_release(pAVar5);
  return;
}



/* Address: 0x1000ee144 | FUN_1000ee144 */

void FUN_1000ee144(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  char local_90 [8];
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  code *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fad5b8;
  FUN_1000037f0(&DAT_100fad5b8,&DAT_100c2c710);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = local_90 + -extraout_x8;
  lVar3 = 0;
  FUN_10019fee0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  pcVar9 = pcVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar2 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/PaywallViewModel.swift",0x2b,1,0x35,UVar5.unknown,puVar2);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_100011090(param_1,pcVar10,&DAT_100fad5b8,&DAT_100c2c710);
    pcVar7 = pcVar10;
    (**(code **)(lVar11 + 0x30))(pcVar10,1,lVar3);
    if ((int)pcVar7 == 1) {
      _swift_release(param_2);
      FUN_100005808(pcVar10,&DAT_100fad5b8,&DAT_100c2c710);
    }
    else {
      FUN_1000523d8(pcVar10,pcVar9,FUN_10019fee0);
      if ((*(undefined **)pcVar9 == (undefined *)0xd000000000000011 &&
           *(undefined **)(pcVar9 + 8) == (undefined *)0x8000000100d90460) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)*(undefined **)pcVar9,
                             (_StringGuts)*(undefined **)(pcVar9 + 8),(_StringComparisonResult)0x11)
         , bVar1)) {
        _swift_release(param_2);
      }
      else {
        puVar2 = &DAT_100c2d0f8;
        _swift_getKeyPath(&DAT_100c2d0f8);
        puVar8 = &DAT_100c2d120;
        _swift_getKeyPath(&DAT_100c2d120);
        puStack_88 = &DAT_e800000000000000;
        builtin_strncpy(local_90,"Success!",8);
        local_80 = 0xd00000000000001f;
        uStack_78 = 0x8000000100d90560;
        local_70 = thunk_FUN_1000f1a2c;
        lStack_68 = param_2;
        _swift_retain(param_2);
        Combine::Published::_set_subscript((Published *)pMVar4,local_90,param_2,puVar2,puVar8);
      }
      FUN_10005241c(pcVar9,FUN_10019fee0);
    }
    _swift_release(pMVar4);
    return;
  }
  _swift_release(pMVar4);
  return;
}



/* Address: 0x1000ee3e4 | FUN_1000ee3e4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ee54c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ee3e4(undefined8 param_1,long param_2,undefined8 param_3,void *param_4)

{
  Published *pPVar1;
  URL UVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  Published **ppPVar7;
  long lVar8;
  Published *pPVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  char *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar14;
  Published *pPVar15;
  long lVar16;
  Notification NVar17;
  Published aPStack_c0 [3];
  Published *local_a8;
  long lStack_a0;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar11 = &DAT_100fad0a0;
  FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)aPStack_c0 - extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  pPVar15 = (Published *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar11 = &DAT_100fad468;
  pcVar13 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fad468,puVar10);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar11 = (undefined *)0x2b;
    pcVar13 = &DAT_00000001;
    param_4 = (void *)0x3e;
    _swift_task_reportUnexpectedExecutor("PasteLicensingDirect/PaywallViewModel.swift");
  }
  pMVar5 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar5 == (MainActor *)0x0) {
    _swift_release(pMVar3);
    return;
  }
  NVar17.pastePaused.bridgeObject = puVar11;
  NVar17.pastePaused.str = (char *)pMVar5;
  NVar17.syncInProgress.bridgeObject = param_4;
  NVar17.syncInProgress.str = pcVar13;
  pMVar6 = pMVar5;
  Foundation::Notification::_get_userInfo(NVar17);
  if (pMVar6 == (MainActor *)0x0) {
    _swift_release(pMVar5);
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
LAB_1000ee650:
    FUN_100005808(&local_80,&DAT_100fadee0,&DAT_100c2d2a0);
    (**(code **)(lVar16 + 0x38))(lVar12,1,1,UVar2.unknown);
  }
  else {
    aPStack_c0[1].unknown = (undefined *)0xd00000000000001f;
    aPStack_c0[2].unknown = (undefined *)0x8000000100d90610;
    puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
    Swift::AnyHashable::_init
              (&local_a8,pMVar6,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    if (*(long *)(pMVar6 + 0x10) == 0) {
LAB_1000ee5c8:
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
    }
    else {
      _swift_bridgeObjectRetain(pMVar6);
      ppPVar7 = &local_a8;
      FUN_1000f1290(ppPVar7);
      if (((ulong)puVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(pMVar6);
        goto LAB_1000ee5c8;
      }
      FUN_10000cbfc(*(long *)(pMVar6 + 0x38) + (long)ppPVar7 * 0x20,&local_80);
      _swift_bridgeObjectRelease(pMVar6);
    }
    _swift_bridgeObjectRelease(pMVar6);
    FUN_100089674(&local_a8);
    if (local_68 == 0) {
      _swift_release(pMVar5);
      goto LAB_1000ee650;
    }
    lVar8 = lVar12;
    _swift_dynamicCast(lVar12,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,UVar2.unknown,6);
    (**(code **)(lVar16 + 0x38))(lVar12,(uint)lVar8 ^ 1,1,UVar2.unknown);
    lVar8 = lVar12;
    (**(code **)(lVar16 + 0x30))(lVar12,1,UVar2.unknown);
    if ((int)lVar8 != 1) {
      (**(code **)(lVar16 + 0x20))(pPVar15,lVar12,UVar2.unknown);
      uVar14 = *(undefined8 *)
                (pMVar5 + _TtC20PasteLicensingDirect16PaywallViewModel::directLicenseManager);
      _swift_retain(uVar14);
      FUN_1000da768(&local_a8);
      _swift_release(uVar14);
      pPVar1 = local_a8;
      pPVar9 = pPVar15;
      FUN_1000e443c();
      _swift_release(pPVar1);
      if (lVar12 == 0) {
        (**(code **)(lVar16 + 8))(pPVar15,UVar2.unknown);
        _swift_release(pMVar3);
        pMVar3 = pMVar5;
      }
      else {
        puVar11 = &DAT_100c2d150;
        _swift_getKeyPath(&DAT_100c2d150);
        puVar10 = &DAT_100c2d178;
        _swift_getKeyPath(&DAT_100c2d178);
        local_a8 = pPVar9;
        lStack_a0 = lVar12;
        _swift_retain(pMVar5);
        Combine::Published::_set_subscript(pPVar9,&local_a8,pMVar5,puVar11,puVar10);
        FUN_1000ee79c();
        _swift_release(pMVar5);
        (**(code **)(lVar16 + 8))(pPVar15,UVar2.unknown);
      }
      goto LAB_1000ee69c;
    }
    _swift_release(pMVar5);
  }
  FUN_100005808(lVar12,&DAT_100fad0a0,&DAT_100c2be50);
LAB_1000ee69c:
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000ee79c | FUN_1000ee79c */

void FUN_1000ee79c(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined *puVar5;
  long extraout_x8;
  Published *unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = &DAT_100fad440;
  FUN_1000037f0(&DAT_100fad440,&DAT_100c2c460);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getKeyPath(&DAT_100c2d0f8);
  _swift_getKeyPath(&DAT_100c2d120);
  uStack_68 = 1;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  _swift_retain();
  Combine::Published::_set_subscript(unaff_x20,&local_70);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            ((long)&local_70 - extraout_x8,1,1,TVar2.unknown);
  pMVar3 = (MainActor *)&DAT_100eb69a0;
  _swift_allocObject(&DAT_100eb69a0,0x18,7);
  _swift_weakInit(pMVar3 + 0x10,unaff_x20);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = pMVar3;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar1 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar5 = &DAT_100eb6a18;
  _swift_allocObject(&DAT_100eb6a18,0x28,7);
  *(MainActor **)(puVar5 + 0x10) = pMVar4;
  *(undefined **)(puVar5 + 0x18) = puVar1;
  *(MainActor **)(puVar5 + 0x20) = pMVar3;
  _swift_release(pMVar3);
  FUN_1000e3fb0(0,0,(long)&local_70 - extraout_x8,&DAT_100c2d288,puVar5);
  _swift_release();
  return;
}



/* Address: 0x1000ee928 | FUN_1000ee928 */

void FUN_1000ee928(void)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = in_x3;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(LVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x98) = pMVar4;
  puVar5 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0xa0) = UVar6.unknown;
  *(undefined **)(unaff_x22 + 0xa8) = puVar5;
  _swift_task_switch(FUN_1000ee9d8,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x1000ee9d8 | FUN_1000ee9d8 */

void FUN_1000ee9d8(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x88) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  if (lVar1 != 0) {
    plVar2 = (long *)0x160;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb8) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1000eea58;
    FUN_1000ef118();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0001000eea54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000eea58 | FUN_1000eea58 */

void FUN_1000eea58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x70) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined8 *)(lVar1 + 0x80) = param_2;
  *(undefined8 *)(lVar1 + 0xc0) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb8));
  _swift_task_switch(FUN_1000eeaa8,*(undefined8 *)(lVar1 + 0xa0),*(undefined8 *)(lVar1 + 0xa8));
  return;
}



/* Address: 0x1000eeaa8 | FUN_1000eeaa8 */

void FUN_1000eeaa8(void)

{
  String *pSVar1;
  undefined *puVar2;
  undefined *puVar3;
  LocalizedStringResource localized;
  long lVar4;
  Published *pPVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  String SVar8;
  
  lVar4 = *(long *)(unaff_x22 + 0xc0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
  if (lVar4 == 0) {
    pPVar5 = *(Published **)(unaff_x22 + 0xb0);
    puVar2 = &DAT_100c2d0f8;
    _swift_getKeyPath(&DAT_100c2d0f8);
    puVar3 = &DAT_100c2d120;
    _swift_getKeyPath(&DAT_100c2d120);
    pSVar1 = (String *)(unaff_x22 + 0x10);
    *(undefined1 **)(unaff_x22 + 0x18) = &DAT_e800000000000000;
    pSVar1->str = (char *)0x2173736563637553;
    *(undefined8 *)(unaff_x22 + 0x20) = 0xd00000000000001f;
    *(undefined8 *)(unaff_x22 + 0x28) = 0x8000000100d90560;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_1000f1a2c;
    *(Published **)(unaff_x22 + 0x38) = pPVar5;
    _swift_retain(pPVar5);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    pPVar5 = *(Published **)(unaff_x22 + 0xb0);
    localized.unknown = *(undefined **)(unaff_x22 + 0x90);
    _swift_retain(pPVar5);
    FUN_1001c4cf4(localized.unknown);
    SVar8 = (extension_Foundation)::Swift::String::init(localized);
    puVar2 = &DAT_100c2d0f8;
    _swift_getKeyPath(&DAT_100c2d0f8);
    puVar3 = &DAT_100c2d120;
    _swift_getKeyPath(&DAT_100c2d120);
    pSVar1 = (String *)(unaff_x22 + 0x40);
    *pSVar1 = SVar8;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
    *(code **)(unaff_x22 + 0x60) = thunk_FUN_1000f1a44;
    *(Published **)(unaff_x22 + 0x68) = pPVar5;
  }
  Combine::Published::_set_subscript(pPVar5,pSVar1,pPVar5,puVar2,puVar3);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x0001000eebe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000eebe4 | FUN_1000eebe4 */

void FUN_1000eebe4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1 + _TtC20PasteLicensingDirect16PaywallViewModel::router;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  FUN_100004640(lVar3,uVar1);
  FUN_1001ad344(uVar1,uVar2,lVar3);
  if (*(code **)(param_1 + _TtC20PasteLicensingDirect16PaywallViewModel::onDismiss) != (code *)0x0)
  {
    (**(code **)(param_1 + _TtC20PasteLicensingDirect16PaywallViewModel::onDismiss))();
  }
  return;
}



/* Address: 0x1000eec50 | FUN_1000eec50 */

void FUN_1000eec50(void)

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
  ulong local_50;
  ulong uStack_48;
  
  puVar2 = &DAT_100fad440;
  FUN_1000037f0(&DAT_100fad440,&DAT_100c2c460);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100c2d150;
  _swift_getKeyPath(&DAT_100c2d150);
  puVar3 = &DAT_100c2d178;
  _swift_getKeyPath(&DAT_100c2d178);
  Combine::Published::_get_subscript(&local_50);
  _swift_release(puVar2);
  _swift_release(puVar3);
  uVar1 = local_50;
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
    Combine::Published::_get_subscript(&local_50);
    _swift_release(puVar2);
    _swift_release(puVar3);
    if (((byte)local_50 & 1) == 0) {
      _swift_getKeyPath(&DAT_100c2d1e0);
      _swift_getKeyPath(&DAT_100c2d208);
      local_50 = 0;
      uStack_48 = 0;
      _swift_retain();
      Combine::Published::_set_subscript(unaff_x20,&local_50);
      _swift_getKeyPath(&DAT_100c2d198);
      _swift_getKeyPath(&DAT_100c2d1c0);
      local_50 = CONCAT71(local_50._1_7_,1);
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript();
      TVar4 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))
                ((long)&local_50 - extraout_x8,1,1,TVar4.unknown);
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
      FUN_1000e3fb0(0,0,(long)&local_50 - extraout_x8,&DAT_100c2d230,puVar3);
      _swift_release();
    }
  }
  return;
}



/* Address: 0x1000eeec0 | FUN_1000eeec0 */

void FUN_1000eeec0(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = in_x3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x40) = pMVar2;
  puVar3 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x48) = UVar4.unknown;
  *(undefined **)(unaff_x22 + 0x50) = puVar3;
  _swift_task_switch(FUN_1000eef50,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000eef50 | FUN_1000eef50 */

void FUN_1000eef50(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x38) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  if (lVar1 != 0) {
    plVar2 = (long *)0x160;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1000eefc8;
    FUN_1000ef118();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001000eefc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000eefc8 | FUN_1000eefc8 */

void FUN_1000eefc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x68) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  _swift_task_switch(FUN_1000ef018,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Address: 0x1000ef018 | FUN_1000ef018 */

void FUN_1000ef018(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  Published *pPVar4;
  long unaff_x22;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  if (lVar3 == 0) {
    pPVar4 = *(Published **)(unaff_x22 + 0x58);
    puVar1 = &DAT_100c2d238;
    _swift_getKeyPath(&DAT_100c2d238);
    puVar2 = &DAT_100c2d260;
    _swift_getKeyPath(&DAT_100c2d260);
    puVar5 = (undefined8 *)(unaff_x22 + 0x70);
    *(undefined1 *)puVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
    pPVar4 = *(Published **)(unaff_x22 + 0x58);
    puVar1 = &DAT_100c2d1e0;
    _swift_getKeyPath(&DAT_100c2d1e0);
    puVar2 = &DAT_100c2d208;
    _swift_getKeyPath(&DAT_100c2d208);
    puVar5 = (undefined8 *)(unaff_x22 + 0x28);
    *puVar5 = uVar7;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  }
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,puVar5,pPVar4,puVar1,puVar2);
  pPVar4 = *(Published **)(unaff_x22 + 0x58);
  puVar1 = &DAT_100c2d198;
  _swift_getKeyPath(&DAT_100c2d198);
  puVar2 = &DAT_100c2d1c0;
  _swift_getKeyPath(&DAT_100c2d1c0);
  *(undefined1 *)(unaff_x22 + 0x71) = 0;
  Combine::Published::_set_subscript(pPVar4,(undefined1 *)(unaff_x22 + 0x71),pPVar4,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001000ef114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000ef118 | FUN_1000ef118 */

void FUN_1000ef118(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  lVar2 = 0;
  FUN_1000dcac4();
  *(long *)(unaff_x22 + 200) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  puVar4 = &DAT_100fad4c8;
  FUN_1000037f0(&DAT_100fad4c8,&DAT_100c2c650);
  *(undefined **)(unaff_x22 + 0xe0) = puVar4;
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  puVar4 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar3;
  lVar2 = 0;
  FUN_1000e34b0();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar3;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0x118) = pMVar6;
  puVar4 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined **)(unaff_x22 + 0x120) = puVar4;
  UVar7 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000ef274,UVar7.unknown,puVar4);
  return;
}



/* Address: 0x1000ef274 | FUN_1000ef274 */

void FUN_1000ef274(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  long *plVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x128) =
       *(undefined8 *)
        (*(long *)(unaff_x22 + 0xc0) +
        _TtC20PasteLicensingDirect16PaywallViewModel::directLicenseManager);
  FUN_1000da768(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0xa0);
  plVar3 = (long *)0x500;
  _swift_retain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x138) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1000ef308;
  FUN_1000dfabc(plVar3,*(undefined8 *)(unaff_x22 + 0x110),uVar1,uVar2,0);
  return;
}



/* Address: 0x1000ef308 | FUN_1000ef308 */

void FUN_1000ef308(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  
  lVar20 = *unaff_x22;
  uVar9 = *(undefined8 *)(lVar20 + 0x130);
  uVar11 = *(undefined8 *)(lVar20 + 0x110);
  uVar17 = *(undefined8 *)(lVar20 + 0x118);
  uVar14 = *(undefined8 *)(lVar20 + 0x108);
  uVar15 = *(undefined8 *)(lVar20 + 200);
  lVar3 = *(long *)(lVar20 + 0xd0);
  lVar13 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar20 + 0x138));
  _swift_release(uVar17);
  _swift_release(uVar9);
  FUN_1000523d8(uVar11,uVar14,FUN_1000e34b0);
  pcVar18 = *(code **)(lVar3 + 0x30);
  (*pcVar18)(uVar14,2,uVar15);
  bVar1 = (int)uVar14 == 0;
  if (bVar1) {
    FUN_1000523d8(*(undefined8 *)(lVar20 + 0x108),*(undefined8 *)(lVar20 + 0x100),FUN_1000dcac4);
  }
  uVar9 = *(undefined8 *)(lVar20 + 0xf8);
  uVar15 = *(undefined8 *)(lVar20 + 0x100);
  lVar2 = *(long *)(lVar20 + 0xe0);
  lVar3 = *(long *)(lVar20 + 0xe8);
  uVar11 = *(undefined8 *)(lVar20 + 200);
  pcVar16 = *(code **)(*(long *)(lVar20 + 0xd0) + 0x38);
  (*pcVar16)(uVar15,!bVar1,1,uVar11);
  (*pcVar16)(uVar9,1,1,uVar11);
  lVar19 = (long)*(int *)(lVar2 + 0x30);
  FUN_100011090(uVar15,lVar3,&DAT_100fad470,&DAT_100c2d0f0);
  FUN_100011090(uVar9,lVar3 + lVar19,&DAT_100fad470,&DAT_100c2d0f0);
  lVar2 = lVar3;
  (*pcVar18)(lVar3,1,uVar11);
  if ((int)lVar2 == 1) {
    uVar9 = *(undefined8 *)(lVar20 + 0x100);
    uVar11 = *(undefined8 *)(lVar20 + 200);
    FUN_100005808(*(undefined8 *)(lVar20 + 0xf8),&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(uVar9,&DAT_100fad470,&DAT_100c2d0f0);
    lVar3 = lVar3 + lVar19;
    (*pcVar18)(lVar3,1,uVar11);
    if ((int)lVar3 == 1) {
      FUN_100005808(*(undefined8 *)(lVar20 + 0xe8),&DAT_100fad470,&DAT_100c2d0f0);
LAB_1000ef688:
      uVar9 = *(undefined8 *)(lVar20 + 0x120);
      uVar12 = *(undefined8 *)(lVar20 + 0x118);
      uVar11 = *(undefined8 *)(lVar20 + 0xc0);
      FUN_1000da768(lVar20 + 0xa8);
      *(undefined8 *)(lVar20 + 0x140) = *(undefined8 *)(lVar20 + 0xa8);
      puVar5 = (undefined8 *)&DAT_100c2d150;
      _swift_getKeyPath();
      puVar6 = &DAT_100c2d178;
      _swift_getKeyPath(&DAT_100c2d178);
      puVar8 = puVar5;
      Combine::Published::_get_subscript(lVar20 + 0x90,uVar11,puVar5,puVar6);
      _swift_release(puVar6);
      _swift_release();
      uVar11 = *(undefined8 *)(lVar20 + 0x90);
      uVar15 = *(undefined8 *)(lVar20 + 0x98);
      *(undefined8 *)(lVar20 + 0x148) = uVar15;
      FUN_1000f3588();
      uVar14 = *puVar5;
      uVar17 = uVar14;
      _swift_retain(uVar14);
      FUN_1000f39b4();
      _swift_release(uVar14);
      *(undefined8 **)(lVar20 + 0x150) = puVar8;
      plVar7 = (long *)0x2c0;
      _swift_task_alloc();
      *(long **)(lVar20 + 0x158) = plVar7;
      *plVar7 = lVar13;
      plVar7[1] = (long)FUN_1000ef774;
      FUN_1000e1ae0(uVar12,uVar9,uVar11,uVar15,uVar17,puVar8);
      return;
    }
  }
  else {
    uVar9 = *(undefined8 *)(lVar20 + 200);
    FUN_100011090(*(undefined8 *)(lVar20 + 0xe8),*(undefined8 *)(lVar20 + 0xf0),&DAT_100fad470,
                  &DAT_100c2d0f0);
    lVar2 = lVar3 + lVar19;
    (*pcVar18)(lVar2,1,uVar9);
    uVar9 = *(undefined8 *)(lVar20 + 0xf8);
    uVar11 = *(undefined8 *)(lVar20 + 0x100);
    uVar10 = *(ulong *)(lVar20 + 0xf0);
    if ((int)lVar2 != 1) {
      uVar15 = *(undefined8 *)(lVar20 + 0xe8);
      uVar17 = *(undefined8 *)(lVar20 + 0xd8);
      FUN_1000523d8(lVar3 + lVar19,uVar17,FUN_1000dcac4);
      uVar4 = uVar10;
      FUN_1000de2ec(uVar10,uVar17);
      FUN_10005241c(uVar17,FUN_1000dcac4);
      FUN_100005808(uVar9,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_100005808(uVar11,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_10005241c(uVar10,FUN_1000dcac4);
      FUN_100005808(uVar15,&DAT_100fad470,&DAT_100c2d0f0);
      if ((uVar4 & 1) != 0) goto LAB_1000ef688;
      goto LAB_1000ef528;
    }
    FUN_100005808(uVar9,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(uVar11,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_10005241c(uVar10,FUN_1000dcac4);
  }
  FUN_100005808(*(undefined8 *)(lVar20 + 0xe8),&DAT_100fad4c8,&DAT_100c2c650);
LAB_1000ef528:
  _swift_release(*(undefined8 *)(lVar20 + 0x118));
  FUN_1000d468c(lVar20 + 0x10);
  uVar9 = *(undefined8 *)(lVar20 + 0x28);
  uVar11 = *(undefined8 *)(lVar20 + 0x30);
  lVar3 = lVar20 + 0x10;
  FUN_100004640(lVar3,uVar9);
  FUN_1000d4dd4(0xd000000000000020,0x8000000100d905b0,uVar9,uVar11,lVar3);
  FUN_100004594(lVar20 + 0x10);
  uVar9 = *(undefined8 *)(lVar20 + 0x108);
  uVar11 = *(undefined8 *)(lVar20 + 0xf8);
  uVar17 = *(undefined8 *)(lVar20 + 0x100);
  uVar15 = *(undefined8 *)(lVar20 + 0xe8);
  uVar14 = *(undefined8 *)(lVar20 + 0xf0);
  uVar12 = *(undefined8 *)(lVar20 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(lVar20 + 0x110));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001000ef5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 8))(0,0);
  return;
}



/* Address: 0x1000ef774 | FUN_1000ef774 */

void FUN_1000ef774(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *in_x3;
  long unaff_x20;
  long *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  String SVar12;
  String SVar13;
  
  lVar10 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar10 + 0x150);
  uVar2 = *(undefined8 *)(lVar10 + 0x140);
  uVar4 = *(undefined8 *)(lVar10 + 0x148);
  uVar9 = *(undefined8 *)(lVar10 + 0x118);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0x158));
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(uVar9);
  _swift_bridgeObjectRelease(uVar4);
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    SVar12 = (String)ZEXT816(0);
  }
  else {
    FUN_1000d468c(lVar10 + 0x38);
    puVar3 = *(undefined **)(lVar10 + 0x50);
    uVar1 = *(undefined8 *)(lVar10 + 0x58);
    _Var6.unknown = puVar3;
    FUN_100004640(lVar10 + 0x38);
    Swift::_StringGuts::grow(0x1d,_Var6);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar7 = (char *)(lVar10 + 0x60);
    _swift_getErrorValue();
    SVar12 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar13.bridgeObject = in_x3;
    SVar13.str = pcVar7;
    Swift::String::append(SVar12,SVar13);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    FUN_1000d4e0c(0xd00000000000001b,0x8000000100d8fd70,puVar3,uVar1);
    _swift_bridgeObjectRelease(0x8000000100d8fd70);
    FUN_100004594(lVar10 + 0x38);
    _swift_getErrorValue();
    SVar12 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    _swift_errorRelease();
  }
  uVar1 = *(undefined8 *)(lVar10 + 0x108);
  uVar2 = *(undefined8 *)(lVar10 + 0xf8);
  uVar9 = *(undefined8 *)(lVar10 + 0x100);
  uVar4 = *(undefined8 *)(lVar10 + 0xe8);
  uVar5 = *(undefined8 *)(lVar10 + 0xf0);
  uVar11 = *(undefined8 *)(lVar10 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0x110));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001000ef93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))(SVar12.str,SVar12.bridgeObject);
  return;
}



/* Address: 0x1000ef940 | FUN_1000ef940 */

void FUN_1000ef940(void)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  Published *pPVar5;
  TaskPriority TVar6;
  MainActor *pMVar7;
  MainActor *this;
  MainActor *pMVar8;
  ulong uVar9;
  String *pSVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 unaff_x20;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  undefined auStack_d0 [8];
  long local_c8;
  LocalizedStringResource local_c0;
  ulong local_b8;
  long local_b0;
  String local_a0;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  puVar2 = &DAT_100fad440;
  local_c0.unknown = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fad440,&DAT_100c2c460);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0;
  local_b0 = lVar11;
  FUN_1000dcac4();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fad4c8;
  local_c8 = lVar11;
  FUN_1000037f0(&DAT_100fad4c8,&DAT_100c2c650);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_02;
  puVar4 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  uVar12 = lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_b8 = uVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = uVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar17 - extraout_x12_00;
  FUN_1000da768(&local_a0);
  FUN_1000da768(&local_68);
  FUN_1001a94ec(lVar16,1);
  _swift_release(local_68);
  _swift_release(local_a0.str);
  (**(code **)(lVar15 + 0x38))(lVar17,1,1,lVar3);
  lVar13 = (long)*(int *)(puVar2 + 0x30);
  FUN_100011090(lVar16,lVar11,&DAT_100fad470,&DAT_100c2d0f0);
  FUN_100011090(lVar17,lVar11 + lVar13,&DAT_100fad470,&DAT_100c2d0f0);
  pcVar14 = *(code **)(lVar15 + 0x30);
  lVar15 = lVar11;
  (*pcVar14)(lVar11,1,lVar3);
  uVar12 = local_b8;
  if ((int)lVar15 == 1) {
    FUN_100005808(lVar17,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(lVar16,&DAT_100fad470,&DAT_100c2d0f0);
    lVar13 = lVar11 + lVar13;
    (*pcVar14)(lVar13,1,lVar3);
    if ((int)lVar13 == 1) {
      FUN_100005808(lVar11,&DAT_100fad470,&DAT_100c2d0f0);
LAB_1000efe30:
      FUN_1000d468c(&local_a0);
      pSVar10 = &local_a0;
      FUN_100004640(pSVar10,local_88);
      FUN_1000d4e0c(0xd000000000000027,0x8000000100d904e0,local_88,local_80,pSVar10);
      FUN_100004594(&local_a0);
      _swift_retain(unaff_x20);
      LVar1.unknown = local_c0.unknown;
      FUN_1001c4cf4(local_c0.unknown);
      SVar18 = (extension_Foundation)::Swift::String::init(LVar1);
      puVar2 = &DAT_100c2d0f8;
      _swift_getKeyPath(&DAT_100c2d0f8);
      puVar4 = &DAT_100c2d120;
      _swift_getKeyPath(&DAT_100c2d120);
      local_90 = 0xd000000000000022;
      local_88 = 0x8000000100d90510;
      local_80 = thunk_FUN_1000f1a44;
      local_a0 = SVar18;
      _swift_retain(unaff_x20);
      Combine::Published::_set_subscript(SVar18.bridgeObject,&local_a0,unaff_x20,puVar2,puVar4);
      return;
    }
  }
  else {
    FUN_100011090(lVar11,local_b8,&DAT_100fad470,&DAT_100c2d0f0);
    lVar15 = lVar11 + lVar13;
    (*pcVar14)(lVar15,1,lVar3);
    lVar3 = local_c8;
    if ((int)lVar15 != 1) {
      FUN_1000523d8(lVar11 + lVar13,local_c8,FUN_1000dcac4);
      uVar9 = uVar12;
      FUN_1000de2ec(uVar12,lVar3);
      FUN_10005241c(lVar3,FUN_1000dcac4);
      FUN_100005808(lVar17,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_100005808(lVar16,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_10005241c(uVar12,FUN_1000dcac4);
      FUN_100005808(lVar11,&DAT_100fad470,&DAT_100c2d0f0);
      if ((uVar9 & 1) != 0) goto LAB_1000efe30;
      goto LAB_1000efc7c;
    }
    FUN_100005808(lVar17,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(lVar16,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_10005241c(uVar12,FUN_1000dcac4);
  }
  FUN_100005808(lVar11,&DAT_100fad4c8,&DAT_100c2c650);
LAB_1000efc7c:
  puVar2 = &DAT_100c2d0f8;
  _swift_getKeyPath(&DAT_100c2d0f8);
  pPVar5 = (Published *)&DAT_100c2d120;
  _swift_getKeyPath(&DAT_100c2d120);
  local_a0 = (String)(ZEXT816(1) << 0x40);
  local_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = (code *)0x0;
  _swift_retain(unaff_x20);
  Combine::Published::_set_subscript(pPVar5,&local_a0,unaff_x20,puVar2,pPVar5);
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = local_b0;
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(local_b0,1,1,TVar6.unknown);
  pMVar7 = (MainActor *)&DAT_100eb69a0;
  _swift_allocObject(&DAT_100eb69a0,0x18,7);
  _swift_weakInit(pMVar7 + 0x10,unaff_x20);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = pMVar7;
  _swift_retain();
  pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
  puVar2 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar4 = &DAT_100eb69c8;
  _swift_allocObject(&DAT_100eb69c8,0x28,7);
  *(MainActor **)(puVar4 + 0x10) = pMVar8;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(MainActor **)(puVar4 + 0x20) = pMVar7;
  _swift_release(pMVar7);
  FUN_1000e3fb0(0,0,lVar13,&DAT_100c2d148,puVar4);
  _swift_release();
  return;
}



/* Address: 0x1000eff38 | FUN_1000eff38 */

void FUN_1000eff38(void)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = in_x3;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(LVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  lVar4 = 0;
  FUN_1000dcac4();
  *(long *)(unaff_x22 + 0xd8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  puVar5 = &DAT_100fad4c8;
  FUN_1000037f0(&DAT_100fad4c8,&DAT_100c2c650);
  *(undefined **)(unaff_x22 + 0xf0) = puVar5;
  uVar3 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
  puVar5 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  uVar3 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar6 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar6;
  uVar6 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar6;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x110) = uVar3;
  lVar4 = 0;
  FUN_1000e34b0();
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar6 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar6;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar3;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  *(MainActor **)(unaff_x22 + 0x128) = pMVar7;
  puVar5 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined **)(unaff_x22 + 0x130) = puVar5;
  UVar8 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1000f00b4,UVar8.unknown,puVar5);
  return;
}



/* Address: 0x1000f00b4 | FUN_1000f00b4 */

void FUN_1000f00b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(unaff_x22 + 200) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x138) = lVar5;
  if (lVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar7 = *(undefined8 *)
             (lVar5 + _TtC20PasteLicensingDirect16PaywallViewModel::directLicenseManager);
    _swift_retain(uVar7);
    FUN_1000da768(unaff_x22 + 0xc0);
    _swift_release(uVar7);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0xc0);
    plVar6 = (long *)0x500;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x148) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1000f01e0;
    FUN_1000dfabc(plVar6,*(undefined8 *)(unaff_x22 + 0x120),uVar1,uVar2,0);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x128));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x120));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001000f01dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000f01e0 | FUN_1000f01e0 */

void FUN_1000f01e0(void)

{
  bool bVar1;
  long lVar2;
  Published *pPVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  Published *pPVar9;
  undefined8 uVar10;
  LocalizedStringResource localized;
  long *unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  
  lVar20 = *unaff_x22;
  uVar8 = *(undefined8 *)(lVar20 + 0x140);
  uVar10 = *(undefined8 *)(lVar20 + 0x120);
  uVar15 = *(undefined8 *)(lVar20 + 0x128);
  uVar12 = *(undefined8 *)(lVar20 + 0x118);
  uVar13 = *(undefined8 *)(lVar20 + 0xd8);
  lVar2 = *(long *)(lVar20 + 0xe0);
  lVar11 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar20 + 0x148));
  _swift_release(uVar15);
  _swift_release(uVar8);
  FUN_1000523d8(uVar10,uVar12,FUN_1000e34b0);
  pcVar17 = *(code **)(lVar2 + 0x30);
  (*pcVar17)(uVar12,2,uVar13);
  bVar1 = (int)uVar12 == 0;
  if (bVar1) {
    FUN_1000523d8(*(undefined8 *)(lVar20 + 0x118),*(undefined8 *)(lVar20 + 0x110),FUN_1000dcac4);
  }
  uVar8 = *(undefined8 *)(lVar20 + 0x108);
  uVar13 = *(undefined8 *)(lVar20 + 0x110);
  lVar7 = *(long *)(lVar20 + 0xf0);
  lVar2 = *(long *)(lVar20 + 0xf8);
  uVar10 = *(undefined8 *)(lVar20 + 0xd8);
  pcVar14 = *(code **)(*(long *)(lVar20 + 0xe0) + 0x38);
  (*pcVar14)(uVar13,!bVar1,1,uVar10);
  (*pcVar14)(uVar8,1,1,uVar10);
  lVar19 = (long)*(int *)(lVar7 + 0x30);
  FUN_100011090(uVar13,lVar2,&DAT_100fad470,&DAT_100c2d0f0);
  FUN_100011090(uVar8,lVar2 + lVar19,&DAT_100fad470,&DAT_100c2d0f0);
  lVar7 = lVar2;
  (*pcVar17)(lVar2,1,uVar10);
  if ((int)lVar7 == 1) {
    uVar8 = *(undefined8 *)(lVar20 + 0x110);
    uVar10 = *(undefined8 *)(lVar20 + 0xd8);
    FUN_100005808(*(undefined8 *)(lVar20 + 0x108),&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(uVar8,&DAT_100fad470,&DAT_100c2d0f0);
    lVar2 = lVar2 + lVar19;
    (*pcVar17)(lVar2,1,uVar10);
    if ((int)lVar2 == 1) {
      FUN_100005808(*(undefined8 *)(lVar20 + 0xf8),&DAT_100fad470,&DAT_100c2d0f0);
LAB_1000f056c:
      lVar7 = *(long *)(lVar20 + 0x138);
      localized.unknown = *(undefined **)(lVar20 + 0xd0);
      uVar8 = *(undefined8 *)(lVar7 + _TtC20PasteLicensingDirect16PaywallViewModel::logger);
      _swift_retain(uVar8);
      FUN_1000d468c(lVar20 + 0x98);
      _swift_release(uVar8);
      uVar8 = *(undefined8 *)(lVar20 + 0xb0);
      uVar10 = *(undefined8 *)(lVar20 + 0xb8);
      lVar2 = lVar20 + 0x98;
      FUN_100004640(lVar2,uVar8);
      FUN_1000d4e0c(0xd00000000000002f,0x8000000100d90580,uVar8,uVar10,lVar2);
      FUN_100004594(lVar20 + 0x98);
      _swift_retain(lVar7);
      FUN_1001c4cf4(localized.unknown);
      SVar21 = (extension_Foundation)::Swift::String::init(localized);
      pPVar3 = (Published *)&DAT_100c2d0f8;
      _swift_getKeyPath(&DAT_100c2d0f8);
      puVar4 = &DAT_100c2d120;
      _swift_getKeyPath(&DAT_100c2d120);
      *(String *)(lVar20 + 0x40) = SVar21;
      *(undefined8 *)(lVar20 + 0x50) = 0xd000000000000022;
      *(undefined8 *)(lVar20 + 0x58) = 0x8000000100d90510;
      *(code **)(lVar20 + 0x60) = FUN_1000f1a44;
      *(long *)(lVar20 + 0x68) = lVar7;
      lVar2 = lVar20 + 0x40;
      pPVar9 = (Published *)SVar21.str;
      goto LAB_1000f0654;
    }
LAB_1000f03e8:
    FUN_100005808(*(undefined8 *)(lVar20 + 0xf8),&DAT_100fad4c8,&DAT_100c2c650);
  }
  else {
    uVar8 = *(undefined8 *)(lVar20 + 0xd8);
    FUN_100011090(*(undefined8 *)(lVar20 + 0xf8),*(undefined8 *)(lVar20 + 0x100),&DAT_100fad470,
                  &DAT_100c2d0f0);
    lVar7 = lVar2 + lVar19;
    (*pcVar17)(lVar7,1,uVar8);
    uVar8 = *(undefined8 *)(lVar20 + 0x108);
    uVar10 = *(undefined8 *)(lVar20 + 0x110);
    uVar6 = *(ulong *)(lVar20 + 0x100);
    if ((int)lVar7 == 1) {
      FUN_100005808(uVar8,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_100005808(uVar10,&DAT_100fad470,&DAT_100c2d0f0);
      FUN_10005241c(uVar6,FUN_1000dcac4);
      goto LAB_1000f03e8;
    }
    uVar13 = *(undefined8 *)(lVar20 + 0xf8);
    uVar15 = *(undefined8 *)(lVar20 + 0xe8);
    FUN_1000523d8(lVar2 + lVar19,uVar15,FUN_1000dcac4);
    uVar5 = uVar6;
    FUN_1000de2ec(uVar6,uVar15);
    FUN_10005241c(uVar15,FUN_1000dcac4);
    FUN_100005808(uVar8,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_100005808(uVar10,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_10005241c(uVar6,FUN_1000dcac4);
    FUN_100005808(uVar13,&DAT_100fad470,&DAT_100c2d0f0);
    if ((uVar5 & 1) != 0) goto LAB_1000f056c;
  }
  lVar7 = *(long *)(lVar20 + 0x138);
  uVar8 = *(undefined8 *)(lVar7 + _TtC20PasteLicensingDirect16PaywallViewModel::logger);
  _swift_retain(uVar8);
  FUN_1000d468c(lVar20 + 0x70);
  _swift_release(uVar8);
  uVar8 = *(undefined8 *)(lVar20 + 0x88);
  uVar10 = *(undefined8 *)(lVar20 + 0x90);
  lVar2 = lVar20 + 0x70;
  FUN_100004640(lVar2,uVar8);
  FUN_1000d4dd4(0xd00000000000001d,0x8000000100d90540,uVar8,uVar10,lVar2);
  FUN_100004594(lVar20 + 0x70);
  pPVar3 = (Published *)&DAT_100c2d0f8;
  _swift_getKeyPath(&DAT_100c2d0f8);
  puVar4 = &DAT_100c2d120;
  _swift_getKeyPath(&DAT_100c2d120);
  *(undefined1 **)(lVar20 + 0x18) = &DAT_e800000000000000;
  builtin_strncpy((char *)(lVar20 + 0x10),"Success!",8);
  *(undefined8 *)(lVar20 + 0x20) = 0xd00000000000001f;
  *(undefined8 *)(lVar20 + 0x28) = 0x8000000100d90560;
  *(code **)(lVar20 + 0x30) = FUN_1000f1a2c;
  *(long *)(lVar20 + 0x38) = lVar7;
  _swift_retain(lVar7);
  lVar2 = lVar20 + 0x10;
  pPVar9 = pPVar3;
LAB_1000f0654:
  Combine::Published::_set_subscript(pPVar9,lVar2,lVar7,pPVar3,puVar4);
  uVar8 = *(undefined8 *)(lVar20 + 0x118);
  uVar10 = *(undefined8 *)(lVar20 + 0x108);
  uVar15 = *(undefined8 *)(lVar20 + 0x110);
  uVar13 = *(undefined8 *)(lVar20 + 0xf8);
  uVar12 = *(undefined8 *)(lVar20 + 0x100);
  uVar16 = *(undefined8 *)(lVar20 + 0xe8);
  uVar18 = *(undefined8 *)(lVar20 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(lVar20 + 0x120));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001000f06c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 8))();
  return;
}



/* Address: 0x1000f06cc | FUN_1000f06cc */

void FUN_1000f06cc(undefined8 param_1)

{
  Published *pPVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pPVar1 = (Published *)&DAT_100c2d0f8;
  _swift_getKeyPath(&DAT_100c2d0f8);
  puVar2 = &DAT_100c2d120;
  _swift_getKeyPath(&DAT_100c2d120);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  _swift_retain(param_1);
  Combine::Published::_set_subscript(pPVar1,&local_60,param_1,pPVar1,puVar2);
  return;
}



/* Address: 0x1000f0740 | FUN_1000f0740 */

void FUN_1000f0740(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  code *pcVar4;
  
  lVar1 = _TtC20PasteLicensingDirect16PaywallViewModel::_licenseKey;
  puVar2 = &DAT_100fadee8;
  FUN_1000037f0(&DAT_100fadee8,&DAT_100c2d2b8);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC20PasteLicensingDirect16PaywallViewModel::_state;
  puVar2 = &DAT_100fadef0;
  FUN_1000037f0(&DAT_100fadef0,&DAT_100c2d2c0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC20PasteLicensingDirect16PaywallViewModel::_isEnteringKey;
  puVar2 = &DAT_100fadef8;
  FUN_1000037f0(&DAT_100fadef8,&DAT_100c2d2c8);
  pcVar4 = *(code **)(*(long *)(puVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC20PasteLicensingDirect16PaywallViewModel::_keyEntryError;
  puVar3 = &DAT_100fadf00;
  FUN_1000037f0(&DAT_100fadf00,&DAT_100c2d2d0);
  (**(code **)(*(long *)(puVar3 + -8) + 8))(unaff_x20 + lVar1,puVar3);
  (*pcVar4)(unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::_isActivatingKey,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::logger));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::directLicenseManager));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::licenseManager));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::trialManager));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::cancellables)
            );
  FUN_100004594(unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::router);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::onDismiss)
                ,((undefined8 *)
                 (unaff_x20 + _TtC20PasteLicensingDirect16PaywallViewModel::onDismiss))[1]);
  return;
}



/* Address: 0x1000f08b0 | FUN_1000f08b0 */

void FUN_1000f08b0(void)

{
  FUN_1000f0740();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000f08d4 | FUN_1000f08d4 */

void FUN_1000f08d4(void)

{
  FUN_1000f08dc(0);
  return;
}



/* Address: 0x1000f08dc | FUN_1000f08dc */

void FUN_1000f08dc(undefined8 param_1)

{
  if (DAT_100fadc48 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca2e60);
  return;
}


