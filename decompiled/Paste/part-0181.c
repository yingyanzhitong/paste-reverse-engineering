/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100214474 | FUN_100214474 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100214474(void)

{
  ID self;
  ID IVar1;
  ID unaff_x20;
  
  self = objc_stub::window(unaff_x20);
  if (self != 0) {
    IVar1 = self;
    FUN_100212dfc();
    objc_stub::makeFirstResponder_(self,IVar1);
    return 0;
  }
  return 0;
}



/* Address: 0x1002144d0 | _TtC7PasteUI10TextEditor::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI10TextEditor::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onAttributedTextChange),
                ((undefined8 *)(param_1 + onAttributedTextChange))[1]);
  return;
}



/* Address: 0x10021453c | FUN_10021453c */

void FUN_10021453c(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  
  puVar1 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar2.unknown);
  pMVar3 = (MainActor *)&DAT_100ec1b08;
  _swift_allocObject(&DAT_100ec1b08,0x18,7);
  _swift_unknownObjectWeakInit(pMVar3 + 0x10);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = pMVar3;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar5 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100ec1b30;
  _swift_allocObject(&DAT_100ec1b30,0x28,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar4;
  *(undefined8 **)(puVar1 + 0x18) = puVar5;
  *(MainActor **)(puVar1 + 0x20) = pMVar3;
  _swift_release(pMVar3);
  FUN_10020ae18(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100c36650,puVar1);
  _swift_release();
  return;
}



/* Address: 0x100214674 | FUN_100214674 */

void FUN_100214674(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x50) = pMVar2;
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100214704,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100214704 | FUN_100214704 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100214704(void)

{
  undefined8 *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  Dictionary<undefined,undefined> DVar8;
  long lVar9;
  ID IVar10;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  code *pcVar11;
  long unaff_x22;
  Dictionary<undefined,undefined> DVar12;
  undefined8 uVar13;
  
  lVar9 = *(long *)(unaff_x22 + 0x48);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  IVar10 = lVar9 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar10 == 0) goto LAB_10021499c;
  FUN_10021359c();
  FUN_100212dfc();
  IVar2 = objc_stub::selectedRange(IVar10);
  IVar3 = objc_stub::attributedText(IVar10);
  IVar4 = objc_stub::length(IVar3);
  if ((long)IVar4 < (long)IVar2) {
LAB_1002148f8:
    objc_stub::typingAttributes(IVar10);
    FUN_1001f3e68(0);
    FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
    DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    DVar12 = DVar8;
    FUN_100207db8(DVar8.unknown);
    _swift_bridgeObjectRelease(DVar8.unknown);
  }
  else {
    if (SCARRY8(IVar2,extraout_x1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100214a64);
      (*pcVar11)();
    }
    IVar3 = objc_stub::length(IVar3);
    if (((long)IVar3 < (long)(IVar2 + extraout_x1)) ||
       (objc_stub::selectedRange(IVar10), extraout_x1_00 == 0)) goto LAB_1002148f8;
    *(undefined **)(unaff_x22 + 0x40) = PTR___swiftEmptySetSingleton_100eae0e8;
    IVar2 = objc_stub::attributedText(IVar10);
    IVar10 = objc_stub::selectedRange(IVar10);
    puVar5 = &DAT_100ec1c98;
    _swift_allocObject(&DAT_100ec1c98,0x18,7);
    *(undefined8 **)(puVar5 + 0x10) = (undefined8 *)(unaff_x22 + 0x40);
    puVar6 = &DAT_100ec1cc0;
    _swift_allocObject(&DAT_100ec1cc0,0x20,7);
    *(code **)(puVar6 + 0x10) = thunk_FUN_1002085e0;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    *(code **)(unaff_x22 + 0x30) = thunk_FUN_100215f00;
    *(undefined **)(unaff_x22 + 0x38) = puVar6;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(code **)(unaff_x22 + 0x20) = FUN_1002081f0;
    *(undefined **)(unaff_x22 + 0x28) = &DAT_100ec1cd8;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x10));
    uVar13 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_retain(puVar6);
    _swift_release(uVar13);
    objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar2,IVar10,extraout_x1_01,0,aBlock);
    __Block_release(aBlock);
    puVar7 = puVar6;
    _swift_isEscapingClosureAtFileLocation(puVar6,"",0x8a,0x21,0x3f,1);
    _swift_release(puVar6);
    if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100214a68);
      (*pcVar11)();
    }
    DVar12.unknown = *(undefined **)(unaff_x22 + 0x40);
    _swift_release(puVar5);
  }
  FUN_1002106d0(DVar12.unknown);
  _swift_bridgeObjectRelease(DVar12.unknown);
LAB_10021499c:
  lVar9 = *(long *)(unaff_x22 + 0x48) + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar9 != 0) {
    puVar1 = (undefined8 *)(lVar9 + _TtC7PasteUI10TextEditor::onAttributedTextChange);
    _swift_beginAccess(puVar1,unaff_x22 + 0x10,0,0);
    pcVar11 = (code *)*puVar1;
    if (pcVar11 != (code *)0x0) {
      IVar2 = puVar1[1];
      IVar10 = IVar2;
      _swift_retain();
      FUN_100212dfc();
      IVar10 = objc_stub::attributedText(IVar10);
      (*pcVar11)(IVar10);
      FUN_100004550(pcVar11,IVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100214a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100214a68 | _TtC7PasteUI10TextEditor::textStorage:didProcessEditing:range:changeInLength: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC7PasteUI10TextEditor::textStorage_didProcessEditing_range_changeInLength_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,_NSRange param_5,
               long_long param_6)

{
  undefined *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  TaskPriority TVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  
  puVar1 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640,param_3,param_4,param_5.field0_0x0,param_5.field1_0x8)
  ;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar11 = puVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.swift",0x18,1,0xb0,UVar5.unknown,puVar11);
  }
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -extraout_x8,1,1,TVar7.unknown);
  pMVar8 = (MainActor *)&DAT_100ec1b08;
  _swift_allocObject(&DAT_100ec1b08,0x18,7);
  _swift_unknownObjectWeakInit(pMVar8 + 0x10,param_1);
  pMVar9 = pMVar8;
  _swift_retain();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar9);
  puVar1 = &DAT_100ec1bd0;
  _swift_allocObject(&DAT_100ec1bd0,0x28,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar2;
  *(undefined8 **)(puVar1 + 0x18) = puVar4;
  *(MainActor **)(puVar1 + 0x20) = pMVar8;
  _swift_release(pMVar8);
  uVar10 = 0;
  FUN_10020ae18(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100c366a8,puVar1);
  _swift_release(pMVar3);
  _swift_release(uVar10);
  return;
}



/* Address: 0x100214c20 | _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::validateUserInterfaceItem: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::
     validateUserInterfaceItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  bool bVar2;
  class_t *pcVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  ID IVar8;
  UnsafeMutablePointer UVar9;
  __int64 in_x3;
  UnsafeMutablePointer in_x4;
  undefined8 *in_x5;
  bool bVar10;
  Selector SVar11;
  Selector SVar12;
  Selector SVar13;
  objc_super local_50;
  
  pcVar3 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb6f30;
  UVar9.unknown = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fb6f30,puVar1);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    UVar9.unknown = &DAT_00000001;
    in_x3 = 0xd1;
    _swift_task_reportUnexpectedExecutor("PasteUI/TextEditor.swift",0x18);
    in_x4.unknown = UVar6.unknown;
    in_x5 = puVar5;
  }
  _swift_unknownObjectRetain(param_3);
  SVar11.events.unknown = (undefined *)objc_stub::action(param_3);
  if ((SVar11.events.unknown == (undefined *)0x0) ||
     (SVar11.eventsCapacity = (__int64)"changeLayoutOrientation:", SVar12.eventsCapacity = in_x3,
     SVar12.events.unknown = UVar9.unknown, SVar13.eventsCapacity = (__int64)in_x5,
     SVar13.events.unknown = in_x4.unknown,
     bVar2 = ObjectiveC::Selector::___infix(SVar11,SVar12,SVar13), !bVar2)) {
    local_50.receiver = param_1;
    local_50.super_class = pcVar3;
    IVar8 = _objc_msgSendSuper2(&local_50,"validateUserInterfaceItem:",param_3);
    bVar10 = (bool)IVar8;
    _swift_unknownObjectRelease(param_3);
  }
  else {
    _swift_unknownObjectRelease(param_3);
    bVar10 = 0;
  }
  _swift_release(pMVar4);
  return bVar10;
}



/* Address: 0x100214d54 | _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::menuForEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::menuForEvent_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_60;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.swift",0x18,1,0xd8,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_60,"menuForEvent:",param_3);
  if (IVar7 != 0) {
    FUN_10021ad80();
  }
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x100214e78 | FUN_100214e78 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100214e78(undefined8 param_1)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  NSArray *pNVar4;
  ID *pIVar5;
  NSString *pNVar6;
  undefined *puVar7;
  undefined *puVar8;
  NSDictionary *pNVar9;
  ID self;
  ID IVar10;
  void *aBlock;
  undefined *puVar11;
  undefined8 extraout_x1;
  long extraout_x8;
  ID unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  undefined8 local_120;
  ID local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  ID local_80;
  
  _swift_getObjectType();
  IVar2 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
  puVar8 = &DAT_100fb7008;
  FUN_1000037f0(&DAT_100fb7008,&DAT_100c36680);
  _swift_allocObject();
  uStack_108 = 2;
  local_110 = 1;
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fb7010,&PTR__OBJC_CLASS___NSAttributedString_100f8d688);
  *(undefined8 *)(puVar8 + 0x20) = uVar3;
  FUN_1000037f0(&DAT_100fb7018,&DAT_100c36688);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar8);
  IVar2 = NSPasteboard::readObjectsForClasses_options_(IVar2,pNVar4,0);
  puVar8 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar2 != 0) {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(IVar2 + 0x10) == 0) {
      _swift_bridgeObjectRelease(IVar2);
    }
    else {
      FUN_10000cbfc(IVar2 + 0x20,&local_f8);
      _swift_bridgeObjectRelease(IVar2);
      pIVar5 = &local_80;
      _swift_dynamicCast(pIVar5,&local_f8,puVar8 + 8,uVar3,6);
      if (((ulong)pIVar5 & 1) != 0) {
        IVar2 = objc_stub::undoManager(unaff_x20);
        objc_stub::beginUndoGrouping(IVar2);
        IVar2 = objc_stub::textStorage(unaff_x20);
        if (IVar2 != 0) {
          objc_stub::beginEditing(IVar2);
        }
        IVar2 = objc_stub::textStorage(unaff_x20);
        if (IVar2 != 0) {
          local_118 = objc_stub::selectedRange(unaff_x20);
          local_120 = extraout_x1;
          pNVar6 = (NSString *)objc_stub::string(local_80);
          if (pNVar6 == (NSString *)0x0) {
            SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar16.bridgeObject);
          }
          puVar8 = &DAT_100fb7020;
          FUN_1000037f0(&DAT_100fb7020,&DAT_100c36690);
          _swift_initStackObject();
          *(undefined8 *)(puVar8 + 0x18) = uStack_108;
          *(undefined8 *)(puVar8 + 0x10) = local_110;
          uVar12 = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
          *(undefined8 *)(puVar8 + 0x20) = uVar12;
          uVar3 = 0;
          FUN_10000ec2c(0,&DAT_100fb64e8,&PTR__OBJC_CLASS___NSFont_100f8d678);
          FUN_1000f3ef4();
          *(undefined8 *)(puVar8 + 0x40) = uVar3;
          *(undefined8 *)(puVar8 + 0x28) = uVar12;
          puVar7 = puVar8;
          FUN_1001f3760(puVar8);
          _swift_setDeallocating(puVar8);
          FUN_100005808(puVar8 + 0x20,&DAT_100fb7030,&DAT_100c34850);
          puVar8 = &_OBJC_CLASS___NSMutableAttributedString;
          _objc_allocWithZone();
          FUN_1001f3e68(0);
          FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c)
          ;
          pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(puVar7);
          self = objc_stub::initWithString_attributes_((ID)puVar8,pNVar6,pNVar9);
          objc_stub::beginEditing(self);
          IVar10 = objc_stub::length(local_80);
          puVar8 = &DAT_100ec1b58;
          _swift_allocObject(&DAT_100ec1b58,0x18,7);
          *(ID *)(puVar8 + 0x10) = self;
          puVar7 = &DAT_100ec1b80;
          _swift_allocObject(&DAT_100ec1b80,0x20,7);
          *(code **)(puVar7 + 0x10) = FUN_100215ee8;
          *(undefined **)(puVar7 + 0x18) = puVar8;
          local_d8 = FUN_100215f00;
          local_f8 = PTR___NSConcreteStackBlock_100ea82a0;
          local_f0 = 0x42000000;
          local_e8 = FUN_1002081f0;
          local_e0 = &DAT_100ec1b98;
          local_d0 = puVar7;
          aBlock = __Block_copy(&local_f8);
          puVar11 = local_d0;
          _swift_retain(puVar7);
          _swift_release(puVar11);
          objc_stub::enumerateAttributesInRange_options_usingBlock_(local_80,0,IVar10,0,aBlock);
          __Block_release(aBlock);
          puVar11 = puVar7;
          _swift_isEscapingClosureAtFileLocation(puVar7,"",0x85,0x10e,0x52,1);
          _swift_release(puVar7);
          if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10021540c);
            (*pcVar1)();
          }
          objc_stub::endEditing(self);
          _swift_release(puVar8);
          objc_stub::replaceCharactersInRange_withAttributedString_(IVar2,local_118,local_120,self);
        }
        IVar2 = objc_stub::textStorage(unaff_x20);
        if (IVar2 != 0) {
          objc_stub::endEditing(IVar2);
        }
        IVar2 = objc_stub::undoManager(unaff_x20);
        objc_stub::endUndoGrouping(IVar2);
        return;
      }
    }
  }
  FUN_100201b24(param_1,&local_f8);
  if (local_e0 == (undefined *)0x0) {
    lVar13 = 0;
  }
  else {
    FUN_100004640(&local_f8,local_e0);
    lVar15 = *(long *)(local_e0 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
    lVar14 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar15 + 0x10))(lVar14);
    lVar13 = lVar14;
    Swift::__bridgeAnythingToObjectiveC(lVar14,local_e0);
    (**(code **)(lVar15 + 8))(lVar14,local_e0);
    FUN_100004594(&local_f8);
  }
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"paste:",lVar13);
  _swift_unknownObjectRelease(lVar13);
  return;
}



/* Address: 0x10021540c | _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::paste: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::paste_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
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
              ("PasteUI/TextEditor.swift",0x18,1,0xe1,UVar4.unknown,puVar3);
  }
  if (param_3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  FUN_100214e78(&local_60);
  FUN_100005808(&local_60,&DAT_100fb7000,&DAT_100c36720);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100215528 | _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::initWithFrame:textContainer: */

/* Function Stack Size: 0x38 bytes */

ID _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::
   initWithFrame_textContainer_(ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_70;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.swift",0x18,1,0xcf,UVar5.unknown,puVar4);
  }
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"initWithFrame:textContainer:",param_3.field0_0x0.field0_0x0
                             );
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x100215634 | _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.swift",0x18,1,0xcf,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x10021573c | _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC7PasteUI10TextEditorP33_7FECC9BA8A88532C698309C1C512FB708TextView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_70;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/TextEditor.swift",0x18,1,0xcf,UVar5.unknown,puVar4);
  }
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x100215840 | FUN_100215840 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100215840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5)

{
  code *pcVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ID *pIVar6;
  ulong uVar7;
  ulong *puVar8;
  _StringGuts _Var9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  String SVar18;
  String SVar19;
  ID local_128;
  undefined1 auStack_120 [80];
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  uVar12 = uVar12 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar16 = 0;
  do {
    if (uVar14 == 0) {
      uVar14 = uVar12;
      if ((long)uVar12 <= lVar16 + 1) {
        uVar14 = lVar16 + 1;
      }
      lVar13 = uVar14 - 1;
      lVar15 = lVar16;
      do {
        lVar16 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100215bf0);
          (*pcVar1)();
        }
        if ((long)uVar12 <= lVar16) {
          uVar14 = 0;
          local_b0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          local_b8 = 0;
          uStack_c0 = 0;
          goto LAB_1002159f0;
        }
        uVar14 = ((ulong *)(param_1 + 0x40))[lVar16];
        lVar15 = lVar15 + 1;
      } while (uVar14 == 0);
    }
    uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 - 1 & uVar14;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar16 << 6;
    local_d0 = *(ulong *)(*(long *)(param_1 + 0x30) + uVar11 * 8);
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar11 * 0x20,&uStack_c8);
    lVar13 = lVar16;
LAB_1002159f0:
    uVar11 = local_d0;
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    uStack_88 = local_b8;
    uStack_90 = uStack_c0;
    local_80 = local_b0;
    if (local_d0 == 0) {
      _swift_release(param_1);
      return;
    }
    FUN_100011080(&uStack_98,&local_d0);
    puVar4 = &DAT_100fb7038;
    FUN_1000037f0(&DAT_100fb7038,&DAT_100c366a0);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    puVar17 = (undefined8 *)(puVar4 + 0x20);
    *puVar17 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_100ea9130;
    *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_100ea9128
    ;
    SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var9.unknown = SVar18.bridgeObject;
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar18 == SVar19) {
      _swift_bridgeObjectRelease(_Var9.unknown);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
LAB_100215af0:
      FUN_10000cbfc(&local_d0,auStack_120);
      uVar5 = 0;
      FUN_10000ec2c(0,&DAT_100fb64e8,&PTR__OBJC_CLASS___NSFont_100f8d678);
      pIVar6 = &local_128;
      _swift_dynamicCast(pIVar6,auStack_120,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar5,6);
      if (((ulong)pIVar6 & 1) == 0) goto LAB_100215b3c;
      _swift_setDeallocating(puVar4);
      uVar5 = 0;
      FUN_1001f3e68(0);
      _swift_arrayDestroy(puVar17,2,uVar5);
      IVar3 = objc_stub::fontDescriptor(local_128);
      IVar3 = objc_stub::symbolicTraits(IVar3);
      FUN_1000f3ef4(0);
      uVar11 = (ulong)((uint)IVar3 & 3);
      FUN_1000f3f6c(uVar11);
      objc_stub::addAttribute_value_range_(param_5,uVar10,uVar11,param_2,param_3);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar18.str,_Var9,(_StringComparisonResult)(__int8)SVar19.str);
      _swift_bridgeObjectRelease(_Var9.unknown);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      if (bVar2) goto LAB_100215af0;
LAB_100215b3c:
      uVar7 = uVar11;
      FUN_100215bf0(uVar11,puVar4);
      _swift_setDeallocating(puVar4);
      uVar5 = 0;
      FUN_1001f3e68(0);
      _swift_arrayDestroy(puVar17,2,uVar5);
      if ((uVar7 & 1) != 0) {
        puVar8 = &local_d0;
        FUN_100004640(puVar8,local_b8);
        Swift::__bridgeAnythingToObjectiveC();
        objc_stub::addAttribute_value_range_(param_5,uVar11,puVar8,param_2,param_3);
        _swift_unknownObjectRelease(puVar8);
      }
    }
    FUN_100004594(&local_d0);
    lVar16 = lVar13;
  } while( true );
}



/* Address: 0x100215bf0 | FUN_100215bf0 */

bool FUN_100215bf0(undefined8 param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  _StringGuts _Var3;
  long lVar4;
  String SVar5;
  String SVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  while( true ) {
    bVar1 = lVar4 != 0;
    lVar4 = lVar4 + -1;
    if (!bVar1) {
      return false;
    }
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var3.unknown = SVar5.bridgeObject;
    SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar5 == SVar6) break;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar5.str,_Var3,(_StringComparisonResult)(__int8)SVar6.str);
    _swift_bridgeObjectRelease(_Var3.unknown);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    if (bVar2) {
      return bVar1;
    }
  }
  _swift_bridgeObjectRelease(_Var3.unknown);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  return true;
}



/* Address: 0x100215cac | FUN_100215cac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100215cac(ID param_1)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  NSDictionary *pNVar4;
  long unaff_x20;
  
  self = param_1;
  FUN_100212dfc();
  IVar2 = objc_stub::length(param_1);
  if ((long)IVar2 < 1) {
    DVar3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1001f3760(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  else {
    IVar2 = objc_stub::length(param_1);
    if (SBORROW8(IVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100215df4);
      (*pcVar1)();
    }
    objc_stub::attributesAtIndex_effectiveRange_(param_1,IVar2 - 1,0);
    FUN_1001f3e68(0);
    FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_1001f3e68(0);
  FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
  pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(DVar3.unknown);
  objc_stub::setTypingAttributes_(self,pNVar4);
  objc_stub::setAttributedText_
            (*(ID *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___textView),param_1);
  return;
}



/* Address: 0x100215df4 | FUN_100215df4 */

void FUN_100215df4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100215e18 | FUN_100215e18 */

void FUN_100215e18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100214674(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100215e84 | FUN_100215e84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100215e84(void)

{
  return ZEXT816(0x100f96338);
}



/* Address: 0x100215ea4 | FUN_100215ea4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100215ea4(void)

{
  return ZEXT816(0x100f96410);
}



/* Address: 0x100215ec4 | FUN_100215ec4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100215ec4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100215ee8 | FUN_100215ee8 */

void FUN_100215ee8(void)

{
  FUN_100215840();
  return;
}



/* Address: 0x100215ef0 | FUN_100215ef0 */

void FUN_100215ef0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100215f00 | FUN_100215f00 */

void FUN_100215f00(void)

{
  FUN_1002081d0();
  return;
}



/* Address: 0x100215f08 | FUN_100215f08 */

void FUN_100215f08(long param_1,long param_2)

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



/* Address: 0x100215f1c | FUN_100215f1c */

void FUN_100215f1c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100215f24 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x100215f28 | FUN_100215f28 */

void FUN_100215f28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_100214674(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100215f94 | FUN_100215f94 */

void FUN_100215f94(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  String SVar3;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::onAttributedTextChange);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___editButtons) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___scrollView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::___lazy_storage___textView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PasteUI10TextEditor::typingAttributesObserver) = 0;
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9e730);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10021602c);
  (*pcVar2)();
}



/* Address: 0x10021602c | FUN_10021602c */

char * FUN_10021602c(void)

{
  return "typingAttributes";
}



/* Address: 0x100216038 | thunk_FUN_100213d48 */

void thunk_FUN_100213d48(void)

{
  FUN_100213d48();
  return;
}



/* Address: 0x10021603c | thunk_FUN_100213dd4 */

void thunk_FUN_100213dd4(void)

{
  FUN_100213dd4();
  return;
}



/* Address: 0x100216040 | FUN_100216040 */

void FUN_100216040(void)

{
  FUN_100213e54();
  return;
}



/* Address: 0x100216048 | FUN_100216048 */

void FUN_100216048(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100213f58(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1002160b4 | FUN_1002160b4 */

void FUN_1002160b4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002160c4 | FUN_1002160c4 */

void FUN_1002160c4(void)

{
  FUN_100213674();
  return;
}



/* Address: 0x1002160cc | thunk_FUN_100215f00 */

void thunk_FUN_100215f00(void)

{
  FUN_1002081d0();
  return;
}



/* Address: 0x1002160d0 | thunk_FUN_100215f08 */

void thunk_FUN_100215f08(long param_1,long param_2)

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



/* Address: 0x1002160d4 | thunk_FUN_100215f08 */

void thunk_FUN_100215f08(long param_1,long param_2)

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



/* Address: 0x1002160d8 | thunk_FUN_1002085e0 */

void thunk_FUN_1002085e0(void)

{
  FUN_100208024();
  return;
}



/* Address: 0x1002160e4 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1002160e8 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1002160ec | thunk_FUN_100215ef0 */

void thunk_FUN_100215ef0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002160f0 | thunk_FUN_1002160b4 */

void thunk_FUN_1002160b4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002160f4 | thunk_FUN_100215ef0 */

void thunk_FUN_100215ef0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002160f8 | thunk_FUN_1002171cc */

uint thunk_FUN_1002171cc(void)

{
  byte bVar1;
  Availability AVar2;
  UnavailableReason UVar3;
  bool bVar4;
  SystemLanguageModel *pSVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ID IVar7;
  uint uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  SystemLanguageModel *pSVar6;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar1 & 1) == 0) {
    bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xf,2,0);
    if ((bVar1 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      IVar7 = 0;
      FUN_10000ec2c(0,&DAT_100fb7120,&PTR__OBJC_CLASS___NSText_100f8da48);
      _swift_getObjCClassFromMetadata();
      IVar7 = objc_stub::instancesRespondToSelector_(IVar7,"showWritingTools:");
      uVar8 = (uint)IVar7;
    }
  }
  else {
    pSVar5 = FoundationModels::SystemLanguageModel::typeMetadataAccessor();
    pSVar5 = FoundationModels::SystemLanguageModel::get_default(pSVar5,pSVar5);
    AVar2 = FoundationModels::SystemLanguageModel::Availability::typeMetadataAccessor();
    pSVar6 = (SystemLanguageModel *)CONCAT71(extraout_var,AVar2.value);
    lVar9 = *(long *)(*(long *)(pSVar6 + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar11 = lVar9 + 0xfU & 0xfffffffffffffff0;
    puVar10 = &stack0xffffffffffffffc0 + -uVar11;
    FoundationModels::SystemLanguageModel::get_availability(pSVar5,pSVar6);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar9 = (long)puVar10 - uVar11;
    UVar3 = FoundationModels::SystemLanguageModel::Availability::UnavailableReason::
            typeMetadataAccessor();
    AVar2.value = 1;
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,UVar3.value) + -8) + 0x38))
              (lVar9,1,1,CONCAT71(extraout_var_00,UVar3.value));
    bVar4 = FoundationModels::SystemLanguageModel::Availability::___infix
                      ((Availability)(__int8)puVar10,(Availability)(__int8)lVar9,AVar2);
    uVar8 = (uint)bVar4;
    _swift_release(pSVar5);
    FUN_100217678(lVar9);
    FUN_100217678(puVar10);
  }
  return uVar8 & 1;
}



/* Address: 0x1002160fc | FUN_1002160fc */

void FUN_1002160fc(undefined8 param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            ((long)&local_50 - extraout_x8,1,1,TVar2.unknown);
  FUN_100201b24(param_1,&local_50);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100ec1d10;
  _swift_allocObject(&DAT_100ec1d10,0x40,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar3;
  *(undefined8 **)(puVar1 + 0x18) = puVar4;
  *(undefined8 *)(puVar1 + 0x28) = uStack_48;
  *(undefined8 *)(puVar1 + 0x20) = local_50;
  *(undefined8 *)(puVar1 + 0x38) = uStack_38;
  *(undefined8 *)(puVar1 + 0x30) = uStack_40;
  FUN_10020ae18(0,0,(long)&local_50 - extraout_x8,&DAT_100c36728,puVar1);
  _swift_release();
  return;
}



/* Address: 0x10021620c | FUN_10021620c */

void FUN_10021620c(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = in_x3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x38) = pMVar2;
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x40) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x48) = puVar3;
  _swift_task_switch(FUN_10021629c,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x10021629c | FUN_10021629c */

void FUN_10021629c(void)

{
  ContinuousClock CVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x50) = CVar1.unknown;
  lVar4 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x58) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100216348;
  FUN_100217028(500000000000000000,0,0,0,1);
  return;
}



/* Address: 0x100216348 | FUN_100216348 */

void FUN_100216348(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x68));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    (**(code **)(*(long *)(lVar4 + 0x58) + 8))(uVar2,*(undefined8 *)(lVar4 + 0x50));
    _swift_task_dealloc(uVar2);
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    pcVar1 = FUN_1002163c4;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    uVar3 = *(undefined8 *)(lVar4 + 0x48);
    pcVar1 = FUN_1002164e8;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1002163c4 | FUN_1002163c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002163c4(void)

{
  code *pcVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ID self;
  ulong uVar5;
  long unaff_x22;
  long lVar6;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xf,2,0);
  if ((bVar2 & 1) != 0) {
    self = *(ID *)PTR__NSApp_100ea8fa0;
    if (self == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002164e8);
      (*pcVar1)();
    }
    FUN_100201b24(*(undefined8 *)(unaff_x22 + 0x30),unaff_x22 + 0x10);
    lVar4 = *(long *)(unaff_x22 + 0x28);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      FUN_100004640(unaff_x22 + 0x10,lVar4);
      lVar6 = *(long *)(lVar4 + -8);
      uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar3);
      (**(code **)(lVar6 + 0x10))();
      uVar5 = uVar3;
      Swift::__bridgeAnythingToObjectiveC(uVar3,lVar4);
      (**(code **)(lVar6 + 8))(uVar3,lVar4);
      _swift_task_dealloc(uVar3);
      FUN_100004594(unaff_x22 + 0x10);
    }
    objc_stub::sendAction_to_from_(self,"showWritingTools:",0,uVar5);
    _swift_unknownObjectRelease(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002164e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002164e8 | FUN_1002164e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002164e8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ID self;
  ulong uVar7;
  long unaff_x22;
  long lVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar6 + 8))(uVar1,uVar5);
  _swift_task_dealloc(uVar1);
  bVar3 = Swift::_stdlib_isOSVersionAtLeast(0xf,2,0);
  if ((bVar3 & 1) != 0) {
    self = *(ID *)PTR__NSApp_100ea8fa0;
    if (self == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10021662c);
      (*pcVar2)();
    }
    FUN_100201b24(*(undefined8 *)(unaff_x22 + 0x30),unaff_x22 + 0x10);
    lVar6 = *(long *)(unaff_x22 + 0x28);
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      FUN_100004640(unaff_x22 + 0x10,lVar6);
      lVar8 = *(long *)(lVar6 + -8);
      uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar4);
      (**(code **)(lVar8 + 0x10))();
      uVar7 = uVar4;
      Swift::__bridgeAnythingToObjectiveC(uVar4,lVar6);
      (**(code **)(lVar8 + 8))(uVar4,lVar6);
      _swift_task_dealloc(uVar4);
      FUN_100004594(unaff_x22 + 0x10);
    }
    objc_stub::sendAction_to_from_(self,"showWritingTools:",0,uVar7);
    _swift_unknownObjectRelease(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x000100216624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10021662c | FUN_10021662c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021662c(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  long lVar6;
  ID IVar7;
  undefined *puVar8;
  undefined8 uVar9;
  NSString *pNVar10;
  _ArrayBuffer _Var11;
  ID self;
  MainActor *pMVar12;
  undefined8 *puVar13;
  UnownedSerialExecutor UVar14;
  UnownedSerialExecutor UVar15;
  NSArray *pNVar16;
  long lVar17;
  objc_super local_98;
  objc_super local_88;
  undefined1 auStack_78 [24];
  
  uVar2 = param_1;
  FUN_1002171cc();
  if ((uVar2 & 1) == 0) {
    IVar7 = 0;
  }
  else {
    lVar17 = 0x2e6e6f7276656863;
    puVar3 = &DAT_100ec1d38;
    _swift_allocObject(&DAT_100ec1d38,0x20,7);
    *(ulong *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    pcVar4 = (class_t *)0x0;
    FUN_100240298();
    pcVar5 = pcVar4;
    _objc_allocWithZone();
    puVar13 = (undefined8 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::symbol);
    *puVar13 = 0;
    puVar13[1] = 0;
    *(undefined1 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::hasPullDownArrow) = 0;
    *(undefined1 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::isPrimary) = 0;
    *(undefined1 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::isSelected) = 0;
    *(undefined1 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::isHovered) = 0;
    *(undefined1 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::isPressed) = 0;
    *(undefined8 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::___lazy_storage___iconView) =
         0;
    *(undefined8 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::___lazy_storage___titleLabel)
         = 0;
    FUN_10000ec2c(0,&DAT_100fb5d30,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    _swift_retain(param_2);
    lVar6 = lVar17;
    FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
    if (lVar6 == 0) {
      lVar17 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100216b48);
        (*pcVar1)();
      }
    }
    else {
      FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100216770);
        (*pcVar1)();
      }
    }
    lVar6 = _TtC7PasteUI13ToolbarButton::pullDownArrowView;
    IVar7 = NSImageView::imageViewWithImage_((ID)&_OBJC_CLASS___NSImageView,lVar17);
    if (DAT_100fb63e0 != -1) {
      _swift_once(&DAT_100fb63e0,FUN_1001feab8);
    }
    FUN_1000f65ec(DAT_1010577c8);
    *(ID *)((long)&pcVar5->isa + lVar6) = IVar7;
    lVar6 = _TtC7PasteUI13ToolbarButton::stackView;
    puVar8 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    IVar7 = objc_stub::init((ID)puVar8);
    FUN_1000f668c(0);
    objc_stub::setSpacing_(IVar7,0x4010000000000000);
    objc_stub::setDistribution_(IVar7,2);
    objc_stub::setAlignment_(IVar7,10);
    *(ID *)((long)&pcVar5->isa + lVar6) = IVar7;
    *(undefined8 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::trackingArea) = 0;
    _swift_beginAccess(puVar13,auStack_78,1,0);
    uVar9 = puVar13[1];
    *puVar13 = 0xd000000000000013;
    puVar13[1] = 0x8000000100d9e0f0;
    _swift_bridgeObjectRelease(uVar9);
    puVar13 = (undefined8 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::buttonAction);
    *puVar13 = FUN_1000386a0;
    puVar13[1] = puVar3;
    *(undefined1 *)((long)&pcVar5->isa + _TtC7PasteUI13ToolbarButton::size) = 0;
    local_88.receiver = (ID)pcVar5;
    local_88.super_class = pcVar4;
    _swift_retain(puVar3);
    IVar7 = _objc_msgSendSuper2(&local_88,"initWithFrame:",0,0,0,0);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    local_98.receiver = IVar7;
    local_98.super_class = pcVar4;
    _objc_msgSendSuper2(&local_98,"setTitle:",pNVar10);
    FUN_10023ce40(0);
    objc_stub::setTransparent_(IVar7,1);
    objc_stub::setWantsLayer_(IVar7,1);
    objc_stub::setTarget_(IVar7,IVar7);
    objc_stub::setAction_(IVar7,"performAction");
    _Var11.unknown = &DAT_100fb7040;
    FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
    _swift_initStackObject();
    *(undefined8 *)(_Var11.unknown + 0x18) = 3;
    *(undefined8 *)(_Var11.unknown + 0x10) = 1;
    self = *(ID *)(IVar7 + _TtC7PasteUI13ToolbarButton::stackView);
    *(ID *)(_Var11.unknown + 0x20) = self;
    if (((ulong)_Var11.unknown & 0xc000000000000001) != 0) {
      self = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var11);
    }
    pMVar12 = Swift::MainActor::typeMetadataAccessor();
    puVar8 = PTR_typeMetadataAccessor_100eaec10;
    pMVar12 = Swift::MainActor::get_shared(pMVar12,pMVar12);
    puVar13 = &DAT_100fb6f30;
    FUN_100003a00(&DAT_100fb6f30,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    UVar14 = Swift::Actor::get_unownedExecutor();
    UVar15 = UVar14;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar15.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar14.unknown,puVar13);
    }
    objc_stub::addSubview_(IVar7,self);
    objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(self,0);
    _swift_release(pMVar12);
    uVar9 = 0;
    FUN_10023e080(0,IVar7);
    FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
    pNVar16 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar16);
    _swift_bridgeObjectRelease(uVar9);
    _swift_setDeallocating(_Var11.unknown);
    _swift_arrayDestroy(_Var11.unknown + 0x20,*(undefined8 *)(_Var11.unknown + 0x10),
                        PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
    objc_stub::setToolTip_(IVar7,0);
    FUN_10023ce40();
    FUN_10023d784();
    _swift_release(puVar3);
  }
  return IVar7;
}



/* Address: 0x100216b48 | FUN_100216b48 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100216b48(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  NSString *pNVar4;
  NSString *pNVar5;
  long lVar6;
  code **ppcVar7;
  long extraout_x8;
  LocalizedStringResource localized;
  ID self;
  String SVar8;
  code *local_60;
  undefined *puStack_58;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1002171cc();
  self = 0;
  if (((ulong)LVar2.unknown & 1) != 0) {
    FUN_1001bf888(localized.unknown);
    SVar8 = (extension_Foundation)::Swift::String::init(localized);
    puVar3 = &_OBJC_CLASS___NSMenuItem;
    _objc_allocWithZone();
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self = objc_stub::initWithTitle_action_keyEquivalent_
                     ((ID)puVar3,pNVar4,"menuItemClicked:",pNVar5);
    objc_stub::setKeyEquivalentModifierMask_(self,0x120000);
    FUN_10000ec2c(0,&DAT_100fb5d30,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    lVar6 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d9e0f0);
    if (lVar6 == 0) {
      lVar6 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100216d88);
        (*pcVar1)();
      }
    }
    else {
      lVar6 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d9e0f0);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100216c90);
        (*pcVar1)();
      }
    }
    objc_stub::setImage_(self,lVar6);
    puVar3 = &DAT_100ec1d60;
    _swift_allocObject(&DAT_100ec1d60,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    local_60 = FUN_1000386a0;
    puStack_58 = puVar3;
    _swift_retain(param_2);
    puVar3 = &DAT_100fb70d0;
    FUN_1000037f0(&DAT_100fb70d0,&DAT_100c36738);
    ppcVar7 = &local_60;
    Swift::__bridgeAnythingNonVerbatimToObjectiveC(ppcVar7,puVar3);
    objc_stub::setRepresentedObject_(self,ppcVar7);
    _swift_unknownObjectRelease(ppcVar7);
    if (DAT_100fb70d8 != -1) {
      _swift_once(&DAT_100fb70d8,FUN_100216d88);
    }
    objc_stub::setTarget_(self,DAT_100fb70e0);
  }
  return self;
}



/* Address: 0x100216d88 | FUN_100216d88 */

void FUN_100216d88(void)

{
  ID self;
  
  self = 0;
  FUN_1002173f4();
  _objc_allocWithZone();
  DAT_100fb70e0 = objc_stub::init(self);
  return;
}



/* Address: 0x100216db0 | FUN_100216db0 */

void FUN_100216db0(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar2;
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100216e40,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100216e40 | FUN_100216e40 */

void FUN_100216e40(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x000100216e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100216e78 | _TtC7PasteUIP33_BB5EF0A85D81967F32532C69E734934622WritingToolsMenuTarget::menuItemClicked: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUIP33_BB5EF0A85D81967F32532C69E734934622WritingToolsMenuTarget::menuItemClicked_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
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
              ("PasteUI/WritingToolsUI.swift",0x1c,1,0x7e,UVar4.unknown,puVar3);
  }
  FUN_100217414(param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100216f50 | _TtC7PasteUIP33_BB5EF0A85D81967F32532C69E734934622WritingToolsMenuTarget::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUIP33_BB5EF0A85D81967F32532C69E734934622WritingToolsMenuTarget::init
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/WritingToolsUI.swift",0x1c,1,0x7b,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"init");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x100217024 | _TtC7PasteUIP33_BB5EF0A85D81967F32532C69E734934622WritingToolsMenuTarget::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUIP33_BB5EF0A85D81967F32532C69E734934622WritingToolsMenuTarget::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100217028 | FUN_100217028 */

void FUN_100217028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_1002170c4,0,0);
  return;
}



/* Address: 0x1002170c4 | FUN_1002170c4 */

void FUN_1002170c4(void)

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
  FUN_100003a00(&DAT_100fb7110,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fb7118,PTR_typeMetadataAccessor_100eaeef0,
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



/* Address: 0x1002171cc | FUN_1002171cc */

uint FUN_1002171cc(void)

{
  byte bVar1;
  Availability AVar2;
  UnavailableReason UVar3;
  bool bVar4;
  SystemLanguageModel *pSVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ID IVar7;
  uint uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  SystemLanguageModel *pSVar6;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar1 & 1) == 0) {
    bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xf,2,0);
    if ((bVar1 & 1) == 0) {
      uVar8 = 0;
    }
    else {
      IVar7 = 0;
      FUN_10000ec2c(0,&DAT_100fb7120,&PTR__OBJC_CLASS___NSText_100f8da48);
      _swift_getObjCClassFromMetadata();
      IVar7 = objc_stub::instancesRespondToSelector_(IVar7,"showWritingTools:");
      uVar8 = (uint)IVar7;
    }
  }
  else {
    pSVar5 = FoundationModels::SystemLanguageModel::typeMetadataAccessor();
    pSVar5 = FoundationModels::SystemLanguageModel::get_default(pSVar5,pSVar5);
    AVar2 = FoundationModels::SystemLanguageModel::Availability::typeMetadataAccessor();
    pSVar6 = (SystemLanguageModel *)CONCAT71(extraout_var,AVar2.value);
    lVar9 = *(long *)(*(long *)(pSVar6 + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar11 = lVar9 + 0xfU & 0xfffffffffffffff0;
    puVar10 = &stack0xffffffffffffffc0 + -uVar11;
    FoundationModels::SystemLanguageModel::get_availability(pSVar5,pSVar6);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar9 = (long)puVar10 - uVar11;
    UVar3 = FoundationModels::SystemLanguageModel::Availability::UnavailableReason::
            typeMetadataAccessor();
    AVar2.value = 1;
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,UVar3.value) + -8) + 0x38))
              (lVar9,1,1,CONCAT71(extraout_var_00,UVar3.value));
    bVar4 = FoundationModels::SystemLanguageModel::Availability::___infix
                      ((Availability)(__int8)puVar10,(Availability)(__int8)lVar9,AVar2);
    uVar8 = (uint)bVar4;
    _swift_release(pSVar5);
    FUN_100217678(lVar9);
    FUN_100217678(puVar10);
  }
  return uVar8 & 1;
}



/* Address: 0x100217324 | FUN_100217324 */

void FUN_100217324(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    FUN_100004594(unaff_x20 + 0x20);
  }
  _swift_deallocObject();
  return;
}


