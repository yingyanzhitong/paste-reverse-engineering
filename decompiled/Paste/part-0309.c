/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003e1d88 | FUN_1003e1d88 */

undefined1  [16] FUN_1003e1d88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _TtC11PasteCoreUI20ColorItemContentView::onCanCommitEditing;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _TtC11PasteCoreUI20ColorItemContentView::onCanCommitEditing,param_1,
                     0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = _swift_endAccess;
  return auVar3;
}



/* Address: 0x1003e1dcc | FUN_1003e1dcc */

void FUN_1003e1dcc(undefined8 param_1,undefined8 param_2)

{
  FUN_1003e1de0(param_1,param_2,&_TtC11PasteCoreUI20ColorItemContentView::onDidFinishEditing,
                thunk_FUN_100011128);
  return;
}



/* Address: 0x1003e1de0 | FUN_1003e1de0 */

undefined1  [16] FUN_1003e1de0(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(*unaff_x20 + *param_3);
  _swift_beginAccess(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_4)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1003e1e44 | FUN_1003e1e44 */

void FUN_1003e1e44(void)

{
  FUN_1003e1e58();
  return;
}



/* Address: 0x1003e1e58 | FUN_1003e1e58 */

void FUN_1003e1e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(*unaff_x20 + *param_5);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_6)(uVar2,uVar3);
  return;
}



/* Address: 0x1003e1eb8 | FUN_1003e1eb8 */

undefined1  [16] FUN_1003e1eb8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _TtC11PasteCoreUI20ColorItemContentView::onDidFinishEditing;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _TtC11PasteCoreUI20ColorItemContentView::onDidFinishEditing,param_1,
                     0x21,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = _swift_endAccess;
  return auVar3;
}



/* Address: 0x1003e1efc | FUN_1003e1efc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003e1efc(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::editToolbar);
}



/* Address: 0x1003e1f30 | FUN_1003e1f30 */

void FUN_1003e1f30(void)

{
  long *unaff_x20;
  
  *(undefined1 *)(*unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::isEditing) = 1;
  FUN_1003e1900();
  return;
}



/* Address: 0x1003e1f60 | FUN_1003e1f60 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003e1f60(ID param_1)

{
  long *unaff_x20;
  
  *(undefined1 *)(*unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::isEditing) = 0;
  FUN_1003e0fe8();
  objc_stub::orderOut_(param_1,0);
  FUN_1003bbc20(0);
  FUN_1003e1724();
  return 0;
}



/* Address: 0x1003e1fcc | FUN_1003e1fcc */

void FUN_1003e1fcc(void)

{
  FUN_1003e1b54();
  return;
}



/* Address: 0x1003e1fec | FUN_1003e1fec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e1fec(ID param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  ID IVar3;
  NSObject *pNVar4;
  NSObject *pNVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_58 [24];
  
  FUN_1003e0fe8();
  IVar3 = objc_stub::FUN_100bff640(param_1);
  FUN_1003e1724(IVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::onCanCommitEditing);
  _swift_beginAccess(puVar1,auStack_58,0,0);
  pcVar6 = (code *)*puVar1;
  if (pcVar6 != (code *)0x0) {
    uVar7 = puVar1[1];
    IVar3 = *(ID *)(unaff_x20 +
                   _TtC11PasteCoreUI20ColorItemContentView::___lazy_storage___colorPanel);
    _swift_retain(uVar7);
    pNVar4 = (NSObject *)objc_stub::FUN_100bff640(IVar3);
    pNVar5 = pNVar4;
    FUN_1003bbc20();
    FUN_10000ec2c(0,&DAT_100fc3550,&PTR__OBJC_CLASS___NSColor_100f8d680);
    bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar4,pNVar5);
    (*pcVar6)((bVar2 ^ 0xffU) & 1);
    FUN_100004550(pcVar6,uVar7);
  }
  return;
}



/* Address: 0x1003e210c | _TtC11PasteCoreUI20ColorItemContentView::colorChanged */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI20ColorItemContentView::colorChanged(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ColorItemContentView.swift",0x26,1,0x8a,UVar4.unknown,puVar3);
  }
  FUN_1003e1fec(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003e21cc | FUN_1003e21cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e21cc(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ID IVar5;
  NSString *pNVar6;
  ID IVar7;
  long unaff_x20;
  String SVar8;
  
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::editToolbar) = 0;
  lVar2 = _TtC11PasteCoreUI20ColorItemContentView::footer;
  uVar4 = 0;
  FUN_1003df434();
  _objc_allocWithZone();
  FUN_1003df4b8();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::onCanCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::onDidFinishEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC11PasteCoreUI20ColorItemContentView::colorView;
  IVar5 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  lVar2 = _TtC11PasteCoreUI20ColorItemContentView::colorCodeLabel;
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar6);
  IVar7 = objc_stub::userFixedPitchFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x4036000000000000);
  objc_stub::setFont_(IVar5,IVar7);
  objc_stub::setTextAlignment_(IVar5,1);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::isEditing) = 0;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI20ColorItemContentView::___lazy_storage___colorPanel)
       = 0;
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5540);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e2334);
  (*pcVar3)();
}



/* Address: 0x1003e2334 | FUN_1003e2334 */

void FUN_1003e2334(void)

{
  long unaff_x20;
  
  FUN_1003e1508(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003e233c | FUN_1003e233c */

void FUN_1003e233c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003e2360 | FUN_1003e2360 */

void FUN_1003e2360(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003e238c | FUN_1003e238c */

void FUN_1003e238c(void)

{
  long unaff_x20;
  
  FUN_1003e16b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003e2394 | FUN_1003e2394 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined *
FUN_1003e2394(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  MainActor *pMVar2;
  undefined8 uVar3;
  Style SVar4;
  LocalizedStringResource LVar5;
  undefined7 extraout_var;
  ByteCountFormatStyle BVar6;
  Units UVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ID IVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  Units allowedUnits;
  long *plVar24;
  String SVar25;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 auStack_170 [2];
  undefined auStack_160 [8];
  long local_158;
  undefined *local_150;
  undefined8 *local_148;
  LocalizedStringResource local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined *local_120;
  long local_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  
  local_148 = (undefined8 *)param_1;
  local_138 = param_4;
  local_128 = param_5;
  local_120 = (undefined *)param_2;
  _swift_getObjectType();
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  local_140.unknown = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_150 = (undefined *)Foundation::ByteCountFormatStyle::Units::typeMetadataAccessor();
  lVar19 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  allowedUnits.unknown =
       auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  SVar4 = Foundation::ByteCountFormatStyle::Style::typeMetadataAccessor();
  lVar21 = CONCAT71(extraout_var,SVar4.value);
  lVar20 = *(long *)(lVar21 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar23 = (long)allowedUnits.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  BVar6 = Foundation::ByteCountFormatStyle::typeMetadataAccessor();
  local_158 = *(long *)(BVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_158 + 0x40));
  lVar22 = lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  UVar7.unknown =
       (undefined *)
       _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"initWithFrame:",0,0,0,0);
  local_a8 = local_148;
  uStack_a0 = local_120;
  local_130 = UVar7.unknown;
  if (param_3 < 1) {
    local_110 = (undefined *)0x0;
    uStack_108 = 0;
  }
  else {
    local_118 = param_3;
    (**(code **)(lVar20 + 0x68))
              (lVar23,*(undefined4 *)
                       PTR___enum_case_for_Foundation_ByteCountFormatStyle_Style_file_Foundation_ByteCountFormatStyle_Style_Type___>_Foundation_ByteCountFormatStyle_Style_100ea6f58
               ,lVar21);
    Foundation::ByteCountFormatStyle::Units::get_all(UVar7);
    (extension_Foundation)::Foundation::FormatStyle::_byteCount
              ((Style)(__int8)lVar23,allowedUnits,false,false);
    (**(code **)(lVar19 + 8))(allowedUnits.unknown,local_150);
    (**(code **)(lVar20 + 8))(lVar23,lVar21);
    FUN_1003d780c();
    puVar15 = &DAT_100fc39c8;
    FUN_100003a00(&DAT_100fc39c8,PTR_typeMetadataAccessor_100ea6f80,
                  PTR_Foundation__Foundation__ByteCountFormatStyle_>Foundation__FormatStyle_100ea6f78
                 );
    puVar18 = puVar15;
    FUN_1003e2c60();
    (extension_Foundation)::Swift::BinaryInteger::_formatted
              (&local_110,lVar22,PTR___type_metadata_for_Swift_Int_100eac6f8,BVar6.unknown,lVar23,
               puVar15,puVar18);
    (**(code **)(local_158 + 8))(lVar22,BVar6.unknown);
  }
  puVar18 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  lVar21 = 0;
  local_98 = local_110;
  uStack_90 = uStack_108;
  puVar9 = &uStack_a0;
  local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_148 = puVar9;
  do {
    plVar24 = puVar9 + lVar21 * 2;
    do {
      lVar21 = lVar21 + 1;
      if (lVar21 == 3) {
        puVar15 = &DAT_100fc39b0;
        FUN_1000037f0(&DAT_100fc39b0,&DAT_100c46400);
        _swift_arrayDestroy(&local_a8,2,puVar15);
        puVar15 = local_120;
        local_110 = local_120;
        FUN_1000037f0(&DAT_100fc39b8,&DAT_100c46040);
        FUN_1003e2c10();
        SVar25.bridgeObject = (void *)0xa600000000000000;
        SVar25.str = (char *)0x2020b7c22020;
        SVar25 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar25);
        _swift_bridgeObjectRelease(puVar15);
        puVar15 = &_OBJC_CLASS___NSTextField;
        _objc_allocWithZone();
        IVar16 = objc_stub::init((ID)puVar15);
        FUN_1003e29b0(IVar16,SVar25.str,SVar25.bridgeObject);
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        LVar5.unknown = local_140.unknown;
        FUN_1001dac54(local_140.unknown);
        SVar25 = (extension_Foundation)::Swift::String::init(LVar5);
        FUN_100240298(0);
        _objc_allocWithZone();
        uVar3 = local_128;
        _swift_retain(local_128);
        *(undefined8 *)(lVar22 + -8) = uVar3;
        *(undefined8 *)(lVar22 + -0x10) = local_138;
        *(undefined1 *)(lVar22 + -0x18) = 0;
        *(undefined8 *)(lVar22 + -0x20) = 0;
        uVar17 = 0;
        FUN_10023e034(0,0,SVar25.str,SVar25.bridgeObject,0,0,1,0);
        puVar15 = &DAT_100fc3e80;
        FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
        _swift_initStackObject();
        *(undefined8 *)(puVar15 + 0x18) = 7;
        *(undefined8 *)(puVar15 + 0x10) = 3;
        *(ID *)(puVar15 + 0x20) = IVar16;
        puVar18 = &_OBJC_CLASS___NSView;
        _objc_allocWithZone();
        IVar16 = objc_stub::init((ID)puVar18);
        objc_stub::setContentHuggingPriority_forOrientation_(IVar16,0x437a0000,0);
        objc_stub::setContentCompressionResistancePriority_forOrientation_(IVar16,0x437a0000,0);
        puVar18 = local_130;
        *(ID *)(puVar15 + 0x28) = IVar16;
        *(undefined8 *)(puVar15 + 0x30) = uVar17;
        FUN_100201b9c(puVar15);
        _swift_release(uVar3);
        _swift_setDeallocating(puVar15);
        _swift_arrayDestroy(puVar15 + 0x20,*(undefined8 *)(puVar15 + 0x10),
                            PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
        return puVar18;
      }
      lVar23 = plVar24[-1];
      pMVar2 = (MainActor *)*plVar24;
      this = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = pMVar2;
      _swift_bridgeObjectRetain();
      pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
      puVar9 = &DAT_100fc31a8;
      FUN_100003a00(&DAT_100fc31a8,puVar15,puVar18);
      UVar10 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar10;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteCoreUI/FileItemContentView.Footer.swift",0x2c,1,0x19,UVar10.unknown,puVar9)
        ;
      }
      plVar24 = plVar24 + 2;
      _swift_release(pMVar8);
      puVar14 = local_120;
    } while (pMVar2 == (MainActor *)0x0);
    puVar12 = local_120;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = puVar14;
    if (((ulong)puVar12 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_1003f9704(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
    }
    puVar9 = local_148;
    uVar1 = *(ulong *)(puVar13 + 0x10);
    puVar14 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_1003f9704(puVar14,uVar1 + 1,1,puVar13);
    }
    *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
    *(long *)(puVar14 + uVar1 * 0x10 + 0x20) = lVar23;
    *(MainActor **)(puVar14 + uVar1 * 0x10 + 0x28) = pMVar2;
    local_120 = puVar14;
  } while( true );
}



/* Address: 0x1003e29b0 | FUN_1003e29b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e29b0(ID param_1)

{
  NSString *pNVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setText_(param_1,pNVar1);
  puVar2 = (undefined8 *)objc_stub::setNumberOfLines_(param_1,0);
  FUN_1001fe19c();
  objc_stub::setTextColor_(param_1,*puVar2);
  uVar3 = 0;
  FUN_1003e2ca0(0);
  FUN_1001ff928();
  objc_stub::setFont_(param_1,uVar3);
  objc_stub::setEditable_(param_1,0);
  objc_stub::setSelectable_(param_1,0);
  objc_stub::setBordered_(param_1,0);
  objc_stub::setDrawsBackground_(param_1,0);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(param_1,0x437a0000,0);
  return;
}



/* Address: 0x1003e2a74 | _TtCC11PasteCoreUI19FileItemContentView17FooterContentView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI19FileItemContentView17FooterContentView::initWithCoder_
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
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.Footer.swift",0x2c,1,0x39,UVar4.unknown,puVar3);
  }
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda55a0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e2b48);
  (*pcVar2)();
}



/* Address: 0x1003e2b48 | _TtCC11PasteCoreUI19FileItemContentView17FooterContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC11PasteCoreUI19FileItemContentView17FooterContentView::initWithFrame_
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
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.Footer.swift",0x2c,1,0xc,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.FooterContentView",0x1d,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e2bf0);
  (*pcVar2)();
}



/* Address: 0x1003e2bf0 | FUN_1003e2bf0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e2bf0(void)

{
  return ZEXT816(0x100f9ab60);
}



/* Address: 0x1003e2c10 | FUN_1003e2c10 */

void FUN_1003e2c10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc39c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc39b8;
  FUN_100005c24(&DAT_100fc39b8,&DAT_100c46040);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fc39c0 = puVar2;
  return;
}



/* Address: 0x1003e2c60 | FUN_1003e2c60 */

void FUN_1003e2c60(void)

{
  undefined *puVar1;
  
  if (DAT_100fc39d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eadc10;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eadc10,
             PTR___type_metadata_for_Swift_Int64_100eadc00);
  DAT_100fc39d0 = puVar1;
  return;
}



/* Address: 0x1003e2ca0 | FUN_1003e2ca0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003e2ca0(void)

{
  undefined *puVar1;
  
  if (DAT_100fc3e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSFont;
  _swift_getObjCClassMetadata();
  DAT_100fc3e90 = puVar1;
  return;
}



/* Address: 0x1003e2ce4 | FUN_1003e2ce4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1003e2ce4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI19FileItemContentView::___lazy_storage___footer;
  lVar2 = *(long *)(unaff_x20 + _TtC11PasteCoreUI19FileItemContentView::___lazy_storage___footer);
  if (lVar2 == 0) {
    FUN_1003df434();
    _objc_allocWithZone();
    FUN_1003df4b8();
    FUN_1003e2d64();
    *(long *)(unaff_x20 + lVar1) = lVar2;
  }
  return lVar2;
}



/* Address: 0x1003e2d64 | FUN_1003e2d64 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003e2d64(undefined8 param_1,undefined8 param_2)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  String SVar5;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  FUN_1003bc508();
  lVar4 = *(long *)(LVar1.unknown + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar4 == 1) {
    FUN_1003bc508();
    if (*(long *)(LVar1.unknown + 0x10) == 0) {
      _swift_bridgeObjectRelease();
      SVar5 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    }
    else {
      SVar5 = *(String *)(LVar1.unknown + 0x20);
      _swift_bridgeObjectRetain(*(undefined8 *)(LVar1.unknown + 0x28));
      _swift_bridgeObjectRelease(LVar1.unknown);
    }
  }
  else {
    FUN_1001c6fb0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    SVar5 = (extension_Foundation)::Swift::String::init
                      ((LocalizedStringResource)
                       (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    LVar1.unknown = SVar5.str;
  }
  FUN_1003bc714();
  puVar2 = &DAT_100ed0488;
  _swift_allocObject(&DAT_100ed0488,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_2);
  uVar3 = 0;
  FUN_1003e2bf0(0);
  _objc_allocWithZone();
  FUN_1003e2394(SVar5.str,SVar5.bridgeObject,LVar1.unknown,FUN_1003e3f7c,puVar2,uVar3);
  FUN_1003df0b0();
  return 0;
}



/* Address: 0x1003e2eac | FUN_1003e2eac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1003e2eac(long param_1)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _TtC11PasteCoreUI19FileItemContentView::viewModel);
    _swift_retain(uVar3);
    FUN_1003bc874(0);
    _swift_release(uVar3);
  }
  IVar2 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar2 != 0) {
    IVar2 = objc_stub::window(IVar2);
    if (IVar2 != 0) {
      objc_stub::performClose_(IVar2,0);
      return 0;
    }
  }
  return 0;
}



/* Address: 0x1003e2f54 | FUN_1003e2f54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003e2f54(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  ID self_01;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI19FileItemContentView::___lazy_storage___imageView;
  self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI19FileItemContentView::___lazy_storage___imageView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSImageView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setImageAlignment_(self,0);
    objc_stub::setImageScaling_(self,0);
    self_01 = objc_stub::imageNamed_
                        ((ID)&_OBJC_CLASS___NSImage,
                         *(undefined8 *)PTR__NSImageNameMultipleDocuments_100ea90e0);
    if (self_01 != 0) {
      objc_stub::setSize_(self_01,0x4064000000000000,0x4064000000000000);
    }
    objc_stub::setImage_(self,self_01);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003e3034 | FUN_1003e3034 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003e3034(undefined8 param_1)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [16];
  ID local_60;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19FileItemContentView::___lazy_storage___footer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19FileItemContentView::___lazy_storage___imageView) =
       0;
  lVar4 = _TtC11PasteCoreUI19FileItemContentView::quicklookView;
  IVar1 = 0;
  FUN_1003e3ca8();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar1 = objc_stub::init(IVar1);
  *(ID *)(unaff_x20 + lVar4) = IVar1;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19FileItemContentView::viewModel) = param_1;
  _swift_retain(param_1);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",0,0,0,0);
  IVar1 = IVar2;
  FUN_1003e2f54();
  local_60 = IVar2;
  FUN_1001fa09c();
  _swift_bridgeObjectRelease();
  FUN_1003bc508();
  lVar4 = *(long *)(IVar1 + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar4 == 1) {
    objc_stub::setHidden_
              (*(ID *)(IVar2 + _TtC11PasteCoreUI19FileItemContentView::___lazy_storage___imageView),
               1);
    uVar3 = *(undefined8 *)(IVar2 + _TtC11PasteCoreUI19FileItemContentView::quicklookView);
    local_60 = IVar2;
    FUN_1001fa09c(uVar3,FUN_1003e3f8c,auStack_70);
    _swift_bridgeObjectRelease(uVar3);
  }
  _swift_release(param_1);
  return IVar2;
}



/* Address: 0x1003e31a4 | FUN_1003e31a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003e31a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long local_70 [3];
  long local_58;
  undefined **ppuStack_50;
  long local_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = lVar1;
  FUN_1003e2f54();
  ppuStack_50 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_70[0] = param_1;
  local_58 = lVar1;
  local_48 = lVar2;
  FUN_1003e3f94();
  plVar4 = local_70;
  FUN_1001f9a0c(0,0,plVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_70);
  local_70[0] = *(long *)(param_1 +
                         _TtC11PasteCoreUI19FileItemContentView::___lazy_storage___imageView);
  FUN_1001f9e3c(0x4064000000000000,0x4064000000000000,uVar3,&PTR_PTR_100ec00e8);
  puVar5 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar6 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
  *(long **)(puVar5 + 0x20) = plVar4;
  *(undefined **)(puVar5 + 0x60) = puVar6;
  *(undefined ***)(puVar5 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar5 + 0x48) = uVar3;
  puVar7 = puVar5;
  FUN_1001f8d60(puVar5);
  _swift_setDeallocating(puVar5);
  uVar3 = *(undefined8 *)(puVar5 + 0x10);
  puVar6 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar5 + 0x20,uVar3,puVar6);
  return puVar7;
}



/* Address: 0x1003e3310 | FUN_1003e3310 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003e3310(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_78 [3];
  undefined8 *local_60;
  undefined **ppuStack_58;
  
  puVar1 = param_1;
  _swift_getObjectType();
  ppuStack_58 = &PTR_PTR_100ec00e8;
  local_78[0] = param_1;
  local_60 = puVar1;
  FUN_1001f9774();
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar2 = 0;
  FUN_1003e3ca8(0);
  ppuVar3 = local_78;
  FUN_1001f97b4(uVar7,uVar8,uVar9,uVar10,ppuVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_78);
  puVar4 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar4 + 0x20) = ppuVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar2 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar4 + 0x20,uVar2,puVar5);
  return puVar6;
}



/* Address: 0x1003e3448 | _TtC11PasteCoreUI19FileItemContentView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUI19FileItemContentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  code *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  String SVar7;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.swift",0x25,1,0x47,UVar4.unknown,pMVar3);
  }
  *(undefined8 *)(param_1 + ___lazy_storage___footer) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___imageView) = 0;
  lVar1 = quicklookView;
  IVar6 = 0;
  FUN_1003e3ca8();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar6 = objc_stub::init(IVar6);
  *(ID *)(param_1 + lVar1) = IVar6;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda55f0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e353c);
  (*pcVar2)();
}



/* Address: 0x1003e353c | FUN_1003e353c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003e353c(void)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  ID self;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"viewDidMoveToWindow");
  IVar2 = objc_stub::window(unaff_x20);
  if (IVar2 != 0) {
    self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI19FileItemContentView::quicklookView);
    IVar2 = objc_stub::FUN_100c08080(self);
    if (IVar2 == 0) {
      FUN_1003bc508();
      if (*(long *)(IVar2 + 0x10) == 0) {
        _swift_bridgeObjectRelease();
        IVar2 = 0;
      }
      else {
        IVar3 = *(ID *)(IVar2 + 0x20);
        uVar1 = *(undefined8 *)(IVar2 + 0x28);
        _swift_bridgeObjectRetain_n(uVar1,2);
        _swift_bridgeObjectRelease(IVar2);
        FUN_1003e3638(IVar3,uVar1);
        _swift_bridgeObjectRelease_n(uVar1,2);
        IVar2 = IVar3;
      }
      objc_stub::FUN_100c0d200(self,IVar2);
    }
    _swift_unknownObjectRelease(IVar2);
  }
  return;
}



/* Address: 0x1003e3638 | FUN_1003e3638 */

ID FUN_1003e3638(void)

{
  undefined8 *puVar1;
  URL UVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  ID IVar9;
  MainActor *pMVar10;
  long extraout_x8;
  long lVar11;
  objc_super local_70;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1003d0b5c();
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  pMVar10 = pMVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteCoreUI/FileItemContentView.swift";
    pMVar10 = (MainActor *)0x25;
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.swift",0x25,1,0x50,UVar5.unknown,pMVar3);
  }
  FUN_1003bc814();
  pcVar7 = (class_t *)0x0;
  FUN_1003e3e40();
  pcVar8 = pcVar7;
  _objc_allocWithZone();
  Foundation::URL::_init();
  (**(code **)(lVar11 + 0x20))
            ((long)&pcVar8->isa +
             _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem
             ::previewItemURL,(long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),
             UVar2.unknown);
  puVar1 = (undefined8 *)
           ((long)&pcVar8->isa +
           _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem
           ::previewItemTitle);
  *puVar1 = pcVar6;
  puVar1[1] = pMVar10;
  local_70.receiver = (ID)pcVar8;
  local_70.super_class = pcVar7;
  IVar9 = _objc_msgSendSuper2(&local_70,"init");
  _swift_release(pMVar4);
  return IVar9;
}



/* Address: 0x1003e37a4 | _TtC11PasteCoreUI19FileItemContentView::viewDidMoveToWindow */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI19FileItemContentView::viewDidMoveToWindow(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.swift",0x25,1,0x4c,UVar3.unknown,pMVar1);
  }
  FUN_1003e353c(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003e3840 | _TtC11PasteCoreUI19FileItemContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUI19FileItemContentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.swift",0x25,1,10,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.FileItemContentView",0x1f,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e38c8);
  (*pcVar1)();
}



/* Address: 0x1003e38c8 | _TtC11PasteCoreUI19FileItemContentView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI19FileItemContentView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  return;
}



/* Address: 0x1003e3920 | FUN_1003e3920 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e3920(void)

{
  return ZEXT816(0x100f9ac18);
}



/* Address: 0x1003e3940 | FUN_1003e3940 */

void FUN_1003e3940(void)

{
  FUN_1003e2ce4();
  return;
}



/* Address: 0x1003e3960 | _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E13QuickLookView::acceptsFirstResponder */

/* Function Stack Size: 0x10 bytes */

bool _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E13QuickLookView::
     acceptsFirstResponder(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.swift",0x25,1,0x59,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x1003e39e4 | _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E13QuickLookView::initWithFrame:style: */

/* Function Stack Size: 0x38 bytes */

ID _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E13QuickLookView::
   initWithFrame_style_(ID param_1,SEL param_2,CGRect param_3,unsigned_long_long param_4)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_70;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.swift",0x25,1,0x58,UVar4.unknown,pMVar2);
  }
  local_70.receiver = param_1;
  local_70.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_70,"initWithFrame:style:",param_3.field0_0x0.field0_0x0);
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x1003e3ad4 | _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E13QuickLookView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E13QuickLookView::
   initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_70;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.swift",0x25,1,0x58,UVar4.unknown,pMVar2);
  }
  local_70.receiver = param_1;
  local_70.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x1003e3bbc | _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E13QuickLookView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E13QuickLookView::
   initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FileItemContentView.swift",0x25,1,0x58,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x1003e3ca8 | FUN_1003e3ca8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003e3ca8(void)

{
  return ZEXT816(0x100f9acf0);
}



/* Address: 0x1003e3cc8 | _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem::previewItemURL */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem::
   previewItemURL(ID param_1,SEL param_2)

{
  URL UVar1;
  URL UVar2;
  NSURL *pNVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar2.unknown = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1 + previewItemURL,UVar1.unknown);
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  (**(code **)(lVar5 + 8))(puVar4,UVar1.unknown);
  return (ID)pNVar3;
}



/* Address: 0x1003e3d60 | _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem::previewItemTitle */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem::
   previewItemTitle(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + previewItemTitle + 8);
  if (lVar2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x1003e3dbc | _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem::init
             (ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PasteCoreUI.PreviewItem",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e3de8);
  (*pcVar1)();
}



/* Address: 0x1003e3de8 | _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtCC11PasteCoreUI19FileItemContentViewP33_154DAE16D36E762E8669B96DACBCF67E11PreviewItem::
     _cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  URL UVar2;
  
  lVar1 = previewItemURL;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + lVar1,UVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + previewItemTitle + 8));
  return;
}



/* Address: 0x1003e3e38 | FUN_1003e3e38 */

void FUN_1003e3e38(void)

{
  FUN_1003e3e40(0);
  return;
}



/* Address: 0x1003e3e40 | FUN_1003e3e40 */

void FUN_1003e3e40(undefined8 param_1)

{
  if (DAT_100fc3ae8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cae808);
  return;
}



/* Address: 0x1003e3e78 | FUN_1003e3e78 */

undefined1  [16] FUN_1003e3e78(URL param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_28 = &DAT_100c46080;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,2,&local_30,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = UVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x1003e3eec | FUN_1003e3eec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003e3eec(void)

{
  ID self;
  
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (self != 0) {
    NSScreen::frame(self);
  }
  return 0;
}



/* Address: 0x1003e3f58 | FUN_1003e3f58 */

void FUN_1003e3f58(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003e3f7c | FUN_1003e3f7c */

void FUN_1003e3f7c(void)

{
  FUN_1003e2eac();
  return;
}



/* Address: 0x1003e3f84 | FUN_1003e3f84 */

void FUN_1003e3f84(void)

{
  long unaff_x20;
  
  FUN_1003e31a4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003e3f8c | FUN_1003e3f8c */

void FUN_1003e3f8c(void)

{
  long unaff_x20;
  
  FUN_1003e3310(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003e3f94 | FUN_1003e3f94 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003e3f94(void)

{
  undefined *puVar1;
  
  if (DAT_100fc32c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSImageView;
  _swift_getObjCClassMetadata();
  DAT_100fc32c8 = puVar1;
  return;
}



/* Address: 0x1003e3fd8 | FUN_1003e3fd8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003e3fd8(void)

{
  long lVar1;
  LocalizedStringResource LVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long unaff_x20;
  String SVar12;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [48];
  
  _swift_getObjectType();
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar2.unknown = auStack_a0 + lVar1;
  puVar9 = (undefined8 *)
           (unaff_x20 + _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::onRotateLeft);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9 = (undefined8 *)
           (unaff_x20 + _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::onRotateRight);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar3 = (undefined8 *)
           _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",0,0,0,0);
  puVar4 = puVar3;
  FUN_10020d7ec();
  puVar9 = (undefined8 *)*puVar4;
  uVar11 = puVar4[1];
  _swift_bridgeObjectRetain(uVar11);
  uVar5 = 0x6c;
  FUN_1001e94d4(0x6c,0xe100000000000000);
  FUN_1001bee08(LVar2.unknown);
  SVar12 = (extension_Foundation)::Swift::String::init(LVar2);
  puVar10 = &DAT_100ed04c8;
  puVar6 = puVar10;
  _swift_allocObject(&DAT_100ed04c8,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10,puVar3);
  uVar7 = 0;
  FUN_100240298(0);
  uVar8 = uVar7;
  _objc_allocWithZone();
  *(code **)((long)auStack_b0 + lVar1) = FUN_1003e45b8;
  *(undefined **)((long)auStack_b0 + lVar1 + 8) = puVar6;
  auStack_b8[lVar1] = 0;
  *(void **)((long)&uStack_c0 + lVar1) = SVar12.bridgeObject;
  FUN_10023e034(uVar8,puVar9,uVar11,0,0xe000000000000000,uVar5,0x100000,0,SVar12.str);
  puVar4 = puVar9;
  FUN_10020d818();
  uVar11 = *puVar4;
  uVar8 = puVar4[1];
  _swift_bridgeObjectRetain(uVar8);
  uVar5 = 0x72;
  FUN_1001e94d4(0x72,0xe100000000000000);
  FUN_1001bef88(LVar2.unknown);
  SVar12 = (extension_Foundation)::Swift::String::init(LVar2);
  _swift_allocObject(&DAT_100ed04c8,0x18,7);
  _swift_unknownObjectWeakInit(puVar10 + 0x10,puVar3);
  _objc_allocWithZone(uVar7);
  *(code **)((long)auStack_b0 + lVar1) = FUN_1003e45d8;
  *(undefined **)((long)auStack_b0 + lVar1 + 8) = puVar10;
  auStack_b8[lVar1] = 0;
  *(void **)((long)&uStack_c0 + lVar1) = SVar12.bridgeObject;
  FUN_10023e034(uVar7,uVar11,uVar8,0,0xe000000000000000,uVar5,0x100000,0,SVar12.str);
  puVar10 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 5;
  *(undefined8 *)(puVar10 + 0x10) = 2;
  *(undefined8 **)(puVar10 + 0x20) = puVar9;
  *(undefined8 *)(puVar10 + 0x28) = uVar11;
  FUN_100201b9c(puVar10);
  _swift_setDeallocating(puVar10);
  _swift_arrayDestroy(puVar10 + 0x20,*(undefined8 *)(puVar10 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return puVar3;
}



/* Address: 0x1003e42b0 | FUN_1003e42b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_1003e42b0(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return (code *)0x0;
  }
  pcVar1 = *(code **)(param_1 + *param_2);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + *param_2))[1];
    thunk_FUN_100011128(pcVar1,uVar2);
    (*pcVar1)(0);
    FUN_100004550(pcVar1,uVar2);
    return pcVar1;
  }
  return (code *)0x0;
}



/* Address: 0x1003e4338 | _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteCoreUI/ImageItemContentView.EditToolbar.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.EditToolbar.swift",0x32,1,0x12,UVar3.unknown,pMVar1
              );
  }
  FUN_1003e3fd8();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003e43d0 | _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  String SVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  FUN_1003d0b5c();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.EditToolbar.swift",0x32,1,0x30,UVar4.unknown,pMVar3
              );
  }
  puVar1 = (undefined8 *)(param_1 + onRotateLeft);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(param_1 + onRotateRight);
  *puVar1 = 0;
  puVar1[1] = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5650);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003e44ac);
  (*pcVar2)();
}



/* Address: 0x1003e44ac | _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/ImageItemContentView.EditToolbar.swift",0x32,1,0xe,UVar3.unknown,pMVar2)
    ;
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteCoreUI.EditButtons",0x17,"init(frame:)",0xc,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003e4534);
  (*pcVar1)();
}



/* Address: 0x1003e4534 | _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtCC11PasteCoreUI20ImageItemContentView11EditButtons::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onRotateLeft),((undefined8 *)(param_1 + onRotateLeft))[1])
  ;
  FUN_100004550(*(undefined8 *)(param_1 + onRotateRight),
                ((undefined8 *)(param_1 + onRotateRight))[1]);
  return;
}


