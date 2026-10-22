/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b04c48 | FUN_100b04c48 */

void FUN_100b04c48(undefined8 *param_1,Alignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2.unknown);
  *param_1 = HVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_100ffa098;
  FUN_1000037f0(&DAT_100ffa098,&DAT_100c97250);
  FUN_100b04cf0((long)param_1 + (long)*(int *)(puVar2 + 0x2c));
  SwiftUI::Alignment::get_center(param_2);
  SwiftUI::_FrameLayout::_init((Alignment)0x4058000000000000);
  puVar2 = &DAT_100ffa0a0;
  FUN_1000037f0(&DAT_100ffa0a0,&DAT_100c97258);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x24));
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = local_30;
  return;
}



/* Address: 0x100b04cf0 | FUN_100b04cf0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b04e30 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b04cf0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  State SVar10;
  VerticalAlignment VVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x12;
  undefined8 *puVar13;
  ulong uVar14;
  MainActor *local_d0;
  undefined1 local_c1;
  undefined8 local_c0 [2];
  ulong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_98;
  undefined1 auStack_88 [40];
  
  puVar5 = &DAT_100ffa0a8;
  FUN_1000037f0(&DAT_100ffa0a8,&DAT_100c97260);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar12 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = (undefined8 *)(lVar12 - extraout_x12);
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_d0 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,0x35,UVar8.unknown,puVar7);
  }
  local_c0[1] = *(undefined8 *)(param_2 + 0x20);
  local_c0[0] = *(undefined8 *)(param_2 + 0x18);
  local_a8 = *(undefined8 *)(param_2 + 0x30);
  local_b0 = *(ulong *)(param_2 + 0x28);
  SVar10.unknown = &DAT_100ffa0b0;
  FUN_1000037f0(&DAT_100ffa0b0,&DAT_100c97268);
  SwiftUI::State::get_projectedValue(SVar10);
  local_c1 = 0;
  SwiftUI::Binding::constant(local_c0,SVar10.unknown,PTR___type_metadata_for_Swift_Bool_100eac570);
  VVar11.unknown = auStack_88;
  FUN_1003caa80(local_c0,VVar11.unknown,local_c0[0],local_c0[1],local_b0 & 0xff);
  VVar11 = SwiftUI::VerticalAlignment::get_top(VVar11);
  *puVar13 = VVar11.unknown;
  puVar13[1] = 0x4010000000000000;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar5 = &DAT_100ffa0b8;
  FUN_1000037f0(&DAT_100ffa0b8,&DAT_100c97270);
  FUN_100b04f7c((long)puVar13 + (long)*(int *)(puVar5 + 0x2c),param_2);
  uVar4 = local_a8;
  uVar2 = local_c0[1];
  uVar1 = local_c0[0];
  uVar3 = (undefined1)local_b0;
  uVar14 = local_b0 & 0xff;
  FUN_100011090(puVar13,lVar12,&DAT_100ffa0a8,&DAT_100c97260);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uStack_a0;
  *(byte *)(param_1 + 5) = local_98 & 1;
  puVar5 = &DAT_100ffa0c0;
  FUN_1000037f0(&DAT_100ffa0c0,&DAT_100c97278);
  FUN_100011090(lVar12,(long)param_1 + (long)*(int *)(puVar5 + 0x30),&DAT_100ffa0a8);
  FUN_1001eebf0(uVar1,uVar2,uVar14);
  _swift_retain(uVar4);
  _swift_retain(uStack_a0);
  FUN_100005808(puVar13,&DAT_100ffa0a8,&DAT_100c97260);
  FUN_100005808(lVar12,&DAT_100ffa0a8,&DAT_100c97260);
  FUN_1001eebe0(uVar1,uVar2,uVar14);
  _swift_release(local_d0);
  _swift_release(uStack_a0);
  _swift_release(uVar4);
  return;
}



/* Address: 0x100b04f7c | FUN_100b04f7c */

void FUN_100b04f7c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  Color param_5)

{
  undefined4 uVar1;
  String systemName;
  bool bVar2;
  TemplateRenderingMode TVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  State SVar10;
  State SVar11;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  Color CVar15;
  Text TVar16;
  String *pSVar17;
  Image IVar18;
  undefined7 extraout_var;
  Image IVar19;
  Image IVar20;
  undefined *puVar21;
  Text TVar22;
  void *pvVar23;
  undefined *puVar24;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar25;
  long extraout_x8_01;
  long lVar26;
  long extraout_x12;
  long lVar27;
  undefined *local_110;
  Image local_108;
  LocalizedStringResource local_100;
  undefined *local_f8;
  long local_f0;
  MainActor *local_e8;
  long local_e0;
  undefined8 *local_d8;
  String local_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *local_a8;
  String *pSStack_a0;
  undefined *local_90;
  String *pSStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  local_d8 = param_1;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  puVar25 = (undefined *)((long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100ffa0c8;
  local_100.unknown = puVar25;
  FUN_1000037f0(&DAT_100ffa0c8,&DAT_100c97280);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = puVar25 + -extraout_x8_00;
  puVar5 = &DAT_100ffa0d0;
  local_108.unknown = puVar25;
  FUN_1000037f0(&DAT_100ffa0d0,&DAT_100c97288);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar26 = (long)puVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_f0 = lVar26 - extraout_x12;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_e8 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    param_5.unknown = &DAT_00000038;
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,0x38,UVar8.unknown,puVar7);
  }
  local_d0 = *(String *)(param_2 + 0x18);
  uStack_b8 = *(undefined8 *)(param_2 + 0x30);
  uStack_c0 = *(undefined8 *)(param_2 + 0x28);
  pSStack_88 = *(String **)(param_2 + 0x20);
  local_90 = *(undefined **)(param_2 + 0x18);
  uStack_78 = *(undefined8 *)(param_2 + 0x30);
  local_80 = *(undefined **)(param_2 + 0x28);
  SVar10.unknown = &DAT_100ffa0b0;
  FUN_1000037f0(&DAT_100ffa0b0,&DAT_100c97268);
  SVar11.unknown = SVar10.unknown;
  SwiftUI::State::get_wrappedValue(SVar10);
  local_90 = local_a8;
  pSStack_88 = pSStack_a0;
  FUN_100b02f84();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  local_110 = SVar11.unknown;
  TVar12 = SwiftUI::Text::_init();
  FVar13 = SwiftUI::Font::get_callout(TVar12.unknown);
  TVar22 = TVar12;
  puVar25 = puVar5;
  puVar21 = SVar11.unknown;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100016d74(TVar12.unknown,puVar5,SVar11.unknown);
  _swift_bridgeObjectRelease();
  CVar15 = SwiftUI::Color::get_secondary(param_5);
  TVar12 = TVar14;
  puVar5 = TVar22.unknown;
  puVar24 = puVar25;
  TVar16 = SwiftUI::Text::_foregroundColor(CVar15.unknown);
  local_f8 = puVar24;
  _swift_release(CVar15.unknown);
  FUN_100016d74(TVar14.unknown,TVar22.unknown,puVar25);
  _swift_bridgeObjectRelease(puVar21);
  SwiftUI::State::get_wrappedValue(SVar10);
  pSVar17 = pSStack_88;
  _swift_bridgeObjectRelease();
  bVar2 = (char)local_80 != '\x01';
  lVar26 = local_f0;
  if (!bVar2) {
    FUN_10020cf40();
    systemName = *pSVar17;
    _swift_bridgeObjectRetain(pSVar17->bridgeObject);
    IVar18 = SwiftUI::Image::init(systemName);
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_Image_TemplateRenderingMode_original_SwiftUI_Image_TemplateRenderingMode_Type___>_SwiftUI_Image_TemplateRenderingMode_100eab768
    ;
    TVar3 = SwiftUI::Image::TemplateRenderingMode::typeMetadataAccessor();
    IVar20.unknown = local_108.unknown;
    lVar26 = CONCAT71(extraout_var,TVar3.value);
    lVar27 = *(long *)(lVar26 + -8);
    (**(code **)(lVar27 + 0x68))(local_108.unknown,uVar1,lVar26);
    (**(code **)(lVar27 + 0x38))(IVar20.unknown,0,1,lVar26);
    IVar19 = SwiftUI::Image::_renderingMode(IVar20);
    _swift_release(IVar18.unknown);
    FUN_100005808(IVar20.unknown,&DAT_100ffa0c8,&DAT_100c97280);
    FVar13 = SwiftUI::Font::get_callout(IVar20.unknown);
    pSVar17 = (String *)&DAT_100c972a0;
    _swift_getKeyPath();
    LVar4.unknown = local_100.unknown;
    local_90 = IVar19.unknown;
    pSStack_88 = pSVar17;
    local_80 = FVar13.unknown;
    FUN_1001d7654(local_100.unknown);
    local_d0 = (extension_Foundation)::Swift::String::init(LVar4);
    pvVar23 = local_d0.bridgeObject;
    puVar25 = &DAT_100ffa0e8;
    FUN_1000037f0(&DAT_100ffa0e8,&DAT_100c972d0);
    puVar21 = puVar25;
    FUN_100b07f30();
    lVar26 = local_f0;
    (extension_SwiftUI)::SwiftUI::View::_help
              (local_f0,&local_d0,puVar25,PTR___type_metadata_for_Swift_String_100eac208,puVar21,
               local_110);
    _swift_release(FVar13.unknown);
    _swift_release(pSVar17);
    _swift_release(IVar19.unknown);
    _swift_bridgeObjectRelease(pvVar23);
  }
  puVar25 = &DAT_100ffa0d8;
  FUN_1000037f0(&DAT_100ffa0d8,&DAT_100c97290);
  (**(code **)(*(long *)(puVar25 + -8) + 0x38))(lVar26,bVar2,1,puVar25);
  lVar27 = local_e0;
  FUN_100011090(lVar26,local_e0,&DAT_100ffa0d0,&DAT_100c97288);
  puVar7 = local_d8;
  puVar21 = local_f8;
  *local_d8 = TVar16.unknown;
  local_d8[1] = TVar12.unknown;
  *(char *)(local_d8 + 2) = (char)puVar5;
  local_d8[3] = local_f8;
  puVar25 = &DAT_100ffa0e0;
  FUN_1000037f0(&DAT_100ffa0e0,&DAT_100c97298);
  FUN_100011090(lVar27,(long)puVar7 + (long)*(int *)(puVar25 + 0x30),&DAT_100ffa0d0,&DAT_100c97288);
  FUN_100016d5c(TVar16.unknown,TVar12.unknown,puVar5);
  _swift_bridgeObjectRetain(puVar21);
  FUN_100005808(lVar26,&DAT_100ffa0d0,&DAT_100c97288);
  FUN_100005808(lVar27,&DAT_100ffa0d0,&DAT_100c97288);
  FUN_100016d74(TVar16.unknown,TVar12.unknown,puVar5);
  _swift_release(local_e8);
  _swift_bridgeObjectRelease(puVar21);
  return;
}



/* Address: 0x100b05480 | FUN_100b05480 */

void FUN_100b05480(undefined8 *param_1)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
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
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0x51;
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,0x51,UVar4.unknown,puVar3);
  }
  FUN_1001c0a88(LVar1.unknown);
  local_50 = (extension_Foundation)::Swift::String::init(LVar1);
  uVar8 = local_50.str._0_1_;
  FUN_100b02f84();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar2);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = in_x3;
  return;
}



/* Address: 0x100b055ac | FUN_100b055ac */

void FUN_100b055ac(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  local_40 = unaff_x20[4];
  local_30 = unaff_x20[6];
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar2 = &DAT_100ff9ff8;
  FUN_1000037f0(&DAT_100ff9ff8,&DAT_100c971b8);
  FUN_100b036a4((long)param_1 + (long)*(int *)(puVar2 + 0x2c),&local_60);
  return;
}



/* Address: 0x100b0561c | thunk_FUN_100b08ab0 */

void thunk_FUN_100b08ab0(void)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  pcVar1 = *(code **)(unaff_x20 + _TtC15PasteOnboarding14SetupViewModel::onComplete);
  puVar4 = &DAT_100c97588;
  _swift_getKeyPath(&DAT_100c97588);
  puVar5 = &DAT_100c975b0;
  _swift_getKeyPath(&DAT_100c975b0);
  Combine::Published::_get_subscript(&uStack_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  uVar2 = uStack_68;
  puVar4 = &DAT_100c975d0;
  _swift_getKeyPath(&DAT_100c975d0);
  puVar5 = &DAT_100c975f8;
  _swift_getKeyPath(&DAT_100c975f8);
  Combine::Published::_get_subscript(&uStack_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  uVar3 = uStack_68;
  puVar4 = &DAT_100c97618;
  _swift_getKeyPath(&DAT_100c97618);
  puVar5 = &DAT_100c97640;
  _swift_getKeyPath(&DAT_100c97640);
  Combine::Published::_get_subscript(&uStack_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  (*pcVar1)(uVar2,uVar3,CONCAT71(uStack_67,uStack_68),uStack_60,uStack_58);
  (**(code **)(unaff_x20 + _TtC15PasteOnboarding14SetupViewModel::next))();
  return;
}



/* Address: 0x100b05620 | thunk_FUN_100b056b8 */

void thunk_FUN_100b056b8(void)

{
  long unaff_x20;
  
  FUN_1001eebe0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b05624 | FUN_100b05624 */

void FUN_100b05624(void)

{
  long unaff_x20;
  
  FUN_100b048ec(unaff_x20 + 0x10,&DAT_100c97378,FUN_100004520);
  return;
}



/* Address: 0x100b0564c | FUN_100b0564c */

undefined8 FUN_100b0564c(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1000884a8(param_2,param_1);
  return param_2;
}



/* Address: 0x100b05688 | FUN_100b05688 */

void FUN_100b05688(void)

{
  long unaff_x20;
  
  FUN_100b048ec(unaff_x20 + 0x10,&DAT_100c97310,FUN_100004520);
  return;
}



/* Address: 0x100b056b0 | FUN_100b056b0 */

void FUN_100b056b0(void)

{
  long unaff_x20;
  
  FUN_100b04b5c(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100b056b8 | FUN_100b056b8 */

void FUN_100b056b8(void)

{
  long unaff_x20;
  
  FUN_1001eebe0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b056f0 | FUN_100b056f0 */

void FUN_100b056f0(void)

{
  long unaff_x20;
  
  FUN_100b04c48(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100b056f8 | FUN_100b056f8 */

void FUN_100b056f8(void *param_1,HorizontalAlignment param_2)

{
  void *pvVar1;
  byte bVar2;
  HorizontalAlignment HVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  TaskPriority TVar8;
  undefined *puVar9;
  _TaskModifier _Var10;
  _StringGuts _Var11;
  char *pcVar12;
  long extraout_x8;
  long lVar13;
  undefined8 *unaff_x20;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  long local_e90;
  long local_e88;
  undefined *local_e80;
  long local_e78;
  char *local_e70;
  void *local_e68;
  undefined8 local_e60 [75];
  char *local_c08;
  void *local_c00;
  undefined1 local_bf8;
  undefined1 auStack_bf7 [583];
  undefined1 auStack_9b0 [576];
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined1 auStack_740 [576];
  undefined1 auStack_500 [576];
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined1 auStack_2af [591];
  
  local_e68 = param_1;
  HVar3 = SwiftUI::HorizontalAlignment::get_center(param_2);
  FUN_100b05b20(&local_2c0);
  _memcpy(auStack_740,&local_2c0,0x239);
  _memcpy(auStack_500,&local_2c0,0x239);
  FUN_100011090(auStack_740,&local_c08,&DAT_100ffa218,&DAT_100c974b0);
  FUN_100005808(auStack_500,&DAT_100ffa218,&DAT_100c974b0);
  _memcpy((void *)((ulong)auStack_9b0 | 7),auStack_740,0x239);
  uStack_748 = unaff_x20[1];
  local_750 = *unaff_x20;
  uStack_758 = unaff_x20[3];
  local_760 = unaff_x20[2];
  uStack_768 = unaff_x20[5];
  local_770 = unaff_x20[4];
  this = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  FUN_10000ca28(&local_750,&local_2c0);
  FUN_10000ca28(&local_760,&local_2c0);
  puVar9 = &DAT_100c974c0;
  pMVar4 = (MainActor *)&local_770;
  FUN_100011090(pMVar4,&local_2c0,&DAT_100ffa220);
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar5 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar6 = &DAT_100f33ea8;
  _swift_allocObject(&DAT_100f33ea8,0x50,7);
  *(MainActor **)(puVar6 + 0x10) = pMVar4;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  uVar17 = *unaff_x20;
  uVar19 = unaff_x20[3];
  uVar18 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x20) = uVar17;
  *(undefined8 *)(puVar6 + 0x38) = uVar19;
  *(undefined8 *)(puVar6 + 0x30) = uVar18;
  uVar17 = unaff_x20[4];
  *(undefined8 *)(puVar6 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x40) = uVar17;
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  lVar14 = *(long *)(TVar7.unknown + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  TVar8 = TVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar16 = lVar15 + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)&local_e90 - uVar16;
  Swift::TaskPriority::get_userInitiated(TVar8);
  local_2b8 = 0;
  local_2b0 = 1;
  local_2c0 = HVar3.unknown;
  _memcpy(auStack_2af,auStack_9b0,0x240);
  _Var11.unknown = (undefined *)0x4;
  pcVar12 = (char *)0x0;
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  if ((bVar2 & 1) == 0) {
    puVar9 = &DAT_100ff99b0;
    FUN_1000037f0(&DAT_100ff99b0,&DAT_100c96688);
    pvVar1 = local_e68;
    puVar5 = (undefined8 *)((long)local_e68 + (long)*(int *)(puVar9 + 0x24));
    _Var10 = SwiftUI::_TaskModifier::typeMetadataAccessor();
    (**(code **)(lVar14 + 0x20))
              ((long)puVar5 + (long)*(int *)(_Var10.unknown + 0x14),lVar15,TVar7.unknown);
    *puVar5 = &DAT_100c974c8;
    puVar5[1] = puVar6;
    _memcpy(pvVar1,&local_2c0,0x251);
  }
  else {
    local_e80 = (undefined *)SwiftUI::_TaskModifier2::typeMetadataAccessor();
    local_e88 = *(long *)(local_e80 + -8);
    local_e78 = lVar15;
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e88 + 0x40));
    lVar13 = lVar15 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_c08 = (char *)0x0;
    local_c00 = (void *)0xe000000000000000;
    local_e90 = lVar13;
    Swift::_StringGuts::grow(0x11,_Var11);
    _swift_bridgeObjectRelease(local_c00);
    local_c08 = (char *)0xd00000000000002c;
    local_c00 = (void *)0x8000000100dbbf70;
    local_e60[0] = 0x7d;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar21.bridgeObject = puVar9;
    SVar21.str = pcVar12;
    Swift::String::append(SVar20,SVar21);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar20.bridgeObject = local_c00;
    SVar20.str = local_c08;
    local_e70 = (char *)HVar3;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    (**(code **)(lVar14 + 0x10))(lVar13 - uVar16,lVar15,TVar7.unknown);
    lVar13 = local_e90;
    SwiftUI::_TaskModifier2::_init(SVar20,(TaskPriority)0x0);
    (**(code **)(lVar14 + 8))(lVar15,TVar7.unknown);
    HVar3.unknown = local_e70;
    puVar9 = &DAT_100ff99c0;
    FUN_1000037f0(&DAT_100ff99c0,&DAT_100c96698);
    pvVar1 = local_e68;
    (**(code **)(local_e88 + 0x20))
              ((long)local_e68 + (long)*(int *)(puVar9 + 0x24),lVar13,local_e80);
    _memcpy(pvVar1,&local_2c0,0x251);
  }
  local_c00 = (void *)0x0;
  local_bf8 = 1;
  local_c08 = HVar3.unknown;
  _memcpy(auStack_bf7,auStack_9b0,0x240);
  FUN_100011090(&local_2c0,local_e60,&DAT_100ff99b8,&DAT_100c96690);
  FUN_100005808(&local_c08,&DAT_100ff99b8,&DAT_100c96690);
  return;
}



/* Address: 0x100b05b20 | FUN_100b05b20 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b061c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b05b20(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 *puVar1;
  ResizingMode RVar2;
  Design DVar3;
  undefined *puVar4;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  NSImage *nsImage;
  Image IVar10;
  Image IVar11;
  EdgeInsets EVar12;
  _FrameLayout _Var13;
  Set SVar14;
  Source SVar15;
  Color CVar16;
  Text TVar17;
  Font FVar18;
  Text TVar19;
  Alignment AVar20;
  Text TVar21;
  void *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  EdgeInsets capInsets;
  long lVar22;
  code *pcVar23;
  CGFloat CVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_14c0;
  undefined1 auStack_14b8 [8];
  undefined8 uStack_14b0;
  undefined1 auStack_14a8 [8];
  undefined8 auStack_14a0 [2];
  undefined1 auStack_1490 [4];
  undefined4 local_148c;
  undefined *local_1488;
  code *local_1480;
  long local_1478;
  undefined *local_1470;
  MainActor *local_1468;
  void *local_1460;
  undefined1 *local_1458;
  undefined8 *local_1450;
  undefined8 uStack_1448;
  undefined *local_1438;
  undefined8 uStack_1430;
  undefined1 local_1428;
  undefined8 local_1420;
  undefined1 local_1418;
  undefined8 local_1410;
  undefined8 uStack_1408;
  undefined *local_1400;
  code *pcStack_13f8;
  undefined8 local_13f0;
  undefined8 local_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 local_12f0;
  undefined8 uStack_12de;
  undefined *local_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined *local_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined *puStack_1298;
  undefined *local_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined *local_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  code *pcStack_1200;
  undefined8 uStack_11f8;
  undefined1 local_11f0;
  undefined *local_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined1 local_1118;
  undefined *local_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 local_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined1 local_1040;
  undefined *local_1030;
  undefined8 uStack_1028;
  undefined8 local_1020;
  undefined8 local_1018;
  undefined *local_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  undefined *puStack_ff8;
  code *local_ff0;
  undefined8 uStack_fe8;
  code *local_fe0;
  undefined8 local_fd8;
  ulong local_fd0;
  undefined1 uStack_fc8;
  undefined7 uStack_fc7;
  undefined1 local_fc0;
  undefined7 uStack_fbf;
  undefined1 local_fb8;
  undefined7 uStack_fb7;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined *local_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  code *pcStack_f60;
  undefined8 uStack_f58;
  undefined1 local_f50;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ece;
  undefined *local_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined1 local_e90;
  undefined *local_e80;
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
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined *local_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined *local_d20;
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
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined1 uStack_c78;
  undefined7 uStack_c77;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined1 local_c50;
  undefined *local_c40;
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
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined1 local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined1 local_b70;
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
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_aee;
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
  undefined8 uStack_a6e;
  undefined *local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined *local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined *local_a28;
  code *local_a20;
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
  undefined1 local_990;
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
  undefined8 uStack_90e;
  undefined *local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined1 local_8c8;
  undefined *local_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined1 local_890;
  undefined7 uStack_88f;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined *local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined *local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined *puStack_7d8;
  code *local_7d0;
  undefined8 uStack_7c8;
  code *local_7c0;
  undefined8 local_7b8;
  ulong local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  ulong local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined *local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  code *pcStack_740;
  undefined8 uStack_738;
  undefined1 local_730;
  undefined *local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined *local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined *local_6e8;
  undefined *local_6e0;
  undefined *local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined *local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined *puStack_698;
  undefined *local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined *local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined *local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined *local_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined *puStack_5d8;
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
  undefined *local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined *local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined *local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined *puStack_518;
  code *local_510;
  undefined8 uStack_508;
  code *local_500;
  undefined8 uStack_4f8;
  ulong local_4f0;
  undefined2 uStack_4e8;
  undefined6 uStack_4e6;
  undefined2 local_4e0;
  undefined6 uStack_4de;
  undefined2 uStack_4d8;
  undefined6 uStack_4d6;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined *local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined8 local_490;
  undefined8 uStack_488;
  code *local_480;
  undefined8 uStack_478;
  undefined1 local_470;
  undefined *local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined *local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined *puStack_428;
  code *local_420;
  undefined8 uStack_418;
  code *pcStack_410;
  undefined8 uStack_408;
  ulong local_400;
  undefined1 uStack_3f8;
  undefined1 uStack_3f7;
  undefined6 uStack_3f6;
  undefined1 uStack_3f0;
  undefined1 uStack_3ef;
  undefined6 uStack_3ee;
  undefined1 uStack_3e8;
  undefined1 uStack_3e7;
  undefined6 uStack_3e6;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined *local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  code *local_390;
  undefined8 local_388;
  undefined1 local_380;
  undefined *local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_340;
  undefined *local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined *local_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined7 uStack_2ff;
  undefined *local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined *puStack_2b8;
  undefined *local_2b0;
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
  undefined *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined *local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 uStack_208;
  undefined1 local_200;
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined *local_178;
  undefined *local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined8 uStack_ee;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  byte local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *puVar5;
  
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar4 = &DAT_100ff9f90;
  local_1450 = param_5;
  FUN_1000037f0(&DAT_100ff9f90,&DAT_100c970d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1458 = auStack_1490 + -extraout_x8_00;
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar5 = (undefined *)CONCAT71((int7)((ulong)puVar4 >> 8),RVar2.value);
  lVar22 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  capInsets.unknown = auStack_1490 + -extraout_x8_00 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)
  ;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,99,UVar8.unknown,puVar7);
  }
  uStack_458 = local_1450[5];
  local_460 = (undefined *)local_1450[4];
  CVar16.unknown = &DAT_100ffa220;
  FUN_1000037f0(&DAT_100ffa220,&DAT_100c974c0);
  SwiftUI::State::get_wrappedValue((State)CVar16.unknown);
  local_1468 = pMVar6;
  local_1460 = extraout_x8;
  if ((char)local_550 == '\x01') {
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x100b06cd8);
      (*pcVar27)();
    }
    nsImage = (NSImage *)objc_stub::applicationIconImage(*(ID *)PTR__NSApp_100ea8fa0);
    if (nsImage == (NSImage *)0x0) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x100b06cdc);
      (*pcVar27)();
    }
    IVar10 = SwiftUI::Image::init(nsImage);
    IVar11.unknown = puVar5;
    (**(code **)(lVar22 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
              );
    uVar26 = 0;
    pcVar27 = (code *)0x0;
    uVar29 = 0;
    IVar11 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar10.unknown,IVar11);
    _swift_release(IVar10.unknown);
    EVar12.unknown = capInsets.unknown;
    (**(code **)(lVar22 + 8))(capInsets.unknown,puVar5);
    SwiftUI::Alignment::get_center((Alignment)EVar12.unknown);
    _Var13 = SwiftUI::_FrameLayout::_init((Alignment)0x4054000000000000);
    SVar14 = SwiftUI::Edge::Set::get_bottom(_Var13.unknown);
    pcVar23 = (code *)0x4020000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
    uStack_1028 = local_e0;
    local_1020 = CONCAT71(local_1020._1_7_,local_d8);
    local_1018 = local_d0;
    local_1010 = (undefined *)CONCAT71(local_1010._1_7_,local_c8);
    uStack_1008 = local_c0;
    local_1000 = uStack_b8;
    puStack_ff8 = (undefined *)CONCAT71(puStack_ff8._1_7_,(char)SVar14.unknown);
    local_fd0 = local_fd0 & 0xffffffffffffff00;
    uStack_808 = local_e0;
    local_800 = CONCAT71(local_800._1_7_,local_d8);
    uStack_7f8 = local_d0;
    local_7f0 = (undefined *)CONCAT71(local_7f0._1_7_,local_c8);
    uStack_7e8 = local_c0;
    local_7e0 = uStack_b8;
    puStack_7d8 = (undefined *)CONCAT71(puStack_7d8._1_7_,(char)SVar14.unknown);
    local_7b0 = local_7b0 & 0xffffffffffffff00;
    local_1030 = IVar11.unknown;
    local_ff0 = pcVar23;
    uStack_fe8 = uVar26;
    local_fe0 = pcVar27;
    local_fd8 = uVar29;
    local_810 = IVar11.unknown;
    local_7d0 = pcVar23;
    uStack_7c8 = uVar26;
    local_7c0 = pcVar27;
    local_7b8 = uVar29;
    FUN_100011090(&local_1030,&local_460,&DAT_100ffa238,&DAT_100c974d8);
    FUN_100005808(&local_810,&DAT_100ffa238,&DAT_100c974d8);
    uStack_418 = uStack_fe8;
    local_420 = local_ff0;
    uStack_408 = local_fd8;
    pcStack_410 = local_fe0;
    local_400 = CONCAT71(local_400._1_7_,(undefined1)local_fd0);
    uStack_458 = uStack_1028;
    local_460 = local_1030;
    uStack_448 = local_1018;
    uStack_450 = local_1020;
    uStack_438 = uStack_1008;
    local_440 = local_1010;
    puStack_428 = puStack_ff8;
    local_430 = local_1000;
    FUN_100b08758(&local_460);
    uStack_508 = uStack_418;
    local_510 = local_420;
    uStack_4f8 = uStack_408;
    local_500 = pcStack_410;
    uStack_4e8 = CONCAT11(uStack_3f7,uStack_3f8);
    local_4f0 = local_400;
    uStack_4de = uStack_3ee;
    uStack_4d8 = (undefined2)(CONCAT17(uStack_3e7,CONCAT16(uStack_3e8,uStack_3ee)) >> 0x30);
    uStack_4e6 = uStack_3f6;
    local_4e0 = (undefined2)(CONCAT17(uStack_3ef,CONCAT16(uStack_3f0,uStack_3f6)) >> 0x30);
    uStack_548 = uStack_458;
    local_550 = local_460;
    uStack_538 = uStack_448;
    uStack_540 = uStack_450;
    uStack_528 = uStack_438;
    local_530 = local_440;
    puStack_518 = puStack_428;
    local_520 = local_430;
    CVar24.unknown = local_440;
    FUN_1000037f0(&DAT_100ffa238,&DAT_100c974d8);
    puVar4 = &DAT_100ff9fa0;
    FUN_1000037f0(&DAT_100ff9fa0,&DAT_100c970e0);
    FUN_100b085a0();
    FUN_10026841c(&DAT_100ffa258,&DAT_100ff9fa0,&DAT_100c970e0,FUN_100b08638);
  }
  else {
    local_1470 = (undefined *)SwiftUI::Color::get_clear(CVar16);
    SwiftUI::Alignment::get_center((Alignment)local_1470);
    _Var13 = SwiftUI::_FrameLayout::_init((Alignment)0x4054000000000000);
    local_1480 = (code *)CONCAT44(local_1480._4_4_,(uint)local_c8);
    SVar15 = (extension_SwiftUI)::Anchor::Source::_get_bounds(_Var13.unknown);
    SVar14 = SwiftUI::Edge::Set::get_bottom(SVar15.unknown);
    local_1478 = CONCAT44(local_1478._4_4_,(int)SVar14.unknown);
    local_a60 = local_1470;
    uStack_a58 = local_e0;
    local_a50 = CONCAT71(local_a50._1_7_,local_d8);
    local_a48 = local_d0;
    local_a40 = (undefined *)CONCAT71(local_a40._1_7_,local_c8);
    uStack_a38 = local_c0;
    local_a30 = uStack_b8;
    local_a20 = FUN_100aff838;
    uStack_a18 = 0;
    uVar26 = 0x4020000000000000;
    local_a28 = SVar15.unknown;
    SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
    uStack_528 = uStack_a38;
    local_530 = local_a40;
    puStack_518 = local_a28;
    local_520 = local_a30;
    uStack_508 = uStack_a18;
    local_510 = local_a20;
    uStack_548 = uStack_a58;
    local_550 = local_a60;
    uStack_538 = local_a48;
    uStack_540 = local_a50;
    local_1438 = local_1470;
    uStack_1430 = local_e0;
    local_1428 = local_d8;
    local_1420 = local_d0;
    local_1418 = SUB81(local_1480,0);
    local_1410 = local_c0;
    uStack_1408 = uStack_b8;
    pcStack_13f8 = FUN_100aff838;
    local_13f0 = 0;
    local_1400 = SVar15.unknown;
    FUN_100011090(&local_a60,&local_460,&DAT_100ff9f98,&DAT_100c970d8);
    FUN_100005808(&local_1438,&DAT_100ff9f98,&DAT_100c970d8);
    uStack_1008 = uStack_528;
    local_1010 = local_530;
    puStack_ff8 = puStack_518;
    local_1000 = local_520;
    uStack_fe8 = uStack_508;
    local_ff0 = local_510;
    uStack_1028 = uStack_548;
    local_1030 = local_550;
    local_1018 = uStack_538;
    local_1020 = uStack_540;
    local_fe0 = (code *)CONCAT71(local_fe0._1_7_,(char)local_1478);
    uStack_fc8 = (undefined1)param_3;
    uStack_fc7 = (undefined7)((ulong)param_3 >> 8);
    local_fc0 = (undefined1)param_4;
    uStack_fbf = (undefined7)((ulong)param_4 >> 8);
    local_fb8 = 0;
    puStack_7d8 = puStack_518;
    local_7e0 = local_520;
    uStack_7c8 = uStack_508;
    local_7d0 = local_510;
    uStack_7f8 = uStack_538;
    local_800 = uStack_540;
    uStack_7e8 = uStack_528;
    local_7f0 = local_530;
    uStack_808 = uStack_548;
    local_810 = local_550;
    local_7c0 = (code *)CONCAT71(local_7c0._1_7_,(char)local_1478);
    local_798 = local_798 & 0xffffffffffffff00;
    puVar4 = &DAT_100ff9fa0;
    pcVar27 = local_510;
    uVar29 = uStack_540;
    local_fd8 = uVar26;
    local_fd0 = param_2;
    local_7b8 = uVar26;
    local_7b0 = param_2;
    uStack_7a8 = param_3;
    local_7a0 = param_4;
    FUN_100011090(&local_1030,&local_460,&DAT_100ff9fa0,&DAT_100c970e0);
    FUN_100005808(&local_810,&DAT_100ff9fa0,&DAT_100c970e0);
    uStack_418 = uStack_fe8;
    local_420 = local_ff0;
    uStack_408 = local_fd8;
    pcStack_410 = local_fe0;
    uStack_3f8 = uStack_fc8;
    local_400 = local_fd0;
    uStack_3ef = (undefined1)uStack_fbf;
    uStack_3ee = (undefined6)((uint7)uStack_fbf >> 8);
    uStack_3e8 = local_fb8;
    uStack_3f7 = (undefined1)uStack_fc7;
    uStack_3f6 = (undefined6)((uint7)uStack_fc7 >> 8);
    uStack_3f0 = local_fc0;
    uStack_458 = uStack_1028;
    local_460 = local_1030;
    uStack_448 = local_1018;
    uStack_450 = local_1020;
    uStack_438 = uStack_1008;
    local_440 = local_1010;
    puStack_428 = puStack_ff8;
    local_430 = local_1000;
    FUN_100b08594(&local_460);
    uStack_508 = uStack_418;
    local_510 = local_420;
    uStack_4f8 = uStack_408;
    local_500 = pcStack_410;
    uStack_4e8 = CONCAT11(uStack_3f7,uStack_3f8);
    local_4f0 = local_400;
    uStack_4de = uStack_3ee;
    uStack_4d8 = (undefined2)(CONCAT17(uStack_3e7,CONCAT16(uStack_3e8,uStack_3ee)) >> 0x30);
    uStack_4e6 = uStack_3f6;
    local_4e0 = (undefined2)(CONCAT17(uStack_3ef,CONCAT16(uStack_3f0,uStack_3f6)) >> 0x30);
    uStack_548 = uStack_458;
    local_550 = local_460;
    uStack_538 = uStack_448;
    uStack_540 = uStack_450;
    uStack_528 = uStack_438;
    local_530 = local_440;
    puStack_518 = puStack_428;
    local_520 = local_430;
    CVar24.unknown = local_440;
    FUN_1000037f0(&DAT_100ffa238,&DAT_100c974d8);
    FUN_1000037f0(&DAT_100ff9fa0,&DAT_100c970e0);
    FUN_100b085a0();
    FUN_10026841c(&DAT_100ffa258,&DAT_100ff9fa0,&DAT_100c970e0,FUN_100b08638);
  }
  CVar16.unknown =
       (undefined *)
       (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_550);
  local_460 = (undefined *)*local_1450;
  uVar26 = local_1450[1];
  uStack_458 = uVar26;
  FUN_100b02f84();
  local_1470 = CVar16.unknown;
  _swift_bridgeObjectRetain(uVar26);
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar17 = SwiftUI::Text::_init(CVar16.unknown,PTR___type_metadata_for_Swift_String_100eac208);
  local_148c = SUB84(CVar16.unknown,0);
  local_1488 = puVar4;
  SwiftUI::Font::Weight::get_bold((Weight)TVar17.unknown);
  DVar3 = SwiftUI::Font::Design::typeMetadataAccessor();
  puVar1 = local_1458;
  local_1478 = CONCAT71((int7)((ulong)TVar17.unknown >> 8),DVar3.value);
  local_1480 = *(code **)(*(long *)(local_1478 + -8) + 0x38);
  (*local_1480)(local_1458,1,1,local_1478);
  FVar18 = SwiftUI::Font::_system(CVar24,(Font)0x0);
  FUN_100005808(puVar1,&DAT_100ff9f90,&DAT_100c970d0);
  TVar21 = TVar17;
  puVar4 = puVar5;
  TVar19 = SwiftUI::Text::_font(FVar18.unknown);
  _swift_release(FVar18.unknown);
  FUN_100016d74(TVar17.unknown,puVar5,local_148c);
  _swift_bridgeObjectRelease(local_1488);
  FUN_100205044(&local_460,1,TVar19.unknown,TVar21.unknown,puVar4,CVar16.unknown);
  FUN_100016d74(TVar19.unknown,TVar21.unknown,puVar4);
  _swift_bridgeObjectRelease();
  CVar16 = SwiftUI::Color::get_primary(CVar16);
  uStack_228 = uStack_458;
  local_230 = local_460;
  uStack_218 = uStack_448;
  uStack_220 = uStack_450;
  uStack_208 = uStack_438;
  local_210 = local_440;
  local_200 = (undefined1)local_430;
  puVar4 = &DAT_100c974f8;
  _swift_getKeyPath();
  uStack_328 = uStack_228;
  local_330 = local_230;
  uStack_318 = uStack_218;
  uStack_320 = uStack_220;
  uStack_308 = uStack_208;
  local_310 = local_210;
  local_300 = local_200;
  uStack_1e8 = uStack_458;
  local_1f0 = local_460;
  uStack_1d8 = uStack_448;
  uStack_1e0 = uStack_450;
  uStack_1c8 = uStack_438;
  local_1d0 = local_440;
  local_1c0 = (undefined1)local_430;
  puVar5 = &DAT_100ff9fa8;
  FUN_100011090(&local_230,&local_550,&DAT_100ff9fa8,&DAT_100c97118);
  AVar20.unknown = (undefined *)&local_1f0;
  FUN_100005808(AVar20.unknown,&DAT_100ff9fa8,&DAT_100c97118);
  AVar20 = SwiftUI::Alignment::get_center(AVar20);
  uStack_1a8 = uStack_328;
  local_1b0 = local_330;
  uStack_198 = uStack_318;
  uStack_1a0 = uStack_320;
  uStack_188 = uStack_308;
  local_190 = local_310;
  local_180 = CONCAT71(uStack_2ff,local_300);
  *(undefined **)(capInsets.unknown + -0x10) = AVar20.unknown;
  *(undefined **)(capInsets.unknown + -8) = puVar5;
  capInsets.unknown[-0x18] = 1;
  *(undefined8 *)(capInsets.unknown + -0x20) = 0;
  capInsets.unknown[-0x28] = 1;
  *(undefined8 *)(capInsets.unknown + -0x30) = 0;
  local_178 = puVar4;
  local_170 = CVar16.unknown;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_2c8 = uStack_188;
  local_2d0 = local_190;
  puStack_2b8 = local_178;
  local_2c0 = local_180;
  local_2b0 = local_170;
  uStack_2e8 = uStack_1a8;
  local_2f0 = local_1b0;
  uStack_2d8 = uStack_198;
  uStack_2e0 = uStack_1a0;
  uStack_718 = uStack_328;
  local_720 = local_330;
  uStack_708 = uStack_318;
  uStack_710 = uStack_320;
  uStack_6f8 = uStack_308;
  local_700 = local_310;
  local_6f0 = CONCAT71(uStack_2ff,local_300);
  local_6e8 = puVar4;
  local_6e0 = CVar16.unknown;
  FUN_100011090(&local_1b0,&local_460,&DAT_100ff9fb0,&DAT_100c97120);
  SVar14.unknown = (undefined *)&local_720;
  FUN_100005808(SVar14.unknown,&DAT_100ff9fb0,&DAT_100c97120);
  SVar14 = SwiftUI::Edge::Set::get_bottom(SVar14);
  uStack_648 = uStack_268;
  local_650 = local_270;
  uStack_638 = uStack_258;
  uStack_640 = local_260;
  uStack_628 = uStack_248;
  local_630 = local_250;
  local_620 = local_240;
  uStack_688 = uStack_2a8;
  local_690 = local_2b0;
  uStack_678 = uStack_298;
  uStack_680 = local_2a0;
  uStack_668 = uStack_288;
  local_670 = local_290;
  uStack_658 = uStack_278;
  uStack_660 = local_280;
  uStack_6c8 = uStack_2e8;
  local_6d0 = local_2f0;
  uStack_6b8 = uStack_2d8;
  uStack_6c0 = uStack_2e0;
  uStack_6a8 = uStack_2c8;
  local_6b0 = local_2d0;
  puStack_698 = puStack_2b8;
  uStack_6a0 = local_2c0;
  uVar25 = 0x4010000000000000;
  uVar26 = local_2c0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
  uStack_588 = uStack_268;
  local_590 = local_270;
  uStack_578 = uStack_258;
  uStack_580 = local_260;
  uStack_568 = uStack_248;
  local_570 = local_250;
  local_560 = local_240;
  uStack_5c8 = uStack_2a8;
  local_5d0 = local_2b0;
  uStack_5b8 = uStack_298;
  uStack_5c0 = local_2a0;
  uStack_5a8 = uStack_288;
  local_5b0 = local_290;
  uStack_598 = uStack_278;
  uStack_5a0 = local_280;
  uStack_608 = uStack_2e8;
  local_610 = local_2f0;
  uStack_5f8 = uStack_2d8;
  uStack_600 = uStack_2e0;
  uStack_5e8 = uStack_2c8;
  local_5f0 = local_2d0;
  puStack_5d8 = puStack_2b8;
  uStack_5e0 = local_2c0;
  FUN_100011090(&local_6d0,&local_460,&DAT_100ff9fb8,&DAT_100c97128);
  FUN_100005808(&local_610,&DAT_100ff9fb8,&DAT_100c97128);
  uStack_4c8 = uStack_268;
  local_4d0 = local_270;
  uStack_4b8 = uStack_258;
  local_4c0 = local_260;
  uStack_4a8 = uStack_248;
  local_4b0 = local_250;
  uStack_508 = uStack_2a8;
  local_510 = (code *)local_2b0;
  uStack_4f8 = uStack_298;
  local_500 = (code *)local_2a0;
  uStack_4e8 = (undefined2)uStack_288;
  uStack_4e6 = (undefined6)((ulong)uStack_288 >> 0x10);
  local_4f0 = local_290;
  uStack_4d8 = (undefined2)uStack_278;
  uStack_4d6 = (undefined6)((ulong)uStack_278 >> 0x10);
  local_4e0 = (undefined2)local_280;
  uStack_4de = (undefined6)((ulong)local_280 >> 0x10);
  uStack_548 = uStack_2e8;
  local_550 = local_2f0;
  uStack_538 = uStack_2d8;
  uStack_540 = uStack_2e0;
  uStack_528 = uStack_2c8;
  local_530 = local_2d0;
  puStack_518 = puStack_2b8;
  local_520 = local_2c0;
  uStack_3d8 = uStack_268;
  local_3e0 = local_270;
  uStack_3c8 = uStack_258;
  uStack_3d0 = local_260;
  uStack_3b8 = uStack_248;
  local_3c0 = local_250;
  uStack_418 = uStack_2a8;
  local_420 = (code *)local_2b0;
  uStack_408 = uStack_298;
  pcStack_410 = (code *)local_2a0;
  uStack_3f8 = (undefined1)uStack_288;
  uStack_3f7 = (undefined1)((ulong)uStack_288 >> 8);
  local_400 = local_290;
  uStack_3e8 = (undefined1)uStack_278;
  uStack_3e7 = (undefined1)((ulong)uStack_278 >> 8);
  uStack_3f0 = (undefined1)local_280;
  uStack_3ef = (undefined1)((ulong)local_280 >> 8);
  uStack_458 = uStack_2e8;
  local_460 = local_2f0;
  uStack_448 = uStack_2d8;
  uStack_450 = uStack_2e0;
  local_4a0 = local_240;
  uStack_498 = SUB81(SVar14.unknown,0);
  local_470 = 0;
  local_3b0 = local_240;
  uStack_438 = uStack_2c8;
  local_440 = local_2d0;
  puStack_428 = puStack_2b8;
  local_430 = local_2c0;
  local_380 = 0;
  puVar4 = &DAT_100c97130;
  CVar24.unknown = local_250;
  uVar28 = local_260;
  uVar30 = local_280;
  local_490 = uVar25;
  uStack_488 = uVar26;
  local_480 = pcVar27;
  uStack_478 = uVar29;
  uStack_3f6 = uStack_4e6;
  uStack_3ee = uStack_4de;
  uStack_3e6 = uStack_4d6;
  local_3a8 = uStack_498;
  local_3a0 = uVar25;
  local_398 = uVar26;
  local_390 = pcVar27;
  local_388 = uVar29;
  FUN_100011090(&local_550,&local_810,&DAT_100ff9fc0);
  FUN_100005808(&local_460,&DAT_100ff9fc0,&DAT_100c97130);
  local_810 = (undefined *)local_1450[2];
  uStack_808 = local_1450[3];
  _swift_bridgeObjectRetain();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  AVar20.unknown = local_1470;
  TVar17 = SwiftUI::Text::_init();
  local_1470 = (undefined *)CONCAT44(local_1470._4_4_,(int)AVar20.unknown);
  local_1450 = (undefined8 *)puVar4;
  SwiftUI::Font::Weight::get_regular((Weight)TVar17.unknown);
  puVar1 = local_1458;
  (*local_1480)(local_1458,1,1,local_1478);
  FVar18 = SwiftUI::Font::_system(CVar24,(Font)0x0);
  FUN_100005808(puVar1,&DAT_100ff9f90,&DAT_100c970d0);
  TVar21 = TVar17;
  puVar4 = puVar5;
  TVar19 = SwiftUI::Text::_font(FVar18.unknown);
  _swift_release(FVar18.unknown);
  FUN_100016d74(TVar17.unknown,puVar5,(ulong)local_1470 & 0xffffffff);
  _swift_bridgeObjectRelease(local_1450);
  FUN_100205044(&local_8f8,1,TVar19.unknown,TVar21.unknown,puVar4,AVar20.unknown);
  FUN_100016d74(TVar19.unknown,TVar21.unknown,puVar4);
  _swift_bridgeObjectRelease();
  AVar20 = SwiftUI::Alignment::get_center(AVar20);
  uStack_368 = uStack_8f0;
  local_370 = local_8f8;
  uStack_358 = uStack_8e0;
  uStack_360 = local_8e8;
  uStack_348 = uStack_8d0;
  local_350 = local_8d8;
  local_340 = local_8c8;
  *(undefined **)(capInsets.unknown + -0x10) = AVar20.unknown;
  *(undefined **)(capInsets.unknown + -8) = TVar21.unknown;
  capInsets.unknown[-0x18] = 1;
  *(undefined8 *)(capInsets.unknown + -0x20) = 0;
  capInsets.unknown[-0x28] = 1;
  *(undefined8 *)(capInsets.unknown + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_8b8 = uStack_368;
  local_8c0 = local_370;
  uStack_8a8 = uStack_358;
  uStack_8b0 = uStack_360;
  uStack_898 = uStack_348;
  local_8a0 = local_350;
  local_890 = local_340;
  uStack_eb8 = uStack_8f0;
  local_ec0 = local_8f8;
  uStack_ea8 = uStack_8e0;
  uStack_eb0 = local_8e8;
  uStack_e98 = uStack_8d0;
  local_ea0 = local_8d8;
  local_e90 = local_8c8;
  FUN_100011090(&local_370,&local_810,&DAT_100ff9fa8,&DAT_100c97118);
  SVar14.unknown = (undefined *)&local_ec0;
  FUN_100005808(SVar14.unknown,&DAT_100ff9fa8,&DAT_100c97118);
  SVar14 = SwiftUI::Edge::Set::get_bottom(SVar14);
  uStack_df8 = uStack_838;
  local_e00 = local_840;
  uStack_de8 = uStack_828;
  uStack_df0 = local_830;
  local_de0 = local_820;
  uStack_e38 = uStack_878;
  local_e40 = local_880;
  uStack_e28 = uStack_868;
  uStack_e30 = local_870;
  uStack_e18 = uStack_858;
  local_e20 = local_860;
  uStack_e08 = uStack_848;
  uStack_e10 = local_850;
  uStack_e78 = uStack_8b8;
  local_e80 = local_8c0;
  uStack_e68 = uStack_8a8;
  uStack_e70 = uStack_8b0;
  uStack_e50 = CONCAT71(uStack_88f,local_890);
  uStack_e58 = uStack_898;
  local_e60 = local_8a0;
  uStack_e48 = uStack_888;
  uVar26 = 0x403c000000000000;
  uVar29 = local_8a0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar14.unknown);
  uStack_d48 = uStack_838;
  local_d50 = local_840;
  uStack_d38 = uStack_828;
  uStack_d40 = local_830;
  local_d30 = local_820;
  uStack_d88 = uStack_878;
  local_d90 = local_880;
  uStack_d78 = uStack_868;
  uStack_d80 = local_870;
  uStack_d68 = uStack_858;
  local_d70 = local_860;
  uStack_d58 = uStack_848;
  uStack_d60 = local_850;
  uStack_dc8 = uStack_8b8;
  local_dd0 = local_8c0;
  uStack_db8 = uStack_8a8;
  uStack_dc0 = uStack_8b0;
  uStack_da0 = CONCAT71(uStack_88f,local_890);
  uStack_da8 = uStack_898;
  local_db0 = local_8a0;
  uStack_d98 = uStack_888;
  FUN_100011090(&local_e80,&local_810,&DAT_100ff9fc8,&DAT_100c97138);
  FUN_100005808(&local_dd0,&DAT_100ff9fc8,&DAT_100c97138);
  uStack_c98 = uStack_838;
  local_ca0 = local_840;
  uStack_c88 = uStack_828;
  local_c90 = local_830;
  uStack_c10 = CONCAT71(uStack_88f,local_890);
  uStack_cd8 = uStack_878;
  local_ce0 = local_880;
  uStack_cc8 = uStack_868;
  local_cd0 = local_870;
  uStack_cb8 = uStack_858;
  local_cc0 = local_860;
  uStack_ca8 = uStack_848;
  local_cb0 = local_850;
  uStack_d18 = uStack_8b8;
  local_d20 = local_8c0;
  uStack_d08 = uStack_8a8;
  local_d10 = uStack_8b0;
  local_cf0 = CONCAT71(uStack_88f,local_890);
  uStack_cf8 = uStack_898;
  local_d00 = local_8a0;
  uStack_ce8 = uStack_888;
  uStack_bb8 = uStack_838;
  local_bc0 = local_840;
  uStack_ba8 = uStack_828;
  uStack_bb0 = local_830;
  uStack_bf8 = uStack_878;
  local_c00 = local_880;
  uStack_be8 = uStack_868;
  uStack_bf0 = local_870;
  uStack_bd8 = uStack_858;
  local_be0 = local_860;
  uStack_bc8 = uStack_848;
  uStack_bd0 = local_850;
  uStack_c38 = uStack_8b8;
  local_c40 = local_8c0;
  uStack_c28 = uStack_8a8;
  uStack_c30 = uStack_8b0;
  local_c80 = local_820;
  uStack_c78 = SUB81(SVar14.unknown,0);
  local_c50 = 0;
  local_ba0 = local_820;
  uStack_c18 = uStack_898;
  local_c20 = local_8a0;
  uStack_c08 = uStack_888;
  local_b70 = 0;
  local_c70 = uVar26;
  uStack_c68 = uVar29;
  local_c60 = uVar28;
  uStack_c58 = uVar30;
  local_b98 = uStack_c78;
  local_b90 = uVar26;
  local_b88 = uVar29;
  FUN_100011090(&local_d20,&local_810,&DAT_100ffa288,&DAT_100c97528);
  FUN_100005808(&local_c40,&DAT_100ffa288,&DAT_100c97528);
  uStack_b18 = uStack_118;
  local_b20 = local_120;
  uStack_b08 = uStack_108;
  local_b10 = local_110;
  local_b00 = local_100;
  uStack_aee = uStack_ee;
  uStack_1448 = uStack_158;
  local_1450 = (undefined8 *)local_160;
  uStack_b58 = uStack_158;
  local_b60 = local_160;
  uStack_b48 = uStack_148;
  uStack_b50 = uStack_150;
  uStack_b38 = uStack_138;
  local_b40 = local_140;
  uStack_b28 = uStack_128;
  uStack_b30 = local_130;
  uStack_ece = uStack_ee;
  uStack_ee8 = uStack_108;
  local_ef0 = local_110;
  uStack_ee0 = local_100;
  uStack_f08 = uStack_128;
  local_f10 = local_130;
  uStack_ef8 = uStack_118;
  uStack_f00 = local_120;
  uStack_f28 = uStack_148;
  local_f30 = uStack_150;
  uStack_f18 = uStack_138;
  uStack_f20 = local_140;
  uStack_f38 = uStack_158;
  local_f40 = local_160;
  uStack_1218 = CONCAT71(uStack_497,uStack_498);
  uStack_f68 = uStack_488;
  local_f70 = local_490;
  uStack_f58 = uStack_478;
  pcStack_f60 = local_480;
  uStack_1258 = CONCAT62(uStack_4d6,uStack_4d8);
  uStack_1260 = CONCAT62(uStack_4de,local_4e0);
  uStack_fa8 = uStack_4c8;
  local_fb0 = local_4d0;
  uStack_f98 = uStack_4b8;
  uStack_fa0 = local_4c0;
  uStack_f78 = CONCAT71(uStack_497,uStack_498);
  uStack_f88 = uStack_4a8;
  local_f90 = local_4b0;
  uStack_f80 = local_4a0;
  uStack_fe8 = uStack_508;
  local_ff0 = local_510;
  local_fd8 = uStack_4f8;
  local_fe0 = local_500;
  uStack_1268 = CONCAT62(uStack_4e6,uStack_4e8);
  uStack_fc8 = (undefined1)uStack_4e8;
  uStack_fc7 = (undefined7)(CONCAT62(uStack_4e6,uStack_4e8) >> 8);
  local_fd0 = local_4f0;
  local_fb8 = (undefined1)uStack_4d8;
  uStack_fb7 = (undefined7)(CONCAT62(uStack_4d6,uStack_4d8) >> 8);
  local_fc0 = (undefined1)local_4e0;
  uStack_fbf = (undefined7)(CONCAT62(uStack_4de,local_4e0) >> 8);
  uStack_1028 = uStack_548;
  local_1030 = local_550;
  local_1018 = uStack_538;
  local_1020 = uStack_540;
  uStack_1008 = uStack_528;
  local_1010 = local_530;
  puStack_ff8 = puStack_518;
  local_1000 = local_520;
  uStack_1140 = CONCAT71(uStack_c77,uStack_c78);
  uStack_1068 = CONCAT71(uStack_c77,uStack_c78);
  local_1070 = local_c80;
  uStack_1058 = uStack_c68;
  uStack_1060 = local_c70;
  uStack_1048 = uStack_c58;
  local_1050 = local_c60;
  uStack_10a8 = uStack_cb8;
  local_10b0 = local_cc0;
  uStack_1098 = uStack_ca8;
  uStack_10a0 = local_cb0;
  uStack_1088 = uStack_c98;
  local_1090 = local_ca0;
  uStack_1078 = uStack_c88;
  uStack_1080 = local_c90;
  local_10f0 = local_d00;
  uStack_10e8 = uStack_cf8;
  uStack_10d8 = uStack_ce8;
  uStack_10e0 = local_cf0;
  uStack_10c8 = uStack_cd8;
  local_10d0 = local_ce0;
  uStack_10b8 = uStack_cc8;
  uStack_10c0 = local_cd0;
  uStack_1108 = uStack_d18;
  local_1110 = local_d20;
  uStack_10f8 = uStack_d08;
  uStack_1100 = local_d10;
  uStack_ad8 = uStack_158;
  local_ae0 = local_160;
  uStack_ac8 = uStack_148;
  uStack_ad0 = uStack_150;
  uStack_ab8 = uStack_138;
  local_ac0 = local_140;
  uStack_aa8 = uStack_128;
  uStack_ab0 = local_130;
  uStack_1348 = uStack_158;
  local_1350 = local_160;
  uStack_1338 = uStack_148;
  uStack_1340 = uStack_150;
  uStack_1328 = uStack_138;
  local_1330 = local_140;
  uStack_1318 = uStack_128;
  uStack_1320 = local_130;
  uStack_a98 = uStack_118;
  local_aa0 = local_120;
  uStack_a88 = uStack_108;
  uStack_a90 = local_110;
  uStack_1308 = uStack_118;
  local_1310 = local_120;
  uStack_12f8 = uStack_108;
  uStack_1300 = local_110;
  local_a80 = local_100;
  local_12f0 = local_100;
  uStack_a6e = uStack_ee;
  uStack_12de = uStack_ee;
  uStack_748 = uStack_488;
  local_750 = local_490;
  uStack_738 = uStack_478;
  pcStack_740 = local_480;
  uStack_788 = uStack_4c8;
  local_790 = local_4d0;
  uStack_778 = uStack_4b8;
  uStack_780 = local_4c0;
  uStack_758 = CONCAT71(uStack_497,uStack_498);
  uStack_768 = uStack_4a8;
  local_770 = local_4b0;
  uStack_760 = local_4a0;
  uStack_7c8 = uStack_508;
  local_7d0 = local_510;
  local_7b8 = uStack_4f8;
  local_7c0 = local_500;
  uStack_7a8 = CONCAT62(uStack_4e6,uStack_4e8);
  local_798 = CONCAT62(uStack_4d6,uStack_4d8);
  local_7a0 = CONCAT62(uStack_4de,local_4e0);
  local_7b0 = local_4f0;
  uStack_808 = uStack_548;
  local_810 = local_550;
  uStack_7f8 = uStack_538;
  local_800 = uStack_540;
  uStack_7e8 = uStack_528;
  local_7f0 = local_530;
  puStack_7d8 = puStack_518;
  local_7e0 = local_520;
  uStack_1208 = uStack_488;
  local_1210 = local_490;
  uStack_11f8 = uStack_478;
  pcStack_1200 = local_480;
  uStack_1248 = uStack_4c8;
  local_1250 = local_4d0;
  uStack_1238 = uStack_4b8;
  uStack_1240 = local_4c0;
  uStack_1228 = uStack_4a8;
  local_1230 = local_4b0;
  uStack_1220 = local_4a0;
  uStack_1288 = uStack_508;
  local_1290 = local_510;
  uStack_1278 = uStack_4f8;
  uStack_1280 = local_500;
  local_1270 = local_4f0;
  uStack_12c8 = uStack_548;
  local_12d0 = local_550;
  uStack_12b8 = uStack_538;
  uStack_12c0 = uStack_540;
  uStack_12a8 = uStack_528;
  local_12b0 = local_530;
  puStack_1298 = puStack_518;
  uStack_12a0 = local_520;
  uStack_9b8 = CONCAT71(uStack_c77,uStack_c78);
  local_9c0 = local_c80;
  uStack_9a8 = uStack_c68;
  uStack_9b0 = local_c70;
  uStack_998 = uStack_c58;
  local_9a0 = local_c60;
  uStack_9f8 = uStack_cb8;
  local_a00 = local_cc0;
  uStack_9e8 = uStack_ca8;
  uStack_9f0 = local_cb0;
  uStack_9d8 = uStack_c98;
  local_9e0 = local_ca0;
  uStack_9c8 = uStack_c88;
  uStack_9d0 = local_c90;
  uStack_a38 = uStack_cf8;
  local_a40 = (undefined *)local_d00;
  local_a28 = (undefined *)uStack_ce8;
  local_a30 = local_cf0;
  uStack_a18 = uStack_cd8;
  local_a20 = (code *)local_ce0;
  uStack_a08 = uStack_cc8;
  uStack_a10 = local_cd0;
  uStack_a58 = uStack_d18;
  local_a60 = local_d20;
  local_a48 = uStack_d08;
  local_a50 = local_d10;
  local_1148 = local_c80;
  uStack_1130 = uStack_c68;
  uStack_1138 = local_c70;
  uStack_1120 = uStack_c58;
  local_1128 = local_c60;
  uStack_1180 = uStack_cb8;
  local_1188 = local_cc0;
  uStack_1170 = uStack_ca8;
  uStack_1178 = local_cb0;
  uStack_1160 = uStack_c98;
  local_1168 = local_ca0;
  uStack_1150 = uStack_c88;
  uStack_1158 = local_c90;
  uStack_11c0 = uStack_cf8;
  local_11c8 = local_d00;
  uStack_11b8 = local_cf0;
  uStack_11b0 = uStack_ce8;
  uStack_11a0 = uStack_cd8;
  local_11a8 = local_ce0;
  uStack_1190 = uStack_cc8;
  uStack_1198 = local_cd0;
  local_f50 = local_470;
  local_1040 = local_c50;
  local_730 = local_470;
  local_11f0 = local_470;
  local_990 = local_c50;
  uStack_11e0 = uStack_d18;
  local_11e8 = local_d20;
  uStack_11d0 = uStack_d08;
  uStack_11d8 = local_d10;
  local_1118 = local_c50;
  uStack_938 = uStack_118;
  local_940 = local_120;
  uStack_928 = uStack_108;
  uStack_930 = local_110;
  local_920 = local_100;
  uStack_90e = uStack_ee;
  uStack_978 = uStack_158;
  local_980 = local_160;
  uStack_968 = uStack_148;
  uStack_970 = uStack_150;
  uStack_958 = uStack_138;
  local_960 = local_140;
  uStack_948 = uStack_128;
  uStack_950 = local_130;
  FUN_100011090(&local_b60,&local_1438,&DAT_100ffa290,&DAT_100c97530);
  FUN_100011090(&local_ae0,&local_1438,&DAT_100ffa290,&DAT_100c97530);
  FUN_100011090(&local_810,&local_1438,&DAT_100ff9fc0,&DAT_100c97130);
  FUN_100011090(&local_a60,&local_1438,&DAT_100ffa288,&DAT_100c97528);
  FUN_100005808(&local_980,&DAT_100ffa290,&DAT_100c97530);
  _memcpy(local_1460,&local_1350,0x239);
  FUN_100005808(&local_1110,&DAT_100ffa288,&DAT_100c97528);
  FUN_100005808(&local_1030,&DAT_100ff9fc0,&DAT_100c97130);
  FUN_100005808(&local_f40,&DAT_100ffa290,&DAT_100c97530);
  _swift_release(local_1468);
  return;
}



/* Address: 0x100b06cdc | FUN_100b06cdc */

void FUN_100b06cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x28) = CVar2.unknown;
  lVar7 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x30) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x40) = pMVar4;
  puVar5 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x48) = UVar6.unknown;
  *(undefined8 **)(unaff_x22 + 0x50) = puVar5;
  _swift_task_switch(FUN_100b06d94,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x100b06d94 | FUN_100b06d94 */

void FUN_100b06d94(Duration param_1,undefined8 param_2)

{
  Duration DVar1;
  long *plVar2;
  long unaff_x22;
  
  DVar1 = Swift::Duration::seconds(0.5,param_1);
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100b06e28;
  FUN_100b07d3c(DVar1.unknown,param_2,0,0,1);
  return;
}



/* Address: 0x100b06e28 | FUN_100b06e28 */

void FUN_100b06e28(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x58));
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x30) + 8))
              (*(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x28));
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    pcVar1 = FUN_100b06e98;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    pcVar1 = FUN_100b06f18;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100b06e98 | FUN_100b06e98 */

void FUN_100b06e98(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined1 *)(unaff_x22 + 0x60) = 1;
  puVar1 = &DAT_100ffa220;
  FUN_1000037f0(&DAT_100ffa220,&DAT_100c974c0);
  SwiftUI::State::set_wrappedValue
            ((State *)(unaff_x22 + 0x10),(undefined1 *)(unaff_x22 + 0x60),puVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100b06f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100b06f18 | FUN_100b06f18 */

void FUN_100b06f18(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x60) = 1;
  puVar2 = &DAT_100ffa220;
  FUN_1000037f0(&DAT_100ffa220,&DAT_100c974c0);
  SwiftUI::State::set_wrappedValue
            ((State *)(unaff_x22 + 0x10),(undefined1 *)(unaff_x22 + 0x60),puVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100b06fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100b06fac | FUN_100b06fac */

void FUN_100b06fac(void)

{
  FUN_100b056f8();
  return;
}



/* Address: 0x100b06fe4 | FUN_100b06fe4 */

void FUN_100b06fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined *puVar3;
  ModifiedContent MVar4;
  TupleView TVar5;
  HStack HVar6;
  ModifiedContent MVar7;
  VerticalAlignment alignment;
  HStack<undefined> HVar8;
  Alignment AVar9;
  undefined *puVar10;
  Divider DVar11;
  Set _all;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar14;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 auStack_130 [4];
  long local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  puVar3 = &DAT_100ffa1c0;
  local_f0 = param_1;
  FUN_1000037f0(&DAT_100ffa1c0,&DAT_100c97488);
  local_108 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar13 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12;
  puVar3 = &DAT_100ffa1c8;
  local_100 = lVar13;
  FUN_100005c24(&DAT_100ffa1c8,&DAT_100c97490);
  uVar16 = *(undefined8 *)(param_6 + 0x10);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _swift_getTupleTypeMetadata3
            (0xff,puVar3,PTR___type_metadata_for_SwiftUI_Spacer_100eab8f8,MVar4.unknown,0,0);
  TVar5 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar5.unknown);
  HVar6 = SwiftUI::HStack::typeMetadataAccessor();
  local_110 = *(long *)(HVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_00;
  MVar7 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  lVar19 = *(long *)(MVar7.unknown + -8);
  MVar4 = MVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar18 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar18 - extraout_x12_00;
  uStack_98 = *(undefined8 *)(param_6 + 0x18);
  local_a0 = uVar16;
  alignment = SwiftUI::VerticalAlignment::get_center(MVar4.unknown);
  uVar16 = 0;
  HVar8 = SwiftUI::HStack::_init(alignment);
  AVar9 = SwiftUI::Alignment::get_center(HVar8.unknown);
  puVar3 = PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0,HVar6.unknown);
  *(undefined **)(lVar15 + -0x10) = HVar6.unknown;
  *(undefined **)(lVar15 + -8) = puVar3;
  *(undefined **)(lVar15 + -0x20) = AVar9.unknown;
  *(undefined8 *)(lVar15 + -0x18) = uVar16;
  *(undefined1 *)(lVar15 + -0x28) = 1;
  *(undefined8 *)(lVar15 + -0x30) = 0;
  *(undefined1 *)(lVar15 + -0x38) = 1;
  *(undefined8 *)(lVar15 + -0x40) = 0;
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
  (**(code **)(local_110 + 8))(lVar13,HVar6.unknown);
  puStack_b8 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar10 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_c0 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar7.unknown,&local_c0);
  FUN_10003cc94(lVar15,lVar18,MVar7.unknown,puVar10);
  pcVar17 = *(code **)(lVar19 + 8);
  (*pcVar17)(lVar18,MVar7.unknown);
  lVar13 = local_100;
  bVar2 = (*(byte *)(unaff_x20 + 0x20) & 1) == 0;
  if (bVar2) {
    puVar3 = &DAT_100ffa1d0;
    FUN_1000037f0(&DAT_100ffa1d0,&DAT_100c97498);
    pcVar14 = *(code **)(*(long *)(puVar3 + -8) + 0x38);
    lVar13 = local_100;
  }
  else {
    DVar11 = SwiftUI::Divider::init();
    _all = SwiftUI::Edge::Set::get_horizontal(DVar11.unknown);
    uVar16 = 0x4030000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
    puVar3 = &DAT_100ffa1d0;
    FUN_1000037f0(&DAT_100ffa1d0,&DAT_100c97498);
    puVar1 = (undefined1 *)(lVar13 + *(int *)(puVar3 + 0x24));
    *puVar1 = (char)_all.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar16;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    pcVar14 = *(code **)(*(long *)(puVar3 + -8) + 0x38);
  }
  (*pcVar14)(lVar13,bVar2,1,puVar3);
  (**(code **)(lVar19 + 0x10))(lVar18,lVar15,MVar7.unknown);
  lVar19 = local_f8;
  lVar12 = lVar13;
  local_b0 = lVar18;
  FUN_100011090(lVar13,local_f8,&DAT_100ffa1c0,&DAT_100c97488);
  local_a8 = lVar19;
  puStack_c8 = local_108;
  local_e0 = puVar10;
  local_d0 = MVar7.unknown;
  FUN_100b08364();
  local_d8 = lVar12;
  FUN_10003cad4(local_f0,&local_b0,2,&local_d0,&local_e0);
  FUN_100005808(lVar13,&DAT_100ffa1c0,&DAT_100c97488);
  (*pcVar17)(lVar15,MVar7.unknown);
  FUN_100005808(lVar19,&DAT_100ffa1c0,&DAT_100c97488);
  (*pcVar17)(lVar18,MVar7.unknown);
  return;
}



/* Address: 0x100b07414 | FUN_100b07414 */

void FUN_100b07414(undefined8 param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  HorizontalAlignment HVar7;
  Set _all;
  Set SVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_d3;
  undefined8 uVar21;
  long local_640;
  long local_638;
  undefined *local_630;
  long local_628;
  long local_620;
  MainActor *local_618;
  undefined8 local_610;
  undefined *local_608;
  undefined *puStack_600;
  undefined *local_5f8;
  undefined *local_5f0;
  undefined *puStack_5e8;
  undefined *local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
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
  undefined7 uStack_56f;
  undefined8 local_538;
  undefined1 local_530;
  undefined7 *local_528;
  undefined8 *puStack_520;
  long local_518;
  undefined8 local_510;
  undefined *puStack_508;
  undefined7 uStack_500;
  undefined1 local_4f9;
  undefined7 uStack_4f8;
  undefined1 uStack_4f1;
  undefined7 uStack_4f0;
  undefined1 local_4e9;
  undefined7 uStack_4e8;
  undefined1 uStack_4e1;
  undefined7 uStack_4e0;
  undefined1 local_4d9;
  undefined7 uStack_4d8;
  undefined1 uStack_4d1;
  undefined7 uStack_4d0;
  undefined1 local_4c9;
  undefined7 uStack_4c8;
  undefined1 uStack_4c1;
  undefined7 uStack_4c0;
  undefined1 uStack_4b9;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined1 local_450;
  undefined1 local_440 [64];
  undefined *local_400;
  undefined8 uStack_3f8;
  undefined1 local_3f0;
  undefined7 local_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined7 local_3df;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3d0;
  undefined7 local_3cf;
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined7 local_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  undefined *local_3a8;
  undefined8 local_3a0;
  undefined1 local_398;
  undefined8 local_397;
  undefined8 uStack_38f;
  undefined8 local_387;
  undefined8 uStack_37f;
  undefined8 local_377;
  undefined8 uStack_36f;
  undefined8 local_367;
  undefined7 uStack_35f;
  undefined1 uStack_358;
  undefined7 uStack_357;
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
  undefined1 local_2f8;
  undefined7 uStack_2f7;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined *local_2c0;
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
  undefined1 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined *local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  
  local_638 = *(long *)(param_3 + -8);
  local_610 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_638 + 0x40));
  lVar14 = (long)&local_640 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_630 = (undefined *)SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_628 = *(long *)(local_630 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_628 + 0x40));
  lVar12 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_640 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_620 = lVar12 - extraout_x12;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_618 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteOnboarding/SetupView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,0x92,UVar5.unknown,puVar4);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)pcVar6);
  SVar8.unknown = param_2;
  FUN_100b07a10(local_440,param_2,param_3,param_4);
  uStack_4f1 = (undefined1)local_440._8_8_;
  uStack_4f0 = SUB87(local_440._8_8_,1);
  local_4f9 = (undefined1)local_440._0_8_;
  uStack_4f8 = SUB87(local_440._0_8_,1);
  uStack_4e1 = (undefined1)local_440._24_8_;
  uStack_4e0 = SUB87(local_440._24_8_,1);
  local_4e9 = (undefined1)local_440._16_8_;
  uStack_4e8 = SUB87(local_440._16_8_,1);
  uStack_4d1 = (undefined1)local_440._40_8_;
  uStack_4d0 = SUB87(local_440._40_8_,1);
  local_4d9 = (undefined1)local_440._32_8_;
  uStack_4d8 = SUB87(local_440._32_8_,1);
  uStack_4c1 = (undefined1)local_440._56_8_;
  uStack_4c0 = SUB87(local_440._56_8_,1);
  local_4c9 = (undefined1)local_440._48_8_;
  uStack_4c8 = SUB87(local_440._48_8_,1);
  _all = SwiftUI::Edge::Set::get_leading(SVar8);
  uStack_3f8 = 0;
  local_3f0 = 0;
  uVar17 = CONCAT17(local_4f9,uStack_500);
  uStack_3d7 = uStack_4e8;
  uStack_3d0 = uStack_4e1;
  local_3df = uStack_4f0;
  uStack_3d8 = local_4e9;
  uVar19 = CONCAT17(local_4c9,uStack_4d0);
  uStack_3c7 = uStack_4d8;
  uStack_3c0 = uStack_4d1;
  local_3cf = uStack_4e0;
  uStack_3c8 = local_4d9;
  uStack_3b7 = uStack_4c8;
  local_3bf = uStack_4d0;
  uStack_3b8 = local_4c9;
  uStack_3b0 = uStack_4c1;
  uStack_3af = uStack_4c0;
  uStack_3e7 = uStack_4f8;
  uStack_3e0 = uStack_4f1;
  local_3ef = uStack_500;
  uStack_3e8 = local_4f9;
  uVar15 = 0x4030000000000000;
  local_400 = HVar7.unknown;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_208 = CONCAT71(uStack_3d7,uStack_3d8);
  local_210 = CONCAT71(local_3df,uStack_3e0);
  uStack_1f8 = CONCAT71(uStack_3c7,uStack_3c8);
  uStack_200 = CONCAT71(local_3cf,uStack_3d0);
  uStack_1e8 = CONCAT71(uStack_3b7,uStack_3b8);
  local_1f0 = CONCAT71(local_3bf,uStack_3c0);
  local_1e0 = CONCAT71(uStack_3af,uStack_3b0);
  uStack_218 = CONCAT71(uStack_3e7,uStack_3e8);
  uStack_220 = CONCAT71(local_3ef,local_3f0);
  uStack_228 = uStack_3f8;
  local_230 = local_400;
  local_3a0 = 0;
  local_398 = 0;
  uStack_38f = CONCAT17(uStack_4f1,uStack_4f8);
  local_397 = CONCAT17(local_4f9,uStack_500);
  uStack_37f = CONCAT17(uStack_4e1,uStack_4e8);
  local_387 = CONCAT17(local_4e9,uStack_4f0);
  uStack_36f = CONCAT17(uStack_4d1,uStack_4d8);
  local_377 = CONCAT17(local_4d9,uStack_4e0);
  uVar20 = CONCAT17(local_4c9,uStack_4d0);
  uStack_357 = uStack_4c0;
  uStack_35f = uStack_4c8;
  uStack_358 = uStack_4c1;
  uVar21 = in_d3;
  local_3a8 = HVar7.unknown;
  local_367 = uVar20;
  FUN_100011090(&local_400,&local_170,&DAT_100ffa1f0,&DAT_100c974a0);
  SVar8.unknown = (undefined *)&local_3a8;
  FUN_100005808(SVar8.unknown,&DAT_100ffa1f0,&DAT_100c974a0);
  SVar8 = SwiftUI::Edge::Set::get_vertical(SVar8);
  uStack_328 = uStack_208;
  local_330 = local_210;
  uStack_318 = uStack_1f8;
  uStack_320 = uStack_200;
  uStack_308 = uStack_1e8;
  local_310 = local_1f0;
  local_300 = local_1e0;
  uStack_348 = uStack_228;
  local_350 = local_230;
  uStack_338 = uStack_218;
  uStack_340 = uStack_220;
  local_2d0 = 0;
  uVar16 = 0x4028000000000000;
  uVar18 = uStack_220;
  local_2f8 = (char)_all.unknown;
  local_2f0 = uVar15;
  uStack_2e8 = uVar17;
  local_2e0 = uVar19;
  local_2d8 = in_d3;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  uStack_578 = local_2d8;
  local_580 = local_2e0;
  local_570 = local_2d0;
  uStack_5c8 = uStack_328;
  local_5d0 = local_330;
  uStack_5b8 = uStack_318;
  uStack_5c0 = uStack_320;
  uStack_598 = CONCAT71(uStack_2f7,local_2f8);
  local_5a0 = local_300;
  uStack_588 = uStack_2e8;
  local_590 = local_2f0;
  uStack_5a8 = uStack_308;
  local_5b0 = local_310;
  puStack_5e8 = (undefined *)uStack_348;
  local_5f0 = local_350;
  uStack_5d8 = uStack_338;
  local_5e0 = (undefined *)uStack_340;
  uStack_298 = uStack_208;
  local_2a0 = local_210;
  uStack_288 = uStack_1f8;
  uStack_290 = uStack_200;
  uStack_278 = uStack_1e8;
  local_280 = local_1f0;
  local_270 = local_1e0;
  uStack_2b8 = uStack_228;
  local_2c0 = local_230;
  uStack_2a8 = uStack_218;
  uStack_2b0 = uStack_220;
  local_240 = 0;
  local_268 = (char)_all.unknown;
  local_260 = uVar15;
  local_258 = uVar17;
  local_250 = uVar19;
  local_248 = in_d3;
  FUN_100011090(&local_350,&local_170,&DAT_100ffa1f8,&DAT_100c974a8);
  FUN_100005808(&local_2c0,&DAT_100ffa1f8,&DAT_100c974a8);
  uStack_1c8 = uStack_588;
  local_1d0 = local_590;
  uStack_1b8 = uStack_578;
  uStack_1c0 = local_580;
  uStack_208 = uStack_5c8;
  local_210 = local_5d0;
  uStack_1f8 = uStack_5b8;
  uStack_200 = uStack_5c0;
  uStack_1e8 = uStack_5a8;
  local_1f0 = local_5b0;
  uStack_1d8 = uStack_598;
  local_1e0 = local_5a0;
  uStack_228 = puStack_5e8;
  local_230 = local_5f0;
  uStack_218 = uStack_5d8;
  uStack_220 = local_5e0;
  uStack_108 = uStack_588;
  local_110 = local_590;
  uStack_f8 = uStack_578;
  uStack_100 = local_580;
  uStack_148 = uStack_5c8;
  local_150 = local_5d0;
  uStack_138 = uStack_5b8;
  uStack_140 = uStack_5c0;
  uStack_128 = uStack_5a8;
  local_130 = local_5b0;
  uStack_118 = uStack_598;
  uStack_120 = local_5a0;
  local_1b0 = CONCAT71(uStack_56f,local_570);
  local_f0 = CONCAT71(uStack_56f,local_570);
  uStack_1a8 = SUB81(SVar8.unknown,0);
  local_180 = 0;
  uStack_168 = puStack_5e8;
  local_170 = local_5f0;
  uStack_158 = uStack_5d8;
  uStack_160 = local_5e0;
  local_c0 = 0;
  local_1a0 = uVar16;
  local_198 = uVar18;
  local_190 = uVar20;
  uStack_188 = uVar21;
  local_e8 = uStack_1a8;
  local_e0 = uVar16;
  local_d8 = uVar18;
  local_d0 = uVar20;
  local_c8 = uVar21;
  FUN_100011090(&local_230,&uStack_500,&DAT_100ffa1c8,&DAT_100c97490);
  SVar8.unknown = (undefined *)&local_170;
  FUN_100005808(SVar8.unknown,&DAT_100ffa1c8,&DAT_100c97490);
  (**(code **)(param_2 + 0x28))(lVar14);
  SVar8 = SwiftUI::Edge::Set::get_trailing(SVar8);
  lVar12 = local_640;
  (extension_SwiftUI)::SwiftUI::View::_padding(SVar8);
  (**(code **)(local_638 + 8))(lVar14,param_3);
  puVar1 = local_630;
  puStack_508 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar9 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_510 = param_4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             local_630,&local_510);
  lVar2 = local_620;
  FUN_10003cc94(local_620,lVar12,puVar1,puVar9);
  lVar14 = local_628;
  pcVar13 = *(code **)(local_628 + 8);
  (*pcVar13)(lVar12,puVar1);
  uStack_478 = CONCAT71(uStack_1a7,uStack_1a8);
  local_480 = local_1b0;
  uStack_468 = local_198;
  uStack_470 = local_1a0;
  uStack_458 = uStack_188;
  local_460 = local_190;
  local_450 = local_180;
  uStack_4b8 = uStack_1e8;
  uStack_4c0 = (undefined7)local_1f0;
  uStack_4b9 = (undefined1)((ulong)local_1f0 >> 0x38);
  uStack_4a8 = uStack_1d8;
  uStack_4b0 = local_1e0;
  uStack_498 = uStack_1c8;
  local_4a0 = local_1d0;
  uStack_488 = uStack_1b8;
  uStack_490 = uStack_1c0;
  uStack_4f8 = (undefined7)uStack_228;
  uStack_4f1 = (undefined1)((ulong)uStack_228 >> 0x38);
  uStack_500 = SUB87(local_230,0);
  local_4f9 = (undefined1)((ulong)local_230 >> 0x38);
  uStack_4e8 = (undefined7)uStack_218;
  uStack_4e1 = (undefined1)((ulong)uStack_218 >> 0x38);
  uStack_4f0 = (undefined7)uStack_220;
  local_4e9 = (undefined1)((ulong)uStack_220 >> 0x38);
  uStack_4d8 = (undefined7)uStack_208;
  uStack_4d1 = (undefined1)((ulong)uStack_208 >> 0x38);
  uStack_4e0 = (undefined7)local_210;
  local_4d9 = (undefined1)((ulong)local_210 >> 0x38);
  uStack_4c8 = (undefined7)uStack_1f8;
  uStack_4c1 = (undefined1)((ulong)uStack_1f8 >> 0x38);
  uStack_4d0 = (undefined7)uStack_200;
  local_4c9 = (undefined1)((ulong)uStack_200 >> 0x38);
  local_538 = 0;
  local_530 = 1;
  puStack_520 = &local_538;
  local_528 = &uStack_500;
  (**(code **)(lVar14 + 0x10))(lVar12,lVar2,puVar1);
  local_518 = lVar12;
  puVar10 = &DAT_100ffa1c8;
  FUN_100011090(&local_230,&local_5f0,&DAT_100ffa1c8,&DAT_100c97490);
  FUN_1000037f0(&DAT_100ffa1c8,&DAT_100c97490);
  puStack_5e8 = PTR___type_metadata_for_SwiftUI_Spacer_100eab8f8;
  local_5e0 = puVar1;
  puVar11 = &DAT_100ffa200;
  local_5f0 = puVar10;
  FUN_10026841c(&DAT_100ffa200,&DAT_100ffa1c8,&DAT_100c97490,FUN_100b08464);
  puStack_600 = PTR___protocol_witness_table_for_SwiftUI_Spacer___SwiftUI_View_in_SwiftUI_100eab8e8;
  local_608 = puVar11;
  local_5f8 = puVar9;
  FUN_10003cad4(local_610,&local_528,3,&local_5f0,&local_608);
  FUN_100005808(&local_230,&DAT_100ffa1c8,&DAT_100c97490);
  (*pcVar13)(lVar2,puVar1);
  (*pcVar13)(lVar12,puVar1);
  FUN_100005808(&uStack_500,&DAT_100ffa1c8,&DAT_100c97490);
  _swift_release(local_618);
  return;
}



/* Address: 0x100b07a10 | FUN_100b07a10 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b07adc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b07a10(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  Font param_5)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Text TVar6;
  Color CVar7;
  Text TVar8;
  Font FVar9;
  Text TVar10;
  Text TVar11;
  Font FVar12;
  Text TVar13;
  undefined *puVar14;
  Text TVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined *puVar18;
  char *pcVar19;
  undefined *puVar20;
  undefined *puVar21;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100ff9b40;
  FUN_100003a00(&DAT_100ff9b40,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteOnboarding/SetupView.swift";
    param_5.unknown = (undefined *)0x93;
    _swift_task_reportUnexpectedExecutor
              ("PasteOnboarding/SetupView.swift",0x1f,1,0x93,UVar4.unknown,puVar3);
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_100b02f84();
  _swift_bridgeObjectRetain(uVar1);
  puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar16 = pcVar5;
  TVar6 = SwiftUI::Text::_init(pcVar5,PTR___type_metadata_for_Swift_String_100eac208,pcVar5);
  CVar7 = SwiftUI::Color::get_primary(TVar6.unknown);
  TVar15 = TVar6;
  puVar17 = puVar14;
  pcVar19 = pcVar16;
  TVar8 = SwiftUI::Text::_foregroundColor(CVar7.unknown);
  _swift_release(CVar7.unknown);
  FUN_100016d74(TVar6.unknown,puVar14,pcVar16);
  _swift_bridgeObjectRelease();
  FVar9 = SwiftUI::Font::get_body(param_5);
  TVar6 = TVar8;
  puVar18 = TVar15.unknown;
  puVar20 = puVar17;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  FVar12.unknown = puVar20;
  _swift_release(FVar9.unknown);
  FUN_100016d74(TVar8.unknown,TVar15.unknown,puVar17);
  _swift_bridgeObjectRelease(pcVar19);
  _swift_bridgeObjectRetain();
  puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar8 = SwiftUI::Text::_init(TVar10.unknown,PTR___type_metadata_for_Swift_String_100eac208,pcVar5)
  ;
  CVar7 = SwiftUI::Color::get_secondary(TVar8.unknown);
  TVar15 = TVar8;
  puVar17 = puVar14;
  pcVar16 = pcVar5;
  TVar11 = SwiftUI::Text::_foregroundColor(CVar7.unknown);
  _swift_release(CVar7.unknown);
  FUN_100016d74(TVar8.unknown,puVar14,pcVar5);
  _swift_bridgeObjectRelease();
  FVar12 = SwiftUI::Font::get_callout(FVar12);
  TVar8 = TVar11;
  puVar14 = TVar15.unknown;
  puVar21 = puVar17;
  TVar13 = SwiftUI::Text::_font(FVar12.unknown);
  _swift_release(FVar12.unknown);
  FUN_100016d74(TVar11.unknown,TVar15.unknown,puVar17);
  _swift_bridgeObjectRelease(pcVar16);
  *param_1 = TVar10.unknown;
  param_1[1] = TVar6.unknown;
  *(char *)(param_1 + 2) = (char)puVar18;
  param_1[3] = puVar20;
  param_1[4] = TVar13.unknown;
  param_1[5] = TVar8.unknown;
  *(char *)(param_1 + 6) = (char)puVar14;
  param_1[7] = puVar21;
  FUN_100016d5c(TVar10.unknown,TVar6.unknown,(ulong)puVar18 & 0xffffffff);
  _swift_bridgeObjectRetain(puVar20);
  FUN_100016d5c(TVar13.unknown,TVar8.unknown,puVar14);
  _swift_bridgeObjectRetain(puVar21);
  FUN_100016d74(TVar13.unknown,TVar8.unknown,puVar14);
  _swift_bridgeObjectRelease(puVar21);
  FUN_100016d74(TVar10.unknown,TVar6.unknown,(ulong)puVar18 & 0xffffffff);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(puVar20);
  return;
}



/* Address: 0x100b07cfc | FUN_100b07cfc */

void FUN_100b07cfc(void)

{
  FUN_100b06fe4();
  return;
}



/* Address: 0x100b07d3c | FUN_100b07d3c */

void FUN_100b07d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  Instant IVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  IVar1 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x40) = IVar1.unknown;
  lVar4 = *(long *)(IVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined1 *)(unaff_x22 + 0x20) = param_5;
  _swift_task_switch(FUN_100b07dd8,0,0);
  return;
}



/* Address: 0x100b07dd8 | FUN_100b07dd8 */

void FUN_100b07dd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  Swift::ContinuousClock::typeMetadataAccessor();
  FUN_100003a00(&DAT_100ffa228,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100ffa230,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar5 = *(code **)(lVar3 + 8);
  *(code **)(unaff_x22 + 0x60) = pcVar5;
  (*pcVar5)(uVar1,uVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100091908;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x100b07ee0 | FUN_100b07ee0 */

void FUN_100b07ee0(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_font(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x100b07f08 | FUN_100b07f08 */

void FUN_100b07f08(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_font(param_2);
  return;
}



/* Address: 0x100b07f30 | FUN_100b07f30 */

void FUN_100b07f30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100ffa0f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ffa0e8;
  FUN_100005c24(&DAT_100ffa0e8,&DAT_100c972d0);
  puVar2 = &DAT_100ffa0f8;
  FUN_100016eac(&DAT_100ffa0f8,&DAT_100ffa100,&DAT_100c972d8,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_30 = PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ffa0f0 = puVar3;
  return;
}



/* Address: 0x100b07fc8 | thunk_FUN_100b089c8 */

void thunk_FUN_100b089c8(void)

{
  FUN_100b089c8();
  return;
}



/* Address: 0x100b07fcc | thunk_FUN_100b08a30 */

void thunk_FUN_100b08a30(void)

{
  FUN_100b08a30();
  return;
}



/* Address: 0x100b07fd0 | thunk_FUN_100b0892c */

void thunk_FUN_100b0892c(void)

{
  FUN_100b0892c();
  return;
}



/* Address: 0x100b07fd4 | thunk_FUN_100b08940 */

void thunk_FUN_100b08940(void)

{
  FUN_100b08940();
  return;
}



/* Address: 0x100b07fd8 | FUN_100b07fd8 */

void FUN_100b07fd8(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_controlSize(param_1);
  return;
}



/* Address: 0x100b07ff8 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x100b07ffc | thunk_FUN_100b088f0 */

void thunk_FUN_100b088f0(void)

{
  FUN_100b088f0();
  return;
}



/* Address: 0x100b08000 | thunk_FUN_100b08904 */

void thunk_FUN_100b08904(void)

{
  FUN_100b08904();
  return;
}



/* Address: 0x100b08004 | FUN_100b08004 */

void FUN_100b08004(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x100b08034 | FUN_100b08034 */

undefined8 * FUN_100b08034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x100b08094 | FUN_100b08094 */

undefined8 * FUN_100b08094(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_1[6];
  uVar1 = param_2[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100b08124 | FUN_100b08124 */

undefined8 * FUN_100b08124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100b08180 | FUN_100b08180 */

void FUN_100b08180(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100b0818c | FUN_100b0818c */

undefined8 * FUN_100b0818c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x100b081e8 | FUN_100b081e8 */

undefined8 * FUN_100b081e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100b08274 | FUN_100b08274 */

undefined8 * FUN_100b08274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100b082d0 | FUN_100b082d0 */

undefined1  [16] FUN_100b082d0(void)

{
  return ZEXT816(0x100f33e78);
}



/* Address: 0x100b082e0 | FUN_100b082e0 */

void FUN_100b082e0(void)

{
  FUN_100016eac(&DAT_100ffa1b0,&DAT_100ffa1b8,&DAT_100c973e0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  return;
}



/* Address: 0x100b08314 | FUN_100b08314 */

void FUN_100b08314(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ccca10,1);
  return;
}



/* Address: 0x100b08324 | FUN_100b08324 */

void FUN_100b08324(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance2(&local_20,&DAT_100ccc9dc,1);
  return;
}



/* Address: 0x100b08358 | FUN_100b08358 */

void FUN_100b08358(void)

{
  long unaff_x20;
  
  FUN_100b07414(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100b08364 | FUN_100b08364 */

void FUN_100b08364(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100ffa1d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ffa1c0;
  FUN_100005c24(&DAT_100ffa1c0,&DAT_100c97488);
  puVar2 = puVar1;
  FUN_100b083d4();
  puVar3 = 
  PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100eabb80
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100eabb80
             ,puVar1,&local_28);
  DAT_100ffa1d8 = puVar3;
  return;
}



/* Address: 0x100b083d4 | FUN_100b083d4 */

void FUN_100b083d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100ffa1e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ffa1d0;
  FUN_100005c24(&DAT_100ffa1d0,&DAT_100c97498);
  puVar2 = &DAT_100ffa1e8;
  FUN_100003a00(&DAT_100ffa1e8,PTR_typeMetadataAccessor_100eab9d8,
                PTR_SwiftUI__SwiftUI__Divider_>SwiftUI__View_100eab9c8);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ffa1e0 = puVar3;
  return;
}



/* Address: 0x100b08464 | FUN_100b08464 */

void FUN_100b08464(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100ffa208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ffa1f8;
  FUN_100005c24(&DAT_100ffa1f8,&DAT_100c974a8);
  puVar2 = &DAT_100ffa210;
  FUN_100016eac(&DAT_100ffa210,&DAT_100ffa1f0,&DAT_100c974a0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100ffa208 = puVar3;
  return;
}



/* Address: 0x100b08474 | FUN_100b08474 */

void FUN_100b08474(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = &DAT_100ffa1f8;
  FUN_100005c24(&DAT_100ffa1f8,&DAT_100c974a8);
  puVar2 = &DAT_100ffa210;
  FUN_100016eac(&DAT_100ffa210,&DAT_100ffa1f0,&DAT_100c974a0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ffa208 = puVar3;
  return;
}



/* Address: 0x100b084fc | FUN_100b084fc */

void FUN_100b084fc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b08538 | FUN_100b08538 */

void FUN_100b08538(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_100b06cdc(uVar1,uVar2,unaff_x20 + 0x20);
  return;
}



/* Address: 0x100b08594 | FUN_100b08594 */

void FUN_100b08594(long param_1)

{
  *(undefined1 *)(param_1 + 0x79) = 1;
  return;
}



/* Address: 0x100b085a0 | FUN_100b085a0 */

void FUN_100b085a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100ffa240 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ffa238;
  FUN_100005c24(&DAT_100ffa238,&DAT_100c974d8);
  puVar2 = &DAT_100ffa248;
  FUN_100b086f0(&DAT_100ffa248,&DAT_100ffa250,&DAT_100c974e0,
                PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ffa240 = puVar3;
  return;
}



/* Address: 0x100b08638 | FUN_100b08638 */

void FUN_100b08638(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100ffa260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff9f98;
  FUN_100005c24(&DAT_100ff9f98,&DAT_100c970d8);
  puVar2 = &DAT_100ffa268;
  FUN_100b086f0(&DAT_100ffa268,&DAT_100ffa270,&DAT_100c974e8,
                PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100eab708);
  puVar3 = &DAT_100ffa278;
  FUN_100016eac(&DAT_100ffa278,&DAT_100ffa280,&DAT_100c974f0,
                PTR_SwiftUI__SwiftUI___AnchorWritingModifier<undefined,undefined>_>SwiftUI__ViewModifier_100eaaf38
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100ffa260 = puVar4;
  return;
}



/* Address: 0x100b08648 | FUN_100b08648 */

void FUN_100b08648(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = &DAT_100ff9f98;
  FUN_100005c24(&DAT_100ff9f98,&DAT_100c970d8);
  puVar2 = &DAT_100ffa268;
  FUN_100b086f0(&DAT_100ffa268,&DAT_100ffa270,&DAT_100c974e8,
                PTR___protocol_witness_table_for_SwiftUI_Color___SwiftUI_View_in_SwiftUI_100eab708);
  puVar3 = &DAT_100ffa278;
  FUN_100016eac(&DAT_100ffa278,&DAT_100ffa280,&DAT_100c974f0,
                PTR_SwiftUI__SwiftUI___AnchorWritingModifier<undefined,undefined>_>SwiftUI__ViewModifier_100eaaf38
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ffa260 = puVar4;
  return;
}



/* Address: 0x100b086f0 | FUN_100b086f0 */

void FUN_100b086f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 local_30;
  undefined *puStack_28;
  
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    puStack_28 = 
    PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0
    ;
    puVar1 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
    local_30 = param_4;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
               param_2,&local_30);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x100b08750 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x100b08754 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}


