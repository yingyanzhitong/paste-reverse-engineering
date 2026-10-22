/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10005abd0 | FUN_10005abd0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10005abd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  ID self;
  ID self_00;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  self = *(ID *)(param_5 + _TtC5Paste21FilterSuggestionsMenu::suggestionsView);
  if (self != 0) {
    uVar1 = param_2;
    uVar2 = param_3;
    uVar3 = param_4;
    FUN_10002eae8();
    self_00 = 0;
    if (self != 0) {
      FUN_10000ed50();
      objc_stub::bounds(*(ID *)(self + _TtC5Paste19FilterSuggestionRow::___lazy_storage___titleLabel
                               ));
      objc_stub::convertRect_toView_(self_00,self);
      objc_stub::convertRect_toView_(self,extraout_d0,uVar1,uVar2,uVar3,0);
      _CGRectGetMinX(param_1,param_2,param_3,param_4);
      _CGRectGetMinX(extraout_d0_00,uVar1,uVar2,uVar3);
    }
  }
  return 0;
}



/* Address: 0x10005ad00 | FUN_10005ad00 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

_ArrayBuffer
FUN_10005ad00(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ID param_5,
             ID param_6,ID param_7,undefined8 param_8)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  NSObject *self;
  _ArrayBuffer _Var6;
  ulong self_00;
  MainActor *pMVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  NSObject *pNVar12;
  long lVar13;
  ulong uVar14;
  double extraout_d0;
  double extraout_d0_00;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ID IVar11;
  
  self = (NSObject *)objc_stub::window(param_6);
  if (self == (NSObject *)0x0) {
    return (_ArrayBuffer)(undefined *)0x0;
  }
  objc_stub::setContentView_(param_7,param_5);
  objc_stub::fittingSize(param_5);
  dVar16 = 120.0;
  dVar18 = extraout_d0;
  if (extraout_d0 <= 120.0) {
    dVar18 = 120.0;
  }
  objc_stub::frame(param_7);
  objc_stub::setFrame_display_(param_7,0);
  objc_stub::layoutSubtreeIfNeeded(param_5);
  objc_stub::fittingSize(param_5);
  dVar17 = dVar16;
  objc_stub::bounds(param_6);
  objc_stub::convertRect_toView_(param_6,0);
  objc_stub::convertRectToScreen_((ID)self);
  dVar15 = dVar17;
  _Var6.unknown = (undefined *)NSScreen::screens(&_OBJC_CLASS___NSScreen);
  FUN_10000ec2c(0,&DAT_100fa70f8,&PTR__OBJC_CLASS___NSScreen_100f8d6d8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    lVar13 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var2.unknown = _Var6.unknown;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar13 != 0) {
    uVar14 = 0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10005b108);
          (*pcVar3)();
        }
        self_00 = *(ulong *)(_Var6.unknown + uVar14 * 8 + 0x20);
      }
      else {
        self_00 = uVar14;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var6);
      }
      lVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10005b104);
        (*pcVar3)();
      }
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      pMVar7 = pMVar8;
      FUN_1000081a8();
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/FilterSuggestionsMenu.swift",0x21,1,0x3a,UVar9.unknown,pMVar7);
      }
      IVar11 = objc_stub::frame(self_00);
      iVar5 = (int)IVar11;
      _CGRectContainsPoint();
      _swift_release(pMVar8);
      if (iVar5 != 0) {
        _swift_bridgeObjectRelease(_Var6.unknown);
        objc_stub::visibleFrame(self_00);
        dVar15 = (dVar17 - dVar15) + -6.0;
        if (dVar16 <= dVar15) {
          dVar15 = dVar16;
        }
        objc_stub::frame(param_7);
        objc_stub::setFrame_display_(param_7,extraout_d0_00,dVar17 - dVar15,dVar18,dVar15,1);
        FUN_10005abd0(param_1,param_2,param_3,param_4,param_8);
        if ((param_1 != 0.0) || (param_2 != 0.0)) {
          objc_stub::setFrame_display_
                    (param_7,extraout_d0_00 + param_1,param_2 + (dVar17 - dVar15),dVar18,dVar15,1);
        }
        pNVar12 = (NSObject *)objc_stub::parentWindow(param_7);
        if (pNVar12 != (NSObject *)0x0) {
          FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
          bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar12,self);
          if (bVar4) goto LAB_10005b0a0;
        }
        IVar11 = objc_stub::parentWindow(param_7);
        objc_stub::removeChildWindow_(IVar11,param_7);
        objc_stub::addChildWindow_ordered_((ID)self,param_7,1);
LAB_10005b0a0:
        objc_stub::display(param_7);
        objc_stub::orderFront_(param_7,0);
        FUN_10005a3b8(self,param_6);
        return (_ArrayBuffer)(undefined *)0x0;
      }
      uVar14 = uVar14 + 1;
    } while (lVar1 != lVar13);
  }
  _swift_bridgeObjectRelease(_Var6.unknown);
  return (_ArrayBuffer)_Var6.unknown;
}



/* Address: 0x10005b15c | FUN_10005b15c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10005b15c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10005b188 | FUN_10005b188 */

void FUN_10005b188(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10005a618(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10005b190 | FUN_10005b190 */

void FUN_10005b190(long param_1,long param_2)

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



/* Address: 0x10005b1a4 | FUN_10005b1a4 */

void FUN_10005b1a4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10005b1ac | FUN_10005b1ac */

void FUN_10005b1ac(void)

{
  FUN_10005a8b8();
  return;
}



/* Address: 0x10005b1b4 | FUN_10005b1b4 */

void FUN_10005b1b4(void)

{
  FUN_10005a918();
  return;
}



/* Address: 0x10005b1cc | FUN_10005b1cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10005b1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,uint param_6)

{
  undefined8 *puVar1;
  ID self;
  ID IVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::mouseDownMonitor);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::lostFocusObserver) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::suggestionsView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste21FilterSuggestionsMenu::suggestionsScrollView) = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,
                             "initWithContentRect:styleMask:backing:defer:",param_1,param_2,param_3,
                             param_4,0,param_5,(ulong)(param_6 & 1));
  IVar2 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  objc_stub::setBackgroundColor_(self,IVar2);
  objc_stub::setHasShadow_(self,1);
  objc_stub::setOpaque_(self,0);
  objc_stub::setLevel_(self,0x65);
  return self;
}



/* Address: 0x10005b310 | thunk_FUN_10005b190 */

void thunk_FUN_10005b190(long param_1,long param_2)

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



/* Address: 0x10005b314 | thunk_FUN_10005b1a4 */

void thunk_FUN_10005b1a4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10005b318 | thunk_FUN_10005a394 */

void thunk_FUN_10005a394(void)

{
  FUN_10005a394();
  return;
}



/* Address: 0x10005b31c | FUN_10005b31c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010005b6f4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10005b31c(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  LocalizedStringResource LVar6;
  SwitchToggleStyle SVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  char *pcVar12;
  Text TVar13;
  Font FVar14;
  Font FVar15;
  Text TVar16;
  AnyView AVar17;
  HorizontalAlignment HVar18;
  Text TVar19;
  char *pcVar20;
  char *pcVar21;
  long extraout_x8;
  undefined8 *puVar22;
  long extraout_x8_00;
  undefined *puVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar25;
  long lVar26;
  long lVar27;
  String SVar28;
  char *apcStack_200 [2];
  long local_1f0;
  undefined *local_1e8;
  MainActor *local_1e0;
  undefined *local_1d8;
  long local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined8 *local_1b8;
  long local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  LocalizedStringResource local_198;
  long local_190;
  undefined8 *local_188;
  String local_180;
  undefined1 local_170;
  char *local_168;
  
  puVar5 = &DAT_100fa9320;
  local_1b0 = param_1;
  FUN_1000037f0(&DAT_100fa9320,&DAT_100c26240);
  local_1d8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar24 = (long)apcStack_200 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_1a8 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar22 = (undefined8 *)(lVar24 - extraout_x12);
  local_1b8 = puVar22;
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  puVar23 = (undefined *)((long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fa9328;
  local_198.unknown = puVar23;
  FUN_1000037f0(&DAT_100fa9328,&DAT_100c26248);
  local_1e8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar24 = (long)puVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_1c0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar22 = (undefined8 *)(lVar24 - extraout_x12_00);
  local_188 = puVar22;
  SVar7 = SwiftUI::SwitchToggleStyle::typeMetadataAccessor();
  lVar27 = *(long *)(SVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  lVar26 = (long)puVar22 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa9330;
  FUN_1000037f0(&DAT_100fa9330,&DAT_100c26250);
  local_190 = *(long *)(puVar5 + -8);
  local_1c8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_190 + 0x40));
  lVar24 = lVar26 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_1d0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar24 - extraout_x12_01;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar22 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_1e0 = pMVar8;
  UVar9 = Swift::Actor::get_unownedExecutor();
  UVar10 = UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar10.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xe,UVar9.unknown,puVar22);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_180.bridgeObject;
  local_180 = (String)(auVar1 << 0x40);
  FUN_10005b9c8(&local_180.bridgeObject,param_2);
  SwiftUI::SwitchToggleStyle::init();
  puVar5 = &DAT_100fa9338;
  FUN_1000037f0(&DAT_100fa9338,&DAT_100c26258);
  puVar23 = &DAT_100fa9340;
  local_1a0 = param_2;
  FUN_100016eac(&DAT_100fa9340,&DAT_100fa9338,&DAT_100c26258,
                &TargetProtocolConformanceDescriptor_100c254b8);
  puVar11 = &DAT_100fa9348;
  FUN_100003a00(&DAT_100fa9348,PTR_typeMetadataAccessor_100eaabd0,
                PTR_SwiftUI__SwiftUI__SwitchToggleStyle_>SwiftUI__ToggleStyle_100eaabc0);
  (extension_SwiftUI)::SwiftUI::View::_toggleStyle
            (lVar24,lVar26,puVar5,SVar7.unknown,puVar23,puVar11);
  (**(code **)(lVar27 + 8))(lVar26,SVar7.unknown);
  FUN_100005808(&local_180,&DAT_100fa9338,&DAT_100c26258);
  LVar6.unknown = local_198.unknown;
  FUN_1001e0354(local_198.unknown);
  SVar28 = (extension_Foundation)::Swift::String::init(LVar6);
  local_180 = SVar28;
  FUN_100008378();
  pcVar12 = SVar28.str;
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  apcStack_200[1] = pcVar12;
  TVar13 = SwiftUI::Text::_init();
  FVar15.unknown = puVar5;
  FVar14 = SwiftUI::Font::get_body(TVar13.unknown);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar14.unknown);
  FVar15 = SwiftUI::Font::weight(FVar14.unknown,FVar15);
  _swift_release(FVar14.unknown);
  TVar19 = TVar13;
  puVar11 = puVar5;
  pcVar20 = pcVar12;
  TVar16 = SwiftUI::Text::_font(FVar15.unknown);
  pcVar21 = pcVar20;
  local_1f0 = lVar24;
  _swift_release(FVar15.unknown);
  FUN_100016d74(TVar13.unknown,puVar5,pcVar12);
  _swift_bridgeObjectRelease(puVar23);
  local_180.bridgeObject = TVar19.unknown;
  local_180.str = TVar16.unknown;
  local_170 = SUB81(puVar11,0);
  local_168 = pcVar20;
  AVar17 = SwiftUI::AnyView::_init
                     (TVar16.unknown,PTR___type_metadata_for_SwiftUI_Text_100eab358,
                      PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348
                     );
  puVar22 = local_188;
  *local_188 = AVar17.unknown;
  puVar22 = (undefined8 *)((long)puVar22 + (long)*(int *)(local_1e8 + 0x24));
  HVar18 = SwiftUI::HorizontalAlignment::get_center(AVar17.unknown);
  *puVar22 = HVar18.unknown;
  puVar22[1] = 0x4024000000000000;
  *(undefined1 *)(puVar22 + 2) = 0;
  puVar5 = &DAT_100fa9350;
  FUN_1000037f0(&DAT_100fa9350,&DAT_100c26260);
  FUN_10005d37c((long)puVar22 + (long)*(int *)(puVar5 + 0x2c),local_1a0);
  LVar6.unknown = local_198.unknown;
  FUN_1001dc2d4(local_198.unknown);
  local_180 = (extension_Foundation)::Swift::String::init(LVar6);
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar20 = apcStack_200[1];
  TVar13 = SwiftUI::Text::_init();
  FVar15.unknown = puVar5;
  FVar14 = SwiftUI::Font::get_body(TVar13.unknown);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar14.unknown);
  FVar15 = SwiftUI::Font::weight(FVar14.unknown,FVar15);
  _swift_release(FVar14.unknown);
  TVar19 = TVar13;
  puVar23 = puVar5;
  pcVar12 = pcVar20;
  TVar16 = SwiftUI::Text::_font(FVar15.unknown);
  _swift_release(FVar15.unknown);
  FUN_100016d74(TVar13.unknown,puVar5,pcVar20);
  _swift_bridgeObjectRelease(pcVar21);
  local_180.bridgeObject = TVar19.unknown;
  local_180.str = TVar16.unknown;
  local_170 = SUB81(puVar23,0);
  local_168 = pcVar12;
  AVar17 = SwiftUI::AnyView::_init
                     (TVar16.unknown,PTR___type_metadata_for_SwiftUI_Text_100eab358,
                      PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348
                     );
  puVar2 = local_1b8;
  *local_1b8 = AVar17.unknown;
  puVar22 = (undefined8 *)((long)puVar2 + (long)*(int *)(local_1d8 + 0x24));
  HVar18 = SwiftUI::HorizontalAlignment::get_center(AVar17.unknown);
  *puVar22 = HVar18.unknown;
  puVar22[1] = 0x4024000000000000;
  *(undefined1 *)(puVar22 + 2) = 0;
  puVar5 = &DAT_100fa9358;
  FUN_1000037f0(&DAT_100fa9358,&DAT_100c26268);
  FUN_10005fce8((long)puVar22 + (long)*(int *)(puVar5 + 0x2c),local_1a0);
  puVar23 = local_1c8;
  lVar26 = local_1d0;
  lVar24 = local_1f0;
  pcVar25 = *(code **)(local_190 + 0x10);
  (*pcVar25)(local_1d0,local_1f0,local_1c8);
  puVar22 = local_188;
  lVar27 = local_1c0;
  FUN_100011090(local_188,local_1c0,&DAT_100fa9328,&DAT_100c26248);
  lVar4 = local_1a8;
  FUN_100011090(puVar2,local_1a8,&DAT_100fa9320,&DAT_100c26240);
  lVar3 = local_1b0;
  (*pcVar25)(local_1b0,lVar26,puVar23);
  puVar5 = &DAT_100fa9360;
  FUN_1000037f0(&DAT_100fa9360,&DAT_100c26270);
  FUN_100011090(lVar27,lVar3 + *(int *)(puVar5 + 0x30),&DAT_100fa9328,&DAT_100c26248);
  FUN_100011090(lVar4,lVar3 + *(int *)(puVar5 + 0x40),&DAT_100fa9320,&DAT_100c26240);
  FUN_100005808(puVar2,&DAT_100fa9320,&DAT_100c26240);
  FUN_100005808(puVar22,&DAT_100fa9328,&DAT_100c26248);
  pcVar25 = *(code **)(local_190 + 8);
  (*pcVar25)(lVar24,puVar23);
  FUN_100005808(lVar4,&DAT_100fa9320,&DAT_100c26240);
  FUN_100005808(lVar27,&DAT_100fa9328,&DAT_100c26248);
  (*pcVar25)(lVar26,puVar23);
  _swift_release(local_1e0);
  return;
}



/* Address: 0x10005b9c8 | FUN_10005b9c8 */

void FUN_10005b9c8(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  byte bVar6;
  LocalizedStringResource LVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  code *pcVar11;
  undefined *puVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  String SVar18;
  undefined *local_120;
  void *local_118;
  char *local_110;
  undefined8 local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  undefined1 auStack_b8 [88];
  
  LVar7 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar14 = *(long *)(*(long *)(LVar7.unknown + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar10 = lVar14 + 0xfU & 0xfffffffffffffff0;
  LVar7.unknown = (undefined *)((long)&local_120 - uVar10);
  FUN_1001df754(LVar7.unknown);
  SVar18 = (extension_Foundation)::Swift::String::init(LVar7);
  local_d0 = SVar18.bridgeObject;
  local_e8 = SVar18.str;
  puVar8 = &DAT_100eb2390;
  _swift_allocObject(&DAT_100eb2390,0x60,7);
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  *(undefined8 *)(puVar8 + 0x38) = param_2[5];
  *(undefined8 *)(puVar8 + 0x30) = uVar15;
  *(undefined8 *)(puVar8 + 0x48) = uVar17;
  *(undefined8 *)(puVar8 + 0x40) = uVar16;
  uVar15 = param_2[8];
  *(undefined8 *)(puVar8 + 0x58) = param_2[9];
  *(undefined8 *)(puVar8 + 0x50) = uVar15;
  uVar17 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  *(undefined8 *)(puVar8 + 0x18) = param_2[1];
  *(undefined8 *)(puVar8 + 0x10) = uVar17;
  *(undefined8 *)(puVar8 + 0x28) = uVar16;
  *(undefined8 *)(puVar8 + 0x20) = uVar15;
  local_d8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  LVar7.unknown = LVar7.unknown + -uVar10;
  FUN_1000624b0(param_2,auStack_b8);
  FUN_1001e1854(LVar7.unknown);
  SVar18 = (extension_Foundation)::Swift::String::init(LVar7);
  local_c0 = SVar18.bridgeObject;
  local_f0 = SVar18.str;
  puVar8 = &DAT_100eb23b8;
  _swift_allocObject(&DAT_100eb23b8,0x60,7);
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  *(undefined8 *)(puVar8 + 0x38) = param_2[5];
  *(undefined8 *)(puVar8 + 0x30) = uVar15;
  *(undefined8 *)(puVar8 + 0x48) = uVar17;
  *(undefined8 *)(puVar8 + 0x40) = uVar16;
  uVar15 = param_2[8];
  *(undefined8 *)(puVar8 + 0x58) = param_2[9];
  *(undefined8 *)(puVar8 + 0x50) = uVar15;
  uVar17 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  *(undefined8 *)(puVar8 + 0x18) = param_2[1];
  *(undefined8 *)(puVar8 + 0x10) = uVar17;
  *(undefined8 *)(puVar8 + 0x28) = uVar16;
  *(undefined8 *)(puVar8 + 0x20) = uVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  LVar7.unknown = LVar7.unknown + -uVar10;
  FUN_1000624b0(param_2,auStack_b8);
  FUN_1001e40d4(LVar7.unknown);
  SVar18 = (extension_Foundation)::Swift::String::init(LVar7);
  local_c8 = SVar18.bridgeObject;
  local_f8 = SVar18.str;
  puVar12 = &DAT_100eb23e0;
  _swift_allocObject(&DAT_100eb23e0,0x60,7);
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  *(undefined8 *)(puVar12 + 0x38) = param_2[5];
  *(undefined8 *)(puVar12 + 0x30) = uVar15;
  *(undefined8 *)(puVar12 + 0x48) = uVar17;
  *(undefined8 *)(puVar12 + 0x40) = uVar16;
  uVar15 = param_2[8];
  *(undefined8 *)(puVar12 + 0x58) = param_2[9];
  *(undefined8 *)(puVar12 + 0x50) = uVar15;
  uVar17 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  *(undefined8 *)(puVar12 + 0x18) = param_2[1];
  *(undefined8 *)(puVar12 + 0x10) = uVar17;
  *(undefined8 *)(puVar12 + 0x28) = uVar16;
  *(undefined8 *)(puVar12 + 0x20) = uVar15;
  local_e0 = puVar12;
  bVar6 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar6 & 1) == 0) {
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    FUN_1000624b0(param_2,auStack_b8);
    FUN_1001df5d4(LVar7.unknown + -uVar10);
    SVar18 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)(LVar7.unknown + -uVar10));
    pvVar13 = SVar18.bridgeObject;
    local_100 = SVar18.str;
    puVar12 = &DAT_100eb2408;
    _swift_allocObject(&DAT_100eb2408,0x60,7);
    uVar15 = param_2[4];
    uVar17 = param_2[7];
    uVar16 = param_2[6];
    *(undefined8 *)(puVar12 + 0x38) = param_2[5];
    *(undefined8 *)(puVar12 + 0x30) = uVar15;
    *(undefined8 *)(puVar12 + 0x48) = uVar17;
    *(undefined8 *)(puVar12 + 0x40) = uVar16;
    uVar15 = param_2[8];
    *(undefined8 *)(puVar12 + 0x58) = param_2[9];
    *(undefined8 *)(puVar12 + 0x50) = uVar15;
    uVar17 = *param_2;
    uVar16 = param_2[3];
    uVar15 = param_2[2];
    *(undefined8 *)(puVar12 + 0x18) = param_2[1];
    *(undefined8 *)(puVar12 + 0x10) = uVar17;
    *(undefined8 *)(puVar12 + 0x28) = uVar16;
    *(undefined8 *)(puVar12 + 0x20) = uVar15;
    FUN_1000624b0(param_2,auStack_b8);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRetain(pvVar13);
    _swift_retain(puVar12);
    local_108 = 0x3fe0000000000000;
    pcVar11 = FUN_1000627dc;
  }
  else {
    FUN_1000624b0(param_2,auStack_b8);
    local_108 = 0;
    local_100 = (char *)0x0;
    pvVar13 = (void *)0x0;
    pcVar11 = (code *)0x0;
    puVar12 = (undefined *)0x0;
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_1001e28d4(LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0));
  SVar18 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (LVar7.unknown + -(lVar14 + 0xfU & 0xfffffffffffffff0)));
  local_118 = SVar18.bridgeObject;
  local_110 = SVar18.str;
  puVar9 = &DAT_100eb2430;
  _swift_allocObject(&DAT_100eb2430,0x60,7);
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  *(undefined8 *)(puVar9 + 0x38) = param_2[5];
  *(undefined8 *)(puVar9 + 0x30) = uVar15;
  *(undefined8 *)(puVar9 + 0x48) = uVar17;
  *(undefined8 *)(puVar9 + 0x40) = uVar16;
  uVar15 = param_2[8];
  *(undefined8 *)(puVar9 + 0x58) = param_2[9];
  *(undefined8 *)(puVar9 + 0x50) = uVar15;
  uVar17 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  *(undefined8 *)(puVar9 + 0x18) = param_2[1];
  *(undefined8 *)(puVar9 + 0x10) = uVar17;
  *(undefined8 *)(puVar9 + 0x28) = uVar16;
  *(undefined8 *)(puVar9 + 0x20) = uVar15;
  FUN_1000624b0(param_2,auStack_b8);
  pvVar5 = local_d0;
  _swift_bridgeObjectRetain(local_d0);
  puVar4 = local_d8;
  _swift_retain(local_d8);
  _swift_bridgeObjectRetain(local_c0);
  local_120 = puVar8;
  _swift_retain(puVar8);
  _swift_bridgeObjectRetain(local_c8);
  _swift_retain(local_e0);
  pcVar2 = local_100;
  uVar15 = local_108;
  FUN_10006282c(local_100,pvVar13,0,0,pcVar11,puVar12,local_108);
  pvVar1 = local_118;
  _swift_bridgeObjectRetain(local_118);
  _swift_retain(puVar9);
  FUN_100062868(pcVar2,pvVar13,0,0,pcVar11,puVar12,uVar15);
  puVar3 = local_e0;
  puVar8 = local_120;
  *param_1 = local_e8;
  param_1[1] = pvVar5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = FUN_100062784;
  param_1[5] = puVar4;
  param_1[6] = 0x3fe0000000000000;
  param_1[7] = local_f0;
  param_1[8] = local_c0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = FUN_1000627ac;
  param_1[0xc] = local_120;
  param_1[0xd] = 0x3fe0000000000000;
  param_1[0xe] = local_f8;
  param_1[0xf] = local_c8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = FUN_1000627d4;
  param_1[0x13] = local_e0;
  param_1[0x14] = 0x3fe0000000000000;
  param_1[0x15] = pcVar2;
  param_1[0x16] = pvVar13;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = pcVar11;
  param_1[0x1a] = puVar12;
  param_1[0x1b] = uVar15;
  param_1[0x1c] = local_110;
  param_1[0x1d] = pvVar1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = FUN_100062804;
  param_1[0x21] = puVar9;
  _swift_release(puVar9);
  _swift_bridgeObjectRelease(0);
  _swift_bridgeObjectRelease(pvVar1);
  FUN_100062868(pcVar2,pvVar13,0,0,pcVar11,puVar12,uVar15);
  _swift_release(local_d8);
  _swift_bridgeObjectRelease(local_d0);
  _swift_release(puVar8);
  _swift_bridgeObjectRelease(local_c0);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease_n(0,3);
  _swift_bridgeObjectRelease(local_c8);
  return;
}



/* Address: 0x10005be70 | FUN_10005be70 */

void FUN_10005be70(long param_1,undefined8 *param_2,Wrapper param_3)

{
  ObservedObject OVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ControlSize CVar5;
  Wrapper WVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  Binding<bool> local_68;
  
  OVar1.unknown = (undefined *)*param_2;
  FUN_1000ad91c(0);
  FUN_100003a00(&DAT_100fa9310,FUN_1000ad91c,&TargetProtocolConformanceDescriptor_100c29498);
  WVar6 = SwiftUI::ObservedObject::_get_projectedValue(OVar1);
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(param_3);
  _swift_release(WVar6.unknown);
  _swift_release(param_3.unknown);
  SwiftUI::Toggle::_init(local_68);
  puVar7 = &DAT_100fa9548;
  FUN_1000037f0(&DAT_100fa9548,&DAT_100c26610);
  iVar3 = *(int *)(puVar7 + 0x24);
  puVar7 = &DAT_100fa7208;
  FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
  iVar4 = *(int *)(puVar7 + 0x1c);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_mini_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa600
  ;
  CVar5 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar5.value) + -8) + 0x68))
            (param_1 + iVar3 + (long)iVar4,uVar2,CONCAT71(extraout_var,CVar5.value));
  puVar7 = &DAT_100c26620;
  _swift_getKeyPath();
  *(undefined **)(param_1 + iVar3) = puVar7;
  return;
}



/* Address: 0x10005bfc0 | FUN_10005bfc0 */

void FUN_10005bfc0(undefined8 *param_1,VerticalAlignment param_2)

{
  VerticalAlignment VVar1;
  undefined *puVar2;
  
  VVar1 = SwiftUI::VerticalAlignment::get_center(param_2);
  *param_1 = VVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar2 = &DAT_100fa9550;
  FUN_1000037f0(&DAT_100fa9550,&DAT_100c266b8);
  FUN_10005c014((long)param_1 + (long)*(int *)(puVar2 + 0x2c),param_2.unknown);
  return;
}



/* Address: 0x10005c014 | FUN_10005c014 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010005ca04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10005c014(long param_1,MainActor *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  ControlSize CVar7;
  undefined *puVar8;
  PlainButtonStyle PVar9;
  undefined *puVar10;
  MainActor *pMVar11;
  MainActor *pMVar12;
  UnownedSerialExecutor UVar13;
  UnownedSerialExecutor UVar14;
  undefined *puVar15;
  undefined *puVar16;
  Text TVar17;
  Font FVar18;
  Text TVar19;
  Color CVar20;
  Text TVar21;
  Text TVar22;
  undefined8 uVar23;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar24;
  long extraout_x8_04;
  undefined8 *puVar25;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long lVar26;
  long lVar27;
  long lVar28;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  MainActor *this;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long local_190;
  undefined8 *local_188;
  MainActor *local_180;
  MainActor *local_178;
  undefined *local_170;
  long local_168;
  long local_160;
  undefined8 *local_158;
  long local_150;
  long local_148;
  long local_140;
  undefined8 *local_138;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  ulong local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  MainActor *local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  Binding<bool> local_b8;
  undefined *puStack_b0;
  
  puVar8 = &DAT_100fa9558;
  local_c8 = param_1;
  FUN_1000037f0(&DAT_100fa9558,&DAT_100c266c0);
  local_108 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fa9560;
  local_158 = (undefined8 *)((long)&local_190 - extraout_x8);
  FUN_1000037f0(&DAT_100fa9560,&DAT_100c266c8);
  local_170 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar26 = ((long)&local_190 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_168 = lVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = lVar26 - extraout_x12;
  puVar8 = &DAT_100fa9568;
  local_160 = lVar26;
  FUN_1000037f0(&DAT_100fa9568,&DAT_100c266d0);
  local_100 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_01;
  puVar8 = &DAT_100fa9570;
  local_d8 = lVar26;
  FUN_1000037f0(&DAT_100fa9570,&DAT_100c266d8);
  local_128 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_02;
  puVar8 = &DAT_100fa9578;
  local_120 = lVar26;
  FUN_1000037f0(&DAT_100fa9578,&DAT_100c266e0);
  local_e8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar24 = lVar26 - extraout_x8_03;
  puVar8 = &DAT_100fa9580;
  local_118 = uVar24;
  FUN_1000037f0(&DAT_100fa9580,&DAT_100c266e8);
  local_130 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = (undefined8 *)(uVar24 - extraout_x8_04);
  puVar8 = (undefined *)0x0;
  local_138 = puVar25;
  FUN_1003b2fc0();
  local_110 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar27 = (long)puVar25 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_190 = lVar27;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = lVar27 - extraout_x12_00;
  local_140 = lVar27;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = lVar27 - extraout_x12_01;
  puVar8 = &DAT_100fa9588;
  FUN_1000037f0(&DAT_100fa9588,&DAT_100c266f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar26 = lVar27 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = lVar26 - extraout_x12_02;
  local_e0 = lVar26;
  PVar9 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_148 = *(long *)(PVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_148 + 0x40));
  lVar26 = lVar26 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fa9590;
  FUN_1000037f0(&DAT_100fa9590,&DAT_100c266f8);
  local_150 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar10 = &DAT_100fa9598;
  FUN_1000037f0(&DAT_100fa9598,&DAT_100c26700);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar28 = (lVar26 - extraout_x8_08) - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_c0 = lVar28 - extraout_x12_03;
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar12 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar25 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_188 = puVar25;
  local_180 = pMVar11;
  local_f8 = pMVar12;
  UVar13 = Swift::Actor::get_unownedExecutor();
  UVar14 = UVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar14.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x28,UVar13.unknown,puVar25);
  }
  lVar29 = *(long *)(param_2 + 8);
  puVar10 = &DAT_100c26708;
  _swift_getKeyPath(&DAT_100c26708);
  puVar15 = &DAT_100c26730;
  _swift_getKeyPath(&DAT_100c26730);
  Combine::Published::_get_subscript(&local_b8,lVar29,puVar10,puVar15);
  _swift_release(puVar10);
  _swift_release(puVar15);
  bVar1 = ((ulong)local_b8.unknown & 1) == 0;
  lVar28 = local_c0;
  local_178 = param_2;
  if (bVar1) {
    puVar10 = &DAT_100eb2458;
    _swift_allocObject(&DAT_100eb2458,0x60,7);
    uVar23 = *(undefined8 *)(param_2 + 0x20);
    uVar31 = *(undefined8 *)(param_2 + 0x38);
    uVar30 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(puVar10 + 0x38) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(puVar10 + 0x30) = uVar23;
    *(undefined8 *)(puVar10 + 0x48) = uVar31;
    *(undefined8 *)(puVar10 + 0x40) = uVar30;
    uVar23 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(puVar10 + 0x58) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(puVar10 + 0x50) = uVar23;
    uVar31 = *(undefined8 *)param_2;
    uVar30 = *(undefined8 *)(param_2 + 0x18);
    uVar23 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar10 + 0x18) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar10 + 0x10) = uVar31;
    *(undefined8 *)(puVar10 + 0x28) = uVar30;
    *(undefined8 *)(puVar10 + 0x20) = uVar23;
    FUN_1000624b0(param_2,&local_b8);
    _swift_retain(puVar10);
    FUN_1000037f0(&DAT_100fa95a0,&DAT_100c26750);
    FUN_100016eac(&DAT_100fa95a8,&DAT_100fa95a0,&DAT_100c26750,
                  PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
    SwiftUI::Button::_init();
    SwiftUI::PlainButtonStyle::init();
    puVar15 = &DAT_100fa95b0;
    FUN_100016eac(&DAT_100fa95b0,&DAT_100fa9590,&DAT_100c266f8,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
    puVar16 = &DAT_100fa7200;
    FUN_100003a00(&DAT_100fa7200,PTR_typeMetadataAccessor_100eaa9d0,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
    lVar28 = local_c0;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_c0,lVar26,puVar8,PVar9.unknown,puVar15,puVar16);
    _swift_release(puVar10);
    (**(code **)(local_148 + 8))(lVar26,PVar9.unknown);
    (**(code **)(local_150 + 8))(lVar26 - extraout_x8_08,puVar8);
  }
  CVar20.unknown = &DAT_100fa95b8;
  FUN_1000037f0(&DAT_100fa95b8,&DAT_100c26758);
  (**(code **)(*(long *)(CVar20.unknown + -8) + 0x38))(lVar28,!bVar1,1);
  puVar8 = &DAT_100c26760;
  _swift_getKeyPath(&DAT_100c26760);
  puVar10 = &DAT_100c26788;
  _swift_getKeyPath(&DAT_100c26788);
  Combine::Published::_get_subscript(lVar27,lVar29,puVar8,puVar10);
  _swift_release(puVar8);
  _swift_release(puVar10);
  puVar8 = local_110;
  lVar26 = lVar27;
  _swift_getEnumCaseMultiPayload(lVar27,local_110);
  FUN_1000629fc(lVar27);
  puVar25 = local_138;
  if ((int)lVar26 == 3) {
    (extension_SwiftUI)::SwiftUI::ProgressView::_init();
    iVar3 = *(int *)(local_130 + 0x24);
    puVar8 = &DAT_100fa7208;
    FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
    iVar4 = *(int *)(puVar8 + 0x1c);
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa610
    ;
    CVar7 = SwiftUI::ControlSize::typeMetadataAccessor();
    lVar26 = CONCAT71((int7)((ulong)puVar8 >> 8),CVar7.value);
    (**(code **)(*(long *)(lVar26 + -8) + 0x68))
              ((long)puVar25 + (long)iVar3 + (long)iVar4,uVar2,lVar26);
    puVar8 = &DAT_100c26620;
    _swift_getKeyPath();
    lVar26 = local_120;
    *(undefined **)((long)puVar25 + (long)iVar3) = puVar8;
    FUN_100011090(puVar25,local_120,&DAT_100fa9580,&DAT_100c266e8);
    uVar23 = 0;
  }
  else {
    puVar10 = &DAT_100c26760;
    _swift_getKeyPath(&DAT_100c26760);
    puVar15 = &DAT_100c26788;
    _swift_getKeyPath(&DAT_100c26788);
    lVar26 = local_140;
    Combine::Published::_get_subscript(local_140,lVar29,puVar10,puVar15);
    _swift_release(puVar10);
    _swift_release(puVar15);
    lVar27 = lVar26;
    _swift_getEnumCaseMultiPayload(lVar26,puVar8);
    FUN_1000629fc(lVar26);
    puVar25 = local_138;
    if ((int)lVar27 != 4) {
      puVar8 = &DAT_100c26760;
      _swift_getKeyPath();
      puVar10 = &DAT_100c26788;
      _swift_getKeyPath();
      lVar26 = local_190;
      puVar15 = puVar8;
      Combine::Published::_get_subscript(local_190,lVar29,puVar8,puVar10);
      _swift_release(puVar8);
      _swift_release();
      FUN_1003b3030();
      FUN_1000629fc(lVar26);
      local_b8.unknown = (undefined *)0x0;
      if (puVar15 != (undefined *)0x0) {
        local_b8.unknown = puVar10;
      }
      puStack_b0 = (undefined *)0xe000000000000000;
      if (puVar15 != (undefined *)0x0) {
        puStack_b0 = puVar15;
      }
      FUN_100008378();
      _swift_bridgeObjectRetain(puVar15);
      puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
      TVar17 = SwiftUI::Text::_init(lVar26,PTR___type_metadata_for_Swift_String_100eac208,lVar26);
      FVar18 = SwiftUI::Font::get_callout(TVar17.unknown);
      TVar22 = TVar17;
      puVar10 = puVar8;
      lVar27 = lVar26;
      TVar19 = SwiftUI::Text::_font(FVar18.unknown);
      local_120 = lVar29;
      _swift_release(FVar18.unknown);
      FUN_100016d74(TVar17.unknown,puVar8,lVar26);
      _swift_bridgeObjectRelease();
      CVar20 = SwiftUI::Color::get_secondary(CVar20);
      TVar17 = TVar19;
      puVar8 = TVar22.unknown;
      puVar16 = puVar10;
      TVar21 = SwiftUI::Text::_foregroundColor(CVar20.unknown);
      local_118 = CONCAT44(local_118._4_4_,(int)puVar8);
      local_110 = puVar16;
      _swift_release(CVar20.unknown);
      _swift_bridgeObjectRelease(puVar15);
      FUN_100016d74(TVar19.unknown,TVar22.unknown,puVar10);
      _swift_bridgeObjectRelease(lVar27);
      pMVar11 = local_178;
      pMVar12 = local_178;
      FUN_1000624b0(local_178,&local_b8);
      this = local_180;
      pMVar12 = Swift::MainActor::get_shared(local_180,pMVar12);
      puVar8 = &DAT_100eb2480;
      _swift_allocObject(&DAT_100eb2480,0x70,7);
      puVar25 = local_188;
      *(MainActor **)(puVar8 + 0x10) = pMVar12;
      *(undefined8 **)(puVar8 + 0x18) = local_188;
      uVar23 = *(undefined8 *)(pMVar11 + 0x20);
      uVar31 = *(undefined8 *)(pMVar11 + 0x38);
      uVar30 = *(undefined8 *)(pMVar11 + 0x30);
      *(undefined8 *)(puVar8 + 0x48) = *(undefined8 *)(pMVar11 + 0x28);
      *(undefined8 *)(puVar8 + 0x40) = uVar23;
      *(undefined8 *)(puVar8 + 0x58) = uVar31;
      *(undefined8 *)(puVar8 + 0x50) = uVar30;
      uVar23 = *(undefined8 *)(pMVar11 + 0x40);
      *(undefined8 *)(puVar8 + 0x68) = *(undefined8 *)(pMVar11 + 0x48);
      *(undefined8 *)(puVar8 + 0x60) = uVar23;
      uVar31 = *(undefined8 *)pMVar11;
      uVar30 = *(undefined8 *)(pMVar11 + 0x18);
      uVar23 = *(undefined8 *)(pMVar11 + 0x10);
      *(undefined8 *)(puVar8 + 0x28) = *(undefined8 *)(pMVar11 + 8);
      *(undefined8 *)(puVar8 + 0x20) = uVar31;
      *(undefined8 *)(puVar8 + 0x38) = uVar30;
      *(undefined8 *)(puVar8 + 0x30) = uVar23;
      pMVar12 = pMVar11;
      FUN_1000624b0(pMVar11,&local_b8);
      pMVar12 = Swift::MainActor::get_shared(this,pMVar12);
      puVar8 = &DAT_100eb24a8;
      _swift_allocObject(&DAT_100eb24a8,0x70,7);
      *(MainActor **)(puVar8 + 0x10) = pMVar12;
      *(undefined8 **)(puVar8 + 0x18) = puVar25;
      uVar23 = *(undefined8 *)(pMVar11 + 0x20);
      uVar31 = *(undefined8 *)(pMVar11 + 0x38);
      uVar30 = *(undefined8 *)(pMVar11 + 0x30);
      *(undefined8 *)(puVar8 + 0x48) = *(undefined8 *)(pMVar11 + 0x28);
      *(undefined8 *)(puVar8 + 0x40) = uVar23;
      *(undefined8 *)(puVar8 + 0x58) = uVar31;
      *(undefined8 *)(puVar8 + 0x50) = uVar30;
      uVar23 = *(undefined8 *)(pMVar11 + 0x40);
      *(undefined8 *)(puVar8 + 0x68) = *(undefined8 *)(pMVar11 + 0x48);
      *(undefined8 *)(puVar8 + 0x60) = uVar23;
      uVar31 = *(undefined8 *)pMVar11;
      uVar30 = *(undefined8 *)(pMVar11 + 0x18);
      uVar23 = *(undefined8 *)(pMVar11 + 0x10);
      *(undefined8 *)(puVar8 + 0x28) = *(undefined8 *)(pMVar11 + 8);
      *(undefined8 *)(puVar8 + 0x20) = uVar31;
      *(undefined8 *)(puVar8 + 0x38) = uVar30;
      *(undefined8 *)(puVar8 + 0x30) = uVar23;
      SwiftUI::Binding::init();
      lVar27 = local_160;
      SwiftUI::Toggle::_init(local_b8);
      puVar8 = &DAT_100c26708;
      _swift_getKeyPath(&DAT_100c26708);
      puVar10 = &DAT_100c26730;
      _swift_getKeyPath(&DAT_100c26730);
      Combine::Published::_get_subscript(&local_b8,local_120,puVar8,puVar10);
      _swift_release(puVar8);
      _swift_release(puVar10);
      bVar6 = (byte)local_b8.unknown;
      puVar8 = &DAT_100c267a8;
      _swift_getKeyPath();
      puVar10 = &DAT_100eb24d0;
      _swift_allocObject(&DAT_100eb24d0,0x11,7);
      puVar10[0x10] = (bVar6 ^ 0xff) & 1;
      puVar15 = &DAT_100fa95c0;
      FUN_1000037f0(&DAT_100fa95c0,&DAT_100c267d8);
      puVar25 = (undefined8 *)(lVar27 + *(int *)(puVar15 + 0x24));
      *puVar25 = puVar8;
      puVar25[1] = FUN_100062b00;
      puVar25[2] = puVar10;
      iVar3 = *(int *)(local_170 + 0x24);
      puVar8 = &DAT_100fa7208;
      FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
      iVar4 = *(int *)(puVar8 + 0x1c);
      uVar2 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_ControlSize_mini_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa600
      ;
      CVar7 = SwiftUI::ControlSize::typeMetadataAccessor();
      lVar26 = CONCAT71((int7)((ulong)puVar8 >> 8),CVar7.value);
      (**(code **)(*(long *)(lVar26 + -8) + 0x68))(lVar27 + iVar3 + (long)iVar4,uVar2,lVar26);
      puVar8 = &DAT_100c26620;
      _swift_getKeyPath();
      lVar26 = local_168;
      *(undefined **)(lVar27 + iVar3) = puVar8;
      FUN_100011090(lVar27,local_168,&DAT_100fa9560,&DAT_100c266c8);
      puVar25 = local_158;
      *local_158 = TVar21.unknown;
      puVar25[1] = TVar17.unknown;
      uVar24 = local_118 & 0xffffffff;
      *(char *)(puVar25 + 2) = (char)local_118;
      puVar15 = local_110;
      puVar25[3] = local_110;
      *(undefined2 *)(puVar25 + 4) = 0x100;
      puVar8 = &DAT_100fa95c8;
      FUN_1000037f0(&DAT_100fa95c8,&DAT_100c267e0);
      FUN_100011090(lVar26,(long)puVar25 + (long)*(int *)(puVar8 + 0x30),&DAT_100fa9560,
                    &DAT_100c266c8);
      FUN_100016d5c(TVar21.unknown,TVar17.unknown,uVar24);
      _swift_bridgeObjectRetain(puVar15);
      FUN_100016d5c(TVar21.unknown,TVar17.unknown,uVar24);
      _swift_bridgeObjectRetain(puVar15);
      FUN_100005808(lVar26,&DAT_100fa9560,&DAT_100c266c8);
      FUN_100016d74(TVar21.unknown,TVar17.unknown,uVar24);
      _swift_bridgeObjectRelease(puVar15);
      lVar28 = local_d8;
      puVar8 = &DAT_100fa9558;
      puVar10 = &DAT_100c266c0;
      FUN_100011090(puVar25,local_d8,&DAT_100fa9558,&DAT_100c266c0);
      _swift_storeEnumTagMultiPayload(lVar28,local_100,1);
      FUN_100062b18();
      FUN_100016eac(&DAT_100fa95e8,&DAT_100fa9558,&DAT_100c266c0,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      lVar26 = local_e0;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar28);
      FUN_100016d74(TVar21.unknown,TVar17.unknown,uVar24);
      _swift_bridgeObjectRelease(puVar15);
      FUN_100005808(lVar27,&DAT_100fa9560,&DAT_100c266c8);
      lVar28 = local_c0;
      goto LAB_10005ce6c;
    }
    (extension_SwiftUI)::SwiftUI::ProgressView::_init();
    iVar3 = *(int *)(local_130 + 0x24);
    puVar8 = &DAT_100fa7208;
    FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
    iVar4 = *(int *)(puVar8 + 0x1c);
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa610
    ;
    CVar7 = SwiftUI::ControlSize::typeMetadataAccessor();
    lVar26 = CONCAT71((int7)((ulong)puVar8 >> 8),CVar7.value);
    (**(code **)(*(long *)(lVar26 + -8) + 0x68))
              ((long)puVar25 + (long)iVar3 + (long)iVar4,uVar2,lVar26);
    puVar8 = &DAT_100c26620;
    _swift_getKeyPath();
    lVar26 = local_120;
    *(undefined **)((long)puVar25 + (long)iVar3) = puVar8;
    FUN_100011090(puVar25,local_120,&DAT_100fa9580,&DAT_100c266e8);
    uVar23 = 1;
  }
  puVar10 = &DAT_100c266e8;
  puVar8 = &DAT_100fa9580;
  _swift_storeEnumTagMultiPayload(lVar26,local_128,uVar23);
  FUN_100062b88();
  uVar24 = local_118;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar26);
  lVar27 = local_d8;
  FUN_100011090(uVar24,local_d8,&DAT_100fa9578,&DAT_100c266e0);
  _swift_storeEnumTagMultiPayload(lVar27,local_100,0);
  FUN_100062b18();
  FUN_100016eac(&DAT_100fa95e8,&DAT_100fa9558,&DAT_100c266c0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  lVar26 = local_e0;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar27);
  FUN_100005808(uVar24,&DAT_100fa9578,&DAT_100c266e0);
LAB_10005ce6c:
  FUN_100005808(puVar25,puVar8,puVar10);
  lVar27 = local_f0;
  FUN_100011090(lVar28,local_f0,&DAT_100fa9598,&DAT_100c26700);
  lVar29 = local_d0;
  FUN_100011090(lVar26,local_d0,&DAT_100fa9588,&DAT_100c266f0);
  lVar5 = local_c8;
  FUN_100011090(lVar27,local_c8,&DAT_100fa9598,&DAT_100c26700);
  puVar8 = &DAT_100fa95f0;
  FUN_1000037f0(&DAT_100fa95f0,&DAT_100c267f0);
  FUN_100011090(lVar29,lVar5 + *(int *)(puVar8 + 0x30),&DAT_100fa9588,&DAT_100c266f0);
  FUN_100005808(lVar26,&DAT_100fa9588,&DAT_100c266f0);
  FUN_100005808(lVar28,&DAT_100fa9598,&DAT_100c26700);
  FUN_100005808(lVar29,&DAT_100fa9588,&DAT_100c266f0);
  FUN_100005808(lVar27,&DAT_100fa9598,&DAT_100c26700);
  _swift_release(local_f8);
  return;
}



/* Address: 0x10005cf6c | FUN_10005cf6c */

void FUN_10005cf6c(void)

{
  URL UVar1;
  URL UVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  UVar2 = UVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_48);
  FUN_1001abc8c();
  (**(code **)(lVar5 + 0x10))(puVar4,UVar2.unknown,UVar1.unknown);
  uVar3 = 0;
  FUN_1001adc9c(0);
  FUN_1001ad0d8(puVar4,uVar3,&PTR_PTR_100ebe0c0,&PTR_PTR_100ec6cd0);
  (**(code **)(lVar5 + 8))(puVar4,UVar1.unknown);
  _swift_release(local_48);
  return;
}



/* Address: 0x10005d048 | FUN_10005d048 */

void FUN_10005d048(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 local_42;
  char local_41;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x39,UVar3.unknown,puVar2);
  }
  uVar7 = *(undefined8 *)(param_4 + 8);
  puVar5 = &DAT_100c26818;
  _swift_getKeyPath(&DAT_100c26818);
  puVar6 = &DAT_100c26840;
  _swift_getKeyPath(&DAT_100c26840);
  Combine::Published::_get_subscript(&local_41,uVar7,puVar5,puVar6);
  _swift_release(puVar5);
  _swift_release(puVar6);
  if (local_41 == '\x01') {
    puVar5 = &DAT_100c26708;
    _swift_getKeyPath(&DAT_100c26708);
    puVar6 = &DAT_100c26730;
    _swift_getKeyPath(&DAT_100c26730);
    Combine::Published::_get_subscript(&local_42,uVar7,puVar5,puVar6);
    _swift_release(pMVar1);
    _swift_release(puVar5);
    _swift_release(puVar6);
  }
  else {
    _swift_release(pMVar1);
    local_42 = 0;
  }
  *param_1 = local_42;
  return;
}



/* Address: 0x10005d1ac | FUN_10005d1ac */

void FUN_10005d1ac(char *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  TaskPriority TVar8;
  MainActor *pMVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined1 *puVar12;
  MainActor *pMVar13;
  
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffffb0 + -extraout_x8;
  cVar1 = *param_1;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar11 = puVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x3a,UVar6.unknown,puVar11);
  }
  pMVar13 = *(MainActor **)(param_4 + 8);
  TVar8 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(puVar12,1,1,TVar8.unknown);
  pMVar9 = pMVar13;
  _swift_retain();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar9);
  if (cVar1 == '\0') {
    puVar2 = &DAT_100eb24f8;
    _swift_allocObject(&DAT_100eb24f8,0x38,7);
    *(MainActor **)(puVar2 + 0x10) = pMVar3;
    *(undefined8 **)(puVar2 + 0x18) = puVar5;
    *(MainActor **)(puVar2 + 0x20) = pMVar13;
    *(code **)(puVar2 + 0x28) = thunk_FUN_100062d8c;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    uVar10 = 0;
    FUN_1000645b0(0,0,puVar12,&DAT_100c26800,puVar2);
  }
  else {
    puVar2 = &DAT_100eb2520;
    _swift_allocObject(&DAT_100eb2520,0x28,7);
    *(MainActor **)(puVar2 + 0x10) = pMVar3;
    *(undefined8 **)(puVar2 + 0x18) = puVar5;
    *(MainActor **)(puVar2 + 0x20) = pMVar13;
    uVar10 = 0;
    FUN_10006484c(0,0,puVar12,&DAT_100c26808,puVar2);
  }
  _swift_release(pMVar4);
  _swift_release(uVar10);
  return;
}



/* Address: 0x10005d378 | thunk_FUN_100062d8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 thunk_FUN_100062d8c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ID IVar4;
  NSString *pNVar5;
  ID IVar6;
  void *aBlock;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_70;
  long lStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  puVar3 = &_OBJC_CLASS___NSAlert;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  objc_stub::setAlertStyle_(IVar4,0);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setMessageText_(IVar4,pNVar5);
  if (param_1[3] != 0) {
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setInformativeText_(IVar4,pNVar5);
  }
  lVar8 = param_1[9];
  uStack_70 = param_1[8];
  uVar7 = param_1[0xb];
  pcStack_60 = (code *)param_1[10];
  lStack_68 = lVar8;
  uStack_58 = uVar7;
  if (lVar8 != 0) {
    FUN_100011090(&uStack_70,&puStack_d0,&DAT_100fa95f8,&DAT_100c26810);
    _swift_bridgeObjectRetain(lVar8);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar8);
    objc_stub::addButtonWithTitle_(IVar4,pNVar5);
    _swift_release(uVar7);
    _swift_bridgeObjectRelease(lVar8);
  }
  pcVar2 = (code *)param_1[6];
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = objc_stub::addButtonWithTitle_(IVar4,pNVar5);
  objc_stub::setHasDestructiveAction_(IVar6,1);
  puVar3 = &DAT_100eb2548;
  _swift_allocObject(&DAT_100eb2548,0x70,7);
  uVar7 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar3 + 0x38) = param_1[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar10;
  *(undefined8 *)(puVar3 + 0x40) = uVar9;
  uVar7 = param_1[8];
  uVar10 = param_1[0xb];
  uVar9 = param_1[10];
  *(undefined8 *)(puVar3 + 0x58) = param_1[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  *(undefined8 *)(puVar3 + 0x68) = uVar10;
  *(undefined8 *)(puVar3 + 0x60) = uVar9;
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar3 + 0x18) = param_1[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar10;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  puVar1 = PTR__NSApp_100ea8fa0;
  IVar6 = *(ID *)PTR__NSApp_100ea8fa0;
  if (IVar6 != 0) {
    FUN_10003c978(param_1,&puStack_d0);
    objc_stub::activateIgnoringOtherApps_(IVar6,1);
    if (*(ID *)puVar1 != 0) {
      IVar6 = objc_stub::keyWindow(*(ID *)puVar1);
      if (IVar6 == 0) {
        IVar4 = objc_stub::runModal(IVar4);
        if (IVar4 == 1000) {
          if (lStack_68 != 0) {
            (*pcStack_60)();
          }
        }
        else {
          (*pcVar2)();
        }
        _swift_release(puVar3);
      }
      else {
        pcStack_b0 = FUN_100063090;
        puStack_d0 = PTR___NSConcreteStackBlock_100ea82a0;
        uStack_c8 = 0x42000000;
        pcStack_c0 = FUN_100061d58;
        puStack_b8 = &DAT_100eb2560;
        puStack_a8 = puVar3;
        aBlock = __Block_copy(&puStack_d0);
        puVar1 = puStack_a8;
        _swift_retain(puVar3);
        _swift_release(puVar1);
        objc_stub::beginSheetModalForWindow_completionHandler_(IVar4,IVar6,aBlock);
        _swift_release(puVar3);
        __Block_release(aBlock);
      }
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100063040);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10006303c);
  (*pcVar2)();
}



/* Address: 0x10005d37c | FUN_10005d37c */

void FUN_10005d37c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  HorizontalAlignment HVar6;
  VerticalAlignment VVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar1 = &DAT_100fa9428;
  FUN_1000037f0(&DAT_100fa9428,&DAT_100c263d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined8 *)(puVar8 + -extraout_x12);
  puVar1 = &DAT_100fa9430;
  FUN_1000037f0(&DAT_100fa9430,&DAT_100c263d8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = (undefined8 *)(lVar10 - extraout_x12_00);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/GeneralSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x57,UVar4.unknown,puVar3);
  }
  HVar6 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar5);
  *puVar11 = HVar6.unknown;
  puVar11[1] = 0x4028000000000000;
  *(undefined1 *)(puVar11 + 2) = 0;
  puVar1 = &DAT_100fa9438;
  FUN_1000037f0(&DAT_100fa9438,&DAT_100c263e0);
  VVar7.unknown = param_2;
  FUN_10005d624((long)puVar11 + (long)*(int *)(puVar1 + 0x2c));
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar7);
  *puVar9 = VVar7.unknown;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar1 = &DAT_100fa9440;
  FUN_1000037f0(&DAT_100fa9440,&DAT_100c263e8);
  FUN_10005f6b8((undefined1 *)((long)puVar9 + (long)*(int *)(puVar1 + 0x2c)),param_2);
  FUN_100011090(puVar11,lVar10,&DAT_100fa9430,&DAT_100c263d8);
  FUN_100011090(puVar9,puVar8,&DAT_100fa9428,&DAT_100c263d0);
  FUN_100011090(lVar10,param_1,&DAT_100fa9430,&DAT_100c263d8);
  puVar1 = &DAT_100fa9448;
  FUN_1000037f0(&DAT_100fa9448,&DAT_100c263f0);
  FUN_100011090(puVar8,param_1 + *(int *)(puVar1 + 0x30),&DAT_100fa9428,&DAT_100c263d0);
  FUN_100005808(puVar9,&DAT_100fa9428,&DAT_100c263d0);
  FUN_100005808(puVar11,&DAT_100fa9430,&DAT_100c263d8);
  FUN_100005808(puVar8,&DAT_100fa9428,&DAT_100c263d0);
  FUN_100005808(lVar10,&DAT_100fa9430,&DAT_100c263d8);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10005d624 | FUN_10005d624 */

void FUN_10005d624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  VerticalAlignment VVar7;
  undefined *puVar8;
  Set _all;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar2 = &DAT_100fa9478;
  FUN_1000037f0(&DAT_100fa9478,&DAT_100c26468);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar10 = (undefined8 *)(puVar9 + -extraout_x12);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "Paste/GeneralSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x58,UVar5.unknown,puVar4);
  }
  VVar7 = SwiftUI::VerticalAlignment::get_top((VerticalAlignment)pcVar6);
  *puVar10 = VVar7.unknown;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 1;
  puVar8 = &DAT_100fa9480;
  FUN_1000037f0(&DAT_100fa9480,&DAT_100c26470);
  FUN_10005d810((undefined1 *)((long)puVar10 + (long)*(int *)(puVar8 + 0x2c)));
  _all = SwiftUI::Edge::Set::get_leading(param_6);
  uVar11 = 0xc020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  puVar1 = (undefined1 *)((long)puVar10 + (long)*(int *)(puVar2 + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar11;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  FUN_100011090(puVar10,puVar9,&DAT_100fa9478,&DAT_100c26468);
  FUN_100011090(puVar9,param_1,&DAT_100fa9478,&DAT_100c26468);
  puVar2 = &DAT_100fa9488;
  FUN_1000037f0(&DAT_100fa9488,&DAT_100c26478);
  *(undefined8 *)(param_1 + *(int *)(puVar2 + 0x30)) = 0x3fe0000000000000;
  FUN_100005808(puVar10,&DAT_100fa9478,&DAT_100c26468);
  FUN_100005808(puVar9,&DAT_100fa9478,&DAT_100c26468);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10005d810 | FUN_10005d810 */

void FUN_10005d810(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ObservedObject OVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  long lVar11;
  ResizingMode RVar12;
  RoundedCornerStyle RVar13;
  undefined7 extraout_var;
  undefined *puVar14;
  MainActor *pMVar15;
  MainActor *pMVar16;
  UnownedSerialExecutor UVar17;
  UnownedSerialExecutor UVar18;
  Wrapper WVar19;
  Wrapper dynamicMember;
  Image IVar20;
  Image IVar21;
  EdgeInsets capInsets;
  RoundedRectangle RVar22;
  undefined7 extraout_var_00;
  undefined8 *puVar23;
  long extraout_x8;
  undefined *puVar24;
  long extraout_x8_00;
  undefined8 *puVar25;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar26;
  long lVar27;
  char *pcVar28;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar29;
  code *pcVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  String SVar33;
  undefined8 auStack_2b0 [2];
  long local_2a0 [3];
  undefined *local_288;
  long local_280;
  undefined *local_278;
  EdgeInsets local_270;
  long local_268;
  undefined *local_260;
  undefined *local_258;
  MainActor *local_250;
  long local_248;
  long local_240;
  undefined *local_238;
  undefined8 *local_230;
  long local_228;
  long local_220;
  long local_218;
  undefined *local_210;
  MainActor *pMStack_208;
  undefined1 local_200;
  undefined *local_1c8;
  MainActor *pMStack_1c0;
  undefined1 local_1b8;
  undefined1 uStack_1b7;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 local_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 local_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined *local_180;
  undefined8 uStack_178;
  undefined2 local_170;
  undefined6 uStack_16e;
  undefined2 uStack_168;
  undefined8 uStack_166;
  undefined8 local_15e;
  undefined8 uStack_156;
  undefined8 local_14e;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined1 auStack_130 [26];
  undefined6 uStack_116;
  undefined2 local_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 local_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  local_220 = param_1;
  RVar12 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  local_260 = (undefined *)CONCAT71(extraout_var,RVar12.value);
  local_268 = *(long *)(local_260 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_268 + 0x40));
  puVar24 = (undefined *)((long)local_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar14 = &DAT_100fa9490;
  local_270.unknown = puVar24;
  FUN_1000037f0(&DAT_100fa9490,&DAT_100c26480);
  local_258 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar26 = (long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_228 = lVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar25 = (undefined8 *)(lVar26 - extraout_x12);
  local_230 = puVar25;
  local_278 = (undefined *)SwiftUI::RadioGroupPickerStyle::typeMetadataAccessor();
  local_280 = *(long *)(local_278 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_280 + 0x40));
  lVar26 = (long)puVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_100fa9498;
  local_2a0[0] = lVar26;
  FUN_1000037f0(&DAT_100fa9498,&DAT_100c26488);
  local_2a0[2] = *(long *)(puVar14 + -8);
  local_288 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(local_2a0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_02;
  puVar14 = &DAT_100fa94a0;
  FUN_1000037f0(&DAT_100fa94a0,&DAT_100c26490);
  local_248 = *(long *)(puVar14 + -8);
  local_238 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_248 + 0x40));
  lVar27 = lVar26 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_240 = lVar27;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = lVar27 - extraout_x12_00;
  local_218 = lVar27;
  pMVar15 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaec10;
  pMVar16 = Swift::MainActor::get_shared(pMVar15,pMVar15);
  puVar25 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar23 = puVar25;
  local_250 = pMVar16;
  UVar17 = Swift::Actor::get_unownedExecutor();
  UVar18 = UVar17;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar18.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x59,UVar17.unknown,puVar23);
  }
  OVar2.unknown = (undefined *)*param_2;
  lVar3 = param_2[1];
  FUN_1000ad91c(0);
  FUN_100003a00(&DAT_100fa9310,FUN_1000ad91c,&TargetProtocolConformanceDescriptor_100c29498);
  local_2a0[1] = lVar3;
  WVar19 = SwiftUI::ObservedObject::_get_projectedValue(OVar2);
  dynamicMember.unknown = &DAT_100c26498;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar19.unknown);
  _swift_release(dynamicMember.unknown);
  local_170 = SUB82(param_2,0);
  uStack_16e = (undefined6)((ulong)param_2 >> 0x10);
  local_210 = local_1c8;
  pMStack_208 = pMStack_1c0;
  local_200 = local_1b8;
  _swift_retain(local_1c8);
  pMVar16 = pMStack_1c0;
  _swift_retain();
  pMVar15 = Swift::MainActor::get_shared(pMVar15,pMVar16);
  UVar17 = Swift::Actor::get_unownedExecutor();
  UVar18 = UVar17;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar18.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x80,UVar17.unknown,puVar25);
  }
  _swift_release(pMVar15);
  FUN_1000037f0(&DAT_100fa94a8,&DAT_100c264c0);
  puVar14 = &DAT_100fa94b0;
  FUN_100016eac(&DAT_100fa94b0,&DAT_100fa94a8,&DAT_100c264c0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  *(undefined **)(lVar27 + -0x10) =
       PTR___protocol_witness_table_for_Swift_Bool___Swift_Hashable_in_Swift_100eac580;
  *(undefined **)(lVar27 + -8) = puVar14;
  SwiftUI::Picker::_init(lVar26);
  _swift_release(pMStack_1c0);
  _swift_release(local_1c8);
  lVar27 = local_2a0[0];
  SwiftUI::RadioGroupPickerStyle::init();
  puVar14 = &DAT_100fa94b8;
  FUN_100016eac(&DAT_100fa94b8,&DAT_100fa9498,&DAT_100c26488,
                PTR_SwiftUI__SwiftUI__Picker<undefined,undefined,undefined>_>SwiftUI__View_100eab8e0
               );
  lVar3 = local_218;
  puVar10 = local_278;
  puVar24 = local_288;
  (extension_SwiftUI)::SwiftUI::View::_pickerStyle
            (local_218,lVar27,local_288,local_278,puVar14,
             PTR___protocol_witness_table_for_SwiftUI_RadioGroupPickerStyle___SwiftUI_PickerStyle_in_SwiftUI_100eaae60
            );
  (**(code **)(local_280 + 8))(lVar27,puVar10);
  (**(code **)(local_2a0[2] + 8))(lVar26,puVar24);
  puVar25 = (undefined8 *)
            (local_2a0[1] + _TtC5Paste24GeneralSettingsViewModel::_isDirectPasteEnabled);
  _swift_beginAccess(puVar25,auStack_130,0,0);
  uVar6 = *puVar25;
  uVar7 = puVar25[1];
  uStack_98 = puVar25[3];
  uVar32 = puVar25[2];
  uVar8 = puVar25[4];
  uStack_88 = puVar25[5];
  uVar29 = puVar25[6];
  local_b0 = uVar6;
  uStack_a8 = uVar7;
  local_a0 = uVar32;
  local_90 = uVar8;
  local_80 = uVar29;
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar32);
  _swift_retain(uVar8);
  _swift_retain(uVar29);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_180);
  _swift_release(uVar29);
  _swift_release(uVar8);
  _swift_release(uVar32);
  _swift_release(uVar7);
  _swift_release(uVar6);
  pcVar28 = (char *)0x2d6f742d79706f63;
  if ((char)local_180 == '\0') {
    pcVar28 = (char *)0xd000000000000011;
  }
  pvVar1 = (void *)0xeb00000000707061;
  if ((char)local_180 == '\0') {
    pvVar1 = (void *)0x8000000100d8ec50;
  }
  SVar33.bridgeObject = pvVar1;
  SVar33.str = pcVar28;
  IVar20 = SwiftUI::Image::_init(SVar33);
  puVar14 = local_260;
  lVar26 = local_268;
  capInsets.unknown = local_270.unknown;
  IVar21.unknown = local_260;
  (**(code **)(local_268 + 0x68))
            (local_270.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  IVar21 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar20.unknown,IVar21);
  _swift_release(IVar20.unknown);
  (**(code **)(lVar26 + 8))(capInsets.unknown,puVar14);
  SwiftUI::Alignment::get_center((Alignment)capInsets.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  puVar23 = local_230;
  uStack_108 = (undefined2)uStack_d8;
  uStack_106 = (undefined6)((ulong)uStack_d8 >> 0x10);
  local_110 = (undefined2)local_e0;
  uStack_10e = (undefined6)((ulong)local_e0 >> 0x10);
  uStack_f8 = (undefined2)uStack_c8;
  uStack_f6 = (undefined6)((ulong)uStack_c8 >> 0x10);
  uStack_100 = (undefined2)uStack_d0;
  uStack_fe = (undefined6)((ulong)uStack_d0 >> 0x10);
  uStack_e8 = (undefined2)uStack_b8;
  uStack_e6 = (undefined6)((ulong)uStack_b8 >> 0x10);
  local_f0 = (undefined2)local_c0;
  uStack_ee = (undefined6)((ulong)local_c0 >> 0x10);
  pMStack_1c0 = (MainActor *)0x0;
  local_1b8 = 1;
  uStack_1b7 = 0;
  uStack_19e = uStack_fe;
  uStack_198 = uStack_f8;
  local_1a6 = uStack_106;
  uStack_1a0 = uStack_100;
  uStack_18e = uStack_ee;
  local_196 = uStack_f6;
  uStack_190 = local_f0;
  uStack_1ae = uStack_10e;
  uStack_1a8 = uStack_108;
  uStack_1b6 = uStack_116;
  uStack_1b0 = local_110;
  puVar25 = (undefined8 *)((long)local_230 + (long)*(int *)(local_258 + 0x24));
  local_1c8 = IVar21.unknown;
  uStack_188 = uStack_e8;
  uStack_186 = uStack_e6;
  RVar22 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar5 = *(int *)(RVar22.unknown + 0x14);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar13 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar13.value) + -8) + 0x68))
            ((long)puVar25 + (long)iVar5,uVar4,CONCAT71(extraout_var_00,RVar13.value));
  auVar31 = NEON_fmov(0x4020000000000000,8);
  puVar25[1] = auVar31._8_8_;
  *puVar25 = auVar31._0_8_;
  puVar14 = &DAT_100fa8428;
  FUN_1000037f0(&DAT_100fa8428,&DAT_100c25510);
  *(undefined2 *)((long)puVar25 + (long)*(int *)(puVar14 + 0x24)) = 0x100;
  uVar6 = CONCAT62(local_1a6,uStack_1a8);
  uVar8 = CONCAT62(uStack_18e,uStack_190);
  uVar7 = CONCAT62(local_196,uStack_198);
  puVar23[5] = CONCAT62(uStack_19e,uStack_1a0);
  puVar23[4] = uVar6;
  puVar23[7] = uVar8;
  puVar23[6] = uVar7;
  puVar23[8] = CONCAT62(uStack_186,uStack_188);
  puVar14 = local_1c8;
  uVar9 = CONCAT11(uStack_1b7,local_1b8);
  uVar6 = CONCAT62(uStack_1ae,uStack_1b0);
  puVar23[1] = pMStack_1c0;
  *puVar23 = puVar14;
  puVar23[3] = uVar6;
  puVar23[2] = CONCAT62(uStack_1b6,uVar9);
  uStack_178 = 0;
  local_170 = 1;
  uStack_166 = CONCAT26(uStack_108,uStack_10e);
  uStack_156 = CONCAT26(uStack_f8,uStack_fe);
  local_15e = CONCAT26(uStack_100,uStack_106);
  local_14e = CONCAT26(local_f0,uStack_f6);
  uStack_13e = uStack_e6;
  uStack_146 = uStack_ee;
  uStack_140 = uStack_e8;
  uStack_168 = local_110;
  local_180 = IVar21.unknown;
  FUN_100011090(&local_1c8,&local_210,&DAT_100fa7cc8,&DAT_100c264d0);
  FUN_100005808(&local_180,&DAT_100fa7cc8,&DAT_100c264d0);
  puVar24 = local_238;
  lVar27 = local_240;
  lVar26 = local_248;
  pcVar30 = *(code **)(local_248 + 0x10);
  (*pcVar30)(local_240,lVar3,local_238);
  lVar3 = local_228;
  FUN_100011090(puVar23,local_228,&DAT_100fa9490,&DAT_100c26480);
  lVar11 = local_220;
  (*pcVar30)(local_220,lVar27,puVar24);
  puVar14 = &DAT_100fa94c0;
  FUN_1000037f0(&DAT_100fa94c0,&DAT_100c264d8);
  puVar25 = (undefined8 *)(lVar11 + *(int *)(puVar14 + 0x30));
  *puVar25 = 0;
  *(undefined1 *)(puVar25 + 1) = 1;
  FUN_100011090(lVar3,lVar11 + *(int *)(puVar14 + 0x40),&DAT_100fa9490,&DAT_100c26480);
  FUN_100005808(puVar23,&DAT_100fa9490,&DAT_100c26480);
  pcVar30 = *(code **)(lVar26 + 8);
  (*pcVar30)(local_218,puVar24);
  FUN_100005808(lVar3,&DAT_100fa9490,&DAT_100c26480);
  (*pcVar30)(lVar27,puVar24);
  _swift_release(local_250);
  return;
}



/* Address: 0x10005e008 | FUN_10005e008 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10005e008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  HorizontalAlignment HVar9;
  Set SVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long alStack_290 [2];
  undefined *local_280 [3];
  long local_268 [2];
  MainActor *local_258;
  undefined8 uStack_250;
  undefined1 auStack_247 [8];
  undefined1 auStack_23f [8];
  undefined1 auStack_237 [71];
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  undefined1 local_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined *local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_268[1] = param_1;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar15 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_258 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x5a,UVar6.unknown,puVar15);
  }
  puVar8 = &DAT_100fa94c8;
  FUN_1000037f0(&DAT_100fa94c8,&DAT_100c264e0);
  lVar11 = *(long *)(puVar8 + -8);
  lVar13 = *(long *)(lVar11 + 0x40);
  local_280[2] = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)alStack_290 - extraout_x8;
  HVar9.unknown = &DAT_100fa6418;
  FUN_1000037f0(&DAT_100fa6418,&DAT_100c22490);
  local_268[0] = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(HVar9.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)(lVar17 - extraout_x8_00);
  HVar9 = SwiftUI::HorizontalAlignment::get_leading(HVar9);
  *puVar15 = HVar9.unknown;
  puVar15[1] = 0x4000000000000000;
  *(undefined1 *)(puVar15 + 2) = 0;
  puVar8 = &DAT_100fa94d0;
  FUN_1000037f0(&DAT_100fa94d0,&DAT_100c264f0);
  FUN_10005e540((long)puVar15 + (long)*(int *)(puVar8 + 0x2c),param_6);
  bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0x1a,0,0,0x1a,0,0);
  if ((bVar4 & 1) == 0) {
    puVar8 = &DAT_100fa6410;
    FUN_1000037f0(&DAT_100fa6410,&DAT_100c22488);
    *(undefined1 *)(lVar17 + *(int *)(puVar8 + 0x24)) = 1;
    FUN_10006268c(puVar15,lVar17);
    puVar8 = &DAT_100fa6420;
    FUN_1000037f0(&DAT_100fa6420,&DAT_100c26500);
    *(undefined1 *)(lVar17 + *(int *)(puVar8 + 0x24)) = 1;
  }
  else {
    puVar8 = &DAT_100fa6428;
    FUN_1000037f0(&DAT_100fa6428,&DAT_100c224a0);
    *(undefined2 *)(lVar17 + *(int *)(puVar8 + 0x24)) = 0x101;
    FUN_10006268c(puVar15,lVar17);
  }
  puVar8 = &DAT_100fa94d8;
  FUN_1000037f0(&DAT_100fa94d8,&DAT_100c26508);
  lVar16 = *(long *)(*(long *)(puVar8 + -8) + 0x40);
  HVar9.unknown = puVar8;
  local_280[1] = (undefined *)puVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar16 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)puVar15 - extraout_x8_01);
  local_128 = (undefined *)SwiftUI::HorizontalAlignment::get_leading(HVar9);
  uStack_120 = 0x4000000000000000;
  local_118 = 0;
  FUN_10005f430(&uStack_110);
  puVar20 = local_128;
  uStack_a8 = uStack_100;
  local_b0 = local_108;
  uStack_98 = uStack_f0;
  uStack_a0 = local_f8;
  uStack_88 = uStack_e0;
  local_90 = local_e8;
  local_80 = local_d8;
  uStack_c0 = CONCAT71(uStack_117,local_118);
  uStack_c8 = uStack_120;
  local_d0 = local_128;
  uStack_b8 = uStack_110;
  if ((bVar4 & 1) == 0) {
    uStack_168 = uStack_100;
    local_170 = local_108;
    uStack_158 = uStack_f0;
    uStack_160 = local_f8;
    uStack_148 = uStack_e0;
    local_150 = local_e8;
    local_140 = local_d8;
    uStack_1e0 = CONCAT71(uStack_117,local_118);
    uStack_188 = uStack_120;
    local_190 = local_128;
    uStack_178 = uStack_110;
    uStack_1c8 = uStack_100;
    local_1d0 = local_108;
    uStack_1b8 = uStack_f0;
    uStack_1c0 = local_f8;
    uStack_1a8 = (undefined1)uStack_e0;
    uStack_1a7 = (undefined7)((ulong)uStack_e0 >> 8);
    local_1b0 = local_e8;
    local_1a0 = (undefined1)local_d8;
    uStack_19f = (undefined7)((ulong)local_d8 >> 8);
    uStack_1e8 = uStack_120;
    local_1f0 = local_128;
    uStack_1d8 = uStack_110;
    local_198 = 0;
    uStack_180 = uStack_1e0;
    *(undefined1 *)((long)puVar15 + 0x59) = 0;
    uVar3 = uStack_1b8;
    uVar19 = uStack_1c0;
    uVar18 = local_1d0;
    puVar15[5] = uStack_1c8;
    puVar15[4] = uVar18;
    puVar15[7] = uVar3;
    puVar15[6] = uVar19;
    uVar18 = local_1b0;
    puVar15[9] = CONCAT71(uStack_1a7,uStack_1a8);
    puVar15[8] = uVar18;
    uVar18 = uStack_1d8;
    uVar19 = uStack_1e0;
    puVar2 = local_1f0;
    puVar15[1] = uStack_1e8;
    *puVar15 = puVar2;
    puVar15[3] = uVar18;
    puVar15[2] = uVar19;
    uVar18 = CONCAT17(local_1a0,uStack_1a7);
    *(ulong *)((long)puVar15 + 0x51) = CONCAT17(local_198,uStack_19f);
    *(undefined8 *)((long)puVar15 + 0x49) = uVar18;
    local_138 = 0;
    FUN_100011090(&local_d0,&uStack_250,&DAT_100fa6430,&DAT_100c26510);
    FUN_100011090(&local_1f0,&uStack_250,&DAT_100fa6438,&DAT_100c224b0);
    FUN_100005808(&local_190,&DAT_100fa6438,&DAT_100c224b0);
    param_4 = local_e8;
  }
  else {
    *(undefined2 *)(puVar15 + 0xb) = 0x100;
    puVar15[5] = uStack_100;
    puVar15[4] = local_108;
    puVar15[7] = uStack_f0;
    puVar15[6] = local_f8;
    puVar15[9] = uStack_e0;
    puVar15[8] = local_e8;
    puVar15[10] = local_d8;
    puVar20 = local_128;
    uVar19 = CONCAT71(uStack_117,local_118);
    puVar15[1] = uStack_120;
    *puVar15 = puVar20;
    puVar15[3] = uStack_110;
    puVar15[2] = uVar19;
    FUN_100011090(&local_d0,&local_190,&DAT_100fa6430,&DAT_100c26510);
    puVar20 = param_5;
  }
  SVar10.unknown = (undefined *)&local_128;
  FUN_100005808(SVar10.unknown,&DAT_100fa6430,&DAT_100c26510);
  SVar10 = SwiftUI::Edge::Set::get_top(SVar10);
  uVar18 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  puVar1 = (undefined1 *)((long)puVar15 + (long)*(int *)(puVar8 + 0x24));
  local_280[0] = (undefined *)puVar15;
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar18;
  *(undefined8 *)(puVar1 + 0x10) = uVar19;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined **)(puVar1 + 0x20) = puVar20;
  puVar1[0x28] = 0;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar20 = local_280[2];
  lVar14 = (long)puVar15 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  pcVar12 = *(code **)(lVar11 + 0x10);
  (*pcVar12)(lVar14,lVar17,local_280[2]);
  alStack_290[1] = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar14 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  FUN_100011090(puVar15,lVar16,&DAT_100fa94d8,&DAT_100c26508);
  lVar13 = local_268[1];
  (*pcVar12)(local_268[1],lVar14,puVar20);
  puVar8 = &DAT_100fa94e0;
  FUN_1000037f0(&DAT_100fa94e0,&DAT_100c26520);
  FUN_100011090(lVar16,lVar13 + *(int *)(puVar8 + 0x30),&DAT_100fa94d8,&DAT_100c26508);
  FUN_100005808(puVar15,&DAT_100fa94d8,&DAT_100c26508);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(lVar17,puVar20);
  FUN_100005808(lVar16,&DAT_100fa94d8,&DAT_100c26508);
  (*pcVar12)(lVar14,puVar20);
  _swift_release(local_258);
  return;
}



/* Address: 0x10005e540 | FUN_10005e540 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010005e764 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10005e540(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Font param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  RoundedCornerStyle RVar7;
  undefined *puVar8;
  LocalizedStringResource LVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  char *pcVar13;
  Text TVar14;
  Text TVar15;
  Color CVar16;
  Text TVar17;
  Font FVar18;
  Text TVar19;
  undefined *puVar20;
  Set SVar21;
  RoundedRectangle RVar22;
  undefined8 uVar23;
  char *pcVar24;
  undefined *puVar25;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar26;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar27;
  long lVar28;
  long extraout_x12;
  undefined8 uVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 in_d3;
  String SVar34;
  undefined8 *apuStack_2a0 [2];
  long local_290;
  undefined *local_288;
  long local_280;
  long local_278;
  undefined *local_270;
  undefined8 *local_268;
  undefined4 local_25c;
  undefined *local_258;
  undefined *puStack_250;
  undefined *local_248;
  MainActor *local_240;
  long local_238;
  undefined8 *local_230;
  long local_228;
  String local_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined1 auStack_1c8 [56];
  char *local_190;
  void *pvStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined1 auStack_158 [24];
  char *local_140;
  void *pvStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  char *local_100;
  void *pvStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  local_268 = param_2;
  local_230 = param_1;
  local_270 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_278 = *(long *)(local_270 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_278 + 0x40));
  lVar28 = (long)apuStack_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fa94e8;
  local_280 = lVar28;
  FUN_1000037f0(&DAT_100fa94e8,&DAT_100c26530);
  local_290 = *(long *)(puVar8 + -8);
  local_288 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_290 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar26 = (undefined8 *)(lVar28 - extraout_x8_00);
  puVar8 = &DAT_100fa94f0;
  apuStack_2a0[1] = puVar26;
  FUN_1000037f0(&DAT_100fa94f0,&DAT_100c26538);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar28 = (long)puVar26 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_238 = lVar28;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = lVar28 - extraout_x12;
  local_228 = lVar28;
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar9.unknown = (undefined *)(lVar28 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar26 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_240 = pMVar10;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    param_5.unknown = (undefined *)0x5b;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x5b,UVar11.unknown,puVar26);
  }
  FUN_1001dfd54(LVar9.unknown);
  SVar34 = (extension_Foundation)::Swift::String::init(LVar9);
  local_220 = SVar34;
  FUN_100008378();
  puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar13 = SVar34.str;
  puVar20 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar24 = pcVar13;
  TVar14 = SwiftUI::Text::_init();
  local_25c = SUB84(pcVar24,0);
  local_258 = puVar20;
  puStack_250 = TVar14.unknown;
  local_248 = param_5.unknown;
  FUN_1001dfbd4(LVar9.unknown);
  local_220 = (extension_Foundation)::Swift::String::init(LVar9);
  TVar15 = SwiftUI::Text::_init(TVar14.unknown,puVar8,pcVar13);
  CVar16 = SwiftUI::Color::get_secondary(TVar15.unknown);
  TVar14 = TVar15;
  puVar20 = puVar8;
  pcVar24 = pcVar13;
  TVar17 = SwiftUI::Text::_foregroundColor(CVar16.unknown);
  _swift_release(CVar16.unknown);
  FUN_100016d74(TVar15.unknown,puVar8,pcVar13);
  _swift_bridgeObjectRelease();
  FVar18 = SwiftUI::Font::get_subheadline(param_5);
  TVar15 = TVar17;
  puVar8 = TVar14.unknown;
  puVar25 = puVar20;
  TVar19 = SwiftUI::Text::_font(FVar18.unknown);
  _swift_release(FVar18.unknown);
  FUN_100016d74(TVar17.unknown,TVar14.unknown,puVar20);
  _swift_bridgeObjectRelease(pcVar24);
  FUN_100205044(&local_220,0,TVar19.unknown,TVar15.unknown,puVar8,puVar25);
  FUN_100016d74(TVar19.unknown,TVar15.unknown,puVar8);
  _swift_bridgeObjectRelease(puVar25);
  pvStack_138 = local_220.bridgeObject;
  local_140 = local_220.str;
  uStack_128 = uStack_208;
  uStack_130 = uStack_210;
  uStack_118 = uStack_1f8;
  local_120 = local_200;
  local_110 = local_1f0;
  pvStack_f8 = local_220.bridgeObject;
  local_100 = local_220.str;
  uStack_e8 = uStack_208;
  uStack_f0 = uStack_210;
  uStack_d8 = uStack_1f8;
  local_e0 = local_200;
  local_d0 = local_1f0;
  FUN_100011090(&local_140,&local_c0,&DAT_100fa7250,&DAT_100c26540);
  FUN_100005808(&local_100,&DAT_100fa7250,&DAT_100c26540);
  puVar6 = local_268;
  lVar28 = local_268[1];
  puVar26 = (undefined8 *)(lVar28 + _TtC5Paste24GeneralSettingsViewModel::_isDirectPasteEnabled);
  _swift_beginAccess(puVar26,auStack_158,0,0);
  uVar23 = *puVar26;
  uVar32 = puVar26[1];
  uVar33 = puVar26[2];
  uStack_a8 = puVar26[3];
  uVar4 = puVar26[4];
  uStack_98 = puVar26[5];
  uVar29 = puVar26[6];
  local_c0 = uVar23;
  uStack_b8 = uVar32;
  local_b0 = uVar33;
  local_a0 = uVar4;
  local_90 = uVar29;
  _swift_retain(uVar23);
  _swift_retain(uVar32);
  _swift_retain(uVar33);
  _swift_retain(uVar4);
  _swift_retain(uVar29);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_220);
  _swift_release(uVar29);
  _swift_release(uVar4);
  _swift_release(uVar33);
  _swift_release(uVar32);
  _swift_release(uVar23);
  if ((byte)local_220.str == '\x01') {
    puVar8 = &DAT_100c26558;
    _swift_getKeyPath(&DAT_100c26558);
    puVar20 = &DAT_100c26580;
    _swift_getKeyPath(&DAT_100c26580);
    Combine::Published::_get_subscript(&local_220,lVar28,puVar8,puVar20);
    _swift_release(puVar8);
    _swift_release(puVar20);
    if (((byte)local_220.str & 1) == 0) {
      puVar8 = &DAT_100eb2368;
      _swift_allocObject(&DAT_100eb2368,0x60,7);
      uVar23 = puVar6[4];
      uVar33 = puVar6[7];
      uVar32 = puVar6[6];
      *(undefined8 *)(puVar8 + 0x38) = puVar6[5];
      *(undefined8 *)(puVar8 + 0x30) = uVar23;
      *(undefined8 *)(puVar8 + 0x48) = uVar33;
      *(undefined8 *)(puVar8 + 0x40) = uVar32;
      uVar23 = puVar6[8];
      *(undefined8 *)(puVar8 + 0x58) = puVar6[9];
      *(undefined8 *)(puVar8 + 0x50) = uVar23;
      uVar33 = *puVar6;
      uVar23 = puVar6[2];
      uVar32 = puVar6[3];
      *(undefined8 *)(puVar8 + 0x18) = puVar6[1];
      *(undefined8 *)(puVar8 + 0x10) = uVar33;
      *(undefined8 *)(puVar8 + 0x28) = uVar32;
      *(undefined8 *)(puVar8 + 0x20) = uVar23;
      FUN_1000624b0(puVar6,&local_220);
      FUN_1000037f0(&DAT_100fa9508,&DAT_100c265a0);
      FUN_1000626ec();
      puVar26 = apuStack_2a0[1];
      SwiftUI::Button::_init();
      lVar28 = local_280;
      SwiftUI::PlainButtonStyle::init();
      puVar8 = &DAT_100fa9528;
      FUN_100016eac(&DAT_100fa9528,&DAT_100fa94e8,&DAT_100c26530,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
      puVar20 = &DAT_100fa7200;
      FUN_100003a00(&DAT_100fa7200,PTR_typeMetadataAccessor_100eaa9d0,
                    PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0)
      ;
      lVar30 = local_228;
      puVar5 = local_270;
      puVar25 = local_288;
      (extension_SwiftUI)::SwiftUI::View::_buttonStyle
                (local_228,lVar28,local_288,local_270,puVar8,puVar20);
      (**(code **)(local_278 + 8))(lVar28,puVar5);
      (**(code **)(local_290 + 8))(puVar26,puVar25);
      FUN_1001fe1dc();
      CVar16 = SwiftUI::Color::init((NSColor *)*puVar26);
      SVar21 = SwiftUI::Edge::Set::get_all(CVar16.unknown);
      puVar8 = &DAT_100fa9530;
      uVar23 = local_200;
      FUN_1000037f0(&DAT_100fa9530,&DAT_100c265b0);
      iVar3 = *(int *)(puVar8 + 0x24);
      *(undefined8 *)(lVar30 + iVar3) = CVar16.unknown;
      *(char *)((undefined8 *)(lVar30 + iVar3) + 1) = (char)SVar21.unknown;
      puVar8 = &DAT_100fa9538;
      FUN_1000037f0(&DAT_100fa9538,&DAT_100c265b8);
      puVar26 = (undefined8 *)(lVar30 + *(int *)(puVar8 + 0x24));
      RVar22 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
      iVar3 = *(int *)(RVar22.unknown + 0x14);
      uVar2 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
      ;
      RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar28 = CONCAT71((int7)((ulong)RVar22.unknown >> 8),RVar7.value);
      (**(code **)(*(long *)(lVar28 + -8) + 0x68))((long)puVar26 + (long)iVar3,uVar2,lVar28);
      auVar31 = NEON_fmov(0x4014000000000000,8);
      puVar26[1] = auVar31._8_8_;
      *puVar26 = auVar31._0_8_;
      SVar21.unknown = &DAT_100fa8428;
      FUN_1000037f0(&DAT_100fa8428,&DAT_100c25510);
      *(undefined2 *)((long)puVar26 + (long)*(int *)(SVar21.unknown + 0x24)) = 0x100;
      SVar21 = SwiftUI::Edge::Set::get_top(SVar21);
      uVar32 = 0x4018000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar21.unknown);
      puVar8 = &DAT_100fa94f8;
      FUN_1000037f0(&DAT_100fa94f8,&DAT_100c26548);
      puVar1 = (undefined1 *)(lVar30 + *(int *)(puVar8 + 0x24));
      *puVar1 = (char)SVar21.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar32;
      *(undefined8 *)(puVar1 + 0x10) = uVar33;
      *(undefined8 *)(puVar1 + 0x18) = uVar23;
      *(undefined8 *)(puVar1 + 0x20) = in_d3;
      puVar1[0x28] = 0;
      pcVar27 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
      uVar23 = 0;
      goto LAB_10005ec2c;
    }
  }
  puVar8 = &DAT_100fa94f8;
  FUN_1000037f0(&DAT_100fa94f8,&DAT_100c26548);
  pcVar27 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
  uVar23 = 1;
  lVar30 = local_228;
LAB_10005ec2c:
  (*pcVar27)(lVar30,uVar23,1,puVar8);
  lVar28 = local_238;
  pvStack_188 = pvStack_138;
  local_190 = local_140;
  uStack_178 = uStack_128;
  uStack_180 = uStack_130;
  uStack_168 = uStack_118;
  local_170 = local_120;
  local_160 = local_110;
  FUN_100011090(lVar30,local_238,&DAT_100fa94f0,&DAT_100c26538);
  puVar26 = local_230;
  puVar5 = local_248;
  puVar25 = puStack_250;
  puVar20 = local_258;
  uVar2 = local_25c;
  *local_230 = puStack_250;
  local_230[1] = local_258;
  *(char *)(local_230 + 2) = (char)local_25c;
  local_230[3] = local_248;
  local_220.bridgeObject = pvStack_188;
  local_220.str = local_190;
  uStack_208 = uStack_178;
  uStack_210 = uStack_180;
  uStack_1f8 = uStack_168;
  local_200 = local_170;
  local_1f0 = local_160;
  *(undefined1 *)(local_230 + 10) = local_160;
  local_230[7] = uStack_178;
  local_230[6] = uStack_180;
  local_230[9] = uStack_168;
  local_230[8] = local_170;
  local_230[5] = pvStack_188;
  local_230[4] = local_190;
  puVar8 = &DAT_100fa9500;
  FUN_1000037f0(&DAT_100fa9500,&DAT_100c26550);
  FUN_100011090(lVar28,(long)puVar26 + (long)*(int *)(puVar8 + 0x40),&DAT_100fa94f0,&DAT_100c26538);
  FUN_100016d5c(puVar25,puVar20,uVar2);
  _swift_bridgeObjectRetain(puVar5);
  FUN_100011090(&local_220,auStack_1c8,&DAT_100fa7250,&DAT_100c26540);
  FUN_100005808(local_228,&DAT_100fa94f0,&DAT_100c26538);
  FUN_100005808(lVar28,&DAT_100fa94f0,&DAT_100c26538);
  FUN_100005808(&local_190,&DAT_100fa7250,&DAT_100c26540);
  FUN_100016d74(puVar25,puVar20,uVar2);
  _swift_release(local_240);
  _swift_bridgeObjectRelease(puVar5);
  return;
}



/* Address: 0x10005ed94 | FUN_10005ed94 */

void FUN_10005ed94(void)

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
              ("Paste/GeneralSettingsView.swift",0x1f,1,99,UVar4.unknown,puVar3);
  }
  FUN_1000abd54();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10005ee44 | FUN_10005ee44 */

void FUN_10005ee44(undefined8 *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  Set SVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_438 [152];
  undefined *local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
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
  undefined *local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *local_290;
  undefined8 uStack_288;
  undefined1 local_280;
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
  undefined7 local_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined7 local_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined *local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 local_217;
  undefined8 uStack_20f;
  undefined8 local_207;
  undefined8 uStack_1ff;
  undefined8 local_1f7;
  undefined8 uStack_1ef;
  undefined8 local_1e7;
  undefined8 uStack_1df;
  undefined8 local_1d7;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined7 uStack_1c0;
  undefined1 local_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined1 local_1a9;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  undefined1 local_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 local_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 local_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_90;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/GeneralSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x65,UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_10005f158(&local_120);
  uStack_308 = uStack_f8;
  local_310 = local_100;
  uStack_2f8 = uStack_e8;
  local_300 = uStack_f0;
  uStack_328 = uStack_118;
  local_330 = local_120;
  uStack_318 = uStack_108;
  uStack_320 = uStack_110;
  uStack_2c8 = uStack_108;
  local_2d0 = uStack_110;
  uStack_2b8 = uStack_f8;
  uStack_2c0 = local_100;
  uStack_2a8 = uStack_e8;
  local_2b0 = uStack_f0;
  uStack_298 = uStack_d8;
  uStack_2a0 = local_e0;
  uStack_2e8 = uStack_d8;
  local_2f0 = local_e0;
  uStack_2d8 = uStack_118;
  puStack_2e0 = local_120;
  FUN_100011090(&local_330,&uStack_1c0,&DAT_100fa9540,&DAT_100c265c0);
  SVar7.unknown = (undefined *)&puStack_2e0;
  FUN_100005808(SVar7.unknown,&DAT_100fa9540,&DAT_100c265c0);
  uStack_1b1 = (undefined1)uStack_328;
  uStack_1b0 = (undefined7)((ulong)uStack_328 >> 8);
  local_1b9 = SUB81(local_330,0);
  uStack_1b8 = (undefined7)((ulong)local_330 >> 8);
  uStack_1a1 = (undefined1)uStack_318;
  uStack_1a0 = (undefined7)((ulong)uStack_318 >> 8);
  local_1a9 = (undefined1)uStack_320;
  uStack_1a8 = (undefined7)((ulong)uStack_320 >> 8);
  uStack_171 = (undefined1)uStack_2e8;
  uStack_170 = (undefined7)((ulong)uStack_2e8 >> 8);
  local_179 = (undefined1)local_2f0;
  uStack_178 = (undefined7)((ulong)local_2f0 >> 8);
  uStack_181 = (undefined1)uStack_2f8;
  uStack_180 = (undefined7)((ulong)uStack_2f8 >> 8);
  local_189 = (undefined1)local_300;
  uStack_188 = (undefined7)((ulong)local_300 >> 8);
  uStack_191 = (undefined1)uStack_308;
  uStack_190 = (undefined7)((ulong)uStack_308 >> 8);
  local_199 = (undefined1)local_310;
  uStack_198 = (undefined7)((ulong)local_310 >> 8);
  uStack_288 = 0x4010000000000000;
  local_280 = 0;
  uStack_267 = uStack_1a8;
  uStack_260 = uStack_1a1;
  local_26f = uStack_1b0;
  uStack_268 = local_1a9;
  uStack_277 = uStack_1b8;
  uStack_270 = uStack_1b1;
  local_27f = uStack_1c0;
  uStack_278 = local_1b9;
  uVar9 = CONCAT17(local_189,uStack_190);
  uVar10 = CONCAT17(local_179,uStack_180);
  uStack_237 = uStack_178;
  uStack_230 = uStack_171;
  local_23f = uStack_180;
  uStack_238 = local_179;
  uStack_247 = uStack_188;
  uStack_240 = uStack_181;
  local_24f = uStack_190;
  uStack_248 = local_189;
  uStack_257 = uStack_198;
  uStack_250 = uStack_191;
  local_25f = uStack_1a0;
  uStack_258 = local_199;
  local_290 = VVar6.unknown;
  uStack_22f = uStack_170;
  SVar7 = SwiftUI::Edge::Set::get_all(SVar7);
  uVar8 = 0x4018000000000000;
  uVar11 = uStack_110;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  uStack_358 = CONCAT71(uStack_247,uStack_248);
  local_360 = CONCAT71(local_24f,uStack_250);
  uStack_348 = CONCAT71(uStack_237,uStack_238);
  local_350 = CONCAT71(local_23f,uStack_240);
  uStack_388 = CONCAT71(uStack_277,uStack_278);
  uStack_390 = CONCAT71(local_27f,local_280);
  uStack_398 = uStack_288;
  local_3a0 = local_290;
  uStack_378 = CONCAT71(uStack_267,uStack_268);
  local_380 = CONCAT71(local_26f,uStack_270);
  uStack_368 = CONCAT71(uStack_257,uStack_258);
  local_370 = CONCAT71(local_25f,uStack_260);
  uStack_1ef = CONCAT17(uStack_191,uStack_198);
  local_1f7 = CONCAT17(local_199,uStack_1a0);
  uStack_1df = CONCAT17(uStack_181,uStack_188);
  local_1e7 = CONCAT17(local_189,uStack_190);
  local_1d7 = CONCAT17(local_179,uStack_180);
  uStack_1cf = uStack_178;
  uStack_20f = CONCAT17(uStack_1b1,uStack_1b8);
  local_217 = CONCAT17(local_1b9,uStack_1c0);
  uStack_1ff = CONCAT17(uStack_1a1,uStack_1a8);
  local_207 = CONCAT17(local_1a9,uStack_1b0);
  local_340 = CONCAT71(uStack_22f,uStack_230);
  local_220 = 0x4010000000000000;
  local_218 = 0;
  uStack_1c8 = uStack_171;
  uStack_1c7 = uStack_170;
  local_228 = VVar6.unknown;
  FUN_100011090(&local_290,&local_120,&DAT_100fa9520,&DAT_100c265a8);
  FUN_100005808(&local_228,&DAT_100fa9520,&DAT_100c265a8);
  uStack_178 = (undefined7)uStack_358;
  uStack_171 = (undefined1)((ulong)uStack_358 >> 0x38);
  uStack_180 = (undefined7)local_360;
  local_179 = (undefined1)((ulong)local_360 >> 0x38);
  uStack_168 = uStack_348;
  uStack_170 = (undefined7)local_350;
  uStack_169 = (undefined1)((ulong)local_350 >> 0x38);
  uStack_1b8 = (undefined7)uStack_398;
  uStack_1b1 = (undefined1)((ulong)uStack_398 >> 0x38);
  uStack_1c0 = SUB87(local_3a0,0);
  local_1b9 = (undefined1)((ulong)local_3a0 >> 0x38);
  uStack_1a8 = (undefined7)uStack_388;
  uStack_1a1 = (undefined1)((ulong)uStack_388 >> 0x38);
  uStack_1b0 = (undefined7)uStack_390;
  local_1a9 = (undefined1)((ulong)uStack_390 >> 0x38);
  uStack_198 = (undefined7)uStack_378;
  uStack_191 = (undefined1)((ulong)uStack_378 >> 0x38);
  uStack_1a0 = (undefined7)local_380;
  local_199 = (undefined1)((ulong)local_380 >> 0x38);
  uStack_188 = (undefined7)uStack_368;
  uStack_181 = (undefined1)((ulong)uStack_368 >> 0x38);
  uStack_190 = (undefined7)local_370;
  local_189 = (undefined1)((ulong)local_370 >> 0x38);
  uStack_118 = uStack_398;
  local_120 = local_3a0;
  uStack_108 = uStack_388;
  uStack_110 = uStack_390;
  uStack_d8 = uStack_358;
  local_e0 = local_360;
  uStack_c8 = uStack_348;
  uStack_d0 = local_350;
  local_160 = local_340;
  uStack_158 = SUB81(SVar7.unknown,0);
  local_130 = 0;
  local_c0 = local_340;
  uStack_f8 = uStack_378;
  local_100 = local_380;
  uStack_e8 = uStack_368;
  uStack_f0 = local_370;
  local_90 = 0;
  local_150 = uVar8;
  local_148 = uVar9;
  local_140 = uVar10;
  uStack_138 = uVar11;
  local_b8 = uStack_158;
  local_b0 = uVar8;
  local_a8 = uVar9;
  local_a0 = uVar10;
  FUN_100011090(&uStack_1c0,auStack_438,&DAT_100fa9508,&DAT_100c265a0);
  FUN_100005808(&local_120,&DAT_100fa9508,&DAT_100c265a0);
  _swift_release(pMVar2);
  param_1[0xd] = CONCAT71(uStack_157,uStack_158);
  param_1[0xc] = local_160;
  param_1[0xf] = local_148;
  param_1[0xe] = local_150;
  param_1[0x11] = uStack_138;
  param_1[0x10] = local_140;
  *(undefined1 *)(param_1 + 0x12) = local_130;
  param_1[5] = CONCAT17(uStack_191,uStack_198);
  param_1[4] = CONCAT17(local_199,uStack_1a0);
  param_1[7] = CONCAT17(uStack_181,uStack_188);
  param_1[6] = CONCAT17(local_189,uStack_190);
  param_1[9] = CONCAT17(uStack_171,uStack_178);
  param_1[8] = CONCAT17(local_179,uStack_180);
  param_1[0xb] = uStack_168;
  param_1[10] = CONCAT17(uStack_169,uStack_170);
  param_1[1] = CONCAT17(uStack_1b1,uStack_1b8);
  *param_1 = CONCAT17(local_1b9,uStack_1c0);
  param_1[3] = CONCAT17(uStack_1a1,uStack_1a8);
  param_1[2] = CONCAT17(local_1a9,uStack_1b0);
  return;
}



/* Address: 0x10005f158 | FUN_10005f158 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10005f158(undefined8 *param_1)

{
  undefined4 uVar1;
  String SVar2;
  TemplateRenderingMode TVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  Image IVar10;
  undefined7 extraout_var;
  Image IVar12;
  NSColor *nsColor;
  Color CVar13;
  undefined *puVar14;
  String *pSVar15;
  String *pSVar16;
  Color CVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  Image IVar20;
  String SVar21;
  undefined1 auStack_70 [8];
  MainActor *local_68;
  long lVar11;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa79f8;
  FUN_1000037f0(&DAT_100fa79f8,&DAT_100c25750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar20.unknown = LVar4.unknown + -extraout_x8_00;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_68 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "Paste/GeneralSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x66,UVar8.unknown,puVar7);
  }
  FUN_10020cef0();
  SVar2 = *(String *)pcVar9;
  _swift_bridgeObjectRetain(((String *)pcVar9)->bridgeObject);
  IVar10 = SwiftUI::Image::init(SVar2);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Image_TemplateRenderingMode_original_SwiftUI_Image_TemplateRenderingMode_Type___>_SwiftUI_Image_TemplateRenderingMode_100eab768
  ;
  TVar3 = SwiftUI::Image::TemplateRenderingMode::typeMetadataAccessor();
  lVar11 = CONCAT71(extraout_var,TVar3.value);
  lVar19 = *(long *)(lVar11 + -8);
  (**(code **)(lVar19 + 0x68))(IVar20.unknown,uVar1,lVar11);
  (**(code **)(lVar19 + 0x38))(IVar20.unknown,0,1);
  IVar12 = SwiftUI::Image::_renderingMode(IVar20);
  _swift_release(IVar10.unknown);
  puVar5 = &DAT_100c25750;
  FUN_100005808(IVar20.unknown,&DAT_100fa79f8);
  nsColor = (NSColor *)NSColor::systemRedColor((ID)&_OBJC_CLASS___NSColor);
  CVar13 = SwiftUI::Color::init(nsColor);
  puVar14 = &DAT_100c262e8;
  _swift_getKeyPath();
  FUN_1001dfa54(LVar4.unknown);
  SVar21 = (extension_Foundation)::Swift::String::init(LVar4);
  FUN_1002045e8();
  pSVar15 = (String *)SVar21.str;
  pSVar16 = pSVar15;
  FUN_10020cb24();
  SVar2 = *pSVar16;
  _swift_bridgeObjectRetain(pSVar16->bridgeObject);
  IVar10 = SwiftUI::Image::init(SVar2);
  IVar20 = IVar10;
  FUN_1001fef10();
  CVar17 = SwiftUI::Color::init(*(NSColor **)IVar20.unknown);
  puVar18 = &DAT_100c262e8;
  _swift_getKeyPath();
  *param_1 = IVar12.unknown;
  param_1[1] = puVar14;
  param_1[2] = CVar13.unknown;
  *(String *)(param_1 + 3) = SVar21;
  *(char *)(param_1 + 5) = (char)puVar5;
  param_1[6] = lVar11;
  param_1[7] = IVar10.unknown;
  param_1[8] = puVar18;
  param_1[9] = CVar17.unknown;
  _swift_retain(IVar12.unknown);
  _swift_retain(puVar14);
  _swift_retain(CVar13.unknown);
  FUN_100016d5c(pSVar15,SVar21.bridgeObject,puVar5);
  _swift_bridgeObjectRetain(lVar11);
  FUN_100016d74(pSVar15,SVar21.bridgeObject,puVar5);
  _swift_release(local_68);
  _swift_release(CVar13.unknown);
  _swift_release(puVar14);
  _swift_release(IVar12.unknown);
  _swift_bridgeObjectRelease(lVar11);
  return;
}



/* Address: 0x10005f430 | FUN_10005f430 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010005f560 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10005f430(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  Text TVar9;
  Text TVar10;
  Color CVar11;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  undefined *puVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined *puVar18;
  Font in_x3;
  undefined *puVar19;
  long extraout_x8;
  String SVar20;
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  MainActor *local_78;
  String local_70;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar16 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar16,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_78 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    in_x3.unknown = (undefined *)0x78;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x78,UVar6.unknown,puVar5);
  }
  FUN_1001e0054(LVar3.unknown);
  SVar20 = (extension_Foundation)::Swift::String::init(LVar3);
  local_70 = SVar20;
  FUN_100008378();
  puVar16 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar8 = SVar20.str;
  puVar15 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar17 = pcVar8;
  TVar9 = SwiftUI::Text::_init();
  local_94 = SUB84(pcVar17,0);
  local_90 = puVar15;
  puStack_88 = TVar9.unknown;
  local_80 = in_x3.unknown;
  FUN_1001dfed4(LVar3.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar3);
  TVar10 = SwiftUI::Text::_init(TVar9.unknown,puVar16,pcVar8);
  CVar11 = SwiftUI::Color::get_secondary(TVar10.unknown);
  TVar9 = TVar10;
  puVar15 = puVar16;
  pcVar17 = pcVar8;
  TVar12 = SwiftUI::Text::_foregroundColor(CVar11.unknown);
  _swift_release(CVar11.unknown);
  FUN_100016d74(TVar10.unknown,puVar16,pcVar8);
  _swift_bridgeObjectRelease();
  FVar13 = SwiftUI::Font::get_subheadline(in_x3);
  TVar10 = TVar12;
  puVar18 = TVar9.unknown;
  puVar19 = puVar15;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100016d74(TVar12.unknown,TVar9.unknown,puVar15);
  _swift_bridgeObjectRelease(pcVar17);
  puVar2 = local_80;
  puVar15 = puStack_88;
  puVar16 = local_90;
  uVar1 = local_94;
  *param_1 = puStack_88;
  param_1[1] = local_90;
  *(char *)(param_1 + 2) = (char)local_94;
  param_1[3] = local_80;
  param_1[4] = TVar14.unknown;
  param_1[5] = TVar10.unknown;
  *(char *)(param_1 + 6) = (char)puVar18;
  param_1[7] = puVar19;
  FUN_100016d5c(puStack_88,local_90,local_94);
  _swift_bridgeObjectRetain(puVar2);
  FUN_100016d5c(TVar14.unknown,TVar10.unknown,puVar18);
  _swift_bridgeObjectRetain(puVar19);
  FUN_100016d74(TVar14.unknown,TVar10.unknown,puVar18);
  _swift_bridgeObjectRelease(puVar19);
  FUN_100016d74(puVar15,puVar16,uVar1);
  _swift_release(local_78);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10005f6b8 | FUN_10005f6b8 */

void FUN_10005f6b8(long param_1,undefined8 *param_2)

{
  ObservedObject OVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  Wrapper WVar12;
  Wrapper dynamicMember;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_b0 [8];
  MainActor *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  Binding<bool> local_78;
  
  local_80 = param_1;
  local_88 = (undefined *)SwiftUI::CheckboxToggleStyle::typeMetadataAccessor();
  local_90 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  puVar16 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fa9450;
  FUN_1000037f0(&DAT_100fa9450,&DAT_100c263f8);
  local_a0 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fa9458;
  FUN_1000037f0(&DAT_100fa9458,&DAT_100c26400);
  local_98 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar17 = ((long)puVar16 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar17 - extraout_x12;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar13 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar13,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a8 = pMVar8;
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x92,UVar10.unknown,puVar9);
  }
  OVar1.unknown = (undefined *)*param_2;
  FUN_1000ad91c(0);
  FUN_100003a00(&DAT_100fa9310,FUN_1000ad91c,&TargetProtocolConformanceDescriptor_100c29498);
  WVar12 = SwiftUI::ObservedObject::_get_projectedValue(OVar1);
  dynamicMember.unknown = &DAT_100c26408;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar12.unknown);
  _swift_release(dynamicMember.unknown);
  FUN_1000037f0(&DAT_100fa72f8,&DAT_100c26430);
  FUN_1000625cc();
  SwiftUI::Toggle::_init(local_78);
  SwiftUI::CheckboxToggleStyle::init();
  puVar13 = &DAT_100fa9460;
  FUN_100016eac(&DAT_100fa9460,&DAT_100fa9450,&DAT_100c263f8,
                PTR_SwiftUI__SwiftUI__Toggle<undefined>_>SwiftUI__View_100eab918);
  puVar14 = &DAT_100fa9468;
  FUN_100003a00(&DAT_100fa9468,PTR_typeMetadataAccessor_100eaacc8,
                PTR_SwiftUI__SwiftUI__CheckboxToggleStyle_>SwiftUI__ToggleStyle_100eaacb8);
  puVar4 = local_88;
  (extension_SwiftUI)::SwiftUI::View::_toggleStyle(lVar18,puVar16,puVar6,local_88,puVar13,puVar14);
  (**(code **)(local_90 + 8))(puVar16,puVar4);
  (**(code **)(local_a0 + 8))((long)puVar16 - extraout_x8_00,puVar6);
  lVar3 = local_98;
  pcVar15 = *(code **)(local_98 + 0x10);
  (*pcVar15)(lVar17,lVar18,puVar7);
  lVar5 = local_80;
  (*pcVar15)(local_80,lVar17,puVar7);
  puVar6 = &DAT_100fa9470;
  FUN_1000037f0(&DAT_100fa9470,&DAT_100c26438);
  iVar2 = *(int *)(puVar6 + 0x30);
  *(undefined8 *)(lVar5 + iVar2) = 0;
  *(undefined1 *)((undefined8 *)(lVar5 + iVar2) + 1) = 1;
  pcVar15 = *(code **)(lVar3 + 8);
  (*pcVar15)(lVar18,puVar7);
  (*pcVar15)(lVar17,puVar7);
  _swift_release(local_a8);
  return;
}



/* Address: 0x10005fa2c | FUN_10005fa2c */

void FUN_10005fa2c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = (undefined8 *)(*param_2 + *param_5);
  _swift_beginAccess(puVar1,auStack_a8,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_78 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_68 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10005fb1c | FUN_10005fb1c */

void FUN_10005fb1c(undefined8 *param_1)

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
  undefined1 auStack_170 [80];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  String local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0x93;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0x93,UVar4.unknown,puVar3);
  }
  FUN_1001e01d4(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  uVar8 = local_a0.str._0_1_;
  FUN_100008378();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  SwiftUI::Alignment::get_leading((Alignment)TVar6.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  uStack_c8 = uStack_118;
  local_d0 = local_120;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  local_b0 = local_100;
  local_a0.bridgeObject = puVar7;
  local_a0.str = TVar6.unknown;
  uStack_68 = uStack_108;
  local_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = local_100;
  uStack_78 = uStack_118;
  local_80 = local_120;
  local_f0 = TVar6.unknown;
  puStack_e8 = puVar7;
  local_e0 = uVar8;
  local_d8 = in_x3;
  local_90 = uVar8;
  local_88 = in_x3;
  FUN_100011090(&local_f0,auStack_170,&DAT_100fa72f8,&DAT_100c26430);
  FUN_100005808(&local_a0,&DAT_100fa72f8,&DAT_100c26430);
  _swift_release(pMVar2);
  param_1[5] = uStack_c8;
  param_1[4] = local_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[9] = uStack_a8;
  param_1[8] = local_b0;
  param_1[1] = puStack_e8;
  *param_1 = local_f0;
  param_1[3] = local_d8;
  param_1[2] = CONCAT71(uStack_df,local_e0);
  return;
}



/* Address: 0x10005fce8 | FUN_10005fce8 */

void FUN_10005fce8(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  HorizontalAlignment HVar9;
  State SVar10;
  VerticalAlignment VVar11;
  Color CVar12;
  VerticalAlignment VVar13;
  undefined *puVar14;
  long extraout_x8;
  undefined8 *puVar15;
  long extraout_x8_00;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long alStack_420 [2];
  undefined *local_410 [2];
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined1 uStack_3f8;
  undefined7 uStack_3f7;
  undefined8 local_3f0;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined *local_3d0;
  undefined *puStack_3c8;
  undefined *local_3c0;
  undefined *puStack_3b8;
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  MainActor *local_398;
  long local_390;
  long local_388;
  undefined *local_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined1 local_310;
  undefined7 uStack_30f;
  undefined *local_308;
  undefined *local_300;
  undefined8 uStack_2f8;
  undefined1 local_2f0;
  undefined7 uStack_2ef;
  undefined1 local_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined *local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  undefined *local_2b8;
  undefined *puStack_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined *local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined *local_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined *local_230;
  undefined *puStack_228;
  undefined *local_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [112];
  undefined *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined7 local_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  puVar17 = &DAT_100fa9368;
  local_390 = param_1;
  FUN_1000037f0(&DAT_100fa9368,&DAT_100c26278);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar17 + -8) + 0x40));
  lVar16 = (long)alStack_420 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_388 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = (undefined8 *)(lVar16 - extraout_x12);
  puVar17 = &DAT_100fa9370;
  local_3a0 = puVar15;
  FUN_1000037f0(&DAT_100fa9370,&DAT_100c26280);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar17 + -8) + 0x40));
  lVar16 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = (undefined8 *)(lVar16 - extraout_x12_00);
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar17 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar15 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar17,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_398 = pMVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "Paste/GeneralSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xa1,UVar7.unknown,puVar15);
  }
  HVar9 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar8);
  *puVar18 = HVar9.unknown;
  puVar18[1] = 0x4000000000000000;
  *(undefined1 *)(puVar18 + 2) = 0;
  puVar17 = &DAT_100fa9378;
  FUN_1000037f0(&DAT_100fa9378,&DAT_100c26288);
  local_3a8 = puVar18;
  FUN_1000602bc((long)puVar18 + (long)*(int *)(puVar17 + 0x2c),param_2);
  puStack_d8 = *(undefined **)(param_2 + 0x38);
  local_e0 = *(undefined **)(param_2 + 0x30);
  local_c8 = *(undefined **)(param_2 + 0x48);
  local_d0 = *(undefined8 *)(param_2 + 0x40);
  SVar10.unknown = &DAT_100fa9380;
  FUN_1000037f0(&DAT_100fa9380,&DAT_100c26290);
  SwiftUI::State::get_wrappedValue(SVar10);
  VVar13.unknown = puStack_148;
  _swift_bridgeObjectRelease();
  if ((char)local_140 == '\x01') {
    VVar11 = SwiftUI::VerticalAlignment::get_center(VVar13);
    VVar13 = VVar11;
    FUN_100060afc(&local_e0);
    uVar4 = local_d0;
    puVar14 = puStack_d8;
    puVar19 = local_e0;
    uVar5 = local_c8._0_1_;
    alStack_420[1] = lVar16;
    local_3c0 = (undefined *)SwiftUI::Font::get_callout(VVar13.unknown);
    puStack_318 = (undefined *)0x4010000000000000;
    local_310 = 0;
    local_308 = puVar19;
    local_300 = puVar14;
    uStack_2f8 = uVar4;
    local_2f0 = uVar5;
    local_2e8 = SUB81(local_c0,0);
    uStack_2e7 = (undefined7)((ulong)local_c0 >> 8);
    uStack_2e0 = (undefined1)uStack_b8;
    uStack_2df = (undefined7)((ulong)uStack_b8 >> 8);
    uStack_2d8 = (undefined1)local_b0;
    puVar17 = &DAT_100c262b0;
    local_320 = VVar11.unknown;
    _swift_getKeyPath();
    lVar16 = alStack_420[1];
    uStack_120 = CONCAT71(uStack_2ef,local_2f0);
    uStack_128 = uStack_2f8;
    local_130 = local_300;
    uStack_118 = local_2e8;
    uStack_10f = uStack_2df;
    uStack_108 = uStack_2d8;
    local_117 = uStack_2e7;
    uStack_110 = uStack_2e0;
    local_140 = CONCAT71(uStack_30f,local_310);
    puStack_148 = puStack_318;
    local_150 = local_320;
    puStack_138 = local_308;
    uStack_2c8 = 0x4010000000000000;
    local_2c0 = 0;
    local_2b8 = puVar19;
    puStack_2b0 = puVar14;
    local_2a8 = uVar4;
    local_2a0 = uVar5;
    local_298 = local_c0;
    uStack_290 = uStack_b8;
    local_288 = (undefined1)local_b0;
    local_3d0 = puVar17;
    local_2d0 = VVar11.unknown;
    FUN_100011090(&local_320,&local_e0,&DAT_100fa93a0,&DAT_100c262e0);
    CVar12.unknown = (undefined *)&local_2d0;
    FUN_100005808(CVar12.unknown,&DAT_100fa93a0,&DAT_100c262e0);
    CVar12 = SwiftUI::Color::get_secondary(CVar12);
    puVar14 = local_3c0;
    puVar19 = local_3d0;
    uStack_248 = CONCAT71(local_117,uStack_118);
    uStack_258 = uStack_128;
    local_260 = local_130;
    uStack_250 = uStack_120;
    uStack_238 = CONCAT71(uStack_107,uStack_108);
    local_240 = CONCAT71(uStack_10f,uStack_110);
    puStack_278 = puStack_148;
    local_280 = local_150;
    puStack_268 = puStack_138;
    uStack_270 = local_140;
    local_230 = local_3d0;
    puStack_228 = local_3c0;
    puVar17 = &DAT_100c262e8;
    _swift_getKeyPath();
    uStack_358 = uStack_258;
    local_360 = local_260;
    uStack_348 = uStack_248;
    uStack_350 = uStack_250;
    uStack_338 = uStack_238;
    local_340 = local_240;
    puStack_328 = puStack_228;
    puStack_330 = local_230;
    puStack_378 = puStack_278;
    local_380 = local_280;
    puStack_368 = puStack_268;
    uStack_370 = uStack_270;
    uStack_1e8 = CONCAT71(local_117,uStack_118);
    uStack_1f8 = uStack_128;
    local_200 = local_130;
    uStack_1f0 = uStack_120;
    uStack_1d8 = CONCAT71(uStack_107,uStack_108);
    local_1e0 = CONCAT71(uStack_10f,uStack_110);
    puStack_218 = puStack_148;
    local_220 = local_150;
    puStack_208 = puStack_138;
    uStack_210 = local_140;
    local_1d0 = puVar19;
    local_1c8 = puVar14;
    FUN_100011090(&local_280,&local_e0,&DAT_100fa93a8,&DAT_100c26318);
    FUN_100005808(&local_220,&DAT_100fa93a8,&DAT_100c26318);
    uStack_128 = uStack_358;
    local_130 = local_360;
    uStack_118 = (undefined1)uStack_348;
    local_117 = (undefined7)((ulong)uStack_348 >> 8);
    uStack_120 = uStack_350;
    uStack_108 = (undefined1)uStack_338;
    uStack_107 = (undefined7)((ulong)uStack_338 >> 8);
    uStack_110 = (undefined1)local_340;
    uStack_10f = (undefined7)((ulong)local_340 >> 8);
    puStack_f8 = puStack_328;
    puStack_100 = puStack_330;
    puStack_148 = puStack_378;
    local_150 = local_380;
    puStack_138 = puStack_368;
    local_140 = uStack_370;
    puStack_d8 = puStack_378;
    local_e0 = local_380;
    local_c8 = puStack_368;
    local_d0 = uStack_370;
    uStack_98 = uStack_338;
    local_a0 = local_340;
    puStack_88 = puStack_328;
    puStack_90 = puStack_330;
    uStack_b8 = uStack_358;
    local_c0 = local_360;
    uStack_a8 = uStack_348;
    local_b0 = uStack_350;
    local_f0 = puVar17;
    puStack_e8 = CVar12.unknown;
    local_80 = puVar17;
    puStack_78 = CVar12.unknown;
    FUN_100011090(&local_150,auStack_1c0,&DAT_100fa93b0,&DAT_100c26320);
    VVar13.unknown = (undefined *)&local_e0;
    FUN_100005808(VVar13.unknown,&DAT_100fa93b0,&DAT_100c26320);
    puStack_3c8 = puStack_138;
    local_3d0 = (undefined *)local_140;
    puStack_3b8 = puStack_148;
    local_3c0 = local_150;
    uStack_3e8 = uStack_118;
    uStack_3e7 = local_117;
    local_3f0 = uStack_120;
    uStack_3d8 = uStack_128;
    puStack_3e0 = local_130;
    uStack_3f8 = uStack_108;
    uStack_3f7 = uStack_107;
    uStack_400 = uStack_110;
    uStack_3ff = uStack_10f;
    local_410[1] = puStack_f8;
    local_410[0] = puStack_100;
    puVar17 = local_f0;
    puVar19 = puStack_e8;
  }
  else {
    puVar17 = (undefined *)0x0;
    puVar19 = (undefined *)0x0;
    puStack_3c8 = (undefined *)0x0;
    local_3d0 = (undefined *)0x0;
    puStack_3b8 = (undefined *)0x0;
    local_3c0 = (undefined *)0x0;
    uStack_3e8 = 0;
    uStack_3e7 = 0;
    local_3f0 = 0;
    uStack_3d8 = 0;
    puStack_3e0 = (undefined *)0x0;
    local_410[1] = (undefined *)0x0;
    local_410[0] = (undefined *)0x0;
    uStack_3f8 = 0;
    uStack_3f7 = 0;
    uStack_400 = 0;
    uStack_3ff = 0;
  }
  VVar13 = SwiftUI::VerticalAlignment::get_center(VVar13);
  puVar1 = local_3a0;
  *local_3a0 = VVar13.unknown;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar14 = &DAT_100fa9388;
  FUN_1000037f0(&DAT_100fa9388,&DAT_100c26298);
  FUN_100060d50((long)puVar1 + (long)*(int *)(puVar14 + 0x2c),param_2);
  puVar18 = local_3a8;
  FUN_100011090(local_3a8,lVar16,&DAT_100fa9370,&DAT_100c26280);
  lVar3 = local_388;
  puStack_148 = puStack_3b8;
  local_150 = local_3c0;
  puStack_138 = puStack_3c8;
  local_140 = local_3d0;
  uStack_128 = uStack_3d8;
  local_130 = puStack_3e0;
  uStack_118 = uStack_3e8;
  local_117 = uStack_3e7;
  uStack_120 = local_3f0;
  uStack_108 = uStack_3f8;
  uStack_107 = uStack_3f7;
  uStack_110 = uStack_400;
  uStack_10f = uStack_3ff;
  puStack_f8 = local_410[1];
  puStack_100 = local_410[0];
  local_f0 = puVar17;
  puStack_e8 = puVar19;
  FUN_100011090(puVar1,local_388,&DAT_100fa9368,&DAT_100c26278);
  lVar2 = local_390;
  FUN_100011090(lVar16,local_390,&DAT_100fa9370,&DAT_100c26280);
  puVar17 = &DAT_100fa9390;
  FUN_1000037f0(&DAT_100fa9390,&DAT_100c262a0);
  puVar15 = (undefined8 *)(lVar2 + *(int *)(puVar17 + 0x30));
  uStack_98 = CONCAT71(uStack_107,uStack_108);
  local_a0 = CONCAT71(uStack_10f,uStack_110);
  puStack_88 = puStack_f8;
  puStack_90 = puStack_100;
  puStack_78 = puStack_e8;
  local_80 = local_f0;
  puStack_d8 = puStack_148;
  local_e0 = local_150;
  local_c8 = puStack_138;
  local_d0 = local_140;
  uStack_a8 = CONCAT71(local_117,uStack_118);
  uStack_b8 = uStack_128;
  local_c0 = local_130;
  local_b0 = uStack_120;
  puVar15[1] = puStack_148;
  *puVar15 = local_150;
  puVar15[3] = puStack_138;
  puVar15[2] = local_140;
  puVar15[9] = uStack_98;
  puVar15[8] = local_a0;
  puVar15[0xb] = puStack_f8;
  puVar15[10] = puStack_100;
  puVar15[5] = uStack_128;
  puVar15[4] = local_130;
  puVar15[7] = uStack_a8;
  puVar15[6] = uStack_120;
  puVar15[0xd] = puStack_e8;
  puVar15[0xc] = local_f0;
  *(undefined8 *)(lVar2 + *(int *)(puVar17 + 0x40)) = 0x3fe0000000000000;
  FUN_100011090(lVar3,lVar2 + *(int *)(puVar17 + 0x50),&DAT_100fa9368,&DAT_100c26278);
  FUN_100011090(&local_e0,auStack_1c0,&DAT_100fa9398,&DAT_100c262a8);
  FUN_100005808(puVar1,&DAT_100fa9368,&DAT_100c26278);
  FUN_100005808(puVar18,&DAT_100fa9370,&DAT_100c26280);
  FUN_100005808(lVar3,&DAT_100fa9368,&DAT_100c26278);
  FUN_100005808(&local_150,&DAT_100fa9398,&DAT_100c262a8);
  FUN_100005808(lVar16,&DAT_100fa9370,&DAT_100c26280);
  _swift_release(local_398);
  return;
}



/* Address: 0x1000602bc | FUN_1000602bc */

void FUN_1000602bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Font param_6)

{
  int iVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  State SVar7;
  Set SVar8;
  VerticalAlignment VVar9;
  undefined *puVar10;
  Font FVar11;
  long extraout_x8;
  long extraout_x12;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 auStack_280 [12];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong local_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 local_188;
  ulong local_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined8 local_128;
  ulong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined1 auStack_98 [56];
  
  puVar2 = &DAT_100fa93d0;
  FUN_1000037f0(&DAT_100fa93d0,&DAT_100c26370);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar12 = (long)auStack_280 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = (undefined8 *)(lVar12 - extraout_x12);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xa2,UVar5.unknown,puVar4);
  }
  uStack_f8 = *(undefined8 *)(param_6.unknown + 0x38);
  local_100 = *(undefined8 *)(param_6.unknown + 0x30);
  uStack_e8 = *(undefined8 *)(param_6.unknown + 0x48);
  uVar15 = *(ulong *)(param_6.unknown + 0x40);
  SVar7.unknown = &DAT_100fa9380;
  local_f0 = uVar15;
  FUN_1000037f0(&DAT_100fa9380,&DAT_100c26290);
  SwiftUI::State::get_projectedValue(SVar7);
  uStack_158 = *(undefined8 *)(param_6.unknown + 0x28);
  local_160 = *(undefined8 *)(param_6.unknown + 0x20);
  SVar7.unknown = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::get_projectedValue(SVar7);
  SVar8.unknown = auStack_98;
  FUN_1003caa80(&local_220,SVar8.unknown,local_100,uStack_f8,local_f0 & 0xff);
  SVar8 = SwiftUI::Edge::Set::get_vertical(SVar8);
  uVar14 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  uStack_1b8 = uStack_218;
  local_1c0 = local_220;
  uStack_1a8 = uStack_208;
  uStack_1b0 = uStack_210;
  uStack_198 = uStack_1f8;
  local_1a0 = local_200;
  local_190 = SUB81(SVar8.unknown,0);
  uStack_178 = (undefined1)param_4;
  uStack_177 = (undefined7)((ulong)param_4 >> 8);
  uStack_170 = (undefined1)param_5;
  uStack_16f = (undefined7)((ulong)param_5 >> 8);
  local_168 = 0;
  uStack_148 = uStack_208;
  local_150 = uStack_210;
  uStack_138 = uStack_1f8;
  uStack_140 = local_200;
  uStack_158 = uStack_218;
  local_160 = local_220;
  local_108 = 0;
  local_188 = uVar14;
  local_180 = uVar15;
  local_130 = local_190;
  local_128 = uVar14;
  uStack_120 = uVar15;
  local_118 = param_4;
  uStack_110 = param_5;
  FUN_100011090(&local_1c0,&local_100,&DAT_100fa93d8,&DAT_100c26378);
  VVar9.unknown = (undefined *)&local_160;
  FUN_100005808(VVar9.unknown,&DAT_100fa93d8,&DAT_100c26378);
  VVar9 = SwiftUI::VerticalAlignment::get_top(VVar9);
  *puVar13 = VVar9.unknown;
  puVar13[1] = 0x4010000000000000;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar10 = &DAT_100fa93e0;
  FUN_1000037f0(&DAT_100fa93e0,&DAT_100c26380);
  FUN_100060604((long)puVar13 + (long)*(int *)(puVar10 + 0x2c));
  FVar11 = SwiftUI::Font::get_callout(param_6);
  puVar10 = &DAT_100c262b0;
  _swift_getKeyPath();
  iVar1 = *(int *)(puVar2 + 0x24);
  *(undefined8 *)((long)puVar13 + (long)iVar1) = puVar10;
  ((undefined8 *)((long)puVar13 + (long)iVar1))[1] = FVar11.unknown;
  uStack_1f0 = CONCAT71(uStack_18f,local_190);
  uStack_1f8 = uStack_198;
  local_200 = local_1a0;
  uStack_1e8 = local_188;
  uStack_1d8 = uStack_178;
  local_1e0 = local_180;
  uStack_1cf = CONCAT17(local_168,uStack_16f);
  uStack_1d7 = uStack_177;
  uStack_1d0 = uStack_170;
  uStack_218 = uStack_1b8;
  local_220 = local_1c0;
  uStack_208 = uStack_1a8;
  uStack_210 = uStack_1b0;
  FUN_100011090(puVar13,lVar12,&DAT_100fa93d0,&DAT_100c26370);
  uStack_d8 = uStack_1f8;
  local_e0 = local_200;
  uStack_c8 = uStack_1e8;
  uStack_d0 = uStack_1f0;
  uStack_b8 = uStack_1d8;
  local_c0 = local_1e0;
  uStack_af = uStack_1cf;
  uStack_b7 = uStack_1d7;
  uStack_b0 = uStack_1d0;
  uStack_f8 = uStack_218;
  local_100 = local_220;
  uStack_e8 = uStack_208;
  local_f0 = uStack_210;
  param_1[5] = uStack_1f8;
  param_1[4] = local_200;
  param_1[7] = uStack_1e8;
  param_1[6] = uStack_1f0;
  param_1[9] = CONCAT71(uStack_1d7,uStack_1d8);
  param_1[8] = local_1e0;
  *(undefined8 *)((long)param_1 + 0x51) = uStack_1cf;
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_1d0,uStack_1d7);
  param_1[1] = uStack_218;
  *param_1 = local_220;
  param_1[3] = uStack_208;
  param_1[2] = uStack_210;
  puVar2 = &DAT_100fa93e8;
  FUN_1000037f0(&DAT_100fa93e8,&DAT_100c26388);
  FUN_100011090(lVar12,(long)param_1 + (long)*(int *)(puVar2 + 0x30),&DAT_100fa93d0,&DAT_100c26370);
  FUN_100011090(&local_100,auStack_280,&DAT_100fa93d8,&DAT_100c26378);
  FUN_100005808(puVar13,&DAT_100fa93d0,&DAT_100c26370);
  FUN_100005808(lVar12,&DAT_100fa93d0,&DAT_100c26370);
  FUN_100005808(&local_220,&DAT_100fa93d8,&DAT_100c26378);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100060604 | FUN_100060604 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000608c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100060604(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  State SVar8;
  Text TVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 auStack_d0 [2];
  undefined *apuStack_c0 [4];
  long local_a0;
  char local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_100fa93f0;
  FUN_1000037f0(&DAT_100fa93f0,&DAT_100c26390);
  local_a0 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)apuStack_c0 - extraout_x8;
  puVar3 = &DAT_100fa93f8;
  FUN_1000037f0(&DAT_100fa93f8,&DAT_100c26398);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)(lVar16 - extraout_x8_00);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    param_5 = 0xa6;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xa6,UVar6.unknown,puVar5);
  }
  uStack_78 = *(undefined8 *)(param_2 + 0x28);
  local_80 = *(undefined8 *)(param_2 + 0x20);
  SVar8.unknown = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::get_wrappedValue(SVar8);
  if (local_98 == '\x01') {
    uStack_78 = *(undefined8 *)(param_2 + 0x38);
    local_80 = *(undefined8 *)(param_2 + 0x30);
    uStack_68 = *(undefined8 *)(param_2 + 0x48);
    uStack_70 = *(undefined8 *)(param_2 + 0x40);
    SVar8.unknown = &DAT_100fa9380;
    FUN_1000037f0(&DAT_100fa9380,&DAT_100c26290);
    SwiftUI::State::get_wrappedValue(SVar8);
    uVar13 = SUB81(SVar8.unknown,0);
    local_80 = CONCAT71(uStack_97,local_98);
    uStack_78 = uStack_90;
    FUN_100008378();
    puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar9 = SwiftUI::Text::_init();
    *puVar15 = TVar9.unknown;
    puVar15[1] = puVar2;
    *(undefined1 *)(puVar15 + 2) = uVar13;
    puVar15[3] = param_5;
    _swift_storeEnumTagMultiPayload(puVar15,puVar3,0);
    FUN_1000624f4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar15);
  }
  else {
    FUN_10035b9b0();
    uVar14 = *(undefined8 *)SVar8.unknown;
    puVar10 = &DAT_100c263a8;
    local_80 = uVar14;
    _swift_getKeyPath();
    apuStack_c0[2] = puVar10;
    _swift_bridgeObjectRetain(uVar14);
    puVar10 = &DAT_100fa9400;
    FUN_1000037f0(&DAT_100fa9400,&DAT_100c263c0);
    puVar11 = &DAT_100fa9408;
    apuStack_c0[3] = (undefined *)param_1;
    FUN_1000037f0(&DAT_100fa9408,&DAT_100c263c8);
    puVar12 = &DAT_100fa9410;
    apuStack_c0[1] = puVar3;
    FUN_100016eac(&DAT_100fa9410,&DAT_100fa9400,&DAT_100c263c0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
    puVar3 = &DAT_100fa9418;
    FUN_100016eac(&DAT_100fa9418,&DAT_100fa9408,&DAT_100c263c8,
                  PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
    puVar15[-2] = puVar3;
    (extension_SwiftUI)::SwiftUI::ForEach::_init
              (lVar16,puVar3,apuStack_c0[2],FUN_100060950,0,puVar10,puVar11,puVar12,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    lVar1 = local_a0;
    (**(code **)(local_a0 + 0x10))(puVar15,lVar16,puVar2);
    _swift_storeEnumTagMultiPayload(puVar15,apuStack_c0[1],1);
    FUN_1000624f4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar15);
    (**(code **)(lVar1 + 8))(lVar16,puVar2);
  }
  _swift_release(pMVar4);
  return;
}



/* Address: 0x100060950 | FUN_100060950 */

void FUN_100060950(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  _StringGuts _Var4;
  bool bVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  Text TVar10;
  _StringGuts _Var11;
  undefined *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  long lVar15;
  
  _Var2.unknown = (undefined *)*param_2;
  _Var4.unknown = (undefined *)param_2[1];
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "Paste/GeneralSettingsView.swift";
    param_5 = 0xaa;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xaa,UVar8.unknown,puVar7);
  }
  FUN_100008378();
  _swift_bridgeObjectRetain(_Var4.unknown);
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar10 = SwiftUI::Text::_init();
  _Var11.unknown = _Var4.unknown;
  _swift_bridgeObjectRetain();
  FUN_10035b9b0();
  lVar15 = *(long *)(*(long *)_Var11.unknown + 0x10);
  if (lVar15 == 0) {
    _swift_bridgeObjectRelease(_Var4.unknown);
LAB_100060a78:
    uVar13 = 0;
    uVar14 = 1;
  }
  else {
    plVar1 = (long *)(*(long *)_Var11.unknown + 0x10) + lVar15 * 2;
    puVar3 = (undefined *)*plVar1;
    if (_Var2.unknown == puVar3 && _Var4.unknown == (undefined *)plVar1[1]) {
      _swift_bridgeObjectRelease(_Var4.unknown);
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var4,(_StringComparisonResult)(__int8)puVar3);
      _swift_bridgeObjectRelease(_Var4.unknown);
      if (!bVar5) goto LAB_100060a78;
    }
    uVar14 = 0;
    uVar13 = 1;
  }
  *param_1 = TVar10.unknown;
  param_1[1] = puVar12;
  *(char *)(param_1 + 2) = (char)pcVar9;
  param_1[3] = param_5;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = uVar14;
  *(undefined1 *)((long)param_1 + 0x29) = uVar13;
  FUN_100016d5c(TVar10.unknown,puVar12,pcVar9);
  _swift_bridgeObjectRetain(param_5);
  FUN_100016d74(TVar10.unknown,puVar12,pcVar9);
  _swift_release(pMVar6);
  _swift_bridgeObjectRelease(param_5);
  return;
}



/* Address: 0x100060afc | FUN_100060afc */

void FUN_100060afc(undefined8 *param_1)

{
  undefined4 uVar1;
  String systemName;
  TemplateRenderingMode TVar2;
  LocalizedStringResource LVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  Image IVar8;
  undefined7 extraout_var;
  Image IVar10;
  char *pcVar11;
  Text TVar12;
  long extraout_x8;
  long extraout_x8_00;
  Image IVar13;
  long lVar14;
  String local_60;
  long lVar9;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fa79f8;
  FUN_1000037f0(&DAT_100fa79f8,&DAT_100c25750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar13.unknown = LVar3.unknown + -extraout_x8_00;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar11 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar11 & 1) == 0) {
    pcVar11 = "Paste/GeneralSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xb7,UVar7.unknown,puVar6);
  }
  FUN_10020cf18();
  systemName = *(String *)pcVar11;
  _swift_bridgeObjectRetain(((String *)pcVar11)->bridgeObject);
  IVar8 = SwiftUI::Image::init(systemName);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Image_TemplateRenderingMode_original_SwiftUI_Image_TemplateRenderingMode_Type___>_SwiftUI_Image_TemplateRenderingMode_100eab768
  ;
  TVar2 = SwiftUI::Image::TemplateRenderingMode::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,TVar2.value);
  lVar14 = *(long *)(lVar9 + -8);
  (**(code **)(lVar14 + 0x68))(IVar13.unknown,uVar1,lVar9);
  (**(code **)(lVar14 + 0x38))(IVar13.unknown,0,1);
  IVar10 = SwiftUI::Image::_renderingMode(IVar13);
  _swift_release(IVar8.unknown);
  FUN_100005808(IVar13.unknown,&DAT_100fa79f8,&DAT_100c25750);
  FUN_1001d7654(LVar3.unknown);
  local_60 = (extension_Foundation)::Swift::String::init(LVar3);
  pcVar11 = local_60.str;
  FUN_100008378();
  puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar12 = SwiftUI::Text::_init();
  *param_1 = IVar10.unknown;
  param_1[1] = TVar12.unknown;
  param_1[2] = puVar4;
  *(char *)(param_1 + 3) = (char)pcVar11;
  param_1[4] = lVar9;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  _swift_retain(IVar10.unknown);
  FUN_100016d5c(TVar12.unknown,puVar4,pcVar11);
  _swift_bridgeObjectRetain(lVar9);
  FUN_100016d74(TVar12.unknown,puVar4,pcVar11);
  _swift_release(pMVar5);
  _swift_release(IVar10.unknown);
  _swift_bridgeObjectRelease(lVar9);
  return;
}



/* Address: 0x100060d50 | FUN_100060d50 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100060f80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100060d50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5)

{
  long lVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  State SVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *pvVar11;
  void *pvVar12;
  char *pcVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  long alStack_160 [8];
  MainActor *local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  String local_d0;
  undefined8 *local_c0;
  String local_78;
  
  local_e8 = param_1;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = (undefined *)((long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  local_108 = *(long *)(puVar3 + -8);
  local_100 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar17 = (long)LVar2.unknown - extraout_x8_00;
  puVar3 = &DAT_100fa93b8;
  FUN_1000037f0(&DAT_100fa93b8,&DAT_100c26338);
  local_f0 = *(long *)(puVar3 + -8);
  local_118 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  lVar14 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12;
  local_110 = lVar14;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  pcVar13 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar3);
  local_120 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    pcVar13 = &DAT_00000001;
    param_5 = (void *)0xc3;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xc3,UVar6.unknown,puVar5);
  }
  FUN_1001c1b08(LVar2.unknown);
  local_d0 = (extension_Foundation)::Swift::String::init(LVar2);
  pvVar11 = local_d0.bridgeObject;
  _swift_bridgeObjectRetain(pvVar11);
  SVar21.bridgeObject = (void *)0xe300000000000000;
  SVar21.str = (char *)0x2e2e2e;
  SVar22.bridgeObject = param_5;
  SVar22.str = pcVar13;
  Swift::String::append(SVar21,SVar22);
  _swift_bridgeObjectRelease(pvVar11);
  local_78 = local_d0;
  puVar3 = &DAT_100eb2318;
  _swift_allocObject(&DAT_100eb2318,0x60,7);
  uVar18 = param_2[4];
  uVar20 = param_2[7];
  uVar19 = param_2[6];
  *(undefined8 *)(puVar3 + 0x38) = param_2[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar18;
  *(undefined8 *)(puVar3 + 0x48) = uVar20;
  *(undefined8 *)(puVar3 + 0x40) = uVar19;
  uVar18 = param_2[8];
  *(undefined8 *)(puVar3 + 0x58) = param_2[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar18;
  uVar20 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  *(undefined8 *)(puVar3 + 0x18) = param_2[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar20;
  *(undefined8 *)(puVar3 + 0x28) = uVar19;
  *(undefined8 *)(puVar3 + 0x20) = uVar18;
  puVar5 = param_2;
  FUN_1000624b0(param_2,&local_d0);
  FUN_100008378();
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar17,puVar5,FUN_1000624a8,puVar3,PTR___type_metadata_for_Swift_String_100eac208,
             puVar5);
  FUN_1001bcd08(LVar2.unknown);
  local_78 = (extension_Foundation)::Swift::String::init(LVar2);
  pvVar12 = local_78.bridgeObject;
  uStack_d8 = param_2[3];
  local_e0 = param_2[2];
  SVar8.unknown = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::get_projectedValue(SVar8);
  pcVar13 = local_d0.str;
  pvVar11 = local_d0.bridgeObject;
  uVar16 = (ulong)local_c0 & 0xff;
  puVar3 = &DAT_100fa6e70;
  local_c0 = param_2;
  FUN_1000037f0(&DAT_100fa6e70,&DAT_100c239a0);
  puVar9 = &DAT_100fa6e78;
  FUN_100016eac(&DAT_100fa6e78,&DAT_100fa6e58,&DAT_100c26330,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar10 = &DAT_100fa6e80;
  FUN_100016eac(&DAT_100fa6e80,&DAT_100fa6e70,&DAT_100c239a0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  *(undefined **)(lVar14 + -0x10) = puVar10;
  *(undefined **)(lVar14 + -8) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  *(undefined **)(lVar14 + -0x20) = puVar9;
  *(undefined8 **)(lVar14 + -0x18) = puVar5;
  *(undefined **)(lVar14 + -0x30) = puVar3;
  *(undefined **)(lVar14 + -0x28) = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  *(undefined **)(lVar14 + -0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar3 = local_100;
  *(undefined **)(lVar14 + -0x40) = local_100;
  lVar14 = local_110;
  (extension_SwiftUI)::SwiftUI::View::_alert
            (local_110,&local_78,pcVar13,pvVar11,uVar16,FUN_1000624e4,&local_d0,FUN_100061778,0);
  _swift_bridgeObjectRelease(pvVar12);
  _swift_release(pvVar11);
  _swift_release(pcVar13);
  (**(code **)(local_108 + 8))(lVar17,puVar3);
  lVar1 = local_f0;
  lVar17 = local_f8;
  puVar9 = local_118;
  pcVar15 = *(code **)(local_f0 + 0x10);
  (*pcVar15)(local_f8,lVar14,local_118);
  puVar5 = local_e8;
  *local_e8 = 0;
  *(undefined1 *)(local_e8 + 1) = 1;
  puVar3 = &DAT_100fa93c0;
  FUN_1000037f0(&DAT_100fa93c0,&DAT_100c26350);
  (*pcVar15)((long)puVar5 + (long)*(int *)(puVar3 + 0x30),lVar17,puVar9);
  pcVar15 = *(code **)(lVar1 + 8);
  (*pcVar15)(lVar14,puVar9);
  (*pcVar15)(lVar17,puVar9);
  _swift_release(local_120);
  return;
}



/* Address: 0x100061170 | FUN_100061170 */

void FUN_100061170(long param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  State SVar6;
  byte local_91;
  State local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
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
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xc6,UVar4.unknown,puVar3);
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = *(undefined8 *)(param_1 + 0x18);
  local_80 = *(undefined8 *)(param_1 + 0x10);
  local_48 = uStack_58;
  FUN_100011090(&local_48,&local_90,&DAT_100fa93c8,&DAT_100c26368);
  SVar6.unknown = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::get_wrappedValue(SVar6);
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  local_90.unknown = *(undefined **)(param_1 + 0x10);
  local_91 = (local_61 ^ 0xff) & 1;
  SwiftUI::State::set_wrappedValue(&local_90,&local_91,SVar6.unknown);
  FUN_100005808(&local_60,&DAT_100fa6e68,&DAT_100c26340);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000612bc | FUN_1000612bc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000614e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000612bc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined *puVar10;
  ButtonRole BVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  MainActor *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  String local_c0 [5];
  String local_70;
  
  puVar4 = &DAT_100fa6e90;
  local_c8 = param_1;
  FUN_1000037f0(&DAT_100fa6e90,&DAT_100c239b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&local_e0 - extraout_x8;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  LVar5.unknown = (undefined *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  local_d8 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  lVar12 = (long)LVar5.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar15 - extraout_x12_01;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_e0 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xcc,UVar8.unknown,puVar7);
  }
  FUN_1001c1988(LVar5.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar5);
  puVar10 = &DAT_100eb2340;
  _swift_allocObject(&DAT_100eb2340,0x60,7);
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  *(undefined8 *)(puVar10 + 0x38) = param_2[5];
  *(undefined8 *)(puVar10 + 0x30) = uVar17;
  *(undefined8 *)(puVar10 + 0x48) = uVar19;
  *(undefined8 *)(puVar10 + 0x40) = uVar18;
  uVar17 = param_2[8];
  *(undefined8 *)(puVar10 + 0x58) = param_2[9];
  *(undefined8 *)(puVar10 + 0x50) = uVar17;
  uVar19 = *param_2;
  uVar18 = param_2[3];
  uVar17 = param_2[2];
  *(undefined8 *)(puVar10 + 0x18) = param_2[1];
  *(undefined8 *)(puVar10 + 0x10) = uVar19;
  *(undefined8 *)(puVar10 + 0x28) = uVar18;
  *(undefined8 *)(puVar10 + 0x20) = uVar17;
  FUN_1000624b0(param_2,local_c0);
  FUN_100008378();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar16,param_2,FUN_1000624ec,puVar10,PTR___type_metadata_for_Swift_String_100eac208,
             param_2);
  FUN_1001c0788(LVar5.unknown);
  local_c0[0] = (extension_Foundation)::Swift::String::init(LVar5);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)local_c0[0].str);
  BVar11 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar11.unknown + -8) + 0x38))(lVar14,0,1,BVar11.unknown);
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar15,BVar11.unknown,lVar14,FUN_1000616e0,0,puVar1,param_2);
  lVar14 = local_d8;
  pcVar13 = *(code **)(local_d8 + 0x10);
  (*pcVar13)(lVar12,lVar16,puVar4);
  lVar2 = local_d0;
  (*pcVar13)(local_d0,lVar15,puVar4);
  lVar3 = local_c8;
  (*pcVar13)(local_c8,lVar12,puVar4);
  puVar10 = &DAT_100fa6e98;
  FUN_1000037f0(&DAT_100fa6e98,&DAT_100c26360);
  (*pcVar13)(lVar3 + *(int *)(puVar10 + 0x30),lVar2,puVar4);
  pcVar13 = *(code **)(lVar14 + 8);
  (*pcVar13)(lVar15,puVar4);
  (*pcVar13)(lVar16,puVar4);
  (*pcVar13)(lVar2,puVar4);
  (*pcVar13)(lVar12,puVar4);
  _swift_release(local_e0);
  return;
}



/* Address: 0x100061614 | FUN_100061614 */

/* WARNING: Removing unreachable block (ram,0x0001000616c0) */

void FUN_100061614(void)

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
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xcd,UVar4.unknown,puVar3);
  }
  FUN_100357d14(FUN_1000ad648,0,PTR___type_metadata_for____100eae0c8 + 8);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000616e0 | FUN_1000616e0 */

void FUN_1000616e0(void)

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
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xd0,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100061778 | FUN_100061778 */

void FUN_100061778(undefined8 *param_1)

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
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0xd2;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xd2,UVar4.unknown,puVar3);
  }
  FUN_1001bcb88(LVar1.unknown);
  local_50 = (extension_Foundation)::Swift::String::init(LVar1);
  uVar8 = local_50.str._0_1_;
  FUN_100008378();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _swift_release(pMVar2);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = in_x3;
  return;
}



/* Address: 0x1000618a4 | FUN_1000618a4 */

void FUN_1000618a4(undefined8 *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  undefined1 auStack_260 [96];
  undefined7 uStack_200;
  undefined1 local_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined7 uStack_1f0;
  undefined8 local_1b9;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined8 local_170;
  undefined *local_160;
  undefined8 uStack_158;
  undefined *local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined7 local_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 local_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_58;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/GeneralSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xdc,UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_100061a8c(&local_b0);
  uStack_188 = uStack_88;
  uStack_187 = uStack_87;
  local_190 = local_90;
  uStack_18f = uStack_8f;
  uStack_178 = uStack_78;
  uStack_177 = uStack_77;
  uStack_180 = uStack_80;
  uStack_17f = local_7f;
  local_170 = CONCAT71(uStack_6f,uStack_70);
  uStack_198 = uStack_98;
  uStack_197 = uStack_97;
  uStack_1a0 = local_a0;
  uStack_19f = uStack_9f;
  uStack_1a8 = uStack_a8;
  local_1b0 = local_b0;
  uStack_158 = uStack_a8;
  local_160 = local_b0;
  FUN_100011090(&local_1b0,&local_110,&DAT_100fa9600,&DAT_100c26860);
  FUN_100005808(&local_160,&DAT_100fa9600,&DAT_100c26860);
  uStack_1f1 = (undefined1)uStack_1a8;
  uStack_1f0 = (undefined7)((ulong)uStack_1a8 >> 8);
  local_1f9 = SUB81(local_1b0,0);
  uStack_1f8 = (undefined7)((ulong)local_1b0 >> 8);
  local_1b9 = local_170;
  uStack_f7 = uStack_1f8;
  uStack_f0 = uStack_1f1;
  local_ff = uStack_200;
  uStack_f8 = local_1f9;
  uStack_b8 = local_170;
  uStack_bf = uStack_177;
  uStack_c7 = uStack_17f;
  local_c0 = uStack_178;
  uStack_cf = uStack_187;
  uStack_c8 = uStack_180;
  uStack_d7 = uStack_18f;
  uStack_d0 = uStack_188;
  local_df = uStack_197;
  uStack_d8 = local_190;
  uStack_e7 = uStack_19f;
  uStack_e0 = uStack_198;
  local_ef = uStack_1f0;
  uStack_e8 = uStack_1a0;
  uStack_108 = 0x4010000000000000;
  local_100 = 0;
  uStack_a8 = 0x4010000000000000;
  local_a0 = 0;
  uStack_97 = uStack_1f8;
  local_90 = uStack_1f1;
  uStack_98 = local_1f9;
  uStack_58 = local_170;
  uStack_8f = uStack_1f0;
  local_110 = VVar6.unknown;
  local_b0 = VVar6.unknown;
  FUN_100011090(&local_110,auStack_260,&DAT_100fa95a0,&DAT_100c26750);
  FUN_100005808(&local_b0,&DAT_100fa95a0,&DAT_100c26750);
  _swift_release(pMVar2);
  param_1[5] = CONCAT71(uStack_e7,uStack_e8);
  param_1[4] = CONCAT71(local_ef,uStack_f0);
  param_1[7] = CONCAT71(uStack_d7,uStack_d8);
  param_1[6] = CONCAT71(local_df,uStack_e0);
  param_1[9] = CONCAT71(uStack_c7,uStack_c8);
  param_1[8] = CONCAT71(uStack_cf,uStack_d0);
  param_1[0xb] = uStack_b8;
  param_1[10] = CONCAT71(uStack_bf,local_c0);
  param_1[1] = uStack_108;
  *param_1 = local_110;
  param_1[3] = CONCAT71(uStack_f7,uStack_f8);
  param_1[2] = CONCAT71(local_ff,local_100);
  return;
}



/* Address: 0x100061a8c | FUN_100061a8c */

void FUN_100061a8c(undefined8 *param_1)

{
  String systemName;
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  String *pSVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  Color CVar10;
  Text TVar11;
  String *pSVar12;
  Image IVar13;
  Color CVar14;
  undefined *puVar15;
  Text TVar16;
  undefined *puVar17;
  undefined *puVar18;
  Color in_x3;
  undefined *puVar19;
  long extraout_x8;
  undefined1 auStack_80 [8];
  MainActor *local_78;
  String local_70;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar15,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_78 = pMVar2;
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3.unknown = (undefined *)0xdd;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsView.swift",0x1f,1,0xdd,UVar4.unknown,puVar3);
  }
  FUN_1001e3dd4(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_70 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pSVar6 = (String *)local_70.str;
  FUN_100008378();
  puVar15 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar7 = SwiftUI::Text::_init();
  FVar8 = SwiftUI::Font::get_callout(TVar7.unknown);
  TVar16 = TVar7;
  puVar17 = puVar15;
  pSVar12 = pSVar6;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100016d74(TVar7.unknown,puVar15,pSVar6);
  _swift_bridgeObjectRelease();
  CVar10 = SwiftUI::Color::get_secondary(in_x3);
  TVar7 = TVar9;
  puVar18 = TVar16.unknown;
  puVar19 = puVar17;
  TVar11 = SwiftUI::Text::_foregroundColor(CVar10.unknown);
  _swift_release(CVar10.unknown);
  FUN_100016d74(TVar9.unknown,TVar16.unknown,puVar17);
  _swift_bridgeObjectRelease();
  FUN_10020d770();
  systemName = *pSVar12;
  _swift_bridgeObjectRetain(pSVar12->bridgeObject);
  IVar13 = SwiftUI::Image::init(systemName);
  FVar8 = SwiftUI::Font::get_callout(IVar13.unknown);
  CVar10.unknown = &DAT_100c262b0;
  _swift_getKeyPath();
  CVar14 = SwiftUI::Color::get_blue(CVar10);
  puVar15 = &DAT_100c262e8;
  _swift_getKeyPath();
  *param_1 = TVar11.unknown;
  param_1[1] = TVar7.unknown;
  *(char *)(param_1 + 2) = (char)puVar18;
  param_1[3] = puVar19;
  param_1[4] = IVar13.unknown;
  param_1[5] = CVar10.unknown;
  param_1[6] = FVar8.unknown;
  param_1[7] = puVar15;
  param_1[8] = CVar14.unknown;
  FUN_100016d5c(TVar11.unknown,TVar7.unknown,puVar18);
  _swift_bridgeObjectRetain(puVar19);
  FUN_100016d74(TVar11.unknown,TVar7.unknown,puVar18);
  _swift_release(local_78);
  _swift_bridgeObjectRelease(puVar19);
  return;
}



/* Address: 0x100061ce8 | FUN_100061ce8 */

void FUN_100061ce8(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
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
  
  uStack_48 = unaff_x20[5];
  local_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  uStack_28 = unaff_x20[9];
  local_30 = unaff_x20[8];
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0x4034000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_100fa9318;
  FUN_1000037f0(&DAT_100fa9318,&DAT_100c26238);
  FUN_10005b31c((long)param_1 + (long)*(int *)(puVar2 + 0x2c),&local_70);
  return;
}



/* Address: 0x100061d58 | FUN_100061d58 */

void FUN_100061d58(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2);
  _swift_release(uVar2);
  return;
}



/* Address: 0x100061d94 | FUN_100061d94 */

void FUN_100061d94(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100061da8 | FUN_100061da8 */

void FUN_100061da8(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x100061dc4 | FUN_100061dc4 */

void FUN_100061dc4(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100061dd8 | FUN_100061dd8 */

void FUN_100061dd8(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x100061df4 | FUN_100061df4 */

void FUN_100061df4(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_41;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  local_41 = uVar1;
  _swift_retain(uVar2);
  (*param_7)(&local_41,uVar2,param_5,param_6);
  return;
}



/* Address: 0x100061e6c | FUN_100061e6c */

void FUN_100061e6c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c26760;
  _swift_getKeyPath(&DAT_100c26760);
  puVar2 = &DAT_100c26788;
  _swift_getKeyPath(&DAT_100c26788);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100061ed4 | FUN_100061ed4 */

void FUN_100061ed4(Published *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  
  lVar1 = 0;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar4 = *param_2;
  puVar2 = &DAT_100c26760;
  _swift_getKeyPath(&DAT_100c26760);
  puVar3 = &DAT_100c26788;
  _swift_getKeyPath(&DAT_100c26788);
  FUN_10006313c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_retain(uVar4);
  Combine::Published::_set_subscript
            (param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar4,
             puVar2,puVar3);
  return;
}



/* Address: 0x100061f88 | FUN_100061f88 */

void FUN_100061f88(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_controlSize(param_1);
  return;
}



/* Address: 0x100061fa8 | FUN_100061fa8 */

void FUN_100061fa8(undefined8 param_1,EnvironmentValues *param_2)

{
  ControlSize CVar1;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x12;
  
  CVar1 = SwiftUI::ControlSize::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(*(long *)(CONCAT71(extraout_var,CVar1.value) + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  SwiftUI::EnvironmentValues::set_controlSize
            (param_2,(ControlSize)
                     (__int8)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
            );
  return;
}



/* Address: 0x100062024 | FUN_100062024 */

void FUN_100062024(undefined8 param_1,EnvironmentValues param_2)

{
  bool bVar1;
  
  bVar1 = SwiftUI::EnvironmentValues::get_isEnabled(param_2);
  *(bool *)param_1 = bVar1;
  return;
}



/* Address: 0x100062050 | FUN_100062050 */

void FUN_100062050(undefined8 param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_isEnabled(param_2,*(bool *)param_1);
  return;
}



/* Address: 0x100062074 | FUN_100062074 */

void FUN_100062074(byte *param_1,byte param_2)

{
  *param_1 = *param_1 & (param_2 ^ 0xff) & 1;
  return;
}



/* Address: 0x100062088 | FUN_100062088 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000620fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100062088(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ObservedObject<undefined> OVar5;
  State<undefined> SVar6;
  undefined8 uVar7;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  uVar7 = *param_2;
  FUN_100003a00(&DAT_100fa9310,FUN_1000ad91c,&TargetProtocolConformanceDescriptor_100c29498);
  OVar5 = SwiftUI::ObservedObject::init();
  SwiftUI::State::init(&local_70,OVar5.unknown,PTR___type_metadata_for_Swift_Bool_100eac570);
  uVar3 = local_68;
  uVar1 = local_70;
  SVar6 = SwiftUI::State::init(&local_70);
  uVar4 = local_68;
  uVar2 = local_70;
  FUN_1003ca9e0();
  SwiftUI::State::init(&local_70,SVar6.unknown,&DAT_100ecf3f0);
  *param_1 = OVar5.unknown;
  param_1[1] = uVar7;
  *(undefined1 *)(param_1 + 2) = uVar1;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = uVar2;
  param_1[5] = uVar4;
  param_1[6] = CONCAT71(uStack_6f,local_70);
  param_1[7] = local_68;
  *(undefined1 *)(param_1 + 8) = local_60;
  param_1[9] = local_58;
  return;
}



/* Address: 0x100062190 | FUN_100062190 */

void FUN_100062190(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_release(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Address: 0x1000621d0 | FUN_1000621d0 */

undefined8 * FUN_1000621d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  uVar3 = param_2[7];
  param_1[7] = uVar3;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar4 = param_2[9];
  param_1[9] = uVar4;
  _swift_retain();
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x100062264 | FUN_100062264 */

undefined8 * FUN_100062264(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_retain();
  _swift_release(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}


