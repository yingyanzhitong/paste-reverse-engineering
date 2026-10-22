/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100210608 | FUN_100210608 */

void FUN_100210608(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
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
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb6e68 = puVar3;
  return;
}



/* Address: 0x100210680 | FUN_100210680 */

void FUN_100210680(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb6e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb6e78;
  FUN_100005c24(&DAT_100fb6e78,&DAT_100c36608);
  puVar2 = PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100eaa5d8;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100eaa5d8,puVar1);
  DAT_100fb6e70 = puVar2;
  return;
}



/* Address: 0x1002106d0 | FUN_1002106d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002106d0(undefined8 param_1)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar3 = &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___boldButton;
  FUN_100210898(0x646c6f62,&_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___boldButton,
                0x62,FUN_1001bf288,FUN_100211bec);
  bVar2 = 0;
  FUN_100208290(0,param_1);
  lVar1 = _TtC7PasteUI13ToolbarButton::isSelected;
  _swift_beginAccess((long)puVar3 + _TtC7PasteUI13ToolbarButton::isSelected,auStack_58,1,0);
  *(byte *)((long)puVar3 + lVar1) = bVar2 & 1;
  FUN_10023d784();
  puVar3 = &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___italicButton;
  FUN_100210898(0x63696c617469,
                &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___italicButton,0x69,
                FUN_1001bf408,FUN_100211bd0);
  bVar2 = 1;
  FUN_100208290(1,param_1);
  lVar1 = _TtC7PasteUI13ToolbarButton::isSelected;
  _swift_beginAccess((long)puVar3 + _TtC7PasteUI13ToolbarButton::isSelected,auStack_70,1,0);
  *(byte *)((long)puVar3 + lVar1) = bVar2 & 1;
  FUN_10023d784();
  puVar3 = &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___underlineButton;
  FUN_100210898(0x6e696c7265646e75,
                &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___underlineButton,0x75,
                FUN_1001bf708,FUN_100211bb4);
  bVar2 = 0;
  FUN_100208290(2,param_1);
  lVar1 = _TtC7PasteUI13ToolbarButton::isSelected;
  _swift_beginAccess((long)puVar3 + _TtC7PasteUI13ToolbarButton::isSelected,auStack_88,1,0);
  *(byte *)((long)puVar3 + lVar1) = bVar2 & 1;
  FUN_10023d784();
  lVar4 = 0;
  FUN_100210ed0();
  bVar2 = 3;
  FUN_100208290(3,param_1);
  lVar1 = _TtC7PasteUI13ToolbarButton::isSelected;
  _swift_beginAccess(lVar4 + _TtC7PasteUI13ToolbarButton::isSelected,auStack_a0,1,0);
  *(byte *)(lVar4 + lVar1) = bVar2 & 1;
  FUN_10023d784();
  return 0;
}



/* Address: 0x100210898 | FUN_100210898 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100210898(undefined8 param_1,long *param_2,char *param_3,code *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  LocalizedStringResource LVar3;
  undefined *puVar4;
  class_t *pcVar5;
  class_t *pcVar6;
  long lVar7;
  ID IVar8;
  undefined *self;
  undefined8 uVar9;
  NSString *pNVar10;
  _ArrayBuffer _Var11;
  ID self_00;
  MainActor *pMVar12;
  MainActor *pMVar13;
  UnownedSerialExecutor UVar14;
  UnownedSerialExecutor UVar15;
  NSArray *pNVar16;
  void *pvVar17;
  char *pcVar18;
  void *pvVar19;
  long extraout_x8;
  long unaff_x20;
  long lVar20;
  undefined8 in_register_00005008;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined1 auStack_110 [8];
  char *local_108;
  long local_100;
  objc_super local_a0;
  objc_super local_90;
  undefined1 auStack_80 [32];
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  local_100 = *param_2;
  if (*(ID *)(unaff_x20 + local_100) != 0) {
    return *(ID *)(unaff_x20 + local_100);
  }
  lVar20 = 0x2e6e6f7276656863;
  FUN_1001e94d4(param_3,0xe100000000000000);
  (*param_4)(auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar21 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  local_108 = SVar21.str;
  puVar4 = &DAT_100ec1ad0;
  _swift_allocObject(&DAT_100ec1ad0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  pcVar5 = (class_t *)0x0;
  FUN_100240298();
  pcVar6 = pcVar5;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::symbol);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::hasPullDownArrow) = 0;
  *(undefined1 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::isPrimary) = 0;
  *(undefined1 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::isSelected) = 0;
  *(undefined1 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::isHovered) = 0;
  *(undefined1 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::isPressed) = 0;
  *(undefined8 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView) = 0;
  *(undefined8 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel) =
       0;
  FUN_10000ec2c(0,&DAT_100fb5d30,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  _swift_retain(puVar4);
  lVar7 = lVar20;
  FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
  if (lVar7 == 0) {
    lVar20 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100210ed0);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100210a70);
      (*pcVar2)();
    }
  }
  lVar7 = _TtC7PasteUI13ToolbarButton::pullDownArrowView;
  IVar8 = NSImageView::imageViewWithImage_((ID)&_OBJC_CLASS___NSImageView,lVar20);
  if (DAT_100fb63e0 != -1) {
    _swift_once(&DAT_100fb63e0,FUN_1001feab8);
  }
  FUN_1000f65ec(DAT_1010577c8);
  *(ID *)((long)&pcVar6->isa + lVar7) = IVar8;
  lVar7 = _TtC7PasteUI13ToolbarButton::stackView;
  self = &_OBJC_CLASS___NSStackView;
  _objc_allocWithZone();
  IVar8 = objc_stub::init((ID)self);
  FUN_1000f668c(0);
  objc_stub::setSpacing_(IVar8,0x4010000000000000);
  objc_stub::setDistribution_(IVar8,2);
  objc_stub::setAlignment_(IVar8,10);
  *(ID *)((long)&pcVar6->isa + lVar7) = IVar8;
  *(undefined8 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::trackingArea) = 0;
  pvVar19 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_80,1);
  uVar9 = puVar1[1];
  puVar1[1] = in_register_00005008;
  *puVar1 = param_1;
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::buttonAction);
  *puVar1 = param_5;
  puVar1[1] = puVar4;
  *(undefined1 *)((long)&pcVar6->isa + _TtC7PasteUI13ToolbarButton::size) = 0;
  local_90.receiver = (ID)pcVar6;
  local_90.super_class = pcVar5;
  _swift_retain(puVar4);
  IVar8 = _objc_msgSendSuper2(&local_90,"initWithFrame:",0,0,0,0);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_a0.receiver = IVar8;
  local_a0.super_class = pcVar5;
  _objc_msgSendSuper2(&local_a0,"setTitle:",pNVar10);
  FUN_10023ce40(0);
  objc_stub::setTransparent_(IVar8,1);
  objc_stub::setWantsLayer_(IVar8,1);
  objc_stub::setTarget_(IVar8,IVar8);
  objc_stub::setAction_(IVar8,"performAction");
  _Var11.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(_Var11.unknown + 0x18) = 3;
  *(undefined8 *)(_Var11.unknown + 0x10) = 1;
  self_00 = *(ID *)(IVar8 + _TtC7PasteUI13ToolbarButton::stackView);
  *(ID *)(_Var11.unknown + 0x20) = self_00;
  if (((ulong)_Var11.unknown & 0xc000000000000001) != 0) {
    self_00 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var11);
  }
  pMVar12 = Swift::MainActor::typeMetadataAccessor();
  pMVar13 = Swift::MainActor::get_shared(pMVar12,pMVar12);
  pMVar12 = pMVar13;
  FUN_1001f7290();
  UVar14 = Swift::Actor::get_unownedExecutor();
  UVar15 = UVar14;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar15.unknown & 1) == 0) {
    pvVar19 = (void *)0x15;
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar14.unknown,pMVar12);
  }
  objc_stub::addSubview_(IVar8,self_00);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(self_00,0);
  _swift_release(pMVar13);
  uVar9 = 0;
  FUN_10023e080(0,IVar8);
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  pNVar16 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar16);
  _swift_bridgeObjectRelease(uVar9);
  _swift_setDeallocating(_Var11.unknown);
  uVar9 = *(undefined8 *)(_Var11.unknown + 0x10);
  _swift_arrayDestroy(_Var11.unknown + 0x20,uVar9,
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  FUN_1001e8098(param_3);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar9);
  objc_stub::setKeyEquivalent_(IVar8,pNVar10);
  pcVar18 = (char *)0x100000;
  objc_stub::setKeyEquivalentModifierMask_(IVar8);
  SVar22.bridgeObject = &SUB_e200000000000000;
  SVar22.str = (char *)0x2820;
  SVar25.bridgeObject = pvVar19;
  SVar25.str = pcVar18;
  Swift::String::append(SVar22,SVar25);
  pvVar17 = (void *)0x100000;
  FUN_1001e9cc8();
  SVar23.bridgeObject = pvVar17;
  SVar23.str = param_3;
  SVar26.bridgeObject = pvVar19;
  SVar26.str = pcVar18;
  Swift::String::append(SVar23,SVar26);
  _swift_bridgeObjectRelease(pvVar17);
  SVar24.bridgeObject = (void *)0xe100000000000000;
  SVar24.str = (char *)0x29;
  SVar27.bridgeObject = pvVar19;
  SVar27.str = pcVar18;
  Swift::String::append(SVar24,SVar27);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  objc_stub::setToolTip_(IVar8,pNVar10);
  FUN_10023ce40(0);
  FUN_10023d784();
  _swift_release_n(puVar4,2);
  *(ID *)(unaff_x20 + local_100) = IVar8;
  return IVar8;
}



/* Address: 0x100210ed0 | FUN_100210ed0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100210ed0(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  code *pcVar5;
  LocalizedStringResource LVar6;
  undefined *puVar7;
  class_t *pcVar8;
  class_t *pcVar9;
  long lVar10;
  ID IVar11;
  undefined *self;
  NSString *pNVar12;
  _ArrayBuffer _Var13;
  ID self_00;
  MainActor *pMVar14;
  MainActor *pMVar15;
  UnownedSerialExecutor UVar16;
  UnownedSerialExecutor UVar17;
  undefined8 uVar18;
  NSArray *pNVar19;
  long extraout_x8;
  long unaff_x20;
  long lVar20;
  String SVar21;
  void *local_d0;
  objc_super local_98;
  objc_super local_88;
  undefined1 auStack_78 [24];
  
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  lVar3 = _TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___strikethroughButton;
  LVar6.unknown = (undefined *)((long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (*(ID *)(unaff_x20 +
             _TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___strikethroughButton) != 0) {
    return *(ID *)(unaff_x20 +
                  _TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___strikethroughButton);
  }
  lVar20 = 0x2e6e6f7276656863;
  FUN_1001bf588(LVar6.unknown);
  SVar21 = (extension_Foundation)::Swift::String::init(LVar6);
  puVar7 = &DAT_100ec1ad0;
  _swift_allocObject(&DAT_100ec1ad0,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  pcVar8 = (class_t *)0x0;
  FUN_100240298();
  pcVar9 = pcVar8;
  _objc_allocWithZone();
  pcVar1 = (char *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::symbol);
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  pcVar1[8] = '\0';
  pcVar1[9] = '\0';
  pcVar1[10] = '\0';
  pcVar1[0xb] = '\0';
  pcVar1[0xc] = '\0';
  pcVar1[0xd] = '\0';
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = '\0';
  *(undefined1 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::hasPullDownArrow) = 0;
  *(undefined1 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::isPrimary) = 0;
  *(undefined1 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::isSelected) = 0;
  *(undefined1 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::isHovered) = 0;
  *(undefined1 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::isPressed) = 0;
  *(undefined8 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView) = 0;
  *(undefined8 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel) =
       0;
  FUN_10000ec2c(0,&DAT_100fb5d30,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  _swift_retain(puVar7);
  lVar10 = lVar20;
  FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
  if (lVar10 == 0) {
    lVar20 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100211480);
      (*pcVar5)();
    }
  }
  else {
    FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100211084);
      (*pcVar5)();
    }
  }
  lVar10 = _TtC7PasteUI13ToolbarButton::pullDownArrowView;
  IVar11 = NSImageView::imageViewWithImage_((ID)&_OBJC_CLASS___NSImageView,lVar20);
  if (DAT_100fb63e0 != -1) {
    _swift_once(&DAT_100fb63e0,FUN_1001feab8);
  }
  local_d0 = SVar21.bridgeObject;
  FUN_1000f65ec(DAT_1010577c8);
  *(ID *)((long)&pcVar9->isa + lVar10) = IVar11;
  lVar10 = _TtC7PasteUI13ToolbarButton::stackView;
  self = &_OBJC_CLASS___NSStackView;
  _objc_allocWithZone();
  IVar11 = objc_stub::init((ID)self);
  FUN_1000f668c(0);
  objc_stub::setSpacing_(IVar11,0x4010000000000000);
  objc_stub::setDistribution_(IVar11,2);
  objc_stub::setAlignment_(IVar11,10);
  *(ID *)((long)&pcVar9->isa + lVar10) = IVar11;
  *(undefined8 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::trackingArea) = 0;
  _swift_beginAccess(pcVar1,auStack_78,1,0);
  builtin_strncpy(pcVar1,"strikethrough",0xe);
  pcVar1[0xe] = '\0';
  pcVar1[0xf] = -0x13;
  _swift_bridgeObjectRelease(*(undefined8 *)(pcVar1 + 8));
  puVar2 = (undefined8 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::buttonAction);
  *puVar2 = FUN_100211b98;
  puVar2[1] = puVar7;
  *(undefined1 *)((long)&pcVar9->isa + _TtC7PasteUI13ToolbarButton::size) = 0;
  local_88.receiver = (ID)pcVar9;
  local_88.super_class = pcVar8;
  _swift_retain(puVar7);
  IVar11 = _objc_msgSendSuper2(&local_88,"initWithFrame:",0,0,0,0);
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_98.receiver = IVar11;
  local_98.super_class = pcVar8;
  _objc_msgSendSuper2(&local_98,"setTitle:",pNVar12);
  FUN_10023ce40(0);
  objc_stub::setTransparent_(IVar11,1);
  objc_stub::setWantsLayer_(IVar11,1);
  objc_stub::setTarget_(IVar11,IVar11);
  objc_stub::setAction_(IVar11,"performAction");
  _Var13.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(_Var13.unknown + 0x18) = 3;
  *(undefined8 *)(_Var13.unknown + 0x10) = 1;
  self_00 = *(ID *)(IVar11 + _TtC7PasteUI13ToolbarButton::stackView);
  *(ID *)(_Var13.unknown + 0x20) = self_00;
  if (((ulong)_Var13.unknown & 0xc000000000000001) != 0) {
    self_00 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var13);
  }
  pMVar14 = Swift::MainActor::typeMetadataAccessor();
  pMVar15 = Swift::MainActor::get_shared(pMVar14,pMVar14);
  pMVar14 = pMVar15;
  FUN_1001f7290();
  UVar16 = Swift::Actor::get_unownedExecutor();
  UVar17 = UVar16;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar17.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar16.unknown,pMVar14);
  }
  objc_stub::addSubview_(IVar11,self_00);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(self_00,0);
  _swift_release(pMVar15);
  uVar18 = 0;
  FUN_10023e080(0,IVar11);
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  pNVar19 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar19);
  _swift_bridgeObjectRelease(uVar18);
  _swift_setDeallocating(_Var13.unknown);
  _swift_arrayDestroy(_Var13.unknown + 0x20,*(undefined8 *)(_Var13.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  pvVar4 = local_d0;
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pvVar4);
  objc_stub::setToolTip_(IVar11,pNVar12);
  FUN_10023ce40(0);
  FUN_10023d784();
  _swift_release_n(puVar7,2);
  *(ID *)(unaff_x20 + lVar3) = IVar11;
  return IVar11;
}



/* Address: 0x100211480 | FUN_100211480 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_100211480(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return (code *)0x0;
  }
  pcVar2 = *(code **)(param_1 + _TtCC7PasteUI10TextEditor11EditButtons::onToggleTrait);
  if (pcVar2 != (code *)0x0) {
    uVar1 = ((undefined8 *)(param_1 + _TtCC7PasteUI10TextEditor11EditButtons::onToggleTrait))[1];
    FUN_100011128(pcVar2,uVar1);
    (*pcVar2)(param_2);
    FUN_100004550(pcVar2,uVar1);
    return pcVar2;
  }
  return (code *)0x0;
}



/* Address: 0x100211510 | FUN_100211510 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100211510(void)

{
  ID self;
  _ArrayBuffer _Var1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  ID IVar10;
  NSArray *pNVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  _swift_getObjectType();
  puVar4 = (undefined8 *)(unaff_x20 + _TtCC7PasteUI10TextEditor11EditButtons::onToggleTrait);
  puVar3 = &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___boldButton;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___boldButton)
       = 0;
  puVar4 = &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___italicButton;
  *(undefined8 *)
   (unaff_x20 + _TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___italicButton) = 0;
  puVar5 = &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___underlineButton;
  *(undefined8 *)
   (unaff_x20 + _TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___underlineButton) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___strikethroughButton) = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",0,0,0,0);
  FUN_10000ec2c(0,&DAT_100fb6ed0,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  _Var1.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  puVar2 = _Var1.unknown;
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 9;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  FUN_100210898(0x646c6f62,&_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___boldButton,
                0x62,FUN_1001bf288,FUN_100211bec);
  *(undefined8 **)(puVar2 + 0x20) = puVar3;
  FUN_100210898(0x63696c617469,
                &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___italicButton,0x69,
                FUN_1001bf408,FUN_100211bd0);
  *(undefined8 **)(puVar2 + 0x28) = puVar4;
  FUN_100210898(0x6e696c7265646e75,
                &_TtCC7PasteUI10TextEditor11EditButtons::___lazy_storage___underlineButton,0x75,
                FUN_1001bf708,FUN_100211bb4);
  *(undefined8 **)(puVar2 + 0x30) = puVar5;
  FUN_100210ed0();
  *(undefined8 **)(puVar2 + 0x38) = puVar5;
  FUN_1000f66dc();
  _swift_initStackObject(_Var1.unknown,auStack_88);
  *(undefined8 *)(_Var1.unknown + 0x18) = 3;
  *(undefined8 *)(_Var1.unknown + 0x10) = 1;
  *(undefined **)(_Var1.unknown + 0x20) = puVar2;
  puVar12 = puVar2;
  if (((ulong)_Var1.unknown & 0xc000000000000001) != 0) {
    puVar12 = (undefined *)0x0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var1);
  }
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  pMVar6 = pMVar7;
  FUN_1001f7290();
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar8.unknown,pMVar6);
  }
  objc_stub::addSubview_(self,puVar12);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_((ID)puVar12,0);
  _swift_release(pMVar7);
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  IVar10 = self;
  FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768,self,puVar2);
  puVar2 = &DAT_100fb7ad0;
  FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar12 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar2 + 0x38) = puVar12;
  *(undefined ***)(puVar2 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar2 + 0x20) = IVar10;
  puVar12 = puVar2;
  thunk_FUN_1001f9238(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100004594(puVar2 + 0x20);
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar11);
  _swift_bridgeObjectRelease(puVar12);
  _swift_setDeallocating(_Var1.unknown);
  _swift_arrayDestroy(_Var1.unknown + 0x20,*(undefined8 *)(_Var1.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return self;
}



/* Address: 0x1002118cc | _TtCC7PasteUI10TextEditor11EditButtons::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC7PasteUI10TextEditor11EditButtons::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteUI/TextEditor.EditButtons.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.EditButtons.swift",0x24,1,0x49,UVar3.unknown,pMVar1);
  }
  FUN_100211510();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x100211964 | _TtCC7PasteUI10TextEditor11EditButtons::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC7PasteUI10TextEditor11EditButtons::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  String SVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.EditButtons.swift",0x24,1,0x55,UVar4.unknown,pMVar3);
  }
  puVar1 = (undefined8 *)(param_1 + onToggleTrait);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___boldButton) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___italicButton) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___underlineButton) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___strikethroughButton) = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9e690);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100211a60);
  (*pcVar2)();
}



/* Address: 0x100211a60 | _TtCC7PasteUI10TextEditor11EditButtons::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC7PasteUI10TextEditor11EditButtons::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.EditButtons.swift",0x24,1,0xd,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteUI.EditButtons",0x13,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100211ae8);
  (*pcVar1)();
}



/* Address: 0x100211ae8 | _TtCC7PasteUI10TextEditor11EditButtons::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC7PasteUI10TextEditor11EditButtons::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onToggleTrait),
                ((undefined8 *)(param_1 + onToggleTrait))[1]);
  return;
}



/* Address: 0x100211b54 | FUN_100211b54 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100211b54(void)

{
  return ZEXT816(0x100f961a8);
}



/* Address: 0x100211b74 | FUN_100211b74 */

void FUN_100211b74(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100211b98 | FUN_100211b98 */

void FUN_100211b98(void)

{
  FUN_100211480();
  return;
}



/* Address: 0x100211bb4 | FUN_100211bb4 */

void FUN_100211bb4(void)

{
  FUN_100211480();
  return;
}



/* Address: 0x100211bd0 | FUN_100211bd0 */

void FUN_100211bd0(void)

{
  FUN_100211480();
  return;
}



/* Address: 0x100211bec | FUN_100211bec */

void FUN_100211bec(void)

{
  FUN_100211480();
  return;
}



/* Address: 0x100211c08 | FUN_100211c08 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined *
FUN_100211c08(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ID param_5,
             ID param_6)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 9;
  *(undefined8 *)(puVar1 + 0x10) = 4;
  IVar2 = objc_stub::topAnchor(param_6);
  IVar3 = objc_stub::topAnchor(param_5);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,param_1,IVar3);
  *(ID *)(puVar1 + 0x20) = IVar2;
  IVar2 = objc_stub::leadingAnchor(param_6);
  IVar3 = objc_stub::leadingAnchor(param_5);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,param_2,IVar3);
  *(ID *)(puVar1 + 0x28) = IVar2;
  IVar2 = objc_stub::bottomAnchor(param_6);
  IVar3 = objc_stub::bottomAnchor(param_5);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,-param_3,IVar3);
  *(ID *)(puVar1 + 0x30) = IVar2;
  IVar2 = objc_stub::trailingAnchor(param_6);
  IVar3 = objc_stub::trailingAnchor(param_5);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,-param_4,IVar3);
  *(ID *)(puVar1 + 0x38) = IVar2;
  return puVar1;
}



/* Address: 0x100211dec | FUN_100211dec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100211dec(ID param_1)

{
  ID self;
  undefined8 uVar1;
  String SVar2;
  
  FUN_100212dfc();
  self = objc_stub::attributedText(param_1);
  objc_stub::string(self);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  uVar1 = 0;
  FUN_100212b8c(0);
  _objc_allocWithZone();
  FUN_100211e80(SVar2.str,SVar2.bridgeObject,uVar1);
  return;
}



/* Address: 0x100211e80 | FUN_100211e80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100211e80(char *param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  LocalizedStringResource localized;
  char *pcVar3;
  code *pcVar4;
  CharacterSet CVar5;
  LocalizedStringResource LVar6;
  __int64 _Var7;
  CharacterSet CVar8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  char *pcVar14;
  MainActor *pMVar15;
  NSString *pNVar16;
  ID IVar17;
  NSDictionary *pNVar18;
  ID IVar19;
  _ArrayBuffer _Var20;
  NSArray *pNVar21;
  undefined8 *puVar22;
  undefined *extraout_x1;
  ContiguousArray CVar23;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar24;
  undefined *puVar25;
  long extraout_x12;
  long extraout_x12_00;
  ContiguousArray oldCount;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  ulong *puVar30;
  CharacterSet separatedBy;
  undefined8 extraout_d0;
  undefined8 uVar31;
  String SVar32;
  ulong local_170;
  undefined *local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  void *local_140;
  ulong local_138;
  ID local_130;
  LocalizedStringResource local_128;
  char *local_120;
  char *local_118;
  char *local_e8;
  void *pvStack_e0;
  String local_b8;
  String local_a8;
  String local_98;
  
  _swift_getObjectType();
  CVar5 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar27 = *(long *)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  separatedBy.unknown = (undefined *)((long)&local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar6.unknown = separatedBy.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar25 = LVar6.unknown + -extraout_x12;
  local_128.unknown = puVar25;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_130 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"initWithFrame:",0,0,0,0);
  SVar32.bridgeObject = param_2;
  SVar32.str = param_1;
  local_118 = param_1;
  _Var7 = Swift::String::get_count(SVar32);
  if (_Var7 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100212790);
    (*pcVar4)();
  }
  if (0x7fffffff < _Var7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100212794);
    (*pcVar4)();
  }
  thunk_FUN_1001e6b38(puVar25 + -extraout_x12_00);
  local_b8 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)(puVar25 + -extraout_x12_00));
  local_138 = (ulong)local_118 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    local_138 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (local_138 == 0) {
    uVar26 = 0;
  }
  else {
    local_e8 = local_118;
    local_148 = LVar6.unknown;
    local_140 = param_2;
    pvStack_e0 = param_2;
    Foundation::CharacterSet::get_whitespaces((CharacterSet)local_b8.str);
    FUN_1002054c0();
    CVar8.unknown = separatedBy.unknown;
    (extension_Foundation)::Swift::StringProtocol::components(separatedBy);
    local_158 = lVar27;
    local_150 = CVar5.unknown;
    (**(code **)(lVar27 + 8))(separatedBy.unknown,CVar5.unknown);
    puVar25 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
    uVar26 = *(ulong *)(CVar8.unknown + 0x10);
    if (uVar26 == 0) {
      local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      uVar24 = 0;
      local_168 = CVar8.unknown + 0x28;
      local_170 = uVar26 - 1;
      local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
      local_160 = separatedBy.unknown;
      do {
        puVar30 = (ulong *)(local_168 + uVar24 * 0x10);
        uVar28 = uVar24;
        while( true ) {
          if (*(ulong *)(CVar8.unknown + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100212788);
            (*pcVar4)();
          }
          uVar1 = puVar30[-1];
          pMVar15 = (MainActor *)*puVar30;
          pMVar9 = Swift::MainActor::typeMetadataAccessor();
          pMVar10 = pMVar15;
          _swift_bridgeObjectRetain();
          pMVar10 = Swift::MainActor::get_shared(pMVar9,pMVar10);
          puVar11 = &DAT_100fb6f30;
          FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,puVar25);
          UVar12 = Swift::Actor::get_unownedExecutor();
          UVar13 = UVar12;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar13.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("PasteUI/TextEditor.TextMetaView.swift",0x25,1,0x15,UVar12.unknown,puVar11);
          }
          _swift_release(pMVar10);
          pcVar3 = local_120;
          uVar24 = uVar1 & 0xffffffffffff;
          if (((ulong)pMVar15 & 0x2000000000000000) != 0) {
            uVar24 = (ulong)pMVar15 >> 0x38 & 0xf;
          }
          if (uVar24 != 0) break;
          uVar28 = uVar28 + 1;
          _swift_bridgeObjectRelease(pMVar15);
          puVar30 = puVar30 + 2;
          separatedBy.unknown = local_160;
          if (uVar26 == uVar28) goto LAB_100212220;
        }
        pcVar14 = local_120;
        _swift_isUniquelyReferenced_nonNull_native();
        local_e8 = pcVar3;
        if (((ulong)pcVar14 & 1) == 0) {
          FUN_10022fee4(0,*(long *)(pcVar3 + 0x10) + 1,1);
        }
        separatedBy.unknown = local_160;
        uVar2 = *(ulong *)(local_e8 + 0x10);
        if (*(ulong *)(local_e8 + 0x18) >> 1 <= uVar2) {
          FUN_10022fee4(1 < *(ulong *)(local_e8 + 0x18),uVar2 + 1,1);
        }
        uVar24 = uVar28 + 1;
        *(ulong *)(local_e8 + 0x10) = uVar2 + 1;
        local_120 = local_e8;
        *(ulong *)(local_e8 + uVar2 * 0x10 + 0x20) = uVar1;
        *(MainActor **)(local_e8 + uVar2 * 0x10 + 0x28) = pMVar15;
      } while (local_170 != uVar28);
    }
LAB_100212220:
    _swift_bridgeObjectRelease(CVar8.unknown);
    uVar26 = *(ulong *)(local_120 + 0x10);
    _swift_release();
    param_2 = local_140;
    LVar6.unknown = local_148;
    CVar5.unknown = local_150;
    lVar27 = local_158;
    if (uVar26 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10021278c);
      (*pcVar4)();
    }
  }
  localized.unknown = local_128.unknown;
  thunk_FUN_1001e6b78(local_128.unknown,uVar26);
  local_a8 = (extension_Foundation)::Swift::String::init(localized);
  if (local_138 == 0) {
    _swift_bridgeObjectRelease(param_2);
    uVar26 = 0;
  }
  else {
    local_e8 = local_118;
    pvStack_e0 = param_2;
    Foundation::CharacterSet::get_newlines((CharacterSet)local_a8.str);
    FUN_1002054c0();
    CVar8.unknown = separatedBy.unknown;
    (extension_Foundation)::Swift::StringProtocol::components(separatedBy);
    (**(code **)(lVar27 + 8))(separatedBy.unknown,CVar5.unknown);
    _swift_bridgeObjectRelease(param_2);
    uVar26 = *(ulong *)(CVar8.unknown + 0x10);
    _swift_bridgeObjectRelease(CVar8.unknown);
    if (uVar26 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002122f0);
      (*pcVar4)();
    }
  }
  puVar25 = PTR___swiftEmptyArrayStorage_100eae0d8;
  thunk_FUN_1001e6b58(LVar6.unknown,uVar26);
  local_98 = (extension_Foundation)::Swift::String::init(LVar6);
  local_e8 = puVar25;
  Swift::ContiguousArray::_reserveCapacity(3,(ContiguousArray)local_98.bridgeObject);
  pMVar15 = Swift::MainActor::typeMetadataAccessor();
  local_118 = &_OBJC_CLASS___NSTextField;
  lVar27 = 0;
  uVar31 = *(undefined8 *)PTR__NSFontWeightRegular_100ea90b8;
  uVar29 = *(undefined8 *)PTR__NSFontTextStyleBody_100ea9050;
  do {
    pMVar10 = *(MainActor **)((long)&local_b8.bridgeObject + lVar27);
    pMVar9 = pMVar10;
    _swift_bridgeObjectRetain();
    pMVar9 = Swift::MainActor::get_shared(pMVar15,pMVar9);
    puVar11 = &DAT_100fb6f30;
    FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    puVar22 = puVar11;
    UVar12 = Swift::Actor::get_unownedExecutor();
    UVar13 = UVar12;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar13.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("PasteUI/TextEditor.TextMetaView.swift",0x25,1,0x19,UVar12.unknown,puVar22);
    }
    pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar17 = objc_stub::labelWithString_((ID)local_118,pNVar16);
    if (DAT_100fb63e8 != -1) {
      _swift_once(&DAT_100fb63e8,FUN_1001fec34);
    }
    objc_stub::setTextColor_(IVar17,DAT_1010577d0);
    puVar25 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1001f363c(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_1001f3e90(0);
    FUN_100003a00(&DAT_100fb5e88,FUN_1001f3e90,&TargetProtocolConformanceDescriptor_100c347e0);
    pNVar18 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar25);
    IVar19 = NSFont::preferredFontForTextStyle_options_((ID)&_OBJC_CLASS___NSFont,uVar29,pNVar18);
    NSFont::pointSize(IVar19);
    IVar19 = NSFont::monospacedDigitSystemFontOfSize_weight_
                       ((ID)&_OBJC_CLASS___NSFont,extraout_d0,uVar31);
    objc_stub::setFont_(IVar17,IVar19);
    CVar23.unknown = extraout_x1;
    _swift_release(pMVar9);
    _swift_bridgeObjectRelease(pMVar10);
    Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
    oldCount.unknown = *(undefined **)(local_e8 + 0x10);
    Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)oldCount.unknown,CVar23);
    Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,IVar17);
    Swift::ContiguousArray::__endMutation(oldCount);
    lVar27 = lVar27 + 0x10;
  } while (lVar27 != 0x30);
  _swift_arrayDestroy(&local_b8,3,PTR___type_metadata_for_Swift_String_100eac208);
  pcVar3 = local_e8;
  FUN_10000ec2c(0,&DAT_100fb6ed0,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  uVar29 = 0;
  FUN_10000ec2c(0,&DAT_100fb64d8,&PTR__OBJC_CLASS___NSView_100f8d628);
  pcVar4 = FUN_1002127a4;
  FUN_1001b79c0(FUN_1002127a4,0,pcVar3,uVar29);
  _swift_release(pcVar3);
  FUN_1000f66dc();
  objc_stub::setSpacing_((ID)pcVar4,0x4020000000000000);
  _Var20.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(_Var20.unknown + 0x18) = 3;
  *(undefined8 *)(_Var20.unknown + 0x10) = 1;
  *(code **)(_Var20.unknown + 0x20) = pcVar4;
  pMVar10 = (MainActor *)pcVar4;
  if (((ulong)_Var20.unknown & 0xc000000000000001) != 0) {
    pMVar10 = (MainActor *)0x0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var20);
  }
  pMVar15 = Swift::MainActor::get_shared(pMVar15,pMVar10);
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar12.unknown,puVar11);
  }
  IVar17 = local_130;
  objc_stub::addSubview_(local_130,pMVar10);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_((ID)pMVar10,0);
  _swift_release(pMVar15);
  FUN_100212840(pcVar4,IVar17);
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  pNVar21 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar21);
  _swift_bridgeObjectRelease(pcVar4);
  _swift_setDeallocating(_Var20.unknown);
  _swift_arrayDestroy(_Var20.unknown + 0x20,*(undefined8 *)(_Var20.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar17;
}



/* Address: 0x1002127a4 | FUN_1002127a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002127a4(ID *param_1)

{
  NSString *pNVar1;
  ID self;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar1);
  if (DAT_100fb6450 != -1) {
    _swift_once(&DAT_100fb6450,FUN_1001feda8);
  }
  NSTextField::setTextColor_(self,DAT_1010577d8);
  *param_1 = self;
  return;
}



/* Address: 0x100212840 | FUN_100212840 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100212840(ID param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  IVar1 = param_2;
  FUN_100212bac(0,param_2,param_1);
  IVar2 = objc_stub::leadingAnchor(param_1);
  IVar3 = objc_stub::leadingAnchor(param_2);
  IVar2 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
  IVar3 = objc_stub::trailingAnchor(param_1);
  IVar4 = objc_stub::trailingAnchor(param_2);
  IVar3 = objc_stub::constraintLessThanOrEqualToAnchor_(IVar3,IVar4);
  puVar5 = &DAT_100fb7ad0;
  FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  puVar6 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar5 + 0x20) = IVar1;
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar5 + 0x60) = uVar7;
  *(undefined ***)(puVar5 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar5 + 0x48) = IVar2;
  *(undefined8 *)(puVar5 + 0x88) = uVar7;
  *(undefined ***)(puVar5 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar5 + 0x70) = IVar3;
  _swift_bridgeObjectRetain(IVar1);
  puVar8 = puVar5;
  thunk_FUN_1001f9238(puVar5);
  _swift_bridgeObjectRelease(IVar1);
  _swift_setDeallocating(puVar5);
  puVar6 = &DAT_100fb6f00;
  FUN_1000037f0(&DAT_100fb6f00,&DAT_100c36de0);
  _swift_arrayDestroy(puVar5 + 0x20,3,puVar6);
  return puVar8;
}



/* Address: 0x100212a10 | _TtCC7PasteUI10TextEditorP33_CFF699152005706EAC1A8B8FF21BEC6212TextMetaView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC7PasteUI10TextEditorP33_CFF699152005706EAC1A8B8FF21BEC6212TextMetaView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

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
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.TextMetaView.swift",0x25,1,0x3c,UVar4.unknown,puVar3);
  }
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9e6e0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100212ae4);
  (*pcVar2)();
}



/* Address: 0x100212ae4 | _TtCC7PasteUI10TextEditorP33_CFF699152005706EAC1A8B8FF21BEC6212TextMetaView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC7PasteUI10TextEditorP33_CFF699152005706EAC1A8B8FF21BEC6212TextMetaView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

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
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.TextMetaView.swift",0x25,1,0xe,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteUI.TextMetaView",0x14,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100212b8c);
  (*pcVar2)();
}



/* Address: 0x100212b8c | FUN_100212b8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100212b8c(void)

{
  return ZEXT816(0x100f96280);
}



/* Address: 0x100212bac | FUN_100212bac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100212bac(double param_1,ID param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 5;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  IVar2 = objc_stub::topAnchor(param_3);
  IVar3 = objc_stub::topAnchor(param_2);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,param_1,IVar3);
  *(ID *)(puVar1 + 0x20) = IVar2;
  IVar2 = objc_stub::bottomAnchor(param_3);
  IVar3 = objc_stub::bottomAnchor(param_2);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,-param_1,IVar3);
  *(ID *)(puVar1 + 0x28) = IVar2;
  return puVar1;
}



/* Address: 0x100212ccc | FUN_100212ccc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100212ccc(ID param_1)

{
  ID IVar1;
  
  FUN_100212dfc();
  IVar1 = objc_stub::attributedText(param_1);
  return IVar1;
}



/* Address: 0x100212d08 | FUN_100212d08 */

undefined1  [16] FUN_100212d08(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC7PasteUI10TextEditor::onAttributedTextChange);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100212d60 | FUN_100212d60 */

void FUN_100212d60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::onAttributedTextChange);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x100212dbc | FUN_100212dbc */

undefined1  [16] FUN_100212dbc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PasteUI10TextEditor::onAttributedTextChange;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI10TextEditor::onAttributedTextChange,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100212dfc | FUN_100212dfc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100212dfc(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC7PasteUI10TextEditor::___lazy_storage___textView;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___textView);
  if (self == 0) {
    FUN_100215ea4();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    FUN_100213780();
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x100212e78 | FUN_100212e78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100212e78(void)

{
  FUN_100215cac();
  return 0;
}



/* Address: 0x100212e9c | FUN_100212e9c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100212e9c(ID *param_1)

{
  ID *self;
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  self = param_1;
  FUN_100212dfc();
  IVar1 = objc_stub::attributedText((ID)self);
  *param_1 = IVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100212ef4;
  return auVar2;
}



/* Address: 0x100212ef4 | FUN_100212ef4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100212ef4(ID *param_1,ulong param_2)

{
  ID self;
  ID IVar1;
  code *pcVar2;
  ID IVar3;
  Dictionary<undefined,undefined> DVar4;
  ID IVar5;
  NSDictionary *pNVar6;
  
  self = *param_1;
  IVar1 = param_1[1];
  if ((param_2 & 1) == 0) {
    FUN_100212dfc();
    IVar5 = objc_stub::length(self);
    if ((long)IVar5 < 1) {
      DVar4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1001f3760(PTR___swiftEmptyArrayStorage_100eae0d8);
    }
    else {
      IVar5 = objc_stub::length(self);
      if (SBORROW8(IVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100213188);
        (*pcVar2)();
      }
      objc_stub::attributesAtIndex_effectiveRange_(self,IVar5 - 1,0);
      FUN_1001f3e68(0);
      FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
      DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    }
    FUN_1001f3e68(0);
    FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
    pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(DVar4.unknown);
    objc_stub::setTypingAttributes_((ID)param_1,pNVar6);
    objc_stub::setAttributedText_
              (*(ID *)(IVar1 + _TtC7PasteUI10TextEditor::___lazy_storage___textView),self);
  }
  else {
    IVar5 = self;
    FUN_100212dfc();
    IVar3 = objc_stub::length(self);
    if ((long)IVar3 < 1) {
      DVar4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1001f3760(PTR___swiftEmptyArrayStorage_100eae0d8);
    }
    else {
      IVar3 = objc_stub::length(self);
      if (SBORROW8(IVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100213184);
        (*pcVar2)();
      }
      objc_stub::attributesAtIndex_effectiveRange_(self,IVar3 - 1,0);
      FUN_1001f3e68(0);
      FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
      DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    }
    FUN_1001f3e68(0);
    FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
    pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(DVar4.unknown);
    objc_stub::setTypingAttributes_(IVar5,pNVar6);
    objc_stub::setAttributedText_
              (*(ID *)(IVar1 + _TtC7PasteUI10TextEditor::___lazy_storage___textView),self);
  }
  return 0;
}



/* Address: 0x100213188 | FUN_100213188 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100213188(ID param_1)

{
  ID IVar1;
  
  FUN_100212dfc();
  IVar1 = objc_stub::isEditable(param_1);
  return IVar1;
}



/* Address: 0x1002131bc | FUN_1002131bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002131bc(ID param_1)

{
  ID self;
  
  self = param_1;
  FUN_100212dfc();
  objc_stub::setEditable_(self,(ulong)((uint)param_1 & 1));
  return 0;
}



/* Address: 0x1002131ec | FUN_1002131ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002131ec(undefined8 *param_1)

{
  undefined8 *self;
  ID IVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  self = param_1;
  FUN_100212dfc();
  IVar1 = objc_stub::isEditable((ID)self);
  *(char *)(param_1 + 1) = (char)IVar1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = FUN_10021323c;
  return auVar2;
}



/* Address: 0x10021323c | FUN_10021323c */

void FUN_10021323c(long *param_1)

{
  objc_stub::setEditable_
            (*(ID *)(*param_1 + _TtC7PasteUI10TextEditor::___lazy_storage___textView),
             (ulong)*(byte *)(param_1 + 1));
  return;
}



/* Address: 0x100213254 | FUN_100213254 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100213254(ID param_1)

{
  ID IVar1;
  
  FUN_100212dfc();
  IVar1 = objc_stub::font(param_1);
  return IVar1;
}



/* Address: 0x100213290 | FUN_100213290 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213290(ID param_1)

{
  ID self;
  
  self = param_1;
  FUN_100212dfc();
  objc_stub::setFont_(self,param_1);
  return 0;
}



/* Address: 0x1002132c8 | FUN_1002132c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002132c8(ID *param_1)

{
  ID *self;
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  self = param_1;
  FUN_100212dfc();
  IVar1 = objc_stub::font((ID)self);
  *param_1 = IVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100213320;
  return auVar2;
}



/* Address: 0x100213320 | FUN_100213320 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213320(undefined8 *param_1)

{
  objc_stub::setFont_(*(ID *)(param_1[1] + _TtC7PasteUI10TextEditor::___lazy_storage___textView),
                      *param_1);
  return 0;
}



/* Address: 0x100213354 | FUN_100213354 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100213354(ID param_1)

{
  ID IVar1;
  
  FUN_100212dfc();
  IVar1 = objc_stub::textColor(param_1);
  return IVar1;
}



/* Address: 0x100213390 | FUN_100213390 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213390(ID param_1)

{
  ID self;
  
  self = param_1;
  FUN_100212dfc();
  objc_stub::setTextColor_(self,param_1);
  return 0;
}



/* Address: 0x1002133c8 | FUN_1002133c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002133c8(ID *param_1)

{
  ID *self;
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  self = param_1;
  FUN_100212dfc();
  IVar1 = objc_stub::textColor((ID)self);
  *param_1 = IVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100213420;
  return auVar2;
}



/* Address: 0x100213420 | FUN_100213420 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213420(undefined8 *param_1)

{
  objc_stub::setTextColor_
            (*(ID *)(param_1[1] + _TtC7PasteUI10TextEditor::___lazy_storage___textView),*param_1);
  return 0;
}



/* Address: 0x100213454 | FUN_100213454 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213454(ID param_1)

{
  FUN_100212dfc();
  objc_stub::textContainerInset(param_1);
  return 0;
}



/* Address: 0x100213498 | FUN_100213498 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100213498(ID param_1)

{
  ID IVar1;
  
  FUN_100212dfc();
  IVar1 = objc_stub::backgroundColor(param_1);
  return IVar1;
}



/* Address: 0x1002134d4 | FUN_1002134d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002134d4(ID param_1)

{
  ID self;
  
  self = param_1;
  FUN_100212dfc();
  objc_stub::setBackgroundColor_(self,param_1);
  return 0;
}



/* Address: 0x10021350c | FUN_10021350c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10021350c(ID *param_1)

{
  ID *self;
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  self = param_1;
  FUN_100212dfc();
  IVar1 = objc_stub::backgroundColor((ID)self);
  *param_1 = IVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100213564;
  return auVar2;
}



/* Address: 0x100213564 | FUN_100213564 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213564(undefined8 *param_1)

{
  objc_stub::setBackgroundColor_
            (*(ID *)(param_1[1] + _TtC7PasteUI10TextEditor::___lazy_storage___textView),*param_1);
  return 0;
}



/* Address: 0x100213598 | thunk_FUN_10021359c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID thunk_FUN_10021359c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID self;
  undefined *puVar5;
  long unaff_x20;
  
  lVar4 = _TtC7PasteUI10TextEditor::___lazy_storage___editButtons;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___editButtons);
  if (self == 0) {
    FUN_100211b54();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    puVar5 = &DAT_100ec1b08;
    _swift_allocObject(&DAT_100ec1b08,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar1 = (undefined8 *)(self + _TtCC7PasteUI10TextEditor11EditButtons::onToggleTrait);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_1002160c4;
    puVar1[1] = puVar5;
    _swift_retain(puVar5);
    FUN_100004550(uVar2,uVar3);
    _swift_release(puVar5);
    *(ID *)(unaff_x20 + lVar4) = self;
  }
  return self;
}



/* Address: 0x10021359c | FUN_10021359c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021359c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID self;
  undefined *puVar5;
  long unaff_x20;
  
  lVar4 = _TtC7PasteUI10TextEditor::___lazy_storage___editButtons;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___editButtons);
  if (self == 0) {
    FUN_100211b54();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    puVar5 = &DAT_100ec1b08;
    _swift_allocObject(&DAT_100ec1b08,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar1 = (undefined8 *)(self + _TtCC7PasteUI10TextEditor11EditButtons::onToggleTrait);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_1002160c4;
    puVar1[1] = puVar5;
    _swift_retain(puVar5);
    FUN_100004550(uVar2,uVar3);
    _swift_release(puVar5);
    *(ID *)(unaff_x20 + lVar4) = self;
  }
  return self;
}



/* Address: 0x100213674 | FUN_100213674 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213674(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100212dfc();
    FUN_1002072a0(param_1,0,0,1);
    return 0;
  }
  return 0;
}



/* Address: 0x1002136e4 | FUN_1002136e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002136e4(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtC7PasteUI10TextEditor::___lazy_storage___scrollView;
  self = *(ID *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___scrollView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSScrollView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    IVar2 = self;
    FUN_100212dfc();
    objc_stub::setDocumentView_(self,IVar2);
    objc_stub::setHasVerticalScroller_(self,1);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x100213780 | FUN_100213780 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100213780(ID param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  NSDictionary *pNVar5;
  
  objc_stub::setEditable_(param_1,0);
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fb64e8,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1000f3ef4();
  objc_stub::setFont_(param_1,uVar1);
  objc_stub::setTextContainerInset_(param_1,0x4020000000000000,0x4024000000000000);
  objc_stub::setSelectable_(param_1,1);
  objc_stub::setAllowsUndo_(param_1,1);
  puVar2 = &DAT_100fb7020;
  FUN_1000037f0(&DAT_100fb7020,&DAT_100c36690);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__NSCursorAttributeName_100ea9028;
  IVar3 = NSCursor::pointingHandCursor((ID)&_OBJC_CLASS___NSCursor);
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fb7060,&PTR__OBJC_CLASS___NSCursor_100f8d808);
  *(undefined8 *)(puVar2 + 0x40) = uVar1;
  *(ID *)(puVar2 + 0x28) = IVar3;
  puVar4 = puVar2;
  FUN_1001f3760(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_100005808(puVar2 + 0x20,&DAT_100fb7030,&DAT_100c34850);
  FUN_1001f3e68(0);
  FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
  pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar4);
  objc_stub::setLinkTextAttributes_(param_1,pNVar5);
  objc_stub::setAutoresizingMask_(param_1,2);
  IVar3 = objc_stub::textStorage(param_1);
  if (IVar3 != 0) {
    objc_stub::setDelegate_(IVar3,param_2);
  }
  return 0;
}



/* Address: 0x100213978 | FUN_100213978 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100213978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  _ArrayBuffer _Var1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  undefined *puVar7;
  NSArray *pNVar8;
  NSKeyValueObservingOptions NVar9;
  NSKeyValueObservation *pNVar10;
  ID IVar11;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar3 = (undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::onAttributedTextChange);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___editButtons) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___scrollView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___textView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::typingAttributesObserver) = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",param_1,param_2
                             ,param_3,param_4);
  IVar11 = self;
  FUN_1002136e4();
  _Var1.unknown = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_initStackObject();
  *(undefined8 *)(_Var1.unknown + 0x18) = 3;
  *(undefined8 *)(_Var1.unknown + 0x10) = 1;
  *(ID *)(_Var1.unknown + 0x20) = IVar11;
  if (((ulong)_Var1.unknown & 0xc000000000000001) != 0) {
    IVar11 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var1);
  }
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar4.unknown,puVar3);
  }
  objc_stub::addSubview_(self,IVar11);
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar11,0);
  _swift_release(pMVar2);
  FUN_1002136e4();
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  IVar11 = self;
  thunk_FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768,self,pMVar2);
  puVar6 = &DAT_100fb7ad0;
  FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar7 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar6 + 0x38) = puVar7;
  *(undefined ***)(puVar6 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar6 + 0x20) = IVar11;
  puVar7 = puVar6;
  thunk_FUN_1001f9238(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_100004594(puVar6 + 0x20);
  FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar8);
  _swift_bridgeObjectRelease(puVar7);
  _swift_setDeallocating(_Var1.unknown);
  _swift_arrayDestroy(_Var1.unknown + 0x20,*(undefined8 *)(_Var1.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  FUN_100212dfc();
  NVar9.rawValue = (__uint64)&DAT_100c366d8;
  _swift_getKeyPath();
  puVar6 = &DAT_100ec1b08;
  _swift_allocObject(&DAT_100ec1b08,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10,self);
  pNVar10 = (extension_Foundation)::Foundation::_KeyValueCodingAndObserving::_observe(NVar9);
  _swift_release(NVar9.rawValue);
  _swift_release(puVar6);
  *(NSKeyValueObservation **)(self + _TtC7PasteUI10TextEditor::typingAttributesObserver) = pNVar10;
  return self;
}



/* Address: 0x100213d48 | FUN_100213d48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213d48(undefined8 *param_1,ID *param_2)

{
  Dictionary<undefined,undefined> DVar1;
  
  objc_stub::typingAttributes(*param_2);
  FUN_1001f3e68(0);
  FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  *param_1 = DVar1.unknown;
  return 0;
}



/* Address: 0x100213dd4 | FUN_100213dd4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100213dd4(undefined8 param_1,ID *param_2)

{
  NSDictionary *pNVar1;
  ID self;
  
  self = *param_2;
  FUN_1001f3e68(0);
  FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  objc_stub::setTypingAttributes_(self,pNVar1);
  return 0;
}



/* Address: 0x100213e54 | FUN_100213e54 */

void FUN_100213e54(undefined8 param_1,undefined8 param_2,MainActor *param_3)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *this;
  MainActor *pMVar3;
  undefined8 *puVar4;
  long extraout_x8;
  
  puVar1 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar2.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = param_3;
  _swift_retain();
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100ec1bf8;
  _swift_allocObject(&DAT_100ec1bf8,0x28,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar3;
  *(undefined8 **)(puVar1 + 0x18) = puVar4;
  *(MainActor **)(puVar1 + 0x20) = param_3;
  FUN_10020aba8(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100c36708,puVar1);
  _swift_release();
  return;
}



/* Address: 0x100213f58 | FUN_100213f58 */

void FUN_100213f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x58) = pMVar2;
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100213fe8,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100213fe8 | FUN_100213fe8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100213fe8(void)

{
  long lVar1;
  code *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined *puVar9;
  Dictionary<undefined,undefined> DVar10;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 uVar11;
  long unaff_x22;
  Dictionary<undefined,undefined> DVar12;
  undefined8 uVar13;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  IVar6 = lVar1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar6 == 0) {
    uVar11 = 1;
    goto LAB_10021428c;
  }
  FUN_10021359c();
  FUN_100212dfc();
  IVar3 = objc_stub::selectedRange(IVar6);
  IVar4 = objc_stub::attributedText(IVar6);
  IVar5 = objc_stub::length(IVar4);
  if ((long)IVar5 < (long)IVar3) {
LAB_1002141e4:
    objc_stub::typingAttributes(IVar6);
    FUN_1001f3e68(0);
    FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
    DVar10 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar12 = DVar10;
    FUN_100207db8(DVar10.unknown);
    _swift_bridgeObjectRelease(DVar10.unknown);
  }
  else {
    if (SCARRY8(IVar3,extraout_x1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002142bc);
      (*pcVar2)();
    }
    IVar4 = objc_stub::length(IVar4);
    if (((long)IVar4 < (long)(IVar3 + extraout_x1)) ||
       (objc_stub::selectedRange(IVar6), extraout_x1_00 == 0)) goto LAB_1002141e4;
    *(undefined **)(unaff_x22 + 0x40) = PTR___swiftEmptySetSingleton_100eae0e8;
    IVar3 = objc_stub::attributedText(IVar6);
    IVar6 = objc_stub::selectedRange(IVar6);
    puVar7 = &DAT_100ec1c20;
    _swift_allocObject(&DAT_100ec1c20,0x18,7);
    *(undefined8 **)(puVar7 + 0x10) = (undefined8 *)(unaff_x22 + 0x40);
    puVar8 = &DAT_100ec1c48;
    _swift_allocObject(&DAT_100ec1c48,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_1002085e0;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_100215f00;
    *(undefined **)(unaff_x22 + 0x38) = puVar8;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1002081f0;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_100ec1c60;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
    uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_retain(puVar8);
    _swift_release(uVar13);
    objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar3,IVar6,extraout_x1_01,0,aBlock);
    __Block_release(aBlock);
    puVar9 = puVar8;
    _swift_isEscapingClosureAtFileLocation(puVar8,"",0x8a,0x21,0x3f,1);
    _swift_release(puVar8);
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002142c0);
      (*pcVar2)();
    }
    DVar12.unknown = *(undefined **)(unaff_x22 + 0x40);
    _swift_release(puVar7);
  }
  FUN_1002106d0(DVar12.unknown);
  _swift_bridgeObjectRelease(DVar12.unknown);
  uVar11 = 0;
LAB_10021428c:
  **(undefined1 **)(unaff_x22 + 0x48) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x0001002142b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002142c0 | _TtC7PasteUI10TextEditor::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC7PasteUI10TextEditor::initWithFrame_
          (_TtC7PasteUI10TextEditor *this,ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/TextEditor.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.swift",0x18,1,0x6b,UVar4.unknown,puVar3);
  }
  FUN_100213978();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x1002143ac | _TtC7PasteUI10TextEditor::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI10TextEditor::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteUI/TextEditor.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.swift",0x18,1,0x7c,UVar4.unknown,puVar3);
  }
  FUN_100215f94();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}


